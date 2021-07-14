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
	struct<206> /*1648*/ sLocal_15 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2019245895, -430974470, -1671495534, 1080895636, 248713364, -1510839859, 1064769829, 1689938120, 0, 2, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = -1;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 2;
	var uLocal_233 = 1;
	var uLocal_234 = 1;
	var uLocal_235 = 1;
	var uLocal_236 = 0;
	var uLocal_237 = 1;
	var uLocal_238 = 2;
	var uLocal_239 = 2;
	var uLocal_240 = 3;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 3;
	var uLocal_244 = 1;
	var uLocal_245 = 3;
	var uLocal_246 = 3;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = -1;
	var uLocal_251 = 0;
	var uLocal_252 = -1;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 1073741824;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 1;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 2;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 570;
	var uLocal_274 = 1065353216;
	var uLocal_275 = -1082130432;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 2;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 570;
	var uLocal_291 = 1065353216;
	var uLocal_292 = -1082130432;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 2;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 7;
	var uLocal_317 = 3;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
#endregion

void main()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_15);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_2(&Local_15, 0, &iLocal_14);
		func_3(&Local_15, &iLocal_14);
		func_4(&Local_15, &iLocal_14);
		func_5(&Local_15, &iLocal_14);
		func_6(&Local_15);
		func_7(&Local_15);
		func_8(&Local_15);
		func_9(&Local_15);
		func_10(Local_15.f_164[0], &(Local_15.f_194), 256, 25, 0);
		func_11(&Local_15);
		func_12(&Local_15);
		if (iLocal_14 > 2)
		{
			func_13(25, 0, &(Local_15.f_164[0]), &(Local_15.f_136), &(Local_15.f_205), 0f, 25f, 1);
		}
		switch (iLocal_14)
		{
			case 0:
				func_14(&Local_15, &iLocal_14);
				break;
			case 1:
				if (func_15(&Local_15))
				{
					func_16(&iLocal_14, 2);
				}
				break;
			case 2:
				func_17(&Local_15, &iLocal_14);
				break;
			case 3:
				func_18(&Local_15, &iLocal_14, Local_15.f_188);
				break;
			case 4:
				if (func_20(&Local_15, &(Local_15.f_189), func_19(12), 0, 0, 1))
				{
					func_16(&iLocal_14, 9);
				}
				break;
			case 5:
				if (func_20(&Local_15, &(Local_15.f_189), func_19(13), 0, 0, 1))
				{
					func_16(&iLocal_14, 9);
				}
				break;
			case 6:
				if (func_20(&Local_15, &(Local_15.f_189), func_19(87), 0, 0, 1))
				{
					Local_15.f_196 = 2;
					func_16(&iLocal_14, 11);
				}
				break;
			case 7:
				if (func_20(&Local_15, &(Local_15.f_189), func_19(83), 0, 0, 1))
				{
					Local_15.f_196 = 2;
					func_16(&iLocal_14, 11);
				}
				break;
			case 8:
				if (func_20(&Local_15, &(Local_15.f_189), func_21(9), 0, 0, 1))
				{
					func_16(&iLocal_14, 9);
				}
				break;
			case 9:
				func_22(&Local_15, &iLocal_14);
				break;
			case 10:
				func_23(&Local_15, &iLocal_14);
				break;
			case 11:
				func_24(&Local_15, &iLocal_14);
				break;
			case 12:
				func_25(&Local_15, &iLocal_14);
				break;
			case 13:
				func_26(&Local_15, &iLocal_14);
				break;
			case 14:
				func_27(&Local_15, &iLocal_14);
				break;
			case 15:
				func_28(&Local_15, &iLocal_14);
				break;
			case 16:
				break;
			case 32:
				func_29(&Local_15, &iLocal_14);
				break;
			case 33:
				func_30(&Local_15, &iLocal_14);
				break;
			case 34:
				func_31(&Local_15, &iLocal_14);
				break;
			case 35:
				func_32(&Local_15, &iLocal_14);
				break;
			case 36:
				func_33(&Local_15, &iLocal_14);
				break;
			case 37:
				func_34(&Local_15, &iLocal_14);
				break;
			case 38:
				func_35(&Local_15, &iLocal_14);
				break;
			case 25:
				func_36(&Local_15, &iLocal_14);
				break;
			case 27:
				func_37(&Local_15, &iLocal_14);
				break;
			case 28:
				func_38(&Local_15, &iLocal_14);
				break;
			case 29:
				func_39(&Local_15, &iLocal_14);
				break;
			case 26:
				func_40(&Local_15, &iLocal_14);
				break;
			case 31:
				func_41(&Local_15, &iLocal_14);
				break;
			case 39:
				func_42(&Local_15);
				break;
			case 20:
				func_43(&Local_15, &iLocal_14);
				break;
			case 22:
				func_44(&Local_15, &iLocal_14);
				break;
			case 21:
				func_45(&Local_15, &iLocal_14);
				break;
			case 24:
				func_46(&Local_15, &iLocal_14);
				break;
			case 23:
				func_47(&Local_15, &iLocal_14);
				break;
			case 30:
				func_48(&Local_15, &iLocal_14);
				break;
			case 17:
				break;
			default:
				break;
		}
		func_49(&Local_15, &iLocal_14);
	}
}

void func_1(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 336, false);
	func_50(25);
	func_51(&(uParam0->f_304));
	if (func_52(uParam0->f_154) && (func_53(uParam0->f_154) || func_54(uParam0->f_154)))
	{
		func_55(uParam0->f_154, 0, 2);
	}
	if (uParam0->f_188 <= 4 && OBJECT::IS_DOOR_CLOSED(862008394))
	{
		if (uParam0->f_206)
		{
			func_56(-349384993, 1, 0, 1);
			func_56(862008394, 1, 0, 1);
		}
		else
		{
			func_56(-349384993, 1, 1, 0);
			func_56(862008394, 1, 1, 0);
		}
	}
	else
	{
		func_56(-349384993, 0, 1, 0);
		func_56(862008394, 0, 1, 0);
	}
	func_57(25, 32768);
	func_58(&(uParam0->f_174));
	func_59(&(uParam0->f_164[0]), &(uParam0->f_202), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20f, 1);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
	if (AUDIO::_0x580D71DFE0088E34("FADEOUT_1", "PDSWO_Sounds"))
	{
		AUDIO::_STOP_SOUND_WITH_NAME("FADEOUT_1", "PDSWO_Sounds");
		AUDIO::_0x9D746964E0CF2C5F("FADEOUT_1", "PDSWO_Sounds");
	}
	if (AUDIO::_0x580D71DFE0088E34("FADEOUT_2", "PDSWO_Sounds"))
	{
		AUDIO::_STOP_SOUND_WITH_NAME("FADEOUT_2", "PDSWO_Sounds");
		AUDIO::_0x9D746964E0CF2C5F("FADEOUT_2", "PDSWO_Sounds");
	}
	if (AUDIO::_0x580D71DFE0088E34("RideAway", "PDSWO_Sounds"))
	{
		AUDIO::_STOP_SOUND_WITH_NAME("RideAway", "PDSWO_Sounds");
		AUDIO::_0x9D746964E0CF2C5F("RideAway", "PDSWO_Sounds");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_164[0]))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 153, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_164[0], false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 130, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 315, false);
		func_60(uParam0->f_164[0]);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_164[0], 0f);
		PED::_0x39A2FC5AF55A52B1(uParam0->f_164[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_164[0]));
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_164[1]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_164[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_167[0]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_167[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_167[1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_167[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_167[4]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_167[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_167[2]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_167[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_167[3]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_167[3]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_189))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_189);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_190))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_190);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_191))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_191);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_192))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_192);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_193))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_193);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_175))
	{
		func_61(uParam0->f_175);
		VOLUME::_DELETE_VOLUME(uParam0->f_175);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_177))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_177);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_177);
		VOLUME::_DELETE_VOLUME(uParam0->f_177);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_176))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_176);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_176);
		VOLUME::_DELETE_VOLUME(uParam0->f_176);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_178))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_178);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_179))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_179);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_180))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_180);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_181))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_181);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_182))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_182);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_183))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_183);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_184))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_184);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_185))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_185);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[25 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[25 /*638*/][0 /*48*/].f_47);
	}
	if (func_62(&(uParam0->f_151)))
	{
		func_63(&(uParam0->f_151));
	}
	PED::_UNRESERVE_AMBIENT_PEDS(1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, int iParam1, int iParam2)
{
	if (*iParam2 >= 31 && *iParam2 <= 38)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1396257[25 /*638*/][0 /*48*/].f_47))
	{
		func_1(uParam0);
	}
	if (!func_64(Global_35, 0))
	{
		func_1(uParam0);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[25 /*638*/][0 /*48*/].f_47, true, 0))
	{
		if (!func_62(&(uParam0->f_127)))
		{
			func_65(&(uParam0->f_127), 0);
		}
		else if (func_66(&(uParam0->f_127)) > 10f)
		{
			func_63(&(uParam0->f_127));
			func_1(uParam0);
		}
	}
	else if (func_67(25, iParam1, &(uParam0->f_304), uParam0->f_164[0]))
	{
		func_1(uParam0);
	}
}

void func_3(var uParam0, int iParam1)
{
	if (!func_68(&(uParam0->f_98), 2))
	{
		func_69(&(uParam0->f_98), 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		if (!func_64(uParam0->f_164[0], 0))
		{
			if (uParam0->f_188 <= 4)
			{
				func_56(-349384993, 1, 0, 0);
				func_56(862008394, 1, 0, 0);
			}
			else if (uParam0->f_188 == 5)
			{
				if (!OBJECT::IS_DOOR_CLOSED(862008394))
				{
					func_56(862008394, 0, 1, 0);
				}
			}
			func_70(uParam0->f_179);
			func_58(&(uParam0->f_174));
			func_1(uParam0);
		}
		else if (*iParam1 > 2 && *iParam1 <= 29)
		{
			if ((((func_71(uParam0->f_164[0], 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0) || PED::_GET_LASSO_TARGET(Global_35) == uParam0->f_164[0]) || ((OBJECT::_0x6E2AA80BB0C03728(862008394, 32) && func_72(862008394)) && *iParam1 != 15)) || func_73(uParam0->f_164[0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_164[0]))
			{
				if (func_52(uParam0->f_154))
				{
					if (!func_74(uParam0->f_195, 128))
					{
						Global_1396257[25 /*638*/][0 /*48*/].f_43 = 0;
						Global_1396257[25 /*638*/][0 /*48*/].f_42 = 0;
						func_75(&(uParam0->f_195), 128);
						func_76(uParam0->f_154, uParam0->f_195);
					}
				}
				if (!func_74(uParam0->f_194, 67108864))
				{
					PED::_0xAAB050DA48B57978(uParam0->f_164[0], "Flee_Human_MajorThreat", false, -1, 4);
					func_75(&(uParam0->f_194), 67108864);
				}
				if (!func_74(uParam0->f_194, 128))
				{
					if (uParam0->f_188 <= 4)
					{
						if (uParam0->f_126 == 16)
						{
							func_77(uParam0);
							func_16(iParam1, 30);
							return;
						}
						func_56(-349384993, 1, 0, 0);
						func_56(862008394, 1, 0, 0);
						PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_164[0], 0, false);
					}
					else
					{
						if (!OBJECT::IS_DOOR_CLOSED(862008394))
						{
							func_56(862008394, 0, 1, 0);
						}
						if (uParam0->f_126 == 2 || uParam0->f_126 == 2048)
						{
							func_77(uParam0);
							func_16(iParam1, 30);
							return;
						}
						else if (uParam0->f_126 == 256 || uParam0->f_126 == 4)
						{
							if (!func_74(uParam0->f_194, 134217728))
							{
								func_75(&(uParam0->f_194), 134217728);
							}
						}
						if (((((*iParam1 > 25 && *iParam1 < 30) && *iParam1 != 4) && *iParam1 != 9) && *iParam1 != 25) && *iParam1 != 27)
						{
							func_77(uParam0);
							func_16(iParam1, 30);
							return;
						}
						else if ((((*iParam1 != 30 && *iParam1 != 4) && *iParam1 != 9) && *iParam1 != 25) && *iParam1 != 27)
						{
							PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_164[0], 0, false);
						}
						else if ((*iParam1 == 4 || *iParam1 == 9) || *iParam1 == 25)
						{
							if (func_78(uParam0->f_164[0], uParam0->f_180, 0, 1))
							{
								func_75(&(uParam0->f_194), 524288);
								func_75(&(uParam0->f_194), 128);
								func_16(iParam1, 27);
							}
							else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_164[0]))
							{
								func_77(uParam0);
								func_16(iParam1, 30);
							}
						}
						else if (*iParam1 == 27)
						{
							func_75(&(uParam0->f_194), 524288);
							func_75(&(uParam0->f_194), 128);
						}
						return;
					}
					func_70(uParam0->f_179);
					func_58(&(uParam0->f_174));
					func_75(&(uParam0->f_194), 128);
				}
			}
		}
		if ((func_74(uParam0->f_194, 128) && *iParam1 >= 2) && *iParam1 < 20)
		{
			if (*iParam1 == 14)
			{
				func_16(iParam1, 24);
				return;
			}
			if (*iParam1 == 13)
			{
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_189) > 0.14f)
				{
					if (uParam0->f_188 <= 4)
					{
						func_56(-349384993, 1, 0, 0);
						func_56(862008394, 1, 0, 0);
					}
					func_70(uParam0->f_179);
					func_58(&(uParam0->f_174));
					func_16(iParam1, 24);
					return;
				}
				else if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_189) < 0.05f)
				{
					if (uParam0->f_188 <= 4)
					{
						func_56(-349384993, 1, 0, 0);
						func_56(862008394, 1, 0, 0);
					}
					func_70(uParam0->f_179);
					func_58(&(uParam0->f_174));
					func_16(iParam1, 21);
					return;
				}
				else
				{
					func_77(uParam0);
					func_16(iParam1, 30);
					return;
				}
			}
			if (uParam0->f_188 <= 4)
			{
				func_56(-349384993, 1, 0, 0);
				func_56(862008394, 1, 0, 0);
			}
			func_70(uParam0->f_179);
			func_58(&(uParam0->f_174));
			func_16(iParam1, 20);
		}
	}
}

void func_4(var uParam0, int iParam1)
{
	if (*iParam1 >= 20 || *iParam1 <= 2)
	{
		return;
	}
	func_79(&(uParam0->f_163), uParam0->f_178, &(uParam0->f_164[0]), &(uParam0->f_209), &(uParam0->f_133), 5000);
}

void func_5(var uParam0, int iParam1)
{
	if (func_74(uParam0->f_194, 64) && uParam0->f_199 >= 3)
	{
		return;
	}
	if (*iParam1 >= 3 && *iParam1 <= 14)
	{
		if (uParam0->f_198 < 2)
		{
			if (func_80(&(uParam0->f_164[0]), &(uParam0->f_204), &(uParam0->f_142), &(uParam0->f_199), 3, 0, 4000, 0))
			{
				func_75(&(uParam0->f_194), 64);
			}
		}
	}
}

void func_6(var uParam0)
{
	if (uParam0->f_188 > 4)
	{
		func_81(uParam0);
	}
	else if (!func_74(uParam0->f_194, 32768))
	{
		func_82(uParam0);
	}
}

void func_7(var uParam0)
{
	if (uParam0->f_188 <= 4)
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return;
	}
	if (func_74(uParam0->f_194, 8192))
	{
		if (uParam0->f_200 == 1)
		{
			func_83(uParam0->f_164[0], "GENERIC_FRIGHTENED_HIGH", -417894478, Global_35, 0, "SWAMP_WEIRDO", 1, 1);
		}
		else
		{
			func_83(uParam0->f_164[0], "GENERIC_FRIGHTENED_HIGH", -417894478, Global_35, 1, 0, 0, 1);
		}
		func_84(&(uParam0->f_194), 8192);
		func_84(&(uParam0->f_194), 4);
		func_85(uParam0);
	}
}

void func_8(var uParam0)
{
	if (func_74(uParam0->f_194, 262144))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		if (!CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0))
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
		func_86(&(uParam0->f_255));
		func_87();
		func_88(Global_35);
	}
}

void func_9(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_180))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_183))
	{
		return;
	}
	if (func_74(uParam0->f_194, 4194304))
	{
		if (!func_74(uParam0->f_194, 16777216) && !func_74(uParam0->f_194, 8388608))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uParam0->f_164[0], "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, false, "SwampWeirdoBubble");
			func_84(&(uParam0->f_194), 4194304);
		}
	}
	if (func_74(uParam0->f_194, 16777216))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
		func_75(&(uParam0->f_194), 4194304);
	}
	if (func_74(uParam0->f_194, 8388608))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
		func_75(&(uParam0->f_194), 4194304);
	}
	if (!func_74(uParam0->f_194, 16777216))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_183, true, 0) && !func_74(uParam0->f_194, 8388608))
		{
			func_75(&(uParam0->f_194), 8388608);
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_183, true, 0) && func_74(uParam0->f_194, 8388608))
		{
			func_84(&(uParam0->f_194), 8388608);
		}
	}
}

void func_10(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_89(iParam3);
	if (fParam4 == 0f)
	{
		if (func_90(iParam0, Global_35, 15f, 1))
		{
			if (!func_91(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_92(uParam1, iParam2);
				}
			}
		}
		else if (func_91(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_93(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_91(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_92(uParam1, iParam2);
			}
		}
	}
	else if (func_91(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_93(uParam1, iParam2);
	}
}

void func_11(var uParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_179))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_179, true, 0))
	{
		func_94();
	}
}

void func_12(var uParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_178))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_178, true, 0))
	{
		func_95(128);
	}
}

int func_13(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_96();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_90(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_62(uParam3))
	{
		func_97(uParam3, 0f);
	}
	else if (func_66(uParam3) >= 2f)
	{
		if (!func_98(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_99(iParam0);
			*uParam4 = 1;
			func_63(uParam3);
			return 1;
		}
		else
		{
			func_99(iParam0);
			*uParam4 = 1;
			func_63(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_14(var uParam0, int iParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_189))
	{
		uParam0->f_189 = ANIMSCENE::_CREATE_ANIM_SCENE(func_100(), 32, func_19(2), false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_190))
	{
		uParam0->f_190 = ANIMSCENE::_CREATE_ANIM_SCENE(func_101(), 0, func_102(), false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_191))
	{
		uParam0->f_191 = ANIMSCENE::_CREATE_ANIM_SCENE(func_103(), 32, func_19(78), false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_192))
	{
		uParam0->f_192 = ANIMSCENE::_CREATE_ANIM_SCENE(func_104(), 0, func_105(2), false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_193))
	{
		uParam0->f_193 = ANIMSCENE::_CREATE_ANIM_SCENE(func_106(), 0, func_107(), false, true);
	}
	if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_189) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_190)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_191)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_192)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_193))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_189);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_190);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_191);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_192);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_193);
		STREAMING::REQUEST_MODEL(uParam0->f_155, false);
		STREAMING::REQUEST_MODEL(uParam0->f_156, false);
		STREAMING::REQUEST_MODEL(uParam0->f_157, false);
		STREAMING::REQUEST_MODEL(uParam0->f_158, false);
		STREAMING::REQUEST_MODEL(uParam0->f_159, false);
		STREAMING::REQUEST_MODEL(uParam0->f_160, false);
		HUD::TEXT_BLOCK_REQUEST("SPSWOAU");
		HUD::TEXT_BLOCK_REQUEST("SPDEF");
		HUD::TEXT_BLOCK_REQUEST("SPSWO");
		func_56(-349384993, 1, 0, 1);
		func_56(862008394, 1, 0, 1);
		func_108(uParam0);
		func_109(uParam0);
		PED::_0x4C39C95AE5DB1329(uParam0->f_179, false, 16);
		func_110(&(uParam0->f_174), 2370.115f, -860.6608f, 42.0244f, 10f, 10f, 10f);
		func_111(uParam0->f_175, "SP_SWAMP_WEIRDO1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_177, 2500607, 0, 0, -1, -1, 10);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_177, 0, 0, 0, -1, -1, 0);
		uParam0->f_154 = func_113(25, 0, 9, func_112(25));
		if (!func_52(uParam0->f_154))
		{
		}
		if (func_114())
		{
			func_115(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			func_115(uParam0, Global_35, "ARTHUR", 0);
		}
		func_116(&(uParam0->f_304));
		func_117(&(uParam0->f_98), 1);
		func_118(&(uParam0->f_98), 0);
		func_119(&(uParam0->f_98), 0);
		func_120(&(uParam0->f_98), 1);
		func_121(&(uParam0->f_98), 1);
		func_122(&(uParam0->f_98), 1);
		func_123(&(uParam0->f_98), 0);
		func_124(&(uParam0->f_98), 0);
		func_125(&(uParam0->f_98), 0);
		func_126(&(uParam0->f_98), 1);
		func_127(&(uParam0->f_98), 1);
		func_128(&(uParam0->f_98), 1);
		func_129(&(uParam0->f_98), 1);
		func_130(&(uParam0->f_98), 1);
		func_69(&(uParam0->f_98), 1);
		func_131(&(uParam0->f_98), 1);
		func_132(&(uParam0->f_98), 1);
		func_133(&(uParam0->f_98), 1);
		func_134(&(uParam0->f_98), 1);
		func_135(&(uParam0->f_98), 1);
		func_124(&(uParam0->f_98), 1);
		func_136(&(uParam0->f_98), 1);
		if (func_52(uParam0->f_154))
		{
			uParam0->f_195 = func_137(uParam0->f_154);
			func_138(uParam0);
			if (!func_139(uParam0->f_154, 1))
			{
				func_16(iParam1, 1);
			}
			else
			{
				func_16(iParam1, 39);
			}
		}
	}
}

bool func_15(var uParam0)
{
	PED::_RESERVE_AMBIENT_PEDS(1);
	if (((((((((((((((STREAMING::HAS_MODEL_LOADED(uParam0->f_155) && STREAMING::HAS_MODEL_LOADED(uParam0->f_156)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_157)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_158)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_159)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_160)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_189, true, false)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_190, true, false)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_191, true, false)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_192, true, false)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_193, true, false)) && HUD::TEXT_BLOCK_IS_LOADED("SPSWOAU")) && HUD::TEXT_BLOCK_IS_LOADED("SPDEF")) && HUD::TEXT_BLOCK_IS_LOADED("SPSWO")) && AUDIO::PREPARE_SOUNDSET("PDSWO_Sounds", false)) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1)
	{
		if (func_140(&(uParam0->f_154), &(uParam0->f_195)))
		{
			return true;
		}
	}
	if (!AUDIO::PREPARE_SOUNDSET("PDSWO_Sounds", false))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_155))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_156))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_157))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_158))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_159))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_160))
	{
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_189, true, false))
	{
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_190, true, false))
	{
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_191, true, false))
	{
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_192, true, false))
	{
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_193, true, false))
	{
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPSWOAU"))
	{
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPSWO"))
	{
	}
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() != 1)
	{
	}
	return false;
}

void func_16(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_17(var uParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	vector3 vVar4;
	vector3 vVar8;
	struct<4> /*32*/ sVar12;
	vector3 vVar16;
	vector3 vVar20;
	vector3 vVar24;
	struct<11> /*88*/ sVar28;

	Var0 = { func_141(0) };
	vVar4 = { func_141(2) };
	vVar8 = { func_141(3) };
	Var12 = { func_141(1) };
	vVar16 = { func_141(4) };
	vVar20 = { func_141(5) };
	vVar24 = { func_141(7) };
	if (((((func_142(&(uParam0->f_164[0]), uParam0->f_155, Var0, Var0.f_3, 1, 0, 1) && func_143(&(uParam0->f_167[0]), uParam0->f_156, Var12)) && func_143(&(uParam0->f_167[1]), uParam0->f_157, vVar8)) && func_143(&(uParam0->f_167[2]), uParam0->f_158, vVar16)) && func_143(&(uParam0->f_167[3]), uParam0->f_159, vVar20)) && func_143(&(uParam0->f_167[4]), uParam0->f_160, vVar24))
	{
		if (func_64(uParam0->f_164[0], 0))
		{
			if (func_114())
			{
				func_144(uParam0->f_164[0], uParam0->f_162);
			}
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_164[0], "special_ped_group", 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_164[0], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_164[0], joaat("REL_CIVMALE"));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 317, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 344, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 153, true);
			if (uParam0->f_188 == 5)
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 6, true);
			}
			func_115(uParam0, uParam0->f_164[0], "SWAMP_WEIRDO", 0);
			func_145(&(uParam0->f_164[0]), &(uParam0->f_202), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20f, -1082130432 /* Float: -1f */);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_164[0], Var0, Var0.f_3, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_167[0], Var12, Var12.f_3, true, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_167[0], vVar4, 2, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_189, "CS_SWAMPWEIRDOSONNY", uParam0->f_164[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_189, "p_doorbrait01bx", func_146(862008394, 0), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_191, "p_club02x", uParam0->f_167[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_191, "swampweirdosonny", uParam0->f_164[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_191, "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_192, "p_cigarette01x", uParam0->f_167[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_192, "swampweirdosonny", uParam0->f_164[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_192, "john_marston", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_190, "p_chair24x^1", uParam0->f_167[4], 0);
			if (func_114())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_193, "john_marston", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_193, "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_193, "b_playerArthur", true, false);
			}
			func_85(uParam0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_193, "p_tin_pomade01x", uParam0->f_167[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_193, "s_chocolatebar02x", uParam0->f_167[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_193, func_147(), func_148(), 2);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uParam0->f_164[0], "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, false, "SwampWeirdoBubble");
			uParam0->f_188 = func_149(uParam0);
			func_150(uParam0);
			func_20(uParam0, &(uParam0->f_190), func_102(), 0, 0, 1);
			func_151(uParam0->f_164[0], 25);
			if (uParam0->f_188 != 5)
			{
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_184))
				{
					Var28 = { func_152(8) };
					uParam0->f_184 = VOLUME::_0x0EB78C2B156635B1(Var28, Var28.f_1, Var28.f_4, Var28.f_7);
					VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_184, 1);
					VOLUME::_0xBE551C2CC421185D(uParam0->f_184, 1);
				}
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_185))
				{
					Var28 = { func_152(9) };
					uParam0->f_185 = VOLUME::_0x0EB78C2B156635B1(Var28, Var28.f_1, Var28.f_4, Var28.f_7);
					VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_185, 1);
					VOLUME::_0xBE551C2CC421185D(uParam0->f_185, 1);
				}
			}
			else
			{
				func_153(uParam0->f_164[0], 1);
			}
			if (uParam0->f_188 == 1 && !func_138(uParam0))
			{
				func_16(iParam1, 8);
			}
			else
			{
				func_16(iParam1, 3);
			}
		}
	}
}

void func_18(var uParam0, int iParam1, int iParam2)
{
	if (func_138(uParam0))
	{
		func_16(iParam1, 5);
		return;
	}
	switch (iParam2)
	{
		case 0:
			func_16(iParam1, 5);
			break;
		case 1:
			func_16(iParam1, 8);
			break;
		case 2:
			func_16(iParam1, 5);
			break;
		case 3:
			func_16(iParam1, 4);
			break;
		case 4:
			func_16(iParam1, 5);
			break;
		default:
			func_16(iParam1, 4);
			break;
	}
}

char* func_19(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_IG1_Sit_Idle01";
			break;
		case 1:
			sVar0 = "pl_IG1_Stand_Idle01";
			break;
		case 2:
			sVar0 = "pl_IG1_Inside_Sit_Idle01";
			break;
		case 3:
			sVar0 = "pl_IG1_Welcome_Idle01";
			break;
		case 4:
			sVar0 = "pl_IG1_Open_Door_from_Sit_Idle01";
			break;
		case 5:
			sVar0 = "pl_IG1_Close_Door_to_Sit_Idle01";
			break;
		case 6:
			sVar0 = "pl_IG1_Stand_to_Sit01";
			break;
		case 7:
			sVar0 = "pl_IG1_Sit_to_Stand01";
			break;
		case 8:
			sVar0 = "pl_IG1_Sit_to_Welcome_Idle01";
			break;
		case 9:
			sVar0 = "pl_IG1_Welcome_to_Sit_Idle01";
			break;
		case 10:
			sVar0 = "pl_IG1_Stand_to_Welcome_Idle01";
			break;
		case 11:
			sVar0 = "pl_IG1_Welcome_to_Stand_Idle01";
			break;
		case 12:
			sVar0 = "pl_IG1_Enter_Sit_from_Walk01";
			break;
		case 13:
			sVar0 = "pl_IG1_Enter_Sit_Idle01";
			break;
		case 14:
			sVar0 = "pl_IG1_Exit_Sit_Idle01";
			break;
		case 15:
			sVar0 = "pl_IG1_Quick_Exit_Sit_Idle01";
			break;
		case 16:
			sVar0 = "pl_IG1_Exit_Stand_Idle01";
			break;
		case 17:
			sVar0 = "pl_IG1_Exit_Sit_to_Walk01";
			break;
		case 18:
			sVar0 = "pl_IG1_Exit_Stand_to_Walk01";
			break;
		case 19:
			sVar0 = "pl_IG1_Sit_Front_Flinch01";
			break;
		case 20:
			sVar0 = "pl_IG1_Sit_Left_Flinch01";
			break;
		case 21:
			sVar0 = "pl_IG1_Sit_Right_Flinch01";
			break;
		case 22:
			sVar0 = "pl_IG1_Welcome_Flinch01";
			break;
		case 23:
			sVar0 = "pl_IG1_Welcome_Flinch02";
			break;
		case 24:
			sVar0 = "pl_IG1_Welcome_Flinch03";
			break;
		case 25:
			sVar0 = "pl_IG1_GREET_A";
			break;
		case 26:
			sVar0 = "pl_IG1_GREET_B";
			break;
		case 27:
			sVar0 = "pl_IG1_GREET_C";
			break;
		case 28:
			sVar0 = "pl_IG1_GREET_D";
			break;
		case 29:
			sVar0 = "pl_IG1_GREET_E";
			break;
		case 30:
			sVar0 = "pl_IG1_GREET_F";
			break;
		case 31:
			sVar0 = "pl_IG1_GREET_H";
			break;
		case 32:
			sVar0 = "pl_IG1_GREET_G_2_Stand";
			break;
		case 33:
			sVar0 = "pl_IG1_Invite_Inside_A";
			break;
		case 34:
			sVar0 = "pl_IG1_Invite_Inside_B";
			break;
		case 35:
			sVar0 = "pl_IG1_Invite_Inside_C";
			break;
		case 36:
			sVar0 = "pl_IG1_Invite_Inside_D";
			break;
		case 37:
			sVar0 = "pl_IG1_Invite_Inside_E";
			break;
		case 38:
			sVar0 = "pl_IG1_Invite_Inside_F";
			break;
		case 39:
			sVar0 = "pl_IG1_Invite_Inside_G";
			break;
		case 40:
			sVar0 = "pl_IG1_WAITING_A";
			break;
		case 41:
			sVar0 = "pl_IG1_WAITING_B";
			break;
		case 42:
			sVar0 = "pl_IG1_WAITING_C";
			break;
		case 43:
			sVar0 = "pl_IG1_WAITING_D";
			break;
		case 44:
			sVar0 = "pl_IG1_WAITING_F";
			break;
		case 45:
			sVar0 = "pl_IG1_WAITING_G";
			break;
		case 46:
			sVar0 = "pl_IG1_WAITING_GO_INSIDE_A_Welcome_2_Sit_Inside";
			break;
		case 47:
			sVar0 = "pl_IG1_WAITING_GO_INSIDE_B_Welcome_2_Sit_Inside";
			break;
		case 48:
			sVar0 = "pl_IG1_WAITING_GO_INSIDE_C";
			break;
		case 49:
			sVar0 = "pl_IG1_WAITING_GO_INSIDE_D";
			break;
		case 50:
			sVar0 = "pl_IG1_WAITING_GO_INSIDE_E";
			break;
		case 51:
			sVar0 = "pl_IG1_WAITING_RETURN_A";
			break;
		case 52:
			sVar0 = "pl_IG1_WAITING_RETURN_B";
			break;
		case 53:
			sVar0 = "pl_IG1_WAITING_RETURN_C";
			break;
		case 54:
			sVar0 = "pl_IG1_AGGRO_A_2_Inside_Sit";
			break;
		case 55:
			sVar0 = "pl_IG1_AGGRO_B_2_Inside_Sit";
			break;
		case 56:
			sVar0 = "pl_IG1_AGGRO_C_2_Inside_Sit";
			break;
		case 57:
			sVar0 = "pl_IG1_AGGRO_D_2_Inside_Sit";
			break;
		case 58:
			sVar0 = "pl_IG1_AGGRO_E_2_Inside_Sit";
			break;
		case 59:
			sVar0 = "pl_IG1_AGGRO_F_2_Inside_Sit";
			break;
		case 60:
			sVar0 = "pl_IG1_RETURN_AGGRO_A_2_Inside_Sit";
			break;
		case 61:
			sVar0 = "pl_IG1_RETURN_AGGRO_B_2_Inside_Sit";
			break;
		case 62:
			sVar0 = "pl_IG1_RETURN_AGGRO_C_2_Inside_Sit";
			break;
		case 63:
			sVar0 = "pl_IG1_RETURN_AGGRO_INSIDE_A";
			break;
		case 64:
			sVar0 = "pl_IG1_RETURN_AGGRO_INSIDE_B";
			break;
		case 65:
			sVar0 = "pl_IG1_RETURN_AGGRO_INSIDE_C";
			break;
		case 66:
			sVar0 = "pl_IG1_RETURN_AGGRO_INSIDE_D";
			break;
		case 67:
			sVar0 = "pl_IG1_RETURN_AGGRO_INSIDE_E";
			break;
		case 68:
			sVar0 = "pl_IG1_RETURN_AGGRO_INSIDE_F";
			break;
		case 69:
			sVar0 = "pl_IG1_GO_AWAY_A_2_Inside_Sit";
			break;
		case 70:
			sVar0 = "pl_IG1_GO_AWAY_B_2_Inside_Sit";
			break;
		case 71:
			sVar0 = "pl_IG1_GO_AWAY_C_2_Inside_Sit";
			break;
		case 72:
			sVar0 = "pl_IG1_GO_AWAY_D_2_Inside_Sit";
			break;
		case 73:
			sVar0 = "pl_IG1_GO_AWAY_E_2_Inside_Sit";
			break;
		case 74:
			sVar0 = "pl_IG1_GO_AWAY_INSIDE_A";
			break;
		case 75:
			sVar0 = "pl_IG1_GO_AWAY_INSIDE_B";
			break;
		case 76:
			sVar0 = "pl_IG1_GO_AWAY_INSIDE_C";
			break;
		case 77:
			sVar0 = "pl_IG1_GO_AWAY_INSIDE_D";
			break;
		case 78:
			sVar0 = "pl_IG1_BLACKOUT_A";
			break;
		case 79:
			sVar0 = "pl_IG1_BLACKOUT_B";
			break;
		case 80:
			sVar0 = "pl_IG1_BLACKOUT_C";
			break;
		case 81:
			sVar0 = "pl_IG1_BLACKOUT_D";
			break;
		case 82:
			sVar0 = "pl_IG1_BLACKOUT_E";
			break;
		case 83:
			sVar0 = "PL_IG4_Sit_Stair_2_Stand_Idle";
			break;
		case 84:
			sVar0 = "PL_IG4_Sit_Stair_2_Stand_Idle_L";
			break;
		case 85:
			sVar0 = "PL_IG4_Sit_Stair_2_Stand_Idle_R";
			break;
		case 86:
			sVar0 = "PL_IG4_Sit_Stair_2_Stand_Inside";
			break;
		case 87:
			sVar0 = "PL_IG4_Sit_Stair_2_Stand_hello";
			break;
		case 88:
			sVar0 = "PL_IG4_Sit_Stair_Run_Stand_Inside";
			break;
	}
	return sVar0;
}

bool func_20(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2);
			}
			if (bParam4)
			{
				if (!func_154(&(uParam0->f_164[0]), 75f, 0))
				{
					return false;
				}
			}
			if ((!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "b_breakout", bParam3, false);
				func_84(&(uParam0->f_194), 1024);
				return false;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				if ((((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_IG1_Inside_Sit_Idle01", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_IG1_Sit_Idle01", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_IG1_Stand_Idle01", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_IG1_Welcome_Idle01", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_IG4_Sit_Stair_Idle", true))
				{
					if (func_155(uParam1, uParam0->f_186))
					{
						if (bParam5)
						{
							if (!func_62(&(uParam0->f_130)))
							{
								func_75(&(uParam0->f_194), 1024);
								func_97(&(uParam0->f_130), 0f);
							}
							else if (func_156(&(uParam0->f_130)) >= 2500)
							{
								func_63(&(uParam0->f_130));
								uParam0->f_186 = sParam2;
								return true;
							}
						}
						else
						{
							uParam0->f_186 = sParam2;
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

char[] func_21(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_IG5_Sit_Idle_Front_Call_Over";
			break;
		case 1:
			sVar0 = "pl_IG5_Sit_Idle_Left_Call_Over01";
			break;
		case 2:
			sVar0 = "pl_IG5_Sit_Idle_Left_Call_Over02";
			break;
		case 3:
			sVar0 = "pl_IG5_Sit_Idle_Right_Call_Over01";
			break;
		case 4:
			sVar0 = "pl_IG5_Sit_Idle_Right_Call_Over02";
			break;
		case 5:
			sVar0 = "pl_IG5_far_call_over";
			break;
		case 6:
			sVar0 = "pl_IG5_front_call_over";
			break;
		case 7:
			sVar0 = "pl_IG5_left_call_over";
			break;
		case 8:
			sVar0 = "pl_IG5_right_call_over";
			break;
		case 9:
			sVar0 = "pl_IG5_Sit_Stair_Loop";
			break;
	}
	return sVar0;
}

void func_22(var uParam0, int iParam1)
{
	func_157(uParam0);
	switch (uParam0->f_188)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_138(uParam0))
			{
				func_16(iParam1, 26);
				return;
			}
			func_20(uParam0, &(uParam0->f_189), func_21(func_159(uParam0->f_188, func_158(uParam0->f_164[0], Global_35, 1060437492 /* Float: 0.707f */))), 0, 1, 1);
			func_16(iParam1, 10);
			break;
		default:
			func_56(-349384993, 1, 0, 0);
			func_56(862008394, 1, 1, 0);
			func_70(uParam0->f_179);
			func_160(uParam0->f_164[0], 0);
			PED::_0xB8B6430EAD2D2437(uParam0->f_164[0], -386187050);
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_179))
			{
				VOLUME::_DELETE_VOLUME(uParam0->f_179);
			}
			func_58(&(uParam0->f_174));
			func_16(iParam1, 25);
			break;
	}
}

void func_23(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_182))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_182, true, 0))
		{
			return;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0]) || !func_90(Global_35, uParam0->f_164[0], 50f, 1))
	{
		return;
	}
	if (func_20(uParam0, &(uParam0->f_189), func_21(func_159(uParam0->f_188, func_158(uParam0->f_164[0], Global_35, 1060437492 /* Float: 0.707f */))), 0, 1, 1))
	{
	}
	if (uParam0->f_188 == 1)
	{
		func_161(uParam0);
		func_16(iParam1, 6);
	}
	else if (uParam0->f_188 == 2)
	{
		func_161(uParam0);
		func_16(iParam1, 11);
	}
	else
	{
		func_161(uParam0);
		func_16(iParam1, 11);
	}
}

void func_24(var uParam0, int iParam1)
{
	func_157(uParam0);
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0]))
	{
		return;
	}
	if (uParam0->f_188 <= 4)
	{
		func_20(uParam0, &(uParam0->f_189), func_19(func_162(uParam0->f_188, uParam0->f_196)), 0, 1, 1);
		func_16(iParam1, 12);
	}
	else
	{
		func_16(iParam1, 25);
	}
}

void func_25(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0]))
	{
		return;
	}
	iVar0 = func_162(uParam0->f_188, uParam0->f_196);
	if (((iVar0 == 29 || iVar0 == 30) || iVar0 == 32) || iVar0 == 31)
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SONNY"));
	}
	else if (((!func_74(uParam0->f_194, 33554432) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0])) && ANIMSCENE::_0x1F0E401031E20146(uParam0->f_189, func_19(7))) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_189) >= 0.03f)
	{
		if (uParam0->f_188 == 0)
		{
			func_83(uParam0->f_164[0], "GREET_PLAYER_JOHN_FIRST_TIME", -417894478, Global_35, 0, 0, 1, 1);
		}
		else if (uParam0->f_188 == 2)
		{
			func_83(uParam0->f_164[0], "GREET_PLAYER_JOHN", -417894478, Global_35, 0, 0, 2, 1);
		}
		else if (uParam0->f_188 == 3)
		{
			func_83(uParam0->f_164[0], "GREET_GENERAL_FAMILIAR", -417894478, Global_35, 1, 0, 0, 1);
		}
		else if (uParam0->f_188 == 4)
		{
			func_83(uParam0->f_164[0], "HOWS_IT_GOING", -417894478, Global_35, 1, 0, 0, 1);
		}
		func_75(&(uParam0->f_194), 33554432);
	}
	if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && func_90(Global_35, uParam0->f_164[0], 15f, 1)) && (func_74(uParam0->f_194, 65536) || func_74(uParam0->f_194, 131072)))
	{
		if (uParam0->f_196 == 0)
		{
			uParam0->f_196 = 1;
			func_16(iParam1, 11);
		}
		else if (uParam0->f_196 == 2)
		{
			func_56(862008394, 0, 1, 0);
			if (!func_163(862008394))
			{
				func_164(uParam0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 169, true);
				func_16(iParam1, 13);
			}
		}
	}
	if (func_20(uParam0, &(uParam0->f_189), func_19(func_162(uParam0->f_188, uParam0->f_196)), 0, 1, 1))
	{
		if (uParam0->f_196 >= 3)
		{
			func_56(862008394, 0, 1, 0);
			if (!func_163(862008394))
			{
				func_164(uParam0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 169, true);
				func_16(iParam1, 13);
			}
		}
		else
		{
			uParam0->f_196++;
			func_16(iParam1, 11);
		}
	}
}

void func_26(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	struct<4> /*32*/ sVar5;

	func_157(uParam0);
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0]))
	{
		return;
	}
	switch (uParam0->f_188)
	{
		case 0:
			iVar0 = 35;
			break;
		case 1:
			iVar0 = 34;
			break;
		case 2:
			iVar0 = 33;
			break;
		case 3:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SONNY"));
			iVar0 = 36;
			break;
		case 4:
			iVar0 = 38;
			break;
	}
	if (!func_90(Global_35, uParam0->f_164[0], 25f, 1))
	{
		return;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_189) >= 0.1f && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_189, func_19(iVar0), true))
	{
		if (!func_74(uParam0->f_194, 32768))
		{
			func_164(uParam0);
			func_75(&(uParam0->f_194), 32768);
		}
	}
	if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && ((func_74(uParam0->f_194, 65536) || func_74(uParam0->f_194, 131072)) || func_90(Global_35, uParam0->f_164[0], 8f, 1)))
	{
		if (func_20(uParam0, &(uParam0->f_189), func_19(iVar0), 0, 1, 1) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_176, true, 0))
		{
			if (!func_74(uParam0->f_194, 32768))
			{
				func_164(uParam0);
				func_75(&(uParam0->f_194), 32768);
			}
			func_16(iParam1, 14);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_176))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_176, true, 0))
		{
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_189) >= 0.19f && ANIMSCENE::_0x1F0E401031E20146(uParam0->f_189, func_19(iVar0)))
			{
				if (func_166(func_165(Global_35, 0, 1, 0)) || func_166(func_165(Global_35, 1, 1, 0)))
				{
					WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
					return;
				}
				Var1 = { func_141(8) };
				func_167(&Global_35, Var1, Var1.f_3, &(uParam0->f_303), 20000, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */);
				ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_189, false);
				func_16(iParam1, 31);
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_189, "s_IG1_Welcome_Idle01", true))
			{
				if (func_166(func_165(Global_35, 0, 1, 0)) || func_166(func_165(Global_35, 1, 1, 0)))
				{
					WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
					return;
				}
				Var5 = { func_141(8) };
				func_167(&Global_35, Var5, Var5.f_3, &(uParam0->f_303), 20000, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */);
				ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_189, false);
				func_16(iParam1, 31);
			}
		}
	}
}

void func_27(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<4> /*32*/ sVar2;

	func_157(uParam0);
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0]))
	{
		return;
	}
	switch (uParam0->f_188)
	{
		case 0:
			iVar0 = 40;
			break;
		case 1:
			iVar0 = 41;
			break;
		case 2:
			iVar0 = 42;
			break;
		case 3:
			iVar0 = 43;
			break;
		case 4:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SONNY"));
			iVar0 = 45;
			break;
		case 5:
			iVar0 = 44;
			break;
		case 6:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SONNY"));
			iVar0 = 45;
			break;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_176))
	{
		if (func_74(uParam0->f_194, 1048576))
		{
			if (func_168(uParam0))
			{
				func_16(iParam1, 15);
			}
		}
		else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_189, func_19(iVar0)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_189) >= 0.9f)
		{
			func_56(-349384993, 1, 0, 0);
			func_56(862008394, 1, 0, 0);
			func_75(&(uParam0->f_194), 1048576);
		}
		bVar1 = func_90(Global_35, uParam0->f_164[0], 15f, 1);
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_176, true, 0) || !bVar1)
		{
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			{
				func_20(uParam0, &(uParam0->f_189), func_19(iVar0), 0, 1, 1);
			}
			else
			{
				func_20(uParam0, &(uParam0->f_189), func_19(3), 0, 1, 1);
			}
		}
		else if (bVar1 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0]))
		{
			func_20(uParam0, &(uParam0->f_189), func_19(3), 0, 1, 1);
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_176, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0]))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
			if (func_166(func_165(Global_35, 0, 1, 0)) || func_166(func_165(Global_35, 1, 1, 0)))
			{
				WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
				return;
			}
			Var2 = { func_141(8) };
			func_167(&Global_35, Var2, Var2.f_3, &(uParam0->f_303), 20000, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */);
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_189, false);
			func_16(iParam1, 31);
		}
	}
}

void func_28(var uParam0, int iParam1)
{
	int iVar0;

	switch (uParam0->f_188)
	{
		case 0:
			iVar0 = 46;
			break;
		case 1:
			iVar0 = 47;
			break;
		case 2:
			iVar0 = 48;
			break;
		case 3:
			iVar0 = 49;
			break;
		case 4:
			iVar0 = 50;
			break;
	}
	func_20(uParam0, &(uParam0->f_189), func_19(iVar0), 0, 1, 1);
	func_169(uParam0);
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_189, func_19(iVar0)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_189) >= 0.9f)
	{
		func_56(-349384993, 1, 0, 0);
		func_56(862008394, 1, 0, 0);
		func_75(&(uParam0->f_194), 16777216);
		uParam0->f_206 = 1;
		func_16(iParam1, 23);
	}
}

void func_29(var uParam0, int iParam1)
{
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	if (!func_62(&(uParam0->f_139)))
	{
		func_97(&(uParam0->f_139), 0f);
	}
	else if (func_156(&(uParam0->f_139)) > 6000)
	{
		if (!func_74(uParam0->f_194, 512))
		{
			func_75(&(uParam0->f_194), 512);
			func_84(&(uParam0->f_194), 2048);
			func_63(&(uParam0->f_139));
			func_16(iParam1, 33);
			return;
		}
	}
	else if (func_156(&(uParam0->f_139)) >= 1000)
	{
		if (!func_74(uParam0->f_194, 2048))
		{
			if (!func_74(uParam0->f_194, 512))
			{
				func_75(&(uParam0->f_194), 2048);
				AUDIO::PLAY_SOUND_FROM_ENTITY("FADEOUT_1", uParam0->f_164[0], "PDSWO_Sounds", false, 0, 0);
			}
			else
			{
				func_75(&(uParam0->f_194), 2048);
				AUDIO::PLAY_SOUND_FROM_ENTITY("FADEOUT_2", uParam0->f_164[0], "PDSWO_Sounds", false, 0, 0);
			}
		}
	}
}

void func_30(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	iVar0 = func_170(uParam0);
	func_20(uParam0, &(uParam0->f_192), func_105(iVar0), 0, 1, 1);
	CAM::_0x90DA5BA5C2635416();
	GRAPHICS::ANIMPOSTFX_PLAY("PlayerKnockout_WeirdoPat");
	func_171(uParam0, 0);
	if (CAM::IS_SCREEN_FADED_OUT() && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_192) >= 0.05f)
	{
		Var1 = { func_141(6) };
		if (STREAMING::LOAD_SCENE_START_SPHERE(Var1, Var1.f_3, 0))
		{
			CAM::DO_SCREEN_FADE_IN(1000);
			iVar0 = func_170(uParam0);
			func_20(uParam0, &(uParam0->f_192), func_105(iVar0), 0, 1, 1);
			func_16(iParam1, 34);
		}
	}
}

void func_31(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	struct<4> /*32*/ sVar5;

	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	iVar0 = func_170(uParam0);
	func_20(uParam0, &(uParam0->f_192), func_105(iVar0), 0, 0, 1);
	CAM::_0x90DA5BA5C2635416();
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_192) >= 0.72f)
	{
		if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() || ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_192) >= 0.9f)
	{
		GRAPHICS::ANIMPOSTFX_STOP("PlayerKnockout_WeirdoPat");
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			Var1 = { func_141(6) };
			ENTITY::SET_ENTITY_COORDS(Global_35, Var1, true, false, true, true);
		}
		Var1 = { func_141(6) };
		if (!STREAMING::LOAD_SCENE_START_SPHERE(Var1, Var1.f_3, 0))
		{
			return;
		}
		if (func_114())
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_193, "john_marston", Global_35, 0);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_193, "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_193, "b_playerArthur", true, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_193, "p_tin_pomade01x", uParam0->f_167[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_193, "s_chocolatebar02x", uParam0->f_167[3], 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[1]))
		{
			Var5 = { func_141(10) };
			uParam0->f_291 = 1;
			uParam0->f_291.f_1 = 1;
			uParam0->f_291.f_2 = 1;
			uParam0->f_291.f_6 = { Var5 };
			uParam0->f_291.f_9 = Var5.f_3;
			uParam0->f_164[1] = func_172(&(uParam0->f_290), &(uParam0->f_291));
			return;
		}
		else
		{
			Var5 = { func_141(10) };
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_164[1], Var5, Var5.f_3, true, false, true);
		}
		AUDIO::PLAY_SOUND_FROM_ENTITY("FADEOUT_2", Global_35, "PDSWO_Sounds", false, 0, 0);
		func_173(uParam0->f_208);
		func_16(iParam1, 35);
	}
}

void func_32(var uParam0, int iParam1)
{
	if (!func_62(&(uParam0->f_139)))
	{
		func_97(&(uParam0->f_139), 0f);
	}
	else if (func_156(&(uParam0->f_139)) > 19800)
	{
		func_63(&(uParam0->f_139));
		func_16(iParam1, 36);
	}
}

void func_33(var uParam0, int iParam1)
{
	if (!ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_192, false))
	{
		return;
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	STREAMING::LOAD_SCENE_STOP();
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_193, false) && !ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_193, false))
	{
		func_20(uParam0, &(uParam0->f_193), func_107(), 0, 0, 1);
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT() && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_193) >= 0.05f)
	{
		func_174(1);
		if (func_175(0) > -100f)
		{
			func_176(0, -100f, 0);
		}
		if (func_175(1) > -100f)
		{
			func_176(1, -100f, 0);
		}
		if (func_175(2) > -100f)
		{
			func_176(2, -100f, 0);
		}
		CAM::DO_SCREEN_FADE_IN(1000);
		PED::SET_PED_CONFIG_FLAG(Global_35, 336, true);
		func_16(iParam1, 37);
	}
}

void func_34(var uParam0, int iParam1)
{
	if (!ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_193, false))
	{
		func_20(uParam0, &(uParam0->f_193), func_107(), 0, 0, 1);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_193, false))
	{
		MAP::DISPLAY_RADAR(true);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_167[2]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_167[2]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_167[3]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_167[3]));
		}
		func_84(&(uParam0->f_194), 262144);
		func_57(25, 32768);
		func_174(0);
		func_16(iParam1, 38);
	}
}

void func_35(var uParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_141(6) };
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (!func_74(uParam0->f_194, 268435456))
	{
		if (func_177(1) >= 100)
		{
			func_178(100, 0, 0, 1, 1);
		}
		func_75(&(uParam0->f_194), 268435456);
	}
	if (!func_179(Global_35, vVar0, 50f, 1, 1) || func_180(Global_35))
	{
	}
	else
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 336, false);
	func_16(iParam1, 39);
}

void func_36(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	func_171(uParam0, 1);
	switch (uParam0->f_188)
	{
		case 3:
			iVar0 = 69;
			break;
		case 4:
			iVar0 = 70;
			break;
		case 5:
			iVar0 = 71;
			break;
		case 6:
			iVar0 = 72;
			break;
		case 7:
			iVar0 = 73;
			break;
	}
	if ((!func_90(uParam0->f_164[0], Global_35, 32f, 1) && !func_74(uParam0->f_194, 134217728)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_189, func_19(iVar0)))
	{
		return;
	}
	if ((!func_181(uParam0->f_164[0], Global_35, 1, 32f, 0) && !func_74(uParam0->f_194, 134217728)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_189, func_19(iVar0)))
	{
		return;
	}
	if (func_20(uParam0, &(uParam0->f_189), func_19(iVar0), 0, 1, 1))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
		if (!func_74(uParam0->f_194, 32768))
		{
			func_75(&(uParam0->f_194), 32768);
		}
		func_182(25);
		PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_164[0], 0, true);
		if (func_72(862008394))
		{
			func_56(862008394, 1, 1, 0);
		}
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_189, "p_doorbrait01bx", func_146(862008394, 0));
		func_16(iParam1, 27);
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_189, func_19(iVar0)))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_189) >= 0.193f)
		{
			if (func_72(862008394))
			{
				func_56(862008394, 1, 1, 0);
			}
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_189, "p_doorbrait01bx", func_146(862008394, 0));
			if (!OBJECT::IS_DOOR_CLOSED(-349384993) || !OBJECT::IS_DOOR_CLOSED(862008394))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_189, false);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_164[0], 2368.934f, -860.5748f, 42.0232f, true, false, true, true);
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
				if (!func_74(uParam0->f_194, 32768))
				{
					func_75(&(uParam0->f_194), 32768);
				}
				func_182(25);
				PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_164[0], 0, true);
				func_83(uParam0->f_164[0], "GENERIC_SHOCKED_HIGH", -417894478, Global_35, 0, "SWAMP_WEIRDO", 0, 1);
				func_16(iParam1, 28);
			}
		}
	}
}

void func_37(var uParam0, int iParam1)
{
	int iVar0;

	func_161(uParam0);
	if (!func_74(uParam0->f_194, 524288))
	{
		if (!OBJECT::IS_DOOR_CLOSED(-349384993) || !OBJECT::IS_DOOR_CLOSED(862008394))
		{
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_189, false);
			ENTITY::SET_ENTITY_COORDS(uParam0->f_164[0], 2368.934f, -860.5748f, 42.0232f, true, false, true, true);
			func_83(uParam0->f_164[0], "GENERIC_SHOCKED_HIGH", -417894478, Global_35, 0, "SWAMP_WEIRDO", 0, 1);
			func_63(&(uParam0->f_151));
			func_75(&(uParam0->f_194), 16777216);
			func_16(iParam1, 28);
			return;
		}
		else if (func_183(862008394, 32))
		{
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_189, false);
			func_83(uParam0->f_164[0], "GENERIC_SHOCKED_HIGH", -417894478, Global_35, 0, "SWAMP_WEIRDO", 0, 1);
			func_63(&(uParam0->f_151));
			ENTITY::SET_ENTITY_COORDS(uParam0->f_164[0], 2368.934f, -860.5748f, 42.0232f, true, false, true, true);
			TASK::_TASK_INTIMIDATED_2(uParam0->f_164[0], Global_35, 0, 1, 1, 1, 1, 1, 0);
			func_75(&(uParam0->f_194), 16777216);
			func_16(iParam1, 29);
		}
	}
	else if (func_78(uParam0->f_164[0], uParam0->f_180, 0, 1) && OBJECT::IS_DOOR_CLOSED(862008394))
	{
		func_84(&(uParam0->f_194), 524288);
		func_75(&(uParam0->f_194), 16777216);
		func_16(iParam1, 28);
	}
	else
	{
		ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_189, false);
		func_83(uParam0->f_164[0], "GENERIC_SHOCKED_HIGH", -417894478, Global_35, 0, "SWAMP_WEIRDO", 0, 1);
		func_63(&(uParam0->f_151));
		TASK::_TASK_INTIMIDATED_2(uParam0->f_164[0], Global_35, 0, 1, 1, 1, 1, 1, 0);
		func_75(&(uParam0->f_194), 16777216);
		func_16(iParam1, 29);
	}
	if (!func_90(uParam0->f_164[0], Global_35, 20f, 1) && !func_74(uParam0->f_194, 524288))
	{
		return;
	}
	if (!func_62(&(uParam0->f_151)))
	{
		func_97(&(uParam0->f_151), 0f);
		func_83(Global_35, "PLAYER_TAUNT_ENEMY", -417894478, uParam0->f_164[0], 1, 0, 0, 1);
	}
	else if (func_156(&(uParam0->f_151)) >= 10000)
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_164[0]))
		{
			func_83(Global_35, "PLAYER_TAUNT_ENEMY", -417894478, uParam0->f_164[0], 1, 0, 0, 1);
			func_97(&(uParam0->f_151), 0f);
			func_63(&(uParam0->f_151));
		}
	}
	switch (uParam0->f_197)
	{
		case 0:
			iVar0 = 74;
			break;
		case 1:
			iVar0 = 75;
			break;
		case 2:
			iVar0 = 76;
			break;
		case 3:
			iVar0 = 77;
			break;
		default:
			iVar0 = 2;
			break;
	}
	if (!func_74(uParam0->f_194, 524288))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			if (func_20(uParam0, &(uParam0->f_189), func_19(iVar0), 0, 1, 1))
			{
				uParam0->f_197++;
			}
		}
	}
	else if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_189, func_19(71)) && !ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_189, false))
	{
		if (func_20(uParam0, &(uParam0->f_189), func_19(54), 0, 0, 0))
		{
			func_184(&(uParam0->f_98), &(uParam0->f_126));
			func_84(&(uParam0->f_194), 128);
		}
	}
}

void func_38(var uParam0, int iParam1)
{
	if (func_185(uParam0->f_164[0], 0))
	{
		func_16(iParam1, 39);
		return;
	}
	if (!func_186(uParam0->f_164[0], joaat("SCRIPT_TASK_INTIMIDATED")) && !func_74(uParam0->f_194, 524288))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_164[0], true, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_164[0], 2368.934f, -860.5748f, 42.0232f, true, false, true, true);
		TASK::_TASK_INTIMIDATED_2(uParam0->f_164[0], Global_35, 0, 1, 1, 1, 1, 1, 0);
		func_75(&(uParam0->f_194), 16777216);
		func_16(iParam1, 29);
	}
}

void func_39(var uParam0, int iParam1)
{
	if (!func_186(uParam0->f_164[0], joaat("SCRIPT_TASK_INTIMIDATED")))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_164[0], true, false);
		TASK::_TASK_INTIMIDATED_2(uParam0->f_164[0], Global_35, 0, 1, 1, 1, 1, 1, 0);
	}
	if (uParam0->f_200 >= 2)
	{
		if (!func_62(&(uParam0->f_145)))
		{
			func_97(&(uParam0->f_145), 0f);
		}
		else if (func_156(&(uParam0->f_145)) >= 15000)
		{
			func_83(uParam0->f_164[0], func_187(uParam0->f_201), -417894478, Global_35, 0, "SWAMP_WEIRDO", func_188(uParam0->f_201), 1);
			func_63(&(uParam0->f_145));
			if (uParam0->f_201 >= 3)
			{
				uParam0->f_201 = 0;
			}
			else
			{
				uParam0->f_201++;
			}
		}
	}
	if (func_185(uParam0->f_164[0], 0))
	{
		func_16(iParam1, 39);
	}
}

void func_40(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!func_90(uParam0->f_164[0], Global_35, 32f, 1) && !func_74(uParam0->f_194, 134217728))
	{
		return;
	}
	switch (uParam0->f_188)
	{
		case 0:
			iVar0 = 60;
			break;
		case 1:
			iVar0 = 61;
			break;
		case 2:
			iVar0 = 62;
			break;
		case 3:
			iVar0 = 60;
			break;
		case 4:
			iVar0 = 61;
			break;
	}
	if (func_74(uParam0->f_195, 128))
	{
		Global_1396257[25 /*638*/][0 /*48*/].f_43 = 1;
		Global_1396257[25 /*638*/][0 /*48*/].f_42 = 1;
		func_84(&(uParam0->f_195), 128);
		func_76(uParam0->f_154, uParam0->f_195);
	}
	if (func_20(uParam0, &(uParam0->f_189), func_19(iVar0), 0, 1, 1))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
		func_182(25);
		func_56(862008394, 1, 0, 0);
		func_56(-349384993, 1, 0, 0);
		func_16(iParam1, 23);
	}
}

void func_41(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_74(uParam0->f_194, 262144))
	{
		func_189();
		func_75(&(uParam0->f_194), 262144);
	}
	switch (uParam0->f_188)
	{
		case 0:
			iVar0 = 78;
			break;
		case 1:
			iVar0 = 78;
			break;
		case 2:
			iVar0 = 78;
			break;
		case 3:
			iVar0 = 78;
			break;
		case 4:
			iVar0 = 78;
			break;
	}
	if (Global_1935689.f_1)
	{
		func_190(0);
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_191, false))
	{
		func_20(uParam0, &(uParam0->f_191), func_19(iVar0), 0, 1, 1);
	}
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_191) >= 0.99f || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_191, false))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_173(uParam0->f_207);
		MAP::DISPLAY_RADAR(false);
		func_182(25);
		Global_1357522.f_10[0] = 0;
		Global_1357522.f_10[1] = 0;
		func_191(25, 32768);
		func_16(iParam1, 32);
	}
}

bool func_42(var uParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_180))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_180, true, 0))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_184))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_184);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_185))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_185);
	}
	func_56(-349384993, 0, 1, 0);
	func_56(862008394, 0, 1, 0);
	return true;
}

void func_43(var uParam0, int iParam1)
{
	if (uParam0->f_196 > 0)
	{
		func_16(iParam1, 21);
		return;
	}
	else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_189, func_19(12)))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_189) > 0.15f)
		{
			func_16(iParam1, 22);
			return;
		}
		else
		{
			func_16(iParam1, 21);
			return;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_164[0]))
	{
		func_77(uParam0);
		func_16(iParam1, 30);
	}
	else
	{
		func_16(iParam1, 22);
		return;
	}
}

void func_44(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		return;
	}
	switch (uParam0->f_188)
	{
		case 0:
			iVar0 = 54;
			break;
		case 1:
			iVar0 = 88;
			break;
		case 2:
			iVar0 = 56;
			break;
		case 3:
			iVar0 = 55;
			break;
		case 4:
			iVar0 = 56;
			break;
	}
	if (func_20(uParam0, &(uParam0->f_189), func_19(iVar0), 0, 1, 0))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
		uParam0->f_206 = 1;
		func_16(iParam1, 23);
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_164[0]) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_189, false))
	{
		func_77(uParam0);
		func_16(iParam1, 30);
	}
}

void func_45(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		return;
	}
	switch (uParam0->f_188)
	{
		case 0:
			iVar0 = 57;
			break;
		case 1:
			iVar0 = 58;
			break;
		case 2:
			iVar0 = 59;
			break;
		case 3:
			iVar0 = 58;
			break;
		case 4:
			iVar0 = 59;
			break;
	}
	if (func_20(uParam0, &(uParam0->f_189), func_19(iVar0), 0, 1, 0))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
		uParam0->f_206 = 1;
		func_16(iParam1, 23);
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_164[0]) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_189, false))
	{
		func_77(uParam0);
		func_16(iParam1, 30);
	}
}

void func_46(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		return;
	}
	if (func_42(uParam0))
	{
		func_48(uParam0, iParam1);
		return;
	}
	if (func_20(uParam0, &(uParam0->f_189), func_19(47), 0, 1, 0))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SwampWeirdoBubble");
		uParam0->f_206 = 1;
		func_16(iParam1, 23);
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_164[0]) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_189, false))
	{
		func_56(-349384993, 1, 0, 1);
		func_56(862008394, 1, 0, 1);
		uParam0->f_206 = 1;
		func_192(uParam0, iParam1);
	}
}

void func_47(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	switch (uParam0->f_197)
	{
		case 0:
			iVar0 = 63;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 65;
			break;
		case 3:
			iVar0 = 66;
			break;
		case 4:
			iVar0 = 67;
			break;
		case 5:
			iVar0 = 68;
			break;
		default:
			uParam0->f_197 = 0;
			break;
	}
	if (func_20(uParam0, &(uParam0->f_189), func_19(iVar0), 0, 1, 0))
	{
		uParam0->f_197++;
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_189, false))
	{
		func_56(862008394, 1, 0, 1);
		func_56(-349384993, 1, 0, 1);
		uParam0->f_206 = 1;
		func_192(uParam0, iParam1);
	}
}

void func_48(var uParam0, int iParam1)
{
	func_193(uParam0);
	func_77(uParam0);
	if (!func_62(&(uParam0->f_151)))
	{
		func_97(&(uParam0->f_151), 0f);
		func_83(uParam0->f_164[0], "GET_AWAY_FROM_ME", -417894478, Global_35, 1, 0, 0, 1);
	}
	else if (func_156(&(uParam0->f_151)) >= 7000)
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_164[0]))
		{
			func_83(uParam0->f_164[0], "GET_AWAY_FROM_ME", -417894478, Global_35, 1, 0, 0, 1);
			func_97(&(uParam0->f_151), 0f);
			func_63(&(uParam0->f_151));
		}
	}
	if (!func_42(uParam0))
	{
		func_56(-349384993, 1, 0, 1);
		func_56(862008394, 1, 0, 1);
	}
	if (func_185(uParam0->f_164[0], 0))
	{
		func_16(iParam1, 39);
	}
}

void func_49(var uParam0, int iParam1)
{
	if (func_52(uParam0->f_154))
	{
		switch (*iParam1)
		{
			case 4:
				break;
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 31:
			case 33:
			case 34:
			case 36:
			case 37:
				break;
			case 20:
			case 23:
			case 25:
			case 27:
				break;
			case 39:
				func_194(25, &(uParam0->f_164[0]), &(uParam0->f_194), 4);
				if (func_74(uParam0->f_195, 64))
				{
				}
				func_195(joaat("CSTAG_SP_SWAMP_WEIRDO_POST"), 1017034651, 1120952528, -1, 1, 1, 0);
				func_1(uParam0);
				break;
			case 17:
			case 19:
				break;
		}
	}
}

void func_50(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_196(0, -1);
	}
	func_189();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

void func_51(var uParam0)
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
	if (func_62(&(uParam0->f_13)))
	{
		func_63(&(uParam0->f_13));
	}
}

bool func_52(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_53(int iParam0)
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
		iVar0 = func_197(iParam0);
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

bool func_54(int iParam0)
{
	int iVar0;

	iVar0 = func_198(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_55(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_52(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_54(iParam0) && !func_53(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_199(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_54(iParam0))
	{
		iParam2 = -1;
	}
	if (func_197(iParam0) == 3 || (func_197(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_199(iParam0))))
	{
		func_201(func_200(iParam0), func_199(iParam0), iParam2);
		if ((!func_52(Global_1572864.f_8) && !func_202(0, 1, 0)) && !func_203(Global_1935630, 32768))
		{
			iVar0 = func_204(iParam0);
			if (iVar0 != -1)
			{
				func_205(0);
			}
			else if (func_200(iParam0) == 8)
			{
				iVar0 = func_206();
				if (iVar0 != -1)
				{
					func_205(0);
				}
			}
		}
	}
	func_207(iParam0, 0);
	if (func_208(0) == iParam0)
	{
		func_209(1);
		func_210(0);
		func_211(1);
	}
	func_212(iParam0, 1);
	func_213(iParam0);
}

void func_56(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_214(iParam0))
	{
		if (bParam3)
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0);
		}
		func_215(iParam0, bParam1, fVar0, 0, bParam2, 0, 0, 0);
	}
}

void func_57(int iParam0, int iParam1)
{
	func_216(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 0);
}

void func_58(var uParam0)
{
	if (!PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, false);
}

void func_59(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
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

void func_60(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bParam0, 7, 0, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bParam0, 3, 2, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bParam0, 4, 2, true);
}

void func_61(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_217(vVar0, 0);
}

bool func_62(var uParam0)
{
	return func_218(*uParam0, 1);
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_64(int iParam0, int iParam1)
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
	if (func_74(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_74(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_74(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_65(var uParam0, bool bParam1)
{
	if (bParam1 || !func_62(uParam0))
	{
		func_219(uParam0);
	}
}

float func_66(var uParam0)
{
	if (!func_62(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_220(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_221() - uParam0->f_1);
}

bool func_67(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_222(0) == 1 || func_222(0) == 2) || func_222(0) == 8) || func_203(Global_1935630, 2048))
			{
				func_75(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_222(0) == 11)
			{
				func_75(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_222(0) == 6)
			{
				func_75(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_75(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_223(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_223(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_96();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_223(iVar2) > func_223(iVar1))
				{
					if (func_223(iVar0) > func_223(iVar2) + 1 || func_223(iVar0) < func_223(iVar1))
					{
						func_75(uParam2, 32);
					}
				}
				else if (func_223(iVar0) > func_223(iVar2) + 1 && func_223(iVar0) < func_223(iVar1))
				{
					func_75(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((func_224(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_224(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_225(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_225(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_226(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_75(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_227(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_228(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_62(&(uParam2->f_13)))
					{
						func_97(&(uParam2->f_13), 0f);
					}
					else if (func_156(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_63(&(uParam2->f_13));
						func_75(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_62(&(uParam2->f_13)))
					{
						func_63(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_229())
			{
				func_75(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_230())
			{
				func_75(uParam2, 2048);
			}
		}
		if (func_203(Global_1935630, 16384) || Global_1430231.f_4)
		{
			func_75(uParam2, 128);
		}
		if (func_231(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			func_75(uParam2, 256);
		}
	}
	if ((((((((((func_74(*uParam2, 2) || func_74(*uParam2, 4)) || func_74(*uParam2, 8)) || func_74(*uParam2, 16)) || func_74(*uParam2, 32)) || func_74(*uParam2, 64)) || func_74(*uParam2, 128)) || func_74(*uParam2, 256)) || func_74(*uParam2, 512)) || func_74(*uParam2, 1024)) || func_74(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_68(var uParam0, int iParam1)
{
	if (func_232(iParam1))
	{
		return !(uParam0->f_1 && iParam1) != 0;
	}
	else
	{
		switch (iParam1)
		{
			case 262144:
				return func_233(*uParam0, 4);
			case 32:
				return func_233(*uParam0, 8);
			case 8192:
				return func_233(*uParam0, 16);
			case 64:
				return func_233(*uParam0, 32);
			case 32768:
				return func_233(*uParam0, 64);
			case 65536:
				return func_233(*uParam0, 1024);
			case 4096:
				return func_233(*uParam0, 262144);
			case 512:
				return func_233(*uParam0, 1048576);
			default:
				break;
		}
	}
	return false;
}

void func_69(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 2);
	}
	else
	{
		func_235(&(uParam0->f_1), 2);
	}
}

void func_70(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_71(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_236(uParam2, 1, iVar0);
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
			if (func_237(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_238(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_239(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_240(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_241(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_242(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_238(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_243(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_244(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_238(bParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_245(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_238(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_246(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_246(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_238(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_247(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_248(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_249(uParam2, 4000))
				{
					if ((func_250(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_251(uParam2, bParam0)) && func_252(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_238(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_250(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_251(uParam2, bParam0)) && func_252(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_253(bParam0, Global_1935630.f_41))
							{
								func_254();
								*uParam3 = 2;
								func_238(bParam0, uParam2, *uParam3);
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
						if (func_253(bParam0, Global_1935630.f_41))
						{
							func_254();
							*uParam3 = 2;
							func_238(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_255(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_256() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_254();
						*uParam3 = 2;
						func_238(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_257())
					{
						if (func_253(bParam0, Global_1935630.f_42))
						{
							func_254();
							*uParam3 = 2;
							func_238(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_258(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_238(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_259(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_260(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_238(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_261(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_262(uParam2, 4000))
				{
					if (func_263(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_238(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_264(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_238(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_265(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_238(bParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_72(int iParam0)
{
	func_266(iParam0, 0, 0);
	if (func_267(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1;
	}
	return false;
}

bool func_73(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_UNARMED"), 0))
		{
			return true;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44) && WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44))
		{
			if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, Global_1935630.f_44, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_74(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_75(var uParam0, int iParam1)
{
	func_92(uParam0, iParam1);
}

void func_76(int iParam0, int iParam1)
{
	if (!func_52(iParam0))
	{
		return;
	}
	func_268(iParam0, iParam1);
}

void func_77(var uParam0)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_180))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_164[0], uParam0->f_180, true, 0))
	{
		if (!func_186(uParam0->f_164[0], 242628503))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_164[0], true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_164[0], false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 153, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, 2371.571f, -864.7126f, 42.0645f, 1.75f, 20000, 203.0968f, 0.5f, 0);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 6000f, -1, 0, 3f, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_164[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_164[0], 17, true);
			PED::SET_PED_KEEP_TASK(uParam0->f_164[0], true);
			if (!func_74(uParam0->f_194, 67108864))
			{
				PED::_0xAAB050DA48B57978(uParam0->f_164[0], "Flee_Human_MajorThreat", false, -1, 4);
				func_75(&(uParam0->f_194), 67108864);
			}
			func_75(&(uParam0->f_194), 16777216);
			return;
		}
	}
	else if (!func_186(uParam0->f_164[0], 518218985) && !PED::IS_PED_RESPONDING_TO_THREAT(uParam0->f_164[0]))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_164[0], true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_164[0], false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 153, false);
		TASK::TASK_SMART_FLEE_PED(uParam0->f_164[0], Global_35, 6000f, -1, 0, 3f, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_164[0], 17, true);
		PED::SET_PED_KEEP_TASK(uParam0->f_164[0], true);
		if (!func_74(uParam0->f_194, 67108864))
		{
			PED::_0xAAB050DA48B57978(uParam0->f_164[0], "Flee_Human_MajorThreat", false, -1, 4);
			func_75(&(uParam0->f_194), 67108864);
		}
		func_75(&(uParam0->f_194), 16777216);
		return;
	}
	else if (!func_186(uParam0->f_164[0], 518218985))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_164[0], true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_164[0], false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 153, false);
		TASK::TASK_SMART_FLEE_PED(uParam0->f_164[0], Global_35, 6000f, -1, 0, 3f, false);
		PED::SET_PED_KEEP_TASK(uParam0->f_164[0], true);
		if (!func_74(uParam0->f_194, 67108864))
		{
			PED::_0xAAB050DA48B57978(uParam0->f_164[0], "Flee_Human_MajorThreat", false, -1, 4);
			func_75(&(uParam0->f_194), 67108864);
		}
		func_75(&(uParam0->f_194), 16777216);
		return;
	}
}

bool func_78(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

void func_79(var uParam0, bool bParam1, var uParam2, int iParam3, var uParam4, int iParam5)
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
	if (!func_62(uParam4))
	{
		func_97(uParam4, 0f);
	}
	else if (func_156(uParam4) > 1000)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, bParam1, true, 0))
		{
			if (func_269(uParam0, &uVar0, &uVar2, 5, bParam1, 0, 0, -1) > 0)
			{
				iParam3->f_3 = uVar0[0];
				func_97(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			iParam3->f_3 = Global_35;
			func_97(uParam4, 0f);
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

bool func_80(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_62(uParam2))
		{
			func_97(uParam2, 0f);
			return false;
		}
		else if (func_156(uParam2) > iParam6)
		{
			func_63(uParam2);
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
			fParam7 = func_270(*uParam0, Global_35, 1, 1);
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

void func_81(var uParam0)
{
	if (func_74(uParam0->f_194, 4) || uParam0->f_200 >= 2)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		return;
	}
	if ((func_74(uParam0->f_194, 4) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0])) || !func_74(uParam0->f_194, 32768))
	{
		func_271(&(uParam0->f_255[0 /*17*/]), 0, 0);
		func_271(&(uParam0->f_255[1 /*17*/]), 0, 0);
	}
	else
	{
		func_271(&(uParam0->f_255[0 /*17*/]), 0, 0);
		func_271(&(uParam0->f_255[1 /*17*/]), 1, 0);
	}
	switch (func_273(&(uParam0->f_164[0]), &(uParam0->f_234), 20f, &(uParam0->f_255), 0f, 2, 0, "", func_272(3, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */))
	{
		case 1:
			if (!func_74(uParam0->f_194, 4))
			{
				func_271(&(uParam0->f_255[0 /*17*/]), 0, 0);
				func_271(&(uParam0->f_255[1 /*17*/]), 0, 0);
				func_274(&(uParam0->f_255), 0, 0, 1, 0);
				if (uParam0->f_200 == 0)
				{
					func_83(Global_35, "GREET_CAUGHT_OUT", -417894478, uParam0->f_164[0], 0, 0, 6, 1);
				}
				else
				{
					func_83(Global_35, "INSULT_POST_CRIME_CONV_PART1", -417894478, uParam0->f_164[0], 0, 0, 4, 1);
				}
				func_75(&(uParam0->f_194), 4);
				func_75(&(uParam0->f_194), 8192);
				uParam0->f_200++;
			}
			break;
	}
}

void func_82(var uParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		return;
	}
	if (((func_74(uParam0->f_194, 65536) || func_74(uParam0->f_194, 131072)) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0])) || !func_74(uParam0->f_194, 1024))
	{
		if (uParam0->f_302 != 3)
		{
			func_275(&(uParam0->f_234), 0);
			func_85(uParam0);
			func_271(&(uParam0->f_255[0 /*17*/]), 0, 0);
			func_271(&(uParam0->f_255[1 /*17*/]), 0, 0);
			uParam0->f_302 = 3;
		}
	}
	else if (uParam0->f_302 != 2)
	{
		func_275(&(uParam0->f_234), 0);
		func_85(uParam0);
		func_271(&(uParam0->f_255[0 /*17*/]), 1, 0);
		func_271(&(uParam0->f_255[1 /*17*/]), 1, 0);
		uParam0->f_302 = 2;
	}
	switch (func_273(&(uParam0->f_164[0]), &(uParam0->f_234), 20f, &(uParam0->f_255), 0f, 2, 0, "", func_272(uParam0->f_302, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */))
	{
		case 0:
			if (!func_74(uParam0->f_194, 65536))
			{
				func_271(&(uParam0->f_255[0 /*17*/]), 0, 0);
				func_271(&(uParam0->f_255[1 /*17*/]), 0, 0);
				if (uParam0->f_196 < 2)
				{
					func_83(Global_35, "GREET_MALE", -417894478, uParam0->f_164[0], 1, 0, 0, 1);
				}
				else
				{
					Var0 = { func_276(uParam0->f_188) };
					func_83(Global_35, Var0, -417894478, uParam0->f_164[0], 0, 0, Var0.f_1, 1);
				}
				func_85(uParam0);
				func_75(&(uParam0->f_194), 65536);
			}
			break;
		case 1:
			if (!func_74(uParam0->f_194, 131072))
			{
				func_271(&(uParam0->f_255[0 /*17*/]), 0, 0);
				func_271(&(uParam0->f_255[1 /*17*/]), 0, 0);
				Var2 = { func_277(uParam0->f_188) };
				func_83(Global_35, Var2, -417894478, uParam0->f_164[0], 0, 0, Var2.f_1, 1);
				func_85(uParam0);
				func_75(&(uParam0->f_194), 131072);
			}
			break;
	}
}

bool func_83(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_278(iParam0, &Var0);
}

void func_84(var uParam0, int iParam1)
{
	func_93(uParam0, iParam1);
}

void func_85(var uParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	Var0 = "SPD_UC_GRT";
	Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	Var2 = "SPD_UC_ANT";
	Var2.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
	func_279(&(uParam0->f_255[0 /*17*/]), Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
	func_279(&(uParam0->f_255[1 /*17*/]), Var2, "", Var2.f_1, 0, 0, 0, 1, 0);
}

void func_86(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_280(uParam0[iVar0 /*17*/], 9);
		iVar0++;
	}
}

void func_87()
{
	Global_1905944.f_5695 = 1;
}

int func_88(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 49, true);
		return 1;
	}
	return 0;
}

char* func_89(int iParam0)
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

bool func_90(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_91(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_92(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_94()
{
	if (((!func_281() && !func_186(Global_35, -208384378)) && (!ENTITY::DOES_ENTITY_EXIST(func_282()) || !ENTITY::IS_ENTITY_IN_AIR(func_282(), 1))) && (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35)) || !ENTITY::IS_ENTITY_IN_AIR(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), 1)))
	{
		return 1;
	}
	if (func_283())
	{
		func_284();
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		if (!func_186(Global_35, -208384378))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), func_285(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
		}
	}
	return 0;
}

void func_95(int iParam0)
{
	Global_1935496.f_29 = (Global_1935496.f_29 || iParam0);
}

int func_96()
{
	return Global_1899515;
}

void func_97(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_221() - fParam1);
	func_286(uParam0, 1);
	func_287(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_98(int iParam0)
{
	return iParam0 != -15;
}

void func_99(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_96();
}

char* func_100()
{
	return "script@specialped@pdswo_swamp_weirdo_sonny@ig@ig_1@ig_1";
}

char* func_101()
{
	return "script@specialped@pdswo_swamp_weirdo_sonny@ig@ig_1@ig_1_chair_placement";
}

char* func_102()
{
	return "pl_IG1_CHAIR_PLACEMENT";
}

char* func_103()
{
	return "script@specialped@pdswo_swamp_weirdo_sonny@ig@ig_1@ig_1_blackout";
}

char* func_104()
{
	return "script@specialped@pdswo_swamp_weirdo_sonny@ig@ig_2@ig_2";
}

char* func_105(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_IG2_WAKE_UP_PETTING_A";
			break;
		case 1:
			sVar0 = "pl_IG2_WAKE_UP_PETTING_B";
			break;
		case 2:
			sVar0 = "pl_IG2_WAKE_UP_PETTING_C";
			break;
		case 3:
			sVar0 = "pl_IG2_WAKE_UP_PETTING_D";
			break;
		case 4:
			sVar0 = "pl_IG2_WAKE_UP_PETTING_E";
			break;
		case 5:
			sVar0 = "pl_IG2_WAKE_UP_PETTING_F";
			break;
		case 6:
			sVar0 = "pl_IG2_WAKE_UP_PETTING_G";
			break;
	}
	return sVar0;
}

char* func_106()
{
	return "script@specialped@pdswo_swamp_weirdo_sonny@ig@ig_3@ig_3";
}

char* func_107()
{
	return "pl_IG3_WAKE_UP_WILDERNESS";
}

void func_108(var uParam0)
{
	struct<11> /*88*/ sVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_175))
	{
		Var0 = { func_152(0) };
		uParam0->f_175 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_176))
	{
		Var0 = { func_152(1) };
		uParam0->f_176 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_177))
	{
		Var0 = { func_152(2) };
		uParam0->f_177 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_178))
	{
		Var0 = { func_152(3) };
		uParam0->f_178 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_179))
	{
		Var0 = { func_152(4) };
		uParam0->f_179 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_180))
	{
		Var0 = { func_152(5) };
		uParam0->f_180 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_182))
	{
		Var0 = { func_152(6) };
		uParam0->f_182 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_183))
	{
		Var0 = { func_152(7) };
		uParam0->f_183 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
}

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	uParam0->f_207 = func_96();
	func_288(&(uParam0->f_207), 0, 0, 0, 1, 0, 0, 0);
	iVar0 = func_289(uParam0->f_207);
	iVar1 = func_290(uParam0->f_207);
	iVar2 = func_291(uParam0->f_207);
	func_292(&(uParam0->f_207), 0, 0, 1, iVar0, iVar1, iVar2);
	uParam0->f_208 = func_96();
	func_288(&(uParam0->f_208), 0, 0, 0, 1, 0, 0, 0);
	iVar0 = func_289(uParam0->f_208);
	iVar1 = func_290(uParam0->f_208);
	iVar2 = func_291(uParam0->f_208);
	func_292(&(uParam0->f_208), 0, 28, 6, iVar0, iVar1, iVar2);
}

int func_110(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return 1;
	}
	*uParam0 = func_293(vParam1, vParam4);
	return 0;
}

int func_111(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_294(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_112(int iParam0)
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

int func_113(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_295())
	{
		iVar2 = func_295();
	}
	iVar5 = func_296(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_297(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_297(iVar6) == 0)
			{
				return func_298(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_297(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_297(iVar6) == 0)
			{
				return func_298(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_298(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_114()
{
	if (func_299() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_115(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_300(uParam0, iParam1, sParam2))
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

void func_116(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_117(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 16384);
	}
	else
	{
		func_235(&(uParam0->f_1), 16384);
	}
}

void func_118(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 131072);
	}
	else
	{
		func_235(&(uParam0->f_1), 131072);
	}
}

void func_119(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 4);
	}
	else
	{
		func_234(uParam0, 4);
	}
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 8);
	}
	else
	{
		func_235(&(uParam0->f_1), 8);
	}
}

void func_121(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 8);
	}
	else
	{
		func_234(uParam0, 8);
	}
}

void func_122(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 32);
	}
	else
	{
		func_234(uParam0, 32);
	}
}

void func_123(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 64);
	}
	else
	{
		func_234(uParam0, 64);
	}
}

void func_124(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 16);
	}
	else
	{
		func_234(uParam0, 67108864);
		func_234(uParam0, 16);
	}
}

void func_125(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 524288);
	}
	else
	{
		func_234(uParam0, 524288);
	}
}

void func_126(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 256);
	}
	else
	{
		func_234(uParam0, 256);
	}
}

void func_127(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 2);
	}
	else
	{
		func_234(uParam0, 2);
	}
}

void func_128(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 256);
	}
	else
	{
		func_235(&(uParam0->f_1), 256);
	}
}

void func_129(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 4);
	}
	else
	{
		func_235(&(uParam0->f_1), 4);
	}
}

void func_130(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 16);
	}
	else
	{
		func_235(&(uParam0->f_1), 16);
	}
}

void func_131(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 2048);
	}
	else
	{
		func_235(&(uParam0->f_1), 2048);
	}
}

void func_132(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 1);
	}
	else
	{
		func_235(&(uParam0->f_1), 1);
	}
}

void func_133(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 128);
	}
	else
	{
		func_234(uParam0, 128);
	}
}

void func_134(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 128);
	}
	else
	{
		func_235(&(uParam0->f_1), 128);
	}
}

void func_135(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 8388608);
	}
	else
	{
		func_234(uParam0, 8388608);
	}
}

void func_136(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_234(&(uParam0->f_1), 524288);
	}
	else
	{
		func_235(&(uParam0->f_1), 524288);
	}
}

int func_137(int iParam0)
{
	if (!func_52(iParam0))
	{
		return -1;
	}
	return func_301(iParam0);
}

bool func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!func_74(uParam0->f_195, 128))
	{
		return false;
	}
	if (func_98(Global_40.f_11623[25 /*8*/].f_2))
	{
		func_302(Global_40.f_11623[25 /*8*/].f_2, &uVar5, &uVar4, &uVar3, &iVar2, &iVar1, &iVar0);
		if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 > 1)
		{
			if (func_74(uParam0->f_195, 128))
			{
				Global_1396257[25 /*638*/][0 /*48*/].f_43 = 0;
				Global_1396257[25 /*638*/][0 /*48*/].f_42 = 0;
				func_84(&(uParam0->f_195), 128);
				func_76(uParam0->f_154, uParam0->f_195);
			}
			return false;
		}
	}
	return true;
}

bool func_139(int iParam0, bool bParam1)
{
	switch (func_198(iParam0))
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

bool func_140(var uParam0, var uParam1)
{
	if (func_52(*uParam0))
	{
		*uParam1 = func_137(*uParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

struct<4> /*32*/ func_141(int iParam0)
{
	struct<4> /*32*/ sVar0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 2368.588f, -859.9452f, 42.0223f };
			Var0.f_3 = 198.7042f;
			break;
		case 1:
			Var0 = { 2369.844f, -862.8788f, 42.4906f };
			Var0.f_3 = -18.9f;
			break;
		case 2:
			Var0 = { 47.664f, -117.9f, 127.206f };
			Var0.f_3 = 0f;
			break;
		case 3:
			Var0 = { 2367.976f, -859.6101f, 42.0222f };
			Var0.f_3 = 2f;
			break;
		case 5:
			Var0 = { 2758.355f, -13.147f, 48.4821f };
			Var0.f_3 = 2f;
			break;
		case 4:
			Var0 = { 2759.136f, -12.6882f, 48.4821f };
			Var0.f_3 = 2f;
			break;
		case 6:
			Var0 = { 2589.263f, -634.9877f, 42.3028f };
			Var0.f_3 = 100f;
			break;
		case 7:
			Var0 = { 2368.216f, -859.5863f, 42.0222f };
			Var0.f_3 = 40f;
			break;
		case 10:
			Var0 = { 2586.165f, -646.8227f, 42.5847f };
			Var0.f_3 = 163.06f;
			break;
		case 8:
			Var0 = { 2371.258f, -863.9098f, 42.0223f };
			Var0.f_3 = 20.2825f;
			break;
		case 9:
			Var0 = { 2370.844f, -862.7205f, 44.5036f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

int func_142(var uParam0, bool bParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_303(bParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_303(bParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(var uParam0, int iParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_144(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_304(bParam0, iParam1))
		{
			if (func_305(bParam0, iParam1))
			{
				if (func_306(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_307(bParam0);
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

void func_145(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
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

int func_146(int iParam0, int iParam1)
{
	int iVar0;

	func_266(iParam0, 0, 0);
	if (func_267(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

Vector3 func_147()
{
	return 2588.725f, -640.0027f, 42.15f;
}

Vector3 func_148()
{
	return 0f, 0f, 0f;
}

int func_149(var uParam0)
{
	int iVar0;

	if (func_74(uParam0->f_195, 32))
	{
		iVar0 = 5;
		return iVar0;
	}
	if (!func_74(uParam0->f_195, 1))
	{
		iVar0 = 0;
		return iVar0;
	}
	else if (func_74(uParam0->f_195, 1) && !func_74(uParam0->f_195, 2))
	{
		iVar0 = 1;
		return iVar0;
	}
	else if (func_74(uParam0->f_195, 2) && !func_74(uParam0->f_195, 4))
	{
		iVar0 = 2;
		return iVar0;
	}
	else if (func_74(uParam0->f_195, 4) && !func_74(uParam0->f_195, 8))
	{
		iVar0 = 3;
		return iVar0;
	}
	else if (func_74(uParam0->f_195, 8) && !func_74(uParam0->f_195, 16))
	{
		iVar0 = 4;
		return iVar0;
	}
	else if (func_74(uParam0->f_195, 16))
	{
		iVar0 = 5;
		return iVar0;
	}
	return iVar0;
}

void func_150(var uParam0)
{
	switch (uParam0->f_188)
	{
		case 0:
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_192, func_105(2));
			break;
		case 1:
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_192, func_105(2));
			break;
		case 2:
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_192, func_105(2));
			break;
		case 3:
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_192, func_105(2));
			break;
	}
}

void func_151(int iParam0, int iParam1)
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

struct<11> /*88*/ func_152(int iParam0)
{
	struct<11> /*88*/ sVar0;

	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 2368.588f, -859.9452f, 42.0223f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2371.342f, -864.1272f, 42.0223f };
			Var0.f_4 = { 0f, 0f, 20.83756f };
			Var0.f_7 = { 1f, 1f, 3f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2372.087f, -867.349f, 42.0223f };
			Var0.f_4 = { 0f, 0f, 17.29333f };
			Var0.f_7 = { 9.33105f, 4.768036f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2373.028f, -869.4424f, 42.0223f };
			Var0.f_4 = { 0f, 0f, 108.4229f };
			Var0.f_7 = { 6f, 8f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 5:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2370.207f, -861.2794f, 42.86537f };
			Var0.f_4 = { 0f, 0f, 20f };
			Var0.f_7 = { 6.75f, 7f, 4f };
			Var0.f_10 = "Interior";
			break;
		case 4:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2370.385f, -861.6006f, 45f };
			Var0.f_4 = { 0f, 0f, 20f };
			Var0.f_7 = { 6.75f, 12f, 9f };
			Var0.f_10 = "ScenarioBlock";
			break;
		case 6:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2380.768f, -890.746f, 40.35974f };
			Var0.f_4 = { 0f, 0f, 20f };
			Var0.f_7 = { 40f, 30f, 20f };
			Var0.f_10 = "InFront";
			break;
		case 7:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2368.806f, -856.7123f, 43.53643f };
			Var0.f_4 = { 0f, 0f, 20f };
			Var0.f_7 = { 8f, 3f, 6f };
			Var0.f_10 = "BackPorch";
			break;
		case 8:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2370.315f, -861.0269f, 43.38567f };
			Var0.f_4 = { 0f, 0f, 20f };
			Var0.f_7 = { 6f, 5.990751f, 3f };
			Var0.f_10 = "AntiShack";
			break;
		case 9:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2372.402f, -862.1942f, 43.29328f };
			Var0.f_4 = { 0f, 0f, 20f };
			Var0.f_7 = { 2.242807f, 3f, 3f };
			Var0.f_10 = "AntiShack2";
			break;
	}
	return Var0;
}

void func_153(int iParam0, bool bParam1)
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

bool func_154(var uParam0, float fParam1, float fParam2)
{
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (fParam1 == 0f)
	{
		if (fParam2 == 0f)
		{
			if (func_90(Global_35, *uParam0, 25f, 1))
			{
				return true;
			}
		}
		else if (fParam2 <= 25f)
		{
			return true;
		}
	}
	else if (fParam2 == 0f)
	{
		if (func_90(Global_35, *uParam0, fParam1, 1))
		{
			return true;
		}
	}
	else if (fParam2 <= fParam1)
	{
		return true;
	}
	return false;
}

bool func_155(var uParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
	}
	return false;
}

int func_156(var uParam0)
{
	if (!func_62(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_220(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_256() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_157(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_164[0]))
	{
		return;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		return;
	}
	if (func_74(uParam0->f_194, 2097152))
	{
		return;
	}
	if (!func_308())
	{
		return;
	}
	if (func_74(uParam0->f_194, 128))
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_180))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_164[0], uParam0->f_180, true, 0))
		{
			return;
		}
	}
	if (func_309(Global_35, 0) == joaat("WEAPON_LASSO"))
	{
		func_83(uParam0->f_164[0], "PLAYER_LASSO_SWINGING", -417894478, Global_35, 1, 0, 0, 1);
		func_75(&(uParam0->f_194), 2097152);
	}
	else
	{
		func_83(uParam0->f_164[0], "PLAYER_WEAPON_EQUIPPED", -417894478, Global_35, 1, 0, 0, 1);
		func_75(&(uParam0->f_194), 2097152);
	}
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_310(iParam0, vVar0, iParam2);
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 3;
					break;
				case 1:
					iVar0 = 0;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = 6;
					break;
				case 3:
					iVar0 = 7;
					break;
				case 2:
					iVar0 = 8;
					break;
				case 1:
					iVar0 = 5;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 2;
					break;
				case 2:
					iVar0 = 4;
					break;
				case 1:
					iVar0 = 0;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 2;
					break;
				case 2:
					iVar0 = 4;
					break;
				case 1:
					iVar0 = 0;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 3;
					break;
				case 1:
					iVar0 = 0;
					break;
			}
			break;
	}
	return iVar0;
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_311(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_161(var uParam0)
{
	switch (uParam0->f_188)
	{
		case 0:
			func_75(&(uParam0->f_195), 1);
			break;
		case 1:
			func_75(&(uParam0->f_195), 2);
			break;
		case 2:
			func_75(&(uParam0->f_195), 4);
			break;
		case 3:
			func_75(&(uParam0->f_195), 8);
			break;
		case 4:
			func_75(&(uParam0->f_195), 16);
			break;
	}
	if (func_52(uParam0->f_154))
	{
		func_76(uParam0->f_154, uParam0->f_195);
	}
}

int func_162(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 7;
					break;
				case 2:
					iVar0 = 27;
					break;
				default:
					iVar0 = 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SONNY"));
					iVar0 = 32;
					break;
				case 1:
					iVar0 = 7;
					break;
				case 2:
					iVar0 = 28;
					break;
				default:
					iVar0 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 7;
					break;
				case 2:
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SONNY"));
					iVar0 = 29;
					break;
				default:
					iVar0 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = 26;
					break;
				case 1:
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SONNY"));
					iVar0 = 7;
					break;
				case 2:
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SONNY"));
					iVar0 = 30;
					break;
				default:
					iVar0 = 1;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 7;
					break;
				case 2:
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SONNY"));
					iVar0 = 31;
					break;
				default:
					iVar0 = 1;
					break;
			}
			break;
	}
	return iVar0;
}

bool func_163(int iParam0)
{
	func_266(iParam0, 0, 0);
	if (func_267(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return false;
}

void func_164(var uParam0)
{
	func_312(uParam0);
	func_271(&(uParam0->f_255[0 /*17*/]), 0, 0);
	func_271(&(uParam0->f_255[1 /*17*/]), 0, 0);
}

int func_165(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_166(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_167(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	int iVar0;

	switch (*iParam5)
	{
		case 0:
			if (!func_186(*uParam0, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam1, 1f, iParam6, fParam4, iParam7, 0);
				TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				PED::SET_PED_KEEP_TASK(*uParam0, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			else
			{
				*iParam5 = 1;
			}
			break;
		case 1:
			if (func_313(*uParam0, vParam1, fParam4, iParam7, fParam8, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) == 8)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_168(var uParam0)
{
	if (!func_62(&(uParam0->f_148)))
	{
		func_97(&(uParam0->f_148), 0f);
	}
	else if (func_156(&(uParam0->f_148)) >= 30000)
	{
		func_63(&(uParam0->f_148));
		return true;
	}
	return false;
}

void func_169(var uParam0)
{
	struct<11> /*88*/ sVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_181))
	{
		Var0 = { func_152(1) };
		uParam0->f_181 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_181, 1);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_181, 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 26, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_164[0], 169, true);
	}
}

int func_170(var uParam0)
{
	int iVar0;

	switch (uParam0->f_188)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 2;
			break;
		default:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_171(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_74(uParam0->f_195, 32))
		{
			func_75(&(uParam0->f_195), 32);
		}
	}
	else if (!func_74(uParam0->f_195, 64))
	{
		func_75(&(uParam0->f_195), 64);
	}
	if (func_52(uParam0->f_154))
	{
		func_76(uParam0->f_154, uParam0->f_195);
	}
}

bool func_172(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> /*16*/ sVar8;
	struct<6> /*48*/ sVar10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_314(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return false;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return false;
	}
	if (*uParam1)
	{
		if (func_315(uParam1->f_6))
		{
		}
	}
	bVar0 = func_316();
	if (*uParam1)
	{
		if (bVar0 && !func_139(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_317(5))
			{
				func_318(5);
				func_319(5);
				func_320(0);
				func_321(0);
			}
		}
	}
	if (func_322(Global_36) == 8)
	{
		*uParam0 = 1;
		return false;
	}
	if ((bVar0 && func_139(Global_1835011[37 /*74*/].f_1, 1)) && !func_139(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return false;
	}
	if ((bVar0 && func_139(Global_1835011[43 /*74*/].f_1, 1)) && !func_139(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return false;
		}
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_323(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_324(iVar1))
	{
		bVar3 = true;
		if (func_325(iVar1))
		{
			bVar4 = true;
		}
		if (func_326(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_327(uParam1->f_10);
				*uParam0 = 0;
				return false;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_317(0) && func_317(1))
			{
				func_328(1, 0);
				*uParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_329())
			{
				func_330();
			}
			func_320(0);
			func_321(0);
			func_331(uParam1->f_6);
		}
	}
	if (!func_324(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_332(uParam1->f_10) == 0 || func_333(uParam1->f_10) == 0) || func_334(uParam1->f_10) == 0)
			{
				func_335(uParam1->f_10);
			}
			func_336(uParam1->f_10);
			func_337(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return false;
		}
		*uParam0 = 1;
		return false;
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_323(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_324(iVar1))
	{
		bVar3 = true;
		if (func_325(iVar1))
		{
			bVar4 = true;
		}
		if (func_326(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(bVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(bVar2, false);
			}
			if (!func_315(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(bVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(bVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bVar2, false);
			}
		}
	}
	if (func_338(uParam1->f_10))
	{
		*uParam0 = 0;
		return false;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return false;
			}
			*uParam0 = 1;
			return false;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return false;
			}
			*uParam0 = 1;
			return false;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(bVar2))
			{
				*uParam0 = 0;
				return false;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != bVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { func_339(uParam1->f_10) };
			Var10 = { func_340() };
			func_341(bVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, bVar2);
			PED::SET_PED_CONFIG_FLAG(bVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return bVar2;
	}
	if (!func_342(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar2, true, true);
		func_343(uParam1->f_10);
		if (uParam1->f_2 && !func_315(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(bVar2, false);
			PHYSICS::_0x0348469DAA17576C(bVar2);
			ENTITY::SET_ENTITY_COORDS(bVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(bVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bVar2, false);
		}
		*uParam0 = 2;
		return bVar2;
	}
	func_344(uParam1->f_10);
	if (func_342(uParam1->f_10))
	{
		iVar16 = func_345(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return false;
		}
	}
	*uParam0 = 2;
	return bVar2;
}

void func_173(int iParam0)
{
	CLOCK::SET_CLOCK_TIME(func_223(iParam0), func_346(iParam0), func_347(iParam0));
	CLOCK::SET_CLOCK_DATE(func_289(iParam0), func_290(iParam0), func_291(iParam0));
}

void func_174(int iParam0)
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
}

float func_175(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_176(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;

	if (func_299() != -1)
	{
		return;
	}
	if (!func_348(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_349(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_350(iParam0), iVar0);
	func_352(func_351(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_353(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_354(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_354(func_355(iParam0), 1);
	}
	sVar1 = func_356(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_177(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_178(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_357(iParam0);
	if (bParam3)
	{
		func_358(iParam0, sParam1, iParam2);
	}
}

bool func_179(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_359(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_180(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_181(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_360(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_90(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

void func_182(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

bool func_183(int iParam0, int iParam1)
{
	int iVar0;

	if (func_299() == 0)
	{
		return false;
	}
	func_266(iParam0, 0, 0);
	if (func_267(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, 0);
		if (iVar0 != 0)
		{
			return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), iParam1);
		}
	}
	return false;
}

void func_184(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		uParam0->f_8 = func_256();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_361(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

bool func_185(int iParam0, bool bParam1)
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

bool func_186(int iParam0, int iParam1)
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

char* func_187(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "INTIMIDATED_GEN";
			break;
		case 1:
			sVar0 = "PANIC_HELP";
			break;
		default:
			sVar0 = "PLEAD";
			break;
	}
	return sVar0;
}

int func_188(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_189()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

void func_190(bool bParam0)
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

void func_191(int iParam0, int iParam1)
{
	func_216(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 1);
}

void func_192(var uParam0, int iParam1)
{
	ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_189, false);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_164[0], 2368.934f, -860.5748f, 42.0232f, true, false, true, true);
	TASK::_TASK_INTIMIDATED_2(uParam0->f_164[0], Global_35, 0, 1, 1, 1, 1, 1, 0);
	func_83(uParam0->f_164[0], "GENERIC_SHOCKED_HIGH", -417894478, Global_35, 0, "SWAMP_WEIRDO", 0, 1);
	func_63(&(uParam0->f_151));
	func_75(&(uParam0->f_194), 16777216);
	func_16(iParam1, 28);
}

void func_193(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
	{
		return;
	}
	if (!func_362(uParam0->f_164[0], 1))
	{
		return;
	}
	PED::SET_PED_MOVE_RATE_OVERRIDE(uParam0->f_164[0], 1.75f);
}

void func_194(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_91(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_364(func_363(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_365(func_363(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_96();
	func_92(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

int func_195(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_366(iParam0);
	iVar3 = func_367(iParam0);
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
				iVar1 = func_96();
				func_288(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_368(iParam0, 1);
			if (func_369(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_370(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_371(1, iParam0);
				}
				else
				{
					func_372(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_196(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_373(&Global_0, 8);
	}
	if (!func_316() || func_299() != -1)
	{
		return;
	}
	func_373(&Global_0, 1);
}

int func_197(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_374(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_198(int iParam0)
{
	if (!func_52(iParam0))
	{
		return -1;
	}
	return func_197(iParam0);
}

int func_199(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_200(int iParam0)
{
	if (!func_52(iParam0))
	{
		return 0;
	}
	return func_375(func_297(iParam0));
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_299() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_202(int iParam0, bool bParam1, bool bParam2)
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
		if (func_376())
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
		iVar0 = func_377(Global_1898164.f_1[0 /*5*/]);
		if (func_378(iVar0) && func_379(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_52(Global_1898164.f_1[0 /*5*/]))
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

bool func_203(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_204(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_200(iParam0))
	{
		case 1:
			iVar0 = func_377(iParam0);
			return func_380(iVar0);
		case 8:
			iVar1 = func_377(iParam0);
			if (func_379(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_381(iVar1);
			}
			break;
	}
	return -1;
}

void func_205(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_299() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_382(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_383();
		Global_1898077.f_9 = func_384(Global_1894899.f_2);
		func_385(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_206()
{
	if (!func_139(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_139(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_139(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_139(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_139(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_139(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_139(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_207(int iParam0, int iParam1)
{
	if (!func_52(iParam0))
	{
		return;
	}
	func_386(iParam0, iParam1);
}

int func_208(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_209(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_387(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_388(&Global_1935630, 4194304);
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

int func_210(bool bParam0)
{
	if (!bParam0 && func_389(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_211(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_212(int iParam0, bool bParam1)
{
	if (func_299() != -1)
	{
		return;
	}
	if (func_208(0) != iParam0)
	{
		return;
	}
	if (func_390(iParam0))
	{
		if (bParam1)
		{
			func_391(-525676072);
		}
		else
		{
			func_392(-525676072);
		}
	}
}

int func_213(int iParam0)
{
	return func_394(func_393(iParam0));
}

bool func_214(int iParam0)
{
	return iParam0 != 0;
}

void func_215(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_266(iParam0, 0, 0);
	if (func_267(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_395(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_396(iParam0, 1);
			}
			else
			{
				func_397(iParam0, 1);
			}
		}
		else
		{
			func_398(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_399())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_216(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_235(uParam0, iParam1);
	}
	else
	{
		func_234(uParam0, iParam1);
	}
}

void func_217(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_315(vParam0))
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
			if (func_400(vVar2, vParam0, 2f, 1))
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

bool func_218(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_219(var uParam0)
{
	func_97(uParam0, 0f);
}

bool func_220(var uParam0)
{
	return func_218(*uParam0, 2);
}

float func_221()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_222(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_223(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_224(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_54(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_225(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_53(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_226(int iParam0)
{
	int iVar0;

	iVar0 = func_401();
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

int func_227(var uParam0, var uParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_402(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_228(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_403(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
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
		if (!func_185(iVar1, 0))
		{
			func_404(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

bool func_229()
{
	return Global_1392040.f_6;
}

bool func_230()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_231(var uParam0, int iParam1)
{
	return func_233(*uParam0, iParam1);
}

bool func_232(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 128:
		case 256:
		case 1024:
		case 2048:
		case 16384:
		case 131072:
			return true;
		case 32:
		case 64:
		case 512:
		case 4096:
		case 8192:
		case 32768:
		case 65536:
		case 262144:
			return false;
		default:
			break;
	}
	return false;
}

bool func_233(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_235(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_236(var uParam0, bool bParam1, int iParam2)
{
	func_405(iParam2);
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
		uParam0->f_13 = func_406(0);
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
							func_235(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_407(1))
						{
							func_235(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_407(1) || *uParam0 & 8192 != 0))
				{
					func_234(uParam0, 33554432);
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
			if (func_408(uParam0))
			{
				uParam0->f_15 = func_256();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_256() - uParam0->f_15) > 500)
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
	func_409(uParam0);
}

bool func_237(bool bParam0, var uParam1)
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
			if (!func_410(bParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_411(bParam0, iVar2) <= func_412(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_238(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_413(iParam2, 1, 1, 1, 0))
	{
		func_235(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_361(uParam1, 1);
	func_414();
}

bool func_239(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_415(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_416(uParam1);
			if (func_417(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_418(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_361(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_361(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_240(bool bParam0, bool bParam1, var uParam2)
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
	if (func_419(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_416(uParam2);
		if (func_417(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_418(uParam2)
				{
					func_361(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_241(bool bParam0, var uParam1)
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
	if (func_410(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_418(uParam1)
		{
			fVar3 = func_416(uParam1);
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

int func_242(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_420(bParam1, bParam2, bParam3);
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

bool func_243(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_256();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_244(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_421(uParam2);
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
			if (func_252(uParam2, bParam1))
			{
				func_361(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_245(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_422(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_252(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_361(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_246(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_423(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_361(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_361(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_424(bParam1, vVar0, vVar4))
					{
						func_361(uParam2, 1);
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
					func_361(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_424(bParam1, vVar0, vVar7))
					{
						func_361(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_247(bool bParam0, var uParam1)
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
		if (!func_410(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_425(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_426(Global_1935630.f_34[iVar0]))
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
			if (func_427(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_428(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_429(uParam1, bParam0, fVar1, iVar0))
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

bool func_248(bool bParam0, var uParam1)
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

bool func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_256();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_250(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_430(bVar0, &iVar2))
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
	if (func_431(bVar0, bParam0))
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

int func_251(var uParam0, bool bParam1)
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

bool func_252(var uParam0, bool bParam1)
{
	if (func_432(uParam0))
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

bool func_253(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_270(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_254()
{
}

bool func_255(var uParam0, bool bParam1)
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
		if (func_433(iVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_256();
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
						if (func_434(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_256();
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

int func_256()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_257()
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
	if ((func_256() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_258(var uParam0, bool bParam1)
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
	fVar0 = func_412(uParam0);
	if (uParam0->f_12 > func_435(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_436(bParam1);
	iVar1 = func_437(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_259(bool bParam0, bool bParam1, var uParam2)
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
	return func_438(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_260(bool bParam0, var uParam1)
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
		if (func_439(bParam0, uParam1, 1))
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
					if (!func_440(uParam1, bParam0))
					{
						if (func_434(bVar4, Global_36, 1) < 7f)
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

bool func_261(bool bParam0, var uParam1)
{
	if (!func_441(0))
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

bool func_262(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_256();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_263(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_264(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_256();
	}
	else if (func_256() - uParam1->f_4) > func_442(uParam1)
	{
		return func_443(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_265(var uParam0, bool bParam1)
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

int func_266(int iParam0, bool bParam1, bool bParam2)
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

bool func_267(int iParam0)
{
	if (func_214(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_268(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

int func_269(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)
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
				if (func_444(bVar1, bParam5, bParam6, 1, 0, 0) && !DECORATOR::DECOR_EXIST_ON(bVar1, "bIgnoreThisPed"))
				{
					if (!func_445(bVar1, uParam2))
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

float func_270(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_271(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_446(iParam0, 13))
	{
		func_280(iParam0, 0);
	}
	else
	{
		func_447(iParam0, 0);
	}
	if (func_448(iParam0->f_6))
	{
		if (bParam2)
		{
			func_449(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_272(int iParam0, int iParam1, int iParam2)
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

int func_273(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_450(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_451(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_219(&(iParam1->f_13));
		}
		if (func_452(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_453(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_273(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_454(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_455(*uParam0, 1, 1);
						}
					}
					else if (func_456(iParam1, 22))
					{
						func_455(*uParam0, 0, 1);
					}
				}
				if (func_457(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_458(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_459(iParam8);
					if (func_460(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_461(uParam3);
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
					func_462(iParam1, uParam3, fVar8);
					if (func_463(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_274(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_464(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_457(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_465(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_460(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_458(uParam0, func_457(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_459(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_274(uParam3, 0, 0, 1, 1);
					}
					func_466(iParam1, 1);
				}
				func_462(iParam1, uParam3, fVar8);
				if (func_464(uParam0, iParam1, fParam4, bVar6))
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
			func_467(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_274(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_448((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_449(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_275(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_63(&(iParam0->f_18));
}

struct<2> /*16*/ func_276(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (func_114())
	{
		switch (iParam0)
		{
			case 0:
				Var0 = "GREET_THIRD_SO_ANYHOW_CONV";
				Var0.f_1 = 5;
				break;
			case 1:
				Var0 = "GREET_SECOND_SO_ANYHOW_CONV";
				Var0.f_1 = 6;
				break;
			case 2:
				Var0 = "GREET_SECOND_SO_ANYHOW_CONV";
				Var0.f_1 = 3;
				break;
			case 3:
				Var0 = "GREET_SECOND_SO_ANYHOW_CONV";
				Var0.f_1 = 4;
				break;
			case 4:
				Var0 = "GENERIC_SEGUE_YOU";
				Var0.f_1 = 10;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Var0 = "GREET_THIRD";
				Var0.f_1 = 2;
				break;
			case 1:
				Var0 = "GREET_THIRD";
				Var0.f_1 = 10;
				break;
			case 2:
				Var0 = "GREET_THIRD";
				Var0.f_1 = 12;
				break;
			case 3:
				Var0 = "GREET_THIRD";
				Var0.f_1 = 13;
				break;
			case 4:
				Var0 = "GREET_THIRD";
				Var0.f_1 = 15;
				break;
		}
	}
	return Var0;
}

struct<2> /*16*/ func_277(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (func_114())
	{
		switch (iParam0)
		{
			case 0:
				Var0 = "INSULT_MALE_CONV_PART1";
				Var0.f_1 = 19;
				break;
			case 1:
				Var0 = "INSULT_MALE_CONV_PART1";
				Var0.f_1 = 13;
				break;
			case 2:
				Var0 = "INSULT_MALE_CONV_PART1";
				Var0.f_1 = 3;
				break;
			case 3:
				Var0 = "INSULT_MET_EARLIER_CONV_PART1";
				Var0.f_1 = 1;
				break;
			case 4:
				Var0 = "INSULT_MET_EARLIER_CONV_PART1";
				Var0.f_1 = 5;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Var0 = "INSULT_SWAMPWEIRDO_CONV_PART1";
				Var0.f_1 = 1;
				break;
			case 1:
				Var0 = "INSULT_SWAMPWEIRDO_CONV_PART3";
				Var0.f_1 = 1;
				break;
			case 2:
				Var0 = "INSULT_SWAMPWEIRDO_CONV_PART1";
				Var0.f_1 = 2;
				break;
			case 3:
				Var0 = "INSULT_SWAMPWEIRDO_CONV_PART2";
				Var0.f_1 = 2;
				break;
			case 4:
				Var0 = "INSULT_SWAMPWEIRDO_CONV_PART3";
				Var0.f_1 = 2;
				break;
		}
	}
	return Var0;
}

bool func_278(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_279(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_448(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_468(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_469(iParam0->f_6, iParam0->f_5, 0);
			}
			func_470(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_471(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_280(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_281()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_283())
	{
		return true;
	}
	return false;
}

var func_282()
{
	return Global_1900383.f_393;
}

bool func_283()
{
	if (func_472(Global_35) || func_473(Global_35))
	{
		return true;
	}
	return false;
}

int func_284()
{
	if (func_472(Global_35) || func_473(Global_35))
	{
		if (!func_186(Global_35, -208384378))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, func_282(), func_285(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
		}
		return 0;
	}
	else if ((!func_472(Global_35) && !func_473(Global_35)) && !func_186(Global_35, -208384378))
	{
		return 1;
	}
	return 0;
}

Vector3 func_285(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_288(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_291(*iParam0);
	iVar1 = func_290(*iParam0);
	iVar2 = func_289(*iParam0);
	iVar3 = func_223(*iParam0);
	iVar4 = func_346(*iParam0);
	iVar5 = func_347(*iParam0);
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
	iVar6 = func_474(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_474(iVar1, iVar0);
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
	func_292(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_289(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_290(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_291(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_475(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

void func_292(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_476(iParam0, iParam6);
	func_477(iParam0, iParam5);
	func_478(iParam0, iParam4);
	func_479(iParam0, iParam3);
	func_480(iParam0, iParam2);
	func_481(iParam0, iParam1);
}

int func_293(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), false, 15);
}

int func_294(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_315(vParam0))
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
		if (func_482(vParam0))
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
	func_483(iVar0, bParam8);
	return iVar0;
}

int func_295()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_296(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_297(int iParam0)
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

int func_298(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_484(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_295())
	{
		return -1;
	}
	iVar0 = func_296(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_386(iVar1, 0);
	func_485(iVar1, 0);
	func_268(iVar1, 0);
	func_486(iVar1, 0);
	func_487(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_488(iVar1, iParam4);
	}
	return iVar1;
}

int func_299()
{
	return Global_1572887.f_12;
}

bool func_300(var uParam0, int iParam1, char* sParam2)
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

int func_301(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

void func_302(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_489(func_96(), iParam0, uParam1, uParam2, uParam3, iParam4, iParam5, iParam6);
}

bool func_303(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_490(bVar0, bParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

bool func_304(bool bParam0, int iParam1)
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

bool func_305(bool bParam0, int iParam1)
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

bool func_306(bool bParam0, int iParam1)
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
	if (!func_304(bParam0, iVar0))
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

void func_307(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_308()
{
	if (Global_1935630.f_44 != 0 && Global_1935630.f_44 != joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	return false;
}

int func_309(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_310(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_491(vVar3, vVar6);
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
	if (func_492(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_311(int iParam0)
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

void func_312(var uParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	Var0 = "SPD_UC_GRT";
	Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	Var2 = "SPD_UC_ANT";
	Var2.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
	func_279(&(uParam0->f_255[0 /*17*/]), Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
	func_279(&(uParam0->f_255[1 /*17*/]), Var2, "", Var2.f_1, 0, 0, 0, 1, 0);
}

bool func_313(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_493(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_493(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

int func_314(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_315(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_316()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_317(int iParam0)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_334(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_318(int iParam0)
{
	bool bVar0;
	int iVar1;

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_324(iParam0))
	{
		return;
	}
	bVar0 = func_323(iParam0);
	func_494(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(bVar0);
	if (PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
	{
		if (!func_495(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&bVar0);
	func_496(iParam0, 0);
	func_497(iParam0);
}

void func_319(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;

	iParam0 = func_314(iParam0);
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
	func_498(&Var0);
	func_499(iParam0, Var0);
	func_500(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_501(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_502(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_503(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_504(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_505(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_506(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_507(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_508(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
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

void func_320(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_321(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_322(vector3 vParam0)
{
	return func_509(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_323(int iParam0)
{
	iParam0 = func_314(iParam0);
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

bool func_324(int iParam0)
{
	iParam0 = func_314(iParam0);
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

bool func_325(int iParam0)
{
	int iVar0;

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_324(iParam0))
	{
		return false;
	}
	iVar0 = func_323(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_326(int iParam0)
{
	int iVar0;

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_324(iParam0))
	{
		return false;
	}
	iVar0 = func_323(iParam0);
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

void func_327(int iParam0)
{
	int iVar0;

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_324(iParam0))
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_328(int iParam0, int iParam1)
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
	func_510(iParam0);
	func_510(iParam0);
	func_511(iParam0, iParam1);
	func_512(iParam0, iParam1);
	func_513(iParam0, iParam1);
	bVar1 = func_323(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_514(bVar1);
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
	bVar3 = func_323(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(bVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_514(bVar3);
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
	func_515();
}

bool func_329()
{
	int iVar0;

	iVar0 = func_282();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_330()
{
	bool bVar0;

	bVar0 = func_282();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&bVar0);
	func_516(0);
}

void func_331(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_332(int iParam0)
{
	iParam0 = func_314(iParam0);
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

int func_333(int iParam0)
{
	iParam0 = func_314(iParam0);
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

int func_334(int iParam0)
{
	iParam0 = func_314(iParam0);
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

void func_335(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_517(&uVar0, &uVar1, &uVar2);
	func_518(iParam0, uVar0);
	func_519(iParam0, uVar1);
	func_520(iParam0, uVar2);
	func_521(iParam0, 1);
	func_522(iParam0, 1);
}

void func_336(int iParam0)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_523(iParam0, 1);
}

void func_337(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
}

bool func_338(int iParam0)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_524(iParam0, 1);
}

struct<2> /*16*/ func_339(int iParam0)
{
	struct<2> /*16*/ sVar0;
	var uVar2;
	var uVar3;

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_525(iParam0, &uVar2))
	{
	}
	if (!func_526(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> /*48*/ func_340()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_527(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_527(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_527(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_527(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_527(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_527(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_341(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(bParam0))
	{
		return;
	}
	func_528(bParam0);
	func_529(bParam0, uParam1);
	func_530(bParam0);
	func_531(bParam0, uParam2);
	if (iParam3 != 0)
	{
		func_532(bParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, true);
}

bool func_342(int iParam0)
{
	iParam0 = func_314(iParam0);
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

void func_343(int iParam0)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_344(int iParam0)
{
	int iVar0;

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_345(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_497(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_497(iParam0);
	}
}

int func_345(int iParam0)
{
	iParam0 = func_314(iParam0);
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

int func_346(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_347(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

bool func_348(int iParam0)
{
	if (!func_533(iParam0))
	{
		return false;
	}
	return func_534(iParam0);
}

int func_349(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_351(int iParam0)
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

void func_352(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_535(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_353(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

void func_354(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_536(iParam0, &iVar0, &iVar1);
	if (!func_537(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_538(iVar0, iVar1);
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

void func_357(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_177(1) < iParam0)
	{
		iParam0 = func_177(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_363(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_358(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_539(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

float func_359(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_360(int iParam0, int iParam1, float fParam2)
{
	return func_540(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

void func_361(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 134217728);
	}
	else
	{
		func_234(uParam0, 134217728);
	}
}

bool func_362(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_541(iVar0) || func_542(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

struct<2> /*16*/ func_363(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

int func_364(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_365(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_366(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_543(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_544(iVar6);
	}
	return iVar5;
}

int func_367(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_545(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_368(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_546(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_369(int iParam0)
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

void func_370(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_368(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_371(2, *uParam0);
		}
		else
		{
			func_372(2, *uParam0);
		}
	}
	func_547(uParam0);
}

void func_371(int iParam0, int iParam1)
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

void func_372(int iParam0, int iParam1)
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

void func_373(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_374(int iParam0)
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

int func_375(int iParam0)
{
	return iParam0 & 31;
}

bool func_376()
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

int func_377(int iParam0)
{
	if (!func_52(iParam0))
	{
		return -1;
	}
	return func_548(func_297(iParam0));
}

bool func_378(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_379(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_380(int iParam0)
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

int func_381(int iParam0)
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

void func_382(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_383()
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

int func_384(int iParam0)
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

void func_385(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_386(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_549(iParam0);
	}
	else
	{
		func_550(iParam0, iParam1);
	}
	func_551();
}

void func_387(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_388(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_389(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_552(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_390(int iParam0)
{
	if (!func_52(iParam0))
	{
		return false;
	}
	switch (func_200(iParam0))
	{
		case 1:
			switch (func_377(iParam0))
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
			switch (func_377(iParam0))
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

void func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_553(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_554(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_556(func_555(iParam0), 6);
}

void func_392(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_553(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_554(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_557(func_555(iParam0), 6);
}

int func_393(int iParam0)
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

int func_394(int iParam0)
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
	func_558(iParam0, Global_1898164.f_162);
	return 1;
}

void func_395(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_267(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_396(int iParam0, bool bParam1)
{
	if (func_267(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_397(int iParam0, bool bParam1)
{
	if (func_267(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_398(int iParam0, bool bParam1)
{
	if (func_267(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_399()
{
	return true;
}

bool func_400(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_401()
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

bool func_402(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, bParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_403(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, bParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (func_559(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

void func_404(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_186(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

void func_405(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_560();
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
			func_561(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_406(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_407(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_562(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_408(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_299() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_563(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_563(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_437(iVar0) == -1)
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

void func_409(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_564(uParam0);
	}
}

bool func_410(bool bParam0, var uParam1, bool bParam2)
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
		iVar1 = func_437(bParam2);
	}
	else
	{
		iVar1 = func_436(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_437(bParam0);
	}
	else
	{
		iVar0 = func_436(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_233(*uParam1, 8388608))
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

float func_411(bool bParam0, bool bParam1)
{
	return func_270(bParam0, bParam1, 1, 1);
}

float func_412(var uParam0)
{
	return uParam0->f_26;
}

bool func_413(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_414()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_415(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_270(bVar0, bParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_309(bVar0, 0)))
		{
			if (func_565(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_416(var uParam0)
{
	return uParam0->f_17;
}

bool func_417(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_233(*uParam0, 4194304))
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

int func_418(var uParam0)
{
	return uParam0->f_18;
}

bool func_419(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_309(bVar0, 0)))
		{
			if (func_566(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_420(bool bParam0, bool bParam1, bool bParam2)
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

float func_421(var uParam0)
{
	return uParam0->f_23;
}

int func_422(var uParam0)
{
	return uParam0->f_21;
}

int func_423(var uParam0)
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

bool func_424(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_540(bParam0, vParam4, 0.5f))
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

int func_425(bool bParam0)
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
	if (func_567(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_426(int iParam0)
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

bool func_427(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_568(bParam1))
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

bool func_428(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_568(bParam1))
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

bool func_429(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_568(bParam1))
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

bool func_430(bool bParam0, int iParam1)
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

bool func_431(bool bParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(bParam0) == bParam1)
	{
		return true;
	}
	if (func_569(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_432(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_433(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_434(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_434(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

float func_435(var uParam0)
{
	return uParam0->f_24;
}

int func_436(bool bParam0)
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

int func_437(bool bParam0)
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

int func_438(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_430(Global_35, &iVar1))
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
		fVar2 = func_270(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_270(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_439(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_562(1, &bVar0, &bVar1);
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
					if (!bParam2 || !func_440(uParam1, bVar0))
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
				if (!bParam2 || !func_440(uParam1, bVar1))
				{
					if (func_434(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_440(var uParam0, bool bParam1)
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

bool func_441(int iParam0)
{
	if (func_114())
	{
		return false;
	}
	return func_139(Global_1347702[58 /*49*/].f_15, 1);
}

int func_442(var uParam0)
{
	return uParam0->f_20;
}

int func_443(bool bParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_444(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_570(bParam0))
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
		if (func_571(bParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_445(bool bParam0, var uParam1)
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

bool func_446(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_447(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_448(int iParam0)
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

void func_449(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_448(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_572(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_573(iVar0);
	*uParam0 = 0;
}

void func_450(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_451(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_452(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_574(iParam0, uParam1))
		{
			if (!func_233(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_274(uParam2, 0, 0, 1, 0);
				func_235(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_233(uParam1->f_10, 1))
		{
			func_575(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_234(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_453(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_233(iParam4, 32);
		func_576(iParam1, uParam2, 0);
		iVar5 = func_577(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_274(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_233(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_233(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_233(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_233(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_233(iParam4, 8388608) || func_233(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_233(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_233(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_456(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_456(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_233(iParam4, 67108864))
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
				iParam6 = func_578(uParam0);
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
			if (func_233(iParam4, 268435456))
			{
				iVar8 = func_579(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_580(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_456(iParam1, 23))
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
			if (func_233(iParam4, 2) || func_233(iParam4, 16))
			{
				func_455(*uParam0, 1, 1);
			}
			else
			{
				func_455(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_454(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_455(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_456(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_457(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_581(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_458(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_582(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_233(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_459(int iParam0)
{
	if (func_233(iParam0, 4))
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
	if (func_233(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_233(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_460(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_177(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_583(Global_35)) || func_584(Global_35)) || func_585(Global_35));
	fVar12 = -1f;
	if (func_62(&(iParam1->f_13)))
	{
		fVar12 = func_66(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_448((uParam4[iVar0 /*17*/])->f_6);
		func_586(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_587(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_588(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_274(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_589(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_576(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_590(iParam1, fParam6, iParam1->f_9))
					{
						func_219(&(iParam1->f_18));
						if (bVar6)
						{
							func_589(uParam4, 0, 0);
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
		func_591(iParam1, fParam2);
	}
	return bVar5;
}

void func_461(var uParam0)
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

void func_462(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_592(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_591(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_463(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_593(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_594(iParam1, 0);
				func_576(iParam1, uParam2, func_456(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_464(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_219(&(iParam1->f_18));
			return false;
		}
		else if (func_62(&(iParam1->f_18)))
		{
			func_63(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_62(&(iParam1->f_18)))
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
	return func_595(&(iParam1->f_18), fParam2);
	return true;
}

void func_465(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_586(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_466(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_467(int* iParam0, var uParam1)
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
	func_576(iParam0, uParam1, 1);
	func_274(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_468(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_448(iParam0))
	{
		return;
	}
	iVar0 = func_572(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_469(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_448(iParam0))
	{
		return;
	}
	iVar0 = func_572(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_470(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_448(iParam0))
	{
		return;
	}
	iVar0 = func_572(iParam0);
	if (bParam1)
	{
		func_596(iParam0, 4);
		func_597(iVar0, 1);
		func_598(iVar0, 1);
	}
	else
	{
		func_599(iParam0, 4);
		func_598(iVar0, 0);
	}
}

void func_471(int* iParam0, char* sParam1)
{
	if (func_448(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_469(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_447(iParam0, 1);
}

bool func_472(bool bParam0)
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
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
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
		iVar2 = func_600(iVar9);
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
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

bool func_473(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = func_282();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return true;
	}
	return false;
}

int func_474(int iParam0, int iParam1)
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

int func_475(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_476(int iParam0, int iParam1)
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

void func_477(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_478(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_290(*iParam0);
	iVar1 = func_291(*iParam0);
	if (iParam1 < 1 || iParam1 > func_474(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_479(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_480(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_481(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_482(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_483(int iParam0, bool bParam1)
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

bool func_484(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_485(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_486(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_487(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_488(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

void func_489(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_601(iParam0, iParam1, 1))
	{
		iVar0 = func_290(iParam1);
		iVar1 = func_291(iParam0);
		iVar2 = (func_291(iParam0) - func_291(iParam1));
		iVar3 = (func_290(iParam0) - func_290(iParam1));
		iVar4 = (func_289(iParam0) - func_289(iParam1));
		iVar5 = (func_223(iParam0) - func_223(iParam1));
		iVar6 = (func_346(iParam0) - func_346(iParam1));
		iVar7 = (func_347(iParam0) - func_347(iParam1));
	}
	else
	{
		iVar0 = func_290(iParam0);
		iVar1 = func_291(iParam1);
		iVar2 = (func_291(iParam1) - func_291(iParam0));
		iVar3 = (func_290(iParam1) - func_290(iParam0));
		iVar4 = (func_289(iParam1) - func_289(iParam0));
		iVar5 = (func_223(iParam1) - func_223(iParam0));
		iVar6 = (func_346(iParam1) - func_346(iParam0));
		iVar7 = (func_347(iParam1) - func_347(iParam0));
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
		iVar4 = (iVar4 + func_474(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_602(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

void func_490(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_603(bParam1))
		{
			func_144(bParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_604(bParam0, 0, 1);
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
			func_605(bParam0, 0);
			bVar0 = true;
		}
		func_606(bParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

float func_491(vector3 vParam0, vector3 vParam3)
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

bool func_492(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_493(float fParam0)
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

void func_494(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar6;
	bool bVar7;

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = func_323(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_607(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var2, bVar0, iVar1, 0))
		{
		}
		else
		{
			bVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(bVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7) && !ENTITY::_0x88AD6CC10D8D35B2(bVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&bVar7);
			}
		}
		iVar6++;
	}
}

bool func_495(int iParam0)
{
	if (!func_608(iParam0))
	{
		return false;
	}
	if (!func_609())
	{
		return true;
	}
	return false;
}

void func_496(int iParam0, int iParam1)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/] = iParam1;
}

void func_497(int iParam0)
{
	iParam0 = func_314(iParam0);
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

void func_498(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_499(int iParam0, struct<2> /*16*/ sParam1)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_610(iParam0, Param1))
	{
	}
	if (!func_611(iParam0, Param1.f_1))
	{
	}
}

void func_500(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_612(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_501(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_502(var uParam0)
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

void func_503(var uParam0)
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

void func_504(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_505(int iParam0, var uParam1)
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

void func_506(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_507(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_508(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_509(int iParam0)
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

void func_510(int iParam0)
{
	iParam0 = func_314(iParam0);
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

void func_511(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_512(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_513(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_613(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_613(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_614(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_615(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_616(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_514(bool bParam0)
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
	if (func_617(bParam0))
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
	if (func_618(bParam0))
	{
		iVar3 = func_619(bParam0);
		if (func_620(iVar3))
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

void func_515()
{
	if (func_324(0))
	{
		func_621(0);
	}
	if (func_324(1))
	{
		func_621(1);
	}
	if (func_324(5))
	{
		func_621(5);
	}
	if (func_324(6))
	{
		func_510(6);
	}
}

void func_516(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_517(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_316())
	{
		if (func_622())
		{
			bVar0 = false;
			if (!func_139(Global_1835011[15 /*74*/].f_1, 1) && !func_348(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_623();
				*iParam1 = func_624();
				*uParam2 = func_625();
				return 1;
			}
			else
			{
				*uParam0 = func_626();
				*iParam1 = func_627();
				*uParam2 = func_628();
				return 1;
			}
		}
		else if (func_114())
		{
			if (!func_139(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_629();
				*iParam1 = func_630();
				*uParam2 = func_631();
				return 1;
			}
			else
			{
				*uParam0 = func_632();
				*iParam1 = func_633();
				*uParam2 = func_634();
				return 1;
			}
		}
	}
	else if (func_622())
	{
		*uParam0 = func_635();
		*iParam1 = func_636();
		*uParam2 = func_637();
		return 1;
	}
	else if (func_114())
	{
		*uParam0 = func_638();
		*iParam1 = func_639();
		*uParam2 = func_640();
		return 1;
	}
	return 0;
}

void func_518(int iParam0, var uParam1)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
}

void func_519(int iParam0, var uParam1)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
}

void func_520(int iParam0, var uParam1)
{
	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
}

void func_521(int iParam0, int iParam1)
{
	iParam0 = func_314(iParam0);
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

void func_522(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_332(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_517(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_641(iParam1);
	bVar5 = func_323(iParam0);
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

void func_523(int iParam0, int iParam1)
{
	iParam0 = func_314(iParam0);
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

bool func_524(int iParam0, int iParam1)
{
	iParam0 = func_314(iParam0);
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

bool func_525(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	Var0.f_9 = -1591664384;
	if (!func_613(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_642(Var0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!func_643(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_526(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	Var0.f_9 = -1591664384;
	if (!func_613(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_642(Var0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!func_643(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_527(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_644(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_645() };
	*uParam1 = func_642(Var0, iParam0, 0);
	if (!func_643(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_528(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_MANES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_TAILS"), 0, false);
}

void func_529(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	func_646(bParam0, *uParam1);
	func_646(bParam0, uParam1->f_1);
}

void func_530(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_SADDLEBAGS"), 0, false);
}

void func_531(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	func_646(bParam0, *uParam1);
	func_646(bParam0, uParam1->f_1);
	func_646(bParam0, uParam1->f_2);
	func_646(bParam0, uParam1->f_3);
	func_646(bParam0, uParam1->f_4);
	func_646(bParam0, uParam1->f_5);
}

int func_532(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_READY_TO_RENDER(bParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(bParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, true, true, true, true, false);
	}
	return 1;
}

bool func_533(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_534(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

char* func_535(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_647(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_647(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

void func_536(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_537(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_648(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_649(iParam0))
	{
		return false;
	}
	if (func_650(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_651(iParam0, 1)) || func_652(32768))
	{
		if (!func_651(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_653())
	{
		return false;
	}
	return true;
}

void func_538(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

var func_539(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> /*32*/ sVar0;
	struct<7> /*56*/ sVar13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_654(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_540(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_541(int iParam0)
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

int func_542(int iParam0)
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

bool func_543(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_544(int iParam0)
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

bool func_545(vector3 vParam0, int iParam3, var uParam4, int iParam5, int* iParam6, bool bParam7)
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

int func_546(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_655(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_547(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_548(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_549(int iParam0)
{
	int iVar0;

	iVar0 = func_374(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_656(iVar0);
}

int func_550(int iParam0, int iParam1)
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
			func_657(iVar2);
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

void func_551()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_552(int iParam0, int iParam1)
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

int func_553(bool bParam0)
{
	if (func_299() == -1)
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

int func_554(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_643(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_555(int iParam0)
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

void func_556(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 = (Global_1946054.f_2657.f_26.f_6 - (Global_1946054.f_2657.f_26.f_6 && iParam0));
}

void func_557(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 = (Global_1946054.f_2657.f_26.f_6 || iParam0);
}

void func_558(int iParam0, int iParam1)
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
			func_658((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_658(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_52(Global_1898164.f_1[0 /*5*/]))
	{
		func_207(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_559(int iParam0, int iParam1, bool bParam2)
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

bool func_560()
{
	if (func_659())
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

void func_561(var uParam0, var uParam1)
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

bool func_562(bool bParam0, int iParam1, int iParam2)
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

int func_563(var uParam0)
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

void func_564(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_234(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_235(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_565(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_566(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_566(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_567(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_568(bool bParam0)
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

int func_569(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_570(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(bParam0, func_660(), 1))
	{
		return true;
	}
	return false;
}

int func_571(bool bParam0, bool bParam1)
{
	return func_661(bParam0, Global_1894899.f_2, bParam1);
}

int func_572(int iParam0)
{
	return iParam0;
}

void func_573(int iParam0)
{
	if (!func_662(iParam0))
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

bool func_574(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_663((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_575(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_592(uParam0[iVar0 /*17*/]))
		{
			func_280(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_576(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_449(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_275(iParam0, 0);
		}
	}
}

int func_577(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_664(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_448((uParam2[iVar0 /*17*/])->f_6))
		{
			func_280(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_578(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_665(*uParam0);
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

int func_579(var uParam0, int iParam1)
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

void func_580(int* iParam0, int* iParam1)
{
	if (!func_456(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_280(iParam1, 19);
			func_594(iParam0, 23);
			func_666(iParam1, 2);
		}
	}
}

bool func_581(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_667(16))
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
					func_668(16);
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

void func_582(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_664(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_583(int iParam0)
{
	return (func_669(iParam0, 4) || func_669(iParam0, 5));
}

int func_584(int iParam0)
{
	return func_669(iParam0, 7);
}

int func_585(int iParam0)
{
	return func_669(iParam0, 6);
}

void func_586(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_592(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_664(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_587(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_670(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_671(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_470(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_470(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_672(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_588(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_673(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_674(iParam1, 1))
	{
		func_675(iParam1, 1);
		return true;
	}
	return false;
}

void func_589(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_271(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_590(int* iParam0, float fParam1, bool bParam2)
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

void func_591(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_592(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_593(int iParam0)
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

void func_594(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_595(var uParam0, float fParam1)
{
	if (func_676(uParam0, fParam1))
	{
		func_63(uParam0);
		return 1;
	}
	return 0;
}

void func_596(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 - (Global_1945188[iParam0 /*18*/].f_1 && iParam1));
}

void func_597(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_677(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_598(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_599(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 || iParam1);
}

int func_600(int iParam0)
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

bool func_601(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_678(iParam1) || !func_678(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_602(float fParam0, float fParam1, float fParam2)
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

bool func_603(bool bParam0)
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

void func_604(bool bParam0, int iParam1, bool bParam2)
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

void func_605(bool bParam0, bool bParam1)
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

void func_606(bool bParam0, bool bParam1)
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

int func_607(int iParam0)
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

bool func_608(int iParam0)
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

bool func_609()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_610(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	Var0.f_9 = -1591664384;
	if (!func_613(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_679(iParam1, Var0, joaat("SLOTID_HORSE_MANE"), 0) };
	return func_680(Var29, 1);
}

bool func_611(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	Var0.f_9 = -1591664384;
	if (!func_613(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_679(iParam1, Var0, joaat("SLOTID_HORSE_TAIL"), 0) };
	return func_680(Var29, 1);
}

void func_612(var uParam0)
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

bool func_613(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_681(iParam0))
	{
		return false;
	}
	iVar0 = func_614(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_682(0) };
	if (!func_683(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_684(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_614(int iParam0)
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

bool func_615(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> /*96*/ sVar0;
	struct<4> /*32*/ sVar14;

	if (!func_685(bParam10))
	{
		return func_686(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_687(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_688(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_553(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_680(Var14, 1))
		{
		}
	}
	return true;
}

bool func_616(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	int iVar28;

	if (!func_685(bParam9))
	{
		return func_689(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	if (func_688(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_687(Param0, &Var0, bParam9, 1) || !func_687(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_688(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_553(0);
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

bool func_617(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_690(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_618(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_619(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_619(bool bParam0)
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

bool func_620(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_621(int iParam0)
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
	bVar0 = func_323(iParam0);
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
	if (func_524(iParam0, 64))
	{
		func_510(iParam0);
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
	bVar3 = func_348(42);
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
				func_691(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_510(iParam0);
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
		if (func_692(1) < 1)
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
		func_693(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_524(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(bVar0);
	bVar10 = false;
	iVar11 = func_694(iParam0);
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
	fVar15 = func_695(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_696(iParam0))
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
		func_697(Global_1900383[iParam0 /*45*/].f_26);
		func_698(Global_1900383[iParam0 /*45*/].f_26);
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
	if (func_699(bVar0) && !bVar9)
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
	iVar21 = func_692(iParam0);
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

bool func_622()
{
	if (func_299() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_623()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_624()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_625()
{
	return 1;
}

int func_626()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_627()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_628()
{
	return 1;
}

int func_629()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_630()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_631()
{
	return 2;
}

int func_632()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_633()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_634()
{
	return 1;
}

int func_635()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_636()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_637()
{
	return 1;
}

int func_638()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_639()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_640()
{
	return 1;
}

void func_641(int iParam0)
{
	if (func_700() < iParam0)
	{
		func_701(iParam0);
	}
}

int func_642(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	Var0.f_9 = -1591664384;
	if (func_702(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_643(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_644(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_554(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_703(iParam0);
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

struct<4> /*32*/ func_645()
{
	struct<4> /*32*/ sVar0;

	Var0 = { func_682(0) };
	return func_679(856287005, Var0, -218846335, 0);
}

void func_646(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(bParam0, iVar0, false, false, false);
}

char* func_647(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_648(int iParam0, int iParam1)
{
	if (func_299() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_649(int iParam0)
{
	if (func_299() != -1)
	{
		if (func_651(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_651(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_650(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_651(iParam0, 65536) && !func_651(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_651(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_651(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_651(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_652(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_653()
{
	return Global_1905944.f_5694;
}

void func_654(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_655(int iParam0, int iParam1)
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

int func_656(int iParam0)
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

int func_657(int iParam0)
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

void func_658(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

bool func_659()
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

int func_660()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_661(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_704(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_705(bParam0, uVar0, iVar1, bParam2);
}

bool func_662(int iParam0)
{
	return func_677(iParam0, 2);
}

int func_663(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_664(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_448(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_449(&(iParam1->f_6), 0, 1);
	}
	if (!func_448(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_592(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_706(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_448(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_672(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_707(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_708(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_468(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_707(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_470(iParam1->f_6, 0, 1);
				}
				else
				{
					func_470(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_665(int iParam0)
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

void func_666(int* iParam0, int iParam1)
{
	if (!func_446(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_280(iParam0, 14);
		}
	}
}

bool func_667(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_668(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_669(int iParam0, int iParam1)
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

bool func_670(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_671(int iParam0, bool bParam1)
{
	if (bParam1 && !func_448(iParam0))
	{
		return false;
	}
	return !func_677(iParam0, 4);
}

void func_672(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_448(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_572(iParam0);
	func_707(iParam0, 18, 0, 1);
	func_707(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_673(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_448(iParam0))
	{
		return false;
	}
	iVar0 = func_572(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_674(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_448(iParam0))
	{
		return false;
	}
	iVar0 = func_572(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_675(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_448(iParam0))
	{
		return;
	}
	iVar0 = func_572(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_676(var uParam0, float fParam1)
{
	if (!func_62(uParam0))
	{
		return false;
	}
	if (func_66(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_677(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_678(int iParam0)
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
	iVar0 = func_347(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_346(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_223(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_291(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_290(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_289(iParam0);
	if (iVar5 < 1 || iVar5 > func_474(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

struct<4> /*32*/ func_679(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_643(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_553(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_680(struct<4> /*32*/ sParam0, int iParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_685(0))
	{
		return func_709(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_687(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_553(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_681(int iParam0)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;

	bVar0 = func_614(iParam0);
	if (bVar0 == 0)
	{
		return false;
	}
	Var1 = { func_682(0) };
	if (func_710(&Var1, bVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

struct<4> /*32*/ func_682(int iParam0)
{
	return func_679(joaat("CHARACTER"), func_711(), -1591664384, iParam0);
}

bool func_683(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_553(bParam7);
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

bool func_684(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_553(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_685(bool bParam0)
{
	if (func_299() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_553(bParam0));
}

int func_686(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
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
	if (!func_687(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_688(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_712(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_713(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar33 = func_714(1168099063, &Var16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_687(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_553(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_688(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_689(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
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
	if (func_688(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_687(Param0, &Var0, 1, 0) || !func_687(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_688(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_713(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var45 = { func_713(&Var14) };
	Var45.f_4 = { Var0.f_5 };
	Var45.f_11 = Var0.f_9;
	Var45.f_10 = (Var0.f_10 || iParam8);
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), 1168099063))
		{
			if (func_715(iVar62, 1168099063, &Var28) && func_715(iVar62, 1168099063, &Var45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_716(iVar62, 1);
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
		iVar62 = func_714(1168099063, &Var28, 0);
		iVar62 = func_714(1168099063, &Var45, 0);
	}
	return iVar62;
}

bool func_690(int iParam0)
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

void func_691(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_718(func_717(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_622())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_114();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_692(int iParam0)
{
	iParam0 = func_314(iParam0);
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

void func_693(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_718(func_717(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_622())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_114())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_694(int iParam0)
{
	iParam0 = func_314(iParam0);
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

float func_695(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_696(int iParam0)
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

	iParam0 = func_314(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_332(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_692(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_692(iParam0) + 1;
	fVar6 = func_719(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_720(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_697(int iParam0)
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

void func_698(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

bool func_699(int iParam0)
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

int func_700()
{
	return Global_40.f_1095.f_3135;
}

void func_701(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_702(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_553(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_687(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_703(int iParam0)
{
	int iVar0;

	if (!func_643(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_554(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_704(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_299() != -1;
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

int func_705(bool bParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_721(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_722(iVar2)))
		{
			if (func_722(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_706(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_677(iVar0, 2))
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
				func_723(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_707(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_448(iParam0))
	{
		return;
	}
	iVar0 = func_572(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_708(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_448(iParam0))
	{
		return;
	}
	iVar0 = func_572(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_709(struct<4> /*32*/ sParam0, int iParam4, bool bParam5)
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
	if (!func_687(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_724(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_725(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_726(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var45 = { func_727(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_728(joaat("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_713(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_714(joaat("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_710(var uParam0, bool bParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_553(bParam2), uParam0, bParam1);
}

struct<4> /*32*/ func_711()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

int func_712(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_643(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_679(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_553(bParam6), &Var0, 0);
	return uVar4;
}

struct<17> /*136*/ func_713(var uParam0)
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

int func_714(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_715(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_716(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_716(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_716(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_715(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_716(int iParam0, int iParam1)
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
	func_729(iParam0, iParam1);
}

char* func_717(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_730(37, iParam0))
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
	if (func_730(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_718(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_731(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_719(int iParam0)
{
	iParam0 = func_314(iParam0);
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

float func_720(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_721(int iParam0)
{
	if (!func_732(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_722(int iParam0)
{
	if (!func_732(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_723(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_597(iParam0, 1);
	func_598(iParam0, 1);
	func_599(iParam0, 128);
}

int func_724(int iParam0)
{
	vector3 vVar0;

	if (!func_643(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<29> /*232*/ func_725(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_553(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_713(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_726(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_733(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_716(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_716(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_716(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_727(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_553(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_713(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_728(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_734(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_716(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_716(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_716(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_729(int iParam0, int iParam1)
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

bool func_730(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_735(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_736())
	{
		return func_735(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_735(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_731(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_732(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_733(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_734(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_735(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_736()
{
	return Global_1109000.f_245;
}

