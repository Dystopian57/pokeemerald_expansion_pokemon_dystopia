# 1 "data/maps/PastLittlerootTown/scripts.pory"


PastLittlerootTown_MapScripts::
# 6 "data/maps/PastLittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LoadPastSprite
	.byte 0


LoadPastSprite::
# 12 "data/maps/PastLittlerootTown/scripts.pory"
	checkplayergender
# 13 "data/maps/PastLittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LoadPastSprite_2
LoadPastSprite_1:
# 17 "data/maps/PastLittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LoadPastSprite_4
	return

LoadPastSprite_2:
# 14 "data/maps/PastLittlerootTown/scripts.pory"
	setflag pastplayerf
	goto LoadPastSprite_1

LoadPastSprite_4:
# 18 "data/maps/PastLittlerootTown/scripts.pory"
	setflag pastplayerm
	return


PastOutsideTrigger::
# 24 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_FLASHBACK_DREAM, 2
	return


PastNightmareZoneReturn::
# 30 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 31 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastNightmareZoneReturn_Text_0
# 32 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastNightmareZoneReturn_Movement_0
# 33 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 34 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastNightmareZoneTrigger::
# 40 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_FLASHBACK_DREAM, 3
	return


PastShadeWeather::
# 45 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 46 "data/maps/PastLittlerootTown/scripts.pory"
	setweather WEATHER_SHADE
# 47 "data/maps/PastLittlerootTown/scripts.pory"
	doweather
# 48 "data/maps/PastLittlerootTown/scripts.pory"
	fadeoutbgm 1
# 49 "data/maps/PastLittlerootTown/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, FALSE
# 50 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastPlayerHouseSign::
# 55 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 56 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastPlayerHouseSign_Text_0
# 57 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastRivalHouseSign::
# 63 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 64 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastRivalHouseSign_Text_0
# 65 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastLabSign::
# 71 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 72 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastLabSign_Text_0
# 73 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastTownSign::
# 79 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 80 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastTownSign_Text_0
# 81 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastNormanFlashback::
# 86 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 87 "data/maps/PastLittlerootTown/scripts.pory"
	special SpawnCameraObject
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PastNormanFlashback_Movement_0
# 89 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 90 "data/maps/PastLittlerootTown/scripts.pory"
	special RemoveCameraObject
# 91 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 92 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastNormanFlashback_Text_0
# 94 "data/maps/PastLittlerootTown/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_WEAK
# 95 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 96 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastNormanFlashback_Text_1
# 98 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 99 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastNormanFlashback_Text_2
# 102 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 104 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_LEDGE
# 105 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 20, PastNormanFlashback_Movement_1
# 106 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 107 "data/maps/PastLittlerootTown/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_HIGH_PITCH
# 108 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker NULL
# 109 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastNormanFlashback_Text_3
# 110 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 112 "data/maps/PastLittlerootTown/scripts.pory"
	special SpawnCameraObject
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PastNormanFlashback_Movement_2
# 114 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 115 "data/maps/PastLittlerootTown/scripts.pory"
	special RemoveCameraObject
# 117 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_FLASHBACK_DREAM, 4
# 118 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastWarFlashback::
# 123 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 124 "data/maps/PastLittlerootTown/scripts.pory"
	special SpawnCameraObject
# 125 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PastNormanFlashback_Movement_2
# 126 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 127 "data/maps/PastLittlerootTown/scripts.pory"
	special RemoveCameraObject
# 128 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastWarFlashback_Text_0
# 130 "data/maps/PastLittlerootTown/scripts.pory"
	playmoncry SPECIES_VENOMOTH, CRY_MODE_NORMAL
# 131 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastWarFlashback_Text_1
# 132 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 134 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_M_CONFUSE_RAY
# 135 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 137 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_LEDGE
# 138 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 22, PastWarFlashback_Movement_0
# 139 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 140 "data/maps/PastLittlerootTown/scripts.pory"
	playmoncry SPECIES_PRIMEAPE, CRY_MODE_WEAK
# 141 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker [ SP_NAME_PRIMEAPE ]
# 143 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastWarFlashback_Text_2
# 145 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 22, PastWarFlashback_Movement_1
# 146 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 147 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 148 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 22, PastWarFlashback_Movement_2
# 149 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 150 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 153 "data/maps/PastLittlerootTown/scripts.pory"
	playmoncry SPECIES_PRIMEAPE, CRY_MODE_WEAK
# 154 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker [ SP_NAME_PRIMEAPE ]
# 156 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker NULL
# 158 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastWarFlashback_Text_3
# 159 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 161 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_LEDGE
# 162 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 10, PastWarFlashback_Movement_3
# 163 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 19, PastWarFlashback_Movement_3
# 164 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 165 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 166 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastWarFlashback_Text_4
# 167 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 169 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker NULL
# 171 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 22, PastWarFlashback_Movement_4
# 172 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 173 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 178 "data/maps/PastLittlerootTown/scripts.pory"
	special SpawnCameraObject
# 179 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PastNormanFlashback_Movement_0
# 180 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 181 "data/maps/PastLittlerootTown/scripts.pory"
	special RemoveCameraObject
# 183 "data/maps/PastLittlerootTown/scripts.pory"
	playmoncry SPECIES_PRIMEAPE, CRY_MODE_HIGH_PITCH
# 184 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_M_STRENGTH
# 185 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8004, 2
# 186 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8005, 6
# 187 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8006, 4
# 188 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8007, 4
# 189 "data/maps/PastLittlerootTown/scripts.pory"
	special ShakeCamera
# 190 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 191 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_M_STRENGTH
# 192 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8004, 2
# 193 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8005, 6
# 194 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8006, 4
# 195 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8007, 4
# 196 "data/maps/PastLittlerootTown/scripts.pory"
	special ShakeCamera
# 197 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 198 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_M_BRICK_BREAK
# 199 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8004, 2
# 200 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8005, 6
# 201 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8006, 4
# 202 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8007, 4
# 203 "data/maps/PastLittlerootTown/scripts.pory"
	special ShakeCamera
# 204 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 207 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_FLASHBACK_DREAM, 5
# 208 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastRivalTrauma::
# 214 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 216 "data/maps/PastLittlerootTown/scripts.pory"
	checkplayergender
# 217 "data/maps/PastLittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PastRivalTrauma_2
# 219 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastRivalTrauma_Text_1
PastRivalTrauma_1:
# 221 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastRivalTrauma_Text_2
# 222 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 223 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 24, PastRivalTrauma_Movement_0
# 224 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 25, PastRivalTrauma_Movement_0
# 225 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement 24
# 226 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement 25
# 227 "data/maps/PastLittlerootTown/scripts.pory"
	removeobject 24
# 228 "data/maps/PastLittlerootTown/scripts.pory"
	removeobject 25
# 229 "data/maps/PastLittlerootTown/scripts.pory"
	setflag pastplayerm
# 230 "data/maps/PastLittlerootTown/scripts.pory"
	setflag pastplayerf
# 231 "data/maps/PastLittlerootTown/scripts.pory"
	release
# 232 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_FLASHBACK_DREAM, 6
	return

PastRivalTrauma_2:
# 218 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastRivalTrauma_Text_0
	goto PastRivalTrauma_1


PastRivalBlames::
# 237 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 238 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastRivalBlames_Text_0
# 239 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastGruntsTakeMankey::
# 243 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 244 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_0
# 245 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 26, PastGruntsTakeMankey_Movement_1
# 246 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 27, PastGruntsTakeMankey_Movement_2
# 247 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastGruntsTakeMankey_Text_0
# 248 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 249 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PastGruntsTakeMankey_Movement_3
# 250 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 252 "data/maps/PastLittlerootTown/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_WEAK
# 253 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 254 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastGruntsTakeMankey_Text_1
# 256 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 27, PastGruntsTakeMankey_Movement_4
# 257 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 26, PastGruntsTakeMankey_Movement_5
# 258 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8004, 2
# 259 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8005, 6
# 260 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8006, 4
# 261 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8007, 4
# 262 "data/maps/PastLittlerootTown/scripts.pory"
	special ShakeCamera
# 263 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_M_STRENGTH
# 264 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PastGruntsTakeMankey_Movement_6
# 265 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 266 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 26, PastGruntsTakeMankey_Movement_7
# 268 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_5
# 270 "data/maps/PastLittlerootTown/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_HIGH_PITCH
# 271 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 272 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastGruntsTakeMankey_Text_2
# 273 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 26, PastGruntsTakeMankey_Movement_8
# 276 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 27, PastGruntsTakeMankey_Movement_8
# 277 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PastGruntsTakeMankey_Movement_8
# 279 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_WALL_HIT
# 280 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_5
# 281 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 283 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_WALL_HIT
# 284 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_5
# 285 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 287 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_WALL_HIT
# 288 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_5
# 289 "data/maps/PastLittlerootTown/scripts.pory"
	waitse
# 291 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement 27
# 293 "data/maps/PastLittlerootTown/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_HIGH_PITCH
# 294 "data/maps/PastLittlerootTown/scripts.pory"
	setspeaker [ SP_NAME_MANKEY ]
# 295 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastGruntsTakeMankey_Text_2
# 296 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 298 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_WALL_HIT
# 299 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_5
# 300 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 302 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_WALL_HIT
# 303 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_5
# 304 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 306 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_WALL_HIT
# 307 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_5
# 308 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 310 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8004, 2
# 311 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8005, 6
# 312 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8006, 4
# 313 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8007, 4
# 314 "data/maps/PastLittlerootTown/scripts.pory"
	special ShakeCamera
# 315 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_M_STRENGTH
# 317 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_5
# 318 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 320 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8004, 2
# 321 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8005, 6
# 322 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8006, 4
# 323 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_0x8007, 4
# 324 "data/maps/PastLittlerootTown/scripts.pory"
	special ShakeCamera
# 325 "data/maps/PastLittlerootTown/scripts.pory"
	playse SE_M_STRENGTH
# 327 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastGruntsTakeMankey_Movement_5
# 328 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 330 "data/maps/PastLittlerootTown/scripts.pory"
	setvar VAR_FLASHBACK_DREAM, 7
# 331 "data/maps/PastLittlerootTown/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 332 "data/maps/PastLittlerootTown/scripts.pory"
	destroyfollowernpc
# 333 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


PastNoMusic::
# 337 "data/maps/PastLittlerootTown/scripts.pory"
	fadeoutbgm 1
# 338 "data/maps/PastLittlerootTown/scripts.pory"
	playbgm MUS_NONE, FALSE
	return


PastBrendan::
# 343 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 344 "data/maps/PastLittlerootTown/scripts.pory"
	fadeoutbgm 1
# 345 "data/maps/PastLittlerootTown/scripts.pory"
	playbgm MUS_NONE, FALSE
# 346 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastBrendan_Text_0
# 347 "data/maps/PastLittlerootTown/scripts.pory"
	closemessage
# 349 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 11, PastWarFlashback_Movement_2
# 350 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement 11
# 351 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastBrendan_Text_1
# 353 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement 11, PastBrendan_Movement_0
# 354 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement 11
# 355 "data/maps/PastLittlerootTown/scripts.pory"
	removeobject 11
# 356 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastRivalTrauma_Movement_0
# 357 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 358 "data/maps/PastLittlerootTown/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 360 "data/maps/PastLittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 361 "data/maps/PastLittlerootTown/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 362 "data/maps/PastLittlerootTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 363 "data/maps/PastLittlerootTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 366 "data/maps/PastLittlerootTown/scripts.pory"
	compare VAR_FLASHBACK_WAKEUPLOCATION, 1
	goto_if_eq PastBrendan_2
PastBrendan_1:
# 369 "data/maps/PastLittlerootTown/scripts.pory"
	compare VAR_FLASHBACK_WAKEUPLOCATION, 2
	goto_if_eq PastBrendan_4
	return

PastBrendan_2:
# 367 "data/maps/PastLittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 0
	goto PastBrendan_1

PastBrendan_4:
# 370 "data/maps/PastLittlerootTown/scripts.pory"
	warpsilent MAP_POKE_INN_ROOM2, 2
	return


PastNoReturnAfterMankey::
# 375 "data/maps/PastLittlerootTown/scripts.pory"
	lock
# 376 "data/maps/PastLittlerootTown/scripts.pory"
	msgbox PastNoReturnAfterMankey_Text_0
# 377 "data/maps/PastLittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PastNightmareZoneReturn_Movement_0
# 378 "data/maps/PastLittlerootTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 379 "data/maps/PastLittlerootTown/scripts.pory"
	release
	return


# 32 "data/maps/PastLittlerootTown/scripts.pory"
PastNightmareZoneReturn_Movement_0:
# 32 "data/maps/PastLittlerootTown/scripts.pory"
	walk_up
	step_end

# 88 "data/maps/PastLittlerootTown/scripts.pory"
PastNormanFlashback_Movement_0:
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
# 88 "data/maps/PastLittlerootTown/scripts.pory"
	walk_left
	step_end

# 105 "data/maps/PastLittlerootTown/scripts.pory"
PastNormanFlashback_Movement_1:
# 105 "data/maps/PastLittlerootTown/scripts.pory"
	jump_in_place_down
	step_end

# 113 "data/maps/PastLittlerootTown/scripts.pory"
PastNormanFlashback_Movement_2:
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 113 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
	step_end

# 138 "data/maps/PastLittlerootTown/scripts.pory"
PastWarFlashback_Movement_0:
# 138 "data/maps/PastLittlerootTown/scripts.pory"
	jump_in_place_up
	step_end

# 145 "data/maps/PastLittlerootTown/scripts.pory"
PastWarFlashback_Movement_1:
# 145 "data/maps/PastLittlerootTown/scripts.pory"
	face_right
	step_end

# 148 "data/maps/PastLittlerootTown/scripts.pory"
PastWarFlashback_Movement_2:
# 148 "data/maps/PastLittlerootTown/scripts.pory"
	face_down
	step_end

# 162 "data/maps/PastLittlerootTown/scripts.pory"
PastWarFlashback_Movement_3:
# 162 "data/maps/PastLittlerootTown/scripts.pory"
	jump_in_place_left
	step_end

# 171 "data/maps/PastLittlerootTown/scripts.pory"
PastWarFlashback_Movement_4:
# 171 "data/maps/PastLittlerootTown/scripts.pory"
	walk_down
	step_end

# 223 "data/maps/PastLittlerootTown/scripts.pory"
PastRivalTrauma_Movement_0:
# 223 "data/maps/PastLittlerootTown/scripts.pory"
	walk_down_affine
	step_end

# 244 "data/maps/PastLittlerootTown/scripts.pory"
PastGruntsTakeMankey_Movement_0:
# 244 "data/maps/PastLittlerootTown/scripts.pory"
	walk_in_place_down
	step_end

# 245 "data/maps/PastLittlerootTown/scripts.pory"
PastGruntsTakeMankey_Movement_1:
# 245 "data/maps/PastLittlerootTown/scripts.pory"
	walk_down
# 245 "data/maps/PastLittlerootTown/scripts.pory"
	face_right
	step_end

# 246 "data/maps/PastLittlerootTown/scripts.pory"
PastGruntsTakeMankey_Movement_2:
# 246 "data/maps/PastLittlerootTown/scripts.pory"
	walk_down
# 246 "data/maps/PastLittlerootTown/scripts.pory"
	face_left
	step_end

# 249 "data/maps/PastLittlerootTown/scripts.pory"
PastGruntsTakeMankey_Movement_3:
# 249 "data/maps/PastLittlerootTown/scripts.pory"
	face_left
# 249 "data/maps/PastLittlerootTown/scripts.pory"
	face_right
# 249 "data/maps/PastLittlerootTown/scripts.pory"
	face_left
# 249 "data/maps/PastLittlerootTown/scripts.pory"
	face_right
# 249 "data/maps/PastLittlerootTown/scripts.pory"
	face_left
	step_end

# 256 "data/maps/PastLittlerootTown/scripts.pory"
PastGruntsTakeMankey_Movement_4:
# 256 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 256 "data/maps/PastLittlerootTown/scripts.pory"
	face_left
	step_end

# 257 "data/maps/PastLittlerootTown/scripts.pory"
PastGruntsTakeMankey_Movement_5:
# 257 "data/maps/PastLittlerootTown/scripts.pory"
	walk_in_place_right
	step_end

# 264 "data/maps/PastLittlerootTown/scripts.pory"
PastGruntsTakeMankey_Movement_6:
# 264 "data/maps/PastLittlerootTown/scripts.pory"
	jump_right
	step_end

# 266 "data/maps/PastLittlerootTown/scripts.pory"
PastGruntsTakeMankey_Movement_7:
# 266 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
	step_end

# 275 "data/maps/PastLittlerootTown/scripts.pory"
PastGruntsTakeMankey_Movement_8:
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
# 275 "data/maps/PastLittlerootTown/scripts.pory"
	walk_right
	step_end

# 353 "data/maps/PastLittlerootTown/scripts.pory"
PastBrendan_Movement_0:
# 353 "data/maps/PastLittlerootTown/scripts.pory"
	walk_down_affine
# 353 "data/maps/PastLittlerootTown/scripts.pory"
	walk_down_affine
	step_end

PastNightmareZoneReturn_Text_0:
# 31 "data/maps/PastLittlerootTown/scripts.pory"
	.string "... must find dad.$"

PastPlayerHouseSign_Text_0:
# 56 "data/maps/PastLittlerootTown/scripts.pory"
	.string "BRENDAN's House.$"

PastRivalHouseSign_Text_0:
# 64 "data/maps/PastLittlerootTown/scripts.pory"
	.string "MAY's House.$"

PastLabSign_Text_0:
# 72 "data/maps/PastLittlerootTown/scripts.pory"
	.string "Littleroot Pokémon Lab.$"

PastTownSign_Text_0:
# 80 "data/maps/PastLittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

PastNormanFlashback_Text_0:
# 92 "data/maps/PastLittlerootTown/scripts.pory"
	.string "{PLAYER}... again.$"

PastNormanFlashback_Text_1:
# 96 "data/maps/PastLittlerootTown/scripts.pory"
	.string "Ki...$"

PastNormanFlashback_Text_2:
# 99 "data/maps/PastLittlerootTown/scripts.pory"
	.string "We will not stop until you win at least\n"
	.string "once.\p"
	.string "Your parents were much stronger, and\n"
	.string "they...\p"
	.string "... this is for your own good. Command\n"
	.string "your Pokémon. Now!$"

PastNormanFlashback_Text_3:
# 109 "data/maps/PastLittlerootTown/scripts.pory"
	.string "VIIIGRRRR!$"

PastWarFlashback_Text_0:
# 128 "data/maps/PastLittlerootTown/scripts.pory"
	.string "Venomoth... Confuse Ray.$"

PastWarFlashback_Text_1:
# 131 "data/maps/PastLittlerootTown/scripts.pory"
	.string "Gzzz...!$"

PastWarFlashback_Text_2:
# 143 "data/maps/PastLittlerootTown/scripts.pory"
	.string "Priii...!?$"

PastWarFlashback_Text_3:
# 158 "data/maps/PastLittlerootTown/scripts.pory"
	.string "Primeape looks around with blank eyes.$"

PastWarFlashback_Text_4:
# 166 "data/maps/PastLittlerootTown/scripts.pory"
	.string "{PLAYER}, watch out!! Primeape is...!$"

PastRivalTrauma_Text_0:
# 218 "data/maps/PastLittlerootTown/scripts.pory"
	.string "{PLAYER}, guess what! My arm doesn't\n"
	.string "hurt anymore.$"

PastRivalTrauma_Text_1:
# 219 "data/maps/PastLittlerootTown/scripts.pory"
	.string "{PLAYER}, guess what! My leg doesn't\n"
	.string "hurt anymore.$"

PastRivalTrauma_Text_2:
# 221 "data/maps/PastLittlerootTown/scripts.pory"
	.string "{COLOR RED}tHaT mUsT mEaN It'S hEaLeD, rIiIgHT!?$"

PastRivalBlames_Text_0:
# 238 "data/maps/PastLittlerootTown/scripts.pory"
	.string "tHiS$"

PastGruntsTakeMankey_Text_0:
# 247 "data/maps/PastLittlerootTown/scripts.pory"
	.string "We must take this away.$"

PastGruntsTakeMankey_Text_1:
# 254 "data/maps/PastLittlerootTown/scripts.pory"
	.string "K-kii...?$"

PastGruntsTakeMankey_Text_2:
# 272 "data/maps/PastLittlerootTown/scripts.pory"
	.string "Kiii!$"

PastBrendan_Text_0:
# 346 "data/maps/PastLittlerootTown/scripts.pory"
	.string "...$"

PastBrendan_Text_1:
# 351 "data/maps/PastLittlerootTown/scripts.pory"
	.string "You are a failure.$"

PastNoReturnAfterMankey_Text_0:
# 376 "data/maps/PastLittlerootTown/scripts.pory"
	.string "Must... tell dad... to come have...\n"
	.string "breakfast.$"
