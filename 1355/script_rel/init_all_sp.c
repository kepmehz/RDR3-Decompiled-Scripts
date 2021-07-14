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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	struct<2> Local_19[20];
	vector3 vLocal_60[1] = {{ 0f, 0f, 0f } };
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_18 = "";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1();
	func_3(0, 484);
	func_3(1, 1133);
	func_3(2, 15157);
	func_3(3, 15356);
	func_3(4, 15380);
	func_3(5, 26367);
	func_3(6, joaat("RE_KV_MTN_V1_PLYFINAL_LOW_02"));
	func_3(7, 27099);
	func_3(8, 27135);
	func_3(9, 27148);
	func_3(10, 27878);
	func_3(11, 32073);
	func_3(12, 32090);
	func_3(13, 35182);
	func_3(14, 35278);
	func_3(15, 35291);
	func_3(16, 35300);
	func_3(17, 35867);
	func_3(18, 40242);
	func_3(19, 40437);
	func_24(0, 40465);
	bVar0 = false;
	while (!bVar0)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (!Local_19[iVar1 /*2*/].f_1)
			{
				Call_Loc(Local_19[iVar1 /*2*/]);
				if (StackVal)
				{
					Local_19[iVar1 /*2*/].f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!vLocal_60[iVar1 /*3*/].f_1)
			{
				Stack.Push(&(vLocal_60[iVar1 /*3*/].f_2));
				Call_Loc(vLocal_60[iVar1 /*3*/]);
				if (StackVal)
				{
					vLocal_60[iVar1 /*3*/].f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
		BUILTIN::WAIT(0);
	}
	func_25();
	func_26(256);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		Local_19[iVar0 /*2*/] = 40622;
		Local_19[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		vLocal_60[iVar0 /*3*/] = 40631;
		vLocal_60[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
}

int func_2()
{
	func_29(0, joaat("CS_DUTCH"), "def_comp_brain", 1, 1);
	func_29(1, joaat("CS_JOHNMARSTON"), "def_comp_brain", 1, 0);
	func_29(2, joaat("CS_JAVIERESCUELLA"), "def_comp_brain", 1, 1);
	func_29(3, joaat("CS_BILLWILLIAMSON"), "def_comp_brain", 1, 1);
	func_29(4, joaat("CS_UNCLE"), "def_comp_brain", 0, 0);
	func_29(5, joaat("CS_HOSEAMATTHEWS"), "def_comp_brain", 1, 0);
	func_29(6, joaat("CS_MICAHBELL"), "def_comp_brain", 1, 1);
	func_29(7, joaat("CS_CHARLESSMITH"), "def_comp_brain", 1, 1);
	func_29(8, joaat("CS_SEAN"), "def_comp_brain", 1, 1);
	func_29(9, joaat("CS_LENNY"), "def_comp_brain", 1, 1);
	func_29(10, joaat("CS_KIERAN"), "def_comp_brain", 0, 0);
	func_29(11, joaat("CS_MRSADLER"), "def_comp_brain", 1, 0);
	func_29(23, joaat("CS_JOSIAHTRELAWNY"), "def_comp_brain", 0, 1);
	func_29(17, joaat("CS_MRPEARSON"), "def_comp_brain", 0, 0);
	func_29(21, joaat("CS_REVSWANSON"), "def_comp_brain", 0, 0);
	func_29(18, joaat("CS_LEOSTRAUSS"), "def_comp_brain", 0, 0);
	func_29(14, joaat("CS_JACKMARSTON"), "def_comp_brain", 0, 0);
	func_29(13, joaat("CS_ABIGAILROBERTS"), "def_comp_brain", 0, 0);
	func_29(16, joaat("CS_MOLLYOSHEA"), "def_comp_brain", 0, 0);
	func_29(19, joaat("CS_SUSANGRIMSHAW"), "def_comp_brain", 0, 0);
	func_29(15, joaat("CS_MARYBETH"), "def_comp_brain", 0, 0);
	func_29(20, joaat("CS_KAREN"), "def_comp_brain", 0, 0);
	func_29(22, joaat("CS_TILLY"), "def_comp_brain", 0, 0);
	func_29(24, joaat("CS_CLEET"), "def_comp_brain", 0, 0);
	func_29(25, joaat("CS_JOE"), "def_comp_brain", 0, 0);
	func_29(26, joaat("CS_EAGLEFLIES"), "def_comp_brain", 0, 1);
	func_29(12, joaat("A_C_DOGCATAHOULACUR_01"), "def_comp_brain", 1, 0);
	func_30(0, 0, 234527101, 234527101);
	func_30(1, 0, 234527101, 234527101);
	func_30(3, 2, 234527101, 234527101);
	func_30(2, 4, 234527101, 234527101);
	func_30(6, 5, 234527101, 234527101);
	func_30(7, 1, 234527101, 234527101);
	func_30(11, 4, 234527101, 234527101);
	func_30(5, 4, 234527101, 234527101);
	func_30(8, 0, 234527101, 234527101);
	func_30(9, 0, 234527101, 234527101);
	func_30(12, 0, 234527101, 234527101);
	if (func_31())
	{
		return 1;
	}
	return 0;
}

void func_3(int iParam0, int iParam1)
{
	Local_19[iParam0 /*2*/] = iParam1;
	Local_19[iParam0 /*2*/].f_1 = 0;
}

int func_4()
{
	if (!func_32())
	{
		func_33();
	}
	Global_1897950 = -1;
	func_34(1, joaat("VAL_BARTENDER"), 76, 0);
	func_34(2, joaat("VAL_SLUM_BARTENDER"), 76, 0);
	func_34(8, joaat("VAL_BARBER"), 76, 1048576);
	func_34(11, joaat("VAL_DOCTOR"), 76, 1048576);
	func_34(9, joaat("VAL_GUNSMITH"), 76, 1048576);
	func_34(10, joaat("VAL_GENERAL_STORE"), 76, 1048576);
	func_34(45, joaat("VAL_HORSE_SHOP_OWNER"), 76, 1048576);
	func_34(6, joaat("VAL_BUTCHER"), 76, 1048576);
	func_34(14, joaat("VAL_PIANO_PLAYER"), 76, 0);
	func_34(15, joaat("VAL_HOTEL_CLEANER"), 76, 0);
	func_34(16, joaat("VAL_HOTEL_OWNER"), 76, 0);
	func_34(3, joaat("VAL_SHERIFF"), 76, 2097152);
	func_34(4, joaat("VAL_SHERIFF_HELPER"), 76, 2097152);
	func_34(18, joaat("VAL_BLACKSMITH"), 76, 0);
	func_34(17, joaat("VAL_HANDYMAN"), 76, 0);
	func_34(7, joaat("VAL_AUCTION_BOSS"), 76, 1048576);
	func_34(20, joaat("VAL_AUCTION_HANDYMAN"), 76, 0);
	func_34(21, joaat("VAL_HANDYMANS_WIFE"), 76, 0);
	func_34(19, joaat("VAL_LIVERY"), 76, 0);
	func_34(22, joaat("VAL_HEAD_PROSTITUTE"), 76, 0);
	func_34(23, joaat("VAL_PROSTITUTE_1"), 76, 0);
	func_34(24, joaat("VAL_PROSTITUTE_2"), 76, 0);
	func_34(5, joaat("VAL_TRAIN_CLERK"), 76, 0);
	func_34(25, joaat("VAL_PRISONER_1"), 76, 0);
	func_34(26, joaat("VAL_PRISONER_2"), 76, 0);
	func_34(33, joaat("VAL_SHOW_TICKET_VENDOR"), 76, 0);
	func_34(48, joaat("VAL_TOWN_DOG_1"), 76, 0);
	func_34(49, joaat("VAL_TOWN_DOG_2"), 76, 0);
	func_34(50, joaat("VAL_TOWN_DOG_3"), 76, 0);
	func_34(51, joaat("VAL_GUARD_DOG"), 76, 0);
	func_34(27, joaat("VAL_AUCTION_HAND"), 76, 0);
	func_34(28, joaat("VAL_AUCTION_HAND_2"), 76, 0);
	func_34(29, joaat("VAL_RANCHER_1"), 76, 0);
	func_34(30, joaat("VAL_RANCHER_2"), 76, 0);
	func_34(31, joaat("VAL_DELIVERY_MAN"), 76, 0);
	func_34(32, joaat("VAL_NEWSPAPER_VENDOR"), 76, 0);
	func_34(34, joaat("VAL_SALOON_CLEANER"), 76, 0);
	func_34(35, joaat("VAL_TOWN_FARMER"), 76, 0);
	func_34(36, joaat("VAL_TOWN_WORKER_1"), 76, 0);
	func_34(37, joaat("VAL_TOWN_WORKER_2"), 76, 0);
	func_34(38, joaat("VAL_TOWN_WORKER_3"), 76, 0);
	func_34(39, joaat("VAL_TOWN_WORKER_4"), 76, 0);
	func_34(40, joaat("VAL_TOWN_WORKER_5"), 76, 0);
	func_34(41, joaat("VAL_TOWN_WORKER_6"), 76, 0);
	func_34(42, joaat("VAL_TOWN_WORKER_7"), 76, 0);
	func_34(43, joaat("VAL_TOWN_WORKER_8"), 76, 0);
	func_34(44, joaat("VAL_TOWN_WORKER_9"), 76, 0);
	func_34(0, joaat("VAL_TOWN_DRUNK"), 76, 0);
	func_34(52, joaat("VAL_LIVERY_HORSE"), 76, 0);
	func_34(12, joaat("VAL_BANK_MANAGER"), 76, 0);
	func_34(13, joaat("VAL_BANK_GUARD"), 76, 0);
	func_34(46, joaat("VAL_HORSE_RIDER_1"), 76, 0);
	func_34(47, joaat("VAL_HORSE_RIDER_2"), 76, 0);
	func_34(53, joaat("VAL_PIGS_NORTH"), 76, 0);
	func_34(54, joaat("VAL_PIGS_WEST"), 76, 0);
	func_34(55, joaat("VAL_SHEEP_1"), 76, 0);
	func_34(56, joaat("VAL_SHEEP_2"), 76, 0);
	func_34(57, joaat("VAL_SHEEP_3"), 76, 0);
	func_34(58, joaat("VAL_SHEEP_4"), 76, 0);
	func_34(59, joaat("VAL_SHEEP_5"), 76, 0);
	func_34(60, joaat("VAL_SHEEP_6"), 76, 0);
	func_34(61, joaat("VAL_SHEEP_7"), 76, 0);
	func_34(62, joaat("VAL_SHEEP_8"), 76, 0);
	func_34(63, joaat("VAL_RESIDENTIAL_SHEEP_1"), 76, 0);
	func_34(69, joaat("RHD_BARTENDER"), 105, 0);
	func_34(73, joaat("RHD_GUNSMITH"), 105, 1048576);
	func_34(74, joaat("RHD_GENERAL_STORE"), 105, 1048576);
	func_34(78, joaat("RHD_FENCE"), 105, 1048576);
	func_34(79, joaat("RHD_PIANO_PLAYER"), 105, 0);
	func_34(80, joaat("RHD_HOTEL_OWNER"), 105, 0);
	func_34(70, joaat("RHD_SHERIFF"), 105, 2097152);
	func_34(71, joaat("RHD_DEPUTY"), 105, 2097152);
	func_34(81, joaat("RHD_LIVERY_WORKER"), 105, 0);
	func_34(72, joaat("RHD_TRAIN_STAT_OWNER"), 105, 0);
	func_34(77, joaat("RHD_BUTCHER"), 105, 0);
	func_34(82, joaat("RHD_UNDERTAKER"), 105, 0);
	func_34(76, joaat("RHD_BANK_MANAGER"), 105, 0);
	func_34(75, joaat("RHD_BANK_GUARD"), 105, 0);
	func_34(127, joaat("RHD_PRISONER"), 105, 0);
	func_34(88, joaat("RHD_NEWSPAPER_VENDOR"), 105, 0);
	func_34(83, joaat("RHD_GAMBLER"), 105, 0);
	func_34(84, joaat("RHD_GOOD_TIME_GIRL_1"), 105, 0);
	func_34(85, joaat("RHD_GOOD_TIME_GIRL_2"), 105, 0);
	func_34(86, joaat("RHD_GOOD_TIME_GIRL_3"), 105, 0);
	func_34(87, joaat("RHD_GOOD_TIME_GIRL_4"), 105, 0);
	func_34(89, joaat("RHD_COTTON_CARRIER_1"), 105, 0);
	func_34(90, joaat("RHD_COTTON_CARRIER_2"), 105, 0);
	func_34(91, joaat("RHD_COTTON_LOADER_1"), 105, 0);
	func_34(92, joaat("RHD_COTTON_SUPERVISOR"), 105, 0);
	func_34(93, joaat("RHD_COTTON_SWEEPER_1"), 105, 0);
	func_34(94, joaat("RHD_COTTON_SWEEPER_2"), 105, 0);
	func_34(95, joaat("RHD_STABLE_WORKER_1"), 105, 0);
	func_34(96, joaat("RHD_STABLE_WORKER_2"), 105, 0);
	func_34(97, joaat("RHD_DELIVERY_WORKER_1"), 105, 0);
	func_34(98, joaat("RHD_DELIVERY_WORKER_2"), 105, 0);
	func_34(99, joaat("RHD_MANSION_FEMALE_1"), 105, 0);
	func_34(100, joaat("RHD_MANSION_FEMALE_2"), 105, 0);
	func_34(101, joaat("RHD_MANSION_MALE_1"), 105, 0);
	func_34(102, joaat("RHD_MANSION_MALE_2"), 105, 0);
	func_34(103, joaat("RHD_MANSION_WORKER_1"), 105, 0);
	func_34(104, joaat("RHD_MANSION_WORKER_2"), 105, 0);
	func_34(105, joaat("RHD_PARLOR_WORKER_1"), 105, 0);
	func_34(106, joaat("RHD_BLACK_SLUMS_FEMALE_1"), 105, 0);
	func_34(107, joaat("RHD_BLACK_SLUMS_FEMALE_2"), 105, 0);
	func_34(108, joaat("RHD_BLACK_SLUMS_FEMALE_3"), 105, 0);
	func_34(109, joaat("RHD_BLACK_SLUMS_FEMALE_4"), 105, 0);
	func_34(110, joaat("RHD_BLACK_SLUMS_FEMALE_5"), 105, 0);
	func_34(111, joaat("RHD_GRAYS_GANG_1"), 105, 0);
	func_34(112, joaat("RHD_GRAYS_GANG_2"), 105, 0);
	func_34(113, joaat("RHD_GRAYS_GANG_3"), 105, 0);
	func_34(114, joaat("RHD_GRAYS_GANG_4"), 105, 0);
	func_34(115, joaat("RHD_WHITE_SLUMS_1"), 105, 0);
	func_34(116, joaat("RHD_WHITE_SLUMS_2"), 105, 0);
	func_34(117, joaat("RHD_WHITE_SLUMS_3"), 105, 0);
	func_34(118, joaat("RHD_WHITE_SLUMS_4"), 105, 0);
	func_34(119, joaat("RHD_WHITE_SLUMS_5"), 105, 0);
	func_34(120, joaat("RHD_SLUMS_DRUNK_1"), 105, 0);
	func_34(121, joaat("RHD_SLUMS_DRUNK_2"), 105, 0);
	func_34(122, joaat("RHD_SLUMS_DRUNK_3"), 105, 0);
	func_34(123, joaat("RHD_SLUMS_DRUNK_4"), 105, 0);
	func_34(124, joaat("RHD_SLUMS_DRUNK_5"), 105, 0);
	func_34(125, joaat("RHD_WHITE_SLUMS_MUSICIAN"), 105, 0);
	func_34(126, joaat("RHD_LARGE_MALE_1"), 105, 0);
	func_34(128, joaat("RHD_BLACK_SLUMS_DOG"), 105, 0);
	func_34(129, joaat("RHD_MAIN_STRIP_DOG"), 105, 0);
	func_34(130, joaat("RHD_MANSION_CAT"), 105, 0);
	func_34(131, joaat("RHD_MANSION_DOG"), 105, 0);
	func_34(132, joaat("RHD_WHITE_SLUMS_CAT_1"), 105, 0);
	func_34(133, joaat("RHD_WHITE_SLUMS_CAT_2"), 105, 0);
	func_34(134, joaat("RHD_WHITE_SLUMS_DOG"), 105, 0);
	func_34(135, joaat("RHD_WHITE_SLUMS_DOG_2"), 105, 0);
	func_34(136, joaat("RHD_WHITE_SLUMS_PIG"), 105, 0);
	func_34(744, joaat("WTC_OLD_LADY"), 29, 0);
	func_34(731, joaat("APF_BROTHER"), 77, 0);
	func_34(732, joaat("APF_SISTER"), 77, 0);
	func_34(626, joaat("CGH_FARM_HAND"), 95, 0);
	func_34(627, joaat("CGH_FIELD_GUARD"), 95, 0);
	func_34(628, joaat("CGH_FIELD_GUARD_2"), 95, 0);
	func_34(629, joaat("CGH_FIELD_GUARD_3"), 95, 0);
	func_34(630, joaat("CGH_FIELD_GUARD_4"), 95, 0);
	func_34(631, joaat("CGH_GATE_GUARD"), 95, 0);
	func_34(632, joaat("CGH_GATE_GUARD_2"), 95, 0);
	func_34(633, joaat("CGH_HORSE_GUARD"), 95, 0);
	func_34(634, joaat("CGH_HORSE_GUARD_2"), 95, 0);
	func_34(635, joaat("CGH_HOUSE_GUARD"), 95, 0);
	func_34(636, joaat("CGH_HOUSE_GUARD_2"), 95, 0);
	func_34(637, joaat("CGH_HOUSE_GUARD_3"), 95, 0);
	func_34(638, joaat("CGH_HOUSE_GUARD_4"), 95, 0);
	func_34(639, joaat("CGH_MULE"), 95, 0);
	func_34(640, joaat("CGH_OX_1"), 95, 0);
	func_34(641, joaat("CGH_OX_2"), 95, 0);
	func_34(642, joaat("CLE_CLAY"), 97, 0);
	func_34(643, joaat("CLE_CLIVE"), 97, 0);
	func_34(613, joaat("BRA_STABLE_HAND"), 93, 0);
	func_34(614, joaat("BRA_STABLE_HAND_2"), 93, 0);
	func_34(617, joaat("BRA_GATE_GUARD"), 93, 0);
	func_34(618, joaat("BRA_GATE_GUARD_2"), 93, 0);
	func_34(619, joaat("BRA_GATE_GUARD_3"), 93, 0);
	func_34(620, joaat("BRA_GATE_GUARD_4"), 93, 0);
	func_34(621, joaat("BRA_MANOR_GUARD"), 93, 0);
	func_34(622, joaat("BRA_MANOR_GUARD_2"), 93, 0);
	func_34(623, joaat("BRA_MANOR_GUARD_3"), 93, 0);
	func_34(624, joaat("BRA_MANOR_GUARD_4"), 93, 0);
	func_34(625, joaat("BRA_MANOR_GUARD_5"), 93, 0);
	func_34(616, joaat("BRA_HORSES_01"), 93, 0);
	func_34(615, joaat("BRA_OXEN_PERSCHAR_1"), 93, 0);
	func_34(644, joaat("LAG_FATHER1"), 3, 0);
	func_34(645, joaat("LAG_MOTHER1"), 3, 0);
	func_34(646, joaat("LAG_MOTHER2"), 3, 0);
	func_34(647, joaat("LAG_MOTHER3"), 3, 0);
	func_34(648, joaat("LAG_F_TEEN1"), 3, 0);
	func_34(649, joaat("LAG_F_TEEN2"), 3, 0);
	func_34(656, joaat("LAG_GRANDMOTHER1"), 3, 0);
	func_34(650, joaat("LAG_FISHERMAN1"), 3, 0);
	func_34(651, joaat("LAG_FISHERMAN2"), 3, 0);
	func_34(652, joaat("LAG_FISHERMAN4"), 3, 0);
	func_34(653, joaat("LAG_DOG_1"), 3, 0);
	func_34(654, joaat("LAG_DOG_2"), 3, 0);
	func_34(655, joaat("LAG_GOAT"), 3, 0);
	func_34(657, joaat("ORA_FOREMAN"), 6, 0);
	func_34(658, joaat("ORA_GUARD"), 6, 0);
	func_34(207, joaat("SDN_ARTIST"), 5, 0);
	func_34(208, joaat("SDN_BANK_TELLER"), 5, 0);
	func_34(209, joaat("SDN_BANK_GUARD"), 5, 0);
	func_34(201, joaat("SDN_BARBER"), 5, 1048576);
	func_34(137, joaat("SDN_BARTENDER"), 5, 0);
	func_34(138, joaat("SDN_BARTENDER_SLUMS"), 5, 0);
	func_34(139, joaat("SDN_BUTCHER"), 5, 1048576);
	func_34(144, joaat("SDN_CITY_WORKER_1"), 5, 0);
	func_34(145, joaat("SDN_COM_CHURCH_WORKER_1"), 5, 0);
	func_34(146, joaat("SDN_COURTYARD_LADY_01"), 5, 0);
	func_34(147, joaat("SDN_COURTYARD_LADY_02"), 5, 0);
	func_34(148, joaat("SDN_DOCK_BOAT_GUARD_1"), 5, 0);
	func_34(149, joaat("SDN_DOCK_CASTILLE_1"), 5, 0);
	func_34(150, joaat("SDN_DOCK_CASTILLE_2"), 5, 0);
	func_34(151, joaat("SDN_DOCK_CIVIL_1"), 5, 0);
	func_34(152, joaat("SDN_DOCK_CONSTR_1"), 5, 0);
	func_34(153, joaat("SDN_DOCK_CONSTR_2"), 5, 0);
	func_34(154, joaat("SDN_DOCK_CONSTR_3"), 5, 0);
	func_34(155, joaat("SDN_DOCK_CORNWALL_1"), 5, 0);
	func_34(156, joaat("SDN_DOCK_COTTON_1"), 5, 0);
	func_34(157, joaat("SDN_DOCK_COTTON_2"), 5, 0);
	func_34(158, joaat("SDN_DOCK_COTTON_3"), 5, 0);
	func_34(159, joaat("SDN_DOCK_COTTON_4"), 5, 0);
	func_34(160, joaat("SDN_DOCK_COTTON_5"), 5, 0);
	func_34(161, joaat("SDN_DOCK_COTTON_6"), 5, 0);
	func_34(162, joaat("SDN_DOCK_COTTON_7"), 5, 0);
	func_34(163, joaat("SDN_DOCK_COTTON_8"), 5, 0);
	func_34(164, joaat("SDN_DOCK_LH_1"), 5, 0);
	func_34(165, joaat("SDN_DOCK_LH_2"), 5, 0);
	func_34(166, joaat("SDN_DOCK_LH_3"), 5, 0);
	func_34(167, joaat("SDN_DOCK_LH_CAT"), 5, 0);
	func_34(168, joaat("SDN_DOCK_LH_DOG"), 5, 0);
	func_34(169, joaat("SDN_DOCK_LUMBER_1"), 5, 0);
	func_34(170, joaat("SDN_DOCK_LUMBER_2"), 5, 0);
	func_34(171, joaat("SDN_DOCK_LUMBER_3"), 5, 0);
	func_34(172, joaat("SDN_DOCK_LUMBER_4"), 5, 0);
	func_34(173, joaat("SDN_DOCK_WORKER_1"), 5, 0);
	func_34(174, joaat("SDN_DOCK_WORKER_2"), 5, 0);
	func_34(175, joaat("SDN_DOCK_WORKER_3"), 5, 0);
	func_34(176, joaat("SDN_DOCK_WORKER_4"), 5, 0);
	func_34(140, joaat("SDN_DOCTOR"), 5, 1048576);
	func_34(177, joaat("SDN_FARMER_01"), 5, 0);
	func_34(178, joaat("SDN_FARMER_DOG_01"), 5, 0);
	func_34(210, joaat("SDN_CHICKEN_1"), 5, 0);
	func_34(211, joaat("SDN_ROOSTER_1"), 5, 0);
	func_34(212, joaat("SDN_GOAT_1"), 5, 0);
	func_34(213, joaat("SDN_GOAT_2"), 5, 0);
	func_34(215, joaat("SDN_COW_1"), 5, 0);
	func_34(216, joaat("SDN_COW_2"), 5, 0);
	func_34(217, joaat("SDN_BULL_2"), 5, 0);
	func_34(218, joaat("SDN_COW_3"), 5, 0);
	func_34(214, joaat("SDN_HORSE_1"), 5, 0);
	func_34(255, joaat("SDN_PIG_2"), 5, 0);
	func_34(179, joaat("SDN_FARMER_WIFE_01"), 5, 0);
	func_34(180, joaat("SDN_FARMER_WIFE_02"), 5, 0);
	func_34(181, joaat("SDN_FARMER_WIFE_03"), 5, 0);
	func_34(182, joaat("SDN_FARMER_WIFE_04"), 5, 0);
	func_34(183, joaat("SDN_FARMHAND_01"), 5, 0);
	func_34(184, joaat("SDN_FARMHAND_02"), 5, 0);
	func_34(185, joaat("SDN_FARMHAND_03A"), 5, 0);
	func_34(186, joaat("SDN_FARMHAND_03B"), 5, 0);
	func_34(187, joaat("SDN_FARMHAND_04"), 5, 0);
	func_34(188, joaat("SDN_FARMHAND_05"), 5, 0);
	func_34(189, joaat("SDN_RURAL_BLACKSMITH"), 5, 0);
	func_34(190, joaat("SDN_RURAL_HOUSE_LADY_1"), 5, 0);
	func_34(191, joaat("SDN_RURAL_HOUSE_LADY_2"), 5, 0);
	func_34(192, joaat("SDN_RURAL_SLUMS_DOG_1"), 5, 0);
	func_34(193, joaat("SDN_RURAL_SLUMS_DOG_2"), 5, 0);
	func_34(194, joaat("SDN_RURAL_SLUMS_MAN_1"), 5, 0);
	func_34(195, joaat("SDN_RURAL_SLUMS_MAN_2"), 5, 0);
	func_34(196, joaat("SDN_RURAL_SLUMS_WOMAN_1"), 5, 0);
	func_34(197, joaat("SDN_RURAL_SLUMS_WOMAN_2"), 5, 0);
	func_34(198, joaat("SDN_FLOWER_ENTHUSIAST"), 5, 0);
	func_34(199, joaat("SDN_FLOWER_ENTHUSIAST_2"), 5, 0);
	func_34(200, joaat("SDN_GEN_STORE_OWNER"), 5, 1048576);
	func_34(219, joaat("SDN_GEN_STORE_SHADY"), 5, 1048576);
	func_34(220, joaat("SDN_GROUNDS_KEEPER_1"), 5, 0);
	func_34(221, joaat("SDN_GROUNDS_KEEPER_2"), 5, 0);
	func_34(222, joaat("SDN_GROUNDS_KEEPER_3"), 5, 0);
	func_34(223, joaat("SDN_GROUNDS_KEEPER_4"), 5, 0);
	func_34(224, joaat("SDN_GROUNDS_KEEPER_5"), 5, 0);
	func_34(202, joaat("SDN_GUNSMITH"), 5, 1048576);
	func_34(203, joaat("SDN_HOMEOWNER_01"), 5, 0);
	func_34(204, joaat("SDN_HOMEOWNER_02"), 5, 0);
	func_34(205, joaat("SDN_HORSE_SHOP_OWNER"), 5, 1048576);
	func_34(206, joaat("SDN_HOTEL_CARETAKER"), 5, 0);
	func_34(225, joaat("SDN_IND_CASTILLE_1"), 5, 0);
	func_34(226, joaat("SDN_IND_CASTILLE_2"), 5, 0);
	func_34(227, joaat("SDN_IND_CASTILLE_3"), 5, 0);
	func_34(228, joaat("SDN_IND_CASTILLE_4"), 5, 0);
	func_34(229, joaat("SDN_IND_CASTILLE_5"), 5, 0);
	func_34(230, joaat("SDN_IND_CASTILLE_6"), 5, 0);
	func_34(233, joaat("SDN_IND_COURTYARD_1"), 5, 0);
	func_34(234, joaat("SDN_IND_LAMBERT_1"), 5, 0);
	func_34(235, joaat("SDN_IND_LAMBERT_2"), 5, 0);
	func_34(236, joaat("SDN_IND_LAMBERT_3"), 5, 0);
	func_34(237, joaat("SDN_IND_LAMBERT_4"), 5, 0);
	func_34(238, joaat("SDN_IND_LAMBERT_5"), 5, 0);
	func_34(231, joaat("SDN_IND_CASTILLE_DOG"), 5, 0);
	func_34(232, joaat("SDN_IND_CASTILLE_DOG_2"), 5, 0);
	func_34(239, joaat("SDN_IND_LANIK_1"), 5, 0);
	func_34(240, joaat("SDN_IND_LANIK_2"), 5, 0);
	func_34(241, joaat("SDN_MARKET_VENDOR1"), 5, 0);
	func_34(242, joaat("SDN_FRENCHMARKET_VENDOR_1"), 5, 0);
	func_34(243, joaat("SDN_FRENCHMARKET_VENDOR_2"), 5, 0);
	func_34(245, joaat("SDN_FRENCHMARKET_FEMALE_1"), 5, 0);
	func_34(244, joaat("SDN_FRENCHMARKET_MALE_1"), 5, 0);
	func_34(246, joaat("SDN_FRENCHMARKET_WORKER_1"), 5, 0);
	func_34(247, joaat("SDN_FRENCHMARKET_WORKER_2"), 5, 0);
	func_34(248, joaat("SDN_SLUMSMARKET_FEMALE_1"), 5, 0);
	func_34(249, joaat("SDN_MARKET_WORKER_1"), 5, 0);
	func_34(250, joaat("SDN_MUSICIAN"), 5, 0);
	func_34(251, joaat("SDN_NEWSPAPER_VENDOR"), 5, 0);
	func_34(252, joaat("SDN_PARK_CARETAKER_1"), 5, 0);
	func_34(253, joaat("SDN_PARK_CARETAKER_2"), 5, 0);
	func_34(254, joaat("SDN_PARK_CARETAKER_3"), 5, 0);
	func_34(256, joaat("SDN_POLICE_CHIEF"), 5, 0);
	func_34(265, joaat("SDN_PARK_POLICE"), 5, 0);
	func_34(266, joaat("SDN_PARK_POLICE_2"), 5, 0);
	func_34(257, joaat("SDN_COM_POLICE_1"), 5, 0);
	func_34(258, joaat("SDN_COM_POLICE_2"), 5, 0);
	func_34(259, joaat("SDN_COM_POLICE_3"), 5, 0);
	func_34(260, joaat("SDN_DOCK_POLICE_1"), 5, 0);
	func_34(261, joaat("SDN_DOCK_POLICE_2"), 5, 0);
	func_34(262, joaat("SDN_FRENCH_POLICE_1"), 5, 0);
	func_34(263, joaat("SDN_FRENCH_POLICE_2"), 5, 0);
	func_34(264, joaat("SDN_FRENCH_POLICE_3"), 5, 0);
	func_34(267, joaat("SDN_GARDEN_POLICE_1"), 5, 0);
	func_34(268, joaat("SDN_GARDEN_POLICE_2"), 5, 0);
	func_34(269, joaat("SDN_GARDEN_POLICE_3"), 5, 0);
	func_34(270, joaat("SDN_GARDEN_POLICE_4"), 5, 0);
	func_34(271, joaat("SDN_GARDEN_POLICE_5"), 5, 0);
	func_34(272, joaat("SDN_GARDEN_POLICE_6"), 5, 0);
	func_34(273, joaat("SDN_GARDEN_POLICE_7"), 5, 0);
	func_34(274, joaat("SDN_GARDEN_POLICE_8"), 5, 0);
	func_34(275, joaat("SDN_GARDEN_POLICE_9"), 5, 0);
	func_34(276, joaat("SDN_GARDEN_POLICE_10"), 5, 0);
	func_34(277, joaat("SDN_GARDEN_CAT"), 5, 0);
	func_34(278, joaat("SDN_GARDEN_DOG"), 5, 0);
	func_34(279, joaat("SDN_GARDEN_DRINKER_1"), 5, 0);
	func_34(280, joaat("SDN_GARDEN_DRINKER_2"), 5, 0);
	func_34(143, joaat("SDN_PHOTOGRAPHER"), 5, 0);
	func_34(281, joaat("SDN_PRISONER_1"), 5, 0);
	func_34(282, joaat("SDN_PRISONER_2"), 5, 0);
	func_34(283, joaat("SDN_SHOW_TICKET_VENDOR"), 5, 1048576);
	func_34(284, joaat("SDN_SHOW_TICKET_VENDOR_2"), 5, 1048576);
	func_34(142, joaat("SDN_TAILOR"), 5, 1048576);
	func_34(305, joaat("SDN_TOURIST_MALE_1"), 5, 0);
	func_34(306, joaat("SDN_TOURIST_FEMALE_1"), 5, 0);
	func_34(141, joaat("SDN_TRAINSTATIONWORKER"), 5, 0);
	func_34(285, joaat("SDN_WAGON_DELIVERY_1"), 5, 0);
	func_34(286, joaat("SDN_WAGON_DELIVERY_2"), 5, 0);
	func_34(322, joaat("SDN_FRENCH_COURTYARD_DOG"), 5, 0);
	func_34(316, joaat("SDN_FRENCH_RAKER"), 5, 0);
	func_34(317, joaat("SDN_FRENCH_SALOON_1"), 5, 0);
	func_34(318, joaat("SDN_FRENCH_SALOON_2"), 5, 0);
	func_34(319, joaat("SDN_FRENCH_SALOON_3"), 5, 0);
	func_34(320, joaat("SDN_FRENCH_PROSTITUTE_1"), 5, 0);
	func_34(321, joaat("SDN_FRENCH_TRUMPET_MALE_1"), 5, 0);
	func_34(323, joaat("SDN_FRENCH_LOWERCLASS_WOMAN"), 5, 0);
	func_34(324, joaat("SDN_FRENCH_SWEEPER"), 5, 0);
	func_34(287, joaat("SDN_SLUMS_SALOON_1"), 5, 0);
	func_34(288, joaat("SDN_SLUMS_SALOON_2"), 5, 0);
	func_34(289, joaat("SDN_SLUMS_SALOON_PIANO"), 5, 0);
	func_34(298, joaat("SDN_SLUMS_PROSTITUTE_1"), 5, 0);
	func_34(299, joaat("SDN_SOUP_KITCHEN_1"), 5, 0);
	func_34(300, joaat("SDN_SOUP_KITCHEN_2"), 5, 0);
	func_34(301, joaat("SDN_SOUP_KITCHEN_3"), 5, 0);
	func_34(302, joaat("SDN_SOUP_KITCHEN_4"), 5, 0);
	func_34(303, joaat("SDN_SOUP_KITCHEN_5"), 5, 0);
	func_34(304, joaat("SDN_SOUP_KITCHEN_6"), 5, 0);
	func_34(290, joaat("SDN_SLUMS_MALE_RES_1"), 5, 0);
	func_34(291, joaat("SDN_SLUMS_MALE_RES_2"), 5, 0);
	func_34(292, joaat("SDN_SLUMS_MALE_RES_3"), 5, 0);
	func_34(293, joaat("SDN_SLUMS_FEMALE_RES_1"), 5, 0);
	func_34(294, joaat("SDN_SLUMS_FEMALE_RES_2"), 5, 0);
	func_34(295, joaat("SDN_SLUMS_SHADY"), 5, 0);
	func_34(296, joaat("SDN_SLUMS_FISHERMAN"), 5, 0);
	func_34(297, joaat("SDN_SLUMS_ARTIST"), 5, 0);
	func_34(307, joaat("SDN_CEMETERY_KEEPER"), 5, 0);
	func_34(308, joaat("SDN_CHURCH_KEEPER"), 5, 0);
	func_34(309, joaat("SDN_SLUMS_PIG_1"), 5, 0);
	func_34(310, joaat("SDN_SLUMS_PIG_2"), 5, 0);
	func_34(311, joaat("SDN_SLUMS_DOG_1"), 5, 0);
	func_34(312, joaat("SDN_SLUMS_DOG_2"), 5, 0);
	func_34(313, joaat("SDN_SLUMS_DOG_3"), 5, 0);
	func_34(314, joaat("SDN_SLUMS_DOG_4"), 5, 0);
	func_34(315, joaat("SDN_SLUMS_DOG_5"), 5, 0);
	func_34(334, joaat("SIS_BRIDGE_GUARD"), 32, 0);
	func_34(335, joaat("SIS_BRIDGE_GUARD_2"), 32, 0);
	func_34(325, joaat("SIS_COURTYARD_GUARD"), 32, 0);
	func_34(326, joaat("SIS_COURTYARD_GUARD_2"), 32, 0);
	func_34(327, joaat("SIS_COURTYARD_GUARD_3"), 32, 0);
	func_34(328, joaat("SIS_COURTYARD_GUARD_4"), 32, 0);
	func_34(336, joaat("SIS_DOCKS_GUARD"), 32, 0);
	func_34(337, joaat("SIS_FIELD_GUARD"), 32, 0);
	func_34(338, joaat("SIS_FIELD_GUARD_2"), 32, 0);
	func_34(339, joaat("SIS_FIELD_GUARD_3"), 32, 0);
	func_34(340, joaat("SIS_FIELD_GUARD_4"), 32, 0);
	func_34(329, joaat("SIS_GATE_GUARD"), 32, 0);
	func_34(330, joaat("SIS_GATE_GUARD_2"), 32, 0);
	func_34(331, joaat("SIS_GATE_GUARD_3"), 32, 0);
	func_34(332, joaat("SIS_GATE_GUARD_4"), 32, 0);
	func_34(333, joaat("SIS_GATE_GUARD_5"), 32, 0);
	func_34(341, joaat("SIS_WALL_GUARD"), 32, 0);
	func_34(342, joaat("SIS_WALL_GUARD_2"), 32, 0);
	func_34(343, joaat("SIS_WALL_GUARD_3"), 32, 0);
	func_34(344, joaat("SIS_WALL_GUARD_4"), 32, 0);
	func_34(345, joaat("TBL_HOMEOWNER_MALE_RESIDENT"), 115, 0);
	func_34(351, joaat("TBL_BARTENDER"), 115, 0);
	func_34(352, joaat("TBL_BUTCHER"), 115, 0);
	func_34(346, joaat("TBL_HOMEOWNER_FEMALE_RESIDENT"), 115, 0);
	func_34(347, joaat("TBL_HORSE_SHOP_OWNER"), 115, 0);
	func_34(375, joaat("TBL_RANCHER"), 115, 0);
	func_34(372, joaat("TBL_RANCH_HORSES"), 115, 0);
	func_34(373, joaat("TBL_RANCH_WORKER_1"), 115, 0);
	func_34(374, joaat("TBL_RANCH_WORKER_2"), 115, 0);
	func_34(348, joaat("TBL_SHERRIF"), 115, 2097152);
	func_34(367, joaat("TBL_SALOON_PATRON_1"), 115, 0);
	func_34(368, joaat("TBL_SALOON_PATRON_2"), 115, 0);
	func_34(369, joaat("TBL_SALOON_PATRON_3"), 115, 0);
	func_34(370, joaat("TBL_SALOON_WORKER_1"), 115, 0);
	func_34(371, joaat("TBL_SALOON_WORKER_2"), 115, 0);
	func_34(349, joaat("TBL_SHERRIF_DEPUTY"), 115, 0);
	func_34(350, joaat("TBL_SHERRIF_DEPUTY_3"), 115, 0);
	func_34(353, joaat("TBL_GENERAL_STORE_OWNER"), 115, 0);
	func_34(366, joaat("TBL_SCAVENGER"), 115, 0);
	func_34(354, joaat("TBL_PIANO_PLAYER"), 115, 0);
	func_34(355, joaat("TBL_DOG_1"), 115, 0);
	func_34(356, joaat("TBL_DOG_2"), 115, 0);
	func_34(357, joaat("TBL_RESIDENTS_DOG"), 115, 0);
	func_34(358, joaat("TBL_RANCH_DOG"), 115, 0);
	func_34(359, joaat("TBL_PRISONER_1"), 115, 0);
	func_34(360, joaat("TBL_PRISONER_2"), 115, 0);
	func_34(361, joaat("TBL_PRISONER_3"), 115, 0);
	func_34(362, joaat("TBL_PRISONER_4"), 115, 0);
	func_34(363, joaat("TBL_PRISONER_5"), 115, 0);
	func_34(364, joaat("TBL_PRISONER_6"), 115, 0);
	func_34(365, joaat("TBL_GUNSMITH_OWNER"), 115, 0);
	func_34(376, joaat("TWR_RANCH_GUARD"), 125, 0);
	func_34(377, joaat("TWR_RANCH_GUARD_2"), 125, 0);
	func_34(378, joaat("TWR_RANCH_GUARD_3"), 125, 0);
	func_34(379, joaat("TWR_RANCH_GUARD_4"), 125, 0);
	func_34(507, joaat("BEN_TRAINSTATIONWORKER"), 117, 0);
	func_34(791, joaat("RID_HORSES_PERSCHAR_1"), 124, 0);
	func_34(792, joaat("RID_HORSES_PERSCHAR_2"), 124, 0);
	func_34(793, joaat("RID_HORSESHOP_DOG"), 124, 0);
	func_34(380, joaat("LEV_DOG"), 61, 0);
	func_34(381, joaat("LEV_GOAT"), 61, 0);
	func_34(589, joaat("EMR_FATHER"), 69, 0);
	func_34(591, joaat("EMR_GARDENER"), 69, 0);
	func_34(592, joaat("EMR_GARDENER2"), 69, 0);
	func_34(593, joaat("EMR_HANDYMAN"), 69, 0);
	func_34(598, joaat("EMR_SON1"), 69, 0);
	func_34(602, joaat("EMR_CAT"), 69, 0);
	func_34(603, joaat("EMR_CAT_2"), 69, 0);
	func_34(604, joaat("EMR_CHICKENS_PERSCHAR_1"), 69, 0);
	func_34(605, joaat("EMR_COWS_PERSCHAR_1"), 69, 0);
	func_34(609, joaat("EMR_GOATS_PERSCHAR_1"), 69, 0);
	func_34(610, joaat("EMR_HORSES_PERSCHAR_1"), 69, 0);
	func_34(611, joaat("EMR_OX_PERSCHAR_1"), 69, 0);
	func_34(612, joaat("EMR_ROOSTER_PERSCHAR_1"), 69, 0);
	func_34(599, joaat("EMR_SHEEP_PERSCHAR_1"), 69, 0);
	func_34(600, joaat("EMR_SHEEP_PERSCHAR_2"), 69, 0);
	func_34(601, joaat("EMR_SHEEP_PERSCHAR_3"), 69, 0);
	func_34(606, joaat("EMR_DOG"), 69, 0);
	func_34(607, joaat("EMR_DOG_02"), 69, 0);
	func_34(608, joaat("EMR_DOG_03"), 69, 0);
	func_34(594, joaat("EMR_FARMHAND1"), 69, 0);
	func_34(595, joaat("EMR_FARMHAND2"), 69, 0);
	func_34(596, joaat("EMR_FARMHAND3"), 69, 0);
	func_34(597, joaat("EMR_FARMHAND4"), 69, 0);
	func_34(590, joaat("EMR_TRAINSTATIONWORKER"), 69, 0);
	func_34(554, joaat("DOR_THOMASDOWN"), 68, 32);
	func_34(555, joaat("DOR_EDITHDOWN"), 68, 32);
	func_34(556, joaat("DOR_ARCHIEDOWN"), 68, 32);
	func_34(557, joaat("DOR_RANCHHAND"), 68, 0);
	func_34(565, joaat("DOR_HUSBAND"), 68, 0);
	func_34(560, joaat("DOWNS_RANCH_PIGS_PERSCHAR_1"), 68, 0);
	func_34(561, joaat("DOWNS_RANCH_GOATS_PERSCHAR_1"), 68, 0);
	func_34(562, joaat("DOWNS_RANCH_OX_PERSCHAR_1"), 68, 0);
	func_34(563, joaat("DOR_FRIENDLY_DOG"), 68, 0);
	func_34(564, joaat("DOR_GUARD_DOG"), 68, 0);
	func_34(558, joaat("DOWNS_RANCH_DEMO_COWS"), 68, 32);
	func_34(559, joaat("DOWNS_RANCH_DEMO_COWS_2"), 68, 32);
	func_34(691, joaat("OFW_OFFICER1"), 35, 0);
	func_34(692, joaat("OFW_OFFICER2"), 35, 0);
	func_34(693, joaat("OFW_OFFICER3"), 35, 0);
	func_34(696, joaat("OFW_ENLISTED1"), 35, 0);
	func_34(697, joaat("OFW_ENLISTED2"), 35, 0);
	func_34(698, joaat("OFW_ENLISTED3"), 35, 0);
	func_34(699, joaat("OFW_ENLISTED4"), 35, 0);
	func_34(700, joaat("OFW_ENLISTED5"), 35, 0);
	func_34(694, joaat("OFW_DOG"), 35, 0);
	func_34(695, joaat("OFW_DOG_2"), 35, 0);
	func_34(701, joaat("WAP_SHOPKEEPER"), 56, 1048576);
	func_34(704, joaat("WAP_HEADBRAVE"), 56, 0);
	func_34(703, joaat("WAP_OFFICIAL"), 56, 0);
	func_34(705, joaat("WAP_SIOUXCHEF"), 56, 0);
	func_34(702, joaat("WAP_MEDICINEMAN"), 56, 0);
	func_34(706, joaat("WAP_HORSE_1"), 56, 0);
	func_34(707, joaat("WAP_HORSE_2"), 56, 0);
	func_34(708, joaat("WAP_HORSE_3"), 56, 0);
	func_34(659, joaat("BUT_CONSTRUCTION_DRUNK_1"), 82, 0);
	func_34(660, joaat("BUT_CONSTRUCTION_DRUNK_2"), 82, 0);
	func_34(665, joaat("BUT_SHAMAN"), 82, 32);
	func_34(674, joaat("BUT_CHICKENS_PERSCHAR_1"), 82, 0);
	func_34(675, joaat("BUT_CHICKENS_PERSCHAR_2"), 82, 0);
	func_34(676, joaat("BUT_CHICKENS_PERSCHAR_3"), 82, 0);
	func_34(677, joaat("BUT_CHICKENS_PERSCHAR_4"), 82, 0);
	func_34(678, joaat("BUT_CHICKENS_PERSCHAR_5"), 82, 0);
	func_34(661, joaat("BUT_FISHERMAN"), 82, 0);
	func_34(662, joaat("BUT_FISHERMAN_FRIEND"), 82, 0);
	func_34(679, joaat("BUT_GOATS_PERSCHAR_1"), 82, 0);
	func_34(680, joaat("BUT_GOATS_PERSCHAR_2"), 82, 0);
	func_34(681, joaat("BUT_GOATS_PERSCHAR_3"), 82, 0);
	func_34(682, joaat("BUT_RESIDENT_DOG_1"), 82, 0);
	func_34(683, joaat("BUT_RESIDENT_DOG_2"), 82, 0);
	func_34(684, joaat("BUT_OX_PERSCHAR_1"), 82, 0);
	func_34(685, joaat("BUT_PIGS_PERSCHAR_1"), 82, 0);
	func_34(686, joaat("BUT_ROAMING_PIG"), 82, 0);
	func_34(663, joaat("BUT_RESIDENT_FATHER"), 82, 0);
	func_34(664, joaat("BUT_RESIDENT_MOTHER"), 82, 0);
	func_34(666, joaat("BUT_RESIDENT_SON"), 82, 0);
	func_34(687, joaat("BUT_ROOSTER_PERSCHAR_1"), 82, 0);
	func_34(688, joaat("BUT_ROOSTER_PERSCHAR_2"), 82, 0);
	func_34(667, joaat("BUT_SHACK_MAID_1"), 82, 0);
	func_34(668, joaat("BUT_SHACK_MAID_2"), 82, 0);
	func_34(689, joaat("BUT_SOLITARY_FARMER"), 82, 0);
	func_34(690, joaat("BUT_SOLITARY_DOG"), 82, 0);
	func_34(669, joaat("BUT_SUPPLY_SHACK_CIV_1"), 82, 0);
	func_34(670, joaat("BUT_SUPPLY_SHACK_CIV_2"), 82, 0);
	func_34(671, joaat("BUT_SUPPLY_SHACK_CIV_3"), 82, 0);
	func_34(672, joaat("BUT_RESIDENT_MALE_1"), 82, 0);
	func_34(673, joaat("BUT_RESIDENT_MALE_2"), 82, 0);
	func_34(474, joaat("STR_GENERAL_STORE"), 26, 1048576);
	func_34(472, joaat("STR_SHERIFF"), 26, 2097152);
	func_34(473, joaat("STR_SHERIFF_DEPUTY"), 26, 2097152);
	func_34(476, joaat("STR_FREIGHT_CLERK"), 26, 0);
	func_34(483, joaat("STR_MAYOR"), 26, 32);
	func_34(477, joaat("STR_NEWSPAPER_VENDOR"), 26, 0);
	func_34(487, joaat("STR_CONSTRUCTION_1"), 26, 0);
	func_34(488, joaat("STR_CONSTRUCTION_2"), 26, 0);
	func_34(489, joaat("STR_CONSTRUCTION_3"), 26, 0);
	func_34(492, joaat("STR_WELCOME_CENTER_CLERK"), 26, 0);
	func_34(490, joaat("STR_CONSTR_WIFE_1"), 26, 32);
	func_34(491, joaat("STR_CONSTR_WIFE_2"), 26, 32);
	func_34(501, joaat("STR_TOWN_CAT"), 26, 0);
	func_34(502, joaat("STR_TOWN_DOG"), 26, 0);
	func_34(497, joaat("STR_TOURIST_MALE_1"), 26, 0);
	func_34(498, joaat("STR_TOURIST_MALE_2"), 26, 0);
	func_34(485, joaat("STR_WOOD_CHOPPER_1"), 26, 0);
	func_34(486, joaat("STR_WOOD_CHOP_WIFE"), 26, 0);
	func_34(481, joaat("STR_BLACKSMITH"), 26, 0);
	func_34(480, joaat("STR_HORSESHOP_RANCHHAND"), 26, 0);
	func_34(484, joaat("STR_RANCHER"), 26, 0);
	func_34(475, joaat("STR_FISHERMAN"), 26, 0);
	func_34(482, joaat("STR_PERSCHAR_HORSES"), 26, 0);
	func_34(494, joaat("STR_TOWN_WORKER_1"), 26, 0);
	func_34(495, joaat("STR_TOWN_WORKER_2"), 26, 0);
	func_34(496, joaat("STR_TOWN_WORKER_3"), 26, 0);
	func_34(493, joaat("STR_LAZY_WORKER"), 26, 0);
	func_34(499, joaat("STR_PRISONER_01"), 26, 0);
	func_34(500, joaat("STR_PRISONER_02"), 26, 0);
	func_34(478, joaat("STR_BUTCHER"), 26, 0);
	func_34(479, joaat("STR_HORSE_SHOP_OWNER"), 26, 0);
	func_34(709, joaat("PHR_DAVID_GEDDES"), -1, 0);
	func_34(710, joaat("PHR_TOM_DICKENS"), -1, 0);
	func_34(711, joaat("PHR_MRS_GEDDES"), -1, 0);
	func_34(714, joaat("PHR_ABE"), -1, 0);
	func_34(712, joaat("PHR_ANGUS_GEDDES"), -1, 0);
	func_34(713, joaat("PHR_DUNCAN_GEDDES"), -1, 0);
	func_34(719, joaat("PHR_RANCH_HAND1"), 22, 0);
	func_34(720, joaat("PHR_RANCH_HAND2"), 22, 0);
	func_34(721, joaat("PHR_RANCH_HAND3"), 22, 0);
	func_34(722, joaat("PHR_RANCH_HAND4"), 22, 0);
	func_34(723, joaat("PHR_RANCH_HAND5"), 22, 0);
	func_34(715, joaat("PHR_DOG"), 22, 0);
	func_34(716, joaat("PHR_COWS_1"), 22, 0);
	func_34(717, joaat("PHR_HORSES_1"), 22, 0);
	func_34(718, joaat("PHR_OXEN_1"), 22, 0);
	func_34(724, joaat("MAP_DOG_1"), 110, 0);
	func_34(725, joaat("MAP_ARTIST"), 110, 0);
	func_34(726, joaat("MAP_ARTIST_WIFE"), 110, 0);
	func_34(727, joaat("MAP_BLACKSMITH"), 110, 0);
	func_34(728, joaat("MAP_BLACKSMITH_WIFE"), 110, 0);
	func_34(729, joaat("MAP_WORKER"), 110, 0);
	func_34(730, joaat("MAP_WORKER_WIFE"), 110, 0);
	func_34(566, joaat("CKT_WORKER"), 65, 0);
	func_34(567, joaat("CKT_WORKER_2"), 65, 0);
	func_34(568, joaat("HTL_FOREMAN"), 65, 0);
	func_34(569, joaat("CKT_FOREMAN_2"), 65, 0);
	func_34(572, joaat("CKT_GUARD_1"), 65, 0);
	func_34(573, joaat("CKT_GUARD_2"), 65, 0);
	func_34(574, joaat("CKT_GUARD_3"), 65, 0);
	func_34(575, joaat("CKT_GUARD_4"), 65, 0);
	func_34(576, joaat("CKT_GUARD_5"), 65, 0);
	func_34(577, joaat("CKT_GUARD_6"), 65, 0);
	func_34(578, joaat("CKT_GUARD_7"), 65, 0);
	func_34(579, joaat("CKT_GUARD_8"), 65, 0);
	func_34(580, joaat("CKT_GUARD_9"), 65, 0);
	func_34(581, joaat("CKT_GUARD_10"), 65, 0);
	func_34(582, joaat("CKT_GUARD_11"), 65, 0);
	func_34(583, joaat("CKT_GUARD_12"), 65, 0);
	func_34(584, joaat("CKT_GUARD_13"), 65, 0);
	func_34(585, joaat("CKT_GUARD_14"), 65, 0);
	func_34(586, joaat("CKT_GUARD_15"), 65, 0);
	func_34(587, joaat("CKT_GUARD_16"), 65, 0);
	func_34(588, joaat("CKT_GUARD_17"), 65, 0);
	func_34(570, joaat("CKT_DOG"), 65, 0);
	func_34(571, joaat("CKT_DOG_2"), 65, 0);
	func_34(443, joaat("VHT_BARTENDER"), 92, 0);
	func_34(444, joaat("VHT_EXOTIC_STORE"), 92, 1048576);
	func_34(471, joaat("VHT_MUSICIAN"), 92, 0);
	func_34(446, joaat("VHT_TOWN_RESIDENT_1"), 92, 0);
	func_34(447, joaat("VHT_TOWN_RESIDENT_2"), 92, 0);
	func_34(448, joaat("VHT_TOWN_RESIDENT_3"), 92, 0);
	func_34(449, joaat("VHT_RESIDENTS_GUARD_DOG"), 92, 0);
	func_34(450, joaat("VHT_SALOON_PATRON_1"), 92, 0);
	func_34(451, joaat("VHT_SALOON_PATRON_2"), 92, 0);
	func_34(452, joaat("VHT_SALOON_PATRON_3"), 92, 0);
	func_34(453, joaat("VHT_SALOON_PATRON_4"), 92, 0);
	func_34(445, joaat("VHT_HARMONICA_PLAYER"), 92, 0);
	func_34(454, joaat("VHT_SCAVENGER"), 92, 0);
	func_34(459, joaat("VHT_HORSE_SHOP_OWNER"), 92, 0);
	func_34(460, joaat("VHT_HORSE_SHOP_DOG"), 92, 0);
	func_34(455, joaat("VHT_SQUATTER_1"), 92, 0);
	func_34(456, joaat("VHT_SQUATTER_2"), 92, 0);
	func_34(457, joaat("VHT_SQUATTER_3"), 92, 0);
	func_34(458, joaat("VHT_SQUATTER_4"), 92, 0);
	func_34(461, joaat("VHT_SQUATTER_DOG"), 92, 0);
	func_34(462, joaat("VHT_TOWN_DOG_1"), 92, 0);
	func_34(463, joaat("VHT_GEN_GUARD_DOG"), 92, 0);
	func_34(465, joaat("VHT_TOWN_GRIEFER"), 92, 0);
	func_34(464, joaat("VHT_TOWN_DRUNK"), 92, 0);
	func_34(466, joaat("VHT_PROSTITUTE_1"), 92, 0);
	func_34(467, joaat("VHT_PROSTITUTE_2"), 92, 0);
	func_34(468, joaat("VHT_HORSE_1"), 92, 0);
	func_34(469, joaat("VHT_GOAT_1"), 92, 0);
	func_34(470, joaat("VHT_STATION_CLERK"), 92, 0);
	func_34(741, joaat("CFJ_FATHER"), 96, 0);
	func_34(743, joaat("CFJ_SON"), 96, 0);
	func_34(742, joaat("CFJ_SON_OLDER"), 96, 0);
	func_34(513, joaat("BLW_GENERAL_STORE"), 38, 1048576);
	func_34(516, joaat("BLW_HORSE_SHOP_OWNER"), 38, 1048576);
	func_34(517, joaat("BLW_HORSES"), 38, 0);
	func_34(521, joaat("BLW_TAILOR"), 38, 1048576);
	func_34(529, joaat("BLW_BARBER"), 38, 1048576);
	func_34(532, joaat("BLW_BUTCHER"), 38, 1048576);
	func_34(522, joaat("BLW_TRAIN_WORKER"), 38, 0);
	func_34(524, joaat("BLW_NEWSPAPER"), 38, 0);
	func_34(514, joaat("BLW_PHOTOGRAPHER"), 38, 0);
	func_34(515, joaat("BLW_PIANO_PLAYER"), 38, 0);
	func_34(509, joaat("BLW_POLICE_CHIEF"), 38, 0);
	func_34(510, joaat("BLW_POLICE_DEPUTY"), 38, 0);
	func_34(511, joaat("BLW_PRISONER_01"), 38, 0);
	func_34(512, joaat("BLW_PRISONER_02"), 38, 0);
	func_34(519, joaat("BLW_BANK_CLERK"), 38, 0);
	func_34(520, joaat("BLW_BANK_GUARD"), 38, 0);
	func_34(508, joaat("BLW_BARTENDER"), 38, 0);
	func_34(525, joaat("BLW_TICKET_VENDOR"), 38, 0);
	func_34(526, joaat("BLW_LIVERY_WORKER"), 38, 0);
	func_34(527, joaat("BLW_LIVERY_WORKER_02"), 38, 0);
	func_34(528, joaat("BLW_LIVERY_WORKER_02_WIFE"), 38, 0);
	func_34(530, joaat("BLW_BLACKSMITH"), 38, 0);
	func_34(531, joaat("BLW_BLACKSMITH_DOG"), 38, 0);
	func_34(533, joaat("BLW_CARRIAGE_HOUSE"), 38, 0);
	func_34(518, joaat("BLW_COWS"), 38, 0);
	func_34(534, joaat("BLW_CHEF"), 38, 0);
	func_34(535, joaat("BLW_CONSTRUCTION_01"), 38, 0);
	func_34(536, joaat("BLW_CONSTRUCTION_02"), 38, 0);
	func_34(537, joaat("BLW_CONSTRUCTION_03"), 38, 0);
	func_34(538, joaat("BLW_CONSTRUCTION_04"), 38, 0);
	func_34(539, joaat("BLW_CONSTRUCTION_ASSISTANT"), 38, 0);
	func_34(540, joaat("BLW_CONSTRUCTION_BOSS"), 38, 0);
	func_34(541, joaat("BLW_CONSTRUCTION_FOREMAN_1"), 38, 0);
	func_34(542, joaat("BLW_CONSTRUCTION_FOREMAN_2"), 38, 0);
	func_34(543, joaat("BLW_GROCERY_FARMER"), 38, 0);
	func_34(544, joaat("BLW_HANDYMAN_1"), 38, 0);
	func_34(545, joaat("BLW_HANDYMAN_2"), 38, 0);
	func_34(546, joaat("BLW_HOMEOWNER_1"), 38, 0);
	func_34(547, joaat("BLW_HOMEOWNER_2"), 38, 0);
	func_34(548, joaat("BLW_SLUM_01"), 38, 0);
	func_34(549, joaat("BLW_SLUM_WIFE_01"), 38, 0);
	func_34(550, joaat("BLW_TENT_CHEF"), 38, 0);
	func_34(551, joaat("BLW_TENT_CHEF_WIFE"), 38, 0);
	func_34(523, joaat("BLW_CHICKENS_01"), 38, 0);
	func_34(552, joaat("BLW_WAGON_DELIVERY_1"), 38, 0);
	func_34(553, joaat("BLW_WAGON_DELIVERY_2"), 38, 0);
	func_34(432, joaat("AMD_BARTENDER"), 120, 0);
	func_34(433, joaat("AMD_BAR_PATRON"), 120, 0);
	func_34(434, joaat("AMD_GENERAL_STORE"), 120, 0);
	func_34(435, joaat("AMD_UNDERTAKER"), 120, 0);
	func_34(436, joaat("AMD_UNDERTAKER_HELPER_1"), 120, 0);
	func_34(437, joaat("AMD_CORPSE_WAGON_DRIVER"), 120, 0);
	func_34(434, joaat("AMD_GENERAL_STORE"), 120, 0);
	func_34(438, joaat("AMD_CHICKENS_1"), 120, 0);
	func_34(439, joaat("AMD_DOG_1"), 120, 0);
	func_34(440, joaat("AMD_DOG_2"), 120, 0);
	func_34(441, joaat("AMD_HORSES_1"), 120, 0);
	func_34(442, joaat("AMD_PIGS_1"), 120, 0);
	func_34(385, joaat("ASB_GUNSMITH"), 78, 1048576);
	func_34(382, joaat("ASB_SHERIFF"), 78, 2097152);
	func_34(383, joaat("ASB_DEPUTY"), 78, 2097152);
	func_34(386, joaat("ASB_NEWSPAPER_VENDOR"), 78, 0);
	func_34(430, joaat("ASB_PRISONER_01"), 78, 0);
	func_34(431, joaat("ASB_PRISONER_02"), 78, 0);
	func_34(387, joaat("ASB_GUARD_01"), 78, 0);
	func_34(388, joaat("ASB_GUARD_02"), 78, 0);
	func_34(389, joaat("ASB_GUARD_03"), 78, 0);
	func_34(390, joaat("ASB_GUARD_04"), 78, 0);
	func_34(391, joaat("ASB_GUARD_05"), 78, 0);
	func_34(392, joaat("ASB_GUARD_06"), 78, 0);
	func_34(393, joaat("ASB_GUARD_07"), 78, 0);
	func_34(394, joaat("ASB_HORSES_01"), 78, 0);
	func_34(401, joaat("ASB_LUMBER_WORKER_01"), 78, 0);
	func_34(402, joaat("ASB_LUMBER_WORKER_02"), 78, 0);
	func_34(403, joaat("ASB_LUMBER_WORKER_03"), 78, 0);
	func_34(395, joaat("ASB_PLANT_WORKER_01"), 78, 0);
	func_34(396, joaat("ASB_PLANT_WORKER_02"), 78, 0);
	func_34(397, joaat("ASB_PLANT_WORKER_03"), 78, 0);
	func_34(398, joaat("ASB_PLANT_WORKER_04"), 78, 0);
	func_34(399, joaat("ASB_PLANT_WORKER_05"), 78, 0);
	func_34(400, joaat("ASB_PLANT_WORKER_06"), 78, 0);
	func_34(404, joaat("ASB_MINE_WORKER_01"), 78, 0);
	func_34(405, joaat("ASB_MINE_WORKER_02"), 78, 0);
	func_34(406, joaat("ASB_MINE_WORKER_03"), 78, 0);
	func_34(407, joaat("ASB_MINE_WORKER_04"), 78, 0);
	func_34(408, joaat("ASB_MINE_WORKER_05"), 78, 0);
	func_34(409, joaat("ASB_MINE_WORKER_06"), 78, 0);
	func_34(410, joaat("ASB_MINE_WORKER_07"), 78, 0);
	func_34(411, joaat("ASB_MINE_WORKER_08"), 78, 0);
	func_34(412, joaat("ASB_MINE_WORKER_09"), 78, 0);
	func_34(413, joaat("ASB_MINE_WORKER_10"), 78, 0);
	func_34(414, joaat("ASB_MINE_WORKER_11"), 78, 0);
	func_34(415, joaat("ASB_MINE_WORKER_12"), 78, 0);
	func_34(416, joaat("ASB_WORKER_WIFE_01"), 78, 0);
	func_34(417, joaat("ASB_WORKER_WIFE_02"), 78, 0);
	func_34(418, joaat("ASB_WORKER_WIFE_03"), 78, 0);
	func_34(419, joaat("ASB_WORKER_WIFE_04"), 78, 0);
	func_34(420, joaat("ASB_WORKER_WIFE_05"), 78, 0);
	func_34(421, joaat("ASB_WORKER_WIFE_06"), 78, 0);
	func_34(422, joaat("ASB_WORKER_WIFE_07"), 78, 0);
	func_34(423, joaat("ASB_WORKER_WIFE_08"), 78, 0);
	func_34(424, joaat("ASB_WORKER_WIFE_09"), 78, 0);
	func_34(425, joaat("ASB_WORKER_WIFE_10"), 78, 0);
	func_34(426, joaat("ASB_WORKER_WIFE_11"), 78, 0);
	func_34(427, joaat("ASB_WORKER_WIFE_12"), 78, 0);
	func_34(428, joaat("ASB_WORKER_WIFE_13"), 78, 0);
	func_34(429, joaat("ASB_WORKER_WIFE_14"), 78, 0);
	func_34(384, joaat("ASB_TRAINSTATIONWORKER"), 78, 0);
	func_34(768, joaat("MLH_COWS_PERSCHAR_1"), 86, 0);
	func_34(769, joaat("MLH_COWS_PERSCHAR_2"), 86, 0);
	func_34(770, joaat("MLH_COWS_PERSCHAR_3"), 86, 0);
	func_34(771, joaat("MLH_PIGS_PERSCHAR_1"), 86, 0);
	func_34(772, joaat("MLH_GUARD_DOG"), 86, 0);
	func_34(773, joaat("MFR_CAT"), 126, 0);
	func_34(774, joaat("MFR_CHICKENS_PERSCHAR_1"), 126, 0);
	func_34(775, joaat("MFR_CHICKENS_PERSCHAR_2"), 126, 0);
	func_34(776, joaat("MFR_DOG_PERSCHAR_1"), 126, 0);
	func_34(777, joaat("MFR_DOG_PERSCHAR_2"), 126, 0);
	func_34(778, joaat("MFR_ROOSTERS_PERSCHAR_1"), 126, 0);
	func_34(779, joaat("MFR_ROOSTERS_PERSCHAR_2"), 126, 0);
	func_34(780, joaat("PAI_RANCHHAND_02"), 21, 0);
	func_34(782, joaat("PAI_COWS"), 21, 0);
	func_34(781, joaat("PAI_DOG"), 21, 0);
	func_34(764, joaat("LNS_TENANT_1"), 102, 0);
	func_34(765, joaat("LNS_TENANT_2"), 102, 0);
	func_34(766, joaat("LNS_TENANT_3"), 102, 0);
	func_34(767, joaat("LNS_TENANT_4"), 102, 0);
	func_34(745, joaat("CRO_RANCHER"), 66, 0);
	func_34(746, joaat("CRO_RANCH_HAND"), 66, 0);
	func_34(747, joaat("CRO_FRIENDLY_DOG"), 66, 0);
	func_34(748, joaat("CRO_GUARD_DOG"), 66, 0);
	func_34(749, joaat("CRO_MULE"), 66, 0);
	func_34(750, joaat("CRO_OX_1"), 66, 0);
	func_34(751, joaat("GRH_RANCH_HAND"), 70, 0);
	func_34(754, joaat("GRH_CHICKENS"), 70, 0);
	func_34(752, joaat("GRH_ROOSTER"), 70, 0);
	func_34(753, joaat("GRH_PIGS"), 70, 0);
	func_34(755, joaat("DAI_BULL"), 100, 0);
	func_34(760, joaat("DAI_RANCHER"), 100, 0);
	func_34(761, joaat("DAI_RANCH_HAND"), 100, 0);
	func_34(762, joaat("DAI_GUARD_DOG"), 100, 0);
	func_34(756, joaat("DAI_COWS_PERSCHAR_1"), 100, 0);
	func_34(757, joaat("DAI_COWS_PERSCHAR_2"), 100, 0);
	func_34(758, joaat("DAI_COWS_PERSCHAR_3"), 100, 0);
	func_34(759, joaat("DAI_DONKEY"), 100, 0);
	func_34(763, joaat("DAI_SICK_COW"), 100, 0);
	func_34(794, joaat("CHE_FATHER"), 42, 0);
	func_34(795, joaat("CHE_DAUGHTER"), 42, 0);
	func_34(796, joaat("CHE_SON_01"), 42, 0);
	func_34(797, joaat("CHE_SON_02"), 42, 0);
	func_34(798, joaat("CHE_SON_03"), 42, 0);
	func_34(733, joaat("LAR_TENANT_01"), 72, 0);
	func_34(735, joaat("LAR_DOG"), 72, 0);
	func_34(734, joaat("LARNED_SOD_GOAT_PERSCHAR_1"), 72, 0);
	func_34(736, joaat("CRD_CHICKENS_1"), 64, 0);
	func_34(737, joaat("CRD_DOG"), 64, 0);
	func_34(740, joaat("CRD_TENANT_02"), 64, 32);
	func_34(783, joaat("RKF_RANCHER"), 116, 0);
	func_34(784, joaat("RKF_RANCH_HAND"), 116, 0);
	func_34(790, joaat("RKF_GOATS_PERSCHAR"), 116, 0);
	func_34(789, joaat("RKF_CHICKENS_PERSCHAR"), 116, 0);
	func_34(785, joaat("RKF_DOG_1"), 116, 0);
	func_34(786, joaat("RKF_DOG_2"), 116, 0);
	func_34(787, joaat("RKF_DOG_3"), 116, 0);
	func_34(788, joaat("RKF_DOG_4"), 116, 0);
	func_34(799, joaat("RKS_TENANT"), 89, 0);
	func_34(800, joaat("RKS_DOG"), 89, 0);
	func_34(801, joaat("RGS_POSTMASTER"), 23, 0);
	func_34(802, joaat("WAL_TRAIN_CLERK"), 28, 0);
	func_34(803, joaat("WAL_GENSHOPKEEPER"), 28, 0);
	func_34(503, joaat("HEARTLANDS_SWANSON_STATION_PIGS_1"), 75, 0);
	func_34(505, joaat("SWA_CARETAKER"), 75, 0);
	func_34(506, joaat("SWA_CARETAKER_2"), 75, 0);
	func_34(504, joaat("SWA_DOG"), 75, 0);
	func_34(804, joaat("SCM_HORSE_SHOP_OWNER"), 101, 0);
	func_34(805, joaat("SCM_PERSCHAR_HORSES"), 101, 0);
	func_34(806, joaat("SCM_HORSE_SHOP_RANCHHAND"), 101, 0);
	func_34(807, joaat("EA_LCMP_FOREMAN"), 11, 0);
	func_34(810, joaat("EA_LCMP_CHOPPER_1"), 11, 0);
	func_34(811, joaat("EA_LCMP_CHOPPER_2"), 11, 0);
	func_34(812, joaat("EA_LCMP_CHOPPER_3"), 11, 0);
	func_34(813, joaat("EA_LCMP_CHOPPER_4"), 11, 0);
	func_34(814, joaat("EA_LCMP_WORKER_01"), 11, 0);
	func_34(815, joaat("EA_LCMP_WORKER_02"), 11, 0);
	func_34(816, joaat("EA_LCMP_WORKER_03"), 11, 0);
	func_34(817, joaat("EA_LCMP_WORKER_04"), 11, 0);
	func_34(818, joaat("EA_LCMP_WORKER_05"), 11, 0);
	func_34(819, joaat("EA_LCMP_WORKER_06"), 11, 0);
	func_34(820, joaat("EA_LCMP_WORKER_07"), 11, 0);
	func_34(821, joaat("EA_LCMP_WORKER_08"), 11, 0);
	func_34(822, joaat("EA_LCMP_WORKER_09"), 11, 0);
	func_34(823, joaat("EA_LCMP_WORKER_10"), 11, 0);
	func_34(824, joaat("EA_LCMP_WORKER_11"), 11, 0);
	func_34(825, joaat("EA_LCMP_WORKER_12"), 11, 0);
	func_34(826, joaat("EA_LCMP_WORKER_13"), 11, 0);
	func_34(827, joaat("EA_LCMP_WORKER_14"), 11, 0);
	func_34(828, joaat("EA_LCMP_WORKER_15"), 11, 0);
	func_34(829, joaat("EA_LCMP_WORKER_16"), 11, 0);
	func_34(830, joaat("EA_LCMP_WORKER_17"), 11, 0);
	func_34(831, joaat("EA_LCMP_WORKER_18"), 11, 0);
	func_34(832, joaat("EA_LCMP_WORKER_19"), 11, 0);
	func_34(833, joaat("EA_LCMP_WORKER_20"), 11, 0);
	func_34(808, joaat("EA_LCMP_DOG"), 11, 0);
	func_34(809, joaat("EA_LCMP_DOG_2"), 11, 0);
	func_34(64, joaat("EA_HMSTD_FOREMAN"), 76, 4194304);
	func_34(65, joaat("EA_HMSTD_WORKER_1"), 76, 4194304);
	func_34(66, joaat("EA_HMSTD_WORKER_2"), 76, 4194304);
	func_34(67, joaat("EA_HMSTD_MAN"), 76, 4194304);
	func_34(68, joaat("EA_HMSTD_WOMAN"), 76, 4194304);
	func_34(858, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	func_34(859, joaat("CRD_BULL"), -1, 256);
	func_34(860, joaat("CRD_DONKEY"), -1, 256);
	func_34(834, joaat("EA_RCAMP_FOREMAN"), 128, 0);
	func_34(835, joaat("EA_RCAMP_GUARD_01"), 128, 0);
	func_34(836, joaat("EA_RCAMP_GUARD_02"), 128, 0);
	func_34(837, joaat("EA_RCAMP_GUARD_03"), 128, 0);
	func_34(838, joaat("EA_RCAMP_WORKER_01"), 128, 0);
	func_34(839, joaat("EA_RCAMP_WORKER_02"), 128, 0);
	func_34(840, joaat("EA_RCAMP_WORKER_03"), 128, 0);
	func_34(841, joaat("EA_RCAMP_WORKER_04"), 128, 0);
	func_34(842, joaat("EA_RCAMP_WORKER_05"), 128, 0);
	func_34(843, joaat("EA_RCAMP_WORKER_06"), 128, 0);
	func_34(844, joaat("EA_RCAMP_WORKER_07"), 128, 0);
	func_34(845, joaat("EA_RCAMP_WORKER_08"), 128, 0);
	func_34(846, joaat("EA_RCAMP_WORKER_09"), 128, 0);
	func_34(847, joaat("EA_RCAMP_WORKER_10"), 128, 0);
	func_34(848, joaat("EA_RCAMP_WORKER_11"), 128, 0);
	func_34(849, joaat("EA_RCAMP_WORKER_12"), 128, 0);
	func_34(850, joaat("EA_RCAMP_WORKER_13"), 128, 0);
	func_34(851, joaat("EA_RCAMP_WORKER_14"), 128, 0);
	func_34(852, joaat("EA_RCAMP_WORKER_15"), 128, 0);
	func_34(853, joaat("EA_RCAMP_WORKER_16"), 128, 0);
	func_34(854, joaat("EA_RCAMP_WORKER_17"), 128, 0);
	func_34(855, joaat("EA_RCAMP_WORKER_18"), 128, 0);
	func_34(856, joaat("EA_RCAMP_WORKER_19"), 128, 0);
	func_34(857, joaat("EA_RCAMP_WORKER_20"), 128, 0);
	func_34(875, joaat("GAP_COUGAR_1"), -1, 256);
	func_34(876, joaat("GAP_GOAT_1"), -1, 256);
	func_34(878, joaat("GREAT_PLAINS_BUFFALO_HERD_PERSCHAR_1"), -1, 256);
	func_34(877, joaat("GRT_BLW_OUTSKIRTS_1"), -1, 256);
	func_34(865, joaat("GRIZZLIES_RAVEN"), -1, 256);
	func_34(861, joaat("GRIZZLIES_BEAR_01"), -1, 256);
	func_34(862, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	func_34(863, joaat("CRD_BULL"), -1, 256);
	func_34(864, joaat("CRD_DONKEY"), -1, 256);
	func_34(868, joaat("HEARTLANDS_BUFFALO_HERD_PERSCHAR_1"), -1, 256);
	func_34(873, joaat("HRT_CRO_RANCH_HAND_2"), -1, 256);
	func_34(874, joaat("HRT_CRO_RANCH_HAND_3"), -1, 256);
	func_34(866, joaat("HEARTLANDS_DEER_HERD_PERSCHAR_1"), -1, 256);
	func_34(867, joaat("HEARTLANDS_PRONGHORN_HERD_PERSCHAR_1"), -1, 256);
	func_34(869, joaat("HRT_CRD_TENANT_01"), -1, 256);
	func_34(870, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	func_34(871, joaat("CRD_BULL"), -1, 256);
	func_34(872, joaat("CRD_DONKEY"), -1, 256);
	func_34(879, joaat("BGV_COUGAR_1"), -1, 256);
	func_34(883, joaat("BGV_DELIVERY_1"), -1, 256);
	func_34(884, joaat("BGV_DELIVERY_2"), -1, 256);
	func_34(881, joaat("BIG_VALLEY_DEER_HERD_PERSCHAR_1"), -1, 256);
	func_34(882, joaat("BIG_VALLEY_BEAR_PERSCHAR_1"), -1, 256);
	func_34(880, joaat("BGV_WOLVES_1"), -1, 256);
	func_34(885, joaat("BGV_PAI_RANCHHAND_01"), -1, 288);
	func_34(888, joaat("CHO_COUGAR_1"), -1, 256);
	func_34(889, joaat("CHO_RID_HORSESHOP_OWNER"), -1, 256);
	func_34(890, joaat("CHO_RID_HORSESHOP_WIFE"), -1, 256);
	func_34(891, joaat("CHO_RID_HORSESHOP_RANCHHAND_1"), -1, 256);
	func_34(892, joaat("CHO_RID_HORSESHOP_RANCHHAND_2"), -1, 256);
	func_34(886, joaat("TBL_DELIVERY_RESIDENT"), -1, 256);
	func_34(887, joaat("TBL_DELIVERY_RESIDENT_2"), -1, 256);
	func_34(901, joaat("RIO_COUGAR_1"), -1, 256);
	func_34(904, joaat("ROA_COAL_DELIVERY1"), -1, 256);
	func_34(905, joaat("ROA_MLH_RANCHHAND"), -1, 256);
	func_34(906, joaat("ROA_MLH_RANCHHAND_2"), -1, 256);
	func_34(893, joaat("MFR_HORSES_PERSCHAR_1"), -1, 256);
	func_34(894, joaat("MFR_COWS_PERSCHAR_2"), -1, 256);
	func_34(900, joaat("HEN_MFR_RANCHER"), -1, 256);
	func_34(895, joaat("HEN_MFR_RANCH_HAND"), -1, 256);
	func_34(896, joaat("HEN_MFR_RANCH_HAND_2"), -1, 256);
	func_34(897, joaat("HEN_MFR_RANCH_HAND_3"), -1, 256);
	func_34(898, joaat("HEN_MFR_RANCH_HAND_4"), -1, 256);
	func_34(899, joaat("HEN_MFR_BLACKSMITH"), -1, 256);
	func_34(908, joaat("SCM_WHITE_SLUMS_1"), -1, 256);
	func_34(909, joaat("SCM_BRA_FIELD_GUARD"), -1, 256);
	func_34(910, joaat("SCM_BRA_FIELD_GUARD_2"), -1, 256);
	func_34(911, joaat("SCM_BRA_FIELD_GUARD_3"), -1, 256);
	func_34(912, joaat("SCM_BRA_FIELD_GUARD_4"), -1, 256);
	func_34(913, joaat("SCM_BRA_FIELD_GUARD_5"), -1, 256);
	func_34(914, joaat("SCM_BRA_FIELD_GUARD_6"), -1, 256);
	func_34(915, joaat("SCM_BRA_HORSE_GUARD"), -1, 256);
	func_34(916, joaat("SCM_BRA_HORSE_GUARD_2"), -1, 256);
	func_34(917, joaat("SCM_BRA_HORSE_GUARD_3"), -1, 256);
	func_34(918, joaat("SCM_CALIGA_GUARD_1"), -1, 256);
	func_34(919, joaat("SCM_CALIGA_GUARD_2"), -1, 256);
	func_34(920, joaat("SCM_HORSE_SHOP_OWNER"), -1, 1048576);
	func_34(921, joaat("SCM_LOVE_TRIANGLE_OX"), -1, 256);
	func_34(922, joaat("SCM_DAI_RANCHHAND_1"), -1, 256);
	func_34(923, joaat("SCM_DAI_RANCHHAND_2"), -1, 256);
	func_34(907, joaat("SCM_PANTHER_1"), -1, 256);
	func_34(924, joaat("TAL_BEAR_1"), -1, 256);
	func_34(925, joaat("TAL_COUGAR_1"), -1, 256);
	func_34(926, joaat("TAL_WOLVES_1"), -1, 256);
	func_34(927, joaat("BAYOU_PANTHER_PERSCHAR_1"), -1, 256);
	func_34(928, joaat("LAG_FATHER2"), -1, 256);
	func_34(929, joaat("LAG_M_TEEN1"), -1, 256);
	func_34(930, joaat("LAG_M_TEEN2"), -1, 256);
	func_34(931, joaat("LAG_GRANDFATHER1"), -1, 256);
	func_34(932, joaat("GLO_BLW_WAGON_DELIVERY_3"), -1, 512);
	func_34(933, joaat("GLO_RHD_SDN_DRIVER_1"), -1, 512);
	func_34(934, joaat("GLO_RHD_SDN_DRIVER_2"), -1, 512);
	func_34(935, joaat("GLO_COAL_DELIVERY3"), -1, 512);
	func_34(936, joaat("GLO_DAIRY_DELIVERY1"), -1, 512);
	func_34(937, joaat("GLO_DAIRY_DELIVERY3"), -1, 512);
	func_34(938, joaat("GLO_LUMBER_DELIVERY1"), -1, 544);
	func_34(939, joaat("GLO_LUMBER_DELIVERY2"), -1, 544);
	func_34(940, joaat("GLO_LUMBER_DELIVERY3"), -1, 544);
	func_34(941, joaat("GLO_OIL_DELIVERY1"), -1, 512);
	func_34(942, joaat("GLO_OIL_DELIVERY_VAL"), -1, 544);
	func_34(943, joaat("GLO_OIL_DELIVERY2"), -1, 512);
	func_34(944, joaat("GLO_OIL_DELIVERY3"), -1, 512);
	func_34(945, joaat("GLO_ORANGE_DELIVERY1"), -1, 512);
	func_34(946, joaat("GLO_ORANGE_DELIVERY2"), -1, 512);
	func_34(947, joaat("GLO_ORANGE_DELIVERY3"), -1, 512);
	func_34(948, joaat("GLO_TIMBER_DELIVERY1"), -1, 544);
	func_34(949, joaat("GLO_TIMBER_DELIVERY2"), -1, 544);
	func_34(950, joaat("GLO_TIMBER_DELIVERY3_PART1"), -1, 544);
	func_34(951, joaat("GLO_TIMBER_DELIVERY3_PART2"), -1, 544);
	func_34(952, joaat("GLO_WILDERNESS_TRAPPER"), -1, 512);
	return 1;
}

int func_5()
{
	int iVar0;

	Global_1879534.f_7300 = 32;
	func_35();
	func_36();
	func_37();
	func_38();
	func_39();
	func_40();
	func_41();
	func_42();
	func_43();
	func_44();
	func_45();
	func_46();
	func_47();
	func_48();
	func_49();
	func_50();
	func_51();
	func_52();
	func_53();
	func_54();
	func_55();
	func_56();
	func_57();
	func_58();
	func_59();
	func_60();
	func_61();
	func_62();
	func_63();
	func_64();
	func_65();
	func_66();
	func_67();
	iVar0 = Global_1879534.f_7300;
	iVar0 = Global_1879534.f_7300;
	while (iVar0 <= (32 - 1))
	{
		func_68(iVar0);
		iVar0++;
	}
	func_26(1024);
	return 1;
}

int func_6()
{
	func_69();
	func_70();
	func_26(2048);
	return 1;
}

int func_7()
{
	VOLUME::_0x748C5F51A18CB8F0(0);
	func_71(0, 0, "ABIGAIL11", "RABI1", "rcm_abigail11", -1, -146.9627f, -15.7764f, 95.2415f, 0, joaat("BLIP_SCM_ABIGAIL"), 262151, 100f);
	func_71(3, 3, "BANDP10", "RBNP10", "rcm_beau_and_penelope10", -1, 1736.427f, -1375.109f, 42.9164f, 0, joaat("BLIP_SCM_GRAYS"), 67240067, 200f);
	func_71(4, 3, "BANDP11", "RBNP11", "rcm_beau_and_penelope11", 5, 1790.746f, -1311.754f, 43.1925f, joaat("CS_BEAUGRAY"), joaat("BLIP_SCM_BEAU"), 1310737, 120f);
	func_71(5, 3, "BANDP12", "RBNP12", "rcm_beau_and_penelope12", -1, 1863.698f, -1349.39f, 41.2784f, 0, joaat("BLIP_SCM_BEAU"), 262149, 250f);
	func_71(21, 18, "BRAT01", "RBRT0", "rcm_braithwaites01", -1, 660.1356f, -1257.437f, 44.0746f, 0, joaat("BLIP_SCM_ABIGAIL"), 67239943, 120f);
	func_71(37, 23, "COACHROBBERY1", "RCHRB", "rcm_coach_robbery1", -1, 675.0945f, -1217.237f, 44.386f, 0, joaat("BLIP_SCM_TRELAWNEY"), 262151, 120f);
	func_71(58, 33, "DOCTORSOPINION1", "RDOPN", "rcm_doctors_opinion1", -1, 2802.581f, -1177.624f, 45.9451f, 0, 0, 134480023, 85f);
	func_71(59, 34, "DOWN1", "RDOWN1", "rcm_down1", 60, -171.1026f, -25.1129f, 94.9136f, 0, joaat("BLIP_SCM_STRAUSS"), 67, 120f);
	func_71(60, 34, "DOWNA", "RDOWNA", "rcm_down1_2", -1, -171.1026f, -25.1129f, 94.9136f, 0, joaat("BLIP_SCM_STRAUSS"), 12529, 150f);
	func_71(61, 34, "DOWN2", "RDOWN2", "rcm_down2", -1, -135.48f, -33.46f, 95.08f, 0, joaat("BLIP_AMBIENT_TITHING"), 97, 60f);
	func_71(62, 34, "DOWN3", "RDOWN3", "rcm_down3", -1, -815.8262f, 343.8745f, 99.3458f, 0, joaat("BLIP_SCM_STRAUSS"), 262341, 120f);
	func_71(63, 35, "DUSTER21", "RDST2", "rcm_dusters21", -1, -138.2931f, -13.8407f, 95.3376f, 0, joaat("BLIP_SCM_KIERAN"), 262215, 120f);
	func_71(64, 36, "DUSTER61", "RDST61", "rcm_dusters61", -1, 2362.525f, 1308.025f, 111.6106f, 0, joaat("BLIP_SCM_SADIE"), 67108931, 90f);
	func_71(65, 36, "DUSTER62", "RDST62", "rcm_dusters62", -1, -2110.199f, 660.5305f, 119.8892f, 0, joaat("BLIP_SCM_SADIE"), 1310725, 100f);
	func_71(66, 37, "DUTCH11", "RDTC1", "rcm_dutch11", -1, -129.8283f, -32.11561f, 94.94459f, 0, joaat("BLIP_MISSION_DUTCH"), 262215, 150f);
	func_71(67, 38, "DUTCH21", "RDTC2", "rcm_dutch21", -1, 672.7785f, -1246.157f, 42.9398f, 0, joaat("BLIP_MISSION_DUTCH"), 296039, 1112014848 /* Float: 50f */);
	func_71(68, 39, "DUTCH31", "RDCH3", "rcm_dutch31", -1, 2247.695f, -798.5478f, 43.1559f, 0, joaat("BLIP_MISSION_DUTCH"), 262151, 130f);
	func_71(76, 42, "EXCONFED11", "RXCF1", "rcm_exconfed11", -1, 677.1235f, -1288.551f, 42.4063f, 0, joaat("BLIP_SCM_LENNY"), 262151, 120f);
	func_71(82, 45, "GANG01", "RGNG01", "rcm_gang01", -1, 3009.262f, 477.1921f, 40.8607f, 0, 0, 132323, 1112014848 /* Float: 50f */);
	func_71(83, 45, "GANG02", "RGNG02", "rcm_gang02", -1, 2974.441f, 474.3331f, 46.86f, 0, 0, 134489253, 1112014848 /* Float: 50f */);
	func_71(94, 51, "HOMEROB00", "RHMR0", "rcm_homerob00", -1, 1407.78f, 265.425f, 88.61228f, 0, joaat("BLIP_MISSION_HOSEA"), 1351687, 200f);
	func_71(97, 54, "MARY01", "RMARY1", "rcm_mary01", 98, -126.0832f, -38.3759f, 94.6333f, 0, joaat("BLIP_SCM_LETTER"), 67240027, 1112014848 /* Float: 50f */);
	func_71(98, 54, "MARY02", "RMARY2", "rcm_mary02", -1, -380.78f, 917.269f, 118.9613f, 0, joaat("BLIP_RC_OLD_FLAME"), 67240133, 36f);
	func_71(106, 58, "MOB01", "RMOB01", "rcm_mob01", -1, 2793.855f, -1169.53f, 46.924f, 0, joaat("BLIP_SCM_BRONTE"), 67109063, 1112014848 /* Float: 50f */);
	func_71(107, 58, "MOB02", "RMOB02", "rcm_mob02", -1, 2686.954f, -1122.447f, 49.7002f, 0, joaat("BLIP_SCM_BRONTE"), 67108935, 1112014848 /* Float: 50f */);
	func_71(108, 59, "MONROE11", "RMNR1", "rcm_monroe11", -1, 471.1853f, 2226.889f, 246.2259f, 0, joaat("BLIP_SCM_MONROE"), 2359303, 150f);
	func_71(112, 60, "MUDTOWN31", "RMUD31", "rcm_mudtown3_1", 112, -141.5388f, -57.201f, 93.9626f, 0, joaat("BLIP_MISSION_JOHN"), 131283, 100f);
	func_71(113, 60, "MUDTOWN32", "RMUD32", "rcm_mudtown3_2", 113, 505.0512f, 704.0245f, 115.0716f, 0, joaat("BLIP_MISSION_JOHN"), 274609, 1112014848 /* Float: 50f */);
	func_71(114, 60, "MUDTOWN33", "RMUD33", "rcm_mudtown3_3", -1, -144.0388f, -56.981f, 93.9626f, 0, joaat("BLIP_MISSION_JOHN"), 67240005, 100f);
	func_71(115, 62, "NATIVE1", "RNATV1", "rcm_native1", -1, 2531.1f, -1312.83f, 48.19f, joaat("CS_EVELYNMILLER"), joaat("BLIP_RC"), 67764227, 120f);
	func_71(116, 62, "NATIVE2", "RNATV2", "rcm_native2", -1, 223.26f, 512.19f, 125.45f, 0, joaat("BLIP_SCM_EAGLE_FLIES"), 1310725, 350f);
	func_71(120, 64, "PEARSON1", "RPRSN", "rcm_pearson1", -1, -1346.968f, 2402.061f, 306.5004f, 0, joaat("BLIP_SCM_PEARSON"), 262151, 120f);
	func_71(134, 68, "SADIE1", "RSAD1", "rcm_sadie11", -1, 677.3743f, -1251.831f, 43.0154f, 0, joaat("BLIP_SCM_PEARSON"), 262151, 130f);
	func_71(6, 4, "BANDP20", "RBNP20", "rcm_beau_and_penelope20", 7, 2340.914f, 1359.669f, 105.3503f, 0, joaat("BLIP_SCM_LETTER"), 2228234, 120f);
	func_71(7, 4, "BANDP21", "RBNP21", "rcm_beau_and_penelope21", -1, 895.2736f, -1866.43f, 42.6791f, 0, joaat("BLIP_SCM_PENELOPE"), 40108164, 120f);
	func_71(22, 19, "CALDERON1", "RCLDN1", "rcm_calderon1", 23, 2815.65f, -1222.53f, 46.57f, joaat("CS_BROTHERDORKINS"), joaat("BLIP_RC"), 35913794, 70f);
	func_71(23, 19, "CALDERON2", "RCLDN2", "rcm_calderon2", -1, 2819.028f, -1110.255f, 45.9487f, joaat("CS_SISTERCALDERON"), joaat("BLIP_SCM_DORKINS"), 40108100, 120f);
	func_71(24, 20, "CALDERON21", "RCLD21", "rcm_calderon21", 25, 2733.148f, -1248.815f, 48.8597f, joaat("CS_SISTERCALDERON"), joaat("BLIP_RC"), 2228290, 120f);
	func_71(25, 20, "CALDERON22", "RCLD22", "rcm_calderon22", -1, 2733.148f, -1248.815f, 48.8597f, 0, joaat("BLIP_SCM_CALDERON"), 6557892, 125f);
	func_71(26, 21, "CALLOWAY1", "RCAL11", "rcm_callaway1", -1, -240.2066f, 768.6583f, 117.085f, joaat("CS_JIMCALLOWAY"), joaat("BLIP_RC"), 1179714, 40f);
	func_71(27, 21, "CALLOWAYB", "RCAL1B", "rcm_callaway12", 28, -239.1001f, 770.5522f, 117.1001f, 0, joaat("BLIP_RC_CALLOWAY"), 131072, 40f);
	func_71(28, 21, "CALLOWAY2", "RCAL12", "rcm_callaway2", 29, 2857.948f, -1370.687f, 43.5575f, 0, joaat("BLIP_RC_CALLOWAY"), 131072, 1112014848 /* Float: 50f */);
	func_71(29, 21, "CALLOWAY3", "RCAL13", "rcm_callaway3", -1, 2907.656f, 1314.266f, 44.67463f, joaat("CS_ASBDEPUTY_01"), joaat("BLIP_RC_CALLOWAY"), 537133124, 36f);
	func_71(30, 22, "CHAINGANG1", "RBWCG1", "rcm_chain_gang1", 31, 1276.24f, -1389.17f, 79.86f, joaat("CS_CHAINPRISONER_01"), joaat("BLIP_RC"), 1704002, 140f);
	func_71(31, 22, "CHAINGANG2", "RBWCG2", "rcm_chain_gang2", 32, 1311.78f, -1298.51f, 74.93f, 0, joaat("BLIP_RC_CHAIN_GANG"), 12528, 1112014848 /* Float: 50f */);
	func_71(32, 22, "CHAINGANG3", "RBWCG3", "rcm_chain_gang3", 33, 1215.95f, -1425.98f, 70.45f, 0, joaat("BLIP_RC_CHAIN_GANG"), 1310784, 100f);
	func_71(33, 22, "CHAINGANG4", "RBWCG4", "rcm_chain_gang4", 34, 902.15f, -384.86f, 88.3f, joaat("CS_CHAINPRISONER_01"), joaat("BLIP_RC"), 1572928, 150f);
	func_71(34, 22, "CHAINGANG5", "RBWCG5", "rcm_chain_gang5", 35, 902.15f, -384.86f, 88.3f, 0, joaat("BLIP_RC_CHAIN_GANG"), 4320, 150f);
	func_71(35, 22, "CHAINGANG6", "RBWCG6", "rcm_chain_gang6", 36, 902.15f, -384.86f, 88.3f, 0, joaat("BLIP_RC_CHAIN_GANG"), 262208, 150f);
	func_71(36, 22, "CHAINGANG7", "RBWCG7", "rcm_chain_gang7", -1, -2459.21f, 838f, 145.37f, joaat("CS_CHAINPRISONER_01"), joaat("BLIP_RC"), 538836996, 80f);
	func_71(38, 24, "CIGCARD1", "RCCIG", "rcm_collect_cigarette_cards1", -1, -343.5616f, -369.2671f, 87.0759f, joaat("CS_CIGCARDGUY"), joaat("BLIP_RC"), 72482822, (50f * 4f));
	func_71(39, 25, "DINOBONE11", "RCDIN1", "rcm_collect_dinosaur_bones11", -1, 122.7758f, -185.4978f, 116.4383f, joaat("CS_DINOBONESLADY"), joaat("BLIP_RC"), 68288642, (50f * 4f));
	func_71(40, 25, "DINOBONE12", "RCDIN2", "rcm_collect_dinosaur_bones12", -1, 197.275f, 985.9788f, 189.2538f, joaat("CS_DINOBONESLADY"), joaat("BLIP_RC_DEBORAH"), 608176132, 1112014848 /* Float: 50f */);
	func_71(43, 27, "EXOTICS1", "RCEXO1", "rcm_collect_exotics1", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC"), 68296706, 1112014848 /* Float: 50f */);
	func_71(44, 27, "EXOTICS2", "RCEXO2", "rcm_collect_exotics2", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848 /* Float: 50f */);
	func_71(45, 27, "EXOTICS3", "RCEXO3", "rcm_collect_exotics3", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848 /* Float: 50f */);
	func_71(46, 27, "EXOTICS4", "RCEXO4", "rcm_collect_exotics4", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848 /* Float: 50f */);
	func_71(47, 27, "EXOTICS5", "RCEXO5", "rcm_collect_exotics5", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 67250176, 1112014848 /* Float: 50f */);
	func_71(48, 27, "EXOTICS6", "RCEXO6", "rcm_collect_exotics6", -1, 2586.494f, -1009.154f, 43.24f, joaat("CS_EXOTICCOLLECTOR"), joaat("BLIP_RC_ALGERNON_WASP"), 608315460, 1112014848 /* Float: 50f */);
	func_71(41, 26, "RAREFISH11", "RCFSH1", "rcm_collect_rare_fish1", -1, 337.3075f, -684.5404f, 41.8362f, joaat("CS_FISHCOLLECTOR"), joaat("BLIP_RC"), 68288642, (50f * 4f));
	func_71(42, 26, "RAREFISH12", "RCFSH2", "rcm_collect_rare_fish2", -1, 341.9155f, -665.392f, 41.8046f, joaat("CS_FISHCOLLECTOR"), joaat("BLIP_RC_JEREMY_GILL"), 541067652, 1112014848 /* Float: 50f */);
	func_71(49, 28, "ROCKFACE1", "RCRKF1", "rcm_collect_rock_faces1", -1, -2178.646f, -245.6886f, 191.1569f, joaat("CS_FRANCIS_SINCLAIR"), joaat("BLIP_RC"), 68288514, 100f);
	func_71(50, 28, "ROCKFACE2", "RCRKF2", "rcm_collect_rock_faces2", -1, -2173.926f, -247.408f, 191.8229f, joaat("CS_MRS_SINCLAIR"), joaat("BLIP_SCM_FRANCES"), 608307204, 100f);
	func_71(51, 29, "TAXIDERMY1", "RCTAX1", "rcm_collect_taxidermy1", -1, -1678.832f, -335.5439f, 172.9001f, joaat("CS_TAXIDERMIST"), joaat("BLIP_RC_HOBBS"), 68290882, 1112014848 /* Float: 50f */);
	func_71(52, 29, "TAXIDERMY2", "RCTAX2", "rcm_collect_taxidermy2", -1, -1638.497f, -1361.436f, 83.3966f, 0, joaat("BLIP_RC"), 608305412, 1112014848 /* Float: 50f */);
	func_71(53, 30, "CRACKPOT1", "RCKPT1", "rcm_crackpot1", 54, 2463.36f, -1372.69f, 44.3262f, joaat("CS_CRACKPOTINVENTOR"), joaat("BLIP_RC"), 1310786, 120f);
	func_71(54, 30, "CRACKPOT2", "RCKPT2", "rcm_crackpot2", 55, 2517.188f, 2289.349f, 176.3516f, joaat("CS_CRACKPOTINVENTOR"), joaat("BLIP_RC_CRACKPOT"), 262208, 300f);
	func_71(55, 30, "CRACKPOT3", "RCKPT3", "rcm_crackpot3", -1, 2517.188f, 2289.349f, 176.3516f, 0, 0, 536875092, 100f);
	func_71(56, 31, "CRAWLEY1", "RCRAW", "rcm_crawley1", -1, 2011.776f, -504.0132f, 40.983f, joaat("U_M_O_OLDCAJUN_01"), joaat("BLIP_RC"), 537921542, 150f);
	func_71(57, 32, "CREOLE1", "RCRLE", "rcm_creole1", -1, 1380.51f, -1337.51f, 77f, joaat("CS_CREOLEDOCTOR"), joaat("BLIP_RC"), 538181702, 120f);
	func_71(69, 40, "EDOWN21", "REDW21", "rcm_edith_down21", 70, 2935.405f, 1377.749f, 43.5814f, joaat("CS_EDITHDOWN"), joaat("BLIP_SCM_EDITH"), 37486786, 120f);
	func_71(70, 40, "EDOWN22", "REDW22", "rcm_edith_down22", -1, 2956.146f, 1340.49f, 43.8751f, joaat("CS_ARCHIEDOWN"), joaat("BLIP_SCM_EDITH"), 41156612, 60f);
	func_71(77, 43, "FORMYART1", "RFMA1", "rcm_for_my_art1", 78, 2794.64f, -1168.4f, 46.92f, 0, joaat("BLIP_RC"), 1179842, 36f);
	func_71(78, 43, "FORMYART2", "RFMA2", "rcm_for_my_art2", 79, 2738.72f, -1207.39f, 48.66f, 0, joaat("BLIP_RC_ART"), 1310784, 50f);
	func_71(79, 43, "FORMYART3", "RFMA3", "rcm_for_my_art3", 80, 2700.241f, -1187.552f, 55.0907f, 0, joaat("BLIP_RC_ART"), 262336, 150f);
	func_71(80, 43, "FORMYART4", "RFMA4", "rcm_for_my_art4", -1, 2739.74f, -1315.64f, 47.63f, joaat("CS_FRENCHARTIST"), joaat("BLIP_RC_ART"), 538706116, 120f);
	func_71(81, 44, "FUNDRAISER", "REFND", "rcm_fundraiser", -1, 2504.054f, -1152.946f, 48.26756f, 0, joaat("BLIP_RC"), 86519878, 120f);
	func_71(84, 46, "GUNSLINGER1", "RGUN11", "rcm_gunslinger1_1", 85, -62.69012f, -404.3738f, 69.91233f, joaat("CS_FAMOUSGUNSLINGER_01"), joaat("BLIP_RC_GUNSLINGER_1"), 1050634, 120f);
	func_71(85, 46, "GUNSLINGER12", "RGUN12", "rcm_gunslinger1_2", -1, -63.25864f, -404.9262f, 69.9287f, joaat("CS_FAMOUSGUNSLINGER_01"), joaat("BLIP_RC_GUNSLINGER_1"), 262340, 120f);
	func_71(86, 47, "GUNSLINGER2", "RGUN2", "rcm_gunslinger2_1", -1, -967.5845f, 2181.624f, 339.4473f, joaat("CS_FAMOUSGUNSLINGER_02"), joaat("BLIP_RC_GUNSLINGER_2"), 264398, 200f);
	func_71(87, 48, "GUNSLINGER3", "RGUN3", "rcm_gunslinger3_1", -1, 1231.35f, -1299.684f, 75.9034f, 0, joaat("BLIP_RC_GUNSLINGER_3"), 264398, 50f);
	func_71(88, 49, "GUNSLINGER51", "RGUN5", "rcm_gunslinger5_1", -1, 2492.992f, -420.529f, 43.78334f, joaat("CS_FAMOUSGUNSLINGER_05"), joaat("BLIP_RC_GUNSLINGER_5"), 1312846, 120f);
	func_71(89, 50, "HEREKITTY1", "RKTTY1", "rcm_here_kitty_kitty1", 90, 1604.317f, -262.3793f, 78.2036f, joaat("CS_RINGMASTER"), joaat("BLIP_RC"), 1179650, 250f);
	func_71(90, 50, "HEREKITTY2", "RKTTY2", "rcm_here_kitty_kitty2", 91, 1015.113f, 159.7295f, 103.0175f, 0, joaat("BLIP_RC_KITTY"), 262272, 250f);
	func_71(91, 50, "HEREKITTY3", "RKTTY3", "rcm_here_kitty_kitty3", 92, 1491.239f, -1118.537f, 55.39496f, 0, joaat("BLIP_RC_KITTY"), 1310720, 250f);
	func_71(92, 50, "HEREKITTY4", "RKTTY4", "rcm_here_kitty_kitty4", 93, 1408.014f, 280.6987f, 88.45465f, 0, joaat("BLIP_RC_KITTY"), 1310848, 200f);
	func_71(93, 50, "HEREKITTY5", "RKTTY5", "rcm_here_kitty_kitty5", -1, 1581.761f, -259.8209f, 79.8f, joaat("CS_RINGMASTER"), joaat("BLIP_RC_KITTY"), 537264132, 250f);
	func_71(95, 52, "HOMEROB01", "RHMRB", "rcm_homerob01", -1, 668.8008f, -1233.836f, 43.15567f, 0, joaat("BLIP_ROBBERY_HOME"), 23068678, 100f);
	func_71(99, 55, "MARY31", "RMARY3", "rcm_mary31", -1, 1905.66f, -1860.534f, 47.18359f, 0, joaat("BLIP_SCM_LETTER"), 6291530, 1112014848 /* Float: 50f */);
	func_71(101, 57, "MASON1", "RMASN1", "rcm_mason1", 102, -1365.9f, -726.54f, 91.08f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC"), 1310914, 120f);
	func_71(102, 57, "MASON2", "RMASN2", "rcm_mason2", 103, -1651.18f, 628.19f, 125.4f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 1310784, 120f);
	func_71(103, 57, "MASON3", "RMASN3", "rcm_mason3", 104, 1358.591f, 554.5364f, 87.3964f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 3407936, 200f);
	func_71(104, 57, "MASON4", "RMASN4", "rcm_mason4", 105, 2387.459f, -580.6672f, 41.0198f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 1310784, 120f);
	func_71(105, 57, "MASON5", "RMASN5", "rcm_mason5", -1, -231.24f, 226.84f, 94.4f, joaat("CS_ALBERTMASON"), joaat("BLIP_RC_ALBERT"), 538312708, 400f);
	func_71(109, 61, "MAYR1", "RMAYR1", "rcm_mr_mayor1", -1, 2401.393f, -1071.014f, 47.473f, joaat("CS_HENRILEMIUX"), joaat("BLIP_RC_HENRI"), 264258, 50f);
	func_71(110, 61, "MAYR2", "RMAYR2", "rcm_mr_mayor2", 111, 2401.393f, -1071.014f, 47.473f, joaat("CS_HENRILEMIUX"), joaat("BLIP_RC_HENRI"), 2112, 50f);
	func_71(111, 61, "MAYR3", "RMAYR3", "rcm_mr_mayor3", -1, 2401.393f, -1071.014f, 47.473f, 0, joaat("BLIP_RC_HENRI"), 537133188, 50f);
	func_71(117, 63, "OHBROTHER1", "ROBT1", "rcm_oh_brother1", 118, -323.86f, 794.53f, 116.89f, 0, joaat("BLIP_RC"), 1310786, 100f);
	func_71(118, 63, "OHBROTHER2", "ROBT2", "rcm_oh_brother2", 119, -303.77f, 817.93f, 117.41f, 0, joaat("BLIP_RC"), 1310784, 100f);
	func_71(119, 63, "OHBROTHER3", "ROBT3", "rcm_oh_brother3", -1, -1049.4f, 426.08f, 53.89f, 0, joaat("BLIP_RC"), 538181700, 120f);
	func_71(121, 65, "POISONEDWELL1", "RHNTN1", "rcm_poisoned_well1", 122, 2538.461f, 432.7961f, 64.0455f, joaat("RCSP_POISONEDWELL_MALES_01"), joaat("BLIP_RC"), 1835074, 120f);
	func_71(122, 65, "POISONEDWELL2", "RHNTN2", "rcm_poisoned_well2", 123, 2556.25f, 806.7f, 75.3f, 0, joaat("BLIP_RC_OBEDIAH_HINTON"), 262144, 200f);
	func_71(123, 65, "POISONEDWELL3", "RHNTN3", "rcm_poisoned_well3", 124, 2397.81f, 609.74f, 66.21f, 0, joaat("BLIP_RC_OBEDIAH_HINTON"), 12416, 120f);
	func_71(124, 65, "POISONEDWELL4", "RHNTN4", "rcm_poisoned_well4", 125, 2556.25f, 806.7f, 75.3f, joaat("CS_OBEDIAHHINTON"), joaat("BLIP_RC_OBEDIAH_HINTON"), 131072, 150f);
	func_71(125, 65, "POISONEDWELL5", "RHNTN5", "rcm_poisoned_well5", -1, 2281.98f, 1198.91f, 108.09f, 0, joaat("BLIP_RC_OBEDIAH_HINTON"), 538181636, 150f);
	func_71(127, 67, "LIGHTNING1", "RRTL1", "rcm_ride_the_lightning1", 128, 2829.053f, -1055.899f, 43.0369f, joaat("CS_PROFESSORBELL"), joaat("BLIP_RC"), 3801090, 60f);
	func_71(128, 67, "LIGHTNING2", "RRTL2", "rcm_ride_the_lightning2", -1, 1226.67f, -1295.04f, 75.9f, 0, joaat("BLIP_RC_LIGHTNING"), 2101376, 36f);
	func_71(129, 67, "LIGHTNING3", "RRTL3", "rcm_ride_the_lightning3", 130, 2536.865f, -275.3683f, 42.8264f, 0, joaat("BLIP_RC_LIGHTNING"), 2361472, 150f);
	func_71(130, 67, "LIGHTNING4", "RRTL4", "rcm_ride_the_lightning4", 131, 2507.133f, -1307.169f, 47.9537f, 0, joaat("BLIP_RC_LIGHTNING"), 2363520, 36f);
	func_71(131, 67, "LIGHTNING5", "RRTL5", "rcm_ride_the_lightning5", 132, 2829.053f, -1055.899f, 43.0369f, joaat("CS_PROFESSORBELL"), joaat("BLIP_RC_LIGHTNING"), 2752512, 60f);
	func_71(132, 67, "LIGHTNING6", "RRTL6", "rcm_ride_the_lightning6", 133, 1281.752f, 908.6993f, 126.8532f, 0, joaat("BLIP_RC_LIGHTNING"), 2359488, 300f);
	func_71(133, 67, "LIGHTNING7", "RRTL7", "rcm_ride_the_lightning7", -1, 2689.054f, -1120.174f, 49.6621f, joaat("CS_PROFESSORBELL"), joaat("BLIP_RC_LIGHTNING"), 540934148, 140f);
	func_71(135, 69, "SERIALKILLER1", "RSKLR", "rcm_serial_killer1", -1, -609.3224f, 521.8002f, 95.1998f, 0, joaat("BLIP_RC"), 546572422, 55f);
	func_71(136, 70, "SLAVE1", "RSLVC1", "rcm_slave_catcher1", 137, 1244.57f, -1275.52f, 74.96f, joaat("CS_SLAVECATCHER"), joaat("BLIP_RC"), 1179714, 200f);
	func_71(137, 70, "SLAVE2", "RSLVC2", "rcm_slave_catcher2", -1, 1264.612f, -404.1218f, 97.0883f, 0, joaat("BLIP_RC_SLAVE_CATCHER"), 537133124, 36f);
	func_71(138, 71, "STRAUSS11", "RSTR1", "rcm_strauss11", -1, 655.3615f, -1234.329f, 43.1254f, 0, joaat("BLIP_SCM_STRAUSS"), 6422598, 100f);
	func_71(139, 72, "STRAUSS21", "RSTR2", "rcm_strauss21", -1, 1970.765f, -1872.171f, 41.6262f, 0, joaat("BLIP_SCM_STRAUSS"), 6422598, 120f);
	func_71(140, 73, "STRAUSS31", "RSTR31", "rcm_strauss31", 141, 2327.984f, 1330.677f, 106.157f, 0, joaat("BLIP_SCM_STRAUSS"), 2228290, 100f);
	func_71(141, 73, "STRAUSS32", "RSTR32", "rcm_strauss32", 142, 2328.061f, 1329.368f, 106.1765f, 0, joaat("BLIP_SCM_STRAUSS"), 2101488, 1112014848 /* Float: 50f */);
	func_71(142, 73, "STRAUSS33", "RSTR33", "rcm_strauss33", -1, 2327.984f, 1330.677f, 106.157f, 0, joaat("BLIP_SCM_STRAUSS"), 6684748, 100f);
	func_71(143, 74, "THEODDFELLOWS1", "RODDF1", "rcm_the_odd_fellows1", 144, 2945.728f, 526.6201f, 45.84f, joaat("CS_ODDFELLOWSPINHEAD"), joaat("BLIP_RC"), 1835010, 60f);
	func_71(144, 74, "THEODDFELLOWS2", "RODDF2", "rcm_the_odd_fellows2", -1, 2312.786f, 27.78194f, 48.40265f, 0, joaat("BLIP_RC_ODD_FELLOWS"), 538181700, 140f);
	func_71(147, 77, "WARVET1", "RWARV1", "rcm_war_veteran1", 148, 1479.436f, 1335.166f, 161.3365f, joaat("CS_WARVET"), joaat("BLIP_RC"), 786498, 140f);
	func_71(148, 77, "WARVET2", "RWARV2", "rcm_war_veteran2", 149, 1698.457f, 1511.371f, 146.8702f, joaat("CS_WARVET"), joaat("BLIP_RC_WAR_VETERAN"), 786496, 200f);
	func_71(149, 77, "WARVET3", "RWARV3", "rcm_war_veteran3", 150, 1699.141f, 1508.696f, 146.8712f, joaat("CS_WARVET"), joaat("BLIP_RC_WAR_VETERAN"), 786496, 200f);
	func_71(150, 77, "WARVET4", "RWARV4", "rcm_war_veteran4", -1, 1698.457f, 1511.371f, 146.8702f, joaat("CS_WARVET"), joaat("BLIP_RC_WAR_VETERAN"), 537657412, 200f);
	func_71(11, 7, "BHDUEL1", "RBDUL", "rcm_bounty_duel1", -1, -2336.112f, 105.0412f, 221.6922f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 60f);
	func_71(12, 8, "BHEXCONFED1", "RBCON", "rcm_bounty_exconfed1", -1, 2505.874f, 286.573f, 71.9487f, joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"), joaat("BLIP_MISSION_BOUNTY"), 8653446, 120f);
	func_71(13, 9, "BHRANCHER1", "RBRAN", "rcm_bounty_rancher1", -1, 1647.412f, -608.9368f, 42.4184f, joaat("U_M_M_HTLRANCHERBOUNTY_01"), joaat("BLIP_MISSION_BOUNTY"), 8653446, 150f);
	func_71(153, 79, "BHTARGET3", "RBT03", "rcm_bh_laramie_sleeping", -1, -1947.647f, 427.8162f, 118.9041f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 250f);
	func_71(14, 10, "BHTARGET5", "RBT05", "rcm_bh_wife_and_lover", -1, -1215.09f, 369.9232f, 64.0378f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 250f);
	func_71(154, 80, "BHTARGET12", "RBT12", "rcm_bh_camp_return", -1, 1425.841f, -2186.84f, 47.99936f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 250f);
	func_71(15, 11, "BHTARGET14", "RBT14", "rcm_bh_shack_escape", -1, 1361.01f, -2066.81f, 52.23f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653446, 70f);
	func_71(16, 12, "BHTARGET15", "RBT15", "rcm_bh_sd_saloon", -1, 2794.52f, -1170.64f, 46.924f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 50f);
	func_71(17, 13, "BHTARGET18", "RBT18", "rcm_bh_skinner_brother", -1, -2000.8f, -1829.5f, 113.3f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 200f);
	func_71(18, 14, "BHTARGET20", "RBT20", "rcm_bh_skinner_search", -1, -1982.37f, -1430.89f, 115.58f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 200f);
	func_71(155, 15, "BHTARGET21", "RBT21", "rcm_bh_blackwater_hunt", -1, -799.8206f, -1232.503f, 42.552f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 175f);
	func_71(19, 16, "BHTARGET22", "RBT22", "rcm_bh_bandito_shack", -1, -5409f, -3655f, -22.2f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 250f);
	func_71(20, 17, "BHTARGET23", "RBT23", "rcm_bh_bandito_mine", -1, -5970.842f, -3245.562f, -22.5793f, 0, joaat("BLIP_MISSION_BOUNTY"), 8653702, 250f);
	func_71(1, 1, "ABIGAIL22", "RABI22", "rcm_abigail22", -1, -1606.873f, -1376.358f, 81.81185f, 0, joaat("BLIP_MISSION_JOHN"), 67143009, 1112014848 /* Float: 50f */);
	func_71(2, 2, "ABIGAIL31", "RABI3", "rcm_abigail31", -1, -1637.182f, -1363.268f, 83.4566f, 0, joaat("BLIP_SCM_ABIGAIL"), 262407, 120f);
	func_71(8, 5, "BEECHERS11", "RBCH11", "rcm_beechers11", 9, -814.331f, -1278.102f, 42.6377f, 0, joaat("BLIP_SCM_ANSEL_ATHERTON"), 67240259, 1112014848 /* Float: 50f */);
	func_71(9, 5, "BEECHERS12", "RBCH12", "rcm_beechers12", -1, -1635.695f, -1355.41f, 82.9339f, 0, joaat("BLIP_SCM_ANSEL_ATHERTON"), 262469, 200f);
	func_71(10, 6, "BEECHERS21", "RBCH21", "rcm_beechers21", -1, -1638.859f, -1359.027f, 82.9803f, 0, joaat("BLIP_SCM_UNCLE"), 262403, 250f);
	func_71(71, 41, "EVELYN1", "RMLLR1", "rcm_evelyn_miller1", 72, -2068.575f, -1063.067f, 134.9549f, joaat("CS_EVELYNMILLER"), joaat("BLIP_RC"), 1573314, 1112014848 /* Float: 50f */);
	func_71(72, 41, "EVELYN2", "RMLLR2", "rcm_evelyn_miller2", 73, -2374.59f, -1594.19f, 153.4694f, joaat("CS_EVELYNMILLER"), joaat("BLIP_SCM_EVELYN"), 1835328, 100f);
	func_71(73, 41, "EVELYN3", "RMLLR3", "rcm_evelyn_miller3", 74, -2373.404f, -1592.497f, 153.0315f, 0, joaat("BLIP_SCM_EVELYN"), 256, 1112014848 /* Float: 50f */);
	func_71(74, 41, "EVELYN4", "RMLLR4", "rcm_evelyn_miller4", 75, -2373.404f, -1592.497f, 153.0315f, 0, 0, 4592, 1112014848 /* Float: 50f */);
	func_71(75, 41, "EVELYN5", "RMLLR5", "rcm_evelyn_miller5", -1, -2373.404f, -1592.497f, 153.0315f, 0, 0, 671355188, 1112014848 /* Float: 50f */);
	func_71(96, 53, "JACK21", "RJCK2", "rcm_jack2", -1, -1629.71f, -1338.377f, 82.0174f, 0, joaat("BLIP_SCM_JACK"), 262407, 140f);
	func_71(100, 56, "MARYBETH1", "RMRYB", "rcm_marybeth1", -1, -171.3529f, 631.9009f, 113.0321f, 0, 0, 67240214, 1112014848 /* Float: 50f */);
	func_71(126, 66, "RAINSFALL1", "RRFA1", "rcm_rains_fall1", -1, 2937.5f, 1276.5f, 45.1f, 0, 0, 67240214, 1112014848 /* Float: 50f */);
	func_71(145, 75, "TILLY1", "RTLLY", "rcm_tilly1", -1, 2595.41f, -1198.08f, 52.23f, 0, 0, 67240214, 1112014848 /* Float: 50f */);
	func_71(151, 78, "HERBALISTCAMP1", "REHEC1", "rcm_herbalist_camp", 152, 556.271f, 172.08f, 133.3435f, 0, joaat("BLIP_RC"), 1048642, 250f);
	func_71(152, 78, "HERBALISTCAMP2", "REHEC2", "rcm_herbalist_camp", -1, 557.4186f, 170.2608f, 134.348f, 0, joaat("BLIP_RC_HERBALIST"), 536875076, 250f);
	func_71(146, 76, "TREASUREHUNTER1", "RETH", "rcm_treasure_hunter", -1, -586.4957f, -344.5864f, 81.4029f, joaat("CS_TREASUREHUNTER"), joaat("BLIP_RC"), 68190278, 200f);
	func_72(1, 12);
	func_72(23, 1);
	func_72(33, 24);
	func_72(36, 24);
	func_72(54, 24);
	func_72(55, 48);
	func_72(70, 4);
	func_72(72, 24);
	func_72(73, 24);
	func_72(78, 24);
	func_72(79, 24);
	func_72(80, 48);
	func_72(102, 48);
	func_72(103, 48);
	func_72(104, 48);
	func_72(105, 48);
	func_72(113, 1);
	func_72(118, 24);
	func_72(119, 24);
	func_72(122, 24);
	func_72(133, 24);
	func_72(148, 24);
	func_72(149, 24);
	func_72(150, 24);
	func_73(0, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(2, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(23, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(24, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(53, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(54, joaat("WEATHER_GROUP_THUNDERSTORM"), 1);
	func_73(59, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(71, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(72, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(69, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(81, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(89, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(91, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(92, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(93, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(101, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(102, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(103, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(104, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(105, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(117, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 0);
	func_73(118, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 0);
	func_73(119, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(115, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(133, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(134, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(144, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(145, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 0);
	func_73(146, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	func_73(147, joaat("WEATHER_GROUP_NO_PRECIPITATION"), 1);
	if (Global_1879534 == 0)
	{
		func_74(2, (Global_1347702[2 /*49*/].f_16 + 50f));
		func_74(12, (Global_1347702[12 /*49*/].f_16 + 40f));
		func_74(13, (Global_1347702[13 /*49*/].f_16 + 40f));
		func_74(23, (Global_1347702[23 /*49*/].f_16 + 30f));
		func_74(32, (Global_1347702[32 /*49*/].f_16 + 30f));
		func_74(56, (Global_1347702[56 /*49*/].f_16 + 50f));
		func_74(54, (Global_1347702[54 /*49*/].f_16 + 50f));
		func_74(58, (Global_1347702[58 /*49*/].f_16 + 50f));
		func_74(63, (Global_1347702[63 /*49*/].f_16 + 40f));
		func_74(81, (Global_1347702[81 /*49*/].f_16 + 30f));
		func_74(151, 410f);
		func_74(152, 410f);
		func_74(90, (Global_1347702[90 /*49*/].f_16 + 25f));
		func_74(91, (Global_1347702[91 /*49*/].f_16 + 25f));
		func_74(96, (Global_1347702[96 /*49*/].f_16 + 50f));
		func_74(120, (Global_1347702[120 /*49*/].f_16 + 100f));
		func_74(123, (Global_1347702[123 /*49*/].f_16 + 50f));
		func_74(129, (Global_1347702[129 /*49*/].f_16 + 60f));
		func_74(132, (Global_1347702[132 /*49*/].f_16 + 60f));
		func_74(144, (Global_1347702[144 /*49*/].f_16 + 50f));
		func_75(3, 35f);
		func_75(4, 20f);
		func_75(11, 30f);
		func_75(13, 80f);
		func_75(12, 110f);
		func_75(153, 100f);
		func_75(14, 80f);
		func_75(154, 100f);
		func_75(15, 60f);
		func_75(17, 100f);
		func_75(18, 85f);
		func_75(155, 65f);
		func_75(19, 65f);
		func_75(20, 60f);
		func_75(26, 45f);
		func_75(30, 40f);
		func_75(32, 30f);
		func_75(33, 55f);
		func_75(36, 40f);
		func_75(38, 35f);
		func_75(39, 80f);
		func_75(43, 45f);
		func_75(41, 40f);
		func_75(49, 40f);
		func_75(51, 65f);
		func_75(53, 32f);
		func_75(56, 35f);
		func_75(57, 17f);
		func_75(62, 50f);
		func_75(65, 42f);
		func_75(69, 25f);
		func_75(70, 30f);
		func_75(71, 25f);
		func_75(72, 25f);
		func_75(77, 12f);
		func_75(78, 17f);
		func_75(80, 20f);
		func_75(84, 35f);
		func_75(86, 50f);
		func_75(88, 45f);
		func_75(89, 75f);
		func_75(90, 130f);
		func_75(91, 60f);
		func_75(92, 85f);
		func_75(94, 47f);
		func_75(101, 40f);
		func_75(102, 40f);
		func_75(103, 40f);
		func_75(104, 40f);
		func_75(105, 40f);
		func_75(106, 25f);
		func_75(107, 25f);
		func_75(116, 30f);
		func_75(117, 20f);
		func_75(118, 20f);
		func_75(119, 20f);
		func_75(121, 55f);
		func_75(123, 100f);
		func_75(125, 35f);
		func_75(127, 28f);
		func_75(129, func_76(13));
		func_75(132, 100f);
		func_75(133, 20f);
		func_75(135, 75f);
		func_75(136, 22f);
		func_75(143, 20f);
		func_75(144, 50f);
		func_75(151, 100f);
		func_75(146, 135f);
		func_78(0, (func_77(13) || func_77(14)));
		func_78(2, (func_77(13) || func_77(4)));
		func_78(10, (func_77(4) || func_77(7)));
		func_78(21, func_77(13));
		func_78(37, func_77(23));
		func_78(59, func_77(18));
		func_78(63, func_77(10));
		func_78(64, func_77(11));
		func_78(65, func_77(11));
		func_78(66, (func_77(0) || func_77(5)));
		func_78(67, (((func_77(0) || func_77(5)) || func_77(9)) || func_77(2)));
		func_78(68, (func_77(0) || func_77(7)));
		func_78(76, func_77(9));
		func_78(94, func_77(5));
		func_78(95, func_77(8));
		func_78(96, (func_77(14) || func_77(12)));
		func_78(112, (func_77(1) || func_77(8)));
		func_78(114, (func_77(1) || func_77(8)));
		func_78(116, func_77(26));
		func_78(120, func_77(17));
		func_78(134, (func_77(11) || func_77(17)));
		func_78(138, func_77(18));
		func_78(139, func_77(18));
		func_78(140, func_77(18));
		func_78(142, func_77(22));
		func_79(53, 1026);
		func_79(54, 128);
		func_79(56, 128);
		func_79(57, 1030);
		func_79(39, 1030);
		func_79(79, 1026);
		func_79(81, 8192);
		func_79(101, 1026);
		func_79(102, 1026);
		func_79(103, 1026);
		func_79(104, 1026);
		func_79(105, 1026);
		func_79(109, 128);
		func_79(110, 128);
		func_79(111, 128);
		func_79(122, 8);
		func_79(148, 1026);
		func_79(149, 1026);
		func_79(150, 1026);
		func_79(155, 640);
		func_79(128, 7);
		func_79(52, 7);
		func_79(71, 1026);
		func_80(6, 1f);
		func_80(22, 30f);
		func_80(26, 15f);
		func_80(27, 15f);
		func_80(30, 50f);
		func_80(32, 100f);
		func_80(33, 150f);
		func_80(34, 100f);
		func_80(36, 100f);
		func_80(41, 10f);
		func_80(53, 50f);
		func_80(54, 150f);
		func_80(58, 0f);
		func_80(59, 3f);
		func_80(61, 2f);
		func_80(76, 3f);
		func_80(81, 50f);
		func_80(84, 60f);
		func_80(85, 60f);
		func_80(89, 150f);
		func_80(90, 180f);
		func_80(91, 75f);
		func_80(93, 150f);
		func_80(95, 4.5f);
		func_80(97, 2f);
		func_80(101, 50f);
		func_80(103, 150f);
		func_80(112, 5f);
		func_80(113, 0f);
		func_80(114, 5f);
		func_80(115, 70f);
		func_80(116, 150f);
		func_80(134, 2f);
		func_80(0, 3f);
		func_80(120, 3f);
		func_80(138, 3f);
		func_80(139, 3f);
		func_80(140, 3f);
		func_80(142, 3f);
		func_80(147, 150f);
		func_80(117, 10f);
		func_80(118, 10f);
		func_80(151, 160f);
		func_80(152, 160f);
		func_80(146, 155f);
		func_80(121, 200f);
		func_80(15, 70f);
		func_80(155, 5f);
		func_80(20, 170f);
		func_80(13, 140f);
		func_80(17, 160f);
		func_80(12, 100f);
		func_80(126, 2f);
		func_80(145, 2f);
		func_80(14, 100f);
		func_81(22, 100f);
		func_81(23, 100f);
		func_81(62, 150f);
		func_81(68, 150f);
		func_81(65, 250f);
		func_81(106, 100f);
		func_81(107, 100f);
		func_81(115, 100f);
		func_81(116, 225f);
		func_81(151, 250f);
		func_81(155, 110f);
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
	return 1;
}

int func_8()
{
	func_82();
	return 1;
}

int func_9()
{
	func_83(0, 1, 79, 2351.282f, 1362.077f, 104.9752f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(1, 1, 43, -1356.339f, 2443.121f, 308.1876f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(2, 1, 98, 667.9077f, -1252.78f, 42.9221f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(3, 1, 58, 1422.625f, -7332.473f, 80.5977f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(4, 1, 71, -125.85f, -39.9599f, 96.0908f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(5, 1, 4, 2254.96f, -758.12f, 41.75f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(6, 1, 9, 1880.807f, -1873.231f, 41.8094f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(7, 1, 22, -2593.21f, 453.9533f, 145.9973f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(8, 1, 76, -324.5534f, 760.3503f, 120.6335f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(16, 1, 115, -5514.272f, -2971.501f, 1.2343f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(15, 1, 37, func_84(), 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(9, 1, 5, 2638.124f, -1222.767f, 59.7655f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(10, 1, 38, -822.6304f, -1324.959f, 48.6102f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(11, 1, 105, 1331.149f, -1376.779f, 80.5954f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(12, 1, 92, 2977.443f, 574.009f, 48.1406f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(13, 1, 78, 2945.353f, 1330.25f, 43.4528f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(14, 1, 26, -1812.626f, -368.6117f, 166.5446f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	return 1;
}

int func_10()
{
	if (!Global_40)
	{
		func_85(1, 16);
		func_86(0);
		func_87();
	}
	func_88();
	return 1;
}

int func_11()
{
	return func_89(0);
}

int func_12()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	func_90(&Global_1949604);
	func_91();
	iVar2 = 0;
	if (func_92(1))
	{
		Global_1946804.f_1 = Global_26796.f_775;
		func_93(0);
		if (((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && func_94(Global_1835011[4 /*74*/].f_1, 1)) && !func_92(16))
		{
			func_95(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
			func_96();
			func_97(16);
		}
		func_98();
		switch (Global_1946804.f_1)
		{
			case -2125499975:
			case -449205311:
				Global_40.f_39 = joaat("PLAYER_ZERO");
				Global_1935630.f_2 = Global_40.f_39;
				break;
			case 1160113249:
				Global_1935630.f_2 = joaat("PLAYER_THREE");
				if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_THREE"))
				{
					Global_40.f_39 = 0;
				}
				break;
		}
	}
	else
	{
		func_93(1);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_26796.f_26[iVar0 /*120*/] = 0;
			Global_26796.f_26[iVar0 /*120*/].f_1 = 0;
			iVar1 = 0;
			while (iVar1 < 39)
			{
				vVar3.x = Global_1946804.f_57[iVar1 /*11*/];
				Global_26796.f_26[iVar0 /*120*/].f_1.f_1[iVar1 /*3*/] = { vVar3 };
				iVar1++;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			vVar3.x = Global_1946804.f_57[iVar1 /*11*/];
			Global_1946804.f_1497.f_1[iVar1 /*3*/] = { vVar3 };
			Global_1946804.f_1378.f_1[iVar1 /*3*/] = { vVar3 };
			iVar1++;
		}
		if ((((Global_1946804.f_1 == 0 || Global_1946804.f_1 == -2125499975) || Global_1946804.f_1 == -449205311) || Global_1946804.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE")) || Global_1946804.f_1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		{
			func_99(-2125499975);
			func_100(&(Global_1946804.f_1378), 2020890174, &iVar2, 0, 0, 0, 0);
			func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
			func_100(&(Global_1946804.f_1378), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &iVar2, 0, 1, 0, 0);
			Global_26796.f_776 = 0;
			func_102(-1, 0, 1, 1, 1, 0);
			func_103(-1, 0, 0, 6);
			func_104(joaat("CLOTHING_MULTI_ITEM_CLEAN"), 3, 3, 3, 0);
			func_105(0, 5, 0);
			Global_40.f_39 = joaat("PLAYER_ZERO");
			Global_1935630.f_2 = Global_40.f_39;
			Global_26796.f_775 = Global_1946804.f_1;
		}
		else if (Global_1946804.f_1 == 1160113249)
		{
			func_99(Global_1946804.f_1);
			switch (Global_1946804.f_1)
			{
				case 1160113249:
					Global_1935630.f_2 = joaat("PLAYER_THREE");
					Global_40.f_39 = 0;
					break;
			}
		}
		func_97(1);
		func_106(7);
	}
	Global_1347698 = 0;
	Global_1347698.f_1 = 0;
	Global_1347698.f_2 = 0;
	return 1;
}

int func_13()
{
	func_107();
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_108(0, "beat_animal_attack", 4, 90f, 3, 536872961, -1, 17, 10, 1, -1, 1, -1, -1, -1, 10800);
		func_108(1, "beat_animal_mauling", 4, 140f, 2, 4196353, -1, 17, 8, -1, -1, 0, -1, -1, -1, 10800);
		func_108(2, "beat_approach", 4, 140f, 3, -2147467135, -1, 17, 10, 15, -1, 1, -1, -1, -1, 10800);
		func_108(3, "beat_arms_deal", 4, 140f, 3, 16781313, -1, 16, 10, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(4, "beat_bear_trap", 4, 140f, 2, 4202497, -1, 18, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(5, "beat_boat_attack", 4, 140f, 3, 16781569, -1, 17, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(6, "beat_booby_trap", 4, 140f, 3, -2130435839, -1, 15, 10, 4, -1, 4096, -1, -1, -1, 10800);
		func_108(7, "beat_bounty_transport", 4, 140f, 3, 8390689, -1, 17, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(8, "beat_burning_bodies", 1, 140f, 3, 1073815809, -1, 10, 9, 4, -1, 2056, 9, -1, -1, 10800);
		func_108(9, "beat_campfire_ambush", 4, 140f, 3, 50335745, -1, 17, 8, -1, -1, 2097152, -1, -1, -1, 10800);
		func_108(10, "beat_chain_gang", 4, 140f, 3, -2139090687, 8192, 17, 8, 4, -1, 2166785, -1, -1, -1, 10800);
		func_108(11, "beat_checkpoint", 4, 140f, 3, 16781345, -1, 12, 10, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(12, "beat_coach_robbery", 4, 140f, 3, -2130702335, -1, 12, 10, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(13, "beat_corpse_cart", 4, 140f, 1, 18878497, 128, 17, 10, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(14, "beat_crashed_wagon", 4, 140f, 3, -2145384447, -1, 17, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(15, "beat_del_lobo_posse", 4, 140f, 3, 16846881, -1, 10, 9, 4, -1, 0, -1, -1, -1, 5400);
		func_108(16, "beat_drunk_camp", 4, 140f, 3, 33570817, 128, 17, 11, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(17, "beat_escort", 4, 140f, 3, -2143281151, -1, 17, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(18, "beat_executions", 4, 140f, 1, 16781313, -1, 17, 10, 4, -1, 131072, -1, -1, -1, 10800);
		func_108(19, "beat_fleeing_trespasser", 1, 100f, 3, -2147449599, -1, 10, 9, 4, -1, 2056, -1, 26, -1, 10800);
		func_108(20, "beat_friendly_outdoorsman", 4, 140f, 5, 1073745937, 8192, 12, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(21, "beat_frozen_to_death", 4, 100f, 2, 16657, -1, 17, 8, -1, -1, 2048, -1, -1, -1, 10800);
		func_108(22, "beat_fussar_chase", 4, 140f, 3, 2305, -1, 10, 9, 4, -1, 0, -1, -1, -1, 10800);
		func_108(23, "beat_gang_camp_reminder", 2, 140f, 3, 129, -1, 10, 7, 5, -1, 67585, -1, 77, -1, 10800);
		func_108(24, "beat_gold_panner", 4, 140f, 5, 4101, -1, 17, 10, 4, -1, 2101248, 9, -1, -1, 10800);
		func_108(119, "beat_herbalist_camp", 2, 140f, 4, 301993985, -1, 12, 10, 4, -1, 32771, -1, -1, -1, 10800);
		func_108(27, "beat_horse_race", 4, 140f, 3, 1073745953, 8192, 11, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(28, "beat_hostage_rescue", 4, 140f, 2, 4202497, -1, 14, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(60, "beat_hunter", 4, 140f, 3, 8193, -1, 12, 10, 4, -1, 4096, 9, -1, -1, 10800);
		func_108(29, "beat_inbred_kidnap", 4, 140f, 1, 16781345, 128, 15, 13, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(30, "beat_injured_rider", 4, 140f, 3, -2147475455, -1, 16, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(31, "beat_kidnap_victim", 4, 140f, 3, 4198433, -1, 17, 10, 4, -1, 0, -1, -1, -1, 5400);
		func_108(32, "beat_rally_dispute", 4, 140f, 3, 4097, 128, 17, 10, 4, 82, 1, -1, -1, -1, 10800);
		func_108(33, "beat_rally", 4, 140f, 3, 2051, 128, 17, 10, 4, -1, 2101249, 77, -1, -1, 10800);
		func_108(34, "beat_rally_setup", 4, 140f, 3, 4097, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(35, "beat_laramie_gang_rustling", 4, 140f, 3, 16843777, 128, 17, 10, 66, -1, 0, -1, -1, -1, 10800);
		func_108(36, "beat_locked_safe", 4, 140f, 3, 8449, -1, 17, 10, 4, -1, 0, -1, -1, -1, 1800);
		func_108(37, "beat_lone_prisoner", 4, 140f, 3, 12591297, -1, 13, 10, 6, -1, 1, -1, -1, -1, 10800);
		func_108(38, "beat_lost_friend", 4, 140f, 3, 4202881, -1, 17, 10, 4, -1, 36864, -1, -1, -1, 10800);
		func_108(39, "beat_lost_man", 4, 140f, 3, 4202753, -1, 17, 10, 4, -1, 4105, -1, -1, -1, 10800);
		func_108(40, "beat_moonshine_camp", 4, 140f, 3, 33558785, -1, 14, 10, 4, -1, 4097, 77, -1, -1, 10800);
		func_108(41, "beat_murder_campfire", 4, 100f, 1, 1073758465, -1, 17, 7, 4, -1, 393728, -1, -1, -1, 10800);
		func_108(42, "beat_naked_swimmer", 7, 140f, 5, 8453, -1, 17, 10, 4, -1, 73729, -1, -1, -1, 10800);
		func_108(43, "beat_outlaw_looter", 4, 100f, 3, -1073737719, -1, 12, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(44, "beat_outlaw_transport", 4, 140f, 3, 564134945, -1, 17, 10, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(45, "beat_people_in_need_snake_bite", 4, 140f, 3, 4202497, -1, 12, 9, 4, -1, 1, -1, -1, -1, 10800);
		func_108(46, "beat_player_camp_attack", 4, 140f, 3, 151261185, -1, -1, 10, 4, -1, 77825, -1, -1, -1, 10800);
		func_108(47, "beat_player_camp_stranger", 4, 140f, 3, 134220033, -1, -1, -1, 4, -1, 77824, -1, -1, -1, 10800);
		func_108(48, "beat_poisoned", 4, 140f, 3, 4202625, -1, 21, 10, 4, -1, 1, 9, -1, -1, 10800);
		func_108(49, "beat_posse_breakout", 2, 140f, 3, -2147446655, -1, 17, 10, 6, -1, 1, -1, 14, -1, 5400);
		func_108(50, "beat_prison_wagon", 4, 140f, 3, 10493985, -1, 11, 9, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(51, "beat_rifle_practice", 4, 140f, 3, 553652481, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(53, "beat_savage_aftermath", 4, 140f, 1, 50405377, -1, 12, 9, 4, -1, 2232320, -1, -1, -1, 10800);
		func_108(54, "beat_savage_fight", 4, 140f, 1, 50401281, -1, 17, 10, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(56, "beat_savage_wagon", 4, 140f, 3, 1090592801, -1, 17, 10, 60, -1, 0, -1, -1, -1, 10800);
		func_108(55, "beat_savage_warning", 7, 140f, 3, 50339841, -1, 17, 10, 4, -1, 2097665, -1, -1, -1, 10800);
		func_108(57, "beat_sharp_shooter", 4, 140f, 3, 536875009, 8192, 11, 9, 4, -1, 1, 9, -1, -1, 10800);
		func_108(58, "beat_skipping_stones", 4, 140f, 5, 4373, 8192, 17, 10, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(59, "beat_spooked_horse", 1, 140f, 3, 8481, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(61, "beat_stalking_shadows", 2, 140f, 2, 289, 128, 12, 10, 4, -1, 4096, -1, -1, -1, 10800);
		func_108(62, "beat_stranded_rider", 4, 140f, 3, -2147475455, -1, 17, 11, 4, -1, 1, -1, -1, -1, 10800);
		func_108(63, "beat_traffic_attack", 4, 100f, 3, 16781345, -1, 12, 10, 60, -1, 1, -1, -1, -1, 5400);
		func_108(64, "beat_train_holdup", 4, 185f, 3, -1593834239, -1, 14, 10, 25, -1, 16387, 25, -1, -1, 10800);
		func_108(65, "beat_trapped_woman", 4, 140f, 3, -2143285247, -1, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(66, "beat_treasure_hunter", 4, 140f, 3, 8449, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(67, "beat_torturing_captive", 4, 140f, 1, 16777217, 128, 18, 10, 4, -1, 131073, -1, -1, -1, 10800);
		func_108(68, "beat_torch_procession", 2, 140f, 2, 8193, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(69, "beat_voice", 2, 140f, 3, 8193, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(70, "beat_wagon_threat", 4, 140f, 3, 16842785, -1, 16, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(71, "beat_washed_ashore", 2, 40f, 3, 8453, -1, 9, 8, 4, -1, 2049, -1, -1, -1, 10800);
		func_108(72, "beat_wilderness_hanging", 2, 100f, 3, -1073725439, -1, 17, 8, 4, -1, 0, -1, -1, -1, 10800);
		func_108(73, "beat_wild_man", 4, 100f, 3, 8449, -1, 9, 8, 4, -1, 69633, -1, -1, -1, 10800);
		func_108(74, "beat_wild_man_cave", 4, 100f, 3, 1073758465, -1, 17, 7, 4, -1, 393728, -1, -1, -1, 10800);
		func_108(75, "beat_bandito_breakout", 1, 50f, 3, 553717763, -1, -1, -1, 4, -1, 2048, 63, -1, -1, 10800);
		func_108(76, "beat_bandito_execution", 1, 50f, 3, 16844803, -1, -1, -1, 4, -1, 1, -1, -1, -1, 10800);
		func_108(77, "beat_brontes_town_encounter", 4, 30f, 3, 1090535426, -1, 11, 8, 4, -1, 1, 9, -1, -1, 10800);
		func_108(78, "beat_bronte_patrol", 4, 70f, 3, 16814083, -1, 11, 9, 29, -1, 0, 9, 31, -1, 10800);
		func_108(79, "beat_consequence", 2, 50f, 3, 16642, 16384, 8, 2, 4, -1, 67585, 77, -1, -1, 10800);
		func_108(80, "beat_dark_alley_ambush", 4, 50f, 3, 258, 128, 13, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(81, "beat_dark_alley_bum", 4, 50f, 3, 16386, -1, 10, 9, 4, -1, 0, 77, -1, -1, 10800);
		func_108(82, "beat_dark_alley_stabber", 4, 60f, 2, 8194, 128, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(83, "beat_dead_bodies", 4, 50f, 3, 69635, -1, 12, 10, 66, -1, 2097153, -1, -1, -1, 10800);
		func_108(84, "beat_dead_john", 3, 55f, 1, 147714, 128, 10, 9, 4, -1, 200961, -1, -1, -1, 10800);
		func_108(85, "beat_disabled_beggar", 4, 50f, 3, 16386, -1, 11, 9, 4, -1, 0, 77, -1, -1, 10800);
		func_108(86, "beat_domestic_dispute", 4, 60f, 3, 8467, -1, 11, 8, 4, -1, 4097, 9, -1, -1, 10800);
		func_108(87, "beat_drown_murder", 4, 50f, 1, 8194, 128, 17, 10, 4, -1, 131073, -1, -1, 58, 10800);
		func_108(88, "beat_drunk_dueler", 4, 60f, 3, 67772674, -1, 17, 11, 6, -1, 1, -1, -1, -1, 10800);
		func_108(89, "beat_duel_boaster", 4, 60f, 3, 67780610, 128, 17, 10, 6, -1, 1, -1, -1, -1, 10800);
		func_108(90, "beat_duel_winner", 4, 60f, 3, 528386, -1, 17, 11, 6, -1, 1, -1, -1, -1, 10800);
		func_108(91, "beat_fleeing_family", 4, 55f, 3, 1073807362, -1, 17, 10, 4, -1, 2101249, -1, -1, -1, 10800);
		func_108(92, "beat_foot_robbery", 4, 45f, 3, 16785410, -1, 11, 10, 4, -1, 16385, -1, -1, -1, 10800);
		func_108(94, "beat_gang_ped1_encounter", 4, 30f, 3, 1090568194, -1, 10, 8, 4, -1, 1, 9, -1, -1, 10800);
		func_108(95, "beat_intimidation_tactics", 4, 50f, 3, 16785666, 512, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(96, "beat_lemoyne_town_encounter", 4, 50f, 3, 1090535426, -1, 11, 8, 4, -1, 16385, 9, -1, -1, 10800);
		func_108(97, "beat_lost_dog", 4, 60f, 5, 4202626, -1, 17, 10, 4, 82, 1, -1, -1, -1, 10800);
		func_108(98, "beat_lost_drunk", 4, 60f, 3, 8322, -1, 15, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(99, "beat_odriscoll_town_encounter", 4, 45f, 3, 1090568194, -1, 11, 8, 5, -1, 1, 9, -1, 65, 10800);
		func_108(100, "beat_on_the_run", 4, 90f, 3, 8578, -1, 13, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(101, "beat_parlor_ambush", 4, 70f, 1, 16916738, -1, 12, 10, 4, -1, 1073942529, -1, -1, -1, 10800);
		func_108(102, "beat_peeping_tom", 4, 60f, 4, 8450, 128, 11, 10, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(103, "beat_pickpocket", 4, 30f, 3, 131330, -1, 17, 10, 6, -1, 4097, -1, -1, -1, 10800);
		func_108(104, "beat_piss_pot", 4, 60f, 3, 2050, -1, 12, 10, 4, -1, 4096, 9, -1, -1, 10800);
		func_108(105, "beat_police_chase", 4, 50f, 3, 4354, -1, 13, 10, 4, -1, 1073745920, -1, -1, -1, 10800);
		func_108(106, "beat_public_hanging", 4, 60f, 2, 4354, 8192, 10, 9, 4, -1, 81921, 77, -1, -1, 10800);
		func_108(107, "beat_rat_infestation", 4, 60f, 3, 16642, -1, 10, 9, 4, -1, 69633, -1, -1, -1, 10800);
		func_108(108, "beat_rowdy_drunks", 4, 40f, 3, 67117074, 128, 11, 9, 5, -1, 69633, -1, -1, -1, 10800);
		func_108(109, "beat_show_off", 4, 60f, 3, 1073750018, 16384, 17, 10, 4, -1, 1, 77, -1, -1, 10800);
		func_108(110, "beat_slum_ambush", 4, 70f, 2, 67248386, -1, 15, 10, 31, -1, 1073743873, -1, -1, -1, 10800);
		func_108(111, "beat_street_fight", 4, 40f, 3, 67117314, -1, 12, 8, 5, -1, 1, -1, -1, -1, 10800);
		func_108(112, "beat_taunting", 4, 50f, 3, 8194, -1, 17, 10, 4, -1, 1, 77, -1, -1, 10800);
		func_108(113, "beat_town_burial", 4, 60f, 3, 8210, 8192, -1, -1, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(114, "beat_town_confrontation", 3, 20f, 3, 1073750146, -1, 15, 9, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(116, "beat_town_widow", 3, 20f, 3, 8322, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(115, "beat_town_robbery", 4, 60f, 3, 8194, 128, 13, 10, 5, -1, 1, -1, -1, -1, 10800);
		func_108(117, "beat_town_trouble", 4, 60f, 3, 16844802, -1, 15, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(118, "beat_wealthy_couple", 4, 50f, 1, 4098, 128, 17, 10, 4, -1, 1, 57, -1, -1, 10800);
	}
	return 1;
}

int func_14()
{
	func_110(68736);
	return 1;
}

int func_15()
{
	func_111(0, 6, 1);
	func_111(0, 7, 1);
	func_111(0, 1, 1);
	func_111(0, 3, 1);
	func_111(0, 10, 1);
	func_111(0, 9, 1);
	func_111(0, 4, 1);
	func_111(1, 1, 1);
	func_111(1, 10, 1);
	func_111(1, 6, 1);
	func_111(1, 3, 1);
	func_111(2, 7, 1);
	func_111(2, 1, 1);
	func_111(2, 9, 1);
	func_111(2, 10, 1);
	func_111(2, 4, 1);
	func_111(2, 3, 1);
	func_111(2, 0, 1);
	func_111(2, 2, 1);
	func_111(2, 11, 1);
	func_111(3, 9, 1);
	func_111(3, 11, 2);
	func_111(75, 15, 1);
	func_112(75, 16777216, 1);
	func_111(76, 13, 1);
	func_112(76, 1048576, 1);
	func_111(4, 1, 1);
	func_111(4, 6, 1);
	func_111(4, 10, 1);
	func_111(4, 3, 1);
	func_112(77, 8192, 2);
	func_111(5, 10, 2);
	func_111(6, 8, 1);
	func_111(6, 10, 2);
	func_111(7, 1, 2);
	func_111(7, 3, 2);
	func_111(7, 10, 2);
	func_111(7, 6, 2);
	func_111(7, 9, 2);
	func_112(78, 8192, 2);
	func_111(78, 0, 2);
	func_111(8, 15, 2);
	func_111(9, 10, 1);
	func_111(10, 11, 1);
	func_111(11, 11, 2);
	func_111(11, 0, 2);
	func_111(12, 1, 1);
	func_111(12, 3, 1);
	func_111(12, 9, 1);
	func_111(12, 11, 1);
	func_111(12, 12, 1);
	func_111(12, 13, 1);
	func_111(12, 14, 1);
	func_111(12, 15, 1);
	func_111(12, 16, 1);
	func_111(12, 4, 1);
	func_112(79, 2097152, 1);
	func_112(79, 2, 1);
	func_112(79, 65536, 1);
	func_112(79, 524288, 1);
	func_111(79, 9, 1);
	func_111(79, 10, 1);
	func_111(79, 11, 1);
	func_111(79, 1, 1);
	func_111(13, 10, 2);
	func_111(13, 2, 2);
	func_111(14, 1, 2);
	func_111(14, 11, 1);
	func_112(80, 8192, 2);
	func_111(80, 0, 2);
	func_112(81, 8192, 4);
	func_111(81, 0, 4);
	func_112(81, 8, 2);
	func_111(81, 4, 2);
	func_112(82, 8192, 2);
	func_111(82, 0, 2);
	func_112(82, 8, 2);
	func_111(82, 4, 2);
	func_112(83, 16777216, 2);
	func_111(83, 15, 2);
	func_112(84, 2097152, 2);
	func_111(84, 9, 2);
	func_111(15, 13, 3);
	func_111(15, 15, 5);
	func_111(15, 16, 4);
	func_111(15, 14, 2);
	func_112(85, 8192, 2);
	func_111(85, 0, 2);
	func_111(86, 10, 1);
	func_111(86, 11, 1);
	func_112(86, 65538, 1);
	func_112(87, 2097152, 1);
	func_112(87, 65536, 1);
	func_112(87, 4194304, 1);
	func_111(16, 1, 1);
	func_111(16, 4, 1);
	func_111(16, 9, 1);
	func_111(16, 11, 1);
	func_111(16, 10, 1);
	func_111(16, 2, 1);
	func_111(88, 10, 1);
	func_111(88, 9, 1);
	func_112(88, 4194304, 1);
	func_112(88, 2097152, 1);
	func_111(89, 11, 1);
	func_112(89, 65536, 1);
	func_111(90, 9, 1);
	func_111(90, 10, 1);
	func_112(90, 2097152, 1);
	func_112(90, 4194304, 1);
	func_111(17, 3, 1);
	func_111(17, 11, 1);
	func_111(17, 0, 1);
	func_111(17, 9, 1);
	func_111(17, 6, 1);
	func_111(18, 11, 2);
	func_111(18, 0, 2);
	func_111(18, 2, 2);
	func_112(91, 16777216, 1);
	func_111(19, 11, 1);
	func_112(19, 65536, 1);
	func_112(19, 64, 1);
	func_112(92, 2162688, 1);
	func_111(20, 1, 1);
	func_111(20, 3, 1);
	func_111(20, 9, 1);
	func_111(20, 4, 1);
	func_111(20, 11, 1);
	func_111(20, 10, 1);
	func_111(21, 7, 1);
	func_111(22, 8, 1);
	func_112(93, 8192, 1);
	func_111(23, 0, 3);
	func_111(23, 1, 3);
	func_111(23, 2, 3);
	func_111(23, 15, 3);
	func_111(23, 3, 3);
	func_111(23, 4, 3);
	func_111(23, 13, 3);
	func_111(23, 5, 3);
	func_111(23, 6, 3);
	func_111(23, 7, 3);
	func_111(23, 9, 3);
	func_111(23, 10, 3);
	func_111(23, 14, 3);
	func_111(23, 10, 3);
	func_111(23, 11, 3);
	func_111(23, 12, 3);
	func_112(94, 2097152, 4);
	func_112(94, 65536, 4);
	func_112(94, 8192, 2);
	func_111(24, 9, 1);
	func_111(24, 1, 2);
	func_111(24, 10, 2);
	func_111(24, 3, 2);
	func_111(24, 6, 2);
	func_111(119, 1, 1);
	func_111(119, 4, 1);
	func_111(119, 6, 1);
	func_111(119, 15, 1);
	func_111(119, 9, 1);
	func_111(119, 10, 1);
	func_111(119, 11, 1);
	func_111(119, 12, 1);
	func_111(27, 11, 2);
	func_111(27, 0, 2);
	func_111(27, 3, 2);
	func_111(27, 10, 2);
	func_111(27, 9, 1);
	func_111(27, 1, 2);
	func_111(27, 6, 2);
	func_111(28, 0, 1);
	func_111(28, 11, 1);
	func_111(28, 1, 1);
	func_111(29, 10, 2);
	func_111(29, 2, 2);
	func_111(30, 10, 1);
	func_111(30, 4, 1);
	func_111(30, 0, 2);
	func_111(30, 2, 2);
	func_112(95, 8192, 1);
	func_111(31, 2, 1);
	func_111(31, 11, 1);
	func_111(31, 0, 1);
	func_111(31, 10, 1);
	func_111(31, 3, 1);
	func_111(31, 1, 1);
	func_111(31, 6, 1);
	func_111(31, 9, 1);
	func_111(32, 1, 1);
	func_111(32, 10, 1);
	func_111(32, 9, 1);
	func_111(32, 11, 1);
	func_111(32, 2, 1);
	func_111(33, 1, 2);
	func_111(33, 10, 2);
	func_111(33, 9, 2);
	func_111(33, 11, 2);
	func_111(33, 2, 2);
	func_112(33, 16, 2);
	func_111(34, 1, 1);
	func_111(34, 10, 1);
	func_111(34, 9, 1);
	func_111(34, 11, 1);
	func_111(34, 2, 1);
	func_111(35, 1, 1);
	func_112(96, 73728, 3);
	func_111(36, 0, 2);
	func_111(36, 11, 2);
	func_111(36, 1, 2);
	func_111(36, 2, 2);
	func_111(36, 10, 2);
	func_111(37, 11, 2);
	func_111(37, 9, 2);
	func_111(37, 0, 2);
	func_111(37, 2, 2);
	func_112(97, 512, 1);
	func_112(97, 524288, 1);
	func_112(98, 2097152, 2);
	func_112(98, 4194304, 1);
	func_111(38, 7, 1);
	func_111(39, 1, 1);
	func_111(40, 2, 2);
	func_111(40, 0, 2);
	func_111(40, 11, 2);
	func_111(40, 10, 2);
	func_111(40, 3, 2);
	func_111(40, 9, 2);
	func_111(40, 1, 2);
	func_111(40, 6, 2);
	func_111(41, 1, 1);
	func_111(41, 11, 1);
	func_111(41, 9, 1);
	func_111(42, 11, 2);
	func_111(99, 9, 2);
	func_112(99, 2097152, 2);
	func_112(100, 524288, 1);
	func_111(43, 9, 1);
	func_111(43, 1, 1);
	func_111(43, 0, 1);
	func_111(43, 2, 1);
	func_111(43, 4, 1);
	func_111(43, 6, 1);
	func_111(43, 10, 1);
	func_111(43, 11, 1);
	func_111(43, 13, 1);
	func_111(43, 14, 1);
	func_111(43, 15, 1);
	func_111(43, 16, 1);
	func_111(43, 12, 1);
	func_111(44, 1, 1);
	func_111(44, 9, 1);
	func_111(44, 11, 1);
	func_111(44, 0, 1);
	func_112(101, 65536, 2);
	func_112(102, 2097152, 2);
	func_112(102, 524288, 1);
	func_111(103, 0, 1);
	func_111(103, 10, 1);
	func_112(103, 8192, 2);
	func_112(103, 4194304, 1);
	func_111(45, 11, 2);
	func_111(45, 0, 2);
	func_111(45, 9, 1);
	func_111(104, 0, 3);
	func_112(104, 8192, 3);
	func_111(47, 10, 1);
	func_111(46, 10, 2);
	func_111(46, 12, 2);
	func_111(48, 11, 1);
	func_111(48, 10, 1);
	func_111(48, 0, 1);
	func_112(105, 8192, 2);
	func_111(49, 1, 1);
	func_111(49, 9, 1);
	func_111(50, 1, 3);
	func_111(50, 9, 3);
	func_111(50, 10, 3);
	func_111(50, 2, 3);
	func_111(50, 11, 3);
	func_111(50, 0, 3);
	func_112(106, 2097152, 3);
	func_112(106, 65536, 2);
	func_112(106, 8, 2);
	func_112(106, 8192, 2);
	func_112(107, 8192, 2);
	func_111(51, 11, 1);
	func_112(108, 4194304, 2);
	func_112(108, 2097152, 2);
	func_112(108, 16777216, 1);
	func_111(53, 12, 2);
	func_111(54, 12, 2);
	func_111(56, 12, 2);
	func_111(56, 4, 3);
	func_111(55, 12, 1);
	func_111(57, 0, 3);
	func_111(57, 11, 3);
	func_111(57, 9, 3);
	func_111(57, 1, 3);
	func_111(57, 15, 3);
	func_111(57, 14, 3);
	func_111(57, 13, 3);
	func_112(109, 524288, 1);
	func_112(109, 65536, 1);
	func_112(109, 2, 2);
	func_111(58, 9, 2);
	func_111(58, 11, 2);
	func_111(58, 1, 2);
	func_112(110, 8192, 1);
	func_111(59, 0, 2);
	func_111(60, 6, 1);
	func_111(60, 10, 1);
	func_111(60, 1, 1);
	func_111(60, 9, 1);
	func_111(60, 4, 1);
	func_111(61, 0, 2);
	func_111(62, 1, 2);
	func_111(62, 7, 2);
	func_111(62, 6, 2);
	func_111(62, 12, 2);
	func_111(62, 4, 2);
	func_111(62, 9, 2);
	func_112(111, 2097152, 4);
	func_112(111, 4194304, 2);
	func_112(111, 8, 1);
	func_112(112, 8192, 1);
	func_111(67, 10, 1);
	func_111(68, 0, 2);
	func_111(68, 2, 2);
	func_112(113, 8, 2);
	func_112(113, 65536, 1);
	func_112(115, 2097152, 2);
	func_111(115, 9, 2);
	func_112(117, 16777216, 2);
	func_112(114, 2097152, 1);
	func_112(114, 65536, 1);
	func_112(114, 8192, 1);
	func_112(114, 4194304, 1);
	func_112(116, 2162690, 1);
	func_111(63, 1, 1);
	func_111(64, 9, 1);
	func_111(64, 11, 1);
	func_111(64, 0, 1);
	func_111(64, 15, 1);
	func_111(64, 14, 1);
	func_111(64, 13, 1);
	func_111(65, 6, 2);
	func_111(65, 9, 2);
	func_111(65, 11, 2);
	func_111(65, 10, 2);
	func_111(66, 1, 3);
	func_111(69, 0, 1);
	func_111(69, 2, 1);
	func_111(70, 1, 2);
	func_111(71, 10, 1);
	func_111(71, 9, 1);
	func_111(71, 4, 1);
	func_111(71, 8, 1);
	func_112(118, 8200, 1);
	func_111(72, 0, 2);
	func_111(72, 10, 2);
	func_111(72, 2, 2);
	func_111(73, 10, 3);
	func_111(74, 10, 1);
	func_113();
	return 1;
}

int func_16()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		if (func_114(iVar1))
		{
			if (!Global_40 || bVar0)
			{
				Global_40.f_9274[iVar1] = 0;
				if (func_115() != -1)
				{
					Global_36638[iVar1] = 0;
				}
			}
			if (iVar1 == 43)
			{
				func_116(43, 1);
			}
		}
		iVar1++;
	}
	return 1;
}

int func_17()
{
	func_117();
	return 1;
}

int func_18()
{
	return 1;
}

int func_19()
{
	if (func_115() != -1)
	{
		return 1;
	}
	func_118(2, "loanshark_catfish", 96, 1308.708f, -2342.772f, 41.4922f, 1324.754f, -2307.706f, 47.07406f, 65f, 0, -1, -1, 1123680256 /* Float: 125f */, 65, 1123680256 /* Float: 125f */);
	func_118(7, "loanshark_horseChase1", 66, 1120.147f, 503.3499f, 94.8851f, 1120.147f, 503.3499f, 94.8851f, 40f, 0, -1, -1, 200f, 65, 1123680256 /* Float: 125f */);
	func_118(1, "loanshark_hunter", -1, -1781.541f, -180.863f, 194.142f, -1733.015f, -200.884f, 182.1981f, 75f, 0, -1, -1, 200f, 65, 140f);
	func_118(5, "loanshark_miner1", 78, 2757.363f, 1370.689f, 68.29453f, 2792.968f, 1347.938f, 72.24879f, 50f, 0, -1, 6, 1123680256 /* Float: 125f */, 1, 1123680256 /* Float: 125f */);
	func_118(6, "loanshark_miner2", 82, 2685.276f, 900.0816f, 90.9889f, 2689.845f, 900.8306f, 96.28243f, 35f, 0, -1, -1, 1123680256 /* Float: 125f */, 81, 1123680256 /* Float: 125f */);
	func_118(8, "loanshark_sellHorse1", -1, -610.8f, -25.3f, 85.5f, -619.389f, -28.8628f, 84.4293f, 50f, 0, -1, -1, 1123680256 /* Float: 125f */, 65, 1123680256 /* Float: 125f */);
	func_118(4, "loanshark_soldier", -1, 1411.856f, 1166.743f, 184.1507f, 1418.006f, 1129.67f, 183.486f, 120f, 0, -1, 5, 150f, 81, 140f);
	func_118(3, "loanshark_undertaker", 105, 1300.562f, -1318.563f, 76.5193f, 1306.878f, -1313.599f, 79.70631f, 15f, 0, -1, -1, 1123680256 /* Float: 125f */, 65, 1123680256 /* Float: 125f */);
	func_118(0, "loanshark_womanCry", 69, 1424.889f, 383.4419f, 89.48783f, 1422.9f, 329.34f, 87.41f, 65f, 0, -1, -1, 170f, 67, 100f);
	return 1;
}

int func_20()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_119(0, joaat("AV_BARBER_SHAVING"), 2, -1, 5, 1);
		func_119(1, joaat("AV_BODY_TOSS"), 8192, -1, 0, 0);
		func_119(2, joaat("AV_BUTCHER_SHARED"), 3, 77, 23, 1);
		func_119(3, joaat("AV_BUTCHER_SHARED"), 3, 77, 23, 1);
		func_119(4, joaat("AV_CHAMBERPOT_TOSS"), 3, 77, 0, 1);
		func_119(6, joaat("AV_DROP_RABBIT_TABLE"), 2, 77, 0, 0);
		func_119(7, joaat("AV_GET_DIRECTIONS"), 3, 77, 0, 1);
		func_119(47, joaat("AV_HOBO_TRAIN_HOP"), 3, 77, 0, 0);
		func_119(9, joaat("AV_LIGHT_SMOKE"), 8192, 77, 0, 1);
		func_119(10, joaat("AV_LUMBER_PASS"), 64, 77, 43, 0);
		func_119(11, joaat("AV_LUMBER_PASS"), 64, 77, 43, 0);
		func_119(12, joaat("AV_MAN_JUMP_FENCE"), 8192, -1, 0, 0);
		func_119(13, joaat("AV_MAN_STAND_AT_WAGON"), 8192, 77, 0, 1);
		func_119(14, joaat("AV_PUMP_CART"), -1, -1, 0, 1);
		func_119(16, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(17, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(18, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(19, joaat("AV_SHOPKEEPER_RESTOCK"), 3, -1, 58, 1);
		func_119(20, joaat("AV_STAGE_COACH"), 3, 77, 0, 0);
		func_119(21, joaat("AV_STARTING_TO_RAIN"), 3, 2, 62, 0);
		func_119(22, joaat("AV_STARTING_TO_RAIN"), 3, 2, 62, 0);
		func_119(23, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(24, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(25, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(26, joaat("AV_WALL_VOMIT"), 3, 77, 69, 1);
		func_119(27, joaat("AV_WAGON_BARREL"), 3, 77, 0, 0);
		func_119(28, joaat("AV_WAGON_SWEEPER"), 2, 77, 0, 0);
		func_119(29, joaat("AV_WAGON_BARREL"), 64, 77, 0, 0);
		func_119(30, joaat("AV_WALK_WITH_HORSE"), 3, 77, 0, 1);
		func_119(31, joaat("AV_WHISPER_SIT"), 14, 77, 75, 0);
		func_119(32, joaat("AV_WHISPER_SIT"), 14, 77, 75, 0);
		func_119(33, joaat("AV_WHORE_GIVE_MONEY"), 12, -1, 0, 1);
		func_119(34, joaat("AV_AMB_CAMP_ROBBERY"), -1, -1, 77, 1);
		func_119(35, joaat("AV_BOAT_PLACEMENT"), -1, 77, 0, 4);
		func_119(36, joaat("AV_ANIMAL_ATTACK"), 8192, 77, 49, 3);
		func_119(5, joaat("AV_SHEEP_GRAZING"), 3, 57, 41, 3);
		func_119(37, joaat("AV_TRAVELLER_GALLOP_PAST"), -1, 57, 66, 4);
		func_119(38, joaat("AV_ANIMAL_CARRY_RIDE"), 3, 77, 37, 1);
		func_119(39, joaat("AV_ANIMAL_CARRY_RIDE"), 8196, 57, 37, 2);
		func_119(40, joaat("AV_DOG_IN_WAGON"), 8196, 77, 67, 2);
		func_119(41, joaat("AV_ANIMAL_CARRY_RIDE"), 8192, 77, 37, 2);
		func_119(42, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8192, 77, 64, 4);
		func_119(43, joaat("AV_FISHING_RIVER"), 5, 77, 38, 3);
		func_119(44, joaat("AV_FISHING_RIVER"), 5, 77, 38, 3);
		func_119(45, joaat("AV_ANIMAL_ATTACK"), 8192, 57, 49, 3);
		func_119(46, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 37, 4);
		func_119(8, joaat("AV_SHEEP_GRAZING"), 3, 77, 41, 3);
		func_119(48, joaat("AV_MACFARLANE_FARMER"), 3, 77, 60, 3);
		func_119(51, joaat("AV_MAN_WITH_LANTERN"), 128, 57, 65, 4);
		func_119(49, joaat("AV_TRAVELLER_GALLOP_PAST"), 8196, 77, 65, 4);
		func_119(50, joaat("AV_MAN_SIT_READ"), 3, 77, 53, 2);
		func_119(52, joaat("AV_SLOW_RIDER"), 8196, 77, 66, 4);
		func_119(53, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 37, 4);
		func_119(54, joaat("AV_WATER_HORSE"), 8192, 77, 53, 3);
		func_119(55, joaat("AV_RIDER_GALLOP"), 8192, 57, 65, 4);
		func_119(56, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8196, 77, 66, 4);
		func_119(57, joaat("AV_RIDGELINE_NATIVE"), 8196, 77, 45, 2);
		func_119(58, joaat("AV_RIDGELINE_RIDER"), 8196, 77, 65, 2);
		func_119(59, joaat("AV_ROVING_HERD"), 8192, -1, 41, 3);
		func_119(15, joaat("AV_SHEEP_GRAZING"), 3, 77, 41, 3);
		func_119(60, joaat("AV_SLOW_RIDER"), -1, 77, 66, 4);
		func_119(61, joaat("AV_TRAVELLER_GALLOP_PAST"), 8192, 57, 68, 4);
		func_119(62, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8196, 77, 64, 4);
		func_119(63, joaat("AV_FEMALE_RIDER_MALE_WALKER"), 8196, 77, 64, 4);
		func_119(64, joaat("AV_TRAVELLER_GALLOP_PAST"), 8196, 57, 65, 4);
		func_119(66, joaat("AV_WAGON_BACK_PASSENGER"), 8196, 77, 67, 2);
		func_119(65, joaat("AV_WAGON_MUSIC"), 8196, 77, 67, 4);
		func_119(67, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(68, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(69, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(70, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(71, joaat("AV_WALK_HORSE_CARRY_DEER"), 8196, 57, 73, 4);
		func_119(72, joaat("AV_WALK_WITH_DOG"), 8196, 77, 74, 4);
		func_119(73, joaat("AV_WALK_WITH_DOG"), 8192, 77, 74, 4);
		func_119(74, joaat("AV_WATER_HORSE"), 8196, 77, 66, 2);
		func_119(75, joaat("AV_ALLIGATOR_BOAR_LEG"), 5, -1, 49, 3);
		func_119(76, joaat("AV_ALLIGATOR_BOAR_NECK"), 5, -1, 49, 3);
		func_119(77, joaat("AV_ALLIGATOR_EAT_DEAD_BIRD"), 8448, -1, 49, 3);
		func_119(78, joaat("AV_CROSS_ROAD"), 8192, -1, 2, 4);
		func_119(79, joaat("AV_BIRD_FLEE_SWARM"), 16, -1, 7, 1);
		func_119(80, joaat("AV_BIRD_FENCE_SWARM"), 16, -1, 7, 1);
		func_119(82, joaat("AV_BEAR_INTIMIDATE_WOLF"), 3, 77, 49, 3);
		func_119(83, joaat("AV_BEAR_RUN_CATCH_FISH"), 3, 57, 49, 3);
		func_119(84, joaat("AV_BEAR_SCRATCH_BACK"), 7, 77, 50, 3);
		func_119(85, joaat("AV_BEAR_VS_WOLVES"), 8192, 77, 49, 3);
		func_119(81, joaat("AV_BEARBLACK_INTIMIDATE_BEARBLACK"), 8192, 77, 49, 3);
		func_119(86, joaat("AV_BEAVER_SWIM_WITH_BRANCH"), 8192, -1, 46, 4);
		func_119(87, joaat("AV_BIG_CAT_AMBUSH_DEER"), 5, 57, 49, 3);
		func_119(88, joaat("AV_BIG_CAT_KILL_RACCOON"), 5, -1, 49, 3);
		func_119(89, joaat("AV_BIRD_FENCE_SWARM"), 8192, 77, 11, 1);
		func_119(90, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 11, 1);
		func_119(91, joaat("AV_BIRD_FLEE_SWARM"), 8192, 57, 13, 1);
		func_119(92, joaat("AV_BIRD_FLEE_SWARM"), 8192, 57, 13, 1);
		func_119(93, joaat("AV_BIRD_FLEE_SWARM"), 8192, 57, 13, 1);
		func_119(94, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 10, 1);
		func_119(95, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 10, 1);
		func_119(96, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 11, 1);
		func_119(97, joaat("AV_BIRD_FLEE_SWARM"), 128, 77, 11, 1);
		func_119(98, joaat("AV_BIRD_FLEE_SWARM"), 8196, 77, 11, 1);
		func_119(99, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 10, 1);
		func_119(100, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 12, 1);
		func_119(101, joaat("AV_BIRD_FLEE_SWARM"), 8192, 77, 12, 1);
		func_119(103, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(104, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(105, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(106, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(107, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(108, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(109, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(110, joaat("AV_BIRD_LAND"), 16, 77, 14, 4);
		func_119(111, joaat("AV_BIRD_LAND"), 8192, 77, 14, 4);
		func_119(112, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(113, joaat("AV_BIRD_LAND"), 8192, 77, 16, 4);
		func_119(114, joaat("AV_BIRD_LAND_SWARM"), 8196, 77, 15, 1);
		func_119(115, joaat("AV_BIRD_LAND_SWARM"), 8192, 77, 15, 1);
		func_119(116, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(117, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(118, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(119, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(120, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 17, 1);
		func_119(121, joaat("AV_BIRD_ON_ANIMAL"), 8192, 9, 44, 1);
		func_119(122, joaat("AV_BIRD_SWARM"), 8192, 9, 10, 4);
		func_119(123, joaat("AV_BIRD_FENCE_SWARM"), 8192, 77, 12, 1);
		func_119(102, joaat("AV_BIRDS_IN_TREE"), 8192, 77, 10, 1);
		func_119(124, joaat("AV_FOX_SIT"), 8192, 57, 20, 4);
		func_119(125, joaat("AV_CROSS_ROAD"), 8196, -1, 3, 1);
		func_119(126, joaat("AV_BUCK_AND_DOE"), 5, 77, 47, 2);
		func_119(127, joaat("AV_BUCKS_FIGHTING"), 5, 77, 47, 1);
		func_119(128, joaat("AV_BUFFALO_VS_BUFFALO"), 8192, -1, 48, 1);
		func_119(129, joaat("AV_RIDGELINE_ANIMAL"), 5, 77, 48, 1);
		func_119(130, joaat("AV_FOX_SIT"), 8196, -1, 18, 4);
		func_119(131, joaat("AV_FOX_SIT"), -1, -1, 18, 4);
		func_119(132, joaat("AV_FOX_SIT"), 8192, 57, 20, 4);
		func_119(133, joaat("AV_CAT_CARRY_RAT"), 8192, 77, 27, 4);
		func_119(134, joaat("AV_CAT_CATCH_BIRD"), 8192, 77, 27, 4);
		func_119(135, joaat("AV_CROSS_ROAD"), 8192, -1, 3, 4);
		func_119(136, joaat("AV_COYOTE_CATCH_SQUIRREL"), 8192, 57, 51, 2);
		func_119(137, joaat("AV_ANIMAL_SCAVENGER"), 8196, 57, 51, 2);
		func_119(138, joaat("AV_WOLF_TAKEDOWN_MISS"), 8196, 77, 49, 3);
		func_119(144, joaat("AV_FOX_SIT"), 8196, -1, 19, 4);
		func_119(139, joaat("AV_CROWS_AND_EAGLES_EAT_DEER"), 8196, 57, 56, 4);
		func_119(140, joaat("AV_CROWS_AND_VULTURES_EAT_DEER"), 8196, 57, 56, 4);
		func_119(141, joaat("AV_CROWS_AND_VULTURES_EAT_DEER"), 8196, 57, 56, 1);
		func_119(142, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 4);
		func_119(143, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 1);
		func_119(145, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(146, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(147, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(148, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(149, joaat("AV_DEAD_HORSE"), -1, -1, 39, 1);
		func_119(150, joaat("AV_DEAD_HORSE"), -1, -1, 39, 1);
		func_119(151, joaat("AV_DEAD_ANIMAL"), -1, -1, 61, 4);
		func_119(152, joaat("AV_DEAD_ANIMAL"), -1, -1, 61, 4);
		func_119(153, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(154, joaat("AV_DEAD_ANIMAL"), -1, -1, 61, 4);
		func_119(155, joaat("AV_DEAD_ANIMAL"), -1, -1, 39, 1);
		func_119(156, joaat("AV_DEER_ANTLERS_STUCK"), -1, -1, 47, 1);
		func_119(157, joaat("AV_CROSS_ROAD"), 8196, -1, 3, 1);
		func_119(158, joaat("AV_DEER_TREE_RUB"), 8196, 77, 47, 1);
		func_119(159, joaat("AV_DISCOVERABLE_PARAKEET"), 8192, 57, 25, 1);
		func_119(160, joaat("AV_DOG_CHASE_CAT"), 8192, 77, 28, 1);
		func_119(161, joaat("AV_DOG_CHASE_TAIL"), 8192, 77, 28, 2);
		func_119(162, joaat("AV_DOGS_PLAYING"), 7, 77, 28, 1);
		func_119(163, joaat("AV_BIRD_FLEE_SWARM"), 8192, 57, 13, 1);
		func_119(164, joaat("AV_EAGLE_CATCH_FISH"), 8192, 77, 30, 1);
		func_119(165, joaat("AV_EAGLE_CATCH_RABBIT"), 8192, 77, 29, 1);
		func_119(166, joaat("AV_EAGLE_CATCH_SEASNAKE"), 8192, 77, 30, 1);
		func_119(167, joaat("AV_EAGLE_DIVE_CATCH_FISH"), 8192, 77, 30, 1);
		func_119(168, joaat("AV_FOX_SIT"), 8192, 57, 18, 4);
		func_119(169, joaat("AV_FOX_CATCH_RODENT"), 8192, 77, 51, 2);
		func_119(170, joaat("AV_FOX_HUNT_IN_SNOW"), 3, 57, 51, 1);
		func_119(171, joaat("AV_CROSS_ROAD"), 16, -1, 2, 1);
		func_119(172, joaat("AV_FOX_SIT"), 8196, 57, 46, 1);
		func_119(173, joaat("AV_CROSS_ROAD"), 8192, -1, 4, 1);
		func_119(174, joaat("AV_HAWK_CATCH_SNAKE"), 8192, 77, 29, 1);
		func_119(175, joaat("AV_HAWK_CATCH_SNAKE"), 8192, 77, 29, 1);
		func_119(176, joaat("AV_FOX_SIT"), 8192, 57, 18, 4);
		func_119(177, joaat("AV_HAWK_CATCH_SNAKE"), 8192, 77, 29, 1);
		func_119(178, joaat("AV_RIDGELINE_ANIMAL"), 8192, 77, 46, 1);
		func_119(180, joaat("AV_CROSS_ROAD"), 8192, -1, 3, 4);
		func_119(179, joaat("AV_CROSS_ROAD"), 8192, -1, 3, 4);
		func_119(181, joaat("AV_CROSS_ROAD"), 5, -1, 2, 1);
		func_119(182, joaat("AV_MANGY_DOG_AND_VULTURES"), 20, 57, 56, 1);
		func_119(183, joaat("AV_RIDGELINE_ANIMAL"), 8192, 57, 44, 1);
		func_119(184, joaat("AV_MOOSE_SLIPPING"), 8192, 57, 44, 2);
		func_119(185, joaat("AV_CROSS_ROAD"), 8192, -1, 2, 4);
		func_119(186, joaat("AV_OWL_CATCH_RAT"), 20, 57, 29, 1);
		func_119(187, joaat("AV_FOX_SIT"), 20, 57, 18, 4);
		func_119(188, joaat("AV_PELICAN_DIVE"), 8192, 57, 30, 1);
		func_119(189, joaat("AV_FOX_SIT"), 8192, 57, 18, 4);
		func_119(190, joaat("AV_RIDGELINE_ANIMAL"), 8192, 2, 40, 4);
		func_119(191, joaat("AV_CROSS_ROAD"), 8192, -1, 4, 1);
		func_119(192, joaat("AV_SQUIRREL_CHASE_SQUIRREL"), 8192, 57, 3, 4);
		func_119(193, joaat("AV_CROSS_ROAD"), 8192, 57, 3, 4);
		func_119(194, joaat("AV_RIDGELINE_ANIMAL"), 128, 57, 55, 4);
		func_119(195, joaat("AV_CROSS_ROAD"), 16, -1, 2, 4);
		func_119(197, joaat("AV_CROSS_ROAD"), 8192, -1, 4, 1);
		func_119(196, joaat("AV_RAMS_HEADBUTT"), 8196, 57, 46, 1);
		func_119(198, joaat("AV_RATS_EAT_DEER"), -1, 57, 55, 3);
		func_119(199, joaat("AV_RATS_EATING_GROUP"), -1, 57, 55, 3);
		func_119(200, joaat("AV_FOX_SIT"), 8196, -1, 19, 4);
		func_119(201, joaat("AV_FOX_SIT"), 8192, 57, 18, 4);
		func_119(202, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 54, 1);
		func_119(203, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 54, 1);
		func_119(204, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 44, 1);
		func_119(205, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 54, 1);
		func_119(206, joaat("AV_RIDGELINE_ANIMAL"), 8192, -1, 54, 1);
		func_119(207, joaat("AV_RIDGELINE_ANIMAL"), -1, 77, 54, 3);
		func_119(208, joaat("AV_SCAVENGER_ON_ANIMAL"), -1, 57, 56, 1);
		func_119(209, joaat("AV_SEAGULL_CATCH_FISH"), 8192, 57, 30, 1);
		func_119(210, joaat("AV_CROSS_ROAD"), 8192, -1, 4, 1);
		func_119(211, joaat("AV_CROSS_ROAD"), 16, -1, 2, 4);
		func_119(212, joaat("AV_CROSS_ROAD"), 8192, -1, 2, 4);
		func_119(213, joaat("AV_SQUIRREL_CHASE_SQUIRREL"), 2, 57, 2, 4);
		func_119(214, joaat("AV_CROSS_ROAD"), 8192, -1, 2, 4);
		func_119(228, joaat("AV_SWIM_WOLF_CHASE_MOOSE"), 8192, 57, 49, 3);
		func_119(215, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(216, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(217, joaat("AV_SWIMMING_ANIMAL"), -1, -1, 63, 4);
		func_119(218, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(219, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(220, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(221, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(222, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(223, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(224, joaat("AV_SWIMMING_ANIMAL"), 16, -1, 63, 4);
		func_119(225, joaat("AV_SWIMMING_ANIMAL"), 16, -1, 63, 4);
		func_119(226, joaat("AV_SWIMMING_ANIMAL"), -1, -1, 63, 4);
		func_119(227, joaat("AV_SWIMMING_ANIMAL"), 8192, -1, 63, 4);
		func_119(229, joaat("AV_CROSS_ROAD"), 3, -1, 2, 4);
		func_119(232, joaat("AV_FOX_SIT"), 8196, -1, 19, 4);
		func_119(230, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 4);
		func_119(231, joaat("AV_VULTURES_EAT_CARCASS"), 8196, 57, 56, 1);
		func_119(233, joaat("AV_WILD_ANIMAL"), -1, 57, 42, 1);
		func_119(234, joaat("AV_WILD_ANIMAL"), -1, 57, 42, 1);
		func_119(235, joaat("AV_WILD_ANIMAL"), -1, 57, 42, 1);
		func_119(236, joaat("AV_WILD_ANIMAL"), -1, 57, 57, 4);
		func_119(237, joaat("AV_WOLF_AMBUSH_DEER"), 5, 57, 49, 3);
		func_119(238, joaat("AV_WOLF_FLEE_WOLVES"), 8192, 57, 49, 3);
		func_119(239, joaat("AV_DEAD_ANIMAL"), 20, -1, 49, 3);
		func_119(240, joaat("AV_RIDGELINE_ANIMAL"), 20, -1, 50, 3);
		func_119(247, joaat("AV_WOLF_TAKEDOWN_MISS"), 5, 57, 49, 3);
		func_119(242, joaat("AV_WOLVES_EAT_DEER"), 8192, 57, 49, 3);
		func_119(241, joaat("AV_WOLVES_HOWLING"), 20, 57, 50, 3);
		func_119(243, joaat("AV_WOLVES_PLAYING"), 8192, 77, 50, 3);
		func_119(244, joaat("AV_WOLVES_PLAYING"), 8192, 77, 50, 3);
		func_119(245, joaat("AV_WOLVES_PLAYING"), 8192, 77, 50, 3);
		func_119(246, joaat("AV_WOLVES_ALARMED"), 8192, 77, 50, 3);
		func_120(34);
		func_120(2);
		func_120(3);
		func_120(5);
		func_120(47);
		func_120(10);
		func_120(15);
		func_120(16);
		func_120(17);
		func_120(18);
		func_120(19);
		func_120(20);
		func_120(27);
		func_120(29);
		if (!func_121(159))
		{
			if (func_122(joaat("CAROLINA_PARAKEETS")) != 25)
			{
				func_123(159);
			}
		}
	}
	return 1;
}

int func_21()
{
	if (func_115() != -1)
	{
		return 0;
	}
	if (SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_READY())
	{
		Global_1956575 = 2;
		func_124(&(Global_1956575.f_1));
		Global_1956575.f_4 = 0;
		return 1;
	}
	if (SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_FAILED())
	{
		Global_1956575 = 3;
		func_124(&(Global_1956575.f_1));
		return 1;
	}
	if (Global_1956575 == 0)
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_START_MANAGER())
		{
			Global_1956575 = 3;
			return 1;
		}
		Global_1956575 = 1;
		func_124(&(Global_1956575.f_1));
		return 0;
	}
	if (Global_1956575 == 1)
	{
		if (!func_125(&(Global_1956575.f_1)))
		{
			func_126(&(Global_1956575.f_1), 0);
		}
		else if (func_127(&(Global_1956575.f_1)) > 4000)
		{
			Global_1956575 = 3;
			func_124(&(Global_1956575.f_1));
			return 1;
		}
	}
	return 0;
}

int func_22()
{
	if (!Global_40)
	{
		if (!func_128())
		{
			return 0;
		}
	}
	return 1;
}

int func_23(var uParam0)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(*uParam0))
	{
		*uParam0 = DATAFILE::_0xD97D8D905F1562F2(joaat("WEATHER_GROUPS"));
		return 0;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam0))
	{
		return 0;
	}
	func_129(uParam0);
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
	*uParam0 = 0;
	return 1;
}

void func_24(int iParam0, int iParam1)
{
	vLocal_60[iParam0 /*3*/] = iParam1;
	vLocal_60[iParam0 /*3*/].f_1 = 0;
}

void func_25()
{
	if (func_115() != -1)
	{
		return;
	}
	func_130();
	func_131();
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
}

void func_26(int iParam0)
{
	Global_21 = (Global_21 || iParam0);
}

int func_27()
{
	return 1;
}

int func_28(var uParam0)
{
	return 1;
}

void func_29(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (!func_137(iParam0))
	{
		return;
	}
	if (func_138(iParam0) == 0)
	{
		Global_40.f_4942[iParam0 /*60*/].f_6 = iParam1;
	}
	func_139(iParam0, 20496, 1);
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	if (bParam3)
	{
		func_140(iParam0, 1073741824 /* Float: 2f */, 1);
	}
	if (bParam4)
	{
		func_141(iParam0, 1, 1);
	}
	func_143(iParam0, func_142(iParam0, 3, 1));
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_143 = iParam1;
	Global_1360165[iParam0 /*1157*/].f_143.f_1 = iParam2;
	Global_1360165[iParam0 /*1157*/].f_143.f_2 = iParam3;
}

bool func_31()
{
	int iVar0;

	iVar0 = 1;
	func_144();
	return iVar0;
}

bool func_32()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

void func_33()
{
	PERSCHAR::_0x70605812ABC9FF0F(joaat("MFR_HORSES_PERSCHAR_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("SCM_PERSCHAR_HORSES"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("SDN_HORSE_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("BRA_HORSES_01"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("AMD_HORSES_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("EMR_HORSES_PERSCHAR_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("TBL_RANCH_HORSES"), joaat("ANIMAL_HORSE_CORRAL_SCALED_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("ASB_HORSES_01"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("BLW_HORSES"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("PHR_HORSES_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_2"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_3"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("STR_PERSCHAR_HORSES"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("RID_HORSES_PERSCHAR_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("RID_HORSES_PERSCHAR_2"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("VHT_HORSE_1"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("VAL_LIVERY_HORSE"), joaat("ANIMAL_HORSE_CORRAL_PC_CONTENT_LOCKED"));
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_115() != -1)
	{
		return;
	}
	if (!func_145(iParam0))
	{
		return;
	}
	if (iParam2 != -1)
	{
		func_146(iParam2, &iVar0, &iVar1, 0, 0);
		if (iParam0 < iVar0 || (iParam0 > iVar1 && !func_147(iParam3, 4194304)))
		{
			return;
		}
	}
	Global_1895087[iParam0 /*3*/] = iParam1;
	Global_1895087[iParam0 /*3*/].f_1 = 0;
	Global_1895087[iParam0 /*3*/].f_2 = 0;
	func_148(iParam0, 2 | iParam3);
	func_149(iParam0, 137);
	iVar2 = PERSCHAR::_0xA00DF706C60173D1(iParam1);
	if (iVar2 != 0)
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, true);
	}
}

void func_35()
{
	func_150();
	func_151();
	func_152();
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
	func_159();
}

void func_36()
{
	func_160(0);
	func_161();
	func_162(8, 0, 0, 5, 1, 1899);
	func_163(joaat("PLAYER_ZERO"));
	func_164(0);
	func_165(-75, 100);
	func_166(0, 90);
	func_166(1, 90);
	func_166(2, 90);
	func_167();
	func_168(7, 1);
	func_169(178615350);
	func_170(0, 0);
	func_171(0);
	func_172(joaat("AZL_CAMP_COLTER"), 1, 1);
	func_173(27, 0.3f, 0f);
	func_173(11, 0f, 0f);
	func_173(1, 0f, 0f);
	func_173(19, -1082130432 /* Float: -1f */, 0f);
	func_173(0, -1082130432 /* Float: -1f */, 0f);
	func_173(5, -1082130432 /* Float: -1f */, 0f);
	func_173(3, -1082130432 /* Float: -1f */, 0f);
	func_173(2, -1082130432 /* Float: -1f */, 0f);
	func_173(9, -1082130432 /* Float: -1f */, 0f);
	func_173(17, -1082130432 /* Float: -1f */, 0f);
	func_174(45);
	func_174(47);
	func_174(55);
	func_174(33);
	func_174(34);
	func_174(35);
	func_174(36);
	func_174(37);
	func_174(38);
	func_174(39);
	func_174(40);
	func_174(41);
	func_174(42);
	func_174(43);
	func_174(52);
	func_174(53);
	func_174(54);
	func_174(18);
	func_174(19);
	func_174(20);
	func_174(21);
	func_174(22);
	func_174(56);
	func_175(0);
	func_176(0);
	func_176(1);
	func_176(2);
	func_176(3);
	func_176(4);
	func_176(5);
	func_176(6);
	func_176(7);
	func_176(13);
	func_176(14);
	func_176(15);
	func_176(16);
	func_176(17);
	func_176(18);
	func_176(19);
	func_176(20);
	func_176(21);
	func_176(22);
	func_176(9);
	func_177(14, joaat("CS_JACKMARSTON"));
	func_178(4, joaat("A_C_HORSE_GANG_UNCLE"));
	func_177(12, joaat("A_C_DOGCATAHOULACUR_01"));
	func_179(12, -1394723994);
	func_180(4);
	func_180(20);
	func_180(11);
	func_180(5);
	func_180(10);
	func_181(74, joaat("U_M_M_RHDGENSTOREOWNER_01"));
	func_182(13, joaat("TSTAG_ENDLESS_SUMMER"));
	func_183(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"), -518918701, -1);
	func_184();
	func_185(0);
	func_186(38, 1);
	func_186(35, 1);
	func_186(32, 1);
	func_187(4, 1, 0);
	func_187(12, 1, 0);
	func_187(13, 1, 0);
	func_187(14, 1, 0);
	func_187(15, 1, 0);
	func_187(16, 1, 0);
	func_188(945);
	func_189(joaat("A_C_WOLF"));
	func_189(joaat("A_C_WOLF_MEDIUM"));
	func_174(1);
	func_190(11);
	func_191(joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 1, -1);
	func_191(joaat("WEAPON_MELEE_DAVY_LANTERN"), 1, 1, 1, -1);
	func_191(joaat("WEAPON_MELEE_KNIFE"), 1, 1, 1, -1);
	func_192(1, 0);
	func_193(3, 1, -1, 0, 1);
	func_193(20, 1, -1, 0, 1);
	func_194(14);
	func_194(207);
	func_194(227);
	func_194(228);
	func_194(237);
	func_194(238);
	func_194(239);
	func_194(240);
	func_194(241);
	func_194(242);
	func_194(243);
	func_194(244);
	func_194(245);
	func_194(246);
	func_194(247);
	func_195(10);
	func_195(11);
	func_196(0, 1);
	func_196(2, 1);
	func_196(1, 1);
	func_196(5, 1);
	func_196(4, 1);
	func_196(3, 1);
	func_197(0);
	func_198(356365161);
	func_198(38162571);
	func_198(1485195808);
	func_198(-1170496998);
	func_193(11, 1, -1, 0, 1);
	func_176(11);
	func_176(2);
	func_199(11);
	func_171(1);
	func_200(6);
	func_169(178615350);
	func_168(7, 1);
	func_190(23);
	func_190(31);
	func_190(15);
	func_190(18);
	func_190(21);
	func_174(19);
	func_174(20);
	func_174(22);
	func_174(11);
	func_201(-2147483648);
	func_202(joaat("KIT_WARDROBE"), 1);
	func_202(joaat("WEAPON_KIT_BINOCULARS"), 1);
	func_202(joaat("UPGRADE_UPG_COOKING_SPIT"), 1);
	func_202(joaat("KIT_BANDANA"), 1);
	func_202(joaat("KIT_MASK_GREY_CLOTH"), 1);
	func_202(joaat("DOCUMENT_PLAYER_JOURNAL"), 1);
	func_202(joaat("CLOTHING_WINTER_OUTFIT"), 1);
	func_202(joaat("CONSUMABLE_MEDICINE_USED"), 1);
	func_202(joaat("CONSUMABLE_MEDICINE_USED"), 1);
	func_202(joaat("CLOTHING_ITEM_SATCHEL_PZ_000"), 1);
	func_202(joaat("CLOTHING_ITEM_GUNBELT_PZERO_000"), 1);
	func_202(-1992544048 /* GXTEntry: "Arthur\'s Holster" */, 1);
	func_202(1796687236, 1);
	func_202(joaat("CLOTHING_CUSTOM_ONE_OUTFIT"), 1);
	func_203(joaat("WHITEOUT"), 0);
	func_204();
	func_205();
	func_197(1);
	func_198(753127042);
	func_206(-2147483648);
	func_191(joaat("WEAPON_SHOTGUN_SAWEDOFF"), 1, 1, 1, -1);
	func_191(joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, -1);
	func_190(19);
	func_190(22);
	func_174(20);
	func_180(1);
	func_207(1);
	func_179(1, 404503428);
	func_208(joaat("A_C_WOLF"));
	func_208(joaat("A_C_WOLF_MEDIUM"));
	func_209(joaat("SP_CHAL_BAND_ROOT"));
	func_209(joaat("SP_CHAL_EXPL_ROOT"));
	func_209(joaat("SP_CHAL_GAMB_ROOT"));
	func_209(joaat("SP_CHAL_HERB_ROOT"));
	func_209(joaat("SP_CHAL_HORSE_ROOT"));
	func_209(joaat("SP_CHAL_HUNT_ROOT"));
	func_209(joaat("SP_CHAL_SHOT_ROOT"));
	func_209(joaat("SP_CHAL_WEAP_ROOT"));
	func_210(26);
	func_210(11);
	func_211(1, 0);
	func_211(0, 0);
	func_198(-2038424081);
	func_197(3);
	func_198(1884271742);
	func_191(joaat("WEAPON_THROWN_DYNAMITE"), 1, 1, 1, -1);
	func_212(200);
	func_200(2);
	func_213(0);
	func_213(1);
	func_213(2);
	func_213(3);
	func_213(6);
	func_213(7);
	func_213(5);
	func_213(4);
	func_213(8);
	func_213(9);
	func_213(10);
	func_213(11);
	func_203(joaat("SUNNY"), 0);
	func_210(1);
	func_214(36, 1);
	func_215();
	func_216(0);
}

void func_37()
{
	func_160(1);
	func_161();
	func_171(2);
	func_197(4);
	func_192(2, 1);
	func_192(3, 1);
	func_192(7, 1);
	func_217(0, 0, 0, 14, -1, -1);
	func_218(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 8, joaat("CSTP_NEXT_VISIT"), joaat("CSTAG_PRIORITY_CRITICAL"));
	func_218(joaat("CSTAG_FLOW_MUD1_POST_EVENING"), 12, joaat("CSTP_NEXT_VISIT"), -469960592);
	func_219(0);
	func_220(0);
	func_202(joaat("CLOTHING_GUNSLINGER_OUTFIT"), 1);
	func_202(joaat("CLOTHING_ROBBERY_OUTFIT"), 1);
	func_202(joaat("CLOTHING_WARM_WEATHER_OUTFIT"), 1);
	func_202(-1826731591 /* GXTEntry: "Brawler\'s Outfit" */, 1);
	func_202(2119049229, 1);
	func_202(1352942778 /* GXTEntry: "The Rebel" */, 1);
	func_202(1964379549 /* GXTEntry: "The Innocent" */, 1);
	func_202(1201189539 /* GXTEntry: "The Pursuer" */, 1);
	func_202(333909087, 1);
	func_202(joaat("CLOTHING_HL_PLAYER_BOOT_020_1"), 1);
	func_202(joaat("CLOTHING_HL_PLAYER_COAT_021_2"), 1);
	func_202(joaat("CLOTHING_HL_PLAYER_HAT_004_11"), 1);
	func_202(-1391892422 /* GXTEntry: "Wrangler Vest" */, 1);
	func_202(962344255 /* GXTEntry: "Buckskin Vest" */, 1);
	func_202(1160643979 /* GXTEntry: "The Winter Gunslinger" */, 1);
	func_168(6, 1);
	func_191(joaat("WEAPON_PISTOL_VOLCANIC"), 0, 1, 0, -1);
	func_191(joaat("WEAPON_RIFLE_SPRINGFIELD"), 0, 1, 0, -1);
	func_191(joaat("WEAPON_RIFLE_VARMINT"), 0, 1, 0, 526);
	func_221(joaat("CLOTHING_WINTER_OUTFIT"), 1);
	func_221(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"), 1);
	func_169(-268604689);
	func_173(27, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_173(11, 0.1f, -1082130432 /* Float: -1f */);
	func_222(48);
	func_170(1, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_COLTER"), 0, 1);
	func_172(joaat("AZL_CAMP_HORSESHOE_OVERLOOK"), 1, 1);
	func_223(711);
	func_224(1230);
	func_225(1);
	func_225(5);
	func_225(20);
	func_225(4);
	func_190(33);
	func_190(34);
	func_190(35);
	func_190(37);
	func_190(38);
	func_190(39);
	func_190(40);
	func_190(41);
	func_190(43);
	func_190(26);
	func_190(11);
	func_190(16);
	func_190(17);
	func_226(194, 0);
	func_198(54073871);
	func_198(-748969569);
	func_227(-1170496998);
	func_207(0);
	func_207(1);
	func_207(4);
	func_207(5);
	func_207(13);
	func_207(14);
	func_207(15);
	func_207(16);
	func_207(17);
	func_207(18);
	func_207(19);
	func_207(20);
	func_207(22);
	func_207(11);
	func_192(6, 1);
	func_192(9, 1);
	func_192(21, 1);
	func_198(280705402);
	func_203(joaat("MISTY"), 0);
	func_228(0);
	func_228(1);
	func_228(9);
	func_228(5);
	func_228(6);
	func_190(12);
	func_195(207);
	func_195(227);
	func_195(228);
	func_195(237);
	func_195(238);
	func_195(239);
	func_195(241);
	func_195(240);
	func_195(242);
	func_195(243);
	func_195(244);
	func_195(245);
	func_195(246);
	func_195(247);
	func_229(65);
	func_229(10);
	func_229(12);
	func_229(24);
	func_229(31);
	func_229(9);
	func_230(111, 1);
	func_230(66, 1);
	func_231(0, 1);
	func_232(4);
	func_233(1);
	func_233(0);
	func_233(3);
	func_210(5);
	func_234(101);
	func_234(135);
	func_234(39);
	func_234(49);
	func_234(146);
	func_234(143);
	func_234(81);
	func_210(3);
	func_210(31);
	func_210(30);
	func_182(13, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_183(13, 623901469, 820723243, -1);
	func_235(5);
	func_192(6, 0);
	func_192(9, 0);
	func_207(3);
	func_228(3);
	func_182(13, 623901469);
	func_183(13, joaat("TSTAG_LOCKDOWN_SALOON"), -2120502580, 48);
	func_193(3, 2, 6, 0, 1);
	func_200(1);
	func_190(29);
	func_212(100);
	func_210(23);
	func_210(25);
	func_236(2, 0, 0);
	func_198(-736853952);
	func_235(13);
	func_227(-736853952);
	func_191(joaat("WEAPON_THROWN_TOMAHAWK"), 1, 1, 1, 523);
	func_176(8);
	func_228(8);
	func_207(2);
	func_207(7);
	func_228(2);
	func_228(7);
	func_176(2);
	func_176(7);
	func_237(8, 0);
	func_211(100, 0);
	func_211(9, 0);
	func_211(5, 0);
	func_211(11, 0);
	func_183(13, -1132827806, 820723243, -1);
	func_207(5);
	func_235(14);
	func_182(13, -1132827806);
	func_193(11, 2, -1, 0, 1);
	func_193(0, 2, 0, 1, 1);
	func_193(1, 1, 0, 1, 1);
	func_193(18, 1, 0, 3, 1);
	func_230(111, 4);
	func_230(66, 4);
	func_220(2);
	func_191(joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"), 1, 1, 0, -1);
	func_207(1);
	func_228(1);
	func_212(100);
	func_238(76, 1, 1720);
	func_237(6, 0);
	func_211(7, 0);
	func_210(6);
	func_211(34, 0);
	func_236(1, 0, 0);
	func_211(28, 0);
	func_235(24);
	func_193(20, 4, 0, 2, 1);
	func_193(3, 4, 0, 2, 1);
	func_193(9, 4, 0, 2, 1);
	func_237(35, 0);
	func_238(76, 1, 1720);
	func_198(1010885152);
	func_198(-1558439474);
	func_215();
	func_216(1);
}

void func_38()
{
	func_160(2);
	func_161();
	func_182(13, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_183(13, -1751068532, 820723243, -1);
	func_235(9);
	func_182(13, -1751068532);
	func_239(7, 7, -2);
	func_240(4, 5);
	func_241(7, 1);
	func_207(9);
	func_193(9, 4, 0, 1, 1);
	func_210(24);
	func_230(39, 1);
	func_235(11);
	func_230(39, 4);
	func_227(-1524512402);
	func_198(-1124061431);
	func_238(26, 1, 1320);
	func_242(1, 0);
	func_191(joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, 1, 0, 525);
	func_202(joaat("UPGRADE_OFFHAND_HOLSTER"), 1);
	func_212(55);
	func_237(4, 0);
	func_236(12, 0, 0);
	func_211(103, 0);
	func_243(5, 1);
	func_244(-2, 0);
	func_241(12, 1);
	func_235(12);
	func_191(joaat("WEAPON_REPEATER_WINCHESTER"), 1, 1, 0, -1);
	func_212(100);
	func_207(6);
	func_198(1846061697);
	func_198(-1524512402);
	func_198(1926308480);
	func_193(6, 4, 0, 2, 1);
	func_193(0, 4, 0, 1, 1);
	func_237(25, 0);
	func_245(1, 1);
	func_215();
	func_216(2);
}

void func_39()
{
	func_160(3);
	func_161();
	func_235(6);
	func_193(20, 0, -1, 0, 1);
	func_210(4);
	func_212(100);
	func_246(2);
	func_200(5);
	func_190(8);
	func_211(8, 0);
	func_211(15, 0);
	func_234(112);
	func_247(112);
	func_192(1, 0);
	func_237(103, 0);
	func_234(113);
	func_247(113);
	func_207(1);
	func_234(114);
	func_247(114);
	func_237(16, 0);
	func_248(596);
	func_192(8, 1);
	func_236(1, 0, 0);
	func_235(25);
	func_191(joaat("WEAPON_SHOTGUN_PUMP"), 0, 1, 0, 523);
	func_190(2);
	func_207(8);
	func_192(1, 0);
	func_236(1, 0, 0);
	func_237(9, 0);
	func_220(1);
	func_215();
	func_216(3);
}

void func_40()
{
	func_160(4);
	func_161();
	func_241(5, 1);
	func_239(9, -2, 6);
	func_249(7);
	func_236(2, 0, 0);
	func_241(6, 1);
	func_182(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"));
	func_235(7);
	func_226(114, 0);
	func_200(0);
	func_234(11);
	func_234(12);
	func_234(13);
	func_234(14);
	func_211(24, 0);
	func_234(15);
	func_241(32, 1);
	func_249(7);
	func_215();
	func_216(4);
}

void func_41()
{
	func_160(5);
	func_161();
	func_192(21, 0);
	func_235(10);
	func_207(21);
	func_193(21, 1, 0, 3, 1);
	func_237(2, 0);
	func_234(38);
	func_212(55);
	func_233(2);
	func_198(-1014145132);
	func_239(22, -2, -1);
	func_243(5, 1);
	func_237(31, 0);
	func_215();
	func_216(5);
}

void func_42()
{
	func_160(29);
	func_161();
	func_211(13, 0);
	func_234(97);
	func_247(97);
	func_250(61, 2, 12, 10);
	func_251(62, 10, -2);
	func_240(25, 9);
	func_241(10, 1);
	func_237(15, 0);
	func_234(98);
	func_247(98);
	func_198(-1060078174);
	func_252(98, 0, 27, -2);
	func_235(8);
	func_241(27, 1);
	func_253(98);
	func_249(8);
	func_237(11, 0);
	func_211(40, 0);
	func_234(99);
	func_247(99);
	func_235(36);
	func_241(25, 1);
	func_253(99);
	func_249(36);
	func_198(-1060078174);
	func_215();
	func_216(29);
}

void func_43()
{
	func_160(31);
	func_161();
	func_254(joaat("COMPLETED"), joaat("MISSIONS_CHP2"), 1, -1);
	func_235(15);
	func_202(joaat("KIT_HORSE_BRUSH"), 1);
	func_193(5, 1, 0, 1, 1);
	func_237(37, 0);
	func_190(30);
	func_190(42);
	func_210(27);
	func_211(47, 0);
	func_254(joaat("COMPLETED"), joaat("MISSIONS_CHP3"), 2, -1);
	func_234(57);
	func_215();
	func_216(31);
}

void func_44()
{
	func_160(6);
	func_161();
	func_164(1);
	func_198(-1764522338);
	func_235(16);
	func_190(44);
	func_198(-1764522338);
	func_207(5);
	func_193(0, 4, -1, 3, 1);
	func_193(5, 4, -1, 3, 1);
	func_234(89);
	func_234(95);
	func_234(138);
	func_207(18);
	func_255(5);
	func_210(28);
	func_210(18);
	func_192(0, 0);
	func_192(3, 0);
	func_236(3, 0, 0);
	func_235(17);
	func_245(0, 1);
	func_245(1, 1);
	func_238(76, 0, 350);
	func_234(11);
	func_234(12);
	func_234(14);
	func_234(13);
	func_207(0);
	func_207(3);
	func_256(23);
	func_193(0, 4, 0, 1, 1);
	func_193(3, 4, 0, 1, 1);
	func_212(100);
	func_222(48);
	func_193(3, 4, 12, 0, 1);
	func_237(47, 0);
	func_237(23, 0);
	func_237(28, 0);
	func_230(64, 1);
	func_211(29, 0);
	func_241(2, 1);
	func_239(20, -2, 3);
	func_249(19);
	func_236(1, 0, 0);
	func_241(3, 1);
	func_235(19);
	func_198(-2058120606);
	func_212(100);
	func_207(1);
	func_207(2);
	func_211(30, 0);
	func_211(27, 0);
	func_211(18, 0);
	func_211(20, 0);
	func_198(-1053549743);
	func_253(95);
	func_235(21);
	func_174(44);
	func_227(-853383233);
	func_227(-1053549743);
	func_238(105, 1, 1720);
	func_238(95, 1, 990);
	func_212(100);
	func_253(138);
	func_237(32, 0);
	func_257(8);
	func_198(1488286867);
	func_226(567, 0);
	func_215();
	func_216(6);
}

void func_45()
{
	func_160(7);
	func_161();
	func_164(2);
	func_192(5, 1);
	func_192(1, 1);
	func_182(8, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_235(18);
	func_183(8, joaat("TSTAG_LOCKDOWN_SALOON"), 977356591, 48);
	func_212(100);
	func_192(2, 0);
	func_192(8, 0);
	func_237(29, 0);
	func_210(8);
	func_198(-1145519186);
	func_258(21);
	func_244(0, 0);
	func_241(4, 1);
	func_249(20);
	func_236(2, 0, 0);
	func_241(0, 1);
	func_235(20);
	func_207(8);
	func_207(5);
	func_182(8, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_193(8, 4, 0, 1, 1);
	func_212(100);
	func_198(1703426636);
	func_191(joaat("WEAPON_THROWN_MOLOTOV"), 1, 1, 1, 523);
	func_239(19, 1, -2);
	func_240(6, 2);
	func_241(1, 1);
	func_237(30, 0);
	func_237(22, 0);
	func_237(24, 0);
	func_211(32, 0);
	func_192(14, 0);
	func_192(19, 0);
	func_192(15, 0);
	func_192(22, 0);
	func_192(17, 0);
	func_192(4, 0);
	func_192(21, 0);
	func_192(20, 0);
	func_192(11, 0);
	func_227(1944170089);
	func_235(26);
	func_207(19);
	func_207(15);
	func_207(22);
	func_207(17);
	func_207(4);
	func_207(21);
	func_207(20);
	func_207(11);
	func_212(100);
	func_198(473295046);
	func_198(1944170089);
	func_198(-741351766);
	func_183(3, -586199837, 820723243, -1);
	func_217(0, 0, 0, 2, -1, -1);
	func_237(33, 0);
	func_215();
	func_216(7);
}

void func_46()
{
	func_160(8);
	func_161();
	func_235(22);
	func_220(3);
	func_191(joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"), 1, 0, 0, -1);
	func_259(2, 7, 4);
	func_237(26, 0);
	func_207(23);
	func_211(31, 0);
	func_234(37);
	func_247(37);
	func_193(23, 4, -1, 0, 1);
	func_212(100);
	func_200(3);
	func_237(27, 0);
	func_215();
	func_216(8);
}

void func_47()
{
	func_160(10);
	func_161();
	func_164(3);
	func_234(106);
	func_234(107);
	func_235(27);
	func_207(18);
	func_253(106);
	func_253(107);
	func_234(77);
	func_220(4);
	func_191(joaat("WEAPON_PISTOL_SEMIAUTO"), 0, 1, 0, 523);
	func_234(30);
	func_171(1);
	func_210(9);
	func_237(51, 0);
	func_234(53);
	func_234(127);
	func_237(44, 0);
	func_183(9, -529686691, -2120502580, -1);
	func_235(28);
	func_192(10, 0);
	func_192(3, 0);
	func_182(9, -529686691);
	func_212(100);
	func_198(-468693731);
	func_210(12);
	func_207(14);
	func_237(40, 0);
	func_211(54, 0);
	func_211(45, 0);
	func_164(4);
	func_192(0, 0);
	func_192(9, 0);
	func_235(29);
	func_207(0);
	func_207(9);
	func_190(3);
	func_198(-360036154);
	func_212(100);
	func_220(5);
	func_236(1, 0, 0);
	func_235(30);
	func_212(100);
	func_236(1, 0, 0);
	func_222(1);
	func_235(31);
	func_212(100);
	func_237(56, 0);
	func_215();
	func_216(10);
}

void func_48()
{
	func_160(12);
	func_161();
	func_235(33);
	func_207(3);
	func_192(23, 0);
	func_192(0, 0);
	func_237(54, 0);
	func_237(50, 0);
	func_237(43, 0);
	func_171(1);
	func_234(43);
	func_234(109);
	func_235(34);
	func_212(100);
	func_191(joaat("WEAPON_SHOTGUN_SEMIAUTO"), 0, 1, 0, 523);
	func_234(110);
	func_234(56);
	func_237(52, 0);
	func_211(56, 0);
	func_211(49, 0);
	func_192(14, 0);
	func_192(15, 0);
	func_192(16, 0);
	func_192(17, 0);
	func_192(19, 0);
	func_192(20, 0);
	func_192(21, 0);
	func_192(22, 0);
	func_192(11, 0);
	func_235(37);
	func_253(139);
	func_212(100);
	func_227(-468693731);
	func_227(-1825294305);
	func_257(5);
	func_257(9);
	func_198(8924991);
	func_198(665676602);
	func_192(7, 0);
	func_192(1, 0);
	func_192(4, 0);
	func_192(13, 0);
	func_192(18, 0);
	func_192(12, 0);
	func_217(0, 0, 0, 4, -1, -1);
	func_210(13);
	func_215();
	func_216(12);
}

void func_49()
{
	func_160(9);
	func_161();
	func_192(22, 0);
	func_192(19, 0);
	func_235(35);
	func_207(22);
	func_207(19);
	func_237(46, 0);
	func_215();
	func_216(9);
}

void func_50()
{
	func_160(11);
	func_161();
	func_235(2);
	func_190(32);
	func_190(14);
	func_191(joaat("WEAPON_REPEATER_CARBINE"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_LASSO"), 1, 1, 1, -1);
	func_176(10);
	func_190(1);
	func_190(20);
	func_237(0, 0);
	func_211(22, 0);
	func_211(26, 0);
	func_211(35, 0);
	func_235(23);
	func_217(0, 0, 0, 7, -1, -1);
	func_198(-464836488);
	func_237(18, 0);
	func_211(46, 0);
	func_211(43, 0);
	func_236(2, 0, 0);
	func_207(0);
	func_235(32);
	func_192(0, 0);
	func_257(10);
	func_198(651395116);
	func_260(2, 3);
	func_237(45, 0);
	func_237(42, 0);
	func_211(79, 0);
	func_192(0, 0);
	func_235(47);
	func_190(5);
	func_202(joaat("WEAPON_KIT_BINOCULARS"), 1);
	func_191(joaat("WEAPON_REPEATER_HENRY"), 0, 1, 0, -1);
	func_191(joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, 1, 0, 526);
	func_237(72, 0);
	func_237(80, 0);
	func_215();
	func_216(11);
}

void func_51()
{
	func_160(13);
	func_161();
	func_164(5);
	func_261(-50);
	func_165(-100, 75);
	func_169(1593315648);
	func_198(373691918);
	func_198(2019386373);
	func_214(9, 0);
	func_262(1);
	func_185(1);
	func_170(4, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_SHADY_BELLE"), 0, 1);
	func_172(joaat("AZL_CAMP_GUARMA"), 1, 1);
	func_173(27, 0.1f, 0.1f);
	func_263(1);
	func_168(10, 1);
	func_197(38);
	func_164(6);
	func_207(6);
	func_207(3);
	func_230(6, 1);
	func_192(0, 0);
	func_192(2, 0);
	func_197(39);
	func_264(5, 1);
	func_186(57, 1);
	func_186(61, 1);
	func_192(18, 1);
	func_192(3, 1);
	func_168(11, 1);
	func_202(joaat("WEAPON_RIFLE_BOLTACTION"), 1);
	func_202(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 1);
	func_202(joaat("WEAPON_MELEE_KNIFE"), 1);
	func_202(joaat("WEAPON_KIT_BINOCULARS"), 1);
	func_202(joaat("WEAPON_KIT_CAMERA"), 1);
	func_210(14);
	func_235(40);
	func_186(57, 1);
	func_186(61, 1);
	func_207(2);
	func_237(58, 0);
	func_211(57, 0);
	func_164(7);
	func_197(43);
	func_198(2109952320);
	func_198(-1077783786);
	func_227(2024121624);
	func_198(1691618738);
	func_230(6, 4);
	func_217(0, 0, 0, 4, -1, -1);
	func_210(15);
	func_198(52706132);
	func_198(-502324015);
	func_198(440043364);
	func_227(-360036154);
	func_190(6);
	func_264(5, 0);
	func_238(105, 0, 350);
	func_238(5, 0, 350);
	func_238(78, 0, 350);
	func_238(26, 0, 350);
	func_238(92, 0, 350);
	func_238(65, 0, 350);
	func_238(69, 0, 350);
	func_238(93, 0, 350);
	func_238(95, 0, 350);
	func_238(3, 0, 350);
	func_238(82, 0, 350);
	func_238(56, 0, 350);
	func_238(22, 0, 350);
	func_238(37, 0, 350);
	func_238(110, 0, 350);
	func_238(39, 0, 350);
	func_237(60, 0);
	func_215();
	func_216(13);
}

void func_52()
{
	func_160(14);
	func_161();
	func_235(41);
	func_211(58, 0);
	func_197(42);
	func_227(1177464213);
	func_237(57, 0);
	func_215();
	func_216(14);
}

void func_53()
{
	func_160(15);
	func_161();
	func_192(0, 0);
	func_192(6, 0);
	func_192(2, 0);
	func_192(3, 0);
	func_192(18, 0);
	func_192(12, 0);
	func_227(373691918);
	func_265(1);
	func_185(0);
	func_169(-922193456);
	func_179(11, -2051275045);
	func_222(48);
	func_170(5, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_GUARMA"), 0, 1);
	func_172(joaat("AZL_CAMP_LAKAY"), 1, 1);
	func_173(27, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	func_164(8);
	func_198(-879507474);
	func_211(61, 0);
	func_204();
	func_205();
	func_197(44);
	func_190(52);
	func_190(4);
	func_203(0, 0);
	func_168(9, 1);
	func_227(-879507474);
	func_258(83);
	func_220(6);
	func_198(282809459);
	func_207(7);
	func_207(4);
	func_207(13);
	func_207(14);
	func_207(15);
	func_207(17);
	func_207(18);
	func_207(19);
	func_207(20);
	func_207(21);
	func_207(22);
	func_207(11);
	func_207(0);
	func_207(6);
	func_207(2);
	func_207(3);
	func_207(12);
	func_263(0);
	func_228(11);
	func_234(121);
	func_214(9, 1);
	func_198(-524145696);
	func_237(69, 0);
	func_237(62, 0);
	func_235(45);
	func_186(32, 1);
	func_192(13, 0);
	func_192(11, 0);
	func_236(1, 0, 0);
	func_211(78, 0);
	func_235(46);
	func_192(0, 0);
	func_192(6, 0);
	func_187(0, 1, 1);
	func_187(2, 1, 1);
	func_187(10, 1, 1);
	func_207(13);
	func_207(11);
	func_192(3, 0);
	func_186(32, 1);
	func_220(7);
	func_191(joaat("WEAPON_SHOTGUN_REPEATING"), 0, 1, 0, 523);
	func_207(1);
	func_179(1, -922193456);
	func_237(65, 0);
	func_266(0, 8);
	func_237(76, 0);
	func_215();
	func_216(15);
}

void func_54()
{
	func_160(17);
	func_161();
	func_192(7, 0);
	func_235(50);
	func_190(53);
	func_198(2091701359);
	func_210(16);
	func_237(79, 0);
	func_211(80, 0);
	func_192(0, 0);
	func_235(51);
	func_190(54);
	func_198(-389056691);
	func_198(1485494263);
	func_211(75, 0);
	func_207(0);
	func_235(52);
	func_198(-1311865656);
	func_186(35, 1);
	func_220(9);
	func_190(56);
	func_237(66, 0);
	func_215();
	func_216(17);
}

void func_55()
{
	func_160(16);
	func_161();
	func_198(-622554983);
	func_198(2024383613);
	func_267(50, 0, 33, -2);
	func_235(48);
	func_252(108, 0, 33, -2);
	func_234(108);
	func_247(108);
	func_241(33, 1);
	func_267(50, 0, 34, -2);
	func_252(108, 0, -2, 35);
	func_241(34, 1);
	func_236(6, 0, 0);
	func_241(35, 1);
	func_192(0, 0);
	func_192(6, 0);
	func_235(49);
	func_237(75, 0);
	func_240(28, 11);
	func_227(311708813);
	func_190(54);
	func_192(21, 1);
	func_207(6);
	func_192(23, 1);
	func_211(73, 0);
	func_211(67, 0);
	func_211(66, 0);
	func_207(0);
	func_240(26, 26);
	func_164(10);
	func_172(joaat("AZ_CAMP_DARK_MOOD_ZONE"), 1, 0);
	func_235(58);
	func_198(664571177);
	func_240(24, 31);
	func_240(25, 30);
	func_198(409602249);
	func_192(7, 0);
	func_237(68, 0);
	func_215();
	func_216(16);
}

void func_56()
{
	func_160(18);
	func_161();
	func_268(0, 4, 1);
	func_235(53);
	func_193(16, 1, 0, 3, 1);
	func_193(4, 4, 0, 1, 1);
	func_198(235928616);
	func_234(136);
	func_268(1, 4, 2);
	func_234(76);
	func_247(76);
	func_193(9, 4, 0, 2, 1);
	func_260(2, 3);
	func_214(9, 0);
	func_237(34, 0);
	func_191(joaat("WEAPON_RIFLE_BOLTACTION"), 1, 1, 0, -1);
	func_211(76, 0);
	func_198(-76237062);
	func_235(54);
	func_227(-76237062);
	func_171(1);
	func_210(17);
	func_207(0);
	func_207(6);
	func_237(71, 0);
	func_211(65, 0);
	func_235(55);
	func_207(3);
	func_236(2, 0, 0);
	func_235(56);
	func_198(-828139293);
	func_269(0);
	func_269(1);
	func_269(2);
	func_269(3);
	func_269(7);
	func_237(67, 0);
	func_220(8);
	func_195(14);
	func_211(68, 0);
	func_270(23);
	func_270(17);
	func_270(21);
	func_192(20, 0);
	func_192(15, 0);
	func_192(4, 0);
	func_235(57);
	func_192(13, 0);
	func_192(14, 0);
	func_210(19);
	func_215();
	func_216(18);
}

void func_57()
{
	func_160(19);
	func_161();
	func_270(0);
	func_270(1);
	func_270(2);
	func_270(3);
	func_270(4);
	func_270(5);
	func_270(6);
	func_270(7);
	func_270(8);
	func_270(9);
	func_270(11);
	func_270(15);
	func_270(16);
	func_270(17);
	func_270(18);
	func_270(19);
	func_270(20);
	func_270(21);
	func_270(22);
	func_270(23);
	func_192(13, 0);
	func_192(14, 0);
	func_192(12, 0);
	func_192(24, 0);
	func_192(25, 0);
	func_186(35, 1);
	func_186(32, 1);
	func_186(38, 0);
	func_187(4, 0, 0);
	func_187(12, 0, 0);
	func_187(13, 0, 0);
	func_187(14, 0, 0);
	func_187(15, 0, 0);
	func_187(16, 0, 0);
	func_187(0, 0, 0);
	func_187(2, 0, 0);
	func_187(10, 0, 0);
	func_271(945);
	func_171(2);
	func_197(59);
	func_172(joaat("AZ_CAMP_DARK_MOOD_ZONE"), 0, 0);
	func_263(1);
	func_227(-828139293);
	func_213(0);
	func_213(1);
	func_213(2);
	func_213(3);
	func_213(7);
	func_238(95, 0, 350);
	func_238(93, 0, 350);
	func_174(26);
	func_174(46);
	func_198(-538889627);
	func_198(559573222);
	func_210(20);
	func_211(88, 0);
	func_272(0);
	func_178(11, joaat("A_C_HORSE_TURKOMAN_DARKBAY"));
	func_235(76);
	func_198(94263042);
	func_198(-2106445152);
	func_197(77);
	func_220(13);
	func_192(7, 0);
	func_207(13);
	func_207(14);
	func_207(4);
	func_207(12);
	func_214(36, 0);
	func_234(52);
	func_198(-618620429);
	func_273();
	func_241(39, 1);
	func_215();
	func_216(19);
}

void func_58()
{
	func_160(20);
	func_161();
	func_163(joaat("PLAYER_THREE"));
	func_274();
	func_164(0);
	func_191(joaat("WEAPON_REPEATER_HENRY"), 1, 1, 0, -1);
	func_272(1);
	func_168(61, 0);
	func_177(14, joaat("CS_JACKMARSTON_TEEN"));
	func_177(12, joaat("A_C_DOGRUFUS_01"));
	func_178(7, joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"));
	func_178(11, joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"));
	func_178(4, joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"));
	func_179(14, -268604689);
	func_198(704802028);
	func_273();
	func_214(79, 1);
	func_198(-63926460);
	func_198(374115931);
	func_198(-1241340344);
	func_198(-1425209566);
	func_198(-664512648);
	func_198(-811637947);
	func_198(-919512195);
	func_198(405586984);
	func_227(-622554983);
	func_227(1485494263);
	func_198(-25901845);
	func_198(-1738165526);
	func_227(2091701359);
	func_166(0, 90);
	func_166(1, 90);
	func_166(2, 90);
	func_183(13, joaat("TSTAG_ENDLESS_SUMMER"), -1784359682, -1);
	func_181(74, joaat("CS_MRPEARSON"));
	func_194(10);
	func_194(11);
	func_198(-259123672);
	func_198(-1062490780);
	func_222(48);
	func_170(7, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_BEAVER_HOLLOW"), 0, 1);
	func_172(joaat("AZL_CAMP_PRONGHORN_RANCH"), 1, 1);
	func_172(joaat("AZL_PRONGHORN_RANCH"), 1, 1);
	func_198(1850082804);
	func_175(0);
	func_162(8, 0, 0, 18, 5, 1907);
	func_275();
	func_260(0, 5);
	func_260(2, 2);
	func_260(1, 2);
	func_260(5, 2);
	func_204();
	func_205();
	func_190(45);
	func_174(16);
	func_197(60);
	func_202(joaat("WEAPON_LASSO"), 1);
	func_202(joaat("WEAPON_MELEE_KNIFE"), 1);
	func_220(10);
	func_227(1850082804);
	func_235(61);
	func_207(13);
	func_207(14);
	func_227(1850082804);
	func_210(21);
	func_235(63);
	func_211(97, 0);
	func_197(64);
	func_237(98, 0);
	func_235(66);
	func_198(-182889087);
	func_260(4, 3);
	func_168(62, 0);
	func_211(95, 0);
	func_192(13, 1);
	func_192(14, 1);
	func_197(67);
	func_263(0);
	func_190(46);
	func_190(16);
	func_202(-361635024 /* GXTEntry: "The Cowboy" */, 1);
	func_202(-409616653 /* GXTEntry: "The Homesteader" */, 1);
	func_202(-1205612021 /* GXTEntry: "The Winter Cowboy" */, 1);
	func_202(-1611873049 /* GXTEntry: "The Rancher" */, 1);
	func_202(890706995 /* GXTEntry: "The Cowhand" */, 1);
	func_168(62, 1);
	func_168(65, 0);
	func_168(70, 0);
	func_168(91, 0);
	func_168(93, 0);
	func_202(-1515874150 /* GXTEntry: "John\'s Off-Hand Holster" */, 1);
	func_202(1082956942 /* GXTEntry: "Weathered Pistol Belt" */, 1);
	func_202(-1282334963 /* GXTEntry: "Weathered Holster" */, 1);
	func_272(0);
	func_237(90, 0);
	func_210(22);
	func_234(51);
	func_234(42);
	func_234(71);
	func_234(126);
	func_234(100);
	func_211(91, 0);
	func_170(8, 0);
	func_171(1);
	func_198(-1056767524);
	func_172(joaat("AZL_CAMP_PRONGHORN_RANCH"), 0, 1);
	func_172(joaat("AZL_PRONGHORN_RANCH"), 0, 1);
	func_172(joaat("AZL_CAMP_BEECHERS_HOPE"), 1, 1);
	func_172(joaat("AZL_BEECHERS_HOPE"), 1, 1);
	func_211(102, 0);
	func_235(73);
	func_198(2008888900);
	func_273();
	func_176(7);
	func_237(92, 0);
	func_237(83, 0);
	func_211(93, 0);
	func_198(1649996811);
	func_273();
	func_211(85, 0);
	func_234(145);
	func_235(74);
	func_260(3, 3);
	func_198(227918160);
	func_273();
	func_235(68);
	func_237(96, 0);
	func_198(168171957);
	func_273();
	func_211(94, 0);
	func_198(1193080109);
	func_273();
	func_235(75);
	func_233(5);
	func_198(618699440);
	func_237(89, 0);
	func_215();
	func_216(20);
}

void func_59()
{
	func_160(21);
	func_161();
	func_235(62);
	func_237(97, 0);
	func_198(-1056767524);
	func_211(98, 0);
	func_235(65);
	func_237(95, 0);
	func_215();
	func_216(21);
}

void func_60()
{
	func_160(22);
	func_161();
	func_235(69);
	func_237(102, 0);
	func_200(0);
	func_234(17);
	func_234(18);
	func_234(16);
	func_234(20);
	func_234(19);
	func_211(83, 0);
	func_235(72);
	func_237(85, 0);
	func_211(96, 0);
	func_235(70);
	func_237(94, 0);
	func_211(86, 0);
	func_235(71);
	func_237(99, 0);
	func_215();
	func_216(22);
}

void func_61()
{
	func_160(23);
	func_161();
	func_234(63);
	func_247(63);
	func_231(0, 0);
	func_260(0, 3);
	func_193(10, 0, -1, 0, 1);
	func_179(10, -268604689);
	func_225(10);
	func_191(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, 1, 1, -1);
	func_210(2);
	func_237(13, 0);
	func_211(25, 0);
	func_211(21, 0);
	func_211(23, 0);
	func_211(37, 0);
	func_192(1, 1);
	func_192(5, 1);
	func_234(21);
	func_210(7);
	func_211(72, 0);
	func_243(5, 1);
	func_234(64);
	func_247(64);
	func_252(64, 2, 28, -2);
	func_192(11, 0);
	func_236(2, 0, 0);
	func_252(64, 0, 29, -2);
	func_241(28, 1);
	func_214(16, 1);
	func_234(65);
	func_247(65);
	func_198(311708813);
	func_260(0, 5);
	func_191(joaat("WEAPON_REPEATER_HENRY"), 1, 1, 0, -1);
	func_241(29, 1);
	func_207(11);
	func_237(73, 0);
	func_215();
	func_216(23);
}

void func_62()
{
	func_160(24);
	func_161();
	func_211(16, 0);
	func_234(0);
	func_247(0);
	func_193(0, 1, 0, 1, 1);
	func_193(13, 4, 0, 1, 1);
	func_193(14, 4, 0, 3, 1);
	func_202(joaat("WEAPON_FISHINGROD"), 1);
	func_237(5, 0);
	func_234(41);
	func_209(joaat("SP_CHAL_SURV_ROOT"));
	func_211(17, 0);
	func_234(134);
	func_247(134);
	func_225(11);
	func_179(11, 1205492208);
	func_193(11, 0, -1, 0, 1);
	func_193(11, 4, 0, 3, 1);
	func_193(17, 0, -1, 0, 1);
	func_173(11, 1.2f, -1082130432 /* Float: -1f */);
	func_177(12, joaat("A_C_DOGCATAHOULACUR_01"));
	func_179(12, -1394723994);
	func_190(28);
	func_237(20, 0);
	func_237(31, 0);
	func_211(64, 0);
	func_254(joaat("COMPLETED"), joaat("MISSIONS_CHP4"), 3, 33);
	func_238(105, 0, 350);
	func_238(95, 0, 350);
	func_211(74, 0);
	func_254(joaat("MISSIONS_PROGRESSED"), 0, 1, 46);
	func_234(6);
	func_247(7);
	func_241(31, 1);
	func_253(6);
	func_253(7);
	func_211(89, 0);
	func_276(1);
	func_247(1);
	func_233(4);
	func_172(joaat("AZL_BEECHERS_HOPE_FARM_RUNNING"), 1, 1);
	func_207(14);
	func_207(13);
	func_207(12);
	func_220(12);
	func_237(86, 0);
	func_237(101, 0);
	func_211(99, 0);
	func_211(87, 0);
	func_234(2);
	func_247(2);
	func_198(-491981251);
	func_273();
	func_237(88, 0);
	func_215();
	func_216(24);
}

void func_63()
{
	func_160(26);
	func_161();
	func_234(120);
	func_247(120);
	func_190(36);
	func_190(32);
	func_190(7);
	func_190(10);
	func_191(joaat("WEAPON_MELEE_KNIFE"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_BOW"), 1, 1, 0, -1);
	func_190(9);
	func_190(27);
	func_190(47);
	func_190(55);
	func_237(1, 0);
	func_211(3, 0);
	func_211(2, 0);
	func_211(4, 0);
	func_211(6, 0);
	func_171(2);
	func_234(66);
	func_247(66);
	func_191(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 1, 0, 525);
	func_219(1);
	func_238(26, 0, 350);
	func_222(48);
	func_170(2, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_HORSESHOE_OVERLOOK"), 0, 1);
	func_172(joaat("AZL_CAMP_CLEMENS_POINT"), 1, 1);
	func_198(1944170089);
	func_192(18, 0);
	func_169(-922193456);
	func_232(5);
	func_237(7, 0);
	func_237(17, 0);
	func_242(0, 0);
	func_239(12, 13, -2);
	func_240(2, 12);
	func_241(13, 1);
	func_211(33, 0);
	func_240(29, 27);
	func_234(67);
	func_247(67);
	func_192(18, 0);
	func_260(2, 4);
	func_219(2);
	func_169(-922193456);
	func_222(48);
	func_170(3, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_CLEMENS_POINT"), 0, 1);
	func_172(joaat("AZL_CAMP_SHADY_BELLE"), 1, 1);
	func_227(1944170089);
	func_210(10);
	func_237(64, 0);
	func_192(18, 0);
	func_232(5);
	func_234(117);
	func_238(76, 0, 350);
	func_211(44, 0);
	func_234(139);
	func_247(139);
	func_207(18);
	func_255(5);
	func_277(0, 2);
	func_277(0, 1);
	func_277(0, 3);
	func_211(60, 0);
	func_266(0, 7);
	func_266(0, 8);
	func_266(0, 0);
	func_266(0, 1);
	func_266(0, 2);
	func_266(0, 3);
	func_198(1626481264);
	func_276(82);
	func_191(joaat("WEAPON_MELEE_CLEAVER"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_MELEE_HATCHET"), 1, 1, 0, -1);
	func_191(joaat("WEAPON_MELEE_MACHETE"), 1, 1, 0, 526);
	func_240(28, 24);
	func_240(29, 25);
	func_204();
	func_205();
	func_276(83);
	func_237(61, 0);
	func_211(69, 0);
	func_234(68);
	func_247(68);
	func_219(4);
	func_214(79, 0);
	func_260(1, 3);
	func_260(2, 3);
	func_222(48);
	func_170(6, 0);
	func_192(12, 0);
	func_171(1);
	func_172(joaat("AZL_CAMP_LAKAY"), 0, 1);
	func_172(joaat("AZL_CAMP_BEAVER_HOLLOW"), 1, 1);
	func_192(18, 0);
	func_207(23);
	func_232(5);
	func_182(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"));
	func_240(4, 32);
	func_175(0);
	func_192(16, 0);
	func_257(16);
	func_191(joaat("WEAPON_PISTOL_MAUSER"), 0, 1, 0, -1);
	func_234(147);
	func_237(78, 0);
	func_237(74, 0);
	func_211(59, 0);
	func_234(140);
	func_247(140);
	func_207(18);
	func_255(5);
	func_277(0, 4);
	func_247(141);
	func_278(0, 4);
	func_278(0, 5);
	func_278(0, 6);
	func_247(142);
	func_241(26, 1);
	func_278(0, 4);
	func_278(0, 5);
	func_278(0, 6);
	func_253(140);
	func_253(141);
	func_253(142);
	func_270(18);
	func_255(5);
	func_211(90, 0);
	func_234(8);
	func_247(8);
	func_234(9);
	func_247(9);
	func_176(4);
	func_237(91, 0);
	func_220(11);
	func_198(588987611);
	func_273();
	func_211(92, 0);
	func_234(10);
	func_247(10);
	func_237(93, 0);
	func_211(101, 0);
	func_234(96);
	func_247(96);
	func_237(87, 0);
	func_215();
	func_216(26);
}

void func_64()
{
	func_160(25);
	func_161();
	func_234(59);
	func_247(59);
	func_277(0, 0);
	func_277(0, 7);
	func_277(0, 8);
	func_279(1);
	func_234(61);
	func_247(61);
	func_210(29);
	func_234(62);
	func_247(62);
	func_244(8, 0);
	func_241(9, 1);
	func_258(61);
	func_276(62);
	func_241(8, 1);
	func_237(3, 0);
	func_212(100);
	func_232(1);
	func_211(70, 0);
	func_234(69);
	func_247(69);
	func_211(71, 0);
	func_234(70);
	func_247(70);
	func_241(30, 1);
	func_253(69);
	func_253(70);
	func_215();
	func_216(25);
}

void func_65()
{
	func_160(27);
	func_161();
	func_192(5, 0);
	func_280(596);
	func_234(94);
	func_247(94);
	func_193(5, 4, 0, 2, 1);
	func_212(100);
	func_237(100, 0);
	func_207(5);
	func_211(50, 0);
	func_234(115);
	func_247(115);
	func_236(2, 0, 0);
	func_234(116);
	func_247(116);
	func_236(2, 0, 0);
	func_211(42, 0);
	func_280(529);
	func_192(7, 0);
	func_237(49, 0);
	func_215();
	func_216(27);
}

void func_66()
{
	func_160(28);
	func_161();
	func_234(3);
	func_234(4);
	func_247(4);
	func_245(0, 1);
	func_234(5);
	func_247(5);
	func_192(1, 0);
	func_245(1, 1);
	func_237(21, 0);
	func_230(33, 1);
	func_211(51, 0);
	func_234(22);
	func_247(23);
	func_241(24, 1);
	func_253(22);
	func_253(23);
	func_211(62, 0);
	func_234(58);
	func_247(58);
	func_164(9);
	func_237(70, 0);
	func_237(59, 0);
	func_251(23, -2, 38);
	func_234(24);
	func_241(38, 1);
	func_247(25);
	func_241(11, 1);
	func_253(22);
	func_253(23);
	func_253(24);
	func_253(25);
	func_215();
	func_216(28);
}

void func_67()
{
	func_160(30);
	func_161();
	func_234(26);
	func_234(84);
	func_234(86);
	func_234(87);
	func_234(88);
	func_247(84);
	func_247(85);
	func_247(86);
	func_247(87);
	func_247(88);
	func_211(52, 0);
	func_234(27);
	func_215();
	func_216(30);
}

void func_68(int iParam0)
{
	func_160(iParam0);
	func_161();
	func_215();
	func_216(iParam0);
}

void func_69()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_1835011[iVar0 /*74*/] = -1;
		Global_1835011[iVar0 /*74*/].f_1 = 0;
		StringCopy(&(Global_1835011[iVar0 /*74*/].f_3), "", 32);
		StringCopy(&(Global_1835011[iVar0 /*74*/].f_8), "", 8);
		Global_1835011[iVar0 /*74*/].f_18 = { 0f, 0f, 0f };
		Global_1835011[iVar0 /*74*/].f_26 = 0;
		Global_1835011[iVar0 /*74*/].f_29 = 0;
		StringCopy(&(Global_1835011[iVar0 /*74*/].f_9), "", 24);
		StringCopy(&(Global_1835011[iVar0 /*74*/].f_12), "", 32);
		Global_1835011[iVar0 /*74*/].f_30 = 0;
		iVar0++;
	}
}

void func_70()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 <= 77)
	{
		func_281(&(Global_1835011[iVar0 /*74*/]));
		iVar0++;
	}
	func_282(0, 0, "winter1", "WNT1", 0, "", "", -1347.48f, 2436.06f, 307.46f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(1, 0, "winter2", "WNT2", 33280, "WNT2_INT", "winter2_intro", -1323.966f, 2438.497f, 308.6447f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(3, 0, "winter4", "WNT4", 33280, "WNT4_INT", "winter4_intro", -1326.43f, 2441.23f, 309.64f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_283(0, "winter1_outro");
	func_283(1, "winter2_outro");
	func_283(3, "winter4_outro");
	func_283(2, "odriscolls1_outro");
	func_284(1, 15);
	func_284(1, 13);
	func_284(1, 2);
	func_284(1, 5);
	func_284(1, 22);
	func_284(1, 14);
	func_284(1, 4);
	func_284(1, 18);
	func_284(1, 20);
	func_284(1, 11);
	func_284(1, 19);
	func_284(1, 21);
	func_284(3, 0);
	func_284(3, 5);
	func_284(3, 21);
	func_284(3, 1);
	func_282(4, 1, "mudtown1", "MUD1", 32768, "MUD1_INT", "mudtown1_intro", -1316.418f, 2421.595f, 306.5768f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(5, 1, "mudtown2", "MUD2", 512, "MUD2_INT", "mudtown2_intro", -312.771f, 803.3489f, 117.9849f, joaat("BLIP_SCM_JAVIER"), 45000);
	func_282(6, 3, "mudtown3", "MUD3", 512, "MUD3_INT", "mudtown3_intro", -100.1908f, -25.6157f, 94.9512f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_282(14, 1, "mudtown4", "MUD4", 12, "MUD4_INT", "mudtown4_intro", -252.9086f, 687.2473f, 112.3933f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_282(24, 1, "mudtown5", "MUD5", 0, "MUD5_INT", "mudtown5_intro", 719.8f, -1241.849f, 45.4094f, joaat("BLIP_MISSION_BILL"), 45000);
	func_285(14, (75f * 2f), (100f * 2f), (100f * 2f));
	func_282(8, 29, "mary1", "MRY1", 32768, "", "mary1_intro", 897.1398f, 1280.598f, 233.7575f, joaat("BLIP_SCM_MARY"), 45000);
	func_282(36, 29, "mary3", "MRY3", 0, "MRY3_INT", "mary3_intro", 2676.633f, -1266.643f, 50.84106f, joaat("BLIP_SCM_MARY"), 45000);
	func_285(8, (75f * 2f), (100f * 2f), (100f * 2f));
	func_285(36, (75f * 1.5f), (100f * 1.5f), (200f / 1.33f));
	func_283(4, "mudtown1_outro");
	func_283(6, "mudtown3_outro");
	func_284(4, 0);
	func_284(4, 5);
	func_284(5, 3);
	func_284(5, 2);
	func_284(5, 7);
	func_284(6, 4);
	func_284(14, 1);
	func_284(24, 3);
	func_284(24, 9);
	func_284(24, 20);
	func_285(5, (75f * 2.2f), (100f * 2.2f), 1128792064 /* Float: 200f */);
	func_285(6, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(24, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(9, 2, "saloon1", "SAL1", 0, "SAL1_INT", "saloon1_intro", -128.8677f, -31.6843f, 95.0839f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(9, 0);
	func_284(9, 9);
	func_284(9, 16);
	func_285(9, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(9, "saloon1_outro");
	func_282(11, 2, "utopia1", "UTP1", 0, "UTP1_INT", "utopia1_intro", -1804.762f, -351.7945f, 163.1185f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_284(11, 6);
	func_282(12, 2, "utopia2", "UTP2", 0, "UTP2_INT", "utopia2_intro", -1531.901f, -307.4734f, 141.4547f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_284(12, 6);
	func_283(12, "utopia2_outro");
	func_282(13, 1, "sean1", "SEN1", 0, "SEN1_INT", "sean1_intro", -870f, -1098f, 56.9f, joaat("BLIP_SCM_JAVIER"), 45000);
	func_284(13, 23);
	func_284(13, 2);
	func_284(13, 7);
	func_285(13, (75f * 4f), (100f * 4f), 1128792064 /* Float: 200f */);
	func_282(25, 3, "mudtown3b", "MUD6", 0, "MUD3B_INT", "mudtown3b_intro", 1173.268f, -102.1099f, 96.2466f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_284(25, 8);
	func_284(25, 1);
	func_284(25, 7);
	func_285(25, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(7, 4, "bounty1", "BOU1", 0, "RBSOS_INT", "bounty1_intro", -275.4033f, 801.9575f, 118.4063f, joaat("BLIP_MISSION_BOUNTY"), 45000);
	func_285(7, 50f, 75f, 1128792064 /* Float: 200f */);
	func_283(7, "bounty1_outro");
	func_282(10, 5, "reverend1", "REV1", 0, "RRVRD_RSC_1", "reverend1_intro", -327.6682f, -357.796f, 87.0507f, joaat("BLIP_SCM_REVEREND"), 45000);
	func_284(10, 21);
	func_283(10, "reverend1_outro");
	func_285(10, (75f * 2f), (100f * 2f), (100f * 2f));
	func_282(15, 31, "hunting1", "HNT1", 32768, "RCHNT1_INT", "hunting1_intro", -107.3907f, -26.07745f, 95.27734f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_284(15, 5);
	func_285(15, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(16, 6, "feud1", "FUD1", 0, "", "feud1_intro", 648.6395f, -1281.028f, 40.9099f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_283(16, "feud1_outro");
	func_284(16, 0);
	func_284(16, 5);
	func_285(16, (75f * 2.5f), (100f * 2.5f), 1128792064 /* Float: 200f */);
	func_282(17, 6, "grays1", "GRY1", 0, "GRY1_INT", "grays1_intro", 1359.14f, -1305.885f, 76.7662f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(19, 6, "grays2", "GRY2", 32768, "", "grays2_intro", 1711.4f, -1383.2f, 42.89f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_282(21, 6, "grays3", "GRY3", 0, "GRY3_INT", "grays3_intro", 1291.136f, -1290.923f, 75.5354f, joaat("BLIP_MISSION_BILL"), 45000);
	func_285(17, (75f * 4f), (100f * 4f), 1128792064 /* Float: 200f */);
	func_285(19, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(21, (75f * 4f), (100f * 4f), 1128792064 /* Float: 200f */);
	func_283(17, "grays1_outro");
	func_283(19, "grays2_outro");
	func_284(17, 0);
	func_284(17, 3);
	func_284(19, 2);
	func_284(19, 1);
	func_284(21, 6);
	func_284(21, 3);
	func_284(21, 8);
	func_282(18, 7, "braithwaites1", "BRT1", 0, "BRT1_INT", "braithwaites1_intro", 776.5498f, -1056.568f, 53.8989f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_282(20, 7, "braithwaites2", "BRT2", 0, "BRT2_INT", "braithwaites2_intro", 1011.21f, -1761.52f, 47.6f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_282(26, 7, "braithwaites3", "BRT3", 32768, "BRT3_INT", "braithwaites3_intro", 656.3981f, -1252.135f, 43.8652f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_285(18, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(20, (75f * 4f), (100f * 4f), (100f * 1.5f));
	func_285(26, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(18, "braithwaites1_outro");
	func_283(20, "braithwaites2_outro");
	func_284(18, 5);
	func_284(18, 1);
	func_284(20, 8);
	func_284(20, 5);
	func_284(26, 0);
	func_284(26, 18);
	func_284(26, 10);
	func_284(26, 16);
	func_284(26, 23);
	func_284(26, 5);
	func_284(26, 13);
	func_284(26, 1);
	func_284(26, 3);
	func_284(26, 7);
	func_284(26, 2);
	func_284(26, 9);
	func_284(26, 6);
	func_282(22, 8, "trelawny1", "TRE1", 0, "", "trelawny1_intro", 655.7808f, -1251.116f, 42.6758f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(22, 0);
	func_284(22, 7);
	func_282(27, 10, "mob1", "MOB1", 0, "MOB1_INT", "mob1_intro", 2626.94f, -1219.637f, 52.2649f, joaat("BLIP_SCM_BRONTE"), 45000);
	func_282(28, 10, "mob2", "MOB2", 0, "", "mob2_intro", 2447.677f, -1200.614f, 45.2694f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(29, 10, "mob3", "MOB3", 0, "MOB3_INT", "mob3_intro", 2720.927f, -1353.315f, 46.7962f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(30, 10, "mob4", "MOB4", 0, "MOB4_INT", "mob4_intro", 1891.44f, -1858.19f, 46.7928f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(31, 10, "mob5", "MOB5", 0, "MOB5_INT", "mob5_intro", 2140.294f, -645.7061f, 41.5042f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_283(27, "mob1_outro");
	func_283(29, "mob3_outro");
	func_283(30, "mob4_outro");
	func_284(27, 0);
	func_285(27, (75f * 2f), (100f * 2f), 100f);
	func_284(28, 1);
	func_284(28, 0);
	func_285(28, (75f * 2f), (100f * 2f), 100f);
	func_284(29, 0);
	func_284(29, 9);
	func_285(29, 175f, 225f, 175f);
	func_284(30, 0);
	func_284(30, 5);
	func_284(31, 0);
	func_284(31, 1);
	func_284(31, 3);
	func_284(31, 9);
	func_285(31, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(2, 11, "odriscolls1", "DST1", 33280, "ODR1_INT", "odriscolls1_intro", -1360.4f, 2425.1f, 307.4f, joaat("BLIP_MISSION_BILL"), 45000);
	func_284(2, 3);
	func_284(2, 6);
	func_284(2, 9);
	func_282(23, 11, "odriscolls3", "DST3", 0, "odr3_int", "odriscolls3_intro", 656.0257f, -1250.951f, 43.1798f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_284(23, 6);
	func_285(23, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(23, "odriscolls3_outro");
	func_282(32, 11, "odriscolls4", "ODR4", 0, "ODR4_INT", "odriscolls4_intro", 1892.036f, -1856.665f, 42.1234f, joaat("BLIP_SCM_SADIE"), 45000);
	func_282(47, 11, "odriscolls5", "DST5", 0, "DST5_INT", "odriscolls5_intro", 2794.039f, -1169.609f, 46.924f, joaat("BLIP_SCM_SADIE"), 45000);
	func_285(47, 75f, 100f, (200f / 2f));
	func_284(32, 11);
	func_284(32, 0);
	func_284(32, 10);
	func_284(47, 11);
	func_282(33, 12, "industry1", "IND1", 0, "IND1_INT", "industry1_intro", 1891.336f, -1839.029f, 42.458f, joaat("BLIP_MISSION_HOSEA"), 45000);
	func_282(34, 12, "industry3", "IND3", 12, "IND3_INT", "industry3_intro", 2549.555f, -1181.013f, 53.281f, joaat("BLIP_SCM_TRELAWNEY"), 45000);
	func_283(34, "industry3_outro");
	func_284(33, 0);
	func_284(33, 5);
	func_284(34, 23);
	func_285(34, 1117126656 /* Float: 75f */, 1120403456 /* Float: 100f */, 100f);
	func_282(37, 12, "saint_denis1", "NBD1", 0, "NBD1_INT", "saint_denis1_intro", 1891.318f, -1864.423f, 42.17f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(37, 0);
	func_284(37, 6);
	func_284(37, 3);
	func_284(37, 7);
	func_284(37, 1);
	func_284(37, 5);
	func_284(37, 13);
	func_285(37, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(35, 9, "susan1", "SUS1", 0, "SUS1_INT", "susan1_intro", 1877.251f, -1881.726f, 42.1481f, joaat("BLIP_SCM_MARYBETH"), 45000);
	func_284(35, 19);
	func_284(35, 22);
	func_282(38, 13, "guama1", "GUA1", 0, "GUA1_INT", "", 688.195f, -5521.027f, 42.97f, joaat("BLIP_OBJECTIVE"), 45000);
	func_282(39, 13, "guama2", "GUA2", 0, "GUA1_EXT", "", 2008.97f, -4491.485f, 41.0253f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(43, 13, "guama3", "GUA3", 0, "GUA3_INT", "guarma3_intro", 1307.386f, -6824.723f, 42.4679f, joaat("BLIP_MISSION_BILL"), 45000);
	func_284(39, 0);
	func_284(39, 6);
	func_284(39, 2);
	func_284(43, 0);
	func_284(43, 3);
	func_284(43, 2);
	func_284(43, 6);
	func_285(43, (75f * 5f), (100f * 5f), 1128792064 /* Float: 200f */);
	func_282(40, 13, "fussar1", "FUS1", 0, "", "fussar1_intro", 1534.57f, -7149.84f, 63.4f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(41, 14, "fussar2", "FUS2", 0, "", "fussar2_intro", 1318.124f, -7222.688f, 54.3179f, joaat("BLIP_RC"), 45000);
	func_284(40, 0);
	func_284(40, 2);
	func_285(40, (75f * 3f), (100f * 3f), 100f);
	func_283(40, "fussar1_outro");
	func_283(41, "fussar2_outro");
	func_285(41, 75f, 100f, 90f);
	func_282(42, 14, "smuggler2", "SMG2", 0, "SMG2_INT", "smuggler2_intro", 998.9632f, -6744.742f, 57.315f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(42, 0);
	func_284(42, 3);
	func_284(42, 6);
	func_283(42, "smuggler2_outro");
	func_282(44, 15, "gang1", "GNG1", 0, "GNG1_INT", "gang1_intro", 2239.396f, -768.93f, 42.4355f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_282(45, 15, "gang2", "GNG2", 0, "GNG2_INT", "gang2_intro", 2794.276f, -1169.057f, 47.424f, joaat("BLIP_SCM_SADIE"), 45000);
	func_282(46, 15, "gang3", "GNG3", 0, "GNG3_INT", "gang3_intro", 2903.111f, -248.0395f, 40.9789f, joaat("BLIP_SCM_SADIE"), 45000);
	func_284(44, 11);
	func_284(44, 13);
	func_285(44, (75f * 5f), (100f * 5f), 1128792064 /* Float: 200f */);
	func_283(44, "gang1_outro");
	func_284(45, 11);
	func_285(45, (75f * 3f), (100f * 3f), 100f);
	func_284(46, 11);
	func_284(46, 13);
	func_285(46, (75f * 7f), (100f * 7f), 1128792064 /* Float: 200f */);
	func_282(53, 18, "cornwall1", "CRN1", 0, "CRN1_INT", "cornwall1_intro", 706.8683f, -1243.771f, 44.1344f, joaat("BLIP_SCM_MOLLY_OSHEA"), 45000);
	func_282(54, 18, "train_robbery1", "TRN1", 0, "TRN1_INT", "train_robbery1_intro", 2912.107f, 1324.443f, 44.2873f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_282(55, 18, "train_robbery2", "TRN2", 0, "TRN2_INT", "train_robbery2_intro", 2785.663f, 521.8132f, 67.3731f, joaat("BLIP_MISSION_MICAH"), 45000);
	func_282(56, 18, "train_robbery3", "TRN3", 0, "TRN3_INT", "train_robbery3_intro", 568.1516f, 1693.468f, 185.5488f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_284(53, 16);
	func_283(53, "cornwall1_outro");
	func_284(54, 6);
	func_284(54, 0);
	func_285(54, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_284(55, 3);
	func_284(55, 6);
	func_285(55, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_284(56, 1);
	func_285(56, (75f * 3.75f), (100f * 4.5f), 1128792064 /* Float: 200f */);
	func_282(57, 18, "train_robbery4", "TRN4", 0, "TRN4_INT", "train_robbery4_intro", 2357.59f, 1373.9f, 105.6f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_284(57, 0);
	func_285(57, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_283(57, "train_robbery4_outro");
	func_282(48, 16, "native1", "NTV1", 0, "NTV1_INT", "native1_intro", 441.702f, 2229.45f, 248.136f, joaat("BLIP_SCM_RAINS"), 45000);
	func_282(49, 16, "native2", "NTV2", 0, "NTV2_INT", "native2_intro", 2345.514f, 1367.028f, 105.3159f, joaat("BLIP_SCM_TRELAWNEY"), 45000);
	func_282(58, 16, "native3", "NTV3", 0, "NTV3_INT", "native3_intro", 2359.382f, 1373.606f, 105.3286f, joaat("BLIP_MISSION_DUTCH"), 45000);
	func_283(48, "native1_outro");
	func_284(49, 7);
	func_285(49, (75f * 1.5f), (100f * 1.5f), 1128792064 /* Float: 200f */);
	func_283(49, "native2_outro");
	func_284(58, 3);
	func_284(58, 1);
	func_284(58, 0);
	func_284(58, 6);
	func_284(58, 4);
	func_284(58, 2);
	func_284(58, 7);
	func_284(58, 21);
	func_284(58, 23);
	func_284(58, 11);
	func_285(58, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(58, "native3_outro");
	func_282(50, 17, "native_son1", "NTS1", 0, "NTS1_INT", "native_son1_intro", 2342.456f, 1354.502f, 106.3074f, joaat("BLIP_SCM_REVEREND"), 45000);
	func_282(51, 17, "native_son2", "NTS2", 0, "NTS2_INT", "native_son2_intro", 71.4867f, 1071.386f, 194.9133f, joaat("BLIP_SCM_EAGLE_FLIES"), 45000);
	func_282(52, 17, "native_son3", "NTS3", 0, "", "native_son3_intro", 453.14f, 2211.46f, 245.04f, joaat("BLIP_SCM_CHARLES"), 45000);
	func_283(52, "native_son3_outro");
	func_284(50, 0);
	func_284(50, 7);
	func_284(50, 2);
	func_284(50, 20);
	func_284(51, 0);
	func_284(51, 26);
	func_284(52, 7);
	func_285(50, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(51, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(59, 19, "finale1", "FIN1", 0, "", "", 2505.984f, 1404.709f, 96.0203f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(76, 19, "finale2", "FIN2", 0, "FIN2_INT", "finale2_intro", -1640.544f, -1361.189f, 84.0584f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(77, 19, "finale3", "FIN3", 0, "", "", -1555.872f, -1437.203f, 92.9368f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_284(59, 11);
	func_284(76, 13);
	func_284(76, 4);
	func_284(76, 14);
	func_284(76, 7);
	func_284(76, 11);
	func_285(76, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_284(77, 13);
	func_283(77, "finale3_outro");
	func_282(60, 20, "marston1", "MAR1", 0, "MAR1_INT", "marston1_intro", -1624.569f, 428.6325f, 107.29f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_282(65, 21, "marston2", "MAR2", 0, "MAR2_INT", "marston2_intro", -2590.836f, 457.1726f, 146.019f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_282(66, 20, "marston4", "MAR4", 0, "MAR4_INT", "marston4_intro", -2560.566f, 399.7978f, 147.2715f, joaat("BLIP_SCM_DAVID_GEDDES"), 45000);
	func_282(61, 20, "marston5_1", "MAR5", 0, "MAR5_INT", "marston5_1_intro", -2589.093f, 408.1137f, 147.9029f, joaat("BLIP_SCM_TOM_DICKENS"), 45000);
	func_282(62, 21, "marston5_2", "MR52", 12, "MAR5_MCS5", "marston5_2_intro", -2606.167f, 366.299f, 148.4951f, joaat("BLIP_SCM_TOM_DICKENS"), 45000);
	func_282(63, 20, "marston5_3", "MR53", 0, "MAR5_MCS8", "marston5_3_intro", -2545.674f, 357.9615f, 151.2458f, joaat("BLIP_SCM_DAVID_GEDDES"), 45000);
	func_282(64, 20, "laramie1", "LAR1", 0, "", "laramie1_intro", -2598.761f, 412.5062f, 147.409f, joaat("BLIP_MISSION_JOHN"), 45000);
	func_285(65, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_285(61, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_283(62, "marston5x_outro");
	func_283(63, "marston5x_outro");
	func_283(65, "marston2_or_4_outro");
	func_283(66, "marston2_or_4_outro");
	func_282(73, 20, "marston6", "MAR6", 0, "RHLP2_RSC1", "marston6_intro", -1638.48f, -1358.785f, 83.2768f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_282(74, 20, "marston7", "MAR7", 0, "MAR7_INT", "marston7_intro", -865.2943f, -1306.124f, 42.00784f, joaat("BLIP_SCM_ALBERT_CAKES"), 45000);
	func_282(75, 20, "marston8", "MAR8", 0, "MAR8_INT", "marston8_intro", -1598.6f, -1419.1f, 81.6f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_282(68, 20, "beechers2_2", "BE22", 0, "rbch2_rsc5", "beechers2_2_intro", -1629.959f, -1392.888f, 82.8805f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_285(74, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_285(75, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_285(68, (75f * 2f), (100f * 2f), 1128792064 /* Float: 200f */);
	func_283(75, "marston8_outro");
	func_283(68, "beechers2_2_outro");
	func_284(65, 14);
	func_284(65, 13);
	func_284(73, 4);
	func_284(74, 7);
	func_284(75, 4);
	func_284(75, 7);
	func_284(68, 4);
	func_284(68, 7);
	func_282(67, 20, "abigail2_1", "AB21", 0, "RABI21_INT", "abigail2_1_intro", -2588.554f, 457.1668f, 145.2963f, joaat("BLIP_SCM_ABE_STABLEHAND"), 45000);
	func_283(67, "abigail21_outro");
	func_282(69, 22, "sadie2", "SAD2", 0, "SAD2_INT", "sadie2_intro", -307.6113f, 799.5872f, 117.9875f, joaat("BLIP_SCM_SADIE"), 45000);
	func_285(69, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(70, 22, "sadie3", "SAD3", 0, "RBCH3_RSC1", "sadie3_intro", -1551.319f, -1456.134f, 92.7963f, joaat("BLIP_SCM_UNCLE"), 45000);
	func_285(70, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_282(71, 22, "sadie4", "SAD4", 0, "SAD4_INT", "sadie4_intro", -1639.131f, -1363.211f, 83.4043f, joaat("BLIP_SCM_ABIGAIL"), 45000);
	func_283(71, "sadie4_outro");
	func_282(72, 22, "sadie5", "SAD5", 0, "SAD5_INT", "sadie5_intro", -809.3553f, -1322.738f, 43.6836f, joaat("BLIP_SCM_SADIE"), 45000);
	func_283(72, "sadie5_outro");
	func_285(72, (75f * 3f), (100f * 3f), 1128792064 /* Float: 200f */);
	func_284(69, 11);
	func_284(70, 4);
	func_284(71, 13);
	func_284(72, 11);
	func_282(78, 19, "dreamanim", "TL21", 0, "", "def_intro_script", 2106.678f, -2041.109f, 40.7255f, joaat("BLIP_MISSION_JOHN"), 45000);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_71(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, vector3 vParam6, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;

	if (!func_286(iParam0))
	{
		return;
	}
	if (!func_287(iParam1))
	{
		return;
	}
	if (Global_1879534 == 0)
	{
		Global_1347702[iParam0 /*49*/] = iParam1;
		StringCopy(&(Global_1347702[iParam0 /*49*/].f_1), sParam2, 16);
		StringCopy(&(Global_1347702[iParam0 /*49*/].f_3), sParam3, 8);
		StringCopy(&(Global_1347702[iParam0 /*49*/].f_4), sParam4, 64);
		Global_1347702[iParam0 /*49*/].f_15 = func_288(iParam0, iParam1, 8, 0);
		if (!func_289(Global_1347702[iParam0 /*49*/].f_15))
		{
			return;
		}
		if (fParam12 < 35f)
		{
			fParam12 = 35f;
		}
		Global_1347702[iParam0 /*49*/].f_16 = fParam12;
		Global_1347702[iParam0 /*49*/].f_28 = iParam9;
		Global_1347702[iParam0 /*49*/].f_36 = iParam10;
		if (iParam5 != -1)
		{
			Global_1347702[iParam5 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
		}
		Global_1347702[iParam0 /*49*/].f_17 = (Global_1347702[iParam0 /*49*/].f_16 + 10f);
		if (iParam11 & 4096 != 0)
		{
			Global_1347702[iParam0 /*49*/].f_20 = 0f;
		}
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1347702[iParam0 /*49*/].f_29[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1347702[iParam0 /*49*/].f_24 = { vParam6 };
	Global_1347702[iParam0 /*49*/].f_27 = func_290(vParam6, 1);
	Global_1347702[iParam0 /*49*/].f_35 = iParam5;
	Global_1347702[iParam0 /*49*/].f_12 = 0;
	func_291(&(Global_1347702[iParam0 /*49*/].f_12), iParam11);
}

void func_72(int iParam0, int iParam1)
{
	if (!func_286(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
	}
	else if (iParam1 > 48)
	{
		iParam1 = 48;
	}
	Global_1347702[iParam0 /*49*/].f_47 = iParam1;
}

void func_73(int iParam0, int iParam1, bool bParam2)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_46 = iParam1;
	if (bParam2)
	{
		func_291(&(Global_1347702[iParam0 /*49*/].f_12), 268435456);
	}
}

void func_74(int iParam0, float fParam1)
{
	float fVar0;

	if (!func_286(iParam0))
	{
		return;
	}
	fVar0 = (Global_1347702[iParam0 /*49*/].f_16 + 10f);
	if (fParam1 >= fVar0)
	{
		Global_1347702[iParam0 /*49*/].f_17 = fParam1;
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_17 = fVar0;
	}
}

void func_75(int iParam0, float fParam1)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_18 = fParam1;
	Global_1347702[iParam0 /*49*/].f_20 = (fParam1 + 5f);
	if (fParam1 >= Global_1347702[iParam0 /*49*/].f_19)
	{
		Global_1347702[iParam0 /*49*/].f_19 = (fParam1 + 5f);
	}
}

float func_76(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 70f;
		default:
			break;
	}
	return 75f;
}

int func_77(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_286(iParam0))
	{
		return;
	}
	if (iParam1 != 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < 27)
		{
			iVar0 = iVar1;
			if ((iParam1 && func_77(iVar0)) != 0 && func_137(iVar0))
			{
				if (iVar2 >= 5)
				{
					return;
				}
				Global_1347702[iParam0 /*49*/].f_29[iVar2] = iVar0;
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_79(int iParam0, int iParam1)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_44 = iParam1;
}

void func_80(int iParam0, float fParam1)
{
	Global_1347702[iParam0 /*49*/].f_20 = fParam1;
}

void func_81(int iParam0, float fParam1)
{
	Global_1347702[iParam0 /*49*/].f_19 = fParam1;
}

void func_82()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		func_292(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1899528.f_11)
	{
		Global_1899528.f_11[iVar0] = -1;
		iVar0++;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, int iParam12)
{
	if (!func_293(iParam0))
	{
		return;
	}
	if (!func_294(iParam2))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/] = iParam2;
	Global_1395601.f_5[iParam0 /*28*/].f_1 = iParam1;
	Global_1395601.f_5[iParam0 /*28*/].f_2 = { vParam3 };
	Global_1395601.f_5[iParam0 /*28*/].f_5 = { vParam6 };
	Global_1395601.f_5[iParam0 /*28*/].f_8 = { vParam9 };
	Global_1395601.f_5[iParam0 /*28*/].f_11 = iParam12;
}

Vector3 func_84()
{
	if (func_295(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_295(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

void func_85(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 > 4)
	{
		iParam0 = 4;
	}
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam1 == 16)
	{
		Global_40.f_4283.f_312 = iParam0;
		iVar0 = 0;
		while (iVar0 < 17)
		{
			func_296(iVar0, iParam0);
			iVar0++;
		}
	}
	else
	{
		func_296(iParam1, iParam0);
	}
}

void func_86(int iParam0)
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
		iVar0 = func_298(func_297(iParam0));
		if (iVar0 != -1)
		{
			Global_40.f_6 = { Global_1395601.f_5[iVar0 /*28*/].f_2 };
		}
		func_300(func_299(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
		Global_40.f_4283.f_330 = -15;
		return;
	}
	func_301();
	switch (iParam0)
	{
		case 0:
		case 1:
			func_302("hso_post_caravan");
			func_303(-349064220);
			break;
		case 2:
			func_302("dewclm_post_caravan");
			func_303(1776302352);
			func_304(-349064220);
			break;
		case 3:
			func_303(-523522517);
			func_304(-349064220);
			func_304(1776302352);
			break;
		case 4:
		case 5:
		case 6:
			func_304(-349064220);
			func_304(1776302352);
			func_304(-523522517);
			break;
		case 7:
		case 8:
			func_304(-349064220);
			func_304(1776302352);
			func_304(-523522517);
			func_304(1591451572);
			break;
	}
	Global_1934266.f_66 = 1;
	func_305(func_297(iParam0), 0);
	switch (func_115())
	{
		case -1:
			func_306();
			func_307(iParam0);
			func_308(1, 18);
			func_309(iParam0);
			func_310(iParam0);
			Var2.f_11 = 1;
			iVar22 = 0;
			while (iVar22 < 10)
			{
				MISC::_COPY_MEMORY(&(Global_40.f_6563.f_274[iVar22 /*20*/]), &Var2, 20);
				iVar22++;
			}
			Global_40.f_6563.f_273 = 0;
			func_311(&(Global_1359489.f_25), 1, 1);
			Global_1359453 = 0;
			iVar1 = 0;
			while (iVar1 < 27)
			{
				func_139(iVar1, 16384, 1);
				iVar1++;
			}
			func_312(0, 14);
			func_313();
			func_314();
			Global_1357549.f_1497.f_8 |= 1;
			Global_1391438 = 1;
			Global_40.f_4283.f_330 = -15;
			func_300(joaat("CSTAG_NEW_CAMP_FIRST_VISIT"), joaat("CSTP_NEXT_VISIT"), -1235532919, -1, 0, 1, 0);
			func_300(func_299(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
			break;
	}
}

void func_87()
{
	if (func_115() != -1)
	{
		return;
	}
	Global_40.f_4283.f_328 = -15;
	Global_40.f_4283.f_329 = -15;
	Global_40.f_4283.f_331 = -15;
	Global_40.f_4283.f_332[0] = -1;
	Global_40.f_4283.f_332[1] = -1;
	func_315(&(Global_40.f_4283.f_440[0 /*63*/]));
	func_315(&(Global_40.f_4283.f_440[1 /*63*/]));
	func_316(0, 711);
}

void func_88()
{
	if (!Global_40)
	{
		Global_40.f_4283.f_2 = 0;
		Global_40.f_4283.f_3 = 0;
		Global_40.f_4283.f_312 = 1;
		Global_40.f_4283.f_324 = 0;
		Global_40.f_4283.f_325 = 0;
		Global_40.f_4283.f_328 = Global_1899515;
	}
	Global_1357549 = 0;
	Global_1357549.f_1494 = 0;
	Global_1357549.f_1497.f_8 = 0;
	func_317(0);
	Global_1357549.f_1724 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "camp_select_data");
	Global_1357549.f_1725 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Global_1357549.f_1724, "camp_collection");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1357549.f_1725);
	func_318();
	func_319();
	if ((func_295(17) && !func_295(37)) && !func_320(16, 4, 1))
	{
		func_321(16);
	}
}

int func_89(bool bParam0)
{
	func_322(6, 0, 0, 513, bParam0);
	func_322(62, 0, 0, 513, bParam0);
	func_322(7, 0, 4, 513, bParam0);
	func_322(8, 0, 4, 513, bParam0);
	func_322(9, 0, 8, 513, bParam0);
	func_322(10, 0, 8, 513, bParam0);
	func_322(12, 0, 0, 1, 0);
	func_322(11, 0, 0, 17, bParam0);
	func_322(14, 0, 0, 1, 0);
	func_322(13, 0, 0, 1, 0);
	func_322(61, 0, 0, 1, 0);
	func_322(63, 0, 0, 1, 0);
	func_322(70, 0, 4, 513, bParam0);
	func_322(94, 0, 0, 1, 0);
	func_322(15, 0, 0, 545, bParam0);
	func_322(16, 0, 0, 521, bParam0);
	func_322(17, 0, 0, 521, bParam0);
	func_322(18, 0, 0, 1, 0);
	func_322(19, 0, 0, 1, 0);
	func_322(20, 0, 0, 1, 0);
	func_322(0, 0, 0, 513, bParam0);
	func_322(1, 0, 0, 513, bParam0);
	func_322(2, 0, 0, 513, bParam0);
	func_322(3, 0, 0, 513, bParam0);
	func_322(4, 0, 0, 513, bParam0);
	func_322(5, 0, 0, 513, bParam0);
	func_322(24, 0, 0, 513, bParam0);
	func_322(25, 0, 0, 513, bParam0);
	func_322(26, 0, 0, 513, bParam0);
	func_322(27, 0, 0, 513, bParam0);
	func_322(28, 0, 0, 513, bParam0);
	func_322(21, 0, 0, 513, bParam0);
	func_322(22, 0, 0, 513, bParam0);
	func_322(29, 0, 0, 513, bParam0);
	func_322(30, 0, 0, 513, bParam0);
	func_322(31, 0, 0, 513, bParam0);
	func_322(32, 0, 0, 513, bParam0);
	func_322(33, 0, 0, 513, bParam0);
	func_322(34, 0, 0, 513, bParam0);
	func_322(35, 0, 0, 513, bParam0);
	func_322(36, 0, 0, 513, bParam0);
	func_322(37, 0, 0, 513, bParam0);
	func_322(38, 0, 0, 513, bParam0);
	func_322(39, 0, 0, 513, bParam0);
	func_322(40, 0, 0, 513, bParam0);
	func_322(41, 0, 0, 513, bParam0);
	func_322(42, 0, 0, 513, bParam0);
	func_322(43, 0, 0, 513, bParam0);
	func_322(44, 0, 0, 513, bParam0);
	func_322(45, 0, 0, 513, bParam0);
	func_322(46, 0, 0, 513, bParam0);
	func_322(47, 0, 0, 513, bParam0);
	func_322(48, 0, 0, 513, bParam0);
	func_322(49, 0, 0, 513, bParam0);
	func_322(50, 0, 0, 513, bParam0);
	func_322(51, 0, 0, 513, bParam0);
	func_322(52, 0, 0, 513, bParam0);
	func_322(53, 0, 0, 513, bParam0);
	func_322(54, 0, 0, 513, bParam0);
	func_322(55, 0, 0, 513, bParam0);
	func_322(56, 0, 0, 513, bParam0);
	func_322(57, 0, 0, 513, bParam0);
	func_322(58, 0, 0, 513, bParam0);
	func_322(59, 0, 0, 513, bParam0);
	func_322(60, 0, 0, 513, bParam0);
	func_322(23, 0, 0, 1, 0);
	func_322(67, 0, 0, 1, 0);
	func_322(68, 0, 0, 1, 0);
	func_322(69, 0, 0, 1, 0);
	func_322(75, 0, 0, 1, 0);
	func_322(79, 0, 0, 1, 0);
	func_322(83, 0, 0, 1, 0);
	func_322(87, 0, 0, 1, 0);
	func_322(71, 0, 0, 1, 0);
	func_322(73, 0, 0, 1, 0);
	func_322(77, 0, 0, 1, 0);
	func_322(78, 0, 0, 1, 0);
	func_322(81, 0, 0, 1, 0);
	func_322(85, 0, 0, 1, 0);
	func_322(89, 0, 0, 1, 0);
	func_322(76, 0, 0, 1, 0);
	func_322(80, 0, 0, 1, 0);
	func_322(82, 0, 0, 1, 0);
	func_322(84, 0, 0, 1, 0);
	func_322(86, 0, 0, 1, 0);
	func_322(88, 0, 0, 1, 0);
	func_322(72, 0, 0, 1, 0);
	func_322(74, 0, 0, 1, 0);
	func_322(93, 0, 0, 513, bParam0);
	func_322(66, 0, 0, 1, 0);
	func_322(64, 0, 0, 1, 0);
	func_322(70, 0, 4, 513, bParam0);
	func_322(90, 0, 0, 1, 0);
	func_322(65, 0, 0, 513, bParam0);
	func_322(91, 0, 0, 513, bParam0);
	func_322(92, 0, 0, 1, 0);
	func_323(1);
	return 1;
}

void func_90(var uParam0)
{
	int iVar0;
	char cVar1[64];
	var uVar9;
	struct<14> Var10;
	struct<21> Var24;
	struct<28> Var45;

	if (uParam0->f_5861)
	{
		return;
	}
	Var10 = 1;
	Var10.f_1 = 1;
	Var10.f_2 = joaat("COLOR_WHITE");
	Var10.f_4 = -1;
	Var10.f_5 = -1134602452;
	Var10.f_6 = 1276832712;
	Var10.f_13 = joaat("COLOR_WHITE");
	Var24 = 1;
	Var24.f_1 = 1;
	Var24.f_2 = joaat("COLOR_WHITE");
	Var24.f_4 = -1;
	Var24.f_5 = -1134602452;
	Var24.f_6 = 1276832712;
	Var45 = 1;
	Var45.f_1 = 1;
	Var45.f_2 = joaat("COLOR_WHITE");
	Var45.f_4 = -1;
	Var45.f_5 = -1134602452;
	Var45.f_6 = 1276832712;
	Var45.f_18 = 1;
	Var45.f_19 = 1;
	Var45.f_20 = 1;
	Var45.f_24 = 1;
	Var45.f_25 = 1;
	Var45.f_26 = 1;
	Var45.f_27 = -1;
	uParam0->f_5835 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PlayerWardrobeRoot");
	uVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "main_menu");
	uParam0->f_3084 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uVar9, "list");
	uVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "item_style");
	uParam0->f_3761 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uVar9, "list");
	uVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "item_variation");
	uParam0->f_5263 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uVar9, "list");
	uVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "outfit_customizations");
	uParam0->f_5640 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uVar9, "list");
	Var10.f_8 = 1;
	Var10.f_9 = 1;
	Var24.f_8 = 1;
	Var24.f_9 = 1;
	Var45.f_8 = 1;
	Var45.f_9 = 1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		StringCopy(&cVar1, "item_type_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_324(&(uParam0->f_3084.f_1[iVar0 /*15*/]), uParam0->f_5835, cVar1, Var10);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		StringCopy(&cVar1, "item_style_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_325(&(uParam0->f_3761.f_1[iVar0 /*15*/]), uParam0->f_5835, cVar1, Var24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		StringCopy(&cVar1, "item_variation_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_325(&(uParam0->f_5263.f_1[iVar0 /*15*/]), uParam0->f_5835, cVar1, Var24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&cVar1, "item_customize_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_326(&(uParam0->f_5640.f_1[iVar0 /*22*/]), uParam0->f_5835, cVar1, Var45);
		iVar0++;
	}
	func_327(uParam0, 0, "main_menu", "CustomizeOutfitEnabled", 0);
	func_327(uParam0, 1, "main_menu", "CustomizeOutfitVisible", 0);
	func_327(uParam0, 2, "itemInfo", "text1visible", 0);
	func_327(uParam0, 3, "itemInfo", "text2visible", 0);
	func_327(uParam0, 4, "itemInfo", "text3visible", 0);
	func_327(uParam0, 5, "item_style", "ExtraOptionPromptEnabled", 0);
	func_327(uParam0, 6, "item_style", "ExtraOptionPromptVisible", 0);
	func_327(uParam0, 7, "item_style", "SaveOutfitOptionEnabled", 0);
	func_327(uParam0, 8, "item_style", "SaveOutfitOptionVisible", 0);
	func_327(uParam0, 9, "item_style", "InspectItemOptionEnabled", 1);
	func_327(uParam0, 10, "item_style", "InspectItemOptionVisible", 1);
	func_328(uParam0, 0, "header", "label", joaat("PLAYER_WARDROBE_MAIN_MENU"));
	func_328(uParam0, 1, "header", "sublabel", 0);
	func_328(uParam0, 2, "footer", "label", 0);
	func_328(uParam0, 3, "itemInfo", "text1", 0);
	func_328(uParam0, 4, "itemInfo", "text2", 0);
	func_328(uParam0, 5, "itemInfo", "text3", 0);
	func_328(uParam0, 6, "item_style", "back_link", joaat("BACK"));
	func_328(uParam0, 7, "item_style", "ExtraOptionPromptKey", -430643131 /* GXTEntry: "Store On Horse" */);
	func_328(uParam0, 8, "item_style", "SaveOutfitOptionPromptKey", -1400108436 /* GXTEntry: "Save Outfit" */);
	func_328(uParam0, 9, "item_style", "InspectItemOptionPromptKey", joaat("INSPECT_GENERIC"));
	func_329(uParam0, 0, "footer", "labelRaw", "");
	uParam0->f_5861 = 1;
}

void func_91()
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	struct<2> Var6;

	func_330();
	Global_1946804 = 0;
	func_331();
	Global_1946804.f_2535.f_2 = 0;
	Global_1946804.f_2535.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1946804.f_2535.f_43[iVar0 /*2*/] = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_2535.f_3[iVar0] = 0;
		vVar3.x = Global_1946804.f_57[iVar0 /*11*/];
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = { vVar3 };
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { vVar3 };
		Global_1946804.f_2456[iVar0 /*2*/] = { Var6 };
		Global_1946804.f_2377[iVar0 /*2*/] = 0;
		Global_1946804.f_2377[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Global_1946804.f_2589.f_1 = 0;
	Global_1946804.f_2589 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1946804.f_2589.f_2[iVar0 /*2*/] = 39;
		iVar0++;
	}
	Global_1946804.f_2792 = 1;
	Global_1946804.f_2793 = 0;
}

bool func_92(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_93(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_332(iVar1, 0))
		{
			func_333(iVar1, 0, bParam0);
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

bool func_94(int iParam0, bool bParam1)
{
	switch (func_334(iParam0))
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

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_335(iParam0, 1, 1, -142743235, 1);
	if (func_336(iParam0))
	{
		func_333(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_338(func_337(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (func_339() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_100(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_100(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { func_340(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { func_340(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { func_340(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { func_340(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { func_340(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { func_340(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { func_340(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { func_340(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { func_340(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_341(iVar8, iVar0))
				{
					func_342(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_341(iVar8, iVar0))
		{
			func_342(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
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

void func_96()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_341(iVar5, iVar0);
		if (iVar1 == Global_1946804.f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_339() == -2125499975 || func_339() == -449205311)
			{
				vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				vVar2.f_1 = 1530758430;
				func_342(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = joaat("BASE");
				func_342(&vVar2, iVar5, iVar0);
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

void func_97(int iParam0)
{
	Global_26796.f_774 = (Global_26796.f_774 || iParam0);
}

void func_98()
{
	var uVar0;
	var uVar6;

	func_343(&(Global_1946804.f_1378), -1);
	func_344();
	func_106(7);
	uVar0 = 5;
	func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	if (!func_345(&uVar0))
	{
		func_346(&uVar0);
		func_347(0, 1);
	}
	if (!func_348(&uVar6, &(Global_26796.f_627.f_1.f_1)))
	{
		func_349(&(Global_26796.f_627.f_1.f_1), 1);
	}
}

void func_99(int iParam0)
{
	Global_1946804.f_1 = iParam0;
}

bool func_100(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_350(iParam6);
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
		func_352(uParam0, func_351(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_338(iVar3, 1);
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
							if (func_353(iVar3) && func_354(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
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
							func_355(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
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

void func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_115() == -1)
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
		iVar0 = func_338(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_356(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
		}
	}
}

void func_102(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_357()) || bParam5)
		{
			func_344();
		}
	}
	if (func_115() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_358(Global_1946804.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_359(Global_40.f_7729);
				Global_1946804.f_1378 = func_359(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_360(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_361(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_347(0, 1);
	}
	func_362(0);
}

void func_103(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_363(&(Global_1946804.f_1497), iParam0);
	if (bParam2)
	{
		func_364(2, iParam0, 6);
	}
	if (bParam1)
	{
		func_347(0, 1);
	}
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_365(iParam0, Global_35, iParam1, iParam2, iParam3, bParam4);
	func_366();
}

void func_105(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		iParam0 = func_367();
	}
	func_368(iParam0, Global_35, iParam1, bParam2);
	func_369();
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (func_115() == -1)
	{
		func_370(352481484);
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
		if (func_371(iVar2) != -999503751)
		{
			func_372(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_373(iVar2, 0))
		{
			func_374(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_107()
{
	int iVar0;
	int iVar1;

	Global_1310750.f_16036 = 0;
	Global_1310750.f_16037 = 0;
	func_375(-1);
	Global_1310750.f_16038 = 0;
	Global_1310750.f_16039 = 0;
	Global_1310750.f_16069 = 6;
	Global_1310750.f_16070 = 3;
	Global_1310750.f_16077 = 0;
	Global_1310750.f_16071 = -1;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_376(&(Global_1310750[iVar0 /*111*/]));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_377(iVar1);
		iVar1++;
	}
}

void func_108(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	struct<30> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_378(iParam0))
	{
		return;
	}
	if (iParam9 != -1)
	{
	}
	if (func_379(iParam5, 65536) && iParam9 < 60)
	{
		iParam9 = 60;
	}
	Global_1310750[iParam0 /*111*/] = iParam5;
	Global_1310750[iParam0 /*111*/].f_1 = iParam11;
	Global_1310750[iParam0 /*111*/].f_44 = fParam3;
	Global_1310750[iParam0 /*111*/].f_2 = iParam4;
	StringCopy(&(Global_1310750[iParam0 /*111*/].f_40), sParam1, 32);
	Global_1310750[iParam0 /*111*/].f_38 = iParam6;
	Global_1310750[iParam0 /*111*/].f_36 = iParam8;
	Global_1310750[iParam0 /*111*/].f_37 = iParam7;
	Global_1310750[iParam0 /*111*/].f_39 = iParam12;
	Global_1310750[iParam0 /*111*/].f_62 = iParam15;
	Global_1310750[iParam0 /*111*/].f_61 = (1f - (IntToFloat(func_380(iParam0)) / 45f));
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = 8;
	Var0.f_4.f_1.f_1 = -1;
	Var0.f_4.f_1.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Global_1310750[iParam0 /*111*/].f_4 = { Var0 };
	Global_1310750[iParam0 /*111*/].f_4 = iParam9;
	Global_1310750[iParam0 /*111*/].f_4.f_1 = iParam13;
	Global_1310750[iParam0 /*111*/].f_4.f_2 = iParam10;
	Global_1310750[iParam0 /*111*/].f_4.f_3 = iParam14;
	if (Global_17504.f_42[iParam0 /*8*/].f_5 == 0)
	{
		Global_17504.f_42[iParam0 /*8*/].f_5 = iParam2;
	}
	func_381(1);
}

void func_109(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;

	if (iParam4 < 0)
	{
		return;
	}
	if (func_380(iParam0) == 0)
	{
		return;
	}
	iVar0 = (func_382(iParam0) + iParam4);
	if (iVar0 >= 892)
	{
		return;
	}
	Global_1310750.f_13358[iVar0 /*3*/] = { vParam1 };
}

void func_110(int iParam0)
{
	Stack.Push(0);
	Stack.Push(-1055.963f);
	Stack.Push(-794.308f);
	Stack.Push(59.2567f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1158.078f);
	Stack.Push(-155.114f);
	Stack.Push(88.889f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1370.712f);
	Stack.Push(-515.7384f);
	Stack.Push(125.267f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1029.465f);
	Stack.Push(-492.4087f);
	Stack.Push(101.0615f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1234.665f);
	Stack.Push(-1371.778f);
	Stack.Push(80.796f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-1525.164f);
	Stack.Push(1722.86f);
	Stack.Push(239.152f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-319.5499f);
	Stack.Push(203.8464f);
	Stack.Push(62.1121f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(-513.8f);
	Stack.Push(345.2f);
	Stack.Push(49.8945f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(2150.374f);
	Stack.Push(1728.215f);
	Stack.Push(125.2313f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(0);
	Stack.Push(2179.106f);
	Stack.Push(-25.3714f);
	Stack.Push(51.3658f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-1487.833f);
	Stack.Push(384.474f);
	Stack.Push(102.2717f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-1286.226f);
	Stack.Push(148.542f);
	Stack.Push(71.8978f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-2379.321f);
	Stack.Push(135.6397f);
	Stack.Push(236.9608f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-2618.931f);
	Stack.Push(90.8313f);
	Stack.Push(166.3284f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-1746.079f);
	Stack.Push(-914.7423f);
	Stack.Push(100.5956f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-2036.105f);
	Stack.Push(-507.9698f);
	Stack.Push(149.6753f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-1149.823f);
	Stack.Push(-766.3174f);
	Stack.Push(63.4474f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(-2526.743f);
	Stack.Push(-108.6706f);
	Stack.Push(165.4704f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(675.9786f);
	Stack.Push(1789.638f);
	Stack.Push(216.4616f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(1450.093f);
	Stack.Push(1325.142f);
	Stack.Push(161.2261f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(2523.959f);
	Stack.Push(1320.4f);
	Stack.Push(122.2039f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(1);
	Stack.Push(2786.135f);
	Stack.Push(1908.004f);
	Stack.Push(161.0971f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1786.959f);
	Stack.Push(-859.9387f);
	Stack.Push(41.2511f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1876.321f);
	Stack.Push(-1028.481f);
	Stack.Push(42.4603f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1537.491f);
	Stack.Push(72.5534f);
	Stack.Push(103.3094f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-2141.266f);
	Stack.Push(-474.7134f);
	Stack.Push(145.5408f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1433.692f);
	Stack.Push(518.1367f);
	Stack.Push(100.4129f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-2750.55f);
	Stack.Push(-173.6202f);
	Stack.Push(152.7051f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1453.446f);
	Stack.Push(-528.2103f);
	Stack.Push(130.2089f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-942.714f);
	Stack.Push(-363.6332f);
	Stack.Push(51.5706f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(2719.558f);
	Stack.Push(1.671f);
	Stack.Push(50.5135f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(2578.217f);
	Stack.Push(-156.0283f);
	Stack.Push(40.8259f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(798.2251f);
	Stack.Push(1174.869f);
	Stack.Push(136.9281f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1205.845f);
	Stack.Push(-1835.353f);
	Stack.Push(60.0304f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1481.471f);
	Stack.Push(-1895.701f);
	Stack.Push(54.6699f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1422.307f);
	Stack.Push(-1295.345f);
	Stack.Push(79.9456f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-1164.6f);
	Stack.Push(812.0777f);
	Stack.Push(118.4599f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-817.9949f);
	Stack.Push(1228.166f);
	Stack.Push(165.4198f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(-211.6961f);
	Stack.Push(1760.762f);
	Stack.Push(192.2563f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(2645.415f);
	Stack.Push(1322.111f);
	Stack.Push(111.4558f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(2668.904f);
	Stack.Push(1885.954f);
	Stack.Push(99.8509f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1937.39f);
	Stack.Push(494.5891f);
	Stack.Push(129.4169f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1000.586f);
	Stack.Push(-1297.523f);
	Stack.Push(54.0335f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1279.088f);
	Stack.Push(-1602.72f);
	Stack.Push(64.2665f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(2);
	Stack.Push(1467.28f);
	Stack.Push(-2234.456f);
	Stack.Push(42.7965f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(1845.744f);
	Stack.Push(-382.1896f);
	Stack.Push(42.0126f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(1315.011f);
	Stack.Push(-1640.398f);
	Stack.Push(65.989f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(782.4731f);
	Stack.Push(-904.5656f);
	Stack.Push(50.1819f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(860.498f);
	Stack.Push(-535.0154f);
	Stack.Push(87.8863f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(1385.528f);
	Stack.Push(-1699.039f);
	Stack.Push(66.6297f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(3);
	Stack.Push(1568.277f);
	Stack.Push(-1167.119f);
	Stack.Push(44.87f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-1670.333f);
	Stack.Push(266.4697f);
	Stack.Push(108.1011f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-1606.08f);
	Stack.Push(-600.0643f);
	Stack.Push(137.6851f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-1049.648f);
	Stack.Push(-241.2274f);
	Stack.Push(82.7866f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-1390.346f);
	Stack.Push(115.5974f);
	Stack.Push(84.4519f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-2065.955f);
	Stack.Push(-401.2512f);
	Stack.Push(163.9114f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-2036.99f);
	Stack.Push(-507.4617f);
	Stack.Push(149.6441f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(1894.808f);
	Stack.Push(1525.642f);
	Stack.Push(190.2607f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(1769.377f);
	Stack.Push(1642.661f);
	Stack.Push(175.514f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(614.9883f);
	Stack.Push(1919.951f);
	Stack.Push(202.9879f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(-885.1455f);
	Stack.Push(262.5286f);
	Stack.Push(89.5462f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2707.656f);
	Stack.Push(564.3442f);
	Stack.Push(83.4308f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2422.132f);
	Stack.Push(1697.106f);
	Stack.Push(95.8792f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2690.929f);
	Stack.Push(646.9717f);
	Stack.Push(75.0821f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2286.213f);
	Stack.Push(1649.257f);
	Stack.Push(84.9657f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2367.635f);
	Stack.Push(1067.088f);
	Stack.Push(83.5814f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2762.281f);
	Stack.Push(1014.418f);
	Stack.Push(61.2793f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(4);
	Stack.Push(2014.741f);
	Stack.Push(68.3487f);
	Stack.Push(74.0225f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(5);
	Stack.Push(2421.238f);
	Stack.Push(904.8784f);
	Stack.Push(72.1375f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(6);
	Stack.Push(1575.285f);
	Stack.Push(-7256.714f);
	Stack.Push(66.2668f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(6);
	Stack.Push(2581.069f);
	Stack.Push(624.2234f);
	Stack.Push(73.5388f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(6);
	Stack.Push(2418.696f);
	Stack.Push(1069.465f);
	Stack.Push(86.3128f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-1170.479f);
	Stack.Push(-569.0327f);
	Stack.Push(89.3336f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-2449.058f);
	Stack.Push(-291.0107f);
	Stack.Push(151.4994f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-1720.802f);
	Stack.Push(-5.5522f);
	Stack.Push(162.8418f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-880.1243f);
	Stack.Push(-362.286f);
	Stack.Push(42.7127f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-1288.498f);
	Stack.Push(247.4669f);
	Stack.Push(58.5024f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(-1402.131f);
	Stack.Push(-849.902f);
	Stack.Push(82.4184f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(225.7709f);
	Stack.Push(1158.758f);
	Stack.Push(174.4377f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(650.7831f);
	Stack.Push(1401.268f);
	Stack.Push(181.6239f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(779.0355f);
	Stack.Push(1119.058f);
	Stack.Push(130.8968f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1579.289f);
	Stack.Push(1602.642f);
	Stack.Push(147.0162f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1567.098f);
	Stack.Push(935.3324f);
	Stack.Push(151.5608f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2040.047f);
	Stack.Push(1491.969f);
	Stack.Push(156.9985f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1833.187f);
	Stack.Push(1405.746f);
	Stack.Push(180.4263f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1072.866f);
	Stack.Push(1883.61f);
	Stack.Push(319.825f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(140.3275f);
	Stack.Push(-473.635f);
	Stack.Push(67.9336f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(256.8135f);
	Stack.Push(677.2663f);
	Stack.Push(140.556f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1261.531f);
	Stack.Push(110.901f);
	Stack.Push(92.27f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2478.172f);
	Stack.Push(1372.623f);
	Stack.Push(104.4044f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2876.074f);
	Stack.Push(823.1032f);
	Stack.Push(47.909f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(1966.588f);
	Stack.Push(174.9707f);
	Stack.Push(83.3576f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2468.748f);
	Stack.Push(711.0537f);
	Stack.Push(70.8931f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2195.63f);
	Stack.Push(1647.953f);
	Stack.Push(104.3184f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(7);
	Stack.Push(2848.011f);
	Stack.Push(2102.51f);
	Stack.Push(158.2506f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(8);
	Stack.Push(-3312.915f);
	Stack.Push(-2859.827f);
	Stack.Push(-6.4145f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2546.94f);
	Stack.Push(1819.922f);
	Stack.Push(85.0674f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2377.356f);
	Stack.Push(1070.137f);
	Stack.Push(84.0566f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2535.767f);
	Stack.Push(1513.889f);
	Stack.Push(84.9165f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2549.248f);
	Stack.Push(612.5594f);
	Stack.Push(73.8611f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2023.741f);
	Stack.Push(159.2145f);
	Stack.Push(78.313f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2813.322f);
	Stack.Push(688.974f);
	Stack.Push(68.6338f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2400.434f);
	Stack.Push(877.9274f);
	Stack.Push(73.1443f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(9);
	Stack.Push(2175.463f);
	Stack.Push(1745.422f);
	Stack.Push(119.0117f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(10);
	Stack.Push(914.288f);
	Stack.Push(-1205.978f);
	Stack.Push(50.759f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(10);
	Stack.Push(905.55f);
	Stack.Push(-1117.134f);
	Stack.Push(52.439f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(11);
	Stack.Push(2142.091f);
	Stack.Push(-1322.714f);
	Stack.Push(41.4496f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(11);
	Stack.Push(1712.28f);
	Stack.Push(-1928.207f);
	Stack.Push(46.2584f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(11);
	Stack.Push(807.8684f);
	Stack.Push(-873.498f);
	Stack.Push(52.0023f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(11);
	Stack.Push(1477.416f);
	Stack.Push(-832.9807f);
	Stack.Push(49.4009f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1306.382f);
	Stack.Push(113.2325f);
	Stack.Push(71.617f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1195.567f);
	Stack.Push(-348.8055f);
	Stack.Push(98.6331f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1631.463f);
	Stack.Push(-508.5251f);
	Stack.Push(147.7541f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(236.428f);
	Stack.Push(1172.058f);
	Stack.Push(174.6809f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-865.4097f);
	Stack.Push(-1807.907f);
	Stack.Push(64.0395f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1407.439f);
	Stack.Push(-1969.719f);
	Stack.Push(43.6107f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-556.52f);
	Stack.Push(-519.95f);
	Stack.Push(51.67f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-487.89f);
	Stack.Push(-187.13f);
	Stack.Push(44.06f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-590.1177f);
	Stack.Push(209.5994f);
	Stack.Push(43.5616f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(45.2288f);
	Stack.Push(-309.8703f);
	Stack.Push(100.0965f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(553.2196f);
	Stack.Push(-536.8489f);
	Stack.Push(76.4877f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1995.538f);
	Stack.Push(-1374.255f);
	Stack.Push(116.3711f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1714.634f);
	Stack.Push(-1728.958f);
	Stack.Push(87.8438f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-2200.82f);
	Stack.Push(-1609.284f);
	Stack.Push(145.6673f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-5709.795f);
	Stack.Push(-3189.099f);
	Stack.Push(-22.8911f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-5399.68f);
	Stack.Push(-2344.885f);
	Stack.Push(-6.7089f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-4239.465f);
	Stack.Push(-3047.282f);
	Stack.Push(-9.0733f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(12);
	Stack.Push(-1641.005f);
	Stack.Push(-2451.688f);
	Stack.Push(42.6606f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2670.833f);
	Stack.Push(-67.0281f);
	Stack.Push(48.336f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2576.186f);
	Stack.Push(-146.486f);
	Stack.Push(40.6007f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2528.167f);
	Stack.Push(-334.5139f);
	Stack.Push(40.5561f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2483.223f);
	Stack.Push(640.42f);
	Stack.Push(71.172f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2455.024f);
	Stack.Push(1296.882f);
	Stack.Push(105.8737f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2117.905f);
	Stack.Push(1061.24f);
	Stack.Push(122.0916f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2583.339f);
	Stack.Push(342.9637f);
	Stack.Push(75.1561f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2583.125f);
	Stack.Push(550.2842f);
	Stack.Push(71.8067f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2474.518f);
	Stack.Push(1548.916f);
	Stack.Push(84.656f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2253.517f);
	Stack.Push(1718.977f);
	Stack.Push(102.4056f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2159.47f);
	Stack.Push(929.917f);
	Stack.Push(115.51f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(13);
	Stack.Push(2483.802f);
	Stack.Push(982.8178f);
	Stack.Push(93.2f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(-1489.081f);
	Stack.Push(-553.8191f);
	Stack.Push(131.9622f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(-1756.841f);
	Stack.Push(274.1943f);
	Stack.Push(117.8263f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(-2759.282f);
	Stack.Push(-152.587f);
	Stack.Push(151.1035f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(-719.2486f);
	Stack.Push(-746.223f);
	Stack.Push(49.1092f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(947.882f);
	Stack.Push(-1259.494f);
	Stack.Push(53.9254f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(1089.484f);
	Stack.Push(-1413.609f);
	Stack.Push(55.7283f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(14);
	Stack.Push(1287.923f);
	Stack.Push(-1601.335f);
	Stack.Push(64.1793f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-6004.122f);
	Stack.Push(-3324.721f);
	Stack.Push(-22.3552f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-5710.4f);
	Stack.Push(-3611.259f);
	Stack.Push(-24.0623f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-6367.312f);
	Stack.Push(-3696.248f);
	Stack.Push(-26.9076f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-6181.481f);
	Stack.Push(-3434.711f);
	Stack.Push(10.3617f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-5445.042f);
	Stack.Push(-2381.805f);
	Stack.Push(-8.8016f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-5166.418f);
	Stack.Push(-4006.568f);
	Stack.Push(-2.0995f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-4750.027f);
	Stack.Push(-3503.733f);
	Stack.Push(6.4091f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-4635.242f);
	Stack.Push(-3155.196f);
	Stack.Push(8.7009f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3333.342f);
	Stack.Push(-2281.94f);
	Stack.Push(-1.519f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3970.378f);
	Stack.Push(-3056.023f);
	Stack.Push(-14.1397f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3485.25f);
	Stack.Push(-2615.361f);
	Stack.Push(-13.7497f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-4624.896f);
	Stack.Push(-2718.001f);
	Stack.Push(-11.4759f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3840.919f);
	Stack.Push(-2867.934f);
	Stack.Push(-16.9531f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-4294.354f);
	Stack.Push(-3060.137f);
	Stack.Push(-11.9705f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3408.869f);
	Stack.Push(-2265.132f);
	Stack.Push(-4.672f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-3091.015f);
	Stack.Push(-3144.075f);
	Stack.Push(1.038f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-2437.71f);
	Stack.Push(-2588.429f);
	Stack.Push(78.7262f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-2567.323f);
	Stack.Push(-2494.148f);
	Stack.Push(65.939f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-2461.365f);
	Stack.Push(-2240.474f);
	Stack.Push(63.969f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-2409.346f);
	Stack.Push(-2617.091f);
	Stack.Push(80.418f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(15);
	Stack.Push(-1752.983f);
	Stack.Push(-2700.622f);
	Stack.Push(65.558f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-1851.588f);
	Stack.Push(510.342f);
	Stack.Push(113.8007f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-2696.748f);
	Stack.Push(-55.4263f);
	Stack.Push(152.7823f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2608.757f);
	Stack.Push(-180.0931f);
	Stack.Push(43.1903f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-1387.126f);
	Stack.Push(-1085.839f);
	Stack.Push(75.6182f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-1152.193f);
	Stack.Push(-1798.524f);
	Stack.Push(60.6213f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-1414.061f);
	Stack.Push(-1516.014f);
	Stack.Push(85.2022f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(293.0865f);
	Stack.Push(-28.2385f);
	Stack.Push(106.7794f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(862.3326f);
	Stack.Push(-96.2031f);
	Stack.Push(115.005f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-603.3961f);
	Stack.Push(-400.8001f);
	Stack.Push(79.4605f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(791.0897f);
	Stack.Push(616.5367f);
	Stack.Push(119.004f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(-367.7098f);
	Stack.Push(-242.7611f);
	Stack.Push(87.375f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(797.4579f);
	Stack.Push(430.6508f);
	Stack.Push(106.9812f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2094.507f);
	Stack.Push(181.8995f);
	Stack.Push(74.0113f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2499.579f);
	Stack.Push(876.0915f);
	Stack.Push(72.6963f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2716.55f);
	Stack.Push(2312.971f);
	Stack.Push(155.8205f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(2753.107f);
	Stack.Push(183.9333f);
	Stack.Push(50.8669f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(855.8201f);
	Stack.Push(-1136.222f);
	Stack.Push(57.4167f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(781.47f);
	Stack.Push(-819.1086f);
	Stack.Push(54.7764f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(16);
	Stack.Push(1143.297f);
	Stack.Push(-784.0272f);
	Stack.Push(89.0981f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1895.321f);
	Stack.Push(-1591.593f);
	Stack.Push(43.1308f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1750.934f);
	Stack.Push(-1113.128f);
	Stack.Push(41.0289f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(222.5815f);
	Stack.Push(1149.064f);
	Stack.Push(174.777f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(643.9483f);
	Stack.Push(1537.771f);
	Stack.Push(179.2453f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1249.946f);
	Stack.Push(1228.457f);
	Stack.Push(149.847f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1888.344f);
	Stack.Push(1412.769f);
	Stack.Push(176.1192f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(881.3965f);
	Stack.Push(832.8646f);
	Stack.Push(115.2099f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(205.5776f);
	Stack.Push(-492.6277f);
	Stack.Push(71.7359f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1086.457f);
	Stack.Push(1232.933f);
	Stack.Push(194.9449f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1449.297f);
	Stack.Push(-394.4464f);
	Stack.Push(79.9583f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1524.993f);
	Stack.Push(-1166.959f);
	Stack.Push(51.2036f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(17);
	Stack.Push(1197.925f);
	Stack.Push(-734.7637f);
	Stack.Push(77.7386f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(2080.316f);
	Stack.Push(-1506.239f);
	Stack.Push(40.6063f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(1953.527f);
	Stack.Push(-1641.328f);
	Stack.Push(40.6f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(2119.107f);
	Stack.Push(-1219.469f);
	Stack.Push(40.5981f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(2825.327f);
	Stack.Push(59.2099f);
	Stack.Push(44.5063f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(2679.948f);
	Stack.Push(-578.2466f);
	Stack.Push(41.2777f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(1553.726f);
	Stack.Push(-1050.726f);
	Stack.Push(43.0253f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(18);
	Stack.Push(1664.248f);
	Stack.Push(-648.8722f);
	Stack.Push(42.21f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(19);
	Stack.Push(1553.265f);
	Stack.Push(-1413.049f);
	Stack.Push(60.7066f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1790.522f);
	Stack.Push(391.7672f);
	Stack.Push(111.5168f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-2257.545f);
	Stack.Push(522.8431f);
	Stack.Push(118.2666f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-2027.111f);
	Stack.Push(523.7131f);
	Stack.Push(115.7621f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1617.713f);
	Stack.Push(-586.0815f);
	Stack.Push(138.1433f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1651.088f);
	Stack.Push(-200.7669f);
	Stack.Push(169.3779f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(337.933f);
	Stack.Push(1066.953f);
	Stack.Push(186.7877f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(365.0997f);
	Stack.Push(1012.086f);
	Stack.Push(189.1479f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(803.338f);
	Stack.Push(1073.402f);
	Stack.Push(121.7332f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1288.621f);
	Stack.Push(-1028.793f);
	Stack.Push(70.6405f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-1138.14f);
	Stack.Push(-1667.854f);
	Stack.Push(72.6074f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-339.4998f);
	Stack.Push(20.8646f);
	Stack.Push(42.7751f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(1265.752f);
	Stack.Push(825.5964f);
	Stack.Push(100.082f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(-686.8791f);
	Stack.Push(-446.1221f);
	Stack.Push(50.8213f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(2556.097f);
	Stack.Push(1203.034f);
	Stack.Push(162.9738f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(2098.175f);
	Stack.Push(328.825f);
	Stack.Push(76.9f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(1295.438f);
	Stack.Push(-782.6951f);
	Stack.Push(74.8111f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(20);
	Stack.Push(769.7879f);
	Stack.Push(-889.8244f);
	Stack.Push(49.77f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(21);
	Stack.Push(-1598.758f);
	Stack.Push(1837.399f);
	Stack.Push(298.0538f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(21);
	Stack.Push(-974.2156f);
	Stack.Push(2660.971f);
	Stack.Push(319.8254f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(21);
	Stack.Push(-1219.986f);
	Stack.Push(2100f);
	Stack.Push(339.3748f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(22);
	Stack.Push(1530.94f);
	Stack.Push(-7293.91f);
	Stack.Push(72.84f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1618.318f);
	Stack.Push(-1818.743f);
	Stack.Push(49.6597f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2033.182f);
	Stack.Push(-427.7802f);
	Stack.Push(41.6463f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2164.61f);
	Stack.Push(-960.8591f);
	Stack.Push(41.7505f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2587.608f);
	Stack.Push(-733.6299f);
	Stack.Push(41.4225f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2554.041f);
	Stack.Push(-189.0652f);
	Stack.Push(42.1887f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(586.9903f);
	Stack.Push(-520.9417f);
	Stack.Push(76.1102f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1143.783f);
	Stack.Push(-36.1089f);
	Stack.Push(88.0587f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1666.967f);
	Stack.Push(74.2819f);
	Stack.Push(76.1463f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2080f);
	Stack.Push(-230.5491f);
	Stack.Push(45.829f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2696.571f);
	Stack.Push(180.1419f);
	Stack.Push(52.5405f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2581.068f);
	Stack.Push(533.5328f);
	Stack.Push(70.1641f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(2855.96f);
	Stack.Push(760.7198f);
	Stack.Push(55.2413f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1527.606f);
	Stack.Push(-1702.616f);
	Stack.Push(58.085f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1213.094f);
	Stack.Push(-1589.716f);
	Stack.Push(55.9733f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1513.254f);
	Stack.Push(-2005.747f);
	Stack.Push(43.0278f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1062.177f);
	Stack.Push(-1341.672f);
	Stack.Push(56.9639f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(23);
	Stack.Push(1156.332f);
	Stack.Push(-1160.091f);
	Stack.Push(70.2091f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-808.5091f);
	Stack.Push(-361.2252f);
	Stack.Push(40.6701f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-2151.432f);
	Stack.Push(532.3184f);
	Stack.Push(115.9584f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-1943.116f);
	Stack.Push(581.7615f);
	Stack.Push(114.4217f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-935.6732f);
	Stack.Push(-837.0477f);
	Stack.Push(42.0009f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(1588.625f);
	Stack.Push(1549.986f);
	Stack.Push(144.8906f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(601.0182f);
	Stack.Push(2291.333f);
	Stack.Push(221.6742f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-469.3123f);
	Stack.Push(192.8325f);
	Stack.Push(40.5531f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-719.5849f);
	Stack.Push(157.3127f);
	Stack.Push(41.0625f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-788.1081f);
	Stack.Push(584.9224f);
	Stack.Push(55.66f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(-611.343f);
	Stack.Push(-255.1613f);
	Stack.Push(40.9699f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(2818.075f);
	Stack.Push(2302.018f);
	Stack.Push(156.0063f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(2486.622f);
	Stack.Push(1697.184f);
	Stack.Push(85.6145f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(2287.72f);
	Stack.Push(273.7723f);
	Stack.Push(43.7751f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(24);
	Stack.Push(2421.89f);
	Stack.Push(674.4467f);
	Stack.Push(66.5993f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(1908.322f);
	Stack.Push(-1583.275f);
	Stack.Push(42.6331f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(-1738.734f);
	Stack.Push(391.4279f);
	Stack.Push(108.8374f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(-1130.605f);
	Stack.Push(460.2371f);
	Stack.Push(56.677f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(-1731.106f);
	Stack.Push(-832.389f);
	Stack.Push(97.45f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(-1555.696f);
	Stack.Push(153.446f);
	Stack.Push(104.902f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(703.0021f);
	Stack.Push(1421.519f);
	Stack.Push(177.4066f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(1481.706f);
	Stack.Push(1013.085f);
	Stack.Push(167.6041f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(2159.43f);
	Stack.Push(444.6013f);
	Stack.Push(83.4389f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(1688.494f);
	Stack.Push(-1617.637f);
	Stack.Push(52.7785f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(1548.366f);
	Stack.Push(-1415.864f);
	Stack.Push(61.3286f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(27);
	Stack.Push(860.2926f);
	Stack.Push(-890.3083f);
	Stack.Push(51.4971f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(1899.5f);
	Stack.Push(-1596.739f);
	Stack.Push(42.7911f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(1978.789f);
	Stack.Push(-1533.755f);
	Stack.Push(42.5017f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(-1274.549f);
	Stack.Push(-636.8499f);
	Stack.Push(98.9627f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(-793.994f);
	Stack.Push(-543.3228f);
	Stack.Push(49.025f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(28);
	Stack.Push(-1183.022f);
	Stack.Push(-729.2754f);
	Stack.Push(69.6085f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(1778.489f);
	Stack.Push(583.673f);
	Stack.Push(105.025f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2452.811f);
	Stack.Push(1319.446f);
	Stack.Push(109.0229f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2841.746f);
	Stack.Push(652.1951f);
	Stack.Push(66.7278f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2660.135f);
	Stack.Push(905.5285f);
	Stack.Push(88.9396f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2372.003f);
	Stack.Push(259.5193f);
	Stack.Push(52.9521f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2700.789f);
	Stack.Push(175.9979f);
	Stack.Push(52.5134f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2493.144f);
	Stack.Push(1530.348f);
	Stack.Push(84.2657f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(29);
	Stack.Push(2294.375f);
	Stack.Push(1737.66f);
	Stack.Push(104.3616f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2451.831f);
	Stack.Push(-694.8572f);
	Stack.Push(41.7577f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1806.486f);
	Stack.Push(-909.022f);
	Stack.Push(40.684f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2099.89f);
	Stack.Push(-742.7548f);
	Stack.Push(40.7194f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1661.235f);
	Stack.Push(-1011.618f);
	Stack.Push(40.7948f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1704.734f);
	Stack.Push(-749.9987f);
	Stack.Push(40.8083f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2481.833f);
	Stack.Push(-765.1003f);
	Stack.Push(41.4476f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2521.163f);
	Stack.Push(-601.1032f);
	Stack.Push(41.3867f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1623.726f);
	Stack.Push(-892.3166f);
	Stack.Push(40.5351f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1938.589f);
	Stack.Push(-936.7589f);
	Stack.Push(42.0285f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2103.147f);
	Stack.Push(-826.2164f);
	Stack.Push(40.4883f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2299.401f);
	Stack.Push(-941.739f);
	Stack.Push(41.1985f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2135.017f);
	Stack.Push(-411.8303f);
	Stack.Push(40.5284f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2638.828f);
	Stack.Push(-87.0254f);
	Stack.Push(47.6561f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2292.579f);
	Stack.Push(-444.8728f);
	Stack.Push(40.562f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2259.443f);
	Stack.Push(-453.3075f);
	Stack.Push(40.5554f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2585.694f);
	Stack.Push(-420.4027f);
	Stack.Push(40.8495f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2554.56f);
	Stack.Push(-187.4132f);
	Stack.Push(42.1266f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2526.531f);
	Stack.Push(-353.9748f);
	Stack.Push(40.6981f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2630.492f);
	Stack.Push(-597.4164f);
	Stack.Push(41.8853f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1376.207f);
	Stack.Push(-1428.625f);
	Stack.Push(91.0319f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-955.4411f);
	Stack.Push(-1810.143f);
	Stack.Push(63.6946f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1810.028f);
	Stack.Push(-1297.722f);
	Stack.Push(92.8288f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1461.389f);
	Stack.Push(-1766.659f);
	Stack.Push(81.9412f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1427.516f);
	Stack.Push(-1290.821f);
	Stack.Push(79.5031f);
	Stack.Push(23);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1214.44f);
	Stack.Push(-1818.796f);
	Stack.Push(60.5434f);
	Stack.Push(24);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(-1563.774f);
	Stack.Push(-1771.393f);
	Stack.Push(75.6756f);
	Stack.Push(25);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2649.111f);
	Stack.Push(1781.49f);
	Stack.Push(102.1629f);
	Stack.Push(26);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2677.185f);
	Stack.Push(584.6865f);
	Stack.Push(79.9779f);
	Stack.Push(27);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2972.095f);
	Stack.Push(1738.852f);
	Stack.Push(80.5676f);
	Stack.Push(28);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2472.802f);
	Stack.Push(1339.029f);
	Stack.Push(107.3666f);
	Stack.Push(29);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2120.886f);
	Stack.Push(1483.531f);
	Stack.Push(134.6718f);
	Stack.Push(30);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1971.526f);
	Stack.Push(345.8105f);
	Stack.Push(95.6928f);
	Stack.Push(31);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2725.853f);
	Stack.Push(79.9931f);
	Stack.Push(49.5786f);
	Stack.Push(32);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2578.825f);
	Stack.Push(1660.518f);
	Stack.Push(96.5618f);
	Stack.Push(33);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2581.905f);
	Stack.Push(1501.502f);
	Stack.Push(84.288f);
	Stack.Push(34);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2775.786f);
	Stack.Push(634.1282f);
	Stack.Push(72.6738f);
	Stack.Push(35);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(2862.79f);
	Stack.Push(1899.816f);
	Stack.Push(136.0872f);
	Stack.Push(36);
	Call_Loc(iParam0);
	Stack.Push(30);
	Stack.Push(1961.378f);
	Stack.Push(237.7049f);
	Stack.Push(76.7114f);
	Stack.Push(37);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-1753.305f);
	Stack.Push(146.6236f);
	Stack.Push(146.6423f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-2089.682f);
	Stack.Push(-316.9403f);
	Stack.Push(178.7293f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-1208.601f);
	Stack.Push(-758.1407f);
	Stack.Push(65.8343f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-1206.856f);
	Stack.Push(3.6938f);
	Stack.Push(42.2146f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(-727.5645f);
	Stack.Push(78.6521f);
	Stack.Push(43.852f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(2708.448f);
	Stack.Push(-35.6544f);
	Stack.Push(50.5802f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(2416.581f);
	Stack.Push(-379.576f);
	Stack.Push(40.716f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(349.6191f);
	Stack.Push(1193.652f);
	Stack.Push(176.0611f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(585.87f);
	Stack.Push(1359.454f);
	Stack.Push(182.2413f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(788.2601f);
	Stack.Push(1308.543f);
	Stack.Push(153.7073f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(644.4541f);
	Stack.Push(1846.399f);
	Stack.Push(204.6257f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1169.932f);
	Stack.Push(1240.534f);
	Stack.Push(170.1918f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(2191.762f);
	Stack.Push(2086.923f);
	Stack.Push(221.6624f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(2577.981f);
	Stack.Push(953.2261f);
	Stack.Push(105.2313f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1773.011f);
	Stack.Push(-2021.675f);
	Stack.Push(43.2631f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1469.278f);
	Stack.Push(-1891.963f);
	Stack.Push(47.8324f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1060.511f);
	Stack.Push(-486.7928f);
	Stack.Push(88.3641f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1689.182f);
	Stack.Push(-323.7361f);
	Stack.Push(64.2249f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1495.935f);
	Stack.Push(-1965.426f);
	Stack.Push(44.0482f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(31);
	Stack.Push(1129.575f);
	Stack.Push(-637.7903f);
	Stack.Push(87.3996f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-1470.029f);
	Stack.Push(-510.0777f);
	Stack.Push(128.9369f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-1676.732f);
	Stack.Push(269.6552f);
	Stack.Push(107.9641f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-1400.932f);
	Stack.Push(118.5333f);
	Stack.Push(85.1616f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(2530.93f);
	Stack.Push(-88.8537f);
	Stack.Push(49.5429f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-579.085f);
	Stack.Push(571.1768f);
	Stack.Push(101.2385f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(-976.4532f);
	Stack.Push(250.0307f);
	Stack.Push(90.9676f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(2154.953f);
	Stack.Push(55.197f);
	Stack.Push(61.5309f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(906.4382f);
	Stack.Push(-1278.892f);
	Stack.Push(59.6485f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(1700.312f);
	Stack.Push(-1814.466f);
	Stack.Push(49.983f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(32);
	Stack.Push(996.5635f);
	Stack.Push(-1219.119f);
	Stack.Push(62.015f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1374.053f);
	Stack.Push(-741.9763f);
	Stack.Push(90.7132f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1668.017f);
	Stack.Push(269.834f);
	Stack.Push(107.7686f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1400.438f);
	Stack.Push(116.6743f);
	Stack.Push(84.7002f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1117.848f);
	Stack.Push(-223.7487f);
	Stack.Push(89.4773f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-1479.688f);
	Stack.Push(-598.915f);
	Stack.Push(125.9951f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(-579.085f);
	Stack.Push(571.1768f);
	Stack.Push(101.2385f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(2148.963f);
	Stack.Push(41.925f);
	Stack.Push(62.1145f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(2549.044f);
	Stack.Push(-68.0443f);
	Stack.Push(49.1493f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(903.9188f);
	Stack.Push(-1282.179f);
	Stack.Push(60.0311f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(1700.491f);
	Stack.Push(-1813.515f);
	Stack.Push(50.0697f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(1443.971f);
	Stack.Push(-978.0084f);
	Stack.Push(55.8531f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(910.3932f);
	Stack.Push(-985.9777f);
	Stack.Push(56.96f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(33);
	Stack.Push(996.5635f);
	Stack.Push(-1219.119f);
	Stack.Push(62.015f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-1473.219f);
	Stack.Push(-503.3281f);
	Stack.Push(129.027f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-1793.936f);
	Stack.Push(458.5961f);
	Stack.Push(111.7438f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-1315f);
	Stack.Push(180.6012f);
	Stack.Push(74.4296f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(2626.8f);
	Stack.Push(-37.336f);
	Stack.Push(51.4288f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(858.6367f);
	Stack.Push(-228.3782f);
	Stack.Push(98.6164f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-565.9604f);
	Stack.Push(576.061f);
	Stack.Push(101.54f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(-405.8459f);
	Stack.Push(-280.6045f);
	Stack.Push(87.186f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(2103.375f);
	Stack.Push(72.0044f);
	Stack.Push(68.6537f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(1046.873f);
	Stack.Push(-188.8466f);
	Stack.Push(89.4694f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(704.4484f);
	Stack.Push(-891.234f);
	Stack.Push(48.262f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(34);
	Stack.Push(994.157f);
	Stack.Push(-1220.112f);
	Stack.Push(62.0152f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(35);
	Stack.Push(-2432.816f);
	Stack.Push(600.1653f);
	Stack.Push(126.3298f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(35);
	Stack.Push(-1603.924f);
	Stack.Push(363.9144f);
	Stack.Push(103.3773f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(2141.337f);
	Stack.Push(-1296.338f);
	Stack.Push(41.4747f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(2038.361f);
	Stack.Push(-1036.623f);
	Stack.Push(42.4476f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(-2592.207f);
	Stack.Push(235.6836f);
	Stack.Push(152.3149f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(-2301.542f);
	Stack.Push(-73.6087f);
	Stack.Push(237.0601f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(-840.8934f);
	Stack.Push(-203.1287f);
	Stack.Push(76.5716f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(-1570.955f);
	Stack.Push(424.7976f);
	Stack.Push(106.8498f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(2629.543f);
	Stack.Push(-54.2829f);
	Stack.Push(50.7092f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(777.232f);
	Stack.Push(-794.2211f);
	Stack.Push(55.6016f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(879.1506f);
	Stack.Push(-1217.032f);
	Stack.Push(50.0378f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(1589.294f);
	Stack.Push(-1813.654f);
	Stack.Push(50.6747f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(1400.936f);
	Stack.Push(-1723.739f);
	Stack.Push(67.604f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(36);
	Stack.Push(1529.042f);
	Stack.Push(-986.2963f);
	Stack.Push(43.2569f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1718.584f);
	Stack.Push(-1134.763f);
	Stack.Push(40.9841f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(2212.391f);
	Stack.Push(-958.284f);
	Stack.Push(40.9437f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(2061.675f);
	Stack.Push(-1028.883f);
	Stack.Push(42.225f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(2629.915f);
	Stack.Push(-65.2306f);
	Stack.Push(50.3571f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(2539.124f);
	Stack.Push(-164.4422f);
	Stack.Push(43.1456f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(-641.5084f);
	Stack.Push(379.0181f);
	Stack.Push(92.4459f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(756.8406f);
	Stack.Push(-354.5884f);
	Stack.Push(87.6244f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(879.8415f);
	Stack.Push(-140.9315f);
	Stack.Push(102.0446f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(-293.7909f);
	Stack.Push(-257.8938f);
	Stack.Push(91.332f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(153.8465f);
	Stack.Push(427.3995f);
	Stack.Push(137.5257f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(-919.447f);
	Stack.Push(67.989f);
	Stack.Push(47.314f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(465.0752f);
	Stack.Push(-307.1457f);
	Stack.Push(142.7813f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(-1072.983f);
	Stack.Push(30.6801f);
	Stack.Push(57.1764f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1395.396f);
	Stack.Push(-1661.043f);
	Stack.Push(66.2903f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1607.903f);
	Stack.Push(-1715.203f);
	Stack.Push(53.2411f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(839.8502f);
	Stack.Push(-990.9603f);
	Stack.Push(52.3822f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1112.213f);
	Stack.Push(-893.3633f);
	Stack.Push(66.7555f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1637.335f);
	Stack.Push(-1590.077f);
	Stack.Push(56.6167f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1491.923f);
	Stack.Push(-1978.365f);
	Stack.Push(43.8377f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(37);
	Stack.Push(1120.71f);
	Stack.Push(-2130.175f);
	Stack.Push(51.9952f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(38);
	Stack.Push(-989.522f);
	Stack.Push(2219.715f);
	Stack.Push(339.224f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(39);
	Stack.Push(-1456.041f);
	Stack.Push(-555.2747f);
	Stack.Push(131.116f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(2208.668f);
	Stack.Push(-350.9536f);
	Stack.Push(41.488f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(1733.923f);
	Stack.Push(-727.6727f);
	Stack.Push(40.8996f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(-2028.171f);
	Stack.Push(421.7315f);
	Stack.Push(123.1801f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(238.8146f);
	Stack.Push(1242.903f);
	Stack.Push(185.8171f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(646.006f);
	Stack.Push(1304.928f);
	Stack.Push(193.4366f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(438.9673f);
	Stack.Push(831.1111f);
	Stack.Push(145.7085f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(-545.762f);
	Stack.Push(393.6189f);
	Stack.Push(87.0076f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(1017.37f);
	Stack.Push(1062.322f);
	Stack.Push(158.965f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(2226.213f);
	Stack.Push(-248.6621f);
	Stack.Push(42.5431f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(2566.893f);
	Stack.Push(-71.0977f);
	Stack.Push(49.3333f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(1389.072f);
	Stack.Push(-2196.696f);
	Stack.Push(48.3307f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(40);
	Stack.Push(906.9065f);
	Stack.Push(-987.0414f);
	Stack.Push(56.96f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(41);
	Stack.Push(-1423.563f);
	Stack.Push(239.8399f);
	Stack.Push(97.1072f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(41);
	Stack.Push(-159.2655f);
	Stack.Push(495.2184f);
	Stack.Push(103.6956f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(41);
	Stack.Push(1449.437f);
	Stack.Push(-1948.466f);
	Stack.Push(52.2016f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(42);
	Stack.Push(716.5029f);
	Stack.Push(-1515.26f);
	Stack.Push(40.525f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2183.656f);
	Stack.Push(-465.3446f);
	Stack.Push(40.7656f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1788.349f);
	Stack.Push(-1018.902f);
	Stack.Push(40.8415f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-1339.337f);
	Stack.Push(-1786.202f);
	Stack.Push(75.749f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-1473.819f);
	Stack.Push(-1224.915f);
	Stack.Push(76.4906f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1844.906f);
	Stack.Push(1618.283f);
	Stack.Push(168.6082f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1486.028f);
	Stack.Push(2053.414f);
	Stack.Push(295.9742f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-469.4519f);
	Stack.Push(304.8075f);
	Stack.Push(43.7138f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(467.632f);
	Stack.Push(-1.275f);
	Stack.Push(109.2541f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(18.9602f);
	Stack.Push(-455.7956f);
	Stack.Push(71.8724f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1809.049f);
	Stack.Push(888.507f);
	Stack.Push(108.648f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2046.033f);
	Stack.Push(21.8134f);
	Stack.Push(68.6331f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2658.786f);
	Stack.Push(2260.44f);
	Stack.Push(160.2564f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2772.743f);
	Stack.Push(1743.278f);
	Stack.Push(148.0157f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(2381.888f);
	Stack.Push(744.0209f);
	Stack.Push(66.541f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1633.626f);
	Stack.Push(-2060.823f);
	Stack.Push(41.0693f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1660.104f);
	Stack.Push(-514.8263f);
	Stack.Push(46.409f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(1032.549f);
	Stack.Push(-509.7064f);
	Stack.Push(90.0929f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-5174.4f);
	Stack.Push(-2874.985f);
	Stack.Push(2.1226f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-5601.053f);
	Stack.Push(-3600.778f);
	Stack.Push(-22.9655f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-4985.12f);
	Stack.Push(-3303.439f);
	Stack.Push(6.1895f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-4584.132f);
	Stack.Push(-3523.23f);
	Stack.Push(21.2202f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-5231.253f);
	Stack.Push(-3974.581f);
	Stack.Push(-3.2106f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-3849.781f);
	Stack.Push(-3109.601f);
	Stack.Push(-15.0322f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-3149.559f);
	Stack.Push(-3100.046f);
	Stack.Push(-0.5091f);
	Stack.Push(23);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-4278.774f);
	Stack.Push(-2701.909f);
	Stack.Push(-0.6108f);
	Stack.Push(24);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-1834.618f);
	Stack.Push(-2489.122f);
	Stack.Push(46.0804f);
	Stack.Push(25);
	Call_Loc(iParam0);
	Stack.Push(43);
	Stack.Push(-3049.309f);
	Stack.Push(-2576.23f);
	Stack.Push(67.394f);
	Stack.Push(26);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-1515.412f);
	Stack.Push(170.3214f);
	Stack.Push(98.5217f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-1419.13f);
	Stack.Push(317.7131f);
	Stack.Push(91.6105f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-828.3855f);
	Stack.Push(-609.4851f);
	Stack.Push(57.7383f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-1013.295f);
	Stack.Push(124.4212f);
	Stack.Push(70.5694f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(85.724f);
	Stack.Push(416.6526f);
	Stack.Push(126.8382f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(-634.6064f);
	Stack.Push(-477.0305f);
	Stack.Push(49.1578f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(1625.168f);
	Stack.Push(-1794.723f);
	Stack.Push(51.3532f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(814.0527f);
	Stack.Push(-811.9885f);
	Stack.Push(58.0703f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(44);
	Stack.Push(1610.171f);
	Stack.Push(-583.1312f);
	Stack.Push(46.2253f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1675.267f);
	Stack.Push(-1104.612f);
	Stack.Push(40.7606f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1662.519f);
	Stack.Push(-762.8489f);
	Stack.Push(40.7127f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(2058.989f);
	Stack.Push(-401.0824f);
	Stack.Push(43.2562f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(-275.708f);
	Stack.Push(-244.8788f);
	Stack.Push(89.9711f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(311.6604f);
	Stack.Push(709.7629f);
	Stack.Push(145.6169f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(557.3143f);
	Stack.Push(907.3863f);
	Stack.Push(146.6003f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(-394.3352f);
	Stack.Push(145.0423f);
	Stack.Push(42.1403f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(485.5268f);
	Stack.Push(182.236f);
	Stack.Push(113.8813f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1093.637f);
	Stack.Push(-31.2284f);
	Stack.Push(85.7352f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(12.4028f);
	Stack.Push(-471.2083f);
	Stack.Push(72.0078f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1429.055f);
	Stack.Push(-347.5579f);
	Stack.Push(84.7219f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1064.059f);
	Stack.Push(-405.4702f);
	Stack.Push(91.0363f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1640.565f);
	Stack.Push(-219.4766f);
	Stack.Push(75.7454f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1677.664f);
	Stack.Push(-1723.655f);
	Stack.Push(51.8664f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(45);
	Stack.Push(1208.311f);
	Stack.Push(-2130.152f);
	Stack.Push(52.2418f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(46);
	Stack.Push(2688.845f);
	Stack.Push(2094.202f);
	Stack.Push(97.5463f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(46);
	Stack.Push(-2238.875f);
	Stack.Push(-1501.776f);
	Stack.Push(141.4098f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(47);
	Stack.Push(2688.845f);
	Stack.Push(2094.202f);
	Stack.Push(98.1463f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(47);
	Stack.Push(2688.845f);
	Stack.Push(2094.202f);
	Stack.Push(98.1463f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1891.322f);
	Stack.Push(-935.3073f);
	Stack.Push(41.8009f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(2056.889f);
	Stack.Push(-1046.061f);
	Stack.Push(42.3639f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(2470.6f);
	Stack.Push(974.4517f);
	Stack.Push(93.5671f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(2577.967f);
	Stack.Push(476.1377f);
	Stack.Push(65.5212f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1452.328f);
	Stack.Push(-750.2531f);
	Stack.Push(54.1882f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1082.05f);
	Stack.Push(-474.3245f);
	Stack.Push(87.6101f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1633.141f);
	Stack.Push(-509.7347f);
	Stack.Push(47.6921f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(1105.353f);
	Stack.Push(-887.1132f);
	Stack.Push(66.9528f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(48);
	Stack.Push(2016.224f);
	Stack.Push(-1488.948f);
	Stack.Push(41.5781f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(-1674.791f);
	Stack.Push(333.9579f);
	Stack.Push(105.6924f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(-511.2702f);
	Stack.Push(-88.7684f);
	Stack.Push(44.1198f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(-542.9289f);
	Stack.Push(258.9346f);
	Stack.Push(43.4502f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(503.6389f);
	Stack.Push(959.0621f);
	Stack.Push(156.7788f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(14.1111f);
	Stack.Push(598.583f);
	Stack.Push(126.4201f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(792.1996f);
	Stack.Push(-262.2156f);
	Stack.Push(98.8212f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(49);
	Stack.Push(-660.1761f);
	Stack.Push(361.73f);
	Stack.Push(90.4883f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1718.871f);
	Stack.Push(-762.4149f);
	Stack.Push(41.4575f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1776.868f);
	Stack.Push(-864.06f);
	Stack.Push(40.6397f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2002.821f);
	Stack.Push(-479.3671f);
	Stack.Push(40.9727f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2058.131f);
	Stack.Push(-363.6342f);
	Stack.Push(40.6108f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2117.548f);
	Stack.Push(-876.7509f);
	Stack.Push(40.4377f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2099.085f);
	Stack.Push(-748.1615f);
	Stack.Push(40.563f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-1820.122f);
	Stack.Push(-793.2049f);
	Stack.Push(102.8703f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-1074.538f);
	Stack.Push(-491.6324f);
	Stack.Push(80.6666f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-613.114f);
	Stack.Push(97.6527f);
	Stack.Push(52.3257f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-487.4074f);
	Stack.Push(75.9777f);
	Stack.Push(48.1205f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2726.036f);
	Stack.Push(18.5933f);
	Stack.Push(48.8501f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2552.253f);
	Stack.Push(-194.6156f);
	Stack.Push(42.4538f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2537.36f);
	Stack.Push(-260.3671f);
	Stack.Push(41.3014f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2206.565f);
	Stack.Push(-453.0783f);
	Stack.Push(40.5481f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2388.978f);
	Stack.Push(-381.6493f);
	Stack.Push(41.1678f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(627.507f);
	Stack.Push(385.186f);
	Stack.Push(105.5567f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(851.2086f);
	Stack.Push(709.5713f);
	Stack.Push(110.5522f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-658.743f);
	Stack.Push(346.6573f);
	Stack.Push(88.1336f);
	Stack.Push(17);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(142.2479f);
	Stack.Push(-320.3969f);
	Stack.Push(104.9327f);
	Stack.Push(18);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(297.612f);
	Stack.Push(201.225f);
	Stack.Push(101.0823f);
	Stack.Push(19);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1105.739f);
	Stack.Push(-53.9801f);
	Stack.Push(85.3329f);
	Stack.Push(20);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(840.7557f);
	Stack.Push(386.4758f);
	Stack.Push(117.9091f);
	Stack.Push(21);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-676.4611f);
	Stack.Push(-374.1973f);
	Stack.Push(53.7761f);
	Stack.Push(22);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(-680.1461f);
	Stack.Push(-394.7518f);
	Stack.Push(52.6402f);
	Stack.Push(23);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2707.187f);
	Stack.Push(136.8266f);
	Stack.Push(53.4102f);
	Stack.Push(24);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2236.394f);
	Stack.Push(1716.181f);
	Stack.Push(100.8078f);
	Stack.Push(25);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2026.649f);
	Stack.Push(194.4583f);
	Stack.Push(76.1849f);
	Stack.Push(26);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(2428.922f);
	Stack.Push(1040.769f);
	Stack.Push(86.3179f);
	Stack.Push(27);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1632.866f);
	Stack.Push(-1713.811f);
	Stack.Push(51.4767f);
	Stack.Push(28);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1481.719f);
	Stack.Push(-1697.79f);
	Stack.Push(61.3129f);
	Stack.Push(29);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(925.4667f);
	Stack.Push(-1081.438f);
	Stack.Push(55.1439f);
	Stack.Push(30);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(830.9171f);
	Stack.Push(-716.0651f);
	Stack.Push(63.6039f);
	Stack.Push(31);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(815.1224f);
	Stack.Push(-912.9166f);
	Stack.Push(50.2146f);
	Stack.Push(32);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1371.668f);
	Stack.Push(-238.8062f);
	Stack.Push(97.1467f);
	Stack.Push(33);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(1260.127f);
	Stack.Push(-162.0665f);
	Stack.Push(96.7544f);
	Stack.Push(34);
	Call_Loc(iParam0);
	Stack.Push(50);
	Stack.Push(950.7592f);
	Stack.Push(-1242.842f);
	Stack.Push(53.845f);
	Stack.Push(35);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(1490.549f);
	Stack.Push(-1739.697f);
	Stack.Push(59.4025f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(755.7448f);
	Stack.Push(-830.3978f);
	Stack.Push(53.5609f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(1293.232f);
	Stack.Push(-793.3234f);
	Stack.Push(75.2416f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(1121.026f);
	Stack.Push(-750.4242f);
	Stack.Push(91.5402f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(51);
	Stack.Push(1324.907f);
	Stack.Push(-255.0629f);
	Stack.Push(100.8022f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(53);
	Stack.Push(-2198.091f);
	Stack.Push(-1560.288f);
	Stack.Push(147.9514f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(53);
	Stack.Push(-2099.421f);
	Stack.Push(-1258.196f);
	Stack.Push(121.8341f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(53);
	Stack.Push(-2492.387f);
	Stack.Push(-1465.807f);
	Stack.Push(146.7759f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-2201.438f);
	Stack.Push(-1561.316f);
	Stack.Push(149.4853f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-1996.678f);
	Stack.Push(-1349.222f);
	Stack.Push(116.339f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-2413.329f);
	Stack.Push(-1441.075f);
	Stack.Push(150.5578f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-2220.976f);
	Stack.Push(-1286.49f);
	Stack.Push(133.1413f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-2390.821f);
	Stack.Push(-1215.595f);
	Stack.Push(157.3621f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(54);
	Stack.Push(-1923.344f);
	Stack.Push(-1993.478f);
	Stack.Push(77.1042f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(55);
	Stack.Push(-2324.989f);
	Stack.Push(-1650.865f);
	Stack.Push(132.8996f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(55);
	Stack.Push(-1953.471f);
	Stack.Push(-1844.582f);
	Stack.Push(116.2499f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1727.76f);
	Stack.Push(-1275.434f);
	Stack.Push(90.6868f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1187.298f);
	Stack.Push(-1501.951f);
	Stack.Push(76.6712f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1308.762f);
	Stack.Push(-1249.402f);
	Stack.Push(81.9299f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1239.012f);
	Stack.Push(-1709.895f);
	Stack.Push(77.9413f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-980.5764f);
	Stack.Push(-1818.639f);
	Stack.Push(62.5702f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1401.89f);
	Stack.Push(-1416.279f);
	Stack.Push(92.8167f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1203.841f);
	Stack.Push(-1824.375f);
	Stack.Push(60.6905f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1840.49f);
	Stack.Push(-1687.297f);
	Stack.Push(105.0552f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1972.313f);
	Stack.Push(-1381.929f);
	Stack.Push(114.4789f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1615.532f);
	Stack.Push(-1978.459f);
	Stack.Push(49.9575f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1765.309f);
	Stack.Push(-1736.517f);
	Stack.Push(92.3731f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(56);
	Stack.Push(-1885.423f);
	Stack.Push(-1341.173f);
	Stack.Push(99.7828f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(1574.241f);
	Stack.Push(-721.5044f);
	Stack.Push(42.0845f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-1159.449f);
	Stack.Push(138.6042f);
	Stack.Push(43.3767f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-1682.827f);
	Stack.Push(88.1555f);
	Stack.Push(145.8255f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-2155.849f);
	Stack.Push(-72.5493f);
	Stack.Push(232.6642f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(948.9059f);
	Stack.Push(998.7804f);
	Stack.Push(140.8828f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(174.6441f);
	Stack.Push(153.5681f);
	Stack.Push(106.6718f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(1205.995f);
	Stack.Push(569.589f);
	Stack.Push(86.8041f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-68.9876f);
	Stack.Push(-297.8486f);
	Stack.Push(93.1965f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(1729.679f);
	Stack.Push(-1685.385f);
	Stack.Push(47.5734f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(1196.258f);
	Stack.Push(-579.7256f);
	Stack.Push(66.6338f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(950.153f);
	Stack.Push(-1019.674f);
	Stack.Push(58.3151f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-5608.118f);
	Stack.Push(-3556.63f);
	Stack.Push(-24.1127f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-4622.817f);
	Stack.Push(-3354.226f);
	Stack.Push(20.9842f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(57);
	Stack.Push(-4051.454f);
	Stack.Push(-3046.4f);
	Stack.Push(-10.438f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-1174.977f);
	Stack.Push(76.6906f);
	Stack.Push(41.3614f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-1018.462f);
	Stack.Push(437.8081f);
	Stack.Push(54.8274f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-807.5107f);
	Stack.Push(69.3361f);
	Stack.Push(40.6991f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-1026.039f);
	Stack.Push(-59.0312f);
	Stack.Push(40.8465f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-708.0551f);
	Stack.Push(-333.2857f);
	Stack.Push(41.1294f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-508.7768f);
	Stack.Push(218.219f);
	Stack.Push(40.6822f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(-196.2379f);
	Stack.Push(-574.9825f);
	Stack.Push(40.6629f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(58);
	Stack.Push(1505.286f);
	Stack.Push(-771.5364f);
	Stack.Push(45.9044f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(59);
	Stack.Push(1972.094f);
	Stack.Push(-681.0854f);
	Stack.Push(43.0215f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(59);
	Stack.Push(2440.721f);
	Stack.Push(-676.4698f);
	Stack.Push(42.2753f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(59);
	Stack.Push(2098.511f);
	Stack.Push(-353.6877f);
	Stack.Push(40.8802f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-2586.923f);
	Stack.Push(-264.5349f);
	Stack.Push(161.6671f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-2578.181f);
	Stack.Push(388.9668f);
	Stack.Push(148.3721f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-2196.576f);
	Stack.Push(468.8412f);
	Stack.Push(119.5676f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-1637.2f);
	Stack.Push(-1513.234f);
	Stack.Push(82.6688f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(-825.3087f);
	Stack.Push(-1804.951f);
	Stack.Push(59.0313f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(1786.915f);
	Stack.Push(1588.926f);
	Stack.Push(167.4663f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(1959.894f);
	Stack.Push(1387.251f);
	Stack.Push(179.786f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(637.5925f);
	Stack.Push(2099.455f);
	Stack.Push(222.0308f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(1296.321f);
	Stack.Push(1161.685f);
	Stack.Push(150.1379f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(204.3004f);
	Stack.Push(261.9908f);
	Stack.Push(111.8031f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(60);
	Stack.Push(697.4816f);
	Stack.Push(65.372f);
	Stack.Push(150.8549f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(61);
	Stack.Push(1614.12f);
	Stack.Push(-810.2f);
	Stack.Push(41.15f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(61);
	Stack.Push(2385.25f);
	Stack.Push(-668.01f);
	Stack.Push(41.17f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1922.856f);
	Stack.Push(624.1806f);
	Stack.Push(114.5816f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-2612.37f);
	Stack.Push(494.5219f);
	Stack.Push(143.2249f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1981.225f);
	Stack.Push(-540.608f);
	Stack.Push(145.1829f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1389.892f);
	Stack.Push(-1275.583f);
	Stack.Push(81.3028f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1676.042f);
	Stack.Push(-2020.085f);
	Stack.Push(47.7628f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1004.324f);
	Stack.Push(-1851.333f);
	Stack.Push(60.9017f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(1071.209f);
	Stack.Push(1214.037f);
	Stack.Push(196.1523f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(1463.082f);
	Stack.Push(1026.326f);
	Stack.Push(170.4556f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-563.5857f);
	Stack.Push(1206.521f);
	Stack.Push(156.4777f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1374.102f);
	Stack.Push(628.8635f);
	Stack.Push(109.8288f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(69.4236f);
	Stack.Push(-43.6054f);
	Stack.Push(103.7584f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-373.6552f);
	Stack.Push(-72.1375f);
	Stack.Push(42.3578f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(556.9641f);
	Stack.Push(356.811f);
	Stack.Push(105.9842f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(474.0224f);
	Stack.Push(-316.3003f);
	Stack.Push(141.9746f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1862.232f);
	Stack.Push(-1332.681f);
	Stack.Push(97.2679f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-2483.872f);
	Stack.Push(-1309.616f);
	Stack.Push(158.4832f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(62);
	Stack.Push(-1958.146f);
	Stack.Push(-1786.701f);
	Stack.Push(120.1902f);
	Stack.Push(16);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-1127.1f);
	Stack.Push(-324.4f);
	Stack.Push(87.7f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-1099.6f);
	Stack.Push(-112.7f);
	Stack.Push(44.2f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-746.4f);
	Stack.Push(-124.8f);
	Stack.Push(82.7f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-2107.655f);
	Stack.Push(-468.3287f);
	Stack.Push(149.7019f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-2282.436f);
	Stack.Push(497.8875f);
	Stack.Push(120.5164f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(63);
	Stack.Push(-2007.449f);
	Stack.Push(-746.912f);
	Stack.Push(104.459f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(-6.8961f);
	Stack.Push(294.2949f);
	Stack.Push(110.201f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(176.5703f);
	Stack.Push(573.1811f);
	Stack.Push(116.778f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(1896.501f);
	Stack.Push(-1647.79f);
	Stack.Push(42.5318f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(1047.113f);
	Stack.Push(-1064.466f);
	Stack.Push(65.5536f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(-5025.307f);
	Stack.Push(-2638.411f);
	Stack.Push(-12.8459f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(-5100.704f);
	Stack.Push(-3179.039f);
	Stack.Push(-15.6474f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(64);
	Stack.Push(-3879.725f);
	Stack.Push(-2841.371f);
	Stack.Push(-15.3182f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1615.269f);
	Stack.Push(1613.743f);
	Stack.Push(147.7296f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1423.979f);
	Stack.Push(1102.476f);
	Stack.Push(185.6182f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(2043.08f);
	Stack.Push(1720.93f);
	Stack.Push(154.4757f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(649.9562f);
	Stack.Push(1908.171f);
	Stack.Push(214.0831f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(950.4314f);
	Stack.Push(388.0648f);
	Stack.Push(110.4698f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1355.897f);
	Stack.Push(467.7415f);
	Stack.Push(87.2016f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(-472.058f);
	Stack.Push(-172.115f);
	Stack.Push(43.1987f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1339.051f);
	Stack.Push(-1626.587f);
	Stack.Push(65.6338f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1519.469f);
	Stack.Push(-2083.614f);
	Stack.Push(42.6887f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(65);
	Stack.Push(1166.103f);
	Stack.Push(-2132.91f);
	Stack.Push(55.964f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1159.115f);
	Stack.Push(397.0877f);
	Stack.Push(60.4953f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1278.359f);
	Stack.Push(291.4224f);
	Stack.Push(76.6652f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1371.28f);
	Stack.Push(283.4114f);
	Stack.Push(86.0114f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1117.687f);
	Stack.Push(406.6783f);
	Stack.Push(55.3681f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1288.323f);
	Stack.Push(148.5012f);
	Stack.Push(71.7864f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1648.447f);
	Stack.Push(-114.858f);
	Stack.Push(170.0504f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-1081.189f);
	Stack.Push(-405.0457f);
	Stack.Push(97.0153f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(206.8413f);
	Stack.Push(-170.3653f);
	Stack.Push(130.5284f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(-621.2297f);
	Stack.Push(186.8452f);
	Stack.Push(41.2741f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(44.3784f);
	Stack.Push(388.2357f);
	Stack.Push(129.8287f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(752.9834f);
	Stack.Push(-58.1133f);
	Stack.Push(157.6479f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(66);
	Stack.Push(822.6152f);
	Stack.Push(578.6021f);
	Stack.Push(117.7806f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2572.895f);
	Stack.Push(1545.367f);
	Stack.Push(95.1632f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2569.531f);
	Stack.Push(1820.273f);
	Stack.Push(86.0089f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2388.21f);
	Stack.Push(1048.992f);
	Stack.Push(85.1056f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2769.92f);
	Stack.Push(1013.51f);
	Stack.Push(60.84f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(67);
	Stack.Push(2697.282f);
	Stack.Push(1627.256f);
	Stack.Push(148.2803f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2404.503f);
	Stack.Push(-708.3487f);
	Stack.Push(40.1213f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2412.389f);
	Stack.Push(-632.1752f);
	Stack.Push(41.1803f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2141.919f);
	Stack.Push(-775.2498f);
	Stack.Push(40.52f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2188.875f);
	Stack.Push(-378.6358f);
	Stack.Push(40.6047f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(68);
	Stack.Push(2494.612f);
	Stack.Push(-245.3792f);
	Stack.Push(41.1532f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2407.218f);
	Stack.Push(-720.1194f);
	Stack.Push(48f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2356.204f);
	Stack.Push(-617.4643f);
	Stack.Push(40.6704f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2266.73f);
	Stack.Push(-859.36f);
	Stack.Push(40.6498f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2117.661f);
	Stack.Push(-468.6407f);
	Stack.Push(40.569f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(69);
	Stack.Push(2175.363f);
	Stack.Push(-777.6237f);
	Stack.Push(40.5395f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-2284.769f);
	Stack.Push(-423.4211f);
	Stack.Push(156.8616f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-1883.307f);
	Stack.Push(373.0742f);
	Stack.Push(119.2403f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-2651.707f);
	Stack.Push(210.0714f);
	Stack.Push(151.7762f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-1623.526f);
	Stack.Push(235.4652f);
	Stack.Push(105.3645f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-1926.251f);
	Stack.Push(-678.1707f);
	Stack.Push(116.5043f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(70);
	Stack.Push(-2689.542f);
	Stack.Push(-305.0743f);
	Stack.Push(148.3352f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(-1320.695f);
	Stack.Push(-2010.077f);
	Stack.Push(40.5892f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(-738.0292f);
	Stack.Push(-1711.02f);
	Stack.Push(40.4947f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(146.1645f);
	Stack.Push(-630.6563f);
	Stack.Push(40.7397f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(-469.2039f);
	Stack.Push(-576.6931f);
	Stack.Push(40.7896f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(-286.3765f);
	Stack.Push(-568.8775f);
	Stack.Push(40.9598f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(3138.446f);
	Stack.Push(1451.169f);
	Stack.Push(40.4687f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(2871.425f);
	Stack.Push(933.2757f);
	Stack.Push(40.6453f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(71);
	Stack.Push(2916.922f);
	Stack.Push(366.8459f);
	Stack.Push(40.6137f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2355.67f);
	Stack.Push(-682.6993f);
	Stack.Push(46.9981f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(1655.174f);
	Stack.Push(-1002.744f);
	Stack.Push(49.9165f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2175.948f);
	Stack.Push(-453.2319f);
	Stack.Push(46.1423f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(1820.147f);
	Stack.Push(-911.4569f);
	Stack.Push(50.6755f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(1684.56f);
	Stack.Push(-701.666f);
	Stack.Push(48.775f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2452.194f);
	Stack.Push(1285.645f);
	Stack.Push(118.422f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2690.952f);
	Stack.Push(1786.37f);
	Stack.Push(109.0461f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(3009.679f);
	Stack.Push(1704.29f);
	Stack.Push(79.1191f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(72);
	Stack.Push(2276.207f);
	Stack.Push(1602.347f);
	Stack.Push(88.9849f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(73);
	Stack.Push(2397.366f);
	Stack.Push(1666.155f);
	Stack.Push(95.0309f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(73);
	Stack.Push(2470.936f);
	Stack.Push(1584.53f);
	Stack.Push(86.2933f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(73);
	Stack.Push(2330.519f);
	Stack.Push(1741.076f);
	Stack.Push(104.3994f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(73);
	Stack.Push(2383.997f);
	Stack.Push(1763.228f);
	Stack.Push(106.3f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(74);
	Stack.Push(2414.261f);
	Stack.Push(1766.187f);
	Stack.Push(88.6656f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(75);
	Stack.Push(-3625.013f);
	Stack.Push(-2604.96f);
	Stack.Push(-14.2406f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(76);
	Stack.Push(-5526.436f);
	Stack.Push(-2933.683f);
	Stack.Push(-2.9655f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(77);
	Stack.Push(2724.5f);
	Stack.Push(-1115.8f);
	Stack.Push(49.7f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(77);
	Stack.Push(2856.7f);
	Stack.Push(-1248.3f);
	Stack.Push(46.4f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(77);
	Stack.Push(2875.7f);
	Stack.Push(-1181.2f);
	Stack.Push(46.1f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(78);
	Stack.Push(2324.6f);
	Stack.Push(-1092.9f);
	Stack.Push(44.7f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(78);
	Stack.Push(2276.4f);
	Stack.Push(-1371.3f);
	Stack.Push(45.8f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(-1796.165f);
	Stack.Push(-383.4302f);
	Stack.Push(159.2698f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(-278.5714f);
	Stack.Push(785.1736f);
	Stack.Push(118.4981f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(-278.5714f);
	Stack.Push(785.1736f);
	Stack.Push(118.4981f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(2925.65f);
	Stack.Push(1275.873f);
	Stack.Push(43.6309f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(1323.145f);
	Stack.Push(-1294.017f);
	Stack.Push(76.017f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(79);
	Stack.Push(1323.145f);
	Stack.Push(-1294.017f);
	Stack.Push(76.017f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(80);
	Stack.Push(2821.827f);
	Stack.Push(-1275.462f);
	Stack.Push(47.101f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(80);
	Stack.Push(2841.75f);
	Stack.Push(-1164.15f);
	Stack.Push(46.7f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(80);
	Stack.Push(2741.723f);
	Stack.Push(-1315.395f);
	Stack.Push(47.648f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2815.91f);
	Stack.Push(-1222.949f);
	Stack.Push(46.526f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2602.444f);
	Stack.Push(-1286.57f);
	Stack.Push(51.2567f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2661.251f);
	Stack.Push(-1202.6f);
	Stack.Push(52.2783f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2750.527f);
	Stack.Push(-1206.293f);
	Stack.Push(48.3767f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2530.883f);
	Stack.Push(-1149.375f);
	Stack.Push(49.0052f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2714.385f);
	Stack.Push(-1233.121f);
	Stack.Push(49.172f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2639.789f);
	Stack.Push(-1417.126f);
	Stack.Push(45.376f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2703.266f);
	Stack.Push(-1184.961f);
	Stack.Push(50.865f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2781.518f);
	Stack.Push(-1278.669f);
	Stack.Push(46.429f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2593.165f);
	Stack.Push(-1207.484f);
	Stack.Push(52.3112f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2670.08f);
	Stack.Push(-1113.233f);
	Stack.Push(49.552f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(2482.088f);
	Stack.Push(-1465.71f);
	Stack.Push(45.1902f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(-791.817f);
	Stack.Push(-1311.097f);
	Stack.Push(42.623f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(-778.963f);
	Stack.Push(-1260.098f);
	Stack.Push(42.643f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(81);
	Stack.Push(-843.7784f);
	Stack.Push(-1282.664f);
	Stack.Push(42.3634f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2675.32f);
	Stack.Push(-1180.95f);
	Stack.Push(52.0954f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2642.136f);
	Stack.Push(-1229.305f);
	Stack.Push(52.2161f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2835.006f);
	Stack.Push(-1190.365f);
	Stack.Push(46.598f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2773.176f);
	Stack.Push(-1120.12f);
	Stack.Push(46.534f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2524.305f);
	Stack.Push(-1406.557f);
	Stack.Push(45.1683f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2738.86f);
	Stack.Push(-1317.416f);
	Stack.Push(46.5925f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2677.741f);
	Stack.Push(-1342.216f);
	Stack.Push(47.7528f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(2651.291f);
	Stack.Push(-1410.081f);
	Stack.Push(45.3449f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(82);
	Stack.Push(-816.683f);
	Stack.Push(-1310.262f);
	Stack.Push(42.681f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(83);
	Stack.Push(-3712.294f);
	Stack.Push(-2624.416f);
	Stack.Push(-14.6756f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(83);
	Stack.Push(-3587.756f);
	Stack.Push(-2599.626f);
	Stack.Push(-15.0415f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(84);
	Stack.Push(-315.9042f);
	Stack.Push(796.2438f);
	Stack.Push(116.6553f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(84);
	Stack.Push(-315.804f);
	Stack.Push(796.344f);
	Stack.Push(116.655f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2815.91f);
	Stack.Push(-1222.949f);
	Stack.Push(46.526f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2602.444f);
	Stack.Push(-1286.57f);
	Stack.Push(51.2567f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2661.151f);
	Stack.Push(-1202.7f);
	Stack.Push(52.2783f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2750.427f);
	Stack.Push(-1206.293f);
	Stack.Push(48.3767f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2530.883f);
	Stack.Push(-1149.375f);
	Stack.Push(49.0052f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2639.789f);
	Stack.Push(-1417.126f);
	Stack.Push(45.376f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2703.266f);
	Stack.Push(-1184.961f);
	Stack.Push(50.865f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2777.176f);
	Stack.Push(-1284.33f);
	Stack.Push(46.401f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2593.165f);
	Stack.Push(-1207.484f);
	Stack.Push(52.3112f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2670.315f);
	Stack.Push(-1120.21f);
	Stack.Push(49.655f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(85);
	Stack.Push(2482.088f);
	Stack.Push(-1465.71f);
	Stack.Push(45.1902f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(86);
	Stack.Push(2915.228f);
	Stack.Push(1331.694f);
	Stack.Push(43.9828f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(86);
	Stack.Push(1393.381f);
	Stack.Push(-1137.415f);
	Stack.Push(75.1469f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(-313.152f);
	Stack.Push(829.182f);
	Stack.Push(118.494f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(-228.0928f);
	Stack.Push(748.1144f);
	Stack.Push(116.2867f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(-282.677f);
	Stack.Push(663.646f);
	Stack.Push(112.414f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(2964.635f);
	Stack.Push(462.0895f);
	Stack.Push(48.2494f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(2980.101f);
	Stack.Push(581.1429f);
	Stack.Push(43.3314f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(1442.221f);
	Stack.Push(-1303.781f);
	Stack.Push(76.7482f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(1404.719f);
	Stack.Push(-1369.902f);
	Stack.Push(80.301f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(1310.117f);
	Stack.Push(-1357.097f);
	Stack.Push(76.968f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(87);
	Stack.Push(1319.893f);
	Stack.Push(-1327.6f);
	Stack.Push(76.174f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(88);
	Stack.Push(-308.8745f);
	Stack.Push(800.6629f);
	Stack.Push(117.9796f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(88);
	Stack.Push(2949.343f);
	Stack.Push(523.1172f);
	Stack.Push(44.3583f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(89);
	Stack.Push(1342.15f);
	Stack.Push(-1375.004f);
	Stack.Push(79.4998f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(90);
	Stack.Push(-347.8752f);
	Stack.Push(741.1281f);
	Stack.Push(116.4358f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(90);
	Stack.Push(2958.862f);
	Stack.Push(524.6724f);
	Stack.Push(43.6222f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(91);
	Stack.Push(-3715.866f);
	Stack.Push(-2568.89f);
	Stack.Push(-14.9211f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(91);
	Stack.Push(-3637.223f);
	Stack.Push(-2630.011f);
	Stack.Push(-14.8352f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(92);
	Stack.Push(-295.4f);
	Stack.Push(735.1f);
	Stack.Push(116.4f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(92);
	Stack.Push(-362.7055f);
	Stack.Push(831.2882f);
	Stack.Push(115.7839f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(92);
	Stack.Push(1334.67f);
	Stack.Push(-1365.789f);
	Stack.Push(78.9413f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(93);
	Stack.Push(2503.755f);
	Stack.Push(-1164.531f);
	Stack.Push(48.1928f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(2592.7f);
	Stack.Push(-1207.5f);
	Stack.Push(52.5f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(2380.653f);
	Stack.Push(-1353.522f);
	Stack.Push(45.3453f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(-336f);
	Stack.Push(707.7f);
	Stack.Push(118.2f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(-211.2f);
	Stack.Push(640.7f);
	Stack.Push(113f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(-248f);
	Stack.Push(734.7f);
	Stack.Push(116.9f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(1326.8f);
	Stack.Push(-1220.3f);
	Stack.Push(79.6f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(1365.6f);
	Stack.Push(-1343.7f);
	Stack.Push(78f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(1272.4f);
	Stack.Push(-1281.7f);
	Stack.Push(75.3f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(94);
	Stack.Push(1358.1f);
	Stack.Push(-1379.7f);
	Stack.Push(79.5f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(95);
	Stack.Push(2507.693f);
	Stack.Push(-1202.433f);
	Stack.Push(51.4826f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(2355.992f);
	Stack.Push(-1421.836f);
	Stack.Push(41.3914f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(2477.7f);
	Stack.Push(-1489.4f);
	Stack.Push(46.2f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(2439f);
	Stack.Push(-1477.2f);
	Stack.Push(45.4f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(2803.6f);
	Stack.Push(-1227.4f);
	Stack.Push(47.2f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(1350.4f);
	Stack.Push(-1260.6f);
	Stack.Push(78.3f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(1294.8f);
	Stack.Push(-1343.3f);
	Stack.Push(77f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(96);
	Stack.Push(1392.2f);
	Stack.Push(-1312.7f);
	Stack.Push(77.6f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(-1808.807f);
	Stack.Push(-363.4895f);
	Stack.Push(161.1128f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(-1830.203f);
	Stack.Push(-428.2535f);
	Stack.Push(159.037f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(-1771.468f);
	Stack.Push(-437.2715f);
	Stack.Push(154.0925f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(1428.513f);
	Stack.Push(366.0985f);
	Stack.Push(87.8453f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(1421.528f);
	Stack.Push(323.5045f);
	Stack.Push(87.4142f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(97);
	Stack.Push(1357.266f);
	Stack.Push(306.072f);
	Stack.Push(86.3373f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(98);
	Stack.Push(-272.525f);
	Stack.Push(799.1819f);
	Stack.Push(118.0958f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(98);
	Stack.Push(-336.1102f);
	Stack.Push(776.7322f);
	Stack.Push(114.9947f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(98);
	Stack.Push(2959.161f);
	Stack.Push(492.569f);
	Stack.Push(45.437f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(98);
	Stack.Push(2959.535f);
	Stack.Push(590.465f);
	Stack.Push(43.514f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(99);
	Stack.Push(-249.4169f);
	Stack.Push(764.9301f);
	Stack.Push(116.4413f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(99);
	Stack.Push(-329.8f);
	Stack.Push(747.6f);
	Stack.Push(116.3f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(100);
	Stack.Push(-1788.724f);
	Stack.Push(-366.4714f);
	Stack.Push(159.7196f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(101);
	Stack.Push(1342.767f);
	Stack.Push(-1374.869f);
	Stack.Push(79.5128f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(101);
	Stack.Push(1342.767f);
	Stack.Push(-1374.869f);
	Stack.Push(79.5128f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(102);
	Stack.Push(-1786.066f);
	Stack.Push(-401.217f);
	Stack.Push(155.484f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(102);
	Stack.Push(-285.4209f);
	Stack.Push(865.4907f);
	Stack.Push(120.1243f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(102);
	Stack.Push(-258.9237f);
	Stack.Push(733.0353f);
	Stack.Push(115.9265f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(103);
	Stack.Push(2720.815f);
	Stack.Push(-1283.54f);
	Stack.Push(48.638f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(103);
	Stack.Push(2551.768f);
	Stack.Push(-1173.668f);
	Stack.Push(52.683f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(103);
	Stack.Push(2948.19f);
	Stack.Push(526.29f);
	Stack.Push(44.34f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(104);
	Stack.Push(2663.312f);
	Stack.Push(-1217.594f);
	Stack.Push(52.3003f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(104);
	Stack.Push(2497.331f);
	Stack.Push(-1269.9f);
	Stack.Push(48.1784f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(104);
	Stack.Push(2866.205f);
	Stack.Push(-1211.583f);
	Stack.Push(45.2799f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(105);
	Stack.Push(2648.307f);
	Stack.Push(-1199.577f);
	Stack.Push(52.3577f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(105);
	Stack.Push(2744.021f);
	Stack.Push(-1214.594f);
	Stack.Push(48.5629f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(106);
	Stack.Push(2688.31f);
	Stack.Push(-1114.065f);
	Stack.Push(51.8697f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(106);
	Stack.Push(-764.837f);
	Stack.Push(-1260.936f);
	Stack.Push(46.4259f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(106);
	Stack.Push(-315.3432f);
	Stack.Push(734.9009f);
	Stack.Push(122.8928f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(106);
	Stack.Push(1374.88f);
	Stack.Push(-1215.133f);
	Stack.Push(83.223f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(107);
	Stack.Push(2793.112f);
	Stack.Push(-1173.748f);
	Stack.Push(46.924f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(108);
	Stack.Push(-308.4347f);
	Stack.Push(788.9138f);
	Stack.Push(116.5967f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(108);
	Stack.Push(2952.417f);
	Stack.Push(523.4847f);
	Stack.Push(44.4925f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(108);
	Stack.Push(-3707.469f);
	Stack.Push(-2600.353f);
	Stack.Push(-14.6511f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(109);
	Stack.Push(-1768.237f);
	Stack.Push(-386.8972f);
	Stack.Push(156.7337f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(109);
	Stack.Push(2941.604f);
	Stack.Push(1321.632f);
	Stack.Push(43.7591f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(109);
	Stack.Push(1330.253f);
	Stack.Push(-1317.481f);
	Stack.Push(76.9597f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(110);
	Stack.Push(2795.961f);
	Stack.Push(-1170.355f);
	Stack.Push(46.924f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(111);
	Stack.Push(-811.953f);
	Stack.Push(-1325.25f);
	Stack.Push(42.577f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(111);
	Stack.Push(-307.3034f);
	Stack.Push(797.0555f);
	Stack.Push(117.9233f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(111);
	Stack.Push(-242.7336f);
	Stack.Push(766.1105f);
	Stack.Push(117.085f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(111);
	Stack.Push(2951.335f);
	Stack.Push(523.949f);
	Stack.Push(44.385f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(112);
	Stack.Push(2669.648f);
	Stack.Push(-1181.517f);
	Stack.Push(52.1704f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(112);
	Stack.Push(2691.534f);
	Stack.Push(-1262.121f);
	Stack.Push(50.0244f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(112);
	Stack.Push(2750.981f);
	Stack.Push(-1163.64f);
	Stack.Push(47.9651f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(113);
	Stack.Push(-957.44f);
	Stack.Push(-1201.16f);
	Stack.Push(54.8f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(113);
	Stack.Push(-957.5674f);
	Stack.Push(-1209.503f);
	Stack.Push(53.9484f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(113);
	Stack.Push(1297.35f);
	Stack.Push(-1214f);
	Stack.Push(80.47f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2714.69f);
	Stack.Push(-1214.11f);
	Stack.Push(50.73f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2654.302f);
	Stack.Push(-1124.292f);
	Stack.Push(49.93f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2504.71f);
	Stack.Push(-1197.69f);
	Stack.Push(48.22f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2406.22f);
	Stack.Push(-1421.73f);
	Stack.Push(44.9f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2813.77f);
	Stack.Push(-1270.79f);
	Stack.Push(46.41f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2779.46f);
	Stack.Push(-1167.3f);
	Stack.Push(47.42f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(-294.4247f);
	Stack.Push(783.5817f);
	Stack.Push(118.2912f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(-238.2696f);
	Stack.Push(694.6663f);
	Stack.Push(112.4419f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(-285.2f);
	Stack.Push(839.39f);
	Stack.Push(119.98f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(-326.5073f);
	Stack.Push(795.0771f);
	Stack.Push(116.8913f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2953.704f);
	Stack.Push(518.1846f);
	Stack.Push(44.4672f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2959.148f);
	Stack.Push(590.6953f);
	Stack.Push(43.5041f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(2964.527f);
	Stack.Push(473.1478f);
	Stack.Push(47.4215f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(1323.881f);
	Stack.Push(-1313.513f);
	Stack.Push(75.8026f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(1299.868f);
	Stack.Push(-1299.655f);
	Stack.Push(76.3373f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(114);
	Stack.Push(1333.02f);
	Stack.Push(-1248.85f);
	Stack.Push(76.55f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(115);
	Stack.Push(-298.302f);
	Stack.Push(786.458f);
	Stack.Push(118.188f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(115);
	Stack.Push(-260.238f);
	Stack.Push(766.421f);
	Stack.Push(117.481f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(115);
	Stack.Push(-342.301f);
	Stack.Push(792.306f);
	Stack.Push(116.167f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(-250.01f);
	Stack.Push(768.66f);
	Stack.Push(116.55f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(-349.09f);
	Stack.Push(740.88f);
	Stack.Push(116.43f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(-212.04f);
	Stack.Push(640.67f);
	Stack.Push(111.98f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(2938.38f);
	Stack.Push(1320.05f);
	Stack.Push(43.23f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(2870.76f);
	Stack.Push(1349.07f);
	Stack.Push(61.35f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(1286.04f);
	Stack.Push(-1287.2f);
	Stack.Push(74.98f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(116);
	Stack.Push(1366.49f);
	Stack.Push(-1374.91f);
	Stack.Push(77.85f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(117);
	Stack.Push(-3665.4f);
	Stack.Push(-2608.5f);
	Stack.Push(-14f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(117);
	Stack.Push(-3625.2f);
	Stack.Push(-2617.3f);
	Stack.Push(-13.8f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2565.529f);
	Stack.Push(-1337.106f);
	Stack.Push(46.7954f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2813.954f);
	Stack.Push(-1198.445f);
	Stack.Push(46.429f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2718.987f);
	Stack.Push(-1252.988f);
	Stack.Push(48.8628f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2655.251f);
	Stack.Push(-1121.463f);
	Stack.Push(49.9823f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2504.686f);
	Stack.Push(-1230.827f);
	Stack.Push(48.22f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(2675.291f);
	Stack.Push(-1388.496f);
	Stack.Push(45.499f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(-772.2189f);
	Stack.Push(-1330.509f);
	Stack.Push(42.6413f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(-841.984f);
	Stack.Push(-1319.104f);
	Stack.Push(42.699f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(-855.149f);
	Stack.Push(-1381.493f);
	Stack.Push(42.709f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(118);
	Stack.Push(-755.542f);
	Stack.Push(-1304.519f);
	Stack.Push(42.759f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-1371.9f);
	Stack.Push(117.2f);
	Stack.Push(83.8f);
	Stack.Push(0);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-1414.094f);
	Stack.Push(-1515.714f);
	Stack.Push(85.1308f);
	Stack.Push(1);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-1567.185f);
	Stack.Push(-1670.679f);
	Stack.Push(78.1019f);
	Stack.Push(2);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(889.8477f);
	Stack.Push(1273.715f);
	Stack.Push(234.1128f);
	Stack.Push(3);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(712.6324f);
	Stack.Push(1884.503f);
	Stack.Push(238.3911f);
	Stack.Push(4);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(1208.474f);
	Stack.Push(725.8189f);
	Stack.Push(100.6124f);
	Stack.Push(5);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(1065.796f);
	Stack.Push(45.7184f);
	Stack.Push(85.7752f);
	Stack.Push(6);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(2339.173f);
	Stack.Push(355.338f);
	Stack.Push(55.7178f);
	Stack.Push(7);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(2522.906f);
	Stack.Push(1697.219f);
	Stack.Push(86.4072f);
	Stack.Push(8);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(1178.059f);
	Stack.Push(-2177.841f);
	Stack.Push(54.1327f);
	Stack.Push(9);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(1578.016f);
	Stack.Push(-195.802f);
	Stack.Push(79.6787f);
	Stack.Push(10);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(825.1554f);
	Stack.Push(-1435.466f);
	Stack.Push(52.8703f);
	Stack.Push(11);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(920.1998f);
	Stack.Push(-560.8011f);
	Stack.Push(89.0324f);
	Stack.Push(12);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-2242.403f);
	Stack.Push(-1552.961f);
	Stack.Push(149.5428f);
	Stack.Push(13);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-2426.368f);
	Stack.Push(-1349.323f);
	Stack.Push(152.7462f);
	Stack.Push(14);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-2058.923f);
	Stack.Push(-1291.287f);
	Stack.Push(116.7038f);
	Stack.Push(15);
	Call_Loc(iParam0);
	Stack.Push(119);
	Stack.Push(-4483.045f);
	Stack.Push(-2944.134f);
	Stack.Push(-19.1217f);
	Stack.Push(16);
	Call_Loc(iParam0);
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	if (!func_383(iParam0))
	{
		return;
	}
	if (!func_384(iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1310750[iParam0 /*111*/].f_34), iParam1);
	func_386(iParam0, func_385(iParam1), iParam2);
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_383(iParam0))
	{
		return;
	}
	func_387(&(Global_1310750[iParam0 /*111*/].f_35), iParam1);
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar2 = func_388(iVar0);
		if ((iVar2 && iParam1) != 0)
		{
			iVar1 = (17 + iVar0);
			Global_1310750[iParam0 /*111*/].f_64[iVar1] = iParam2;
		}
		iVar0++;
	}
}

void func_113()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		Global_1326862.f_512[iVar0] = iVar4;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 120)
		{
			if ((func_389(iVar1, 1) && MISC::IS_BIT_SET(Global_1310750[iVar1 /*111*/].f_34, iVar0)) && !func_390(iVar1, 8192))
			{
				Global_1326862.f_11[iVar4] = iVar1;
				iVar4++;
			}
			iVar1++;
		}
		Global_1326862.f_558[iVar0] = (iVar4 - 1);
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 < 25)
	{
		iVar2 = func_388(iVar3);
		Global_1326862.f_512[(17 + iVar3)] = iVar4;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 120)
		{
			if ((func_389(iVar1, 2) && func_391(iVar1, iVar2)) && !func_390(iVar1, 8192))
			{
				Global_1326862.f_11[iVar4] = iVar1;
				iVar4++;
			}
			iVar1++;
		}
		Global_1326862.f_558[(17 + iVar3)] = (iVar4 - 1);
		iVar3++;
	}
}

bool func_114(int iParam0)
{
	return !iParam0 <= 0;
}

int func_115()
{
	return Global_1572887.f_12;
}

void func_116(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_392(iParam0))
	{
		return;
	}
	func_393(iParam0, 2);
	if (bParam1)
	{
		if (!func_394(0, 0, 1))
		{
			func_308(1, 6);
		}
	}
}

void func_117()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 175)
	{
		func_395(iVar0);
		iVar0++;
	}
}

void func_118(int iParam0, char* sParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!func_396(iParam0))
	{
		return;
	}
	if (Global_1879534 == 0)
	{
		Global_1392626[iParam0 /*32*/].f_3 = func_288(0, iParam0, 6, func_397(iParam0));
		StringCopy(&(Global_1392626[iParam0 /*32*/].f_13), sParam1, 64);
		Global_1392626[iParam0 /*32*/].f_12 = iParam2;
		Global_1392626[iParam0 /*32*/].f_27 = { vParam6 };
		Global_1392626[iParam0 /*32*/].f_4 = fParam9;
		Global_1392626[iParam0 /*32*/].f_22 = iParam11;
		Global_1392626[iParam0 /*32*/].f_7 = iParam12;
		Global_1392626[iParam0 /*32*/].f_5 = iParam13;
		Global_1392626[iParam0 /*32*/].f_6 = iParam15;
	}
	Global_1392626[iParam0 /*32*/].f_24 = { vParam3 };
	Global_40.f_9052.f_1[iParam0] = -15;
	if (Global_40 == 0 || Global_1879534 == 1)
	{
		if (iParam10 == 1)
		{
			func_398(iParam0, 4);
		}
		else
		{
			func_399(iParam0, 4);
		}
	}
	func_400(&(Global_1392626[iParam0 /*32*/].f_8), iParam14);
}

void func_119(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Global_1415419.f_19[iParam0 /*12*/].f_4 = iParam0;
	Global_1415419.f_19[iParam0 /*12*/] = iParam1;
	Global_1415419.f_19[iParam0 /*12*/].f_1 = iParam2;
	Global_1415419.f_19[iParam0 /*12*/].f_2 = iParam3;
	Global_1415419.f_19[iParam0 /*12*/].f_5 = iParam4;
	Global_1415419.f_19[iParam0 /*12*/].f_6 = iParam5;
}

void func_120(int iParam0)
{
	if (!func_401(iParam0))
	{
		return;
	}
	if (!func_402(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 0;
}

bool func_121(int iParam0)
{
	return Global_32074.f_2697.f_6[iParam0 /*6*/].f_4;
}

int func_122(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_123(int iParam0)
{
	if (!func_401(iParam0))
	{
		return;
	}
	if (!func_402(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 1;
}

void func_124(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_125(var uParam0)
{
	return func_403(*uParam0, 1);
}

void func_126(var uParam0, bool bParam1)
{
	if (bParam1 || !func_125(uParam0))
	{
		func_404(uParam0);
	}
}

int func_127(var uParam0)
{
	if (!func_125(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_405(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_406() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_128()
{
	var uVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = 0;
	iVar6 = 0;
	while (iVar6 < 25)
	{
		iVar5 = func_407(iVar6);
		if (ITEMDATABASE::_ITEMDATABASE_IS_SHOP_KEY_VALID(iVar5))
		{
			iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(iVar5);
			if (iVar4 > 0)
			{
				iVar3 = 0;
				while (iVar3 < iVar4)
				{
					if (ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(iVar5, iVar3, &uVar0))
					{
						func_408(uVar0);
					}
					iVar3++;
				}
			}
		}
		iVar6++;
	}
	return true;
}

void func_129(var uParam0)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 1454239731, "weather_groups");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -1414071153, "group");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -1922022867, "group(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 22618052, "weather");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -263946049, "weather(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 1518212392, ":name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -744273763, ":allowed");
	Var0 = *uParam0;
	Var0.f_1 = 0;
	Var0.f_2 = 1454239731;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar5, &Var0))
	{
		return;
	}
	Var0.f_1 = uVar5;
	Var0.f_2 = -1414071153;
	iVar11 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		Var0.f_1 = uVar5;
		Var0.f_2 = -1922022867;
		Var0.f_3 = iVar12;
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar6, &Var0))
		{
		}
		else
		{
			Var0.f_1 = uVar6;
			Var0.f_2 = 1518212392;
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar8, &Var0))
			{
			}
			else
			{
				iVar13 = uVar8;
				iVar14 = func_409(iVar13, 1);
				Var0.f_1 = uVar6;
				Var0.f_2 = 22618052;
				iVar15 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
				iVar16 = 0;
				while (iVar16 < iVar15)
				{
					Var0.f_1 = uVar6;
					Var0.f_2 = -263946049;
					Var0.f_3 = iVar16;
					if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar7, &Var0))
					{
					}
					else
					{
						Var0.f_1 = uVar7;
						Var0.f_2 = 1518212392;
						if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar9, &Var0))
						{
						}
						else
						{
							iVar17 = uVar9;
							iVar18 = func_410(iVar17, 1);
							if (iVar18 < 0 || iVar18 > 31)
							{
							}
							else
							{
								Var0.f_1 = uVar7;
								Var0.f_2 = -744273763;
								if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&bVar10, &Var0))
								{
								}
								else if (iVar14 < 0 || iVar14 >= 15)
								{
								}
								else if (bVar10)
								{
									MISC::SET_BIT(&(Global_1934765.f_302[iVar14]), iVar18);
								}
								else
								{
									MISC::CLEAR_BIT(&(Global_1934765.f_302[iVar14]), iVar18);
								}
							}
						}
					}
					iVar16++;
				}
			}
		}
		iVar12++;
	}
	MISC::SET_BIT(&(Global_1934765.f_301), 0);
}

void func_130()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_411(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_412();
		}
		return;
	}
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	func_413();
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
	func_411(1);
}

void func_131()
{
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_414(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_132()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_415(0);
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
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_415(1);
}

void func_133()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			func_416(15000, 0, 0, 0, 1);
			func_415(0);
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
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	func_417(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_415(1);
}

void func_134()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!func_418(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !func_419(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_414(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_420(1))
			{
				func_421(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!func_418(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !func_419(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_414(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_420(2))
			{
				func_421(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !func_420(4))
		{
			func_421(4);
		}
		if (func_420(0))
		{
			func_422(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (func_418(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_335(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (func_418(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_335(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (func_420(1))
		{
			func_422(1);
		}
		if (func_420(2))
		{
			func_422(2);
		}
		if (func_420(4))
		{
			func_422(4);
		}
		if (!func_420(0))
		{
			func_421(0);
		}
	}
}

void func_135()
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
	if (!func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	Var1 = { func_423() };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_424(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_425(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_423() };
		}
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_426(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_426(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_426(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_426(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_426(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_426(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_426(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_426(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_426(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_426(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_426(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_426(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_426(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_426(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !func_427())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_428(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (func_429(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((func_429(24) && func_428(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!func_428(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (func_429(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

void func_136()
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

bool func_137(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_138(int iParam0)
{
	if (!func_430(iParam0))
	{
		return 0;
	}
	return Global_40.f_4942[iParam0 /*60*/].f_6;
}

void func_139(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_137(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

void func_140(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_137(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_141(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_430(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_140(iParam0, 32768, 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(PERSCHAR::_0xA00DF706C60173D1(func_431(iParam0, 1)), true);
		if (bParam2)
		{
			Global_1360165[iParam0 /*1157*/].f_126 = func_432(iParam0);
		}
	}
	else
	{
		func_139(iParam0, 32768, 1);
	}
}

bool func_142(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_430(iParam0))
		{
			return false;
		}
	}
	func_433(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_143(int iParam0, bool bParam1)
{
	if (func_137(iParam0))
	{
		if (bParam1)
		{
			func_434(iParam0, joaat("CONSUMABLE_MEDICINE"), 2);
			func_434(iParam0, joaat("CONSUMABLE_APPLE"), 1);
			if (func_320(iParam0, 4096, 1) && iParam0 != 14)
			{
				func_434(iParam0, joaat("CONSUMABLE_CHEWING_TOBACCO"), 1);
			}
			else
			{
				func_434(iParam0, joaat("CONSUMABLE_TONIC"), 1);
			}
		}
		else
		{
			func_434(iParam0, joaat("CONSUMABLE_MEDICINE"), 1);
			func_434(iParam0, joaat("AMMO_RIFLE_AMMOBOX"), 2);
			if (func_435())
			{
				func_434(iParam0, joaat("CONSUMABLE_CHEWING_TOBACCO"), 1);
				func_434(iParam0, joaat("AMMO_PISTOL_AMMOBOX"), 1);
			}
			else
			{
				func_434(iParam0, joaat("CONSUMABLE_WHISKEY"), 1);
			}
		}
	}
}

void func_144()
{
	Global_1360165[0 /*1157*/].f_65[0] = 2228322;
	Global_1360165[0 /*1157*/].f_65[1] = 1074065741;
	Global_1360165[0 /*1157*/].f_65[2] = 22528;
	Global_1360165[1 /*1157*/].f_65[0] = 144158;
	Global_1360165[1 /*1157*/].f_65[1] = 1073852744;
	Global_1360165[1 /*1157*/].f_65[2] = 16478;
	Global_1360165[2 /*1157*/].f_65[0] = 1074176226;
	Global_1360165[2 /*1157*/].f_65[1] = 1074647372;
	Global_1360165[2 /*1157*/].f_65[2] = 26624;
	Global_1360165[3 /*1157*/].f_65[0] = 176226;
	Global_1360165[3 /*1157*/].f_65[1] = 520524;
	Global_1360165[3 /*1157*/].f_65[2] = 2048;
	Global_1360165[4 /*1157*/].f_65[0] = 52432898;
	Global_1360165[4 /*1157*/].f_65[1] = 328;
	Global_1360165[4 /*1157*/].f_65[2] = 131072;
	Global_1360165[5 /*1157*/].f_65[0] = 131074;
	Global_1360165[5 /*1157*/].f_65[1] = 1074057548;
	Global_1360165[5 /*1157*/].f_65[2] = 20480;
	Global_1360165[6 /*1157*/].f_65[0] = 136487010;
	Global_1360165[6 /*1157*/].f_65[1] = 1175056840;
	Global_1360165[6 /*1157*/].f_65[2] = 18432;
	Global_1360165[7 /*1157*/].f_65[0] = 807575554;
	Global_1360165[7 /*1157*/].f_65[1] = 1074893256;
	Global_1360165[7 /*1157*/].f_65[2] = 16384;
	Global_1360165[8 /*1157*/].f_65[0] = 1617920;
	Global_1360165[8 /*1157*/].f_65[1] = 1210089800;
	Global_1360165[8 /*1157*/].f_65[2] = 16384;
	Global_1360165[9 /*1157*/].f_65[0] = 176130;
	Global_1360165[9 /*1157*/].f_65[1] = 1074123080;
	Global_1360165[9 /*1157*/].f_65[2] = 16384;
	Global_1360165[10 /*1157*/].f_65[0] = 6146;
	Global_1360165[10 /*1157*/].f_65[1] = 1073744232;
	Global_1360165[10 /*1157*/].f_65[2] = 16384;
	Global_1360165[11 /*1157*/].f_65[0] = 350896130;
	Global_1360165[11 /*1157*/].f_65[1] = 37696;
	Global_1360165[11 /*1157*/].f_65[2] = 1;
	Global_1360165[12 /*1157*/].f_65[1] = 268435456;
	Global_1360165[13 /*1157*/].f_65[0] = 2228226;
	Global_1360165[13 /*1157*/].f_65[1] = 1078251856;
	Global_1360165[13 /*1157*/].f_65[2] = 278528;
	Global_1360165[14 /*1157*/].f_65[0] = 2;
	Global_1360165[14 /*1157*/].f_65[1] = 1073774928;
	Global_1360165[14 /*1157*/].f_65[2] = 378752;
	Global_1360165[15 /*1157*/].f_65[0] = 2;
	Global_1360165[15 /*1157*/].f_65[1] = 1073844544;
	Global_1360165[15 /*1157*/].f_65[2] = 16384;
	Global_1360165[16 /*1157*/].f_65[0] = 2;
	Global_1360165[16 /*1157*/].f_65[1] = 1073779012;
	Global_1360165[16 /*1157*/].f_65[2] = 16384;
	Global_1360165[17 /*1157*/].f_65[0] = 2097154;
	Global_1360165[17 /*1157*/].f_65[1] = 323912;
	Global_1360165[18 /*1157*/].f_65[0] = 143362;
	Global_1360165[18 /*1157*/].f_65[1] = 25170248;
	Global_1360165[19 /*1157*/].f_65[0] = 2;
	Global_1360165[19 /*1157*/].f_65[1] = 1073852864;
	Global_1360165[19 /*1157*/].f_65[2] = 16384;
	Global_1360165[20 /*1157*/].f_65[0] = 98306;
	Global_1360165[20 /*1157*/].f_65[1] = 1073779008;
	Global_1360165[20 /*1157*/].f_65[2] = 16384;
	Global_1360165[21 /*1157*/].f_65[0] = 4098;
	Global_1360165[21 /*1157*/].f_65[1] = 1073746248;
	Global_1360165[21 /*1157*/].f_65[2] = 16384;
	Global_1360165[22 /*1157*/].f_65[0] = 2097154;
	Global_1360165[22 /*1157*/].f_65[1] = 1073852736;
	Global_1360165[22 /*1157*/].f_65[2] = 16384;
	Global_1360165[23 /*1157*/].f_65[0] = 135168;
	Global_1360165[23 /*1157*/].f_65[1] = 561498;
	Global_1360165[23 /*1157*/].f_65[2] = 262176;
	Global_1360165[24 /*1157*/].f_65[0] = 2097152;
	Global_1360165[24 /*1157*/].f_65[1] = 4194328;
	Global_1360165[24 /*1157*/].f_65[2] = 262144;
	Global_1360165[25 /*1157*/].f_65[0] = 2097152;
	Global_1360165[25 /*1157*/].f_65[1] = 24;
	Global_1360165[25 /*1157*/].f_65[2] = 262144;
	Global_1360165[26 /*1157*/].f_65[0] = 2;
	Global_1360165[26 /*1157*/].f_65[1] = 536872028;
	Global_1360165[26 /*1157*/].f_65[2] = 262144;
}

bool func_145(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_146(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_115() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
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
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_147(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_148(int iParam0, int iParam1)
{
	if (func_115() != -1)
	{
		return;
	}
	if (!func_145(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_149(int iParam0, int iParam1)
{
	if (func_115() != -1)
	{
		return;
	}
	if (!func_145(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_150()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Global_1879534.f_7288[iVar0] = 0;
		iVar0++;
	}
}

void func_151()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 240)
	{
		Global_1879534.f_211[iVar0 /*4*/] = 0;
		Global_1879534.f_211[iVar0 /*4*/].f_1 = 1;
		Global_1879534.f_211[iVar0 /*4*/].f_2 = 2;
		Global_1879534.f_211[iVar0 /*4*/].f_3 = 3;
		iVar0++;
	}
}

void func_152()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 350)
	{
		Global_1879534.f_1172[iVar0 /*2*/] = 0;
		Global_1879534.f_1172[iVar0 /*2*/].f_1 = 1;
		iVar0++;
	}
}

void func_153()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringCopy(&(Global_1879534.f_1873[iVar0 /*4*/]), "NOT_SETUP", 32);
		iVar0++;
	}
}

void func_154()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		StringCopy(&(Global_1879534.f_1878[iVar0 /*8*/]), "NOT_SETUP", 32);
		Global_1879534.f_1878[iVar0 /*8*/].f_4 = 0;
		Global_1879534.f_1878[iVar0 /*8*/].f_5 = 0;
		Global_1879534.f_1878[iVar0 /*8*/].f_6 = 0;
		Global_1879534.f_1878[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
}

void func_155()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_1879534.f_1897[iVar0 /*12*/] = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_1 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_2 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_3 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_4 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_6 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_7 = -1;
		Global_1879534.f_1897[iVar0 /*12*/].f_10 = 0;
		Global_1879534.f_1897[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_156()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_1879534.f_1887[iVar0 /*9*/] = 0;
		StringCopy(&(Global_1879534.f_1887[iVar0 /*9*/].f_1), "", 32);
		Global_1879534.f_1887[iVar0 /*9*/].f_5 = 0;
		Global_1879534.f_1887[iVar0 /*9*/].f_6 = -1;
		Global_1879534.f_1887[iVar0 /*9*/].f_7 = -1;
		Global_1879534.f_1887[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_157()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1770)
	{
		Global_1879534.f_1911[iVar0 /*3*/] = -1;
		Global_1879534.f_1911[iVar0 /*3*/].f_1 = 12;
		Global_1879534.f_1911[iVar0 /*3*/].f_2 = -1;
		iVar0++;
	}
	Global_1879534.f_7287 = 0;
}

void func_158()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		Global_1879534.f_7222[iVar0 /*2*/] = -1;
		Global_1879534.f_7222[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
}

void func_159()
{
}

void func_160(int iParam0)
{
	if (!iParam0 < Global_1879534.f_7300)
	{
		return;
	}
	if (!Global_1879534.f_7222[iParam0 /*2*/] == -1)
	{
		return;
	}
	Global_1879534.f_7222[iParam0 /*2*/] = Global_1879534.f_7287;
}

void func_161()
{
	int iVar0;

	iVar0 = 12;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1750917831;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(iVar0);
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1913176419;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = 0;
	if (iParam0 == -1)
	{
		iVar2 = 0;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 0);
		iVar2 = iParam0;
	}
	if (iParam1 == -1)
	{
		iVar3 = 0;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 1);
		iVar3 = iParam1;
	}
	if (iParam2 == -1)
	{
		iVar4 = 0;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 2);
		iVar4 = iParam2;
	}
	if (iParam3 == -1)
	{
		iVar5 = 1;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 3);
		iVar5 = iParam3;
	}
	if (iParam4 == -1)
	{
		iVar6 = 1;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 4);
		iVar6 = iParam4;
	}
	if (iParam5 == -1)
	{
		iVar7 = 1898;
	}
	else
	{
		MISC::SET_BIT(&iVar1, 5);
		iVar7 = iParam5;
	}
	func_438(&uVar8, iVar4, iVar3, iVar2, iVar5, iVar6, iVar7);
	func_439(Global_1879534.f_7288[iVar0], uVar8, iVar1, -1, -1);
	func_437(iVar0);
}

void func_163(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1535566683;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_164(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1978308683;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2001493029;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_166(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 99307713;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_167()
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1520384013;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
}

void func_168(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1360770031;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_169(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1738949208;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 672918768;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 2;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_171(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1181815586;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_172(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -471968486;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = func_441(bParam1, 1, 0);
	iVar2 = func_441(bParam2, 1, 0);
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar1, iVar2, 0);
	func_437(iVar0);
}

void func_173(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1472568760;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	fParam1 = (fParam1 * 100f);
	fParam2 = (fParam2 * 100f);
	iVar1 = BUILTIN::ROUND(fParam1);
	iVar2 = BUILTIN::ROUND(fParam2);
	if (iParam0 == 27)
	{
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar1, iVar2, 0);
	func_437(iVar0);
}

void func_174(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -756450532;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_175(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1331093620;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_176(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -259205396;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1815455941;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -914010892;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1536300574;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_180(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 477724652;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -346691420;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_182(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -549926405;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1449067653;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_184()
{
	int iVar0;

	if (Global_1934765.f_69.f_201 <= 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1934765.f_69.f_201 - 1))
	{
		if (Global_1934765.f_69[iVar0 /*2*/].f_1)
		{
			func_198(Global_1934765.f_69[iVar0 /*2*/]);
		}
		else
		{
			func_227(Global_1934765.f_69[iVar0 /*2*/]);
		}
		iVar0++;
	}
}

void func_185(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 794205136;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_186(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1156263964;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_187(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1598787124;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0), func_441(bParam2, 1, 0), 0);
	func_437(iVar0);
}

void func_188(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1438979859;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_189(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 147262072;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_190(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1673286084;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_191(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -663280148;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		MISC::SET_BIT(&iVar1, 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&iVar1, 1);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&iVar1, 2);
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar1, iParam4, 0);
	func_437(iVar0);
}

void func_192(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 901529234;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
	}
	func_440(Global_1879534.f_7288[iVar0], iParam0, iVar1);
	func_437(iVar0);
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	if (bParam4)
	{
		Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 363897013;
	}
	else
	{
		Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1225435693;
	}
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	if (iParam2 != -1)
	{
		while ((iParam2 % 24) > 0)
		{
			iParam3++;
			iParam2 = (iParam2 - 24);
		}
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_194(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2030110303;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_195(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 203794828;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_196(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1408274960;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_197(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -868169264;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_198(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1289504437;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_199(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1628808209;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_200(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1063874733;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_201(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 670944580;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_202(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -486436146;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 111818573;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_204()
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1093832731;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
}

void func_205()
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -159886710;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
}

void func_206(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 225795806;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_207(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 40566325;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_208(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2042718100;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_209(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1371030896;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_210(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1677774865;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(iVar0);
}

void func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	func_436(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1982716178;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iVar1;
	func_437(iVar0);
}

void func_212(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 995574226;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_213(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -718595174;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_214(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1729634664;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_215()
{
	int iVar0;

	iVar0 = 12;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1909997983;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(iVar0);
}

void func_216(int iParam0)
{
	if (!iParam0 < Global_1879534.f_7300)
	{
		return;
	}
	if (Global_1879534.f_7222[iParam0 /*2*/] == -1)
	{
		return;
	}
	if (!Global_1879534.f_7222[iParam0 /*2*/].f_1 == -1)
	{
		return;
	}
	if (Global_1879534.f_7222[iParam0 /*2*/] == Global_1879534.f_7287)
	{
		Global_1879534.f_7222[iParam0 /*2*/] = -1;
		return;
	}
	Global_1879534.f_7222[iParam0 /*2*/].f_1 = (Global_1879534.f_7287 - 1);
	if (Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1 == -1)
	{
		Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1 = Global_1879534.f_7222[iParam0 /*2*/];
	}
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 656468362;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	if (iParam0 == -1)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iParam1 == -1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = iParam1;
	}
	if (iParam2 == -1)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = iParam2;
	}
	if (iParam3 == -1)
	{
		iVar4 = 1;
	}
	else
	{
		iVar4 = iParam3;
	}
	if (iParam4 == -1)
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = iParam4;
	}
	if (iParam5 == -1)
	{
		iVar6 = 1898;
	}
	else
	{
		iVar6 = iParam5;
	}
	func_438(&uVar7, iVar3, iVar2, iVar1, iVar4, iVar5, iVar6);
	func_440(Global_1879534.f_7288[iVar0], uVar7, -1);
	func_437(iVar0);
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -915138989;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_219(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -148700515;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_220(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2121795512;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_221(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1053276381;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_222(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1120129944;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_223(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -508972844;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(iVar0);
}

void func_224(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2049944022;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(iVar0);
}

void func_225(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 759449782;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_226(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1378868385;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_227(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 26902781;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_228(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -780657756;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_229(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 634895793;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_230(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1050963831;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_231(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -90803914;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_232(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 47963769;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_233(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1015095530;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_234(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 939785963;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_235(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2093459088;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1210875743;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	if (iParam0 < 0)
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
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_237(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	func_436(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -964850613;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iVar1;
	func_437(iVar0);
}

void func_238(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 498793617;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0), iParam2, 0);
	func_437(iVar0);
}

void func_239(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1785731347;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_240(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -217347738;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_241(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1879534.f_7287)
	{
		if (Global_1879534.f_1911[iVar1 /*3*/] == 531432813)
		{
			iVar2 = Global_1879534.f_1911[iVar1 /*3*/].f_2;
			iVar3 = Global_1879534.f_211[iVar2 /*4*/];
			if (iVar3 == iParam0)
			{
				return;
			}
		}
		iVar1++;
	}
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 531432813;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	iVar4 = 0;
	if (bParam1)
	{
		iVar4 = 1;
	}
	func_439(Global_1879534.f_7288[iVar0], iParam0, iVar4, -1, -1);
	func_437(iVar0);
}

void func_242(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1984622930;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, -1, -1);
	func_437(iVar0);
}

void func_243(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -138866642;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam1, iParam0);
	func_437(iVar0);
}

void func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	func_436(iVar0);
	iVar1 = iParam0;
	iVar1 = (iVar1 + (iParam1 * 1000000));
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1878191811;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iVar1;
	func_437(iVar0);
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1805087304;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_246(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1523883609;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_247(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 987244216;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_248(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2025667422;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_249(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -566605714;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_250(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 442105888;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1083639171;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_252(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1810366898;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_253(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 891989563;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_254(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1281917784;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_255(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 630069176;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_256(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1271429659;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_257(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1940826795;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_258(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2055336839;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1509183597;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, -1);
	func_437(iVar0);
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1941172569;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_261(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1883692561;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_262(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1672441969;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_263(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 460788415;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_264(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 7411042;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, func_441(bParam1, 1, 0));
	func_437(iVar0);
}

void func_265(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 644587471;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_266(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -716094127;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_267(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -391651599;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam1, iParam2, iParam3);
	func_437(iVar0);
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 1;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -838803174;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_439(Global_1879534.f_7288[iVar0], iParam0, iParam2, iParam1, -1);
	func_437(iVar0);
}

void func_269(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -801023198;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_270(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -289754349;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_271(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 242535924;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_272(bool bParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -845953794;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = func_441(bParam0, 1, 0);
	func_437(0);
}

void func_273()
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -401276712;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
}

void func_274()
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1398429376;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
}

void func_275()
{
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2038286720;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
}

void func_276(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -42848759;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -990335083;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 2;
	func_436(iVar0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1260617938;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = iVar0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[iVar0];
	func_440(Global_1879534.f_7288[iVar0], iParam0, iParam1);
	func_437(iVar0);
}

void func_279(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1831856550;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_280(int iParam0)
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1440757252;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
}

void func_281(var uParam0)
{
	struct<74> Var0;

	Var0.f_36 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
	Var0.f_38 = 1;
	Var0.f_65 = 1117126656;
	Var0.f_66 = 1120403456;
	Var0.f_68 = 45000;
	*uParam0 = { Var0 };
}

void func_282(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, char* sParam6, vector3 vParam7, int iParam10, int iParam11)
{
	if (!func_442(iParam0))
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam2) && func_115() == -1)
	{
		return;
	}
	if (func_443(vParam7, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/] = iParam1;
	StringCopy(&(Global_1835011[iParam0 /*74*/].f_3), sParam2, 32);
	Global_1835011[iParam0 /*74*/].f_68 = iParam11;
	StringCopy(&(Global_1835011[iParam0 /*74*/].f_8), sParam3, 8);
	Global_1835011[iParam0 /*74*/].f_1 = func_288(iParam0, iParam1, 1, 0);
	if (!func_289(Global_1835011[iParam0 /*74*/].f_1))
	{
		return;
	}
	if (func_334(Global_1835011[iParam0 /*74*/].f_1) == -1)
	{
		func_444(Global_1835011[iParam0 /*74*/].f_1, 0);
	}
	Global_1835011[iParam0 /*74*/].f_29 = iParam4;
	Global_1835011[iParam0 /*74*/].f_18 = { vParam7 };
	Global_1835011[iParam0 /*74*/].f_21 = func_290(Global_1835011[iParam0 /*74*/].f_18, 1);
	Global_1835011[iParam0 /*74*/].f_26 = iParam10;
	func_445(iParam0, sParam5);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6) && SCRIPTS::DOES_SCRIPT_EXIST(sParam6))
	{
		StringCopy(&(Global_1835011[iParam0 /*74*/].f_12), sParam6, 32);
		Global_1835011[iParam0 /*74*/].f_17 = 1;
	}
	Global_1835011[iParam0 /*74*/].f_30 = 0;
	func_285(iParam0, 1117126656 /* Float: 75f */, 1120403456 /* Float: 100f */, 1128792064 /* Float: 200f */);
}

void func_283(int iParam0, char* sParam1)
{
	if (!func_442(iParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam1))
	{
		return;
	}
	StringCopy(&(Global_1835011[iParam0 /*74*/].f_22), sParam1, 32);
}

void func_284(int iParam0, int iParam1)
{
	if (!func_442(iParam0))
	{
		return;
	}
	if (!func_137(iParam1))
	{
		return;
	}
	func_446(&(Global_1835011[iParam0 /*74*/].f_30), BUILTIN::SHIFT_LEFT(1, iParam1));
}

void func_285(int iParam0, float fParam1, float fParam2, int iParam3)
{
	if (!func_442(iParam0))
	{
		return;
	}
	if (fParam2 <= fParam1)
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_65 = fParam1;
	Global_1835011[iParam0 /*74*/].f_66 = fParam2;
	Global_1835011[iParam0 /*74*/].f_67 = iParam3;
}

bool func_286(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_287(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

int func_288(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_447())
	{
		iVar2 = func_447();
	}
	iVar5 = func_448(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_449(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_449(iVar6) == 0)
			{
				return func_450(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_449(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_449(iVar6) == 0)
			{
				return func_450(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_450(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_289(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_290(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_451();
	if (func_294(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_452(vParam0, iParam3);
}

void func_291(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_292(int iParam0)
{
	func_453(&(Global_1392915[iParam0 /*12*/]));
	func_454(&(Global_1392915.f_121[iParam0 /*20*/]));
}

bool func_293(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_294(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_295(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_94(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_296(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}
}

int func_297(int iParam0)
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

int func_298(int iParam0)
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

int func_299(int iParam0)
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

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_455(iParam0);
	iVar3 = func_456(iParam0);
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
				iVar1 = func_457();
				func_458(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_459(iParam0, 1);
			if (func_460(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_461(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_462(1, iParam0);
				}
				else
				{
					func_463(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_301()
{
	func_303(1591451572);
	func_303(-349064220);
	func_303(1776302352);
	func_303(-523522517);
}

void func_302(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_464(iParam0, 1);
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

void func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_464(iParam0, 1);
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

void func_305(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_115() == 0)
	{
		return;
	}
	if (func_465(128))
	{
		return;
	}
	if (!func_466(iParam0))
	{
		return;
	}
	if (func_467(iParam0, 32))
	{
		return;
	}
	func_468(iParam0, 32);
	func_469(&Global_1935630, 8192);
	func_471(func_470(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_472(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_471(func_470(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_471(func_470(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_471(func_470(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_471(func_470(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_471(func_470(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_471(func_470(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
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
		func_468(iParam0, 64);
	}
}

void func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		iVar1 = func_473(iVar0);
		if (iVar1 != -1)
		{
			if (func_474(iVar1) != -1 && iVar1 != func_475())
			{
				if (iVar0 == Global_1934051.f_33 && func_476(iVar0))
				{
					func_477(iVar0, 7148155);
					func_478(&(Global_1934051.f_33), 0);
				}
				iVar2 = func_479(iVar1, 19);
				if (iVar2 != -1)
				{
					if (iVar0 == Global_1914319.f_15936[iVar2 /*6*/] && func_476(iVar0))
					{
						if (Global_1914319.f_15936[iVar2 /*6*/].f_5)
						{
							Global_1914319.f_15936[iVar2 /*6*/].f_5 = 0;
						}
						func_478(&(Global_1914319.f_15936[iVar2 /*6*/]), 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_475();
	if (func_294(iVar0))
	{
		iVar1 = func_298(iVar0);
		if (func_293(iVar1))
		{
			Global_40.f_9384[iVar1 /*2*/] = (Global_40.f_9384[iVar1 /*2*/] - Global_40.f_9384[iVar1 /*2*/] & 1);
		}
	}
	iVar2 = func_297(iParam0);
	iVar3 = func_298(iVar2);
	if (func_293(iVar3))
	{
		Global_40.f_9384[iVar3 /*2*/] |= 1;
		Global_40.f_6 = { Global_1395601.f_5[iVar3 /*28*/].f_2 };
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
	}
}

void func_308(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_480(&Global_0, 8);
	}
	if (!func_481() || func_115() != -1)
	{
		return;
	}
	func_480(&Global_0, 1);
}

void func_309(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_297(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_482(iParam0);
	func_483(iParam0);
	func_318();
	if (iVar0 == 9)
	{
		func_484(-524145696, 0, 0);
	}
}

void func_310(int iParam0)
{
	func_485();
	switch (iParam0)
	{
		case 0:
			func_486(-1303.82f, 2431.232f, 307.1254f, 254.7021f, 2);
			func_486(-1331.61f, 2479.874f, 308.7661f, 343.4772f, 1);
			func_486(-1367.155f, 2401.237f, 305.9231f, 182.5857f, 0);
			break;
		case 1:
			func_486(-40.4062f, 24.7958f, 92.5989f, 345.8244f, 2);
			func_486(-46.6053f, 49.3195f, 89.4332f, 32.7929f, 2);
			func_486(-89.1265f, 74.3389f, 88.5412f, 341.7615f, 1);
			func_486(-117.2523f, 26.8954f, 84.9916f, 71.3425f, 1);
			func_486(-92.892f, 50.1228f, 87.8695f, 45.8778f, 1);
			func_486(-13.6112f, -0.4862f, 101.6951f, 255.2034f, 2);
			func_486(-32.3882f, -18.9331f, 103.6418f, 237.7177f, 3);
			func_486(-19.8908f, -62.5598f, 103.873f, 267.298f, 3);
			func_486(-33.2324f, -103.5739f, 101.7936f, 255.1129f, 3);
			func_486(-69.4097f, -128.0305f, 97.0682f, 221.4977f, 3);
			func_486(-79.3456f, -103.7585f, 91.473f, 66.6098f, 3);
			func_486(-134.3901f, -69.9172f, 90.3402f, 108.8014f, 0);
			func_486(-163.3076f, -54.9202f, 89.2085f, 130.3788f, 0);
			func_486(-7.8651f, 34.202f, 96.8284f, 252.726f, 2);
			break;
		case 2:
			func_486(773.3724f, -1152.694f, 46.0144f, 287.6862f, 1);
			func_486(678.071f, -1106.928f, 50.6427f, 308.8809f, 1);
			func_486(694.5107f, -1273.256f, 42.5974f, 276.0894f, 3);
			func_486(624.2226f, -1093.59f, 44.0105f, 324.7204f, 1);
			func_486(695.23f, -1204.24f, 44.84f, -75.427f, 0);
			break;
		case 3:
			func_486(1814.452f, -1812.884f, 47.3854f, 46.0618f, 0);
			func_486(1844.125f, -1770.289f, 44.872f, 354.3456f, 0);
			func_486(1774.591f, -1878.943f, 45.1128f, 1.1527f, 0);
			func_486(1751.868f, -1959.416f, 47.0387f, 100.6328f, 3);
			func_486(1818.659f, -2009.734f, 43.2796f, 94.403f, 3);
			break;
		case 6:
			func_486(2372.828f, 1302.302f, 108.3737f, 193.8477f, 2);
			func_486(2299.087f, 1370.095f, 100.6253f, 148.7151f, 1);
			func_486(2325.401f, 1301.158f, 95.0156f, 220.5325f, 2);
			break;
	}
}

void func_311(var uParam0, int iParam1, bool bParam2)
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

void func_312(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_487())
	{
		if (func_488(255))
		{
			if (!func_489(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_294(Global_1894899.f_2) && func_490(Global_1894899.f_2))
		{
			func_491(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_492(16);
			}
		}
		else if (func_294(Global_1894899.f_2) && !func_467(Global_1894899.f_2, 2))
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
		func_493(16);
		func_494();
		if (bVar0)
		{
			func_493(1);
		}
	}
}

void func_313()
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

void func_314()
{
	func_495(32);
}

void func_315(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_496(&(uParam0->f_1[iVar0 /*5*/]));
		iVar0++;
	}
	uParam0->f_62 = 0;
}

void func_316(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (func_497(iParam0, 0, iParam1, &(Global_40.f_4283.f_440[0 /*63*/]), 0, 1))
	{
		return;
	}
	if (func_497(iParam0, 0, iParam1, &(Global_40.f_4283.f_440[1 /*63*/]), 0, 1))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = func_498(&(Global_40.f_4283.f_440[0 /*63*/]));
		}
		return;
	}
	func_499(&(Global_40.f_4283.f_440));
	func_497(iParam0, 0, iParam1, &(Global_40.f_4283.f_440[1 /*63*/]), 0, 1);
}

void func_317(bool bParam0)
{
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(-1618603322);
		func_500(8388608);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1618603322);
		func_501(8388608);
	}
}

void func_318()
{
	Global_1357549 = 0;
	func_500(1);
}

void func_319()
{
	var uVar0;
	var uVar1;

	Global_1357549.f_1886 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Tithing");
	Global_1357549.f_1886.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1357549.f_1886, "Supplies", "");
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1886, "CampFunds");
	func_502(uVar0, &(Global_1357549.f_1886.f_2));
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1886, "PlayerCash");
	func_502(uVar1, &(Global_1357549.f_1886.f_4));
}

bool func_320(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_430(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_321(int iParam0)
{
	func_140(iParam0, 4, 1);
}

void func_322(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam0 < 0 || iParam0 > 95)
	{
		return;
	}
	if (!Global_40 || bParam4)
	{
		func_503(iParam0, iParam3);
	}
	Global_40.f_7157[iParam0 /*3*/].f_1 = iParam1;
	Global_40.f_7157[iParam0 /*3*/].f_2 = iParam2;
}

void func_323(bool bParam0)
{
	if (bParam0 == func_504())
	{
		return;
	}
	if (bParam0)
	{
		func_505(81053684);
		if (!func_507(func_506(0)))
		{
			func_505(-525676072);
		}
	}
	else
	{
		func_508(81053684);
		func_508(-525676072);
	}
	Global_1946804.f_2792 = bParam0;
}

void func_324(var uParam0, var uParam1, char[32] cParam2, struct<14> Param10)
{
	func_509(uParam0, uParam1, cParam2, Param10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_510(15), Param10.f_10);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_510(17), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(19), Param10.f_12);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(3), Param10.f_13);
}

void func_325(var uParam0, var uParam1, char[32] cParam2, struct<21> Param10)
{
	func_509(uParam0, uParam1, cParam2, Param10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_510(15), &(Param10.f_10));
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(21), Param10.f_18);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(22), Param10.f_19);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(23), Param10.f_20);
}

void func_326(var uParam0, var uParam1, char[32] cParam2, struct<28> Param10)
{
	func_509(uParam0, uParam1, cParam2, Param10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_510(15), &(Param10.f_10));
	if (Param10.f_24)
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_HASH_ARRAY(*uParam0, func_510(32));
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_STRING_ARRAY(*uParam0, func_510(32));
	}
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(30), Param10.f_18);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(31), Param10.f_19);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(33), Param10.f_21);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_510(35), Param10.f_22);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_510(34), Param10.f_22);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(36), Param10.f_25);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(37), Param10.f_26);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(38), Param10.f_27);
}

void func_327(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5836[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, sParam3, iParam4);
}

void func_328(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5848[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, sParam3, iParam4);
}

void func_329(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5859[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, sParam3, sParam4);
}

void func_330()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar9;

	if (func_115() == -1)
	{
		Var2 = 249428082;
	}
	else
	{
		Var2 = -525029060;
	}
	Var2.f_1 = -1781055500;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, 1205212054))
		{
		}
		else
		{
			iVar9 = func_511(iVar1);
			if (iVar9 < 0 || iVar9 >= 54)
			{
			}
			else if (!DATAFILE::_0x52FC26D2D2FC2987(&iVar1, &Var2, 356562968))
			{
			}
			else
			{
				Global_1946804.f_2[iVar9] = iVar1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_512(iVar0, func_115() == -1);
		iVar0++;
	}
}

void func_331()
{
	int iVar0;

	Global_1946804.f_850 = 0;
	Global_1946804.f_855 = 0;
	Global_1946804.f_856 = 0;
	Global_1946804.f_852 = 0;
	Global_1946804.f_853 = 0;
	Global_1946804.f_854 = 0;
	Global_1946804.f_851 = 0;
	iVar0 = 0;
	while (iVar0 < 37)
	{
		Global_1946804.f_529[iVar0] = 0;
		iVar0++;
	}
	func_513(8);
	func_513(16);
}

bool func_332(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_333(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_371(iParam0))
	{
		case -2061583405:
			bVar0 = func_514(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_514(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_514(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_514(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_514(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_514(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_515();
	}
	if (bParam1)
	{
		func_347(0, 0);
	}
}

int func_334(int iParam0)
{
	if (!func_289(iParam0))
	{
		return -1;
	}
	return func_516(iParam0);
}

int func_335(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_517(iParam0, 1);
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
			func_518(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_418(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_519(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_520(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_520(iParam0, 0, 0) - iParam1) < 0)
		{
			func_335(iParam0, func_520(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_521(iParam0) == joaat("WEAPON"))
	{
		if (!func_522(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_523(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_524(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_518(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_525(iParam0, iParam1);
	return 1;
}

bool func_336(int iParam0)
{
	switch (func_371(iParam0))
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

int func_337(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_526(iParam0, 1, 0) };
	return func_527(Var0.f_4);
}

int func_338(int iParam0, int iParam1)
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

int func_339()
{
	return Global_1946804.f_1;
}

Vector3 func_340(int iParam0, int iParam1)
{
	if (func_115() == -1)
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

int func_341(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_340(iParam0, iParam1) };
	return vVar0.x;
}

void func_342(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_343(var uParam0, int iParam1)
{
	int iVar0;

	if (func_115() == -1)
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

void func_344()
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

bool func_345(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 >= 1 && !func_528(2, iVar0))
		{
			(*uParam0)[iVar0] = 2;
		}
		else if (func_348(uParam0[iVar0], &(Global_26796.f_26[iVar0 /*120*/].f_1)))
		{
			(*uParam0)[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = 1;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_346(var uParam0)
{
	int iVar0;

	if ((*uParam0)[0] == 1)
	{
		func_349(&(Global_26796.f_26[0 /*120*/].f_1), 0);
	}
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if ((*uParam0)[iVar0] != 1)
		{
		}
		else
		{
			func_529(2, iVar0, 6);
			func_333(func_530(iVar0), 1, 1);
			func_523(func_530(iVar0), 1, -142743235, 0, 0);
			if (Global_1946804.f_1497 == func_531(iVar0) || Global_40.f_7729 == iVar0)
			{
				if (Global_1946804.f_1 == 1160113249)
				{
					Global_40.f_7729 = 62;
				}
				else
				{
					Global_40.f_7729 = 6;
				}
			}
		}
		iVar0++;
	}
}

void func_347(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(0);
	}
	if (bParam0)
	{
		func_532(8);
		func_532(512);
	}
	else
	{
		func_532(8);
		func_532(16);
	}
}

bool func_348(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (!func_533(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2))
		{
		}
		else if ((uParam1->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/] || uParam1->f_1[iVar0 /*3*/] == 0) || !func_533(&(uParam1->f_1[iVar0 /*3*/]), 2))
		{
			if (func_535(func_534(iVar0, 1)))
			{
				*uParam0 = 1;
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_349(var uParam0, bool bParam1)
{
	var uVar0;
	int iVar1;

	Global_1347477.f_184 = -1;
	Global_1347477.f_185 = 0;
	func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	if (Global_1946804.f_1 == 1160113249)
	{
		func_100(&(Global_1946804.f_1378), 1105329772, &uVar0, 1, 0, 0, 0);
		Global_1946804.f_1378.f_1[27 /*3*/] = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
	}
	else
	{
		func_100(&(Global_1946804.f_1378), 2020890174, &uVar0, 1, 0, 0, 0);
		if (bParam1)
		{
			func_100(&(Global_1946804.f_1378), -1061007984, &uVar0, 1, 0, 0, 0);
		}
		Global_1946804.f_1378.f_1[27 /*3*/] = joaat("CLOTHING_SP_OFFHAND_000");
	}
	func_536(Global_40.f_7731[0 /*5*/], Global_40.f_7731[1 /*5*/], Global_40.f_7731[2 /*5*/]);
	func_537(Global_40.f_7748.f_1);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (!func_533(&(Global_1946804.f_1378.f_1[iVar1 /*3*/]), 2))
		{
		}
		else
		{
			Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
			uParam0->f_1[iVar1 /*3*/].f_2 = (uParam0->f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
			if (!func_535(func_534(iVar1, 1)))
			{
			}
			else
			{
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/] || uParam0->f_1[iVar1 /*3*/] == 0)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_1378.f_1[iVar1 /*3*/];
				}
				switch (func_534(iVar1, 1))
				{
					case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
					case joaat("MP_COMPONENT_TYPE_HAIR"):
					case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
					case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
						uParam0->f_1[iVar1 /*3*/].f_1 = Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1;
						break;
				}
			}
		}
		iVar1++;
	}
}

int func_350(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_339();
	}
	if (func_115() == -1)
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

int func_351(int iParam0)
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

void func_352(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_533(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_534(iVar0, 1);
			if (func_538(iVar0, iParam1))
			{
				vVar4 = { func_340(iVar0, -1) };
				if ((vVar4.x != Global_1946804.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_539(iVar7, 4))
				{
					func_540(iVar7, 4, 6);
				}
			}
			else
			{
				func_541(iVar7, 4, 6);
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

bool func_353(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804.f_964.f_2 = 0;
	if (func_115() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_542(&(Global_1946804.f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804.f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_354(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

void func_355(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_371(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_538(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_543(iVar1, iVar3);
		}
	}
	if (func_544(-1586649372) && func_538(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_543(iVar1, iVar3);
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
						func_543(iVar1, iVar3);
					}
				}
			}
			func_545(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_545(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_543(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_545(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_545(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_545(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_545(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_543(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_371(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_546(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_371(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_547(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
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
						func_543(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_546(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_547(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_543(iVar1, iVar3);
					}
				}
			}
			switch (func_371(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_371(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_371(uParam0->f_1[iVar1 /*3*/]) || func_547(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_543(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

void func_356(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_357()
{
	if (func_115() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

bool func_358(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_350(0);
	iVar1 = 0;
	func_542(&(Global_1946804.f_964), iVar0, iParam0, 0, 0, 0);
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

int func_359(int iParam0)
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

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_361(int iParam0, bool bParam1, int iParam2)
{
	func_363(&(Global_1946804.f_1378), iParam0);
	func_364(2, iParam0, 6);
	if (bParam1)
	{
		func_347(0, 1);
	}
}

void func_362(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

void func_363(var uParam0, int iParam1)
{
	int iVar0;

	if (func_115() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_342(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_548(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_364(int iParam0, int iParam1, int iParam2)
{
	if (func_115() == -1)
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

int func_365(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	func_549();
	if (!func_550(&(Global_1946804.f_1378), &iVar0, iParam0, -1, 0, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7731[0 /*5*/];
	}
	if (iParam3 == -1)
	{
		iParam3 = Global_40.f_7731[1 /*5*/];
	}
	if (iParam4 == -1)
	{
		iParam4 = Global_40.f_7731[2 /*5*/];
	}
	func_536(iParam2, iParam3, iParam4);
	if ((iParam2 == 0 && iParam3 == 0) && iParam4 == 0)
	{
		func_551(iParam1, joaat("MPC_MOD_HEAD_SUPER_CLEAN_SHAVE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	else
	{
		func_551(iParam1, joaat("BASE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_552(1, 96, 0, 0, 0);
		}
		else
		{
			func_552(1, 96, 1, iParam1, 0);
		}
	}
	func_362(1);
	return 1;
}

void func_366()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_362(0);
	func_553(0, Global_1946804.f_2653, 0);
	func_553(1, Global_1946804.f_2654, 0);
	func_553(2, Global_1946804.f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_1946804.f_1378.f_1[iVar0 /*3*/] };
	Global_1946804.f_1497.f_1[iVar1 /*3*/] = { Global_1946804.f_1378.f_1[iVar1 /*3*/] };
	Global_1946804.f_1497.f_1[iVar2 /*3*/] = { Global_1946804.f_1378.f_1[iVar2 /*3*/] };
	Global_1946804.f_1497.f_1[iVar3 /*3*/] = { Global_1946804.f_1378.f_1[iVar3 /*3*/] };
	func_554();
	func_555();
}

int func_367()
{
	if (func_339() == 1160113249)
	{
		return -2091943191 /* GXTEntry: "Left Parted" */;
	}
	return 933586678 /* GXTEntry: "Right Parted" */;
}

int func_368(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_556(iParam0, 0, 1, 1, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	func_537(iParam2);
	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_552(1, 64, 0, 0, 0);
		}
		else
		{
			func_552(1, 64, 1, iParam1, 0);
		}
	}
	func_362(1);
	return 1;
}

void func_369()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = Global_1946804.f_1378.f_1[iVar0 /*3*/];
	if (!func_557() && func_558(iVar1))
	{
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = func_559(iVar1);
	}
	func_362(0);
	Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_1946804.f_1378.f_1[iVar0 /*3*/] };
	func_560();
	Global_40.f_7748.f_2 = func_561();
	func_562(Global_1946804.f_2656, 0);
	func_563();
}

void func_370(int iParam0)
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
	Var2 = { func_564(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_565(&Var2, &iVar0, &iVar1, 0))
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
		func_566(iVar0);
	}
}

int func_371(int iParam0)
{
	struct<2> Var0;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_372(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_567(iParam2, *uParam0);
	func_568(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_373(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_526(iParam0, 0, 0) };
	Var5 = { func_569(iParam0, Var0, Var0.f_4, 0) };
	if (func_570(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_571(0), &Var5, iParam1);
	return true;
}

void func_374(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_526(iParam0, 0, 0) };
	Var5 = { func_569(iParam0, Var0, Var0.f_4, 0) };
	if (func_570(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_571(0), &Var5, bParam1);
}

void func_375(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 - (Global_1310750.f_16035 && iParam0));
}

void func_376(var uParam0)
{
	struct<30> Var0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_34 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	StringCopy(&(uParam0->f_40), "", 32);
	uParam0->f_44 = 0f;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_48 = 0;
	uParam0->f_54 = 0f;
	uParam0->f_55 = 0f;
	uParam0->f_56 = 0f;
	uParam0->f_57 = 0f;
	uParam0->f_58 = 0f;
	uParam0->f_59 = 0f;
	uParam0->f_60 = 0f;
	uParam0->f_110 = -1;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = 8;
	Var0.f_4.f_1.f_1 = -1;
	Var0.f_4.f_1.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	uParam0->f_4 = { Var0 };
}

void func_377(int iParam0)
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

bool func_378(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

bool func_379(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_380(int iParam0)
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

void func_381(bool bParam0)
{
	if (bParam0)
	{
		Global_1310750.f_16036++;
	}
	else
	{
		Global_1310750.f_16036 = (Global_1310750.f_16036 - 1);
		if (Global_1310750.f_16036 < 0)
		{
			Global_1310750.f_16036 = 0;
		}
	}
}

int func_382(int iParam0)
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

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_384(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_385(int iParam0)
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

void func_386(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 3:
			Global_1310750[iParam0 /*111*/].f_64[0] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[2] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[11] = iParam2;
			break;
		case 0:
			Global_1310750[iParam0 /*111*/].f_64[1] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[7] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[6] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[12] = iParam2;
			break;
		case 2:
			Global_1310750[iParam0 /*111*/].f_64[3] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[10] = iParam2;
			break;
		case 1:
			Global_1310750[iParam0 /*111*/].f_64[4] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[9] = iParam2;
			break;
		case 4:
			Global_1310750[iParam0 /*111*/].f_64[8] = iParam2;
			break;
		case 5:
			Global_1310750[iParam0 /*111*/].f_64[13] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[14] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[15] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[16] = iParam2;
			break;
	}
}

void func_387(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_388(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

bool func_389(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_390(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

bool func_391(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return func_147(Global_1310750[iParam0 /*111*/].f_35, iParam1);
}

bool func_392(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	return func_572(iParam0, 2, 1);
}

void func_393(int iParam0, int iParam1)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115() != -1)
	{
		Global_36638[iParam0] = (Global_36638[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
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
		if (func_573())
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
		iVar0 = func_574(Global_1898164.f_1[0 /*5*/]);
		if (func_286(iVar0) && func_575(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_289(Global_1898164.f_1[0 /*5*/]))
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

void func_395(int iParam0)
{
	Global_1911914[iParam0 /*9*/] = 0;
}

bool func_396(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LSM_WOMANCRY");
		case 1:
			return joaat("LSM_HUNTER");
		case 2:
			return joaat("LSM_CATFISH");
		case 3:
			return joaat("LSM_UNDERTAKER");
		case 5:
			return joaat("LSM_MINER_1");
		case 6:
			return joaat("LSM_MINER_2");
		case 4:
			return joaat("LSM_SOLDIER_1");
		case 7:
			return -861789942;
		case 8:
			return joaat("LSM_SELL_HORSE_1");
	}
	return 0;
}

void func_398(int iParam0, int iParam1)
{
	if (func_396(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

void func_399(int iParam0, int iParam1)
{
	if (func_396(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] - (Global_40.f_9052.f_11[iParam0] && iParam1));
	}
}

void func_400(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_401(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_402(int iParam0)
{
	if (Global_1415419.f_19[iParam0 /*12*/] != 0)
	{
		return true;
	}
	return false;
}

bool func_403(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_404(var uParam0)
{
	func_576(uParam0, 0f);
}

bool func_405(var uParam0)
{
	return func_403(*uParam0, 2);
}

int func_406()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 26:
			return joaat("ST_QUARTERMASTER");
		case 27:
			return joaat("ST_HORSE_TRAINER");
		case 28:
			return joaat("ST_BLACKSMITH");
		case 29:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 30:
			return joaat("ST_COACH");
		case 31:
			return -732027686;
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 15:
			return joaat("ST_BANK");
		case 17:
			return joaat("ST_BAIT");
		case 33:
			return joaat("ST_BARTENDER");
		case 12:
			return joaat("ST_MARKET");
		case 13:
			return joaat("ST_FRENCH_MARKET");
		case 14:
			return -1227686818;
		case 18:
			return joaat("ST_TRAPPER");
		case 19:
			return joaat("ST_PEARSON");
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
		case 20:
			return joaat("ST_HOTEL");
		case 32:
			return joaat("ST_WILDERNESS_SUPPLIES");
		case 34:
			return joaat("ST_HANDHELD");
		case 23:
			return joaat("ST_WEAPON_MOD_STORE");
		case 24:
			return joaat("ST_CLOTHING");
		case 25:
			return joaat("ST_CAMP_SHAVING");
		case 21:
			return joaat("ST_PHOTO_STUDIO");
		default:
			break;
	}
	return 0;
}

void func_408(var uParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(func_577(uParam0), true);
}

int func_409(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WEATHER_GROUP_CH2_END"):
			return 3;
		case joaat("WEATHER_GROUP_CH2_MID"):
			return 4;
		case joaat("WEATHER_GROUP_CH3_DROUGHT"):
			return 6;
		case joaat("WEATHER_GROUP_GOOD_VISIBILITY"):
			return 8;
		case joaat("WEATHER_GROUP_GOOD"):
			return 7;
		case joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"):
			return 10;
		case joaat("WEATHER_GROUP_IN_CAMP"):
			return 9;
		case 0:
			return 13;
		case 15:
			return 14;
		case joaat("WEATHER_GROUP_BAD_VISIBILITY"):
			return 2;
		case joaat("WEATHER_GROUP_NO_PRECIPITATION"):
			return 11;
		case joaat("WEATHER_GROUP_ATMOSPHERIC"):
			return 0;
		case joaat("WEATHER_GROUP_THUNDERSTORM"):
			return 12;
		case joaat("WEATHER_GROUP_BAD"):
			return 1;
		case joaat("WEATHER_GROUP_CH2_START"):
			return 5;
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

int func_410(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
			return 2;
		case -1439599467:
			return 23;
		case joaat("SANDSTORM"):
			return 12;
		case joaat("THUNDER"):
			return 19;
		case joaat("OVERCAST"):
			return 9;
		case joaat("FOG"):
			return 3;
		case joaat("SHOWER"):
			return 13;
		case joaat("SNOW"):
			return 15;
		case joaat("HIGHPRESSURE"):
			return 6;
		case 0:
			return 22;
		case joaat("SLEET"):
			return 14;
		case joaat("OVERCASTDARK"):
			return 10;
		case joaat("SNOWLIGHT"):
			return 17;
		case joaat("BLIZZARD"):
			return 0;
		case joaat("WHITEOUT"):
			return 21;
		case joaat("CLOUDS"):
			return 1;
		case joaat("HURRICANE"):
			return 7;
		case joaat("RAIN"):
			return 11;
		case joaat("MISTY"):
			return 8;
		case joaat("SUNNY"):
			return 18;
		case joaat("SNOWCLEARING"):
			return 16;
		case joaat("HAIL"):
			return 5;
		case joaat("THUNDERSTORM"):
			return 20;
		case joaat("GROUNDBLIZZARD"):
			return 4;
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

void func_411(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_414(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_412();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_578(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_95(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_335(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		func_580(146323340, func_579());
		Var0 = { func_581() };
		if (func_582(&Var0) == -1387633835)
		{
			func_583(&Var0);
			func_584(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		func_585(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_586(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				func_587(iVar6, iVar7);
				func_588(iVar6, iVar8);
				func_589(iVar6, iVar9);
				func_590(iVar6, 0);
				if (func_591(iVar6))
				{
					func_592(iVar6);
				}
				iVar10 = func_593(iVar8);
				func_594(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_412()
{
	if (!func_595(-1898635967, func_579(), 1))
	{
		return 0;
	}
	if (func_596())
	{
		if (!func_595(146323340, func_579(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_413()
{
	func_597(joaat("WEAPON_PISTOL_VOLCANIC"));
	func_597(joaat("WEAPON_SHOTGUN_PUMP"));
	func_597(joaat("WEAPON_RIFLE_VARMINT"));
}

int func_414(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!func_598(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_599(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_600(iParam0, bParam2);
	iVar2 = 0;
	if (func_520(iParam0, 0, 0) == 0)
	{
		if (func_601(iParam0))
		{
			iVar5 = func_602(iParam0);
			iVar6 = func_603(iVar5);
			iVar7 = func_604(iVar6) + 1;
			func_605(iVar5);
			if (func_606(38))
			{
				func_607(483, 0);
			}
			else
			{
				func_607(482, 0);
			}
			if (iVar7 == func_608(iVar6))
			{
				func_414(func_609(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_481() && func_610(4))
				{
					if (func_481() && (func_611(38) || func_606(38)))
					{
						func_613(38, func_609(iVar6), 0, 0, func_612(), 0, -1, 0);
						func_614(2);
					}
					else
					{
						func_613(38, func_609(iVar6), 0, 0, func_612(), 0, -1, 0);
						func_614(1);
					}
				}
			}
			else if (func_481() && func_610(4))
			{
				if (func_481() && (func_611(38) || func_606(38)))
				{
					func_613(38, 0, 0, 0, func_612(), 0, -1, 0);
					func_614(2);
				}
				else
				{
					func_613(38, 0, 0, 0, func_612(), 0, -1, 0);
					func_614(1);
				}
			}
			if (func_481() && func_610(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_481() && (func_611(38) || func_606(38)))
					{
						func_615(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_615(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_521(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_547(iParam0, 866047851) && !func_547(iParam0, -1979000645)) && !func_547(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_616(iParam0, 8388608) && !func_429(28))
	{
		func_617(28);
	}
	if (!bVar3)
	{
		if (func_547(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_371(iParam0) == -1447088266)
			{
				iVar1 = func_619(func_618(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_115() == -1)
					{
						func_424(iVar1);
					}
					if (func_524(0) && func_425(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_620(iParam0, iVar0, iParam5);
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
					if (func_115() == -1)
					{
						func_424(iParam0);
					}
					if (func_524(0) && func_425(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_620(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_521(iParam0) == joaat("WEAPON"))
		{
			if (!func_621(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_521(iParam0) == joaat("AMMO") && func_622(iParam0))
		{
			if (!func_623(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_547(iParam0, 866047851))
		{
			func_624(iParam0);
		}
		else if (func_547(iParam0, 2000026003))
		{
			func_625(iParam0);
		}
		else if (func_547(iParam0, -103750053))
		{
			func_471(func_626(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_471(func_470(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_547(iParam0, -121341956) && !func_547(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_94(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_607(498, 0);
				}
			}
			if (func_547(iParam0, -2017733358) || func_547(iParam0, -1369131378))
			{
				func_627(iParam0);
			}
		}
		else if (func_547(iParam0, -136654233))
		{
			if (func_547(iParam0, -1021472396))
			{
			}
		}
		else if (func_547(iParam0, -1466706512) && func_547(iParam0, 1147021565))
		{
			func_607(484, 0);
		}
		else if (func_547(iParam0, 1147021565) && func_547(iParam0, -524514947))
		{
		}
		else if (func_547(iParam0, 554195525))
		{
		}
		else if (func_547(iParam0, 589988438))
		{
			if (func_628())
			{
				func_629(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_547(iParam0, 787083290) && func_547(iParam0, 949916894))
		{
			func_630(iParam0);
		}
		else if (func_547(iParam0, -1718133314))
		{
			func_631(iParam0);
		}
		else if (func_547(iParam0, -1738650224))
		{
			func_632(iParam0);
		}
		else if (func_547(iParam0, -1112814642) && func_547(iParam0, 949916894))
		{
			func_633(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_547(iParam0, 1841149704))
		{
			func_634();
		}
		else if (func_547(iParam0, 606799272))
		{
			func_635(iParam0, iParam1);
			func_636(iParam0);
		}
		else if (func_547(iParam0, -1112814642) && func_547(iParam0, -1697809989))
		{
			func_637(iParam0, 0, 0, 0);
		}
		else if (func_547(iParam0, -2017733358) || func_547(iParam0, -1369131378))
		{
			func_627(iParam0);
		}
		else if (func_547(iParam0, -1921346699))
		{
			if (func_115() != -1)
			{
				return 0;
			}
			func_638(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_547(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_418(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_414(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_418(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_414(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_418(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_414(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_418(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_414(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_418(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_414(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_418(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_414(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_547(iParam0, -839724752) && func_616(iParam0, 4))
		{
			if (!func_606(42))
			{
				func_639(iParam0);
			}
		}
		else if (func_547(iParam0, 1399091007))
		{
			func_640(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_547(iParam0, 1248798204))
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
				func_414(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_617(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_641(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_642(&iVar9, 0))
				{
					func_425(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_115() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_641(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_607(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_643();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_644();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_645();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_646();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_647();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_648(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_649(499813453, 0);
				func_650(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_648(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_649(499813453, 0);
				func_650(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_648(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_649(499813453, 0);
				func_650(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_648(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_649(666607663, 0);
				func_651(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_648(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_649(666607663, 0);
				func_651(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_648(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_649(666607663, 0);
				func_651(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_648(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_649(-220219788, 0);
				func_652(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_648(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_649(-220219788, 0);
				func_652(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_648(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_649(-220219788, 0);
				func_652(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_648(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_649(218622660, 0);
				func_421(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_648(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_649(218622660, 0);
				func_421(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_648(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_649(390004462, 0);
				func_653(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_648(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_649(390004462, 0);
				func_653(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_648(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_649(390004462, 0);
				func_653(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_648(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_649(6410548, 0);
				func_654(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_648(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_649(6410548, 0);
				func_654(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_648(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_649(6410548, 0);
				func_654(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_648(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_649(6410548, 0);
				func_654(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_656(242, func_655(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_656(240, func_655(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_656(241, func_655(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_657(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_657(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_657(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_657(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_657(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_657(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_607(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_607(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_607(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_414(func_658(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_414(func_659(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_429(1))
				{
					func_607(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_607(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_115() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_607(496, 0);
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
		func_660(&iVar10);
		if (!func_661(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_524(0))
		{
			return 1;
		}
		if (func_521(iParam0) == joaat("CLOTHING"))
		{
			func_662(iParam0);
		}
		if (func_547(iParam0, -1979000645))
		{
			func_663(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_524(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_414(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_664(iVar2, 0);
		}
	}
	Var35 = { func_519(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_665(iParam0);
	if (fParam6 > 0f)
	{
		if (func_547(iParam0, -839724752))
		{
			func_666(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_518(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_415(bool bParam0)
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
		func_414(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_335(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_335(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_335(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		func_585(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_586(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				func_587(iVar0, iVar1);
				func_588(iVar0, iVar2);
				func_589(iVar0, iVar3);
				func_590(iVar0, 0);
				if (func_591(iVar0))
				{
					func_592(iVar0);
				}
				iVar4 = func_593(iVar2);
				func_594(iVar0, iVar4);
			}
			iVar0++;
		}
		func_412();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_416(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_667(iParam0);
	if (bParam3)
	{
		func_668(iParam0, sParam1, iParam2);
	}
}

void func_417(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_669(iParam0, sParam4, iParam5);
	}
	func_670(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_418(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_521(iParam0);
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
		if (!func_671(iParam0, 1))
		{
			return false;
		}
	}
	return func_520(iParam0, 0, bParam2) >= iParam1;
}

bool func_419(int iParam0)
{
	int iVar0;

	iVar0 = func_334(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_420(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_421(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_422(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_423()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_672("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_673(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
			}
			else if (func_674(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_566(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_566(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_424(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_428(iParam0))
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

bool func_425(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_526(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_675((398 + iVar28), 1);
			if (func_676(iParam0, &Var0, iVar5, 0))
			{
				if (func_674(iParam0, &Var6, iVar5))
				{
					Var29 = { func_569(iParam0, Var0, iVar5, 0) };
					func_677(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_524(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_620(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_678(iParam0, iParam1);
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

void func_426(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_679(Param1, iParam5, &Var5, 0))
	{
		func_677(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_680(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_681(Var19, 1);
}

bool func_427()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_428(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_429(int iParam0)
{
	if (!func_682(iParam0))
	{
		return false;
	}
	return func_683(iParam0);
}

bool func_430(int iParam0)
{
	return iParam0 > -1;
}

int func_431(int iParam0, bool bParam1)
{
	if (!func_430(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_684(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_430(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_431(iParam0, 1);
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

int func_433(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_434(int iParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_INJURED(func_685(iParam0)))
	{
		if (func_137(iParam0) && func_332(iParam1, 0))
		{
			func_686(&(Global_1360165[iParam0 /*1157*/].f_146), iParam1, iParam2, 1);
		}
	}
}

bool func_435()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_436(int iParam0)
{
	if (Global_1879534.f_7287 >= 1770)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
		case 12:
			break;
		case 1:
			if (Global_1879534.f_7288[iParam0] >= 240)
			{
				return;
			}
			break;
		case 2:
			if (Global_1879534.f_7288[iParam0] >= 350)
			{
				return;
			}
			break;
		case 7:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 8:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 3:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 4:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 5:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		case 6:
			if (Global_1879534.f_7288[iParam0] >= 1)
			{
				return;
			}
			break;
		default:
			break;
	}
}

void func_437(int iParam0)
{
	Global_1879534.f_7287++;
	if (!iParam0 == 12)
	{
		Global_1879534.f_7288[iParam0]++;
	}
}

void func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_687(iParam0, iParam6);
	func_688(iParam0, iParam5);
	func_689(iParam0, iParam4);
	func_690(iParam0, iParam3);
	func_691(iParam0, iParam2);
	func_692(iParam0, iParam1);
}

void func_439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_1879534.f_211[iParam0 /*4*/] = iParam1;
	Global_1879534.f_211[iParam0 /*4*/].f_1 = iParam2;
	Global_1879534.f_211[iParam0 /*4*/].f_2 = iParam3;
	Global_1879534.f_211[iParam0 /*4*/].f_3 = iParam4;
}

void func_440(int iParam0, int iParam1, int iParam2)
{
	Global_1879534.f_1172[iParam0 /*2*/] = iParam1;
	Global_1879534.f_1172[iParam0 /*2*/].f_1 = iParam2;
}

int func_441(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_442(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_443(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_444(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return;
	}
	func_693(iParam0, iParam1);
}

void func_445(int iParam0, char* sParam1)
{
	if (!func_442(iParam0))
	{
		return;
	}
	StringCopy(&(Global_1835011[iParam0 /*74*/].f_9), sParam1, 24);
}

void func_446(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_447()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_448(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_449(int iParam0)
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

int func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_694(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_447())
	{
		return -1;
	}
	iVar0 = func_448(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_693(iVar1, 0);
	func_695(iVar1, 0);
	func_696(iVar1, 0);
	func_697(iVar1, 0);
	func_698(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_699(iVar1, iParam4);
	}
	return iVar1;
}

int func_451()
{
	return Global_1894899.f_2;
}

int func_452(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_700(vParam0);
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

void func_453(var uParam0)
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

void func_454(var uParam0)
{
	if (func_701(uParam0->f_3))
	{
		func_702(&(uParam0->f_3), 1, 0);
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

int func_455(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_703(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_704(iVar6);
	}
	return iVar5;
}

int func_456(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_705(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

int func_457()
{
	return Global_1899515;
}

void func_458(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_706(*iParam0);
	iVar1 = func_707(*iParam0);
	iVar2 = func_708(*iParam0);
	iVar3 = func_709(*iParam0);
	iVar4 = func_710(*iParam0);
	iVar5 = func_711(*iParam0);
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
	iVar6 = func_712(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_712(iVar1, iVar0);
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
	func_438(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_459(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_713(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_460(int iParam0)
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

void func_461(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_459(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_462(2, *uParam0);
		}
		else
		{
			func_463(2, *uParam0);
		}
	}
	func_714(uParam0);
}

void func_462(int iParam0, int iParam1)
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

void func_463(int iParam0, int iParam1)
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

int func_464(int iParam0, int iParam1)
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

bool func_465(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_466(int iParam0)
{
	int iVar0;

	if (func_715(iParam0))
	{
		if (!func_429(45))
		{
			return false;
		}
	}
	iVar0 = func_472(iParam0);
	if (func_481())
	{
		if (!func_94(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

bool func_467(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

void func_468(int iParam0, int iParam1)
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

void func_469(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_470(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_471(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_472(int iParam0)
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

var func_473(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_474(int iParam0)
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

int func_475()
{
	return Global_40.f_4283.f_1;
}

bool func_476(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

void func_477(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], iParam1);
		}
	}
}

void func_478(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_716(*uParam0, -1);
		func_717(*uParam0, 0);
		func_718(*uParam0, 0);
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

int func_479(int iParam0, int iParam1)
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

void func_480(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_481()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_482(int iParam0)
{
	Global_40.f_4283 = iParam0;
	Global_40.f_4283.f_1 = func_297(iParam0);
}

void func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_495(2097152);
			break;
		case 1:
			func_495(4194304);
			break;
		case 2:
			func_495(16777216);
			break;
		case 3:
			func_495(33554432);
			break;
		case 5:
			func_495(67108864);
			break;
		case 4:
			func_495(134217728);
			break;
		case 6:
			func_495(268435456);
			break;
		case 7:
			func_495(536870912);
			break;
		case 8:
			func_495(1073741824 /* Float: 2f */);
			break;
	}
}

void func_484(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_304(1497516462);
			func_303(2016141805);
			func_303(1010885152);
			func_303(-502324015);
			Jump @2853; //curOff = 558
			func_303(1497516462);
			func_304(2016141805);
			func_303(1010885152);
			func_303(-502324015);
			Jump @2853; //curOff = 597
			func_303(1497516462);
			func_303(2016141805);
			func_304(1010885152);
			func_303(-502324015);
			Jump @2853; //curOff = 636
			func_303(1497516462);
			func_303(2016141805);
			func_303(1010885152);
			func_304(-502324015);
			Jump @2853; //curOff = 675
			func_303(-538889627);
			func_303(-538880323);
			func_303(-1056767524);
			func_304(iParam0);
			Jump @2853; //curOff = 711
			func_719();
			func_304(iParam0);
			Jump @2853; //curOff = 724
			func_720();
			func_304(iParam0);
			Jump @2853; //curOff = 737
			func_303(-664252410);
			func_303(2109952320);
			func_304(2019386373);
			Jump @2853; //curOff = 767
			func_303(2019386373);
			func_303(2109952320);
			func_304(-664252410);
			Jump @2853; //curOff = 797
			func_303(2019386373);
			func_303(-664252410);
			func_304(2109952320);
			Jump @2853; //curOff = 827
			func_303(-1835851517);
			func_303(-1838352012);
			func_304(-1674179981);
			Jump @2853; //curOff = 857
			func_303(-1674179981);
			func_303(-1838352012);
			func_304(-1835851517);
			Jump @2853; //curOff = 887
			func_303(-1674179981);
			func_303(-1835851517);
			func_304(-1838352012);
			Jump @2853; //curOff = 917
			func_303(210001842);
			func_304(-1717960576);
			Jump @2853; //curOff = 938
			func_303(-1717960576);
			func_304(210001842);
			Jump @2853; //curOff = 959
			func_303(-1271608261);
			func_303(1846061697);
			func_303(-1145519186);
			func_304(-150493654);
			Jump @2853; //curOff = 998
			func_303(-150493654);
			func_303(1846061697);
			func_303(-1145519186);
			func_304(-1271608261);
			Jump @2853; //curOff = 1037
			func_303(-150493654);
			func_303(-1271608261);
			func_303(-1145519186);
			func_304(1846061697);
			Jump @2853; //curOff = 1076
			func_303(-150493654);
			func_303(-1271608261);
			func_303(1846061697);
			func_304(-1145519186);
			Jump @2853; //curOff = 1115
			func_303(280705402);
			func_303(1926308480);
			func_304(1766284049);
			Jump @2853; //curOff = 1145
			func_303(1766284049);
			func_303(1926308480);
			func_304(280705402);
			Jump @2853; //curOff = 1175
			func_303(1766284049);
			func_303(280705402);
			func_304(1926308480);
			Jump @2853; //curOff = 1205
			if (bParam1)
			{
				func_303(439465264);
				func_304(1609506757);
			}
			else
			{
				func_303(1609506757);
				func_303(439465264);
			}
			Jump @2853; //curOff = 1252
			if (func_721(1609506757))
			{
				if (bParam1)
				{
					func_304(439465264);
				}
				else
				{
					func_303(439465264);
				}
			}
			Jump @2853; //curOff = 1293
			func_303(-1612662716);
			func_304(1822001510);
			Jump @2853; //curOff = 1314
			func_303(1822001510);
			func_304(-1612662716);
			Jump @2853; //curOff = 1335
			func_303(1952610440);
			func_303(-223469678);
			func_303(-404698347);
			func_303(1517904467);
			func_304(1306158345);
			Jump @2853; //curOff = 1383
			func_303(1306158345);
			func_303(-223469678);
			func_303(-404698347);
			func_303(1517904467);
			func_304(1952610440);
			Jump @2853; //curOff = 1431
			func_303(1306158345);
			func_303(1952610440);
			func_303(-404698347);
			func_303(1517904467);
			func_304(-223469678);
			Jump @2853; //curOff = 1479
			func_303(1306158345);
			func_303(1952610440);
			func_303(-223469678);
			func_303(1517904467);
			func_304(-404698347);
			Jump @2853; //curOff = 1527
			func_303(1306158345);
			func_303(1952610440);
			func_303(-223469678);
			func_303(-404698347);
			func_304(1517904467);
			Jump @2853; //curOff = 1575
			func_303(931649776);
			func_303(-434590080);
			func_303(1743048395);
			func_303(449774763);
			func_304(1376646519);
			Jump @2853; //curOff = 1623
			func_303(1376646519);
			func_303(-434590080);
			func_303(1743048395);
			func_303(449774763);
			func_304(931649776);
			Jump @2853; //curOff = 1671
			func_303(1376646519);
			func_303(931649776);
			func_303(1743048395);
			func_303(449774763);
			func_304(-434590080);
			Jump @2853; //curOff = 1719
			func_303(1376646519);
			func_303(931649776);
			func_303(-434590080);
			func_303(449774763);
			func_304(1743048395);
			Jump @2853; //curOff = 1767
			func_303(1376646519);
			func_303(931649776);
			func_303(-434590080);
			func_303(1743048395);
			func_304(449774763);
			Jump @2853; //curOff = 1815
			func_303(38162571);
			func_303(1350391819);
			func_303(54073871);
			func_304(-1414537028);
			Jump @2853; //curOff = 1854
			func_303(-1414537028);
			func_303(1350391819);
			func_303(54073871);
			func_304(38162571);
			Jump @2853; //curOff = 1893
			func_303(-1414537028);
			func_303(38162571);
			func_303(54073871);
			func_304(1350391819);
			Jump @2853; //curOff = 1932
			func_303(-1414537028);
			func_303(38162571);
			func_303(1350391819);
			func_304(54073871);
			Jump @2853; //curOff = 1971
			func_304(198200492);
			func_303(-1124061431);
			func_303(52706132);
			func_303(-259123672);
			Jump @2853; //curOff = 2010
			func_303(198200492);
			func_304(-1124061431);
			func_303(52706132);
			func_303(-259123672);
			Jump @2853; //curOff = 2049
			func_303(198200492);
			func_303(-1124061431);
			func_304(52706132);
			func_303(-259123672);
			Jump @2853; //curOff = 2088
			func_303(198200492);
			func_303(-1124061431);
			func_303(52706132);
			func_304(-259123672);
			Jump @2853; //curOff = 2127
			func_304(-919512195);
			func_303(-1925798111);
			func_303(420709909);
			func_303(1703426636);
			Jump @2853; //curOff = 2166
			func_304(-1925798111);
			func_303(-919512195);
			func_303(420709909);
			func_303(1703426636);
			Jump @2853; //curOff = 2205
			func_304(420709909);
			func_303(-919512195);
			func_303(-1925798111);
			func_303(1703426636);
			Jump @2853; //curOff = 2244
			func_304(1703426636);
			func_303(-919512195);
			func_303(-1925798111);
			func_303(420709909);
			Jump @2853; //curOff = 2283
			func_304(-1223121209);
			func_303(630808005);
			Jump @2853; //curOff = 2304
			func_304(630808005);
			func_303(-1223121209);
			Jump @2853; //curOff = 2325
			func_304(1453909576);
			func_303(1643531967);
			Jump @2853; //curOff = 2346
			func_304(1643531967);
			func_303(1453909576);
			Jump @2853; //curOff = 2367
			func_304(0);
			func_303(473295046);
			func_303(-1738165526);
			Jump @2853; //curOff = 2393
			func_304(473295046);
			func_303(0);
			func_303(-1738165526);
			Jump @2853; //curOff = 2419
			func_304(-1738165526);
			func_303(0);
			func_303(473295046);
			Jump @2853; //curOff = 2445
			func_304(932909855);
			func_303(2051822093);
			Jump @2853; //curOff = 2466
			func_304(2051822093);
			func_303(932909855);
			Jump @2853; //curOff = 2487
			func_304(405586984);
			func_303(1509509592);
			func_303(-959357075);
			func_303(-1311865656);
			Jump @2853; //curOff = 2526
			func_304(1509509592);
			func_303(405586984);
			func_303(-959357075);
			func_303(-1311865656);
			Jump @2853; //curOff = 2565
			func_304(-959357075);
			func_303(1509509592);
			func_303(405586984);
			func_303(-1311865656);
			Jump @2853; //curOff = 2604
			func_304(-1311865656);
			func_303(1509509592);
			func_303(-959357075);
			func_303(405586984);
			Jump @2853; //curOff = 2643
			if (bParam1)
			{
				func_304(-524145696);
			}
			else
			{
				func_303(-524145696);
			}
			func_303(1626481264);
			func_303(282809459);
			Jump @2853; //curOff = 2690
			func_304(282809459);
			func_303(1626481264);
			func_303(-524145696);
			Jump @2853; //curOff = 2720
			func_304(1626481264);
			func_303(-524145696);
			func_303(282809459);
			Jump @2853; //curOff = 2750
			if (bParam1)
			{
				func_304(885203519);
			}
			else
			{
				func_303(885203519);
			}
			Jump @2853; //curOff = 2779
			if (bParam1)
			{
				func_304(-1080627546);
			}
			else
			{
				func_303(-1080627546);
			}
			Jump @2853; //curOff = 2808
			if (bParam1)
			{
				if (!func_721(iParam0))
				{
					func_304(iParam0);
				}
			}
			else if (func_721(iParam0))
			{
				func_303(iParam0);
			}
		}

void func_485()
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

int func_486(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_722(Global_1357549.f_1497.f_32[iVar0 /*5*/]))
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

bool func_487()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

bool func_488(int iParam0)
{
	return func_489(23, iParam0);
}

bool func_489(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_723(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_724())
	{
		return func_723(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_723(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_490(int iParam0)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	return func_467(iParam0, 8);
}

void func_491(int iParam0, int iParam1)
{
	if (!func_294(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_492(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

void func_493(int iParam0)
{
	Global_1894899 = (Global_1894899 - (Global_1894899 && iParam0));
}

bool func_494()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_467(iVar1, 1))
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
				if (func_115() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(Global_1888801[iVar1 /*35*/].f_9))
				{
					SCRIPTS::_0x7DE4643157AD646C(Global_1888801[iVar1 /*35*/].f_9);
				}
			}
			else if (func_467(iVar1, 2))
			{
				if (func_115() == -1)
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
				func_725(iVar1, 11);
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

void func_495(int iParam0)
{
	switch (func_115())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

void func_496(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	*uParam0 = 0;
	uParam0->f_4 = 0;
}

bool func_497(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (uParam3->f_62 >= 12)
	{
		return false;
	}
	if (iParam2 <= 0)
	{
		return false;
	}
	iVar0 = func_726();
	func_727(iParam2, bParam4);
	if (iVar0 != func_726())
	{
		uParam3->f_1[uParam3->f_62 /*5*/] = 0;
		uParam3->f_1[uParam3->f_62 /*5*/].f_3 = -1;
		uParam3->f_1[uParam3->f_62 /*5*/].f_1 = iParam0;
		uParam3->f_1[uParam3->f_62 /*5*/].f_2 = iParam1;
		uParam3->f_1[uParam3->f_62 /*5*/].f_4 = iParam2;
		uParam3->f_62++;
		if (bParam4)
		{
			if (iParam1 == 0)
			{
				func_728(iParam2);
			}
			else if (bParam5)
			{
				func_729(1);
			}
		}
	}
	return true;
}

int func_498(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_62)
	{
		iVar0 = (iVar0 + uParam0->f_1[iVar1 /*5*/].f_4);
		iVar1++;
	}
	return iVar0;
}

void func_499(var uParam0)
{
	struct<2> Var0;

	Var0.f_1 = 12;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	MISC::_COPY_MEMORY(uParam0[0 /*63*/], uParam0[1 /*63*/], 63);
	MISC::_COPY_MEMORY(uParam0[1 /*63*/], &Var0, 63);
	(*uParam0)[1 /*63*/] = func_498(uParam0[0 /*63*/]);
}

void func_500(int iParam0)
{
	switch (func_115())
	{
		case -1:
			Global_1357549.f_1494 = (Global_1357549.f_1494 || iParam0);
			break;
	}
}

void func_501(int iParam0)
{
	switch (func_115())
	{
		case -1:
			Global_1357549.f_1494 = (Global_1357549.f_1494 - (Global_1357549.f_1494 && iParam0));
			break;
	}
}

void func_502(var uParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, "dollars", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, "cents", 0);
}

void func_503(int iParam0, int iParam1)
{
	if (!func_730(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_504()
{
	return func_731();
}

void func_505(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_571(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_371(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_733(func_732(iParam0), 6);
}

int func_506(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_507(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	switch (func_734(iParam0))
	{
		case 1:
			switch (func_574(iParam0))
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
			switch (func_574(iParam0))
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

void func_508(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_571(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_371(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_735(func_732(iParam0), 6);
}

void func_509(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<10> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(53), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(54), Param10.f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(56), Param10.f_5);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(55), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("IB_SELECT");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_510(57), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(58), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_510(59), Param10.f_9);
}

char* func_510(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 53:
			return "dynamic_list_item_link";
		case 54:
			return "dynamic_list_item_event_channel_hash";
		case 55:
			return "dynamic_list_item_focus_hash";
		case 56:
			return "dynamic_list_item_select_hash";
		case 57:
			return "dynamic_list_item_prompt_text";
		case 58:
			return "dynamic_list_item_prompt_enabled";
		case 59:
			return "dynamic_list_item_prompt_visible";
		case 60:
			return "dynamic_list_item_prompt_option_text";
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
		case 62:
			return "dynamic_list_item_prompt_option_visible";
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 68:
			return "dynamic_list_item_prompt_r3_text";
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
		case 72:
			return "mount_collection_index";
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 76:
			return "invite_unique_id";
		case 77:
			return "invite_tracked";
		case 78:
			return "invite_processed";
		case 79:
			return "invite_script_type";
		case 80:
			return "invite_gang_id";
		case 81:
			return "invite_expiration_time";
		case 82:
			return "invite_filter_type";
		case 83:
			return "invite_feed_message_id";
		default:
			break;
	}
	return "null";
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PEDEXPRESS_NECK_WIDTH"):
			return 0;
		case joaat("PEDEXPRESS_NECK_DEPTH"):
			return 1;
		case joaat("PEDEXPRESS_SHOULDERS_HEIGHT"):
			return 2;
		case joaat("PEDEXPRESS_SHOULDERS_DEPTH"):
			return 3;
		case joaat("PEDEXPRESS_SHOULDERS_WIDTH"):
			return 4;
		case joaat("PEDEXPRESS_TRAPS"):
			return 5;
		case joaat("PEDEXPRESS_LATS"):
			return 6;
		case joaat("PEDEXPRESS_CHEST_WIDTH"):
			return 7;
		case joaat("PEDEXPRESS_CHEST_DEPTH"):
			return 8;
		case joaat("PEDEXPRESS_BELLY_WIDTH"):
			return 9;
		case joaat("PEDEXPRESS_BELLY_DEPTH"):
			return 10;
		case joaat("PEDEXPRESS_UPPER_ARMS"):
			return 11;
		case joaat("PEDEXPRESS_FOREARMS"):
			return 12;
		case joaat("PEDEXPRESS_UPPER_LEGS"):
			return 13;
		case joaat("PEDEXPRESS_LOWER_LEGS"):
			return 14;
		case joaat("PEDEXPRESS_FACE_WIDTH"):
			return 15;
		case joaat("PEDEXPRESS_BROW_HEIGHT"):
			return 16;
		case joaat("PEDEXPRESS_BROW_WIDTH"):
			return 17;
		case joaat("PEDEXPRESS_BROW_DEPTH"):
			return 18;
		case joaat("PEDEXPRESS_EAR_SIZE"):
			return 19;
		case joaat("PEDEXPRESS_EAR_ROTATION"):
			return 20;
		case joaat("PEDEXPRESS_EAR_LENGTH"):
			return 21;
		case joaat("PEDEXPRESS_EAR_LOBE"):
			return 22;
		case joaat("PEDEXPRESS_CHEEKS_HEIGHT"):
			return 23;
		case joaat("PEDEXPRESS_CHEEKS_WIDTH"):
			return 24;
		case joaat("PEDEXPRESS_CHEEKS_DEPTH"):
			return 25;
		case joaat("PEDEXPRESS_JAW_HEIGHT"):
			return 26;
		case joaat("PEDEXPRESS_JAW_WIDTH"):
			return 27;
		case joaat("PEDEXPRESS_JAW_DEPTH"):
			return 28;
		case joaat("PEDEXPRESS_CHIN_TILT"):
			return 29;
		case joaat("PEDEXPRESS_CHIN_WIDTH"):
			return 30;
		case joaat("PEDEXPRESS_CHIN_DEPTH"):
			return 31;
		case joaat("PEDEXPRESS_EYE_HEIGHT"):
			return 32;
		case joaat("PEDEXPRESS_EYE_WIDTH"):
			return 33;
		case joaat("PEDEXPRESS_EYE_DEPTH"):
			return 34;
		case joaat("PEDEXPRESS_EYE_ANGLE"):
			return 35;
		case joaat("PEDEXPRESS_EYE_H_POS"):
			return 36;
		case joaat("PEDEXPRESS_EYE_V_POS"):
			return 37;
		case joaat("PEDEXPRESS_NOSE_WIDTH"):
			return 38;
		case joaat("PEDEXPRESS_NOSE_LENGTH"):
			return 39;
		case joaat("PEDEXPRESS_NOSE_HEIGHT"):
			return 40;
		case joaat("PEDEXPRESS_NOSE_TILT"):
			return 41;
		case joaat("PEDEXPRESS_NOSE_BREAK"):
			return 42;
		case joaat("PEDEXPRESS_NOSTRIL_WIDTH"):
			return 43;
		case joaat("PEDEXPRESS_MOUTH_WIDTH"):
			return 44;
		case joaat("PEDEXPRESS_MOUTH_DEPTH"):
			return 45;
		case joaat("PEDEXPRESS_MOUTH_H_POS"):
			return 46;
		case joaat("PEDEXPRESS_MOUTH_V_POS"):
			return 47;
		case joaat("PEDEXPRESS_UPPER_LIP_THICKNESS"):
			return 48;
		case joaat("PEDEXPRESS_UPPER_LIP_WIDTH"):
			return 49;
		case joaat("PEDEXPRESS_UPPER_LIPDEPTH"):
			return 50;
		case joaat("PEDEXPRESS_LOWER_LIP_THICKNESS"):
			return 51;
		case joaat("PEDEXPRESS_LOWER_LIP_WIDTH"):
			return 52;
		case joaat("PEDEXPRESS_LOWER_LIP_DEPTH"):
			return 53;
		default:
			break;
	}
	return -1;
}

void func_512(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	struct<11> Var9;

	Var9.f_2 = 5;
	if (bParam1)
	{
		iVar1 = -1095364703;
	}
	else
	{
		iVar1 = -638521536;
	}
	Var2 = iVar1;
	Var2.f_1 = 953106857;
	Var2.f_2 = 1700442869;
	Var2.f_3 = 1;
	Var2.f_4 = func_534(iParam0, 1);
	Global_1946804.f_57[iParam0 /*11*/] = { Var9 };
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, -517941987))
	{
		return;
	}
	Global_1946804.f_57[iParam0 /*11*/].f_8 = iVar0;
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, -958439913);
	Global_1946804.f_57[iParam0 /*11*/] = iVar0;
	Global_1946804.f_57[iParam0 /*11*/].f_10 = 0;
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, 366812837);
	func_736(iParam0, iVar0, iVar1);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, 576352150);
	func_737(iParam0, iVar0, iVar1);
	if (DATAFILE::_0x52FC26D2D2FC2987(&iVar0, &Var2, joaat("PRIORITY")))
	{
		Global_1946804.f_57.f_430[iVar0] = iParam0;
	}
}

void func_513(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

int func_514(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_738(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_371(iParam0) != -999503751)
		{
			func_739(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (func_371(iParam0) != -999503751)
	{
		func_739(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_373(iParam0, 1);
	return 1;
}

void func_515()
{
	int iVar0;

	if (func_115() == -1)
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

int func_516(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_740(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_517(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_521(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_547(iParam0, 1399091007))
	{
		func_741(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_518(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_332(iParam0, 0))
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
	if (!func_742())
	{
		func_743(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_744(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_744(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_616(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_521(iParam0);
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
	else if (!func_745(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_746(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_655(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_547(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_655(iParam0));
	}
	func_747(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_519(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_332(iParam0, 0))
	{
		return Var0;
	}
	if (func_547(iParam0, -305066475))
	{
		if (func_115() == -1)
		{
			if (func_547(iParam0, -537818634))
			{
				return func_748(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_748(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_547(iParam0, -537818634))
	{
		return func_748(joaat("MEDICINE_ITEMS"));
	}
	if (func_547(iParam0, 2084895747))
	{
		return func_748(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

int func_520(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_521(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_517(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_749(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_571(bParam2), iParam0, 0);
	return iVar2;
}

int func_521(int iParam0)
{
	vector3 vVar0;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_522(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_564(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_751(&Var0, func_750(0));
	}
	if (!func_565(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_673(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_677(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_566(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_523(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_526(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_752(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_569(iParam0, Var0, Var0.f_4, bParam4) };
	return func_677(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_524(bool bParam0)
{
	if (func_115() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_571(bParam0));
}

void func_525(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_547(iParam0, 606799272))
		{
			func_753(iParam0, iParam1);
		}
		if (func_547(iParam0, -1112814642) && func_547(iParam0, -1697809989))
		{
			func_637(iParam0, iParam1, 1, 0);
		}
	}
}

struct<5> func_526(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_754(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_521(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_569(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_750(bParam1) };
			if (bParam2 && func_755(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_676(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_676(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_674(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_756(bParam1) };
			switch (func_371(iParam0))
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
			if (func_757(iParam0, -1823706425))
			{
				Var0 = { func_569(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_757(iParam0, -1483207246))
			{
				Var0 = { func_569(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_758(Var0, &Var27, bParam1, 0))
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

int func_527(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_534(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_528(int iParam0, int iParam1)
{
	if (func_115() == -1)
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

void func_529(int iParam0, int iParam1, int iParam2)
{
	if (func_115() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] = (Global_26796.f_26[iParam1 /*120*/] - (Global_26796.f_26[iParam1 /*120*/] && iParam0));
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] - (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && iParam0));
	}
}

int func_530(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 5)
	{
		return func_359(iVar0);
	}
	return 0;
}

int func_531(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_357();
	}
	if (func_115() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

void func_532(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

bool func_533(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_534(int iParam0, int iParam1)
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

bool func_535(int iParam0)
{
	switch (iParam0)
	{
		case -426430150:
			return false;
		case 1788623170:
			return false;
		case -1130865351:
			return false;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return false;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			if (!func_429(24))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return true;
	return false;
}

void func_536(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar3 = 0;
	bVar2 = func_115() != -1;
	if (func_339() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	iVar0 = func_759(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = 5;
		if (func_760(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946804.f_2653 = iParam0;
		}
		else if (func_760(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, func_759(iParam0 + 1), bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946804.f_2653 = iParam0;
		}
		else
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/] = func_761(0);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = 289238755;
				Global_1946804.f_2653 = iParam0;
			}
			else
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
				Global_1946804.f_2653 = iParam0;
			}
		}
	}
	iVar0 = func_759(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 6;
		if (func_760(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946804.f_2654 = iParam1;
		}
		else if (func_760(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, func_759(iParam1 + 1), bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946804.f_2654 = iParam1;
		}
		else
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/] = func_761(1);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = 289238755;
				Global_1946804.f_2654 = iParam1;
			}
			else
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
				Global_1946804.f_2654 = iParam1;
			}
		}
	}
	iVar0 = func_759(iParam2);
	if (iVar0 != 0)
	{
		iVar1 = 7;
		if (func_760(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, iVar0, bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946804.f_2655 = iParam2;
		}
		else if (func_760(Global_1946804.f_1378.f_1[iVar1 /*3*/], iVar3, func_759(iParam2 + 1), bVar2) != -1)
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946804.f_2655 = iParam2;
		}
		else
		{
			Global_1946804.f_1378.f_1[iVar1 /*3*/] = func_761(2);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = 289238755;
				Global_1946804.f_2655 = iParam2;
			}
			else
			{
				Global_1946804.f_1378.f_1[iVar1 /*3*/].f_1 = iVar0;
				Global_1946804.f_2655 = iParam2;
			}
		}
	}
}

void func_537(int iParam0)
{
	func_762(&(Global_1946804.f_1378), iParam0);
}

bool func_538(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

bool func_539(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_338(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

void func_540(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_338(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_338(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_338(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_541(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_338(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_338(iParam0, 1) /*11*/].f_10 || iParam1);
}

void func_542(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_543(int iParam0, int iParam1)
{
	func_763(&(Global_1946804.f_2589), iParam0, iParam1);
}

bool func_544(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_338(iParam0, 1) /*3*/] != Global_1946804.f_57[func_338(iParam0, 1) /*11*/];
}

void func_545(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_543(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_543(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_543(iVar2, iVar0);
		}
	}
}

bool func_546(int iParam0)
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

bool func_547(int iParam0, int iParam1)
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

void func_548(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_549()
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

bool func_550(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_764(uParam0, iParam3, iParam2) && !func_100(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_765(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/]))
		{
			func_766(1108822547);
		}
		else
		{
			func_767(1108822547);
		}
	}
	func_768(uParam0, 0, 0);
	func_362(iParam5);
	return true;
}

int func_551(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = func_338(iParam2, 1);
	iVar1 = 0;
	if (iVar0 < 0 || iVar0 >= 39)
	{
		return 0;
	}
	if (func_339() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (!bParam4)
	{
		func_549();
	}
	if (iParam1 != joaat("BASE") && func_760(Global_1946804.f_1378.f_1[iVar0 /*3*/], iVar1, iParam1, func_115() != -1) == -1)
	{
		return 0;
	}
	if (bParam3)
	{
		Global_1946804.f_2456[iVar0 /*2*/] = 0;
		Global_1946804.f_2456[iVar0 /*2*/].f_1 = 0;
	}
	Global_1946804.f_1378.f_1[iVar0 /*3*/].f_1 = iParam1;
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_552(16, iParam2, 0, 0, 0);
		}
		else
		{
			func_552(16, iParam2, 1, iParam0, 0);
		}
	}
	func_362(1);
	return 1;
}

void func_552(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_532(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_769(Var0);
}

void func_553(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_770(iParam0))
	{
		return;
	}
	if (!func_771(iParam1))
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
		bVar2 = (Global_40.f_7731[iParam0 /*5*/] < 7 && func_772(iParam0));
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_457();
		func_773(iParam0, &iVar0, &iVar1, bVar2);
		func_458(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_554()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	if (func_115() == -1)
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			func_342(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar4);
			func_342(&(Global_1946804.f_1497.f_1[iVar1 /*3*/]), iVar1, iVar4);
			func_342(&(Global_1946804.f_1497.f_1[iVar2 /*3*/]), iVar2, iVar4);
			func_342(&(Global_1946804.f_1497.f_1[iVar3 /*3*/]), iVar3, iVar4);
			iVar4++;
		}
		return;
	}
	iVar4 = 0;
	while (iVar4 < 5)
	{
		func_548(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar4);
		func_548(&(Global_1946804.f_1497.f_1[iVar1 /*3*/]), iVar1, iVar4);
		func_548(&(Global_1946804.f_1497.f_1[iVar2 /*3*/]), iVar2, iVar4);
		func_548(&(Global_1946804.f_1497.f_1[iVar3 /*3*/]), iVar3, iVar4);
		iVar4++;
	}
}

void func_555()
{
	int iVar0;

	iVar0 = func_457();
	func_458(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_774(0) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
	}
	if (func_774(1) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
	}
	if (func_774(2) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
	}
}

bool func_556(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_549();
	if (iParam2 == 39)
	{
		Var0 = { func_526(iParam0, 1, 0) };
		iParam2 = func_338(func_527(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_547(iParam0, 866047851) && func_775(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_765(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_766(func_534(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_776(iParam2);
	func_543(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_356(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_356(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_355(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_777(iParam0, iParam2, iParam1, func_115() != -1);
	if (bParam4)
	{
		func_768(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_768(&(Global_1946804.f_1378), 1, 0);
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
				func_540(func_534(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

bool func_557()
{
	return 1 == Global_40.f_7748.f_3;
}

bool func_558(int iParam0)
{
	switch (iParam0)
	{
		case -2017785881:
		case -1900633994:
		case -1511041621:
		case -1471756535:
		case -1147723761:
		case -1051664629:
		case -986108061:
		case -929316746:
		case -827216318:
		case -736147717:
		case -245303732:
		case -193909113:
		case 282876023:
		case 602337354:
		case 963009459:
		case 1012091683:
		case 1334801974:
		case 1471627791:
			return true;
		default:
			break;
	}
	return false;
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case -986108061:
			return 1156231582 /* GXTEntry: "Buzzed" */;
		case -1051664629:
			return joaat("CLOTHING_ITEM_HAIR_SWEPT_BACK");
		case 1471627791:
			return -2120294484 /* GXTEntry: "Swept Back Fade" */;
		case 1012091683:
			return -814448122 /* GXTEntry: "Left Parted" */;
		case 282876023:
			return 1279519416 /* GXTEntry: "Left Parted Fade" */;
		case 1334801974:
			return 933586678 /* GXTEntry: "Right Parted" */;
		case -736147717:
			return 1612093252 /* GXTEntry: "Right Parted Fade" */;
		case -245303732:
			return 530132198 /* GXTEntry: "Middle Parted" */;
		case -1900633994:
			return -499492817 /* GXTEntry: "Middle Parted Fade" */;
		case -1511041621:
			return -1392593303 /* GXTEntry: "Buzzed" */;
		case -193909113:
			return -2091943191 /* GXTEntry: "Left Parted" */;
		case -929316746:
			return 1165676701 /* GXTEntry: "Left Parted Fade" */;
		case -1147723761:
			return 1380556716 /* GXTEntry: "Middle Parted" */;
		case 963009459:
			return -1140711191 /* GXTEntry: "Middle Parted Fade" */;
		case 602337354:
			return -1189021969 /* GXTEntry: "Right Parted" */;
		case -1471756535:
			return 862555979 /* GXTEntry: "Right Parted Fade" */;
		case -2017785881:
			return -674783297 /* GXTEntry: "Swept Back" */;
		case -827216318:
			return 279124309 /* GXTEntry: "Swept Back Fade" */;
		default:
			break;
	}
	return 0;
}

void func_560()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (func_115() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_342(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar1);
			iVar1++;
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_548(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar1);
		iVar1++;
	}
}

var func_561()
{
	return Global_1946804.f_1497.f_1[1 /*3*/];
}

void func_562(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_778(iParam0))
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
		Global_40.f_7748.f_5 = func_457();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_779());
		func_780(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_458(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_563()
{
	int iVar0;

	if (func_781() <= 3)
	{
		iVar0 = func_457();
		func_458(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		DECORATOR::DECOR_SET_INT(Global_35, "hairShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
	}
}

struct<14> func_564(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_565(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_571(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_566(int iParam0)
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

void func_567(int iParam0, var uParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_568(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_782(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_338(func_337(iParam1), 1);
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
		func_783(uParam0);
	}
}

struct<4> func_569(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_332(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_571(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_570(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_569(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_571(bParam6), &Var0, 0);
	return uVar4;
}

int func_571(bool bParam0)
{
	if (func_115() == -1)
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

bool func_572(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
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

bool func_573()
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

int func_574(int iParam0)
{
	if (!func_289(iParam0))
	{
		return -1;
	}
	return func_784(func_449(iParam0));
}

bool func_575(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_576(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_785() - fParam1);
	func_786(uParam0, 1);
	func_787(uParam0, 2);
	uParam0->f_2 = 0f;
}

var func_577(var uParam0)
{
	return uParam0;
}

void func_578(int iParam0)
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

	func_335(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_788(iParam0, &uVar18);
	func_789(iParam0, &uVar18, &iVar34, 1);
	if (func_339() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_790(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_333(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_335(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (func_371(uVar18[iVar36]))
		{
			case -2061583405:
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_790(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_333(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = func_338(func_337(uVar18[iVar36]), 1);
		iVar36++;
	}
	func_791(&(Global_1946804.f_1616));
	func_100(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { func_340(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { func_340(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { func_340(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { func_340(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { func_340(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { func_340(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { func_340(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { func_340(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { func_340(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == func_341(iVar0[iVar36], iVar35))
			{
				func_333(func_531(iVar35), 1, 1);
				func_792(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_533(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							func_342(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_793(iParam0))
	{
		if (!func_92(8))
		{
			if (func_339() == -2125499975)
			{
				if (bVar17)
				{
					func_100(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_363(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_364(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_793(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_100(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_363(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_364(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_793(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_793(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_794(Global_40.f_7729, 4096);
					func_503(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_795(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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
	func_100(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	func_100(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

struct<4> func_579()
{
	struct<4> Var0;

	Var0 = { func_754(0) };
	return func_569(856287005, Var0, -218846335, 0);
}

int func_580(int iParam0, struct<4> Param1)
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
			if (func_332(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_570(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_796(&uVar7);
					if (func_677(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_581()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_797(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_797(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_797(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_797(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_797(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_797(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_582(var uParam0)
{
	return uParam0->f_1;
}

void func_583(var uParam0)
{
	func_798(uParam0);
	func_800(uParam0, func_799(-1346384396));
	func_801(uParam0, func_799(-712836614));
	func_802(uParam0, func_799(-1629133289));
	func_803(uParam0, func_799(1302066700));
	func_804(uParam0, func_799(599669344));
	func_805(uParam0, func_799(-1555511632));
}

void func_584(struct<6> Param0)
{
	if (!func_806(Param0.f_4, 1))
	{
	}
	if (!func_806(Param0, 1))
	{
	}
	if (!func_806(Param0.f_2, 1))
	{
	}
	if (!func_806(Param0.f_5, 1))
	{
	}
	if (!func_806(Param0.f_3, 1))
	{
	}
	if (!func_806(Param0.f_1, 1))
	{
	}
}

int func_585(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_481())
	{
		if (func_807())
		{
			bVar0 = false;
			if (!func_94(Global_1835011[15 /*74*/].f_1, 1) && !func_429(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_808();
				*iParam1 = func_809();
				*iParam2 = func_810();
				return 1;
			}
			else
			{
				*iParam0 = func_811();
				*iParam1 = func_812();
				*iParam2 = func_813();
				return 1;
			}
		}
		else if (func_814())
		{
			if (!func_94(Global_1835011[60 /*74*/].f_1, 1))
			{
				*iParam0 = func_815();
				*iParam1 = func_816();
				*iParam2 = func_817();
				return 1;
			}
			else
			{
				*iParam0 = func_818();
				*iParam1 = func_819();
				*iParam2 = func_820();
				return 1;
			}
		}
	}
	else if (func_807())
	{
		*iParam0 = func_821();
		*iParam1 = func_822();
		*iParam2 = func_823();
		return 1;
	}
	else if (func_814())
	{
		*iParam0 = func_824();
		*iParam1 = func_825();
		*iParam2 = func_826();
		return 1;
	}
	return 0;
}

int func_586(int iParam0)
{
	iParam0 = func_827(iParam0);
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

void func_587(int iParam0, int iParam1)
{
	iParam0 = func_827(iParam0);
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

void func_588(int iParam0, int iParam1)
{
	iParam0 = func_827(iParam0);
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

void func_589(int iParam0, int iParam1)
{
	iParam0 = func_827(iParam0);
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

void func_590(int iParam0, int iParam1)
{
	iParam0 = func_827(iParam0);
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

bool func_591(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_828(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_754(0) };
	if (func_829(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_592(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_830(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_677(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_593(int iParam0)
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

int func_594(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_332(iParam1, 0))
	{
		return 0;
	}
	if (!func_831(iParam1))
	{
		return 0;
	}
	if (func_591(iParam0))
	{
		return 0;
	}
	iVar0 = func_828(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_754(0) };
	Var1.f_4 = iVar0;
	if (!func_680(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_595(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_332(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_570(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_796(&Var7);
					if (func_680(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_681(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_596()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_597(int iParam0)
{
	int iVar0;

	if (!func_428(iParam0))
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

bool func_598(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_115() == -1)
	{
		if (func_832(iParam0) && func_833(iParam0))
		{
			func_834(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_599(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_835(iParam0, iParam1);
	Var0 = { func_526(iParam0, 0, 1) };
	iVar5 = func_836(iParam0, &Var0, 0, 0);
	iVar6 = func_837(iParam0, 0);
	if ((iVar5 > 1 && !func_838()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_547(iParam0, -2051813666))
		{
			func_607(583, 1);
		}
		else
		{
			func_607(582, 0);
		}
	}
	if (func_839(iParam0, &Var0, *iParam1, 0, 0))
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

void func_600(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_840(iParam0, -949239683))
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

bool func_601(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_602(iParam0) != 0;
}

int func_602(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_841())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_842(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_603(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_604(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_841())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_603(iVar0))
		{
			if (func_418(func_842(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_605(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_843(48);
	func_308(0, -1);
}

bool func_606(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_94(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_607(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_844(iParam0, &iVar0, &iVar1);
	if (!func_845(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_846(iVar0, iVar1);
}

int func_608(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_609(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_610(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	return func_94(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_611(int iParam0)
{
	if (func_115() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	return func_419(Global_1347702[iParam0 /*49*/].f_15);
}

int func_612()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_418(func_847(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_613(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_481() && (func_611(38) || func_606(38)))
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
			if (func_481() && (func_611(39) || func_606(39)))
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
			iVar9 = func_848(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_481() && (func_611(41) || func_606(41)))
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
			if (func_481() && (func_611(49) || func_606(49)))
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
			iVar9 = func_848(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_849(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_850(iParam0, iVar13, iVar14))
	{
	}
	if (func_851(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_852(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_853(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_854(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_855(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_614(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_615(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_481() && (func_611(38) || func_606(38)))
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
			if (func_481() && (func_611(39) || func_606(39)))
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
			if (func_481() && (func_611(49) || func_606(49)))
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
		if (func_481() && (func_611(38) || func_606(38)))
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
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_858(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_857(func_609(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_481() && (func_611(39) || func_606(39)))
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
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_481() && (func_611(49) || func_606(49)))
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
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_856(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_616(int iParam0, int iParam1)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_617(int iParam0)
{
	if (!func_682(iParam0))
	{
		return;
	}
	func_859(iParam0);
	func_860(iParam0);
}

int func_618(int iParam0, bool bParam1)
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
	if (func_332(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_861(iVar0) || func_862(iVar0))
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

int func_619(int iParam0, bool bParam1)
{
	if (!func_332(iParam0, 0))
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

bool func_620(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_622(iParam0))
	{
		return false;
	}
	if (!func_524(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_621(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_619(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_115() == -1)
		{
			func_424(iVar0);
			if (iParam1 == 1248274121)
			{
				func_863(iVar0);
			}
		}
		if (!func_839(iParam0, &uVar1, 1, 0, 0))
		{
			func_834(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_864(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_425(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_425(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_425(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_814())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_865(iVar0))
				{
					func_425(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_425(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_866(Global_35, 2, 0, 1);
				if ((((func_428(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_429(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_428(iVar7) && func_429(24))
				{
					if (!func_425(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_425(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_425(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_607(480, 1);
	}
	return true;
}

bool func_622(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_623(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_622(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_428(iVar4))
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
	if (func_418(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_656(func_867(iParam0), func_655(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_115() == -1)
		{
			if (func_94(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_607(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_524(0))
	{
		if (func_620(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_661(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_624(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_596()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_868(Global_35, iParam0, &uVar0))
		{
			func_641(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_647();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_647();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_647();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_645();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_643();
			break;
	}
}

void func_625(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_643();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_644();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_645();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_646();
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
			func_647();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_869();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_870();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_626(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_627(int iParam0)
{
	bool bVar0;

	bVar0 = func_547(iParam0, -2017733358);
	if (func_871() < 3)
	{
		if (bVar0)
		{
			if (func_873(func_872(iParam0), iParam0))
			{
				func_656(79, func_655(func_872(iParam0)), 1);
			}
			else
			{
				func_656(78, func_655(func_872(iParam0)), 1);
			}
		}
		else
		{
			func_656(80, func_655(func_874(iParam0)), 1);
		}
	}
}

bool func_628()
{
	if (((((func_875(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_875(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_875(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_875(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_875(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_875(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_629(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_876(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_669(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_670(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_630(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_615(51, 0, 0, 0, 0, -1, 0);
			func_877(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_615(51, 0, 0, 0, 0, -1, 0);
			func_877(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_613(39, 0, 0, 0, 0, 0, 1, 0);
			func_615(39, 0, 0, 0, 0, -1, 0);
			func_878(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_613(41, 0, 0, 0, 0, 0, 1, 0);
			func_615(41, 0, 0, 0, 0, -1, 0);
			func_879(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_613(49, 0, 0, 0, 0, 0, 1, 0);
			func_615(49, 0, 0, 0, 0, -1, 0);
			func_880(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_881(1), 0, -1, 0);
			func_882(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_881(2), 0, -1, 0);
			func_882(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_881(4), 0, -1, 0);
			func_882(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_881(8), 0, -1, 0);
			func_882(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_613(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_881(16), 0, -1, 0);
			func_882(16);
			break;
	}
}

void func_631(int iParam0)
{
	if (func_883() == 1)
	{
		if (func_606(39))
		{
			func_607(342, 0);
		}
		else
		{
			func_607(343, 0);
			func_878(1);
		}
	}
	if (func_883() >= 30)
	{
		func_607(344, 0);
	}
	func_613(39, 0, 0, 0, 0, 0, -1, 0);
	func_615(39, 0, 0, func_883(), 30, 1, 0);
}

void func_632(int iParam0)
{
	if (func_884() == 1)
	{
		if (func_606(49))
		{
			func_607(409, 0);
		}
		else
		{
			func_607(410, 0);
			func_880(1);
		}
	}
	if (func_884() >= 10)
	{
		func_607(411, 0);
	}
	func_613(49, 0, 0, 0, 0, 0, -1, 0);
	func_615(49, 0, 0, func_884(), 10, 1, 0);
}

void func_633(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_607(437, 0);
			func_607(440, 0);
			func_885(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_615(51, 0, 0, sVar0, func_848(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_877(1);
			func_484(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_885(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_615(51, 0, 0, sVar0, func_848(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_877(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_885(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_615(51, 0, 0, sVar0, func_848(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_877(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_885(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_615(51, 0, 0, sVar0, func_848(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_877(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_607(438, 0);
			func_885(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_613(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_615(51, 0, 0, sVar0, func_848(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_877(32768);
			break;
		default:
			func_607(439, 0);
			break;
	}
}

void func_634()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_635(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_115() == -1)
	{
		if (!func_606(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_607(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_607(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_607(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_607(400, 0);
			}
		}
		else if (func_547(iParam0, 412399755))
		{
			func_886(joaat("EXOTIC_STAGE_01"));
			if (func_887() == 0)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_606(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_607(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_607(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_607(401, 0);
			}
		}
		else if (func_547(iParam0, 709057512))
		{
			func_886(joaat("EXOTIC_STAGE_02"));
			if (func_887() == 1)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_606(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_607(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_607(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_607(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_607(398, 0);
			}
		}
		else if (func_547(iParam0, -1478961327))
		{
			func_886(joaat("EXOTIC_STAGE_03"));
			if (func_887() == 2)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_891(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_892(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_843(48);
					}
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_606(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_607(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_607(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_607(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_607(406, 0);
			}
		}
		else if (func_547(iParam0, -1238404098))
		{
			func_886(joaat("EXOTIC_STAGE_04"));
			if (func_887() == 3)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_606(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_607(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_607(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_607(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_607(403, 0);
			}
		}
		else if (func_547(iParam0, 1160548794))
		{
			func_886(joaat("EXOTIC_STAGE_05"));
			if (func_887() == 4)
			{
				func_308(0, 10);
				iVar1 = func_888(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_889(iParam0) < func_890(iParam0))
					{
						func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_615(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_636(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_891(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_892(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_843(48);
		}
	}
}

void func_637(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_418(func_893(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_894(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_895(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_638(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_115() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_629(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_629(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_629(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_629(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_629(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_629(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_629(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_629(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_629(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_629(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_629(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_629(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_629(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_896())
			{
				func_629(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_629(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_629(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_629(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_629(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_629(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_629(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_629(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_629(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_639(int iParam0)
{
	if (func_606(41))
	{
		func_607(363, 0);
	}
	else
	{
		func_607(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_01"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_02"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_03"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_04"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_05"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_06"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_07"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_08"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_09"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_10"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_11"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_12"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_13"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_308(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_897(joaat("LEGENDARY_FISH_14"));
			func_898(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_899(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_640(int iParam0, int iParam1)
{
	var uVar0;

	func_741(iParam0, iParam1, &uVar0);
}

int func_641(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_526(iParam1, 1, 0) };
		iParam3 = func_527(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_556(iParam1, iParam2, func_338(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_900(1, (func_115() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_338(iParam3, 1) /*11*/])
			{
				func_552(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_765(32768) && iParam1 != Global_1946804.f_57[func_338(iParam3, 1) /*11*/])
			{
				func_901();
				func_552(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_552(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_902(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_552(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_903(0);
			func_904(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_552(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_642(int iParam0, bool bParam1)
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
	iVar18 = func_866(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_866(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_672("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_673(&Var3, iVar2, iVar0, iVar1))
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
						func_566(iVar0);
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

void func_643()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_644()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_645()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_646()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_647()
{
	func_905();
	func_906();
	func_907();
}

void func_648(int iParam0, int iParam1, bool bParam2)
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

void func_649(int iParam0, bool bParam1)
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
	func_856(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_650(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_651(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_652(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_653(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_654(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_655(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_656(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_844(iParam0, &iVar0, &iVar1);
	if (!func_845(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_908(iParam0, 1024))
	{
		return;
	}
	func_846(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_657(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_844(iParam0, &iVar0, &iVar1);
	if (!func_845(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_908(iParam0, 1024))
	{
		return;
	}
	func_846(iVar0, iVar1);
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

int func_658()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_841())
	{
		return func_659();
	}
	iVar4 = (func_841() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_841())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_909(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_842(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_659()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_841());
	return func_842(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_660(int iParam0)
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

bool func_661(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_526(iParam0, 0, 1) };
	Var5 = { func_569(iParam0, Var0, Var0.f_4, 0) };
	return func_680(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_662(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_115() != -1)
	{
		return;
	}
	switch (func_371(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_910(81053684, 0) <= 0)
			{
				func_552(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_552(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_793(iParam0);
			if (func_730(iVar0))
			{
				func_911(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_552(30, iParam0, 0, 0, 0);
			}
			if (func_339() == -2125499975 || func_339() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_552(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_339() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_552(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_912(-525676072, 0))
			{
				if (func_913(-525676072, &iVar1))
				{
					func_552(33, iVar1, 0, 0, 0);
				}
			}
			func_552(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_544(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_641(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_617(24);
		if (func_642(&iVar2, 0))
		{
			func_425(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_663(int iParam0)
{
	if (func_547(iParam0, 943695443))
	{
		func_914(0, iParam0);
	}
	else if (func_547(iParam0, -2096528786))
	{
		func_914(1, iParam0);
	}
	else if (func_547(iParam0, -1094167013))
	{
		func_914(2, iParam0);
	}
	else if (func_547(iParam0, 1936654645))
	{
		func_914(3, iParam0);
	}
	else if (func_547(iParam0, 1306489306))
	{
		func_914(4, iParam0);
	}
	else if (func_547(iParam0, 435762317))
	{
		func_914(5, iParam0);
	}
	else if (func_547(iParam0, 1259363210))
	{
		func_914(6, iParam0);
	}
	else if (func_547(iParam0, 881398259))
	{
		func_914(7, iParam0);
	}
	else if (func_547(iParam0, -541549214))
	{
		func_914(8, iParam0);
	}
	else if (func_547(iParam0, 130796156))
	{
		func_914(-1, iParam0);
	}
}

int func_664(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_915(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_916(iParam0, &Var4, &uVar0, iParam1);
}

void func_665(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_115() == -1)
			{
				if (func_94(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_607(109, 1);
				}
			}
			break;
	}
}

void func_666(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_918(func_917(0));
	func_747(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_919(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_667(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_920(1) < iParam0)
	{
		iParam0 = func_920(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_748(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_668(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_669(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_670(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_921())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_747(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_922(iVar0);
			func_923(iVar0, 0, 0);
		}
		func_747(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_471(func_748(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_671(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_517(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_672("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_673(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_428(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_566(iVar1);
				return true;
			}
			iVar3++;
		}
		func_566(iVar1);
	}
	return false;
}

bool func_672(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_571(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_673(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_674(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_924(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

int func_675(int iParam0, int iParam1)
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

bool func_676(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_570(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_677(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_925(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_758(*uParam1, &Var0, bParam6, 0))
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
	if (!func_524(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_571(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_678(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_926(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_679(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_571(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_758(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_680(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_332(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return false;
	}
	if (func_839(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_524(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_571(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_681(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_524(0))
	{
		return func_927(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_758(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_571(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_682(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_683(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_684(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_430(iParam0))
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
	if (!func_430(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_685(int iParam0)
{
	if (!func_430(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_686(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_332(iParam1, 0))
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 200)
	{
		if (uParam0->f_1[iVar1 /*5*/] == iParam1)
		{
			uParam0->f_1[iVar1 /*5*/].f_1 = (uParam0->f_1[iVar1 /*5*/].f_1 + iParam2);
			uParam0->f_1[iVar1 /*5*/].f_3 = func_457();
			uParam0->f_1[iVar1 /*5*/].f_4 = 0;
			uParam0->f_1003 = (uParam0->f_1003 + iParam2);
			uParam0->f_1004 = (uParam0->f_1004 + (BUILTIN::TO_FLOAT(iParam2) * IntToFloat(func_928(iParam1, 816454899, 0))));
			uParam0->f_1005 = (uParam0->f_1005 + (iParam2 * func_929(iParam1)));
			uParam0->f_1[iVar1 /*5*/].f_2 = iParam3;
			return;
		}
		else if (uParam0->f_1[iVar1 /*5*/] == 0 && iVar0 == -1)
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = iParam2;
	if (uParam0->f_1002 == 0 || uParam0->f_1002 == 1)
	{
	}
	uParam0->f_1[iVar0 /*5*/] = iParam1;
	uParam0->f_1[iVar0 /*5*/].f_1 = iVar2;
	uParam0->f_1[iVar0 /*5*/].f_3 = func_457();
	uParam0->f_1[iVar0 /*5*/].f_4 = 0;
	uParam0->f_1[iVar0 /*5*/].f_2 = iParam3;
	*uParam0++;
	uParam0->f_1003 = (uParam0->f_1003 + iParam2);
	uParam0->f_1004 = (uParam0->f_1004 + (BUILTIN::TO_FLOAT(iParam2) * IntToFloat(func_928(iParam1, 816454899, 0))));
	uParam0->f_1005 = (uParam0->f_1005 + (iParam2 * func_929(iParam1)));
}

void func_687(int iParam0, int iParam1)
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

void func_688(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_689(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_707(*iParam0);
	iVar1 = func_706(*iParam0);
	if (iParam1 < 1 || iParam1 > func_712(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_690(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_691(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_692(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_693(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_930(iParam0);
	}
	else
	{
		func_931(iParam0, iParam1);
	}
	func_932();
}

bool func_694(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_695(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_696(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_697(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_698(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/] = iParam1;
}

void func_699(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/].f_1 = iParam1;
}

int func_700(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_933(vParam0, 0f, 0f, 0, 2);
	return func_933(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_701(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945938[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3);
}

void func_702(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_701(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_934(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_935(iVar0);
	*uParam0 = 0;
}

bool func_703(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_704(int iParam0)
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

bool func_705(vector3 vParam0, int iParam3, var uParam4, int iParam5, int* iParam6, bool bParam7)
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

int func_706(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_441(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_707(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_708(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_709(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_710(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_711(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_712(int iParam0, int iParam1)
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

int func_713(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_936(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_714(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_715(int iParam0)
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

void func_716(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_717(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_718(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

void func_719()
{
	func_303(-939420910);
	func_303(-1187950766);
	func_303(356365161);
	func_303(753127042);
	func_303(-2038424081);
	func_303(1884271742);
	func_303(459290420);
}

void func_720()
{
	func_303(704802028);
	func_303(588987611);
	func_303(2008888900);
	func_303(1649996811);
	func_303(227918160);
	func_303(168171957);
	func_303(1193080109);
	func_303(-491981251);
	func_303(-639037538);
	func_303(-618620429);
}

bool func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_464(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_722(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_723(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_724()
{
	return Global_1109400.f_245;
}

void func_725(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/] = (Global_1058888.f_40615[iParam0 /*11*/] - (Global_1058888.f_40615[iParam0 /*11*/] && iParam1));
}

int func_726()
{
	return Global_40.f_4283.f_324;
}

void func_727(int iParam0, bool bParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_324 + iParam0) < 0)
	{
		return;
	}
	func_937((Global_40.f_4283.f_324 + iParam0));
	if (bParam1)
	{
		func_938(9, iParam0);
	}
}

void func_728(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_939(310186733))
	{
		Global_40.f_4283.f_307.f_3 = (Global_40.f_4283.f_307.f_3 + iParam0);
		if (Global_40.f_4283.f_307.f_3 >= 5000)
		{
			func_940(310186733);
		}
	}
}

void func_729(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_939(-1959946884))
	{
		Global_40.f_4283.f_307.f_4 = (Global_40.f_4283.f_307.f_4 + iParam0);
		if (Global_40.f_4283.f_307.f_4 >= 3)
		{
			func_940(-1959946884);
		}
	}
}

bool func_730(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

var func_731()
{
	return Global_1946804.f_2792;
}

int func_732(int iParam0)
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

void func_733(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 - (Global_1946804.f_2657.f_26.f_6 && iParam0));
}

int func_734(int iParam0)
{
	if (!func_289(iParam0))
	{
		return 0;
	}
	return func_941(func_449(iParam0));
}

void func_735(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 || iParam0);
}

void func_736(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar8;

	iVar8 = func_534(iParam0, 1);
	Var1 = iParam2;
	Var1.f_1 = uParam1;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -624749060))
		{
		}
		else
		{
			func_942(iVar8, func_351(iVar0), 7);
		}
	}
}

void func_737(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar8;

	Var1 = iParam2;
	Var1.f_1 = uParam1;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (Global_1946804.f_57[iParam0 /*11*/].f_1 >= 5)
		{
			return;
		}
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, joaat("TAG")))
		{
		}
		else
		{
			Global_1946804.f_57[iParam0 /*11*/].f_2[Global_1946804.f_57[iParam0 /*11*/].f_1] = iVar0;
			Global_1946804.f_57[iParam0 /*11*/].f_1++;
			iVar8 = func_943(iVar0);
			if (iVar8 == -1)
			{
			}
			else
			{
				func_944(iVar8, Global_1946804.f_57[iParam0 /*11*/].f_9, 9);
			}
		}
	}
}

bool func_738(int iParam0, int iParam1)
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

void func_739(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_945(iParam1);
	func_946(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_947(&(uParam0->f_26), iVar1);
		if (func_948(uParam0->f_26, &iVar0))
		{
			func_949(iVar0, iVar1);
		}
	}
}

int func_740(int iParam0)
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

void func_741(int iParam0, int iParam1, var uParam2)
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

bool func_742()
{
	return !Global_1911774;
}

void func_743(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_744(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_745(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_746(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_747(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_950(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_748(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_749(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_564(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_751(&Var0, func_750(0));
	}
	if (!func_565(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_566(iVar14);
	return iVar15;
}

struct<4> func_750(bool bParam0)
{
	int iVar0;

	iVar0 = func_571(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_569(923904168, func_754(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_569(923904168, func_754(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_569(923904168, func_754(bParam0), -740156546, 0);
}

void func_751(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_752(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_925(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_524(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_571(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_753(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_115() == -1)
	{
		if (func_606(43))
		{
			if (func_547(iParam0, 412399755))
			{
				func_886(joaat("EXOTIC_STAGE_01"));
				if (func_887() == 0)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_606(44))
		{
			if (func_547(iParam0, 709057512))
			{
				func_886(joaat("EXOTIC_STAGE_02"));
				if (func_887() == 1)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(45))
		{
			if (func_547(iParam0, -1478961327))
			{
				func_886(joaat("EXOTIC_STAGE_03"));
				if (func_887() == 2)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(46))
		{
			if (func_547(iParam0, -1238404098))
			{
				func_886(joaat("EXOTIC_STAGE_04"));
				if (func_887() == 3)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(47))
		{
			if (func_547(iParam0, 1160548794))
			{
				func_886(joaat("EXOTIC_STAGE_05"));
				if (func_887() == 4)
				{
					func_308(0, 10);
					iVar0 = func_951(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_889(iParam0) < func_890(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

struct<4> func_754(bool bParam0)
{
	return func_569(joaat("CHARACTER"), func_952(), -1591664384, bParam0);
}

bool func_755(int iParam0, bool bParam1)
{
	if (func_371(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_429(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_756(bool bParam0)
{
	int iVar0;

	iVar0 = func_571(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_569(271701509, func_754(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_569(271701509, func_754(bParam0), 12999093, 0);
}

bool func_757(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_371(iParam0);
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

bool func_758(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_571(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_759(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -888790689;
		case 1:
			return -2126063412;
		case 2:
			return -368305354;
		case 3:
			return -1500843424;
		case 4:
			return 2034750397;
		case 5:
			return -1689805015;
		case 6:
			return 1855421528;
		case 7:
			return -1844483462;
		case 8:
			return -618101597;
		case 9:
			return -516195177;
		case 10:
			return 1193363351;
		default:
			break;
	}
	return 0;
}

int func_760(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_761(int iParam0)
{
	if (func_339() == 1160113249)
	{
		switch (iParam0)
		{
			case 0:
				return 1331190543;
			case 1:
				return 1336948195;
			case 2:
				return 216184750;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("CLOTHING_ITEM_BEARD_SINGLE");
		case 1:
			return joaat("CLOTHING_ITEM_CHOPS_NORMAL");
		case 2:
			return joaat("CLOTHING_ITEM_STACHE_NORMAL");
		default:
			break;
	}
	return 0;
}

void func_762(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (func_339() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar2 = 1;
	}
	iVar0 = func_953(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 1;
		if (((iVar0 == -1906834168 && uParam0->f_1[iVar1 /*3*/] != func_954()) || iVar0 == -452152720) || iVar0 == -70852636)
		{
			uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946804.f_2656 = iParam1;
		}
		else if (func_760(uParam0->f_1[iVar1 /*3*/], iVar2, iVar0, func_115() != -1) != -1)
		{
			uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946804.f_2656 = iParam1;
		}
	}
}

void func_763(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_955(uParam0, 1))
	{
		func_956(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_764(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_531(iParam1) != iParam2)
	{
		return false;
	}
	if (func_528(2, iParam1))
	{
		func_343(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_765(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_766(int iParam0)
{
	func_540(iParam0, 8, 6);
}

void func_767(int iParam0)
{
	func_541(iParam0, 8, 6);
}

void func_768(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_115() != -1;
	iVar7 = func_957(0);
	if (func_765(32768))
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
			iVar5 = func_534(iVar0, 1);
			if (func_539(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_539(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_958(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_959(uParam0);
				if (iVar3 > 0)
				{
					if (!func_765(524288))
					{
						func_532(524288);
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
							iVar5 = func_534(iVar0, 1);
							if (func_539(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_539(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_958(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_543(iVar0, iParam2);
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
					func_513(524288);
				}
			}
		}
	}
}

void func_769(struct<4> Param0)
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
			if (func_960(Param0))
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
			func_961(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_532(8);
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
			if (func_960(Param0))
			{
				return;
			}
			func_961(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_532(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_904(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_770(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

bool func_771(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 10)
	{
		return false;
	}
	return true;
}

bool func_772(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_773(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
		case 10:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_963(uParam1, uParam2, &uVar0, &uVar1, 0, func_962(iParam0));
	}
}

int func_774(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/];
}

int func_775(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_547(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_776(int iParam0)
{
	func_964(&(Global_1946804.f_2589), iParam0);
}

int func_777(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_957(0);
	if (iParam2 != 0 && func_760(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_354(iParam0, func_534(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

bool func_778(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

bool func_779()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_780(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_963(uParam1, uParam2, &uVar0, &uVar1, 0, func_965());
	}
}

int func_781()
{
	return Global_40.f_7748.f_1;
}

void func_782(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_966(&(uParam0->f_3));
}

void func_783(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_967(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_784(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

float func_785()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_786(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_787(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_788(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;

	iVar8 = 0;
	if (!func_968(iParam0, func_339()))
	{
		return 0;
	}
	Var1 = func_350(func_339());
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

int func_789(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	iVar19 = func_350(func_339());
	Var20 = { func_564(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_565(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_673(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_793(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_542(&(Global_1946804.f_964), iVar19, Var5.f_4, joaat("COMPONENT"), 1, (*uParam1)[iVar3]);
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
	func_566(iVar0);
	return 1;
}

void func_790(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_738(iVar2, &iVar0))
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

void func_791(var uParam0)
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

void func_792(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_115() == -1)
	{
		Global_26796.f_26[iParam0 /*120*/] = 0;
		Global_26796.f_26[iParam0 /*120*/].f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = Global_1946804.f_57[iVar0 /*11*/];
			func_342(&uVar1, iVar0, iParam0);
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
		func_548(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

int func_793(int iParam0)
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

void func_794(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_730(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

int func_795(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_359(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_531(iParam1);
	}
	if ((bParam3 && func_969(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_968(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_794(Global_40.f_7729, 4096);
		func_503(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_970(iParam0);
	}
	func_971();
	if (!func_972(iParam1))
	{
		func_973(iVar0, iParam0, func_360(iParam1), 1, 0, 1);
	}
	func_974(iParam0);
	return 1;
}

void func_796(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_797(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_975(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_579() };
	*uParam1 = func_976(Var0, iParam0, 0);
	if (!func_332(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_798(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_799(int iParam0)
{
	if (func_807())
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
	else if (func_814())
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

void func_800(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_801(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_802(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_803(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_804(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_805(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_806(int iParam0, int iParam1)
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

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (!func_977(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_579() };
	Var14 = { func_569(iParam0, Var10, iVar9, 0) };
	if (func_681(Var14, iParam1))
	{
		if (func_978(iParam0))
		{
			if (func_797(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_806(iVar18, 0))
				{
				}
			}
		}
		else if (func_979(iParam0))
		{
			if (func_797(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_806(iVar19, 0))
				{
				}
			}
			if (func_797(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_806(iVar20, 0))
				{
				}
			}
			iVar21 = func_980(iParam0);
			if (func_332(iVar21, 0))
			{
				if (func_806(iVar21, 1))
				{
				}
			}
		}
		func_981();
		return true;
	}
	return false;
}

bool func_807()
{
	if (func_115() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_808()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_809()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_810()
{
	return 1;
}

int func_811()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_812()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_813()
{
	return 1;
}

bool func_814()
{
	if (func_115() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_815()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_816()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_817()
{
	return 2;
}

int func_818()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_819()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_820()
{
	return 1;
}

int func_821()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_822()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_823()
{
	return 1;
}

int func_824()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_825()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_826()
{
	return 1;
}

int func_827(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_828(int iParam0)
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

int func_829(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_571(bParam2), uParam0, iParam1);
}

bool func_830(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_591(iParam0))
	{
		return false;
	}
	iVar0 = func_828(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_754(0) };
	if (!func_982(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_983(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_831(int iParam0)
{
	return func_521(iParam0) == joaat("HORSE");
}

bool func_832(int iParam0)
{
	return func_521(iParam0) == joaat("WEAPON");
}

bool func_833(int iParam0)
{
	var uVar0;

	if (func_115() != -1)
	{
		return false;
	}
	if (func_616(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_839(iParam0, &uVar0, 1, 0, 0);
	}
	return func_418(iParam0, 1, 0);
}

void func_834(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_521(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_619(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_862(iVar0))
	{
		if (func_115() == -1)
		{
			func_424(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_520(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_518(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_835(int iParam0, int iParam1)
{
	int iVar0;

	if (func_547(iParam0, 58855631))
	{
		func_984(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_836(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!func_524(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_985(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_571(bParam3), iParam0);
}

int func_837(int iParam0, bool bParam1)
{
	if (func_622(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_571(bParam1), iParam0, 0);
}

bool func_838()
{
	if (func_115() != -1)
	{
		return false;
	}
	if (!func_481())
	{
		return false;
	}
	if (!func_94(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[2 /*74*/].f_1, 1) && func_94(Global_1347702[120 /*49*/].f_15, 1)) && !func_94(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[37 /*74*/].f_1, 1) && !func_94(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[57 /*74*/].f_1, 1) && !func_94(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[26 /*74*/].f_1, 1) && !func_94(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[62 /*74*/].f_1, 1) && func_94(Global_1835011[63 /*74*/].f_1, 1)) && !func_94(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[75 /*74*/].f_1, 1) && !func_94(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_94(Global_1835011[76 /*74*/].f_1, 1) && !func_94(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[40 /*74*/].f_1, 1) && func_94(Global_1835011[41 /*74*/].f_1, 1)) && !func_94(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[62 /*74*/].f_1, 1) && func_94(Global_1835011[63 /*74*/].f_1, 1)) && !func_94(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_94(Global_1835011[65 /*74*/].f_1, 1) && func_94(Global_1835011[66 /*74*/].f_1, 1)) && !func_94(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_839(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_986(&iParam0);
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (!func_524(0))
	{
		bParam3 = true;
	}
	if (func_832(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_750(0) };
			Var4.f_9 = -1591664384;
			if (!func_676(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_674(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_755(iParam0, 1))
			{
				if (!func_676(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_674(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_987(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_836(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_985(iParam0))
	{
		iVar28 = func_570(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_571(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_840(int iParam0, int iParam1)
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

int func_841()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_842(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_843(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_115() != -1)
	{
		return;
	}
	iVar0 = func_988(iParam0);
	fVar1 = func_989(iParam0);
	if ((Global_1347477.f_117 || !func_429(31)) || !func_990(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_991(iVar0) >= 7)
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
	func_992(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_747(MISC::VAR_STRING(6, func_993(iParam0), fVar1), "itemtype_textures", func_994(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_844(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_845(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_995(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_996(iParam0))
	{
		return false;
	}
	if (func_997(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_908(iParam0, 1)) || func_465(32768))
	{
		if (!func_908(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_998())
	{
		return false;
	}
	return true;
}

void func_846(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_847(int iParam0)
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

int func_848(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_999(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_849(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_612() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1000(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1001(), 12);
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
			else if (func_883() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1002(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_883(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1003(), 13);
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
			else if (func_884() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1004(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_884(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_848(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_850(int iParam0, int iParam1, int iParam2)
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

bool func_851(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_852(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_853(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1005(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_418(iVar2, 1, 0) || func_1007(func_1006(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_857(func_1005(iVar0))), func_857(func_1005(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_883() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1008(iVar0)), func_1008(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1002() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1008(iVar0)), func_1008(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1008(iVar0)), func_1008(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_893(iParam3, func_1009(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_889(iVar2) - iParam7) >= func_848(iParam3, func_1010(iVar0));
				}
				else
				{
					bVar1 = func_889(iVar2) >= func_848(iParam3, func_1010(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_889(iVar2) + iParam7) >= func_848(iParam3, func_1010(iVar0));
			}
			else
			{
				bVar1 = func_889(iVar2) >= func_848(iParam3, func_1010(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1011(iVar2)), func_1011(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1012(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1013(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1013(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_884() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1014(iVar0)), func_1014(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1004() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1014(iVar0)), func_1014(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1014(iVar0)), func_1014(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_893(iParam3, func_1009(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_889(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1015(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1015(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1016(iVar2)), func_1016(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_854(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1003() >= 13)
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

bool func_855(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_289(func_506(0)) && ((func_1017(0) == 1 || func_1017(0) == 8) || func_1017(0) == 6))
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

var func_856(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_857(int iParam0)
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

var func_858(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
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

void func_859(int iParam0)
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

void func_860(int iParam0)
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
			func_1018(1);
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
			func_1019(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1019(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1019(3);
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
			func_1020(1);
			break;
		case 34:
			func_1021(1);
			break;
		case 35:
			func_1022(1);
			break;
		case 36:
			break;
		case 37:
			func_1023(0);
			break;
		case 38:
			func_1024(0);
			break;
		case 39:
			func_1025(0);
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
			if ((!Global_1879534 && func_481()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_607(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_481()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_607(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_481()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_607(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_481()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_607(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_115() == -1)
			{
				if (!func_544(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1026(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_814())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_418(iVar0, 1, 0))
					{
						func_661(iVar0, 1, 752097756);
					}
					func_641(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_115() == -1)
			{
				if (!func_418(1013902307, 1, 0))
				{
					func_661(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_115() == -1)
			{
				if (!func_418(1013902307, 1, 0))
				{
					func_661(1013902307, 1, 752097756);
				}
				if (!func_418(142640135, 1, 0))
				{
					func_661(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_115() == -1)
			{
				if (!func_418(786809402, 1, 0))
				{
					func_661(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_115() == -1)
			{
				if (!func_418(786809402, 1, 0))
				{
					func_661(786809402, 1, 752097756);
				}
				if (!func_418(-518019409, 1, 0))
				{
					func_661(-518019409, 1, 752097756);
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
			func_1027();
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

bool func_861(int iParam0)
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

bool func_862(int iParam0)
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

void func_863(int iParam0)
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
	iVar2 = func_457();
	func_458(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_864(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1028(iParam0))
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

bool func_865(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_866(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_867(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_429(50))
			{
				if (!func_429(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_429(51))
			{
				if (!func_429(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_868(int iParam0, int iParam1, var uParam2)
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

	if (!func_332(iParam1, 0))
	{
		return false;
	}
	if (func_521(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_115() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_371(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_337(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_547(iParam1, 866047851))
	{
		iVar5 = func_338(iVar4, 1);
		if (func_775(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
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
			iVar3 = func_371(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && func_547(iParam1, -1638171711))
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
			if (func_1029(1868067663, &uVar0))
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
				iVar10 = func_958(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_958(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_371(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_547(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
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

void func_869()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_870()
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

int func_871()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_418(func_1030(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_872(int iParam0)
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

bool func_873(int iParam0, int iParam1)
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
	if (func_418(iVar0, 1, 0) && func_418(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_874(int iParam0)
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

bool func_875(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1031(iParam0);
	if (iVar0 != -15)
	{
		func_458(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1032(iVar0, 1);
	}
	return false;
}

int func_876(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_418(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_332(iVar25, 0) && func_547(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_877(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_878(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_879(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_880(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_881(int iParam0)
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
	iVar1 = func_889(iVar9);
	iVar2 = func_889(iVar10);
	iVar3 = func_889(iVar11);
	iVar5 = func_890(iVar9);
	iVar6 = func_890(iVar10);
	iVar7 = func_890(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_889(iVar12);
		iVar8 = func_890(iVar12);
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

void func_882(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_883()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1033(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_884()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

bool func_885(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1015(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1015(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1015(iVar0))
		{
			*sParam2++;
		}
		if (func_1015(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1015(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1015(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1015(iVar0))
		{
			*sParam2++;
		}
		if (func_1015(iVar1))
		{
			*sParam2++;
		}
		if (func_1015(iVar0) && func_1015(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1015(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1015(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1015(iVar0))
		{
			*sParam2++;
		}
		if (func_1015(iVar1))
		{
			*sParam2++;
		}
		if (func_1015(iVar2))
		{
			*sParam2++;
		}
		if ((func_1015(iVar0) && func_1015(iVar1)) && func_1015(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1015(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1015(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1015(iVar0))
		{
			*sParam2++;
		}
		if (func_1015(iVar1))
		{
			*sParam2++;
		}
		if (func_1015(iVar2))
		{
			*sParam2++;
		}
		if (func_1015(iVar3))
		{
			*sParam2++;
		}
		if (((func_1015(iVar0) && func_1015(iVar1)) && func_1015(iVar2)) && func_1015(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_886(int iParam0)
{
	if (!func_1034(iParam0))
	{
		func_1036(func_1035(iParam0));
	}
}

int func_887()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1034(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_888(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_889(iVar9);
	iVar2 = func_889(iVar10);
	iVar3 = func_889(iVar11);
	iVar5 = func_890(iVar9);
	iVar6 = func_890(iVar10);
	iVar7 = func_890(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_889(iVar12);
		iVar8 = func_890(iVar12);
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

int func_889(int iParam0)
{
	int iVar0;

	if (func_418(iParam0, 1, 0))
	{
		iVar0 = func_520(iParam0, 0, 0);
	}
	return iVar0;
}

int func_890(int iParam0)
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

int func_891(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_892(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_893(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_999(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_894(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_893(iParam1, 5) || iParam0 == func_893(iParam1, 6)) || iParam0 == func_893(iParam1, 7)) || iParam0 == func_893(iParam1, 8)) || iParam0 == func_893(iParam1, 9))
	{
		func_885(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_613(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_615(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_895(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_893(iParam1, 5) || iParam0 == func_893(iParam1, 6)) || iParam0 == func_893(iParam1, 7)) || iParam0 == func_893(iParam1, 8)) || iParam0 == func_893(iParam1, 9))
	{
		if (func_885(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_613(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_615(51, 0, 0, iVar0, func_848(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_613(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_615(51, 0, 0, iVar0, func_848(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_896()
{
	if (func_419(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_897(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_898(int iParam0)
{
	if (!func_1037(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_899(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_900(bool bParam0, bool bParam1, bool bParam2)
{
	func_1038(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

void func_901()
{
	func_1039(&(Global_1946804.f_2776));
	func_513(32768);
	func_540(1108822547, 8, 6);
}

int func_902(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_338(iParam0, 1);
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

void func_903(int iParam0)
{
	struct<4> Var0;

	if (func_1040(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1041(Var0);
}

void func_904(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1041(Var0);
}

float func_905()
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

	if (func_1042())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1043(2);
	}
	if (Global_1347477.f_119)
	{
		return func_1043(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1044();
	fVar2 = func_1045();
	fVar3 = func_1046();
	fVar4 = func_1047();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1048()));
	fVar7 = (func_1043(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1049(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1050(3, fVar9, fVar9 > 100f);
	return func_1051(fVar7, -100f, 100f);
}

float func_906()
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

	if (func_1042())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1043(1);
	}
	if (Global_1347477.f_119)
	{
		return func_1043(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1044();
	fVar2 = func_1045();
	fVar3 = func_1046();
	fVar4 = func_1047();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1048()));
	fVar7 = (func_1043(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1049(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1050(2, fVar9, fVar9 > 100f);
	return func_1051(fVar7, -100f, 100f);
}

float func_907()
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

	if (func_1042())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1043(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1052())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1053())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_1043(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1044();
	fVar2 = func_1045();
	fVar3 = func_1046();
	fVar4 = func_1047();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1048()));
	fVar7 = (func_1043(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1049(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1050(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1043(0);
	}
	return func_1051(fVar7, -100f, 100f);
}

bool func_908(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_909(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_910(int iParam0, bool bParam1)
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
				return func_1054();
			}
			break;
	}
	return 0;
}

void func_911(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_730(iParam0))
	{
		return;
	}
	if (func_1055(iParam0))
	{
		return;
	}
	if (!func_1056(iParam0))
	{
		func_1057(iParam0, 1, 0);
	}
	iVar0 = func_359(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_969(iParam0, 512))
		{
			func_552(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1058() && !bParam1) && !func_394(0, 0, 1))
	{
		func_1059(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_503(iParam0, 6);
	if (bParam2)
	{
		if (!func_394(0, 0, 1))
		{
			func_308(1, 4);
		}
	}
}

bool func_912(int iParam0, bool bParam1)
{
	return func_910(iParam0, 0) < func_1060(iParam0, bParam1);
}

bool func_913(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_371(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_914(int iParam0, int iParam1)
{
	if (func_547(iParam1, 130796156))
	{
		func_1061(iParam1, 0);
	}
	else if (func_547(iParam1, 930141731))
	{
		func_1061(iParam1, 1);
		func_1062(iParam0);
	}
}

void func_915(var uParam0, int iParam1)
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

int func_916(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1063(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1064(uParam2, iParam0, Var1);
	return 1;
}

int func_917(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_918(int iParam0)
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

int func_919(int iParam0)
{
	var uVar0;

	if (!func_1065(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_920(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_921()
{
	if (func_596())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_922(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1066((Global_40.f_4283.f_325 + iParam0));
}

void func_923(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_921())
	{
		func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_924(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_571(0);
	*uParam1 = { func_569(iParam0, func_750(0), iParam3, 0) };
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

bool func_925(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_926(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_927(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_758(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_521(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_1067(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1068(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var45 = { func_1069(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_1070(joaat("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_1071(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_1072(joaat("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_928(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[10];
	int iVar21;
	int iVar22;

	if (!func_1073(iParam0, iParam1, &Var0, &iVar21, bParam2))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (Var0[iVar22 /*2*/] == joaat("CURRENCY_CASH"))
		{
			return Var0[iVar22 /*2*/].f_1;
		}
		else if (Var0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_929(int iParam0)
{
	int iVar0;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(iParam0, &iVar0))
	{
		return 0;
	}
	return func_1074(iVar0);
}

int func_930(int iParam0)
{
	int iVar0;

	iVar0 = func_740(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1075(iVar0);
}

int func_931(int iParam0, int iParam1)
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
			func_1076(iVar2);
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

void func_932()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

int func_933(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

var func_934(var uParam0)
{
	return uParam0;
}

void func_935(int iParam0)
{
	if (!func_1077(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1945938[iParam0 /*18*/].f_3);
	}
	Global_1945938[iParam0 /*18*/].f_4 = 0;
	Global_1945938[iParam0 /*18*/] = 1;
	Global_1945938[iParam0 /*18*/].f_16 = 0;
	Global_1945938[iParam0 /*18*/].f_1 = 0;
	Global_1945938[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_9 = 0f;
	Global_1945938[iParam0 /*18*/].f_10 = 0;
	Global_1945938[iParam0 /*18*/].f_11 = 0;
	Global_1945938[iParam0 /*18*/].f_2 = 1;
	Global_1945938[iParam0 /*18*/].f_15 = -1f;
}

int func_936(int iParam0, int iParam1)
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

void func_937(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_324 = iParam0;
	Var0 = { func_748(joaat("CAMP_FUNDS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_938(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1078(iParam0))
	{
		return 0;
	}
	if (!func_481())
	{
		return 0;
	}
	if (!func_1079(iParam0, &iVar0, &iVar1))
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

bool func_939(int iParam0)
{
	if (!func_1080(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_1081(iParam0, 1));
}

void func_940(int iParam0)
{
	if (!func_1080(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_1081(iParam0, 1));
}

int func_941(int iParam0)
{
	return iParam0 & 31;
}

void func_942(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_338(iParam0, 1) /*11*/].f_9 = (Global_1946804.f_57[func_338(iParam0, 1) /*11*/].f_9 || iParam1);
}

int func_943(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MISC"):
			return 0;
		case joaat("HEADS"):
			return 7;
		case joaat("EYEBROWS"):
			return 8;
		case joaat("EYES"):
			return 9;
		case joaat("HATS"):
			return 1;
		case -1057211637:
			return 2;
		case -1505611915:
			return 3;
		case -106096122:
			return 4;
		case joaat("HAIR"):
			return 5;
		case -1903910230:
			return 6;
		case joaat("TEETH"):
			return 10;
		case -134124598:
			return 11;
		case 366200818:
			return 13;
		case -322391462:
			return 14;
		case -1229572297:
			return 12;
		case joaat("EYEWEAR"):
			return 15;
		case -126114541:
			return 16;
		case joaat("MASKS"):
			return 17;
		case joaat("MASKS_LARGE"):
			return 18;
		case -2087420491:
			return 19;
		case 1524025505:
			return 20;
		case joaat("NECKWEAR"):
			return 21;
		case 706918662:
			return 22;
		case 1163341077:
			return 24;
		case joaat("NECKTIES"):
			return 23;
		case 1820468724:
			return 25;
		case 1094162565:
			return 26;
		case joaat("BADGES"):
			return 28;
		case joaat("BODIES_UPPER"):
			return 27;
		case joaat("SHIRTS_FULL"):
			return 31;
		case joaat("SHIRTS_FULL_OVERPANTS"):
			return 32;
		case 1250560851:
			return 30;
		case 1065202434:
			return 36;
		case 923771890:
			return 37;
		case 725125637:
			return 29;
		case 1527726350:
			return 33;
		case 1026208467:
			return 34;
		case joaat("SUSPENDERS"):
			return 48;
		case joaat("CLOAKS"):
			return 35;
		case joaat("COATS_HEAVY"):
			return 38;
		case joaat("COATS"):
			return 39;
		case 1799186100:
			return 40;
		case joaat("VESTS"):
			return 41;
		case -372138959:
			return 42;
		case joaat("APRONS"):
			return 43;
		case 2118314848:
			return 44;
		case 1937338194:
			return 45;
		case -1567461477:
			return 46;
		case 425108158:
			return 47;
		case joaat("ACCESSORIES"):
			return 55;
		case joaat("LOADOUTS"):
			return 51;
		case joaat("AMMO_PISTOLS"):
			return 52;
		case joaat("AMMO_RIFLES"):
			return 53;
		case -811108073:
			return 54;
		case joaat("SATCHELS"):
			return 49;
		case 1431760203:
			return 50;
		case joaat("TALISMAN_SATCHEL"):
			return 56;
		case -1250802524:
			return 57;
		case 1018031031:
			return 58;
		case -1459825906:
			return 59;
		case -1783800278:
			return 60;
		case joaat("GLOVES"):
			return 61;
		case -1394906584:
			return 62;
		case joaat("JEWELRY_BRACELETS"):
			return 63;
		case joaat("TALISMAN_WRIST"):
			return 64;
		case joaat("BELT_BUCKLES"):
			return 65;
		case joaat("GUNBELTS"):
			return 66;
		case 904313209:
			return 85;
		case joaat("HOLSTERS_CROSSDRAW"):
			return 70;
		case joaat("HOLSTERS_KNIFE"):
			return 69;
		case joaat("HOLSTERS_RIGHT"):
			return 67;
		case joaat("HOLSTERS_LEFT"):
			return 68;
		case joaat("TALISMAN_HOLSTER"):
			return 71;
		case joaat("BELTS"):
			return 72;
		case joaat("TALISMAN_BELT"):
			return 73;
		case joaat("BODIES_LOWER"):
			return 74;
		case joaat("PANTS"):
			return 75;
		case -1168358466:
			return 76;
		case -2130987730:
			return 77;
		case joaat("SKIRTS"):
			return 78;
		case joaat("STOCKINGS"):
			return 79;
		case joaat("CHAPS"):
			return 80;
		case 1377798597:
			return 81;
		case joaat("BOOTS"):
			return 82;
		case joaat("BOOT_ACCESSORIES"):
			return 83;
		case 828269641:
			return 84;
		default:
			break;
	}
	return -1;
}

void func_944(int iParam0, var uParam1, int iParam2)
{
	Global_1946804.f_860[iParam0] = (Global_1946804.f_860[iParam0] || uParam1);
}

int func_945(int iParam0)
{
	return Global_1946804.f_2657.f_26.f_7[iParam0];
}

void func_946(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946804.f_2657.f_26.f_7[iParam0];
	Global_1946804.f_2657.f_26.f_7[iParam0] = Global_1946804.f_2657.f_26.f_7[iParam1];
	Global_1946804.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_947(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_782(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_948(int iParam0, int iParam1)
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

void func_949(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_950(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_951(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_889(iVar9);
	iVar2 = func_889(iVar10);
	iVar3 = func_889(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_889(iVar12);
	}
	iVar5 = func_890(iVar9);
	iVar6 = func_890(iVar10);
	iVar7 = func_890(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_890(iVar12);
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

struct<4> func_952()
{
	struct<4> Var0;

	return Var0;
}

int func_953(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -70852636;
		case 1:
			return -452152720;
		case 2:
			return -1659460987;
		case 3:
			return -1906834168;
		case 4:
			return -1073518498;
		case 5:
			return -1304572717;
		case 6:
			return 1715418323;
		case 7:
			return 1468307294;
		case 8:
			return -1986397304;
		case 9:
			return 2061000197;
		default:
			break;
	}
	return 0;
}

int func_954()
{
	if (func_339() == 1160113249)
	{
		return -1392593303 /* GXTEntry: "Buzzed" */;
	}
	return 1156231582 /* GXTEntry: "Buzzed" */;
}

bool func_955(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_956(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_957(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_339();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_958(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_338(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_765(524288))
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

int func_959(var uParam0)
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

bool func_960(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_961(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

int func_962(int iParam0)
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

void func_963(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = func_1082(BUILTIN::TO_FLOAT(*uParam0), fVar3);
	iVar1 = func_1083(BUILTIN::TO_FLOAT(*uParam1), fVar3);
	iVar2 = func_1084(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*uParam0 = (*uParam0 / iParam5);
	*uParam1 = (*uParam1 / iParam5);
	*uParam2 = (*uParam2 / iParam5);
	*uParam3 = (*uParam3 / iParam5);
	*uParam1 = (*uParam1 + iVar0);
	*uParam2 = (*uParam2 + iVar1);
	*uParam3 = (*uParam3 + iVar2);
	if (bParam4)
	{
		*uParam3 = (*uParam3 * -1);
		*uParam2 = (*uParam2 * -1);
		*uParam1 = (*uParam1 * -1);
		*uParam0 = (*uParam0 * -1);
	}
}

void func_964(var uParam0, int iParam1)
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
			if ((func_1085(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1085(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1086(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

int func_965()
{
	if (func_1087(8))
	{
		return 8;
	}
	else if (func_1087(4))
	{
		return 4;
	}
	else if (func_1087(2))
	{
		return 2;
	}
	return 1;
}

void func_966(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_967(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1088(func_339());
	if (*uParam0)
	{
		func_966(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_115() != -1, iParam2);
	*uParam0 = 1;
}

bool func_968(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_350(iParam1);
	func_542(&(Global_1946804.f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964));
}

bool func_969(int iParam0, int iParam1)
{
	if (!func_730(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

void func_970(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_971()
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
	if (!func_765(1))
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
	TASK::TASK_PLAY_ANIM(Global_35, func_1089(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_513(1);
	STREAMING::REMOVE_ANIM_DICT(func_1089());
}

bool func_972(int iParam0)
{
	return false;
}

void func_973(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar4 = func_793(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_115() != -1)
	{
		return;
	}
	func_549();
	if (bParam5)
	{
		if (!func_550(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_765(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		func_901();
	}
	func_102(iVar3, 1, 1, 1, 1, 1);
	func_552(31, 0, 0, 0, 0);
	func_903(0);
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
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_552(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_552(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_1090(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_974(int iParam0)
{
	PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

bool func_975(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_371(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1091(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &uVar1))
				{
					iVar4 = uVar1;
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

int func_976(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_679(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_977(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
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
		iVar1 = func_371(iParam1);
		iVar5 = func_1091(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_526(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_569(iParam1, *uParam4, uParam4->f_4, 0) };
					*uParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_571(0);
			Var37 = { func_526(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_569(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_371(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_679(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*uParam2 = uVar2;
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
	*uParam2 = 0;
	return false;
}

bool func_978(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
	}
	if (func_547(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_979(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_980(int iParam0)
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

int func_981()
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

	Var0 = { func_526(856287005, 0, 0) };
	Var5 = { func_569(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_371(856287005);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_976(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!func_332(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1091(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_976(Var5, iVar11, 0);
			if (!func_332(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_979(iVar14) || func_978(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (func_979(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!func_979(iVar14) && func_1092(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1093(iVar11, &Var16, 1))
									{
										if (!func_681(Var16, 1))
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

bool func_982(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_571(bParam7);
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

bool func_983(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_571(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_984(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_332(iParam0, 0))
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

bool func_985(int iParam0)
{
	if (func_1094(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_986(int iParam0)
{
	if (!func_332(*iParam0, 0))
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

bool func_987(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_332(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_526(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_675((398 + iVar29), 1);
		if (func_676(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_674(iParam0, &Var6, iVar5);
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

int func_988(int iParam0)
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

float func_989(int iParam0)
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
			return func_1095(iParam0);
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
			return func_1095(iParam0);
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
			return func_1095(iParam0);
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

bool func_990(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_429(18);
		case 2:
			return func_429(20);
		case 1:
			return func_429(19);
		default:
			break;
	}
	return true;
}

int func_991(int iParam0)
{
	return func_1096(Global_40.f_11095.f_11[iParam0]);
}

void func_992(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_115() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_429(31))
	{
		return;
	}
	iVar0 = func_991(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_991(iParam0);
	if (func_1097(iParam0) && func_1098(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1099(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1100(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_607(func_1101(iParam0), 0);
					}
					func_1102(iParam0, iVar2, iVar3);
					func_1103(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_993(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_994(int iParam0)
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

bool func_995(int iParam0, int iParam1)
{
	if (func_115() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_996(int iParam0)
{
	if (func_115() != -1)
	{
		if (func_908(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_908(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_997(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_908(iParam0, 65536) && !func_908(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_908(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_908(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_998()
{
	return Global_1905944.f_5694;
}

bool func_999(int iParam0, var uParam1)
{
	if (!func_1104(iParam0))
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

int func_1000()
{
	return func_1105(Global_40.f_12019);
}

int func_1001()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_847(iVar1);
		if (func_418(iVar2, 1, 0) || func_1007(func_1006(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1002()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1106(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1003()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1012(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1004()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_1005(int iParam0)
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

int func_1006(int iParam0)
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

bool func_1007(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1008(int iParam0)
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

int func_1009(int iParam0)
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

int func_1010(int iParam0)
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

char* func_1011(int iParam0)
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

bool func_1012(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1013(int iParam0)
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

char* func_1014(int iParam0)
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

bool func_1015(int iParam0)
{
	if (func_1107(iParam0) && func_418(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1108(iParam0) && func_1109(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1016(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_655(iParam0));
}

int func_1017(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_1018(bool bParam0)
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

void func_1019(int iParam0)
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

void func_1020(bool bParam0)
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

void func_1021(bool bParam0)
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

void func_1022(bool bParam0)
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

void func_1023(bool bParam0)
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

void func_1024(bool bParam0)
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

void func_1025(bool bParam0)
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

int func_1026(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946804.f_1497.f_1[func_338(iParam0, 1) /*3*/];
}

void func_1027()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1110();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_424(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_661(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_424(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_661(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_1028(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

bool func_1029(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_338(func_1111(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_371(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_1030(int iParam0)
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

int func_1031(int iParam0)
{
	return func_1112(iParam0, -1);
}

bool func_1032(int iParam0, bool bParam1)
{
	return func_1113(func_457(), iParam0, bParam1);
}

bool func_1033(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1034(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1035(int iParam0)
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

void func_1036(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1037(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1038(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1114(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_115() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_528(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_359(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_359(Global_40.f_7729);
				Global_1946804.f_1378 = func_359(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_361(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_347(0, 1);
	}
}

void func_1039(var uParam0)
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

bool func_1040(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1041(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_960(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_960(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_961(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_532(8);
}

bool func_1042()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_1043(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_1044()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1115(13);
	iVar1 = func_1116(fVar0);
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

float func_1045()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1046()
{
	if (func_596())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1047()
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

float func_1048()
{
	return Global_1955565.f_3;
}

void func_1049(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1117(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_1050(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1117(iParam0, 2, 0, 0);
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

float func_1051(float fParam0, float fParam1, float fParam2)
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

bool func_1052()
{
	return func_1115(12) <= -99f;
}

bool func_1053()
{
	return func_1115(12) >= 99f;
}

int func_1054()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_371(iVar1) == -999503751)
		{
			if (func_1118() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1055(int iParam0)
{
	if (!func_730(iParam0))
	{
		return false;
	}
	if (func_969(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1056(int iParam0)
{
	if (!func_730(iParam0))
	{
		return false;
	}
	if (func_969(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1057(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_730(iParam0))
	{
		return;
	}
	if (!func_1056(iParam0))
	{
		func_503(iParam0, 2);
		if (bParam2)
		{
			if (!func_394(0, 0, 1))
			{
				func_308(1, 4);
			}
		}
		if ((!func_1058() && !bParam1) && !func_394(0, 0, 1))
		{
			func_1059(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1119(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_1058()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

var func_1059(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1060(int iParam0, bool bParam1)
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

void func_1061(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1120(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_617(50);
			}
			else
			{
				func_617(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_617(51);
			}
			else
			{
				func_617(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1121(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_643();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_643();
			}
			break;
		case 3:
			func_617(24);
			if (bParam1)
			{
				if (!func_1121(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_643();
				}
			}
			break;
	}
}

void func_1062(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1122(0))
			{
				iVar0++;
			}
			if (func_1122(2))
			{
				iVar0++;
			}
			if (func_1122(4))
			{
				iVar0++;
			}
			if (!func_1123(16))
			{
				if (iVar0 == 1)
				{
					func_1124();
					func_607(456, 1);
					func_1125(16);
				}
			}
			if (!func_1123(32))
			{
				if (iVar0 >= 3)
				{
					func_1124();
					func_607(456, 1);
					func_1125(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1122(1))
			{
				iVar0++;
			}
			if (func_1122(3))
			{
				iVar0++;
			}
			if (func_1122(7))
			{
				iVar0++;
			}
			if (!func_1123(1))
			{
				if (iVar0 == 1)
				{
					func_1126();
					func_607(457, 1);
					func_1125(1);
				}
			}
			if (!func_1123(2))
			{
				if (iVar0 >= 3)
				{
					func_1126();
					func_607(457, 1);
					func_1125(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1122(5))
			{
				iVar0++;
			}
			if (func_1122(6))
			{
				iVar0++;
			}
			if (func_1122(8))
			{
				iVar0++;
			}
			if (!func_1123(4))
			{
				if (iVar0 == 1)
				{
					func_1127();
					func_607(455, 1);
					func_1125(4);
				}
			}
			if (!func_1123(8))
			{
				if (iVar0 >= 3)
				{
					func_1127();
					func_607(455, 1);
					func_1125(8);
				}
			}
			break;
	}
}

void func_1063(var uParam0)
{
	func_915(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946804.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_915(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_915(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_1064(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1128(uParam0))
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

bool func_1065(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1066(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_748(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

struct<29> func_1067(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_571(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1071(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_1068(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1129(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1130(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1130(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1130(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> func_1069(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_571(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1071(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_1070(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1131(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1130(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1130(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1130(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1071(var uParam0)
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

int func_1072(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1132(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1130(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1130(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1130(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_1073(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar25;

	*iParam3 = 0;
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SELL_PRICE(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (!bParam4)
	{
	}
	*iParam3 = Var0.f_3;
	if (*uParam2 < Var0.f_3)
	{
		return false;
	}
	iVar25 = 0;
	while (iVar25 < Var0.f_3)
	{
		if (!bParam4)
		{
		}
		*(uParam2[iVar25 /*2*/]) = { Var0.f_4[iVar25 /*2*/] };
		iVar25++;
	}
	return true;
}

int func_1074(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 5;
		case 4:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1075(int iParam0)
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

int func_1076(int iParam0)
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

bool func_1077(int iParam0)
{
	return func_1133(iParam0, 2);
}

bool func_1078(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1079(int iParam0, int iParam1, int iParam2)
{
	if (!func_1078(iParam0))
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

bool func_1080(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
		default:
			break;
	}
	return false;
}

int func_1081(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
			return 1;
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

int func_1082(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 24f));
}

int func_1083(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

int func_1084(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

bool func_1085(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1086(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1087(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

int func_1088(int iParam0)
{
	if (func_115() == -1)
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

char* func_1089()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_1090(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_115() != -1;
	Global_1946804.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_189);
			}
			if ((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_190);
			}
			func_532(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1134(iParam1, 29, bVar4, 1, 0);
			func_1134(iParam1, 31, bVar4, 1, 0);
			func_1134(iParam1, 30, bVar4, 1, 0);
			func_1134(iParam1, 22, bVar4, 1, 0);
			func_1134(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_765(32768) && func_539(1108822547, 8)) && func_538(10, iParam3))
	{
		func_1135(iParam1, 0, 1);
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
			iVar3 = func_534(iVar1, 1);
			if (func_539(iVar3, 8))
			{
			}
			else if (Global_1946804.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_538(iVar1, iParam3))
				{
				}
				else if ((func_539(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_539(iVar3, 1) || bParam2)
					{
						Global_1946804.f_857++;
						if (!bParam6)
						{
							func_1134(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_541(iVar3, 1, 6);
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
								func_1134(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946804.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_539(iVar3, 1))
							{
								func_540(iVar3, 1, 6);
							}
							Global_1946804.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

int func_1091(int iParam0)
{
	int iVar0;

	if (!func_332(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_1092(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_1093(int iParam0, var uParam1, bool bParam2)
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
	Var2 = { func_564(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_751(&Var2, func_579());
	if (func_565(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_673(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_332(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1092(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_566(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_566(iVar0);
	}
	return false;
}

int func_1094(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_1095(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_988(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1096(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1136(iVar6) - func_1136(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1096(float fParam0)
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

int func_1097(int iParam0)
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

int func_1098(int iParam0)
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

int func_1099(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1096(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1136(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1136(iVar0 + 1));
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

int func_1100(int iParam0)
{
	int iVar0;

	if (func_1137(iParam0, &iVar0))
	{
		return func_1136(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1138())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1138())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1138())
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

int func_1101(int iParam0)
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

void func_1102(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1139(iParam0));
	sVar4 = func_1141(func_1140(iVar3, iParam2));
	sVar6 = func_1142(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_1143(iParam0));
	iVar8 = func_1144(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1145(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_856(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_1146(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1103(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_1104(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1105(int iParam0)
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

bool func_1106(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_1107(int iParam0)
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

int func_1108(int iParam0)
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

int func_1109(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1147(&iVar0, 0, iVar95, &Var1) && !func_1147(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1148(iVar0, &Var1);
			if (func_332(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1110()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_1149(Global_35, &iVar0);
	Var30 = { func_754(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_93(0);
	func_106(7);
	func_1150(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_339() == 1160113249)
	{
		func_1150(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1150(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1151(Global_35, &iVar0);
}

int func_1111(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_527(iVar0);
}

int func_1112(int iParam0, int iParam1)
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
		iParam1 = func_571(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_687(&uVar6, iVar0);
	func_688(&uVar6, iVar1);
	func_689(&uVar6, iVar2);
	func_690(&uVar6, iVar3);
	func_691(&uVar6, iVar4);
	func_692(&uVar6, iVar5);
	return uVar6;
}

bool func_1113(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1152(iParam1) || !func_1152(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1114(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_115() == -1)
	{
		func_342(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_548(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

float func_1115(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1116(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1117(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_744(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_744(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1118()
{
	return Global_1946804.f_1497;
}

char* func_1119(int iParam0)
{
	int iVar0;

	iVar0 = func_359(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1016(iVar0);
}

int func_1120(int iParam0)
{
	int iVar0;

	if (func_1153(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1154(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1155(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1156(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1121(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_418(func_1157(iVar0, iParam0), 1, 0))
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

bool func_1122(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_418(func_1158(iVar0, iParam0), 1, 0))
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

bool func_1123(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1124()
{
	int iVar0;

	if (func_115() != -1)
	{
		return;
	}
	func_661(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = func_991(1);
	func_1102(1, iVar0, 0);
}

void func_1125(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1126()
{
	int iVar0;

	if (func_115() != -1)
	{
		return;
	}
	func_661(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = func_991(2);
	func_1102(2, iVar0, 0);
}

void func_1127()
{
	int iVar0;

	if (func_115() != -1)
	{
		return;
	}
	func_661(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = func_991(0);
	func_1102(0, iVar0, 0);
}

bool func_1128(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1129(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

void func_1130(int iParam0, int iParam1)
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
	func_1159(iParam0, iParam1);
}

bool func_1131(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_1132(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_1133(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_1134(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_534(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1160(iParam4);
		}
		else if (iParam4 != Global_1946804.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
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
				PED::REMOVE_TAG_FROM_META_PED(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

void func_1135(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_539(1108822547, 6))
	{
		if (bParam2)
		{
			func_1134(iParam0, iVar0, func_115() != -1, 0, 0);
			func_541(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
		func_540(1108822547, 1, 6);
	}
	Global_1946804.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

int func_1136(int iParam0)
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

bool func_1137(int iParam0, int iParam1)
{
	return false;
}

bool func_1138()
{
	return false;
}

int func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_571(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_571(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_571(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> func_1140(int iParam0, int iParam1)
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

char* func_1141(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1142(int iParam0)
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

char* func_1143(int iParam0)
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

int func_1144(int iParam0)
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

int func_1145(int iParam0)
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

int func_1146(int iParam0)
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

bool func_1147(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1161(iParam1) && !func_1162(iParam1))
	{
		iVar0 = func_1163(iParam1);
	}
	else
	{
		return false;
	}
	func_1164(uParam3);
	iVar5 = func_1165(iParam2);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var1, iVar0, iVar5, 0))
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

void func_1148(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1166(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1167(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1149(int iParam0, int* iParam1)
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
		if (func_428(iVar31))
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

void func_1150(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1168(iParam0))
	{
		return;
	}
	iVar0 = func_371(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1169(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1169(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1169(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1169(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1169(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1169(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1170(0))
	{
		func_1171(iParam0, 1);
		if (func_339() == 1160113249)
		{
			func_1171(func_1170(-2125499975), 0);
		}
		else
		{
			func_1171(func_1170(1160113249), 0);
		}
	}
	func_515();
	if (func_1172(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_571(0), iParam0, 0);
	}
	func_374(iParam0, bParam3);
	if (bParam2)
	{
		func_347(0, 0);
	}
}

void func_1151(int iParam0, int iParam1)
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
				if (func_862((*iParam1)[iVar0]))
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

bool func_1152(int iParam0)
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
	iVar0 = func_711(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_710(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_709(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_706(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_707(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_708(iParam0);
	if (iVar5 < 1 || iVar5 > func_712(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1153(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1154(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1155(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1156(int iParam0)
{
	if (!func_332(iParam0, 0))
	{
		return false;
	}
	if (func_547(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1157(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1173(iParam0);
		case 1:
			return func_1174(iParam0);
		case 2:
			return func_1175(iParam0);
		case 3:
			return func_1176(iParam0);
	}
	return 0;
}

int func_1158(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1177(iParam0);
		case 1:
			return func_1178(iParam0);
		case 2:
			return func_1179(iParam0);
		case 3:
			return func_1180(iParam0);
		case 4:
			return func_1181(iParam0);
		case 5:
			return func_1182(iParam0);
		case 6:
			return func_1183(iParam0);
		case 7:
			return func_1184(iParam0);
		case 8:
			return func_1185(iParam0);
	}
	return 0;
}

void func_1159(int iParam0, int iParam1)
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

int func_1160(int iParam0)
{
	int iVar0;

	iVar0 = func_371(iParam0);
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

bool func_1161(int iParam0)
{
	iParam0 = func_827(iParam0);
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

bool func_1162(int iParam0)
{
	int iVar0;

	iParam0 = func_827(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1161(iParam0))
	{
		return false;
	}
	iVar0 = func_1163(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1163(int iParam0)
{
	iParam0 = func_827(iParam0);
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

void func_1164(var uParam0)
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

int func_1165(int iParam0)
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

void func_1166(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1167(var uParam0, int iParam1, int iParam2, int iParam3)
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
	uVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(uParam0, iParam1, iParam2);
	return uVar2;
}

bool func_1168(int iParam0)
{
	if (func_115() == -1)
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

int func_1169(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_738(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_373(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (func_371(iParam0) != -999503751)
	{
		func_372(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1170(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_339();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1171(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_526(iParam0, 0, 0) };
	Var5 = { func_569(iParam0, Var0, Var0.f_4, 0) };
	if (func_570(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_571(0), &Var5);
	return 1;
}

bool func_1172(int iParam0)
{
	return func_1186(func_732(iParam0));
}

int func_1173(int iParam0)
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

int func_1174(int iParam0)
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

int func_1175(int iParam0)
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

int func_1176(int iParam0)
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

int func_1177(int iParam0)
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

int func_1178(int iParam0)
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

int func_1179(int iParam0)
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

int func_1180(int iParam0)
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

int func_1181(int iParam0)
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

int func_1182(int iParam0)
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

int func_1183(int iParam0)
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

int func_1184(int iParam0)
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

int func_1185(int iParam0)
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

bool func_1186(int iParam0)
{
	return (Global_1946804.f_2657.f_26.f_6 && iParam0) != 0;
}

