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
	struct<28> /*224*/ sLocal_15[2];
	var uLocal_72[2] = { 0, 0 };
	int iLocal_75[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	struct<44> /*352*/ sLocal_104 = { 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1072064102, 1072064102, -1082130432 } ;
	var uLocal_148 = -1082130432;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 1065353216;
	var uLocal_153 = 1;
	int iLocal_154 = 0;
	bool bLocal_155 = false;
	struct<31> /*248*/ sLocal_156 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194[5] = { 0, 0, 0, 0, 0 };
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	int iLocal_206 = 0;
	float fLocal_207 = 0f;
	struct<21> /*168*/ sLocal_208[2];
	struct<52> /*416*/ sLocal_251[2];
	int iLocal_356 = 0;
	struct<21> /*168*/ sLocal_357 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	char cLocal_386[32] = "";
	int iLocal_390[5] = { 0, 0, 0, 0, 0 };
	int iLocal_396[5] = { 0, 0, 0, 0, 0 };
	int iLocal_402[5] = { 0, 0, 0, 0, 0 };
	int iLocal_408 = 0;
	int iLocal_409[2] = { 0, 0 };
	struct<7> /*56*/ sLocal_412[11];
	vector3 vLocal_490[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519[2] = { 0, 0 };
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	bool bLocal_525 = false;
	struct<691> /*5528*/ sLocal_526 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = -1;
	var uLocal_1227 = 1;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = -1;
	var uLocal_1239 = 1;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = -1;
	var uLocal_1251 = 1;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = -1;
	var uLocal_1263 = 1;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = -1;
	var uLocal_1275 = 1;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = -1;
	var uLocal_1287 = 1;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = -1;
	var uLocal_1299 = 1;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = -1;
	var uLocal_1311 = 1;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = -1;
	var uLocal_1323 = 1;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = -1;
	var uLocal_1335 = 1;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = -1;
	var uLocal_1347 = 1;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = -1;
	var uLocal_1359 = 1;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = -1;
	var uLocal_1371 = 1;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = -1;
	var uLocal_1383 = 1;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = -1;
	var uLocal_1395 = 1;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = -1;
	var uLocal_1407 = 1;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = -1;
	var uLocal_1419 = 1;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = -1;
	var uLocal_1431 = 1;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = -1;
	var uLocal_1443 = 1;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = -1;
	var uLocal_1455 = 1;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = -1;
	var uLocal_1467 = 1;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = -1;
	var uLocal_1479 = 1;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = -1;
	var uLocal_1491 = 1;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = -1;
	var uLocal_1503 = 1;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = -1;
	var uLocal_1515 = 1;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = -1;
	var uLocal_1527 = 1;
	var uLocal_1528 = 0;
	struct<141> /*1128*/ sLocal_1529 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	int iLocal_1680 = 0;
	int iLocal_1681[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1687[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1718 = 30;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1780 = 0;
	var uLocal_1781 = 8;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	int iLocal_1846[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1856 = 9;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866[2] = { 0, 0 };
	int iLocal_1869[2] = { 0, 0 };
	bool bLocal_1872[10] = { false, false, false, false, false, false, false, false, false, false };
	var uLocal_1883 = 10;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	int iLocal_1894[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1910 = 0;
	struct<35> /*280*/ sLocal_1911 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1096810496, 1090519040, 0 } ;
	var uLocal_1946[1] = { 0 };
	struct<5> /*40*/ sLocal_1948[5];
	var uLocal_1974[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	int iLocal_1982 = 0;
	int iLocal_1983 = 0;
	bool bLocal_1984 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_207 = 15f;
	Local_1529.f_136 = 0;
	Local_1529.f_137 = uScriptParam_0;
	Local_1529.f_138 = 807;
	if (func_1() == 0)
	{
		func_2();
		func_3(Local_1529.f_136);
		return;
	}
	iLocal_98 = func_4(Local_1529.f_136);
	if (func_5(Local_1529.f_136, 536870912))
	{
		func_8(&(Global_40.f_9096[Local_1529.f_136 /*12*/].f_6), func_7(func_6()));
	}
	if (!func_9(Local_1529.f_136, 2097152))
	{
		func_10(Local_1529.f_136, 2097152);
	}
	func_11();
	func_13(128, func_12(Local_1529.f_136));
	if (func_9(Local_1529.f_136, 33554432))
	{
		func_14(128);
		func_15(Local_1529.f_136, 33554432);
	}
	func_14(1);
	func_13(262144, func_5(Local_1529.f_136, 128));
	func_13(131072, func_5(Local_1529.f_136, 4));
	func_13(2097152, func_9(Local_1529.f_136, 1024));
	func_13(-2147483648, func_9(Local_1529.f_136, 16384));
	func_13(1048576, func_16(Local_1529.f_136));
	func_13(16, func_17(Local_1529.f_136));
	func_18(0, &Local_1529, 0);
	VEHICLE::_0x012701ED938B85DE(1f, 5f);
	if (func_5(Local_1529.f_136, 128) || (iLocal_98 == 2 && (func_19(-2147483648) || !func_9(1, 2))))
	{
		func_14(262144);
	}
	func_21(&Local_1529, 32, func_20());
	if (func_22(&Local_1529, 32))
	{
		if (!func_23(Local_1529.f_138, 32))
		{
			func_24(Local_1529.f_138, 32);
		}
		if (!func_19(1048576))
		{
			iVar0 = 16;
			func_25(Global_1392194[Local_1529.f_136 /*10*/].f_6, iVar0);
		}
	}
	else
	{
		func_26(Global_1392194[Local_1529.f_136 /*10*/].f_6);
	}
	func_27(Local_1529.f_136, Local_1529.f_137, &Local_526, &Local_1529, 1, 1);
	func_13(64, func_28());
	func_13(16384, func_29());
	func_13(32768, func_30());
	func_13(65536, func_31());
	func_13(256, func_32());
	func_33();
	Local_526.f_13 = joaat("LOGGING_WORKERS");
	func_34();
	if (!func_22(&Local_1529, 32))
	{
		iLocal_75[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.323f, -207.0721f, 103.6361f, 0f, 0f, 18.49513f, 5.458226f, 7.343121f, 3.461949f, "Appleseed - volOffice");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[0], 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_75[0], 0, 0, 0, -1, -1, 2);
	}
	if (iLocal_98 != 1)
	{
	}
	else
	{
		iLocal_75[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1342.603f, -191.78f, 101.3216f, 0f, 0f, 26.31277f, 4.493421f, 15.76546f, 2.950686f, "Appleseed - volFlatbed");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[8], 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_75[8], 0, 0, 0, -1, -1, 2);
	}
	func_3(Local_1529.f_136);
	uScriptParam_0 = uScriptParam_0;
	Local_526.f_4 = { -1399.503f, -223.7296f, 99.81865f };
	Local_526.f_7 = { -1474.662f, -341.2676f, 80f };
	Local_526.f_10 = { -1326.326f, -116.0771f, 150f };
	if (func_19(16))
	{
		Local_357.f_3 = 1;
	}
	if (func_22(&Local_1529, 32))
	{
		POPULATION::_0x74C2B3DC0B294102(Global_1392194[Local_1529.f_136 /*10*/].f_5);
		POPULATION::_0xA1CFB35069D23C23(Global_1392194[Local_1529.f_136 /*10*/].f_5);
		func_35(512);
	}
	else if (iLocal_98 != 3)
	{
	}
	else
	{
		iLocal_75[18] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA LCMP - volOnMission");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[18], -1414.369f, -264.0309f, 134.2139f, 0f, 0f, 18.97237f, 103.6197f, 144.6739f, 41.18933f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[18], -1470.38f, -391.851f, 142.0586f, 0f, 0f, -62.46322f, 62.55141f, 51.09426f, 31.34803f);
	}
	func_36();
	func_37();
	if (iLocal_98 > 3)
	{
		func_35(512);
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		func_35(512);
	}
	func_13(8192, func_38());
	func_39(&Local_1529);
	func_40(&Local_1529, 1);
	if (func_19(1048576) || func_22(&Local_1529, 32))
	{
		func_41(&Local_1529, 1);
	}
	if (func_19(262144) && !func_5(Local_1529.f_136, 16777216))
	{
		func_42(Local_1529.f_136, 16777216);
	}
	func_43(&Local_1529, 128);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1984 = true;
	}
	while (true)
	{
		func_45(bLocal_1984, 9272, 0);
		func_46();
		if (!bLocal_1984)
		{
			switch (iLocal_1981)
			{
				case 0:
					if (!func_5(Local_1529.f_136, 524288) && Local_526.f_3 < ((2 + (Local_526 + Local_526.f_1)) + iLocal_14) + 15)
					{
						func_47((15 + (iLocal_14 + (Local_526.f_1 + Local_526) + 2)), &Local_526);
						func_48(&(vLocal_490[4 /*3*/]));
					}
					else if (func_49())
					{
						iLocal_1981 = 1;
					}
					break;
				case 1:
					func_50(16);
					if (!func_51(1) && func_52())
					{
						bVar1 = func_51(16);
						func_54(1, func_53(&Local_526, &Local_1529, &iLocal_1846, &iLocal_1869, &bVar1, &iLocal_191));
						func_54(16, bVar1);
						if (func_51(1))
						{
							iLocal_191 = 0;
						}
					}
					if (!func_51(131072))
					{
						if (func_19(256))
						{
							if (func_55())
							{
								func_57(func_56(), 10f, 1);
								if (!VOLUME::DOES_VOLUME_EXIST(iLocal_75[21]))
								{
									iLocal_75[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1336.432f, -204.9798f, 102.1644f, 0f, 0f, 25.28583f, 5.635887f, 71.55907f, 4.877145f, "EA LCMP - volTrain");
									POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[21], 10208, 0, 0, -1, -1, 0);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1869[1]))
								{
									iLocal_1869[1] = VEHICLE::_CREATE_MISSION_TRAIN(-1901305252, func_56(), false, false, true, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1869[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1869[1], false, false))
								{
									VEHICLE::SET_TRAIN_SPEED(iLocal_1869[1], 0f);
									VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_1869[1], 0f);
									VEHICLE::_0x3660BCAB3A6BB734(iLocal_1869[1]);
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1869[1], false);
									VEHICLE::_0xA72B1BF3857B94D7(iLocal_1869[1], 1);
									func_58(131072);
								}
							}
						}
						else
						{
							func_58(131072);
						}
					}
					if (!func_51(2) && func_52())
					{
						if (!func_22(&Local_1529, 32))
						{
							bVar2 = func_51(16);
							func_54(2, func_60(&bVar2, &iLocal_191, 0, func_59((iLocal_98 == 3 && !func_19(262144)), 0, -1)));
							func_54(16, bVar2);
							if (func_51(2))
							{
								iLocal_191 = 0;
							}
						}
						else
						{
							func_58(2);
						}
					}
					if (!func_51(4) && !func_51(16))
					{
						if (!func_22(&Local_1529, 32))
						{
							func_61(Local_1529.f_138, 0, 0, 0, 0, 0);
							func_58(16);
							func_54(4, func_62(Local_1529.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_1529.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(func_63(Local_1529.f_138), 146, true);
							}
						}
						else
						{
							func_58(4);
						}
					}
					if (!func_51(8))
					{
						if (!func_22(&Local_1529, 32) && !func_22(&Local_1529, 2))
						{
							if (func_64(&Local_526))
							{
								if (!func_22(&Local_1529, 32) && func_19(64))
								{
									func_65(&(Local_1529.f_35), iLocal_1846[0], "LOGGING_VICTIM", 0);
									iVar3 = 810;
									bVar4 = func_63(iVar3);
									func_65(&(Local_1529.f_35), bVar4, "LOGGING_WORKER", 0);
								}
								func_58(8);
							}
						}
						else
						{
							func_58(8);
						}
					}
					if (!func_51(524288) && func_66())
					{
						if (func_19(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_1846[5]))
						{
							func_67(&(uLocal_72[1]), &(iLocal_1846[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, 0, 0, 0);
						}
						if (func_19(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_1846[4]))
						{
							func_67(&(uLocal_72[0]), &(iLocal_1846[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, 0, iLocal_201, 0);
							if (!func_68(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
							{
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 1, true);
								VEHICLE::SET_VEHICLE_EXTRA(uLocal_72[0], 2, true);
								func_69(128);
							}
						}
						func_58(524288);
					}
					func_70(Local_1529.f_136, 1);
					if (((((((((!CAM::IS_SCREEN_FADED_OUT() && func_51(1)) && func_51(2)) && func_51(4)) && func_51(8)) && func_51(131072)) && func_51(524288)) && func_71()) && func_72()) || func_22(&Local_1529, 32))
					{
						if (!func_22(&Local_1529, 32) && (func_19(128) || !func_73()))
						{
							func_65(&(Local_1529.f_35), Global_35, "ARTHUR", 0);
							func_65(&(Local_1529.f_35), func_63(Local_1529.f_138), "EA_LCMP_Foreman", 0);
							func_74();
						}
						else
						{
							func_65(&(Local_1529.f_35), Global_35, "ARTHUR", 0);
							func_65(&(Local_1529.f_35), func_63(Local_1529.f_138), "EA_LCMP_Foreman", 0);
							func_75(Local_1529.f_138, 1);
							func_76(&(Local_208[0 /*21*/]), 0);
						}
						func_77();
						iLocal_1981 = 2;
					}
					break;
				case 2:
					if (func_22(&Local_1529, 128) && func_78(Local_1529.f_136, func_19(128)))
					{
						func_79(0);
						func_80(&Local_1529, 128);
					}
					func_81();
					if (!func_19(16777216))
					{
						func_13(16777216, func_82(&Local_1529, &Local_526));
					}
					if (!func_22(&Local_1529, 32))
					{
						if (func_18(iLocal_203, &Local_1529, 5))
						{
							func_83();
							func_84();
						}
						if (!func_22(&Local_1529, 2))
						{
							func_85(&uLocal_1687, &uLocal_1749, &Local_1529, 808, 833, &iLocal_190, &iLocal_203, 10, -1082130432 /* Float: -1f */, 1);
							func_86(&uLocal_1687);
							func_86(&iLocal_1846);
							func_86(&bLocal_1872);
							func_87();
							func_88();
							if ((!func_22(&Local_1529, 32) && !func_19(32)) && func_19(128))
							{
								func_91(&Local_1529, 0, func_89(), func_90());
								func_92();
							}
							if (func_93())
							{
								if (func_68(8192))
								{
									TASK::SET_ANIM_RATE(Local_526.f_690[12 /*12*/].f_8, 0f, 0, false);
									TASK::SET_ANIM_RATE(Local_526.f_690[13 /*12*/].f_8, 0f, 0, false);
								}
								func_94(&Local_357, &Local_1529, 0);
								func_95(&Local_1529);
								func_15(Local_1529.f_136, 16384);
								func_96(&iLocal_1780);
								func_97();
								if (func_98(iLocal_154) && func_99(iLocal_154))
								{
									func_100(iLocal_154, 0, 2);
								}
								func_101(1);
								LAW::_0x710448D44A64C213(1);
								iVar5 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
								MAP::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								if (func_102(1))
								{
									func_43(&Local_1529, 4096);
									func_43(&Local_1529, 16384);
								}
								else
								{
									func_10(Local_1529.f_136, 1024);
								}
								func_103();
								func_104();
								func_105();
								func_106(1);
								iVar6 = 0;
								while (iVar6 < 2)
								{
									func_107(&(Local_251[iVar6 /*52*/]), 1, 1, 1, 0);
									iVar6++;
								}
								func_108(0);
								func_109(iLocal_75[1]);
								func_110();
								if (!ENTITY::IS_ENTITY_DEAD(bLocal_1872[0]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(bLocal_1872[0], false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[23 /*12*/].f_8))
								{
									ENTITY::DETACH_ENTITY(Local_526.f_690[23 /*12*/].f_8, false, true);
								}
								func_111(&uLocal_1856);
								func_111(&uLocal_1883);
								func_111(&uLocal_1866);
								func_112(Local_1529.f_136, 3);
								func_113(&Local_1529);
								iLocal_1983 = 4;
								iVar7 = func_59(!ENTITY::IS_ENTITY_DEAD(func_63(Local_1529.f_138)), 1, 0);
								if (!func_22(&Local_1529, 4096))
								{
									func_114(func_63(Local_1529.f_138), Global_35, "LOG_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								if (func_51(32768))
								{
									iVar8 = joaat("CRIME_THEFT_VEHICLE");
								}
								else if (func_115(268435456))
								{
									iVar8 = joaat("CRIME_THEFT_HORSE");
								}
								else
								{
									iVar8 = func_116(&Local_1529, Local_1529.f_28);
								}
								func_43(&Local_1529, 2);
								func_117();
								if (!func_19(1024))
								{
									func_119(&Local_1529, func_63(Local_1529.f_138), &(uLocal_1866[0]), 0, func_118(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0);
								}
								if (!(func_19(32) && func_19(1024)))
								{
									iLocal_1983 = func_59(iLocal_1983 > iVar7, (iLocal_1983 - iVar7), 0);
									iVar7 = func_120(&Local_1529, &iLocal_1846, &uLocal_1856, func_118(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar5, iLocal_1983, 0, 0, 0, iVar8, 1051260355 /* Float: 0.33f */);
									iLocal_1983 = func_59(iLocal_1983 > iVar7, (iLocal_1983 - iVar7), 0);
								}
								iLocal_1983 = func_59(iLocal_1983 > iVar7, (iLocal_1983 - iVar7), 0);
								func_47(iLocal_190, &Local_526);
								iVar7 = func_121(&Local_1529, &uLocal_1687, &uLocal_1718, iLocal_1983, func_118(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iLocal_190, iVar5, 0, 0, 0, iVar8, 1051260355 /* Float: 0.33f */);
								iLocal_1983 = func_59(iLocal_1983 > iVar7, (iLocal_1983 - iVar7), 0);
								func_33();
								func_43(&Local_1529, 128);
							}
						}
						else
						{
							func_122(&uLocal_1687, &Local_1529);
							func_123();
							if (func_19(1024))
							{
								if (func_124(&Local_1529, func_63(Local_1529.f_138), &(uLocal_1866[0]), 0))
								{
									if (func_19(32))
									{
										if (func_125())
										{
											iVar10 = 0;
											iVar9 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
											iLocal_1983 = func_59(iLocal_1983 > iVar10, (iLocal_1983 - iVar10), 0);
											iVar10 = (func_120(&Local_1529, &iLocal_1846, &uLocal_1856, func_118(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), iVar9, iLocal_1983, 0, 0, 0, func_116(&Local_1529, Local_1529.f_28), 1051260355 /* Float: 0.33f */) + iVar10);
											iLocal_1983 = func_59(iLocal_1983 > iVar10, (iLocal_1983 - iVar10), 0);
											func_126(1024);
										}
									}
									else
									{
										func_126(1024);
									}
								}
							}
							if (func_19(32))
							{
								if (func_127())
								{
									if (!func_19(1024))
									{
										func_126(32);
									}
								}
							}
							if (func_19(64))
							{
								if (func_68(131072))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[0]))
									{
										if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_1846[0] || PED::IS_PED_LASSOED(iLocal_1846[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_1846[0], 3))
										{
											func_128(iLocal_1846[0], 0, 0);
										}
									}
								}
								else if (!func_129(iLocal_1846[0], 518218985) && !TASK::GET_IS_TASK_ACTIVE(iLocal_1846[0], 3))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_1846[0], false);
									PED::_0x89F5E7ADECCCB49C(iLocal_1846[0], "INJURED_LEFT_LEG");
									TASK::TASK_FLEE_PED(iLocal_1846[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
								}
							}
							if (!func_22(&Local_1529, 4) && func_130(&Local_1529, &iLocal_1846, &bLocal_1872, &(Local_1529.f_139), 5, func_63(Local_1529.f_138)))
							{
								func_43(&Local_1529, 4);
							}
						}
						if (!func_22(&Local_1529, 2))
						{
							if (func_19(65536) && !ENTITY::IS_ENTITY_DEAD(iLocal_1846[5]))
							{
								func_67(&(uLocal_72[1]), &(iLocal_1846[5]), &(Local_15[1 /*28*/]), 1112014848 /* Float: 50f */, func_19(4096), 0, 0);
								if (!func_68(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]))
								{
									PROPSET::_0xD80FAF919A2E56EA(uLocal_72[1], joaat("PG_VEH_LOGWAGON_1"));
									func_69(128);
								}
							}
							if (func_19(32768) && !ENTITY::IS_ENTITY_DEAD(iLocal_1846[4]))
							{
								func_67(&(uLocal_72[0]), &(iLocal_1846[4]), &(Local_15[0 /*28*/]), 1112014848 /* Float: 50f */, func_19(4096), iLocal_201, 0);
								if (!func_68(128) && ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]))
								{
									func_69(128);
								}
							}
						}
					}
					if (!func_22(&Local_1529, 2))
					{
						if (!func_22(&Local_1529, 32))
						{
							func_131(&Local_357);
							if (func_132(&Local_357, 1))
							{
								func_133(&Local_1529, &Local_357, &(Local_208[1 /*21*/]), &(Local_251[1 /*52*/]));
							}
							else
							{
								func_134(&Local_357, 4);
							}
						}
						if (func_135())
						{
							bLocal_1984 = true;
						}
					}
					else if (!func_22(&Local_1529, 32))
					{
						func_136();
					}
					break;
			}
		}
		if (func_137())
		{
			bLocal_1984 = true;
		}
		BUILTIN::WAIT(Local_1529.f_30);
	}
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2()
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(529482239, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(223107846, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1428772759, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1480157862, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2061234582, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1033154098, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1619191432, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1254150069, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1668640329, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-92203186, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(378017637, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(874422897, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-508527824, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2077381882, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-681889807, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-595414142, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1712141152, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1887892244, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(638507460, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1610796463, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-614511582, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1254654001, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-419045977, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2146274232, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1850986699, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-465906603, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1498945676, false);
}

void func_3(int iParam0)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = func_139(iParam0);
	if (!func_140(iVar0, 8))
	{
		func_141(iVar0, 8);
	}
	TASK::_0x4161648394262FDF(func_142(iParam0, func_4(iParam0)), 100f);
	func_143(&(Global_1392194[iParam0 /*10*/].f_1), 1);
}

int func_4(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	return Global_40.f_9096[iParam0 /*12*/];
}

bool func_5(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0 /*12*/].f_4 && iParam1) != 0;
}

int func_6()
{
	switch (iLocal_98)
	{
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_7(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_8(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_9(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0 /*12*/].f_5 && iParam1) != 0;
}

void func_10(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (func_9(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 = (Global_40.f_9096[iParam0 /*12*/].f_5 || iParam1);
}

void func_11()
{
	iLocal_99 = 0;
}

bool func_12(var uParam0)
{
	int iVar0;

	if (func_144(30336, 1, 1) && !func_145())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_146(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (func_147() && func_148() == 27)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_13(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_14(iParam0);
	}
	else
	{
		func_126(iParam0);
	}
}

void func_14(int iParam0)
{
	iLocal_99 = (iLocal_99 || iParam0);
}

void func_15(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (!func_9(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 = (Global_40.f_9096[iParam0 /*12*/].f_5 - (Global_40.f_9096[iParam0 /*12*/].f_5 && iParam1));
}

bool func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (Global_40.f_9096[iParam0 /*12*/].f_10 < 0)
	{
		return false;
	}
	if (func_5(iParam0, 4194304))
	{
		return false;
	}
	func_149(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
	if (iVar0 < 2 || iVar1 < 23)
	{
		return false;
	}
	return true;
}

bool func_17(int iParam0)
{
	int iVar0;

	if (Global_40.f_9096[iParam0 /*12*/].f_9 == -1)
	{
		return false;
	}
	if (Global_40.f_9096[iParam0 /*12*/].f_10 < 0)
	{
		return false;
	}
	if (func_5(iParam0, 524288))
	{
		return false;
	}
	if (!func_9(iParam0, 16777216))
	{
		func_112(iParam0, 2);
		return true;
	}
	iVar0 = (Global_40.f_9096[iParam0 /*12*/] - Global_40.f_9096[iParam0 /*12*/].f_9);
	if (iVar0 >= 2)
	{
		if (func_9(iParam0, 32768))
		{
			func_15(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_150(iParam0))
	{
		if (func_9(iParam0, 32768))
		{
			func_15(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_9(iParam0, 32768))
	{
		func_15(iParam0, 32768);
	}
	return true;
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	if ((iParam0 % iParam2) == 0)
	{
		iVar7 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
		iVar8 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
		MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
		bVar4 = (func_151(iVar7) || func_152(iVar7));
		bVar5 = (func_151(iVar8) || func_152(iVar8));
		if (bVar4 && bVar5)
		{
			if (!func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_43(iParam1, 256);
		}
		else if (bVar4)
		{
			if (func_153(iVar7) || func_154(iVar7))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= (1f - fVar3))
			{
				if (func_22(iParam1, 256))
				{
					bVar6 = true;
				}
				func_80(iParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (func_153(iVar8) || func_154(iVar8))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= fVar3)
			{
				if (!func_22(iParam1, 256))
				{
					bVar6 = true;
				}
				func_43(iParam1, 256);
			}
		}
		else
		{
			if (func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_80(iParam1, 256);
		}
		if (bVar6)
		{
		}
		return bVar6;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iLocal_99 && iParam0) != 0;
}

bool func_20()
{
	if (((func_5(Local_1529.f_136, 524288) || func_5(Local_1529.f_136, 2097152)) || func_5(Local_1529.f_136, 1048576)) || iLocal_98 > 3)
	{
		return true;
	}
	return false;
}

void func_21(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_43(iParam0, iParam1);
	}
	else
	{
		func_80(iParam0, iParam1);
	}
}

bool func_22(int iParam0, int iParam1)
{
	return (iParam0->f_29 && iParam1) != 0;
}

bool func_23(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_155(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

void func_24(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_155(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			Global_1935475[iVar0 /*2*/].f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1935475[iVar0 /*2*/]))
		{
			Global_1935475[iVar0 /*2*/] = iParam0;
			Global_1935475[iVar0 /*2*/].f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			Global_1935475[iVar0 /*2*/] = 0;
			Global_1935475[iVar0 /*2*/].f_1 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_27(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam3->f_136 = uParam0;
	iParam3->f_137 = iParam1;
	func_43(iParam3, 128);
	func_156(iParam1, 1);
	if (bParam5)
	{
		func_157(Global_1392194[iParam3->f_136 /*10*/].f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_158(Global_1392194[iParam3->f_136 /*10*/].f_6, 0);
		func_159(Global_1392194[iParam3->f_136 /*10*/].f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_160(&iVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_161(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_155(iVar3) && !func_23(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_162(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_163(iParam1, iVar1, iVar2, 1);
	}
	if (!func_22(iParam3, 32))
	{
		PERSCHAR::_0xB173599D61FAEB31();
	}
}

bool func_28()
{
	float fVar0;

	if (!func_164(64))
	{
		return false;
	}
	if (func_19(1048576))
	{
		return false;
	}
	if (!func_9(Local_1529.f_136, 512))
	{
		if (iLocal_98 == 2 && !func_5(Local_1529.f_136, 64))
		{
			if (func_5(Local_1529.f_136, 128))
			{
				return true;
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (fVar0 < 1f)
				{
					return true;
				}
			}
		}
		if (iLocal_98 == 1 && func_5(Local_1529.f_136, 128))
		{
			return true;
		}
	}
	return false;
}

bool func_29()
{
	if (iLocal_98 == 1 && !func_9(Local_1529.f_136, 1024))
	{
		return true;
	}
	return false;
}

bool func_30()
{
	float fVar0;

	if (func_164(16))
	{
		return false;
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		return false;
	}
	if (iLocal_98 > 3)
	{
		return false;
	}
	if (iLocal_98 == 1)
	{
		return true;
	}
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	return fVar0 < 0.4f;
}

bool func_31()
{
	float fVar0;

	if (func_164(16))
	{
		return false;
	}
	else if (iLocal_98 == 3 && !func_19(262144))
	{
		return false;
	}
	else if (iLocal_98 > 3)
	{
		return false;
	}
	else if (iLocal_98 == 2 && !func_19(131072))
	{
		return true;
	}
	else if (iLocal_98 >= 2)
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		return fVar0 < 0.33f;
	}
	return false;
}

bool func_32()
{
	int iVar0;
	float fVar1;
	bool bVar2;

	if (func_19(64))
	{
		return false;
	}
	else if (func_164(64) && (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144))))
	{
		iVar0 = func_165(func_56(), 0);
		if (func_166(iVar0) && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::_0x1E8A921112891651(Global_1425371[iVar0 /*373*/].f_1), func_56(), true) < 350f)
		{
			return false;
		}
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		bVar2 = fVar1 < 1f;
		if (bVar2)
		{
			return true;
		}
	}
	return false;
}

void func_33()
{
	func_2();
	if (iLocal_98 < 4 && !func_19(256))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1498945676, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_22(&Local_1529, 32))
			{
				if (!func_22(&Local_1529, 2))
				{
					iLocal_200 = 1480157862;
					iLocal_201 = -1619191432;
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1480157862, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(638507460, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(529482239, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2061234582, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1619191432, true);
					if (func_19(262144))
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1428772759, true);
					}
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1033154098, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2146274232, true);
			break;
		case 2:
			if (!func_22(&Local_1529, 32))
			{
				if (!func_22(&Local_1529, 2))
				{
					iLocal_200 = 1254150069;
					iLocal_201 = 378017637;
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1254150069, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-614511582, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1668640329, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(378017637, true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-92203186, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1850986699, true);
			break;
		case 3:
			if (!func_22(&Local_1529, 32))
			{
				if (!func_22(&Local_1529, 2))
				{
					if (func_19(262144))
					{
						iLocal_200 = 874422897;
						iLocal_201 = 1663347996;
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(874422897, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-419045977, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-508527824, true);
					}
					else
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2077381882, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-681889807, true);
						iLocal_200 = 2077381882;
						iLocal_201 = 1663347996;
					}
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(223107846, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-595414142, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-465906603, true);
			break;
		case 4:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1712141152, true);
			break;
		case 5:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1887892244, true);
			break;
	}
	TASK::_0x9C8F42A5D1859DC1(Global_1392194[Local_1529.f_136 /*10*/].f_5);
}

void func_34()
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iLocal_98)
	{
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 16;
			break;
		case 3:
			iVar0 = 22;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (func_22(&Local_1529, 32))
	{
		iVar0 = 0;
	}
	iVar2 = 814;
	while (iVar2 <= 833)
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iVar2)))
		{
			if (iVar1 >= iVar0)
			{
				func_24(iVar2, 32);
				func_168(iVar2);
			}
			else
			{
				func_169(iVar2, 32);
				if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iVar2)))
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(func_167(iVar2));
				}
			}
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 810;
	while (iVar2 <= 813)
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_1529, 32))
			{
				func_24(iVar2, 32);
				func_168(iVar2);
			}
			else
			{
				func_169(iVar2, 32);
				if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iVar2)))
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(func_167(iVar2));
				}
			}
		}
		iVar2++;
	}
	iVar2 = 808;
	while (iVar2 <= 809)
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_1529, 32))
			{
				func_24(iVar2, 32);
				func_168(iVar2);
			}
			else
			{
				func_169(iVar2, 32);
				if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iVar2)))
				{
					PERSCHAR::_0x4F81EAD1DE8FA19B(func_167(iVar2));
				}
			}
		}
		iVar2++;
	}
	func_84();
}

void func_35(int iParam0)
{
	iLocal_102 = (iLocal_102 || iParam0);
}

void func_36()
{
	if (func_22(&Local_1529, 32))
	{
		iLocal_75[0] = VOLUME::_CREATE_VOLUME_BOX(-1398.447f, -246.3103f, 99.12786f, 0f, 0f, 0f, 5.212102f, 3.640974f, 2.867354f);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[0], 2304, 0, 0, -1, -1, 0);
	}
	else if (iLocal_98 == 2 || iLocal_98 == 3)
	{
		iLocal_75[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Appleseed - volHorseCorral");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[5], -1421.619f, -210.3775f, 102.9679f, 0f, 0f, -5.245227f, 18.54972f, 14.82578f, 5.569002f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[5], -1412.1f, -211.0359f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 6.617523f, 2.783914f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75[5], -1430.657f, -209.2033f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 7.686718f, 2.783914f);
		iLocal_75[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1416.509f, -217.112f, 102.5954f, 0f, 0f, 0f, 7.971181f, 2.465843f, 4.154411f, "Appleseed - volCorralDoors");
		POPULATION::_0xB56D41A694E42E86(iLocal_75[11], 256, 0, joaat("SPECIES_HORSE"), -1, -1, 2);
	}
}

int func_37()
{
	func_170(1024);
	func_171();
	if (iLocal_98 == 3 && !func_19(262144))
	{
		func_58(8388608);
		func_172();
	}
	if (func_22(&Local_1529, 32) && !(iLocal_98 == 4 && !func_19(262144)))
	{
		func_173(&Local_526);
		return 1;
	}
	else
	{
		func_83();
	}
	switch (iLocal_98)
	{
		case 1:
			Local_526 = 5;
			func_174(&Local_526);
			break;
		case 2:
			Local_526 = 5;
			func_175(&Local_526);
			iLocal_14 += 2;
			break;
		case 3:
			func_176();
			Local_526 = 5;
			func_177(&Local_526, func_9(Local_1529.f_136, 2048));
			break;
		case 4:
		case 5:
			break;
	}
	if (!func_22(&Local_1529, 32))
	{
		if (iLocal_98 < 4)
		{
			func_178();
			func_179();
			func_180();
		}
		if (func_19(16384))
		{
			Local_526.f_369[0 /*32*/].f_1 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
			Local_526.f_369[0 /*32*/] = 28;
			Local_526.f_369[0 /*32*/].f_6 = { -1403.857f, -226.9338f, 100.4594f };
			Local_526.f_369[0 /*32*/].f_9 = -83.35f;
		}
	}
	return 1;
}

bool func_38()
{
	if (iLocal_524 <= 0)
	{
		return false;
	}
	if (iLocal_98 == 1 && !func_5(Local_1529.f_136, 4))
	{
		return true;
	}
	if (!func_164(64))
	{
		return false;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !func_5(Local_1529.f_136, 128)))
	{
		return false;
	}
	return true;
}

void func_39(int iParam0)
{
	func_181(iParam0);
	func_182(iParam0, 10f, 1);
	func_183(iParam0, 1);
	func_184(iParam0, 1);
	func_185(iParam0, 1);
	func_186(iParam0, 1);
	func_187(iParam0, 0);
	func_40(iParam0, 0);
	func_188(iParam0, 1);
	func_189(iParam0, 1);
	func_190(iParam0, 1);
	func_191(iParam0, 1);
	func_192(iParam0, 1);
	func_193(iParam0, 1);
	func_194(iParam0, 1.25f);
	func_195(iParam0, 1);
	func_196(iParam0, 1);
	func_197(iParam0, 1);
	func_198(iParam0, 1);
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 1024);
	}
	else
	{
		func_143(&(iParam0->f_1), 1024);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 131072);
	}
	else
	{
		func_143(&(iParam0->f_1), 131072);
	}
}

void func_42(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (func_5(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 = (Global_40.f_9096[iParam0 /*12*/].f_4 || iParam1);
}

void func_43(int iParam0, int iParam1)
{
	if (func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 || iParam1);
}

void func_44()
{
	bool bVar0;
	int iVar1;

	switch (iLocal_189)
	{
		case 0:
			func_200();
			if (func_19(128))
			{
				func_201();
			}
			if (func_22(&Local_1529, 16384))
			{
				if (!func_22(&Local_1529, 32768))
				{
					func_202(Local_1529.f_136);
				}
				else
				{
					func_10(Local_1529.f_136, 1024);
				}
			}
			if (func_5(Local_1529.f_136, 128))
			{
				bVar0 = func_63(Local_1529.f_138);
				func_203(&bVar0);
			}
			func_94(&Local_357, &Local_1529, 0);
			func_204(Local_1529.f_136, 1073741824 /* Float: 2f */);
			func_204(Local_1529.f_136, 536870912);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			break;
		case 1:
			if (func_98(iLocal_154) && !((func_205(iLocal_154) || func_206(iLocal_154, 1)) || func_207(iLocal_154)))
			{
				func_100(iLocal_154, 0, 2);
			}
			if ((func_9(Local_1529.f_136, 16384) && ENTITY::DOES_ENTITY_EXIST(iLocal_1869[0])) && (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1869[0], false)))
			{
				func_15(Local_1529.f_136, 16384);
			}
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
			}
			func_208(1024);
			func_209();
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 5, false);
				PED::SET_PED_RESET_FLAG(Global_35, 129, false);
			}
			func_210();
			func_211(1);
			func_212(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[5]) && !func_213(iLocal_1846[5], Global_1392194[Local_1529.f_136 /*10*/].f_5, 1, 0))
			{
				uLocal_1946[0] = iLocal_1846[5];
			}
			VEHICLE::_0x8379E05871AD24E0();
			if (func_9(Local_1529.f_136, 256) && !func_9(Local_1529.f_136, 32))
			{
				func_214("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
			}
			if (func_19(32))
			{
				func_214("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
			}
			break;
		case 3:
			func_105();
			if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[Local_1529.f_136 /*10*/].f_5))
			{
				iVar1 = 0;
				while (iVar1 < iLocal_1846)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[iVar1]))
					{
						if (func_213(iLocal_1846[iVar1], Global_1392194[Local_1529.f_136 /*10*/].f_5, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1846[iVar1]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1846[iVar1], true, false);
							}
							PED::DELETE_PED(&(iLocal_1846[iVar1]));
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1846[iVar1], false);
							PED::SET_PED_KEEP_TASK(iLocal_1846[iVar1], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1846[iVar1]));
						}
					}
					iVar1++;
				}
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[4]))
			{
				PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iLocal_75[4]);
			}
			iVar1 = 0;
			while (iVar1 < 22)
			{
				func_109(iLocal_75[iVar1]);
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 11)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_412[iVar1 /*7*/]))
				{
					func_215(&(Local_412[iVar1 /*7*/]));
				}
				iVar1++;
			}
			break;
		case 4:
			func_97();
			func_106(1);
			func_2();
			if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[Local_1529.f_136 /*10*/].f_5))
			{
				if (!func_22(&Local_1529, 4) && !func_22(&Local_1529, 32))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[0]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[0], Global_1392194[Local_1529.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[0]));
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_72[1]) && ENTITY::IS_ENTITY_IN_VOLUME(uLocal_72[1], Global_1392194[Local_1529.f_136 /*10*/].f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_72[1]));
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1869[iVar1]))
					{
						if (iVar1 == 1)
						{
							VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_1869[iVar1]));
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_1869[iVar1], Global_1392194[Local_1529.f_136 /*10*/].f_5, true, 0))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_1869[iVar1]));
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			func_10(Local_1529.f_136, 1073741824 /* Float: 2f */);
			func_216(Local_1529.f_136, &Local_526, &Local_1529);
			func_217(&Local_526);
			HUD::_TEXT_BLOCK_DELETE(func_218());
			HUD::_TEXT_BLOCK_DELETE(func_219());
			break;
		default:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	iLocal_189++;
}

void func_45(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_220(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

void func_46()
{
	func_54(65536, func_213(Global_35, Global_1392194[Local_1529.f_136 /*10*/].f_6, 1, 0));
}

void func_47(int iParam0, int iParam1)
{
	PED::_RESERVE_AMBIENT_PEDS_TOTAL(iParam0);
	iParam1->f_3 = (iParam1->f_3 + iParam0);
}

void func_48(var uParam0)
{
	func_221(uParam0, 0f);
}

bool func_49()
{
	if (func_222(&(vLocal_490[4 /*3*/]), 30f))
	{
	}
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		return false;
	}
	switch (iLocal_1982)
	{
		case 0:
			func_223(&(Local_526.f_15));
			func_223(&(Local_526.f_369));
			func_224(&(Local_15[0 /*28*/].f_11));
			func_224(&(Local_15[1 /*28*/].f_11));
			if (func_19(128) && iLocal_98 == 3)
			{
				func_223(&(Local_526.f_369));
			}
			func_225();
			func_226();
			func_227(&(Local_526.f_690));
			func_228();
			func_223(&(Local_526.f_304));
			func_229();
			HUD::TEXT_BLOCK_REQUEST(func_218());
			HUD::TEXT_BLOCK_REQUEST(func_219());
			if (iLocal_98 == 3 && !func_19(262144))
			{
				func_230();
			}
			iLocal_1982 = 1;
			break;
		case 1:
			if (!func_52())
			{
			}
			if (!func_66())
			{
			}
			if (!func_55())
			{
			}
			if (!func_231())
			{
			}
			if (!func_71())
			{
			}
			if (!func_72())
			{
			}
			if (!func_232())
			{
				func_230();
				return false;
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Appleseed_01"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_50(int iParam0)
{
	iLocal_101 = (iLocal_101 - (iLocal_101 && iParam0));
}

bool func_51(int iParam0)
{
	return (iLocal_101 && iParam0) != 0;
}

bool func_52()
{
	if (!func_233(&(Local_526.f_15)) || !func_233(&(Local_526.f_369)))
	{
		return false;
	}
	if (!func_233(&(Local_526.f_304)))
	{
		return false;
	}
	return true;
}

bool func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (func_22(iParam1, 32))
	{
		return false;
	}
	if (*bParam4)
	{
		return false;
	}
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= *iParam0)
	{
		if (*iParam5 < *iParam0)
		{
			if (iParam0->f_15[*iParam5 /*32*/].f_1 != 0)
			{
				(*iParam2)[*iParam5] = func_234(iParam0->f_15[*iParam5 /*32*/].f_1, &(iParam0->f_15[*iParam5 /*32*/]), iParam0->f_15[*iParam5 /*32*/].f_6, iParam0->f_15[*iParam5 /*32*/].f_9, 1, 0, 1, 0, 1);
			}
			*iParam5++;
			*bParam4 = 1;
			return false;
		}
	}
	else
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_2)
	{
		if (iParam0->f_304[iVar0 /*32*/].f_1 != 0)
		{
			(*iParam3)[iVar0] = VEHICLE::CREATE_VEHICLE(iParam0->f_304[iVar0 /*32*/].f_1, iParam0->f_304[iVar0 /*32*/].f_6, iParam0->f_304[iVar0 /*32*/].f_9, true, true, false, false);
			(*iParam3)[0] = (*iParam3)[0];
		}
		iVar0++;
	}
	return true;
}

void func_54(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0);
	}
	else
	{
		func_50(iParam0);
	}
}

bool func_55()
{
	return true;
}

Vector3 func_56()
{
	return -1326.96f, -232.96f, 99.72f;
}

void func_57(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 2442171;
	if (bParam4)
	{
		iVar0 |= 1536;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_58(int iParam0)
{
	iLocal_101 = (iLocal_101 || iParam0);
}

int func_59(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_60(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	if (*bParam0)
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Local_526.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if (Local_526.f_369[*iParam1 /*32*/].f_1 != 0)
			{
				if (iLocal_98 != 3 || func_19(262144))
				{
					bLocal_1872[*iParam1] = func_234(Local_526.f_369[*iParam1 /*32*/].f_1, &(Local_526.f_369[*iParam1 /*32*/]), Local_526.f_369[*iParam1 /*32*/].f_6, Local_526.f_369[*iParam1 /*32*/].f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					DECORATOR::DECOR_SET_BOOL(bLocal_1872[*iParam1], "bNoticePlayer", false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_1872[*iParam1], true);
				}
			}
			*iParam1++;
			*bParam0 = 1;
			return false;
		}
		return true;
	}
	return false;
}

int func_61(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_236(func_235(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iParam0)))
	{
		func_237(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_238(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_239(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_240(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_167(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_167(iParam0), false);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(func_167(iParam0), false);
	}
	if (!func_240(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_167(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_62(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	func_241(iParam0, 0, 0, 0, 1, 1);
	bVar0 = func_63(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		PED::SET_PED_CONFIG_FLAG(bVar0, 178, !bParam1);
		PED::SET_PED_CONFIG_FLAG(bVar0, 168, false);
		PED::SET_PED_CONFIG_FLAG(bVar0, 259, true);
		PED::SET_PED_CONFIG_FLAG(bVar0, 297, bParam2);
		PERSCHAR::_0x6759BEE6762E140B(func_167(iParam0));
		if (!bParam1)
		{
			func_242(bVar0, 1, 1);
		}
	}
	else
	{
		return false;
	}
	return true;
}

int func_63(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_236(func_235(iParam0)))
	{
		return func_243(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_244(iParam0), 0);
}

int func_64(int iParam0)
{
	return func_246(func_245(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

void func_65(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (func_247(uParam0, bParam1, sParam2))
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

bool func_66()
{
	if (!func_248(Local_15[0 /*28*/].f_11) || !func_248(Local_15[1 /*28*/].f_11))
	{
		return false;
	}
	return true;
}

int func_67(var uParam0, var uParam1, var uParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (bParam6)
	{
		if (!uParam2->f_27)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false) && !VEHICLE::IS_VEHICLE_STOPPED(*uParam0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2f, -1, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, true, false);
			}
			uParam2->f_27 = 1;
		}
		return 0;
	}
	else if (uParam2->f_27)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 10f);
		}
		uParam2->f_27 = 0;
	}
	switch (uParam2->f_15)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (func_249(uParam2))
				{
					*uParam0 = VEHICLE::CREATE_VEHICLE(uParam2->f_11, uParam2->f_4, uParam2->f_10, false, true, false, false);
					if (func_250(*uParam1, 0, 1))
					{
						PED::SET_PED_INTO_VEHICLE(*uParam1, *uParam0, -1);
						DECORATOR::DECOR_SET_BOOL(*uParam1, "bNoticePlayer", true);
					}
					uParam2->f_15 = 1;
				}
			}
			break;
		case 1:
			if (!bParam4 && (func_251(*uParam0, &(uParam2->f_16), &(uParam2->f_21), &(uParam2->f_24), 3f, fParam3, 20f, 0, 1092616192 /* Float: 10f */, 1) || !uParam2->f_22))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 20f);
				}
				if (uParam2->f_23)
				{
					if ((!uParam2->f_26 && func_252(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
					{
						func_114(*uParam1, Global_35, uParam2->f_12, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
						uParam2->f_26 = 1;
					}
				}
				uParam2->f_15 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, -1817882002, true) == 8)
			{
				if (uParam2->f_23)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(*uParam1, *uParam0, 5f, 524295);
						uParam2->f_15 = 4;
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
				{
					if (!VEHICLE::IS_VEHICLE_STOPPED(*uParam0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2f, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_GO_TO_COORD_ANY_MEANS(0, uParam2->f_7, 1f, 0, false, 524419, -1f);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					uParam2->f_15 = 3;
				}
			}
			break;
		case 3:
			if (!bParam4 && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, 242628503, true) == 8)
			{
				if ((!uParam2->f_26 && func_252(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
				{
					func_114(*uParam1, Global_35, uParam2->f_12, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
					uParam2->f_26 = 1;
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 2000);
				if (!MISC::IS_STRING_NULL(uParam2->f_13))
				{
					TASK::TASK_PLAY_ANIM(0, uParam2->f_13, uParam2->f_14, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				}
				else if (iParam5 != 0)
				{
					TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(0, iParam5, 0, 0, 0);
				}
				else
				{
					TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 20f, 10f, 60f, true);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				uParam2->f_15 = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

bool func_68(int iParam0)
{
	return (iLocal_100 && iParam0) != 0;
}

void func_69(int iParam0)
{
	iLocal_100 = (iLocal_100 || iParam0);
}

void func_70(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = func_139(iParam0);
	if (bParam1)
	{
		func_141(iVar0, 8);
		func_143(&(Global_1392194[iParam0 /*10*/].f_1), 1);
	}
	else
	{
		func_253(iVar0, 8);
		func_199(&(Global_1392194[iParam0 /*10*/].f_1), 1);
	}
}

bool func_71()
{
	if (!func_254(&uLocal_1781))
	{
		return false;
	}
	if (!func_255())
	{
		return false;
	}
	return true;
}

bool func_72()
{
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_218()))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_219()))
	{
		return false;
	}
	return true;
}

bool func_73()
{
	if (func_19(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (func_9(Local_1529.f_136, 256) && !func_5(Local_1529.f_136, 128))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_74()
{
	bool bVar0;
	int iVar1;

	bVar0 = func_63(Local_1529.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar0, false, true);
		if (!func_256(bVar0, 1))
		{
			func_257(bVar0, "EA_LCMP_Foreman", 0);
		}
		PED::SET_PED_CONFIG_FLAG(bVar0, 178, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_5(Local_1529.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bVar0))
				{
					iVar1 = TASK::FIND_SCENARIO_OF_TYPE_HASH(-1400.66f, -213.44f, 101.9f, func_258(), 1.5f, 0, false);
					if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						TASK::TASK_USE_SCENARIO_POINT(bVar0, iVar1, func_259(), -1, false, true, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(bVar0, -1400.66f, -213.44f, 101.9f, 1.5f, 0, false, false, false, false);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(bVar0))
			{
			}
			break;
		case 2:
			if (!func_5(Local_1529.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bVar0))
				{
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(bVar0))
			{
			}
			break;
		case 3:
			if (!func_5(Local_1529.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bVar0))
				{
					if (func_9(Local_1529.f_136, 256) || func_9(Local_1529.f_136, 262144))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(bVar0, func_260(), 1.5f, 0, false, false, false, false);
					}
					else
					{
						func_261(bVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, 1073741824 /* Float: 2f */);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_1529.f_138)))
			{
			}
			break;
		case 4:
		case 5:
			break;
	}
}

void func_75(int iParam0, bool bParam1)
{
	bool bVar0;

	if (func_262(iParam0, 0))
	{
		bVar0 = func_63(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			PED::SET_PED_CONFIG_FLAG(bVar0, 234, true);
			PED::SET_PED_CONFIG_FLAG(bVar0, 259, true);
		}
		func_263(iParam0, 0, 1, 0, 0);
		PERSCHAR::_0x6759BEE6762E140B(func_167(iParam0));
		if (bParam1)
		{
			func_242(bVar0, 1, 1);
		}
	}
}

void func_76(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_264(&(iParam0->f_18));
}

int func_77()
{
	int iVar0;

	func_265();
	if (iLocal_98 == 3 && !func_5(Local_1529.f_136, 128))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[0]))
		{
			func_267(iLocal_1846[0], func_266(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_1846[0], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_1846[0], 146, false);
			func_257(iLocal_1846[0], func_268(Local_1529.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_1846[0], "HAS_VOICE", true);
			func_242(iLocal_1846[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[1]))
		{
			func_267(iLocal_1846[1], func_266(272629760, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(iLocal_1846[1], 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_1846[1], 146, false);
			func_257(iLocal_1846[1], func_268(Local_1529.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(iLocal_1846[1], "HAS_VOICE", true);
			func_242(iLocal_1846[1], 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1846[2]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1846[2], 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1846[2], true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1846[3]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1846[3], 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1846[3], true);
		}
	}
	else
	{
		if (func_19(64))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1388.626f, -234.6199f, 98.7432f, 1f, -1, 0.25f, 0, 9.6661f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1398.8f, -214.8f, 101.4f, 1f, -1, 0.25f, 0, 15.6f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1400.4f, -209.6f, 102f, 1f, -1, 0.25f, 0, 148.8f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -1400.871f, -210.4877f, 101.0936f, 2f, -1, false, false, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1846[0], iLocal_193);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
				PED::SET_PED_CONFIG_FLAG(iLocal_1846[0], 146, false);
				func_242(iLocal_1846[0], 1, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[0]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_1846[0], func_269(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_1846[0], 146, false);
			func_242(iLocal_1846[0], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[1]))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_1846[1], func_269(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_1846[1], 146, false);
			func_242(iLocal_1846[1], 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[2]))
		{
			if (!func_19(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_1846[2], func_269(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_1846[2], 146, false);
				func_242(iLocal_1846[2], 1, 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[3]))
		{
			if (!func_19(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(iLocal_1846[3], func_269(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_1846[3], 146, false);
				func_242(iLocal_1846[3], 1, 1);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[4]))
	{
		func_242(iLocal_1846[4], 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[5]))
	{
		func_242(iLocal_1846[5], 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < Local_526)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1846[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_1846[iVar0], 7, 0, true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_526.f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bLocal_1872[iVar0]))
		{
			PED::SET_PED_CONFIG_FLAG(bLocal_1872[iVar0], 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), bLocal_1872[iVar0], 7, 0, true);
		}
		iVar0++;
	}
	func_48(&(vLocal_490[0 /*3*/]));
	return 1;
}

bool func_78(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1;
}

void func_79(bool bParam0)
{
	int iVar0;

	iVar0 = func_4(0);
	if (func_5(0, 128))
	{
		if (iVar0 != 1 || func_5(0, 16777216))
		{
			func_270(0, 0);
		}
	}
	else
	{
		if (iVar0 > 3)
		{
			func_270(0, 0);
		}
		if (func_9(0, 32768))
		{
			func_270(0, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (func_9(0, 4) && func_5(0, 16777216))
					{
						func_270(0, 0);
					}
					else if (func_9(0, 1024))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_271(0);
							func_272(0, 0, "LOG_JOURN01", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_270(0, 0);
					}
					break;
				case 2:
					func_270(0, 0);
					break;
				case 3:
					if (func_9(0, 8))
					{
						func_270(0, 0);
					}
					else if (func_9(0, 256))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_271(0);
							func_272(0, 0, "LOG_JOURN02", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_270(0, 0);
					}
					break;
				default:
					func_270(0, 0);
					break;
			}
		}
	}
}

void func_80(int iParam0, int iParam1)
{
	if (!func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 - (iParam0->f_29 && iParam1));
}

void func_81()
{
	if (func_51(8388608))
	{
		if (func_273(1024))
		{
			func_172();
		}
		else
		{
			func_209();
		}
	}
}

bool func_82(int iParam0, int iParam1)
{
	if (!Global_1935630.f_12 && func_213(Global_35, Global_1392194[iParam0->f_136 /*10*/].f_5, 1, 0))
	{
		if (!func_22(iParam0, 64))
		{
			func_43(iParam0, 64);
			func_274(iParam0->f_136, 1);
			return true;
		}
	}
	return false;
}

void func_83()
{
	bool bVar0;
	char* sVar1[4];
	int iVar6[4];
	int iVar11;

	Local_1911.f_24 = 0;
	Local_1911.f_23 = 0;
	Local_1911.f_17 = 0;
	func_143(&(Local_1911.f_34), 1);
	if (!func_19(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((func_19(128) && !func_19(2)) && !func_5(Local_1529.f_136, 4))
				{
					if (func_275(1) > 0)
					{
						sVar1[0] = "LOG_WRK01A_P";
					}
					else
					{
						sVar1[0] = "LOG_WRK01A";
					}
				}
				else
				{
					sVar1[0] = "LOG_WRK01A_M";
					iVar6[0] = 1;
				}
				sVar1[1] = "LOG_WRK02A";
				if (func_22(&Local_1529, 256))
				{
					sVar1[2] = "LOG_WRK03A_R";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A_R";
					iVar6[3] = 1;
				}
				else
				{
					sVar1[2] = "LOG_WRK03A";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A";
					iVar6[3] = 1;
				}
				if (func_19(128) && !func_19(2))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (func_5(Local_1529.f_136, 64))
				{
					sVar1[0] = "LOG_WRK01BA";
					iVar6[0] = 1;
					sVar1[1] = "LOG_WRK02BA";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03BA";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04BA";
					iVar6[3] = 1;
				}
				else
				{
					if (func_19(128) && !func_19(2))
					{
						if (func_275(1) > 0)
						{
							sVar1[0] = "LOG_WRK01B_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01B";
						}
					}
					else
					{
						sVar1[0] = "LOG_WRK01B_M";
						iVar6[0] = 1;
					}
					if (func_22(&Local_1529, 256))
					{
						sVar1[1] = "LOG_WRK02B_R";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B_R";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B_R";
						iVar6[3] = 1;
					}
					else
					{
						sVar1[1] = "LOG_WRK02B";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B";
						iVar6[3] = 1;
					}
					if (func_19(128) && !func_19(2))
					{
						bVar0 = true;
					}
				}
				break;
			case 3:
				if (!func_5(Local_1529.f_136, 128))
				{
					if (func_9(Local_1529.f_136, 8))
					{
						if (func_275(1) > 0)
						{
							sVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01CH";
						}
						if (func_22(&Local_1529, 256))
						{
							sVar1[1] = "LOG_WRK02CH_R";
						}
						else
						{
							sVar1[1] = "LOG_WRK02CH";
						}
						sVar1[2] = "LOG_WRK03CH";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04CH";
						iVar6[3] = 1;
					}
					else if (func_9(Local_1529.f_136, 32))
					{
						if (func_68(128))
						{
							iVar11 = func_276();
							if (PED::IS_PED_HUMAN(iVar11))
							{
								sVar1[0] = "LOG_WRK01CC";
								sVar1[1] = "LOG_WRK02CC";
								sVar1[2] = "LOG_WRK03CC";
								sVar1[3] = "LOG_WRK04CC";
							}
							else
							{
								sVar1[0] = "LOG_WRK01CW";
								sVar1[1] = "LOG_WRK02CW";
								sVar1[2] = "LOG_WRK03CW";
								sVar1[3] = "LOG_WRK04CW";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01CB";
							sVar1[1] = "LOG_WRK02CB";
							if (func_275(1) > 0)
							{
								sVar1[2] = "LOG_WRK03CB_P";
							}
							else
							{
								sVar1[2] = "LOG_WRK03CB";
							}
							sVar1[3] = "LOG_WRK04CB";
						}
					}
					else if (func_9(Local_1529.f_136, 256))
					{
						sVar1[0] = "LOG_WRK01CA";
						sVar1[1] = "LOG_WRK02CA";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03CA";
						iVar6[2] = 1;
						if (func_275(1) > 0)
						{
							sVar1[3] = "LOG_WRK04CA_P";
						}
						else
						{
							sVar1[3] = "LOG_WRK04CA";
						}
					}
					else
					{
						if (func_19(128) && !func_19(2))
						{
							if (func_275(1) > 0)
							{
								sVar1[0] = "LOG_WRK01C_P";
							}
							else
							{
								sVar1[0] = "LOG_WRK01C";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01C_M";
							iVar6[0] = 1;
						}
						if (func_22(&Local_1529, 256))
						{
							sVar1[1] = "LOG_WRK02C_R";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C_R";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C_R";
							iVar6[3] = 1;
						}
						else
						{
							sVar1[1] = "LOG_WRK02C";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C";
							iVar6[3] = 1;
						}
						if (func_19(128) && !func_19(2))
						{
							bVar0 = true;
						}
					}
				}
				else if (func_9(Local_1529.f_136, 8))
				{
					sVar1[0] = "LOG_WRK01CH";
					sVar1[1] = "LOG_WRK02CH";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03CH";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04CH";
					iVar6[3] = 1;
				}
				else if (func_275(1) > 0)
				{
					sVar1[0] = "LOG_WRK01CN_P";
					sVar1[1] = "LOG_WRK02CN_P";
					sVar1[2] = "LOG_WRK03CN_P";
					sVar1[3] = "LOG_WRK04CN_P";
				}
				else
				{
					sVar1[0] = "LOG_WRK01CN";
					sVar1[1] = "LOG_WRK02CN";
					sVar1[2] = "LOG_WRK03CN";
					sVar1[3] = "LOG_WRK04CN";
				}
				break;
		}
	}
	else if (func_275(1) > 0)
	{
		sVar1[0] = "EA_WRKMD01_P";
		sVar1[1] = "EA_WRKMD02_P";
		sVar1[2] = "EA_WRKMD03_P";
		sVar1[3] = "EA_WRKMD04_P";
	}
	else
	{
		sVar1[0] = "EA_WRKMD01";
		sVar1[1] = "EA_WRKMD02";
		sVar1[2] = "EA_WRKMD03";
		sVar1[3] = "EA_WRKMD04";
	}
	Local_1911.f_33 = 15f;
	func_277(&sVar1, &iVar6, &Local_1911, bVar0);
}

void func_84()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;

	if (func_22(&Local_1529, 256))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Shelter";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman_Shelter";
	}
	else if (iLocal_98 == 3 && !func_19(262144))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Stalled";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	else
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	iVar2 = 810;
	while (iVar2 <= 833)
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iVar2)) && !MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(func_235(iVar2)), sVar0))
		{
			PERSCHAR::_0x187D65F3AEC5D679(func_235(iVar2), sVar0);
			bVar3 = func_63(iVar2);
			if ((ENTITY::DOES_ENTITY_EXIST(bVar3) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar3, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar3))
			{
				TASK::TASK_PERSISTENT_CHARACTER(bVar3);
			}
		}
		iVar2++;
	}
	iVar2 = Local_1529.f_138;
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iVar2)) && !MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(func_235(iVar2)), sVar0))
	{
		PERSCHAR::_0x187D65F3AEC5D679(func_235(iVar2), sVar1);
	}
}

void func_85(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if ((*iParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!func_23(iVar0, 32))
			{
				bVar1 = func_63(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(bVar1))
				{
					if (PED::IS_PED_HUMAN(bVar1))
					{
						(*uParam0)[iVar2] = bVar1;
						(*uParam1)[iVar2] = func_278(bVar1, 1, 0);
						iVar2++;
						if (bParam9)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar1, true);
							PED::SET_PED_CONFIG_FLAG(bVar1, 288, true);
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(bVar1, 288, false);
						}
						if (!DECORATOR::DECOR_EXIST_ON(bVar1, "bScriptedILO"))
						{
							PED::SET_PED_CONFIG_FLAG(bVar1, 130, false);
						}
						PED::SET_PED_CONFIG_FLAG(bVar1, 374, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 178, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 146, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 246, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 297, true);
						PED::SET_PED_CONFIG_FLAG(bVar1, 171, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), bVar1, 7, 0, true);
						func_279(uParam2, bVar1, 0);
						if (fParam8 >= 0f)
						{
							PED::SET_PED_SEEING_RANGE(bVar1, fParam8);
						}
					}
					else
					{
						func_280(uParam2, bVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*uParam0 - 1))
		{
			(*uParam0)[iVar2] = 0;
			iVar3++;
		}
		*iParam5 = iVar2;
		*iParam6 = 0;
	}
	*iParam6++;
}

void func_86(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*bParam0)[iVar0]))
		{
			PED::SET_PED_RESET_FLAG((*bParam0)[iVar0], 49, true);
		}
		iVar0++;
	}
}

void func_87()
{
}

void func_88()
{
	int iVar0;
	struct<21> /*168*/ sVar1;
	char* sVar30;
	int iVar31;

	if (!func_68(268435456))
	{
		if (func_68(134217728) || (MISC::GET_FRAME_COUNT() % 9) == 0)
		{
			func_69(134217728);
			iVar0 = (MISC::GET_FRAME_COUNT() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_281(&Var1, iVar31);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
				{
					AUDIO::_0xEF51242E35242B47(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				func_69(268435456);
			}
		}
	}
}

float func_89()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 2f;
}

float func_90()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 1.75f;
}

void func_91(var uParam0, int iParam1, float fParam2, float fParam3)
{
	bool bVar0;

	if (func_282(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1392194[uParam0->f_136 /*10*/].f_6;
	}
	if (func_213(Global_35, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, fParam2);
	}
	bVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (func_213(bVar0, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar0, fParam3);
	}
}

void func_92()
{
	if ((VOLUME::DOES_VOLUME_EXIST(iLocal_75[0]) && func_213(Global_35, iLocal_75[0], 1, 0)) && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
}

int func_93()
{
	int iVar0;
	int iVar1;

	if (func_51(16384))
	{
		return 0;
	}
	iVar0 = iLocal_206;
	if (((func_132(&Local_357, 2) || func_283(&Local_1529, &(Local_1529.f_28))) || func_284()) || func_285(func_63(Local_1529.f_138), 0, &Local_1529, &(Local_1529.f_28), 0, 0))
	{
		if (func_132(&Local_357, 2))
		{
		}
		else if (Local_1529.f_28 == 65536)
		{
			func_286(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		else if (Local_1529.f_28 == 32)
		{
			return func_287();
		}
		else if (Local_1529.f_28 == 8192 && func_288())
		{
			func_286(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		if (func_289(&(Local_1529.f_28)) && !func_68(67108864))
		{
			if (!func_132(&Local_357, 1))
			{
				Local_357 = func_63(Local_1529.f_138);
				func_291(&Local_357, &Local_1529, Local_1529.f_28, 54031, 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_281(&Local_357, 0)))
				{
					StringCopy(&(Local_357.f_20[0 /*4*/]), func_281(&Local_357, 0), 32);
					StringCopy(&(Local_357.f_20[1 /*4*/]), func_281(&Local_357, 1), 32);
					func_292(&Local_357, 32);
				}
			}
			else if (Local_357.f_13 > 2)
			{
				func_292(&Local_357, 512);
			}
			func_286(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		return 1;
	}
	else if ((func_293(&uLocal_1687, &Local_1529, &(Local_1529.f_28), &iLocal_206, 0, (iLocal_190 - 1), 4) || func_293(&iLocal_1846, &Local_1529, &(Local_1529.f_28), &uLocal_204, 0, (Local_526 - 1), 1)) || func_293(&bLocal_1872, &Local_1529, &(Local_1529.f_28), &uLocal_205, 0, func_59(func_19(16384), Local_526.f_1 + 1, (Local_526.f_1 - 1)), 1))
	{
		if (func_68(131072))
		{
			if ((PED::_GET_LASSO_TARGET(Global_35) == iLocal_1846[0] || PED::IS_PED_LASSOED(iLocal_1846[0])) || !TASK::GET_IS_TASK_ACTIVE(iLocal_1846[0], 3))
			{
				func_128(iLocal_1846[0], 0, 0);
			}
		}
		if (func_289(&(Local_1529.f_28)))
		{
			if (Local_1529.f_28 == 8192 && func_288())
			{
				return 0;
			}
			if (!func_132(&Local_357, 1) && !func_19(32))
			{
				if (Local_1529.f_28 == 8 && func_294())
				{
					return 1;
				}
				if (func_19(64) && Local_1529.f_10 == iLocal_1846[0])
				{
					if (Local_1529.f_28 != 65536)
					{
						func_291(&Local_357, &Local_1529, Local_1529.f_28, 54031, 0, 0);
						func_292(&Local_357, 64);
						StringCopy(&(Local_357.f_20[0 /*4*/]), "LCMPF_IG_TFAIM", 32);
						func_292(&Local_357, 32);
					}
				}
				else
				{
					func_291(&Local_357, &Local_1529, Local_1529.f_28, 54031, 0, 0);
				}
			}
			func_286(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		else if (Local_1529.f_28 == 32)
		{
			return func_287();
		}
		return 1;
	}
	else if (func_295(&Local_1529, &Local_357, 54031))
	{
		if (!func_132(&Local_357, 1))
		{
			func_291(&Local_357, &Local_1529, 1024, 54031, 0, 0);
			if (Local_357 == func_63(Local_1529.f_138) && !MISC::IS_STRING_NULL_OR_EMPTY(func_281(&Local_357, 0)))
			{
				StringCopy(&(Local_357.f_20[0 /*4*/]), func_281(&Local_357, 0), 32);
				StringCopy(&(Local_357.f_20[1 /*4*/]), func_281(&Local_357, 1), 32);
				func_292(&Local_357, 32);
			}
			func_286(&Local_1529, &(Local_1529.f_28));
			return 0;
		}
		else
		{
			func_292(&Local_357, 512);
		}
	}
	else if (func_296())
	{
		Local_1529.f_28 = 2;
		return 1;
	}
	iVar1 = func_297(iVar0 + 4, (iLocal_190 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (uLocal_1749[iVar0] < Local_1529.f_19 && func_298(uLocal_1687[iVar0], &Local_1529, 0, uLocal_1749[iVar0]))
		{
			func_48(&(vLocal_490[6 /*3*/]));
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_222(&(vLocal_490[6 /*3*/]), 10f))
	{
		func_299(&Local_1529, &(Local_1529.f_28));
	}
	return 0;
}

void func_94(bool bParam0, var uParam1, bool bParam2)
{
	func_264(&(bParam0->f_6));
	bParam0->f_5 = -1;
	func_134(bParam0, 1);
	func_134(bParam0, 4);
	func_134(bParam0, 32);
	func_134(bParam0, 128);
	func_134(bParam0, 64);
	func_134(bParam0, 8);
	func_134(bParam0, 256);
	func_134(bParam0, 512);
	bParam0->f_13 = 0;
	bParam0->f_18 = 0;
	if (!bParam2)
	{
		*bParam0 = 0;
		StringCopy(&(bParam0->f_20[0 /*4*/]), "", 32);
		StringCopy(&(bParam0->f_20[1 /*4*/]), "", 32);
		bParam0->f_16 = -1;
	}
	if (bParam0->f_19 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(bParam0->f_19);
	}
	bParam0->f_2 = 0;
	uParam1->f_4 = 0;
}

void func_95(var uParam0)
{
	if (func_300(uParam0->f_32))
	{
		func_301(&(uParam0->f_32), 1, 1);
	}
	if (func_300(uParam0->f_33))
	{
		func_301(&(uParam0->f_33), 1, 1);
	}
	if (func_300(uParam0->f_34))
	{
		func_301(&(uParam0->f_34), 1, 1);
	}
}

void func_96(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_97()
{
	if (func_51(32))
	{
		func_302(0);
		func_303(11, 128);
		func_50(32);
	}
}

bool func_98(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_99(int iParam0)
{
	int iVar0;

	iVar0 = func_304(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_100(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_98(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_99(iParam0) && !func_305(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_306(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_99(iParam0))
	{
		iParam2 = -1;
	}
	if (func_307(iParam0) == 3 || (func_307(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_306(iParam0))))
	{
		func_309(func_308(iParam0), func_306(iParam0), iParam2);
		if ((!func_98(Global_1572864.f_8) && !func_144(0, 1, 0)) && !func_310(Global_1935630, 32768))
		{
			iVar0 = func_311(iParam0);
			if (iVar0 != -1)
			{
				func_312(0);
			}
			else if (func_308(iParam0) == 8)
			{
				iVar0 = func_313();
				if (iVar0 != -1)
				{
					func_312(0);
				}
			}
		}
	}
	func_314(iParam0, 0);
	if (func_315(0) == iParam0)
	{
		func_101(1);
		func_316(0);
		func_317(1);
	}
	func_318(iParam0, 1);
	func_319(iParam0);
}

void func_101(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_320(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_321(&Global_1935630, 4194304);
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

bool func_102(int iParam0)
{
	int iVar0;

	iVar0 = PED::_0x5407B7288D0478B7(Global_35, iParam0);
	return iVar0 > 0;
}

void func_103()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_322(iVar0);
		switch (iVar1)
		{
			case 2:
			case 9:
			case 10:
				break;
			case 0:
			case 1:
				if (func_19(262144) && !func_323())
				{
					func_215(&(Local_412[iVar0 /*7*/]));
				}
				break;
			case 6:
				if (func_324(&(Local_412[6 /*7*/])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[14 /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(Local_526.f_690[14 /*12*/].f_8);
					func_326(&(Local_412[6 /*7*/]), func_63(func_325(6, 0, 0)), "PED1");
					func_326(&(Local_412[6 /*7*/]), func_63(func_325(6, 1, 0)), "PED2");
					func_215(&(Local_412[6 /*7*/]));
				}
				break;
			default:
				func_215(&(Local_412[iVar0 /*7*/]));
				break;
		}
		iVar0++;
	}
}

void func_104()
{
	if (!ENTITY::IS_ENTITY_DEAD(bLocal_1872[0]))
	{
		func_327(&(bLocal_1872[0]));
		PED::SET_PED_CONFIG_FLAG(bLocal_1872[0], 136, false);
		TASK::TASK_FLEE_PED(bLocal_1872[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
}

void func_105()
{
	PLAYER::_0xC6366A585659D15C(PLAYER::GET_PLAYER_INDEX(), "");
	PLAYER::_0x98CD760DE43B612E(PLAYER::GET_PLAYER_INDEX(), "");
	PED::_0x8AF46E5159A5B620(Global_35, 0);
}

void func_106(bool bParam0)
{
	if (func_68(512) || bParam0)
	{
		if (func_250(bLocal_525, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(bLocal_525, 136, false);
			func_328(bLocal_525, 0);
		}
		func_329(512);
	}
}

void func_107(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_300((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_301(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_108(int iParam0)
{
	func_264(&uLocal_0);
	func_330(1, iParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	func_331();
}

void func_109(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_110()
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[4]))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iLocal_75[4]);
		POPULATION::_0x74C2B3DC0B294102(iLocal_75[4]);
		POPULATION::_0xA1CFB35069D23C23(iLocal_75[4]);
	}
	func_109(iLocal_75[4]);
	func_109(iLocal_75[9]);
	func_109(iLocal_75[10]);
	func_109(iLocal_75[20]);
}

void func_111(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_96(uParam0[iVar0]);
		iVar0++;
	}
}

void func_112(int iParam0, int iParam1)
{
	Global_40.f_9096[iParam0 /*12*/].f_9 = Global_40.f_9096[iParam0 /*12*/];
	Global_40.f_9096[iParam0 /*12*/].f_10 = Global_40.f_9096[iParam0 /*12*/].f_3;
	func_332(iParam0, iParam1, 0, 0, 0, 1);
	func_10(iParam0, 32768);
	func_15(iParam0, 16777216);
	func_204(iParam0, 4194304);
}

void func_113(int iParam0)
{
	func_286(iParam0, &(iParam0->f_28));
	func_333(iParam0, 1);
	func_189(iParam0, 0);
	func_334(iParam0, 0);
	func_335(iParam0, 0);
	func_41(iParam0, 0);
}

bool func_114(bool bParam0, bool bParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_336(bParam0, bParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_115(int iParam0)
{
	return (iLocal_102 && iParam0) != 0;
}

int func_116(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 65536:
			return joaat("CRIME_TRESPASSING");
		case 1024:
			return joaat("CRIME_THEFT");
		case 4:
		case 8:
		case 16:
		case 64:
		case 256:
		case 8192:
			return joaat("CRIME_THREATEN");
		case 512:
			return joaat("CRIME_ROBBERY");
		case 2:
		case 32:
		case 2048:
			if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_10, Global_35, 0, 0) || !ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[0]))
			{
				return joaat("CRIME_HIT_AND_RUN");
			}
			else if (WEAPON::IS_PED_ARMED(Global_35, 6))
			{
				return joaat("CRIME_ASSAULT");
			}
			else
			{
				return joaat("CRIME_UNARMED_ASSAULT");
			}
			break;
		case 4096:
			return joaat("CRIME_VANDALISM");
		case 1:
		case 128:
			return joaat("CRIME_MURDER");
		case 16384:
			return 0;
	}
	return joaat("CRIME_TRESPASSING");
}

void func_117()
{
	if (func_19(64))
	{
		func_337();
	}
	func_338(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144)))
	{
		func_9(1, 2);
		func_339();
	}
	if (iLocal_98 == 3)
	{
		func_340();
	}
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_341(iParam0, 16777216) && func_341(iParam0, 33554432)) && func_341(iParam0, 268435456))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_PISTOL"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REVOLVER"), iParam1, iParam2, 0);
	iVar2 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
	iVar3 = 0;
	if (!func_341(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_341(iParam0, 16777216))
	{
		if (!func_342(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_341(iParam0, 268435456) && func_343(iVar2))
	{
		if (!func_342(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_342(iVar3))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	return iVar3;
}

void func_119(int iParam0, bool bParam1, int* iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = -89429847;
	if (bParam5 == 0 || bParam5 == Global_35)
	{
		bParam5 = Global_35;
		iVar0 = joaat("BLIP_STYLE_ENEMY");
	}
	bParam3 = (bParam3 || func_22(iParam0, 4096));
	if (WEAPON::IS_PED_ARMED(bParam1, 4))
	{
		bParam3 = false;
	}
	func_344(bParam1);
	func_96(iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(bParam1, Global_1392194[iParam0->f_136 /*10*/].f_5, 0, false, 0);
		PED::SET_PED_CONFIG_FLAG(bParam1, 146, false);
		PED::SET_PED_CONFIG_FLAG(bParam1, 246, true);
		PED::SET_PED_CONFIG_FLAG(bParam1, 178, true);
		PED::SET_PED_CAN_BE_TARGETTED(bParam1, true);
		if (bParam3)
		{
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bParam1, ENTITY::GET_ENTITY_COORDS(bParam5, true, false), 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam1, joaat("REL_PLAYER_DISLIKE"));
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FLEE_PED(false, bParam5, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_KEEP_TASK(bParam1, true);
		}
		else
		{
			if (bParam5 == Global_35)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam1, joaat("REL_PLAYER_ENEMY"));
			}
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(bParam1, ENTITY::GET_ENTITY_COORDS(bParam5, true, false), 3);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 31, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(bParam1, 46, true);
			func_345(bParam1, iParam2, iVar0, 580546400, 0, 0);
			if (func_346(bParam1))
			{
				iParam4 = func_347(bParam1);
			}
			if (PED::IS_PED_HUMAN(bParam1))
			{
				bVar2 = func_348(bParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					WEAPON::GIVE_WEAPON_TO_PED(bParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), false, 0f, false);
				}
			}
			if (func_342(iParam4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(bParam1, iParam4, true, 0, false, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (PED::IS_PED_HUMAN(bParam1))
			{
				if (func_342(iParam4))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				if (!PED::IS_PED_USING_ANY_SCENARIO(bParam1) && bVar2)
				{
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_349(), 0.5f, 0, 4);
				}
				if (!bVar2 && PED::GET_PED_CONFIG_FLAG(bParam1, 12, true))
				{
					TASK::_0x2416EC2F31F75266(0, bParam5, 0, 0, 0);
				}
			}
			TASK::TASK_COMBAT_PED(0, bParam5, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
	}
}

int func_120(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bParam7 = (bParam7 || func_22(iParam0, 4096));
	iVar2 = 0;
	while (iVar2 < *iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar2]))
		{
			if (!func_350((*iParam1)[iVar2], &(iParam0->f_140)))
			{
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 146, false);
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 277, false);
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 178, true);
				PED::SET_PED_CAN_BE_TARGETTED((*iParam1)[iVar2], true);
				iVar3 = func_351((*iParam1)[iVar2], 0);
				if (func_155(iVar3))
				{
					func_62(iVar3, 1, 1);
				}
				PED::SET_PED_DEFENSIVE_AREA_VOLUME((*iParam1)[iVar2], Global_1392194[iParam0->f_136 /*10*/].f_5, 0, false, 0);
				if (func_352((*iParam1)[iVar2], (iParam5 == -1 || iVar1 < iParam5), (bParam8 || bParam7)))
				{
					if (bParam6)
					{
						PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT((*iParam1)[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS((*iParam1)[iVar2], true, false);
					}
					PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT((*iParam1)[iVar2], Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar2], joaat("REL_PLAYER_ENEMY"));
					func_345((*iParam1)[iVar2], uParam2[iVar2], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 31, true);
					if (func_346((*iParam1)[iVar2]))
					{
						iVar4 = func_347((*iParam1)[iVar2]);
					}
					if (PED::IS_PED_HUMAN((*iParam1)[iVar2]))
					{
						if (func_353(iParam1[iVar2], iVar4, (bParam8 || bParam7)))
						{
							WEAPON::GIVE_WEAPON_TO_PED((*iParam1)[iVar2], iParam3, 100, false, true, 0, false, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), false, 0f, false);
							if (func_342(iVar4))
							{
								WEAPON::SET_CURRENT_PED_WEAPON((*iParam1)[iVar2], iVar4, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_HUMAN((*iParam1)[iVar2]))
					{
						if (func_342(iVar4))
						{
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE((*iParam1)[iVar2], true))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						}
						else if (iParam4 != 0)
						{
						}
						else if (!func_346((*iParam1)[iVar2]))
						{
							TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_349(), 0.5f, 0, 4);
						}
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iVar1++;
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar2], joaat("REL_PLAYER_DISLIKE"));
					if (bParam6)
					{
						PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT((*iParam1)[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS((*iParam1)[iVar2], true, false);
					}
					else
					{
						PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT((*iParam1)[iVar2], Global_36, 1);
					}
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 1048576, false);
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 65536, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE((*iParam1)[iVar2], true))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4160);
						TASK::TASK_FLEE_PED(false, Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
					}
					else
					{
						TASK::TASK_FLEE_PED(false, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK((*iParam1)[iVar2], true);
					func_354(iParam1[iVar2], iParam9, fParam10);
				}
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam1)[iVar2], true);
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_121(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;

	if (iParam5 > 0)
	{
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || func_22(iParam0, 4096));
	if (iParam0->f_136 == 1)
	{
		func_160(&iVar4, &iVar5, func_9(1, 1048576));
	}
	else
	{
		func_161(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_155(iVar3))
		{
		}
		else if (iVar3 == iParam0->f_138)
		{
		}
		else if (func_23(iVar3, 32))
		{
		}
		else
		{
			bVar6 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar6) && !func_350(bVar6, &(iParam0->f_140)))
			{
				(*uParam1)[iVar0] = bVar6;
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar6))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar6, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(bVar6, 146, false);
				PED::SET_PED_CONFIG_FLAG(bVar6, 246, true);
				PED::SET_PED_CONFIG_FLAG(bVar6, 178, true);
				PED::SET_PED_CAN_BE_TARGETTED(bVar6, true);
				func_62(iVar3, 1, 1);
				PED::SET_PED_CONFIG_FLAG(bVar6, 277, false);
				PED::SET_PED_DEFENSIVE_AREA_VOLUME(bVar6, Global_1392194[iParam0->f_136 /*10*/].f_5, 0, false, 0);
				if ((func_352(bVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(bVar6, Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(bVar6, joaat("REL_PLAYER_ENEMY"));
					func_345(bVar6, uParam2[iVar0], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 31, true);
					if (func_346(bVar6))
					{
						iVar7 = func_347(bVar6);
					}
					if (PED::IS_PED_HUMAN(bVar6))
					{
						if (func_353(&bVar6, iVar7, (bParam9 || bParam8)))
						{
							WEAPON::GIVE_WEAPON_TO_PED(bVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), false, 0f, false);
							if (func_342(iVar7))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(bVar6, iVar7, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(bVar6, 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (func_342(iVar7))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					if (PED::IS_PED_HUMAN(bVar6) && !func_346(bVar6))
					{
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_349(), 0.5f, 0, 4);
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(bVar6, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iVar1++;
				}
				else
				{
					PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bVar6, Global_36, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(bVar6, joaat("REL_PLAYER_DISLIKE"));
					if ((bParam7 || func_278(bVar6, 1, 1) < 15f) || func_355())
					{
						TASK::CLEAR_PED_TASKS(bVar6, true, false);
						PED::SET_PED_CONFIG_FLAG(bVar6, 178, false);
						TASK::TASK_FLEE_PED(bVar6, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(bVar6, true);
						func_354(&bVar6, iParam10, fParam11);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_349(), 0.5f, 0, 4);
						TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 1500, 0, 1, 1);
						TASK::TASK_COWER(0, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(bVar6, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						DECORATOR::DECOR_SET_BOOL(bVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

int func_122(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_250((*uParam0)[iVar0], 0, 1))
		{
			if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar0], "bCowering"))
			{
				if ((func_285((*uParam0)[iVar0], 0, iParam1, &(iParam1->f_28), 0, 0) || func_356((*uParam0)[iVar0], iParam1, &(iParam1->f_28), 0)) || func_357((*uParam0)[iVar0], Global_35, 1, 1) < 8f)
				{
					if (iParam1->f_28 != 32 || func_358(uParam0[iVar0], iParam1, 1097859072 /* Float: 15f */))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iVar0], joaat("REL_PLAYER_DISLIKE"));
						TASK::TASK_FLEE_PED((*uParam0)[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
						DECORATOR::DECOR_REMOVE((*uParam0)[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_123()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_202)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_1529.f_140[iVar0]) && !func_129(Local_1529.f_140[iVar0], 518218985)) && !TASK::GET_IS_TASK_ACTIVE(Local_1529.f_140[iVar0], 3))
		{
			TASK::TASK_FLEE_PED(Local_1529.f_140[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar0++;
	}
}

bool func_124(int iParam0, bool bParam1, int* iParam2, bool bParam3)
{
	switch (iParam0->f_31)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(bParam1))
			{
				iParam0->f_31 = 2;
				return true;
			}
			if (TASK::GET_IS_TASK_ACTIVE(bParam1, 3))
			{
				iParam0->f_31 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(bParam1))
			{
				iParam0->f_31 = 2;
				return true;
			}
			if ((!TASK::GET_IS_TASK_ACTIVE(bParam1, 3) || ENTITY::HAS_ANIM_EVENT_FIRED(bParam1, 277966886)) || PED::IS_PED_USING_ANY_SCENARIO(bParam1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(bParam1))
				{
					PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(bParam1, Global_36, 3, false);
					TASK::CLEAR_PED_TASKS(bParam1, true, false);
				}
				func_119(iParam0, bParam1, iParam2, bParam3, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
				iParam0->f_31 = 2;
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_125()
{
	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_412[2 /*7*/]) || func_359(&(Local_412[2 /*7*/]))) || func_360(&(Local_412[2 /*7*/]), "COWER_R_LOOP")) || func_360(&(Local_412[2 /*7*/]), "COWER_L_LOOP"))
	{
		return true;
	}
	return false;
}

void func_126(int iParam0)
{
	iLocal_99 = (iLocal_99 - (iLocal_99 && iParam0));
}

bool func_127()
{
	float fVar0;

	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[0]))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(Local_526.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_526.f_690[24 /*12*/].f_8, true);
		}
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_526.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_526.f_690[24 /*12*/].f_8, true, false);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(Local_526.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_390[0]);
		if (fVar0 > 0.9625f || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[0]) == 10)
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_526.f_690[24 /*12*/].f_8, true);
			ENTITY::SET_ENTITY_COLLISION(Local_526.f_690[24 /*12*/].f_8, true, false);
			func_361(991016631);
		}
	}
	else if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_526.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_390[0]);
		if (fVar0 > 0.997f)
		{
			ENTITY::SET_ENTITY_COLLISION(Local_526.f_690[24 /*12*/].f_8, true, false);
			func_362(joaat("DES_TREEFALL_ACCIDENT"));
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(bParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 243, true);
		}
		if (Global_35 == bParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(bParam0, 0, 0);
	}
}

bool func_129(bool bParam0, int iParam1)
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

bool func_130(int iParam0, int iParam1, bool bParam2, var uParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (iParam0->f_136 == 1)
	{
		func_160(&iVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_161(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!func_155(iVar0))
		{
		}
		else if (func_23(iVar0, 32))
		{
		}
		else
		{
			bVar3 = func_63(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(bVar3))
			{
			}
			else if (!DECORATOR::DECOR_EXIST_ON(bVar3, "bPedAlreadyCounted"))
			{
				if (ENTITY::IS_ENTITY_DEAD(bVar3))
				{
					if (func_363(iParam0, bVar3))
					{
						DECORATOR::DECOR_SET_BOOL(bVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!func_22(iParam0, 32768))
						{
							func_43(iParam0, 32768);
						}
					}
				}
				else if (!func_22(iParam0, 32768))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bVar3, Global_35, 1, 1))
					{
						func_43(iParam0, 32768);
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bParam5) && !DECORATOR::DECOR_EXIST_ON(bParam5, "bPedAlreadyCounted"))
	{
		if (ENTITY::IS_ENTITY_DEAD(bParam5))
		{
			if (func_363(iParam0, bParam5))
			{
				DECORATOR::DECOR_SET_BOOL(bParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!func_22(iParam0, 32768))
				{
					func_43(iParam0, 32768);
				}
			}
		}
		else if (!func_22(iParam0, 32768))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam5, Global_35, 1, 1))
			{
				func_43(iParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar4]))
			{
				if (func_363(iParam0, (*iParam1)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*iParam1)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, 32768))
					{
						func_43(iParam0, 32768);
					}
				}
			}
			else if (!func_22(iParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam1)[iVar4], Global_35, 1, 1))
				{
					func_43(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*bParam2)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*bParam2)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*bParam2)[iVar4]))
			{
				if (func_363(iParam0, (*bParam2)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*bParam2)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, 32768))
					{
						func_43(iParam0, 32768);
					}
				}
			}
			else if (!func_22(iParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*bParam2)[iVar4], Global_35, 1, 1))
				{
					func_43(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	if (*uParam3 >= iParam4)
	{
		return true;
	}
	return false;
}

void func_131(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_364(bParam0->f_9[0]))
	{
		return;
	}
	iVar1 = bParam0->f_9[0];
	func_365(&iVar1, 0, bParam0->f_4, 0, 0, 0, 0, 0);
	if (func_366(iVar1, 1))
	{
		iVar0 = 0;
		while (iVar0 < bParam0->f_3)
		{
			if (iVar0 < (bParam0->f_3 - 1))
			{
				bParam0->f_9[iVar0] = bParam0->f_9[iVar0 + 1];
			}
			else
			{
				bParam0->f_9[iVar0] = -15;
			}
			iVar0++;
		}
		bParam0->f_1 = (bParam0->f_1 - 1);
		if (bParam0->f_1 <= 0)
		{
			bParam0->f_1 = 0;
			func_134(bParam0, 16);
			bParam0->f_4 = 30;
		}
	}
}

bool func_132(bool bParam0, int iParam1)
{
	return func_367(bParam0->f_17, iParam1);
}

void func_133(var uParam0, bool bParam1, int* iParam2, var uParam3)
{
	int iVar0;
	char* sVar1;

	if (ENTITY::IS_ENTITY_DEAD(*bParam1))
	{
		func_94(bParam1, uParam0, 0);
		return;
	}
	func_368(bParam1);
	if (func_132(bParam1, 4))
	{
		if (bParam1->f_13 < 7)
		{
			func_369(bParam1, 7);
		}
		func_134(bParam1, 4);
	}
	if (func_132(bParam1, 256))
	{
		func_370(bParam1, iParam2, uParam3, 0);
	}
	if (func_132(bParam1, 512) && bParam1->f_13 > 2)
	{
		if (bParam1->f_2 > 2)
		{
			bParam1->f_2 = 0;
			func_48(&(bParam1->f_6));
			func_369(bParam1, 2);
		}
		bParam1->f_2++;
		func_134(bParam1, 512);
	}
	switch (bParam1->f_13)
	{
		case 0:
			func_48(&(bParam1->f_6));
			if (*bParam1 == 0)
			{
				func_369(bParam1, 9);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_369(bParam1, 9);
				return;
			}
			bParam1->f_5 = func_351(*bParam1, 0);
			if (bParam1->f_5 != -1)
			{
				if (!func_262(bParam1->f_5, 0))
				{
					func_371(bParam1->f_5);
				}
			}
			if (bParam1->f_5 == -1 && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(*bParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*bParam1, true, false);
			}
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(*bParam1, 250);
			AUDIO::STOP_PED_SPEAKING(*bParam1, true);
			PED::_0xA7DC9266ED6A4E51(*bParam1);
			EVENT::_0x6B9C5C38838FB6E6(*bParam1);
			if (PED::IS_PED_RAGDOLL(*bParam1))
			{
				func_292(bParam1, 8);
			}
			if (!func_256(*bParam1, 1))
			{
				sVar1 = func_372(uParam0->f_136, -1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
				{
					func_257(*bParam1, sVar1, 0);
				}
			}
			if (func_132(bParam1, 64))
			{
			}
			else if (bParam1->f_16 == 5)
			{
			}
			else if (func_373(*bParam1))
			{
				TASK::TASK_DISMOUNT_ANIMAL(*bParam1, 16777216, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(*bParam1, true))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(*bParam1, 0, 0);
			}
			func_369(bParam1, 1);
			break;
		case 1:
			if (func_155(bParam1->f_5))
			{
				if (!func_262(bParam1->f_5, 0))
				{
					func_371(bParam1->f_5);
				}
			}
			if (func_374(&(bParam1->f_6)) < 5f && ((func_129(*bParam1, 501393341) || func_129(*bParam1, -828834893)) || func_129(*bParam1, joaat("SCRIPT_TASK_LEAVE_VEHICLE"))))
			{
				return;
			}
			func_48(&(bParam1->f_6));
			if (bParam1->f_16 == 5)
			{
				func_369(bParam1, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam1, false);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_369(bParam1, 9);
				return;
			}
			if (!func_132(bParam1, 64))
			{
				PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(*bParam1, Global_36, 3, false);
				TASK::CLEAR_PED_TASKS(*bParam1, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_375(bParam1) && (func_376(*bParam1, Global_35, 1) > 9f || WEAPON::IS_PED_ARMED(*bParam1, 4)))
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 5f, 2f, 2f, 0);
					TASK::TASK_STAND_STILL(0, 500);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
					TASK::TASK_STAND_STILL(0, 500);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*bParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			func_377(249295937, *bParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(bParam1->f_20[0 /*4*/])))
			{
				if (func_132(bParam1, 32))
				{
					func_378(&(uParam0->f_35), &(bParam1->f_20[0 /*4*/]), *bParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_114(*bParam1, Global_35, &(bParam1->f_20[0 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				func_114(*bParam1, Global_35, func_379(bParam1, 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (bParam1->f_16 == 5)
			{
				func_369(bParam1, 3);
			}
			else
			{
				func_369(bParam1, 2);
			}
			break;
		case 3:
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_252(0, 1, *bParam1, 1)) || func_380(&(bParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (func_381(*bParam1, 1, 1, 1, 0, 0))
			{
				if (func_374(&(bParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_292(bParam1, 2);
					func_369(bParam1, 9);
					return;
				}
			}
			func_369(bParam1, 5);
			break;
		case 4:
			if (func_155(bParam1->f_5))
			{
				if (!func_262(bParam1->f_5, 0))
				{
					func_371(bParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_252(0, 1, *bParam1, 1)) || func_380(&(bParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (func_381(*bParam1, 1, 1, 1, 0, 0))
			{
				if (func_374(&(bParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_292(bParam1, 2);
					func_369(bParam1, 9);
					return;
				}
			}
			func_369(bParam1, 5);
			break;
		case 5:
			if (func_155(bParam1->f_5))
			{
				if (!func_262(bParam1->f_5, 0))
				{
					func_371(bParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_252(0, 1, *bParam1, 1)) || func_380(&(bParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (func_381(*bParam1, 1, 1, 1, 0, 0))
			{
				if (func_374(&(bParam1->f_6)) < 10f)
				{
					func_369(bParam1, 3);
					return;
				}
				else
				{
					func_292(bParam1, 2);
					func_369(bParam1, 9);
					return;
				}
			}
			func_48(&(bParam1->f_6));
			func_369(bParam1, 7);
			break;
		case 2:
			if (func_155(bParam1->f_5))
			{
				if (!func_262(bParam1->f_5, 0))
				{
					func_371(bParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_252(0, 1, *bParam1, 1)) || func_380(&(bParam1->f_20[0 /*4*/])))
			{
				return;
			}
			if (((bParam1->f_16 != 5 && func_374(&(bParam1->f_6)) < 25f) && func_129(*bParam1, 242628503)) && func_376(*bParam1, Global_35, 1) > 9f)
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_369(bParam1, 9);
				return;
			}
			if (!func_132(bParam1, 64))
			{
				switch (bParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						TASK::CLEAR_PED_TASKS(*bParam1, true, false);
						if (!func_132(bParam1, 4) && !WEAPON::IS_PED_ARMED(*bParam1, 7))
						{
							TASK::TASK_CONFRONT(*bParam1, Global_35, 2);
						}
						break;
					case 0:
					case 1:
					case 3:
					case 6:
						break;
					case 7:
						if (func_132(bParam1, 16))
						{
							TASK::CLEAR_PED_TASKS(*bParam1, true, false);
							if (!func_132(bParam1, 4) && !WEAPON::IS_PED_ARMED(*bParam1, 7))
							{
								TASK::TASK_CONFRONT(*bParam1, Global_35, 2);
							}
						}
						else
						{
							switch (bParam1->f_1)
							{
								case 1:
									TASK::CLEAR_PED_TASKS(*bParam1, true, false);
									break;
								case 2:
									TASK::CLEAR_PED_TASKS(*bParam1, true, false);
									if (!func_132(bParam1, 4) && !WEAPON::IS_PED_ARMED(*bParam1, 7))
									{
										TASK::TASK_CONFRONT(*bParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						TASK::CLEAR_PED_TASKS(*bParam1, true, false);
						if (func_132(bParam1, 16))
						{
							TASK::TASK_AIM_AT_ENTITY(*bParam1, Global_35, -1, 0, 0);
						}
						else
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*bParam1, Global_35, -1, -1f, -1f, -1f);
						}
						break;
				}
			}
			func_48(&(bParam1->f_6));
			func_377(249295937, *bParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(bParam1->f_20[1 /*4*/])))
			{
				if (func_132(bParam1, 32))
				{
					func_378(&(uParam0->f_35), &(bParam1->f_20[1 /*4*/]), *bParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_114(*bParam1, Global_35, &(bParam1->f_20[1 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				func_114(*bParam1, Global_35, func_379(bParam1, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			}
			switch (bParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					func_369(bParam1, 6);
					break;
				default:
					func_369(bParam1, 7);
					break;
			}
			break;
		case 6:
			if (func_155(bParam1->f_5))
			{
				if (!func_262(bParam1->f_5, 0))
				{
					func_371(bParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_252(0, 1, *bParam1, 1))
			{
				return;
			}
			if ((!func_132(bParam1, 4) && func_129(*bParam1, joaat("SCRIPT_TASK_CONFRONT"))) && func_374(&(bParam1->f_6)) < 5f)
			{
				return;
			}
			if (func_374(&(bParam1->f_6)) < 15f)
			{
				return;
			}
			func_48(&(bParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_369(bParam1, 9);
				return;
			}
			func_369(bParam1, 7);
			break;
		case 7:
			if (func_155(bParam1->f_5))
			{
				if (!func_262(bParam1->f_5, 0))
				{
					func_371(bParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*bParam1) || !func_252(0, 1, *bParam1, 1))
			{
				return;
			}
			if ((!func_132(bParam1, 4) && func_129(*bParam1, joaat("SCRIPT_TASK_CONFRONT"))) && func_374(&(bParam1->f_6)) < 5f)
			{
				return;
			}
			if (bParam1->f_16 == 1 && ENTITY::DOES_ENTITY_EXIST(func_382(Global_35)))
			{
				func_292(bParam1, 2);
			}
			func_48(&(bParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*bParam1))
			{
				func_369(bParam1, 9);
				return;
			}
			if (!func_132(bParam1, 64))
			{
				TASK::CLEAR_PED_TASKS(*bParam1, true, false);
			}
			func_369(bParam1, 8);
			break;
		case 8:
			if (func_155(bParam1->f_5))
			{
				if (!func_262(bParam1->f_5, 0))
				{
					func_371(bParam1->f_5);
				}
			}
			if (func_384(&(bParam1->f_6), func_383(bParam1)))
			{
				AUDIO::STOP_PED_SPEAKING(*bParam1, false);
				if (!func_132(bParam1, 64) && !func_132(bParam1, 128))
				{
					if (bParam1->f_5 != -1)
					{
						func_75(bParam1->f_5, 1);
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(bParam1);
					}
				}
				func_369(bParam1, 9);
			}
			break;
		case 9:
			func_385(bParam1, iParam2, uParam3);
			func_94(bParam1, uParam0, 0);
			break;
	}
}

void func_134(bool bParam0, int iParam1)
{
	func_199(&(bParam0->f_17), iParam1);
}

int func_135()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (iLocal_98 >= 4)
	{
		return func_386();
	}
	if (func_22(&Local_1529, 32))
	{
		if (iLocal_98 == 3 && !func_9(Local_1529.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_526.f_1)
			{
				func_387(&iVar0);
				iVar0++;
			}
		}
		return 0;
	}
	func_388(&uLocal_192, 2);
	if (func_19(8192))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar3 = func_389(iLocal_524, func_7(iVar1));
			if (bVar3)
			{
				func_390(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!func_115(512))
	{
		func_391();
		func_392();
	}
	if (!func_51(67108864))
	{
		func_393(0);
		func_394(0, 1, 1);
		func_58(67108864);
	}
	bVar4 = func_63(Local_1529.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(bVar4))
	{
		if (bVar4 != bLocal_155)
		{
			bLocal_155 = bVar4;
			func_76(&(Local_208[0 /*21*/]), 0);
		}
		func_65(&(Local_1529.f_35), bVar4, "EA_LCMP_Foreman", 0);
		func_395(&bVar4);
		PED::SET_PED_RESET_FLAG(bVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && func_5(Local_1529.f_136, 128)))
	{
		func_396(&bVar4);
	}
	if (iLocal_98 < 4)
	{
		func_397();
	}
	func_398();
	func_399(&bVar4);
	if (!func_19(128))
	{
		if (iLocal_98 == 3 && !func_5(Local_1529.f_136, 128))
		{
			func_400();
		}
		func_401();
		return 0;
	}
	func_402();
	if (func_19(16384))
	{
		func_403(&(bLocal_1872[0]));
	}
	if (!func_19(16) && !func_19(64))
	{
		bVar5 = func_19(1);
		func_405(bVar4, &(uLocal_1866[0]), &Local_1529, func_19(262144), &bVar5, 1, func_404());
		func_13(1, bVar5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1869[0]) && !PROPSET::_DOES_VEHICLE_HAVE_ANY_PROP_SET(iLocal_1869[0]))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_1869[0], joaat("PG_VEH_LOGWAGON_1"));
	}
	func_406();
	if (func_19(64) && !func_19(4))
	{
		func_13(4, func_407(&bVar4, &(iLocal_1846[0])));
		return 0;
	}
	if (iLocal_98 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1869[0]) && !ENTITY::_IS_ENTITY_FROZEN(iLocal_1869[0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_1869[0], Local_526.f_304[0 /*32*/].f_6, true, false, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1869[0], true);
			AITRANSPORT::_SET_TRANSPORT_CONFIG_FLAG(iLocal_1869[0], 0, true);
		}
	}
	if (!func_19(32))
	{
		if (func_19(262144))
		{
			Local_1911.f_2[0] = "LOG_WRK02";
			if (!func_19(16))
			{
				switch (iLocal_98)
				{
					case 2:
					case 3:
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_408(&bVar4);
						}
						else
						{
							return func_409(&bVar4);
						}
						break;
					default:
						return func_409(&bVar4);
				}
			}
			else
			{
				return func_410(&bVar4);
			}
		}
		else
		{
			switch (iLocal_98)
			{
				case 1:
					if (!func_19(16))
					{
						return func_411(&bVar4);
					}
					else
					{
						return func_410(&bVar4);
					}
					break;
				case 2:
					if (!func_19(16))
					{
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_408(&bVar4);
						}
						else
						{
							return func_409(&bVar4);
						}
					}
					else
					{
						return func_410(&bVar4);
					}
					break;
				case 3:
					func_412(&(iLocal_1846[0]), 0);
					func_412(&(iLocal_1846[1]), 1);
					func_413();
					func_414();
					if (func_9(Local_1529.f_136, 256) || func_415(&bVar4))
					{
						return func_416(&bVar4);
					}
					break;
				case 4:
				case 5:
					return func_386();
			}
		}
	}
	return 0;
}

void func_136()
{
	int iVar0;
	float fVar1;
	bool bVar2;

	func_417();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_418(iVar0) && !func_419(iVar0))
		{
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iVar0]))
			{
				if (!(iVar0 == 0 && func_19(512)))
				{
				}
			}
			else
			{
				fVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_390[iVar0]);
				if (fVar1 >= (func_420(iVar0) - 0.007544f) && fVar1 <= func_421(iVar0))
				{
					func_422();
				}
				switch (iLocal_522)
				{
					case 0:
						if (fVar1 >= func_420(iVar0) && fVar1 < func_421(iVar0))
						{
							PAD::SET_PAD_SHAKE(0, 400, func_423(iVar0));
							func_424(iVar0);
							AUDIO::_0x017492B2201E3428("SHOCKWAVE_TREE_FALL", func_425(iVar0));
							bVar2 = PED::_GET_LAST_MOUNT(Global_35);
							if (!ENTITY::IS_ENTITY_DEAD(bVar2) && func_427(bVar2, func_426(iVar0), 1) < 10f)
							{
								PED::_0xBAE08F00021BFFB2(bVar2, func_355());
							}
							iLocal_522 = 1;
						}
						break;
					case 1:
						if (fVar1 >= func_421(iVar0))
						{
							EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), func_425(iVar0), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
							func_58(8192);
							PAD::SET_PAD_SHAKE(0, 300, (func_423(iVar0) / 2));
							iLocal_522 = 2;
						}
						break;
					case 2:
						func_109(iLocal_75[2]);
						func_109(iLocal_75[3]);
						iLocal_522 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_137()
{
	if (func_22(&Local_1529, 1024))
	{
		return true;
	}
	if (bLocal_1984)
	{
		return true;
	}
	if (iLocal_1981 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return false;
		}
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		return false;
	}
	if (func_428(bLocal_1984))
	{
		return true;
	}
	return false;
}

bool func_138(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

int func_139(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

bool func_140(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] && iParam1) != 0;
}

void func_141(int iParam0, int iParam1)
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

Vector3 func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410.538f, -223.0142f, 100.0121f;
		case 1:
			return -439.4129f, 498.0963f, 97.94115f;
		case 3:
			return -1577.892f, -915.5556f, 82.73499f;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 2226.756f, 666.0685f, 94.00805f;
				case 2:
					return 2195.606f, 794.7285f, 106.9675f;
				case 3:
					return 1951.033f, 934.2983f, 116.3355f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_143(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_144(int iParam0, bool bParam1, bool bParam2)
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
		if (func_429())
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
		iVar0 = func_430(Global_1898164.f_1[0 /*5*/]);
		if (func_431(iVar0) && func_432(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_98(Global_1898164.f_1[0 /*5*/]))
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

bool func_145()
{
	return func_433(64);
}

bool func_146(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_434(iVar0) || func_435(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_147()
{
	return Global_1310750.f_16077 != 0;
}

int func_148()
{
	return Global_1310750.f_16071;
}

void func_149(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_138(iParam0))
	{
		return;
	}
	func_436(iParam0, Global_40.f_9096[iParam0 /*12*/].f_10, iParam1, iParam2, uParam3, uParam4);
}

bool func_150(int iParam0)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_3 > Global_40.f_9096[iParam0 /*12*/].f_10;
}

int func_151(int iParam0)
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
			return 1;
		default:
			break;
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_155(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_156(int iParam0, int iParam1)
{
	if (!func_437(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_157(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_199(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_158(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_159(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_160(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		*iParam0 = 64;
		*iParam1 = 66;
	}
	else
	{
		*iParam0 = 67;
		*iParam1 = 68;
	}
}

bool func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_1() != -1;
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

int func_162(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_236(func_235(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_167(iParam0));
	return 1;
}

int func_163(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return 1;
	}
	if (!func_437(iParam0))
	{
		return 1;
	}
	if (func_140(iParam0, 16))
	{
		return 1;
	}
	if (func_438(iParam0) && !func_439(iParam0))
	{
	}
	if (func_161(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_155(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_155(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_438(iParam0) || func_439(iParam0)) || func_440(Global_1897950))
			{
				func_237(Global_1897950, 0);
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

bool func_164(int iParam0)
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
	iVar0 = func_442(func_441());
	if (func_367(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_367(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_367(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_367(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_367(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_367(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_367(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_367(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_367(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_367(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_367(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_367(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_367(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_367(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_367(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_367(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_367(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_165(vector3 vParam0, bool bParam3)
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
		if (!bParam3 || func_443(iVar0))
		{
			fVar3 = func_444(iVar0, vParam0);
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

bool func_166(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_167(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_168(int iParam0)
{
	int iVar0;

	if (!func_155(iParam0))
	{
		return;
	}
	iVar0 = func_167(iParam0);
	func_445(iParam0);
	PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(iVar0);
}

void func_169(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_155(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_170(int iParam0)
{
	Global_1898092.f_1 = (Global_1898092.f_1 || iParam0);
}

void func_171()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_75[16]))
	{
		if (func_19(64))
		{
			iLocal_75[16] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.451f, -274.8033f, 102.3449f, 0f, 0f, 0f, 4.622575f, 4.933644f, 4.047438f, "Appleseed - volRoadBlocking");
		}
		else if (iLocal_98 == 3 && !func_19(262144))
		{
			iLocal_75[16] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1430.557f, -357.1499f, 111.7085f, 0f, 0f, 0f, 7.102352f, 6.564137f, 4.575559f, "Appleseed - volRoadBlocking");
		}
	}
}

void func_172()
{
	vector3 vVar0;

	if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[16]))
	{
		if (!func_51(4194304) && !func_273(2048))
		{
			vVar0 = { VOLUME::_GET_VOLUME_SCALE(iLocal_75[16]) };
			func_447(VOLUME::_GET_VOLUME_COORDS(iLocal_75[16]), func_446(vVar0.x, vVar0.y), 0, 0, 4);
			PATHFIND::_0xB03944057FD735BA(iLocal_75[16], 4, 0);
			func_58(4194304);
		}
	}
}

void func_173(int iParam0)
{
	if (iLocal_98 == 3)
	{
		iParam0->f_1 = 2;
		iParam0->f_369[0 /*32*/].f_6 = { -1403.06f, -269.28f, 98.71f };
		iParam0->f_369[0 /*32*/].f_9 = -49f;
		iParam0->f_369[0 /*32*/].f_1 = joaat("A_C_WOLF");
		iParam0->f_369[1 /*32*/].f_6 = { -1414.56f, -182f, 99.63f };
		iParam0->f_369[1 /*32*/].f_9 = 40.7f;
		iParam0->f_369[1 /*32*/].f_1 = joaat("A_C_WOLF");
	}
}

void func_174(int iParam0)
{
	*iParam0 = 4;
	if (func_19(64))
	{
		iParam0->f_15[0 /*32*/].f_6 = { -1413.793f, -240.7767f, 98.87817f };
		iParam0->f_15[0 /*32*/].f_9 = 251.3227f;
		iParam0->f_15[0 /*32*/].f_1 = func_448();
		iParam0->f_15[0 /*32*/].f_3 = 1842387010;
		iParam0->f_15[1 /*32*/].f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1 /*32*/].f_9 = 214.3414f;
		iParam0->f_15[1 /*32*/].f_1 = func_448();
		iParam0->f_15[2 /*32*/].f_6 = { -1407.91f, -252.1218f, 99.3026f };
		iParam0->f_15[2 /*32*/].f_9 = 354.953f;
		iParam0->f_15[2 /*32*/].f_21 = 0;
		iParam0->f_15[2 /*32*/].f_1 = func_448();
		iParam0->f_15[3 /*32*/].f_6 = { -1415.464f, -251.052f, 100.0263f };
		iParam0->f_15[3 /*32*/].f_9 = 323.5956f;
		iParam0->f_15[3 /*32*/].f_21 = 1;
		iParam0->f_15[3 /*32*/].f_1 = func_448();
	}
	iParam0->f_1 = 0;
	if (func_19(16384))
	{
		iParam0->f_1++;
	}
	if (iLocal_98 == 1 && func_19(131072))
	{
		Local_15[0 /*28*/].f_4 = { -1376.811f, -220.7483f, 100.515f };
		Local_15[0 /*28*/].f_10 = -22.2f;
	}
	else
	{
		Local_15[0 /*28*/].f_4 = { -1261.942f, -304.2063f, 97.9132f };
		Local_15[0 /*28*/].f_10 = 59.8051f;
	}
	if (func_19(32768))
	{
		Local_15[0 /*28*/].f_11 = joaat("LOGWAGON");
		if (iLocal_98 == 1 && !func_19(131072))
		{
			Local_15[0 /*28*/].f_12 = "LOG_WAGON01A";
		}
		iLocal_14 += 2;
	}
	Local_15[0 /*28*/] = { -1372.528f, -209.3416f, 100.5443f };
	Local_15[0 /*28*/].f_3 = 349.7721f;
	Local_15[0 /*28*/].f_23 = 0;
	Local_15[0 /*28*/].f_22 = 0;
	Local_15[0 /*28*/].f_7 = { -1381.927f, -210.7938f, 102.3367f };
	iParam0->f_15[4 /*32*/].f_6 = { -1416.878f, -211.8701f, 104.7347f };
	iParam0->f_15[4 /*32*/].f_9 = 309.938f;
	if (func_19(32768))
	{
		*iParam0++;
		iParam0->f_15[4 /*32*/].f_1 = func_448();
	}
	else
	{
		iParam0->f_15[4 /*32*/].f_1 = 0;
	}
}

void func_175(int iParam0)
{
	func_174(iParam0);
	if (func_19(64))
	{
		iParam0->f_15[1 /*32*/].f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1 /*32*/].f_9 = 214.3414f;
		iParam0->f_15[1 /*32*/].f_1 = func_448();
	}
	Local_15[1 /*28*/].f_4 = { -1377.5f, -200.4f, 102.6f };
	Local_15[1 /*28*/].f_10 = 77.9f;
	if (func_19(65536))
	{
		Local_15[1 /*28*/].f_11 = joaat("LOGWAGON");
		iLocal_14 += 2;
	}
	Local_15[1 /*28*/] = { -1400.617f, -124.2774f, 96.3551f };
	Local_15[1 /*28*/].f_3 = 89f;
	Local_15[1 /*28*/].f_23 = 1;
	Local_15[1 /*28*/].f_25 = 1;
	if (func_19(65536))
	{
		Local_15[1 /*28*/].f_12 = "LOG_WAGON02C";
	}
	if (func_19(32768))
	{
		Local_15[0 /*28*/].f_12 = "LOG_WAGON01B";
	}
	Local_15[0 /*28*/] = { -1373.148f, -219.672f, 99.51241f };
	iParam0->f_15[5 /*32*/].f_6 = { -1376f, -197.6f, 102.1f };
	iParam0->f_15[5 /*32*/].f_9 = 55.8f;
	if (func_19(65536))
	{
		*iParam0++;
		iParam0->f_15[5 /*32*/].f_1 = func_448();
	}
	else
	{
		iParam0->f_15[5 /*32*/].f_1 = 0;
	}
}

void func_176()
{
}

void func_177(int iParam0, bool bParam1)
{
	func_174(iParam0);
	func_175(iParam0);
	if (func_5(0, 128))
	{
		if (func_19(65536))
		{
			Local_15[1 /*28*/].f_12 = "LOG_WAGON02C";
		}
		if (func_19(32768))
		{
			Local_15[0 /*28*/].f_12 = "LOG_WAGON01C";
		}
	}
	else
	{
		iParam0->f_15[0 /*32*/].f_6 = { -1389.931f, -265.0812f, 98.29932f };
		iParam0->f_15[0 /*32*/].f_9 = -161.23f;
		iParam0->f_15[0 /*32*/].f_1 = func_448();
		iParam0->f_15[1 /*32*/].f_6 = { -1431.474f, -269.5809f, 102.2202f };
		iParam0->f_15[1 /*32*/].f_9 = -148.66f;
		iParam0->f_15[1 /*32*/].f_1 = func_448();
		if (!bParam1)
		{
			iParam0->f_15[2 /*32*/].f_6 = { -1444.14f, -359.7078f, 114.5595f };
			iParam0->f_15[2 /*32*/].f_9 = 49.7f;
			iParam0->f_15[2 /*32*/].f_21 = 1;
			iParam0->f_15[2 /*32*/].f_1 = func_448();
			iParam0->f_15[2 /*32*/].f_3 = -1149853461;
			func_449(&(iParam0->f_15[2 /*32*/].f_22));
			func_450(&(iParam0->f_15[2 /*32*/].f_22));
			func_451(&(iParam0->f_15[2 /*32*/].f_22));
			func_452(&(iParam0->f_15[2 /*32*/].f_22));
			func_453(&(iParam0->f_15[2 /*32*/].f_22));
			iParam0->f_15[3 /*32*/].f_6 = { -1444.485f, -357.8756f, 114.8794f };
			iParam0->f_15[3 /*32*/].f_9 = -145.8f;
			iParam0->f_15[3 /*32*/].f_21 = 1;
			iParam0->f_15[3 /*32*/].f_1 = func_448();
			iParam0->f_15[3 /*32*/].f_3 = 307318431;
			func_449(&(iParam0->f_15[3 /*32*/].f_22));
			func_450(&(iParam0->f_15[3 /*32*/].f_22));
			func_451(&(iParam0->f_15[3 /*32*/].f_22));
			func_452(&(iParam0->f_15[3 /*32*/].f_22));
			func_453(&(iParam0->f_15[3 /*32*/].f_22));
		}
		else
		{
			iParam0->f_15[2 /*32*/].f_1 = 0;
			iParam0->f_15[2 /*32*/].f_6 = { -1444.14f, -359.7078f, 114.5595f };
			iParam0->f_15[3 /*32*/].f_1 = 0;
			iParam0->f_15[3 /*32*/].f_6 = { -1444.485f, -357.8756f, 114.8794f };
		}
		iParam0->f_369[0 /*32*/].f_6 = { -1468.629f, -379.8213f, 125.2618f };
		iParam0->f_369[0 /*32*/].f_9 = -45.42f;
		iParam0->f_369[0 /*32*/].f_1 = joaat("A_C_WOLF");
		iParam0->f_369[1 /*32*/].f_6 = { -1459.213f, -380.2958f, 122.0884f };
		iParam0->f_369[1 /*32*/].f_9 = -6.39f;
		iParam0->f_369[1 /*32*/].f_1 = joaat("A_C_WOLF");
		iParam0->f_369[2 /*32*/].f_6 = { -1449.054f, -341.1028f, 118.9559f };
		iParam0->f_369[2 /*32*/].f_9 = -124.44f;
		iParam0->f_369[2 /*32*/].f_1 = joaat("A_C_WOLF");
		*iParam0 = 4;
		iParam0->f_1 = 3;
		Local_15[1 /*28*/].f_11 = 0;
		Local_15[0 /*28*/].f_11 = 0;
		iParam0->f_15[5 /*32*/].f_1 = 0;
		iParam0->f_15[4 /*32*/].f_1 = 0;
	}
}

void func_178()
{
	int iVar0;

	if (!iLocal_98 == 3 || func_5(Local_1529.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((func_9(Local_1529.f_136, 512) && iLocal_98 == 2) && iVar0 == 0)
			{
				func_454(iVar0);
			}
			if (func_19(64) && iVar0 == 0)
			{
				Jump @118; //curOff = 96
			}
			else if (!func_455(iVar0))
			{
				func_456(&iVar0);
			}
			iVar0++;
		}
	}
}

void func_179()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_457(iVar0);
		iVar0++;
	}
}

void func_180()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_355();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (iVar1 == 0 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.75f)
	{
		iVar1 = 1;
	}
	if (iLocal_98 == 1 && !func_5(Local_1529.f_136, 4))
	{
		bVar0 = false;
		iVar1 = 2;
	}
	if (bVar0)
	{
		iVar2 = 1;
	}
	iVar3 = iVar2;
	while (iVar3 <= 3)
	{
		if (iVar4 >= iVar1)
		{
			return;
		}
		iVar4++;
		func_458(&iLocal_524, func_7(iVar3));
		iVar3 += 2;
	}
}

void func_181(int iParam0)
{
	func_335(iParam0, 0);
	func_188(iParam0, 0);
	func_186(iParam0, 1);
	func_191(iParam0, 1);
	func_187(iParam0, 0);
	func_196(iParam0, 1);
	func_459(iParam0, 1, 1, 1);
}

void func_182(int iParam0, float fParam1, bool bParam2)
{
	iParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_460(iParam0, fParam1);
	}
}

void func_183(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 4);
	}
	else
	{
		func_143(&(iParam0->f_1), 4);
	}
}

void func_184(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 2);
	}
	else
	{
		func_143(&(iParam0->f_1), 2);
	}
}

void func_185(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 1);
	}
	else
	{
		func_143(&(iParam0->f_1), 1);
	}
}

void func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 256);
	}
	else
	{
		func_143(&(iParam0->f_1), 256);
	}
}

void func_187(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 128);
	}
	else
	{
		func_143(&(iParam0->f_1), 128);
	}
}

void func_188(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 2048);
	}
	else
	{
		func_143(&(iParam0->f_1), 2048);
	}
}

void func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 32);
	}
	else
	{
		func_199(iParam0, 32);
	}
}

void func_190(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 8);
	}
	else
	{
		func_143(&(iParam0->f_1), 8);
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 16);
	}
	else
	{
		func_199(iParam0, 67108864);
		func_199(iParam0, 16);
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 8);
	}
	else
	{
		func_199(iParam0, 8);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 1024);
	}
	else
	{
		func_199(iParam0, 1024);
	}
}

void func_194(int iParam0, float fParam1)
{
	iParam0->f_19 = fParam1;
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 128);
	}
	else
	{
		func_199(iParam0, 128);
	}
}

void func_196(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 256);
	}
	else
	{
		func_199(iParam0, 256);
	}
}

void func_197(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 2);
	}
	else
	{
		func_199(iParam0, 2);
	}
}

void func_198(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 131072);
	}
	else
	{
		func_199(iParam0, 131072);
	}
}

void func_199(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_200()
{
	int iVar0;

	if (func_115(512))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_396[iVar0]))
		{
			ENTITY::_UNPIN_MAP_ENTITY(iLocal_396[iVar0]);
		}
		iVar0++;
	}
}

void func_201()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_202(int iParam0)
{
	Global_40.f_9096[iParam0 /*12*/].f_9 = -1;
	Global_40.f_9096[iParam0 /*12*/].f_10 = -1;
	func_15(iParam0, 32768);
}

void func_203(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		iVar0 = PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(*bParam0, &iVar1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), iVar1, iVar0);
	}
}

void func_204(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 = (Global_40.f_9096[iParam0 /*12*/].f_4 - (Global_40.f_9096[iParam0 /*12*/].f_4 && iParam1));
}

bool func_205(int iParam0)
{
	return func_304(iParam0) == 0;
}

bool func_206(int iParam0, bool bParam1)
{
	switch (func_304(iParam0))
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

bool func_207(int iParam0)
{
	return func_304(iParam0) == 7;
}

void func_208(int iParam0)
{
	Global_1898092.f_1 = (Global_1898092.f_1 - (Global_1898092.f_1 && iParam0));
}

void func_209()
{
	vector3 vVar0;

	if (VOLUME::DOES_VOLUME_EXIST(iLocal_75[16]))
	{
		if (func_51(4194304))
		{
			vVar0 = { VOLUME::_GET_VOLUME_SCALE(iLocal_75[16]) };
			func_461(VOLUME::_GET_VOLUME_COORDS(iLocal_75[16]), func_446(vVar0.x, vVar0.y), 4);
			PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_75[16], 4, 0);
		}
	}
}

void func_210()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_462(func_425(iVar0), 0);
		iLocal_390[iVar0] = 0;
		iVar0++;
	}
}

void func_211(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_463(iVar0, bParam0);
		iVar0++;
	}
}

void func_212(bool bParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 5, !bParam0);
	func_183(&Local_1529, bParam0);
	func_186(&Local_1529, bParam0);
}

bool func_213(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(bParam0, iParam1, bParam2, iParam3);
}

int func_214(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			return 0;
		}
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_215(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
}

void func_216(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_43(iParam2, 128);
	func_70(iParam0, 0);
	func_156(iParam2->f_137, 0);
	func_464(iParam2);
	func_42(iParam0, 2048);
	func_80(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		func_160(&uVar0, &iVar1, func_9(1, 1048576));
	}
	else
	{
		func_161(iParam2->f_137, &uVar0, &iVar1, 0, 0);
	}
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		PED::SET_PED_KEEP_TASK(func_63(iVar2), true);
		iVar2++;
	}
	Global_1898092.f_26.f_7 = uVar0;
	Global_1898092.f_26.f_8 = iParam2->f_29;
	Global_1898092.f_26.f_2 = iParam2->f_136;
	Global_1898092.f_26.f_1 = iParam2->f_137;
	func_170(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_690[iVar3 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(uParam1->f_690[iVar3 /*12*/].f_8));
		}
		iVar3++;
	}
	if (func_300(iParam2->f_32))
	{
		func_301(&(iParam2->f_32), 1, 1);
	}
	if (func_300(iParam2->f_33))
	{
		func_301(&(iParam2->f_33), 1, 1);
	}
	if (func_300(iParam2->f_34))
	{
		func_301(&(iParam2->f_34), 1, 1);
	}
	if ((*uParam1 + uParam1->f_1) > 0)
	{
		PED::_UNRESERVE_AMBIENT_PEDS((*uParam1 + uParam1->f_1));
	}
	if (func_389(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 1))
	{
		func_42(iParam2->f_136, 4194304);
	}
	func_465();
	if (func_22(iParam2, 65536))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		MAP::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
}

void func_217(var uParam0)
{
	int iVar0;

	iVar0 = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
	if (uParam0->f_3 > iVar0)
	{
		uParam0->f_3 = iVar0;
	}
	PED::_UNRESERVE_AMBIENT_PEDS(uParam0->f_3);
	uParam0->f_3 = 0;
}

char* func_218()
{
	return "LOGCMP";
}

char* func_219()
{
	return "LCMPAUD";
}

bool func_220(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_466(iVar0))
	{
		return false;
	}
	if (func_467(iVar0, 1) || func_467(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_221(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_468() - fParam1);
	func_469(uParam0, 1);
	func_470(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_222(var uParam0, float fParam1)
{
	if (func_384(uParam0, fParam1))
	{
		func_264(uParam0);
		return true;
	}
	return false;
}

void func_223(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_224(&((uParam0[iVar0 /*32*/])->f_1));
		func_224(&((uParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_224(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_225()
{
	int iVar0;

	if (func_19(8192))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_472(&(Local_412[(9 + iVar0) /*7*/]), "script@proc@eventareas@appleseed@Tree_Saw", func_471(9), 0);
			iVar0++;
		}
	}
	if (func_19(16384))
	{
		func_472(&(Local_412[6 /*7*/]), "script@proc@eventareas@appleseed@Log_Drag", func_471(6), 0);
	}
	if (func_19(256))
	{
		func_472(&(Local_412[7 /*7*/]), "script@proc@eventareas@appleseed@Boom_Operator", func_471(7), 0);
		func_472(&(Local_412[8 /*7*/]), "script@proc@eventareas@appleseed@Boom_Spotter", func_471(8), 0);
	}
	if (func_19(64))
	{
		func_472(&(Local_412[2 /*7*/]), "script@proc@eventareas@appleseed@Tree_Fall", func_471(2), 0);
		func_472(&(Local_412[3 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_A", func_471(3), 0);
		func_472(&(Local_412[4 /*7*/]), "script@proc@eventareas@appleseed@Player_Help_B", func_471(4), 0);
	}
	if (func_19(262144))
	{
		if (func_19(16))
		{
			func_473();
		}
		else if (func_9(1, 2) && !func_9(Local_1529.f_136, 16384))
		{
			func_472(&(Local_412[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_471(0), 0);
			func_472(&(Local_412[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_471(5), 0);
		}
		else
		{
			func_473();
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				if (func_19(16))
				{
					func_473();
				}
				else
				{
					func_472(&(Local_412[5 /*7*/]), "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", func_471(5), 0);
					func_472(&(Local_412[0 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_471(0), 0);
					func_472(&(Local_412[1 /*7*/]), "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_471(1), 0);
				}
				break;
			case 2:
				if (func_19(16))
				{
					func_473();
				}
				else if (func_9(1, 2) && !func_9(Local_1529.f_136, 16384))
				{
					func_472(&(Local_412[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_471(0), 0);
					func_472(&(Local_412[5 /*7*/]), "script@proc@eventareas@appleseed@Player_Give_Money", func_471(5), 0);
				}
				else
				{
					func_473();
				}
				break;
			case 3:
				func_472(&(Local_412[0 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Orders", func_471(0), 0);
				func_472(&(Local_412[1 /*7*/]), "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", func_471(1), 0);
				func_472(&(Local_412[2 /*7*/]), "script@proc@eventareas@appleseed@Player_Grab_Money", func_471(2), 0);
				func_472(&(Local_412[3 /*7*/]), "script@proc@eventareas@appleseed@Worker_Convo", func_471(3), 0);
				break;
		}
	}
}

void func_226()
{
	int iVar0[2];
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;

	if (func_19(256))
	{
	}
	if (func_19(128))
	{
		if (func_19(64))
		{
			Local_526.f_690[7 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_526.f_690[7 /*12*/].f_7 = 0;
		}
		Local_526.f_690[7 /*12*/] = { func_474() };
		Local_526.f_690[7 /*12*/].f_3 = 89f;
		Local_526.f_690[7 /*12*/].f_10 = 0;
		if (func_19(64))
		{
			Local_526.f_690[8 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_526.f_690[8 /*12*/].f_7 = 0;
		}
		Local_526.f_690[8 /*12*/] = { func_474() };
		Local_526.f_690[8 /*12*/].f_3 = 89f;
		Local_526.f_690[8 /*12*/].f_10 = 0;
		if (func_19(64))
		{
			Local_526.f_690[9 /*12*/].f_7 = joaat("P_AXE02X");
		}
		else
		{
			Local_526.f_690[9 /*12*/].f_7 = 0;
		}
		Local_526.f_690[9 /*12*/] = { func_474() };
		Local_526.f_690[9 /*12*/].f_3 = 89f;
		Local_526.f_690[9 /*12*/].f_10 = 0;
		if (func_19(64))
		{
			Local_526.f_690[10 /*12*/].f_7 = joaat("P_CIGARETTE_CS02X");
		}
		else
		{
			Local_526.f_690[10 /*12*/].f_7 = 0;
		}
		Local_526.f_690[10 /*12*/] = { func_474() };
		Local_526.f_690[10 /*12*/].f_3 = 89f;
		Local_526.f_690[10 /*12*/].f_10 = 0;
		if (func_19(64))
		{
			Local_526.f_690[24 /*12*/].f_7 = joaat("TREEFALL_ACCIDENT_ENDPROP");
		}
		else
		{
			Local_526.f_690[24 /*12*/].f_7 = 0;
		}
		Local_526.f_690[24 /*12*/] = { -1402.82f, -270.8668f, 98.5585f };
		Local_526.f_690[24 /*12*/].f_3 = 74.57f;
		Local_526.f_690[24 /*12*/].f_10 = 0;
		func_475(&(Local_526.f_690[24 /*12*/].f_11), 64);
		if (func_19(64))
		{
			Local_526.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
			Local_526.f_690[6 /*12*/] = { func_476() };
			Local_526.f_690[6 /*12*/].f_3 = 89f;
			Local_526.f_690[6 /*12*/].f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			Local_526.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY03X");
			Local_526.f_690[12 /*12*/] = { -1341.215f, -194.8321f, 102.4812f };
			Local_526.f_690[12 /*12*/].f_3 = 27f;
			Local_526.f_690[12 /*12*/].f_10 = 0;
			func_475(&(Local_526.f_690[12 /*12*/].f_11), 75);
			if (func_19(128))
			{
				Local_526.f_690[0 /*12*/].f_7 = 0;
				Local_526.f_690[0 /*12*/] = { func_474() };
				Local_526.f_690[0 /*12*/].f_3 = 89f;
				Local_526.f_690[0 /*12*/].f_10 = 0;
				if (!func_5(Local_1529.f_136, 128))
				{
					Local_526.f_690[4 /*12*/].f_7 = joaat("P_WOODWHITTLE01X");
				}
				else
				{
					Local_526.f_690[4 /*12*/].f_7 = 0;
				}
				Local_526.f_690[4 /*12*/] = { func_474() };
				Local_526.f_690[4 /*12*/].f_3 = 89f;
				Local_526.f_690[4 /*12*/].f_10 = 0;
				if (!func_5(Local_1529.f_136, 128))
				{
					Local_526.f_690[3 /*12*/].f_7 = joaat("P_KNIFE02X");
				}
				else
				{
					Local_526.f_690[3 /*12*/].f_7 = 0;
				}
				Local_526.f_690[3 /*12*/] = { func_474() };
				Local_526.f_690[3 /*12*/].f_3 = 89f;
				Local_526.f_690[3 /*12*/].f_10 = 0;
			}
			break;
		case 2:
			Local_526.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_526.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_526.f_690[13 /*12*/].f_3 = 24f;
			Local_526.f_690[13 /*12*/].f_10 = 0;
			func_475(&(Local_526.f_690[13 /*12*/].f_11), 75);
			Local_526.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_526.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_526.f_690[12 /*12*/].f_3 = 25f;
			Local_526.f_690[12 /*12*/].f_10 = 0;
			func_475(&(Local_526.f_690[12 /*12*/].f_11), 75);
			Local_526.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_526.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_526.f_690[25 /*12*/].f_3 = 19.95f;
			Local_526.f_690[25 /*12*/].f_10 = 0;
			if (func_19(128))
			{
				if (func_9(1, 2))
				{
					Local_526.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_526.f_690[3 /*12*/].f_7 = 0;
				}
				Local_526.f_690[3 /*12*/] = { func_474() };
				Local_526.f_690[3 /*12*/].f_4 = { 90f, 0f, -5.99f };
				Local_526.f_690[3 /*12*/].f_10 = 0;
				if (func_9(1, 2))
				{
					Local_526.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_526.f_690[4 /*12*/].f_7 = 0;
				}
				Local_526.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_526.f_690[4 /*12*/].f_3 = -153.92f;
				Local_526.f_690[4 /*12*/].f_10 = 0;
				func_475(&(Local_526.f_690[4 /*12*/].f_11), 2);
				if (func_9(1, 2) || func_19(64))
				{
					Local_526.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
					Local_526.f_690[6 /*12*/] = { func_476() };
					Local_526.f_690[6 /*12*/].f_3 = 89f;
					Local_526.f_690[6 /*12*/].f_10 = 0;
				}
			}
			break;
		case 3:
			Local_526.f_690[13 /*12*/].f_7 = joaat("P_CS_LOADER01X");
			Local_526.f_690[13 /*12*/] = { -1349.263f, -189.6734f, 99.9598f };
			Local_526.f_690[13 /*12*/].f_3 = 24f;
			Local_526.f_690[13 /*12*/].f_10 = 0;
			func_475(&(Local_526.f_690[13 /*12*/].f_11), 75);
			Local_526.f_690[12 /*12*/].f_7 = joaat("P_CS_STEAMDONKEY02X");
			Local_526.f_690[12 /*12*/] = { -1342.864f, -201.941f, 101.154f };
			Local_526.f_690[12 /*12*/].f_3 = 25f;
			Local_526.f_690[12 /*12*/].f_10 = 0;
			func_475(&(Local_526.f_690[12 /*12*/].f_11), 75);
			Local_526.f_690[25 /*12*/].f_7 = joaat("P_CHAIR06X");
			Local_526.f_690[25 /*12*/] = { -1400.832f, -205.2252f, 101.8838f };
			Local_526.f_690[25 /*12*/].f_3 = 19.95f;
			Local_526.f_690[25 /*12*/].f_10 = 0;
			if (func_19(128))
			{
				if (!func_5(Local_1529.f_136, 128) || (func_5(Local_1529.f_136, 128) && func_9(1, 2)))
				{
					Local_526.f_690[3 /*12*/].f_7 = joaat("P_PEN01X");
				}
				else
				{
					Local_526.f_690[3 /*12*/].f_7 = 0;
				}
				Local_526.f_690[3 /*12*/] = { func_474() };
				Local_526.f_690[3 /*12*/].f_3 = 89f;
				Local_526.f_690[3 /*12*/].f_10 = 0;
				if (!func_5(Local_1529.f_136, 128) || (func_5(Local_1529.f_136, 128) && func_9(1, 2)))
				{
					Local_526.f_690[4 /*12*/].f_7 = joaat("P_CS_LEDGER01X");
				}
				else
				{
					Local_526.f_690[4 /*12*/].f_7 = 0;
				}
				Local_526.f_690[4 /*12*/] = { -1400.53f, -206.6157f, 102.7172f };
				Local_526.f_690[4 /*12*/].f_3 = -153.92f;
				Local_526.f_690[4 /*12*/].f_10 = 0;
				func_475(&(Local_526.f_690[4 /*12*/].f_11), 2);
				if (!func_5(Local_1529.f_136, 128) || func_9(1, 2))
				{
					Local_526.f_690[6 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
				}
				else
				{
					Local_526.f_690[6 /*12*/].f_7 = 0;
				}
				Local_526.f_690[6 /*12*/] = { func_474() };
				Local_526.f_690[6 /*12*/].f_3 = 89f;
				Local_526.f_690[6 /*12*/].f_10 = 0;
				if (!func_5(Local_1529.f_136, 128))
				{
					Local_526.f_690[7 /*12*/].f_7 = joaat("P_BOTTLEJD01X");
				}
				else
				{
					Local_526.f_690[7 /*12*/].f_7 = 0;
				}
				Local_526.f_690[7 /*12*/] = { func_474() };
				Local_526.f_690[7 /*12*/].f_3 = 89f;
				Local_526.f_690[7 /*12*/].f_10 = 0;
				if (!func_5(Local_1529.f_136, 128))
				{
					Local_526.f_690[8 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_526.f_690[8 /*12*/].f_7 = 0;
				}
				Local_526.f_690[8 /*12*/] = { func_474() };
				Local_526.f_690[8 /*12*/].f_3 = 89f;
				Local_526.f_690[8 /*12*/].f_10 = 0;
				if (!func_5(Local_1529.f_136, 128))
				{
					Local_526.f_690[9 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_526.f_690[9 /*12*/].f_7 = 0;
				}
				Local_526.f_690[9 /*12*/] = { func_474() };
				Local_526.f_690[9 /*12*/].f_3 = 89f;
				Local_526.f_690[9 /*12*/].f_10 = 0;
				if (!func_5(Local_1529.f_136, 128))
				{
					Local_526.f_690[10 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_526.f_690[10 /*12*/].f_7 = 0;
				}
				Local_526.f_690[10 /*12*/] = { func_474() };
				Local_526.f_690[10 /*12*/].f_3 = 89f;
				Local_526.f_690[10 /*12*/].f_10 = 0;
				if (!func_5(Local_1529.f_136, 128))
				{
					Local_526.f_690[11 /*12*/].f_7 = joaat("P_CAMP_CUP_01X");
				}
				else
				{
					Local_526.f_690[11 /*12*/].f_7 = 0;
				}
				Local_526.f_690[11 /*12*/] = { func_474() };
				Local_526.f_690[11 /*12*/].f_3 = 89f;
				Local_526.f_690[11 /*12*/].f_10 = 0;
				if (!func_5(Local_1529.f_136, 128))
				{
					Local_526.f_690[0 /*12*/].f_7 = joaat("P_PANTHERBLOOD01X");
				}
				else
				{
					Local_526.f_690[0 /*12*/].f_7 = 0;
				}
				Local_526.f_690[0 /*12*/] = { func_477(0, 2) };
				Local_526.f_690[0 /*12*/].f_2 = (Local_526.f_690[0 /*12*/].f_2 - 5f);
				Local_526.f_690[0 /*12*/].f_3 = 89f;
				Local_526.f_690[0 /*12*/].f_10 = 0;
				func_475(&(Local_526.f_690[0 /*12*/].f_11), 67);
				if (!func_5(Local_1529.f_136, 128))
				{
					Local_526.f_690[1 /*12*/].f_7 = joaat("P_COUGARBLOODPOOLS01X");
				}
				else
				{
					Local_526.f_690[1 /*12*/].f_7 = 0;
				}
				Local_526.f_690[1 /*12*/] = { func_477(0, 3) };
				Local_526.f_690[1 /*12*/].f_2 = (Local_526.f_690[1 /*12*/].f_2 - 5f);
				Local_526.f_690[1 /*12*/].f_3 = 89f;
				Local_526.f_690[1 /*12*/].f_10 = 0;
				func_475(&(Local_526.f_690[1 /*12*/].f_11), 67);
			}
			break;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		bVar5 = func_389(iLocal_524, func_7(iVar3));
		if (bVar5)
		{
			iVar0[iVar4] = iVar3;
			iVar4++;
		}
		if (iVar4 >= 2)
		{
		}
		else
		{
			iVar3++;
		}
	}
	iVar6 = 0;
	while (iVar6 < iVar4)
	{
		iVar7 = iVar6 * 4;
		if (iVar7 + 18 >= Local_526.f_690 || iVar7 < 0)
		{
		}
		else
		{
			iVar3 = iVar0[iVar6];
			if (func_19(8192))
			{
				Local_526.f_690[(15 + iVar7) /*12*/].f_7 = joaat("P_SAWBUCKING01X");
				Local_526.f_690[(16 + iVar7) /*12*/].f_7 = joaat("P_CS_CEDARLOG01X");
				Local_526.f_690[(17 + iVar7) /*12*/].f_7 = joaat("P_CS_CEDARLOG02X");
				Local_526.f_690[(18 + iVar7) /*12*/].f_7 = joaat("P_CS_CEDARLOG03X");
			}
			else
			{
				Local_526.f_690[(15 + iVar7) /*12*/].f_7 = 0;
				Local_526.f_690[(16 + iVar7) /*12*/].f_7 = 0;
				Local_526.f_690[(17 + iVar7) /*12*/].f_7 = 0;
				Local_526.f_690[(18 + iVar7) /*12*/].f_7 = 0;
			}
			Local_526.f_690[(15 + iVar7) /*12*/] = { func_478(iVar3) };
			Local_526.f_690[(15 + iVar7) /*12*/].f_3 = func_479(iVar3);
			Local_526.f_690[(15 + iVar7) /*12*/].f_10 = 0;
			Local_526.f_690[(16 + iVar7) /*12*/] = { func_480(iVar3) };
			Local_526.f_690[(16 + iVar7) /*12*/].f_4 = { func_481(iVar3) };
			Local_526.f_690[(16 + iVar7) /*12*/].f_10 = 0;
			func_475(&(Local_526.f_690[(16 + iVar7) /*12*/].f_11), 2);
			vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_526.f_690[(16 + iVar7) /*12*/], Local_526.f_690[(16 + iVar7) /*12*/].f_3, 0.025f, -4.4039f, 0.041f) };
			Local_526.f_690[(17 + iVar7) /*12*/] = { vVar8 };
			Local_526.f_690[(17 + iVar7) /*12*/].f_3 = Local_526.f_690[(16 + iVar7) /*12*/].f_3;
			Local_526.f_690[(17 + iVar7) /*12*/].f_10 = 0;
			vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_526.f_690[(16 + iVar7) /*12*/], Local_526.f_690[(16 + iVar7) /*12*/].f_3, 0f, 6.3529f, -0.077f) };
			Local_526.f_690[(18 + iVar7) /*12*/] = { vVar8 };
			Local_526.f_690[(18 + iVar7) /*12*/].f_3 = Local_526.f_690[(16 + iVar7) /*12*/].f_3;
			Local_526.f_690[(18 + iVar7) /*12*/].f_10 = 0;
			iVar6++;
		}
	}
	if (func_19(128))
	{
		if (func_19(16384))
		{
			Local_526.f_690[2 /*12*/].f_7 = joaat("S_APLSD_LOG");
		}
		else
		{
			Local_526.f_690[2 /*12*/].f_7 = 0;
		}
		Local_526.f_690[2 /*12*/] = { -1410.311f, -227.9941f, 99.4013f };
		Local_526.f_690[2 /*12*/].f_3 = 100.36f;
		Local_526.f_690[2 /*12*/].f_10 = 0;
		if (func_19(16384))
		{
			Local_526.f_690[14 /*12*/].f_7 = joaat("S_APLSD_HRSATT");
		}
		else
		{
			Local_526.f_690[14 /*12*/].f_7 = 0;
		}
		Local_526.f_690[14 /*12*/] = { -1404.688f, -227.0209f, 99.4983f };
		Local_526.f_690[14 /*12*/].f_3 = 94.76f;
		Local_526.f_690[14 /*12*/].f_10 = 0;
		if (func_19(16384))
		{
			Local_526.f_690[23 /*12*/].f_7 = joaat("S_APLSD_HOOK");
		}
		else
		{
			Local_526.f_690[23 /*12*/].f_7 = 0;
		}
		Local_526.f_690[23 /*12*/] = { -1412.52f, -227.139f, 99.815f };
		Local_526.f_690[23 /*12*/].f_3 = 129.6f;
		Local_526.f_690[23 /*12*/].f_10 = 1;
	}
	if ((func_19(262144) || func_19(16)) && func_323())
	{
		if (iLocal_98 != 3)
		{
			Local_526.f_690[5 /*12*/].f_7 = joaat("P_CHAIR06X");
		}
		else
		{
			Local_526.f_690[5 /*12*/].f_7 = 0;
		}
		iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.116f, -211.4299f, 103.0422f, 0f, 0f, 18.85407f, 1f, 1f, 2.328289f, "volChairSpawnBlock");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
		Local_526.f_690[11 /*12*/].f_7 = joaat("P_LANTERN09XHANG");
		switch (iLocal_98)
		{
			case 1:
				Local_526.f_690[11 /*12*/].f_7 = 0;
				Local_526.f_690[11 /*12*/] = { -1399.87f, -212.58f, 102.43f };
				break;
			case 2:
				Local_526.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
			case 3:
				Local_526.f_690[11 /*12*/] = { -1399.06f, -210.58f, 104.42f };
				break;
		}
		Local_526.f_690[11 /*12*/].f_3 = 5f;
		Local_526.f_690[11 /*12*/].f_10 = 0;
		func_475(&(Local_526.f_690[11 /*12*/].f_11), 66);
	}
	else
	{
		Local_526.f_690[5 /*12*/].f_7 = 0;
	}
	Local_526.f_690[5 /*12*/] = { -1400.098f, -211.239f, 101.889f };
	Local_526.f_690[5 /*12*/].f_3 = 22f;
	Local_526.f_690[5 /*12*/].f_10 = 0;
	func_475(&(Local_526.f_690[5 /*12*/].f_11), 2);
}

void func_227(var uParam0)
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

void func_228()
{
	Local_526.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			Local_526.f_304[0 /*32*/].f_1 = joaat("NORTHFLATCAR01X");
			Local_526.f_304[0 /*32*/].f_6 = { -1342.64f, -191.66f, 99.56f };
			Local_526.f_304[0 /*32*/].f_9 = 27f;
			func_475(&(Local_526.f_304[0 /*32*/].f_22), 129);
			Local_526.f_2 = 1;
			break;
		case 2:
			if (!func_22(&Local_1529, 32))
			{
				if (func_19(256))
				{
					Local_526.f_2++;
				}
			}
			if (func_9(1, 2) || func_9(Local_1529.f_136, 16384))
			{
				Local_526.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_526.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_526.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_526.f_2++;
				if (func_19(262144))
				{
					Local_1911.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((func_19(262144) && func_9(1, 2)) || func_9(Local_1529.f_136, 16384))
			{
				Local_526.f_304[0 /*32*/].f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_526.f_304[0 /*32*/].f_9 = 298.1611f;
				Local_526.f_304[0 /*32*/].f_1 = joaat("LOGWAGON");
				iLocal_14 += 2;
				Local_526.f_2++;
				if (func_19(262144))
				{
					Local_1911.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!func_22(&Local_1529, 32))
			{
				if (func_19(256))
				{
					Local_526.f_2++;
				}
			}
			break;
	}
}

void func_229()
{
	char* sVar0;

	if (func_19(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		func_482(sVar0, &uLocal_1781);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		func_482(sVar0, &uLocal_1781);
	}
	if (func_19(8192))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		func_482(sVar0, &uLocal_1781);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		func_482(sVar0, &uLocal_1781);
	}
	if (func_19(262144))
	{
		sVar0 = func_483();
		func_482(sVar0, &uLocal_1781);
		if (func_9(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			func_482(sVar0, &uLocal_1781);
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				break;
			case 2:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
				func_482(sVar0, &uLocal_1781);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				func_482(sVar0, &uLocal_1781);
				break;
		}
	}
}

void func_230()
{
	STREAMING::REQUEST_COLLISION_AT_COORD(func_484());
}

bool func_231()
{
	if (!func_485(&(Local_526.f_690)))
	{
		return false;
	}
	return true;
}

bool func_232()
{
	if (iLocal_98 == 3 && !func_19(262144))
	{
		return ENTITY::_0x6BFBDC46139C45AB(func_484());
	}
	return true;
}

bool func_233(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_486(uParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_234(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;

	if (bParam6)
	{
		func_487(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_488(uParam1))
	{
		bVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, true, true, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
		{
			bVar0 = func_489(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		bVar0 = func_489(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(bVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(bVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(bVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_490(bVar0))
		{
			func_257(bVar0, &(uParam1->f_23), 0);
		}
		if (func_490(bVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(bVar0, 307, true);
		}
		if (func_491(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(bVar0, true);
			PED::SET_PED_TO_RAGDOLL(bVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(bVar0, 186, !func_492(&(uParam1->f_22)));
			func_128(bVar0, func_493(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(bVar0);
		}
		if (func_494(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(bVar0, true);
		}
		if (func_495(&(uParam1->f_22)))
		{
			func_496(bVar0, 1);
		}
		ENTITY::_SET_ENTITY_FADE_IN(bVar0);
		PED::SET_PED_CONFIG_FLAG(bVar0, 6, func_497(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(bVar0, 393, true);
		if (!func_498(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(bVar0, true);
		}
		if (!func_490(bVar0))
		{
			func_500(bVar0, !func_499(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(bVar0, 4, func_501(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(bVar0, 297, !func_502(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(bVar0, 317, !func_502(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(bVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (PED::IS_PED_HUMAN(bVar0))
		{
			DECORATOR::DECOR_SET_BOOL(bVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(bVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return bVar0;
}

int func_235(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_236(int iParam0)
{
	return iParam0 != 0;
}

int func_237(int iParam0, bool bParam1)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_23(iParam0, 32) && !bParam1)
	{
		func_503(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_235(iParam0)));
		if (func_1() == -1)
		{
			if (func_23(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_167(iParam0));
				func_169(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_167(iParam0));
		}
		return 0;
	}
	if (!func_504(iParam0) && func_1() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iParam0)))
	{
		func_169(iParam0, 128);
		return 1;
	}
	func_503(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_235(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_167(iParam0));
	if (func_23(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_167(iParam0));
		func_169(iParam0, 2048);
	}
	return 1;
}

bool func_238(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_155(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_243(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_167(iParam0));
}

bool func_239(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iParam0)))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_167(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x0CADC3A977997472(func_167(iParam0), false)))
		{
			return false;
		}
	}
	return true;
}

bool func_240(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_241(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_505(iParam0, 1))
	{
		return 0;
	}
	if (func_236(func_235(iParam0)))
	{
		iVar1 = func_167(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_0x49A8C2CD97815215(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_506(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_24(iParam0, 1);
	func_507(iParam0);
	if (bParam3)
	{
		func_24(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_242(bool bParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(bParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(bParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 317, bParam1);
}

int func_243(int iParam0)
{
	int iVar0;

	iVar0 = func_167(iParam0);
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

int func_244(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

Vector3 func_245()
{
	return 0f, 0f, 0f;
}

int func_246(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
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
		else if ((iParam3[iVar0 /*12*/])->f_7 != 0 && !func_498((iParam3[iVar0 /*12*/])->f_11, 16))
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
					if (func_498((iParam3[iVar0 /*12*/])->f_11, 64))
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
					if (!func_498((iParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *(iParam3[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *(iParam3[iVar0 /*12*/]) };
					}
					if (!func_498((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						func_508(&vVar5, (iParam3[iVar0 /*12*/])->f_10);
					}
					if (func_498((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_240((iParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, (iParam3[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { (iParam3[iVar0 /*12*/])->f_4 };
					}
					if (func_498((iParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_509((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((iParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_498((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((iParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY((iParam3[iVar0 /*12*/])->f_8, false);
						}
					}
				}
				if (func_498((iParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((iParam3[iVar0 /*12*/])->f_8, true);
				}
				if (func_498((iParam3[iVar0 /*12*/])->f_11, 32))
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

bool func_247(var uParam0, bool bParam1, char* sParam2)
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

bool func_248(int iParam0)
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

bool func_249(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_510(uParam0->f_4, 1) > 120f)
	{
		iVar0 = 1;
	}
	else if (func_510(uParam0->f_4, 1) > 65f && !CAM::IS_SPHERE_VISIBLE(uParam0->f_4, 4f))
	{
		iVar0 = 1;
	}
	else if (uParam0->f_25)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_250(bool bParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_511(bParam0, iParam1);
}

bool func_251(int iParam0, var uParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (func_376(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0f;
		return true;
	}
	if (fParam6 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return false;
		}
	}
	if (func_512(iParam0, bParam5))
	{
		if (func_513(vVar0, iParam0, uParam1, iParam2, bParam3, fParam4, bParam5, bParam7, fParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0f;
	}
	return false;
}

bool func_252(float fParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		if (!func_514(bParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_515(fParam0))
	{
		return false;
	}
	return true;
}

void func_253(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] = (Global_1058888.f_40545[iParam0 /*11*/] - (Global_1058888.f_40545[iParam0 /*11*/] && iParam1));
}

bool func_254(var uParam0)
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

bool func_255()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_412[iVar1 /*7*/]))
		{
			if (!func_516(&(Local_412[iVar1 /*7*/])))
			{
				iVar0 = 0;
			}
			else
			{
				iVar1++;
			}
			return iVar0;
		}
	}
}

bool func_256(bool bParam0, bool bParam1)
{
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HAS_VOICE") && DECORATOR::DECOR_GET_BOOL(bParam0, "HAS_VOICE"))
	{
		return true;
	}
	if (bParam1 && AUDIO::_0xF0EE69F500952FA5(bParam0))
	{
		return true;
	}
	return false;
}

void func_257(bool bParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_250(bParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(bParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(bParam0, sParam1);
	}
}

int func_258()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR_WHITTLE");
}

char* func_259()
{
	return "PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C";
}

Vector3 func_260()
{
	return -1400.832f, -205.7252f, 101.8838f;
}

void func_261(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(bParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (bParam0 == func_517(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_490(bParam0))
	{
		if (func_518(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(bParam0);
		}
	}
	if (func_498(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_261(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_261(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_498(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_498(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_498(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_498(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_498(iParam5, 129))
	{
		if (func_498(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_498(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_498(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_498(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_490(bParam0))
		{
			bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_0x0348469DAA17576C(bVar6);
			if (!func_498(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(bVar6, true, false);
				TASK::TASK_STAND_STILL(bVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_498(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_262(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_155(iParam0))
	{
		return false;
	}
	if (!func_506(iParam0) && bParam1)
	{
		return false;
	}
	return func_23(iParam0, 1);
}

void func_263(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_155(iParam0))
	{
		return;
	}
	if (!func_23(iParam0, 1))
	{
		return;
	}
	if (!func_23(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_506(iParam0)) && func_519(iParam0))
	{
		return;
	}
	func_169(iParam0, 1);
	func_520(iParam0);
	if (func_236(func_235(iParam0)))
	{
		iVar0 = func_167(iParam0);
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
		func_169(iParam0, 16);
	}
	if (func_23(iParam0, 128) && !bParam3)
	{
		func_521(iParam0, 0);
	}
}

void func_264(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_265()
{
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (((func_341(iParam0, 8388608) && func_341(iParam0, 1048576)) && func_341(iParam0, 2097152)) && func_341(iParam0, 4194304))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REPEATER"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_RIFLE"), iParam1, iParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SNIPER"), iParam1, iParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
	while (func_522(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			Jump @189; //curOff = 164
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
		}
	}
	if (!func_343(iVar3))
	{
		iVar3 = joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar5 = 0;
	if (!func_341(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!func_341(iParam0, 1048576))
	{
		if (!func_342(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_341(iParam0, 2097152))
	{
		if (!func_342(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_341(iParam0, 4194304))
	{
		if (!func_342(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_342(iVar5))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	return iVar5;
}

int func_267(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_342(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_342(iVar4) && iVar4 != iVar0)
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
	if (func_1() == -1 && !func_343(iVar0))
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
				if (func_343(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_342(iVar0))
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
		func_523(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_524(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_525(iVar0))
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

char* func_268(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 3;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0957_A_M_M_Rancher_White_02";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0807_S_M_M_Army_01_WHITE_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 4;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
				case 1:
					return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
				case 2:
					return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
				case 3:
					return "0708_S_M_M_RaCRailGuards_01_WHITE_01";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_269()
{
	if (func_164(64))
	{
		return iLocal_200;
	}
	return iLocal_201;
}

void func_270(int iParam0, bool bParam1)
{
	if (bParam1 || func_5(iParam0, 8192))
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, func_526(iParam0)))
		{
			return;
		}
		UILOG::_UILOG_REMOVE_ENTRY(3, func_526(iParam0));
		func_204(iParam0, 8192);
	}
}

void func_271(int iParam0)
{
	if (!func_5(iParam0, 8192))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, func_526(iParam0), func_142(iParam0, func_4(iParam0)), func_527(iParam0), func_528(iParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, func_526(iParam0), func_529(iParam0), func_530());
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, func_526(iParam0), func_531(iParam0), func_532());
		func_42(iParam0, 8192);
	}
}

void func_272(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, func_526(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		func_534(func_533(iParam0), sParam2, func_530(), func_529(iParam0), joaat("PLAYER_MENU"), 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

bool func_273(int iParam0)
{
	return (Global_1898092.f_1 && iParam0) != 0;
}

void func_274(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_535(iParam0))
	{
		iVar0 = func_139(iParam0);
		func_10(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_536(iVar0, 0);
				break;
			case 1:
				MAP::_0xD8C7162AB2E2AF45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_537(iParam0, 0);
		}
	}
}

int func_275(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_538(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_539(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_539(), iVar3);
		if (func_540(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_276()
{
	int iVar0;
	int iVar1;

	iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_541(Global_35))
		{
			iVar1 = func_542(Global_35);
		}
		else if (func_543(Global_35))
		{
			iVar1 = func_544(Global_35);
		}
		else if (func_545(Global_35))
		{
			iVar1 = func_546(Global_35);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return iVar0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	return iVar0;
}

void func_277(char* sParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	var uVar11;
	int iVar12;

	iVar0 = *sParam0;
	if (iVar0 > 8)
	{
		return;
	}
	func_547(&uVar1, iVar0, 1);
	if (bParam3)
	{
		uVar11 = uVar1[0];
		iVar10 = 0;
		while (iVar10 < iVar0)
		{
			if (uVar1[iVar10] == 0)
			{
				uVar1[0] = uVar1[iVar10];
				uVar1[iVar10] = uVar11;
			}
			iVar10++;
		}
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 < 4)
	{
		iVar12 = uVar1[iVar10];
		uParam2->f_2[iVar10] = (*sParam0)[iVar12];
		uParam2->f_7[iVar10] = (*iParam1)[iVar12];
		iVar10++;
	}
}

float func_278(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return -1f;
	}
	return func_357(Global_35, bParam0, bParam1, bParam2);
}

void func_279(var uParam0, bool bParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_280(var uParam0, bool bParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(bParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(bParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(bParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

char* func_281(bool bParam0, int iParam1)
{
	if (func_132(bParam0, 16))
	{
		switch (bParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO1";
					case 1:
						return "LCMP_AGGRO2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO3";
					case 1:
						return "LCMP_AGGRO4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (bParam0->f_16)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return "LCMP_BODY1";
					case 1:
						return "LCMP_BODY2";
					default:
						break;
				}
				break;
			case 7:
				switch (bParam0->f_1)
				{
					case 0:
					case 1:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL1";
							case 1:
								return "LCMP_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL3";
							case 1:
								return "LCMP_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "";
}

int func_282(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_548(bParam1, bParam2, bParam3);
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

bool func_283(int iParam0, var uParam1)
{
	if (func_19(1048576))
	{
		if (((((func_356(func_63(Local_1529.f_138), iParam0, uParam1, 0) || ((iLocal_203 % 3) == 1 && func_549(&uLocal_1687, iParam0, uParam1, 0, (iLocal_190 / 3)))) || ((iLocal_203 % 3) == 2 && func_549(&uLocal_1687, iParam0, uParam1, (iLocal_190 / 3) + 1, (iLocal_190 * 2 / 3)))) || ((iLocal_203 % 3) == 0 && func_549(&uLocal_1687, iParam0, uParam1, (iLocal_190 * 2 / 3) + 1, iLocal_190))) || func_549(&iLocal_1846, iParam0, uParam1, 0, -1)) || func_549(&bLocal_1872, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_284()
{
	if (func_9(1, 2) || func_9(Local_1529.f_136, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1869[0]) && func_550(Global_35, iLocal_1869[0], 0))
		{
			if (func_9(Local_1529.f_136, 16384))
			{
				func_96(&(uLocal_1866[1]));
				return false;
			}
			else
			{
				func_552(3, 0, 0, func_551(), func_63(Local_1529.f_138), 0, 1065353216 /* Float: 1f */, 0);
				func_58(32768);
				return true;
			}
		}
	}
	if (func_19(65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[1]) && func_550(Global_35, uLocal_72[1], 1))
		{
			func_552(3, 0, 0, func_551(), func_63(Local_1529.f_138), 0, 1065353216 /* Float: 1f */, 0);
			func_58(32768);
			return true;
		}
	}
	if (func_19(32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_72[0]) && func_550(Global_35, uLocal_72[0], 1))
		{
			func_552(3, 0, 0, func_551(), func_63(Local_1529.f_138), 0, 1065353216 /* Float: 1f */, 0);
			func_58(32768);
			return true;
		}
	}
	return false;
}

bool func_285(bool bParam0, bool bParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_553(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_554(bParam0, iParam2))
			{
				*uParam3 = 128;
				func_555(bParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_556(bParam0, iParam2))
				{
					*uParam3 = 8;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_557(bParam0, bParam1, iParam2))
				{
					*uParam3 = 8;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_558(bParam0, iParam2))
				{
					*uParam3 = 64;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_282(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_555(bParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_559(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_560(Global_35, bParam0, iParam2))
					{
						*uParam3 = 4;
						func_555(bParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_561(Global_35, bParam0, iParam2))
					{
						*uParam3 = 256;
						func_555(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_562(Global_35, bParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_562(Global_35, bParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_555(bParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_563(bParam0, iParam2))
				{
					*uParam3 = 32;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_564(&bParam0, iParam2))
				{
					*uParam3 = 4096;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_565(iParam2, 4000))
				{
					if ((func_566(bParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_567(iParam2, bParam0)) && func_568(iParam2, bParam0))
					{
						*uParam3 = 2;
						func_555(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_566(bParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_567(iParam2, bParam0)) && func_568(iParam2, bParam0))
				{
					*uParam3 = 2;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_569(bParam0, Global_1935630.f_41))
							{
								func_570();
								*uParam3 = 2;
								func_555(bParam0, iParam2, *uParam3);
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
						if (func_569(bParam0, Global_1935630.f_41))
						{
							func_570();
							*uParam3 = 2;
							func_555(bParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_571(iParam2, bParam0) || (iParam2->f_9 > 0 && (func_572() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_570();
						*uParam3 = 2;
						func_555(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_573())
					{
						if (func_569(bParam0, Global_1935630.f_42))
						{
							func_570();
							*uParam3 = 2;
							func_555(bParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_574(iParam2, bParam0))
			{
				*uParam3 = 1024;
				func_555(bParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_575(bParam0, bParam1, iParam2))
				{
					*uParam3 = 2048;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_576(bParam0, iParam2))
					{
						*uParam3 = 8192;
						func_555(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_577(bParam0, iParam2))
				{
					*uParam3 = 32768;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_578(iParam2, 4000))
				{
					if (func_579(&bParam0, iParam2))
					{
						*uParam3 = 512;
						func_555(bParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_580(bParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_555(bParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_363(iParam2, bParam0))
			{
				*uParam3 = 1;
				func_555(bParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_286(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		iParam0->f_8 = func_572();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_581(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

int func_287()
{
	if (!func_582(&Local_1529))
	{
		if (!func_583(&(Global_1935630.f_34[0])))
		{
			return 0;
		}
		func_43(&Local_1529, 4096);
	}
	return 1;
}

bool func_288()
{
	if (iLocal_98 != 3)
	{
		return false;
	}
	if (func_19(262144))
	{
		return false;
	}
	return false;
}

bool func_289(var uParam0)
{
	switch (*uParam0)
	{
		case 8:
		case 64:
		case 512:
		case 2048:
		case 8192:
		case 65536:
			return true;
		default:
			break;
	}
	return false;
}

int func_290(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_1529.f_138)))
	{
		if (func_584())
		{
			(*bParam0)[iVar0] = func_63(Local_1529.f_138);
			iVar0++;
		}
	}
	if (func_19(64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[0]))
		{
			(*bParam0)[iVar0] = iLocal_1846[0];
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(bLocal_1872[0]))
		{
			(*bParam0)[iVar0] = bLocal_1872[0];
			iVar0++;
		}
	}
	if (func_19(8192))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = func_389(iLocal_524, func_7(iVar2));
			if (bVar5)
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					iVar3 = func_325(9, iVar1, iVar6);
					bVar4 = func_63(iVar3);
					if (!ENTITY::IS_ENTITY_DEAD(bVar4))
					{
						(*bParam0)[iVar0] = bVar4;
						iVar0++;
					}
					iVar1++;
				}
				iVar6++;
			}
			iVar2++;
		}
	}
	if (iLocal_98 == 1 && !func_5(Local_1529.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_325(6, iVar1, 0);
			bVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				(*bParam0)[iVar0] = bVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_19(256))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_325(7, iVar1, 0);
			bVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				(*bParam0)[iVar0] = bVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_5(Local_1529.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar3 = func_325(0, iVar1, 0);
			bVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				(*bParam0)[iVar0] = bVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_9(Local_1529.f_136, 16))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar3 = func_325(3, iVar1, 0);
			bVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				(*bParam0)[iVar0] = bVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < bLocal_1872)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bLocal_1872[iVar1]))
		{
			(*bParam0)[iVar0] = bLocal_1872[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		(*bParam0)[iVar0] = iLocal_1846[2];
		iVar0++;
		(*bParam0)[iVar0] = iLocal_1846[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

void func_291(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	func_292(bParam0, 1);
	iVar0 = PED::_GET_LASSO_TARGET(Global_35);
	if (bParam5 || bParam0->f_1 < bParam0->f_3)
	{
		if (bParam0->f_1 >= 2)
		{
			func_292(bParam0, 16);
			bParam0->f_4 = 45;
		}
		if (bParam0->f_16 == -1)
		{
			switch (iParam2)
			{
				case 65536:
					bParam0->f_16 = 0;
					break;
				case 8:
					if (PED::_0x268B3AEBF032A88D(uParam1->f_10))
					{
						func_292(bParam0, 2);
						return;
					}
					if (func_585(bParam0, &(uParam1->f_10)))
					{
						func_292(bParam0, 2);
					}
					else
					{
						func_134(bParam0, 1);
					}
					return;
				case 64:
					if (func_585(bParam0, &(uParam1->f_10)))
					{
						func_292(bParam0, 2);
					}
					else
					{
						func_134(bParam0, 1);
					}
					return;
				case 2048:
					bParam0->f_16 = 4;
					break;
				case 8192:
					if (ENTITY::DOES_ENTITY_EXIST(func_382(Global_35)))
					{
						bParam0->f_16 = 1;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_MALE(iVar0))
						{
							bParam0->f_18 = 1;
						}
						else
						{
							bParam0->f_18 = 2;
						}
						bParam0->f_16 = 2;
					}
					else if (PED::IS_PED_PLANTING_BOMB(Global_35))
					{
						bParam0->f_16 = 3;
					}
					break;
				case 512:
				case 1024:
					bParam0->f_16 = 7;
					break;
			}
		}
		if (*bParam0 != 0)
		{
		}
		else if (bParam0->f_16 != 3 && uParam1->f_10 != 0)
		{
			*bParam0 = uParam1->f_10;
		}
		else if (!func_588(bParam0, iParam3, Global_36, 50f, func_586(bParam0), func_587(bParam0)))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*bParam0) || !PED::IS_PED_HUMAN(*bParam0))
		{
			return;
		}
		if (bParam0->f_1 < 3)
		{
			bParam0->f_9[bParam0->f_1] = func_441();
		}
		if (!bParam4)
		{
			bParam0->f_1++;
		}
	}
	else
	{
		func_292(bParam0, 2);
	}
}

void func_292(bool bParam0, int iParam1)
{
	func_143(&(bParam0->f_17), iParam1);
}

int func_293(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_297(iVar2, iParam6);
	}
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_285((*bParam0)[*iParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

bool func_294()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_324(&(Local_412[6 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < func_589(6))
		{
			bVar1 = func_63(func_325(6, iVar0, 0));
			if (bVar1 == Local_1529.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_324(&(Local_412[3 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < func_589(3))
		{
			bVar1 = func_63(func_325(3, iVar0, 0));
			if (bVar1 == Local_1529.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_324(&(Local_412[7 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < func_589(7))
		{
			bVar1 = func_63(func_325(7, iVar0, 0));
			if (bVar1 == Local_1529.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_324(&(Local_412[8 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < func_589(8))
		{
			bVar1 = func_63(func_325(8, iVar0, 0));
			if (bVar1 == Local_1529.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = (9 + iVar2);
		if (func_324(&(Local_412[iVar3 /*7*/])))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < func_589(9))
			{
				bVar1 = func_63(func_325(9, iVar0, iVar4));
				if (bVar1 == Local_1529.f_10)
				{
					return true;
				}
				iVar0++;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_295(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (func_132(bParam1, 1))
	{
		return false;
	}
	if (!func_213(Global_35, Global_1392194[uParam0->f_136 /*10*/].f_6, 1, 0))
	{
		return false;
	}
	if ((func_590(Global_35, &iVar0, 4) && !STREAMING::IS_MODEL_A_PED(iVar0)) || TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		if (func_588(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*bParam1 = uVar1;
			bParam1->f_16 = 7;
			return true;
		}
	}
	return false;
}

bool func_296()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	bVar0 = false;
	bVar1 = false;
	if (PED::_0x5407B7288D0478B7(Global_35, 512) > 0)
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = PED::_0x7BE607DAFF382FD2(Global_35, iVar2, 512);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				bVar0 = false;
				bVar1 = false;
				iVar5 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (ENTITY::IS_ENTITY_A_PED(iVar5))
				{
					bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
					if (func_213(bVar6, Global_1392194[Local_1529.f_136 /*10*/].f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (bVar6 == func_63(Local_1529.f_138))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_350(bVar6, &uLocal_1687))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_350(bVar6, &iLocal_1846))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else
					{
						if (bVar0 && !bVar1)
						{
							if (!func_583(&bVar6))
							{
								bVar0 = false;
							}
						}
						iVar4++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar2);
					if (bVar0 && !bVar1)
					{
						func_43(&Local_1529, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

int func_297(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_298(bool bParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return false;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, Global_35))
		{
			return true;
		}
	}
	return false;
}

void func_299(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

bool func_300(int iParam0)
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

void func_301(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_300(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_591(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_592(iVar0);
	*uParam0 = 0;
}

void func_302(bool bParam0)
{
	int iVar0;

	iVar0 = 11;
	if (!func_593())
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iVar0 /*446*/].f_25))
	{
		if (bParam0)
		{
			VOLUME::_DELETE_VOLUME(Global_1914319.f_3[iVar0 /*446*/].f_25);
		}
		else
		{
			Global_1914319.f_3[iVar0 /*446*/].f_25 = 0;
		}
	}
	Global_1914319.f_3[iVar0 /*446*/].f_23 = 0;
	func_594(11);
	func_595(101, 0);
	func_303(11, 4);
}

void func_303(int iParam0, int iParam1)
{
	if (!func_596(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 - (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1));
}

int func_304(int iParam0)
{
	if (!func_98(iParam0))
	{
		return -1;
	}
	return func_307(iParam0);
}

bool func_305(int iParam0)
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
		iVar0 = func_307(iParam0);
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

int func_306(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_307(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_597(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_308(int iParam0)
{
	if (!func_98(iParam0))
	{
		return 0;
	}
	return func_599(func_598(iParam0));
}

void func_309(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_1() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_310(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_311(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_308(iParam0))
	{
		case 1:
			iVar0 = func_430(iParam0);
			return func_600(iVar0);
		case 8:
			iVar1 = func_430(iParam0);
			if (func_432(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_601(iVar1);
			}
			break;
	}
	return -1;
}

void func_312(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_1() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_602(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_603();
		Global_1898077.f_9 = func_604(Global_1894899.f_2);
		func_605(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_313()
{
	if (!func_206(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_206(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_206(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_206(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_206(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_206(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_206(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_314(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return;
	}
	func_606(iParam0, iParam1);
}

int func_315(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_316(bool bParam0)
{
	if (!bParam0 && func_607(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_317(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_318(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (func_315(0) != iParam0)
	{
		return;
	}
	if (func_608(iParam0))
	{
		if (bParam1)
		{
			func_609(-525676072);
		}
		else
		{
			func_610(-525676072);
		}
	}
}

int func_319(int iParam0)
{
	return func_612(func_611(iParam0));
}

void func_320(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_98 == 2)
			{
				return 0;
			}
			else if (iLocal_98 == 3)
			{
				return 0;
			}
			break;
		case 2:
			if (func_19(64))
			{
				return 2;
			}
			else if (iLocal_98 == 3)
			{
				return 2;
			}
			break;
		case 3:
			if (func_19(64))
			{
				return 3;
			}
			else if (iLocal_98 == 3)
			{
				return 3;
			}
			break;
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return iParam0;
	}
	return -1;
}

bool func_323()
{
	return (iLocal_517 == 0 || iLocal_517 == 1);
}

bool func_324(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false);
}

int func_325(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			iVar0 = 814;
			break;
		case 9:
			iVar0 = 816;
			break;
		case 7:
			iVar0 = 820;
			break;
		case 0:
			iVar0 = 814;
			break;
		case 3:
			iVar0 = 817;
			break;
	}
	iVar0 = (iVar0 + (iParam1 + iParam2));
	return iVar0;
}

void func_326(var uParam0, bool bParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!func_613(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, sParam2, bParam1);
}

void func_327(bool bParam0)
{
	if (iLocal_202 < 10)
	{
		if (!func_350(*bParam0, &(Local_1529.f_140)))
		{
			Local_1529.f_140[iLocal_202] = *bParam0;
			iLocal_202++;
		}
	}
}

void func_328(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	if (!func_614(bParam0))
	{
		return;
	}
	iVar0 = func_615(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_616(iVar0);
	func_617(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_618(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_619(iVar0))
		{
			return;
		}
	}
	func_620(iVar0);
	PED::SET_PED_KEEP_TASK(bParam0, true);
	if (bParam1 && func_1() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, true);
		}
	}
}

void func_329(int iParam0)
{
	iLocal_100 = (iLocal_100 - (iLocal_100 && iParam0));
}

void func_330(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_331()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, 1, 0);
}

void func_332(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_138(iParam0))
	{
		return;
	}
	func_621(iParam0, &(Global_40.f_9096[iParam0 /*12*/].f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_333(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		func_334(iParam0, 1);
		func_192(iParam0, 1);
		func_191(iParam0, 1);
		func_189(iParam0, 1);
		func_622(iParam0, 1);
		func_193(iParam0, 1);
		func_623(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		func_334(iParam0, 0);
		func_192(iParam0, 0);
		func_191(iParam0, 0);
		func_189(iParam0, 0);
		func_622(iParam0, 0);
		func_193(iParam0, 0);
		func_623(iParam0, 0);
	}
}

void func_334(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 4);
	}
	else
	{
		func_199(iParam0, 4);
	}
}

void func_335(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 16384);
	}
	else
	{
		func_143(&(iParam0->f_1), 16384);
	}
}

int func_336(bool bParam0, bool bParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	iParam5 = iParam5;
	bParam1 = bParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bParam0, bParam1, 17))
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
		if (func_624())
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
		if (bParam0 != Global_35 && bParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				if (func_278(bParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (bParam0 == bParam1 || bParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(bParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_357(bParam0, bParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_48(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam0, bParam1, 7500, 0, 51, 0);
				}
				if (func_625(bParam0, bParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam1, bParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = bParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(bParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_59(func_626(bParam0, sParam2, iParam11, bParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_337()
{
	float fVar0;
	float fVar1;
	Vector3 vVar4;

	if (func_324(&(Local_412[2 /*7*/])))
	{
		fVar0 = func_627(&(Local_412[2 /*7*/]));
		func_628(&(Local_412[2 /*7*/]), &fVar1, &vVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[0]) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1846[0], -615221946))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_1846[0], false);
			func_629(&(Local_412[2 /*7*/]), "PB_VIC_BRKOUT", 1);
			func_630(&(Local_412[2 /*7*/]), "RECOVERY_BOOL");
		}
		else if ((func_631(&(Local_412[2 /*7*/]), "PBL_IMPATIENT") || (func_631(&(Local_412[2 /*7*/]), "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (func_631(&(Local_412[2 /*7*/]), "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				func_629(&(Local_412[2 /*7*/]), "PBL_COMBAT_L", 1);
				func_630(&(Local_412[2 /*7*/]), "bBreakInternalLoop");
			}
			else
			{
				func_629(&(Local_412[2 /*7*/]), "PBL_COMBAT_R", 1);
				func_630(&(Local_412[2 /*7*/]), "bBreakInternalLoop");
			}
			func_14(1024);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_1529.f_138)))
			{
				func_326(&(Local_412[2 /*7*/]), func_63(Local_1529.f_138), "FOREMAN");
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_63(810)))
			{
				func_326(&(Local_412[2 /*7*/]), func_63(810), "PED1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[2]))
			{
				func_326(&(Local_412[2 /*7*/]), iLocal_1846[2], "PED2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846[3]))
			{
				func_326(&(Local_412[2 /*7*/]), iLocal_1846[3], "PED3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_526.f_690[7 /*12*/].f_8))
			{
				func_326(&(Local_412[2 /*7*/]), Local_526.f_690[7 /*12*/].f_8, "AXE1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_526.f_690[8 /*12*/].f_8))
			{
				func_326(&(Local_412[2 /*7*/]), Local_526.f_690[8 /*12*/].f_8, "AXE2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_526.f_690[9 /*12*/].f_8))
			{
				func_326(&(Local_412[2 /*7*/]), Local_526.f_690[9 /*12*/].f_8, "AXE3");
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_526.f_690[10 /*12*/].f_8))
			{
				func_326(&(Local_412[2 /*7*/]), Local_526.f_690[10 /*12*/].f_8, "CIGARETTE");
			}
			if (func_19(512))
			{
				if (Global_36 < fVar1)
				{
					func_629(&(Local_412[2 /*7*/]), "PBL_COMBAT_L", 1);
					func_630(&(Local_412[2 /*7*/]), "bBreakInternalLoop");
				}
				else
				{
					func_629(&(Local_412[2 /*7*/]), "PBL_COMBAT_R", 1);
					func_630(&(Local_412[2 /*7*/]), "bBreakInternalLoop");
				}
			}
			func_126(1024);
		}
	}
}

void func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0 > -1 && iParam0 != iVar0)
		{
		}
		else if (func_324(&(Local_412[(9 + iVar0) /*7*/])))
		{
			iVar1 = iVar0 * 4;
			iVar2 = iVar0 * 2;
			bVar3 = func_63(func_325(9, 0, iVar2));
			bVar4 = func_63(func_325(9, 1, iVar2));
			if (!ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				bVar5 = bVar4;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(bVar3))
			{
				bVar5 = bVar3;
				bVar6 = true;
			}
			else
			{
				func_326(&(Local_412[(9 + iVar0) /*7*/]), Local_526.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_526.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
				func_215(&(Local_412[(9 + iVar0) /*7*/]));
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(bVar3))
				{
					func_327(&bVar3);
				}
				if (!ENTITY::IS_ENTITY_DEAD(bVar4))
				{
					func_327(&bVar4);
				}
				iVar7 = func_632(bVar5, Global_35, 1060437492 /* Float: 0.707f */);
				if (bVar6)
				{
					switch (iVar7)
					{
						case 1:
							iVar7 = 0;
							break;
						case 0:
							iVar7 = 1;
							break;
						case 3:
							iVar7 = 2;
							break;
						case 2:
							iVar7 = 3;
							break;
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar5, -137640087))
				{
					iVar8 = 0;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar5, -1300850144))
				{
					iVar8 = 1;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar5, -1011860333))
				{
					iVar8 = 2;
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(bVar3))
					{
						func_326(&(Local_412[(9 + iVar0) /*7*/]), bVar3, "PED1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(bVar4))
					{
						func_326(&(Local_412[(9 + iVar0) /*7*/]), bVar4, "PED2");
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_633(iVar8, iVar7)))
				{
					func_629(&(Local_412[(9 + iVar0) /*7*/]), func_633(iVar8, iVar7), 1);
					func_630(&(Local_412[(9 + iVar0) /*7*/]), "bBreakInternalLoop");
				}
				func_326(&(Local_412[(9 + iVar0) /*7*/]), Local_526.f_690[(15 + iVar1) /*12*/].f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_526.f_690[(15 + iVar1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(15 + iVar1) /*12*/].f_8, true);
				}
			}
		}
		iVar0++;
	}
}

void func_339()
{
	if (ENTITY::IS_ENTITY_DEAD(func_63(Local_1529.f_138)))
	{
		return;
	}
	if (!func_324(&(Local_412[0 /*7*/])))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(func_63(Local_1529.f_138), joaat("STANDING")))
	{
		return;
	}
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(Local_1529.f_138), Local_526.f_690[25 /*12*/].f_8, false);
	func_629(&(Local_412[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT", 1);
	func_630(&(Local_412[0 /*7*/]), "bBreakInternalLoop");
	func_14(1024);
}

void func_340()
{
	if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_1529.f_138)) && func_324(&(Local_412[1 /*7*/])))
	{
		if (!ENTITY::HAS_ANIM_EVENT_FIRED(func_63(Local_1529.f_138), joaat("STANDING")))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(Local_1529.f_138), Local_526.f_690[25 /*12*/].f_8, false);
			func_629(&(Local_412[1 /*7*/]), "PBL_COMBAT", 1);
			func_630(&(Local_412[1 /*7*/]), "bBreakInternalLoop");
			func_14(1024);
		}
		else
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(Local_1529.f_138), Local_526.f_690[5 /*12*/].f_8, false);
			func_215(&(Local_412[1 /*7*/]));
		}
	}
	if (func_324(&(Local_412[3 /*7*/])))
	{
		func_215(&(Local_412[3 /*7*/]));
		PHYSICS::ACTIVATE_PHYSICS(Local_526.f_690[7 /*12*/].f_8);
	}
	if (func_324(&(Local_412[0 /*7*/])))
	{
		func_215(&(Local_412[0 /*7*/]));
	}
}

bool func_341(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_342(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_343(int iParam0)
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

void func_344(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam0);
	func_96(&iVar0);
}

void func_345(bool bParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, bParam0);
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

bool func_346(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_347(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_348(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_349()
{
	return "Default_Shocked";
}

bool func_350(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *bParam1)
	{
		if (bParam0 == (*bParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_351(bool bParam0, bool bParam1)
{
	return func_634(bParam0, Global_1894899.f_2, bParam1);
}

bool func_352(bool bParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (func_346(bParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(bParam0, 0))
	{
		return true;
	}
	if (bParam2)
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (!PED::IS_PED_MALE(bParam0))
	{
		return false;
	}
	fVar1 = func_278(bParam0, 1, 1);
	if (fVar1 < 30f)
	{
		fVar0 = 1f;
	}
	else if (fVar1 < 75f)
	{
		fVar0 = 0.7f;
	}
	else if (fVar1 < 150f)
	{
		fVar0 = 0.5f;
	}
	else
	{
		fVar0 = 0.3f;
	}
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar2 <= fVar0)
	{
		return true;
	}
	return false;
}

bool func_353(bool bParam0, int iParam1, bool bParam2)
{
	if (func_342(iParam1))
	{
		return true;
	}
	if (bParam2 && PED::IS_PED_IN_COMBAT(*bParam0, 0))
	{
		return false;
	}
	return true;
}

void func_354(bool bParam0, int iParam1, float fParam2)
{
	float fVar0;

	if (PED::IS_PED_HUMAN(*bParam0))
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar0 < fParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam0, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 146, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 148, false);
			PED::_0xC6C4E15CF7D52FEA(*bParam0, 1000f);
			LAW::_0xF0B67BAD53C35BD9(*bParam0, Global_35, *bParam0, Global_36, iParam1);
		}
	}
}

bool func_355()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_356(bool bParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		func_553(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_565(iParam1, 4000))
				{
					if ((func_566(bParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_567(iParam1, bParam0)) && func_568(iParam1, bParam0))
					{
						func_570();
						*uParam2 = 2;
						func_555(bParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_565(iParam1, 4000))
				{
					if ((func_566(bParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_567(iParam1, bParam0)) && func_568(iParam1, bParam0))
					{
						func_570();
						*uParam2 = 2;
						func_555(bParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_569(bParam0, Global_1935630.f_41))
							{
								func_570();
								*uParam2 = 2;
								func_555(bParam0, iParam1, *uParam2);
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
						if (func_569(bParam0, Global_1935630.f_41))
						{
							func_570();
							*uParam2 = 2;
							func_555(bParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_573())
					{
						if (func_569(bParam0, Global_1935630.f_42))
						{
							func_570();
							*uParam2 = 2;
							func_555(bParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_559(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_560(Global_35, bParam0, iParam1))
					{
						func_570();
						*uParam2 = 4;
						func_555(bParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_561(Global_35, bParam0, iParam1))
					{
						func_570();
						*uParam2 = 256;
						func_555(bParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_635(bParam0, iParam1))
			{
				func_570();
				*uParam2 = 131072;
				func_555(bParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_636(bParam0, iParam1))
			{
				func_570();
				*uParam2 = 262144;
				func_555(bParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

float func_357(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_358(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1935630.f_34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
		{
			if (func_357(Global_1935630.f_34[iVar0], *uParam0, 1, 1) < fParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_359(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return true;
	}
	return ANIMSCENE::IS_ANIM_SCENE_FINISHED(*uParam0, false);
}

bool func_360(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam0, sParam1, true);
}

void func_361(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

void func_362(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

bool func_363(int iParam0, bool bParam1)
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

bool func_364(int iParam0)
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
	iVar0 = func_637(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_638(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_442(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_639(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_640(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_641(iParam0);
	if (iVar5 < 1 || iVar5 > func_642(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_365(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_639(*iParam0);
	iVar1 = func_640(*iParam0);
	iVar2 = func_641(*iParam0);
	iVar3 = func_442(*iParam0);
	iVar4 = func_638(*iParam0);
	iVar5 = func_637(*iParam0);
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
	iVar6 = func_642(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_642(iVar1, iVar0);
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
	func_643(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_366(int iParam0, bool bParam1)
{
	return func_644(func_441(), iParam0, bParam1);
}

bool func_367(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_368(bool bParam0)
{
	if (bParam0->f_19 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_382(Global_35)))
		{
			bParam0->f_19 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING"), Global_35, 999f, 5f, 5f, -1f, -1f, 180f, false, false, -1, -1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(func_382(Global_35)))
	{
		EVENT::REMOVE_SHOCKING_EVENT(bParam0->f_19);
	}
}

void func_369(bool bParam0, int iParam1)
{
	bParam0->f_13 = iParam1;
}

void func_370(bool bParam0, int* iParam1, var uParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	if (bParam0->f_14 > 0)
	{
		iVar1 = func_646(bParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, func_645(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iVar1 != -1)
		{
			bParam0->f_15 = iVar1;
		}
	}
	switch (bParam0->f_14)
	{
		case 0:
			if (bParam3 || bParam0->f_13 > 0)
			{
				if (!DECORATOR::DECOR_EXIST_ON(*bParam0, "bScriptedILO"))
				{
					DECORATOR::DECOR_SET_BOOL(*bParam0, "bScriptedILO", true);
				}
				func_648(uParam2[0 /*17*/], func_647(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_649(uParam2[0 /*17*/], 1, 0);
				func_650(uParam2[0 /*17*/], 0);
				func_648(uParam2[1 /*17*/], func_647(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_649(uParam2[1 /*17*/], 1, 0);
				func_650(uParam2[1 /*17*/], 0);
				func_648(uParam2[2 /*17*/], func_647(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
				func_649(uParam2[2 /*17*/], 0, 0);
				func_650(uParam2[2 /*17*/], 1);
				func_651(bParam0, 1);
			}
			break;
		case 1:
			if (!func_252(0, 1, Global_35, 1) || !func_252(0, 1, *bParam0, 1))
			{
				func_652(uParam2);
			}
			if (bParam0->f_15 != -1)
			{
				func_76(iParam1, 0);
				func_649(uParam2[0 /*17*/], 0, 0);
				func_649(uParam2[1 /*17*/], 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_653(bParam0)))
				{
					func_114(Global_35, *bParam0, func_653(bParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_651(bParam0, 2);
			}
			break;
		case 2:
			if (func_252(0, 1, Global_35, 1) && func_252(0, 1, *bParam0, 1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_654(bParam0)))
				{
					func_114(*bParam0, Global_35, func_654(bParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_651(bParam0, 3);
			}
			break;
		case 3:
			if (func_252(0, 1, Global_35, 1) && func_252(0, 1, *bParam0, 1))
			{
				func_651(bParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

bool func_371(int iParam0)
{
	return func_62(iParam0, 0, 1);
}

char* func_372(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 5;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0038_A_M_M_BiVWorker_01_WHITE_01";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0976_A_M_M_RoughTravellers_White_07";
				case 3:
					return "0807_S_M_M_Army_01_WHITE_02";
				case 4:
					return "0957_A_M_M_Rancher_White_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 2;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
				case 1:
					return "0113_S_M_M_RaCRailWorker_01_ASIAN_01";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_373(bool bParam0)
{
	if (PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(bParam0);
}

float func_374(var uParam0)
{
	if (!func_655(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_656(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_468() - uParam0->f_1);
}

bool func_375(bool bParam0)
{
	return true;
}

float func_376(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
	}
	return func_657(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

void func_377(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

int func_378(var uParam0, char* sParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;

	bParam3 = bParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(bParam2) && (func_357(bParam2, bParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(bParam2, bParam3, 7000, 0, 51, 0);
			if (func_357(bParam2, bParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(bParam3, bParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_48(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_658(sParam1))
			{
				return 1;
			}
		}
		else if (func_659(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_379(bool bParam0, int iParam1)
{
	char cVar0[32];

	if (iParam1 == 1)
	{
		if (bParam0->f_16 == 8 && func_355())
		{
			switch (bParam0->f_1)
			{
				case 1:
					return "WHATS_GOING_ON";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
		else
		{
			switch (bParam0->f_1)
			{
				case 1:
					return "GENERIC_SHOCKED_DISBELIEF";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
	}
	if (func_132(bParam0, 16))
	{
		StringCopy(&cVar0, "GET_LOST", 32);
	}
	else
	{
		switch (bParam0->f_16)
		{
			case -1:
			case default:
				StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
				break;
			case 1:
				StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
				break;
			case 2:
				StringCopy(&cVar0, "PLEAD_HOGTIED", 32);
				break;
			case 3:
				switch (bParam0->f_1)
				{
					case 1:
						StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
						break;
					case 2:
					default:
						StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
						break;
				}
				break;
			case 4:
				StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
				break;
			case 6:
				StringCopy(&cVar0, "PLAYER_AIMING_NOBODY", 32);
				break;
			case 5:
				StringCopy(&cVar0, "GUN", 32);
				break;
			case 8:
				switch (bParam0->f_1)
				{
					case 1:
					case default:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
								break;
							case 1:
								StringCopy(&cVar0, "STOP_THAT", 32);
								break;
						}
						break;
					case 2:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								StringCopy(&cVar0, "CUT_THAT_OUT", 32);
								break;
							case 1:
								StringCopy(&cVar0, "SHAME_ON_YOU", 32);
								break;
							case 2:
								StringCopy(&cVar0, "GENERIC_ANTISOCIAL_MALE_EVENT_COMMENT", 32);
								break;
						}
						break;
					case 3:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
						{
							case 0:
								StringCopy(&cVar0, "FINAL_WARNING", 32);
								break;
							case 1:
								StringCopy(&cVar0, "GUARD_FINAL_WARNING", 32);
								break;
							case 2:
								StringCopy(&cVar0, "WARNED_ALREADY", 32);
								break;
							case 3:
								StringCopy(&cVar0, "GUARD_WARNED_ALREADY", 32);
								break;
							case 4:
								StringCopy(&cVar0, "GUARD_WARNING", 32);
								break;
						}
						break;
				}
				break;
			case 7:
				switch (bParam0->f_1)
				{
					case 1:
					case default:
						StringCopy(&cVar0, "STOP_THAT", 32);
						break;
					case 2:
						StringCopy(&cVar0, "CUT_THAT_OUT", 32);
						break;
					case 3:
						StringCopy(&cVar0, "CHALLENGE_THREATEN", 32);
						break;
				}
				break;
		}
	}
	return func_660(cVar0);
}

bool func_380(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
	{
		return true;
	}
	return false;
}

bool func_381(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_357(bVar0, bParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_661(bVar0, 0)))
		{
			if (func_662(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_382(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(bParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

float func_383(bool bParam0)
{
	switch (bParam0->f_16)
	{
		case 1:
		case 2:
			return 5f;
		case 7:
			return 7.5f;
		default:
			break;
	}
	return 1.5f;
}

bool func_384(var uParam0, float fParam1)
{
	if (!func_655(uParam0))
	{
		return false;
	}
	if (func_374(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_385(bool bParam0, int* iParam1, var uParam2)
{
	func_663(bParam0, iParam1, uParam2, 1, 1);
	func_107(uParam2, 0, 1, 1, 1);
	if (DECORATOR::DECOR_EXIST_ON(*bParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_REMOVE(*bParam0, "bScriptedILO");
	}
	bParam0->f_14 = 0;
	bParam0->f_15 = -1;
}

int func_386()
{
	bool bVar0;

	switch (iLocal_515)
	{
		case 0:
			if (!func_19(8388608) && iLocal_98 == 4)
			{
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-1409.838f, -237.0576f, 109.6466f, 0f, 0f, 0f, 89.62221f, 97.5808f, 84.20332f, "Appleseed - volTrigger");
				CAM::_0x1B3C2D961F5FC0E1("script@Cinematics@EventAreas@Applessed");
				iLocal_515 = 7;
			}
			else
			{
				iLocal_515 = 15;
			}
			break;
		case 7:
			if (CAM::_0xAA235E2F2C09E952("script@Cinematics@EventAreas@Applessed") && CAM::_0xDD0B7C5AE58F721D("script@Cinematics@EventAreas@Applessed"))
			{
				if (func_213(Global_35, iLocal_75[4], 1, 0))
				{
					if (!func_19(-2147483648))
					{
						func_664("WNT_CAM_HELP", 10000, 0, 0, 0, 1);
						func_14(-2147483648);
					}
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
					if (func_665(&(Local_1529.f_32), "INPUT_VEH_CIN_CAM", 0f, 0f, 0f, 0, joaat("INPUT_FOCUS_CAM"), 1097859072 /* Float: 15f */, 0, 0, 1, 0, 1, iLocal_75[4], 0, 0, 1, 1, joaat("SHORT_TIMED_EVENT"), 0))
					{
						bVar0 = true;
					}
				}
				else if (func_19(-2147483648))
				{
					func_126(-2147483648);
				}
				if (bVar0)
				{
					func_301(&(Local_1529.f_32), 1, 1);
					CAM::_0xBC016635D6A73B31("script@Cinematics@EventAreas@Applessed", "ArealShot", 5);
					iLocal_1680 = CAM::_0x465F04F68AD38197("script@Cinematics@EventAreas@Applessed", "ArealShot", 5);
					func_48(&(vLocal_490[3 /*3*/]));
					iLocal_515 = 1;
				}
			}
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
			}
			else
			{
				CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(true);
				func_666();
				if (func_384(&(vLocal_490[3 /*3*/]), (BUILTIN::TO_FLOAT(iLocal_1680) / 1000f)))
				{
					func_264(&(vLocal_490[3 /*3*/]));
					func_667(&Local_1529);
					func_14(8388608);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), true);
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_CHANGE_SHOT"), true);
					iLocal_515 = 15;
				}
			}
			return 0;
			default:
				break;
	}
}

int func_387(int iParam0)
{
	return 0;
}

int func_388(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, true))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_NEG")))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (DECORATOR::DECOR_EXIST_ON(iVar1, "interactNeg"))
				{
					iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "interactNeg");
				}
				iVar2++;
				*uParam0++;
				DECORATOR::DECOR_SET_INT(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 330, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_389(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_390(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	iVar0 = iParam1 * 4;
	iVar1 = iParam1 * 2;
	iVar2 = iParam1 * 2;
	if ((18 + iVar0) >= Local_526.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	bVar3 = func_63(func_325(9, 0, iVar1));
	bVar4 = func_63(func_325(9, 1, iVar1));
	if (iLocal_519[iParam1] < 11)
	{
		func_668(&iVar1, &iVar0, &bVar3, &bVar4, iParam1);
		func_669(iParam1, &bVar3);
		func_670(&bVar3, &bVar4, iParam1);
	}
	switch (iLocal_519[iParam1])
	{
		case 0:
			if ((ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[(16 + iVar0) /*12*/].f_8) && ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[(17 + iVar0) /*12*/].f_8)) && ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[(18 + iVar0) /*12*/].f_8))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(16 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(17 + iVar0) /*12*/].f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(18 + iVar0) /*12*/].f_8, true);
				iLocal_75[(12 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_526.f_690[(17 + iVar0) /*12*/], 0f, 0f, Local_526.f_690[(17 + iVar0) /*12*/].f_3, 0.613833f, 3.325524f, 5.714088f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(12 + iVar2)], Local_526.f_690[(17 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_75[(12 + iVar2)], 7);
				iLocal_75[(13 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(Local_526.f_690[(18 + iVar0) /*12*/], 0f, 0f, Local_526.f_690[(18 + iVar0) /*12*/].f_3, 1f, 7.3475f, 5f);
				PED::_0x7C00CFC48A782DC0(iLocal_75[(13 + iVar2)], Local_526.f_690[(18 + iVar0) /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iLocal_75[(13 + iVar2)], 7);
				func_47(func_589(9), &Local_526);
				iLocal_519[iParam1] = 1;
			}
			break;
		case 1:
			if (PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				iVar5 = func_671(9, iVar1);
				if (iVar5 == func_589(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(bVar3) && !ENTITY::IS_ENTITY_DEAD(bVar4))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar3, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar4, false, true);
						iLocal_519[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(bVar3) || ENTITY::IS_ENTITY_DEAD(bVar4))
			{
				iLocal_519[iParam1] = 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[(15 + iVar0) /*12*/].f_8))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_526.f_690[(15 + iVar0) /*12*/].f_8, func_478(iParam0), func_479(iParam0), true, false, true);
				func_674(&(Local_412[(9 + iParam1) /*7*/]), func_672(iParam0), func_673(iParam0));
				func_675(&(Local_412[(9 + iParam1) /*7*/]), bVar3, "PED1", 1);
				func_675(&(Local_412[(9 + iParam1) /*7*/]), bVar4, "PED2", 1);
				StringCopy(&(Local_412[(9 + iParam1) /*7*/].f_4), "bBreakInternalLoop", 24);
				func_676(&(Local_412[(9 + iParam1) /*7*/]), Local_526.f_690[(15 + iVar0) /*12*/].f_8, "SAW");
				func_676(&(Local_412[(9 + iParam1) /*7*/]), Local_526.f_690[(16 + iVar0) /*12*/].f_8, "LOG_01");
				func_676(&(Local_412[(9 + iParam1) /*7*/]), Local_526.f_690[(17 + iVar0) /*12*/].f_8, "LOG_03");
				func_676(&(Local_412[(9 + iParam1) /*7*/]), Local_526.f_690[(18 + iVar0) /*12*/].f_8, "LOG_02");
				iLocal_519[iParam1] = 3;
			}
			break;
		case 3:
			if (func_516(&(Local_412[(9 + iParam1) /*7*/])))
			{
				func_677(&(Local_412[(9 + iParam1) /*7*/]));
				iLocal_519[iParam1] = 4;
			}
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_DEAD(bVar3) && func_678(bVar3, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || (!ENTITY::IS_ENTITY_DEAD(bVar4) && func_678(bVar4, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)))
			{
				func_630(&(Local_412[(9 + iParam1) /*7*/]), "bBreakInternalLoop");
				iLocal_519[iParam1] = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(bVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_526.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, -1817629992))
				{
					func_109(iLocal_75[(13 + iVar2)]);
					iLocal_519[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(bVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, 545488006))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Wood_Tear", ENTITY::GET_ENTITY_COORDS(Local_526.f_690[(15 + iVar0) /*12*/].f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, -1817629992))
				{
					func_109(iLocal_75[(12 + iVar2)]);
					iLocal_519[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(bVar3) && ENTITY::HAS_ANIM_EVENT_FIRED(bVar3, -1202392137))
			{
				iLocal_519[iParam1] = 8;
			}
			break;
		case 8:
			if (func_679(bVar4, Local_412[(9 + iParam1) /*7*/], "PED2", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(bVar4, 330, false);
				if (Local_357 != bVar4)
				{
					func_680(9, 1, iVar1, 0);
				}
				iLocal_519[iParam1] = 9;
			}
			break;
		case 9:
			if (func_679(bVar3, Local_412[(9 + iParam1) /*7*/], "PED1", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(bVar3, 330, false);
				if (Local_357 != bVar3)
				{
					func_680(9, 0, iVar1, 0);
				}
				iLocal_519[iParam1] = 10;
			}
			break;
		case 10:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_412[(9 + iParam1) /*7*/]) || func_359(&(Local_412[(9 + iParam1) /*7*/])))
			{
				func_215(&(Local_412[(9 + iParam1) /*7*/]));
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(16 + iVar0) /*12*/].f_8, 500f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(17 + iVar0) /*12*/].f_8, 750f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_526.f_690[(18 + iVar0) /*12*/].f_8, 1000f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				iLocal_519[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_391()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;

	if (iLocal_523 > 0)
	{
		func_681();
	}
	switch (iLocal_523)
	{
		case 0:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("EA_WORLD_HUMAN_TREE_CHOP_NEW"), 262148, func_448(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = func_682(iVar0);
				iVar2 = (810 + iVar0);
				if (!func_262(iVar2, 0))
				{
					func_62(iVar2, 1, 1);
				}
				else
				{
					bVar3 = func_63(iVar2);
					if ((!ENTITY::IS_ENTITY_DEAD(bVar3) && func_250(bVar3, 0, 1)) && !func_115(func_683(iVar0)))
					{
						func_257(bVar3, func_372(Local_1529.f_136, 4), 0);
						if (func_164(64))
						{
							if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(func_426(iVar1), func_684(), 4f, false) && !func_419(iVar1))
							{
								vVar4 = { func_426(iVar1) };
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar3, false, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
								if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_402[iVar1]))
								{
									TASK::TASK_USE_SCENARIO_POINT(0, iLocal_402[iVar1], 0, 0, false, true, 0, false, -1f, false);
								}
								else
								{
									TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar4, 5f, 0, false, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
								TASK::_TASK_PERFORM_SEQUENCE_2(bVar3, iLocal_193, 0f, 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
								PED::SET_PED_CONFIG_FLAG(bVar3, 146, false);
							}
							else
							{
								func_75(iVar2, 1);
								PED::SET_PED_CONFIG_FLAG(bVar3, 146, false);
							}
						}
						else
						{
							func_75(iVar2, 1);
							PED::SET_PED_CONFIG_FLAG(bVar3, 146, false);
						}
						func_35(func_683(iVar0));
					}
					iVar0++;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_685(func_683(iVar0));
						iVar0++;
					}
					iLocal_523 = 2;
					Jump @719; //curOff = 426
					func_686();
					func_136();
					iVar0 = (iLocal_203 % 4);
					iVar1 = func_682(iVar0);
					if (!func_455(iVar1) && !func_115(func_687(iVar0)))
					{
						func_688(iVar0);
						iVar2 = (810 + iVar0);
						if (!func_262(iVar2, 0))
						{
							func_62(iVar2, 1, 1);
						}
						bVar3 = func_63(iVar2);
						func_689(&bVar3);
						func_690(iVar0);
						func_691(&bVar3, iVar0);
						if (func_250(bVar3, 0, 1))
						{
							if (!func_19(4096) && func_692(&bVar3, &(Local_1948[iVar0 /*5*/]), &(uLocal_1974[iVar0]), iVar0))
							{
								func_693(&bVar3, iVar0);
								iLocal_523 = 3;
								return 0;
							}
						}
					}
					if ((((iLocal_203 % 10) == 1 && !func_164(64)) && !func_19(4096)) && !func_19(512))
					{
						func_694();
						iLocal_523 = 1;
						return 0;
					}
					Jump @719; //curOff = 664
					if ((iLocal_203 % 10) == 1 && func_164(64))
					{
						func_694();
						iLocal_523 = 2;
					}
					Jump @719; //curOff = 696
					func_48(&(vLocal_490[0 /*3*/]));
					iLocal_523 = 2;
				}
				return 0;
			}
			default:
				break;
	}
}

void func_392()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (810 + iVar0);
		bVar3 = func_63(iVar2);
		iVar1 = func_682(iVar0);
		if (((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iVar1]) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iVar1]) == 10) && (ENTITY::IS_ENTITY_DEAD(bVar3) || !PED::IS_PED_USING_ANY_SCENARIO(bVar3))) && !func_419(iVar1))
		{
			func_695(iVar1);
			func_463(iVar1, 0);
			if (!func_19(64) || iVar1 != 0)
			{
				func_263(iVar2, 0, 1, 0, 0);
			}
			func_696();
		}
		else
		{
			iVar0++;
		}
	}
}

void func_393(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_648(&(Local_251[iParam0 /*52*/][0 /*17*/]), func_647(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_648(&(Local_251[iParam0 /*52*/][1 /*17*/]), func_647(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_648(&(Local_251[iParam0 /*52*/][2 /*17*/]), func_647(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
}

void func_394(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_76(&(Local_208[iParam0 /*21*/]), 0);
	func_697(iParam0, 0);
	if (!bParam2)
	{
		func_50(268435456);
	}
	if (bParam1)
	{
		iLocal_356 = -1;
	}
}

void func_395(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (!func_51(67108864))
	{
		return;
	}
	if (func_68(536870912))
	{
		if (DECORATOR::DECOR_EXIST_ON(*bParam0, "bScriptedILO"))
		{
			DECORATOR::DECOR_REMOVE(*bParam0, "bScriptedILO");
		}
		return;
	}
	iVar0 = func_645(1, 0, 0);
	if (func_51(134217728))
	{
		iVar0 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		if (func_19(4096))
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 49, true);
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
			}
		}
		else if (PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
		}
		PED::SET_PED_RESET_FLAG(*bParam0, 49, true);
	}
	if (iLocal_98 == 1 && !func_5(Local_1529.f_136, 128))
	{
		fLocal_207 = 8f;
	}
	iVar1 = 1;
	if (!DECORATOR::DECOR_EXIST_ON(*bParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_SET_BOOL(*bParam0, "bScriptedILO", true);
	}
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || func_698()) || func_699()) || func_700())
	{
		func_48(&(vLocal_490[7 /*3*/]));
	}
	if (func_655(&(vLocal_490[7 /*3*/])) && !func_384(&(vLocal_490[7 /*3*/]), 0.25f))
	{
		func_652(&(Local_251[0 /*52*/]));
	}
	iVar2 = func_646(bParam0, &(Local_208[0 /*21*/]), fLocal_207, &(Local_251[0 /*52*/]), &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iLocal_356 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_356 = iVar2;
	}
	if (!func_51(-2147483648))
	{
		if (!func_51(268435456))
		{
			if (func_252(-3.5f, 1, 0, 0))
			{
				if (iLocal_356 == 1 && !func_51(536870912))
				{
					func_114(*bParam0, Global_35, func_701(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_58(1048576);
				}
				func_394(0, 1, 0);
				func_58(268435456);
			}
		}
		else
		{
			switch (iLocal_356)
			{
				case 0:
					func_378(&(Local_1529.f_35), "LCMP_GOODBYE", Global_35, *bParam0, 0, 0, 1, 1);
					func_58(1073741824 /* Float: 2f */);
					func_394(0, 1, 0);
					break;
				case 1:
					if (func_51(536870912))
					{
						func_50(536870912);
						func_378(&(Local_1529.f_35), "LCMP_QUIT", Global_35, *bParam0, 0, 0, 1, 1);
						func_58(64);
						func_10(Local_1529.f_136, 262144);
						func_15(Local_1529.f_136, 256);
						func_394(0, 1, 0);
					}
					else
					{
						sVar3 = func_702();
						func_114(Global_35, *bParam0, sVar3, 0, -1082130432 /* Float: -1f */, MISC::GET_RANDOM_INT_IN_RANGE(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_394(0, 0, 0);
					}
					break;
			}
		}
	}
}

void func_396(bool bParam0)
{
	switch (iLocal_518)
	{
		case 0:
			if (iLocal_98 == 1 || ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[12 /*12*/].f_8))
			{
				if (func_164(64))
				{
					iLocal_518 = 2;
				}
				else
				{
					iLocal_518 = 1;
				}
			}
			break;
		case 1:
			if (func_164(64))
			{
				if (iLocal_98 != 1)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Long", ENTITY::GET_ENTITY_COORDS(Local_526.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_518 = 2;
			}
			break;
		case 2:
			if (!func_164(64))
			{
				if (iLocal_98 == 1)
				{
					func_378(&(Local_1529.f_35), "LCMP_FMN_EOS", *bParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Harmonic", ENTITY::GET_ENTITY_COORDS(Local_526.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_518 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_397()
{
}

void func_398()
{
}

int func_399(bool bParam0)
{
	bool bVar0[9];
	var uVar10[9];
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	var uVar24;

	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_132(&Local_357, 1))
	{
		return 0;
	}
	if (func_19(32))
	{
		return 0;
	}
	if ((iLocal_203 % 5) != 0)
	{
		return 0;
	}
	if (!func_213(Global_35, Global_1392194[Local_1529.f_136 /*10*/].f_5, 1, 0))
	{
		return 0;
	}
	if (func_278(*bParam0, 1, 1) < (15f + 10f))
	{
		func_14(33554432);
		return 1;
	}
	if (func_19(4096))
	{
		return 0;
	}
	uVar24 = 30;
	func_290(&uVar24);
	iVar22 = func_703(&uVar10, &uVar24, 9, Global_36, 15f, 0, 1, 1, Local_526.f_13, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
	iVar21 = 0;
	while (iVar21 < iVar22)
	{
		if (iVar23 < 9)
		{
			bVar20 = uVar10[iVar21];
			if (!ENTITY::IS_ENTITY_DEAD(bVar20) && PED::IS_PED_HUMAN(bVar20))
			{
				if (!DECORATOR::DECOR_EXIST_ON(bVar20, "HAS_VOICE") || !DECORATOR::DECOR_GET_BOOL(bVar20, "HAS_VOICE"))
				{
					func_257(bVar20, func_372(Local_1529.f_136, -1), 0);
				}
				bVar0[iVar23] = bVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (func_704(&Local_1911, &bVar0, &uLocal_1946, 1, func_19(2)))
	{
		func_199(&(Local_1911.f_34), 1);
		func_14(2);
		func_14(33554432);
		return 1;
	}
	return 0;
}

void func_400()
{
}

void func_401()
{
	if (func_705() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (func_12(Local_1529.f_136))
		{
			func_14(128);
		}
	}
}

void func_402()
{
	if (!func_5(Local_1529.f_136, 4))
	{
		if (func_51(65536))
		{
			func_42(Local_1529.f_136, 4);
		}
	}
}

void func_403(var uParam0)
{
}

char* func_404()
{
	return "LOG_BLIP_FM";
}

void func_405(bool bParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	int iVar0;

	bParam3 = bParam3;
	if (*bParam4)
	{
		if (func_213(Global_35, Global_1392194[uParam2->f_136 /*10*/].f_6, 1, 0))
		{
			*bParam4 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				if (bParam5)
				{
					iVar0 = 580546400;
				}
				else
				{
					iVar0 = 0;
				}
				func_345(bParam0, iParam1, -89429847, iVar0, 0, sParam6);
			}
		}
	}
}

void func_406()
{
	if (func_19(64))
	{
		OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_706(), 10f);
	}
}

bool func_407(bool bParam0, var uParam1)
{
	func_707();
	func_708();
	return false;
}

int func_408(bool bParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	bool bVar6;

	switch (iLocal_516)
	{
		case 0:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			func_96(&(uLocal_1866[0]));
			func_675(&(Local_412[0 /*7*/]), *bParam0, "FOREMAN", 1);
			func_676(&(Local_412[0 /*7*/]), Local_526.f_690[3 /*12*/].f_8, "PEN");
			func_676(&(Local_412[0 /*7*/]), Local_526.f_690[4 /*12*/].f_8, "BOOK");
			func_709(&(Local_412[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT");
			func_628(&(Local_412[0 /*7*/]), &vVar0, &vVar3);
			func_676(&(Local_412[0 /*7*/]), Local_526.f_690[25 /*12*/].f_8, "p_chair04x");
			if (func_19(64) || func_51(2097152))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_526.f_690[4 /*12*/].f_8, func_710(), func_711(), 0.3f, true, true, false, 0f, 0);
				func_712(&Local_156);
				Local_156.f_1 = *bParam0;
				Local_156.f_8 = { func_713() };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 2f;
				func_143(&(Local_156.f_23), 128);
				func_714(&Local_156, 129);
				iLocal_516 = 1;
			}
			else
			{
				func_394(0, 1, 1);
				func_677(&(Local_412[0 /*7*/]));
				iLocal_516 = 4;
			}
			break;
		case 1:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_715(), 5f);
			if (func_714(&Local_156, 129))
			{
				func_712(&Local_156);
				Local_156.f_1 = *bParam0;
				Local_156.f_8 = { func_716(&(Local_412[0 /*7*/]), "FOREMAN", "PB_L_ENTER") };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 0.25f;
				Local_156.f_17 = 0.2f;
				func_143(&(Local_156.f_23), 1152);
				func_714(&Local_156, 129);
				iLocal_516 = 2;
			}
			break;
		case 2:
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_715(), 5f);
			if (func_714(&Local_156, 129))
			{
				iLocal_516 = 3;
			}
			break;
		case 3:
			func_14(1);
			func_677(&(Local_412[0 /*7*/]));
			iLocal_516 = 4;
			break;
		case 4:
			if (func_19(33554432))
			{
				func_69(67108864);
				if (func_19(2))
				{
					iLocal_516 = 6;
				}
				else
				{
					iLocal_516 = 7;
				}
			}
			break;
		case 6:
			if (!func_717(-1f))
			{
				func_718("LOG_OBJ01", 1);
				func_345(*bParam0, &(uLocal_1866[0]), -89429847, 580546400, 0, func_404());
				iLocal_516 = 7;
			}
			break;
		case 7:
			if (func_719(bParam0, 0, 0))
			{
				func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				func_201();
				func_721(bParam0, 0, 0, 1, 0, 0, 0, 0);
				func_14(4096);
				func_630(&(Local_412[0 /*7*/]), "bBreakInternalLoop");
				func_326(&(Local_412[0 /*7*/]), Local_526.f_690[4 /*12*/].f_8, "BOOK");
				ENTITY::PLAY_ENTITY_ANIM(Local_526.f_690[4 /*12*/].f_8, func_710(), func_711(), 0.3f, true, true, false, 0f, 0);
				if (func_19(64))
				{
					if (func_9(Local_1529.f_136, 64))
					{
						func_378(&(Local_1529.f_35), "LCMP_IG_ACK_ACP", *bParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_378(&(Local_1529.f_35), "LCMP_IG_ACK_ACN", *bParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (func_9(Local_1529.f_136, 2))
				{
					func_378(&(Local_1529.f_35), "LCMP_IG_ACK_2", *bParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_378(&(Local_1529.f_35), "LCMP_IG_S2ACK", *bParam0, Global_35, 0, 0, 1, 1);
					func_10(Local_1529.f_136, 2);
				}
				func_69(65536);
				iLocal_516 = 8;
			}
			break;
		case 8:
			func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			func_721(bParam0, 0, 0, 1, 0, 0, 0, 0);
			if (func_679(*bParam0, Local_412[0 /*7*/], "FOREMAN", 0, 0, 1, 0) && func_252(-3.5f, 1, 0, 0))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*bParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2f, -2f, 2113536, 0f, false, false, -1f, 0, 524297, -1f);
				func_378(&(Local_1529.f_35), "LCMP_IG_S2BFM", *bParam0, Global_35, 0, 0, 1, 1);
				func_48(&(vLocal_490[3 /*3*/]));
				func_394(0, 1, 0);
				func_722(1, 0);
				iLocal_516 = 9;
			}
			if (!func_719(bParam0, 0, 0))
			{
				func_394(0, 1, 0);
				func_722(0, 0);
				func_723(0, 0, 1);
				iLocal_516 = 13;
			}
			break;
		case 9:
			func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			if (!TASK::GET_IS_TASK_ACTIVE(*bParam0, 3))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*bParam0, Global_35, -1, -1f, -1f, -1f);
			}
			if (func_655(&(vLocal_490[3 /*3*/])) && func_724(&(vLocal_490[3 /*3*/])) > 30000)
			{
				iLocal_516 = 10;
			}
			func_721(bParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_252(0, 1, 0, 0))
			{
				if (!func_51(268435456))
				{
					func_722(1, 1);
					func_394(0, 1, 0);
					func_725(0);
					func_58(268435456);
				}
				switch (iLocal_356)
				{
					case 0:
						func_394(0, 1, 0);
						func_722(0, 0);
						func_723(0, 0, 1);
						func_14(2048);
						func_10(Local_1529.f_136, 16384);
						func_667(&Local_1529);
						func_712(&Local_156);
						Local_156.f_8 = { -1400.12f, -207.92f, 101.88f };
						Local_156.f_14 = { func_726() };
						Local_156.f_1 = Global_35;
						Local_156.f_17 = 0.2f;
						Local_156.f_18 = 0.2f;
						Local_156.f_19 = 20.6f;
						Local_156.f_25 = Local_412[5 /*7*/];
						StringCopy(&(Local_156.f_30), "ARTHUR", 24);
						StringCopy(&(Local_156.f_26), func_471(5), 32);
						func_143(&(Local_156.f_23), 26624);
						func_43(&Local_1529, 65536);
						func_714(&Local_156, 129);
						iLocal_516 = 11;
						break;
					case 1:
						func_394(0, 1, 1);
						func_722(0, 0);
						func_126(2048);
						iLocal_516 = 13;
						break;
				}
			}
			if (!func_719(bParam0, 0, 0))
			{
				func_394(0, 1, 0);
				func_722(0, 0);
				func_723(0, 0, 1);
				func_126(2048);
				iLocal_516 = 13;
			}
			break;
		case 10:
			func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			func_721(bParam0, 0, 0, 1, 0, 0, 0, 1);
			func_264(&(vLocal_490[3 /*3*/]));
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*bParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			func_378(&(Local_1529.f_35), "LCMP_IG_S2WS", *bParam0, Global_35, 0, 0, 1, 1);
			iLocal_516 = 9;
			break;
		case 11:
			if (func_714(&Local_156, 129))
			{
				func_378(&(Local_1529.f_35), "LCMP_IG_S2AL", Global_35, *bParam0, 0, 0, 1, 1);
				func_675(&(Local_412[5 /*7*/]), Global_35, "ARTHUR", 1);
				func_676(&(Local_412[5 /*7*/]), Local_526.f_690[6 /*12*/].f_8, "MONEY");
				func_677(&(Local_412[5 /*7*/]));
				iLocal_516 = 12;
			}
			break;
		case 12:
			func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			func_721(bParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					func_728(func_727(), 0, 0, 1, 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("CONTINUE")))
				{
					func_96(&(uLocal_1866[0]));
					func_378(&(Local_1529.f_35), "LCMP_IG_S2VG", *bParam0, Global_35, 0, 0, 1, 1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*bParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
					func_345(iLocal_1869[0], &(uLocal_1866[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
					if (func_9(1, 2))
					{
						func_43(&Local_1529, 128);
					}
					iLocal_516 = 15;
				}
			}
			break;
		case 13:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			func_721(bParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_252(-3.5f, 1, *bParam0, 1))
			{
				func_96(&(uLocal_1866[0]));
				if (func_213(Global_35, iLocal_75[0], 1, 0))
				{
					if (func_348(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED") && func_348(Global_35, 1, 1, 0) == joaat("WEAPON_UNARMED"))
					{
						TASK::TASK_PLAY_ANIM(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					func_378(&(Local_1529.f_35), "LCMP_IG_S2OT", Global_35, *bParam0, 0, 0, 1, 1);
				}
				iLocal_516 = 14;
			}
			break;
		case 14:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			func_721(bParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!func_380("LCMP_IG_S2OT"))
			{
				func_378(&(Local_1529.f_35), "LCMP_IG_S2MNT", *bParam0, Global_35, 0, 0, 1, 1);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*bParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				iLocal_516 = 15;
			}
			break;
		case 15:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			bVar6 = true;
			if (func_19(2048) && !func_359(&(Local_412[5 /*7*/])))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					func_80(&Local_1529, 65536);
				}
				func_721(bParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!TASK::GET_IS_TASK_ACTIVE(*bParam0, 3) && func_252(-3.5f, 1, *bParam0, 1))
				{
					func_126(4096);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					func_394(0, 1, 0);
					func_126(4096);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, -1400.86f, -205.41f, 102.34f, 2f, -1, false, false, false, false);
					func_729(bParam0);
					func_329(67108864);
					iLocal_516 = 17;
				}
			}
			break;
		case 17:
			if (func_262(Local_1529.f_138, 0))
			{
				if (func_730(Local_1529.f_138, &Local_1529, 60000, 1))
				{
					func_76(&(Local_208[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_409(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar5;
	vector3 vVar6[24];
	bool bVar9;
	vector3 vVar10[24];

	if (func_132(&Local_357, 1) && Local_357 == *bParam0)
	{
		if (iLocal_516 < 17)
		{
			func_731();
			iLocal_516 = 17;
		}
	}
	func_708();
	switch (iLocal_516)
	{
		case 0:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			if (func_9(Local_1529.f_136, 131072))
			{
				iVar0 = iLocal_517;
				iLocal_517 = iVar0 + 1;
				func_15(Local_1529.f_136, 131072);
			}
			else
			{
				func_10(Local_1529.f_136, 131072);
			}
			if (func_9(Local_1529.f_136, 16384))
			{
				func_345(iLocal_1869[0], &(uLocal_1866[1]), joaat("BLIP_STYLE_PICKUP"), 580546400, 0, "LOG_BLIP_WAG");
			}
			if (func_323())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(func_732(), 262209, func_733(), func_734());
				iLocal_408 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_735(), func_732(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(func_736(), 262209, func_733(), func_737());
				iLocal_408 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_738(), func_736(), 1f, 0, false);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_712(&Local_156);
				Local_156.f_8 = { func_713() };
				Local_156.f_1 = *bParam0;
				Local_156.f_21 = 1f;
				func_143(&(Local_156.f_23), 128);
				func_714(&Local_156, 129);
				iLocal_516 = 1;
			}
			else
			{
				func_393(0);
				func_394(0, 1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*bParam0, false, true);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_408))
				{
					TASK::TASK_USE_SCENARIO_POINT(*bParam0, iLocal_408, func_741(func_323(), func_739(), func_740()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*bParam0, func_742(func_323(), func_735(), func_738()), 1.5f, -1, false, false, false, false);
				}
				iLocal_516 = 4;
			}
			break;
		case 1:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			if (func_714(&Local_156, 129))
			{
				func_393(0);
				func_394(0, 1, 1);
				func_14(1);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_408))
				{
					TASK::TASK_USE_SCENARIO_POINT(*bParam0, iLocal_408, func_741(func_323(), func_739(), func_740()), -1, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, func_742(func_323(), func_735(), func_738()), 1.5f, -1, false, false, false, false);
				}
				iLocal_516 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				iVar1 = func_4(1);
				if (iVar1 > 3 || (iVar1 == 3 && func_5(1, 128)))
				{
					func_42(Local_1529.f_136, 4096);
				}
				func_394(0, 1, 1);
				func_722(1, 0);
				if (func_19(2))
				{
					iLocal_516 = 6;
				}
				else
				{
					iLocal_516 = 7;
				}
			}
			break;
		case 6:
			if (!func_717(-1f))
			{
				func_96(&(uLocal_1866[0]));
				iLocal_516 = 7;
			}
			break;
		case 7:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			if (func_719(bParam0, 0, func_323()) && func_745(bParam0, func_743(), 10f, 0, func_744(), 1, -1243035987))
			{
				func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				func_14(4096);
				func_721(bParam0, 0, 0, 1, 0, 0, 0, !func_323());
				switch (iLocal_517)
				{
					case 2:
						StringCopy(&cVar2, "LCMP_IG_NIACT1", 24);
						break;
					case 3:
						StringCopy(&cVar2, "LCMP_IG_NIBA", 24);
						break;
					case 0:
						StringCopy(&cVar2, "LCMP_IG_NOG", 24);
						break;
					case 1:
						StringCopy(&cVar2, "LCMP_IG_NOTI", 24);
						break;
				}
				func_378(&(Local_1529.f_35), &cVar2, *bParam0, Global_35, 0, 0, 1, 1);
				iLocal_516 = 8;
			}
			break;
		case 8:
			func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			func_721(bParam0, 0, 0, 1, 0, 0, 0, !func_323());
			if (func_323())
			{
				func_394(0, 1, 1);
				func_722(0, 0);
				iLocal_516 = 5;
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(*bParam0) && func_252(-3.5f, 1, 0, 0)) && (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, joaat("BREAKOUT")) || TASK::_0x02EBBB3989B7E695(*bParam0)))
			{
				TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*bParam0, Global_35, 0, -1f, -1f, -1f);
				iLocal_516 = 2;
			}
			break;
		case 2:
			func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!PED::IS_PED_USING_ANY_SCENARIO(*bParam0))
			{
				if (iLocal_517 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iLocal_517)
				{
					case 2:
						StringCopy(&cVar6, "LCMP_IG_NIACTB", 24);
						break;
					case 3:
						StringCopy(&cVar6, "LCMP_IG_NICL", 24);
						break;
				}
				func_378(&(Local_1529.f_35), &cVar6, *bParam0, Global_35, 0, 0, 1, 1);
				TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_483(), func_746(0), Global_35, iVar5, 8f, -8f, 0, 0f, false, true, -1f, 0, 0, -1f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
				TASK::TASK_PERFORM_SEQUENCE(*bParam0, iLocal_193);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
				func_394(0, 1, 1);
				func_722(0, 0);
				iLocal_516 = 5;
			}
			break;
		case 5:
			func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			func_721(bParam0, 0, 0, 1, 0, 0, 0, !func_323());
			if (func_747(bParam0))
			{
				func_722(1, 0);
				func_394(0, 1, 1);
				func_723(0, 0, 1);
				func_48(&(vLocal_490[3 /*3*/]));
			}
			if (func_51(-2147483648))
			{
				switch (iLocal_356)
				{
					case 0:
						switch (iLocal_517)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NIACT2", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFM", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NOSEE", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NOAIN", 24);
								break;
						}
						func_378(&(Local_1529.f_35), &cVar10, Global_35, *bParam0, 0, 0, 1, 1);
						func_394(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iLocal_517)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
						}
						func_378(&(Local_1529.f_35), &cVar10, Global_35, *bParam0, 0, 0, 1, 1);
						func_394(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && func_222(&(vLocal_490[3 /*3*/]), 12.5f))
				{
					func_394(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					func_722(0, 0);
					if (!func_323())
					{
						TASK::CLEAR_PED_TASKS(*bParam0, true, false);
						TASK::_0x9C8F42A5D1859DC1(iLocal_75[0]);
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), 3f, -1, false, false, false, false);
					}
					func_126(4096);
					func_96(&(uLocal_1866[0]));
					func_48(&(vLocal_490[3 /*3*/]));
					iLocal_516 = 16;
				}
			}
			break;
		case 16:
			if (func_222(&(vLocal_490[3 /*3*/]), 60f))
			{
				if (func_323())
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				}
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				func_394(0, 1, 0);
				func_723(0, 0, 1);
				func_729(bParam0);
				iLocal_516 = 17;
			}
			break;
		case 17:
			if (!(func_132(&Local_357, 1) && Local_357 == *bParam0))
			{
				if (func_262(Local_1529.f_138, 0))
				{
					func_75(Local_1529.f_138, 1);
					func_76(&(Local_208[0 /*21*/]), 0);
				}
			}
			break;
	}
	return 0;
}

int func_410(bool bParam0)
{
	char cVar0[64];
	bool bVar8;
	vector3 vVar9[24];
	vector3 vVar12[24];

	func_708();
	switch (iLocal_516)
	{
		case 0:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			func_58(1073741824 /* Float: 2f */);
			if (!func_9(Local_1529.f_136, 131072))
			{
				func_10(Local_1529.f_136, 131072);
			}
			else
			{
				func_15(Local_1529.f_136, 131072);
			}
			if (func_323())
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(func_732(), 262209, func_733(), func_734());
				iLocal_408 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_735(), func_732(), 1f, 0, false);
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(func_736(), 262209, func_733(), func_737());
				iLocal_408 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_738(), func_736(), 1f, 0, false);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_712(&Local_156);
				Local_156.f_8 = { -1402.34f, -207.62f, 101.88f };
				Local_156.f_1 = *bParam0;
				Local_156.f_21 = 1f;
				func_143(&(Local_156.f_23), 128);
				func_714(&Local_156, 129);
				iLocal_516 = 1;
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*bParam0, false, true);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_408))
				{
					TASK::TASK_USE_SCENARIO_POINT(*bParam0, iLocal_408, func_741(func_323(), func_739(), func_740()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*bParam0, func_742(func_323(), func_735(), func_738()), 1.5f, -1, false, false, false, false);
				}
				if (func_323())
				{
				}
				iLocal_516 = 4;
			}
			break;
		case 1:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			if (func_714(&Local_156, 129))
			{
				func_14(1);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_408))
				{
					TASK::TASK_USE_SCENARIO_POINT(*bParam0, iLocal_408, func_741(func_323(), func_739(), func_740()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*bParam0, func_742(func_323(), func_735(), func_738()), 1.5f, -1, false, false, false, false);
				}
				iLocal_516 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				func_42(Local_1529.f_136, 4096);
				func_394(0, 1, 1);
				if (func_19(2))
				{
					iLocal_516 = 6;
				}
				else
				{
					iLocal_516 = 7;
				}
			}
			break;
		case 6:
			if (!func_717(-1f))
			{
				func_96(&(uLocal_1866[0]));
				iLocal_516 = 7;
			}
			break;
		case 7:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			if (func_719(bParam0, 1, func_323()))
			{
				if (func_745(bParam0, func_748(bParam0), 10f, 0, 0, 1, -1243035987))
				{
					TASK::CLEAR_PED_TASKS(*bParam0, true, false);
					func_14(4096);
					func_749(bParam0, 0, 0);
					func_10(Local_1529.f_136, 16777216);
					Local_104.f_40 = *bParam0;
					Local_104.f_43 = 4f;
					Local_104.f_41 = 4f;
					Local_104.f_39 = Global_1392194[Local_1529.f_136 /*10*/].f_6;
					if (func_323())
					{
						StringCopy(&cVar0, "LCMPF_IG1_ALT", 64);
					}
					else
					{
						StringCopy(&cVar0, "LCMPF_IG1", 64);
					}
					func_378(&(Local_1529.f_35), &cVar0, *bParam0, Global_35, 0, 0, 1, 1);
					iLocal_516 = 5;
				}
			}
			break;
		case 5:
			func_750(bParam0);
			func_721(bParam0, 0, 0, 1, 0, 0, 0, !func_323());
			if (func_747(bParam0))
			{
				func_394(0, 1, 1);
				func_751(0, 0);
				func_722(1, 0);
				func_48(&(vLocal_490[3 /*3*/]));
			}
			if (func_51(-2147483648))
			{
				switch (iLocal_356)
				{
					case 1:
						if (func_323())
						{
							StringCopy(&cVar9, "LCMP_ANGRRES2", 24);
						}
						else
						{
							StringCopy(&cVar9, "LCMP_ANGRRES1", 24);
						}
						func_378(&(Local_1529.f_35), &cVar9, Global_35, *bParam0, 0, 0, 1, 1);
						func_394(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && func_222(&(vLocal_490[3 /*3*/]), 12.5f))
				{
					func_394(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					func_722(0, 0);
					iLocal_516 = 8;
				}
			}
			break;
		case 8:
			func_750(bParam0);
			func_749(bParam0, 0, 0);
			if (func_252(-3.5f, 1, 0, 0))
			{
				if (func_323())
				{
					func_75(Local_1529.f_138, 1);
					func_76(&(Local_208[0 /*21*/]), 0);
					func_729(bParam0);
					StringCopy(&cVar12, "LCMPF_IG1_ALTR", 24);
					iLocal_516 = 17;
				}
				else
				{
					StringCopy(&cVar12, "LCMPF_IG1_R", 24);
					iLocal_516 = 16;
				}
				func_378(&(Local_1529.f_35), &cVar12, *bParam0, Global_35, 0, 0, 1, 1);
				func_126(4096);
				func_96(&(uLocal_1866[0]));
			}
			break;
		case 16:
			func_750(bParam0);
			if (func_222(&(vLocal_490[3 /*3*/]), 60f))
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
				func_75(Local_1529.f_138, 1);
				func_76(&(Local_208[0 /*21*/]), 0);
				TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				func_729(bParam0);
				iLocal_516 = 17;
			}
			break;
		case 17:
			break;
	}
	return 0;
}

int func_411(bool bParam0)
{
	bool bVar0;

	func_752();
	switch (iLocal_515)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_75[4]))
			{
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1398.107f, -213.5636f, 102.7725f, 0f, 0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (func_9(Local_1529.f_136, 1024))
			{
				if (func_753(bParam0))
				{
					func_722(0, 1);
					func_394(0, 1, 0);
					func_723(0, 0, 1);
					func_69(256);
					func_729(bParam0);
					func_215(&(Local_412[1 /*7*/]));
					func_472(&(Local_412[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
					POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
					TASK::CLEAR_PED_TASKS(*bParam0, true, false);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
					func_42(Local_1529.f_136, 4096);
					iLocal_515 = 15;
				}
			}
			else if (func_754() && func_755(bParam0))
			{
				func_69(67108864);
				func_394(0, 1, 0);
				func_722(1, 1);
				func_756(0);
				iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1399.521f, -209.5342f, 104.064f, 0f, 0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1399.238f, -220.5899f, 102.4817f, 0f, 0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				POPULATION::_0xB56D41A694E42E86(iLocal_75[1], 0, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[1], 0, 0, 0, -1, -1, 0);
				iLocal_515 = 1;
			}
			break;
		case 1:
			if (func_19(33554432))
			{
				if (func_9(1, 2))
				{
					func_42(0, 16);
				}
				if (func_19(2))
				{
					iLocal_515 = 6;
				}
				else
				{
					iLocal_515 = 2;
				}
			}
			break;
		case 6:
			if (!func_717(0))
			{
				func_718("LOG_OBJ01", 1);
				func_345(*bParam0, &(uLocal_1866[0]), -89429847, 580546400, 0, func_404());
				if (!func_9(Local_1529.f_136, 1024))
				{
					iLocal_515 = 2;
				}
				else if (func_753(bParam0))
				{
					iLocal_515 = 8;
				}
			}
			break;
		case 2:
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			if (func_757(0))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(*bParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[8 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_526.f_690[8 /*12*/].f_8));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[7 /*12*/].f_8))
					{
						OBJECT::DELETE_OBJECT(&(Local_526.f_690[7 /*12*/].f_8));
					}
				}
				if (((func_129(Global_35, 242628503) || func_129(Global_35, 501393341)) || func_129(Global_35, 1553520516)) || func_129(Global_35, 1920417248))
				{
					MAP::DISPLAY_RADAR(false);
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			break;
		case 4:
			func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_758();
			break;
		case 5:
			func_720(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_758();
			break;
		case 7:
			func_758();
			if (!func_262(Local_1529.f_138, 0))
			{
				func_62(Local_1529.f_138, 1, 1);
			}
			if (!func_19(4096))
			{
				func_126(512);
				func_201();
				func_14(4096);
				func_292(&Local_357, 4);
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_759(11, 2);
			if (func_300(Local_1529.f_32) && !func_760(101))
			{
				func_761(Local_1529.f_32, 0, 1);
			}
			if (bVar0)
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[1]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[1]);
				func_109(iLocal_75[1]);
				POPULATION::_0x74C2B3DC0B294102(iLocal_75[0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_75[0]);
			}
			break;
		case 9:
			if (func_762(&(Local_412[0 /*7*/]), "Internal_Loop"))
			{
				func_763(&(Local_412[0 /*7*/]), "Internal_Loop");
			}
			if (func_19(1073741824 /* Float: 2f */) && !func_764(11))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				func_43(&Local_1529, 65536);
				func_759(11, 2);
				if (func_9(Local_1529.f_136, 4))
				{
					func_765(11, 128);
					iLocal_515 = 11;
				}
				else
				{
					func_378(&(Local_1529.f_35), "LOG_LCMP_INT_b0", Global_35, *bParam0, 0, 0, 1, 0);
					iLocal_515 = 13;
				}
			}
			break;
		case 10:
			if (func_714(&Local_156, 129))
			{
				iLocal_515 = 11;
			}
			break;
		case 11:
			break;
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[0 /*12*/].f_8))
			{
				if (!func_68(256))
				{
					func_675(&(Local_412[1 /*7*/]), Global_35, "arthur", 1);
					func_676(&(Local_412[1 /*7*/]), Local_526.f_690[3 /*12*/].f_8, "p_knife02x");
					func_676(&(Local_412[1 /*7*/]), Local_526.f_690[4 /*12*/].f_8, "p_woodWittle01x");
					func_676(&(Local_412[1 /*7*/]), Local_526.f_690[6 /*12*/].f_8, "p_foldedBill01x");
					func_675(&(Local_412[1 /*7*/]), *bParam0, "U_M_M_BIVFOREMAN_01", 1);
					func_676(&(Local_412[1 /*7*/]), Local_526.f_690[0 /*12*/].f_8, "ITEM");
					func_629(&(Local_412[1 /*7*/]), "pbl_AgreeToSell", 1);
				}
				else
				{
					func_675(&(Local_412[1 /*7*/]), Global_35, "player", 1);
					func_676(&(Local_412[1 /*7*/]), Local_526.f_690[6 /*12*/].f_8, "MONEY");
					func_676(&(Local_412[1 /*7*/]), Local_526.f_690[0 /*12*/].f_8, "Item");
					func_675(&(Local_412[1 /*7*/]), *bParam0, "male", 1);
				}
				iLocal_515 = 13;
			}
			break;
		case 13:
			func_96(&(uLocal_1866[0]));
			if (func_9(Local_1529.f_136, 4))
			{
				if (!func_19(4096))
				{
					func_378(&(Local_1529.f_35), "LOG_LCMP_INT_a2", *bParam0, Global_35, 0, 0, 1, 1);
				}
				func_677(&(Local_412[1 /*7*/]));
				func_215(&(Local_412[0 /*7*/]));
				if (!func_68(256))
				{
					func_630(&(Local_412[1 /*7*/]), "Internal_Loop");
				}
				iLocal_515 = 14;
			}
			else if (!func_380("LOG_LCMP_INT_b0"))
			{
				func_629(&(Local_412[0 /*7*/]), "pbl_RefuseToSell", 1);
				func_630(&(Local_412[0 /*7*/]), "Internal_Loop");
				func_69(16384);
				iLocal_515 = 14;
			}
			break;
		case 14:
			if ((!ENTITY::IS_ENTITY_DEAD(*bParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, joaat("OBJECTEXCHANGE"))) && ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[0 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_526.f_690[0 /*12*/].f_8));
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) && ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[6 /*12*/].f_8))
				{
					OBJECT::DELETE_OBJECT(&(Local_526.f_690[6 /*12*/].f_8));
				}
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BREAKOUT")))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					func_80(&Local_1529, 65536);
				}
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
			}
			if (func_359(&(Local_412[0 /*7*/])) && (func_68(16384) || func_359(&(Local_412[1 /*7*/]))))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_80(&Local_1529, 65536);
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				func_43(&Local_1529, 128);
				func_303(11, 128);
				func_472(&(Local_412[1 /*7*/]), "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				func_126(2048);
				func_329(16384);
				func_766(11);
				func_69(256);
				func_126(536870912);
				func_126(4096);
				func_106(1);
				func_329(67108864);
				func_722(0, 1);
				func_394(0, 1, 0);
				func_723(0, 0, 1);
				func_767(11, 2);
				TASK::CLEAR_PED_TASKS(*bParam0, true, false);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*bParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
				func_729(bParam0);
				iLocal_515 = 15;
			}
			break;
		case 15:
			func_759(11, 1);
			if (func_19(4096))
			{
				func_126(4096);
			}
			break;
	}
	return 0;
}

void func_412(var uParam0, int iParam1)
{
	if ((iLocal_203 % 5) != 0)
	{
		return;
	}
}

int func_413()
{
	return 0;
}

int func_414()
{
	return 0;
}

bool func_415(bool bParam0)
{
	return false;
}

int func_416(bool bParam0)
{
	return 0;
}

void func_417()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	if (func_51(8192))
	{
		iVar1 = iLocal_1980;
		iVar2 = iLocal_1980 + 4;
		if (iVar2 >= iLocal_1910)
		{
			iVar2 = (iLocal_1910 - 1);
		}
		iLocal_1980 = iVar1;
		while (iLocal_1980 <= iVar2)
		{
			if (!func_155(iLocal_1894[iLocal_1980]))
			{
			}
			else
			{
				bVar0 = func_63(iLocal_1894[iLocal_1980]);
				if (!ENTITY::IS_ENTITY_DEAD(bVar0))
				{
					func_241(iLocal_1894[iLocal_1980], 0, 1, 0, 1, 1);
					func_242(bVar0, 1, 1);
					if (!func_129(bVar0, 518218985))
					{
						if (!func_19(32))
						{
							func_768(&iLocal_1980);
						}
						else
						{
							vVar3 = { func_769(iLocal_75[4], 100, 1, 0) };
							TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
							if (!func_240(vVar3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE((30f / 2f), 30f), 0, 40000f);
							}
							func_770(0, iLocal_1846[0], -1);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
							TASK::TASK_PERFORM_SEQUENCE(bVar0, iLocal_193);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
						}
					}
					if (!func_19(32))
					{
						iLocal_1894[iLocal_1980] = -1;
					}
				}
			}
			iLocal_1980++;
		}
		if (iLocal_1980 >= (iLocal_1910 - 1))
		{
			func_50(8192);
			if (!func_19(32))
			{
				iLocal_1910 = 0;
			}
		}
	}
}

bool func_418(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_115(1024);
		case 1:
			return func_115(2048);
		case 2:
			return func_115(4096);
		case 3:
			return func_115(8192);
		case 4:
			return func_115(16384);
		default:
			break;
	}
	return false;
}

bool func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_115(32768);
		case 1:
			return func_115(65536);
		case 2:
			return func_115(131072);
		case 3:
			return func_115(262144);
		case 4:
			return func_115(524288);
		default:
			break;
	}
	return false;
}

float func_420(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.592049f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.705277f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.592049f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.705277f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.705277f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.705277f;
				case 2:
					return 0.555339f;
				case 3:
					return 0.592049f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

float func_421(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.696462f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.792988f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.696462f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.792988f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.792988f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.792988f;
				case 2:
					return 0.674548f;
				case 3:
					return 0.696462f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

void func_422()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(iLocal_75[3], iVar1, 1);
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
			if (MISC::_GET_ITEM_TYPE(iVar3) == 9)
			{
				bVar4 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar3);
				if ((func_19(32) && !func_22(&Local_1529, 2)) && bVar4 == iLocal_1846[0])
				{
				}
				else
				{
					func_128(bVar4, 0, 0);
				}
			}
			iVar0++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

int func_423(int iParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = func_510(func_425(iParam0), 1);
	if (fVar0 <= 15f)
	{
		return 255;
	}
	iVar1 = BUILTIN::CEIL(((-4.25f * (fVar0 - 15f)) + 255f));
	return iVar1;
}

void func_424(int iParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < iLocal_1910)
	{
		if (!func_155(iLocal_1894[iVar1]))
		{
		}
		else
		{
			bVar0 = func_63(iLocal_1894[iVar1]);
			if (!ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				func_241(iLocal_1894[iVar1], 0, 1, 0, 1, 1);
				func_242(bVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

Vector3 func_425(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return -1387.583f, -272.6812f, 98.8f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1458.54f, -256.597f, 105.987f;
				case 1:
					return -1415.835f, -186.908f, 99.722f;
				case 2:
					return -1456.845f, -196.8082f, 104.6f;
				case 3:
					return -1468.877f, -228.5962f, 106.9087f;
				case 4:
					return -1419.583f, -199.3359f, 100.7483f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1387.583f, -272.6812f, 98.8f;
				case 1:
					return -1450.445f, -165.3257f, 106.4f;
				case 2:
					return -1472.47f, -253.4789f, 109.4271f;
				case 3:
					return -1424.774f, -283.7422f, 105.2652f;
				case 4:
					return -1424.774f, -283.7422f, 105.2652f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1402.2f, -292.7f, 102.7f;
				case 1:
					return -1514.524f, -243.7657f, 118.7613f;
				case 2:
					return -1453.848f, -127.2335f, 107.7073f;
				case 3:
					return -1502.6f, -203.7f, 111f;
				case 4:
					return -1402.2f, -292.7f, 102.7f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_426(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return -1402.82f, -270.8668f, 98.5505f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1446.31f, -249.5183f, 101.6165f;
				case 1:
					return -1421.7f, -190.4f, 99.7097f;
				case 2:
					return -1467.4f, -185.8f, 104.3577f;
				case 3:
					return -1454.5f, -226.7f, 102.8009f;
				case 4:
					return -1429.321f, -195.9762f, 100.5673f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1402.82f, -270.8668f, 98.5505f;
				case 1:
					return -1463.685f, -173.1668f, 106.0101f;
				case 2:
					return -1457.906f, -252.8943f, 104.7849f;
				case 3:
					return -1410.153f, -285.7408f, 100.6772f;
				case 4:
					return -1410.153f, -285.7408f, 100.6772f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.484f, -292.4594f, 101.7033f;
				case 1:
					return -1517.31f, -234.5498f, 115.9662f;
				case 2:
					return -1470f, -127f, 118f;
				case 3:
					return -1514.101f, -202.0088f, 110.2915f;
				case 4:
					return -1413.484f, -292.4594f, 101.7033f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_427(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

bool func_428(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (!func_213(Global_35, Global_1898092.f_26.f_5, 1, 0))
	{
		return true;
	}
	if (func_138(Global_1898092.f_26.f_2) && func_9(Global_1898092.f_26.f_2, 33554432))
	{
		return true;
	}
	return false;
}

bool func_429()
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

int func_430(int iParam0)
{
	if (!func_98(iParam0))
	{
		return -1;
	}
	return func_771(func_598(iParam0));
}

bool func_431(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_432(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_433(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

int func_434(int iParam0)
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

int func_435(int iParam0)
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

void func_436(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = (iParam1 - Global_40.f_9096[iParam0 /*12*/].f_3);
	*iParam2 = (iVar0 / 86400);
	iVar0 = (iVar0 - (*iParam2 * 86400));
	*iParam3 = (iVar0 / 3600);
	iVar0 = (iVar0 - *iParam3 * 3600);
	*uParam4 = (iVar0 / 60);
	iVar0 = (iVar0 - *uParam4 * 60);
	*uParam5 = iVar0;
}

bool func_437(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_438(int iParam0)
{
	if (!func_437(iParam0))
	{
		return false;
	}
	return func_140(iParam0, 33554432);
}

bool func_439(int iParam0)
{
	if (!func_437(iParam0))
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

bool func_440(int iParam0)
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

int func_441()
{
	return Global_1899515;
}

int func_442(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_443(int iParam0)
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

float func_444(int iParam0, vector3 vParam1)
{
	if (func_772(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

void func_445(int iParam0)
{
	if (!func_155(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/].f_1 = func_441();
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iParam0)))
	{
		PERSCHAR::_0x0B3A99AB6713AA52(func_167(iParam0));
	}
}

float func_446(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_447(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_773(vVar0, vVar3, 0f) };
	vVar9 = { func_774(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

int func_448()
{
	return joaat("A_M_M_BIVWORKER_01");
}

void func_449(var uParam0)
{
	func_475(uParam0, 4);
}

void func_450(var uParam0)
{
	func_475(uParam0, 64);
}

void func_451(var uParam0)
{
	func_475(uParam0, 8);
}

void func_452(var uParam0)
{
	func_475(uParam0, 128);
}

void func_453(var uParam0)
{
	func_475(uParam0, 1);
}

void func_454(int iParam0)
{
	func_458(&(Global_40.f_9096[Local_1529.f_136 /*12*/].f_6), func_7(iParam0));
}

bool func_455(int iParam0)
{
	return func_389(Global_40.f_9096[Local_1529.f_136 /*12*/].f_6, func_7(iParam0));
}

void func_456(int iParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_775(*iParam0) };
	fVar3 = func_776(*iParam0);
	iLocal_402[*iParam0] = TASK::CREATE_SCENARIO_POINT_HASH(func_684(), vVar0, fVar3, 0f, 0, 0);
	TASK::_0xE69FDA40AAC3EFC0(iLocal_402[*iParam0], 0);
	TASK::_0xA7479FB665361EDB(iLocal_402[*iParam0], 0);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_402[*iParam0], 19, true);
	iLocal_194[*iParam0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_194[*iParam0], 534496, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_194[*iParam0], 534496, 0, 0, -1, -1, 0);
	if (!func_777(&(iLocal_1681[*iParam0])))
	{
		iLocal_1681[*iParam0] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vVar0, 3f, 1, 36, 0);
	}
}

int func_457(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iParam0]))
	{
		iLocal_396[iParam0] = ENTITY::PIN_CLOSEST_MAP_ENTITY(func_778(iParam0), func_426(iParam0), 9);
		iLocal_390[iParam0] = OBJECT::GET_RAYFIRE_MAP_OBJECT(func_426(iParam0), 5f, func_779(iParam0));
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iParam0]))
	{
		iLocal_396[iParam0] = iLocal_396[iParam0];
		if (((!func_780(iParam0) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iParam0]) != 4) && !func_418(iParam0)) && !func_455(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iParam0], 4);
		}
		else if (func_19(64))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iParam0], 4);
		}
		else if (func_455(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iParam0], 9);
			func_781(iParam0);
			func_695(iParam0);
		}
		if (func_780(iParam0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_458(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_459(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_143(iParam0, 268435456);
	}
	else
	{
		func_199(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_143(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_199(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_143(iParam0, 536870912);
	}
	else
	{
		func_199(iParam0, 536870912);
	}
}

void func_460(int iParam0, float fParam1)
{
	iParam0->f_27 = fParam1;
}

void func_461(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_773(vVar0, vVar3, 0f) };
	vVar9 = { func_774(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_462(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_240(vParam0))
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
			if (func_782(vVar2, vParam0, 2f, 1))
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

void func_463(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_402[iParam0]))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_402[iParam0]);
		func_109(iLocal_194[iParam0]);
	}
	if (bParam1)
	{
		func_783(&(iLocal_1681[iParam0]), 1);
	}
}

void func_464(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam0->f_136 /*10*/].f_6))
	{
		VOLUME::_0x6D5F9E69BA1BE783(Global_1392194[iParam0->f_136 /*10*/].f_6);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam0->f_136 /*10*/].f_5))
	{
		VOLUME::_0x6D5F9E69BA1BE783(Global_1392194[iParam0->f_136 /*10*/].f_5);
	}
}

void func_465()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_784();
}

bool func_466(int iParam0)
{
	if (((func_467(iParam0, 1) && func_467(iParam0, 2)) && func_467(iParam0, 8)) && func_467(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_467(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_468()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_470(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_471(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (func_19(64))
			{
				return "PBL_ENTER";
			}
			else
			{
				return "";
			}
			break;
		case 3:
			if (iLocal_98 == 3)
			{
				return "PBL_MAIN";
			}
			else
			{
				return "PBL_MAIN";
			}
			break;
		case 0:
			if (func_19(64))
			{
				return "PB_L_ENTER";
			}
			else if (func_19(262144))
			{
				if ((iLocal_98 > 1 && func_9(1, 2)) && !func_9(Local_1529.f_136, 16384))
				{
					return "PBL_FOREMAN_STAGE2_TALK_INTRO";
				}
				else if (func_323())
				{
					return "PBL_ENTER_LOOPS";
				}
				else
				{
					return "PBL_ENTER_LOOPS";
				}
			}
			else
			{
				switch (iLocal_98)
				{
					case 1:
						if (func_19(16))
						{
							if (func_323())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "pbl_LeadoutToDecision";
						}
						break;
					case 2:
						if (func_19(16))
						{
							if (func_323())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "PBL_FOREMAN_STAGE2_TALK_INTRO";
						}
						break;
					case 3:
						if (!func_5(Local_1529.f_136, 64))
						{
							return "PBL_FOREMAN_ORDERS_LOOPS";
						}
						else
						{
							return "PB_ENTER_N_OFFER";
						}
						break;
				}
			}
			break;
		case 1:
			switch (iLocal_98)
			{
				case 1:
					return "pbl_AgreeToSell";
				case 3:
					return "PBL_ENTER";
				default:
					break;
			}
			break;
		case 4:
			return "PBL_MAIN";
		case 5:
			switch (iLocal_98)
			{
				case 1:
					return "pl_Callover_Look_Greet";
				default:
					break;
			}
			return "";
		case 6:
			return "PBL_HOOKUP";
		case 7:
			return "PBL_LIFT";
		case 8:
			return "PBL_LIFT";
		case 9:
			return "PBL_MAIN";
		case 10:
			return "PBL_MAIN";
	}
	return "";
}

void func_472(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	func_785(uParam0, sParam1, sParam2, iParam3);
	func_786(uParam0);
}

void func_473()
{
	func_18(5, &Local_1529, 5);
	if (func_19(64))
	{
		iLocal_517 = 2;
	}
	else if (func_22(&Local_1529, 256))
	{
		iLocal_517 = 2;
	}
	else if (func_355())
	{
		iLocal_517 = 0;
	}
	else
	{
		iLocal_517 = 2;
	}
}

Vector3 func_474()
{
	return -1400.29f, -207.08f, 100.64f;
}

void func_475(int iParam0, int iParam1)
{
	func_458(iParam0, iParam1);
}

Vector3 func_476()
{
	return -1392.202f, -270.137f, 96.51328f;
}

Vector3 func_477(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
		case default:
			switch (iParam0)
			{
				case 0:
				case default:
					return -1375.342f, -317.4534f, 100.8851f;
				case 1:
					return -1378.65f, -317.2836f, 100.986f;
				case 2:
					return -1381.161f, -321.5669f, 101.6531f;
				case 3:
					return -1392.285f, -331.5669f, 104.1264f;
				case 4:
					return -1401.689f, -338.5281f, 104.3909f;
				case 5:
					return -1411.78f, -346.1456f, 105.0925f;
				case 6:
					return -1420.203f, -351.6165f, 106.4329f;
				case 7:
					return -1426.14f, -354.4086f, 107.5771f;
				case 8:
					return -1437.277f, -359.1299f, 110.5854f;
				case 9:
					return -1441.922f, -360.4134f, 111.6311f;
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case default:
							return -1374.965f, -314.8146f, 100.6431f;
						case 1:
							return -1376.802f, -320.7141f, 101.263f;
						case 2:
							return -1380.237f, -322.0409f, 101.6534f;
						case 3:
							return -1393.833f, -333.3949f, 104.4031f;
						case 4:
							return -1402.033f, -337.2408f, 104.2141f;
						case 5:
							return -1414.284f, -346.9185f, 105.2396f;
						case 6:
							return -1419.447f, -350.5371f, 106.1471f;
						case 7:
							return -1430.102f, -356.533f, 108.7939f;
						case 8:
							return -1436.11f, -357.8445f, 110.1643f;
						case 9:
							return -1441.878f, -360.5837f, 111.6306f;
							break;
					}
					return 0f, 0f, 0f;
				}

Vector3 func_478(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.283f, -204.5069f, 101.8864f;
				case 1:
					return -1437.858f, -232.6483f, 101.4767f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_479(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 179.55f;
				case 1:
					return 51.9f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_480(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.44f, -207.25f, 101.2044f;
				case 1:
					return -1440.13f, -230.94f, 101.25f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_481(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, 0f;
				case 1:
					return 0f, 0f, -128.1f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_482(char* sParam0, var uParam1)
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

char* func_483()
{
	if (func_323())
	{
		return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_OUTDOOR_JOB";
	}
	return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_INDOOR_JOB";
}

Vector3 func_484()
{
	return -1442.024f, -359.4506f, 111.622f;
}

bool func_485(var uParam0)
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

bool func_486(var uParam0)
{
	if (!func_248(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_248(uParam0->f_12))
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

int func_487(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_787(&uParam1))
	{
		return 1;
	}
	if (!func_788(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_488(var uParam0)
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

bool func_489(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_789(bVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

bool func_490(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_491(var uParam0)
{
	return func_498(*uParam0, 4);
}

bool func_492(var uParam0)
{
	return func_498(*uParam0, 64);
}

bool func_493(var uParam0)
{
	return func_498(*uParam0, 8);
}

bool func_494(var uParam0)
{
	return func_498(*uParam0, 128);
}

bool func_495(var uParam0)
{
	return func_498(*uParam0, 2048);
}

void func_496(bool bParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(bParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(bParam0, 178, bParam1);
}

bool func_497(var uParam0)
{
	return func_498(*uParam0, 1024);
}

bool func_498(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_499(var uParam0)
{
	return func_498(*uParam0, 256);
}

void func_500(bool bParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(bParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(bParam0, 148, !bParam1);
}

bool func_501(var uParam0)
{
	return func_498(*uParam0, 512);
}

bool func_502(var uParam0)
{
	return func_498(*uParam0, 4096);
}

void func_503(int iParam0, int iParam1)
{
	if (!func_155(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

bool func_504(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_505(int iParam0, bool bParam1)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	if ((func_23(iParam0, 1) && !func_506(iParam0)) && func_519(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_238(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_506(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_507(int iParam0)
{
	if (!func_155(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_508(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_788(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_509(float fParam0)
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

float func_510(vector3 vParam0, int iParam3)
{
	return func_427(Global_35, vParam0, iParam3);
}

bool func_511(bool bParam0, int iParam1)
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
	if (func_498(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_498(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_498(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_498(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_498(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_498(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_498(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_498(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_512(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (func_376(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_513(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(bVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(bVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_790(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(bVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(bVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_791(bParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_792(bParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_468();
		}
		else if ((func_468() - *iParam5) > bParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*bParam4 == 2 && bParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*bParam6 = 1;
	}
	return false;
}

bool func_514(bool bParam0, bool bParam1)
{
	if (func_250(bParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(bParam0)));
	}
	return false;
}

bool func_515(float fParam0)
{
	if (func_793(1))
	{
		return true;
	}
	if (func_655(&uLocal_0) && !func_222(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_516(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
}

bool func_517(var uParam0)
{
	return uParam0;
}

bool func_518(bool bParam0)
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

bool func_519(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_520(int iParam0)
{
	int iVar0;

	if (!func_155(iParam0))
	{
		return;
	}
	iVar0 = func_243(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_521(int iParam0, bool bParam1)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_235(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iParam0)))
	{
		return 1;
	}
	if (func_23(iParam0, 1) && !bParam1)
	{
		func_24(iParam0, 128);
		return 1;
	}
	func_169(iParam0, 129);
	func_520(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_167(iParam0));
	func_503(iParam0, 0);
	return 1;
}

bool func_522(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"):
		case joaat("WEAPON_SHOTGUN_SAWEDOFF"):
			return true;
		default:
			break;
	}
	return false;
}

int func_523(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_794(iParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_795((398 + iVar28), 1);
			if (func_796(iParam0, &Var0, iVar5, 0))
			{
				if (func_797(iParam0, &Var6, iVar5))
				{
					Var29 = { func_798(iParam0, Var0, iVar5, 0) };
					func_799(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_800(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_801(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_802(iParam0, iParam1);
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

void func_524(int iParam0, int iParam1, float fParam2)
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

bool func_525(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LCMP");
		case 1:
			return joaat("EACAS");
		case 2:
			return joaat("EACUR");
		default:
			break;
	}
	return 0;
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1652537076 /* GXTEntry: "Logging Camp" */;
		case 1:
			return 1776245965 /* GXTEntry: "Home Construction" */;
		case 2:
			return -228594924 /* GXTEntry: "Railroad Construction" */;
		default:
			break;
	}
	return 0;
}

int func_528(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1654713063 /* GXTEntry: "A group of lumberjacks work to chop down the trees." */;
		case 1:
			return 111316232 /* GXTEntry: "A father and sons are building a house." */;
		case 2:
			return -96966750 /* GXTEntry: "A group of workers build a new railroad track." */;
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
			return joaat("BLIP_EVENT_APPLESEED");
		case 1:
			return joaat("BLIP_EVENT_CASTOR");
		case 2:
			return joaat("BLIP_EVENT_RAILROAD_CAMP");
		default:
			break;
	}
	return 0;
}

int func_530()
{
	return joaat("TOAST_LOG_BLIPS");
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -207723122;
		case 1:
			return -109837334;
		case 2:
			return -1451721831;
		default:
			break;
	}
	return 0;
}

int func_532()
{
	return joaat("SP_MISSIONS_2");
}

char* func_533(int iParam0)
{
	if (!func_138(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "LCMP";
		case 1:
			return "EACAS";
		case 2:
			return "EACUR";
		default:
			break;
	}
	return "EA_DEFAULT";
}

var func_534(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = joaat("ELEMENTS_STAMPS_ICONS");
	}
	if (iParam3 == -1)
	{
		iParam3 = joaat("STAMP_CASH");
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = joaat("SP_NOTIFICATIONS");
	}
	if (!bParam14)
	{
		return func_803(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return func_804(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

bool func_535(int iParam0)
{
	return func_9(iParam0, 1);
}

void func_536(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_1() == 0)
	{
		return;
	}
	if (func_805(128))
	{
		return;
	}
	if (!func_806(iParam0))
	{
		return;
	}
	if (func_140(iParam0, 32))
	{
		return;
	}
	func_141(iParam0, 32);
	func_321(&Global_1935630, 8192);
	func_808(func_807(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_809(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_808(func_807(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_808(func_807(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_808(func_807(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_808(func_807(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_808(func_807(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_808(func_807(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
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
		func_141(iParam0, 64);
	}
}

void func_537(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_810(iParam0);
	if (iVar0 != 0 && func_9(iParam0, 1))
	{
		vVar1 = { func_811(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = func_4(iParam0);
		}
		func_812(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (func_9(iParam0, 67108864))
		{
			MAP::_0xE057FEA9A22EB3EE(iVar0);
		}
		MAP::_0x1392105DA88BBFFB(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		func_10(iParam0, 67108864);
	}
}

int func_538(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_8(&iVar1, -2147483648);
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

int func_539()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_540(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_1() != -1)
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

bool func_541(int iParam0)
{
	return func_813(iParam0, 6);
}

int func_542(int iParam0)
{
	int iVar0;

	iVar0 = func_814(iParam0, 6);
	return iVar0;
}

bool func_543(int iParam0)
{
	return func_813(iParam0, 7);
}

int func_544(int iParam0)
{
	int iVar0;

	iVar0 = func_814(iParam0, 7);
	return iVar0;
}

bool func_545(int iParam0)
{
	return (func_813(iParam0, 4) || func_813(iParam0, 5));
}

int func_546(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_814(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_814(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

void func_547(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = (*uParam0)[iVar2];
		(*uParam0)[iVar2] = (*uParam0)[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

int func_548(bool bParam0, bool bParam1, bool bParam2)
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

bool func_549(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam4 < 0 || iParam4 >= *bParam0)
	{
		iParam4 = (*bParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_356((*bParam0)[iVar0], iParam1, uParam2, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_550(int iParam0, int iParam1, bool bParam2)
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

char* func_551()
{
	return "LOG_HONOR_WAGON_STEAL";
}

void func_552(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36616 && func_815(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_816(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_817(iVar0, 0, iParam0, iParam1, sParam3, bParam4, bParam5, bParam7);
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
			func_818(iVar1, iVar0, iParam0, iParam1, bParam4, bParam5);
		}
		else
		{
			func_817(iVar0, 1, iParam0, iParam1, sParam3, bParam4, bParam5, 0);
		}
	}
}

void func_553(int iParam0, bool bParam1, int iParam2)
{
	func_819(iParam2);
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
		iParam0->f_13 = func_820(0);
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
							func_143(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_821(1))
						{
							func_143(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_821(1) || *iParam0 & 8192 != 0))
				{
					func_199(iParam0, 33554432);
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
			if (func_822(iParam0))
			{
				iParam0->f_15 = func_572();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_572() - iParam0->f_15) > 500)
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
	func_823(iParam0);
}

bool func_554(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

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
			bVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(bVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_824(bParam0, iParam1, bVar2))
			{
				return false;
			}
			if (func_825(bParam0, bVar2) <= func_826(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_555(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = bParam0;
	}
	if (func_827(iParam2, 1, 1, 1, 0))
	{
		func_143(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_581(iParam1, 1);
	func_784();
}

bool func_556(bool bParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_381(bParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_828(iParam1);
			if (func_829(iParam1, bParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_830(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_581(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_581(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_557(bool bParam0, bool bParam1, int iParam2)
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
	if (func_831(bParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_828(iParam2);
		if (func_829(iParam2, bParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_830(iParam2)
				{
					func_581(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_558(bool bParam0, int iParam1)
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
	if (func_824(bParam0, iParam1, bVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_830(iParam1)
		{
			fVar3 = func_828(iParam1);
			if (iParam1->f_12 < fVar3)
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

bool func_559(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_572();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_560(var uParam0, bool bParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_832(iParam2);
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
			if (func_568(iParam2, bParam1))
			{
				func_581(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_561(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_833(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_568(iParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_581(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_562(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_834(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_581(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_581(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_835(bParam1, vVar0, vVar4))
					{
						func_581(iParam2, 1);
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
					func_581(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_835(bParam1, vVar0, vVar7))
					{
						func_581(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_563(bool bParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_824(bParam0, iParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_836(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_837(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						iParam1->f_10 = bParam0;
						return true;
					}
				}
			}
			if (func_838(iParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = bParam0;
				return true;
			}
			else if (func_839(iParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = bParam0;
				return true;
			}
			else if (func_840(iParam1, bParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = bParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_564(bool bParam0, int iParam1)
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

bool func_565(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_572();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_566(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_841(bVar0, &iVar2))
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
	if (func_842(bVar0, bParam0))
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

int func_567(int iParam0, bool bParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(bParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(bParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_568(int iParam0, bool bParam1)
{
	if (func_843(iParam0))
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

bool func_569(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_357(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_570()
{
}

bool func_571(int iParam0, bool bParam1)
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
		if (func_844(iVar0, bParam1, vVar1))
		{
			iParam0->f_9 = func_572();
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
						if (func_427(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								iParam0->f_9 = func_572();
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

int func_572()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_573()
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
	if ((func_572() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_574(int iParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return false;
	}
	fVar0 = func_826(iParam0);
	if (iParam0->f_12 > func_845(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_846(bParam1);
	iVar1 = func_847(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_575(bool bParam0, bool bParam1, int iParam2)
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
	return func_848(bParam0, bParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_576(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

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
		if (func_849(bParam0, iParam1, 1))
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
					if (!func_850(iParam1, bParam0))
					{
						if (func_427(bVar4, Global_36, 1) < 7f)
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

bool func_577(bool bParam0, int iParam1)
{
	if (!func_851(0))
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

bool func_578(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_572();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_579(bool bParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

bool func_580(bool bParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_572();
	}
	else if (func_572() - iParam1->f_4) > func_852(iParam1)
	{
		return func_298(bParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return false;
}

void func_581(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 134217728);
	}
	else
	{
		func_199(iParam0, 134217728);
	}
}

bool func_582(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1935630.f_34[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1935630.f_34[0], true))
	{
		return true;
	}
	iVar0 = func_351(Global_1935630.f_34[0], 0);
	if (func_155(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			func_160(&iVar1, &iVar2, 0);
		}
		else
		{
			func_161(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_583(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*bParam0, Global_35, 0, 0))
	{
		return false;
	}
	if (!ENTITY::_0x3EC28DA1FFAC9DDD(*bParam0, Global_35, 0, 0))
	{
		return false;
	}
	if (!func_511(*bParam0, 75))
	{
		return true;
	}
	iVar0 = func_348(Global_35, 0, 1, 0);
	if (func_342(iVar0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(*bParam0, iVar0, 250))
		{
			return true;
		}
	}
	iVar0 = func_348(Global_35, 1, 1, 0);
	if (func_342(iVar0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(*bParam0, iVar0, 250))
		{
			return true;
		}
	}
	return false;
}

bool func_584()
{
	if (func_19(32))
	{
		return true;
	}
	if (func_9(1, 2))
	{
		return true;
	}
	if (!func_19(262144))
	{
		return true;
	}
	if (func_19(4096))
	{
		return true;
	}
	if (func_262(Local_1529.f_138, 0))
	{
		return true;
	}
	return false;
}

bool func_585(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_FLEEING(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_586(bool bParam0)
{
	if (((bParam0->f_16 == 3 || bParam0->f_16 == 1) || bParam0->f_16 == 6) || bParam0->f_16 == 5)
	{
		return true;
	}
	return false;
}

float func_587(bool bParam0)
{
	switch (bParam0->f_16)
	{
		case 1:
		case 3:
			return 180f;
		case 5:
		case 6:
			return 120f;
		default:
			break;
	}
	return 90f;
}

bool func_588(bool bParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	int iVar0[9];
	var uVar10;
	int iVar41;
	int iVar42;

	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(iParam1);
	iVar41 = func_703(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
	if (iVar41 <= 0)
	{
		return false;
	}
	iVar42 = func_853(&iVar0, vParam2, 0, 1, 0, -1);
	if (iVar42 < 0)
	{
		return false;
	}
	*bParam0 = iVar0[iVar42];
	if (bParam6)
	{
		while (!PED::IS_PED_FACING_PED(iVar0[iVar42], Global_35, fParam7))
		{
			iVar0[iVar42] = 0;
			iVar42 = func_853(&iVar0, vParam2, 0, 1, 0, -1);
			if (iVar42 < 0)
			{
			}
		else
		{
			}
		}
	}
	return true;
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 2;
		case 9:
			return 2;
		case 7:
			return 2;
		case 0:
			return 3;
		case 3:
			return 4;
		default:
			break;
	}
	return 0;
}

bool func_590(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	iVar0 = func_854(iParam0, 4, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		*iParam1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		return true;
	}
	iVar1 = func_854(iParam0, 5, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*iParam1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		return true;
	}
	return false;
}

int func_591(int iParam0)
{
	return iParam0;
}

void func_592(int iParam0)
{
	if (!func_855(iParam0))
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

bool func_593()
{
	return VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[11 /*446*/].f_25);
}

void func_594(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_155(Global_1914319.f_3[iParam0 /*446*/].f_21) && func_506(Global_1914319.f_3[iParam0 /*446*/].f_21))
	{
		func_263(Global_1914319.f_3[iParam0 /*446*/].f_21, 0, 1, 0, 0);
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
	func_856(Global_1914319.f_3[iParam0 /*446*/].f_10, 0);
	func_303(iParam0, 536870912);
	iVar1 = func_857(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_858(Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/]);
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
	func_859(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	func_860(iParam0, 0);
}

void func_595(int iParam0, bool bParam1)
{
	if (!func_861(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_862(iParam0, 1);
	}
	else
	{
		func_863(iParam0, 1);
	}
	func_865(func_864(iParam0), bParam1);
}

bool func_596(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_597(int iParam0)
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

int func_598(int iParam0)
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

int func_599(int iParam0)
{
	return iParam0 & 31;
}

int func_600(int iParam0)
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

int func_601(int iParam0)
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

void func_602(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_603()
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

int func_604(int iParam0)
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

void func_605(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_606(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_866(iParam0);
	}
	else
	{
		func_867(iParam0, iParam1);
	}
	func_868();
}

bool func_607(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_869(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_608(int iParam0)
{
	if (!func_98(iParam0))
	{
		return false;
	}
	switch (func_308(iParam0))
	{
		case 1:
			switch (func_430(iParam0))
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
			switch (func_430(iParam0))
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

void func_609(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_870(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_871(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_873(func_872(iParam0), 6);
}

void func_610(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_870(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_871(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_874(func_872(iParam0), 6);
}

int func_611(int iParam0)
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

int func_612(int iParam0)
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
	func_875(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_613(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam0, sParam1);
}

bool func_614(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_615(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_615(bool bParam0)
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

void func_616(int iParam0)
{
	iParam0 = func_876(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_877(iParam0, 32);
	func_878();
}

void func_617(int iParam0)
{
	int iVar0;

	iParam0 = func_876(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_618(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_620(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_620(iParam0);
	}
}

int func_618(int iParam0)
{
	iParam0 = func_876(iParam0);
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

bool func_619(int iParam0)
{
	iParam0 = func_876(iParam0);
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

void func_620(int iParam0)
{
	iParam0 = func_876(iParam0);
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

void func_621(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	if (!bParam6)
	{
		*uParam1 = Global_40.f_9096[iParam0 /*12*/].f_3;
	}
	iVar0 = ((((iParam2 * 86400) + iParam3 * 3600) + iParam4 * 60) + iParam5);
	if ((*uParam1 + iVar0) < 0)
	{
		*uParam1 = 0;
	}
	else
	{
		*uParam1 = (*uParam1 + iVar0);
	}
}

void func_622(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 64);
	}
	else
	{
		func_199(iParam0, 64);
	}
}

void func_623(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 1048576);
	}
	else
	{
		func_199(iParam0, 1048576);
	}
}

bool func_624()
{
	return (Global_1894899 & 1 != 0 && func_879() != -1);
}

bool func_625(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (bParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_626(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = bParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_880(bParam0, &Var0);
}

float func_627(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0f;
	}
	return ANIMSCENE::GET_ANIM_SCENE_PHASE(*uParam0);
}

void func_628(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::GET_ANIM_SCENE_ORIGIN(*uParam0, vParam1, vParam2, 2);
}

void func_629(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!func_881(uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1, bParam2);
}

void func_630(var uParam0, char* sParam1)
{
	func_882(uParam0, sParam1, 1);
}

bool func_631(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1);
}

int func_632(bool bParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_883(bParam0, vVar0, iParam2);
}

char[] func_633(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return "PB_PRE_BRKOUT_BACK";
				case 0:
					return "PB_PRE_BRKOUT_N";
				case 3:
					return "PB_PRE_BRKOUT_L";
				case 2:
					return "PB_PRE_BRKOUT_R";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_BRKOUT_A_BACK";
				case 0:
					return "PB_SAW_BRKOUT_A_N";
				case 3:
					return "PB_SAW_BRKOUT_A_L";
				case 2:
					return "PB_SAW_BRKOUT_A_R";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_B_BRKOUT_BACK";
				case 0:
					return "PB_SAW_B_BRKOUT_N";
				case 3:
					return "PB_SAW_B_BRKOUT_L";
				case 2:
					return "PB_SAW_B_BRKOUT_R";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_634(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_161(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_884(bParam0, uVar0, iVar1, bParam2);
}

bool func_635(bool bParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_885(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(bParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
	}
	if (iParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(bParam0))
	{
		fVar1 = -1f;
		fVar2 = func_886(PED::_0x2BA9D7BF629F920C(bParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::CAN_PED_SEE_ENTITY(bParam0, Global_35, true, false) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_887())
					{
						if (PED::IS_PED_FACING_PED(Global_35, bParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
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

bool func_636(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_888(bParam0))
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
	if (PED::_0x0EA9EACBA3B01601(Global_35, bParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
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

int func_637(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_638(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_639(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_59(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_640(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_641(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_642(int iParam0, int iParam1)
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

void func_643(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_889(iParam0, iParam6);
	func_890(iParam0, iParam5);
	func_891(iParam0, iParam4);
	func_892(iParam0, iParam3);
	func_893(iParam0, iParam2);
	func_894(iParam0, iParam1);
}

bool func_644(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_364(iParam1) || !func_364(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_645(int iParam0, int iParam1, int iParam2)
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

int func_646(bool bParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_895(&iVar0);
	if (func_367(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_896(bParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_367(iVar0, 134217728))
	{
		func_897(iParam1, uParam3, bParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_898(558))
				{
					func_899(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_647(int iParam0)
{
	if (func_900(iParam0))
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

void func_648(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_300(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_901(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_902(iParam0->f_6, iParam0->f_5, 0);
			}
			func_761(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_903(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_649(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_904(iParam0, 13))
	{
		func_905(iParam0, 0);
	}
	else
	{
		func_906(iParam0, 0);
	}
	if (func_300(iParam0->f_6))
	{
		if (bParam2)
		{
			func_301(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_650(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_904(iParam0, 4))
		{
			func_301(&(iParam0->f_6), 1, 1);
			func_905(iParam0, 4);
		}
	}
	else if (func_904(iParam0, 4))
	{
		func_906(iParam0, 4);
		func_905(iParam0, 14);
	}
}

void func_651(bool bParam0, int iParam1)
{
	bParam0->f_14 = iParam1;
}

void func_652(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_905(uParam0[iVar0 /*17*/], 9);
		iVar0++;
	}
}

char* func_653(bool bParam0)
{
	char cVar0[32];
	char cVar4[32];

	switch (bParam0->f_15)
	{
		case 0:
			if (func_132(bParam0, 16))
			{
				return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
			}
			switch (bParam0->f_16)
			{
				case 0:
					return "DEFUSE_ARGUMENT";
				default:
					break;
			}
			return "DEFUSE_ARGUMENT_TOUGH";
		case 1:
			if (func_132(bParam0, 16))
			{
				return "KEEP_GOING_ANTAGONZIZE_RESPONSE";
			}
			switch (bParam0->f_16)
			{
				case 0:
					StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
					StringConCat(&cVar4, "_PART", 32);
					MISC::_INT_TO_STRING(1, "%d", &cVar0);
					StringConCat(&cVar4, &cVar0, 32);
					return func_660(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_654(bool bParam0)
{
	switch (bParam0->f_15)
	{
		case 0:
			if (func_132(bParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (bParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
		case 1:
			if (func_132(bParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (bParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE_ESCALATED_ARMED";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
	}
	return "DEFUSE_RESPONSE";
}

bool func_655(var uParam0)
{
	return func_907(*uParam0, 1);
}

bool func_656(var uParam0)
{
	return func_907(*uParam0, 2);
}

float func_657(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_658(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

bool func_659(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_908(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

var func_660(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_661(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_662(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_909(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_663(bool bParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_910(bParam0);
		func_911(iParam1, uParam2);
	}
	func_242(*bParam0, 1, bParam4);
}

var func_664(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_665(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	int iVar0;

	if (!func_300(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_912(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, bParam18, 0, 0);
			func_913(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_914(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, bParam18, 0);
		}
		else
		{
			if (func_240(vParam2))
			{
				return false;
			}
			*uParam0 = func_915(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, bParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_901(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_916(1))
			{
				func_761(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_917(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_918(*uParam0, 0))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				func_761(*uParam0, 0, 1);
			}
		}
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			func_761(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_916(1))
		{
			func_761(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_300(*uParam0))
			{
				func_301(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_919(*uParam0, 1)) || (bParam17 && func_920(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_728(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_921(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
			}
		}
		func_301(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_666()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_724(&(vLocal_490[3 /*3*/]));
	iVar2 = PED::_GET_LAST_MOUNT(Global_35);
	bVar1 = !ENTITY::IS_ENTITY_DEAD(iVar2);
	if (iVar0 > 8000)
	{
		if (bVar1)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 0f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
		}
	}
	else if (iVar0 > 5000)
	{
		if (bVar1)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		}
	}
	else if (iVar0 > 3000)
	{
		if (bVar1)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		}
	}
	else if (iVar0 > 2000)
	{
		if (bVar1)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
		}
	}
	else if (bVar1)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 2.5f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
	}
}

void func_667(int iParam0)
{
	if (!func_138(iParam0->f_136))
	{
		return;
	}
	func_42(iParam0->f_136, 128);
	func_10(iParam0->f_136, 65536);
	func_43(iParam0, 128);
	func_922(30, 0, 1);
}

void func_668(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (iLocal_519[iParam4] > 3 && iLocal_519[iParam4] < 8)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*bParam2) && !TASK::GET_IS_TASK_ACTIVE(*bParam2, 3)) || (!ENTITY::IS_ENTITY_DEAD(*bParam3) && !TASK::GET_IS_TASK_ACTIVE(*bParam3, 3)))
		{
			iVar0 = -1;
			if (!func_132(&Local_357, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*bParam2) && !TASK::GET_IS_TASK_ACTIVE(*bParam2, 3))
				{
					Local_357 = func_63(func_325(9, 0, *iParam0));
					iVar0 = 0;
				}
				if (!ENTITY::IS_ENTITY_DEAD(*bParam2) && !TASK::GET_IS_TASK_ACTIVE(*bParam3, 3))
				{
					Local_357 = *bParam3;
					iVar0 = 1;
				}
				if (func_923(func_63(func_325(9, iVar0, *iParam0)), Global_35, 0, 5f, 0))
				{
					func_291(&Local_357, &Local_1529, 2048, 54031, 0, 0);
				}
			}
			func_326(&(Local_412[(9 + iParam4) /*7*/]), *bParam2, "PED1");
			func_680(9, 0, *iParam0, 0 == iVar0);
			func_326(&(Local_412[(9 + iParam4) /*7*/]), *bParam3, "PED2");
			func_680(9, 1, *iParam0, 1 == iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[(15 + *iParam1) /*12*/].f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_526.f_690[(15 + *iParam1) /*12*/].f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(15 + *iParam1) /*12*/].f_8, true);
				}
				else
				{
					func_326(&(Local_412[(9 + iParam4) /*7*/]), Local_526.f_690[(15 + *iParam1) /*12*/].f_8, "SAW");
					ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[(15 + *iParam1) /*12*/].f_8, false);
					PHYSICS::ACTIVATE_PHYSICS(Local_526.f_690[(15 + *iParam1) /*12*/].f_8);
				}
			}
			func_215(&(Local_412[(9 + iParam4) /*7*/]));
			iLocal_519[iParam4] = 10;
		}
	}
}

void func_669(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*bParam1))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam1, -137640087))
	{
		iVar0 = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam1, -1300850144))
	{
		iVar0 = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam1, -1011860333))
	{
		iVar0 = 2;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 == iVar0)
		{
			if (!func_881(&(Local_412[(9 + iParam0) /*7*/]), func_633(iVar1, iVar2)) && !func_924(&(Local_412[(9 + iParam0) /*7*/]), func_633(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					func_709(&(Local_412[(9 + iParam0) /*7*/]), func_633(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (func_881(&(Local_412[(9 + iParam0) /*7*/]), func_633(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				func_925(&(Local_412[(9 + iParam0) /*7*/]), func_633(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_670(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2[24];

	if (ENTITY::IS_ENTITY_DEAD(*bParam0) || ENTITY::IS_ENTITY_DEAD(*bParam1))
	{
		return;
	}
	if (func_324(&(Local_412[(9 + iParam2) /*7*/])))
	{
		func_926(bParam0, bParam1, iParam2);
		if (PED::_0xA454D234E45BB6E5(*bParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *bParam0;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*bParam0, 330, true);
		}
		else if (PED::_0x9337183FDA2E9035(*bParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *bParam0;
		}
		else if (PED::_0xA454D234E45BB6E5(*bParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *bParam1;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*bParam1, 330, true);
		}
		else if (PED::_0x9337183FDA2E9035(*bParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *bParam1;
		}
		if (Local_357 == *bParam0 || Local_357 == *bParam1)
		{
			func_338(iParam2);
			iLocal_519[iParam2] = 8;
			return;
		}
		if (func_68(func_927(iParam2)))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_412[(9 + iParam2) /*7*/].f_1)) && func_928(&(Local_412[(9 + iParam2) /*7*/])))
			{
				func_929(&(Local_412[(9 + iParam2) /*7*/]), 1, 1);
				StringCopy(&(Local_412[(9 + iParam2) /*7*/].f_1), "", 24);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				func_329(func_927(iParam2));
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				func_69(func_927(iParam2));
			}
			if (func_68(func_927(iParam2)))
			{
				cVar2 = { func_930(bParam0, iLocal_409[iParam2], bVar1) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					func_931(&(Local_412[(9 + iParam2) /*7*/]), &cVar2);
				}
			}
		}
	}
}

int func_671(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_589(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = func_325(iParam0, iVar0, iParam1);
		func_62(iVar1, 1, 1);
		iVar0++;
	}
	return iVar0;
}

Vector3 func_672(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1420.942f, -208.586f, 101.032f;
				case 1:
					return -1438.671f, -232.235f, 100.8f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_673(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1.325f, 0.462f, 0.828f;
				case 1:
					return -3.665f, -3.93f, -126.538f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_674(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam1, vParam4, 2);
}

void func_675(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (!func_613(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, bParam1, 0);
}

void func_676(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!func_613(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

void func_677(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam0);
}

bool func_678(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_427(bParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(bParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(bParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(bParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(bParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_679(bool bParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_932(bParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

void func_680(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_325(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		func_75(iVar0, 1);
		func_933(1, &Local_526);
	}
}

void func_681()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_115(func_683(iVar0)))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 4)
	{
		return;
	}
	iVar1 = (810 + iVar0);
	bVar2 = func_63(iVar1);
	if (func_934(&bVar2, iVar1))
	{
		func_75(iVar1, 1);
		func_463(func_682(iVar0), 0);
		func_685(func_683(iVar0));
	}
}

int func_682(int iParam0)
{
	if ((!func_19(64) && func_5(Local_1529.f_136, 536870912)) && iParam0 == func_6())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && func_19(262144))
	{
		iParam0 = 4;
	}
	return iParam0;
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 32;
		case 2:
			return 64;
		case 3:
			return 128;
		default:
			break;
	}
	return 0;
}

int func_684()
{
	return joaat("EA_WORLD_HUMAN_TREE_CHOP_NEW");
}

void func_685(int iParam0)
{
	iLocal_102 = (iLocal_102 - (iLocal_102 && iParam0));
}

void func_686()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_682(iVar0);
		if (func_418(iVar1) && (!func_19(64) || iVar1 != 0))
		{
			func_935(iVar0);
		}
		iVar0++;
	}
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16777216;
		case 1:
			return 33554432;
		case 2:
			return 67108864;
		case 3:
			return 134217728;
		default:
			break;
	}
	return 0;
}

void func_688(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	iVar0 = (810 + iParam0);
	bVar1 = func_63(iVar0);
	iVar2 = func_682(iParam0);
	if (func_936(iVar2, &bVar1))
	{
		if (func_780(iVar2))
		{
			bVar3 = true;
		}
		else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iVar2]) == 4)
		{
		}
		else
		{
			func_457(iVar2);
			return;
		}
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iVar2]))
	{
		func_457(iVar2);
		return;
	}
	if (func_937(iParam0, bVar3))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iVar2], 6);
		if (!func_418(iVar2))
		{
			func_781(iVar2);
		}
		if (!(func_19(64) && iVar2 == 0))
		{
			func_114(bVar1, Global_35, "LOG_TIMBER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_685(func_683(iParam0));
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::TRIGGER_SONAR_BLIP(348490638, func_426(iVar2));
		if (!((iLocal_98 == 1 && func_19(64)) && iParam0 == 0))
		{
			func_454(iVar2);
		}
		return;
	}
	bVar3 = false;
}

void func_689(bool bParam0)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(*bParam0, "interactNeg"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(*bParam0, "interactNeg");
	}
	if (iVar0 > 0)
	{
		PED::SET_PED_CONFIG_FLAG(*bParam0, 330, true);
	}
}

void func_690(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (iParam0 > 5)
	{
		return;
	}
	iVar0 = (810 + iParam0);
	if (!func_155(iVar0))
	{
		return;
	}
	bVar1 = func_63(iVar0);
	if (ENTITY::IS_ENTITY_DEAD(bVar1))
	{
		return;
	}
	iVar2 = func_682(iParam0);
	if (func_419(iVar2))
	{
		return;
	}
	if (func_418(iVar2))
	{
		return;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_402[iVar2]))
	{
		return;
	}
	if (!func_129(bVar1, 1435919172))
	{
		TASK::TASK_USE_SCENARIO_POINT(bVar1, iLocal_402[iVar2], 0, -1, true, false, 0, false, -1f, false);
	}
}

void func_691(bool bParam0, int iParam1)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (!func_115(func_938(iParam1)))
	{
		if (PED::_0x9337183FDA2E9035(*bParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*bParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			func_35(func_938(iParam1));
		}
	}
	else if (!(PED::_0x9337183FDA2E9035(*bParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*bParam0, PLAYER::GET_PLAYER_INDEX())))
	{
		fVar0 = func_374(&(vLocal_490[0 /*3*/]));
		if ((60f - fVar0) < 15f)
		{
			if (fVar0 >= 60f)
			{
				fVar0 = (60f - 15f);
			}
			else
			{
				fVar0 = (fVar0 - 15f);
			}
			func_221(&(vLocal_490[0 /*3*/]), fVar0);
		}
		func_685(func_938(iParam1));
	}
}

bool func_692(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(*bParam0) && !DECORATOR::DECOR_EXIST_ON(*bParam0, "bChopDown"))
	{
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(*bParam0) != func_684())
		{
			return false;
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(*bParam0, 0))
		{
			return false;
		}
		bVar0 = func_19(524288);
		if (iParam3 == func_6() && func_5(Local_1529.f_136, 1073741824 /* Float: 2f */))
		{
			func_13(524288, bVar0);
			func_685(256);
			return true;
		}
		if (func_19(64) && !func_419(0))
		{
			return false;
		}
		if (func_115(func_938(iParam3)))
		{
			return false;
		}
		if (func_655(&(vLocal_490[0 /*3*/])))
		{
			fVar1 = func_374(&(vLocal_490[0 /*3*/]));
			if (func_115(256))
			{
				fVar2 = 90f;
			}
			else if (func_278(*bParam0, 1, 1) < 5f)
			{
				fVar2 = 7.5f;
			}
			else if (!func_939())
			{
				fVar2 = 15f;
			}
			else
			{
				fVar2 = 60f;
			}
			if (fVar1 < fVar2)
			{
				return false;
			}
		}
		if (func_19(32))
		{
			return false;
		}
		else if (func_19(64) && iParam3 == 0)
		{
			return false;
		}
		else if (((iLocal_98 == 1 && iParam3 == 1) && !func_51(4096)) && !func_19(262144))
		{
			return false;
		}
		if (func_5(Local_1529.f_136, 536870912) && iParam3 == func_6())
		{
			return false;
		}
		if (func_251(*bParam0, uParam1, iParam2, &bVar0, 1f, 45f, 0f, 0, 25f, 1))
		{
			func_13(524288, bVar0);
			func_685(256);
			return true;
		}
		func_13(524288, bVar0);
	}
	return false;
}

void func_693(bool bParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	if (func_250(*bParam0, 0, 1) && !DECORATOR::DECOR_EXIST_ON(*bParam0, "bChopDown"))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_TRIGGER_SONAR_BLIP_2(1515458263, *bParam0);
		if (!(func_19(64) && iParam1 == 0))
		{
			func_114(*bParam0, Global_35, func_940(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		iVar0 = func_682(iParam1);
		func_941(iParam1);
		iLocal_75[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_425(iVar0), func_942(iVar0), 5f, 30f, 5f, "volTreeFall");
		POPULATION::_0xB56D41A694E42E86(iLocal_75[2], 534496, 0, 0, -1, -1, 2);
		func_943(iVar0);
		POPULATION::_0xB56D41A694E42E86(iLocal_75[2], 0, 0, 0, -1, -1, 2);
		DECORATOR::DECOR_SET_BOOL(*bParam0, "bChopDown", true);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 389, true);
		vVar1 = { ENTITY::GET_ENTITY_COORDS(*bParam0, true, false) };
	}
}

void func_694()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_944(iVar1);
		iVar0++;
	}
}

void func_695(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35(32768);
			return;
		case 1:
			func_35(65536);
			return;
		case 2:
			func_35(131072);
			return;
		case 3:
			func_35(262144);
			return;
		case 4:
			func_35(524288);
			return;
	}
}

void func_696()
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_419(iVar0))
		{
			bVar1 = false;
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1)
	{
		func_35(512);
	}
}

void func_697(int iParam0, bool bParam1)
{
	func_945(iParam0, 0, bParam1);
	func_945(iParam0, 1, bParam1);
	func_945(iParam0, 2, bParam1);
}

bool func_698()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

bool func_699()
{
	return Global_1935689.f_1;
}

bool func_700()
{
	return Global_1357517;
}

char* func_701()
{
	return "INSULT_RESPONSE";
}

var func_702()
{
	char cVar0[32];
	char cVar4[32];

	StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	StringConCat(&cVar4, "_PART", 32);
	MISC::_INT_TO_STRING(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return func_660(cVar4);
}

int func_703(int iParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_946(iParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_109(iVar0);
	return iVar1;
}

bool func_704(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	switch (uParam0->f_17)
	{
		case 0:
			if (uParam0->f_25 >= *bParam1)
			{
				uParam0->f_25 = 0;
			}
			if (uParam0->f_24 >= uParam0->f_26 || uParam0->f_23 >= uParam0->f_26)
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (uParam0->f_23 < uParam0->f_26 && uParam0->f_24 < uParam0->f_26)
			{
				if (func_947(uParam0, (*bParam1)[uParam0->f_25], uParam2))
				{
					if ((ENTITY::IS_ENTITY_ON_SCREEN((*bParam1)[uParam0->f_25]) && !ENTITY::IS_ENTITY_OCCLUDED((*bParam1)[uParam0->f_25])) && PED::CAN_PED_SEE_ENTITY(Global_35, (*bParam1)[uParam0->f_25], false, false) == 1)
					{
						uParam0->f_31 = (*bParam1)[uParam0->f_25];
						uParam0->f_17 = 1;
					}
					else
					{
						uParam0->f_25++;
						Jump @1216; //curOff = 254
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_31) && func_923(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							func_948(&(uParam0->f_18));
							vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_31, true, false) };
							if (!uParam0->f_7[uParam0->f_24])
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (func_367(uParam0->f_34, 8))
								{
									TASK::_0xE7FA07624574B79A(uParam0->f_31, Global_35, 2, 1, 100f, 1, 0, 0, 0);
									func_143(&(uParam0->f_34), 16);
								}
								else if (!func_367(uParam0->f_34, 4) && !PED::IS_PED_SITTING(uParam0->f_31))
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										TASK::TASK_ACHIEVE_HEADING(0, 90f, 0);
										TASK::TASK_PLAY_ANIM(0, *uParam0, uParam0->f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
									{
										uParam0->f_30 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_31, false);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if (func_427(uParam0->f_31, Global_36, 0) > 12f)
										{
											TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0f, 0f, 1f, 1000, 5f, 1, 1, 0, 0, 1, 0);
										}
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										if (bParam3)
										{
											if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_30))
											{
												TASK::TASK_USE_SCENARIO_POINT(0, uParam0->f_30, 0, 0, true, false, 0, false, -1f, false);
											}
											else
											{
												TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, false, false, false, false);
											}
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										if (bParam3)
										{
											TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, false, false, false, false);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
								}
							}
							DECORATOR::DECOR_SET_BOOL(uParam0->f_31, "bNoticePlayer", false);
							uParam0->f_17 = 2;
						}
						else if (uParam0->f_18.f_4)
						{
							func_948(&(uParam0->f_18));
							uParam0->f_17 = 0;
						}
						if (uParam0->f_17 == 0)
						{
							uParam0->f_31 = 0;
							if (uParam0->f_25 == (*bParam1 - 1))
							{
								uParam0->f_25 = 0;
							}
							else
							{
								uParam0->f_25++;
							}
						}
						Jump @1216; //curOff = 886
						if (func_367(uParam0->f_34, 1))
						{
							func_108(0);
						}
						func_721(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!func_949() && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23])) && func_252(0, 1, uParam0->f_31, 1))
						{
							if (func_367(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								func_114(uParam0->f_31, Global_35, uParam0->f_2[uParam0->f_23], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							func_48(&(uParam0->f_27));
							return true;
						}
						Jump @1216; //curOff = 1079
						if ((func_367(uParam0->f_34, 16) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_31)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_31))
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_31, 1, 0);
							func_199(&(uParam0->f_34), 16);
						}
						if (func_384(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = func_351(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && func_262(iVar4, 0))
							{
								func_263(iVar4, 0, 1, 0, 0);
							}
							uParam0->f_17 = 0;
						}
					}
					return false;
				}
			}
			default:
				break;
	}
}

bool func_705()
{
	if (func_19(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			break;
	}
	return false;
}

Vector3 func_706()
{
	return -1402.82f, -270.8668f, 98.5585f;
}

void func_707()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!func_51(8388608) && VOLUME::DOES_VOLUME_EXIST(iLocal_75[4]))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(false);
		ITEMSET::_CLEAR_ITEMSET(iVar0);
		iVar1 = ENTITY::_0x886171A12F400B89(iLocal_75[4], iVar0, 2);
		if (iVar1 > 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return;
		}
		ITEMSET::_CLEAR_ITEMSET(iVar0);
		iVar1 = ENTITY::_0x886171A12F400B89(iLocal_75[4], iVar0, 1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			bVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
			if (func_490(bVar3))
			{
				ITEMSET::DESTROY_ITEMSET(iVar0);
				return;
			}
			iVar2++;
		}
		func_58(8388608);
		func_172();
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
}

void func_708()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[5 /*12*/].f_8))
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(Local_526.f_690[5 /*12*/].f_8))
		{
			if (!func_51(65536))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[5 /*12*/].f_8, true);
			}
		}
		else if (func_51(65536))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[5 /*12*/].f_8, false);
			PHYSICS::ACTIVATE_PHYSICS(Local_526.f_690[5 /*12*/].f_8);
		}
	}
}

bool func_709(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
}

char* func_710()
{
	return "desk_loop_book";
}

char* func_711()
{
	return "script_proc@event_area@appleseed@foreman_stage2";
}

void func_712(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_264(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

Vector3 func_713()
{
	return -1397.791f, -214.2272f, 101.3653f;
}

bool func_714(var uParam0, int iParam1)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !func_367(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				func_48(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (func_367(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!func_367(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!func_367(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && func_373(uParam0->f_1))
					{
						func_950(uParam0->f_1);
						iVar0 = func_883(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = func_883(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						func_143(&(uParam0->f_23), 2);
					}
				}
				if (func_240(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_951(uParam0, 1, iParam1);
			}
			else
			{
				func_951(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_952(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_953(uParam0, iParam1))
				{
					func_954();
				}
				func_951(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_953(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_367(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, func_367(uParam0->f_23, 512), 0, 0);
				}
				func_951(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_955(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!PED::IS_PED_CARRYING_SOMETHING(uParam0->f_1))
				{
					func_143(&(uParam0->f_23), 256);
				}
				if (func_367(uParam0->f_23, 4096) && !PED::IS_PED_CARRYING_SOMETHING(uParam0->f_1))
				{
					func_143(&(uParam0->f_23), 256);
					bVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (func_357(bVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_956(bVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!func_367(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_951(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_957(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (func_367(uParam0->f_23, 8192))
				{
					if (func_367(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, false, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!func_240(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_367(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!func_240(uParam0->f_11))
					{
						if (func_367(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_59(!func_367(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_59(!func_367(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_367(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_59(!func_367(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_59(!func_367(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_367(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					func_958(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_951(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_367(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_367(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!func_367(uParam0->f_23, 128) && func_222(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_367(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_240(uParam0->f_11) || !func_129(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_959(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_367(uParam0->f_23, 8)) && (!func_367(uParam0->f_23, 64) || MISC::ABSF(func_960(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_367(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				func_264(&(uParam0->f_5));
				func_951(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

Vector3 func_715()
{
	return -1406.475f, -213.2691f, 101.3333f;
}

Vector3 func_716(var uParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;
	bool bVar12;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(*uParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_717(float fParam0)
{
	return !func_252(fParam0, 1, 0, 0);
}

void func_718(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_386, sParam0, 32);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_386))
		{
			func_961(&cLocal_386, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

bool func_719(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return false;
	}
	bVar0 = true;
	if (bParam1 && iLocal_98 == 1)
	{
		bVar0 = false;
	}
	if (bVar0 && func_213(*bParam0, iLocal_75[0], 1, 0))
	{
		if (func_213(Global_35, iLocal_75[0], 1, 0))
		{
			return true;
		}
	}
	else if (func_357(Global_35, *bParam0, 1, 1) < func_962(bParam1, 18f, 12.5f) && (!bParam2 || PED::IS_PED_FACING_PED(*bParam0, Global_35, 165f)))
	{
		return true;
	}
	return false;
}

int func_720(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;

	if (Global_1935630.f_12)
	{
		return 1;
	}
	if (!PED::_IS_PED_DRUNK(Global_35))
	{
		return 1;
	}
	fVar0 = func_963();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_964(0);
		}
		else
		{
			func_964(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_964(0);
	}
	else
	{
		func_964(1);
	}
	return 0;
}

void func_721(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> /*112*/ sVar0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_475(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_965(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		IK::_0x66F9EB44342BB4C5(*bParam0, &Var0);
	}
}

void func_722(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_58(-2147483648);
		func_54(134217728, bParam1);
	}
	else
	{
		func_50(-2147483648);
		func_54(134217728, bParam1);
	}
}

void func_723(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_966(iParam0, 0, func_647(7));
	Local_251[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	func_906(&(Local_251[iParam0 /*52*/][0 /*17*/]), 1);
	func_945(iParam0, 0, !func_51(1073741824 /* Float: 2f */));
	func_966(iParam0, 1, func_647(10));
	func_945(iParam0, 1, bParam2);
	func_945(iParam0, 2, bParam1);
	func_967(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
}

int func_724(var uParam0)
{
	if (!func_655(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_656(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_572() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_725(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_966(iParam0, 0, "LOG_CTXTBUY");
	Local_251[0 /*52*/][0 /*17*/].f_14 = func_727();
	func_905(&(Local_251[iParam0 /*52*/][0 /*17*/]), 1);
	func_901(Local_251[iParam0 /*52*/][0 /*17*/].f_6, "LOG_CTXTBUY", Local_251[iParam0 /*52*/][0 /*17*/].f_14, 0);
	func_945(iParam0, 0, 1);
	func_966(iParam0, 1, func_647(1));
	func_945(iParam0, 1, 1);
	func_945(iParam0, 2, 0);
	func_967(iParam0, 2, 1);
	func_58(268435456);
	func_329(536870912);
}

Vector3 func_726()
{
	return -1398.998f, -208.266f, 101.8822f;
}

int func_727()
{
	int iVar0;

	if (func_9(1, 2) && iLocal_98 > 1)
	{
		iVar0 = func_968(joaat("EA_APPLESEED_WAGON_DEFAULT_COST"));
	}
	else if (iLocal_98 == 1)
	{
		iVar0 = func_968(joaat("EA_APPLESEED_SUPPLIES_INITIAL_VALUE"));
	}
	return iVar0;
}

void func_728(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_969(iParam0);
	if (bParam3)
	{
		func_970(iParam0, sParam1, iParam2);
	}
}

void func_729(bool bParam0)
{
	var uVar0[1];

	uVar0[0] = Global_35;
	PED::_0x34EDDD59364AD74A(*bParam0, &uVar0);
}

bool func_730(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_655(&(uParam1->f_133)))
	{
		func_48(&(uParam1->f_133));
	}
	else if (func_724(&(uParam1->f_133)) > iParam2)
	{
		func_264(&(uParam1->f_133));
		if (func_262(iParam0, 0))
		{
			func_75(iParam0, bParam3);
			return true;
		}
	}
	return false;
}

void func_731()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		vVar1 = { func_971(iVar0) };
		func_972(&vVar1, 0);
		iVar0++;
	}
}

int func_732()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR");
}

int func_733()
{
	return joaat("U_M_M_BIVFOREMAN_01");
}

int func_734()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A");
}

Vector3 func_735()
{
	return -1399.903f, -211.2283f, 102.3423f;
}

int func_736()
{
	return joaat("WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED");
}

int func_737()
{
	return joaat("WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED_MALE_B");
}

Vector3 func_738()
{
	return -1402.626f, -207.791f, 101.897f;
}

char* func_739()
{
	return "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A";
}

char* func_740()
{
	return "WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED_MALE_B";
}

char* func_741(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

Vector3 func_742(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

int func_743()
{
	switch (iLocal_517)
	{
		case 2:
		case 3:
			return joaat("EAFOR_A_L");
		case 0:
			return joaat("EAFOR_GOOD_TO_SEE");
		case 1:
			return joaat("EAFOR_MORE_TIME");
	}
	return 0;
}

char* func_744()
{
	switch (iLocal_517)
	{
		case 2:
		case 3:
			return "EAFOR_A_L";
		case 0:
			return "EAFOR_GOOD_TO_SEE";
		case 1:
			return "EAFOR_MORE_TIME";
	}
	return "";
}

bool func_745(bool bParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_973(*bParam0, iParam1, fParam2, iParam3, sParam4, bParam5, 106) && (iParam6 == 0 || ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, iParam6)))
	{
		return true;
	}
	return false;
}

char* func_746(bool bParam0)
{
	if (iLocal_517 == 2)
	{
		if (bParam0)
		{
			return "action_02_fm";
		}
		else
		{
			return "action_01b_fm";
		}
	}
	else if (iLocal_517 == 3)
	{
		return "clockwork_fm";
	}
	return "";
}

bool func_747(bool bParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return false;
	}
	if (func_51(-2147483648))
	{
		return false;
	}
	if (func_793(1))
	{
		return false;
	}
	if (!func_252(-3.5f, 1, *bParam0, 1))
	{
		return false;
	}
	return true;
}

int func_748(bool bParam0)
{
	int iVar0;
	vector3 vVar1;

	switch (iLocal_517)
	{
		case 2:
		case 3:
			return joaat("EAFOR_A_L");
		case 0:
		case 1:
			vVar1 = { func_974(Global_35, 2f) };
			iVar0 = func_883(*bParam0, vVar1, 1060437492 /* Float: 0.707f */);
			switch (iVar0)
			{
				case 0:
					return joaat("EAFOR_A_F");
				case 2:
					return joaat("EAFOR_A_R_ANGRY");
				case 3:
					return joaat("EAFOR_A_L_ANGRY");
			}
			break;
	}
	return 0;
}

void func_749(bool bParam0, int iParam1, int iParam2)
{
	struct<23> /*184*/ sVar0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	func_475(&(Var0.f_5), 1);
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		IK::_0x66F9EB44342BB4C5(*bParam0, &Var0);
	}
}

void func_750(bool bParam0)
{
	int iVar0;

	if (func_51(65536))
	{
		if (!func_262(Local_1529.f_138, 0))
		{
			func_62(Local_1529.f_138, 1, 1);
		}
		if (!func_68(2097152))
		{
			func_69(2097152);
			PED::_0xAAB050DA48B57978(*bParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_103 == 3)
			{
				func_69(1048576);
			}
		}
		if (func_655(&(vLocal_490[3 /*3*/])))
		{
			func_264(&(vLocal_490[3 /*3*/]));
		}
		if (func_252(-3.5f, 1, 0, 0) && !func_655(&(vLocal_490[5 /*3*/])))
		{
			func_48(&(vLocal_490[5 /*3*/]));
		}
		if (func_222(&(vLocal_490[5 /*3*/]), 10f))
		{
			func_378(&(Local_1529.f_35), func_975(), *bParam0, Global_35, 0, 0, 1, 1);
			TASK::CLEAR_PED_TASKS(*bParam0, true, false);
			switch (iLocal_103)
			{
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
					TASK::TASK_CONFRONT(0, Global_35, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
					TASK::_TASK_PERFORM_SEQUENCE_2(*bParam0, iLocal_193, 2f, 7.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
					Local_104 = 0;
					break;
				case 2:
					iVar0 = func_118(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					WEAPON::GIVE_WEAPON_TO_PED(*bParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(*bParam0, iVar0, false, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
					TASK::TASK_PERFORM_SEQUENCE(*bParam0, iLocal_193);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
					Local_104 = 0;
					break;
				case 3:
					func_69(1048576);
					break;
			}
			iLocal_103++;
		}
	}
	else
	{
		if (func_655(&(vLocal_490[5 /*3*/])))
		{
			func_264(&(vLocal_490[5 /*3*/]));
		}
		if (func_68(2097152))
		{
			if (!func_655(&(vLocal_490[3 /*3*/])))
			{
				func_48(&(vLocal_490[3 /*3*/]));
			}
			if (func_222(&(vLocal_490[3 /*3*/]), 15f))
			{
				if (iLocal_103 == 3)
				{
					TASK::CLEAR_PED_TASKS(*bParam0, true, false);
					PED::_0x935CF6E42BAF7F4D(*bParam0);
					func_75(Local_1529.f_138, 1);
					func_76(&(Local_208[0 /*21*/]), 0);
				}
				func_329(2097152);
			}
		}
	}
	if (func_68(2097152))
	{
		if (!func_129(*bParam0, 242628503))
		{
			func_976(&Local_104, 0);
		}
	}
}

void func_751(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_966(iParam0, 0, func_647(7));
	Local_251[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	func_906(&(Local_251[iParam0 /*52*/][0 /*17*/]), 1);
	func_945(iParam0, 0, 0);
	func_966(iParam0, 1, func_647(10));
	func_945(iParam0, 1, 1);
	func_945(iParam0, 2, bParam1);
	func_967(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
}

void func_752()
{
}

bool func_753(bool bParam0)
{
	return true;
}

int func_754()
{
	return 0;
}

int func_755(bool bParam0)
{
	if (!func_68(4096))
	{
		func_978(4096, STREAMING::_REQUEST_SCENARIO_TYPE(func_258(), 15, func_244(Local_1529.f_138), func_977()));
	}
	return 1;
}

void func_756(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_966(iParam0, 0, func_647(7));
	Local_251[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	func_906(&(Local_251[iParam0 /*52*/][0 /*17*/]), 1);
	func_945(iParam0, 0, 1);
	func_966(iParam0, 1, func_647(10));
	func_945(iParam0, 1, 0);
	func_945(iParam0, 2, 0);
	func_967(iParam0, 2, 1);
	func_58(268435456);
}

bool func_757(int iParam0)
{
	return true;
}

void func_758()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
}

void func_759(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_596(iParam0))
	{
		return;
	}
	iVar0 = func_979(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_199(&(Global_1914319.f_3[iParam0 /*446*/].f_8), iVar0);
}

bool func_760(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_864(iParam0) == 4 && func_980(iParam0, -1162387149))
	{
		return true;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
		if (ITEMSET::IS_ITEMSET_VALID(iVar2))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else
				{
					iVar1 = func_981(iVar0);
					if (func_982(iVar1, iParam0))
					{
						ITEMSET::DESTROY_ITEMSET(iVar2);
						return true;
					}
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
		}
	}
	return func_980(iParam0, 1084182731);
}

void func_761(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_591(iParam0);
	if (bParam1)
	{
		func_983(iParam0, 4);
		func_984(iVar0, 1);
		func_985(iVar0, 1);
	}
	else
	{
		func_986(iParam0, 4);
		func_985(iVar0, 0);
	}
}

bool func_762(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(*uParam0, sParam1);
	}
	return false;
}

void func_763(var uParam0, char* sParam1)
{
	func_882(uParam0, sParam1, 0);
}

bool func_764(int iParam0)
{
	if (!func_596(iParam0))
	{
		return false;
	}
	return func_987(iParam0, 8388608);
}

void func_765(int iParam0, int iParam1)
{
	if (!func_596(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 || iParam1);
}

void func_766(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	Global_20710[iParam0 /*45*/].f_1 = 0;
}

void func_767(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_596(iParam0))
	{
		return;
	}
	iVar0 = func_979(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_143(&(Global_1914319.f_3[iParam0 /*446*/].f_8), iVar0);
}

void func_768(int iParam0)
{
	bool bVar0;

	if (!ENTITY::IS_ENTITY_DEAD(func_63(iLocal_1894[*iParam0])))
	{
		bVar0 = func_63(iLocal_1894[*iParam0]);
	}
	else
	{
		return;
	}
	PED::_0x935CF6E42BAF7F4D(bVar0);
	func_988(&bVar0, 0);
	if (PED::IS_PED_USING_ANY_SCENARIO(bVar0))
	{
		TASK::_0x541E5B41DCA45828(bVar0, 1, 0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(bVar0, true, false);
		if (func_989(iLocal_1894[*iParam0]))
		{
			func_944(iLocal_1894[*iParam0]);
		}
		else
		{
			func_263(iLocal_1894[*iParam0], 0, 1, 0, 0);
			PED::SET_PED_CONFIG_FLAG(bVar0, 178, true);
			PED::SET_PED_CONFIG_FLAG(bVar0, 130, false);
		}
	}
	func_242(bVar0, 1, 1);
}

Vector3 func_769(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	vector3 vVar8;

	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	fVar6 = (func_446(vVar3.x, func_446(vVar3.y, vVar3.z)) / 2f);
	iVar7 = 0;
	while (iVar7 < iParam1)
	{
		if (!bParam2)
		{
			vVar8 = { func_990(vVar0, fVar6) };
		}
		else
		{
			vVar8 = { func_991(vVar0, fVar6, iParam3) };
		}
		if (VOLUME::IS_POINT_IN_VOLUME(iParam0, vVar8))
		{
			return vVar8;
		}
		iVar7++;
	}
	return vVar0;
}

int func_770(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3f, 0.25f, -1f);
	return 1;
}

int func_771(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_772(int iParam0)
{
	if (func_166(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

Vector3 func_773(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_774(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

Vector3 func_775(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1447.046f, -248.2112f, 101.8532f;
				case 1:
					return -1421.375f, -191.8643f, 100.0484f;
				case 2:
					return -1468.509f, -186.8103f, 104.7422f;
				case 3:
					return -1454.64f, -225.2065f, 103.411f;
				case 4:
					return -1428.337f, -197.121f, 100.9558f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return -1462.903f, -174.4467f, 105.4205f;
				case 2:
					return -1457.676f, -251.4121f, 104.5611f;
				case 3:
					return -1409.899f, -284.2626f, 100.9278f;
				case 4:
					return -1409.899f, -284.2626f, 100.9278f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.63f, -293.9522f, 102.1136f;
				case 1:
					return -1518.762f, -234.9279f, 116.6115f;
				case 2:
					return -1468.601f, -126.4598f, 117.0678f;
				case 3:
					return -1514.415f, -203.4755f, 110.9043f;
				case 4:
					return -1413.63f, -293.9522f, 102.1136f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_776(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 203.3771f;
				case 1:
					return 6.516163f;
				case 2:
					return 306.3405f;
				case 3:
					return 179.3372f;
				case 4:
					return 33.71f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 25.43246f;
				case 2:
					return 165.157f;
				case 3:
					return 164.2261f;
				case 4:
					return 164.2261f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 348.4004f;
				case 1:
					return 278.6f;
				case 2:
					return 105.1105f;
				case 3:
					return 341.899f;
				case 4:
					return 348.4004f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

bool func_777(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

int func_778(int iParam0)
{
	int iVar0;

	if (func_19(64) && iParam0 == 0)
	{
		iVar0 = joaat("DES_TREEFALL_ACCIDENT");
		return iVar0;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 1:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 2:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 3:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 4:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iVar0 = joaat("DES_TREEFALL_ACCIDENT");
					break;
				case 1:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 2:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 3:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 4:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 1:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 2:
					iVar0 = joaat("DES_TREEFALL_DOWN15");
					break;
				case 3:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 4:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
			}
			break;
	}
	return iVar0;
}

char* func_779(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return "DES_treefall_accident";
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_up15";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_flat";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_accident";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_up15";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_up15";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_flat";
				case 1:
					return "DES_treefall_up15";
				case 2:
					return "DES_treefall_down15";
				case 3:
					return "DES_treefall_flat";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_780(int iParam0)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iParam0]))
	{
		return false;
	}
	return OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iParam0]) == 5;
}

void func_781(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35(1024);
			return;
		case 1:
			func_35(2048);
			return;
		case 2:
			func_35(4096);
			return;
		case 3:
			func_35(8192);
			return;
		case 4:
			func_35(16384);
			return;
	}
}

bool func_782(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_783(int iParam0, int iParam1)
{
	if (func_777(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_784()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_785(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam3, sParam2, false, true);
}

void func_786(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
}

bool func_787(var uParam0)
{
	return func_498(*uParam0, 1);
}

bool func_788(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_992(*uParam0, 0f, 0f, 0f))
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

void func_789(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_993(iParam1))
		{
			func_994(bParam0, joaat("META_OUTFIT_DEFAULT"));
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
			WEAPON::_0x899A04AFCC725D04(bParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(bParam0) && !bParam3)
		{
			func_995(bParam0, 0, 1);
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
			func_996(bParam0, 0);
			bVar0 = true;
		}
		func_997(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

float func_790(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return 30f;
		case 2:
			return 80f;
		default:
			break;
	}
	return -1f;
}

int func_791(bool bParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { func_998(iParam1) };
	vVar3 = { func_998(iParam2) };
	return func_999(bParam0, vVar0, vVar3, iParam2);
}

int func_792(bool bParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_998(iParam1) };
	return func_999(bParam0, vVar0, vParam2, 0);
}

bool func_793(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

struct<5> /*40*/ func_794(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_1000(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_1001(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_798(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_1002(bParam1) };
			if (bParam2 && func_1003(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_796(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_796(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_797(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_1004(bParam1) };
			switch (func_871(iParam0))
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
			if (func_1005(iParam0, -1823706425))
			{
				Var0 = { func_798(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_1005(iParam0, -1483207246))
			{
				Var0 = { func_798(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_1006(Var0, &Var27, bParam1, 0))
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

int func_795(int iParam0, int iParam1)
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

bool func_796(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_1007(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_797(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1008(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_798(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_1009(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_870(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_799(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_1010(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1006(*uParam1, &Var0, bParam6, 0))
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
	if (!func_800(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_870(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_800(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_870(bParam0));
}

int func_801(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1011(iParam0))
	{
		return 0;
	}
	if (!func_800(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_802(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_297(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

var func_803(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> /*40*/ sVar0;
	struct<8> /*64*/ sVar13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
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

var func_804(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> /*40*/ sVar0;
	struct<8> /*64*/ sVar13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
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
	uVar21 = UIFEED::_0x18D6869FBFFEC0F8(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

bool func_805(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_806(int iParam0)
{
	int iVar0;

	if (func_1012(iParam0))
	{
		if (!func_1013(45))
		{
			return false;
		}
	}
	iVar0 = func_809(iParam0);
	if (func_1014())
	{
		if (!func_206(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

struct<2> /*16*/ func_807(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_808(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_809(int iParam0)
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

int func_810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EVENTAREA_APPLESEEDTIMBER");
		case 1:
			return joaat("EVENTAREA_CASTORSPOND");
		case 2:
			return joaat("EVENTAREA_CENTRALUNION");
		default:
			break;
	}
	return 0;
}

Vector3 func_811(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1400f, -200f, 0f;
		case 1:
			return -440f, 500f, 0f;
		case 2:
			return 2100f, 770f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_812(int iParam0, int iParam1)
{
	int iVar0;

	func_1015(iParam0);
	iVar0 = func_1016(iParam0, iParam1);
	if (iVar0 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar0))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar0);
	}
}

int func_813(int iParam0, int iParam1)
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

int func_814(int iParam0, int iParam1)
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
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_815(int iParam0)
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

int func_816(int iParam0)
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

void func_817(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> /*16*/ sVar8;

	iVar0 = func_1017();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_1018(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(bParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(bParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(bParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(bParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(bParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(bParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_1013(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1019())
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
	Global_40.f_11095.f_35 = func_1020(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1017();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_1021(iVar1);
		func_1023(func_1022(), 0, 4000);
		func_1024(Global_40.f_11095.f_35);
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
		func_1025(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_808(func_1026(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(bParam5))
			{
				DECORATOR::DECOR_SET_INT(bParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_816(14))
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
					sParam4 = func_1027(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1028(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1028(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_808(func_1026(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_816(4))
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
					sParam4 = func_1027(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1028(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1028(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1026(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1029(10, 1);
	}
}

void func_818(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = bParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_819(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_1030();
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
			func_1031(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_820(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_821(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_1032(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_822(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_1() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_1033(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_1033(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_847(iVar0) == -1)
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

void func_823(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_1034(iParam0);
	}
}

bool func_824(bool bParam0, int iParam1, bool bParam2)
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
		iVar1 = func_847(bParam2);
	}
	else
	{
		iVar1 = func_846(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_847(bParam0);
	}
	else
	{
		iVar0 = func_846(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_367(*iParam1, 8388608))
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

float func_825(bool bParam0, bool bParam1)
{
	return func_357(bParam0, bParam1, 1, 1);
}

float func_826(int iParam0)
{
	return iParam0->f_26;
}

bool func_827(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

float func_828(int iParam0)
{
	return iParam0->f_17;
}

bool func_829(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_367(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_830(int iParam0)
{
	return iParam0->f_18;
}

bool func_831(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_661(bVar0, 0)))
		{
			if (func_909(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_832(int iParam0)
{
	return iParam0->f_23;
}

int func_833(int iParam0)
{
	return iParam0->f_21;
}

int func_834(int iParam0)
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

bool func_835(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1035(bParam0, vParam4, 0.5f))
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

int func_836(bool bParam0)
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
	if (func_1036(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_837(int iParam0)
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

bool func_838(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_888(bParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_839(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_888(bParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_840(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_888(bParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
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

bool func_841(bool bParam0, int iParam1)
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

bool func_842(bool bParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(bParam0) == bParam1)
	{
		return true;
	}
	if (func_1037(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_843(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_844(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_427(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_845(int iParam0)
{
	return iParam0->f_24;
}

int func_846(bool bParam0)
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

int func_847(bool bParam0)
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

int func_848(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_841(Global_35, &iVar1))
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
		fVar2 = func_357(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_357(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_849(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_1032(1, &bVar0, &bVar1);
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
					if (!bParam2 || !func_850(iParam1, bVar0))
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
				if (!bParam2 || !func_850(iParam1, bVar1))
				{
					if (func_427(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_850(int iParam0, bool bParam1)
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

bool func_851(int iParam0)
{
	if (func_1019())
	{
		return false;
	}
	return func_206(Global_1347702[58 /*49*/].f_15, 1);
}

int func_852(int iParam0)
{
	return iParam0->f_20;
}

int func_853(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *iParam0)
	{
		iParam7 = (*iParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != (*iParam0)[iVar0] && (!bParam5 || (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iVar0]))))
		{
			fVar3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

int func_854(int iParam0, int iParam1, int iParam2)
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
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, iParam2);
	if (iVar4 == 3 || iVar4 == 4)
	{
		return uVar0;
	}
	return 0;
}

bool func_855(int iParam0)
{
	return func_1038(iParam0, 2);
}

void func_856(int iParam0, bool bParam1)
{
	if (!func_861(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_1039(iParam0, 1024))
		{
			func_863(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_1039(iParam0, 1024))
	{
		func_862(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_1040(iParam0);
}

int func_857(int iParam0)
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

void func_858(int iParam0)
{
	if (func_1041(iParam0) && func_1042())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_859(int iParam0)
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
}

void func_860(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_596(iParam0))
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

bool func_861(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_862(int iParam0, int iParam1)
{
	if (!func_861(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] - (Global_1914319.f_15614[iParam0] && iParam1));
}

void func_863(int iParam0, int iParam1)
{
	if (!func_861(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] || iParam1);
}

int func_864(int iParam0)
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

void func_865(int iParam0, bool bParam1)
{
	if (!func_596(iParam0))
	{
		return;
	}
	if ((bParam1 && func_987(iParam0, 512)) || (!bParam1 && !func_987(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_765(iParam0, 512);
	}
	else
	{
		func_303(iParam0, 512);
	}
	if (func_1043(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

int func_866(int iParam0)
{
	int iVar0;

	iVar0 = func_597(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1044(iVar0);
}

int func_867(int iParam0, int iParam1)
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
			func_1045(iVar2);
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

void func_868()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_869(int iParam0, int iParam1)
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

int func_870(bool bParam0)
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

int func_871(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_1009(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_872(int iParam0)
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

void func_873(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 = (Global_1946054.f_2657.f_26.f_6 - (Global_1946054.f_2657.f_26.f_6 && iParam0));
}

void func_874(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 = (Global_1946054.f_2657.f_26.f_6 || iParam0);
}

void func_875(int iParam0, int iParam1)
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
			func_1046((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1046(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_98(Global_1898164.f_1[0 /*5*/]))
	{
		func_314(Global_1898164.f_1[0 /*5*/], 3);
	}
}

int func_876(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_877(int iParam0, int iParam1)
{
	iParam0 = func_876(iParam0);
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

void func_878()
{
	if (func_1047(0))
	{
		func_1048(0);
	}
	if (func_1047(1))
	{
		func_1048(1);
	}
	if (func_1047(5))
	{
		func_1048(5);
	}
	if (func_1047(6))
	{
		func_1049(6);
	}
}

int func_879()
{
	return Global_1894899.f_2;
}

bool func_880(bool bParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(bParam0, uParam1);
}

bool func_881(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return true;
	}
	return false;
}

void func_882(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
}

int func_883(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1050(vVar3, vVar6);
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
	if (func_1051(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_884(bool bParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_235(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_167(iVar2)))
		{
			if (func_167(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

float func_885(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_845(iParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_1052(iParam0);
	}
	return func_845(iParam0);
}

float func_886(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_887()
{
	int iVar0;
	int iVar1;

	iVar0 = func_442(func_441());
	iVar1 = func_638(func_441());
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

bool func_888(bool bParam0)
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

void func_889(int iParam0, int iParam1)
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

void func_890(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_891(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_640(*iParam0);
	iVar1 = func_639(*iParam0);
	if (iParam1 < 1 || iParam1 > func_642(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_892(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_893(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_894(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_895(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_896(bool bParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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

	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		func_895(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0));
		fVar8 = func_962(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_48(&(iParam1->f_13));
		}
		if (func_1053(*bParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1054(bParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_896(bParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_910(bParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*bParam0, 317, true))
						{
							func_1055(*bParam0, 1, 1);
						}
					}
					else if (func_1056(iParam1, 22))
					{
						func_1055(*bParam0, 0, 1);
					}
				}
				if (func_1057(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1058(bParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1059(iParam8);
					if (func_1060(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_1061(uParam3);
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
					func_1062(iParam1, uParam3, fVar8);
					if (func_1063(*bParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_107(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1064(bParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1057(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1065(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1060(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1058(bParam0, func_1057(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1059(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_107(uParam3, 0, 0, 1, 1);
					}
					func_1066(iParam1, 1);
				}
				func_1062(iParam1, uParam3, fVar8);
				if (func_1064(bParam0, iParam1, fParam4, bVar6))
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
			func_911(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_897(int* iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_1067(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_114(Global_35, *bParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_898(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_899(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1068(iParam0, &iVar0, &iVar1);
	if (!func_1069(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1070(iVar0, iVar1);
}

bool func_900(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_901(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_591(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_902(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_591(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_903(int* iParam0, char* sParam1)
{
	if (func_300(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_902(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_906(iParam0, 1);
}

bool func_904(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_905(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_906(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_907(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_908(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_909(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_910(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 297, false);
	}
}

void func_911(int* iParam0, var uParam1)
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
	func_1071(iParam0, uParam1, 1);
	func_107(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_912(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_1038(iVar0, 2))
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
				func_1072(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_913(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_300(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_591(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945188[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(Global_1945188[iVar0 /*18*/].f_3, fParam1);
}

int func_914(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
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
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1038(iVar0, 2))
		{
			if (iParam2 == Global_1945188[iVar0 /*18*/].f_10 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1072(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, bParam8, iParam9, bParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, bParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_915(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_240(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1038(iVar0, 2))
		{
			if (func_782(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1072(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, bParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_916(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_917(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_591(iParam0);
	func_984(iVar0, bParam1);
}

bool func_918(int iParam0, bool bParam1)
{
	if (bParam1 && !func_300(iParam0))
	{
		return false;
	}
	return !func_1038(iParam0, 4);
}

bool func_919(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_300(iParam0))
	{
		return false;
	}
	iVar0 = func_591(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_920(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_300(iParam0))
	{
		return false;
	}
	iVar0 = func_591(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_921(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1073(iParam0, sParam4, iParam5);
	}
	func_1074(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_922(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_1075(iParam0, iParam1, bParam2);
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

bool func_923(bool bParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_1076(bParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_1077(bParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(bParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(bParam0, iParam1, bParam2, false) == 1;
}

bool func_924(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1);
}

bool func_925(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
}

void func_926(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		iVar0 = *bParam0;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(*bParam1))
	{
		iVar0 = *bParam1;
	}
	else
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -137640087))
	{
		iLocal_409[iParam2] = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1300850144))
	{
		iLocal_409[iParam2] = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1011860333))
	{
		iLocal_409[iParam2] = 2;
	}
	else
	{
		iLocal_409[iParam2] = -1;
	}
}

int func_927(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1073741824 /* Float: 2f */;
		case 1:
			return -2147483648;
		default:
			break;
	}
	return 0;
}

bool func_928(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, &(uParam0->f_1)))
	{
	}
	else
	{
		return true;
	}
	return false;
}

void func_929(var uParam0, bool bParam1, bool bParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (func_881(uParam0, &(uParam0->f_1)))
	{
		func_629(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			func_630(uParam0, &(uParam0->f_4));
		}
	}
}

Vector3 func_930(bool bParam0, int iParam1, bool bParam2)
{
	vector3 vVar0[24];
	int iVar3;

	StringCopy(&cVar0, "PB_", 24);
	switch (iParam1)
	{
		case 0:
			StringConCat(&cVar0, "PRE_", 24);
			break;
		case 1:
			StringConCat(&cVar0, "SAW_A_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "SAW_B_", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			return cVar0;
	}
	StringConCat(&cVar0, "ILO_", 24);
	if (bParam2)
	{
		StringConCat(&cVar0, "NEG_", 24);
	}
	else
	{
		StringConCat(&cVar0, "POS_", 24);
	}
	iVar3 = func_632(*bParam0, Global_35, 1060437492 /* Float: 0.707f */);
	switch (iVar3)
	{
		case 0:
			StringConCat(&cVar0, "N", 24);
			break;
		case 3:
			StringConCat(&cVar0, "L", 24);
			break;
		case 2:
			StringConCat(&cVar0, "R", 24);
			break;
		case 1:
			StringConCat(&cVar0, "BACK", 24);
			break;
	}
	return cVar0;
}

bool func_931(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return func_709(uParam0, &(uParam0->f_1));
}

bool func_932(bool bParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0) && bParam5)
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iParam1, false))
	{
		return true;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iParam1, false))
	{
		return true;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (bParam6)
		{
			if (ANIMSCENE::COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME(iParam1, sParam2, 1, 0))
			{
				return true;
			}
		}
		if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1, sParam2) || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(iParam1, sParam2))
		{
			return true;
		}
	}
	if (iParam3 != 0 && ENTITY::HAS_ANIM_EVENT_FIRED(bParam0, iParam3))
	{
		return true;
	}
	if (fParam4 > 0f && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1) >= fParam4)
	{
		return true;
	}
	return false;
}

void func_933(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
	if (iParam0 > iVar0)
	{
		iParam0 = iVar0;
	}
	PED::_UNRESERVE_AMBIENT_PEDS(iParam0);
	iParam1->f_3 = (iParam1->f_3 - iParam0);
}

bool func_934(bool bParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return false;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*bParam0, 1))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*bParam0, 1407243653))
	{
		return false;
	}
	if (func_1078(iParam1))
	{
		return false;
	}
	return true;
}

void func_935(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_682(iParam0);
	if (!func_115(func_1079(iParam0)) && !func_419(iVar0))
	{
		iVar1 = (810 + iParam0);
		bVar2 = func_63(iVar1);
		if (!ENTITY::IS_ENTITY_DEAD(bVar2))
		{
			if (!func_115(func_687(iParam0)) && ENTITY::HAS_ANIM_EVENT_FIRED(bVar2, 2009491632))
			{
				func_973(bVar2, joaat("EXIT_TREE_FALL"), 10f, 0, "EXIT_TREE_FALL", 1, 129);
				TASK::CLEAR_PED_TASKS(bVar2, true, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(bVar2, false, false);
				func_35(func_687(iParam0));
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar2, 1407243653))
			{
				PED::SET_PED_CONFIG_FLAG(bVar2, 146, false);
				PED::SET_PED_CONFIG_FLAG(bVar2, 234, true);
				PED::SET_PED_CONFIG_FLAG(bVar2, 178, true);
				PED::SET_PED_CONFIG_FLAG(bVar2, 389, false);
				func_35(func_1079(iParam0));
				func_35(func_683(iParam0));
			}
		}
	}
}

bool func_936(int iParam0, bool bParam1)
{
	if (func_418(iParam0))
	{
		return false;
	}
	if (!func_250(*bParam1, 0, 1))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(*bParam1, "bChopDown"))
	{
		return false;
	}
	return true;
}

bool func_937(int iParam0, bool bParam1)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iParam0]))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (func_19(64))
	{
		return true;
	}
	if (!func_655(&(vLocal_490[0 /*3*/])))
	{
		return false;
	}
	if (func_724(&(vLocal_490[0 /*3*/])) <= 5000)
	{
		return false;
	}
	return true;
}

int func_938(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1048576;
		case 1:
			return 2097152;
		case 2:
			return 4194304;
		case 3:
			return 8388608;
		default:
			break;
	}
	return 0;
}

bool func_939()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_418(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_940()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			return "LOG_WARN01";
		case 1:
			return "LOG_WARN02";
		case 2:
			return "LOG_WARN03";
		case 3:
			return "LOG_WARN04";
		default:
			break;
	}
	return "LOG_WARN01";
}

void func_941(int iParam0)
{
	bool bVar0[30];
	int iVar31;
	int iVar32;
	bool bVar33;

	iVar31 = 0;
	iVar31 = func_290(&bVar0);
	iVar32 = (810 + iParam0);
	bVar33 = func_63(iVar32);
	if (!ENTITY::IS_ENTITY_DEAD(bVar33))
	{
		bVar0[iVar31] = bVar33;
		iVar31++;
	}
	if (!func_19(32))
	{
		func_1080(&bVar0, &iParam0, 1);
	}
	else
	{
		func_1081(iLocal_1846[0], &bVar0);
	}
}

Vector3 func_942(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0f, 0f, 79.04118f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -15f, 0f, -60.62425f;
				case 1:
					return 0f, 0f, 102.5155f;
				case 2:
					return 0f, 0f, 42.34158f;
				case 3:
					return -15f, 0f, -84.66344f;
				case 4:
					return 0f, 0f, 60.87f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 79.04118f;
				case 1:
					return 0f, 0f, 121.4344f;
				case 2:
					return -15f, 0f, -98.84385f;
				case 3:
					return -15f, 0f, -99.77609f;
				case 4:
					return -15f, 0f, -99.77609f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 84.4f;
				case 1:
					return -15f, 0f, 14.6f;
				case 2:
					return 15f, 0f, -158.89f;
				case 3:
					return 0f, 0f, 77.9f;
				case 4:
					return 0f, 0f, 84.4f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_943(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					if (func_19(64))
					{
						iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					}
					else
					{
						iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1455.782f, -255.1657f, 106.2708f, 176.1422f, 74.22754f, -157.1033f, 1.284743f, 0.828f, 11.23116f, "volTreeKill 0");
					}
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1408.708f, -186.5688f, 101.067f, 76.65434f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 12.79663f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1458.914f, -194.3228f, 105.2989f, -89.76711f, 89.07716f, -136.2797f, 1.284743f, 0.828f, 11.93199f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1465.396f, -227.6279f, 107.1113f, -173.9405f, 77.34332f, -173.0002f, 1.284743f, 0.828f, 10.89174f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1417.96f, -200.7522f, 101.8687f, 116.2321f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 10.74282f, "volTreeKill 1");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1453.148f, -166.5273f, 107.2447f, 77.26909f, 87.1385f, -72.74516f, 1.284743f, 0.828f, 11.9518f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1468.958f, -251.1458f, 108.5803f, -163.4203f, 76.80013f, -175.8395f, 1.284743f, 0.828f, 11.48762f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1513.435f, -244.4112f, 120.048f, 76.4277f, 4.506001f, 14.70511f, 1.139303f, 2.028264f, 10.8445f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1473.797f, -116.0985f, 116.5509f, 78.37471f, 4.515922f, 12.70869f, 2.082363f, 2.176558f, 10.8445f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1503.689f, -203.0762f, 110.4443f, 173.4138f, -89.01738f, -180f, 2.334879f, 1f, 10.34734f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
			}
			break;
	}
}

void func_944(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_63(iParam0);
	iVar1 = func_1082(iParam0);
	if (iVar1 < 0 || iVar1 > 3)
	{
		return;
	}
	iVar2 = func_682(iVar1);
	if (!ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		if ((func_164(64) && !PED::IS_PED_USING_SCENARIO_HASH(bVar0, func_684())) && !func_455(iVar2))
		{
			if (!func_262(iParam0, 0))
			{
				func_62(iParam0, 1, 1);
			}
			func_456(&iVar2);
			TASK::CLEAR_PED_TASKS(bVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(bVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_402[iVar1]))
			{
				TASK::TASK_USE_SCENARIO_POINT(0, iLocal_402[iVar1], 0, 0, true, false, 0, false, -1f, false);
			}
			else
			{
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, func_1083(iVar1), 5f, 0, false, false, false, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
			TASK::_TASK_PERFORM_SEQUENCE_2(bVar0, iLocal_193, 1f, 3f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(bVar0, true, false);
			WEAPON::SET_CURRENT_PED_WEAPON(bVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			func_75(iParam0, 1);
			func_463(iVar2, 0);
		}
	}
}

void func_945(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_649(&(Local_251[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

int func_946(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	bool bVar2;
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
			bVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(bVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (func_1084(bVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreThisPed"))
				{
					if (!func_350(bVar2, iParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(bVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
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
								if (!ENTITY::IS_ENTITY_DEAD(bVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = bVar2;
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

bool func_947(var uParam0, bool bParam1, int iParam2)
{
	if (!func_250(bParam1, 0, 1))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bNoticePlayer"))
	{
		return false;
	}
	if (!func_1085(bParam1))
	{
		return false;
	}
	if (func_357(bParam1, Global_35, 1, 1) > uParam0->f_32)
	{
		return false;
	}
	if (func_350(bParam1, iParam2))
	{
		return false;
	}
	if (func_1086(bParam1, &(uParam0->f_12)))
	{
		return false;
	}
	return true;
}

void func_948(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

bool func_949()
{
	return func_1087(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

void func_950(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(iVar0, true, false);
	TASK::TASK_STAND_STILL(iVar0, -1);
}

void func_951(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_952(var uParam0, int iParam1)
{
	if (func_222(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (func_367(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_373(uParam0->f_1) && !func_129(uParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !func_129(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_953(var uParam0, int iParam1)
{
	var uVar0;

	if (func_222(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_367(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_1088(&uVar0))
	{
		return true;
	}
	return false;
}

int func_954()
{
	int iVar0;

	if (!func_1089())
	{
		return 0;
	}
	if (!func_1090(&iVar0))
	{
		return 0;
	}
	if (!func_1091(iVar0))
	{
		return 0;
	}
	return func_1092(iVar0, 0);
}

bool func_955(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_222(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (func_367(uParam0->f_23, 4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (func_367(uParam0->f_23, 512) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return true;
	}
	return false;
}

int func_956(bool bParam0)
{
	int iVar0;

	iVar0 = func_382(bParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_HOGTIED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_957(var uParam0, int iParam1)
{
	if (func_222(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (func_367(uParam0->f_23, 4096) && func_129(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_367(uParam0->f_23, 256))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

void func_958(bool bParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_959(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_509(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_509(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_960(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

var func_961(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_1093(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1094(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_1093(sVar0, iParam1, 0, 0, 1, 1);
}

float func_962(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_963()
{
	return Global_1935436.f_9;
}

void func_964(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_965(int iParam0, int iParam1)
{
	func_8(iParam0, iParam1);
}

void func_966(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_902(Local_251[iParam0 /*52*/][iParam1 /*17*/].f_6, sParam2, 0);
	Local_251[iParam0 /*52*/][iParam1 /*17*/].f_5 = sParam2;
}

void func_967(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_650(&(Local_251[iParam0 /*52*/][iParam1 /*17*/]), bParam2);
}

int func_968(int iParam0)
{
	struct<5> /*40*/ sVar0;
	var uVar5;

	if (func_1095())
	{
		return 0;
	}
	if (!func_1096(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0))
	{
	}
	return uVar5;
}

void func_969(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_916(1) < iParam0)
	{
		iParam0 = func_916(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_1026(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_970(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1028(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

Vector3 func_971(int iParam0)
{
	vector3 vVar0[24];

	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "LCMP_IG_NIACT1", 24);
			break;
		case 1:
			StringCopy(&cVar0, "LCMP_IG_NIBA", 24);
			break;
		case 2:
			StringCopy(&cVar0, "LCMP_IG_NOG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "LCMP_IG_NOTI", 24);
			break;
		case 4:
			StringCopy(&cVar0, "LCMP_IG_NIACTB", 24);
			break;
		case 5:
			StringCopy(&cVar0, "LCMP_IG_NICL", 24);
			break;
		case 6:
			StringCopy(&cVar0, "LCMP_IG_NIACT2", 24);
			break;
		case 7:
			StringCopy(&cVar0, "LCMP_IG_NIFM", 24);
			break;
		case 8:
			StringCopy(&cVar0, "LCMP_IG_NOSEE", 24);
			break;
		case 9:
			StringCopy(&cVar0, "LCMP_IG_NOAIN", 24);
			break;
		case 10:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 11:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
		case 12:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 13:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
	}
	return cVar0;
}

void func_972(char* sParam0, bool bParam1)
{
	func_1097(sParam0, bParam1, 0);
}

bool func_973(bool bParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_250(bParam0, 0, 1))
	{
		PED::_0xD65FDC686A031C83(bParam0, iParam1, fParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
		}
		if ((PED::_0x68821369A2CEADD5(bParam0, iParam1) && (bParam5 || !TASK::_0x02EBBB3989B7E695(bParam0))) && (iParam3 == 0 || PED::_0x569F1E1237508DEB(bParam0) == iParam3))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_974(int iParam0, float fParam1)
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
	func_1098(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

char* func_975()
{
	switch (iLocal_103)
	{
		case 0:
			return "LCMPF_IG1_R";
		case 1:
			return "LCMPF_IG1_ALTR";
		case 2:
			return "LCMP_ANGR_2";
		default:
			break;
	}
	return "";
}

void func_976(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!func_250(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			func_1099(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_39))
			{
				iParam0->f_39 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (func_1100(iParam0))
			{
				if (bParam1)
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_40, true, false);
				}
				func_1099(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				func_1101(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			func_1101(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_1100(iParam0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_40, Global_35, -1, -1f, -1f, -1f);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

int func_977()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C");
}

void func_978(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_69(iParam0);
	}
	else
	{
		func_329(iParam0);
	}
}

int func_979(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 10:
			return 32768;
		case 11:
			return 65536;
		case 12:
			return 131072;
		case 13:
			return 262144;
	}
	return 0;
}

bool func_980(int iParam0, int iParam1)
{
	struct<10> /*80*/ sVar0;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	Var0.f_9 = -1591664384;
	iVar17 = 0;
	if (!func_1102("ALL", &iVar14, &iVar15, iParam1, 0))
	{
		return false;
	}
	iVar16 = 0;
	while (iVar16 < iVar15)
	{
		if (func_1103(&Var0, iVar16, iVar14, iVar15))
		{
			if (Var0.f_4 != 0)
			{
				if (func_982(Var0.f_4, iParam0))
				{
					iVar17 = 1;
				}
				else
				{
					iVar16++;
				}
				func_1104(iVar14);
				return iVar17;
			}
		}
	}
}

int func_981(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		iVar0 = func_1105(iParam0);
		if (!func_1009(iVar0, 0))
		{
			iVar0 = func_1106(iParam0);
		}
	}
	else
	{
		iVar0 = func_1106(iParam0);
	}
	return iVar0;
}

int func_982(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_1107(iParam0);
	}
	if (func_1108(iParam0, iParam1))
	{
		return 0;
	}
	return func_1109(iParam0, iParam1);
}

void func_983(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 - (Global_1945188[iParam0 /*18*/].f_1 && iParam1));
}

void func_984(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_1038(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_985(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_986(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 || iParam1);
}

bool func_987(int iParam0, int iParam1)
{
	if (!func_596(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1) != 0;
}

void func_988(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
		PED::_0x20C5459379D75C1C(*bParam0, "LOG_WRK_ACC_OBS");
		PED::_0xA3C53CDE922BC78B(*bParam0, "LOG_WRK_ACC_OBS");
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(*bParam0, 178, true);
		PED::_0x20C5459379D75C1C(*bParam0, "");
		PED::_0xA3C53CDE922BC78B(*bParam0, "");
	}
	PED::_0x8AF46E5159A5B620(*bParam0, 291934926);
	func_242(*bParam0, 1, 1);
}

bool func_989(int iParam0)
{
	switch (iParam0)
	{
		case 810:
		case 811:
		case 812:
		case 813:
			return true;
	}
	return false;
}

Vector3 func_990(vector3 vParam0, float fParam3)
{
	vector3 vVar0;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return vParam0 + func_1110(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3));
}

Vector3 func_991(vector3 vParam0, float fParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;

	if (bParam4)
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f);
	}
	else
	{
		fVar0 = 0f;
	}
	vVar1 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), fVar0 };
	return vParam0 + func_1110(vVar1, fParam3);
}

bool func_992(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_993(int iParam0)
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

void func_994(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_1111(bParam0, iParam1))
		{
			if (func_1112(bParam0, iParam1))
			{
				if (func_1113(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_1114(bParam0);
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

void func_995(bool bParam0, int iParam1, bool bParam2)
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

void func_996(bool bParam0, bool bParam1)
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

void func_997(bool bParam0, int iParam1)
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

Vector3 func_998(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = func_1115(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_240(vVar0))
	{
	}
	return vVar0;
}

int func_999(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			func_948(bParam0);
			bParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(bParam0->f_1, 15);
			*bParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (bParam0->f_2 == 0)
				{
					*bParam0 = 3;
					return 1;
				}
				else
				{
					bParam0->f_4 = 1;
					*bParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*bParam0 = 3;
			}
			break;
		case 3:
			*bParam0 = 0;
			break;
	}
	return 0;
}

struct<4> /*32*/ func_1000(bool bParam0)
{
	return func_798(joaat("CHARACTER"), func_1116(), -1591664384, bParam0);
}

int func_1001(int iParam0)
{
	vector3 vVar0;

	if (!func_1009(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_1002(bool bParam0)
{
	int iVar0;

	iVar0 = func_870(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_798(923904168, func_1000(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_798(923904168, func_1000(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_798(923904168, func_1000(bParam0), -740156546, 0);
}

bool func_1003(int iParam0, bool bParam1)
{
	if (func_871(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_1013(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_1004(bool bParam0)
{
	int iVar0;

	iVar0 = func_870(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_798(271701509, func_1000(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_798(271701509, func_1000(bParam0), 12999093, 0);
}

bool func_1005(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_871(iParam0);
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

bool func_1006(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_870(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1007(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_1009(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_798(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_870(bParam6), &Var0, 0);
	return uVar4;
}

bool func_1008(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_870(0);
	*uParam1 = { func_798(iParam0, func_1002(0), iParam3, 0) };
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

bool func_1009(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_1010(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1011(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_1012(int iParam0)
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

bool func_1013(int iParam0)
{
	if (!func_1117(iParam0))
	{
		return false;
	}
	return func_1118(iParam0);
}

bool func_1014()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_1015(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_1119(iParam0))
	{
		iVar1 = func_1016(iParam0, iVar0);
		if (iVar1 != 0 && MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
		{
			MAP::_MAP_DISCOVERY_SET_ENABLED(iVar1);
		}
		iVar0++;
	}
}

int func_1016(int iParam0, int iParam1)
{
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
				return 1028223611;
			case 2:
				return 730222325;
			case 3:
				return -597970767;
		}
	}
	return 0;
}

int func_1017()
{
	int iVar0;

	iVar0 = func_1120();
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

int func_1018(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_1() != -1)
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
	fVar1 = func_962(MISC::ABSF(fVar1) < 1f, func_962(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_1019()
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

int func_1020(int iParam0, int iParam1, int iParam2)
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

int func_1021(int iParam0)
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

int func_1022()
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

void func_1023(int iParam0, bool bParam1, int iParam2)
{
	func_1121((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_1122(iParam0);
}

void func_1024(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_1123(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_1025(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1124(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1125(iVar5, &iVar2, &iVar0))
			{
				if (!func_1009(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1126(iVar2);
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
							if (func_1001(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1017() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_1017() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1127();
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

struct<2> /*16*/ func_1026(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

char* func_1027(int iParam0)
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

var func_1028(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1128(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1029(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1129(iParam0))
	{
		return 0;
	}
	if (!func_1014())
	{
		return 0;
	}
	if (!func_1130(iParam0, &iVar0, &iVar1))
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

bool func_1030()
{
	if (func_1131())
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

void func_1031(var uParam0, var uParam1)
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

bool func_1032(bool bParam0, int iParam1, int iParam2)
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

int func_1033(int iParam0)
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

void func_1034(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_199(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_143(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1035(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_1036(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1037(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_1038(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_1039(int iParam0, int iParam1)
{
	if (!func_861(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] && iParam1) != 0;
}

void func_1040(int iParam0)
{
	func_1132(func_864(iParam0));
}

bool func_1041(int iParam0)
{
	if (func_1133(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_1042()
{
	return true;
}

bool func_1043(int iParam0)
{
	if (func_1134())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_1044(int iParam0)
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

int func_1045(int iParam0)
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

void func_1046(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

bool func_1047(int iParam0)
{
	iParam0 = func_876(iParam0);
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

void func_1048(int iParam0)
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
	bVar0 = func_1135(iParam0);
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
	if (func_1136(iParam0, 64))
	{
		func_1049(iParam0);
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
	bVar3 = func_1013(42);
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
				func_1137(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_1049(iParam0);
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
		if (func_1138(1) < 1)
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
		func_1139(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1136(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(bVar0);
	bVar10 = false;
	iVar11 = func_1140(iParam0);
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
	fVar15 = func_1141(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1142(iParam0))
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
		func_1143(Global_1900383[iParam0 /*45*/].f_26);
		func_1144(Global_1900383[iParam0 /*45*/].f_26);
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
	if (func_518(bVar0) && !bVar9)
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
	iVar21 = func_1138(iParam0);
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

void func_1049(int iParam0)
{
	iParam0 = func_876(iParam0);
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

float func_1050(vector3 vParam0, vector3 vParam3)
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

bool func_1051(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

var func_1052(int iParam0)
{
	return iParam0->f_25;
}

bool func_1053(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1145(iParam0, iParam1))
		{
			if (!func_367(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_107(uParam2, 0, 0, 1, 0);
				func_143(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_367(iParam1->f_10, 1))
		{
			func_1146(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_199(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_1054(bool bParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		bVar4 = func_367(iParam4, 32);
		func_1071(iParam1, uParam2, 0);
		iVar5 = func_1147(*bParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			return true;
		}
		func_107(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_367(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_367(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_367(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_367(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_367(iParam4, 8388608) || func_367(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_367(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_367(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_1056(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*bParam0, "IloGeneralEvents", 2);
		}
		if (!func_1056(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_367(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*bParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_1148(bParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*bParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 301, false);
			if (func_367(iParam4, 268435456))
			{
				iVar8 = func_1149(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_1150(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_1056(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, false);
			}
			if (func_367(iParam4, 2) || func_367(iParam4, 16))
			{
				func_1055(*bParam0, 1, 1);
			}
			else
			{
				func_1055(*bParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_1055(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_1056(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_1057(bool bParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1151(*bParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1058(bool bParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1152(*bParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_367(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_1059(int iParam0)
{
	if (func_367(iParam0, 4))
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
	if (func_367(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_367(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_1060(bool bParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_916(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*bParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_545(Global_35)) || func_543(Global_35)) || func_541(Global_35));
	fVar12 = -1f;
	if (func_655(&(iParam1->f_13)))
	{
		fVar12 = func_374(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_300((uParam4[iVar0 /*17*/])->f_6);
		func_1153(*bParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1154(*bParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1155(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_107(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1156(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_1071(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_1157(iParam1, fParam6, iParam1->f_9))
					{
						func_48(&(iParam1->f_18));
						if (bVar6)
						{
							func_1156(uParam4, 0, 0);
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
		func_1158(iParam1, fParam2);
	}
	return bVar5;
}

void func_1061(var uParam0)
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

void func_1062(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1159(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_1158(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_1063(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_1160(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1161(iParam1, 0);
				func_1071(iParam1, uParam2, func_1056(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_1064(bool bParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_48(&(iParam1->f_18));
			return false;
		}
		else if (func_655(&(iParam1->f_18)))
		{
			func_264(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_655(&(iParam1->f_18)))
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
	return func_222(&(iParam1->f_18), fParam2);
	return true;
}

void func_1065(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1153(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1066(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_1067(int* iParam0)
{
	if (func_1056(iParam0, 0))
	{
		if (func_1162(iParam0))
		{
			func_1066(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1068(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1069(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1163(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1164(iParam0))
	{
		return false;
	}
	if (func_1165(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_1166(iParam0, 1)) || func_805(32768))
	{
		if (!func_1166(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_1167())
	{
		return false;
	}
	return true;
}

void func_1070(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_1071(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_301(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_76(iParam0, 0);
		}
	}
}

void func_1072(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_984(iParam0, 1);
	func_985(iParam0, 1);
	func_986(iParam0, 128);
}

void func_1073(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1028(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_1074(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1168())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1028(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1169(iVar0);
			func_1170(iVar0, 0, 0);
		}
		func_1028(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_808(func_1026(joaat("CAREER_CASH")), iVar1);
	}
}

void func_1075(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_1171(iParam0, iParam1, bParam2);
}

bool func_1076(bool bParam0, int iParam1, float fParam2)
{
	return func_1035(bParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_1077(bool bParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(bParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_1078(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_1910)
	{
		if (iParam0 == iLocal_1894[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1079(int iParam0)
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
			return 8;
		default:
			break;
	}
	return 0;
}

void func_1080(bool bParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;

	func_161(Local_1529.f_137, &iVar4, &iVar5, 0, 0);
	iVar6 = (810 + *iParam1);
	bVar8 = func_63(iVar6);
	if (iVar4 == -1 || iVar5 == -1)
	{
		return;
	}
	EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), func_426(*iParam1), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
	if (ENTITY::IS_ENTITY_DEAD(bVar8))
	{
		return;
	}
	iVar9 = (iVar5 - iVar4);
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_155(iVar3) || iVar3 == -1)
		{
		}
		else
		{
			bVar7 = func_63(iVar3);
			if (func_350(bVar7, bParam0))
			{
			}
			else
			{
				if ((func_238(iVar3, 0) && !ENTITY::IS_ENTITY_DEAD(bVar7)) && PED::IS_PED_HUMAN(bVar7))
				{
					func_241(iVar3, 0, 1, 0, 1, 1);
					func_242(bVar7, 1, 1);
					if ((bParam2 && func_213(bVar7, iLocal_75[2], 1, 0)) && func_250(bVar7, 0, 1))
					{
						PED::SET_PED_CONFIG_FLAG(bVar7, 168, true);
						func_1172(iVar3, -1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar7, false, true);
						PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bVar7, func_425(*iParam1), 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
						TASK::TASK_FLEE_COORD(0, func_425(*iParam1), 4, 1, 30f, 8000, 0);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_426(*iParam1), 0);
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
						TASK::TASK_PERFORM_SEQUENCE(bVar7, iLocal_193);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
					}
					else
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
						fVar2 = func_357(bVar7, bVar8, 1, 1);
						if (func_373(bVar7))
						{
							fVar1 = 0f;
						}
						else if (fVar2 < 35f)
						{
							fVar1 = 1f;
						}
						else if (fVar2 < 65f)
						{
							fVar1 = 0.5f;
						}
						else if (fVar2 < 120f)
						{
							fVar1 = 0.1f;
						}
						else
						{
							fVar1 = 0f;
						}
						if (fVar0 < fVar1 && func_250(bVar7, 0, 1))
						{
							PED::SET_PED_CONFIG_FLAG(bVar7, 168, true);
							func_1172(iVar3, -1);
							if (PED::IS_PED_USING_ANY_SCENARIO(bVar7))
							{
								TASK::_0xE7FA07624574B79A(bVar7, bVar8, 1, 1, 10f, 1, 0, 0, 0);
							}
							else
							{
								PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bVar7, func_425(*iParam1), 1);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_426(*iParam1), 0);
								TASK::TASK_STAND_STILL(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
								TASK::TASK_PERFORM_SEQUENCE(bVar7, iLocal_193);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
							}
							PED::_0xAAB050DA48B57978(bVar7, func_1173(), bVar7, -1, 4);
						}
					}
				}
				if (iLocal_1910 >= 15)
				{
				}
				else
				{
					iVar10++;
					if (iVar10 > iVar9)
					{
					}
					else
					{
						iVar3++;
					}
				}
			}
		}
	}
}

void func_1081(bool bParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	float fVar7[15];
	float fVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	int iVar28;

	func_161(Local_1529.f_137, &iVar3, &iVar4, 0, 0);
	iVar5 = 810;
	bVar6 = func_63(iVar5);
	if (ENTITY::IS_ENTITY_DEAD(bVar6))
	{
		return;
	}
	if (iVar3 == -1 || iVar4 == -1)
	{
		return;
	}
	iVar24 = (iVar4 - iVar3);
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		if (!func_155(iVar2) || iVar2 == -1)
		{
		}
		else
		{
			bVar27 = func_63(iVar2);
			if (func_350(bVar27, bParam1))
			{
			}
			else
			{
				iVar26 = -1;
				if ((func_238(iVar2, 0) && !ENTITY::IS_ENTITY_DEAD(bVar27)) && PED::IS_PED_HUMAN(bVar27))
				{
					func_241(iVar2, 0, 1, 0, 1, 1);
					func_242(bVar27, 1, 1);
					fVar23 = func_357(bVar27, bVar6, 1, 1);
					fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
					if (func_373(bVar27))
					{
						fVar1 = 0f;
					}
					else if (fVar23 < 35f)
					{
						fVar1 = 1f;
					}
					else if (fVar23 < 65f)
					{
						fVar1 = 0.75f;
					}
					else if (fVar23 < 120f)
					{
						fVar1 = 0.3f;
					}
					else if (fVar23 < 200f)
					{
						fVar1 = 0.1f;
					}
					else
					{
						fVar1 = 0f;
					}
					if (iLocal_1910 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1174(&fVar7);
						}
						else
						{
							fVar1 = -1f;
						}
					}
					if (fVar0 <= fVar1 && !ENTITY::IS_ENTITY_DEAD(bVar27))
					{
						func_1172(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iLocal_1910] = fVar23;
						}
					}
				}
				iVar25++;
				if (iVar25 > iVar24)
				{
				}
				else
				{
					iVar2++;
				}
				if (iLocal_98 == 2 && !func_1175(813))
				{
					iVar26 = func_1174(&fVar7);
					func_1172(813, iVar26);
					func_463(func_682(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iLocal_1910)
				{
					bVar27 = func_63(iLocal_1894[iVar28]);
					PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(bVar27, ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 2, false);
					TASK::CLEAR_PED_TASKS(bVar27, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, bParam0, -1, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
					TASK::_TASK_PERFORM_SEQUENCE_2(bVar27, iLocal_193, 0f, 2.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
					PED::_0xAAB050DA48B57978(bVar27, func_1173(), bParam0, -1, 4);
					PED::SET_PED_CONFIG_FLAG(bVar27, 178, false);
					PED::SET_PED_CONFIG_FLAG(bVar27, 130, true);
					func_988(&bVar27, 1);
					iVar28++;
				}
			}
		}
	}
}

int func_1082(int iParam0)
{
	switch (iParam0)
	{
		case 810:
			return 0;
		case 811:
			return 1;
		case 812:
			return 2;
		case 813:
			return 3;
		default:
			break;
	}
	return -1;
}

Vector3 func_1083(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1420.47f, -237.82f, 99.06f;
	}
	if (iParam0 == 1)
	{
		return -1419.73f, -237.87f, 99.02f;
	}
	if (iParam0 == 2)
	{
		return -1419.2f, -237.95f, 98.99f;
	}
	if (iParam0 == 3)
	{
		return -1418.34f, -238.03f, 98.95f;
	}
	return 0f, 0f, 0f;
}

bool func_1084(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_1176(bParam0))
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
		if (func_351(bParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_1085(bool bParam0)
{
	if (func_888(bParam0))
	{
		return false;
	}
	return true;
}

bool func_1086(bool bParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0]))
		{
			if (func_376((*uParam1)[iVar0], bParam0, 1) < 225f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1087(int iParam0)
{
	return iParam0 != 0;
}

bool func_1088(int iParam0)
{
	if (-1829635046 == func_1177(81053684))
	{
		if (func_1090(iParam0))
		{
			return true;
		}
	}
	else if (func_1178(-525676072, iParam0))
	{
		if (func_1090(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1089()
{
	return Global_1946054.f_2792;
}

bool func_1090(int iParam0)
{
	if (func_1178(81053684, iParam0))
	{
		return true;
	}
	if (func_1178(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1091(int iParam0)
{
	if (func_1179())
	{
		return false;
	}
	if (!func_1009(iParam0, 0))
	{
		return false;
	}
	if (!func_1180(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_1092(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_1181(iParam0);
	if (func_1182(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1088(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1183();
			}
			else
			{
				iVar0 = func_1184();
			}
		}
		else if (func_498(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1185();
		}
		else
		{
			iVar0 = func_1186();
		}
	}
	else if (func_1090(&iVar2))
	{
		if (func_1182(iVar2, -1303648999))
		{
			iVar0 = func_1183();
		}
		else
		{
			iVar0 = func_1184();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1185();
	}
	else
	{
		iVar0 = func_1186();
	}
	if (iVar0 != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

var func_1093(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1094(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_1187(sParam1));
}

bool func_1095()
{
	return false;
}

bool func_1096(int iParam0, var uParam1)
{
	if (!func_1188(iParam0))
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

void func_1097(char* sParam0, bool bParam1, bool bParam2)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, bParam1, bParam2);
}

Vector3 func_1098(vector3 vParam0)
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

void func_1099(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> /*56*/ sVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(bParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), bParam1, -1f);
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(bParam0, bParam1, iParam4, iParam5, iParam6, fParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(bParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_1189(bParam0, bParam1, iParam18);
	}
}

bool func_1100(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_39))
	{
		return true;
	}
	if (func_278(iParam0->f_40, 1, 1) < iParam0->f_42)
	{
		return false;
	}
	if (func_213(Global_35, iParam0->f_39, 1, 0))
	{
		return true;
	}
	if (!func_213(iParam0->f_40, iParam0->f_39, 1, 0))
	{
		return false;
	}
	return true;
}

void func_1101(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
		}
		func_1190(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

bool func_1102(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_870(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1103(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1104(int iParam0)
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

int func_1105(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1191(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1192(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1106(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_1193(iVar1);
		}
	}
	return iVar0;
}

int func_1107(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1914319.f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1914319.f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_1108(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_1182(iParam0, 1490540191))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1109(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	int iVar6;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_864(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1096(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_1194(iVar5);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1110(vector3 vParam0, float fParam3)
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

bool func_1111(bool bParam0, int iParam1)
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

bool func_1112(bool bParam0, int iParam1)
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

bool func_1113(bool bParam0, int iParam1)
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
	if (!func_1111(bParam0, iVar0))
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

void func_1114(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

float func_1115(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> /*32*/ func_1116()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

bool func_1117(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1118(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_1119(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 5 + 1;
		case 1:
			return 5 + 1;
		case 2:
			return 4 + 1;
		case 3:
			return 2 + 1;
	}
	return -1;
}

int func_1120()
{
	return Global_40.f_11095.f_35;
}

void func_1121(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_1195(bParam1);
	}
}

void func_1122(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_1123(int iParam0)
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

bool func_1124(int iParam0)
{
	vector3 vVar0;

	if (!func_1096(23, &vVar0))
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

bool func_1125(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_1096(23, &Var0))
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

int func_1126(int iParam0)
{
	return iParam0;
}

int func_1127()
{
	int iVar0;

	iVar0 = func_1017();
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

void func_1128(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_1129(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1130(int iParam0, int iParam1, int iParam2)
{
	if (!func_1129(iParam0))
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

bool func_1131()
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

void func_1132(int iParam0)
{
	Global_1914319.f_15923 = iParam0;
}

bool func_1133(int iParam0)
{
	return iParam0 != 0;
}

bool func_1134()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

int func_1135(int iParam0)
{
	iParam0 = func_876(iParam0);
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

bool func_1136(int iParam0, int iParam1)
{
	iParam0 = func_876(iParam0);
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

void func_1137(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_1197(func_1196(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_1198())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1019();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1138(int iParam0)
{
	iParam0 = func_876(iParam0);
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

void func_1139(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_1197(func_1196(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1198())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1019())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1140(int iParam0)
{
	iParam0 = func_876(iParam0);
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

float func_1141(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_1142(int iParam0)
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

	iParam0 = func_876(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1199(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1138(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1138(iParam0) + 1;
	fVar6 = func_1200(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1115(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1143(int iParam0)
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

void func_1144(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

bool func_1145(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1201((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1146(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1159(uParam0[iVar0 /*17*/]))
		{
			func_905(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_1147(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_1202(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_300((uParam2[iVar0 /*17*/])->f_6))
		{
			func_905(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_1148(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1203(*bParam0);
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

int func_1149(var uParam0, int iParam1)
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

void func_1150(int* iParam0, int* iParam1)
{
	if (!func_1056(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_905(iParam1, 19);
			func_1161(iParam0, 23);
			func_1204(iParam1, 2);
		}
	}
}

bool func_1151(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_1205(16))
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
					func_1206(16);
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

void func_1152(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1202(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_1153(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_1159(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1202(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1154(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1207(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_918(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_761(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_761(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1208(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1155(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_920(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1209(iParam1, 1))
	{
		func_1210(iParam1, 1);
		return true;
	}
	return false;
}

void func_1156(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_649(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_1157(int* iParam0, float fParam1, bool bParam2)
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

void func_1158(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_1159(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1160(int iParam0)
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

void func_1161(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_1162(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_1163(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_1164(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_1166(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1166(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1165(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1166(iParam0, 65536) && !func_1166(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1166(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1166(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1166(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_1167()
{
	return Global_1905944.f_5694;
}

bool func_1168()
{
	if (func_1211())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_1169(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1212((Global_40.f_4283.f_325 + iParam0));
}

void func_1170(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1168())
	{
		func_1028(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_1028(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

void func_1171(int iParam0, int iParam1, bool bParam2)
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

void func_1172(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_1894[iParam1] = iParam0;
	}
	else
	{
		iLocal_1894[iLocal_1910] = iParam0;
		iLocal_1910++;
	}
}

char* func_1173()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "Default_Shocked";
		case 1:
			return "Default_Scared";
			return "";
			default:
				break;
	}
}

int func_1174(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iLocal_1910)
	{
		if ((*fParam0)[iVar0] > fVar2)
		{
			iVar1 = iVar0;
			fVar2 = (*fParam0)[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1175(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_1910)
	{
		if (iLocal_1894[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1176(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(bParam0, func_539(), 1))
	{
		return true;
	}
	return false;
}

int func_1177(int iParam0)
{
	int iVar0;

	iVar0 = func_1214(func_1213(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_1178(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1214(func_1213(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_871(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_1179()
{
	if (Global_1946054.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946054.f_2791)) < 1250)
	{
		return true;
	}
	if (func_1215())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

bool func_1180(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_1009(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1001(iParam0);
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
		if (!func_1216(iParam0, 1))
		{
			return false;
		}
	}
	return func_1217(iParam0, 0, bParam2) >= iParam1;
}

int func_1181(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_1090(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1182(int iParam0, int iParam1)
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

int func_1183()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_1218())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1184()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_1218())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1185()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_1218())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1186()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_1218())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

char* func_1187(char* sParam0)
{
	return sParam0;
}

bool func_1188(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1189(bool bParam0, bool bParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(bParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(bParam0, bParam1);
	PED::_0xF634E2892220EF34(bParam0, iParam2);
}

void func_1190(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	func_1219(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

void func_1191(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
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

bool func_1192(int iParam0, int iParam1, int iParam2, int iParam3)
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
	uVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(iParam0, iParam1, iParam2);
	return uVar2;
}

int func_1193(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::GET_IS_ANIMAL(iParam0) && !ENTITY::_GET_IS_BIRD(iParam0))
	{
		return 0;
	}
	func_1191(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_1192(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

int func_1194(int iParam0)
{
	return func_1220(iParam0);
}

void func_1195(bool bParam0)
{
	func_1221(bParam0);
	Global_1954819.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

char* func_1196(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_1222(37, iParam0))
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
	if (func_1222(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_1197(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1223(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_1198()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_1199(int iParam0)
{
	iParam0 = func_876(iParam0);
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

float func_1200(int iParam0)
{
	iParam0 = func_876(iParam0);
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

int func_1201(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1202(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_300(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_301(&(iParam1->f_6), 0, 1);
	}
	if (!func_300(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1159(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_912(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_300(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1208(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1224(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1225(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_901(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1224(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_761(iParam1->f_6, 0, 1);
				}
				else
				{
					func_761(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1203(int iParam0)
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

void func_1204(int* iParam0, int iParam1)
{
	if (!func_904(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_905(iParam0, 14);
		}
	}
}

bool func_1205(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1206(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_1207(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1208(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_300(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_591(iParam0);
	func_1224(iParam0, 18, 0, 1);
	func_1224(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_1209(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_300(iParam0))
	{
		return false;
	}
	iVar0 = func_591(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_1210(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_591(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_1211()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_1212(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_1026(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_1213(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1226(iVar0);
}

int func_1214(int iParam0, int iParam1)
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

bool func_1215()
{
	int iVar0;

	iVar0 = Global_1946054.f_529[9];
	iVar0 = (iVar0 + Global_1946054.f_529[4]);
	iVar0 = (iVar0 + Global_1946054.f_529[10]);
	iVar0 = (iVar0 + Global_1946054.f_529[1]);
	iVar0 = (iVar0 + Global_1946054.f_529[2]);
	iVar0 = (iVar0 + Global_1946054.f_529[6]);
	iVar0 = (iVar0 + Global_1946054.f_529[29]);
	iVar0 = (iVar0 + Global_1946054.f_529[26]);
	iVar0 = (iVar0 + Global_1946054.f_529[18]);
	iVar0 = (iVar0 + Global_1946054.f_529[19]);
	return iVar0 > 0;
}

bool func_1216(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_1009(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_1227(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1102("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1103(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_342(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_1104(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1104(iVar1);
	}
	return false;
}

int func_1217(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1009(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1001(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_1227(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_1228(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_870(bParam2), iParam0, 0);
	return iVar2;
}

int func_1218()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_1229(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_1229(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_1219(bool bParam0)
{
	if (bParam0)
	{
		func_1230(4);
	}
	func_1230(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

int func_1220(int iParam0)
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

void func_1221(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_1222(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1231(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_1232())
	{
		return func_1231(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_1231(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_1223(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_1224(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_591(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_1225(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_591(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_1226(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_1233(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1227(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_1009(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1001(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_1182(iParam0, 1399091007))
	{
		func_1234(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1228(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1235(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1236(&Var0, func_1002(0));
	}
	if (!func_1237(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_1104(iVar18);
	return iVar19;
}

bool func_1229(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

void func_1230(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 || iParam0);
}

bool func_1231(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1232()
{
	return Global_1109000.f_245;
}

int func_1233(int iParam0, int iParam1)
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

void func_1234(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_1235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1236(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1237(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_870(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

