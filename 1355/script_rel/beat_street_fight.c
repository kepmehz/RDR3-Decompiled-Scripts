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
	var uLocal_14 = 1;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17[4] = { 0, 0, 0, 0 };
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = false;
	vector3 vLocal_27[4] = {{ 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f }, { 2,802597E-45f, 0f, 0f } };
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	bool bLocal_44 = false;
	bool bLocal_45 = false;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	struct<26> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bLocal_93 = false;
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	var uLocal_97 = 5;
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
	var uLocal_162 = 0;
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
	int iLocal_177 = 0;
	var uLocal_178[4] = { 0, 0, 0, 0 };
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187[4] = { 0, 0, 0, 0 };
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	var uLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	bool bLocal_207 = false;
	bool bLocal_208 = false;
	bool bLocal_209 = false;
	bool bLocal_210 = false;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	struct<32> Local_215[4];
	struct<162> Local_344 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 1;
	var uLocal_511 = 1;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = -1;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 1;
	var uLocal_529 = -1;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	int iLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	struct<2> Local_546[5];
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 1176256512;
	var uLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	struct<8> Local_567 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_575 = 2;
	var uLocal_576 = 1;
	var uLocal_577 = 1;
	var uLocal_578 = 1;
	var uLocal_579 = 0;
	var uLocal_580 = 1;
	var uLocal_581 = 2;
	var uLocal_582 = 2;
	var uLocal_583 = 3;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 3;
	var uLocal_587 = 1;
	var uLocal_588 = 3;
	var uLocal_589 = 3;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	int iLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = -1;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 1097859072;
	var uLocal_612 = 1000;
	var uLocal_613 = 1067450368;
	var uLocal_614 = 5000;
	var uLocal_615 = 42;
	var uLocal_616 = 1103626240;
	var uLocal_617 = 1077936128;
	var uLocal_618 = 1106247680;
	var uLocal_619 = 1103101952;
	var uLocal_620 = 1097859072;
	var uLocal_621 = 1103626240;
	int iLocal_622 = 0;
	struct<21> Local_623[4];
	struct<17> Local_708[2];
	struct<17> Local_743[2];
	struct<17> Local_778[2];
	struct<17> Local_813[2];
	struct<17> Local_848[2];
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	struct<2> Local_886 = { 0, 0 } ;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	bool bLocal_901 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = -1;
	iLocal_24 = -1;
	iLocal_52 = -1;
	iLocal_53 = -1;
	iLocal_55 = -1;
	iLocal_56 = -1;
	fLocal_57 = 0f;
	fLocal_58 = 1f;
	fLocal_59 = 1f;
	fLocal_60 = 1f;
	vLocal_61 = { 0f, 0f, 0f };
	iLocal_883 = func_1(3, 0, 0);
	iLocal_884 = func_1(3, 0, 0);
	iLocal_885 = func_1(3, 0, 0);
	Local_344.f_3 = func_2(&vScriptParam_0);
	Local_344.f_161 = func_3(vScriptParam_0.z, 2);
	uLocal_560 = uLocal_560;
	func_4(&Local_344, 1);
	func_5(&iLocal_214, &Local_344, &uLocal_54);
	iLocal_899 = func_6();
	if (func_7())
	{
		func_8(&Local_344, 1);
	}
	else
	{
		func_8(&Local_344, 0);
	}
	func_9(&uLocal_594);
	func_9(&(Local_344.f_5));
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_901 = true;
	}
	while (true)
	{
		func_11(bLocal_901, 1417, 0);
		if (bLocal_901)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_563)
			{
				case 0:
					if (func_12())
					{
						func_13(iLocal_214, &fLocal_59, &fLocal_60, &fLocal_58);
						iLocal_563 = 1;
					}
					else if (Local_344.f_160)
					{
						func_10();
					}
					break;
				case 1:
					if (func_14(&Local_344, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_15(&Local_344, &iLocal_899, &iLocal_900);
						Local_344.f_51.f_4 = iLocal_900;
						func_17(&Local_344, iLocal_899, 2307);
						func_18(&Local_344, &iLocal_899, &iLocal_900);
						func_19(&iLocal_214, iLocal_899, iLocal_900, uLocal_54, Local_344.f_161);
						func_20(iLocal_214, iLocal_899, Local_344.f_51.f_4, &Local_64);
						func_21(&iLocal_538, iLocal_214, iLocal_899, iLocal_900);
						func_22(iLocal_214, iLocal_899, &Local_215);
						func_23(iLocal_214, iLocal_899, iLocal_900);
						func_24();
						func_25(iLocal_214, iLocal_899, iLocal_900);
						func_26();
						iLocal_563 = 2;
					}
					else if (Local_344.f_160)
					{
						func_10();
					}
					break;
				case 2:
					if (func_27(Local_64) && func_28(iLocal_538))
					{
						iLocal_50 = iLocal_538;
						iLocal_563 = 3;
					}
					break;
				case 3:
					if (func_29(&(uLocal_178[1]), &iLocal_185, iLocal_214, Local_344.f_51) && func_30())
					{
						func_31(iLocal_899, Local_344.f_51.f_4, &Local_64);
						func_32(iLocal_899, Local_344.f_51.f_4, &Local_64);
						func_33(iLocal_899, Local_344.f_51.f_4, &Local_64);
						func_34();
						func_35();
						func_36();
						func_37();
						func_38();
						func_39();
						func_40(&uLocal_171);
						iLocal_563 = 4;
					}
					if (iLocal_214 != 4)
					{
					}
					else if (!func_41(&uLocal_171))
					{
						func_42(&uLocal_171, 0);
					}
					else if (func_43(&uLocal_171, 15f) && ENTITY::IS_ENTITY_DEAD(uLocal_178[1]))
					{
						func_10();
					}
					if (func_44(&Local_344, &uLocal_178, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_10();
					}
					break;
				case 4:
					if (!func_45(&Local_344, &uLocal_178, iLocal_214, 0, 1, 0, 1, 0))
					{
						func_10();
					}
					if (Local_344.f_46)
					{
						if (func_46(PLAYER::PLAYER_ID(), 0, 1, 1) && iLocal_562 != 22)
						{
							func_47();
							func_48(22);
						}
					}
					else
					{
						switch (iLocal_214)
						{
							case 4:
								if (func_49())
								{
									Local_344.f_46 = 1;
									func_48(10);
								}
								break;
							default:
								if (func_50())
								{
									Local_344.f_46 = 1;
									func_47();
									func_51();
									if (!func_52(16384))
									{
										func_53(iLocal_212, 0);
									}
									else
									{
										func_54(iLocal_212);
									}
									func_48(14);
								}
								break;
						}
					}
					if (func_44(&Local_344, &uLocal_178, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_344.f_50 = 1;
						func_10();
					}
					if (func_55())
					{
						Local_344.f_50 = 1;
						func_10();
					}
					func_56();
					break;
			}
			BUILTIN::WAIT(Local_344.f_158);
		}
	}
}

int func_1(int iParam0, int iParam1, int iParam2)
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

var func_2(var uParam0)
{
	return *uParam0;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_57(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_58("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_5(int iParam0, var uParam1, var uParam2)
{
	*iParam0 = func_59(uParam1->f_3, 5, 0);
}

int func_6()
{
	return Global_1897952.f_41;
}

bool func_7()
{
	if (iLocal_214 == 4)
	{
		return true;
	}
	return false;
}

void func_8(var uParam0, bool bParam1)
{
	func_57(&(uParam0->f_5));
	func_60(&(uParam0->f_5), 1);
	func_61(&(uParam0->f_5), bParam1);
	func_62(&(uParam0->f_5), 500);
	func_63(&(uParam0->f_5), 1, 0, 1);
	func_64(&(uParam0->f_5), 0);
	func_65(&(uParam0->f_5), 0);
}

void func_9(var uParam0)
{
	func_61(uParam0, 1);
	func_62(uParam0, 500);
	func_63(uParam0, 1, 0, 1);
	func_66(uParam0, 2f, 1);
	func_60(uParam0, 1);
	func_67(uParam0, 0);
	func_68(uParam0, 0);
	func_69(uParam0, 0);
	func_64(uParam0, 0);
	func_70(uParam0, 0);
	func_71(uParam0, 0);
	func_65(uParam0, 1);
}

void func_10()
{
	int iVar0;

	if (func_72(4))
	{
		func_73(&(uLocal_178[1]), 4, &(Local_623[1 /*21*/]), &Local_778, iLocal_899);
	}
	func_74(iLocal_205);
	func_74(iLocal_206);
	Local_344.f_50 = 1;
	func_75(&Local_344, &uLocal_178, &uLocal_187, iLocal_214, iLocal_899, iLocal_900, 0, 1, 0, 1);
	func_76(&(uLocal_178[0]));
	func_77(&Local_708, 0, 0, 1, 0);
	func_78();
	func_79(iLocal_50);
	func_80(uLocal_178[iLocal_183]);
	func_81(&uLocal_178);
	func_82(&(Local_886.f_1));
	func_83(1098854605);
	func_84();
	func_85();
	func_86();
	func_87();
	func_88(1);
	func_89(1);
	if (iLocal_197 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_197);
	}
	if (iLocal_198 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_197);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_90(uLocal_178[iVar0], 0, 0))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_178[iVar0], 217, false);
		}
		iVar0++;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_Street_Fight_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("RE_Street_Fight_scene");
	}
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE");
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED");
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER");
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM");
	STREAMING::REMOVE_PTFX_ASSET();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_91(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_12()
{
	switch (iLocal_561)
	{
		case 0:
			if (func_92(&Local_344))
			{
				func_93(&Local_215, iLocal_214, iLocal_899, iLocal_900);
				func_94(&Local_215);
				func_95(iLocal_214, &Local_546, &uLocal_97);
				STREAMING::REQUEST_PTFX_ASSET();
				func_96(&Local_567);
				iLocal_561 = 1;
			}
			break;
		case 1:
			if (!func_97(&uLocal_560, uLocal_92))
			{
				return false;
			}
			if (!func_98(&Local_215))
			{
				return false;
			}
			if (!func_99(&uLocal_97))
			{
				return false;
			}
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE"))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED"))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER"))
			{
				return false;
			}
			if (!STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_13(int iParam0, float fParam1, float fParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*fParam1 = 0.5758f;
			*fParam2 = 0.6315f;
			*fParam3 = 1f;
			break;
		case 1:
		case 2:
			*fParam1 = 0.5448f;
			*fParam2 = 0.5727f;
			*fParam3 = 1f;
			break;
	}
}

bool func_14(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_100(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_101(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_102(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_103(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_104(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_15(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 9;
			*iParam2 = 1;
			break;
		case 3:
			*iParam1 = 10;
			*iParam2 = 0;
			break;
	}
}

Vector3 func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -89.1f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	Stack.Push(iParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_18(var uParam0, int iParam1, int iParam2)
{
	switch (*iParam1)
	{
		case 4:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, -799.5692f, -1320.505f, 44.259f, 0f, 0f, 0f, 18f, 15f, 5f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, -809.5124f, -1336.469f, 44.2586f, 0f, 0f, 0f, 35f, 17f, 5f);
					break;
			}
			break;
		case 9:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, -309.808f, 786.006f, 119.488f, 0f, 0f, 11f, 100f, 25f, 10f);
					break;
				case 1:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, -252.0321f, 760.9167f, 118.0679f, 0f, 0f, 19f, 20f, 75f, 10f);
					break;
			}
			break;
		case 10:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2960.006f, 522.5409f, 46.9798f, 0f, 0f, 0f, 20f, 75f, 10f);
					break;
			}
			break;
		case 11:
			switch (*iParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 1369.239f, -1378.793f, 81.047f, 0f, 0f, -9.75f, 30f, 40f, 8f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 1342.579f, -1375.116f, 81.7343f, 0f, 0f, -10.5f, 20f, 12f, 5f);
					break;
			}
			break;
	}
}

void func_19(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = true;
	if (bParam4)
	{
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case 9:
				switch (iParam2)
				{
					case 0:
						switch (func_105(iParam1, iParam2))
						{
							case 0:
								*iParam0 = 2;
								break;
							case 1:
								*iParam0 = 0;
								break;
							case 2:
								*iParam0 = 1;
								break;
							case 3:
								*iParam0 = 3;
								break;
							default:
								if (*iParam0 == 4)
								{
									*iParam0 = 0;
								}
								break;
						}
						break;
					case 1:
						switch (func_105(iParam1, iParam2))
						{
							case 0:
								if (func_106() || func_107(9))
								{
									*iParam0 = 4;
								}
								else
								{
									*iParam0 = 1;
								}
								break;
							case 1:
								*iParam0 = 1;
								break;
							case 2:
								*iParam0 = 0;
								break;
							case 3:
								*iParam0 = 3;
								break;
							default:
								if (*iParam0 == 2)
								{
									*iParam0 = 0;
								}
								break;
						}
						break;
				}
				break;
			case 10:
				switch (func_105(iParam1, iParam2))
				{
					case 0:
						*iParam0 = 0;
						break;
					case 1:
						*iParam0 = 1;
						break;
					case 2:
						*iParam0 = 3;
						break;
					default:
						switch (*iParam0)
						{
							case 2:
								*iParam0 = 3;
								break;
							case 4:
								*iParam0 = 0;
								break;
						}
						break;
				}
				break;
			case 4:
				*iParam0 = 4;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 9:
				switch (iParam2)
				{
					case 0:
						if (*iParam0 == 4)
						{
							*iParam0 = 0;
						}
						break;
					case 1:
						if (*iParam0 == 2)
						{
							*iParam0 = 0;
						}
						break;
				}
				break;
			case 10:
				switch (*iParam0)
				{
					case 2:
						*iParam0 = 3;
						break;
					case 4:
						*iParam0 = 0;
						break;
				}
				break;
			case 4:
				*iParam0 = 4;
				break;
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam1)
	{
		case 10:
			*uParam3 = { 2946.417f, 525.8564f, 44.34274f };
			uParam3->f_3 = { 2951.588f, 526.2109f, 45.47384f };
			uParam3->f_6 = { 2951.618f, 523.3102f, 45.66131f };
			uParam3->f_9 = { 2951.588f, 526.2109f, 45.47384f };
			uParam3->f_12 = { 2946.991f, 523.1688f, 44.36835f };
			break;
		case 4:
			*uParam3 = { -815.6277f, -1318.792f, 42.67896f };
			uParam3->f_3 = { 0f, 0f, 0f };
			uParam3->f_6 = { -810.0895f, -1327.633f, 43.76683f };
			uParam3->f_9 = { 0f, 0f, 0f };
			uParam3->f_12 = { -811.2068f, -1322.647f, 42.67806f };
			break;
		default:
			switch (iParam2)
			{
				case 0:
					*uParam3 = { -312.1026f, 808.2841f, 117.982f };
					uParam3->f_3 = { -303.6723f, 797.997f, 119.2487f };
					uParam3->f_6 = { -307.5079f, 798.4366f, 119.0628f };
					uParam3->f_9 = { -306.6963f, 793.7566f, 116.9643f };
					uParam3->f_12 = { -308.0499f, 801.3186f, 117.9793f };
					break;
				case 1:
					*uParam3 = { -240.6656f, 769.7513f, 117.085f };
					uParam3->f_3 = { -245.4576f, 769.4586f, 118.9128f };
					uParam3->f_6 = { -243.9364f, 765.5624f, 118.3578f };
					uParam3->f_9 = { -249.3253f, 766.9821f, 116.3386f };
					uParam3->f_12 = { -242.7195f, 769.2915f, 117.085f };
					if (iParam0 != 4)
					{
						func_108(1098854605, 0, 0);
						func_109(1098854605, 0, -1f, 0, 0, 0, 0, 0);
					}
					break;
			}
			break;
	}
}

void func_21(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			switch (iParam2)
			{
				case 9:
					if (iParam3 == 0)
					{
						iParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor_Val0";
					}
					else
					{
						iParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor";
					}
					break;
				case 10:
					iParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor_vanhorn";
					break;
				default:
					iParam0->f_4 = "script@beat@town@streetFight@thrownOutDoor";
					break;
			}
			break;
		case 2:
			iParam0->f_4 = "script@beat@town@streetFight@thrownOutWindow";
			break;
		case 3:
			switch (iParam2)
			{
				case 10:
					iParam0->f_4 = "script@beat@town@streetFight@thrownOutWindowDead_VanHorn";
					break;
				default:
					iParam0->f_4 = "script@beat@town@streetFight@thrownOutWindowDead";
					break;
			}
			break;
		case 4:
			iParam0->f_4 = "script@beat@town@streetFight@Uncle_Fight";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		switch (iParam1)
		{
			case 4:
				*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 0, func_110(0), false, true);
				break;
			default:
				*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_4, 0, func_111(iParam1), false, true);
				break;
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*iParam0, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		}
	}
}

void func_22(int iParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam0)
			{
				case 0:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0949_A_M_M_Guard_White_AGGRESSIVE_04", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0941_A_M_M_Foreman_White_AVOID_01", 64);
					break;
				case 1:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0920_A_M_M_Civ_Poor_White_AVOID_03", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0921_A_M_M_Civ_Poor_White_AVOID_04", 64);
					break;
				case 2:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0908_A_M_M_Civ_Poor_White_AGGRESSIVE_08", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0926_A_M_M_Civ_Poor_White_AVOID_09", 64);
					break;
				case 3:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0907_A_M_M_Civ_Poor_White_AGGRESSIVE_07", 64);
					StringCopy(&((uParam2[2 /*32*/])->f_23), "0901_A_M_M_Civ_Poor_White_AGGRESSIVE_01", 64);
					StringCopy(&((uParam2[3 /*32*/])->f_23), "0902_A_M_M_Civ_Poor_White_AGGRESSIVE_02", 64);
					break;
				case 4:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "1062_G_M_M_UniCriminals_01_WHITE_09", 64);
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0494_A_M_M_VhtTownfolk_01_WHITE_01", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0919_A_M_M_Civ_Poor_White_AVOID_02", 64);
					break;
				case 1:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0495_A_M_M_VhtTownfolk_01_BLACK_01", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0893_A_M_M_Civ_Poor_Black_AVOID_08", 64);
					break;
				case 2:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02", 64);
					StringCopy(&((uParam2[1 /*32*/])->f_23), "0891_A_M_M_Civ_Poor_Black_AVOID_06", 64);
					break;
				case 3:
					StringCopy(&((uParam2[0 /*32*/])->f_23), "0905_A_M_M_Civ_Poor_White_AGGRESSIVE_05", 64);
					StringCopy(&((uParam2[2 /*32*/])->f_23), "0933_A_M_M_Civ_White_AVOID_03", 64);
					StringCopy(&((uParam2[3 /*32*/])->f_23), "0887_A_M_M_Civ_Poor_Black_AVOID_02", 64);
					break;
			}
			break;
		case 4:
			StringCopy(&((uParam2[0 /*32*/])->f_23), "0134_G_M_M_UniCriminals_01_HISPANIC_01", 64);
			break;
	}
	AUDIO::START_AUDIO_SCENE("RE_Street_Fight_scene");
}

void func_23(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 9:
					switch (iParam2)
					{
						case 0:
							iLocal_202 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-303.064f, 795.973f, 118.625f, 0f, 0f, 99.715f, 5.753f, 3.638f, 3.973f, "Smithfields's Saloon Hitching");
							break;
						case 1:
							break;
						default:
							break;
					}
					break;
				case 10:
					iLocal_202 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2952.651f, 526.154f, 44.9f, 0f, 0f, 0f, 1.901f, 2.431f, 5.094f, "Van Horn's Saloon Hitching");
					break;
				case 4:
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
}

void func_24()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_202))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iLocal_202, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_202, 0, 0, 0, -1, -1, 0);
	func_112(iLocal_202, 0, 0, 0, 0, 0);
	func_113(iLocal_202, 0);
	uLocal_203 = PED::_0x4C39C95AE5DB1329(iLocal_202, false, 15);
}

void func_25(int iParam0, int iParam1, int iParam2)
{
	iLocal_204 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_114(iParam0, iParam1, iParam2), func_115(iParam0, iParam1, iParam2), func_116(iParam0, iParam1, iParam2), "Animscene avodiance");
}

void func_26()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_204))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iLocal_204, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_204, 0, 0, 0, -1, -1, 0);
	func_112(iLocal_204, 0, 0, 0, 0, 0);
	func_113(iLocal_204, 0);
}

bool func_27(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_28(int iParam0)
{
	return ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0, true, false);
}

int func_29(var uParam0, int iParam1, int iParam2, vector3 vParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	switch (iParam2)
	{
		case 4:
			iVar0 = 4;
			iVar1 = -268604689;
			if ((!Local_344.f_161 && func_117(iVar0)) && !func_72(iVar0))
			{
				func_10();
			}
			break;
		default:
			return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 18, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, false);
			PED::SET_PED_CONFIG_FLAG(*iParam1, 18, true);
			PED::SET_PED_CAN_BE_TARGETTED(*iParam1, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam1, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		}
		if (!func_118(iVar0, 256))
		{
			func_119(iVar0, *iParam1, 1);
		}
		else
		{
			AITRANSPORT::_SET_TRANSPORT_CONFIG_FLAG(*iParam1, 6, true);
			return 1;
		}
	}
	else
	{
		bVar2 = false;
		if (!func_90(*uParam0, 0, 1))
		{
			*uParam0 = func_120(iVar0, 1, 1, vParam3.x, vParam3.y, vParam3.z, 0f, 1, 0, 0, 1, 0, 0, iVar1, bVar2, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!func_90(*iParam1, 0, 1))
		{
			*iParam1 = func_121(iVar0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		return 0;
	}
	return 0;
}

int func_30()
{
	switch (iLocal_622)
	{
		case 0:
			iLocal_622 = 1;
			break;
		case 1:
			if (!func_122(Local_344.f_51, 0f, &Local_215, &uLocal_178, 0, 0, -1, 1))
			{
				return 0;
			}
			iLocal_622 = 6;
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_178[0]))
			{
				func_123(uLocal_178[0], 12);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_178[1]))
			{
				func_123(uLocal_178[1], 12);
			}
			return 1;
	}
	return 0;
}

void func_31(int iParam0, int iParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;

	switch (iParam0)
	{
		case 10:
			vVar0 = { 2951.658f, 522.181f, 45.362f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 2.5f, 6.25f, 2f };
			vVar9 = { 2955.698f, 520.1378f, 44.6571f };
			vVar12 = { 0f, 0f, 0f };
			vVar15 = { 2.5f, 4f, 2f };
			vVar18 = { 2953.228f, 526.3458f, 45.92805f };
			vVar21 = { 0f, 0f, 0f };
			vVar24 = { 3f, 3f, 3f };
			break;
		case 4:
			vVar0 = { -810.078f, -1325.815f, 44.056f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 3f, 3f, 3f };
			vVar9 = { -828.913f, -1328.888f, 43.322f };
			vVar12 = { 0f, 0f, 0f };
			vVar15 = { 3f, 3f, 2f };
			vVar18 = { -809.001f, -1329.048f, 43.544f };
			vVar21 = { 0f, 0f, 0f };
			vVar24 = { 7.65f, 4.5f, 2f };
			break;
		default:
			switch (iParam1)
			{
				case 0:
					vVar0 = { -305.321f, 797.702f, 118.645f };
					vVar3 = { 0f, 0f, 10.5f };
					vVar6 = { 7f, 3.5f, 2f };
					vVar9 = { -303.197f, 794.854f, 117.828f };
					vVar12 = { 0f, 0f, 10.5f };
					vVar15 = { 4.5f, 4f, 2f };
					break;
				case 1:
					vVar0 = { -245.781f, 766.819f, 117.737f };
					vVar3 = { 0f, 0f, 21f };
					vVar6 = { 4.75f, 6.2f, 1.5f };
					vVar9 = { -248.632f, 765.011f, 116.983f };
					vVar12 = { 0f, 0f, 20f };
					vVar15 = { 2.5f, 7f, 1.5f };
					break;
			}
			break;
	}
	func_124(vVar0, 3f, 0);
	func_125(&(uParam2->f_15), &(uParam2->f_16), vVar0, vVar3, vVar6, 1, 534496, 1, 2, 0);
	func_125(&(uParam2->f_17), &(uParam2->f_18), vVar9, vVar12, vVar15, 1, 534496, 1, 2, 0);
	if (!func_126(vVar18))
	{
		func_125(&(uParam2->f_19), &(uParam2->f_20), vVar18, vVar21, vVar24, 1, 534496, 1, 2, 0);
		func_113(uParam2->f_19, 0);
	}
}

void func_32(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 == 9 && iParam1 == 0)
	{
		func_127(&(uParam2->f_23), -303.343f, 795.682f, 118.001f, 0f, 0f, 11.25f, 5f, 1.7f, 1f, "RE_SF_NAV_MESH_BLOCKING_VOL");
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam2->f_23))
	{
		PATHFIND::_0x19C7567D2F2287D6(uParam2->f_23, 7);
	}
}

void func_33(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 4:
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					uParam2->f_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-311.716f, 821.056f, 118.528f, 0f, 0f, 10.5f, 12.81f, 3.951f, 10.653f, "volKill");
					break;
				case 1:
					uParam2->f_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-236.724f, 774.881f, 117.183f, 0f, 0f, 22.286f, 6.767f, 6.481f, 9.496f, "volKill");
					break;
				default:
					break;
			}
			break;
		case 10:
			uParam2->f_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2940.289f, 523.053f, 47.023f, 0f, 0f, 0f, 7.76f, 15.73f, 6.656f, "volKill");
			break;
		default:
			break;
	}
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_128(iLocal_214, Local_344.f_51.f_4, 2, 4))
	{
		if (func_90(uLocal_178[iVar0], 0, 1))
		{
			func_129(&(Local_215[iVar0 /*32*/].f_22));
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_178[iVar0], true, true);
			func_131(uLocal_178[iVar0], func_130(joaat("REWARD_BEAT_SMALL"), 0, -1));
			if (iVar0 == 0 || (iVar0 == 1 && !func_7()))
			{
				PED::SET_PED_COMBAT_MOVEMENT(uLocal_178[iVar0], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_178[iVar0], 9, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_178[iVar0], 77, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_178[iVar0], 46, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_178[iVar0], 358, true);
				if (func_132(&(uLocal_178[iVar0])))
				{
					func_133(uLocal_178[iVar0]);
				}
			}
			if (iVar0 == 2 || iVar0 == 2)
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_178[iVar0], 366, true);
			}
			if (!func_134(uLocal_178[iVar0], 0))
			{
				func_135(uLocal_178[iVar0], 0);
			}
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_178[iVar0], "RE_Street_Fight_group", 0f);
			if (func_7() && iVar0 == 0)
			{
				func_136(uLocal_178[iVar0], 1);
			}
		}
		iVar0++;
	}
	if (iLocal_214 == 3 && ENTITY::DOES_ENTITY_EXIST(uLocal_178[1]))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 6, true);
	}
	func_137(uLocal_178[0], &Local_344, 0);
	if (!func_7())
	{
		func_137(uLocal_178[1], &Local_344, 0);
	}
	if (func_90(uLocal_178[2], 0, 1))
	{
		func_137(uLocal_178[2], &Local_344, 0);
	}
	if (func_90(uLocal_178[3], 0, 1))
	{
		func_137(uLocal_178[3], &Local_344, 0);
	}
}

void func_35()
{
	if (!func_90(uLocal_178[1], 0, 1))
	{
		return;
	}
	switch (iLocal_214)
	{
		case 4:
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_178[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_178[1], true, false);
			}
			PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 18, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_178[1], true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_178[1], false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_178[1], true);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_178[1], joaat("WEAPON_UNARMED"), true, 0, false, false);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_178[1], true, true);
			if (PED::IS_PED_ON_MOUNT(uLocal_178[1]))
			{
				TASK::TASK_DISMOUNT_ANIMAL(uLocal_178[1], 16, 0, 0, 0, 0);
			}
			if (func_90(iLocal_185, 0, 1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_185))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_185, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(iLocal_185, 18, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_185, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_185, 127, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_185, true);
				AITRANSPORT::_SET_TRANSPORT_CONFIG_FLAG(iLocal_185, 6, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_185, false, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_185, true);
				func_140(iLocal_185, func_138(iLocal_899), func_139(iLocal_899), 2, 1073741824 /* Float: 2f */);
			}
			break;
	}
}

void func_36()
{
	switch (iLocal_899)
	{
		case 9:
			switch (iLocal_900)
			{
				case 0:
					iLocal_201 = func_141(0);
					break;
				case 1:
					iLocal_201 = func_141(1);
					break;
			}
			break;
		default:
			iLocal_201 = func_141(0);
			break;
	}
}

void func_37()
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<4> Var5;
	struct<4> Var17;

	if ((iLocal_214 != 3 || (iLocal_899 == 9 && Local_344.f_51.f_4 == 1)) || iLocal_899 == 10)
	{
		func_142(iLocal_899, Local_344.f_51.f_4, iLocal_214, &vLocal_61, &fLocal_57, &bVar3, &bVar4);
		if (bVar3)
		{
			vVar0 = { vLocal_61 };
		}
		else
		{
			vVar0 = { Local_344.f_51 + vLocal_61 };
		}
		if (!bVar4)
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_50, vVar0, 0f, 0f, fLocal_57, 2);
		}
	}
	if (func_90(uLocal_178[0], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_143(0), uLocal_178[0], 0);
	}
	if (!func_7())
	{
		if (func_90(uLocal_178[1], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_143(1), uLocal_178[1], 0);
		}
	}
	if (iLocal_214 == 3)
	{
		if (func_90(uLocal_178[2], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_143(2), uLocal_178[2], 0);
		}
		if (func_90(uLocal_178[3], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_143(3), uLocal_178[3], 0);
		}
	}
	if (iLocal_214 != 2 && iLocal_214 != 3)
	{
		iLocal_193 = func_144(iLocal_899, iLocal_900);
		if (iLocal_193 == 0)
		{
		}
		else
		{
			iLocal_195 = func_145(iLocal_193, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_195))
			{
				func_109(iLocal_193, 0, 0f, 0, 0, 0f, 1, 0);
				if (func_7() || iLocal_899 == 10)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_146(iLocal_899, iLocal_900), iLocal_195, 0);
				}
				iLocal_197 = ENTITY::_0xAAACB74442C1BED3(iLocal_195);
			}
		}
		iLocal_194 = func_147(iLocal_214, iLocal_899, iLocal_900);
		if (iLocal_194 == 0)
		{
		}
		else
		{
			iLocal_196 = func_145(iLocal_194, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_196))
			{
				func_109(iLocal_194, 0, 0f, 0, 0, 0f, 1, 0);
				if (func_7() || iLocal_899 == 10)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_148(iLocal_214, iLocal_899, iLocal_900), iLocal_196, 0);
				}
				iLocal_198 = ENTITY::_0xAAACB74442C1BED3(iLocal_196);
			}
		}
	}
	if (func_7())
	{
		if (func_90(uLocal_178[1], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50, func_149(), uLocal_178[1], 0);
		}
	}
	switch (iLocal_214)
	{
		case 4:
			if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iLocal_50, func_143(0), &Var5, false, 0, 2))
			{
				func_140(uLocal_178[0], Var5, Var5.f_3.f_2, 2, 1073741824 /* Float: 2f */);
			}
			if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iLocal_50, func_149(), &Var17, false, 0, 2))
			{
				func_140(uLocal_178[1], Var17, Var17.f_3.f_2, 2, 1073741824 /* Float: 2f */);
			}
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_50, func_110(1));
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_50, func_110(2));
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_50, func_110(3));
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_50, func_110(4));
			break;
		default:
			ANIMSCENE::START_ANIM_SCENE(iLocal_50);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_50, "FLAG_LOOP", false, false);
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_50, func_111(iLocal_214));
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_50, func_150(iLocal_214));
			iLocal_205 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 2f, 2f, 2f);
			PED::_0x7C00CFC48A782DC0(iLocal_205, uLocal_178[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			iLocal_206 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 2f, 2f, 2f);
			PED::_0x7C00CFC48A782DC0(iLocal_206, uLocal_178[1], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			break;
	}
}

void func_38()
{
	vector3 vVar0;

	if (func_52(268435456))
	{
		return;
	}
	if (!func_7())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_185))
	{
		return;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_200))
	{
		vVar0 = { func_151(iLocal_899) };
		iLocal_200 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar0, joaat("PROP_HITCHINGPOST"), 1f, 1, false);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_200))
	{
		TASK::TASK_USE_SCENARIO_POINT(iLocal_185, iLocal_200, 0, 0, false, false, 0, false, -1f, false);
		func_152(268435456);
	}
}

void func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_1(3, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_178[iVar0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(uLocal_178[iVar0]))
		{
		}
		else
		{
			iVar1 = iVar0;
			switch (iVar1)
			{
				case 0:
					func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_708, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
					func_154(&(Local_623[iVar1 /*21*/]), &Local_708, &iLocal_883, iLocal_214, iLocal_899);
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_778, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
						func_155(&(Local_623[iVar1 /*21*/]), &Local_778, &iLocal_884, iLocal_899);
						func_156(uLocal_178[iVar1], joaat("COMP_UNCLE"));
					}
					else
					{
						func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_743, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
						func_157(&(Local_623[iVar1 /*21*/]), &Local_743, &iLocal_883, iLocal_214, iLocal_899);
					}
					break;
				case 2:
					func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_813, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
					func_158(&(Local_623[iVar1 /*21*/]), &Local_813);
					break;
				case 3:
					func_153(&(uLocal_178[iVar1]), &(Local_623[iVar1 /*21*/]), 15f, &Local_848, 0, 3, 0, 0, iVar2, 0, 0, 2, -1082130432 /* Float: -1f */);
					func_159(&(Local_623[iVar1 /*21*/]), &Local_848);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_41(var uParam0)
{
	return func_160(*uParam0, 1);
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1 || !func_41(uParam0))
	{
		func_161(uParam0);
	}
}

bool func_43(var uParam0, float fParam1)
{
	if (!func_41(uParam0))
	{
		return false;
	}
	if (func_162(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_44(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_163())
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
			else if (func_164(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_102(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_102(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_102(uParam0->f_3, 2) || iParam12 == 1)
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
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*uParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_188])) || !bParam3)
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
				if (func_165(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_165(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_191]))
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

bool func_45(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_166(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_167(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_168(&(uParam0->f_5));
			}
			func_169(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_170(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_171(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_172(&(uParam0->f_121));
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
					func_173(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_174(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_102(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				func_175(uParam0, (*uParam1)[0]);
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

bool func_46(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_176(bParam1, bParam2, bParam3);
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

void func_47()
{
	func_177(0);
	if ((func_90(uLocal_178[0], 0, 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[0], joaat("SCRIPT_TASK_GRAPPLE"), true) == 1) || (func_90(uLocal_178[1], 0, 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[1], joaat("SCRIPT_TASK_GRAPPLE"), true) == 1))
	{
		func_178(iLocal_183, iLocal_184);
	}
	if (func_90(uLocal_178[1], 0, 0))
	{
		switch (iLocal_214)
		{
			case 3:
				if (func_179(iLocal_48, 16))
				{
					func_180(uLocal_178[1], 1, 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 243, true);
				}
				break;
		}
	}
}

void func_48(int iParam0)
{
	iLocal_562 = iParam0;
}

bool func_49()
{
	if (!func_52(4096))
	{
		if (func_181(uLocal_178[0], 1, 1, 0, 0, 0))
		{
			if (!func_41(&uLocal_168))
			{
				func_42(&uLocal_168, 0);
			}
			else if (func_43(&uLocal_168, 1.5f))
			{
				func_152(4096);
				func_40(&uLocal_168);
			}
		}
	}
	if (func_182(uLocal_178[0], 0, &(Local_344.f_5), &iLocal_592, 0, 0) || func_52(4096))
	{
		switch (iLocal_592)
		{
			case 2:
			case 4:
			case 8:
			case 256:
				func_152(16384);
				func_152(1);
				if (!func_52(8192))
				{
					func_183();
				}
				return true;
			default:
				break;
		}
		if (func_52(4096))
		{
			func_152(16384);
			func_152(1);
			if (!func_52(8192))
			{
				func_183();
			}
		}
		return true;
	}
	else if (iLocal_592 > 0)
	{
	}
	return false;
}

bool func_50()
{
	int iVar0;

	iVar0 = 1;
	if (iLocal_214 == 3)
	{
		iVar0 = 3;
	}
	if (func_184(&uLocal_178, &(Local_344.f_5), &iLocal_592, &iLocal_51, 0, iVar0, 1))
	{
		iLocal_212 = iLocal_51;
		if (!func_90(uLocal_178[iLocal_212], 8, 1))
		{
			return false;
		}
		if (iLocal_592 == 2048 && iLocal_562 != 5)
		{
			if (!func_179(iLocal_48, 32768))
			{
				func_152(32768);
				if (iLocal_214 == 2 && func_185(iLocal_50))
				{
					if (iLocal_212 != 0)
					{
						func_152(524288);
					}
					if (iLocal_212 != 1)
					{
						func_152(1048576);
					}
					return true;
				}
				return true;
			}
		}
		else
		{
			switch (iLocal_592)
			{
				case 2048:
					switch (iLocal_212)
					{
						case 0:
							if (func_186(8))
							{
								return false;
							}
							break;
						case 1:
							if (func_186(4))
							{
								return false;
							}
							break;
					}
					break;
				case 2:
					return true;
				case 4:
				case 8:
				case 16:
				case 256:
					func_152(16384);
					break;
			}
			switch (iLocal_212)
			{
				case 2:
				case 3:
					func_152(2048);
					break;
			}
			if (((iLocal_562 != 5 && iLocal_562 != 6) && iLocal_562 != 14) && iLocal_562 != 16)
			{
				func_187();
			}
			if (iLocal_214 == 2 && func_185(iLocal_50))
			{
				if (iLocal_212 != 0)
				{
					func_152(524288);
				}
				if (iLocal_212 != 1)
				{
					func_152(1048576);
				}
			}
			if (iLocal_592 != 16384 && iLocal_592 != 8192)
			{
				return true;
			}
		}
	}
	return false;
}

void func_51()
{
	if (!func_52(16384) && func_90(uLocal_178[iLocal_212], 0, 1))
	{
		if (iLocal_212 == 0)
		{
			func_188(uLocal_178[iLocal_212], Global_35, 4194304, 1, -1065353216 /* Float: -4f */);
		}
		else if (iLocal_212 == 1)
		{
			if (iLocal_214 == 1 && iLocal_899 == 9)
			{
				func_189(uLocal_178[iLocal_212], Global_35, "CHALLENGE_THREATEN", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_188(uLocal_178[iLocal_212], Global_35, 8388608, 1, -1065353216 /* Float: -4f */);
			}
		}
		else if (iLocal_212 == 2)
		{
			func_188(uLocal_178[iLocal_212], Global_35, 16777216, 1, -1065353216 /* Float: -4f */);
		}
		else if (iLocal_212 == 3)
		{
			func_188(uLocal_178[iLocal_212], Global_35, 33554432, 1, -1065353216 /* Float: -4f */);
		}
	}
}

bool func_52(int iParam0)
{
	return func_179(iLocal_48, iParam0);
}

void func_53(int iParam0, bool bParam1)
{
	if (!func_90(uLocal_178[iParam0], 0, 0))
	{
		return;
	}
	Local_344.f_46 = 1;
	func_190(iParam0);
	if (bParam1)
	{
		Local_567.f_7 = 2000;
		IK::_0x66F9EB44342BB4C5(uLocal_178[iLocal_212], &Local_567);
	}
	if (iParam0 == 0)
	{
		if (!func_186(16))
		{
			func_188(uLocal_178[iLocal_212], Global_35, 4194304, 1, -1065353216 /* Float: -4f */);
		}
	}
	else if (iLocal_214 == 1 && iLocal_899 == 9)
	{
		func_189(uLocal_178[iLocal_212], Global_35, "CHALLENGE_THREATEN", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else
	{
		func_188(uLocal_178[iLocal_212], Global_35, 8388608, 1, -1065353216 /* Float: -4f */);
	}
}

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_179(iLocal_48, 1048576))
			{
				func_191(uLocal_178[2], uLocal_178[3], 0, 0);
			}
			else
			{
				func_191(uLocal_178[1], uLocal_178[2], uLocal_178[3], 0);
			}
			break;
		case 1:
			if (func_179(iLocal_48, 524288))
			{
				func_191(uLocal_178[2], uLocal_178[3], 0, 0);
			}
			else
			{
				func_191(uLocal_178[0], uLocal_178[2], uLocal_178[3], 0);
			}
			break;
		case 2:
		case 3:
			func_191(uLocal_178[0], uLocal_178[1], uLocal_178[2], uLocal_178[3]);
			break;
	}
}

bool func_55()
{
	int iVar0;

	if (iLocal_562 > 1)
	{
		if (iLocal_562 < 12)
		{
			func_38();
		}
		func_192();
		func_193();
		func_194();
		func_195();
		func_196();
		func_197();
		func_198();
	}
	if (bLocal_207)
	{
		func_86();
		func_87();
	}
	if (iLocal_562 > 3)
	{
		if (iLocal_214 != 3 && iLocal_214 != 4)
		{
			func_199();
		}
		if (iLocal_214 == 4 && iLocal_562 >= 9)
		{
			if (func_200(&uLocal_174, 1f))
			{
				if (func_6() == 4)
				{
					func_189(uLocal_178[0], 0, "RE_STF_BLW_V6_PATHETIC", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_189(uLocal_178[0], 0, "RE_STF_VAL_V6_PATHETIC", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
		}
	}
	if (func_179(iLocal_48, 16) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_64.f_3, 3f) > 0)
	{
		FIRE::STOP_FIRE_IN_RANGE(Local_64.f_3, 3f);
	}
	switch (iLocal_562)
	{
		case 0:
			switch (iLocal_214)
			{
				case 4:
					if (func_28(iLocal_50))
					{
						func_156(uLocal_178[1], joaat("COMP_UNCLE"));
						ENTITY::SET_ENTITY_VISIBLE(uLocal_178[1], false);
						ENTITY::SET_ENTITY_VISIBLE(uLocal_178[0], false);
						func_48(8);
					}
					break;
				default:
					if (func_201(iLocal_50, func_150(iLocal_214)))
					{
						func_48(1);
					}
					break;
			}
			break;
		case 2:
			func_202();
			func_203();
			func_204();
			func_205();
			func_206();
			if (func_207())
			{
				func_208();
				switch (iLocal_214)
				{
					case 0:
					case 1:
					case 2:
						func_209(&(Local_344.f_5), 1);
						func_48(3);
						break;
					case 3:
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[0], true);
						func_210(0, 0, 0, 0);
						func_209(&(Local_344.f_5), 1);
						func_211();
						func_74(iLocal_205);
						func_74(iLocal_206);
						func_48(20);
						break;
				}
			}
			break;
		case 3:
			func_212(0);
			func_213();
			if (iLocal_565 == 10 || func_214())
			{
				func_74(iLocal_205);
				func_74(iLocal_206);
				PED::SET_COMBAT_FLOAT(uLocal_178[0], 12, 0f);
				func_48(4);
			}
			else if ((!func_215(0) && !func_215(1)) && func_179(iLocal_48, 32768))
			{
				func_47();
				func_74(iLocal_205);
				func_74(iLocal_206);
				if (iLocal_212 == 0)
				{
					func_53(iLocal_212, 0);
				}
				else if (iLocal_212 == 1)
				{
					func_54(iLocal_212);
				}
				func_48(14);
			}
			break;
		case 4:
			if (func_214())
			{
				func_212(0);
				func_74(Local_64.f_25);
				func_8(&Local_344, 1);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_178[0]) && !func_216(uLocal_178[0], 1313215416))
				{
					func_161(&uLocal_138);
					PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 243, true);
					func_64(&(Local_344.f_5), 1);
					func_74(iLocal_205);
					func_74(iLocal_206);
					func_48(5);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_178[1]) && !func_216(uLocal_178[1], 1313215416))
				{
					if (func_162(&uLocal_159) > 3f)
					{
						func_40(&uLocal_159);
						func_177(0);
						if (iLocal_214 == 2)
						{
							func_189(uLocal_178[1], uLocal_178[1], func_217(iLocal_899, iLocal_214, 1024), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_189(uLocal_178[1], uLocal_178[1], func_217(iLocal_899, iLocal_214, 16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_218();
						PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 243, true);
						func_219(iLocal_899, iLocal_214, &(Local_623[iLocal_213 /*21*/]), &Local_743, iLocal_211);
						func_48(20);
					}
					else if (func_162(&uLocal_159) > 1f && func_220(uLocal_178[1], 1, 1) < 1.5f)
					{
						iLocal_212 = 1;
						func_40(&uLocal_159);
						func_177(0);
						if (iLocal_214 == 1 && iLocal_899 == 9)
						{
							func_189(uLocal_178[iLocal_212], Global_35, "CHALLENGE_THREATEN", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_189(uLocal_178[iLocal_212], Global_35, func_217(iLocal_899, iLocal_214, 8388608), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_53(1, 0);
						func_54(1);
						func_48(14);
					}
					else if (!func_41(&uLocal_159))
					{
						func_161(&uLocal_159);
					}
				}
				else
				{
					func_48(22);
				}
			}
			break;
		case 5:
			func_202();
			func_212(0);
			if (func_162(&uLocal_138) > 1f)
			{
				func_221();
				if (func_162(&uLocal_141) > 10f)
				{
					func_222();
					func_152(131072);
					if (func_90(uLocal_178[0], 0, 1))
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, false);
					}
					func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
					iLocal_23 = 4;
					func_48(7);
				}
				else if (!func_41(&uLocal_141))
				{
					func_161(&uLocal_141);
				}
				if (func_41(&uLocal_153))
				{
					if (func_162(&uLocal_153) > 2f && func_224(-6f, 1, 0, 0))
					{
						if (func_225(Global_35, uLocal_178[0]) < 2.5f)
						{
							iLocal_212 = 0;
							func_226();
							func_177(0);
							func_227(4194304);
							func_189(uLocal_178[iLocal_212], Global_35, func_217(iLocal_899, iLocal_214, 4194304), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							if (func_90(uLocal_178[0], 0, 1))
							{
								PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
							}
							bLocal_208 = true;
							iLocal_23 = 3;
							func_48(6);
						}
						else
						{
							func_161(&uLocal_153);
						}
					}
				}
				else if (func_225(Global_35, uLocal_178[0]) < 2.5f)
				{
					func_161(&uLocal_153);
				}
			}
			break;
		case 6:
			func_221();
			if (func_90(uLocal_178[0], 0, 1))
			{
				TASK::TASK_REACT(uLocal_178[0], Global_35, Global_36, "Default_Angry", 0.5f, 0f, 4);
				IK::_0x66F9EB44342BB4C5(uLocal_178[0], &Local_567);
			}
			func_228();
			if (func_224(0, 1, Global_35, 1) && !func_186(16))
			{
				func_188(uLocal_178[iLocal_212], Global_35, 4194304, 1, -1065353216 /* Float: -4f */);
			}
			if (func_224(0, 1, uLocal_178[0], 1) && func_224(0, 1, Global_35, 1))
			{
				func_53(0, 0);
				func_54(0);
				func_48(14);
			}
			break;
		case 7:
			bLocal_207 = true;
			func_221();
			if (func_90(uLocal_178[0], 0, 1))
			{
				IK::_0x66F9EB44342BB4C5(uLocal_178[0], &Local_567);
				PED::SET_PED_RESET_FLAG(uLocal_178[iLocal_213], 94, true);
				PED::_0xC6981AFF6D2A71C2(uLocal_178[iLocal_213]);
			}
			if (func_224(-2f, 1, 0, 0))
			{
				func_222();
				func_48(20);
			}
			break;
		case 8:
			if (func_229())
			{
				iLocal_566 = func_230(iLocal_899, &iLocal_50);
				ENTITY::SET_ENTITY_VISIBLE(uLocal_178[1], true);
				ENTITY::SET_ENTITY_VISIBLE(uLocal_178[0], true);
				ANIMSCENE::START_ANIM_SCENE(iLocal_50);
				func_48(9);
				PED::_0x89F5E7ADECCCB49C(uLocal_178[1], "injured_general");
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_64.f_27, true, 0))
			{
				func_152(268435456);
				func_48(22);
			}
			break;
		case 9:
			func_64(&(Local_344.f_5), 1);
			func_231(&(Local_344.f_5), 1);
			if ((!func_52(8192) && (func_52(1) && func_162(&uLocal_165) > 2f)) && func_232(uLocal_178[0]))
			{
				IK::_0x66F9EB44342BB4C5(uLocal_178[0], &Local_567);
				func_152(2097152);
				func_210(iLocal_213, 0, 0, 1);
				func_189(uLocal_178[0], Global_35, func_233(iLocal_899, iLocal_214, 128), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_234(&iLocal_199, iLocal_899, iLocal_900);
			func_204();
			func_202();
			func_235();
			func_236(0);
			if (!func_185(iLocal_50) || !func_237(uLocal_178[1], iLocal_50))
			{
				func_238();
				func_239(&uLocal_187);
				func_212(0);
				func_152(4194304);
				func_48(12);
			}
			else if (func_52(2097152))
			{
				func_239(&uLocal_187);
				func_212(0);
				func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
				func_210(0, 0, 0, 1);
				func_48(11);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_50) >= 0.62f && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_192, iLocal_50))
			{
				func_236(1);
			}
			break;
		case 10:
			if (func_52(16384))
			{
				func_239(&uLocal_187);
				PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(uLocal_178[iLocal_213], Global_36, 1, false);
				TASK::TASK_SMART_FLEE_PED(uLocal_178[iLocal_213], Global_35, -1f, -1, 32768, 1f, 0);
				func_189(uLocal_178[iLocal_212], Global_35, func_240(iLocal_212, iLocal_899, iLocal_214), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (func_179(iLocal_48, 4194304))
				{
					func_241(0, 0);
					func_48(22);
				}
				else
				{
					func_152(2097152);
					func_48(11);
				}
			}
			else
			{
				func_188(uLocal_178[0], Global_35, 2048, 1, -1065353216 /* Float: -4f */);
				func_236(1);
				func_242(1);
				func_48(16);
			}
			break;
		case 11:
			func_243();
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_178[1], joaat("REACT")))
			{
				func_238();
			}
			if ((!func_185(iLocal_50) || !func_237(uLocal_178[1], iLocal_50)) || func_244(iLocal_50, uLocal_178[1]))
			{
				if (func_220(uLocal_178[1], 1, 1) > 20f || func_245(Global_35, iLocal_201, 1, 0))
				{
					func_241(0, 0);
					bLocal_44 = true;
					func_48(20);
				}
				else
				{
					func_152(4194304);
					func_238();
					func_241(1, 0);
					func_48(12);
				}
			}
			break;
		case 12:
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_178[1], Local_546[3 /*2*/], Local_546[3 /*2*/].f_1, 1) && !func_237(uLocal_178[1], iLocal_50)) && !func_216(uLocal_178[1], 2121492476))
			{
				if (((func_52(16777216) || func_52(33554432)) || func_245(Global_35, iLocal_201, 1, 0)) || func_246())
				{
					bLocal_44 = true;
					if (!func_247(uLocal_178[1], iLocal_185, 0))
					{
						func_241(0, 0);
					}
					func_48(21);
				}
				else if (!func_248(uLocal_178[1], Global_35, 0.6f))
				{
					if (!func_216(uLocal_178[1], -875674219) && !ENTITY::IS_ENTITY_DEAD(uLocal_178[0]))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_178[1], Global_35, 0, -1f, -1f, -1f);
					}
				}
			}
			break;
		case 1:
			if (func_229() && func_201(iLocal_50, func_150(iLocal_214)))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_50, func_150(iLocal_214), true);
				func_48(2);
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_64.f_27, true, 0))
			{
				func_152(268435456);
				func_48(22);
			}
			break;
		case 14:
			if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iLocal_212]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iLocal_212], true);
			}
			bLocal_207 = true;
			AUDIO::STOP_PED_SPEAKING(uLocal_178[iLocal_212], true);
			func_228();
			if (func_179(iLocal_48, 524288) || func_179(iLocal_48, 1048576))
			{
				func_48(15);
			}
			else if (func_52(16384))
			{
				func_48(17);
			}
			else
			{
				func_48(16);
			}
			break;
		case 15:
			if (func_249())
			{
				if (func_52(16384))
				{
					func_48(17);
				}
				else
				{
					func_48(16);
				}
			}
			break;
		case 16:
			func_243();
			func_74(iLocal_205);
			func_74(iLocal_206);
			if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iLocal_212]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iLocal_212], true);
			}
			if (!func_90(uLocal_178[iLocal_212], 0, 1))
			{
				func_239(&uLocal_187);
				if (func_7())
				{
					if (func_179(iLocal_48, 4194304))
					{
						func_241(0, 0);
						func_48(22);
					}
					else
					{
						func_152(2097152);
						func_48(11);
					}
				}
				else
				{
					func_48(22);
				}
			}
			else
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[iLocal_212], 780511057, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[iLocal_212], 780511057, true) != 0)
				{
					if ((iLocal_23 == 2 && func_250(32)) && !bLocal_40)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_41) >= 2300)
						{
							func_190(iLocal_212);
							bLocal_40 = true;
						}
					}
					else
					{
						func_190(iLocal_212);
					}
				}
				if (func_220(uLocal_178[iLocal_212], 1, 1) > 20f || func_182(uLocal_178[iLocal_212], 0, &uLocal_594, &uLocal_593, 1, 0))
				{
					func_239(&uLocal_187);
					if (func_90(uLocal_178[iLocal_212], 201, 1))
					{
						func_251(uLocal_178[iLocal_212], 1, Global_35, 0);
						func_189(uLocal_178[iLocal_212], Global_35, func_240(iLocal_212, iLocal_899, iLocal_214), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (func_7())
					{
						if (func_179(iLocal_48, 4194304))
						{
							func_241(0, 0);
							func_48(22);
						}
						else
						{
							func_152(2097152);
							func_48(11);
						}
					}
					else
					{
						func_48(22);
					}
				}
				if (PED::IS_PED_FULLY_ON_MOUNT(Global_35, true))
				{
					if (!func_41(&uLocal_156))
					{
						func_161(&uLocal_156);
					}
					else if (func_200(&uLocal_156, 9f))
					{
						func_239(&uLocal_187);
						if (func_7())
						{
							if (func_179(iLocal_48, 4194304))
							{
								func_241(0, 0);
								func_48(22);
							}
							else
							{
								func_152(2097152);
								func_48(11);
							}
						}
						else
						{
							func_48(22);
						}
					}
				}
				else if (func_41(&uLocal_156))
				{
					func_40(&uLocal_156);
				}
			}
			break;
		case 17:
			bLocal_207 = true;
			if (func_90(uLocal_178[iLocal_212], 0, 1))
			{
				func_239(&uLocal_187);
				TASK::_0x2E1D6D87346BB7D2(uLocal_178[iLocal_212], Global_35, 0, 0);
				if (func_216(uLocal_178[0], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")) || func_216(uLocal_178[1], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
				{
					func_80(uLocal_178[iLocal_183]);
					func_48(18);
				}
				else
				{
					func_177(0);
					func_188(uLocal_178[iLocal_212], Global_35, func_252(iLocal_212), 1, -1065353216 /* Float: -4f */);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_REACT(0, Global_35, Global_36, "Default_Shocked", 1f, 0f, 4);
					TASK::TASK_SMART_FLEE_PED(0, Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
					func_253(uLocal_178[iLocal_212], &iVar0, 0, 0, 1, 1);
					func_48(19);
				}
			}
			else
			{
				func_48(19);
			}
			break;
		case 18:
			bLocal_207 = true;
			if (func_90(uLocal_178[0], 201, 1) && func_90(uLocal_178[1], 201, 1))
			{
				if (!PED::GET_PED_IS_GRAPPLED(uLocal_178[0]) && !PED::GET_PED_IS_GRAPPLED(uLocal_178[1]))
				{
					func_177(0);
					func_188(uLocal_178[iLocal_212], Global_35, func_252(iLocal_212), 1, -1065353216 /* Float: -4f */);
					func_251(uLocal_178[iLocal_212], 1, Global_35, 0);
					func_48(22);
				}
			}
			else
			{
				func_48(19);
			}
			break;
		case 19:
			bLocal_207 = true;
			if (func_90(uLocal_178[iLocal_212], 0, 1))
			{
				if (PED::IS_PED_INJURED(uLocal_178[iLocal_212]) || (func_216(uLocal_178[iLocal_212], 242628503) && TASK::GET_SEQUENCE_PROGRESS(uLocal_178[iLocal_212]) > 0))
				{
					func_251(uLocal_178[iLocal_212], 1, Global_35, 0);
					func_48(22);
				}
			}
			else
			{
				func_48(22);
			}
			break;
		case 20:
			func_64(&(Local_344.f_5), 1);
			func_231(&(Local_344.f_5), 1);
			bLocal_207 = true;
			func_254();
			func_255();
			if (!func_52(1073741824 /* Float: 2f */))
			{
				if (func_90(uLocal_178[iLocal_213], 0, 1))
				{
					if ((func_256(uLocal_178[iLocal_213], 1) || func_257(uLocal_178[iLocal_213], Local_64, 1) < 5f) || func_220(uLocal_178[iLocal_213], 1, 1) > 35f)
					{
						func_239(&uLocal_187);
						if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_199) && !func_52(131072))
						{
							PED::_0x24C82EF607105FAA(uLocal_178[iLocal_213], joaat("AGGRESSIVE"));
							if (iLocal_214 != 3)
							{
								PED::SET_PED_CONFIG_FLAG(uLocal_178[iLocal_213], 168, true);
							}
							PED::SET_PED_CONFIG_FLAG(uLocal_178[iLocal_213], 146, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_178[iLocal_213], false);
							func_48(21);
						}
						else
						{
							PED::_0x24C82EF607105FAA(uLocal_178[iLocal_213], joaat("AGGRESSIVE"));
							func_258(uLocal_178[iLocal_213], 2);
							func_259(uLocal_178[iLocal_213], Local_64, 0);
							func_152(1073741824 /* Float: 2f */);
						}
					}
					else
					{
						PED::SET_PED_RESET_FLAG(uLocal_178[iLocal_213], 94, true);
						PED::_0xC6981AFF6D2A71C2(uLocal_178[iLocal_213]);
					}
				}
				else
				{
					func_152(1073741824 /* Float: 2f */);
				}
			}
			break;
		case 21:
			func_64(&(Local_344.f_5), 1);
			func_231(&(Local_344.f_5), 1);
			bLocal_207 = true;
			func_254();
			func_255();
			if (!func_52(1073741824 /* Float: 2f */))
			{
				if (func_90(uLocal_178[iLocal_213], 0, 1))
				{
					if (VOLUME::DOES_VOLUME_EXIST(iLocal_201))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_201, true, 0))
						{
							if (func_41(&uLocal_162))
							{
								if (func_162(&uLocal_162) > 30f)
								{
									func_40(&uLocal_162);
									func_258(uLocal_178[iLocal_213], 2);
									func_259(uLocal_178[iLocal_213], Local_64, 0);
									func_152(1073741824 /* Float: 2f */);
								}
							}
							else
							{
								func_161(&uLocal_162);
							}
						}
					}
					else
					{
						func_36();
					}
					if (func_260(2))
					{
						func_152(1073741824 /* Float: 2f */);
					}
					else if (func_260(4))
					{
						TASK::TASK_SMART_FLEE_PED(uLocal_178[iLocal_213], Global_35, -1f, -1, 32768, 1f, 0);
						func_152(1073741824 /* Float: 2f */);
					}
					if (func_220(uLocal_178[iLocal_213], 1, 1) > 35f)
					{
						func_258(uLocal_178[iLocal_213], 2);
						func_259(uLocal_178[iLocal_213], Local_64, 0);
						func_152(1073741824 /* Float: 2f */);
					}
				}
				else
				{
					func_152(1073741824 /* Float: 2f */);
				}
			}
			if (func_52(-2147483648) && func_52(1073741824 /* Float: 2f */))
			{
				func_48(22);
			}
			break;
		case 22:
			if (func_52(268435456))
			{
				return true;
			}
			else if (func_254())
			{
				Local_344.f_50 = 1;
				func_212(1);
				return true;
			}
			break;
	}
	return false;
}

void func_56()
{
	if ((func_186(2) || MAP::DOES_BLIP_EXIST(uLocal_187[0])) || MAP::DOES_BLIP_EXIST(uLocal_187[1]))
	{
		return;
	}
	if (((func_52(16) || func_261(1)) || func_261(32)) || func_261(1))
	{
		func_262(2);
		if (iLocal_214 == 1 || iLocal_214 == 2)
		{
			func_263(uLocal_178[1], &(uLocal_187[1]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
		else
		{
			func_263(uLocal_178[0], &(uLocal_187[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
		}
	}
}

void func_57(var uParam0)
{
	func_60(uParam0, 0);
	func_64(uParam0, 0);
	func_264(uParam0, 1);
	func_68(uParam0, 1);
	func_265(uParam0, 0);
	func_65(uParam0, 1);
	func_63(uParam0, 1, 1, 1);
}

var func_58(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_266(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_267(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_266(sVar0, iParam1, 0, 0, 1, 1);
}

int func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_268(iParam0) % iParam1);
	}
	return (func_269(iParam0) % iParam1);
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(uParam0->f_1), 16384);
	}
	else
	{
		func_169(&(uParam0->f_1), 16384);
	}
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(uParam0->f_1), 8);
	}
	else
	{
		func_169(&(uParam0->f_1), 8);
	}
}

void func_62(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_63(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_169(iParam0, 268435456);
	}
	else
	{
		func_270(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_169(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_270(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_169(iParam0, 536870912);
	}
	else
	{
		func_270(iParam0, 536870912);
	}
}

void func_64(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(uParam0->f_1), 2048);
	}
	else
	{
		func_169(&(uParam0->f_1), 2048);
	}
}

void func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 256);
	}
	else
	{
		func_270(iParam0, 256);
	}
}

void func_66(var uParam0, float fParam1, bool bParam2)
{
	uParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_271(uParam0, fParam1);
	}
}

void func_67(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(uParam0->f_1), 2);
	}
	else
	{
		func_169(&(uParam0->f_1), 2);
	}
}

void func_68(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 16);
	}
	else
	{
		func_270(iParam0, 67108864);
		func_270(iParam0, 16);
	}
}

void func_69(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 4);
	}
	else
	{
		func_270(iParam0, 4);
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 8);
	}
	else
	{
		func_270(iParam0, 8);
	}
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 32);
	}
	else
	{
		func_270(iParam0, 32);
	}
}

bool func_72(int iParam0)
{
	if (!func_272(iParam0))
	{
		return false;
	}
	if (!func_117(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_73(var uParam0, int iParam1, int* iParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, func_273(iParam4, 0), 2f, 1f, 0, 0);
	func_253(*uParam0, &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	func_274(iParam2, uParam3);
	func_275(iParam1, 0, 0, 0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
}

void func_74(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_75(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_276(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_277(uParam0->f_3, 524288);
		}
	}
	if (func_90(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_90((*uParam1)[iVar0], 0, 0))
			{
				func_278((*uParam1)[iVar0], bVar3);
				if (func_279(uParam0, uParam1[iVar0]))
				{
					func_280(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_90((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_282((*uParam1)[iVar0], 1073741824 /* Float: 2f */, func_281(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_283(uParam0);
	}
	func_284(uParam0);
	if (!uParam0->f_186)
	{
		func_166(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_285(uParam0->f_3, uParam0->f_185);
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
		func_286(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_76(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_77(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_287((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_288(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_78()
{
	if (PED::_0x91A5F9CBEBB9D936(Local_64.f_16))
	{
		func_289(&(Local_64.f_15), &(Local_64.f_16));
	}
	if (PED::_0x91A5F9CBEBB9D936(Local_64.f_18))
	{
		func_289(&(Local_64.f_17), &(Local_64.f_18));
	}
	if (PED::_0x91A5F9CBEBB9D936(Local_64.f_20))
	{
		func_289(&(Local_64.f_19), &(Local_64.f_20));
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_64.f_23))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_64.f_23);
		func_74(Local_64.f_23);
		Local_64.f_23 = 0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_64.f_24))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_64.f_24);
		func_74(Local_64.f_24);
		Local_64.f_24 = 0;
	}
	func_74(Local_64.f_25);
}

void func_79(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_80(int iParam0)
{
	if (!func_90(iParam0, 0, 1))
	{
		return;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE"), true) != 1)
	{
		return;
	}
	PED::_0x8301D87B1B89E219(iParam0, joaat("ACT_GRAPPLE_THROW_FRONT"));
	PED::_0x789DABD18E9024DB(iParam0, 32768, 0);
}

void func_81(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_90((*uParam0)[iVar0], 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0], false);
		}
		iVar0++;
	}
}

void func_82(var uParam0)
{
	if (*uParam0 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(*uParam0);
		*uParam0 = 0;
	}
}

void func_83(int iParam0)
{
	if (func_290(iParam0) && func_291())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_84()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_202))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(iLocal_202);
	POPULATION::_0xA1CFB35069D23C23(iLocal_202);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_203))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_203, false);
	}
}

void func_85()
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_202))
	{
		VOLUME::_DELETE_VOLUME(iLocal_202);
		iLocal_202 = 0;
	}
}

void func_86()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_204))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(iLocal_204);
	POPULATION::_0xA1CFB35069D23C23(iLocal_204);
}

void func_87()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_204))
	{
		return;
	}
	VOLUME::_DELETE_VOLUME(iLocal_204);
	iLocal_204 = 0;
}

void func_88(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_195) || !func_237(iLocal_195, iLocal_50))
	{
		return;
	}
	if ((((bParam0 || !func_90(uLocal_178[0], 0, 1)) || !func_237(uLocal_178[0], iLocal_50)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_195)) || func_220(iLocal_195, 1, 1) < 2f)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_146(iLocal_899, iLocal_900), iLocal_195);
	}
}

void func_89(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_196) || !func_237(iLocal_196, iLocal_50))
	{
		return;
	}
	if ((((bParam0 || !func_90(uLocal_178[0], 0, 1)) || !func_237(uLocal_178[0], iLocal_50)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_196)) || func_220(iLocal_196, 1, 1) < 2f)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_148(iLocal_214, iLocal_899, iLocal_900), iLocal_196);
	}
}

bool func_90(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_292(iParam0, iParam1);
}

bool func_91(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_293(iVar0))
	{
		return false;
	}
	if (func_294(iVar0, 1) || func_294(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_92(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_295(uParam0->f_3);
	iVar1 = func_296(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_93(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 10:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
			(*uParam0)[0 /*32*/] = 22;
			func_297(&((uParam0[0 /*32*/])->f_22));
			(uParam0[1 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
			(*uParam0)[1 /*32*/] = 22;
			func_297(&((uParam0[1 /*32*/])->f_22));
			switch (iParam1)
			{
				case 0:
					(uParam0[0 /*32*/])->f_3 = 672405718;
					(uParam0[1 /*32*/])->f_3 = 402293651;
					break;
				case 1:
					(uParam0[0 /*32*/])->f_3 = 935704633;
					(uParam0[1 /*32*/])->f_3 = 1236887312;
					break;
				case 3:
					(uParam0[0 /*32*/])->f_3 = 1418490310;
					(uParam0[1 /*32*/])->f_3 = 1655707901;
					(uParam0[2 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
					(*uParam0)[2 /*32*/] = 4;
					(uParam0[2 /*32*/])->f_3 = 1245509546;
					(uParam0[3 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
					(*uParam0)[3 /*32*/] = 4;
					(uParam0[3 /*32*/])->f_3 = 399381197;
					break;
				default:
					(uParam0[0 /*32*/])->f_3 = 672405718;
					(uParam0[1 /*32*/])->f_3 = 402293651;
					break;
			}
			break;
		case 4:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
			(*uParam0)[0 /*32*/] = 22;
			(uParam0[0 /*32*/])->f_3 = 903791949;
			func_297(&((uParam0[0 /*32*/])->f_22));
			break;
		default:
			(uParam0[0 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
			(*uParam0)[0 /*32*/] = 22;
			func_297(&((uParam0[0 /*32*/])->f_22));
			if (iParam1 != 4)
			{
				(uParam0[1 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
				(*uParam0)[1 /*32*/] = 22;
				func_297(&((uParam0[1 /*32*/])->f_22));
			}
			if (iParam1 == 3 && iParam3 == 0)
			{
				(uParam0[2 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
				(*uParam0)[2 /*32*/] = 4;
				(uParam0[2 /*32*/])->f_3 = 1841741509;
				(uParam0[3 /*32*/])->f_1 = joaat("RE_STREET_FIGHT_MALES_01");
				(*uParam0)[3 /*32*/] = 4;
				(uParam0[3 /*32*/])->f_3 = 961762775;
			}
			switch (iParam1)
			{
				case 0:
					(uParam0[0 /*32*/])->f_3 = 1937649573;
					(uParam0[1 /*32*/])->f_3 = 344292521;
					break;
				case 1:
					(uParam0[0 /*32*/])->f_3 = 2093761089;
					(uParam0[1 /*32*/])->f_3 = -1893568031;
					break;
				case 2:
					(uParam0[0 /*32*/])->f_3 = -2094870798;
					(uParam0[1 /*32*/])->f_3 = -1415435548;
					break;
				case 3:
					(uParam0[0 /*32*/])->f_3 = -1922964624;
					(uParam0[1 /*32*/])->f_3 = -1654288789;
					break;
				case 4:
					(uParam0[0 /*32*/])->f_3 = 903791949;
					break;
				default:
					(uParam0[0 /*32*/])->f_3 = 1937649573;
					(uParam0[1 /*32*/])->f_3 = 344292521;
					break;
			}
			break;
	}
}

void func_94(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_298(&((uParam0[iVar0 /*32*/])->f_1));
		func_298(&((uParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_95(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			(*uParam1)[0 /*2*/] = "script_re@street_fight@v1";
			(uParam1[0 /*2*/])->f_1 = "challenge_enter_attacker";
			func_299((*uParam1)[0 /*2*/], uParam2);
			(*uParam1)[1 /*2*/] = "script_re@street_fight@v1";
			(uParam1[1 /*2*/])->f_1 = "challenge_loop_attacker";
			func_299((*uParam1)[1 /*2*/], uParam2);
			(*uParam1)[2 /*2*/] = "script_re@street_fight@v1";
			(uParam1[2 /*2*/])->f_1 = "challenge_exit_attacker";
			func_299((*uParam1)[2 /*2*/], uParam2);
			break;
		case 4:
			(*uParam1)[3 /*2*/] = "script_re@street_fight@uncle_fight";
			(uParam1[3 /*2*/])->f_1 = "UNCLE_STAND_UP_IF_PLAYER_SHOOTS_MAN";
			func_299((*uParam1)[3 /*2*/], uParam2);
			break;
	}
	STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_BASE");
	STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@_STREAMED");
	STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@ATTACKER");
	STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@FRONT@LOCO@VICTIM");
}

void func_96(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = Global_35;
	uParam0->f_8 = 4;
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = 4;
	uParam0->f_18 = 4;
	uParam0->f_7 = 0;
}

bool func_97(var uParam0, var uParam1)
{
	return true;
}

bool func_98(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_300(uParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_99(var uParam0)
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

int func_100(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_301(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_302(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_170(iParam0, 128))
			{
				if (!func_303(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_304(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_305(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_126(*uParam1))
				{
					return func_306(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_307(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_302(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_308(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_309(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_310(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
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
			if (func_170(iParam0, 128))
			{
				if (!func_311(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_306(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_304(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_308(uParam1))
					{
						return func_306(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_312(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_302(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_306(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_58("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_58("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_101(var uParam0, int iParam1)
{
	if (func_102(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_314(iParam1, func_313(uParam0), &(uParam0->f_172)))
		{
			if (func_90(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_102(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_103(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_316(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_102(uParam0->f_3, 1) && !func_102(uParam0->f_3, 32))
	{
		func_316(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_102(uParam0->f_3, 2) && !func_102(uParam0->f_3, 32))
	{
		func_316(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_317(uParam0->f_171, 1);
	}
	if (func_102(uParam0->f_3, 1))
	{
		func_316(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_318(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_104(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

int func_105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_319(iParam0, iParam1);
	iVar1 = func_320(111, iVar0);
	return iVar1;
}

bool func_106()
{
	if (func_321() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_107(int iParam0)
{
	if (func_321() != -1)
	{
		return false;
	}
	if (!func_322(iParam0))
	{
		return false;
	}
	return func_323(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_108(int iParam0, int iParam1, bool bParam2)
{
	func_324(iParam0, 0, 0);
	if (func_290(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

void func_109(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_324(iParam0, 0, 0);
	if (func_290(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_325(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_326(iParam0, 1);
			}
			else
			{
				func_327(iParam0, 1);
			}
		}
		else
		{
			func_328(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_329())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

char* func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_CALLING_ARTHUR_FRONT";
		case 1:
			return "PL_CALLING_ARTHUR_LEFT";
		case 2:
			return "PL_CALLING_ARTHUR_RIGHT";
		case 3:
			return "PL_CONFRONTATION";
		case 4:
			return "PL_STAND_UP";
		default:
			break;
	}
	return "INVALID_PLAY_LIST";
}

char* func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "pblIntro";
		default:
			break;
	}
	return "pblIntro";
	return "NO VALID PLAYBACK LIST FOUND";
}

void func_112(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_113(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

Vector3 func_114(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -307.208f, 796.927f, 118.065f;
						case 1:
							return -307.208f, 796.927f, 118.065f;
						case 2:
							return -304.833f, 796.49f, 118.065f;
						case 3:
							return -304.833f, 796.49f, 118.065f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -245.201f, -245.201f, 117.446f;
						case 1:
							return -245.201f, -245.201f, 117.446f;
						case 4:
							return -245.201f, -245.201f, 117.446f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 2953.273f, 523.561f, 45.303f;
				case 1:
					return 2953.273f, 523.561f, 45.303f;
				case 3:
					return 2953.273f, 525.435f, 45.303f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return -810.336f, -1329.165f, 44.843f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_115(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 9.759f;
						case 1:
							return 0f, 0f, 9.759f;
						case 2:
							return 0f, 0f, 9.759f;
						case 3:
							return 0f, 0f, 9.759f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 18.966f;
						case 1:
							return 0f, 0f, 18.966f;
						case 4:
							return 0f, 0f, 18.966f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_116(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 5.994f, 5.908f, 6.062f;
						case 1:
							return 5.994f, 5.908f, 6.062f;
						case 2:
							return 8.967f, 6.616f, 6.062f;
						case 3:
							return 8.967f, 6.616f, 6.062f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 4.154f, 4.109f, 4.846f;
						case 1:
							return 4.154f, 4.109f, 4.846f;
						case 4:
							return 4.154f, 4.109f, 4.846f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return 4.852f, 6.803f, 3.006f;
				case 1:
					return 4.852f, 6.803f, 3.006f;
				case 3:
					return 4.852f, 6.803f, 3.006f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 5f, 5f, 5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_117(int iParam0)
{
	return func_330(iParam0, 16, 1);
}

bool func_118(int iParam0, int iParam1)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	return (Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1) != 0;
}

bool func_119(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return false;
	}
	if (func_118(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_292(iParam1, iVar0))
	{
		return false;
	}
	PED::_SET_PED_BODY_COMPONENT(iParam1, func_332(iParam0));
	PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
	func_333(iParam0, 256, 1);
	return true;
}

int func_120(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_272(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_334(iParam0, 2, 1))
			{
				func_335(iParam0, 2, 1);
			}
			if (func_330(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_336(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_275(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_292(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_292(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_337(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_336(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_338(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_336(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_338(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!func_334(iParam0, 44, 0))
			{
				func_336(iParam0, 44, 0);
			}
			if (func_339(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_338(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_335(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_340(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_341(iParam0, 0, 0, 1);
			}
			func_335(iParam0, 33, 1);
			func_335(iParam0, 34, 1);
			func_335(iParam0, 29, 1);
			if (!func_126(vVar0) && bParam7)
			{
				func_338(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_338(iParam0, 4);
			}
			else
			{
				func_338(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_337(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_140(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_338(iParam0, 4);
			}
			else
			{
				func_338(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (func_342(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_343(iParam0, iParam13, 0);
						func_344(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_334(iParam0, 25, 0))
						{
							func_335(iParam0, 25, 0);
						}
						func_336(iParam0, 66, 0);
						func_338(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_338(iParam0, 5);
				}
				func_336(iParam0, 28, 1);
			}
			else
			{
				func_338(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_338(iParam0, 6);
			}
			break;
		case 6:
			if (func_292(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_345(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_346(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_338(iParam0, 7);
		case 7:
			func_340(iParam0, bParam9, bParam15, 0);
			func_347(iParam0, 4, bParam11);
			func_348(iParam0);
			if (bParam20)
			{
				if (func_349(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_350(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_338(iParam0, 0);
			func_351(iParam0, 16, 1);
			func_335(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_121(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;

	if (!func_331(iParam0))
	{
		return 0;
	}
	iVar1 = func_352(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::IS_PED_READY_TO_RENDER(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

bool func_122(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_353() || !func_354(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

var func_123(var uParam0, int iParam1)
{
	return AUDIO::_0xDF947FE0D551684E(uParam0, func_355(iParam1));
}

void func_124(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_125(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_356(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_127(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_357(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_358(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*uParam0, false, 15);
		}
	}
}

bool func_126(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_127(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (func_359())
	{
		case 92:
			return iParam2;
		default:
			break;
	}
	switch (iParam0)
	{
		case 3:
			if (iParam1 > 0)
			{
				return iParam2;
			}
			else
			{
				return iParam3;
			}
			break;
		case 4:
			return 1;
		default:
			return iParam2;
	}
	return iParam3;
}

void func_129(int iParam0)
{
	func_360(iParam0, 2);
}

int func_130(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_361(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_362(iVar25, 0) && func_363(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_131(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_364(iParam0);
		return func_365(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

bool func_132(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_366(*uParam0, joaat("HATS"), 0))
	{
		return true;
	}
	return false;
}

void func_133(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::REMOVE_TAG_FROM_META_PED(iParam0, joaat("HATS"), 1);
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

bool func_134(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
			iVar1 = func_367(iParam1);
			if ((iVar0 && iVar1) != 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_135(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_367(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_136(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

int func_137(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_368(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

Vector3 func_138(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return -249.6991f, 767.2766f, 116.5169f;
		case 4:
			return -829.5267f, -1329.962f, 43.4293f;
		default:
			break;
	}
	return -249.6991f, 767.2766f, 116.5169f;
}

float func_139(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return -70.47f;
		case 4:
			return -113.4f;
		default:
			break;
	}
	return -70.47f;
}

void func_140(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_369(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_370(iParam0))
	{
		if (func_371(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_179(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_140(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_140(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_179(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_179(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_179(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_179(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_179(iParam5, 129))
	{
		if (func_179(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_179(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_179(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_179(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_370(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_179(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_179(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_141(int iParam0)
{
	return Global_1935369.f_5[iParam0 /*11*/].f_4;
}

void func_142(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam2)
			{
				case 3:
					*uParam3 = { 0f, 0f, 0f };
					*fParam4 = -87.349f;
					break;
				default:
					*bParam6 = 1;
					*uParam3 = { 2951.82f, 519.347f, 46.754f };
					*fParam4 = 90.57f;
					break;
			}
			break;
		case 4:
			*bParam5 = 1;
			*uParam3 = { -809.7952f, -1327.604f, 42.678f };
			*fParam4 = -179.81f;
			break;
		default:
			switch (iParam2)
			{
				case 0:
				case 1:
					switch (iParam1)
					{
						case 1:
							*uParam3 = { -0.9f, -1.08f, 0f };
							*fParam4 = 100f;
							break;
						default:
							*uParam3 = { 0.4705f, 1.527f, 0.0409f };
							*fParam4 = 189f;
							break;
					}
					break;
				case 2:
					*uParam3 = { 0.47f, 1.53f, 0.04f };
					*fParam4 = -170.07f;
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							*uParam3 = { 0.72f, 1.95f, 0.04f };
							*fParam4 = 180f;
							break;
						default:
							*uParam3 = { -2.91f, 6.59f, 0f };
							*fParam4 = 115.1f;
							break;
					}
					break;
				case 4:
					*bParam5 = 1;
					*uParam3 = { -243.7268f, 765.0442f, 117.1425f };
					*fParam4 = 110f;
					break;
			}
			break;
	}
}

char* func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pedThug";
		case 1:
			return "pedVictim";
		case 2:
			return "pedWatcherA";
		case 3:
			return "pedWatcherB";
		default:
			break;
	}
	return "INVALID PED ID";
}

int func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return -908482159;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 10:
			return -1069042457;
		case 4:
			return 0;
	}
	return 0;
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;

	func_324(iParam0, 0, 0);
	if (func_290(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

char* func_146(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return "DOOR_01";
				case 1:
					return "";
				default:
					break;
			}
			break;
		case 10:
			return "DOOR_L";
		case 4:
			return "";
	}
	return "";
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					return -1147728628;
				case 1:
					return 1098854605;
				default:
					break;
			}
			break;
		case 10:
			return 244699522;
		case 4:
			return -1974086289;
	}
	return 0;
}

char* func_148(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					return "DOOR_02";
				case 1:
					switch (iParam0)
					{
						case 4:
							return "door";
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			return "DOOR_R";
		case 4:
			return "door";
	}
	return "";
}

char* func_149()
{
	return "uncle";
}

char* func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case default:
	}
	return "pblAction";
	return "NO VALID PLAYBACK LIST FOUND";
}

Vector3 func_151(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -829.5507f, -1329.762f, 42.54148f;
		case 9:
			return -250.7171f, 767.7319f, 116.4807f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_152(int iParam0)
{
	if (!func_52(iParam0))
	{
		func_360(&iLocal_48, iParam0);
	}
}

int func_153(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_372(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_281(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_161(&(iParam1->f_13));
		}
		if (func_373(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_153(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_76(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_375(*uParam0, 1, 1);
						}
					}
					else if (func_376(iParam1, 22))
					{
						func_375(*uParam0, 0, 1);
					}
				}
				if (func_377(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_378(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_379(iParam8);
					if (func_380(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_381(uParam3);
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
					func_382(iParam1, uParam3, fVar8);
					if (func_383(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_77(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_384(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_377(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_385(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_380(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_378(uParam0, func_377(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_379(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_77(uParam3, 0, 0, 1, 1);
					}
					func_386(iParam1, 1);
				}
				func_382(iParam1, uParam3, fVar8);
				if (func_384(uParam0, iParam1, fParam4, bVar6))
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
			func_274(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_154(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam4)
	{
		case 9:
			switch (iParam3)
			{
				case 0:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VAL_V1_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VAL_V1_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 1:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VAL_V2_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VAL_V2_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 2:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VAL_V4_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VAL_V4_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 3:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VAL_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(10), "RE_STF_VAL_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 4:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VAL_V6_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VAL_V6_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VHT_V1_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VHT_V1_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 1:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VHT_V2_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VHT_V2_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 2:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VHT_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VHT_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 3:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VHT_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(10), "RE_STF_VHT_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 4:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_BLW_V6_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_BLW_V6_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	func_389(0, 0);
	func_390(uParam0, 0);
	*iParam2 = func_1(3, 0, 0) | 64 | 128;
}

void func_155(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 9)
	{
		func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VAL_V6_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VAL_V6_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	else
	{
		func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_BLW_V6_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_BLW_V6_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	func_389(1, 0);
	func_390(uParam0, 0);
	*iParam2 = func_1(3, 0, 0) | 64 | 128;
}

void func_156(int iParam0, int iParam1)
{
	if (func_90(iParam0, 0, 1))
	{
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam0, iParam1);
	}
}

void func_157(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam4)
	{
		case 9:
			switch (iParam3)
			{
				case 0:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VAL_V1_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VAL_V1_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 1:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VAL_V2_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VAL_V2_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 2:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VAL_V4_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VAL_V4_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 3:
					func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 4:
					func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VHT_V1_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VHT_V1_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 1:
					func_388(uParam1[0 /*17*/], func_387(7), "RE_STF_VHT_V2_GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(26), "RE_STF_VHT_V2_GREET_INTERVENE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 2:
					func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 3:
					func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					break;
			}
			break;
		default:
			func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
	}
	func_389(1, 0);
	func_390(uParam0, 0);
	*iParam2 = func_1(3, 0, 0) | 64 | 128;
}

void func_158(var uParam0, var uParam1)
{
	func_389(2, 0);
	func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_159(var uParam0, var uParam1)
{
	func_389(3, 0);
	func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

bool func_160(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_161(var uParam0)
{
	func_391(uParam0, 0f);
}

float func_162(var uParam0)
{
	if (!func_41(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_392(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_393() - uParam0->f_1);
}

bool func_163()
{
	if (!func_394(Global_1395482.f_1))
	{
		return false;
	}
	return func_395(Global_1395482.f_1, 32);
}

bool func_164(int iParam0)
{
	if (func_102(iParam0, 1))
	{
		return false;
	}
	return (1 == func_396(iParam0) || 2 == func_396(iParam0));
}

float func_165(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_166(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_397(uParam0) };
	iVar3 = func_285(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_167(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*uParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_168(var uParam0)
{
	func_264(uParam0, 1);
	func_398(uParam0, 20);
}

void func_169(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_170(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

void func_171(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_315(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_399())
	{
		func_400(1);
	}
	func_401(iParam2, uParam0->f_43);
	func_402(iParam2, 0, 0, 0, 0);
	if (func_403(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_276(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_404(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_172(var uParam0)
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

void func_173(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_405())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_170(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_171(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_172(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_245(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_406(uParam0, bVar0);
		func_407(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (func_408(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_171(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_172(&(uParam0->f_121));
		}
	}
}

bool func_174(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_102(uParam2->f_3, 1))
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
			if (func_409())
			{
				fVar0 = 15f;
			}
		}
		if (func_410(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_46(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_410(uParam2, fVar1))
		{
			if (!func_411(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_412(uParam2->f_3, 2) && func_413(2))
		{
			return false;
		}
		if (func_102(iParam0, 4194304) || func_102(iParam0, 33554432))
		{
			if (func_414(1))
			{
				return false;
			}
		}
	}
	if (func_415(Global_35))
	{
		return false;
	}
	if (func_416(0, 1, 1) && !func_417(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_102(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_256(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_46(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_418())
		{
			return false;
		}
		iVar2 = func_419(func_359());
		if (func_420(iVar2))
		{
			if (func_421(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_422(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_423(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_175(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_424(uParam0->f_51))
	{
		func_425(uParam0->f_51, 0);
		fVar0 = func_426(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_427());
		bVar1 = func_281(!func_102(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_429(iVar2, func_428(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
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

void func_177(int iParam0)
{
	func_40(&uLocal_0);
	func_430(1, iParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	func_431();
}

void func_178(int iParam0, int iParam1)
{
	if (!func_90(uLocal_178[iParam0], 0, 1))
	{
		return;
	}
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iParam1], false);
	PED::_0x8301D87B1B89E219(uLocal_178[iParam0], joaat("ACT_GRAPPLE_KNOCKOUT"));
	PED::_0x789DABD18E9024DB(uLocal_178[iParam0], 32, 0);
	TASK::TASK_KNOCKED_OUT(uLocal_178[iParam1], 20f, true);
	iLocal_186 = uLocal_178[iParam1];
	if (iParam1 == 0)
	{
		func_262(8);
	}
	else
	{
		func_262(4);
	}
}

bool func_179(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_180(int iParam0, bool bParam1, bool bParam2)
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

bool func_181(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_432(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_433(iVar0, 0)))
		{
			if (func_434(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_435(iParam2, 1, iVar0);
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
			if (func_436(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_437(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_438(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_439(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_440(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_46(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_437(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_441(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_442(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_437(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_443(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_437(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_444(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_444(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_437(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_445(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_446(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_447(iParam2, 4000))
				{
					if ((func_448(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_449(iParam2, iParam0)) && func_450(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_437(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_448(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_449(iParam2, iParam0)) && func_450(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_451(iParam0, Global_1935630.f_41))
							{
								func_452();
								*iParam3 = 2;
								func_437(iParam0, iParam2, *iParam3);
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
						if (func_451(iParam0, Global_1935630.f_41))
						{
							func_452();
							*iParam3 = 2;
							func_437(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_453(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_454() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_452();
						*iParam3 = 2;
						func_437(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_455())
					{
						if (func_451(iParam0, Global_1935630.f_42))
						{
							func_452();
							*iParam3 = 2;
							func_437(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_456(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_437(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_457(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_458(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_437(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_459(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_460(iParam2, 4000))
				{
					if (func_461(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_437(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_462(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_437(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_463(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_437(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_183()
{
	if (bLocal_94)
	{
		return;
	}
	func_465(func_464(111), 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	bLocal_94 = true;
	func_212(1);
}

bool func_184(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_466(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_182((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
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

bool func_185(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false);
}

bool func_186(int iParam0)
{
	return func_179(iLocal_49, iParam0);
}

void func_187()
{
	if (bLocal_93)
	{
		return;
	}
	func_465(2, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	bLocal_93 = true;
}

bool func_188(int iParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	if (!func_90(iParam0, 0, 1) || func_261(iParam2))
	{
		return false;
	}
	if (func_224(fParam4, 1, iParam0, 1) || bParam3)
	{
		if (!func_261(iParam2))
		{
			func_189(iParam0, iParam1, func_217(iLocal_899, iLocal_214, iParam2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_227(iParam2);
			return true;
		}
	}
	return false;
}

bool func_189(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_467(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_190(int iParam0)
{
	if (iLocal_212 != iParam0)
	{
		iLocal_212 = iParam0;
	}
	if (!bLocal_95)
	{
		func_468(uLocal_178[iLocal_212]);
		bLocal_95 = true;
	}
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_178[iLocal_212], 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_178[iLocal_212], 93, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iLocal_212], 233, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iLocal_212], 192, false);
	PED::REGISTER_TARGET(uLocal_178[iLocal_212], Global_35, 1);
	TASK::TASK_COMBAT_PED(uLocal_178[iLocal_212], Global_35, 0, 0);
	func_239(&uLocal_187);
	if (iLocal_212 != 1)
	{
		func_263(uLocal_178[iLocal_212], &(uLocal_187[iParam0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_90(iParam0, 201, 1))
	{
		func_251(iParam0, 1, Global_35, 0);
	}
	if (func_90(iParam1, 201, 1))
	{
		func_251(iParam1, 1, Global_35, 0);
	}
	if (func_90(iParam2, 201, 1))
	{
		func_251(iParam2, 1, Global_35, 0);
	}
	if (func_90(iParam3, 201, 1))
	{
		func_251(iParam3, 1, Global_35, 0);
	}
}

void func_192()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_178[iVar0]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(uLocal_178[iVar0]))
		{
		}
		else
		{
			iVar2 = iVar0;
			switch (iVar2)
			{
				case 0:
					iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_708, &uVar4, 0, 1, 0, 0, iLocal_883, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					if (iVar1 != -1)
					{
						if (iLocal_52 == -1)
						{
							iLocal_52 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_52 != -1)
					{
						bVar3 = true;
					}
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_778, &uVar4, 0, 1, 0, 0, iLocal_884, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_743, &uVar4, 0, 1, 0, 0, iLocal_883, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					}
					if (iVar1 != -1)
					{
						if (iLocal_53 == -1)
						{
							iLocal_53 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_53 != -1)
					{
						bVar3 = true;
					}
					break;
				case 2:
					iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_813, &uVar4, 0, 1, 0, 0, iLocal_885, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					if (iVar1 != -1)
					{
						if (iLocal_55 == -1)
						{
							iLocal_55 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_55 != -1)
					{
						bVar3 = true;
					}
					break;
				case 3:
					iVar1 = func_469(&(uLocal_178[iVar2]), &(Local_623[iVar2 /*21*/]), 15f, &Local_848, &uVar4, 0, 1, 0, 0, iLocal_885, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					if (iVar1 != -1)
					{
						if (iLocal_56 == -1)
						{
							iLocal_56 = iVar1;
							if (iLocal_16 == -1)
							{
								iLocal_16 = iLocal_17[iVar2];
							}
						}
					}
					if (iLocal_56 != -1)
					{
						bVar3 = true;
					}
					break;
				default:
					break;
			}
			iVar1 = -1;
		}
		iVar0++;
	}
	func_470((bVar3 || iLocal_24 != -1));
}

void func_193()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_16 == -1)
	{
		return;
	}
	if (iLocal_52 != -1)
	{
		iVar1 = 0;
		iVar2 = iLocal_52;
	}
	else if (iLocal_53 != -1)
	{
		if (iLocal_214 == 4)
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = 1;
		}
		iVar2 = iLocal_53;
	}
	else
	{
		iLocal_55 = -1;
		iLocal_56 = -1;
		iLocal_16 = -1;
		return;
	}
	iVar0 = iVar2;
	switch (iLocal_16)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_471(1);
					if (iLocal_214 == 4)
					{
						func_152(1);
						func_472(8, 0);
						func_219(iLocal_899, iLocal_214, &(Local_623[iVar1 /*21*/]), &Local_778, 0);
						func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
					}
					break;
				case 1:
					func_152(1);
					func_183();
					func_471(2);
					if (iLocal_214 == 4)
					{
						func_472(8, 0);
						func_360(&iLocal_48, 2097152);
						func_219(iLocal_899, iLocal_214, &(Local_623[iVar1 /*21*/]), &Local_778, 0);
						func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
					}
					else
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
					}
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 0:
					switch (iLocal_214)
					{
						case 0:
							switch (iVar0)
							{
								case 1:
									func_472(16, 0);
									func_471(32);
									iLocal_41 = MISC::GET_GAME_TIMER();
									func_48(14);
									break;
							}
							break;
						case 4:
							Local_567.f_7 = 7000;
							IK::_0x66F9EB44342BB4C5(uLocal_178[1], &Local_567);
							switch (iVar0)
							{
								case 0:
									func_472(11, 0);
									func_471(1024);
									func_152(16777216);
									break;
								case 1:
									func_472(12, 0);
									func_471(2048);
									func_152(33554432);
									break;
							}
							break;
					}
					break;
				case 1:
					Local_567.f_7 = 7000;
					IK::_0x66F9EB44342BB4C5(uLocal_178[1], &Local_567);
					switch (iLocal_214)
					{
						case 1:
							switch (iLocal_899)
							{
								case 10:
									switch (iVar0)
									{
										case 1:
											func_472(15, 1);
											func_471(64);
											func_152(33554432);
											break;
									}
									break;
								default:
									switch (iVar0)
									{
										case 1:
											iLocal_42 = MISC::GET_GAME_TIMER();
											func_471(64);
											func_152(33554432);
											break;
									}
									break;
							}
							break;
						case 2:
							switch (iVar0)
							{
								case 1:
									if (iLocal_211 < 1)
									{
										func_472(2, 1);
										iLocal_211++;
										func_219(iLocal_899, iLocal_214, &(Local_623[iVar1 /*21*/]), &Local_743, iLocal_211);
										func_471(64);
										func_152(33554432);
									}
									else
									{
										func_472(3, 1);
										func_471(128);
										func_152(33554432);
									}
									break;
							}
							break;
						case 4:
							switch (iVar0)
							{
								case 0:
									func_472(13, 1);
									func_471(8);
									func_152(67108864);
									break;
								case 1:
									func_472(14, 1);
									func_471(16);
									func_152(134217728);
									break;
							}
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							func_472(0, 0);
							iLocal_23 = 1;
							func_262(16);
							break;
						case 1:
							func_472(1, 0);
							iLocal_23 = 2;
							func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
							func_262(16);
							break;
					}
					func_471(4);
					break;
				default:
					break;
			}
			break;
		case 5:
			switch (iVar1)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							func_472(4, 0);
							func_471(256);
							break;
						case 1:
							func_472(5, 0);
							func_471(512);
							func_48(14);
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iVar1)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							func_472(6, 0);
							func_471(256);
							break;
						case 1:
							func_472(7, 0);
							func_471(512);
							func_48(14);
							break;
					}
					break;
			}
			break;
		default:
			break;
	}
	switch (iVar1)
	{
		case 0:
			iLocal_52 = -1;
			break;
		case 1:
			iLocal_53 = -1;
			break;
		case 2:
			iLocal_55 = -1;
			break;
		case 3:
			iLocal_56 = -1;
			break;
	}
	iLocal_16 = -1;
}

void func_194()
{
	if (iLocal_24 == -1)
	{
		return;
	}
	if (iLocal_25 < 0 || iLocal_25 >= 4)
	{
		iLocal_24 = -1;
		iLocal_25 = -1;
		return;
	}
	if (!func_90(uLocal_178[iLocal_25], 0, 1))
	{
		iLocal_24 = -1;
		iLocal_25 = -1;
		return;
	}
	if (func_473(Global_35, 0))
	{
		return;
	}
	if (func_473(uLocal_178[iLocal_25], 0))
	{
		return;
	}
	if (func_189(uLocal_178[iLocal_25], Global_35, func_474(iLocal_24, iLocal_899, iLocal_214), 0, -1082130432 /* Float: -1f */, func_475(iLocal_24), 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
	{
	}
	iLocal_24 = -1;
	iLocal_25 = -1;
}

void func_195()
{
	switch (iLocal_214)
	{
		case 1:
			switch (iLocal_899)
			{
				case 9:
					if (!bLocal_43)
					{
						if (func_250(64))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) >= 8000)
							{
								if (!func_473(Global_35, 0))
								{
									func_189(Global_35, uLocal_178[1], "RE_STF_VAL_V2_GREET_NEG_B", 0, -1082130432 /* Float: -1f */, 0, 1, 0, 1, 1, 1, 291934926, 0, 0, 0);
									bLocal_43 = true;
								}
							}
						}
					}
					break;
			}
			break;
	}
}

void func_196()
{
	if (iLocal_214 != 3)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_201))
	{
		return;
	}
	if (bLocal_26)
	{
		if (!func_245(Global_35, iLocal_201, 1, 0))
		{
			func_476(iLocal_899, iLocal_214, &Local_708, 1);
			bLocal_26 = false;
		}
	}
	else if (func_245(Global_35, iLocal_201, 1, 0))
	{
		func_476(iLocal_899, iLocal_214, &Local_708, 0);
		bLocal_26 = true;
	}
}

void func_197()
{
	int iVar0;

	if ((!bLocal_208 || bLocal_209) || bLocal_210)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_178[0]))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uLocal_178[0]))
	{
		iVar0 = PED::GET_PED_CAUSE_OF_DEATH(uLocal_178[0]);
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			bLocal_210 = true;
			return;
		}
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER"), 0, 75f, 100f, 0, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
		bLocal_209 = true;
		return;
	}
	if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_178[0], Global_1935630.f_44, 0))
	{
		if (Global_1935630.f_44 != joaat("WEAPON_UNARMED"))
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 75f, 100f, 0, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
			bLocal_209 = true;
			return;
		}
	}
	if (func_181(uLocal_178[0], 1, 1, Global_1935630.f_44 != joaat("WEAPON_UNARMED"), 0, 0))
	{
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 75f, 100f, 0, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
		bLocal_209 = true;
		return;
	}
}

void func_198()
{
	if (bLocal_44)
	{
		if (!bLocal_45)
		{
			func_477(iLocal_899, &(Local_623[1 /*21*/]), &Local_778);
			bLocal_45 = true;
		}
	}
}

void func_199()
{
	if (func_90(iLocal_186, 0, 1) && !func_216(iLocal_186, 1313215416))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_186, false);
		func_478(iLocal_186);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_186);
	}
}

bool func_200(var uParam0, float fParam1)
{
	if (func_43(uParam0, fParam1))
	{
		func_40(uParam0);
		return true;
	}
	return false;
}

bool func_201(int iParam0, char* sParam1)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1);
}

void func_202()
{
	switch (iLocal_214)
	{
		case 0:
		case 1:
			if (iLocal_899 == 10)
			{
				return;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (!func_52(1))
			{
				if (func_479(uLocal_178[1], "RE_STF_LETS_TALK", 1067030938 /* Float: 1.2f */))
				{
					func_189(uLocal_178[1], uLocal_178[0], func_217(iLocal_899, iLocal_214, 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (func_479(uLocal_178[1], "RE_STF_LEND_HAND", 1067030938 /* Float: 1.2f */))
				{
					func_189(uLocal_178[1], Global_35, func_217(iLocal_899, iLocal_214, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (func_479(uLocal_178[0], "RE_STF_CALL_MOMMA", 1067030938 /* Float: 1.2f */))
				{
					func_189(uLocal_178[0], uLocal_178[1], func_217(iLocal_899, iLocal_214, 4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (func_479(uLocal_178[1], "RE_STF_LUMBAGO", 1067030938 /* Float: 1.2f */))
				{
					func_189(uLocal_178[1], uLocal_178[0], func_217(iLocal_899, iLocal_214, 8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				if (func_479(uLocal_178[0], "RE_STF_THOUGHT", 1067030938 /* Float: 1.2f */))
				{
					func_189(uLocal_178[0], uLocal_178[1], func_217(iLocal_899, iLocal_214, 16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					func_480(&(Local_623[1 /*21*/]), &Local_778);
					func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
				}
			}
			break;
	}
}

void func_203()
{
	float fVar0;

	if (func_179(iLocal_48, 16))
	{
		return;
	}
	if (func_179(iLocal_48, 8))
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_178[0], 32);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_178[1], 32);
		PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 113, false);
		func_161(&uLocal_144);
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_beat_str_fght_win_smh", Local_64.f_3, 0f, 0f, 0f, 1f, false, false, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[1], false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[0], false);
		func_209(&(Local_344.f_5), 0);
		FIRE::ADD_OWNED_EXPLOSION(uLocal_178[0], Local_64.f_3, 25, 0.05f, false, true, 0f);
		func_481(Local_64.f_3);
		func_152(16);
		EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_EXPLOSION"), false);
		func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_50, false) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_50))
	{
		return;
	}
	fVar0 = 0f;
	switch (iLocal_214)
	{
		case 2:
			if (Local_344.f_51.f_4 == 1)
			{
				fVar0 = 0.298f;
			}
			else
			{
				fVar0 = 0.147f;
			}
			break;
		case 3:
			fVar0 = 0.298f;
			break;
		default:
			return;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50) > fVar0)
	{
		EVENT::_0xB6F4825153920582();
		func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
		func_152(8);
	}
}

void func_204()
{
	if (func_179(iLocal_48, 32) || !func_185(iLocal_50))
	{
		return;
	}
	switch (iLocal_214)
	{
		case 4:
			if (func_90(uLocal_178[0], 0, 1))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50) > 0.0463f)
				{
					func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
					func_481(Local_64.f_6);
					func_152(32);
				}
			}
			break;
		case 0:
		case 1:
			if (func_90(uLocal_178[1], 0, 1))
			{
				if (!func_179(iLocal_48, 4) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50) > 0.1702f)
				{
					func_481(Local_64.f_6);
					func_152(4);
				}
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50) > 0.247f)
				{
					func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
					func_152(32);
				}
			}
			break;
	}
}

void func_205()
{
	if (iLocal_214 != 3)
	{
		return;
	}
	if (func_179(iLocal_48, 64))
	{
		return;
	}
	if (!func_90(uLocal_178[1], 0, 1))
	{
		return;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50) > 0.46f)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(1), uLocal_178[1]);
		func_180(uLocal_178[1], 1, 0);
		func_482(&Local_886, iLocal_214, iLocal_899, iLocal_900);
		PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 243, true);
		func_152(64);
	}
}

void func_206()
{
	if ((((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_50) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_50, false)) || VOLUME::DOES_VOLUME_EXIST(Local_64.f_25)) || !func_90(uLocal_178[0], 0, 1)) || !func_90(uLocal_178[1], 0, 1))
	{
		return;
	}
	switch (iLocal_214)
	{
		case 0:
		case 1:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50) > 0.5572f)
			{
				func_483(&Local_64, uLocal_178[0], uLocal_178[1]);
			}
			break;
		case 2:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50) > 0.964f)
			{
				func_483(&Local_64, uLocal_178[0], uLocal_178[1]);
			}
			break;
		case 4:
			break;
	}
}

bool func_207()
{
	float fVar0;

	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_50, false) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_50))
	{
		return true;
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_50, func_150(iLocal_214)))
	{
		return false;
	}
	fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50);
	switch (iLocal_214)
	{
		case 0:
		case 1:
			if ((iLocal_899 == 9 && iLocal_900 == 1) && !func_179(iLocal_48, 262144))
			{
				if (fVar0 > 0.253f)
				{
					func_109(1098854605, 0, -0.1f, 0, 0, 0, 0, 0);
					func_152(262144);
				}
			}
			if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(iLocal_50))
			{
				return true;
			}
			else if (func_484(fLocal_59, fLocal_60, 8f))
			{
				func_152(65536);
				return true;
			}
			break;
		case 2:
			if (!func_179(iLocal_48, 128))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(iLocal_50))
				{
					func_152(128);
				}
			}
			if (!func_179(iLocal_48, 256))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(iLocal_50))
				{
					func_152(256);
				}
			}
			if (func_179(iLocal_48, 128) && func_179(iLocal_48, 256))
			{
				return true;
			}
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(iLocal_50))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_208()
{
	switch (iLocal_214)
	{
		case 0:
			func_485(0, 1);
			break;
		case 1:
			func_485(1, 0);
			break;
		case 2:
			func_485(1, 0);
			break;
		case 3:
			break;
	}
}

void func_209(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(uParam0->f_1), 16);
	}
	else
	{
		func_169(&(uParam0->f_1), 16);
	}
}

void func_210(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_90(uLocal_178[iParam0], 0, 1) || func_52(8192))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iParam0], 252, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_178[iParam0], false);
	func_234(&iLocal_199, iLocal_899, iLocal_900);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_177);
	if (bParam3)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
	}
	if (bParam2)
	{
		TASK::TASK_FORCE_MOTION_STATE(0, joaat("MOTIONSTATE_WALK"), false);
	}
	if (bParam1)
	{
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_546[2 /*2*/], Local_546[2 /*2*/].f_1, Global_35, 900, 2f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_64.f_12, 1f, -1, 0.25f, 2228224, 40000f);
	TASK::TASK_USE_SCENARIO_POINT(0, iLocal_199, 0, -1, true, false, 0, false, -1f, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_177);
	if (iParam0 == 1)
	{
		TASK::TASK_LOOK_AT_ENTITY(uLocal_178[iParam0], uLocal_178[0], 3000, 0, 51, 0);
		TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_178[iParam0], iLocal_177, 2.3f, 2.3f);
	}
	else
	{
		TASK::TASK_PERFORM_SEQUENCE(uLocal_178[iParam0], iLocal_177);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_177);
	func_152(8192);
	PED::SET_PED_KEEP_TASK(uLocal_178[iParam0], true);
	iLocal_213 = iParam0;
}

void func_211()
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_50))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_50, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_128(iLocal_214, Local_344.f_51.f_4, 2, 4))
	{
		if (iVar0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[iVar0]))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(iVar0), uLocal_178[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_212(bool bParam0)
{
	int iVar0;

	if (Local_344.f_44)
	{
		return;
	}
	if ((func_486(Local_344.f_51, 1) < 25f || func_487(uLocal_178[0], 35f, 0)) || bParam0)
	{
		func_488(iLocal_899, iLocal_900);
		Local_344.f_44 = 1;
		switch (iLocal_899)
		{
			case 9:
				iVar0 = func_489(1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				break;
			case 10:
				iVar0 = func_489(1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				break;
			case 4:
				iVar0 = func_489(508);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				break;
		}
	}
}

void func_213()
{
	if (func_90(uLocal_178[0], 0, 1) && func_90(uLocal_178[1], 0, 1))
	{
		if (!PED::GET_PED_IS_GRAPPLED(uLocal_178[0]) && !PED::GET_PED_IS_GRAPPLED(uLocal_178[1]))
		{
			if (func_162(&uLocal_150) > 3f)
			{
				func_161(&uLocal_150);
				func_161(&uLocal_147);
				if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[0], joaat("SCRIPT_TASK_GRAPPLE"), true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[1], joaat("SCRIPT_TASK_GRAPPLE"), true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[0], 242628503, true) != 1)
				{
					PED::_0x630E7B01F091A197(uLocal_178[1], joaat("GS_FACE_TO_FACE"));
					PED::_0x630E7B01F091A197(uLocal_178[0], joaat("GS_FACE_TO_FACE"));
					TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(uLocal_178[iLocal_183], uLocal_178[iLocal_184], 0, 0, 0f, 1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_178[iLocal_183], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_178[iLocal_184], false, false);
					return;
				}
			}
			return;
		}
	}
	if (iLocal_565 < 9 && (func_52(1) || func_52(32768)))
	{
		func_490(9);
	}
	switch (iLocal_565)
	{
		case 0:
			if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uLocal_178[1]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[1], true);
				PED::_0x29924EB8EE9DB926(uLocal_178[1], 10f);
			}
			if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uLocal_178[0]))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[0], true);
				PED::_0x29924EB8EE9DB926(uLocal_178[0], 10f);
			}
			func_161(&uLocal_147);
			func_490(1);
			break;
		case 1:
			if (func_491(2f, 6.5f))
			{
				if (func_179(iLocal_48, 65536))
				{
					if (iLocal_214 == 0 || iLocal_214 == 1)
					{
						func_188(uLocal_178[iLocal_183], uLocal_178[iLocal_184], 4, 1, -1065353216 /* Float: -4f */);
					}
					else
					{
						func_188(uLocal_178[0], uLocal_178[1], 128, 0, -1065353216 /* Float: -4f */);
					}
				}
				func_74(Local_64.f_25);
				func_492(uLocal_178[iLocal_183]);
				func_161(&uLocal_147);
				func_490(2);
			}
			break;
		case 2:
			if (func_491(0.5f, 6.5f))
			{
				func_492(uLocal_178[iLocal_183]);
				func_161(&uLocal_147);
				func_490(3);
			}
			break;
		case 3:
			if (func_491(0.5f, 6.5f))
			{
				func_492(uLocal_178[iLocal_183]);
				func_161(&uLocal_147);
				func_490(4);
			}
			break;
		case 4:
			if (func_491(0.5f, 5.5f))
			{
				if (iLocal_214 == 0 || iLocal_214 == 1)
				{
				}
				else
				{
					func_188(uLocal_178[1], uLocal_178[0], 256, 0, -1065353216 /* Float: -4f */);
				}
				func_492(uLocal_178[iLocal_183]);
				func_161(&uLocal_147);
				func_490(5);
			}
			break;
		case 5:
			if (func_491(1f, 5.5f))
			{
				func_492(uLocal_178[iLocal_183]);
				func_161(&uLocal_147);
				func_490(6);
			}
			break;
		case 6:
			if (func_491(0.5f, 4.5f))
			{
				func_492(uLocal_178[iLocal_183]);
				func_161(&uLocal_147);
				func_490(7);
			}
			break;
		case 7:
			if (func_491(0.5f, 4.5f))
			{
				if (iLocal_214 == 2)
				{
					func_188(uLocal_178[iLocal_183], uLocal_178[iLocal_184], 512, 0, -1065353216 /* Float: -4f */);
				}
				func_492(uLocal_178[iLocal_183]);
				func_161(&uLocal_147);
				func_490(9);
			}
			break;
		case 8:
			func_490(9);
			break;
		case 9:
			if (func_491(0.5f, 4f) || func_179(iLocal_48, 32768))
			{
				func_74(Local_64.f_25);
				func_178(iLocal_183, iLocal_184);
				func_161(&uLocal_147);
				func_490(10);
				func_493(&(Local_623[1 /*21*/]), &Local_743, 1);
				func_493(&(Local_623[0 /*21*/]), &Local_708, 0);
			}
			break;
		case 10:
			break;
	}
}

bool func_214()
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_178[0]) || ENTITY::IS_ENTITY_DEAD(uLocal_178[1]))
	{
		return true;
	}
	if (func_216(uLocal_178[0], 1313215416) || func_216(uLocal_178[1], 1313215416))
	{
		return true;
	}
	return false;
}

bool func_215(int iParam0)
{
	if (!func_90(uLocal_178[iParam0], 0, 1))
	{
		return false;
	}
	if (PED::GET_PED_IS_GRAPPLED(uLocal_178[iParam0]))
	{
		return true;
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[iParam0], joaat("SCRIPT_TASK_GRAPPLE"), true) == 1)
	{
		return (1 || TASK::GET_SCRIPT_TASK_STATUS(uLocal_178[iParam0], joaat("SCRIPT_TASK_GRAPPLE"), true) == 0);
		return true;
	}
	return false;
}

bool func_216(int iParam0, int iParam1)
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

char* func_217(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 4:
			switch (iParam2)
			{
				case 1:
					return func_496("STF", func_494(iParam0), "LETS_TALK", func_495(iParam1));
				case 2:
					if (func_497())
					{
						return func_496("STF", func_494(iParam0), "LEND_HAND_JOHN", func_495(iParam1));
					}
					else
					{
						return func_496("STF", func_494(iParam0), "LEND_HAND_ARTHUR", func_495(iParam1));
					}
					break;
				case 4:
					return func_496("STF", func_494(iParam0), "CALL_MOMMA", func_495(iParam1));
				case 8:
					return func_496("STF", func_494(iParam0), "LUMBAGO", func_495(iParam1));
				case 16:
					return func_496("STF", func_494(iParam0), "THOUGHT", func_495(iParam1));
				case 32:
					if (func_497())
					{
						return func_496("STF", func_494(iParam0), "THANKS_JOHN", func_495(iParam1));
					}
					else
					{
						return func_496("STF", func_494(iParam0), "THANKS_ARTHUR", func_495(iParam1));
					}
					break;
				case 64:
					return func_496("STF", func_494(iParam0), "HOW_DRUNK", func_495(iParam1));
				case 128:
					return func_496("STF", func_494(iParam0), "NORMAL_DRUNK", func_495(iParam1));
				case 256:
					return func_496("STF", func_494(iParam0), "NO_THANKS", func_495(iParam1));
				case 512:
					return func_496("STF", func_494(iParam0), "COVERED", func_495(iParam1));
				case 1024:
					return func_496("STF", func_494(iParam0), "WAIT_OLD", func_495(iParam1));
				case 2048:
					return func_496("STF", func_494(iParam0), "AGGRO", func_495(iParam1));
				case 4096:
					return func_496("STF", func_494(iParam0), "WARN", func_495(iParam1));
				case 8192:
					return func_496("STF", func_494(iParam0), "WARN_AGGRO", func_495(iParam1));
				case 67108864:
					return func_496("STF", func_494(iParam0), "FLEE_THUG", func_495(iParam1));
				case 16384:
					return func_496("STF", func_494(iParam0), "BACK_TO_CAMP", func_495(iParam1));
				case 32768:
					return func_496("STF", func_494(iParam0), "BACK_TO_BEECHERS", func_495(iParam1));
			}
			break;
		default:
			switch (iParam2)
			{
				case 1:
					return func_496("STF", func_494(iParam0), "DOOR_TAUNT_A", func_495(iParam1));
				case 2:
					return func_496("STF", func_494(iParam0), "DOOR_REPLY_A", func_495(iParam1));
				case 4:
					return func_496("STF", func_494(iParam0), "DOOR_TAUNT_B", func_495(iParam1));
				case 8:
					return func_496("STF", func_494(iParam0), "DOOR_REPLY_B", func_495(iParam1));
				case 262144:
					return func_496("STF", func_494(iParam0), "CALL", func_495(iParam1));
				case 524288:
					return func_496("STF", func_494(iParam0), "DECLINE", func_495(iParam1));
				case 1048576:
					return func_496("STF", func_494(iParam0), "PLAYER_DECLINE", func_495(iParam1));
				case 2097152:
					return func_496("STF", func_494(iParam0), "PLAYER_ACCEPT", func_495(iParam1));
				case 16:
					return func_496("STF", func_494(iParam0), "DRUNK", func_495(iParam1));
				case 32:
					return func_496("STF", func_494(iParam0), "WINDOW_TAUNT_A", func_495(iParam1));
				case 64:
					return func_496("STF", func_494(iParam0), "WINDOW_REPLY_A", func_495(iParam1));
				case 128:
					return func_496("STF", func_494(iParam0), "WINDOW_TAUNT_B", func_495(iParam1));
				case 256:
					return func_496("STF", func_494(iParam0), "WINDOW_REPLY_B", func_495(iParam1));
				case 512:
					return func_496("STF", func_494(iParam0), "WINDOW_TAUNT_C", func_495(iParam1));
				case 1024:
					return func_496("STF", func_494(iParam0), "SEE_WIFE", func_495(iParam1));
				case 2048:
					return func_496("STF", func_494(iParam0), "DEAD", func_495(iParam1));
				case 4194304:
					return func_496("STF", func_494(iParam0), "AGGRO_THUG", func_495(iParam1));
				case 8388608:
					return func_496("STF", func_494(iParam0), "AGGRO_VICTIM", func_495(iParam1));
				case 16777216:
					return func_496("STF", func_494(iParam0), "AGGRO_WATCHER_A", func_495(iParam1));
				case 33554432:
					return func_496("STF", func_494(iParam0), "AGGRO_WATCHER_B", func_495(iParam1));
				case 67108864:
					return func_496("STF", func_494(iParam0), "FLEE_THUG", func_495(iParam1));
				case 134217728:
					return func_496("STF", func_494(iParam0), "FLEE_VICTIM", func_495(iParam1));
				case 4096:
					return func_496("STF", func_494(iParam0), "SEES_BODY_WATCHER_A", func_495(iParam1));
				case 8192:
					return func_496("STF", func_494(iParam0), "SEES_BODY_WATCHER_B", func_495(iParam1));
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

void func_218()
{
	switch (iLocal_214)
	{
		case 3:
			if (func_90(uLocal_178[1], 0, 1))
			{
				if (!func_52(64))
				{
					func_180(uLocal_178[1], 1, 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_178[1], 243, true);
				}
			}
			break;
		default:
			func_210(1, 0, 0, 0);
			break;
	}
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam4)
					{
						case 0:
							func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_388(uParam3[1 /*17*/], func_387(10), "RE_STF_VAL_V2_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						case 1:
							func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_388(uParam3[1 /*17*/], func_387(10), "RE_STF_VAL_V2_GREET_NEG_B", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						default:
							func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
					}
					break;
				case 2:
					switch (iParam4)
					{
						case 0:
							func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_388(uParam3[1 /*17*/], func_387(10), "RE_STF_VAL_V4_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						case 1:
							func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_388(uParam3[1 /*17*/], func_387(10), "RE_STF_VAL_V4_GREET_NEG_B", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						default:
							func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
					}
					break;
				default:
					func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam4)
					{
						case 0:
							func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_388(uParam3[1 /*17*/], func_387(10), "RE_STF_VHT_V2_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
						default:
							func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							break;
					}
					break;
				default:
					func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		default:
			func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
	}
	func_390(uParam2, 0);
	func_389(1, 2);
}

float func_220(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_432(Global_35, iParam0, bParam1, bParam2);
}

void func_221()
{
	if (!func_90(uLocal_178[0], 0, 1))
	{
		return;
	}
	if (func_52(1) && iLocal_564 < 4)
	{
		iLocal_564 = 4;
		func_183();
		func_48(6);
	}
	switch (iLocal_564)
	{
		case 0:
			if (!func_216(uLocal_178[0], 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_177);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_PLAY_ANIM(0, Local_546[0 /*2*/], Local_546[0 /*2*/].f_1, 2f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, Local_546[1 /*2*/], Local_546[1 /*2*/].f_1, 8f, 2f, -1, 1, 0f, false, 0, false, 0, false);
				func_253(uLocal_178[0], &iLocal_177, 0, 0, 1, 1);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_178[0], Local_546[0 /*2*/], Local_546[0 /*2*/].f_1, 1) && !func_224(0, 1, uLocal_178[0], 1))
			{
				iLocal_564 = 1;
			}
			break;
		case 1:
			if (func_224(0, 1, uLocal_178[0], 1))
			{
				func_498(iLocal_899, &(Local_623[0 /*21*/]), &Local_708);
				iLocal_564 = 2;
			}
			break;
		case 2:
			switch (iLocal_23)
			{
				case 1:
					if (func_224(0, 1, uLocal_178[0], 1))
					{
						iLocal_564 = 4;
						if (func_90(uLocal_178[0], 0, 1))
						{
							PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, true);
						}
						bLocal_208 = true;
						func_48(6);
					}
					break;
				case 2:
					iLocal_564 = 3;
					func_152(131072);
					if (func_90(uLocal_178[0], 0, 1))
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_178[0], 6, false);
					}
					func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
					func_48(7);
					break;
			}
			break;
		case 3:
			if (func_224(-5.5f, 1, 0, 0))
			{
				func_222();
			}
			break;
		case 4:
			func_226();
			break;
		case 5:
			break;
	}
}

void func_222()
{
	if (!func_186(16))
	{
		func_188(uLocal_178[0], uLocal_178[0], 524288, 1, -1065353216 /* Float: -4f */);
	}
	func_210(0, 1, 0, 0);
	iLocal_564 = 5;
}

void func_223(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam3[1 /*17*/], func_387(10), "RE_STF_VAL_V1_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				case 4:
					func_388(uParam3[0 /*17*/], func_387(7), "RE_STF_VAL_V6_GREET_POS_B", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam3[1 /*17*/], func_387(10), "RE_STF_VAL_V6_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam3[1 /*17*/], func_387(10), "RE_STF_VHT_V1_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 4:
					func_388(uParam3[0 /*17*/], func_387(7), "RE_STF_BLW_V6_GREET_POS_B", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam3[1 /*17*/], func_387(10), "RE_STF_BLW_V6_GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
				default:
					func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					break;
			}
			break;
		default:
			func_388(uParam3[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_388(uParam3[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
	}
	func_390(uParam2, 0);
	func_389(0, 2);
}

bool func_224(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_473(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_499(fParam0))
	{
		return false;
	}
	return true;
}

float func_225(int iParam0, int iParam1)
{
	return func_432(iParam0, iParam1, 1, 1);
}

void func_226()
{
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_178[0], Local_546[2 /*2*/], Local_546[2 /*2*/].f_1, Global_35, 900, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	iLocal_564 = 5;
}

void func_227(int iParam0)
{
	if (!func_261(iParam0))
	{
		func_360(&iLocal_46, iParam0);
	}
}

void func_228()
{
	if (VOLUME::DOES_VOLUME_EXIST(Local_64.f_24))
	{
		return;
	}
	if (!func_90(uLocal_178[0], 0, 1))
	{
		return;
	}
	func_357(&(Local_64.f_24), Global_36, 0f, 0f, 0f, 2f, 2f, 2f);
	POPULATION::_0xB56D41A694E42E86(Local_64.f_24, 0, 0, 0, -1, -1, 8);
	PED::_0x7C00CFC48A782DC0(Local_64.f_24, uLocal_178[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
}

int func_229()
{
	return func_501(&Local_344, &uLocal_557, 0.5f, 1114636288 /* Float: 60f */, func_500(), 500, 3f, 2f, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0);
}

int func_230(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	char* sVar15;
	char* sVar16;

	vVar12 = { func_502(Global_35, 1065353216 /* Float: 1f */) };
	sVar15 = func_110(1);
	sVar16 = func_110(2);
	switch (iParam0)
	{
		case 9:
			vVar0 = { -243.9014f, 764.795f, 117.1724f };
			vVar3 = { -255.3097f, 753.9832f, 116.0334f };
			vVar6 = { -244.3904f, 766.0107f, 117.1767f };
			vVar9 = { -260.1509f, 766.5687f, 116.4614f };
			break;
		case 4:
			vVar0 = { -809.2987f, -1327.793f, 42.66204f };
			vVar3 = { -805.478f, -1340.927f, 42.51833f };
			vVar6 = { -810.8365f, -1327.812f, 42.66229f };
			vVar9 = { -815.6164f, -1341.133f, 42.54564f };
			break;
	}
	if (func_503(vVar0, vVar3, vVar12))
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*iParam1, sVar15, true);
		return 1;
	}
	else if (!func_503(vVar6, vVar9, vVar12))
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*iParam1, sVar16, true);
		return 2;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_231(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 128);
	}
	else
	{
		func_270(iParam0, 128);
	}
}

bool func_232(int iParam0)
{
	if (!func_90(iParam0, 0, 1))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, 1673132633))
	{
		return false;
	}
	return true;
}

char* func_233(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 4:
			switch (iParam2)
			{
				case 8:
					return func_496("STF", func_494(iParam0), "GREET_POS_RESPONSE", func_495(iParam1));
				case 32:
					return func_496("STF", func_494(iParam0), "GREET_NEG_RESPONSE", func_495(iParam1));
				case 2:
					return func_496("STF", func_494(iParam0), "GREET_POS_RESPONSE", func_495(iParam1));
				case 4:
					return func_496("STF", func_494(iParam0), "GREET_NEG_RESPONSE", func_495(iParam1));
				case 128:
					return func_496("STF", func_494(iParam0), "INTERVENE_RESPONSE", func_495(iParam1));
				default:
					break;
			}
			break;
		default:
			switch (iParam2)
			{
				case 8:
					return func_496("STF", func_494(iParam0), "GREET_POSITIVE_RESPONSE", func_495(iParam1));
				case 32:
					return func_496("STF", func_494(iParam0), "GREET_NEGATIVE_RESPONSE", func_495(iParam1));
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	char* sVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;

	if (TASK::DOES_SCENARIO_POINT_EXIST(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		vVar1 = { func_504(iParam1, iParam2, iVar0) };
		sVar4 = func_505(iParam1, iParam2, iVar0);
		*iParam0 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar1, MISC::GET_HASH_KEY(sVar4), 1f, 1, false);
		if (TASK::DOES_SCENARIO_POINT_EXIST(*iParam0) && !TASK::IS_SCENARIO_OCCUPIED(vVar1, 0.5f, true))
		{
			vVar5 = { TASK::_GET_SCENARIO_POINT_COORDS(*iParam0, true) };
			vVar8 = { 0f, 0f, 0f };
			vVar11 = { 0.5f, 0.5f, 2f };
			func_125(&(Local_64.f_21), &(Local_64.f_22), vVar5, vVar8, vVar11, 1, 534496, 1, 2, 0);
			Jump @184; //curOff = 169
		}
		iVar0++;
	}
}

void func_235()
{
	if (!func_90(uLocal_178[0], 0, 1))
	{
		return;
	}
	else if (func_52(1))
	{
		return;
	}
	else if (!func_237(uLocal_178[0], iLocal_50))
	{
		if (func_256(uLocal_178[0], 1))
		{
			func_239(&uLocal_187);
		}
		if (!func_52(536870912) && TASK::DOES_SCENARIO_POINT_EXIST(iLocal_199))
		{
			TASK::TASK_USE_SCENARIO_POINT(uLocal_178[iLocal_213], iLocal_199, 0, 0, true, false, 0, false, -1f, false);
			func_152(536870912);
		}
		return;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50) > func_506(iLocal_566))
	{
		func_239(&uLocal_187);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(0), uLocal_178[0]);
		func_210(0, 0, 1, 0);
		func_161(&uLocal_174);
		func_223(iLocal_899, iLocal_214, &(Local_623[0 /*21*/]), &Local_708);
	}
}

void func_236(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_192) || !func_237(iLocal_192, iLocal_50))
	{
		return;
	}
	if ((((!func_90(uLocal_178[0], 0, 1) || !func_237(uLocal_178[0], iLocal_50)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_192)) || func_220(iLocal_192, 1, 1) < 2f) || bParam0)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, "door", iLocal_192);
	}
}

bool func_237(int iParam0, int iParam1)
{
	if (!func_185(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	return ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, iParam1);
}

void func_238()
{
	if (!func_90(uLocal_178[1], 0, 1))
	{
		return;
	}
	if (func_237(uLocal_178[1], iLocal_50))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_149(), uLocal_178[1]);
	}
}

void func_239(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_507(uParam0[iVar0]);
		iVar0++;
	}
}

char* func_240(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return func_217(iParam1, iParam2, 67108864);
		case 1:
			return func_217(iParam1, iParam2, 134217728);
		case 2:
			return func_217(iParam1, iParam2, 16777216);
		case 3:
			return func_217(iParam1, iParam2, 33554432);
		default:
			break;
	}
	return func_217(iParam1, iParam2, 67108864);
}

void func_241(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_90(uLocal_178[1], 0, 1) || !func_90(iLocal_185, 0, 1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (ENTITY::IS_ENTITY_DEAD(uLocal_178[0]) && !bLocal_96)
	{
		TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_Panic", 3f, 1f, 4);
		bLocal_96 = true;
	}
	else if (bParam0)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
	}
	TASK::TASK_MOUNT_ANIMAL(0, iLocal_185, -1, -1, 1f, 1025, 0, 0);
	if (bParam1)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_273(iLocal_899, 0), 1f, -1, 0.25f, 8193, 40000f);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_178[1], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_242(bool bParam0)
{
	int iVar0;

	if (!func_90(uLocal_178[0], 0, 0))
	{
		return;
	}
	func_190(0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 1f, 0f, 4);
	if (bParam0)
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	}
	func_253(uLocal_178[0], &iVar0, 0, 0, 1, 1);
}

void func_243()
{
	if (((!func_7() || func_179(iLocal_48, 8388608)) || !func_90(uLocal_178[1], 0, 1)) || !func_185(iLocal_50))
	{
		return;
	}
	if (func_508(iLocal_50, uLocal_178[1], iLocal_566))
	{
		func_152(8388608);
	}
}

bool func_244(int iParam0, int iParam1)
{
	if (!func_90(iParam1, 0, 1) || !func_185(iParam0))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, joaat("ENDSINSTAND")))
	{
		return true;
	}
	return false;
}

bool func_245(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_246()
{
	if (func_179(iLocal_48, 2097152))
	{
		if (func_224(-4.5f, 1, uLocal_178[1], 1) && func_224(-4.5f, 1, Global_35, 1))
		{
			if (!func_179(iLocal_46, 32))
			{
				func_188(uLocal_178[1], Global_35, 32, 1, -1065353216 /* Float: -4f */);
				func_227(32);
			}
			else if (!func_179(iLocal_46, 64))
			{
				func_188(Global_35, uLocal_178[1], 64, 1, -1065353216 /* Float: -4f */);
				func_227(64);
			}
			else if (!func_179(iLocal_46, 128))
			{
				func_188(uLocal_178[1], Global_35, 128, 1, -1065353216 /* Float: -4f */);
				func_227(128);
			}
			else if (func_106() && !func_179(iLocal_46, 16384))
			{
				func_188(uLocal_178[1], Global_35, 16384, 1, -1065353216 /* Float: -4f */);
				func_241(1, 0);
				func_227(16384);
			}
			else if (func_497() && !func_179(iLocal_46, 32768))
			{
				func_188(uLocal_178[1], Global_35, 32768, 1, -1065353216 /* Float: -4f */);
				func_227(32768);
				func_241(1, 0);
				bLocal_44 = true;
				return true;
			}
			else
			{
				bLocal_44 = true;
				return true;
			}
		}
	}
	else if (func_224(-4.5f, 1, uLocal_178[1], 1) && func_224(-4.5f, 1, Global_35, 1))
	{
		if (!func_179(iLocal_46, 256))
		{
			func_188(uLocal_178[1], Global_35, 256, 1, -1065353216 /* Float: -4f */);
			func_227(256);
		}
		else if (!func_179(iLocal_46, 512))
		{
			func_188(Global_35, uLocal_178[1], 512, 1, -1065353216 /* Float: -4f */);
			func_227(512);
		}
		else if (!func_179(iLocal_46, 1024))
		{
			func_188(uLocal_178[1], Global_35, 1024, 1, -1065353216 /* Float: -4f */);
			func_227(1024);
		}
		else if (func_106() && !func_179(iLocal_46, 16384))
		{
			func_188(uLocal_178[1], Global_35, 16384, 1, -1065353216 /* Float: -4f */);
			func_241(1, 0);
			func_227(16384);
		}
		else if (func_497() && !func_179(iLocal_46, 32768))
		{
			func_188(uLocal_178[1], Global_35, 32768, 1, -1065353216 /* Float: -4f */);
			func_241(1, 0);
			func_227(32768);
			bLocal_44 = true;
			return true;
		}
		else
		{
			bLocal_44 = true;
			return true;
		}
	}
	return false;
}

bool func_247(int iParam0, int iParam1, bool bParam2)
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

bool func_248(int iParam0, int iParam1, float fParam2)
{
	return func_509(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_249()
{
	int iVar0;
	float fVar1;

	if (!func_185(iLocal_50))
	{
		return true;
	}
	else if (((iLocal_214 == 0 || iLocal_214 == 1) || iLocal_214 == 3) || iLocal_214 == 4)
	{
		return true;
	}
	if (func_179(iLocal_48, 524288))
	{
		iVar0 = 0;
		fVar1 = 0.3823f;
	}
	else if (func_179(iLocal_48, 1048576))
	{
		iVar0 = 1;
		fVar1 = 0.7441f;
	}
	else
	{
		return true;
	}
	if (!func_90(uLocal_178[iVar0], 0, 1))
	{
		return true;
	}
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uLocal_178[iVar0], iLocal_50) || ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50) > fVar1)
	{
		func_251(uLocal_178[iVar0], 1, Global_35, 0);
		return true;
	}
	return false;
}

bool func_250(int iParam0)
{
	return (uLocal_22 && iParam0) != 0;
}

int func_251(int iParam0, int iParam1, int iParam2, char* sParam3)
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
		func_510(iParam0, 0);
		func_511(iParam0, iParam1);
		func_512(iParam0, iParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam3);
			if (!func_513(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 67108864;
		case 1:
			return 134217728;
		case 2:
			return 16777216;
		case 3:
			return 33554432;
		default:
			break;
	}
	return 67108864;
}

void func_253(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_254()
{
	if ((Local_344.f_46 || !func_90(uLocal_178[2], 0, 1)) || !func_90(uLocal_178[3], 0, 1))
	{
		return true;
	}
	if (!func_52(512))
	{
		if (((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_178[2], joaat("ENDSINSTAND")) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_50)) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_50, false)) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uLocal_178[2], iLocal_50))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_178[2], uLocal_178[1], -1, -1f, -1f, -1f);
			func_152(512);
		}
	}
	else if (!func_52(1024))
	{
		if (((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_178[3], joaat("ENDSINSTAND")) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_50)) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_50, false)) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uLocal_178[3], iLocal_50))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_178[3], uLocal_178[1], -1, -1f, -1f, -1f);
			func_152(1024);
		}
	}
	else if (!func_52(8192))
	{
	}
	else if (!func_261(4096))
	{
		if (func_224(-4.5f, 1, uLocal_178[2], 1) && func_224(-4.5f, 1, uLocal_178[3], 1))
		{
			if (func_188(uLocal_178[2], uLocal_178[3], 4096, 0, -1065353216 /* Float: -4f */))
			{
				if (iLocal_214 == 3)
				{
					EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_SEEN_PED_KILLED"), ENTITY::GET_ENTITY_COORDS(uLocal_178[1], true, false), -1f, -1f, -1f, -1f, -1f, -1, -1);
					func_227(4096);
					TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(uLocal_178[2], Global_35, 1f, 0, 0);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_178[3], uLocal_178[2], 2f, -1f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1, 0);
				}
			}
		}
	}
	else if (!func_261(8192))
	{
		if (func_188(uLocal_178[3], uLocal_178[2], 8192, 0, -1065353216 /* Float: -4f */))
		{
			func_227(8192);
		}
	}
	return false;
}

int func_255()
{
	int iVar0;

	if (iLocal_214 != 4)
	{
		func_152(-2147483648);
		return 1;
	}
	if (!func_52(2))
	{
		if (!func_90(iLocal_185, 0, 1) || (func_247(uLocal_178[1], iLocal_185, 1) && !func_216(uLocal_178[1], 713668775)))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, func_273(iLocal_899, 0), 2f, 1f, 0, 0);
			TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, func_273(iLocal_899, 1), 2f, 1f, 0, 0);
			func_253(uLocal_178[1], &iVar0, 0, 0, 1, 1);
			func_152(2);
		}
	}
	if (func_52(-2147483648))
	{
		return 1;
	}
	if ((func_260(8) || func_260(32)) || ((func_257(uLocal_178[1], func_273(iLocal_899, 0), 1) < 5f && !func_52(67108864)) && !func_52(134217728)))
	{
		func_73(&(uLocal_178[1]), 4, &(Local_623[1 /*21*/]), &Local_778, iLocal_899);
		func_152(-2147483648);
	}
	return 0;
}

bool func_256(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_514(iVar0) || func_515(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

float func_257(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_258(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_516(iParam0);
	iVar0 = (iVar0 || iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_flags", iVar0);
}

int func_259(int iParam0, vector3 vParam1, char* sParam4)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	if (func_126(vParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, Global_1396084))
		{
			return 1;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam4);
			if (!func_513(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1396084);
		func_510(iParam0, 0);
		func_511(iParam0, 7);
		func_517(iParam0, vParam1);
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)
{
	return func_179(iLocal_47, iParam0);
}

bool func_261(int iParam0)
{
	return func_179(iLocal_46, iParam0);
}

void func_262(int iParam0)
{
	if (!func_186(iParam0))
	{
		func_360(&iLocal_49, iParam0);
	}
}

void func_263(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_264(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(uParam0->f_1), 256);
	}
	else
	{
		func_169(&(uParam0->f_1), 256);
	}
}

void func_265(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_270(&(uParam0->f_1), 128);
	}
	else
	{
		func_169(&(uParam0->f_1), 128);
	}
}

var func_266(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_267(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_518(sParam1));
}

int func_268(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

int func_269(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/];
}

void func_270(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_271(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

bool func_272(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

Vector3 func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return -2569.571f, 459.7099f, 145.5262f;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1362.5f, -983.7f, 66.6f;
				case 1:
					return -2569.571f, 459.7099f, 145.5262f;
				default:
					break;
			}
			break;
	}
	return -240.1862f, 740.1418f, 114.8284f;
}

void func_274(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_519(iParam0, uParam1, 1);
	func_77(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_275(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_272(iParam0))
	{
		return;
	}
	if (func_117(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_336(iParam0, 56, 1);
		func_42(&(Global_1359489.f_40), 1);
	}
	func_520(iParam0, 0);
	func_347(iParam0, 4, 0);
	func_521(iParam0);
	func_348(iParam0);
	func_335(iParam0, 37, 1);
	bVar0 = func_292(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_522(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_334(iParam0, 64, 1))
	{
		func_335(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_335(iParam0, 33, 1);
		func_335(iParam0, 34, 1);
		func_523(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_340(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_336(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_336(iParam0, 35, 1);
			if (bParam8)
			{
				func_336(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_524(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		func_335(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_336(iParam0, 33, 1);
		func_340(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_42(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_40(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_336(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_525(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_334(iParam0, 45, 1))
	{
		func_335(iParam0, 45, 1);
	}
	func_526(iParam0, 16, 1);
	func_335(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_292(func_527(iParam0), 0))
		{
			func_528(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

char* func_276(int iParam0)
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

void func_277(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 || iParam1);
}

void func_278(int iParam0, bool bParam1)
{
	if (func_90(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_529(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_279(var uParam0, var uParam1)
{
	if (func_102(uParam0->f_3, 16777216))
	{
		if (func_530(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_280(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_281(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_282(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_90(iParam0, 0, 1)))
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
			fVar2 = func_281(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_531(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, iParam1, 0);
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

void func_283(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_532(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_533(uParam0);
	func_534(uParam0);
	func_535(uParam0);
	if (!func_536(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_425(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_537();
	}
	if (!func_538(uParam0->f_3) && !func_102(uParam0->f_3, 256))
	{
		func_539(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_74(uParam0->f_173);
	func_74(uParam0->f_172);
}

void func_284(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_285(int iParam0, int iParam1)
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

void func_286(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_321() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_287(int iParam0)
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

void func_288(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_287(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_540(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_541(iVar0);
	*uParam0 = 0;
}

void func_289(var uParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*uParam0);
		POPULATION::_0xA1CFB35069D23C23(*uParam0);
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

bool func_290(int iParam0)
{
	if (func_542(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_291()
{
	return true;
}

bool func_292(int iParam0, int iParam1)
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
	if (func_179(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_179(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_179(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_179(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_293(int iParam0)
{
	if (((func_294(iParam0, 1) && func_294(iParam0, 2)) && func_294(iParam0, 8)) && func_294(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_294(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_295(int iParam0)
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

int func_296(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_543(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_544(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_544(), iVar3);
		if (func_545(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_297(int iParam0)
{
	func_360(iParam0, 256);
}

void func_298(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_299(char* sParam0, var uParam1)
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

bool func_300(var uParam0)
{
	if (!func_546(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_546(uParam0->f_12))
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

Vector3 func_301(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_315(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_547(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_548(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_302(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_102(iParam0, 32))
	{
		if (func_549(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_550(Global_35, &(uParam1->f_12)) };
				if (!func_126(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_551(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_426(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_427());
		if (func_552(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_429(iVar0, func_428(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_429(iVar0, func_428(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_102(iParam0, 1))
		{
			func_553(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_554(iParam0);
}

bool func_303(int iParam0, var uParam1)
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
			func_555(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_170(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_556(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_556(iParam0));
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

void func_304(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_557(iParam0))
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
			if (!func_102(iParam0, 1))
			{
				if (func_170(iParam0, 2))
				{
				}
			}
			func_558(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_559(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_559(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_164(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_305(bool bParam0, int iParam1, var uParam2, var uParam3)
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
	while (iVar0 < func_547(iParam1))
	{
		if (!func_560(iParam1, iVar0))
		{
			vVar4 = { func_301(iParam1, iVar0) };
			if (!func_126(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_310(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_561(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_126(vVar4))
	{
	}
	return vVar1;
}

int func_306(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_58("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_307(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_547(iParam0))
	{
		vVar1 = { func_301(iParam0, iVar0) };
		if (func_562(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_308(var uParam0)
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

int func_309(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_563(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_564(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_126(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_565(uParam0);
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
	return func_306(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_310(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_304(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_102(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_311(var uParam0, bool bParam1)
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

bool func_312(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_566(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_567(iParam0, uParam2))
	{
		return false;
	}
	if (!func_568(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_569(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_313(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_314(int iParam0, int iParam1, var uParam2)
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

bool func_315(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_316(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_317(int iParam0, int iParam1)
{
	if (func_570(iParam0))
	{
		return;
	}
	if (func_571(iParam0) == iParam1)
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

void func_318(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_270(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_319(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			return 0;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 10:
			return 3;
	}
	return 0;
}

int func_320(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_572(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_1;
	}
	return 0;
}

int func_321()
{
	return Global_1572887.f_12;
}

bool func_322(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_323(int iParam0, bool bParam1)
{
	switch (func_573(iParam0))
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

int func_324(int iParam0, bool bParam1, bool bParam2)
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

void func_325(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_290(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_326(int iParam0, bool bParam1)
{
	if (func_290(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_327(int iParam0, bool bParam1)
{
	if (func_290(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_328(int iParam0, bool bParam1)
{
	if (func_290(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_329()
{
	return true;
}

bool func_330(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_331(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_331(int iParam0)
{
	return iParam0 > -1;
}

int func_332(int iParam0)
{
	return joaat("META_HORSE_SADDLE_ONLY");
}

void func_333(int iParam0, int iParam1, bool bParam2)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = (Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1);
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = (Global_1360165[iParam0 /*1157*/].f_70.f_1 - (Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1));
	}
}

bool func_334(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_331(iParam0))
		{
			return false;
		}
	}
	func_574(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_335(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_331(iParam0))
		{
			return;
		}
	}
	func_574(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_336(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_331(iParam0))
		{
			return;
		}
	}
	func_574(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_337(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_575(iParam0);
	if (!func_272(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

void func_338(int iParam0, int iParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_339(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_576(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_577(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_578(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_576(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_579(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_580(iParam0, 0))
					{
						func_336(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_581(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				func_335(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_292(func_575(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_292(func_527(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_340(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_335(iParam0, 50, 1);
		func_335(iParam0, 48, 1);
		func_335(iParam0, 49, 1);
		func_335(iParam0, 51, 1);
		func_335(iParam0, 52, 1);
		func_335(iParam0, 54, 1);
		func_335(iParam0, 55, 1);
	}
	else
	{
		func_336(iParam0, 50, 1);
		func_336(iParam0, 48, 1);
		func_336(iParam0, 49, 1);
		func_336(iParam0, 51, 1);
		if (bParam3)
		{
			func_336(iParam0, 54, 1);
		}
		else
		{
			func_335(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_336(iParam0, 52, 1);
			if (bParam3)
			{
				func_336(iParam0, 55, 1);
			}
		}
		else
		{
			func_335(iParam0, 52, 1);
			if (!bParam3)
			{
				func_335(iParam0, 55, 1);
			}
		}
	}
}

void func_341(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_272(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_582(iParam0, bParam3);
	}
	else
	{
		func_583(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_584(iParam0, bParam3);
	}
	else
	{
		func_585(iParam0, bParam3);
	}
}

bool func_342(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_272(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_586(iParam0, iParam1);
	return bVar0;
}

void func_343(int iParam0, int iParam1, bool bParam2)
{
	if (!func_272(iParam0))
	{
		return;
	}
	if (!func_342(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_336(iParam0, 25, 1);
	}
}

void func_344(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_587(iParam2))
		{
			iVar0 = func_588(iParam2, -1);
			if (func_589(iParam1, iVar0))
			{
				if (func_590(iParam1, iVar0))
				{
					if (func_591(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_592(iParam1);
					}
				}
				else
				{
					PED::_SET_PED_BODY_COMPONENT(iParam1, iVar0);
				}
			}
		}
		func_593(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_336(iParam0, 66, 0);
		}
	}
}

void func_345(int iParam0)
{
	func_594(iParam0);
	func_595(iParam0, 0);
}

void func_346(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
			}
		}
	}
}

void func_347(int iParam0, int iParam1, bool bParam2)
{
	if (!func_331(iParam0))
	{
		return;
	}
	func_596(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_348(int iParam0)
{
	func_336(iParam0, 36, 1);
}

bool func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_350(int iParam0, int iParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_597(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_597(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_351(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_272(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

int func_352(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;

	if (!func_331(iParam1))
	{
		return 0;
	}
	iVar0 = func_527(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_292(iVar0, 0)) || (bParam3 && !func_598(iParam1)))
	{
		if (bParam2)
		{
			if (func_599(iParam1, 1) != 0)
			{
				iVar0 = func_600(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_292(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		func_601(iParam1, iVar0);
		func_602(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_353()
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

bool func_354(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_603(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_604(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_605(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_606(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_135(uParam0->f_11, 0);
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
					Var2 = { func_603(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_604(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_607(&(uParam0->f_22)));
					Var2 = { func_603(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_604(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_605(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_608(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_609(*uParam1, &(uParam0->f_23), 0);
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

int func_355(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "AA";
		case 1:
			return "AA_2";
		case 2:
			return "AM";
		case 3:
			return "AM_2";
		case 4:
			return "AP";
		case 5:
			return "AMD";
		case 6:
			return "BR";
		case 7:
			return "BT";
		case 8:
			return "BA";
		case 9:
			return "BTR";
		case 10:
			return "CA";
		case 11:
			return "CR";
		case 12:
			return "CP";
		case 13:
			return "CR";
		case 14:
			return "CQ";
		case 15:
			return "CC";
		case 16:
			return "CW";
		case 17:
			return "DAA";
		case 18:
			return "DAB";
		case 19:
			return "DAS";
		case 20:
			return "DJ";
		case 21:
			return "DIB";
		case 22:
			return "DOMD";
		case 23:
			return "DM";
		case 24:
			return "DC";
		case 25:
			return "DD";
		case 26:
			return "DW";
		case 27:
			return "ES";
		case 28:
			return "EX";
		case 29:
			return "FLO";
		case 30:
			return "FOOTR";
		case 31:
			return "FO";
		case 32:
			return "GP";
		case 33:
			return "HAT";
		case 34:
			return "HR";
		case 35:
			return "HR_2";
		case 36:
			return "HU";
		case 37:
			return "IK";
		case 38:
			return "IR";
		case 39:
			return "IT";
		case 40:
			return "KV";
		case 41:
			return "KT";
		case 42:
			return "KT_V2";
		case 64:
			return "KD";
		case 65:
			return "KS";
		case 43:
			return "LRU";
		case 44:
			return "GELRC";
		case 45:
			return "LSF";
		case 46:
			return "LP";
		case 47:
			return "LDRUNK";
		case 48:
			return "LDRUNK_V1";
		case 49:
			return "LDRUNK_V1_2";
		case 50:
			return "LDRUNK_V2";
		case 51:
			return "LDRUNK_V2_2";
		case 52:
			return "LF";
		case 53:
			return "MC";
		case 54:
			return "MC_2";
		case 55:
			return "OR";
		case 56:
			return "OT";
		case 57:
			return "PAR";
		case 58:
			return "PT";
		case 59:
			return "PP";
		case 60:
			return "PISS";
		case 61:
			return "PCA";
		case 62:
			return "PO";
		case 63:
			return "PW";
		case 66:
			return "RL";
		case 67:
			return "RP";
		case 68:
			return "RD";
		case 69:
			return "FND_STD";
		case 70:
			return "SAM";
		case 71:
			return "SAF";
		case 72:
			return "SOFF";
		case 73:
			return "SS";
		case 74:
			return "SB";
		case 75:
			return "SB_2";
		case 76:
			return "STR";
		case 77:
			return "STF";
		case 78:
			return "TC";
		case 79:
			return "TB";
		case 80:
			return "TC";
		case 81:
			return "TOWNR";
		case 82:
			return "TOWNR_2";
		case 83:
			return "TWW";
		case 84:
			return "TA";
		case 85:
			return "TGH";
		case 86:
			return "TWO";
		case 87:
			return "TWO_2";
		case 88:
			return "TH";
		case 89:
			return "WT";
		case 90:
			return "WA";
		case 91:
			return "WC";
		case 92:
			return "W";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

void func_356(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_427());
	}
}

void func_357(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_427());
	}
}

void func_358(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

int func_359()
{
	return Global_1894899.f_2;
}

void func_360(int iParam0, int iParam1)
{
	func_610(iParam0, iParam1);
}

bool func_361(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_362(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_611(iParam0);
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
		if (!func_612(iParam0, 1))
		{
			return false;
		}
	}
	return func_613(iParam0, 0, bParam2) >= iParam1;
}

bool func_362(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_363(int iParam0, int iParam1)
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

int func_364(int iParam0)
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

var func_365(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_366(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

int func_367(int iParam0)
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

bool func_368(int iParam0, var uParam1)
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

int func_369(var uParam0)
{
	return uParam0;
}

bool func_370(int iParam0)
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

bool func_371(int iParam0)
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

void func_372(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_373(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_614(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_77(uParam2, 0, 0, 1, 0);
				func_169(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_615(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_270(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_374(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_3(iParam4, 32);
		func_519(iParam1, uParam2, 0);
		iVar5 = func_616(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_77(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_376(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_376(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
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
				iParam6 = func_617(uParam0);
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
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_618(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_619(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_376(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_375(*uParam0, 1, 1);
			}
			else
			{
				func_375(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_375(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_376(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_377(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_620(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_378(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_621(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_379(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_3(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_380(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_622(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_623(Global_35)) || func_624(Global_35)) || func_625(Global_35));
	fVar12 = -1f;
	if (func_41(&(iParam1->f_13)))
	{
		fVar12 = func_162(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_287((uParam4[iVar0 /*17*/])->f_6);
		func_626(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_627(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_628(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_77(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_629(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_519(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_630(iParam1, fParam6, iParam1->f_9))
					{
						func_161(&(iParam1->f_18));
						if (bVar6)
						{
							func_629(uParam4, 0, 0);
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
		func_631(iParam1, fParam2);
	}
	return bVar5;
}

void func_381(var uParam0)
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

void func_382(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_632(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_631(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_383(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_633(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_634(iParam1, 0);
				func_519(iParam1, uParam2, func_376(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_384(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_161(&(iParam1->f_18));
			return false;
		}
		else if (func_41(&(iParam1->f_18)))
		{
			func_40(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_41(&(iParam1->f_18)))
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
	return func_200(&(iParam1->f_18), fParam2);
	return true;
}

void func_385(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_626(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_386(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

char* func_387(int iParam0)
{
	if (func_635(iParam0))
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

void func_388(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_287(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_636(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_637(iParam0->f_6, iParam0->f_5, 0);
			}
			func_638(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_639(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_389(int iParam0, int iParam1)
{
	iLocal_17[iParam0] = iParam1;
}

void func_390(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_40(&(iParam0->f_18));
}

void func_391(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_393() - fParam1);
	func_640(uParam0, 1);
	func_641(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_392(var uParam0)
{
	return func_160(*uParam0, 2);
}

float func_393()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_394(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_395(int iParam0, int iParam1)
{
	if (!func_394(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] && iParam1) != 0;
}

int func_396(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

Vector3 func_397(var uParam0)
{
	return uParam0->f_51;
}

void func_398(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_399()
{
	return Global_1935436 == 2;
}

void func_400(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_401(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_102(iParam0, 2))
	{
		func_643(iParam0, func_642(iParam1));
	}
	else
	{
		func_644(iParam0, func_6());
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
	func_645(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_646(iParam0, 0);
	func_647(iParam0);
	func_648(1);
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
	if (!func_102(iParam0, 16))
	{
		func_402(iParam0, 0, 0, 0, 0);
	}
}

void func_402(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_649() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_315(iVar1) && !func_102(iVar1, iParam2)) && (!bParam3 || !func_417(iVar1))) && (!bParam4 || !func_650(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_651(iVar0);
			}
		}
		iVar0++;
	}
}

int func_403(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_404(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_552(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_102(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_652(2, -1, 0, 0, 0);
			}
			else
			{
				func_652(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_652(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_653(1, uParam0->f_177))
				{
					func_654(16, uParam0->f_177);
					func_655(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_656(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_652(8, -1, 0, 0, 0);
	}
}

int func_405()
{
	if (func_657(Global_1935630.f_44))
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
		else if (func_658())
		{
			return 1;
		}
	}
	return 0;
}

float func_406(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_102(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_102(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_102(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_102(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_102(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_102(uParam0->f_3, 1))
		{
		}
		else if (func_102(uParam0->f_3, 2))
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

int func_407(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_659(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_660(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_393() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_408(var uParam0, int iParam1, float fParam2)
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
	func_172(uParam0);
	return true;
}

bool func_409()
{
	return (Global_1894899 & 1 != 0 && func_359() != -1);
}

bool func_410(var uParam0, float fParam1)
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

bool func_411(int iParam0)
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
	iVar0 = func_662(func_661());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_412(int iParam0, int iParam1)
{
	return (func_403(iParam0) && iParam1) != 0;
}

bool func_413(int iParam0)
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
	if (iParam0 & 1 == 1 && func_663(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_664(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_665(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_666(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_667(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_668(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_669(iVar3))
	{
		return true;
	}
	return false;
}

bool func_414(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_670(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_415(int iParam0)
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

bool func_416(int iParam0, bool bParam1, bool bParam2)
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
		if (func_671())
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
		iVar0 = func_672(Global_1898164.f_1[0 /*5*/]);
		if (func_322(iVar0) && func_673(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_674(Global_1898164.f_1[0 /*5*/]))
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

bool func_417(int iParam0)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	if (func_675(64) && func_676(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_418()
{
	return Global_1894899 & 4 != 0;
}

int func_419(int iParam0)
{
	if (!func_677(iParam0))
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

bool func_420(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_421(vector3 vParam0, int iParam3)
{
	if (!func_420(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_422(vector3 vParam0)
{
	float fVar0;

	if (func_126(vParam0))
	{
		return false;
	}
	fVar0 = func_281(func_409(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

bool func_423(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_161(uParam0);
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
		func_161(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_41(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_43(uParam0, fParam2))
		{
			return true;
		}
		if (func_41(uParam0))
		{
			func_40(uParam0);
		}
	}
	return false;
}

bool func_424(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_425(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_126(vParam0))
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
			if (func_562(vVar2, vParam0, 2f, 1))
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

float func_426(int iParam0)
{
	if (!func_315(iParam0))
	{
		return 0f;
	}
	if (!func_678(iParam0))
	{
		return 0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_427()
{
	return "unnamed";
}

char* func_428(int iParam0)
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

int func_429(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_553(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_431()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, 1, 0);
}

float func_432(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

var func_433(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_434(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_679(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_435(int iParam0, bool bParam1, int iParam2)
{
	func_680(iParam2);
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
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
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
		iParam0->f_13 = func_681(0);
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
							func_169(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_414(1))
						{
							func_169(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_414(1) || *iParam0 & 8192 != 0))
				{
					func_270(iParam0, 33554432);
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
			if (func_682(iParam0))
			{
				iParam0->f_15 = func_454();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_454() - iParam0->f_15) > 500)
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
	func_683(iParam0);
}

bool func_436(int iParam0, int iParam1)
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
			if (!func_684(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_225(iParam0, iVar2) <= func_685(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_437(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_686(iParam2, 1, 1, 1, 0))
	{
		func_169(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_687(iParam1, 1);
	func_537();
}

bool func_438(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_181(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_688(iParam1);
			if (func_689(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_690(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_687(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_687(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_439(int iParam0, int iParam1, int iParam2)
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
	if (func_691(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_688(iParam2);
		if (func_689(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_690(iParam2)
				{
					func_687(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_440(int iParam0, int iParam1)
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
	if (func_684(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_690(iParam1)
		{
			fVar3 = func_688(iParam1);
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

bool func_441(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_454();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_442(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_692(iParam2);
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
			if (func_450(iParam2, iParam1))
			{
				func_687(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_443(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_693(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_450(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_687(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_444(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_694(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_687(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_687(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (func_695(iParam1, vVar0, vVar4))
					{
						func_687(iParam2, 1);
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
					func_687(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (func_695(iParam1, vVar0, vVar7))
					{
						func_687(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_445(int iParam0, int iParam1)
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
		if (!func_684(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_696(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_697(Global_1935630.f_34[iVar0]))
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
			if (func_698(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_699(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_700(iParam1, iParam0, fVar1, iVar0))
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

bool func_446(int iParam0, int iParam1)
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

bool func_447(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_454();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_448(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_701(iVar0, &iVar2))
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
	if (func_702(iVar0, iParam0))
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

int func_449(int iParam0, int iParam1)
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

bool func_450(int iParam0, int iParam1)
{
	if (func_703(iParam0))
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

bool func_451(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_432(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_452()
{
}

bool func_453(int iParam0, int iParam1)
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
		if (func_704(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_454();
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
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_257(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_454();
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

int func_454()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_455()
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
	if ((func_454() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_456(int iParam0, int iParam1)
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
	fVar0 = func_685(iParam0);
	if (iParam0->f_12 > func_705(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_706(iParam1);
	iVar1 = func_707(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_457(int iParam0, int iParam1, int iParam2)
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
	return func_708(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_458(int iParam0, int iParam1)
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
		if (func_709(iParam0, iParam1, 1))
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
					if (!func_710(iParam1, iParam0))
					{
						if (func_257(iVar4, Global_36, 1) < 7f)
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

bool func_459(int iParam0, int iParam1)
{
	if (!func_711(0))
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

bool func_460(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_454();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_461(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_462(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_454();
	}
	else if (func_454() - iParam1->f_4) > func_712(iParam1)
	{
		return func_713(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_463(int iParam0, int iParam1)
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

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		case 1:
			return 12;
		case 2:
			return 9;
		case 3:
			return 3;
		case 76:
			return 3;
		case 4:
			return 12;
		case 7:
			return 3;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 3;
		case 82:
			return 13;
		case 87:
			return 13;
		case 17:
			return 12;
		case 18:
			return 12;
		case 92:
			return 12;
		case 119:
			return 12;
		case 27:
			return 12;
		case 29:
			return 4;
		case 95:
			return 13;
		case 31:
			return 12;
		case 32:
			return 11;
		case 33:
			return 11;
		case 34:
			return 11;
		case 97:
			return 12;
		case 98:
			return 12;
		case 38:
			return 12;
		case 40:
			return 11;
		case 102:
			return 2;
		case 48:
			return 13;
		case 49:
			return 12;
		case 106:
			return 2;
		case 107:
			return 12;
		case 54:
			return 13;
		case 57:
			return 12;
		case 109:
			return 2;
		case 58:
			return 12;
		case 111:
			return 12;
		case 112:
			return 2;
		case 113:
			return 3;
		case 115:
			return 3;
		case 67:
			return 13;
		case 64:
			return 13;
		case 65:
			return 12;
		default:
			break;
	}
	return 9;
	return 9;
}

void func_465(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_321() != -1)
	{
		return;
	}
	if ((Global_36616 && func_367(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_714(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_715(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_716(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_715(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_466(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_467(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

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
		if (func_409())
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
				if (func_220(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_432(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_161(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_717(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_719(func_718(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_468(int iParam0)
{
	if (func_90(iParam0, 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

int func_469(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_372(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_153(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_720(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_721(558))
				{
					func_722(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_470(bool bParam0)
{
	func_723();
	if (bParam0 || func_473(Global_35, 0))
	{
		func_724();
	}
	else
	{
		func_725();
	}
}

void func_471(int iParam0)
{
	uLocal_22 = (uLocal_22 || iParam0);
}

void func_472(int iParam0, int iParam1)
{
	if (func_726(&uLocal_14, iParam0, 1))
	{
		return;
	}
	iLocal_24 = iParam0;
	iLocal_25 = iParam1;
}

bool func_473(int iParam0, bool bParam1)
{
	if (func_90(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

char* func_474(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return func_496("STF", func_494(iParam1), "AGGRO_THUG", func_495(iParam2));
		case 1:
			return func_496("STF", func_494(iParam1), "DECLINE", func_495(iParam2));
		case 2:
			return "CHALLENGE_THREATEN";
		case 3:
			return "IGNORING_YOU";
		case 4:
			return "GENERIC_INSULT_HIGH_NEUTRAL";
		case 5:
			return "OPENS_FIRE";
		case 6:
			return "NO_IDEA";
		case 7:
			return "FIGHT";
		case 8:
			return func_496("STF", func_494(iParam1), "INTERVENE_RESPONSE", func_495(iParam2));
		case 9:
			return func_496("STF", func_494(iParam1), "NORMAL_DRUNK", func_495(iParam2));
		case 10:
			return func_496("STF", func_494(iParam1), "WAIT_OLD", func_495(iParam2));
		case 11:
			return func_496("STF", func_494(iParam1), "GREET_POS_RESPONSE", func_495(iParam2));
		case 12:
			return func_496("STF", func_494(iParam1), "GREET_NEG_RESPONSE", func_495(iParam2));
		case 13:
			return func_496("STF", func_494(iParam1), "GREET_POS_RESPONSE", func_495(iParam2));
		case 14:
			return func_496("STF", func_494(iParam1), "GREET_NEG_RESPONSE", func_495(iParam2));
		case 15:
			return "DEFUSE_RESPONSE";
		case 16:
			return func_496("STF", func_494(iParam1), "AGGRO_THUG", func_495(iParam2));
		default:
			break;
	}
	return "";
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 2;
		case 3:
			return 2;
		case 4:
			return 0;
		case 5:
			return 2;
		case 6:
			return 0;
		case 7:
			return 3;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 0;
		default:
			break;
	}
	return -1;
}

void func_476(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 3:
					if (bParam3)
					{
						func_388(uParam2[0 /*17*/], func_387(7), "RE_STF_VAL_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						func_388(uParam2[1 /*17*/], func_387(10), "RE_STF_VAL_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_389(0, 5);
					}
					else
					{
						func_388(uParam2[0 /*17*/], func_387(7), "RE_STF_VAL_V5_GREET_POS_IN", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						func_388(uParam2[1 /*17*/], func_387(10), "RE_STF_VAL_V5_GREET_NEG_IN", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_389(0, 4);
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 2:
				case 3:
					if (bParam3)
					{
						func_388(uParam2[0 /*17*/], func_387(7), "RE_STF_VHT_V5_GREET_POS_OUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						func_388(uParam2[1 /*17*/], func_387(10), "RE_STF_VHT_V5_GREET_NEG_OUT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_389(0, 5);
					}
					else
					{
						func_388(uParam2[0 /*17*/], func_387(7), "RE_STF_VHT_V5_GREET_POS_IN", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						func_388(uParam2[1 /*17*/], func_387(10), "RE_STF_VHT_V5_GREET_NEG_IN", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_389(0, 4);
					}
					break;
			}
			break;
	}
}

void func_477(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 9)
	{
		func_388(uParam2[0 /*17*/], func_387(7), "RE_STF_VAL_V6_GREET_POS_UNCLE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_388(uParam2[1 /*17*/], func_387(10), "RE_STF_VAL_V6_GREET_NEG_UNCLE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	else
	{
		func_388(uParam2[0 /*17*/], func_387(7), "RE_STF_BLW_V6_GREET_POS_UNCLE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_388(uParam2[1 /*17*/], func_387(10), "RE_STF_BLW_V6_GREET_NEG_UNCLE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	func_390(uParam1, 0);
	func_389(1, 2);
}

void func_478(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_507(&iVar0);
}

bool func_479(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_480(var uParam0, var uParam1)
{
	func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_390(uParam0, 0);
	func_389(1, 6);
}

void func_481(vector3 vParam0)
{
	func_727(1891783641, vParam0, 1);
}

void func_482(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	switch (iParam2)
	{
		case 9:
			iVar0 = func_489(1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
		case 10:
			iVar0 = func_489(1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
		case 4:
			iVar0 = func_489(508);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
	}
	func_732(uParam0, func_728(iParam1), "", func_729(iParam1, iParam2, iParam3), 0, func_730(iParam1), func_731(iParam2), func_731(iParam2), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0);
}

void func_483(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!func_90(iParam1, 0, 1) || !func_90(iParam2, 0, 1))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	vVar6 = { func_733(vVar0, vVar3) };
	uParam0->f_25 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vVar6, 0f, 0f, 0f, 0.5f, 0.5f, 1f);
}

bool func_484(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_50);
	if ((fVar0 < fParam1 && fVar0 > fParam0) && MISC::GET_DISTANCE_BETWEEN_COORDS(func_502(Global_35, 1065353216 /* Float: 1f */), Local_344.f_51, true) < fParam2)
	{
		return true;
	}
	return false;
}

void func_485(int iParam0, int iParam1)
{
	if (!func_90(uLocal_178[iParam0], 0, 1))
	{
		return;
	}
	if (!func_90(uLocal_178[iParam1], 0, 1))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iParam1], 174, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_178[iParam1], 213, true);
	PED::_0x789DABD18E9024DB(uLocal_178[iParam0], 29, 0);
	func_734();
	PED::SET_PED_USING_ACTION_MODE(uLocal_178[iParam0], true, 8000, 0);
	PED::_0x630E7B01F091A197(uLocal_178[iParam0], joaat("GS_FACE_TO_FACE"));
	PED::_0x630E7B01F091A197(uLocal_178[iParam1], joaat("GS_FACE_TO_FACE"));
	TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(uLocal_178[iParam0], uLocal_178[iParam1], 0, 0, 0.2f, 0, 0);
	PED::FORCE_PED_MOTION_STATE(uLocal_178[iParam0], 1926482157, false, 0, false);
	PED::FORCE_PED_MOTION_STATE(uLocal_178[iParam1], 1926482157, false, 0, false);
	iLocal_183 = iParam0;
	iLocal_184 = iParam1;
	func_161(&uLocal_150);
	func_161(&uLocal_147);
}

float func_486(vector3 vParam0, int iParam3)
{
	return func_257(Global_35, vParam0, iParam3);
}

bool func_487(int iParam0, float fParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && func_735(Global_35, iParam0, 0, fParam1, bParam2))
	{
		return true;
	}
	return false;
}

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_319(iParam0, iParam1);
	iVar1 = func_320(111, iVar0);
	iVar1++;
	func_736(111, iVar0, iVar1);
}

int func_489(int iParam0)
{
	int iVar0;

	iVar0 = func_737(iParam0);
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

void func_490(int iParam0)
{
	iLocal_565 = iParam0;
}

bool func_491(float fParam0, float fParam1)
{
	if (func_162(&uLocal_147) > fParam0)
	{
		return true;
	}
	if (func_220(uLocal_178[0], 0, 1) < fParam1)
	{
		return true;
	}
	return false;
}

void func_492(int iParam0)
{
	if (!func_90(iParam0, 0, 1))
	{
		return;
	}
	PED::_0x8301D87B1B89E219(iParam0, joaat("ACT_GRAPPLE_ATTACK"));
	PED::_0x789DABD18E9024DB(iParam0, 32, 0);
}

void func_493(var uParam0, var uParam1, int iParam2)
{
	func_389(iParam2, 1);
	func_388(uParam1[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_388(uParam1[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_738(uParam1[0 /*17*/], 0, 0);
	func_738(uParam1[1 /*17*/], 0, 0);
}

char* func_494(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "VAL";
		case 10:
			return "VHT";
		case 4:
			return "BLW";
		default:
			break;
	}
	return "INVALID";
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 6;
		default:
			break;
	}
	return -1;
}

var func_496(char* sParam0, char* sParam1, char* sParam2, int iParam3)
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
	return func_739(cVar0);
}

bool func_497()
{
	if (func_321() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_498(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 9:
			func_388(uParam2[0 /*17*/], func_387(4), "RE_STF_VAL_V1_PLAYER_ACCEPT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_388(uParam2[1 /*17*/], func_387(6), "RE_STF_VAL_V1_PLAYER_DECLINE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
		case 10:
			func_388(uParam2[0 /*17*/], func_387(4), "RE_STF_VHT_V1_PLAYER_ACCEPT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_388(uParam2[1 /*17*/], func_387(6), "RE_STF_VHT_V1_PLAYER_DECLINE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
		default:
			func_388(uParam2[0 /*17*/], func_387(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_388(uParam2[1 /*17*/], func_387(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
	}
	func_390(uParam1, 0);
	func_389(0, 3);
}

bool func_499(float fParam0)
{
	if (func_740(1))
	{
		return true;
	}
	if (func_41(&uLocal_0) && !func_200(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

float func_500()
{
	switch (iLocal_899)
	{
		case 10:
			switch (iLocal_214)
			{
				case 0:
					return 10f;
				case 1:
					return 10f;
				case 3:
					return 10f;
				default:
					break;
			}
			return 10f;
		default:
			switch (iLocal_214)
			{
				case 0:
					return 10f;
				case 1:
					return 10f;
				case 3:
					return 10f;
				case 4:
					return 10f;
				default:
					break;
			}
			return 10f;
	}
	return 20f;
}

int func_501(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;

	func_563(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (func_564(uParam1, iParam5))
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
	if (func_741(uParam0, fParam2, 1114636288 /* Float: 60f */, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264 /* Float: 150f */, bParam14, 1))
	{
		return 1;
	}
	return 0;
}

Vector3 func_502(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	func_742(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

bool func_503(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

Vector3 func_504(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return -240.9722f, 770.5749f, 117.085f;
						case 1:
							return -240.4874f, 769.4385f, 117.085f;
						case 2:
							return -240.1775f, 768.6014f, 117.085f;
						default:
							break;
					}
					return -240.9722f, 770.5749f, 117.085f;
				default:
					switch (iParam2)
					{
						case 0:
							return -311.4769f, 805.1859f, 117.9799f;
						case 1:
							return -311.6861f, 806.213f, 117.9799f;
						case 2:
							return -311.8987f, 807.0702f, 117.98f;
						default:
							break;
					}
					return -311.4769f, 805.1859f, 117.9799f;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 0:
					return 2947.972f, 526.3637f, 44.34212f;
				case 1:
					return 2945.712f, 528.1676f, 44.33343f;
				case 2:
					return 2948.965f, 526.3848f, 44.34282f;
				default:
					break;
			}
			return 2947.972f, 526.3637f, 44.34212f;
		case 4:
			return -815.7969f, -1318.883f, 42.67896f;
	}
	return 0f, 0f, 0f;
}

char* func_505(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam2)
			{
				case 0:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				case 1:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				case 2:
					return "WORLD_HUMAN_BARCUSTOMER";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				case 1:
					return "WORLD_HUMAN_DRINKING";
				case 2:
					return "WORLD_HUMAN_SMOKE_CIGAR";
				default:
					break;
			}
			break;
		default:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_BARCUSTOMER_BEER";
				default:
					break;
			}
			return "WORLD_HUMAN_BARCUSTOMER_BEER";
	}
	return "WORLD_HUMAN_BARCUSTOMER_BEER";
}

float func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.5987f;
		case 1:
			return 0.6171f;
		case 2:
			return 0.6024f;
		default:
			break;
	}
	return 1f;
}

void func_507(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_508(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	if ((!func_90(iParam1, 0, 1) || !func_185(iParam0)) || !func_201(iParam0, func_110(4)))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, 633058162))
	{
	}
	fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0);
	switch (iParam2)
	{
		case 0:
			if (func_743(fVar0, 0.1913f, 0.455f))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iParam0, func_110(4), true);
				return true;
			}
			break;
		case 1:
			if (func_743(fVar0, 0.2379f, 0.4888f))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iParam0, func_110(4), true);
				return true;
			}
			break;
		case 2:
			if (func_743(fVar0, 0.2073f, 0.465f))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iParam0, func_110(4), true);
				return true;
			}
			break;
	}
	return false;
}

bool func_509(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_510(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_state", iParam1);
}

void func_511(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_behavior", iParam1);
}

void func_512(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_target", iParam1);
}

bool func_513(int iParam0)
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

int func_514(int iParam0)
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

int func_515(int iParam0)
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

int func_516(int iParam0)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam0, "pedRoam_flags"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "pedRoam_flags");
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_517(int iParam0, vector3 vParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_targetCoord", func_744(vParam1));
	DECORATOR::DECOR_SET_FLOAT(iParam0, "pedRoam_targetCoord_Z", vParam1.z);
}

char* func_518(char* sParam0)
{
	return sParam0;
}

void func_519(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_288(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_390(iParam0, 0);
		}
	}
}

void func_520(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_745(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_347(iParam0, 1, 0);
		}
	}
	func_347(iParam0, 16, bParam1);
}

void func_521(int iParam0)
{
	func_347(iParam0, 8, 0);
}

int func_522(int iParam0, bool bParam1)
{
	if (!func_272(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_746(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_523(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_272(iParam0))
	{
		iVar1 = func_575(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_747(iParam0);
		}
	}
	if (func_334(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_575(iParam0), 137, true);
	}
}

void func_524(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_575(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_575(iParam0), 204, false);
	}
}

void func_525(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_272(iParam0))
	{
		return;
	}
	if (func_117(iParam0))
	{
		if (!func_72(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_334(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_522(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_575(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_748(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(iVar1, true)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_336(iParam0, 2, 1);
	}
	else
	{
		func_749(iParam0);
		func_336(iParam0, 1, 1);
	}
}

void func_526(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_272(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_527(int iParam0)
{
	if (!func_272(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_528(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_331(iParam1))
	{
		return;
	}
	iVar0 = func_527(iParam1);
	if (func_750(iParam1))
	{
		if (!func_598(iParam1))
		{
			return;
		}
	}
	func_335(iParam1, 39, 1);
	func_333(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_333(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_333(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_336(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_751(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_529(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_530(int iParam0)
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

void func_531(int* iParam0)
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

void func_532(int iParam0)
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

void func_533(var uParam0)
{
	if (func_287(uParam0->f_162))
	{
		func_288(&(uParam0->f_162), 1, 1);
	}
	if (func_287(uParam0->f_163))
	{
		func_288(&(uParam0->f_163), 1, 1);
	}
	if (func_287(uParam0->f_164))
	{
		func_288(&(uParam0->f_164), 1, 1);
	}
	if (func_287(uParam0->f_165))
	{
		func_288(&(uParam0->f_165), 1, 1);
	}
}

void func_534(var uParam0)
{
	if (uParam0->f_170)
	{
		func_752();
	}
}

void func_535(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_753(32);
		func_539(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_536(var uParam0)
{
	if (func_754(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_755(uParam0->f_3);
		func_404(uParam0, 0, 1);
		func_756(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_757(0, 0);
		return true;
	}
	return false;
}

void func_537()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_538(int iParam0)
{
	if (!func_315(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_539(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_396(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_321() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

int func_540(int iParam0)
{
	return iParam0;
}

void func_541(int iParam0)
{
	if (!func_758(iParam0))
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

bool func_542(int iParam0)
{
	return iParam0 != 0;
}

int func_543(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_759(&iVar1, -2147483648);
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

int func_544()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_545(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_321() != -1)
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

bool func_546(int iParam0)
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

int func_547(int iParam0)
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

int func_548(int iParam0)
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

bool func_549(int iParam0, int iParam1, var uParam2)
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

Vector3 func_550(int iParam0, var uParam1)
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
			if (!func_126(*(uParam1[iVar0 /*3*/])))
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

void func_551(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(-1702907713, *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_58("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_552(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_553(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_126(vParam0))
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
		if (func_424(vParam0))
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
	func_760(iVar0, bParam8);
	return iVar0;
}

void func_554(int iParam0)
{
	if (!func_315(iParam0))
	{
		return;
	}
	func_761(iParam0);
}

void func_555(var uParam0, vector3 vParam1)
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

int func_556(int iParam0)
{
	if (func_170(iParam0, 2))
	{
		return 200;
	}
	if (func_170(iParam0, 4))
	{
		return 70;
	}
	if (func_170(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_557(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_102(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_6() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_102(iParam0, 2);
		bVar1 = func_102(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_409())
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

void func_558(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_170(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_559(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_170(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_170(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_560(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_548(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_561(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_126(vParam1))
	{
		return false;
	}
	if (func_566(iParam0, vParam1))
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
	if (func_164(iParam0))
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

bool func_562(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_563(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	float fVar0;

	fVar0 = func_281(bParam6, fParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_569(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_454();
			iParam4->f_2 = func_257(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_569(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_454();
		iParam4->f_2 = func_257(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_564(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_454() - *uParam0) >= iParam1;
	}
	return false;
}

int func_565(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_126(uParam0->f_12[iVar0 /*3*/]))
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

bool func_566(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_102(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_762(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_102(iParam0, 33554432))
	{
		if (func_763(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_567(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_170(iParam0, 128))
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
	if (func_102(iParam0, 1) && !func_102(iParam0, 2))
	{
		if (func_102(iParam0, 4096) || func_102(iParam0, 2048))
		{
			if (func_764(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_568(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_2(&uParam0);
	if (!func_765())
	{
		return false;
	}
	return true;
}

bool func_569(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_766(vVar0, vParam0) > func_766(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_570(int iParam0)
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

int func_571(int iParam0)
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

int func_572(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_767(iParam0, iParam1);
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

int func_573(int iParam0)
{
	if (!func_674(iParam0))
	{
		return -1;
	}
	return func_768(iParam0);
}

int func_574(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_575(int iParam0)
{
	if (!func_331(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_576(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_331(iParam0))
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
					if (func_323(Global_1835011[4 /*74*/].f_1, 1))
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
					if (func_769(iVar0, 9, 11))
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
					if (func_323(Global_1347702[63 /*49*/].f_15, 1) || func_578(Global_1347702[63 /*49*/].f_15))
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
					if (func_769(iVar0, 9, 12))
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
					if (!func_323(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_330(18, 134217728, 1))
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
					if (func_769(iVar0, 9, 11))
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
					if (func_323(Global_1347702[134 /*49*/].f_15, 1) || func_578(Global_1347702[134 /*49*/].f_15))
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
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_323(Global_1835011[38 /*74*/].f_1, 1))
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
			break;
		case 5:
		case 6:
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
					if (func_769(iVar0, 9, 11))
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
			break;
		case 7:
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
					if (func_770(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_323(Global_1347702[1 /*49*/].f_15, 1))
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
			break;
		case 8:
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
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_575(iParam0)))
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
	if (!func_342(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_577(int iParam0)
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
		iVar0 = func_768(iParam0);
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

bool func_578(int iParam0)
{
	int iVar0;

	iVar0 = func_573(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_579(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_580(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_117(iParam0) || func_334(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
	{
		return false;
	}
	iVar0 = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return iVar0 == joaat("SLEEP");
}

struct<7> func_581(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_582(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_771(iVar0);
	func_336(iParam0, 60, 1);
	if (bParam1)
	{
		func_772(iParam0);
	}
}

void func_583(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_773(iVar0);
	func_335(iParam0, 60, 1);
	if (bParam1)
	{
		func_774(iParam0);
	}
}

void func_584(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_775(iVar0);
	if (iParam0 == 14)
	{
		func_776(iVar0);
	}
	func_336(iParam0, 61, 1);
	if (bParam1)
	{
		func_777(iParam0);
	}
}

void func_585(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_778(iVar0);
	func_335(iParam0, 61, 1);
	if (bParam1)
	{
		func_779(iParam0);
	}
}

bool func_586(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_331(iParam0))
	{
		return false;
	}
	func_780(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_587(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_588(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return joaat("META_OUTFIT_WARM_WEATHER");
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_781(296923297, iParam1);
			return func_782(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_781(1237718549, iParam1);
			return func_782(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	}
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_589(int iParam0, int iParam1)
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

bool func_590(int iParam0, int iParam1)
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

bool func_591(int iParam0, int iParam1)
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
	if (!func_589(iParam0, iVar0))
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

void func_592(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_593(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_589(iParam1, 860729266))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_589(iParam1, 879715242))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_589(iParam1, 1606325429))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_589(iParam1, 1743550585))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_589(iParam1, 1064646155))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_589(iParam1, -536694793))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_589(iParam1, -1304053509))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_589(iParam1, 718939204))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_589(iParam1, -972364774))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_589(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_589(iParam1, 1153596794))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_589(iParam1, 1016389820))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_589(iParam1, -726966617))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_589(iParam1, 1365901568))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_589(iParam1, -1658942149))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_589(iParam1, -1980913856))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_589(iParam1, 491764525))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_589(iParam1, -76015264))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_589(iParam1, 622113465))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_589(iParam1, 781533162))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_589(iParam1, -271415321))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_589(iParam1, -1683207356))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_589(iParam1, -254794762))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_589(iParam1, 609066278))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_589(iParam1, -1712783565))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_589(iParam1, 1544915253))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

void func_594(int iParam0)
{
	func_783(iParam0, 1);
	func_783(iParam0, 128);
	func_783(iParam0, 256);
	func_783(iParam0, 512);
	func_783(iParam0, 1024);
	func_783(iParam0, 2048);
	func_783(iParam0, 4096);
	func_783(iParam0, 65536);
	func_783(iParam0, 16384);
	func_783(iParam0, 262144);
	func_783(iParam0, 524288);
	func_783(iParam0, 1048576);
	func_783(iParam0, 2097152);
	func_783(iParam0, 32768);
	func_783(iParam0, 131072);
	func_783(iParam0, 134217728);
	func_783(iParam0, 1073741824 /* Float: 2f */);
}

void func_595(int iParam0, bool bParam1)
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

void func_596(var uParam0, int iParam1, bool bParam2)
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

int func_597(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_657(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_657(iVar4) && iVar4 != iVar0)
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
	if (func_321() == -1 && !func_784(iVar0))
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
				if (func_784(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_657(iVar0))
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
		func_785(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_786(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_787(iVar0))
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

bool func_598(int iParam0)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_599(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_788(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

int func_600(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;

	if (!func_331(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = func_789(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (func_292(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_790(iParam0, 3);
			}
			else
			{
				if (!func_791(iParam0) && func_792(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(func_599(iParam0, 1), &uVar4);
				}
				func_333(iParam0, 256, 0);
				func_790(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return func_793();
				}
				if (bParam2 && !func_126(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_794(iParam0, vVar0, iParam6, iParam10))
				{
					return func_793();
				}
				if (func_292(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					func_790(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_292(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_790(iParam0, 1);
				return func_793();
			}
			if (!bParam9 || PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/].f_124))
			{
				func_790(iParam0, 3);
			}
			break;
		case 3:
			if (!func_292(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_790(iParam0, 1);
				return func_793();
			}
			if (bParam7)
			{
				if (!func_119(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return func_793();
				}
			}
			if ((bParam2 && !func_126(vVar0)) && !func_562(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_140(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (func_334(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_336(iParam0, 39, 1);
				func_333(iParam0, 8, 1);
				func_333(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			func_795(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = func_796(iParam0, func_497());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(func_599(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			func_335(iParam0, 40, 0);
			func_333(iParam0, 32, 0);
			func_790(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return func_793();
}

void func_601(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.1f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}

void func_602(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_272(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_797(func_527(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_772(iParam0);
	}
	else
	{
		func_774(iParam0);
	}
	if (bParam2)
	{
		func_777(iParam0);
	}
	else
	{
		func_779(iParam0);
	}
}

Vector3 func_603(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, bParam3, vParam4);
}

float func_604(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_798((fParam0 + fParam1));
}

int func_605(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_799(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_800(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, true, true, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_801(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_801(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_370(iVar0))
		{
			func_609(iVar0, &(uParam1->f_23), 0);
		}
		if (func_370(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_802(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_803(&(uParam1->f_22)));
			func_180(iVar0, func_804(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_805(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_806(&(uParam1->f_22)))
		{
			func_807(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_808(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_179(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_370(iVar0))
		{
			func_810(iVar0, !func_809(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_811(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_812(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_812(&(uParam1->f_22)));
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

bool func_606(int iParam0, int iParam1)
{
	if (func_813(iParam0) != -1)
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

bool func_607(var uParam0)
{
	return func_179(*uParam0, 32);
}

int func_608(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_609(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_90(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_610(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_611(int iParam0)
{
	vector3 vVar0;

	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_612(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_362(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_814(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_815("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_816(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_657(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_817(iVar1);
				return true;
			}
			iVar3++;
		}
		func_817(iVar1);
	}
	return false;
}

int func_613(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_611(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_814(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_818(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_819(bParam2), iParam0, 0);
	return iVar2;
}

bool func_614(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_820((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_615(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_632(uParam0[iVar0 /*17*/]))
		{
			func_821(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_616(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_822(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_287((uParam2[iVar0 /*17*/])->f_6))
		{
			func_821(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_617(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_530(*uParam0);
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

int func_618(var uParam0, int iParam1)
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

void func_619(int* iParam0, int* iParam1)
{
	if (!func_376(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_821(iParam1, 19);
			func_634(iParam0, 23);
			func_823(iParam1, 2);
		}
	}
}

bool func_620(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_824(16))
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
					func_825(16);
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

void func_621(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_822(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_622(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_623(int iParam0)
{
	return (func_826(iParam0, 4) || func_826(iParam0, 5));
}

int func_624(int iParam0)
{
	return func_826(iParam0, 7);
}

int func_625(int iParam0)
{
	return func_826(iParam0, 6);
}

void func_626(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_632(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_822(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_627(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_827(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_828(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_638(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_638(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_829(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_628(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_830(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_831(iParam1, 1))
	{
		func_832(iParam1, 1);
		return true;
	}
	return false;
}

void func_629(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_738(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_630(int* iParam0, float fParam1, bool bParam2)
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

void func_631(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_632(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_633(int iParam0)
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

void func_634(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_635(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_636(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_637(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_638(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (bParam1)
	{
		func_833(iParam0, 4);
		func_834(iVar0, 1);
		func_835(iVar0, 1);
	}
	else
	{
		func_836(iParam0, 4);
		func_835(iVar0, 0);
	}
}

void func_639(int* iParam0, char* sParam1)
{
	if (func_287(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_637(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_837(iParam0, 1);
}

void func_640(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_641(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_642(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_838(1);
	}
	else
	{
		iVar0 = func_839(iParam0);
	}
	return iVar0;
}

void func_643(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_840(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_841(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

void func_644(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_170(iParam0, 8192))
	{
		iVar0 = func_841(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_645(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_539(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_646(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_102(iParam0, 262144))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_842(262144, iVar0, 0, 1);
		}
	}
	if (func_102(iParam0, 128))
	{
		func_842(128, iVar0, 0, 1);
	}
	else if (func_102(iParam0, 524288))
	{
		func_842(524288, iVar0, 0, 1);
	}
	else if (func_102(iParam0, 536870912))
	{
		func_842(536870912, iVar0, 0, 1);
	}
	else if (func_102(iParam0, 4194304))
	{
		func_842(4194304, iVar0, 0, 1);
	}
	else if (func_102(iParam0, 8388608))
	{
		func_842(8388608, iVar0, 0, 1);
	}
}

void func_647(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_648(bool bParam0)
{
	if (!bParam0 && func_843(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_649()
{
	return Global_1310750.f_16037;
}

bool func_650(int iParam0)
{
	if (!func_315(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_651(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_315(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_844(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_652(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_845(&Global_1393447, 1);
	func_846();
	func_847();
	func_848((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_454() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		func_849();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_842(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_842(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_842(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_850(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_851(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_851((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_653(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_654(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 = (Global_1392050[iParam1 /*14*/].f_1 - (Global_1392050[iParam1 /*14*/].f_1 && iParam0));
}

void func_655(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_656(int iParam0)
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

bool func_657(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_658()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_659(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_660(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_659(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_393() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_661()
{
	return Global_1899515;
}

int func_662(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_663(int iParam0)
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

bool func_664(int iParam0)
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

bool func_665(int iParam0)
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

bool func_666(int iParam0)
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

bool func_667(int iParam0)
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

bool func_668(int iParam0)
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

bool func_669(int iParam0)
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

bool func_670(bool bParam0, int iParam1, int iParam2)
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

bool func_671()
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

int func_672(int iParam0)
{
	if (!func_674(iParam0))
	{
		return -1;
	}
	return func_853(func_852(iParam0));
}

bool func_673(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_674(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_675(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_676(int iParam0)
{
	return func_102(iParam0, Global_1310750.f_16072 | 64);
}

bool func_677(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_678(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

bool func_679(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_680(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_854();
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
			func_855(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_681(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_682(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_321() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_856(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_856(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_707(iVar0) == -1)
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

void func_683(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_857(iParam0);
	}
}

bool func_684(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_707(iParam2);
	}
	else
	{
		iVar1 = func_706(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_707(iParam0);
	}
	else
	{
		iVar0 = func_706(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_3(*iParam1, 8388608))
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

float func_685(int iParam0)
{
	return iParam0->f_26;
}

bool func_686(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_687(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_169(iParam0, 134217728);
	}
	else
	{
		func_270(iParam0, 134217728);
	}
}

float func_688(int iParam0)
{
	return iParam0->f_17;
}

bool func_689(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_3(*iParam0, 4194304))
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

int func_690(int iParam0)
{
	return iParam0->f_18;
}

bool func_691(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_433(iVar0, 0)))
		{
			if (func_679(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_692(int iParam0)
{
	return iParam0->f_23;
}

int func_693(int iParam0)
{
	return iParam0->f_21;
}

int func_694(int iParam0)
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

bool func_695(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_509(iParam0, vParam4, 0.5f))
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

int func_696(int iParam0)
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
	if (func_858(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_697(int iParam0)
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

bool func_698(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_415(iParam1))
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

bool func_699(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_415(iParam1))
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

bool func_700(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_415(iParam1))
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

bool func_701(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
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

bool func_702(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_859(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_703(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_704(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_257(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_705(int iParam0)
{
	return iParam0->f_24;
}

int func_706(int iParam0)
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

int func_707(int iParam0)
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

int func_708(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_701(Global_35, &iVar1))
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
		fVar2 = func_432(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_432(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_709(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_670(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_710(iParam1, iVar0))
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
				if (!bParam2 || !func_710(iParam1, iVar1))
				{
					if (func_257(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_710(int iParam0, int iParam1)
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

bool func_711(int iParam0)
{
	if (func_497())
	{
		return false;
	}
	return func_323(Global_1347702[58 /*49*/].f_15, 1);
}

int func_712(int iParam0)
{
	return iParam0->f_20;
}

int func_713(int iParam0, int iParam1, bool bParam2, float fParam3)
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

int func_714(int iParam0)
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

void func_715(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_860();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_861(iParam0);
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
	if (func_862(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_497())
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
	Global_40.f_11095.f_35 = func_863(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_860();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_864(iVar1);
		func_866(func_865(), 0, 4000);
		func_867(Global_40.f_11095.f_35);
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
		func_868(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_870(func_869(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_714(14))
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
					sParam4 = func_871(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_872(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_872(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_870(func_869(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_714(4))
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
					sParam4 = func_871(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_872(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_872(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_869(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_873(10, 1);
	}
}

void func_716(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_717(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_718(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_874(iParam0, &Var0);
}

int func_719(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_720(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_875(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_189(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_321() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_722(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_876(iParam0, &iVar0, &iVar1);
	if (!func_877(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_878(iVar0, iVar1);
}

void func_723()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar3 = iVar1;
			switch (iVar2)
			{
				case 0:
					switch (iVar3)
					{
						case 0:
							switch (iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = ((!func_250(1) && !func_250(2)) && iLocal_564 == 0);
											break;
										case 1:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										case 4:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										case 2:
											bVar4 = ((!func_250(1) && !func_250(2)) && iLocal_564 == 0);
											break;
										case 3:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									switch (iLocal_214)
									{
										case 0:
										case 1:
										case 2:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = false;
											break;
										case 4:
											bVar4 = (!func_250(1024) && !func_473(uLocal_178[0], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 3:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = !func_250(4);
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 4:
								case 5:
									switch (iLocal_214)
									{
										case 3:
											bVar4 = (!func_250(256) && !func_473(uLocal_178[0], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						case 1:
							switch (iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = (!func_250(2) && iLocal_564 == 0);
											break;
										case 1:
											bVar4 = !func_250(2);
											break;
										case 4:
											bVar4 = !func_250(2);
											break;
										case 2:
											bVar4 = !func_250(2);
											break;
										case 3:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									switch (iLocal_214)
									{
										case 0:
										case 1:
										case 2:
											bVar4 = false;
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = (!func_250(32) && !func_473(uLocal_178[0], 0));
											break;
										case 4:
											bVar4 = (!func_250(2048) && !func_473(uLocal_178[0], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 3:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = !func_250(4);
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 4:
								case 5:
									switch (iLocal_214)
									{
										case 3:
											bVar4 = (!func_250(512) && !func_473(uLocal_178[0], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						default:
							bVar4 = false;
							break;
					}
					break;
				case 1:
					switch (iVar3)
					{
						case 0:
							switch (iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = ((!func_250(1) && !func_250(2)) && iLocal_564 == 0);
											break;
										case 1:
										case 4:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										case 2:
											bVar4 = (!func_250(1) && !func_250(2));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 1:
											bVar4 = false;
											break;
										case 2:
											bVar4 = false;
											break;
										case 4:
											bVar4 = ((!func_250(8) && bLocal_44) && !func_473(uLocal_178[1], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									bVar4 = false;
									break;
								case 6:
									bVar4 = false;
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						case 1:
							switch (iLocal_17[iVar2])
							{
								case 0:
									switch (iLocal_214)
									{
										case 0:
											bVar4 = (!func_250(2) && iLocal_564 == 0);
											break;
										case 1:
										case 4:
											bVar4 = !func_250(2);
											break;
										case 2:
											bVar4 = (!func_250(2) && iLocal_564 != 0);
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 2:
									switch (iLocal_214)
									{
										case 1:
											bVar4 = (!func_250(64) && !func_473(uLocal_178[1], 0));
											break;
										case 2:
											bVar4 = ((!func_250(64) || !func_250(128)) && !func_473(uLocal_178[1], 0));
											break;
										case 4:
											bVar4 = ((!func_250(16) && bLocal_44) && !func_473(uLocal_178[1], 0));
											break;
										default:
											bVar4 = false;
											break;
									}
									break;
								case 1:
									bVar4 = false;
									break;
								case 6:
									bVar4 = false;
									break;
								default:
									bVar4 = false;
									break;
							}
							break;
						default:
							bVar4 = false;
							break;
					}
					break;
				default:
					bVar4 = false;
					break;
			}
			func_879(iVar2, iVar3, bVar4);
			iVar1++;
		}
		iVar0++;
	}
}

void func_724()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			switch (iVar2)
			{
				case 0:
					func_738(&(Local_708[iVar1 /*17*/]), 0, 0);
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						func_738(&(Local_778[iVar1 /*17*/]), 0, 0);
					}
					else
					{
						func_738(&(Local_743[iVar1 /*17*/]), 0, 0);
					}
					break;
				case 2:
					func_738(&(Local_813[iVar1 /*17*/]), 0, 0);
					break;
				case 3:
					func_738(&(Local_848[iVar1 /*17*/]), 0, 0);
					break;
				default:
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_725()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = iVar0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			switch (iVar2)
			{
				case 0:
					if (func_880(&(Local_708[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
					{
						func_738(&(Local_708[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
					}
					break;
				case 1:
					if (iLocal_214 == 4)
					{
						if (func_880(&(Local_778[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
						{
							func_738(&(Local_778[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
						}
					}
					else if (func_880(&(Local_743[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
					{
						func_738(&(Local_743[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
					}
					break;
				case 2:
					if (func_880(&(Local_813[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
					{
						func_738(&(Local_813[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
					}
					break;
				case 3:
					if (func_880(&(Local_848[iVar1 /*17*/]), 1, 0) != vLocal_27[iVar2 /*3*/][iVar1])
					{
						func_738(&(Local_848[iVar1 /*17*/]), vLocal_27[iVar2 /*3*/][iVar1], 0);
					}
					break;
				default:
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_726(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

void func_727(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::TRIGGER_SONAR_BLIP(iParam0, vParam1);
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
		case 1:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
		case 2:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
		case 3:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING");
		case 4:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
		default:
			break;
	}
	return joaat("EVENT_SHOCKING_BEAT_INTERESTING");
}

Vector3 func_729(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 2:
							return -303.4379f, 797.2956f, 117.9503f;
						case 3:
							return -303.4379f, 797.2956f, 117.9503f;
						default:
							break;
					}
					return -307.2557f, 796.936f, 117.9482f;
				case 1:
					switch (iParam0)
					{
						case 3:
							return -246.3026f, 769.0882f, 117.1506f;
						default:
							break;
					}
					return -245.3641f, 764.9188f, 117.1341f;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 3:
					return 2953.516f, 520.4395f, 44.44659f;
				default:
					break;
			}
			return 2953.575f, 523.8731f, 44.47325f;
		case 4:
			return -809.8254f, -1329.847f, 42.65924f;
	}
	return 0f, 0f, 0f;
}

float func_730(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return -1f;
		case 2:
			return -1f;
		case 3:
			return -1f;
		case 4:
			return -1f;
		default:
			break;
	}
	return -1f;
}

float func_731(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 15f;
		case 10:
			return 10f;
		case 4:
			return 10f;
		default:
			break;
	}
	return -1f;
}

void func_732(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13)
{
	struct<4> Var0;
	char cVar4[32];

	func_881(uParam0, 1);
	uParam0->f_12 = sParam2;
	uParam0->f_5 = fParam8;
	uParam0->f_6 = fParam9;
	*uParam0 = iParam1;
	uParam0->f_8 = fParam7;
	StringCopy(&cVar4, sParam2, 32);
	Var0 = { cVar4 };
	if (!func_126(vParam3))
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
	if (!func_126(vParam3))
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

Vector3 func_733(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

void func_734()
{
	if (!func_185(iLocal_50))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[0]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(0), uLocal_178[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[1]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(1), uLocal_178[1]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[2]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(2), uLocal_178[2]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_178[3]))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_50, func_143(3), uLocal_178[3]);
	}
}

bool func_735(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_248(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_882(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

void func_736(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_883(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

int func_737(int iParam0)
{
	if (!func_884(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_738(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_885(iParam0, 13))
	{
		func_821(iParam0, 0);
	}
	else
	{
		func_837(iParam0, 0);
	}
	if (func_287(iParam0->f_6))
	{
		if (bParam2)
		{
			func_288(&(iParam0->f_6), 0, 1);
		}
	}
}

var func_739(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_740(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_741(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_406(uParam0, bVar1);
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
	if (uParam0->f_178 && func_405())
	{
		bVar1 = true;
		fVar3 = func_281(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_407(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_407(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (func_408(&(uParam0->f_121), iParam4, fParam1))
		{
			func_172(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_285(uParam0->f_3, uParam0->f_185), 0);
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
						func_171(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_172(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_285(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_742(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_743(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 <= fParam2)
	{
		return true;
	}
	return false;
}

int func_744(struct<2> Param0, var uParam2)
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

bool func_745(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_746(int iParam0)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_886(iParam0);
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

void func_747(int iParam0)
{
	if (func_272(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_575(iParam0)))
		{
			func_351(iParam0, 67108864, 1);
			func_335(iParam0, 19, 1);
		}
	}
}

float func_748(int iParam0)
{
	if (!func_331(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_749(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_575(iParam0);
	iVar1 = func_522(iParam0, 0);
	func_887(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_750(int iParam0)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

int func_751(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_331(iParam0))
	{
		return 0;
	}
	iVar0 = func_527(iParam0);
	if (func_292(iVar0, 0))
	{
		if (func_292(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_750(iParam0)) || func_598(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_888(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_599(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_889(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_789(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_789(iParam0, 0));
					func_890(iParam0);
				}
			}
			else
			{
				if (func_330(iParam0, 32768, 1))
				{
					iVar2 = func_789(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_292(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_330(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_889(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_789(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_789(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_889(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_790(iParam0, 0);
	return 1;
}

void func_752()
{
	func_891(23);
}

void func_753(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 || iParam0);
}

int func_754(var uParam0)
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

void func_755(int iParam0)
{
	int iVar0;

	iVar0 = func_892(iParam0);
	if (iVar0 != 0)
	{
		func_893(-1, 24, 0, iVar0);
	}
}

void func_756(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_870(func_869(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_102(iParam0, 2))
	{
		func_894(iParam0, func_642(iParam3));
	}
	if (func_102(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_6();
		}
		func_895(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_170(iParam0, 65536))
	{
		func_896(iParam0, iParam1);
		func_897(iParam0, func_301(iParam0, iParam1));
		func_753(128);
	}
	func_645(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_646(iParam0, 1);
	if (!bParam2)
	{
		func_753(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_898(524288);
	}
	if (func_899(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_899(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_757(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_900(&Global_0, 8);
	}
	if (!func_901() || func_321() != -1)
	{
		return;
	}
	func_900(&Global_0, 1);
}

bool func_758(int iParam0)
{
	return func_902(iParam0, 2);
}

void func_759(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_760(int iParam0, bool bParam1)
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

void func_761(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_762(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_126(vParam0))
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

bool func_763(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_126(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_764(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_126(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_165(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_765()
{
	int iVar0;
	int iVar1;

	iVar0 = func_903(func_359());
	if (iVar0 == 8)
	{
		iVar1 = func_419(func_359());
		if (func_421(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_904(func_838(0)))
	{
		return false;
	}
	if (func_905())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_766(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_767(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_768(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_906(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_769(int iParam0, int iParam1, int iParam2)
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

bool func_770(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_907(iParam0);
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

void func_771(int iParam0)
{
	if (func_908(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false), 0);
	}
}

void func_772(int iParam0)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_771(iVar0);
	func_333(iParam0, 8192, 1);
}

void func_773(int iParam0)
{
	if (func_908(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_774(int iParam0)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_773(iVar0);
	func_333(iParam0, 8192, 0);
}

void func_775(int iParam0)
{
	if (func_908(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_776(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_117(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_777(int iParam0)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_775(iVar0);
	func_333(iParam0, 16384, 1);
}

void func_778(int iParam0)
{
	if (func_908(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_779(int iParam0)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	if (func_599(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_527(iParam0);
	func_778(iVar0);
	func_333(iParam0, 16384, 0);
}

int func_780(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_909(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_781(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			if (iParam1 != -1)
			{
				if (func_342(iParam1, iVar1))
				{
					iVar2 = iVar1;
				}
			}
			return iVar2;
		}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_783(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = (Global_40.f_4942[iParam0 /*60*/].f_5 - (Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1));
}

bool func_784(int iParam0)
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

int func_785(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

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
		Var0 = { func_910(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_911((398 + iVar28), 1);
			if (func_912(iParam0, &Var0, iVar5, 0))
			{
				if (func_913(iParam0, &Var6, iVar5))
				{
					Var29 = { func_914(iParam0, Var0, iVar5, 0) };
					func_915(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_916(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_917(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_918(iParam0, iParam1);
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

void func_786(int iParam0, int iParam1, float fParam2)
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

bool func_787(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_788(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_331(iParam0))
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
	if (!func_331(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_789(int iParam0, bool bParam1)
{
	if (!func_331(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_919(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_790(int iParam0, int iParam1)
{
	if (!func_331(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

bool func_791(int iParam0)
{
	if (!func_331(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_127)
	{
		case joaat("PERSCHAR_COMP_HORSE_COMMON_2"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_3"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_1"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_4"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_5"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_792(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return true;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
	}
	return false;
}

int func_793()
{
	return -1;
}

bool func_794(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489.f_12) || (bParam5 && Global_1359489.f_13 < 8))
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[iParam0 /*1157*/].f_126))
			{
				PERSCHAR::_0x49A8C2CD97815215(Global_1360165[iParam0 /*1157*/].f_126);
			}
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, 0);
				Global_1359489.f_13++;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x0CADC3A977997472(Global_1360165[iParam0 /*1157*/].f_126, 0);
			}
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_0xA00DF706C60173D1(func_599(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = func_801(iVar0, vParam1, bParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_0x7B204F88F6C3D287(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
		if (!func_292(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			return false;
		}
		Global_1359489.f_12 = 1;
		func_333(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

void func_795(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	func_921(iParam0, func_920(iParam1));
	if (func_118(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_575(iParam1)))
	{
		PED::SET_PED_OWNS_ANIMAL(func_575(iParam1), iParam0, false);
		PED::_0xED1C764997A86D5A(func_575(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	}
	else
	{
		func_336(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	if (func_118(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, true);
	}
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 2, false);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 3, false);
	func_602(iParam1, func_118(iParam1, 8192), func_118(iParam1, 16384), 1);
}

char* func_796(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_797(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_922(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

float func_798(float fParam0)
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

int func_799(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_923(&uParam1))
	{
		return 1;
	}
	if (!func_924(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_800(var uParam0)
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

int func_801(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_925(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_802(var uParam0)
{
	return func_179(*uParam0, 4);
}

bool func_803(var uParam0)
{
	return func_179(*uParam0, 64);
}

bool func_804(var uParam0)
{
	return func_179(*uParam0, 8);
}

bool func_805(var uParam0)
{
	return func_179(*uParam0, 128);
}

bool func_806(var uParam0)
{
	return func_179(*uParam0, 2048);
}

void func_807(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_808(var uParam0)
{
	return func_179(*uParam0, 1024);
}

bool func_809(var uParam0)
{
	return func_179(*uParam0, 256);
}

void func_810(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_811(var uParam0)
{
	return func_179(*uParam0, 512);
}

bool func_812(var uParam0)
{
	return func_179(*uParam0, 4096);
}

int func_813(int iParam0)
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

int func_814(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_611(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_363(iParam0, 1399091007))
	{
		func_926(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_815(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_819(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_816(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_817(int iParam0)
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

int func_818(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_927(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_929(&Var0, func_928(0));
	}
	if (!func_930(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_817(iVar14);
	return iVar15;
}

int func_819(bool bParam0)
{
	if (func_321() == -1)
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

int func_820(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_821(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_822(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_287(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_288(&(iParam1->f_6), 0, 1);
	}
	if (!func_287(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_632(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_931(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_287(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_829(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_932(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_933(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_636(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_932(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_638(iParam1->f_6, 0, 1);
				}
				else
				{
					func_638(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_823(int* iParam0, int iParam1)
{
	if (!func_885(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_821(iParam0, 14);
		}
	}
}

bool func_824(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_825(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_826(int iParam0, int iParam1)
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

bool func_827(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_828(int iParam0, bool bParam1)
{
	if (bParam1 && !func_287(iParam0))
	{
		return false;
	}
	return !func_902(iParam0, 4);
}

void func_829(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_287(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	func_932(iParam0, 18, 0, 1);
	func_932(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_830(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_287(iParam0))
	{
		return false;
	}
	iVar0 = func_540(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_831(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_287(iParam0))
	{
		return false;
	}
	iVar0 = func_540(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_832(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

void func_833(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_834(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_902(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_835(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_836(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

void func_837(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_838(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_934(1, 0, 0);
	}
	else
	{
		iVar0 = func_359();
	}
	return func_839(iVar0);
}

int func_839(int iParam0)
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

int func_840(int iParam0)
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

int func_841(int iParam0, int iParam1)
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

void func_842(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_552(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_538(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_935(iVar0) < func_936(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_645(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_843(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_937(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_844(int iParam0)
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

void func_845(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_846()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_938(iVar0, 128))
		{
			func_939(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_847()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_938(iVar0, 128) && func_938(iVar0, 1))
		{
			func_939(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_848(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_849()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_102(iVar0, 16777216))
		{
			if (!func_940(iVar0))
			{
				func_941(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_850(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_539(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_539(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_539(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_539(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_539(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_539(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_539(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_851(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_393();
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

int func_852(int iParam0)
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

int func_853(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_854()
{
	if (func_942())
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
		return Global_1955569.f_992[2];
	}
	return false;
}

void func_855(var uParam0, var uParam1)
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

int func_856(int iParam0)
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

void func_857(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_270(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_169(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_858(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_859(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_860()
{
	int iVar0;

	iVar0 = func_943();
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

int func_861(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_321() != -1)
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
	fVar1 = func_281(MISC::ABSF(fVar1) < 1f, func_281(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_862(int iParam0)
{
	if (!func_944(iParam0))
	{
		return false;
	}
	return func_945(iParam0);
}

int func_863(int iParam0, int iParam1, int iParam2)
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

int func_864(int iParam0)
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

int func_865()
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

void func_866(int iParam0, bool bParam1, int iParam2)
{
	func_946((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_947(iParam0);
}

void func_867(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_948(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_868(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_949(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_950(iVar5, &iVar2, &iVar0))
			{
				if (!func_362(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_951(iVar2);
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
							if (func_611(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_860() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_860() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_952();
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

struct<2> func_869(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_870(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_871(int iParam0)
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

var func_872(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_953(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_873(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_954(iParam0))
	{
		return 0;
	}
	if (!func_901())
	{
		return 0;
	}
	if (!func_955(iParam0, &iVar0, &iVar1))
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

bool func_874(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_875(int* iParam0)
{
	if (func_376(iParam0, 0))
	{
		if (func_956(iParam0))
		{
			func_386(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_876(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_877(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_957(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_958(iParam0))
	{
		return false;
	}
	if (func_959(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_960(iParam0, 1)) || func_961(32768))
	{
		if (!func_960(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_962())
	{
		return false;
	}
	return true;
}

void func_878(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_879(int iParam0, int iParam1, bool bParam2)
{
	if (vLocal_27[iParam0 /*3*/][iParam1] == bParam2)
	{
		return;
	}
	vLocal_27[iParam0 /*3*/][iParam1] = bParam2;
}

int func_880(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_287(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_828(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_881(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	if (uParam0->f_1 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	func_74(uParam0->f_2);
	func_74(uParam0->f_3);
	uParam0->f_5 = -1f;
	uParam0->f_6 = -1f;
	uParam0->f_8 = -1f;
	uParam0->f_12 = "";
	func_161(&(uParam0->f_9));
	func_40(&(uParam0->f_9));
	*uParam0 = 0;
}

bool func_882(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_883(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_767(iParam0, iParam1);
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

bool func_884(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_885(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_886(int iParam0)
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

void func_887(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_963(iParam1);
	}
}

float func_888(int iParam0, int iParam1, bool bParam2)
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
	return func_165(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_889(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_527(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&iVar3);
		}
		iVar2++;
	}
}

void func_890(int iParam0)
{
	int iVar0;

	if (!func_331(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549.f_1675[iVar0 /*5*/].f_1 == iParam0)
		{
			Global_1357549.f_1675[iVar0 /*5*/].f_1 = -1;
			Global_1360165[iParam0 /*1157*/].f_127 = 0;
		}
		iVar0++;
	}
}

void func_891(int iParam0)
{
	int iVar0;

	if (func_321() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_292(func_575(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_575(iVar0), func_544(), 1))
			{
				func_964(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_892(int iParam0)
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

void func_893(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_965() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_965();
					}
					func_966(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_270(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_894(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_840(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_841(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_895(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_170(iParam0, 8192))
	{
		iVar0 = func_841(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_896(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_548(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_897(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_102(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_126(vParam1))
	{
		return;
	}
	if (!func_315(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] };
		if (func_126(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_562(vVar2, vParam1, 1f, 1))
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

void func_898(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_941(iVar0, iParam0);
		iVar0++;
	}
}

int func_899(int iParam0)
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

void func_900(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_901()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_902(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_903(int iParam0)
{
	if (!func_677(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_904(int iParam0)
{
	return (Global_1310750.f_16074 && iParam0) != 0;
}

bool func_905()
{
	return Global_1894899 & 2 != 0;
}

int func_906(int iParam0)
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

bool func_907(int iParam0)
{
	int iVar0;
	int iVar1;

	func_967(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

bool func_908(int iParam0, bool bParam1)
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

int func_909(int iParam0, int iParam1)
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

struct<5> func_910(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_968(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_611(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_914(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_928(bParam1) };
			if (bParam2 && func_969(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_912(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_912(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_913(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_970(bParam1) };
			switch (func_971(iParam0))
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
			if (func_972(iParam0, -1823706425))
			{
				Var0 = { func_914(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_972(iParam0, -1483207246))
			{
				Var0 = { func_914(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_973(Var0, &Var27, bParam1, 0))
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

int func_911(int iParam0, int iParam1)
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

bool func_912(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_974(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_913(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_975(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_914(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_362(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_819(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_915(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_976(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_973(*uParam1, &Var0, bParam6, 0))
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
	if (!func_916(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_819(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_916(bool bParam0)
{
	if (func_321() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_819(bParam0));
}

int func_917(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_977(iParam0))
	{
		return 0;
	}
	if (!func_916(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_918(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_466(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_919(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_331(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_599(iParam0, 1);
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

int func_920(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_862(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_862(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_921(int iParam0, int iParam1)
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

float func_922(float fParam0, float fParam1, float fParam2)
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

bool func_923(var uParam0)
{
	return func_179(*uParam0, 1);
}

bool func_924(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_978(*uParam0, 0f, 0f, 0f))
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

void func_925(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_979(iParam1))
		{
			func_980(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_981(iParam0, 0, 1);
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
			func_982(iParam0, 0);
			bVar0 = true;
		}
		func_921(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_926(int iParam0, var uParam1, var uParam2)
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

struct<14> func_927(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_928(bool bParam0)
{
	int iVar0;

	iVar0 = func_819(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_914(923904168, func_968(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_914(923904168, func_968(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_914(923904168, func_968(bParam0), -740156546, 0);
}

void func_929(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_930(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_819(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_931(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_902(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
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
				func_983(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_932(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_933(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_287(iParam0))
	{
		return;
	}
	iVar0 = func_540(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_934(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_984(iVar2))
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

int func_935(int iParam0)
{
	if (func_315(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_936(int iParam0)
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

int func_937(int iParam0, int iParam1)
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

bool func_938(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

void func_939(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

bool func_940(int iParam0)
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

void func_941(int iParam0, int iParam1)
{
	if (!func_315(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

bool func_942()
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

int func_943()
{
	return Global_40.f_11095.f_35;
}

bool func_944(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_945(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_946(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		func_985(bParam1);
	}
}

void func_947(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_948(int iParam0)
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

bool func_949(int iParam0)
{
	vector3 vVar0;

	if (!func_986(23, &vVar0))
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

bool func_950(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_986(23, &Var0))
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

int func_951(int iParam0)
{
	return iParam0;
}

int func_952()
{
	int iVar0;

	iVar0 = func_860();
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

void func_953(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_954(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_955(int iParam0, int iParam1, int iParam2)
{
	if (!func_954(iParam0))
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

bool func_956(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_957(int iParam0, int iParam1)
{
	if (func_321() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_958(int iParam0)
{
	if (func_321() != -1)
	{
		if (func_960(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_960(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_959(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_960(iParam0, 65536) && !func_960(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_960(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_960(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_960(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_961(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_962()
{
	return Global_1905944.f_5694;
}

void func_963(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_964(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_272(iParam0))
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

int func_965()
{
	return Global_1899515;
}

void func_966(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_987(*uParam0);
	iVar1 = func_988(*uParam0);
	iVar2 = func_989(*uParam0);
	iVar3 = func_662(*uParam0);
	iVar4 = func_990(*uParam0);
	iVar5 = func_991(*uParam0);
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
	iVar6 = func_992(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_992(iVar1, iVar0);
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
	func_993(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_967(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_994(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

struct<4> func_968(bool bParam0)
{
	return func_914(joaat("CHARACTER"), func_995(), -1591664384, bParam0);
}

bool func_969(int iParam0, bool bParam1)
{
	if (func_971(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_862(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_970(bool bParam0)
{
	int iVar0;

	iVar0 = func_819(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_914(271701509, func_968(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_914(271701509, func_968(bParam0), 12999093, 0);
}

int func_971(int iParam0)
{
	struct<2> Var0;

	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_972(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_971(iParam0);
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

bool func_973(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_819(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_974(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_362(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_914(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_819(bParam6), &Var0, 0);
	return uVar4;
}

bool func_975(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_819(0);
	*uParam1 = { func_914(iParam0, func_928(0), iParam3, 0) };
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

bool func_976(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_977(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_978(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_979(int iParam0)
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

void func_980(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_589(iParam0, iParam1))
		{
			if (func_590(iParam0, iParam1))
			{
				if (func_591(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_592(iParam0);
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

void func_981(int iParam0, int iParam1, bool bParam2)
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

void func_982(int iParam0, bool bParam1)
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

void func_983(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = iParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	func_834(iParam0, 1);
	func_835(iParam0, 1);
	func_836(iParam0, 128);
}

bool func_984(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40615[iParam0 /*11*/] & 32 != 0;
}

void func_985(bool bParam0)
{
	func_996(bParam0);
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

bool func_986(int iParam0, var uParam1)
{
	if (!func_997(iParam0))
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

int func_987(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_719(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_988(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_989(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_990(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_991(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_992(int iParam0, int iParam1)
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

void func_993(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_998(uParam0, iParam6);
	func_999(uParam0, iParam5);
	func_1000(uParam0, iParam4);
	func_1001(uParam0, iParam3);
	func_1002(uParam0, iParam2);
	func_1003(uParam0, iParam1);
}

int func_994(int iParam0, int iParam1)
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

struct<4> func_995()
{
	struct<4> Var0;

	return Var0;
}

void func_996(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_997(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_998(var uParam0, int iParam1)
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

void func_999(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1000(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_988(*uParam0);
	iVar1 = func_987(*uParam0);
	if (iParam1 < 1 || iParam1 > func_992(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1001(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1002(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1003(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

