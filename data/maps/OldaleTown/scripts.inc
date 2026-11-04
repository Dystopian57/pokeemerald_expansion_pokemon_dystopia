# 1 "data/maps/OldaleTown/scripts.pory"


OldaleTown_MapScripts::
# 15 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTownMapscriptBundle
# 19 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ResetFountainHIHint
# 21 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleTownMapscriptBundle
	.byte 0


OldaleTownMapscriptBundle::
# 35 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_FOUNTAIN, OldaleTownMapscriptBundle_2
OldaleTownMapscriptBundle_1:
# 38 "data/maps/OldaleTown/scripts.pory"
	goto DayNightNPC
	return

OldaleTownMapscriptBundle_2:
# 36 "data/maps/OldaleTown/scripts.pory"
	clearflag oldalefountainsparkle
	goto OldaleTownMapscriptBundle_1


DayNightNPC::
# 47 "data/maps/OldaleTown/scripts.pory"
	gettimeofday
# 48 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightNPC_2
DayNightNPC_1:
# 53 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightNPC_5
DayNightNPC_4:
# 58 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightNPC_8
DayNightNPC_7:
# 63 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightNPC_11
DayNightNPC_10:
# 68 "data/maps/OldaleTown/scripts.pory"
endofdaynightnpc:
	return

DayNightNPC_2:
# 49 "data/maps/OldaleTown/scripts.pory"
	setflag nightnpc
# 50 "data/maps/OldaleTown/scripts.pory"
	clearflag daynpc
# 51 "data/maps/OldaleTown/scripts.pory"
	goto endofdaynightnpc
	goto DayNightNPC_1

DayNightNPC_5:
# 54 "data/maps/OldaleTown/scripts.pory"
	clearflag daynpc
# 55 "data/maps/OldaleTown/scripts.pory"
	setflag nightnpc
# 56 "data/maps/OldaleTown/scripts.pory"
	goto endofdaynightnpc
	goto DayNightNPC_4

DayNightNPC_8:
# 59 "data/maps/OldaleTown/scripts.pory"
	setflag nightnpc
# 60 "data/maps/OldaleTown/scripts.pory"
	clearflag daynpc
# 61 "data/maps/OldaleTown/scripts.pory"
	goto endofdaynightnpc
	goto DayNightNPC_7

DayNightNPC_11:
# 64 "data/maps/OldaleTown/scripts.pory"
	clearflag nightnpc
# 65 "data/maps/OldaleTown/scripts.pory"
	setflag daynpc
# 66 "data/maps/OldaleTown/scripts.pory"
	goto endofdaynightnpc
	goto DayNightNPC_10


ResetFountainHIHint::
	return


ChangeTrainerCardTest::
# 86 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_TOWER_GOLD
# 87 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_DOME_GOLD
# 88 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_PALACE_GOLD
# 89 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_ARENA_GOLD
# 90 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_FACTORY_GOLD
# 91 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_PIKE_GOLD
# 92 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_PYRAMID_GOLD
# 93 "data/maps/OldaleTown/scripts.pory"
	msgbox ChangeTrainerCardTest_Text_0
	return


GenderedSpriteOldale::
# 97 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


FountainCoinSparkle::
# 100 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset oldalefountainsparkle, FountainCoinSparkle_1
	return

FountainCoinSparkle_1:
# 101 "data/maps/OldaleTown/scripts.pory"
	dofieldeffectsparkle 10, 9, 1
# 102 "data/maps/OldaleTown/scripts.pory"
	setflag oldalefountainsparkle
	return


BalsamCallAfterWarehouse::
# 108 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset BalsamtoldtogoseeNorman, BalsamCallAfterWarehouse_1
# 134 "data/maps/OldaleTown/scripts.pory"
	release
	return

BalsamCallAfterWarehouse_1:
# 110 "data/maps/OldaleTown/scripts.pory"
	lock
# 111 "data/maps/OldaleTown/scripts.pory"
	playse SE_POKENAV_CALL
# 112 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_0
# 113 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_1
# 121 "data/maps/OldaleTown/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_le BalsamCallAfterWarehouse_5
BalsamCallAfterWarehouse_4:
# 126 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_3
# 127 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 129 "data/maps/OldaleTown/scripts.pory"
	setflag BalsamtoldtogoseeNorman
# 130 "data/maps/OldaleTown/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 132 "data/maps/OldaleTown/scripts.pory"
	release
	return

BalsamCallAfterWarehouse_5:
# 122 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_2
	goto BalsamCallAfterWarehouse_4


TimeofDayTest::
# 138 "data/maps/OldaleTown/scripts.pory"
	lock
# 139 "data/maps/OldaleTown/scripts.pory"
	gettimeofday
# 140 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq TimeofDayTest_2
TimeofDayTest_1:
# 144 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq TimeofDayTest_5
TimeofDayTest_4:
# 148 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq TimeofDayTest_8
TimeofDayTest_7:
# 152 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq TimeofDayTest_11
TimeofDayTest_10:
# 155 "data/maps/OldaleTown/scripts.pory"
endoftimeofdaytest:
# 156 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

TimeofDayTest_2:
# 141 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_0
# 142 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_1

TimeofDayTest_5:
# 145 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_1
# 146 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_4

TimeofDayTest_8:
# 149 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_2
# 150 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_7

TimeofDayTest_11:
# 153 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_3
# 154 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_10


OldaleWeather::
# 162 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 165 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 168 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 163 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 166 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 169 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


OldaleTruckBaseItem::
# 174 "data/maps/OldaleTown/scripts.pory"
	lock
# 175 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_TM_POUNCE
# 178 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


ConArtist103Rewards::
# 182 "data/maps/OldaleTown/scripts.pory"
	lock
# 183 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 184 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 186 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq ConArtist103Rewards_2
ConArtist103Rewards_1:
# 242 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq ConArtist103Rewards_5
ConArtist103Rewards_4:
# 247 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 248 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 188 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_8
ConArtist103Rewards_7:
# 235 "data/maps/OldaleTown/scripts.pory"
	goto_if_set conartistthanked, ConArtist103Rewards_10
	goto ConArtist103Rewards_1

ConArtist103Rewards_5:
# 243 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 244 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
	goto ConArtist103Rewards_4

ConArtist103Rewards_8:
# 190 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 192 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 193 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 194 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 195 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 196 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 197 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 201 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 202 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 203 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 204 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_13
ConArtist103Rewards_12:
# 226 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_15
	goto ConArtist103Rewards_7

ConArtist103Rewards_10:
# 236 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 237 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 238 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 239 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
	goto ConArtist103Rewards_1

ConArtist103Rewards_13:
# 205 "data/maps/OldaleTown/scripts.pory"
	removemoney 500
# 206 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 207 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 208 "data/maps/OldaleTown/scripts.pory"
	waitse
# 209 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 210 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 211 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 212 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 213 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_6
# 214 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 215 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 216 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_7
# 219 "data/maps/OldaleTown/scripts.pory"
	register_matchcall TRAINER_SHADYDEALER_103
# 220 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 221 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_8
# 222 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 2
# 223 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_12

ConArtist103Rewards_15:
# 227 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 228 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 229 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 230 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_9
# 232 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_7


OldaleVendingMachine::
# 253 "data/maps/OldaleTown/scripts.pory"
	lock
# 254 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 255 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 256 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 259 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 313 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 367 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 420 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 423 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 424 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 425 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 260 "data/maps/OldaleTown/scripts.pory"
	checkmoney 175
# 261 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 307 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 314 "data/maps/OldaleTown/scripts.pory"
	checkmoney 100
# 315 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 361 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 262 "data/maps/OldaleTown/scripts.pory"
	removemoney 175
# 263 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 264 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 265 "data/maps/OldaleTown/scripts.pory"
	waitse
# 271 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 272 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 273 "data/maps/OldaleTown/scripts.pory"
	waitse
# 275 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 276 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 277 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 279 "data/maps/OldaleTown/scripts.pory"
	random 20
# 280 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 281 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 283 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 284 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 285 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 286 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 287 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 289 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 290 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 291 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 292 "data/maps/OldaleTown/scripts.pory"
	waitse
# 293 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 295 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 296 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 301 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 368 "data/maps/OldaleTown/scripts.pory"
	checkmoney 200
# 369 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 415 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 316 "data/maps/OldaleTown/scripts.pory"
	removemoney 100
# 317 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 318 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 319 "data/maps/OldaleTown/scripts.pory"
	waitse
# 321 "data/maps/OldaleTown/scripts.pory"
	random 4
# 322 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, teagotstuck
# 323 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gottea
# 325 "data/maps/OldaleTown/scripts.pory"
gottea:
# 326 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 327 "data/maps/OldaleTown/scripts.pory"
	waitse
# 329 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 330 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 331 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TEA
# 333 "data/maps/OldaleTown/scripts.pory"
	random 20
# 334 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 335 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextratea
# 337 "data/maps/OldaleTown/scripts.pory"
gotextratea:
# 338 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 339 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 340 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TEA
# 341 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 343 "data/maps/OldaleTown/scripts.pory"
teagotstuck:
# 344 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 345 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 346 "data/maps/OldaleTown/scripts.pory"
	waitse
# 347 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 349 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 350 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 355 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 308 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 297 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 298 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 421 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 370 "data/maps/OldaleTown/scripts.pory"
	removemoney 200
# 371 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 372 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 373 "data/maps/OldaleTown/scripts.pory"
	waitse
# 375 "data/maps/OldaleTown/scripts.pory"
	random 4
# 376 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, lavacookiegotstuck
# 377 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotlavacookie
# 379 "data/maps/OldaleTown/scripts.pory"
gotlavacookie:
# 380 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 381 "data/maps/OldaleTown/scripts.pory"
	waitse
# 383 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 384 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 385 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 387 "data/maps/OldaleTown/scripts.pory"
	random 20
# 388 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 389 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextralavacookie
# 391 "data/maps/OldaleTown/scripts.pory"
gotextralavacookie:
# 392 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 393 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 394 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 395 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 397 "data/maps/OldaleTown/scripts.pory"
lavacookiegotstuck:
# 398 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 399 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 400 "data/maps/OldaleTown/scripts.pory"
	waitse
# 401 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 403 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 404 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 409 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 362 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 351 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 352 "data/maps/OldaleTown/scripts.pory"
	goto gottea
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 302 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 416 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 405 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 406 "data/maps/OldaleTown/scripts.pory"
	goto gotlavacookie
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 356 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 410 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 430 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 431 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 432 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 433 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 434 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 435 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 440 "data/maps/OldaleTown/scripts.pory"
	lock
# 441 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 442 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 446 "data/maps/OldaleTown/scripts.pory"
	lock
# 447 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 448 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 452 "data/maps/OldaleTown/scripts.pory"
	lock
# 453 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 454 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale102Sign::
# 459 "data/maps/OldaleTown/scripts.pory"
	lock
# 460 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale102Sign_Text_0
# 461 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalePeekingOldman::
# 465 "data/maps/OldaleTown/scripts.pory"
	lock
# 466 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 467 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldalePeekingOldman_2
OldalePeekingOldman_1:
# 471 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldalePeekingOldman_5
OldalePeekingOldman_4:
# 475 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_ge OldalePeekingOldman_8
OldalePeekingOldman_7:
# 479 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldalePeekingOldman_2:
# 468 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_0
	goto OldalePeekingOldman_1

OldalePeekingOldman_5:
# 472 "data/maps/OldaleTown/scripts.pory"
	applymovement 32, ConArtist103Rewards_Movement_0
# 473 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_1
	goto OldalePeekingOldman_4

OldalePeekingOldman_8:
# 476 "data/maps/OldaleTown/scripts.pory"
	applymovement 32, ConArtist103Rewards_Movement_0
# 477 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_2
	goto OldalePeekingOldman_7


OldaleOutsideHikerGuy::
# 483 "data/maps/OldaleTown/scripts.pory"
	lock
# 484 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 485 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 487 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 492 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 497 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 502 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 507 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 489 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 494 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 499 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 504 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 511 "data/maps/OldaleTown/scripts.pory"
	lock
# 512 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 513 "data/maps/OldaleTown/scripts.pory"
	applymovement 10, ConArtist103Rewards_Movement_0
# 514 "data/maps/OldaleTown/scripts.pory"
	applymovement 31, ConArtist103Rewards_Movement_0
# 516 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_3
OldaleOutsideParkNPC_1:
# 521 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_8
OldaleOutsideParkNPC_6:
# 528 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_13
OldaleOutsideParkNPC_11:
# 534 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_18
OldaleOutsideParkNPC_16:
# 540 "data/maps/OldaleTown/scripts.pory"
	applymovement 10, OldaleOutsideParkNPC_Movement_0
# 541 "data/maps/OldaleTown/scripts.pory"
	applymovement 31, OldaleOutsideParkNPC_Movement_0
# 542 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_2:
# 518 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_3:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_2
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_7:
# 523 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_8:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_7
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_12:
# 530 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_2
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_13:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_12
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_17:
# 536 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_3
	goto OldaleOutsideParkNPC_16

OldaleOutsideParkNPC_18:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_17
	goto OldaleOutsideParkNPC_16


OldaleOutsideOldGuy::
# 552 "data/maps/OldaleTown/scripts.pory"
	lock
# 553 "data/maps/OldaleTown/scripts.pory"
	applymovement 12, ConArtist103Rewards_Movement_0
# 554 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 558 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldWoman::
# 562 "data/maps/OldaleTown/scripts.pory"
	lock
# 563 "data/maps/OldaleTown/scripts.pory"
	applymovement 30, ConArtist103Rewards_Movement_0
# 564 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldWoman_Text_0
# 567 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


DLCTeacherOutside::
# 571 "data/maps/OldaleTown/scripts.pory"
	lock
# 572 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 573 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_lt DLCTeacherOutside_2
DLCTeacherOutside_1:
# 577 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_ge DLCTeacherOutside_5
DLCTeacherOutside_4:
# 584 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

DLCTeacherOutside_2:
# 574 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_0
	goto DLCTeacherOutside_1

DLCTeacherOutside_5:
# 578 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 579 "data/maps/OldaleTown/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 580 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_1
	goto DLCTeacherOutside_4


OldaleTown_GotoTherapy::
# 588 "data/maps/OldaleTown/scripts.pory"
	lock
# 589 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 590 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 591 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_0
# 592 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 593 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 595 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 596 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 597 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 598 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_2
# 599 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 600 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 601 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 602 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 603 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 608 "data/maps/OldaleTown/scripts.pory"
	goto_if_set sharpycameliaDLCcs, OldaleSharpyCameliaOutDLCCutscene_1
# 843 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleSharpyCameliaOutDLCCutscene_1:
# 610 "data/maps/OldaleTown/scripts.pory"
	lock
# 611 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 612 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 613 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 614 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_SKETCH
# 615 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 616 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 618 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 619 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 620 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 621 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 624 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 625 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 626 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 628 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 629 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 634 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 638 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 639 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 640 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 641 "data/maps/OldaleTown/scripts.pory"
	waitse
# 642 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 643 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 645 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 648 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 651 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 652 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 653 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 654 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 655 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 656 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 657 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 659 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 660 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 661 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 662 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 664 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 665 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 666 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 667 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 670 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 671 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 672 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 673 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 676 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 677 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 679 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 683 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 790 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 791 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 792 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 793 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 794 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 796 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 797 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 798 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 799 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 801 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 802 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 803 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 804 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 806 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 807 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 808 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 809 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 811 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 812 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 813 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 814 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_28
# 815 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 816 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 820 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 821 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_6
# 822 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 823 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 824 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 825 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 826 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 827 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_29
# 829 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 830 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 832 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 17, 0, 0
# 834 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpycameliaDLCcs
# 835 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 836 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 839 "data/maps/OldaleTown/scripts.pory"
	setflag finishedtherapy
# 840 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_5:
# 630 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 635 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 646 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 649 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 680 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 684 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 685 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 686 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 687 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 690 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 691 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 692 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 693 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 694 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 696 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 697 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 698 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 699 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 702 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 703 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 704 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 705 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 706 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 708 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 709 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 711 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 715 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_26
OldaleSharpyCameliaOutDLCCutscene_25:
# 721 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 722 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 723 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 724 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 727 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 728 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 729 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 730 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 731 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 733 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 734 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 735 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 736 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 737 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 738 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 739 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 740 "data/maps/OldaleTown/scripts.pory"
	waitse
# 741 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 742 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 743 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 744 "data/maps/OldaleTown/scripts.pory"
	waitmovement 17
# 745 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 747 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 748 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 749 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 750 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 752 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 753 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 754 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 755 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 757 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 758 "data/maps/OldaleTown/scripts.pory"
	waitmovement 17
# 759 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 760 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 761 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 762 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 764 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleOutsideParkNPC_Movement_0
# 765 "data/maps/OldaleTown/scripts.pory"
	waitmovement 17
# 766 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 767 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 768 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 769 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 772 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 773 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 774 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 775 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 776 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 777 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 778 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 780 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 781 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_6
# 782 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 785 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 786 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 712 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_22

OldaleSharpyCameliaOutDLCCutscene_26:
# 716 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 717 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 718 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 719 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_25


OldaleCamelia::
# 848 "data/maps/OldaleTown/scripts.pory"
	lock
# 850 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 875 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 876 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 877 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 878 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 880 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 881 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 882 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 883 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 886 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 887 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 888 "data/maps/OldaleTown/scripts.pory"
	waitmovement 16
# 889 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 853 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 854 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, ConArtist103Rewards_Movement_0
# 855 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 856 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 857 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 860 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 861 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 862 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 863 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 865 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 866 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 867 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 868 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


OldaleDevonGrunts::
# 899 "data/maps/OldaleTown/scripts.pory"
	lock
# 900 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 901 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_3
OldaleDevonGrunts_1:
# 914 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_8
OldaleDevonGrunts_6:
# 935 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_12
OldaleDevonGrunts_11:
# 979 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_eq OldaleDevonGrunts_15
OldaleDevonGrunts_14:
# 1109 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 903 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 904 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 907 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 908 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 910 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 911 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_3:
# 901 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Sharpydefeatedat103, OldaleDevonGrunts_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_7:
# 915 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 916 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
# 919 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 920 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 924 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_2
# 925 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 927 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleTown_GotoTherapy_Movement_0
# 928 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 930 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_8:
# 914 "data/maps/OldaleTown/scripts.pory"
	goto_if_set Sharpydefeatedat103, OldaleDevonGrunts_7
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_12:
# 936 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 937 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_7
# 940 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 941 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_8
# 943 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 944 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 945 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_9
# 946 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 948 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleDevonGrunts_18
OldaleDevonGrunts_17:
# 962 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleDevonGrunts_24
OldaleDevonGrunts_23:
# 966 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 967 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 969 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 970 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 971 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_30
OldaleDevonGrunts_29:
# 972 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_35
	goto OldaleDevonGrunts_11

OldaleDevonGrunts_15:
# 981 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 982 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_14
# 984 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_HELP, TRUE
# 985 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 986 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 987 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_21
OldaleDevonGrunts_20:
# 988 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_27
OldaleDevonGrunts_26:
# 989 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 990 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_15
# 991 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 992 "data/maps/OldaleTown/scripts.pory"
	setspeaker NULL
# 993 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 994 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_16
# 995 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_4
# 996 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_17
# 997 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 998 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 999 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 1000 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_33
OldaleDevonGrunts_32:
# 1001 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_38
OldaleDevonGrunts_37:
# 1002 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1003 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_18
# 1004 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1005 "data/maps/OldaleTown/scripts.pory"
	setspeaker NULL
# 1006 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_OPEN
# 1007 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_3
# 1008 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 1009 "data/maps/OldaleTown/scripts.pory"
	clearflag DOLL_BATTLE
# 1010 "data/maps/OldaleTown/scripts.pory"
	addobject 36
# 1011 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_4
# 1012 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1013 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1014 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_5
# 1015 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 1016 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1017 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_5
# 1018 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 1020 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_MIMIYURUI, CRY_MODE_NORMAL
# 1022 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_19
# 1023 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1024 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_6
# 1025 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_6
# 1026 "data/maps/OldaleTown/scripts.pory"
	waitmovement 15
# 1028 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro, TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro
# 1030 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_20
# 1033 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_4
# 1034 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_3
# 1035 "data/maps/OldaleTown/scripts.pory"
	waitmovement 14
# 1036 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1037 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_5
# 1038 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 1039 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1040 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_5
# 1041 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 1042 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1044 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_MIMIYURUI, CRY_MODE_NORMAL
# 1045 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_19
# 1047 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_5
# 1048 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 1049 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1050 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_21
# 1051 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1053 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_7
# 1054 "data/maps/OldaleTown/scripts.pory"
	waitmovement 14
# 1055 "data/maps/OldaleTown/scripts.pory"
	removeobject 14
# 1056 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1057 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1058 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_7
# 1059 "data/maps/OldaleTown/scripts.pory"
	waitmovement 15
# 1060 "data/maps/OldaleTown/scripts.pory"
	removeobject 15
# 1061 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1062 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1064 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 2
# 1065 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_LAVENDERHGSS, TRUE
# 1069 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, ConArtist103Rewards_Movement_0
# 1070 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1071 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_41
OldaleDevonGrunts_40:
# 1072 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_44
OldaleDevonGrunts_43:
# 1073 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1075 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_22
# 1078 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_47
OldaleDevonGrunts_46:
# 1079 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_50
OldaleDevonGrunts_49:
# 1080 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1082 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_23
# 1083 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1084 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1086 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1087 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_8
# 1088 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1089 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
# 1091 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1092 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_53
OldaleDevonGrunts_52:
# 1093 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_56
OldaleDevonGrunts_55:
# 1095 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1096 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1097 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1098 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_9
# 1099 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 1100 "data/maps/OldaleTown/scripts.pory"
	setflag DOLL_BATTLE
# 1101 "data/maps/OldaleTown/scripts.pory"
	removeobject 36
# 1102 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1103 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1105 "data/maps/OldaleTown/scripts.pory"
	setflag devonsdontblock102
# 1106 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 4
	goto OldaleDevonGrunts_14

OldaleDevonGrunts_18:
# 949 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 950 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_10
# 952 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleTown_GotoTherapy_Movement_0
# 953 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_11
# 957 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 958 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_12
	goto OldaleDevonGrunts_17

OldaleDevonGrunts_21:
# 987 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_20

OldaleDevonGrunts_24:
# 963 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleTown_GotoTherapy_Movement_0
# 964 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_13
	goto OldaleDevonGrunts_23

OldaleDevonGrunts_27:
# 988 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_26

OldaleDevonGrunts_30:
# 971 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalfappearsinOldale
	goto OldaleDevonGrunts_29

OldaleDevonGrunts_33:
# 1000 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_32

OldaleDevonGrunts_35:
# 972 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalmappearsinOldale
	goto OldaleDevonGrunts_11

OldaleDevonGrunts_38:
# 1001 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_37

OldaleDevonGrunts_41:
# 1071 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_40

OldaleDevonGrunts_44:
# 1072 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_43

OldaleDevonGrunts_47:
# 1078 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_46

OldaleDevonGrunts_50:
# 1079 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_49

OldaleDevonGrunts_53:
# 1092 "data/maps/OldaleTown/scripts.pory"
	setflag rivalfappearsinOldale
	goto OldaleDevonGrunts_52

OldaleDevonGrunts_56:
# 1093 "data/maps/OldaleTown/scripts.pory"
	setflag rivalmappearsinOldale
	goto OldaleDevonGrunts_55


OldaleRival::
# 1119 "data/maps/OldaleTown/scripts.pory"
	lock
# 1120 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1121 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1122 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_2
OldaleRival_1:
# 1123 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_5
OldaleRival_4:
# 1127 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1128 "data/maps/OldaleTown/scripts.pory"
	applymovement 21, ConArtist103Rewards_Movement_0
# 1129 "data/maps/OldaleTown/scripts.pory"
	applymovement 38, ConArtist103Rewards_Movement_0
# 1130 "data/maps/OldaleTown/scripts.pory"
	applymovement 39, ConArtist103Rewards_Movement_0
# 1131 "data/maps/OldaleTown/scripts.pory"
	goto_if_set OldaleDevonFightLost, OldaleRival_8
OldaleRival_7:
# 1151 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_4
# 1152 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1153 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_11
OldaleRival_10:
# 1154 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_17
OldaleRival_16:
# 1155 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1156 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_SWAGGER2
# 1157 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_5
# 1158 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1159 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_6
# 1160 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1161 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_23
OldaleRival_22:
# 1162 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_29
OldaleRival_28:
# 1163 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1164 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_7
# 1165 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1166 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_8
# 1167 "data/maps/OldaleTown/scripts.pory"
afteroldalerivallost:
# 1168 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1169 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 1171 "data/maps/OldaleTown/scripts.pory"
	setspeaker NULL
# 1172 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1174 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1175 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_35
OldaleRival_34:
# 1178 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_41
OldaleRival_40:
# 1180 "data/maps/OldaleTown/scripts.pory"
	removeobject 21
# 1181 "data/maps/OldaleTown/scripts.pory"
	removeobject 38
# 1182 "data/maps/OldaleTown/scripts.pory"
	removeobject 39
# 1183 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
# 1184 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1185 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_47
OldaleRival_46:
# 1186 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_50
OldaleRival_49:
# 1187 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRival_2:
# 1122 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRival_1

OldaleRival_5:
# 1123 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRival_4

OldaleRival_8:
# 1132 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_0
# 1133 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1134 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_14
OldaleRival_13:
# 1135 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_20
OldaleRival_19:
# 1136 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1137 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_1
# 1139 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_26
OldaleRival_25:
# 1140 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_32
OldaleRival_31:
# 1141 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1142 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_2
# 1144 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_38
OldaleRival_37:
# 1145 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_44
OldaleRival_43:
# 1146 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1147 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_3
# 1148 "data/maps/OldaleTown/scripts.pory"
	goto afteroldalerivallost
	goto OldaleRival_7

OldaleRival_11:
# 1153 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleRival_10

OldaleRival_14:
# 1134 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleRival_13

OldaleRival_17:
# 1154 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleRival_16

OldaleRival_20:
# 1135 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleRival_19

OldaleRival_23:
# 1161 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRival_22

OldaleRival_26:
# 1139 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRival_25

OldaleRival_29:
# 1162 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRival_28

OldaleRival_32:
# 1140 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRival_31

OldaleRival_35:
# 1176 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVALF, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRival_34

OldaleRival_38:
# 1144 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRival_37

OldaleRival_41:
# 1179 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVALM, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_MALE
	goto OldaleRival_40

OldaleRival_44:
# 1145 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRival_43

OldaleRival_47:
# 1185 "data/maps/OldaleTown/scripts.pory"
	setflag rivalfappearsinOldale
	goto OldaleRival_46

OldaleRival_50:
# 1186 "data/maps/OldaleTown/scripts.pory"
	setflag rivalmappearsinOldale
	goto OldaleRival_49


OldaleRivalfollowchat::
# 1191 "data/maps/OldaleTown/scripts.pory"
	lock
# 1192 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, ConArtist103Rewards_Movement_0
# 1193 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1194 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalfollowchat_2
OldaleRivalfollowchat_1:
# 1195 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalfollowchat_5
OldaleRivalfollowchat_4:
# 1196 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1197 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_0
# 1198 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1199 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalfollowchat_8
OldaleRivalfollowchat_7:
# 1200 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalfollowchat_11
OldaleRivalfollowchat_10:
# 1201 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1202 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_1
# 1203 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1204 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleRivalfollowchat_2:
# 1194 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalfollowchat_1

OldaleRivalfollowchat_5:
# 1195 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalfollowchat_4

OldaleRivalfollowchat_8:
# 1199 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleRivalfollowchat_7

OldaleRivalfollowchat_11:
# 1200 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleRivalfollowchat_10


OldaleRivalDontLeaveOldaleto101::
# 1207 "data/maps/OldaleTown/scripts.pory"
	lock
# 1208 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1209 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1210 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1211 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_METRONOME
# 1212 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1213 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_2
OldaleRivalDontLeaveOldaleto101_1:
# 1214 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_5
OldaleRivalDontLeaveOldaleto101_4:
# 1215 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1216 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_0
# 1217 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1218 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_8
OldaleRivalDontLeaveOldaleto101_7:
# 1219 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_11
OldaleRivalDontLeaveOldaleto101_10:
# 1220 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1221 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_1
# 1223 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1224 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_2
# 1225 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1226 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto101_14
OldaleRivalDontLeaveOldaleto101_13:
# 1243 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto101_17
OldaleRivalDontLeaveOldaleto101_16:
# 1257 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto101_2:
# 1213 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto101_1

OldaleRivalDontLeaveOldaleto101_5:
# 1214 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto101_4

OldaleRivalDontLeaveOldaleto101_8:
# 1218 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_7

OldaleRivalDontLeaveOldaleto101_11:
# 1219 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_10

OldaleRivalDontLeaveOldaleto101_14:
# 1227 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1228 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 1229 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1230 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1231 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1232 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1233 "data/maps/OldaleTown/scripts.pory"
	addobject 21
# 1234 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1235 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1236 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_20
OldaleRivalDontLeaveOldaleto101_19:
# 1237 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_26
OldaleRivalDontLeaveOldaleto101_25:
# 1238 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1239 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 1240 "data/maps/OldaleTown/scripts.pory"
	goto endoffollowrivaloldale
	goto OldaleRivalDontLeaveOldaleto101_13

OldaleRivalDontLeaveOldaleto101_17:
# 1245 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1246 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_23
OldaleRivalDontLeaveOldaleto101_22:
# 1247 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_29
OldaleRivalDontLeaveOldaleto101_28:
# 1248 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1249 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1250 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1251 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1252 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_2
# 1253 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_2
# 1254 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto101_16

OldaleRivalDontLeaveOldaleto101_20:
# 1236 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalfappearsinOldale
	goto OldaleRivalDontLeaveOldaleto101_19

OldaleRivalDontLeaveOldaleto101_23:
# 1246 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_22

OldaleRivalDontLeaveOldaleto101_26:
# 1237 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalmappearsinOldale
	goto OldaleRivalDontLeaveOldaleto101_25

OldaleRivalDontLeaveOldaleto101_29:
# 1247 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_28


OldaleWareHouseSign::
# 1262 "data/maps/OldaleTown/scripts.pory"
	lock
# 1263 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWareHouseSign_Text_0
# 1264 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleMotorBike::
# 1268 "data/maps/OldaleTown/scripts.pory"
	lock
# 1269 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleMotorBike_Text_0
# 1270 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCar::
# 1274 "data/maps/OldaleTown/scripts.pory"
	lock
# 1275 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCar_Text_0
# 1276 "data/maps/OldaleTown/scripts.pory"
	release
	return


Oldale4x4::
# 1280 "data/maps/OldaleTown/scripts.pory"
	lock
# 1281 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale4x4_Text_0
# 1282 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleBike::
# 1286 "data/maps/OldaleTown/scripts.pory"
	lock
# 1287 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1288 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleBike_Text_0
# 1289 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePlant::
# 1293 "data/maps/OldaleTown/scripts.pory"
	lock
# 1294 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1295 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePlant_Text_0
# 1297 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDLCWindow::
# 1301 "data/maps/OldaleTown/scripts.pory"
	lock
# 1302 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1303 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCWindow_Text_0
# 1305 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDevonTruck::
# 1309 "data/maps/OldaleTown/scripts.pory"
	lock
# 1310 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonTruck_Text_0
# 1311 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDevonTruckDamaged::
# 1315 "data/maps/OldaleTown/scripts.pory"
	lock
# 1316 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonTruckDamaged_Text_0
# 1317 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePostFenceItem::
# 1321 "data/maps/OldaleTown/scripts.pory"
	lock
# 1322 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_BIKE_VOUCHER
# 1325 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 1326 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleHouse2GardenItem::
# 1329 "data/maps/OldaleTown/scripts.pory"
	lock
# 1330 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_SOFT_SAND
# 1333 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 1334 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleParkingItem::
# 1337 "data/maps/OldaleTown/scripts.pory"
	lock
# 1338 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_METAL_COAT
# 1339 "data/maps/OldaleTown/scripts.pory"
	removeobject 3
# 1340 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalebyTruckItem::
# 1343 "data/maps/OldaleTown/scripts.pory"
	lock
# 1344 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_RAZOR_FANG
# 1345 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 1346 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalDontLeaveOldaleto103::
# 1350 "data/maps/OldaleTown/scripts.pory"
	lock
# 1351 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1352 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleOutsideParkNPC_Movement_0
# 1353 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1354 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_METRONOME
# 1355 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1356 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_2
OldaleRivalDontLeaveOldaleto103_1:
# 1357 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_5
OldaleRivalDontLeaveOldaleto103_4:
# 1358 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1359 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_0
# 1360 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1361 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_8
OldaleRivalDontLeaveOldaleto103_7:
# 1362 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_11
OldaleRivalDontLeaveOldaleto103_10:
# 1363 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1364 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_1
# 1365 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1366 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto103_14
OldaleRivalDontLeaveOldaleto103_13:
# 1386 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto103_17
OldaleRivalDontLeaveOldaleto103_16:
# 1400 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto103_2:
# 1356 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto103_1

OldaleRivalDontLeaveOldaleto103_5:
# 1357 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto103_4

OldaleRivalDontLeaveOldaleto103_8:
# 1361 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_7

OldaleRivalDontLeaveOldaleto103_11:
# 1362 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_10

OldaleRivalDontLeaveOldaleto103_14:
# 1367 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1368 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_20
OldaleRivalDontLeaveOldaleto103_19:
# 1369 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_26
OldaleRivalDontLeaveOldaleto103_25:
# 1370 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1371 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 1372 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1373 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1374 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1375 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1376 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 1377 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1378 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1379 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_32
OldaleRivalDontLeaveOldaleto103_31:
# 1380 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_35
OldaleRivalDontLeaveOldaleto103_34:
# 1381 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1382 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 1383 "data/maps/OldaleTown/scripts.pory"
	goto endoffollowrivaloldale
	goto OldaleRivalDontLeaveOldaleto103_13

OldaleRivalDontLeaveOldaleto103_17:
# 1388 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1389 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_23
OldaleRivalDontLeaveOldaleto103_22:
# 1390 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_29
OldaleRivalDontLeaveOldaleto103_28:
# 1391 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1392 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1393 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1394 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1395 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleTown_GotoTherapy_Movement_3
# 1396 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 1397 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto103_16

OldaleRivalDontLeaveOldaleto103_20:
# 1368 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_19

OldaleRivalDontLeaveOldaleto103_23:
# 1389 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_22

OldaleRivalDontLeaveOldaleto103_26:
# 1369 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_25

OldaleRivalDontLeaveOldaleto103_29:
# 1390 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_28

OldaleRivalDontLeaveOldaleto103_32:
# 1379 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalfappearsinOldale
	goto OldaleRivalDontLeaveOldaleto103_31

OldaleRivalDontLeaveOldaleto103_35:
# 1380 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalmappearsinOldale
	goto OldaleRivalDontLeaveOldaleto103_34


OldaleRivalnoleavetoWhouse::
# 1404 "data/maps/OldaleTown/scripts.pory"
	lock
# 1405 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1406 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 1407 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1408 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_METRONOME
# 1409 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1410 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_2
OldaleRivalnoleavetoWhouse_1:
# 1411 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_5
OldaleRivalnoleavetoWhouse_4:
# 1412 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1413 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_0
# 1414 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1415 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_8
OldaleRivalnoleavetoWhouse_7:
# 1416 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_11
OldaleRivalnoleavetoWhouse_10:
# 1417 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1418 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_1
# 1419 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1420 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalnoleavetoWhouse_14
OldaleRivalnoleavetoWhouse_13:
# 1438 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalnoleavetoWhouse_17
OldaleRivalnoleavetoWhouse_16:
# 1452 "data/maps/OldaleTown/scripts.pory"
endoffollowrivaloldale:
# 1453 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalnoleavetoWhouse_2:
# 1410 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRivalnoleavetoWhouse_1

OldaleRivalnoleavetoWhouse_5:
# 1411 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRivalnoleavetoWhouse_4

OldaleRivalnoleavetoWhouse_8:
# 1415 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_7

OldaleRivalnoleavetoWhouse_11:
# 1416 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_10

OldaleRivalnoleavetoWhouse_14:
# 1421 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1422 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_20
OldaleRivalnoleavetoWhouse_19:
# 1423 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_26
OldaleRivalnoleavetoWhouse_25:
# 1424 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1425 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_2
# 1426 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1427 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1428 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 1429 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1430 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1431 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_32
OldaleRivalnoleavetoWhouse_31:
# 1432 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_35
OldaleRivalnoleavetoWhouse_34:
# 1433 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1434 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 1435 "data/maps/OldaleTown/scripts.pory"
	goto endoffollowrivaloldale
	goto OldaleRivalnoleavetoWhouse_13

OldaleRivalnoleavetoWhouse_17:
# 1440 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1441 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_23
OldaleRivalnoleavetoWhouse_22:
# 1442 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_29
OldaleRivalnoleavetoWhouse_28:
# 1443 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1444 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1445 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1446 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1447 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalnoleavetoWhouse_Movement_0
# 1448 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1449 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalnoleavetoWhouse_16

OldaleRivalnoleavetoWhouse_20:
# 1422 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_19

OldaleRivalnoleavetoWhouse_23:
# 1441 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_22

OldaleRivalnoleavetoWhouse_26:
# 1423 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_25

OldaleRivalnoleavetoWhouse_29:
# 1442 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_28

OldaleRivalnoleavetoWhouse_32:
# 1431 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalfappearsinOldale
	goto OldaleRivalnoleavetoWhouse_31

OldaleRivalnoleavetoWhouse_35:
# 1432 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalmappearsinOldale
	goto OldaleRivalnoleavetoWhouse_34


OldaleWarehouseRebelGuard::
# 1463 "data/maps/OldaleTown/scripts.pory"
	lock
# 1464 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1465 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 1466 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleVendingMachine_Movement_0
# 1467 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1468 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 1470 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1471 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 1473 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 1476 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 1479 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 1481 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 1482 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1483 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1484 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 1485 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1486 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 1487 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1488 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 1489 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_2
# 1490 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1491 "data/maps/OldaleTown/scripts.pory"
	removeobject 18
# 1492 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 1493 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 1494 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1495 "data/maps/OldaleTown/scripts.pory"
	fadenewbgm 1
# 1496 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1498 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 1472 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 1474 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 1507 "data/maps/OldaleTown/scripts.pory"
	lock
# 1508 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 1509 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleDevonGrunts_Movement_7
# 1510 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1512 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 1514 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 1518 "data/maps/OldaleTown/scripts.pory"
	lock
# 1519 "data/maps/OldaleTown/scripts.pory"
	applymovement 26, ConArtist103Rewards_Movement_0
# 1520 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 1521 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 1527 "data/maps/OldaleTown/scripts.pory"
	lock
# 1528 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1529 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1530 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1531 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1532 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleOutsideParkNPC_Movement_0
# 1533 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1534 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach0_Movement_0
# 1535 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1536 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1537 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 1541 "data/maps/OldaleTown/scripts.pory"
	lock
# 1542 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1543 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1544 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1545 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1546 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1547 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach1_Movement_0
# 1548 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1549 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleOutsideParkNPC_Movement_0
# 1550 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 1554 "data/maps/OldaleTown/scripts.pory"
	lock
# 1555 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1556 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1557 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1558 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1559 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1560 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach2_Movement_0
# 1561 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1562 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleOutsideParkNPC_Movement_0
# 1563 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 1568 "data/maps/OldaleTown/scripts.pory"
	lock
# 1569 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1570 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 1571 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 1573 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1574 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1575 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1576 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 1577 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1578 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 1579 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1580 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_3
# 1581 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1582 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_4
# 1583 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1584 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1585 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1586 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1587 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1588 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1589 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 1590 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebel_Movement_0
# 1591 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1592 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1593 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1594 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1595 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1596 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1597 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1598 "data/maps/OldaleTown/scripts.pory"
	removeobject 24
# 1599 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1600 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1601 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 1607 "data/maps/OldaleTown/scripts.pory"
	lock
# 1608 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1609 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1610 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarBehind_Movement_0
# 1611 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1612 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1613 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 1615 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1616 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1617 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1618 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 1619 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1620 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1621 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1622 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1623 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1624 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1625 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach2_Movement_0
# 1626 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1627 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1628 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarBehind_Movement_1
# 1629 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1630 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1631 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1632 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1633 "data/maps/OldaleTown/scripts.pory"
	removeobject 24
# 1634 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1635 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1636 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaCall1::
# 1643 "data/maps/OldaleTown/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_gt SamanthaCall1_1
# 1656 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaCall1_1:
# 1644 "data/maps/OldaleTown/scripts.pory"
	lock
# 1645 "data/maps/OldaleTown/scripts.pory"
	playse SE_POKENAV_CALL
# 1646 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_0
# 1647 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1648 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaCall1_Text_0
# 1652 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 1653 "data/maps/OldaleTown/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 1654 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaDontgotoDevonCenter::
# 1663 "data/maps/OldaleTown/scripts.pory"
	lock
# 1664 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoDevonCenter_2
# 1676 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoDevonCenter_1:
# 1678 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 1679 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleTown_GotoTherapy_Movement_3
# 1680 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1681 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoDevonCenter_2:
# 1667 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1668 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1669 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1670 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_0
# 1671 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_1
	goto SamanthaDontgotoDevonCenter_1


SamanthaDontgotoDLC::
# 1685 "data/maps/OldaleTown/scripts.pory"
	lock
# 1686 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoDLC_2
# 1698 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoDLC_1:
# 1700 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 1701 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1702 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoDLC_2:
# 1689 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1690 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1691 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1692 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_0
# 1693 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_1
	goto SamanthaDontgotoDLC_1


SamanthaDontgoto102::
# 1705 "data/maps/OldaleTown/scripts.pory"
	lock
# 1706 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgoto102_2
# 1720 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgoto102_1:
# 1722 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgoto102_Movement_0
# 1723 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgoto102_Movement_0
# 1724 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1725 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgoto102_2:
# 1709 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1710 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1711 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1712 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_0
# 1714 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_1
	goto SamanthaDontgoto102_1


SamanthaDontgoto103::
# 1729 "data/maps/OldaleTown/scripts.pory"
	lock
# 1730 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgoto103_2
# 1743 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgoto103_1:
# 1745 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 1746 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgoto103_Movement_0
# 1747 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1748 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgoto103_2:
# 1732 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1733 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1734 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1735 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_0
# 1737 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_1
	goto SamanthaDontgoto103_1


SamanthaDontgotoWarehouse::
# 1752 "data/maps/OldaleTown/scripts.pory"
	lock
# 1753 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoWarehouse_2
# 1774 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoWarehouse_1:
# 1776 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalnoleavetoWhouse_Movement_0
# 1777 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1778 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1779 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1780 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoWarehouse_2:
# 1755 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1756 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1757 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1758 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_0
# 1760 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_lt SamanthaDontgotoWarehouse_6
# 1766 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_2
SamanthaDontgotoWarehouse_5:
# 1768 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1769 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1770 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_3
	goto SamanthaDontgotoWarehouse_1

SamanthaDontgotoWarehouse_6:
# 1762 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_1
	goto SamanthaDontgotoWarehouse_5


SamanthaGetSnacksCutscene::
# 1789 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaGetSnacksCutscene_1
# 1831 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaGetSnacksCutscene_1:
# 1791 "data/maps/OldaleTown/scripts.pory"
	lock
# 1792 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1793 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_0
# 1794 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_0
# 1795 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaGetSnacksCutscene_Movement_1
# 1796 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_2
# 1797 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1798 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_1
# 1799 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1800 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1801 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1802 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_2
# 1803 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1804 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1805 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1806 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1807 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1808 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1809 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_3
# 1810 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1811 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1812 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1813 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1814 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1815 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1816 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1817 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1818 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1819 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1821 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1822 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1823 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1824 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_4
# 1826 "data/maps/OldaleTown/scripts.pory"
	setflag Samanthagotsnacks
# 1828 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaShake::
# 1836 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1837 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 1838 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 1839 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 1840 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 1841 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


GiveSafemonParty1::
# 1846 "data/maps/OldaleTown/scripts.pory"
	callnative ZeroPlayerPartyMons
# 1847 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1848 "data/maps/OldaleTown/scripts.pory"
	msgbox GiveSafemonParty1_Text_0
# 1849 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, GiveSafemonParty1_Text_1, GiveSafemonParty1_Text_2, GiveSafemonParty1_Text_3, GiveSafemonParty1_Text_4, GiveSafemonParty1_Text_5, GiveSafemonParty1_Text_6
# 1850 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GiveSafemonParty1_2
GiveSafemonParty1_1:
# 1858 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GiveSafemonParty1_5
GiveSafemonParty1_4:
# 1867 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GiveSafemonParty1_8
GiveSafemonParty1_7:
# 1876 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq GiveSafemonParty1_11
GiveSafemonParty1_10:
# 1885 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq GiveSafemonParty1_14
GiveSafemonParty1_13:
# 1894 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq GiveSafemonParty1_17
GiveSafemonParty1_16:
# 1903 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

GiveSafemonParty1_2:
# 1851 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_BULBASYNTH, 7, ITEM_REMEDY
# 1852 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_SMOTHQUIL, 7, ITEM_HEAL_POWDER
# 1853 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_WARABBIT, 7, ITEM_FULL_HEAL
# 1854 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_PIKACHU_SAFE, 7, ITEM_AERODACTYLITE
# 1855 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_MIMIYURUI, 7, ITEM_SUPERB_REMEDY
# 1856 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_NINKABURI, 7, ITEM_SHALOUR_SABLE
	goto GiveSafemonParty1_1

GiveSafemonParty1_5:
# 1859 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_SHIITAKO, 7, ITEM_REMEDY
# 1860 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_POOCHAIN, 7, ITEM_HEAL_POWDER
# 1861 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_GEOSLUG, 7, ITEM_FULL_HEAL
# 1862 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_FOOMING, 7, ITEM_AERODACTYLITE
# 1863 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_ROTOM_MONITOR, 7, ITEM_SUPERB_REMEDY
# 1864 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_MANCHINE, 7, ITEM_SHALOUR_SABLE
	goto GiveSafemonParty1_4

GiveSafemonParty1_8:
# 1868 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_VERDOOM, 7, ITEM_REMEDY
# 1869 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_LOADTAD, 7, ITEM_HEAL_POWDER
# 1870 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_HELIPIP, 7, ITEM_FULL_HEAL
# 1871 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_CHEERORB, 7, ITEM_AERODACTYLITE
# 1872 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_MUDDER, 7, ITEM_SUPERB_REMEDY
# 1873 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_TUMBELA, 7, ITEM_SHALOUR_SABLE
	goto GiveSafemonParty1_7

GiveSafemonParty1_11:
# 1877 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_VERIWOODO, 7, ITEM_REMEDY
# 1878 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_WARTZ, 7, ITEM_HEAL_POWDER
# 1879 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_GUMMIN, 7, ITEM_FULL_HEAL
# 1880 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_KAMOKEN, 7, ITEM_AERODACTYLITE
# 1881 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_GACHAPOD, 7, ITEM_SUPERB_REMEDY
# 1882 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_TAMARAKKU, 7, ITEM_SHALOUR_SABLE
	goto GiveSafemonParty1_10

GiveSafemonParty1_14:
# 1886 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_TRASHEAL, 7, ITEM_REMEDY
# 1887 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_DELIBIN, 7, ITEM_SHALOUR_SABLE
# 1888 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_ROLLOON, 7, ITEM_HEAL_POWDER
# 1889 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_NIDORAN_I, 7, ITEM_FULL_HEAL
# 1890 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_DOUNO, 7, ITEM_AERODACTYLITE
# 1891 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_KANGASKID, 7, ITEM_SUPERB_REMEDY
	goto GiveSafemonParty1_13

GiveSafemonParty1_17:
# 1895 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_BULBASYNTH, 12, ITEM_REMEDY, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_ABSORB, MOVE_TWINEEDLE, MOVE_POLLEN_PUFF
# 1896 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_PIKACHU_SAFE, 12, ITEM_REMEDY, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAIL_SLAP, MOVE_SPARK, MOVE_HEADBUTT, MOVE_YAWN
# 1897 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_SMOTHQUIL, 12, ITEM_REMEDY, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FIRE_FANG, MOVE_ACID, MOVE_QUICK_ATTACK, MOVE_SHELL_TRAP
# 1898 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_WARABBIT, 12, ITEM_REMEDY, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TRIPLE_DIVE, MOVE_SONIC_BOOM, MOVE_HELPING_HAND, MOVE_ACROBATICS
# 1899 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_MANCHINE, 12, ITEM_REMEDY, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BRICK_BREAK, MOVE_THUNDER_PUNCH, MOVE_BULLET_PUNCH, MOVE_AUTOTOMIZE
# 1900 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_LOADTAD, 12, ITEM_REMEDY, ITEM_CHERISH_BALL, NATURE_ADAMANT, 1, MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_SEISMIC_TOSS, MOVE_BULLDOZE
	goto GiveSafemonParty1_16


DevonWarehouseGuardM::
# 1907 "data/maps/OldaleTown/scripts.pory"
	lock
# 1908 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1909 "data/maps/OldaleTown/scripts.pory"
	applymovement 40, ConArtist103Rewards_Movement_0
# 1910 "data/maps/OldaleTown/scripts.pory"
	waitmovement 40
# 1911 "data/maps/OldaleTown/scripts.pory"
	msgbox DevonWarehouseGuardM_Text_0
# 1913 "data/maps/OldaleTown/scripts.pory"
	applymovement 40, OldaleOutsideParkNPC_Movement_0
# 1914 "data/maps/OldaleTown/scripts.pory"
	waitmovement 40
# 1915 "data/maps/OldaleTown/scripts.pory"
	release
	return


DevonWarehouseGuardF::
# 1920 "data/maps/OldaleTown/scripts.pory"
	lock
# 1921 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1922 "data/maps/OldaleTown/scripts.pory"
	applymovement 41, ConArtist103Rewards_Movement_0
# 1923 "data/maps/OldaleTown/scripts.pory"
	waitmovement 41
# 1924 "data/maps/OldaleTown/scripts.pory"
	msgbox DevonWarehouseGuardF_Text_0
# 1926 "data/maps/OldaleTown/scripts.pory"
	applymovement 41, OldaleOutsideParkNPC_Movement_0
# 1927 "data/maps/OldaleTown/scripts.pory"
	waitmovement 41
# 1928 "data/maps/OldaleTown/scripts.pory"
	release
	return


# 184 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 184 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 290 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 290 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 540 "data/maps/OldaleTown/scripts.pory"
OldaleOutsideParkNPC_Movement_0:
# 540 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 591 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 591 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 592 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 592 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 592 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 592 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 592 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 592 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 592 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 598 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 598 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 598 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 598 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 598 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 598 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 598 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 601 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_3:
# 601 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 615 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 615 "data/maps/OldaleTown/scripts.pory"
	emote_x
	step_end

# 639 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 639 "data/maps/OldaleTown/scripts.pory"
	face_left
# 639 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 652 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 652 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 652 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 653 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 653 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 703 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 703 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 743 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_5:
# 743 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

# 781 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_6:
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 781 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 903 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 903 "data/maps/OldaleTown/scripts.pory"
	face_player
# 903 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 919 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 919 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 919 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 924 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 924 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 924 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 993 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_3:
# 993 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 995 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_4:
# 995 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
	step_end

# 1014 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_5:
# 1014 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_down
	step_end

# 1024 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_6:
# 1024 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 1024 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 1053 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_7:
# 1053 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1087 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_8:
# 1087 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1087 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1098 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_9:
# 1098 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 1098 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1209 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_0:
# 1209 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1210 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_1:
# 1210 "data/maps/OldaleTown/scripts.pory"
	emote_question_mark
# 1210 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 1252 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_2:
# 1252 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 1447 "data/maps/OldaleTown/scripts.pory"
OldaleRivalnoleavetoWhouse_Movement_0:
# 1447 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 1534 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 1534 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 1534 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1547 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 1547 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 1560 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 1560 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 1590 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 1590 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1590 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1590 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1590 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1590 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1590 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1590 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1590 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1610 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 1610 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 1610 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1628 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1667 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDevonCenter_Movement_0:
# 1667 "data/maps/OldaleTown/scripts.pory"
	face_player
# 1667 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 1722 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgoto102_Movement_0:
# 1722 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 1746 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgoto103_Movement_0:
# 1746 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1746 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 1793 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_0:
# 1793 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 1793 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 1795 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_1:
# 1795 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1795 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1796 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_2:
# 1796 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1796 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1796 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1796 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1796 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1821 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_3:
# 1821 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1821 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

ChangeTrainerCardTest_Text_0:
# 93 "data/maps/OldaleTown/scripts.pory"
	.string "All symbols given$"

BalsamCallAfterWarehouse_Text_0:
# 112 "data/maps/OldaleTown/scripts.pory"
	.string "...$"

BalsamCallAfterWarehouse_Text_1:
# 113 "data/maps/OldaleTown/scripts.pory"
	.string "Prof Balsam: Hey there, {PLAYER}. It's\n"
	.string "me, Balsam.\p"
	.string "Are you alright? Therapy should have\n"
	.string "finished ages ago, but you haven't\l"
	.string "returned like we discussed.\p"
	.string "It's okay if you want to stretch your\n"
	.string "legs, but you should have told us.\p"
	.string "Your grandpa Birch was worried sick.\p"
	.string "Since you're feeling adventurous, why\n"
	.string "don't you go visit your other grandpa\l"
	.string "at {COLOR GREEN}Petalburg City{COLOR DARK_GRAY}?\p"
	.string "A change of scenery will do you good.\n"
	.string "It's very close, but give me a call if you\l"
	.string "get lost.$"

BalsamCallAfterWarehouse_Text_2:
# 122 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, and we still need help with finding\n"
	.string "that {COLOR RED}Voltorb Shard{COLOR DARK_GRAY} my Aide asked you\l"
	.string "about.\p"
	.string "It's not urgent, but we'd really\n"
	.string "appreciate it.$"

BalsamCallAfterWarehouse_Text_3:
# 126 "data/maps/OldaleTown/scripts.pory"
	.string "It's back to work for me. Take care,\n"
	.string "{PLAYER}.$"

TimeofDayTest_Text_0:
# 141 "data/maps/OldaleTown/scripts.pory"
	.string "Morning.$"

TimeofDayTest_Text_1:
# 145 "data/maps/OldaleTown/scripts.pory"
	.string "Day.$"

TimeofDayTest_Text_2:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "Evening.$"

TimeofDayTest_Text_3:
# 153 "data/maps/OldaleTown/scripts.pory"
	.string "Night.$"

ConArtist103Rewards_Text_0:
# 192 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 195 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 197 "data/maps/OldaleTown/scripts.pory"
	.string "Look, I know I said I'd give you some\n"
	.string "cash but...\p"
	.string "All I have is my eggs! The cash I get\n"
	.string "when I sell them, duh!\p"
	.string "Speaking of eggs... I have one more in\n"
	.string "stock that's not reserved.\p"
	.string "It's a pretty special one - an egg that\n"
	.string "multiplies itself! Talk about a good\l"
	.string "investment, eh?\p"
	.string "For you, only 500¥. Deal?$"

ConArtist103Rewards_Text_3:
# 203 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 203 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 210 "data/maps/OldaleTown/scripts.pory"
	.string "A smart choice! I knew you had an eye\n"
	.string "for good deals - here you go!$"

ConArtist103Rewards_Text_6:
# 213 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Multiplying Egg!$"

ConArtist103Rewards_Text_7:
# 216 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sure you won't be disappointed.\n"
	.string "Especially if you continue your\l"
	.string "patronage at my store in {COLOR GREEN}Petalburg{COLOR DARK_GRAY}!\p"
	.string "I'll let you know when I set up there.\n"
	.string "And to that end...$"

ConArtist103Rewards_Text_8:
# 221 "data/maps/OldaleTown/scripts.pory"
	.string "All set. Pleasure doing business with\n"
	.string "you, and have an EGGcelent day!$"

ConArtist103Rewards_Text_9:
# 230 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to {COLOR GREEN}Petalburg{COLOR DARK_GRAY} soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_10:
# 238 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in that egg that\n"
	.string "multiplies itself?$"

ConArtist103Rewards_Text_11:
# 244 "data/maps/OldaleTown/scripts.pory"
	.string "Thank you so much for your help and\n"
	.string "patronage. See you at {COLOR GREEN}Petalburg{COLOR DARK_GRAY}!$"

OldaleVendingMachine_Text_0:
# 254 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 256 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 175¥$"

OldaleVendingMachine_Text_2:
# 256 "data/maps/OldaleTown/scripts.pory"
	.string "Tea - 100¥$"

OldaleVendingMachine_Text_3:
# 256 "data/maps/OldaleTown/scripts.pory"
	.string "Lava Cookie - 200¥$"

OldaleVendingMachine_Text_4:
# 256 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 275 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 284 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 293 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 295 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 302 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 308 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 329 "data/maps/OldaleTown/scripts.pory"
	.string "A Tea dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 338 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Tea can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 347 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Tea can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 356 "data/maps/OldaleTown/scripts.pory"
	.string "The Tea can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 383 "data/maps/OldaleTown/scripts.pory"
	.string "A Lava Cookie dropped on the machine's\n"
	.string "tray.$"

OldaleVendingMachine_Text_16:
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Lava Cookie can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 401 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Lava\n"
	.string "Cookie enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Lava Cookie just stays on\n"
	.string "the verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 441 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 447 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 453 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

Oldale102Sign_Text_0:
# 460 "data/maps/OldaleTown/scripts.pory"
	.string "{LEFT_ARROW}West - Road 002.$"

OldalePeekingOldman_Text_0:
# 468 "data/maps/OldaleTown/scripts.pory"
	.string "Those Rebel hoodlums... just when we\n"
	.string "start to get back on our feet, they\l"
	.string "come to ruin things!\p"
	.string "Murkrows, the lot of them!$"

OldalePeekingOldman_Text_1:
# 473 "data/maps/OldaleTown/scripts.pory"
	.string "Those hoodlums left town as if chased\n"
	.string "by a Mightyena. Good riddance I say!$"

OldalePeekingOldman_Text_2:
# 477 "data/maps/OldaleTown/scripts.pory"
	.string "Finally, Devon is manning the warehouse\n"
	.string "again.\p"
	.string "With that, Oldale gets money and\n"
	.string "safety. It's as much as one can wish for\l"
	.string "these days.$"

OldaleOutsideHikerGuy_Text_0:
# 489 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in {COLOR BLUE}New Rustboro{COLOR DARK_GRAY} one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 499 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}New Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 504 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "We will be much happier in the big city,\n"
	.string "I'm sure of it!$"

OldaleOutsideParkNPC_Text_0:
# 518 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}\n"
	.string "who get crazy rich by finding treasure\l"
	.string "with their {COLOR BLUE}Object Spotters{COLOR DARK_GRAY}.\p"
	.string "Haven't managed to get my hands on one,\n"
	.string "or I wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 523 "data/maps/OldaleTown/scripts.pory"
	.string "So... I saw you digging through that\n"
	.string "trash can.\p"
	.string "If you need pokeyen, you should get an\n"
	.string "{COLOR BLUE}Object Spotter{COLOR DARK_GRAY} and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideParkNPC_Text_2:
# 530 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Why don't you try it right here? Who\n"
	.string "knows, you might find something!$"

OldaleOutsideParkNPC_Text_3:
# 536 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Hopefully something better than what\n"
	.string "you found in that trash can... ha-ha-ha!$"

OldaleOutsideOldGuy_Text_0:
# 554 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleOutsideOldWoman_Text_0:
# 564 "data/maps/OldaleTown/scripts.pory"
	.string "Have you ever noticed that rain has a\n"
	.string "greenish tint recently...?\p"
	.string "It's caused by the polluted sea.\p"
	.string "The Weather Institute says it's not\n"
	.string "harmful on the short-term.\p"
	.string "But I worry about the long term...$"

DLCTeacherOutside_Text_0:
# 574 "data/maps/OldaleTown/scripts.pory"
	.string "I'm really dying for a smoke here...\p"
	.string "If only those loser {COLOR RED}Rebels{COLOR DARK_GRAY} left the\n"
	.string "Warehouse, Devon Co. would start\l"
	.string "sending supplies again.$"

DLCTeacherOutside_Text_1:
# 580 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Ah, sorry for blowing the smoke on your\n"
	.string "face. Haven't smoked in days...\p"
	.string "With the {COLOR RED}Rebels{COLOR DARK_GRAY} gone, the mart is\n"
	.string "getting stocked again.\p"
	.string "Was about time! {COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_GotoTherapy_Text_0:
# 594 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... the\n"
	.string "therapy session should be about to\l"
	.string "start.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 616 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 621 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 630 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 635 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 646 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 649 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 657 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know {COLOR BLUE}Devon Co.{COLOR DARK_GRAY}, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 662 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 667 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and our tutor!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 673 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 687 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave\l"
	.string "and you do what's right... right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 694 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the {COLOR RED}Rebels{COLOR DARK_GRAY}, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 699 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 706 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 719 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 724 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 731 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 737 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you...$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 745 "data/maps/OldaleTown/scripts.pory"
	.string "To a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 750 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 755 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 762 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 769 "data/maps/OldaleTown/scripts.pory"
	.string "W-wait, that's {COLOR RED}Rebel{COLOR DARK_GRAY} talk...$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 776 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, come to {COLOR GREEN}Route 103{COLOR DARK_GRAY}! I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 794 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 799 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... he told us we'd\n"
	.string "need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 804 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 809 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_28:
# 814 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in {COLOR GREEN}Route 103{COLOR DARK_GRAY}. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_29:
# 827 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 857 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 863 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 868 "data/maps/OldaleTown/scripts.pory"
	.string "He'll be waiting there a while, and our\n"
	.string "tutor will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 878 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 883 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

OldaleDevonGrunts_Text_0:
# 904 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but we can't let anyone\n"
	.string "through until the {COLOR RED}Rebels{COLOR DARK_GRAY} occupying\l"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY} are dealt with.$"

OldaleDevonGrunts_Text_1:
# 908 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to {COLOR BLUE}New Rustboro{COLOR DARK_GRAY}... but don't\l"
	.string "worry!\p"
	.string "Reinforcements from {COLOR BLUE}Devon HQ{COLOR DARK_GRAY} are\n"
	.string "currently on the way.$"

OldaleDevonGrunts_Text_2:
# 911 "data/maps/OldaleTown/scripts.pory"
	.string "Yup! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_3:
# 916 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Devon Ball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_4:
# 920 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devonav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_5:
# 925 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 930 "data/maps/OldaleTown/scripts.pory"
	.string "Ahem. If you've come to inquire about\n"
	.string "access to {COLOR GREEN}Road 002{COLOR DARK_GRAY}... I'm afraid we can't\l"
	.string "let anyone through until the {COLOR RED}Warehouse\l"
	.string "situation is under control.$"

OldaleDevonGrunts_Text_7:
# 937 "data/maps/OldaleTown/scripts.pory"
	.string "Hello there, civilian! We have great\n"
	.string "news!\p"
	.string "Those pesky {COLOR RED}Rebels{COLOR DARK_GRAY} have finally left\n"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY}. The town is safe\l"
	.string "again!$"

OldaleDevonGrunts_Text_8:
# 941 "data/maps/OldaleTown/scripts.pory"
	.string "They must have caught wind of\n"
	.string "reinforcements coming, and didn't feel\l"
	.string "like spending the rest of their lives on\l"
	.string "{COLOR RED}Dewford Prison{COLOR DARK_GRAY}.$"

OldaleDevonGrunts_Text_9:
# 945 "data/maps/OldaleTown/scripts.pory"
	.string "Most likely! So... I suppose you want to\n"
	.string "go through {COLOR GREEN}Road 002{COLOR DARK_GRAY}?$"

OldaleDevonGrunts_Text_10:
# 950 "data/maps/OldaleTown/scripts.pory"
	.string "I see... well, I'm sorry to say...\p"
	.string "In the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}, when it's not one\n"
	.string "thing, it's the other, you know?$"

OldaleDevonGrunts_Text_11:
# 953 "data/maps/OldaleTown/scripts.pory"
	.string "We have one of our scientists searching\n"
	.string "{COLOR GREEN}Road 002{COLOR DARK_GRAY} for a very dangerous Pokémon.\p"
	.string "It's the next species on the list of\n"
	.string "Pokémon to be {COLOR BLUE}safened{COLOR DARK_GRAY}, and we can't let\l"
	.string "his work be disturbed.$"

OldaleDevonGrunts_Text_12:
# 958 "data/maps/OldaleTown/scripts.pory"
	.string "I'm afraid so. But don't worry - these\n"
	.string "tasks usually take from 3 to 4 months.\p"
	.string "And what's a little waiting if it means\n"
	.string "Hoenn becomes safer?$"

OldaleDevonGrunts_Text_13:
# 964 "data/maps/OldaleTown/scripts.pory"
	.string "Grand, then please enjoy this shith-... I\n"
	.string "mean, this cozy, cute sleepy town!$"

OldaleDevonGrunts_Text_14:
# 982 "data/maps/OldaleTown/scripts.pory"
	.string "Good day, dear civilians! I'm sorry to\n"
	.string "say, {COLOR GREEN}Road 002{COLOR DARK_GRAY} is still off lim-...$"

OldaleDevonGrunts_Text_15:
# 990 "data/maps/OldaleTown/scripts.pory"
	.string "Save your breath, filthy invader - or\n"
	.string "your next words will be your last!$"

OldaleDevonGrunts_Text_16:
# 994 "data/maps/OldaleTown/scripts.pory"
	.string "Jerry, I believe we have a loonie in our\n"
	.string "hands.$"

OldaleDevonGrunts_Text_17:
# 996 "data/maps/OldaleTown/scripts.pory"
	.string "Those DLC therapies aren't doing much\n"
	.string "good...$"

OldaleDevonGrunts_Text_18:
# 1003 "data/maps/OldaleTown/scripts.pory"
	.string "They're mocking us, {PLAYER}! What\n"
	.string "are you waiting for!? Go, YURE!$"

OldaleDevonGrunts_Text_19:
# 1022 "data/maps/OldaleTown/scripts.pory"
	.string "MIMIIII!$"

OldaleDevonGrunts_Text_20:
# 1030 "data/maps/OldaleTown/scripts.pory"
	.string "Well... just because you've beaten us,\n"
	.string "doesn't mean we need to mov-...$"

OldaleDevonGrunts_Text_21:
# 1050 "data/maps/OldaleTown/scripts.pory"
	.string "A-alright Karen, protocol calls for\n"
	.string "retreat!$"

OldaleDevonGrunts_Text_22:
# 1075 "data/maps/OldaleTown/scripts.pory"
	.string "Great work, {PLAYER} - we're a killer\n"
	.string "duo as always!\p"
	.string "But don't rest on your laurels just yet.\n"
	.string "It's time to press on the advantage!$"

OldaleDevonGrunts_Text_23:
# 1082 "data/maps/OldaleTown/scripts.pory"
	.string "CHAAAARGE!$"

OldaleRival_Text_0:
# 1132 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... as long as we stand. No, as\n"
	.string "long as we BREATHE.$"

OldaleRival_Text_1:
# 1137 "data/maps/OldaleTown/scripts.pory"
	.string "The battle for Hoenn is not over!!$"

OldaleRival_Text_2:
# 1142 "data/maps/OldaleTown/scripts.pory"
	.string "Think about what your parents would\n"
	.string "say if you gave up now...$"

OldaleRival_Text_3:
# 1147 "data/maps/OldaleTown/scripts.pory"
	.string "Let's make them proud instead. Let's\n"
	.string "beat those Kantonians once and for all!$"

OldaleRival_Text_4:
# 1151 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... I saw you talking with\n"
	.string "those enemy soldiers just now.$"

OldaleRival_Text_5:
# 1157 "data/maps/OldaleTown/scripts.pory"
	.string "Don't you KNOW by now!? You cannot\n"
	.string "reason with the ENEMY!$"

OldaleRival_Text_6:
# 1159 "data/maps/OldaleTown/scripts.pory"
	.string "You can only {COLOR RED}FIGHT{COLOR DARK_GRAY} it!$"

OldaleRival_Text_7:
# 1164 "data/maps/OldaleTown/scripts.pory"
	.string "But I understand. It was two versus\n"
	.string "one. Don't worry, I am here now.$"

OldaleRival_Text_8:
# 1166 "data/maps/OldaleTown/scripts.pory"
	.string "Let's show those Kantonians they can't\n"
	.string "take our region! LEAD THE WAY,\l"
	.string "{PLAYER}.$"

OldaleRivalfollowchat_Text_0:
# 1197 "data/maps/OldaleTown/scripts.pory"
	.string "Let's go, {PLAYER} - those Kantonians\n"
	.string "are on the {COLOR RED}western exit of Oldale Town!{COLOR DARK_GRAY}$"

OldaleRivalfollowchat_Text_1:
# 1202 "data/maps/OldaleTown/scripts.pory"
	.string "Let's kick their ass all the way to their\n"
	.string "miserable region across the sea!$"

OldaleRivalDontLeaveOldaleto101_Text_0:
# 1216 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!?$"

OldaleRivalDontLeaveOldaleto101_Text_1:
# 1221 "data/maps/OldaleTown/scripts.pory"
	.string "We have already secured the southern\n"
	.string "front, remember!? Thanks to your\l"
	.string "glorious victory!$"

OldaleRivalDontLeaveOldaleto101_Text_2:
# 1224 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the next battle?$"

OldaleRivalDontLeaveOldaleto101_Text_3:
# 1228 "data/maps/OldaleTown/scripts.pory"
	.string "Very well... I'll be keeping an eye on\n"
	.string "them. Don't take long!$"

OldaleRivalDontLeaveOldaleto101_Text_4:
# 1249 "data/maps/OldaleTown/scripts.pory"
	.string "Let's not delay then. I'm as ready as\n"
	.string "I'll ever be!$"

OldaleWareHouseSign_Text_0:
# 1263 "data/maps/OldaleTown/scripts.pory"
	.string "East - Oldale Warehouse.$"

OldaleMotorBike_Text_0:
# 1269 "data/maps/OldaleTown/scripts.pory"
	.string "A motorbike. A decal on its die reads\n"
	.string "'Rebel 4 Life'.$"

OldaleCar_Text_0:
# 1275 "data/maps/OldaleTown/scripts.pory"
	.string "It's a Devon Roader. It's got\n"
	.string "footprints all over the ceiling.$"

Oldale4x4_Text_0:
# 1281 "data/maps/OldaleTown/scripts.pory"
	.string "It's a Devon Hauler. Seems to have been\n"
	.string "parked for some time.$"

OldaleBike_Text_0:
# 1288 "data/maps/OldaleTown/scripts.pory"
	.string "The bike has tons of locks on the\n"
	.string "wheels, to discourage theft.$"

OldalePlant_Text_0:
# 1295 "data/maps/OldaleTown/scripts.pory"
	.string "The plants are on the same state that\n"
	.string "the trees around...\p"
	.string "On their way to wither.$"

OldaleDLCWindow_Text_0:
# 1303 "data/maps/OldaleTown/scripts.pory"
	.string "You can see the DLC's library through\n"
	.string "the window.\p"
	.string "The library's clerk is browsing an...\n"
	.string "“explicit” website.$"

OldaleDevonTruck_Text_0:
# 1310 "data/maps/OldaleTown/scripts.pory"
	.string "Dirt has accumulated on the Devon\n"
	.string "truck. Seems to have been parked for\l"
	.string "some time.$"

OldaleDevonTruckDamaged_Text_0:
# 1316 "data/maps/OldaleTown/scripts.pory"
	.string "There's many hit marks on the truck.\n"
	.string "Someone tried to open it, to no avail.$"

OldaleRivalDontLeaveOldaleto103_Text_0:
# 1359 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? The\n"
	.string "enemy is not this way!$"

OldaleRivalDontLeaveOldaleto103_Text_1:
# 1364 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the battle?$"

OldaleRivalnoleavetoWhouse_Text_0:
# 1413 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? This\n"
	.string "way is to the {COLOR GREEN}warehouse{COLOR DARK_GRAY}!$"

OldaleRivalnoleavetoWhouse_Text_1:
# 1418 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you want to resupply there\n"
	.string "before the battle?$"

OldaleRivalnoleavetoWhouse_Text_2:
# 1425 "data/maps/OldaleTown/scripts.pory"
	.string "Aah, smart thinking! I'll keep an eye on\n"
	.string "those Kantonians. Don't take long!$"

OldaleWarehouseRebelGuard_Text_0:
# 1465 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 1472 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Calvin!$"

OldaleWarehouseRebelGuard_Text_2:
# 1474 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Calvin!$"

OldaleWarehouseRebelGuard_Text_3:
# 1476 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "next to you? He's so pathetic!\p"
	.string "I'll teach you that not every Rebel is\n"
	.string "like him!$"

OldaleWarehouseRebelGuard_Text_4:
# 1481 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 1484 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 1512 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 1520 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only clanker Safemon in\n"
	.string "this patch! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 1531 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 1571 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 1584 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 1586 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 1613 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

SamanthaCall1_Text_0:
# 1648 "data/maps/OldaleTown/scripts.pory"
	.string "U-uhm... hi, {PLAYER}! It's me,\n"
	.string "Samantha.\p"
	.string "I hope I haven't caught you at a bad\n"
	.string "time...\p"
	.string "B-but, since you said you'd help me out\n"
	.string "here in the {COLOR GREEN}Mausoleum{COLOR DARK_GRAY}, I...\p"
	.string "I-I was wondering if you could, like...\n"
	.string "come do me a favour?\p"
	.string "I-it's okay if you're too busy, and\n"
	.string "there's no hurry, but...\p"
	.string "I-I'll be here if you decide to come!\p"
	.string "Sorry for bothering. S-see you!$"

SamanthaDontgotoDevonCenter_Text_0:
# 1670 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... I-I know they sell\n"
	.string "boxed lunches in here, but...$"

SamanthaDontgotoDevonCenter_Text_1:
# 1671 "data/maps/OldaleTown/scripts.pory"
	.string "I-I don't have enough money for\n"
	.string "those...\p"
	.string "Can... can we go to the vending machine\n"
	.string "instead?$"

SamanthaDontgotoDevonCenter_Text_2:
# 1676 "data/maps/OldaleTown/scripts.pory"
	.string "W-we can go back to the {COLOR GREEN}Mausoleum{COLOR DARK_GRAY} now...\n"
	.string "I-I don't want to take more of your\l"
	.string "time...!$"

SamanthaDontgotoDLC_Text_0:
# 1692 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... is this the Devon\n"
	.string "Learning Center?$"

SamanthaDontgotoDLC_Text_1:
# 1693 "data/maps/OldaleTown/scripts.pory"
	.string "It seems like they are holding a lesson\n"
	.string "now...\p"
	.string "I have not signed up for it, so I would\n"
	.string "not like to interrupt.$"

SamanthaDontgoto102_Text_0:
# 1712 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Road 002, right?$"

SamanthaDontgoto102_Text_1:
# 1714 "data/maps/OldaleTown/scripts.pory"
	.string "W-we don't need to go that far...\p"
	.string "I'm sure there's another vending\n"
	.string "machine in {COLOR GREEN}Petalburg{COLOR DARK_GRAY}, b-but... the one\l"
	.string "here in {COLOR GREEN}Oldale{COLOR DARK_GRAY} will do!$"

SamanthaDontgoto103_Text_0:
# 1735 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Route 103, right?$"

SamanthaDontgoto103_Text_1:
# 1737 "data/maps/OldaleTown/scripts.pory"
	.string "B-but {COLOR GREEN}Slateport{COLOR DARK_GRAY} is very far... t-the\n"
	.string "snacks here in {COLOR GREEN}Oldale{COLOR DARK_GRAY} will do!$"

SamanthaDontgotoWarehouse_Text_0:
# 1758 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... Oldale's Warehouse is\n"
	.string "over there, right?$"

SamanthaDontgotoWarehouse_Text_1:
# 1762 "data/maps/OldaleTown/scripts.pory"
	.string "I-I dont' think they sell any food over\n"
	.string "there...$"

SamanthaDontgotoWarehouse_Text_2:
# 1766 "data/maps/OldaleTown/scripts.pory"
	.string "I-I see some scary {COLOR RED}Rebels{COLOR DARK_GRAY} over there...\n"
	.string "m-maybe we shouldn't get near...$"

SamanthaDontgotoWarehouse_Text_3:
# 1770 "data/maps/OldaleTown/scripts.pory"
	.string "I-I'll just get some snacks from the\n"
	.string "vending machine there, o-okay?$"

SamanthaGetSnacksCutscene_Text_0:
# 1794 "data/maps/OldaleTown/scripts.pory"
	.string "A-ah... here we are, {PLAYER}! Give me\n"
	.string "a moment...$"

SamanthaGetSnacksCutscene_Text_1:
# 1798 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I'll have some of these...$"

SamanthaGetSnacksCutscene_Text_2:
# 1802 "data/maps/OldaleTown/scripts.pory"
	.string "And of these...$"

SamanthaGetSnacksCutscene_Text_3:
# 1809 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, and these too...!$"

SamanthaGetSnacksCutscene_Text_4:
# 1824 "data/maps/OldaleTown/scripts.pory"
	.string "Hehehe... I've got tons. We can go back.\p"
	.string "T-thank you...$"

GiveSafemonParty1_Text_0:
# 1848 "data/maps/OldaleTown/scripts.pory"
	.string "Pick a team$"

GiveSafemonParty1_Text_1:
# 1849 "data/maps/OldaleTown/scripts.pory"
	.string "1st Party$"

GiveSafemonParty1_Text_2:
# 1849 "data/maps/OldaleTown/scripts.pory"
	.string "2nd Party$"

GiveSafemonParty1_Text_3:
# 1849 "data/maps/OldaleTown/scripts.pory"
	.string "3rd Party$"

GiveSafemonParty1_Text_4:
# 1849 "data/maps/OldaleTown/scripts.pory"
	.string "4th Party$"

GiveSafemonParty1_Text_5:
# 1849 "data/maps/OldaleTown/scripts.pory"
	.string "5th Party$"

GiveSafemonParty1_Text_6:
# 1849 "data/maps/OldaleTown/scripts.pory"
	.string "Good Party$"

DevonWarehouseGuardM_Text_0:
# 1911 "data/maps/OldaleTown/scripts.pory"
	.string "We have redoubled our security after\n"
	.string "the recent Rebel invasion.\p"
	.string "Job applicants may still come in, but be\n"
	.string "in your best behaviour.$"

DevonWarehouseGuardF_Text_0:
# 1924 "data/maps/OldaleTown/scripts.pory"
	.string "We were ready for a battle with those\n"
	.string "Rebels that had holed up in here...\p"
	.string "But they had just gone when we arrived.\n"
	.string "Odd, but welcome!$"

DevonGruntMOutro::
# 1112 "data/maps/OldaleTown/scripts.pory"
	.string "We haven't lost. We have just delegated\nyour arrest to fellow Devon Guards.$"

DevonGruntFOutro::
# 1115 "data/maps/OldaleTown/scripts.pory"
	.string "... exactly.$"

RebelOldale_Outro::
# 1501 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Calvin was right after\nall...$"
