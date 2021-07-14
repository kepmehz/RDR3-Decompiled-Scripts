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
	int iLocal_14 = 0;
	struct<217> Local_15 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1281122482, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1065353216, 0, 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = -1;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 1073741824;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 1;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 2;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 570;
	var uLocal_259 = 1065353216;
	var uLocal_260 = -1082130432;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 2;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 570;
	var uLocal_276 = 1065353216;
	var uLocal_277 = -1082130432;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 2;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
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
	var uLocal_311 = 3;
#endregion

void __EntryFunction__()
{
	struct<4> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 9228;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&Local_15, 1);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (Local_15.f_129 >= 2)
		{
			func_2(&Local_15, &(Local_15.f_129));
			if (func_3(Local_15.f_193, 2048))
			{
				func_5(&Local_15, &(Local_15.f_205), func_4(0), 1);
				if (!func_6(11, Local_15.f_144, 1, 1))
				{
					func_7(&(Local_15.f_193), 2048);
				}
			}
			else
			{
				func_8(&Local_15, &(Local_15.f_129));
				func_9(&Local_15);
				func_10(&Local_15, Local_15.f_129);
				func_11(Local_15.f_144, &(Local_15.f_193), 128, 11, Local_15.f_214);
				if (func_12(&Local_15, 0))
				{
					func_13(&Local_15);
				}
				if (func_12(&Local_15, 1))
				{
					Local_15.f_214 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Local_15.f_144, true, false));
				}
				if (func_12(&Local_15, 2))
				{
					if (func_6(11, Local_15.f_144, 1, 1))
					{
						func_14(&(Local_15.f_193), 2048);
					}
					else
					{
						func_15(11, 0, &(Local_15.f_144), &(Local_15.f_136), &(Local_15.f_216), Local_15.f_214, 1097859072 /* Float: 15f */, 0);
						switch (Local_15.f_129)
						{
							case 0:
								func_16(&Local_15, &(Local_15.f_129));
								break;
							case 1:
								if (func_17(&Local_15))
								{
									func_18(&Local_15, &(Local_15.f_129), 2);
								}
								break;
							case 2:
								if (func_19(&Local_15))
								{
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 3:
								func_20(&Local_15);
								if (func_5(&Local_15, &(Local_15.f_205), func_21(0), 1))
								{
									Local_15.f_208++;
									Local_15.f_201 = (1 + Local_15.f_201);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 4:
								if (func_5(&Local_15, &(Local_15.f_205), func_21(1), 0))
								{
									Local_15.f_208++;
									Local_15.f_200++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 5:
								if (func_5(&Local_15, &(Local_15.f_205), func_21(2), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 6:
								if (func_5(&Local_15, &(Local_15.f_205), func_21(3), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 7:
								if (func_5(&Local_15, &(Local_15.f_205), func_21(4), 1))
								{
									Local_15.f_208++;
									Local_15.f_200 = (1 + Local_15.f_200);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 8:
								if (func_5(&Local_15, &(Local_15.f_205), func_21(5), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 9:
								func_20(&Local_15);
								if (func_5(&Local_15, &(Local_15.f_205), func_21(6), 1))
								{
									Local_15.f_208++;
									Local_15.f_201++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 10:
								if (func_5(&Local_15, &(Local_15.f_205), func_21(7), 1))
								{
									Local_15.f_208++;
									Local_15.f_200++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 11:
								func_20(&Local_15);
								if (func_5(&Local_15, &(Local_15.f_205), func_21(8), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_201++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 12:
								if (func_5(&Local_15, &(Local_15.f_205), func_21(9), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 13:
								func_20(&Local_15);
								if (func_5(&Local_15, &(Local_15.f_205), func_21(10), 1))
								{
									Local_15.f_208++;
									Local_15.f_201++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 14:
								if (func_5(&Local_15, &(Local_15.f_205), func_21(11), 1))
								{
									Local_15.f_208++;
									Local_15.f_200 = (1 + Local_15.f_200);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 15:
								func_20(&Local_15);
								if (func_5(&Local_15, &(Local_15.f_205), func_21(12), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_201++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 16:
								func_20(&Local_15);
								if (func_5(&Local_15, &(Local_15.f_205), func_21(13), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_201++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 17:
								if (func_5(&Local_15, &(Local_15.f_205), func_21(14), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_200 = (1 + Local_15.f_200);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 18:
								func_20(&Local_15);
								if (func_5(&Local_15, &(Local_15.f_205), func_21(15), 1))
								{
									Local_15.f_208++;
									Local_15.f_201 = (1 + Local_15.f_201);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_200));
								break;
							case 19:
								if (func_5(&Local_15, &(Local_15.f_205), func_23(0), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_202++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 20:
								if (func_5(&Local_15, &(Local_15.f_205), func_23(1), 1))
								{
									Local_15.f_208++;
									Local_15.f_202++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 21:
								if (func_5(&Local_15, &(Local_15.f_205), func_23(2), 1))
								{
									Local_15.f_208++;
									Local_15.f_202 = (1 + Local_15.f_202);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 22:
								if (func_5(&Local_15, &(Local_15.f_205), func_23(3), 1))
								{
									Local_15.f_208++;
									Local_15.f_202++;
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 23:
								if (func_5(&Local_15, &(Local_15.f_205), func_23(4), 1))
								{
									Local_15.f_208++;
									Local_15.f_202 = (1 + Local_15.f_202);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 24:
								if (func_5(&Local_15, &(Local_15.f_205), func_23(5), 1))
								{
									Local_15.f_208 = (1 + Local_15.f_208);
									Local_15.f_202 = (1 + Local_15.f_202);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								func_22(&Local_15, &(Local_15.f_129), &(Local_15.f_144), &(Local_15.f_193), &(Local_15.f_202));
								break;
							case 25:
								if (func_5(&Local_15, &(Local_15.f_205), func_24(0), 0))
								{
									Local_15.f_203 = (1 + Local_15.f_203);
									func_25(&Local_15, 1);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 26:
								if (func_5(&Local_15, &(Local_15.f_205), func_24(1), 0))
								{
									Local_15.f_203 = (1 + Local_15.f_203);
									func_25(&Local_15, 1);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 27:
								if (func_5(&Local_15, &(Local_15.f_205), func_24(2), 0))
								{
									Local_15.f_203++;
									func_25(&Local_15, 1);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 28:
								if (func_5(&Local_15, &(Local_15.f_205), func_24(3), 0))
								{
									Local_15.f_203 = (1 + Local_15.f_203);
									func_25(&Local_15, 1);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 29:
								if (func_5(&Local_15, &(Local_15.f_205), func_24(4), 0))
								{
									Local_15.f_203 = (1 + Local_15.f_203);
									func_25(&Local_15, 1);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 30:
								if (func_5(&Local_15, &(Local_15.f_205), func_24(5), 0))
								{
									Local_15.f_203 = (1 + Local_15.f_203);
									func_25(&Local_15, 1);
									func_18(&Local_15, &(Local_15.f_129), 31);
								}
								break;
							case 31:
								if (!func_3(Local_15.f_193, 1) && func_3(Local_15.f_193, 64))
								{
									if ((func_26(&Local_15, &(Local_15.f_206)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::_0x54B187F111D9C6F8(Global_35, 1))
									{
										func_18(&Local_15, &(Local_15.f_129), 32);
									}
								}
								else if (func_3(Local_15.f_193, 1))
								{
									if (!func_27(Local_15.f_144, 658540077))
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_15.f_144, Local_15.f_212, 0, iLocal_14, -1, 1, 0, -1);
									}
									if (func_5(&Local_15, &(Local_15.f_205), func_4(Local_15.f_128), 1))
									{
										func_28(&Local_15);
										func_29(&Local_15, &(Local_15.f_129));
									}
								}
								else
								{
									if (!func_27(Local_15.f_144, 658540077))
									{
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_15.f_144, Local_15.f_212, 0, iLocal_14, -1, 1, 0, -1);
									}
									if (func_5(&Local_15, &(Local_15.f_205), func_4(Local_15.f_128), 0))
									{
										if (Local_15.f_127 != -1)
										{
											func_28(&Local_15);
											func_30(&Local_15, &(Local_15.f_129));
										}
										else if (func_31(11) == -1)
										{
										}
										else
										{
											func_28(&Local_15);
											Local_15.f_147[0] = Local_15.f_144;
											if (func_32(&(Local_15.f_145), &(Local_15.f_147), 1, ENTITY::GET_ENTITY_COORDS(Local_15.f_144, true, false), 10f, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0) > 0 || Local_15.f_214 < 10f)
											{
												func_33(&Local_15, &(Local_15.f_129));
											}
											else
											{
												func_34(&Local_15, &(Local_15.f_129));
											}
										}
									}
								}
								break;
							case 32:
								if (!func_35())
								{
								}
								else
								{
									if (!func_3(Local_15.f_193, 512))
									{
										iVar7 = func_36(Global_35, 0);
										iVar8 = func_36(Global_35, 1);
										if (iVar7 != joaat("WEAPON_UNARMED") || iVar8 != joaat("WEAPON_UNARMED"))
										{
											WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
										}
										if (PED::IS_PED_FULLY_ON_MOUNT(Global_35, true))
										{
											if (!func_27(Global_35, 501393341))
											{
												TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
											}
										}
										func_14(&(Local_15.f_193), 512);
									}
									else if (!func_27(Local_15.f_144, -875674219))
									{
										func_37();
										if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(Local_15.f_206, false))
										{
											ANIMSCENE::RESET_ANIM_SCENE(Local_15.f_206, 0);
										}
										func_38(&Local_15);
									}
									Jump @3569; //curOff = 3166
									func_39(&Local_15);
									if (!func_35())
									{
									}
									else
									{
										if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_15.f_206, false) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_15.f_205, false))
										{
											ANIMSCENE::RESET_ANIM_SCENE(Local_15.f_205, 0);
										}
										if (func_5(&Local_15, &(Local_15.f_206), func_40(0), 1) || func_3(Local_15.f_193, 256))
										{
											func_41(&(Local_15.f_193), 1);
											func_42(Local_15.f_144, 1);
											PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_GAVINS_FRIEND"));
											if (func_43(&(Local_15.f_205)))
											{
												Var0 = { ENTITY::GET_ENTITY_COORDS(Local_15.f_144, true, false) };
												MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
												Var0.f_2 = uVar6;
												Var0.f_2 = (Var0.f_2 + 1f);
												Var0.f_3 = { 0f, 0f, 0f };
												Var0.f_3.f_2 = ENTITY::GET_ENTITY_HEADING(Local_15.f_144);
												ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_15.f_205, Var0, Var0.f_3, 2);
												ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_15.f_205, "cs_gavin", Local_15.f_144, 0);
												ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_15.f_205, "Internal_loop", false, false);
												if (func_44(&(Local_15.f_142), &(Local_15.f_195)))
												{
													if (func_3(Local_15.f_195, 1) && !func_3(Local_15.f_195, 2))
													{
														func_18(&Local_15, &(Local_15.f_129), 25);
													}
													else
													{
														Local_15.f_203++;
														func_18(&Local_15, &(Local_15.f_129), 26);
													}
												}
											}
										}
										else
										{
											PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_15.f_144, 1.5f);
										}
										Jump @3569; //curOff = 3509
										if (MISC::GET_GAME_TIMER() > Local_15.f_211)
										{
											func_18(&Local_15, &(Local_15.f_129), 34);
										}
										Jump @3569; //curOff = 3535
										func_1(&Local_15, 1);
										func_18(&Local_15, &(Local_15.f_129), 37);
										Jump @3569; //curOff = 3557
										Jump @3569; //curOff = 3560
										func_45(&Local_15, &(Local_15.f_129));
									}
								}
								default:
									break;
						}
					}
				}
			}
		}
	}
}

void func_1(var uParam0, bool bParam1)
{
	func_46(uParam0);
	func_47(11);
	func_48(&(uParam0->f_275));
	func_49(&(uParam0->f_240), 0, 1, 1, 0);
	func_50(&(uParam0->f_219), &(uParam0->f_240));
	if (func_51(uParam0->f_142) && (func_52(uParam0->f_142) || func_53(uParam0->f_142)))
	{
		func_54(uParam0->f_142, 0, 2);
	}
	if (uParam0->f_209 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(uParam0->f_209);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_144))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 153, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_144, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 315, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 130, false);
		func_55(uParam0->f_144);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_144, 0f);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_144));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_205))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_205);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_206);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_212))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_212))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(uParam0->f_212);
		}
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "GavinBubble");
	func_56(uParam0);
	if (bParam1 && !func_57(uParam0->f_153, 1, 1))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2(var uParam0, var uParam1)
{
	bool bVar0;

	if (*uParam1 <= 2 || *uParam1 >= 34)
	{
		return;
	}
	if (!func_58(uParam0->f_144, 0))
	{
		func_1(uParam0, 0);
		func_18(uParam0, uParam1, 34);
		return;
	}
	PED::SET_PED_RESET_FLAG(uParam0->f_144, 49, true);
	bVar0 = PED::_0x336B3D200AB007CB(uParam0->f_144, ENTITY::GET_ENTITY_COORDS(uParam0->f_144, true, false), 10f, 256) > 0;
	if (func_59(uParam0->f_144, 0, &(uParam0->f_98), &(uParam0->f_126), 0, uParam0->f_214) || bVar0)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_144, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 153, false);
		if (!func_27(uParam0->f_144, 518218985))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_144, true, false);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_144, 1024, true);
			TASK::TASK_SMART_FLEE_PED(uParam0->f_144, Global_35, 100f, -1, 4096, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 130, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 315, false);
			func_55(uParam0->f_144);
		}
		func_60(11);
		func_61(uParam0->f_144, "GENERIC_SHOCKED_HIGH", -417894478, Global_35, 1, "GAVINS_FRIEND", 0, 1);
		uParam0->f_211 = MISC::GET_GAME_TIMER() + 150;
		func_18(uParam0, uParam1, 35);
	}
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char[] func_4(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_IDLE_A";
			break;
		case 1:
			sVar0 = "pbl_IDLE_B";
			break;
		case 2:
			sVar0 = "pbl_IDLE_C";
			break;
		case 3:
			sVar0 = "pbl_IDLE_D";
			break;
		case 4:
			sVar0 = "pbl_IDLE_E";
			break;
		case 5:
			sVar0 = "pbl_IDLE_F";
			break;
		case 6:
			sVar0 = "pbl_IDLE_G";
			break;
		case 7:
			sVar0 = "pbl_IDLE_H";
			break;
		case 8:
			sVar0 = "pbl_IDLE_I";
			break;
		case 9:
			sVar0 = "pbl_IDLE_J";
			break;
	}
	return sVar0;
}

bool func_5(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (!func_3(uParam0->f_193, 8192))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		else
		{
			func_14(&(uParam0->f_193), 8192);
		}
		return false;
	}
	if (func_3(uParam0->f_193, 32768))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_BASE", true))
		{
			if (func_62(uParam1, uParam0->f_217))
			{
				uParam0->f_217 = sParam2;
				return true;
			}
		}
		if (uParam0->f_129 == 33)
		{
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(*uParam1, false))
			{
				return true;
			}
		}
		return false;
	}
	else
	{
		if (!func_3(uParam0->f_193, 16384))
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2))
				{
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2);
				}
				return false;
			}
			else
			{
				func_14(&(uParam0->f_193), 16384);
			}
		}
		if (bParam3)
		{
			if (uParam0->f_214 > 60f)
			{
				return false;
			}
		}
		if (!func_3(uParam0->f_193, 32768))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "Internal_loop", false, false);
				return false;
			}
			else
			{
				func_14(&(uParam0->f_193), 32768);
			}
		}
	}
	return false;
}

bool func_6(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_63())
		{
			return true;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam1))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_64(0) == 7 || func_65())
		{
			return true;
		}
	}
	if (func_66(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
	{
		return true;
	}
	return false;
}

void func_7(var uParam0, int iParam1)
{
	func_67(uParam0, iParam1);
}

void func_8(var uParam0, var uParam1)
{
	if ((*uParam1 <= 2 || *uParam1 == 32) || *uParam1 == 33)
	{
		return;
	}
	if (func_69(11, func_68(11), &(uParam0->f_275), uParam0->f_144))
	{
		func_1(uParam0, 1);
		func_18(uParam0, uParam1, 37);
		return;
	}
	if (func_70(Global_1396257[11 /*638*/][func_68(11) /*48*/].f_8[0], 0) || func_70(Global_1396257[11 /*638*/][func_68(11) /*48*/].f_8[1], 0))
	{
		func_1(uParam0, 1);
		func_18(uParam0, uParam1, 37);
		return;
	}
	if (!func_58(Global_35, 0))
	{
		func_1(uParam0, 1);
		func_18(uParam0, uParam1, 37);
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[11 /*638*/][func_68(11) /*48*/].f_47))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[11 /*638*/][func_68(11) /*48*/].f_47, true, 0))
		{
			func_1(uParam0, 1);
			func_18(uParam0, uParam1, 37);
			return;
		}
	}
	if (uParam0->f_127 != -1)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_71(uParam0->f_127), true, 0))
		{
			func_1(uParam0, 1);
			func_18(uParam0, uParam1, 37);
			return;
		}
	}
	if (func_3(uParam0->f_193, 64) && uParam0->f_214 > 125f)
	{
		func_1(uParam0, 1);
		func_18(uParam0, uParam1, 37);
	}
}

void func_9(var uParam0)
{
	struct<2> Var0;

	if ((((func_3(uParam0->f_193, 8) && !func_3(uParam0->f_193, 64)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_144)) && !AUDIO::_0x54B187F111D9C6F8(uParam0->f_144, 1)) && uParam0->f_129 != 19)
	{
		func_72(uParam0, 1);
	}
	else
	{
		func_72(uParam0, 0);
	}
	switch (func_74(&(uParam0->f_144), &(uParam0->f_219), 15f, &(uParam0->f_240), 0f, 2, 0, "", func_73(uParam0->f_296, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */))
	{
		case 0:
			if (!func_3(uParam0->f_193, 64))
			{
				func_37();
				func_75(11, &(uParam0->f_144), &(uParam0->f_193), 16);
				func_61(Global_35, "GREET_GENERAL", -417894478, uParam0->f_144, 1, 0, 0, 1);
				func_76(&(uParam0->f_144));
				func_72(uParam0, 0);
				func_49(&(uParam0->f_240), 0, 0, 1, 0);
				func_77(uParam0);
				func_78(&(uParam0->f_240[0 /*17*/]), 0, 0);
				func_78(&(uParam0->f_240[1 /*17*/]), 0, 0);
				func_79(11);
				func_14(&(uParam0->f_193), 64);
			}
			break;
		case 1:
			if (!func_3(uParam0->f_193, 64))
			{
				func_37();
				func_75(11, &(uParam0->f_144), &(uParam0->f_193), 16);
				Var0 = { func_80(uParam0) };
				func_61(Global_35, Var0, -417894478, uParam0->f_144, 1, 0, Var0.f_1, 1);
				func_76(&(uParam0->f_144));
				func_72(uParam0, 0);
				func_49(&(uParam0->f_240), 0, 0, 1, 0);
				func_77(uParam0);
				func_78(&(uParam0->f_240[0 /*17*/]), 0, 0);
				func_78(&(uParam0->f_240[1 /*17*/]), 0, 0);
				func_79(11);
				func_14(&(uParam0->f_193), 64);
			}
			break;
	}
}

void func_10(var uParam0, int iParam1)
{
	if (func_3(uParam0->f_193, 32) && uParam0->f_210 >= 4)
	{
		return;
	}
	if (iParam1 >= 3 && iParam1 <= 24)
	{
		if (func_81(&(uParam0->f_144), &(uParam0->f_215), &(uParam0->f_139), &(uParam0->f_210), 4, 0, 4000, 0))
		{
			func_14(&(uParam0->f_193), 32);
		}
	}
}

void func_11(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_82(iParam3);
	if (fParam4 == 0f)
	{
		if (func_83(iParam0, Global_35, 15f, 1))
		{
			if (!func_84(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_85(uParam1, iParam2);
				}
			}
		}
		else if (func_84(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_67(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_84(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_85(uParam1, iParam2);
			}
		}
	}
	else if (func_84(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_67(uParam1, iParam2);
	}
}

bool func_12(var uParam0, int iParam1)
{
	if (uParam0->f_196[iParam1] < func_86(iParam1))
	{
		uParam0->f_196[iParam1]++;
		return false;
	}
	uParam0->f_196[iParam1] = 0;
	return true;
}

void func_13(var uParam0)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_150, true, 0))
	{
		if (!func_3(uParam0->f_193, 8))
		{
			func_14(&(uParam0->f_193), 8);
		}
	}
	else
	{
		func_7(&(uParam0->f_193), 8);
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		func_87(&(uParam0->f_240[0 /*17*/]), 9);
		func_87(&(uParam0->f_240[1 /*17*/]), 9);
	}
}

void func_14(var uParam0, int iParam1)
{
	func_85(uParam0, iParam1);
}

int func_15(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
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
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_88();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_83(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_89(uParam3))
	{
		func_90(uParam3, 0f);
	}
	else if (func_91(uParam3) >= 2f)
	{
		if (!func_92(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_60(iParam0);
			*uParam4 = 1;
			func_93(uParam3);
			return 1;
		}
		else
		{
			func_60(iParam0);
			*uParam4 = 1;
			func_93(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_16(var uParam0, var uParam1)
{
	uParam0->f_127 = func_94(11);
	if (uParam0->f_127 != -1)
	{
		uParam0->f_212 = func_95(uParam0->f_127);
	}
	else
	{
		uParam0->f_212 = func_96(func_31(11));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_212))
	{
		return;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(uParam0->f_212);
	PED::_0xED9582B3DA8F02B4(1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_205))
	{
		uParam0->f_205 = ANIMSCENE::_CREATE_ANIM_SCENE(func_97(), 0, func_4(0), false, true);
	}
	if (!func_98(&(uParam0->f_142), &(uParam0->f_195)))
	{
		uParam0->f_142 = func_100(11, 1, 9, func_99(11));
		if (!func_51(uParam0->f_142))
		{
		}
		return;
	}
	if (!func_3(uParam0->f_195, 1))
	{
		func_14(&(uParam0->f_195), 1);
	}
	if (!func_3(uParam0->f_195, 2))
	{
		func_14(&(uParam0->f_195), 2);
	}
	if (!func_3(uParam0->f_195, 4))
	{
		func_14(&(uParam0->f_195), 4);
	}
	if (!func_3(uParam0->f_195, 8))
	{
		func_14(&(uParam0->f_195), 8);
	}
	if (func_3(uParam0->f_195, 8) && !func_3(uParam0->f_195, 16))
	{
		uParam0->f_206 = ANIMSCENE::_CREATE_ANIM_SCENE(func_101(), 0, func_102(0), false, true);
		uParam0->f_213 = 0.85f;
	}
	else if (func_3(uParam0->f_195, 16) && !func_3(uParam0->f_195, 32))
	{
		uParam0->f_206 = ANIMSCENE::_CREATE_ANIM_SCENE(func_103(), 0, func_104(0), false, true);
	}
	func_105(&(uParam0->f_275));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_205) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_205);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_206);
		HUD::TEXT_BLOCK_REQUEST("SPGV");
		HUD::TEXT_BLOCK_REQUEST("SPGVNAU");
		STREAMING::REQUEST_MODEL(uParam0->f_143, false);
		func_106(uParam0);
		func_107(uParam0->f_149, "SP_Gavin1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_151, 2500607, 0, 0, -1, -1, 10);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_151, 2238463, 0, 0, -1, -1, 0);
		func_25(uParam0, 0);
		if (func_108())
		{
			func_109(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			func_109(uParam0, Global_35, "ARTHUR", 0);
		}
		if (func_51(uParam0->f_142))
		{
			if (func_110(uParam0))
			{
				func_111(uParam0);
				func_112(uParam0);
				func_113(uParam0);
				func_114(uParam0);
				uParam0->f_204 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
			}
			else
			{
				return;
			}
			if (!func_115(uParam0->f_142, 1))
			{
				func_18(uParam0, uParam1, 1);
			}
			else
			{
				func_18(uParam0, uParam1, 36);
			}
		}
	}
}

bool func_17(var uParam0)
{
	if ((((((ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_205, true, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_206, true, false)) && HUD::TEXT_BLOCK_IS_LOADED("SPGV")) && HUD::TEXT_BLOCK_IS_LOADED("SPGVNAU")) && STREAMING::HAS_MODEL_LOADED(uParam0->f_143)) && PED::_0x5C16855277819BBF() == 1) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_212))
	{
		uParam0->f_194 = 0;
		return true;
	}
	return false;
}

void func_18(var uParam0, var uParam1, int iParam2)
{
	func_7(&(uParam0->f_193), 4096);
	func_7(&(uParam0->f_193), 8192);
	func_7(&(uParam0->f_193), 16384);
	func_7(&(uParam0->f_193), 32768);
	*uParam1 = iParam2;
}

bool func_19(var uParam0)
{
	struct<4> Var0;

	Var0 = { func_116(uParam0, 0) };
	if (func_117(&(uParam0->f_144), uParam0->f_143, Var0, Var0.f_3, 1, 1, 1))
	{
		if (func_58(uParam0->f_144, 0))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_144, "special_ped_group", 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_144, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_144, joaat("REL_CIVMALE"));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 317, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 344, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_144, 153, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_144, 17, true);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_144, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_144, true, true);
			func_109(uParam0, uParam0->f_144, "GAVINS_FRIEND", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_144, Var0, Var0.f_3, true, false, true);
			func_118(uParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_144, 7, 0, 1);
			uParam0->f_209 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), uParam0->f_144, 0f, 7f, 7f, 6f, -1f, 180f, false, false, -1, -1);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_205, "cs_gavin", uParam0->f_144, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_206, "cs_gavin", uParam0->f_144, 0);
			if (func_108())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_206, "player_three", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_206, "player_zero", Global_35, 0);
			}
			if (func_108())
			{
				func_119(uParam0->f_144, 1689938120);
			}
			else
			{
				func_119(uParam0->f_144, joaat("META_OUTFIT_DEFAULT"));
			}
			PED::_0x7C00CFC48A782DC0(uParam0->f_151, uParam0->f_144, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			PED::_0x7C00CFC48A782DC0(uParam0->f_150, uParam0->f_144, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			PED::_0x7C00CFC48A782DC0(uParam0->f_152, uParam0->f_144, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_152, 0);
			VOLUME::_0xBE551C2CC421185D(uParam0->f_152, 1);
			func_120(uParam0->f_144, joaat("DOCUMENT_LETTER_GAVIN_FRIEND"), 1);
			func_77(uParam0);
			func_72(uParam0, 0);
			func_14(&(uParam0->f_193), 1024);
			func_121(uParam0->f_144, 11);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uParam0->f_144, "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "GavinBubble");
			if (func_122(Global_40.f_11623[11 /*8*/].f_1, 4194304))
			{
				PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_144, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_NIGEL"));
			}
			return true;
		}
	}
	return false;
}

void func_20(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_145[0]) && uParam0->f_214 > 10f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_144, 0.25f);
	}
	else if (uParam0->f_214 < 10f)
	{
		func_123(uParam0);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_144, 0.25f);
	}
}

char[] func_21(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_WILDERNESS_A";
			break;
		case 1:
			sVar0 = "pbl_WILDERNESS_B";
			break;
		case 2:
			sVar0 = "pbl_WILDERNESS_C";
			break;
		case 3:
			sVar0 = "pbl_WILDERNESS_D";
			break;
		case 4:
			sVar0 = "pbl_WILDERNESS_E";
			break;
		case 5:
			sVar0 = "pbl_WILDERNESS_F";
			break;
		case 6:
			sVar0 = "pbl_WILDERNESS_G";
			break;
		case 7:
			sVar0 = "pbl_WILDERNESS_H";
			break;
		case 8:
			sVar0 = "pbl_WILDERNESS_I";
			break;
		case 9:
			sVar0 = "pbl_WILDERNESS_J";
			break;
		case 10:
			sVar0 = "pbl_WILDERNESS_K";
			break;
		case 11:
			sVar0 = "pbl_WILDERNESS_L";
			break;
		case 12:
			sVar0 = "pbl_WILDERNESS_M";
			break;
		case 13:
			sVar0 = "pbl_WILDERNESS_N";
			break;
		case 14:
			sVar0 = "pbl_WILDERNESS_O";
			break;
		case 15:
			sVar0 = "pbl_WILDERNESS_P";
			break;
	}
	return sVar0;
}

void func_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!func_3(*uParam3, 64))
	{
		return;
	}
	if (((AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2) || AUDIO::_0x54B187F111D9C6F8(*uParam2, 1)) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) || AUDIO::_0x54B187F111D9C6F8(Global_35, 1))
	{
		return;
	}
	AUDIO::_0x36559148B78853B3(0, 1, 0);
	*uParam4++;
	func_18(uParam0, uParam1, 31);
}

char[] func_23(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_SEARCH_TOWN_A";
			break;
		case 1:
			sVar0 = "pbl_SEARCH_TOWN_B";
			break;
		case 2:
			sVar0 = "pbl_SEARCH_TOWN_C";
			break;
		case 3:
			sVar0 = "pbl_SEARCH_TOWN_D";
			break;
		case 4:
			sVar0 = "pbl_SEARCH_TOWN_E";
			break;
		case 5:
			sVar0 = "pbl_SEARCH_TOWN_F";
			break;
	}
	return sVar0;
}

char[] func_24(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_RETURN_TO_SEARCH_A";
			break;
		case 1:
			sVar0 = "pbl_RETURN_TO_SEARCH_B";
			break;
		case 2:
			sVar0 = "pbl_RETURN_TO_SEARCH_C";
			break;
		case 3:
			sVar0 = "pbl_RETURN_TO_SEARCH_D";
			break;
		case 4:
			sVar0 = "pbl_RETURN_TO_SEARCH_E";
			break;
		case 5:
			sVar0 = "pbl_RETURN_TO_SEARCH_F";
			break;
	}
	return sVar0;
}

void func_25(var uParam0, bool bParam1)
{
	struct<4> Var0;

	Var0 = { func_124(uParam0, &(uParam0->f_144), bParam1) };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_206, Var0, Var0.f_3, 2);
	if (!bParam1)
	{
		Var0.f_2 = (Var0.f_2 + 1f);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_205, Var0, Var0.f_3, 2);
}

bool func_26(var uParam0, var uParam1)
{
	if (func_43(uParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "cs_gavin", uParam0->f_144, 0);
		if (!func_108())
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_three", Global_35, 0);
		}
		return true;
	}
	return false;
}

bool func_27(int iParam0, int iParam1)
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

void func_28(var uParam0)
{
	uParam0->f_204++;
	if (uParam0->f_204 > 9)
	{
		uParam0->f_204 = 0;
	}
	uParam0->f_128 = uParam0->f_204;
}

void func_29(var uParam0, var uParam1)
{
	if (uParam0->f_203 > 5)
	{
		uParam0->f_203 = 1;
	}
	switch (uParam0->f_203)
	{
		case 0:
			func_18(uParam0, uParam1, 25);
			break;
		case 1:
			func_18(uParam0, uParam1, 26);
			break;
		case 2:
			func_18(uParam0, uParam1, 27);
			break;
		case 3:
			func_18(uParam0, uParam1, 28);
			break;
		case 4:
			func_18(uParam0, uParam1, 29);
			break;
		case 5:
			func_18(uParam0, uParam1, 30);
			break;
		default:
			break;
	}
}

void func_30(var uParam0, var uParam1)
{
	if (uParam0->f_202 > 5)
	{
		uParam0->f_202 = 0;
	}
	switch (uParam0->f_202)
	{
		case 0:
			func_18(uParam0, uParam1, 19);
			break;
		case 1:
			func_18(uParam0, uParam1, 20);
			break;
		case 2:
			func_18(uParam0, uParam1, 21);
			break;
		case 3:
			func_18(uParam0, uParam1, 22);
			break;
		case 4:
			func_18(uParam0, uParam1, 23);
			break;
		case 5:
			func_18(uParam0, uParam1, 24);
			break;
		default:
			break;
	}
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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
			switch (func_125())
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

int func_32(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, iParam6, iParam6, fParam13);
	}
	iVar1 = func_126(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_127(iVar0);
	return iVar1;
}

void func_33(var uParam0, var uParam1)
{
	if (uParam0->f_201 > 6)
	{
		uParam0->f_201 = 0;
	}
	switch (uParam0->f_201)
	{
		case 0:
			func_18(uParam0, uParam1, 3);
			break;
		case 1:
			func_18(uParam0, uParam1, 9);
			break;
		case 2:
			func_18(uParam0, uParam1, 11);
			break;
		case 3:
			func_18(uParam0, uParam1, 13);
			break;
		case 4:
			func_18(uParam0, uParam1, 15);
			break;
		case 5:
			func_18(uParam0, uParam1, 16);
			break;
		case 6:
			func_18(uParam0, uParam1, 18);
			break;
		default:
			break;
	}
}

void func_34(var uParam0, var uParam1)
{
	if (uParam0->f_200 > 8)
	{
		uParam0->f_200 = 0;
	}
	switch (uParam0->f_200)
	{
		case 0:
			func_18(uParam0, uParam1, 4);
			break;
		case 1:
			func_18(uParam0, uParam1, 5);
			break;
		case 2:
			func_18(uParam0, uParam1, 6);
			break;
		case 3:
			func_18(uParam0, uParam1, 7);
			break;
		case 4:
			func_18(uParam0, uParam1, 8);
			break;
		case 5:
			func_18(uParam0, uParam1, 10);
			break;
		case 6:
			func_18(uParam0, uParam1, 12);
			break;
		case 7:
			func_18(uParam0, uParam1, 14);
			break;
		case 8:
			func_18(uParam0, uParam1, 17);
			break;
		default:
			break;
	}
}

bool func_35()
{
	if (((!func_128() && !func_27(Global_35, -208384378)) && (!ENTITY::DOES_ENTITY_EXIST(func_129()) || !ENTITY::IS_ENTITY_IN_AIR(func_129(), 1))) && (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35)) || !ENTITY::IS_ENTITY_IN_AIR(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), 1)))
	{
		return true;
	}
	if (func_130())
	{
		func_131();
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		if (!func_27(Global_35, -208384378))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), func_132(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
		}
	}
	return false;
}

int func_36(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_37()
{
	func_133();
	func_134(-1, 0, 0, 0, 0);
	func_135(60, 0, 1);
}

void func_38(var uParam0)
{
	func_136(uParam0->f_144, Global_35, &(uParam0->f_154), -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	if (!func_3(uParam0->f_195, 1))
	{
		func_14(&(uParam0->f_195), 1);
	}
	else if (func_3(uParam0->f_195, 1) && !func_3(uParam0->f_195, 2))
	{
		func_14(&(uParam0->f_195), 2);
	}
	else if (func_3(uParam0->f_195, 2) && !func_3(uParam0->f_195, 4))
	{
		func_14(&(uParam0->f_195), 4);
	}
	else if (func_3(uParam0->f_195, 4) && !func_3(uParam0->f_195, 8))
	{
		func_14(&(uParam0->f_195), 8);
	}
	else if (func_3(uParam0->f_195, 8) && !func_3(uParam0->f_195, 16))
	{
		func_14(&(uParam0->f_195), 16);
	}
	else if (func_3(uParam0->f_195, 16) && !func_3(uParam0->f_195, 32))
	{
		func_14(&(uParam0->f_195), 32);
	}
	func_18(uParam0, &(uParam0->f_129), 33);
}

void func_39(var uParam0)
{
	if (!func_3(uParam0->f_193, 256))
	{
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_144) > 1.5f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_144, 1.5f);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_206))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_206, false))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_206) > uParam0->f_213)
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_144, true, false);
					func_42(uParam0->f_144, 1);
					func_14(&(uParam0->f_193), 256);
				}
			}
		}
		if ((uParam0->f_214 > 10f && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_144))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_144, true, false);
			func_42(uParam0->f_144, 1);
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_206, false);
			func_14(&(uParam0->f_193), 256);
		}
	}
}

char[] func_40(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_action";
			break;
	}
	return sVar0;
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_42(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

bool func_43(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return false;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return false;
}

bool func_44(var uParam0, var uParam1)
{
	if (func_51(*uParam0))
	{
		func_137(*uParam0, *uParam1);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_45(var uParam0, var uParam1)
{
	if (func_51(uParam0->f_142))
	{
		switch (*uParam1)
		{
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
			case 23:
			case 24:
			case 31:
				break;
			case 32:
			case 33:
				break;
			case 34:
				break;
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
			case 36:
				if (func_3(uParam0->f_195, 8))
				{
					func_138(11, 1);
				}
				if (func_3(uParam0->f_195, 32))
				{
					func_138(11, 12);
				}
				break;
			case 37:
				break;
		}
	}
}

int func_46(var uParam0)
{
	switch (uParam0->f_200)
	{
		case 0:
			func_14(&(uParam0->f_194), 1);
			break;
		case 1:
			func_14(&(uParam0->f_194), 2);
			break;
		case 2:
			func_14(&(uParam0->f_194), 4);
			break;
		case 3:
			func_14(&(uParam0->f_194), 8);
			break;
		case 4:
			func_14(&(uParam0->f_194), 16);
			break;
		case 5:
			func_14(&(uParam0->f_194), 32);
			break;
		case 6:
			func_14(&(uParam0->f_194), 64);
			break;
	}
	switch (uParam0->f_201)
	{
		case 0:
			func_14(&(uParam0->f_194), 128);
			break;
		case 1:
			func_14(&(uParam0->f_194), 256);
			break;
		case 2:
			func_14(&(uParam0->f_194), 512);
			break;
		case 3:
			func_14(&(uParam0->f_194), 1024);
			break;
		case 4:
			func_14(&(uParam0->f_194), 2048);
			break;
		case 5:
			func_14(&(uParam0->f_194), 4096);
			break;
		case 6:
			func_14(&(uParam0->f_194), 8192);
			break;
		case 7:
			func_14(&(uParam0->f_194), 16384);
			break;
		case 8:
			func_14(&(uParam0->f_194), 32768);
			break;
	}
	switch (uParam0->f_202)
	{
		case 0:
			func_14(&(uParam0->f_194), 65536);
			break;
		case 1:
			func_14(&(uParam0->f_194), 131072);
			break;
		case 2:
			func_14(&(uParam0->f_194), 262144);
			break;
		case 3:
			func_14(&(uParam0->f_194), 524288);
			break;
		case 4:
			func_14(&(uParam0->f_194), 1048576);
			break;
		case 5:
			func_14(&(uParam0->f_194), 2097152);
			break;
	}
	switch (uParam0->f_203)
	{
		case 0:
			func_14(&(uParam0->f_194), 4194304);
			break;
		case 1:
			func_14(&(uParam0->f_194), 8388608);
			break;
		case 2:
			func_14(&(uParam0->f_194), 16777216);
			break;
		case 3:
			func_14(&(uParam0->f_194), 33554432);
			break;
		case 4:
			func_14(&(uParam0->f_194), 67108864);
			break;
		case 5:
			func_14(&(uParam0->f_194), 134217728);
			break;
	}
	if (func_51(uParam0->f_142))
	{
		func_139(uParam0->f_142, uParam0->f_194);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_47(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_140(0, -1);
	}
	func_141();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

void func_48(var uParam0)
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
	if (func_89(&(uParam0->f_13)))
	{
		func_93(&(uParam0->f_13));
	}
}

void func_49(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_142((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_143(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_50(int* iParam0, var uParam1)
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
	func_144(iParam0, uParam1, 1);
	func_49(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

bool func_51(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_52(int iParam0)
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
		iVar0 = func_145(iParam0);
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

bool func_53(int iParam0)
{
	int iVar0;

	iVar0 = func_146(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_54(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_51(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_53(iParam0) && !func_52(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_147(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_53(iParam0))
	{
		iParam2 = -1;
	}
	if (func_145(iParam0) == 3 || (func_145(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_147(iParam0))))
	{
		func_149(func_148(iParam0), func_147(iParam0), iParam2);
		if ((!func_51(Global_1572864.f_8) && !func_150(0, 1, 0)) && !func_151(Global_1935630, 32768))
		{
			iVar0 = func_152(iParam0);
			if (iVar0 != -1)
			{
				func_153(0);
			}
			else if (func_148(iParam0) == 8)
			{
				iVar0 = func_154();
				if (iVar0 != -1)
				{
					func_153(0);
				}
			}
		}
	}
	func_155(iParam0, 0);
	if (func_156(0) == iParam0)
	{
		func_157(1);
		func_158(0);
		func_159(1);
	}
	func_160(iParam0, 1);
	func_161(iParam0);
}

void func_55(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 3, 2, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 4, 2, 1);
}

void func_56(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_149))
	{
		func_162(uParam0->f_149);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_151))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_151);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_151);
	}
	func_127(Global_1396257[11 /*638*/][0 /*48*/].f_47);
	func_127(uParam0->f_149);
	func_127(uParam0->f_150);
	func_127(uParam0->f_151);
	func_127(uParam0->f_152);
}

bool func_57(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::DOES_VOLUME_EXIST(Global_1955500[iParam0 /*16*/].f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(Global_1955500[iParam0 /*16*/].f_2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_58(int iParam0, int iParam1)
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
	if (func_3(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_3(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_3(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_3(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_59(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_163(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_164(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_166(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_167(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_168(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_169(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_170(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_171(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_172(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_173(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_173(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_174(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_175(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_176(uParam2, 4000))
				{
					if ((func_177(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_178(uParam2, iParam0)) && func_179(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_177(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_178(uParam2, iParam0)) && func_179(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_180(iParam0, Global_1935630.f_41))
							{
								func_181();
								*uParam3 = 2;
								func_165(iParam0, uParam2, *uParam3);
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
						if (func_180(iParam0, Global_1935630.f_41))
						{
							func_181();
							*uParam3 = 2;
							func_165(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_182(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_183() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_181();
						*uParam3 = 2;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_184())
					{
						if (func_180(iParam0, Global_1935630.f_42))
						{
							func_181();
							*uParam3 = 2;
							func_165(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_185(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_186(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_187(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_188(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_189(uParam2, 4000))
				{
					if (func_190(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_165(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_191(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_165(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_192(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_165(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_60(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_88();
}

bool func_61(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_193(iParam0, &Var0);
}

bool func_62(var uParam0, char* sParam1)
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
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
	}
	return false;
}

bool func_63()
{
	int iVar0;

	if (func_194() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_53(Global_1392915[iVar0 /*12*/].f_4))
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

int func_64(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_65()
{
	return Global_1310750.f_16077 != 0;
}

bool func_66(var uParam0, int iParam1)
{
	return func_122(*uParam0, iParam1);
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_68(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

bool func_69(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_64(0) == 1 || func_64(0) == 2) || func_64(0) == 8) || func_151(Global_1935630, 2048))
			{
				func_14(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_64(0) == 11)
			{
				func_14(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_64(0) == 6)
			{
				func_14(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_14(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_195(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_195(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_88();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_195(iVar2) > func_195(iVar1))
				{
					if (func_195(iVar0) > func_195(iVar2) + 1 || func_195(iVar0) < func_195(iVar1))
					{
						func_14(uParam2, 32);
					}
				}
				else if (func_195(iVar0) > func_195(iVar2) + 1 && func_195(iVar0) < func_195(iVar1))
				{
					func_14(uParam2, 32);
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
					if (((func_196(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_196(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_197(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_197(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_198(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_14(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_199(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_200(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_89(&(uParam2->f_13)))
					{
						func_90(&(uParam2->f_13), 0f);
					}
					else if (func_201(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_93(&(uParam2->f_13));
						func_14(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_89(&(uParam2->f_13)))
					{
						func_93(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_202())
			{
				func_14(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_203())
			{
				func_14(uParam2, 2048);
			}
		}
		if (func_151(Global_1935630, 16384) || Global_1430231.f_4)
		{
			func_14(uParam2, 128);
		}
		if (func_66(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			func_14(uParam2, 256);
		}
	}
	if ((((((((((func_3(*uParam2, 2) || func_3(*uParam2, 4)) || func_3(*uParam2, 8)) || func_3(*uParam2, 16)) || func_3(*uParam2, 32)) || func_3(*uParam2, 64)) || func_3(*uParam2, 128)) || func_3(*uParam2, 256)) || func_3(*uParam2, 512)) || func_3(*uParam2, 1024)) || func_3(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

int func_70(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_194() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || Global_1347702[iVar0 /*49*/].f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (!func_204(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

void func_72(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_3(uParam0->f_193, 1024))
		{
			func_205(&(uParam0->f_219), 0);
			func_78(&(uParam0->f_240[0 /*17*/]), 1, 0);
			func_78(&(uParam0->f_240[1 /*17*/]), 1, 0);
			uParam0->f_296 = 2;
			func_14(&(uParam0->f_193), 1024);
		}
	}
	else if (func_3(uParam0->f_193, 1024))
	{
		func_205(&(uParam0->f_219), 0);
		func_78(&(uParam0->f_240[0 /*17*/]), 0, 0);
		func_78(&(uParam0->f_240[1 /*17*/]), 0, 0);
		uParam0->f_296 = 3;
		func_7(&(uParam0->f_193), 1024);
	}
}

int func_73(int iParam0, int iParam1, int iParam2)
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

int func_74(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_206(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_207(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_208(&(iParam1->f_13));
		}
		if (func_209(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_210(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_74(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
							func_211(*uParam0, 1, 1);
						}
					}
					else if (func_212(iParam1, 22))
					{
						func_211(*uParam0, 0, 1);
					}
				}
				if (func_213(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_214(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_215(iParam8);
					if (func_216(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_217(uParam3);
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
					func_218(iParam1, uParam3, fVar8);
					if (func_219(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_49(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_220(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_213(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_221(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_216(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_214(uParam0, func_213(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_215(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_49(uParam3, 0, 0, 1, 1);
					}
					func_222(iParam1, 1);
				}
				func_218(iParam1, uParam3, fVar8);
				if (func_220(uParam0, iParam1, fParam4, bVar6))
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
			func_50(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_75(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_84(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_224(func_223(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_225(func_223(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_88();
	func_85(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_76(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_77(var uParam0)
{
	func_226(&(uParam0->f_240[0 /*17*/]), "GAV_UC_TALK", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_226(&(uParam0->f_240[1 /*17*/]), "GAV_UC_NEG", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_78(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_227(iParam0, 13))
	{
		func_87(iParam0, 0);
	}
	else
	{
		func_228(iParam0, 0);
	}
	if (func_142(iParam0->f_6))
	{
		if (bParam2)
		{
			func_143(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_79(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

struct<2> func_80(var uParam0)
{
	struct<2> Var0;

	if (!func_3(uParam0->f_195, 1))
	{
		Var0 = "INSULT_MALE_CONV_PART1";
		Var0.f_1 = 2;
	}
	else if (func_3(uParam0->f_195, 1) && !func_3(uParam0->f_195, 2))
	{
		Var0 = "INSULT_GAVINSFRIEND_CONV_PART1";
		Var0.f_1 = 2;
	}
	else if (func_3(uParam0->f_195, 2) && !func_3(uParam0->f_195, 4))
	{
		Var0 = "INSULT_MET_EARLIER_CONV_PART1";
		Var0.f_1 = 1;
	}
	else if (func_3(uParam0->f_195, 4) && !func_3(uParam0->f_195, 8))
	{
		Var0 = "INSULT_MET_EARLIER_CONV_PART1";
		Var0.f_1 = 2;
	}
	else if (func_3(uParam0->f_195, 8) && !func_3(uParam0->f_195, 16))
	{
		Var0 = "INSULT_MALE_CONV_PART1";
		Var0.f_1 = 11;
	}
	else if (func_3(uParam0->f_195, 16) && !func_3(uParam0->f_195, 32))
	{
		Var0 = "INSULT_MUSICIAN_CONV_PART1";
		Var0.f_1 = 4;
	}
	return Var0;
}

bool func_81(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_89(uParam2))
		{
			func_90(uParam2, 0f);
			return false;
		}
		else if (func_201(uParam2) > iParam6)
		{
			func_93(uParam2);
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
			fParam7 = func_229(*uParam0, Global_35, 1, 1);
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

char* func_82(int iParam0)
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

bool func_83(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 60;
		case 2:
			return 150;
		default:
			break;
	}
	return 0;
}

void func_87(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

var func_88()
{
	return Global_1899515;
}

bool func_89(var uParam0)
{
	return func_230(*uParam0, 1);
}

void func_90(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_231() - fParam1);
	func_232(uParam0, 1);
	func_233(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_91(var uParam0)
{
	if (!func_89(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_234(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_231() - uParam0->f_1);
}

bool func_92(int iParam0)
{
	return iParam0 != -15;
}

void func_93(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_94(int iParam0)
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
			switch (func_235())
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

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return "spd_gav_rhodes";
		case 38:
			return "spd_gav_blackwater";
		case 126:
			return "spd_gav_macfarlane";
		case 5:
			return "spd_gav_saintdenis";
		default:
			break;
	}
	return "";
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return "spd_gav_talltrees";
		case 10:
			return "spd_gav_roanoke";
		case 15:
			return "spd_gav_cholla_springs";
		default:
			break;
	}
	return "";
}

char* func_97()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_1@ig_1";
}

bool func_98(var uParam0, var uParam1)
{
	if (func_51(*uParam0))
	{
		*uParam1 = func_236(*uParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

int func_99(int iParam0)
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

int func_100(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_237())
	{
		iVar2 = func_237();
	}
	iVar5 = func_238(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_239(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_239(iVar6) == 0)
			{
				return func_240(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_239(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_239(iVar6) == 0)
			{
				return func_240(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_240(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

char* func_101()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_6@ig_6";
}

char* func_102(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_action";
			break;
	}
	return sVar0;
}

char* func_103()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_7@ig_7";
}

char* func_104(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_action";
			break;
	}
	return sVar0;
}

void func_105(var uParam0)
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

void func_106(var uParam0)
{
	struct<11> Var0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_152))
	{
		uParam0->f_152 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 1.85f, 1.85f, 2f);
	}
	switch (uParam0->f_127)
	{
		case 105:
			Var0 = { func_241(0) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(1) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(2) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			return;
		case 26:
			Var0 = { func_241(3) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(4) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(5) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			return;
		case 5:
			Var0 = { func_241(15) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(16) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(17) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			return;
		case 76:
			Var0 = { func_241(6) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(7) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(8) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			return;
		case 110:
			Var0 = { func_241(9) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(10) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(11) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			return;
		case 38:
			Var0 = { func_241(12) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(13) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(14) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			return;
		case 127:
			Var0 = { func_241(18) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(19) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(20) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			return;
		case 126:
			Var0 = { func_241(21) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(22) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(23) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			return;
		case 120:
			Var0 = { func_241(24) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(25) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(26) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			return;
	}
	switch (func_31(11))
	{
		case 12:
			Var0 = { func_241(27) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(28) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(29) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			break;
		case 11:
			Var0 = { func_241(30) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(31) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(32) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			break;
		case 10:
			Var0 = { func_241(33) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(34) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(35) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			break;
		case 16:
			Var0 = { func_241(36) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(37) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(38) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			break;
		case 15:
			Var0 = { func_241(39) };
			func_242(&(uParam0->f_149), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(40) };
			func_242(&(uParam0->f_150), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_241(41) };
			func_242(&(uParam0->f_151), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			break;
	}
}

int func_107(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_243(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_108()
{
	if (func_194() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_109(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_244(uParam0, iParam1, sParam2))
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

bool func_110(var uParam0)
{
	if (func_51(uParam0->f_142))
	{
		uParam0->f_194 = func_245(uParam0->f_142);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_111(var uParam0)
{
	if (func_3(uParam0->f_194, 1))
	{
		uParam0->f_201 = 1;
		return;
	}
	else if (func_3(uParam0->f_194, 2))
	{
		uParam0->f_201 = 2;
		return;
	}
	else if (func_3(uParam0->f_194, 4))
	{
		uParam0->f_201 = 3;
		return;
	}
	else if (func_3(uParam0->f_194, 8))
	{
		uParam0->f_201 = 4;
		return;
	}
	else if (func_3(uParam0->f_194, 16))
	{
		uParam0->f_201 = 5;
		return;
	}
	else if (func_3(uParam0->f_194, 32))
	{
		uParam0->f_201 = 6;
		return;
	}
	else if (func_3(uParam0->f_194, 64))
	{
		uParam0->f_201 = 0;
		return;
	}
	uParam0->f_201 = 0;
}

void func_112(var uParam0)
{
	if (func_3(uParam0->f_194, 128))
	{
		uParam0->f_200 = 1;
		return;
	}
	else if (func_3(uParam0->f_194, 256))
	{
		uParam0->f_200 = 2;
		return;
	}
	else if (func_3(uParam0->f_194, 512))
	{
		uParam0->f_200 = 3;
		return;
	}
	else if (func_3(uParam0->f_194, 1024))
	{
		uParam0->f_200 = 4;
		return;
	}
	else if (func_3(uParam0->f_194, 2048))
	{
		uParam0->f_200 = 5;
		return;
	}
	else if (func_3(uParam0->f_194, 4096))
	{
		uParam0->f_200 = 6;
		return;
	}
	else if (func_3(uParam0->f_194, 8192))
	{
		uParam0->f_200 = 7;
		return;
	}
	else if (func_3(uParam0->f_194, 16384))
	{
		uParam0->f_200 = 8;
		return;
	}
	else if (func_3(uParam0->f_194, 32768))
	{
		uParam0->f_200 = 0;
		return;
	}
	uParam0->f_200 = 0;
}

void func_113(var uParam0)
{
	if (func_3(uParam0->f_194, 4194304))
	{
		uParam0->f_203 = 1;
		return;
	}
	else if (func_3(uParam0->f_194, 8388608))
	{
		uParam0->f_203 = 2;
		return;
	}
	else if (func_3(uParam0->f_194, 16777216))
	{
		uParam0->f_203 = 3;
		return;
	}
	else if (func_3(uParam0->f_194, 33554432))
	{
		uParam0->f_203 = 4;
		return;
	}
	else if (func_3(uParam0->f_194, 67108864))
	{
		uParam0->f_203 = 5;
		return;
	}
	else if (func_3(uParam0->f_194, 134217728))
	{
		uParam0->f_203 = 0;
		return;
	}
	uParam0->f_203 = 0;
}

void func_114(var uParam0)
{
	if (func_3(uParam0->f_194, 65536))
	{
		uParam0->f_202 = 1;
		return;
	}
	else if (func_3(uParam0->f_194, 131072))
	{
		uParam0->f_202 = 2;
		return;
	}
	else if (func_3(uParam0->f_194, 262144))
	{
		uParam0->f_202 = 3;
		return;
	}
	else if (func_3(uParam0->f_194, 524288))
	{
		uParam0->f_202 = 4;
		return;
	}
	else if (func_3(uParam0->f_194, 1048576))
	{
		uParam0->f_202 = 5;
		return;
	}
	else if (func_3(uParam0->f_194, 2097152))
	{
		uParam0->f_202 = 0;
		return;
	}
	uParam0->f_202 = 0;
}

bool func_115(int iParam0, bool bParam1)
{
	switch (func_146(iParam0))
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

struct<4> func_116(var uParam0, int iParam1)
{
	struct<4> Var0;

	switch (iParam1)
	{
		case 0:
			Var0 = { func_246(11, 0, 0) };
			break;
		case 1:
			switch (uParam0->f_127)
			{
				case 105:
					Var0 = { 1358.015f, -1369.316f, 78.3282f };
					Var0.f_3 = 300.6034f;
					return Var0;
				case 26:
					Var0 = { -1826.825f, -424.025f, 159.689f };
					Var0.f_3 = 101.0226f;
					return Var0;
				case 76:
					Var0 = { -272.9171f, 633.0108f, 112.46f };
					Var0.f_3 = 131.3773f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
				case 110:
					Var0 = { -1988.987f, -1637.129f, 116.1275f };
					Var0.f_3 = 261.0204f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 127:
					Var0 = { -1408.907f, -2314.77f, 42.1056f };
					Var0.f_3 = 86.7896f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 120:
					Var0 = { -3674.969f, -2619.971f, -14.8162f };
					Var0.f_3 = 4.9799f;
					return Var0;
			}
			switch (func_31(11))
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
				case 16:
					Var0 = { -1565.447f, -2695.09f, 64.7772f };
					Var0.f_3 = 340.7221f;
					break;
				case 15:
					Var0 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_3 = 86.239f;
					break;
			}
			break;
	}
	return Var0;
}

bool func_117(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_247(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_247(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
	{
		return true;
	}
	return false;
}

void func_118(var uParam0)
{
	func_248(&(uParam0->f_98), uParam0->f_144);
	func_249(&(uParam0->f_98), 1);
	func_250(&(uParam0->f_98), 1);
	func_251(&(uParam0->f_98), 1);
	func_252(&(uParam0->f_98), 1);
	func_253(&(uParam0->f_98), 1);
	func_254(&(uParam0->f_98), 1);
	func_255(&(uParam0->f_98), 1);
	func_256(&(uParam0->f_98), 1);
	func_257(&(uParam0->f_98), 1);
	func_258(&(uParam0->f_98), 1);
	func_259(&(uParam0->f_98), 1);
	func_260(&(uParam0->f_98), 1);
	func_261(&(uParam0->f_98), 1);
	func_262(&(uParam0->f_98), 0);
	func_263(&(uParam0->f_98), 1);
	func_264(&(uParam0->f_98), 0);
	func_265(&(uParam0->f_98), 0);
	func_266(&(uParam0->f_98), 0);
	func_267(&(uParam0->f_98), 0);
	func_268(&(uParam0->f_98), 0);
	func_269(&(uParam0->f_98), 0);
	func_270(&(uParam0->f_98), 0);
	func_271(&(uParam0->f_98), 1, 1, 1);
}

void func_119(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_272(iParam0, iParam1))
		{
			if (func_273(iParam0, iParam1))
			{
				if (func_274(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_275(iParam0);
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

void func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<13> Var1;
	int iVar24;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_276(iParam0);
		Var1.f_1 = 10;
		Var1.f_12 = 10;
		Var1 = 1;
		Var1.f_1[0] = iParam1;
		Var1.f_12[0] = iParam2;
		iVar24 = 10;
		ENTITY::_0xA88E215CEB0435C0(iParam0, &Var1, iVar0, iVar24, 3, 0);
	}
}

void func_121(int iParam0, int iParam1)
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

bool func_122(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_123(var uParam0)
{
	struct<14> Var0;

	if (uParam0->f_214 < 10f)
	{
		Var0.f_4 = -1;
		Var0.f_8 = 2;
		Var0.f_9 = 1;
		Var0.f_10 = 1;
		Var0.f_11 = 1;
		Var0.f_13 = 1;
		Var0.f_14 = 2;
		Var0.f_15 = 2;
		Var0.f_16 = 3;
		Var0.f_19 = 3;
		Var0.f_20 = 1;
		Var0.f_21 = 3;
		Var0.f_22 = 3;
		Var0 = { 0f, 0f, 0f };
		Var0.f_3 = Global_35;
		Var0.f_4 = 21030;
		Var0.f_8 = 4;
		Var0.f_13 = 3;
		Var0.f_7 = 5000;
		IK::_0x66F9EB44342BB4C5(uParam0->f_144, &Var0);
	}
}

struct<6> func_124(var uParam0, var uParam1, bool bParam2)
{
	struct<6> Var0;
	var uVar6;

	if (!bParam2)
	{
		switch (uParam0->f_127)
		{
			case 105:
				Var0 = { 1358.015f, -1369.316f, 178.3282f };
				Var0.f_3 = { 0f, 0f, 300.6034f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 26:
				Var0 = { -1826.825f, -424.025f, 259.689f };
				Var0.f_3 = { 0f, 0f, 101.0226f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 76:
				Var0 = { -272.9171f, 633.0108f, 212.46f };
				Var0.f_3 = { 0f, 0f, 131.3773f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 5:
				Var0 = { 2563.835f, -1378.423f, 45.1925f };
				Var0.f_3 = { 0f, 0f, 346.5068f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 110:
				Var0 = { -1988.987f, -1637.129f, 216.1275f };
				Var0.f_3 = { 0f, 0f, 261.0204f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 38:
				Var0 = { -773.2449f, -1329.082f, 142.6291f };
				Var0.f_3 = { 0f, 0f, 191.3503f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 127:
				Var0 = { -1408.907f, -2314.77f, 142.1056f };
				Var0.f_3 = { 0f, 0f, 86.7896f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 126:
				Var0 = { -2378.475f, -2378.621f, 161.1724f };
				Var0.f_3 = { 0f, 0f, 185.2923f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 120:
				Var0 = { -3674.969f, -2619.971f, 94.8162f };
				Var0.f_3 = { 0f, 0f, 4.9799f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
		}
		switch (func_31(11))
		{
			case 12:
				Var0 = { -2338.21f, -1271.362f, 247.062f };
				Var0.f_3 = { 0f, 0f, 356.6931f };
				break;
			case 11:
				Var0 = { 1295.802f, -200.3015f, 199.0642f };
				Var0.f_3 = { 0f, 0f, 1.8815f };
				break;
			case 10:
				Var0 = { 2428.864f, 1015.729f, 185.6131f };
				Var0.f_3 = { 0f, 0f, 304.652f };
				break;
			case 16:
				Var0 = { -1565.447f, -2695.09f, 164.7772f };
				Var0.f_3 = { 0f, 0f, 340.7221f };
				break;
			case 15:
				Var0 = { -3157.477f, -2981.991f, 104.6224f };
				Var0.f_3 = { 0f, 0f, 86.239f };
				break;
		}
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
		Var0.f_2 = uVar6;
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
		Var0.f_3 = { 0f, 0f, 0f };
		Var0.f_3.f_2 = ENTITY::GET_ENTITY_HEADING(*uParam1);
	}
	return Var0;
}

int func_125()
{
	return Global_1897952.f_41;
}

int func_126(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_277(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_278(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_127(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_128()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_130())
	{
		return true;
	}
	return false;
}

var func_129()
{
	return Global_1900383.f_393;
}

bool func_130()
{
	if (func_279(Global_35) || func_280(Global_35))
	{
		return true;
	}
	return false;
}

int func_131()
{
	if (func_279(Global_35) || func_280(Global_35))
	{
		if (!func_27(Global_35, -208384378))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, func_129(), func_132(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
		}
		return 0;
	}
	else if ((!func_279(Global_35) && !func_280(Global_35)) && !func_27(Global_35, -208384378))
	{
		return 1;
	}
	return 0;
}

Vector3 func_132(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_133()
{
	if (!func_281(Global_1327479))
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
	func_282(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
}

void func_134(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_283() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_281(iVar1) && !func_284(iVar1, iParam2)) && (!bParam3 || !func_285(iVar1))) && (!bParam4 || !func_286(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_287(iVar0);
			}
		}
		iVar0++;
	}
}

void func_135(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_288(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_5)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

void func_136(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_289(iParam0, iParam1, iParam18);
	}
}

void func_137(int iParam0, int iParam1)
{
	if (!func_51(iParam0))
	{
		return;
	}
	func_290(iParam0, iParam1);
}

void func_138(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

void func_139(int iParam0, var uParam1)
{
	if (!func_51(iParam0))
	{
		return;
	}
	func_291(iParam0, uParam1);
}

void func_140(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_292(&Global_0, 8);
	}
	if (!func_293() || func_194() != -1)
	{
		return;
	}
	func_292(&Global_0, 1);
}

void func_141()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

bool func_142(int iParam0)
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

void func_143(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_142(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_294(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_295(iVar0);
	*uParam0 = 0;
}

void func_144(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_143(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_205(iParam0, 0);
		}
	}
}

int func_145(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_296(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_146(int iParam0)
{
	if (!func_51(iParam0))
	{
		return -1;
	}
	return func_145(iParam0);
}

int func_147(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

int func_148(int iParam0)
{
	if (!func_51(iParam0))
	{
		return 0;
	}
	return func_297(func_239(iParam0));
}

void func_149(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_194() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_150(int iParam0, bool bParam1, bool bParam2)
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
		if (func_298())
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
		iVar0 = func_299(Global_1898164.f_1[0 /*5*/]);
		if (func_300(iVar0) && func_301(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_51(Global_1898164.f_1[0 /*5*/]))
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

bool func_151(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_152(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_148(iParam0))
	{
		case 1:
			iVar0 = func_299(iParam0);
			return func_302(iVar0);
		case 8:
			iVar1 = func_299(iParam0);
			if (func_301(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_303(iVar1);
			}
			break;
	}
	return -1;
}

void func_153(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_194() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_304(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_305();
		Global_1898077.f_9 = func_306(Global_1894899.f_2);
		func_307(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_154()
{
	if (!func_115(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_115(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_115(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_115(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_115(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_115(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_115(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_155(int iParam0, int iParam1)
{
	if (!func_51(iParam0))
	{
		return;
	}
	func_308(iParam0, iParam1);
}

int func_156(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_157(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_309(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_310(&Global_1935630, 4194304);
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

int func_158(bool bParam0)
{
	if (!bParam0 && func_311(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_159(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_160(int iParam0, bool bParam1)
{
	if (func_194() != -1)
	{
		return;
	}
	if (func_156(0) != iParam0)
	{
		return;
	}
	if (func_312(iParam0))
	{
		if (bParam1)
		{
			func_313(-525676072);
		}
		else
		{
			func_314(-525676072);
		}
	}
}

int func_161(int iParam0)
{
	return func_316(func_315(iParam0));
}

void func_162(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_317(vVar0, 0);
}

void func_163(var uParam0, bool bParam1, int iParam2)
{
	func_318(iParam2);
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
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = func_319(0);
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
							func_41(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_320(1))
						{
							func_41(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_320(1) || *uParam0 & 8192 != 0))
				{
					func_321(uParam0, 33554432);
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
			if (func_322(uParam0))
			{
				uParam0->f_15 = func_183();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_183() - uParam0->f_15) > 500)
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
	func_323(uParam0);
}

bool func_164(int iParam0, var uParam1)
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
			if (!func_324(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_325(iParam0, iVar2) <= func_326(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_165(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_327(iParam2, 1, 1, 1, 0))
	{
		func_41(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_328(uParam1, 1);
	func_329();
}

bool func_166(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_330(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_331(uParam1);
			if (func_332(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_333(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_328(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_328(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_167(int iParam0, int iParam1, var uParam2)
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
	if (func_334(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_331(uParam2);
		if (func_332(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_333(uParam2)
				{
					func_328(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_168(int iParam0, var uParam1)
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
	if (func_324(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_333(uParam1)
		{
			fVar3 = func_331(uParam1);
			if (uParam1->f_12 < fVar3)
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

int func_169(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_335(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
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

bool func_170(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_183();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_171(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_336(uParam2);
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
			if (func_179(uParam2, iParam1))
			{
				func_328(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_172(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_337(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_179(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_328(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_173(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_338(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_328(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_328(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_339(iParam1, vVar0, vVar4))
					{
						func_328(uParam2, 1);
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
					func_328(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_339(iParam1, vVar0, vVar7))
					{
						func_328(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_174(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_324(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_340(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_341(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_342(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_343(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_344(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_175(int iParam0, var uParam1)
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

bool func_176(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_183();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_345(iVar0, &iVar2))
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
	if (func_346(iVar0, iParam0))
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

int func_178(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_179(var uParam0, int iParam1)
{
	if (func_347(uParam0))
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

bool func_180(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_229(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_181()
{
}

bool func_182(var uParam0, int iParam1)
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
		if (func_348(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_183();
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
						if (func_349(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_183();
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

int func_183()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_184()
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
	if ((func_183() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_185(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_326(uParam0);
	if (uParam0->f_12 > func_350(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_351(iParam1);
	iVar1 = func_352(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_186(int iParam0, int iParam1, var uParam2)
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
	return func_353(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_187(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

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
		if (func_354(iParam0, uParam1, 1))
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
					if (!func_355(uParam1, iParam0))
					{
						if (func_349(iVar4, Global_36, 1) < 7f)
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

bool func_188(int iParam0, var uParam1)
{
	if (!func_356(0))
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

bool func_189(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_183();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_190(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_191(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_183();
	}
	else if (func_183() - uParam1->f_4) > func_357(uParam1)
	{
		return func_358(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_192(var uParam0, int iParam1)
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

bool func_193(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_194()
{
	return Global_1572887.f_12;
}

int func_195(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_196(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_53(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_197(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_52(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_198(int iParam0)
{
	int iVar0;

	iVar0 = func_359();
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

int func_199(var uParam0, var uParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_360(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_200(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_361(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_362(iVar1, 0))
		{
			func_363(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

int func_201(var uParam0)
{
	if (!func_89(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_234(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_183() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_202()
{
	return Global_1392040.f_6;
}

bool func_203()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_204(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_205(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_93(&(iParam0->f_18));
}

void func_206(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_207(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_208(var uParam0)
{
	func_90(uParam0, 0f);
}

bool func_209(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_364(iParam0, uParam1))
		{
			if (!func_122(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_49(uParam2, 0, 0, 1, 0);
				func_41(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_122(uParam1->f_10, 1))
		{
			func_365(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_321(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_210(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_122(iParam4, 32);
		func_144(iParam1, uParam2, 0);
		iVar5 = func_366(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_49(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_122(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_122(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_122(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_122(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_122(iParam4, 8388608) || func_122(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_122(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_122(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_212(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_212(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_122(iParam4, 67108864))
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
				iParam6 = func_367(uParam0);
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
			if (func_122(iParam4, 268435456))
			{
				iVar8 = func_368(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_369(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_212(iParam1, 23))
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
			if (func_122(iParam4, 2) || func_122(iParam4, 16))
			{
				func_211(*uParam0, 1, 1);
			}
			else
			{
				func_211(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_211(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_212(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_213(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_370(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_214(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_371(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_122(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_215(int iParam0)
{
	if (func_122(iParam0, 4))
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
	if (func_122(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_122(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_216(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_372(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_373(Global_35)) || func_374(Global_35)) || func_375(Global_35));
	fVar12 = -1f;
	if (func_89(&(iParam1->f_13)))
	{
		fVar12 = func_91(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_142((uParam4[iVar0 /*17*/])->f_6);
		func_376(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_377(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_378(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_49(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_379(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_144(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_380(iParam1, fParam6, iParam1->f_9))
					{
						func_208(&(iParam1->f_18));
						if (bVar6)
						{
							func_379(uParam4, 0, 0);
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
		func_381(iParam1, fParam2);
	}
	return bVar5;
}

void func_217(var uParam0)
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

void func_218(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_382(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_381(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_219(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_383(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_384(iParam1, 0);
				func_144(iParam1, uParam2, func_212(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_220(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_208(&(iParam1->f_18));
			return false;
		}
		else if (func_89(&(iParam1->f_18)))
		{
			func_93(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_89(&(iParam1->f_18)))
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
	return func_385(&(iParam1->f_18), fParam2);
	return true;
}

void func_221(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_376(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_222(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

struct<2> func_223(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_224(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_225(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_226(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_142(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_386(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_387(iParam0->f_6, iParam0->f_5, 0);
			}
			func_388(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_389(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_227(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_228(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

float func_229(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_230(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_231()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_232(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_234(var uParam0)
{
	return func_230(*uParam0, 2);
}

int func_235()
{
	return Global_1894899.f_2;
}

int func_236(int iParam0)
{
	if (!func_51(iParam0))
	{
		return -1;
	}
	return func_390(iParam0);
}

int func_237()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_238(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_239(int iParam0)
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

int func_240(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_391(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_237())
	{
		return -1;
	}
	iVar0 = func_238(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_308(iVar1, 0);
	func_392(iVar1, 0);
	func_290(iVar1, 0);
	func_291(iVar1, 0);
	func_393(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_394(iVar1, iParam4);
	}
	return iVar1;
}

struct<11> func_241(int iParam0)
{
	struct<11> Var0;
	float fVar11;

	fVar11 = 6f;
	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 1407.135f, -1373.595f, 80.78f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1358.015f, -1369.316f, 78.3282f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 1358.015f, -1369.316f, 78.3282f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 3:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -1826.825f, -424.025f, 159.689f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 4:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1826.825f, -424.025f, 159.689f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 5:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -1826.825f, -424.025f, 159.689f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 6:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -272.9171f, 633.0108f, 112.46f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 7:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -272.9171f, 633.0108f, 112.46f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 8:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -272.9171f, 633.0108f, 112.46f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 15:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 2590.084f, -1348.206f, 45.193f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 90f, 90f, 90f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 16:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2563.835f, -1378.423f, 45.1925f };
			Var0.f_4 = { 0f, 0f, 346.5068f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 17:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2563.835f, -1378.423f, 45.1925f };
			Var0.f_4 = { 0f, 0f, 346.5068f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 9:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -1988.987f, -1637.129f, 116.1275f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 10:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1988.987f, -1637.129f, 116.1275f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 11:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -1988.987f, -1637.129f, 116.1275f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 12:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -799.974f, -1330.227f, 42.6291f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 80f, 80f, 80f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 13:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -773.2449f, -1329.082f, 42.6291f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 14:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -773.2449f, -1329.082f, 42.6291f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 18:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -1408.907f, -2314.77f, 42.1056f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 19:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1408.907f, -2314.77f, 42.1056f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 20:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -1408.907f, -2314.77f, 42.1056f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 21:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -2350.174f, -2392.17f, 61.172f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 70f, 70f, 70f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 22:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -2378.475f, -2378.621f, 61.1724f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 23:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2378.475f, -2378.621f, 61.1724f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 24:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -3674.969f, -2619.971f, -14.8162f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 25:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -3674.969f, -2619.971f, -14.8162f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 26:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -3674.969f, -2619.971f, -14.8162f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 27:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -2336.584f, -1264.266f, 147.062f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 28:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -2338.21f, -1271.362f, 147.062f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 29:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2338.21f, -1271.362f, 147.062f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 30:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 1295.802f, -200.3015f, 99.0642f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 31:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1295.802f, -200.3015f, 99.0642f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 32:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 1295.802f, -200.3015f, 99.0642f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 33:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 2420.433f, 1020.558f, 87.236f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 110f, 110f, 110f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 34:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2428.864f, 1015.729f, 85.6131f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 35:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2428.864f, 1015.729f, 85.6131f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 36:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -1565.447f, -2695.09f, 64.7772f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 37:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1565.447f, -2695.09f, 64.7772f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 38:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -1565.447f, -2695.09f, 64.7772f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 39:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -3158.572f, -3010.584f, 3.689f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 40:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -3157.477f, -2981.991f, 4.6224f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 41:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -3157.477f, -2981.991f, 4.6224f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
	}
	return Var0;
}

void func_242(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, char* sParam11)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(uParam1, vParam2, vParam5, vParam8, sParam11);
}

int func_243(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_395(vParam0))
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
		if (func_396(vParam0))
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
	func_397(iVar0, bParam8);
	return iVar0;
}

bool func_244(var uParam0, int iParam1, char* sParam2)
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

int func_245(int iParam0)
{
	if (!func_51(iParam0))
	{
		return -1;
	}
	return func_398(iParam0);
}

struct<4> func_246(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

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
			switch (func_31(4))
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
			switch (func_94(11))
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
			}
			switch (func_31(11))
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
			break;
		case 12:
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
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0 = { -312.9856f, 808.8508f, 117.9822f };
					Var0.f_3 = 197.2573f;
					break;
			}
			break;
		case 14:
			Var0 = { 1320.745f, -1291.739f, 75.14026f };
			Var0.f_3 = 68.748f;
			break;
		case 15:
			switch (func_31(15))
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
			break;
		case 16:
			Var0 = { 2636.429f, -1229.537f, 52.3795f };
			Var0.f_3 = 358.7895f;
			break;
		case 17:
			Var0 = { 2943.588f, 1336.999f, 43.22713f };
			Var0.f_3 = 76.2778f;
			break;
		case 18:
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
			break;
		case 19:
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
			break;
		case 20:
			Var0 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_3 = 359.6814f;
			break;
		case 21:
			Var0 = { 2706.282f, 2369.827f, 170.2336f };
			Var0.f_3 = 359.6814f;
			break;
		case 22:
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
			break;
		case 23:
			switch (func_31(23))
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
			break;
		case 24:
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
			break;
		case 25:
			Var0 = { 2368.588f, -859.9452f, 42.0223f };
			Var0.f_3 = 198.7042f;
			break;
		case 26:
			Var0 = { -345.2797f, 794.6578f, 115.1777f };
			Var0.f_3 = 28.0552f;
			break;
		case 27:
			Var0 = { 2644.443f, -1207.946f, 52.3368f };
			Var0.f_3 = 199.0776f;
			break;
		case 28:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
		case 29:
			Var0 = { 2778.292f, -1313.274f, 45.89664f };
			Var0.f_3 = 216.3798f;
			break;
	}
	return Var0;
}

int func_247(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_399(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_248(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_249(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 8);
	}
	else
	{
		func_41(&(uParam0->f_1), 8);
	}
}

void func_250(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 8);
	}
	else
	{
		func_321(uParam0, 8);
	}
}

void func_251(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 256);
	}
	else
	{
		func_41(&(uParam0->f_1), 256);
	}
}

void func_252(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 4);
	}
	else
	{
		func_41(&(uParam0->f_1), 4);
	}
}

void func_253(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 2);
	}
	else
	{
		func_41(&(uParam0->f_1), 2);
	}
}

void func_254(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 16384);
	}
	else
	{
		func_41(&(uParam0->f_1), 16384);
	}
}

void func_255(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 128);
	}
	else
	{
		func_41(&(uParam0->f_1), 128);
	}
}

void func_256(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 256);
	}
	else
	{
		func_321(uParam0, 256);
	}
}

void func_257(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 8388608);
	}
	else
	{
		func_321(uParam0, 8388608);
	}
}

void func_258(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 2048);
	}
	else
	{
		func_41(&(uParam0->f_1), 2048);
	}
}

void func_259(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 128);
	}
	else
	{
		func_321(uParam0, 128);
	}
}

void func_260(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 16);
	}
	else
	{
		func_321(uParam0, 67108864);
		func_321(uParam0, 16);
	}
}

void func_261(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 16);
	}
	else
	{
		func_41(&(uParam0->f_1), 16);
	}
}

void func_262(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 524288);
	}
	else
	{
		func_321(uParam0, 524288);
	}
}

void func_263(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 524288);
	}
	else
	{
		func_41(&(uParam0->f_1), 524288);
	}
}

void func_264(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 131072);
	}
	else
	{
		func_41(&(uParam0->f_1), 131072);
	}
}

void func_265(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 4);
	}
	else
	{
		func_321(uParam0, 4);
	}
}

void func_266(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 64);
	}
	else
	{
		func_321(uParam0, 64);
	}
}

void func_267(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 2);
	}
	else
	{
		func_321(uParam0, 2);
	}
}

void func_268(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 1024);
	}
	else
	{
		func_41(&(uParam0->f_1), 1024);
	}
}

void func_269(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_321(&(uParam0->f_1), 1);
	}
	else
	{
		func_41(&(uParam0->f_1), 1);
	}
}

void func_270(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 32);
	}
	else
	{
		func_321(uParam0, 32);
	}
}

void func_271(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_41(uParam0, 268435456);
	}
	else
	{
		func_321(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_41(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_321(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_41(uParam0, 536870912);
	}
	else
	{
		func_321(uParam0, 536870912);
	}
}

bool func_272(int iParam0, int iParam1)
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

bool func_273(int iParam0, int iParam1)
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

bool func_274(int iParam0, int iParam1)
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
	if (!func_272(iParam0, iVar0))
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

void func_275(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_276(int iParam0)
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

bool func_277(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_400(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_401(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_278(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_402(iVar9);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var3, iParam0, iVar2, 0))
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

bool func_280(int iParam0)
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
	iVar0 = func_129();
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

bool func_281(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_282(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_283()
{
	return Global_1310750.f_16037;
}

bool func_284(int iParam0, int iParam1)
{
	if (!func_281(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_285(int iParam0)
{
	if (!func_281(iParam0))
	{
		return false;
	}
	if (func_403(64) && func_404(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_286(int iParam0)
{
	if (!func_281(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_287(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_281(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_405(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_288(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_406(iParam0, iParam1, bParam2);
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

void func_290(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_291(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_292(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_293()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_294(int iParam0)
{
	return iParam0;
}

void func_295(int iParam0)
{
	if (!func_407(iParam0))
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

int func_296(int iParam0)
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

int func_297(int iParam0)
{
	return iParam0 & 31;
}

bool func_298()
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

int func_299(int iParam0)
{
	if (!func_51(iParam0))
	{
		return -1;
	}
	return func_408(func_239(iParam0));
}

bool func_300(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_301(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_302(int iParam0)
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

int func_303(int iParam0)
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

void func_304(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_305()
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

int func_306(int iParam0)
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

void func_307(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_308(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_409(iParam0);
	}
	else
	{
		func_410(iParam0, iParam1);
	}
	func_411();
}

void func_309(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_310(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_311(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_412(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_312(int iParam0)
{
	if (!func_51(iParam0))
	{
		return false;
	}
	switch (func_148(iParam0))
	{
		case 1:
			switch (func_299(iParam0))
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
			switch (func_299(iParam0))
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

void func_313(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_413(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_414(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_416(func_415(iParam0), 6);
}

void func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_413(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_414(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_417(func_415(iParam0), 6);
}

int func_315(int iParam0)
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

int func_316(int iParam0)
{
	struct<5> Var0;

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
	func_418(iParam0, Global_1898164.f_162);
	return 1;
}

void func_317(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_395(vParam0))
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
			if (func_419(vVar2, vParam0, 2f, 1))
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

void func_318(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_420();
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
			func_421(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_319(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_320(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_422(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_322(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_194() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_423(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_423(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_352(iVar0) == -1)
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

void func_323(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_424(uParam0);
	}
}

bool func_324(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_352(iParam2);
	}
	else
	{
		iVar1 = func_351(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_352(iParam0);
	}
	else
	{
		iVar0 = func_351(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_122(*uParam1, 8388608))
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

float func_325(int iParam0, int iParam1)
{
	return func_229(iParam0, iParam1, 1, 1);
}

float func_326(var uParam0)
{
	return uParam0->f_26;
}

bool func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_328(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_41(uParam0, 134217728);
	}
	else
	{
		func_321(uParam0, 134217728);
	}
}

void func_329()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_330(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_229(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_36(iVar0, 0)))
		{
			if (func_425(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_331(var uParam0)
{
	return uParam0->f_17;
}

bool func_332(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_122(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_333(var uParam0)
{
	return uParam0->f_18;
}

bool func_334(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_36(iVar0, 0)))
		{
			if (func_426(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_335(bool bParam0, bool bParam1, bool bParam2)
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

float func_336(var uParam0)
{
	return uParam0->f_23;
}

int func_337(var uParam0)
{
	return uParam0->f_21;
}

int func_338(var uParam0)
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

bool func_339(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_427(iParam0, vParam4, 0.5f))
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

int func_340(int iParam0)
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
	if (func_428(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_341(int iParam0)
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

bool func_342(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_429(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_343(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_429(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_344(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_429(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
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

bool func_345(int iParam0, int iParam1)
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

bool func_346(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_430(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_347(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_348(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_349(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_349(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_350(var uParam0)
{
	return uParam0->f_24;
}

int func_351(int iParam0)
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

int func_352(int iParam0)
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

int func_353(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_345(Global_35, &iVar1))
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
		fVar2 = func_229(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_229(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_354(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_422(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_355(uParam1, iVar0))
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
				if (!bParam2 || !func_355(uParam1, iVar1))
				{
					if (func_349(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_355(var uParam0, int iParam1)
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

bool func_356(int iParam0)
{
	if (func_108())
	{
		return false;
	}
	return func_115(Global_1347702[58 /*49*/].f_15, 1);
}

int func_357(var uParam0)
{
	return uParam0->f_20;
}

int func_358(int iParam0, var uParam1, bool bParam2, float fParam3)
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

var func_359()
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

bool func_360(var uParam0, vector3 vParam1, float fParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_361(var uParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*uParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*uParam1)))
				{
					if (func_431(Global_35, *uParam1, 0))
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

bool func_362(int iParam0, bool bParam1)
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

void func_363(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_27(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

bool func_364(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_432((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_365(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_382(uParam0[iVar0 /*17*/]))
		{
			func_87(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_366(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_433(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_142((uParam2[iVar0 /*17*/])->f_6))
		{
			func_87(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_367(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_434(*uParam0);
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

int func_368(var uParam0, int iParam1)
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

void func_369(int* iParam0, int* iParam1)
{
	if (!func_212(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_87(iParam1, 19);
			func_384(iParam0, 23);
			func_435(iParam1, 2);
		}
	}
}

bool func_370(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_436(16))
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
					func_437(16);
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

void func_371(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_433(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_372(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_373(int iParam0)
{
	return (func_438(iParam0, 4) || func_438(iParam0, 5));
}

int func_374(int iParam0)
{
	return func_438(iParam0, 7);
}

int func_375(int iParam0)
{
	return func_438(iParam0, 6);
}

void func_376(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_382(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_433(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_377(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_439(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_440(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_388(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_388(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_441(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_378(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_442(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_443(iParam1, 1))
	{
		func_444(iParam1, 1);
		return true;
	}
	return false;
}

void func_379(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_78(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_380(int* iParam0, float fParam1, bool bParam2)
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

void func_381(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_382(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_383(int iParam0)
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

void func_384(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_385(var uParam0, float fParam1)
{
	if (func_445(uParam0, fParam1))
	{
		func_93(uParam0);
		return 1;
	}
	return 0;
}

void func_386(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_387(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_388(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (bParam1)
	{
		func_446(iParam0, 4);
		func_447(iVar0, 1);
		func_448(iVar0, 1);
	}
	else
	{
		func_449(iParam0, 4);
		func_448(iVar0, 0);
	}
}

void func_389(int* iParam0, char* sParam1)
{
	if (func_142(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_387(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_228(iParam0, 1);
}

int func_390(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_391(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_392(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_393(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/] = iParam1;
}

void func_394(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/].f_1 = iParam1;
}

bool func_395(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_396(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_397(int iParam0, bool bParam1)
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

int func_398(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

void func_399(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_450(iParam1))
		{
			func_119(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_451(iParam0, 0, 1);
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
			func_452(iParam0, 0);
			bVar0 = true;
		}
		func_453(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_400(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_454(), 1))
	{
		return true;
	}
	return false;
}

int func_401(int iParam0, bool bParam1)
{
	return func_455(iParam0, Global_1894899.f_2, bParam1);
}

int func_402(int iParam0)
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

bool func_403(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_404(int iParam0)
{
	return func_284(iParam0, Global_1310750.f_16072 | 64);
}

void func_405(int iParam0)
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

void func_406(int iParam0, int iParam1, bool bParam2)
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

bool func_407(int iParam0)
{
	return func_456(iParam0, 2);
}

int func_408(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_409(int iParam0)
{
	int iVar0;

	iVar0 = func_296(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_457(iVar0);
}

int func_410(int iParam0, int iParam1)
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
			func_458(iVar2);
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

void func_411()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

int func_412(int iParam0, int iParam1)
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

int func_413(bool bParam0)
{
	if (func_194() == -1)
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

int func_414(int iParam0)
{
	struct<2> Var0;

	if (!func_459(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_415(int iParam0)
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

void func_416(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 - (Global_1946804.f_2657.f_26.f_6 && iParam0));
}

void func_417(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 || iParam0);
}

void func_418(int iParam0, int iParam1)
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
			func_460((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_460(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_51(Global_1898164.f_1[0 /*5*/]))
	{
		func_155(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_419(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_420()
{
	if (func_461())
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

void func_421(var uParam0, var uParam1)
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

bool func_422(bool bParam0, int iParam1, int iParam2)
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

int func_423(var uParam0)
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

void func_424(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_321(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_41(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_425(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_426(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_426(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_427(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_428(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_429(int iParam0)
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

int func_430(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_431(int iParam0, int iParam1, bool bParam2)
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

int func_432(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_433(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_142(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_143(&(iParam1->f_6), 0, 1);
	}
	if (!func_142(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_382(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_462(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_142(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_441(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_463(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_464(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_386(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_463(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_388(iParam1->f_6, 0, 1);
				}
				else
				{
					func_388(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_434(int iParam0)
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

void func_435(int* iParam0, int iParam1)
{
	if (!func_227(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_87(iParam0, 14);
		}
	}
}

bool func_436(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_437(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_438(int iParam0, int iParam1)
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

bool func_439(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_440(int iParam0, bool bParam1)
{
	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	return !func_456(iParam0, 4);
}

void func_441(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_142(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	func_463(iParam0, 18, 0, 1);
	func_463(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_442(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	iVar0 = func_294(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_443(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_142(iParam0))
	{
		return false;
	}
	iVar0 = func_294(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_444(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_445(var uParam0, float fParam1)
{
	if (!func_89(uParam0))
	{
		return false;
	}
	if (func_91(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_446(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_447(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_456(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_448(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_449(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

bool func_450(int iParam0)
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

void func_451(int iParam0, int iParam1, bool bParam2)
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

void func_452(int iParam0, bool bParam1)
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

void func_453(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

int func_454()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_455(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_465(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_466(iParam0, uVar0, iVar1, bParam2);
}

bool func_456(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_457(int iParam0)
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

int func_458(int iParam0)
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

bool func_459(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_460(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

bool func_461()
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

int func_462(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_456(iVar0, 2))
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
				func_467(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_463(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_464(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_142(iParam0))
	{
		return;
	}
	iVar0 = func_294(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_465(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_194() != -1;
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

int func_466(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(iParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_468(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_469(iVar2)))
		{
			if (func_469(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_467(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_447(iParam0, 1);
	func_448(iParam0, 1);
	func_449(iParam0, 128);
}

int func_468(int iParam0)
{
	if (!func_470(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_469(int iParam0)
{
	if (!func_470(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_470(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

