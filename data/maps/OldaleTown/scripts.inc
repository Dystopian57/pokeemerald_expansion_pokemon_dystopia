# 1 "data/maps/OldaleTown/scripts.pory"


OldaleTown_MapScripts::
# 15 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
# 16 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleWeather
# 17 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GenderedSpriteOldale
# 19 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ResetFountainHIHint
# 21 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightNPC
# 22 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleWeather
# 23 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GenderedSpriteOldale
# 25 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ResetFountainHIHint
	.byte 0


ResetFountainHIHint::
# 29 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_FOUNTAIN, ResetFountainHIHint_1
# 33 "data/maps/OldaleTown/scripts.pory"
	release
	return

ResetFountainHIHint_1:
# 30 "data/maps/OldaleTown/scripts.pory"
	clearflag oldalefountainsparkle
	return


ChangeTrainerCardTest::
# 37 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_TOWER_GOLD
# 38 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_DOME_GOLD
# 39 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_PALACE_GOLD
# 40 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_ARENA_GOLD
# 41 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_FACTORY_GOLD
# 42 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_PIKE_GOLD
# 43 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_PYRAMID_GOLD
# 44 "data/maps/OldaleTown/scripts.pory"
	msgbox ChangeTrainerCardTest_Text_0
	return


GenderedSpriteOldale::
# 48 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


FountainCoinSparkle::
# 51 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset oldalefountainsparkle, FountainCoinSparkle_2
# 55 "data/maps/OldaleTown/scripts.pory"
	release
FountainCoinSparkle_1:
# 56 "data/maps/OldaleTown/scripts.pory"
	release
	return

FountainCoinSparkle_2:
# 52 "data/maps/OldaleTown/scripts.pory"
	dofieldeffectsparkle 10, 9, 1
# 53 "data/maps/OldaleTown/scripts.pory"
	setflag oldalefountainsparkle
	goto FountainCoinSparkle_1


BalsamCallAfterWarehouse::
# 61 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset BalsamtoldtogoseeNorman, BalsamCallAfterWarehouse_1
# 77 "data/maps/OldaleTown/scripts.pory"
	release
	return

BalsamCallAfterWarehouse_1:
# 63 "data/maps/OldaleTown/scripts.pory"
	pokenavcall BalsamCallAfterWarehouse_Text_0
# 70 "data/maps/OldaleTown/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_lt BalsamCallAfterWarehouse_5
BalsamCallAfterWarehouse_4:
# 75 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_2
	return

BalsamCallAfterWarehouse_5:
# 71 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_1
	goto BalsamCallAfterWarehouse_4


TimeofDayTest::
# 81 "data/maps/OldaleTown/scripts.pory"
	lock
# 82 "data/maps/OldaleTown/scripts.pory"
	gettimeofday
# 83 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq TimeofDayTest_2
TimeofDayTest_1:
# 87 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq TimeofDayTest_5
TimeofDayTest_4:
# 91 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq TimeofDayTest_8
TimeofDayTest_7:
# 95 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq TimeofDayTest_11
TimeofDayTest_10:
# 98 "data/maps/OldaleTown/scripts.pory"
endoftimeofdaytest:
# 99 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

TimeofDayTest_2:
# 84 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_0
# 85 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_1

TimeofDayTest_5:
# 88 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_1
# 89 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_4

TimeofDayTest_8:
# 92 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_2
# 93 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_7

TimeofDayTest_11:
# 96 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_3
# 97 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_10


OldaleWeather::
# 105 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 108 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 111 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 106 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 109 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 112 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


ConArtist103Rewards::
# 117 "data/maps/OldaleTown/scripts.pory"
	lock
# 118 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 119 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 120 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_2
# 171 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 172 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_14
# 173 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
ConArtist103Rewards_1:
# 175 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 176 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 122 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 123 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 124 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 125 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 126 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 127 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 128 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 132 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 133 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_6
ConArtist103Rewards_5:
# 162 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_8
	goto ConArtist103Rewards_1

ConArtist103Rewards_6:
# 134 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 135 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 136 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 137 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_6, ConArtist103Rewards_Text_7, ConArtist103Rewards_Text_8, ConArtist103Rewards_Text_9
# 138 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_11
ConArtist103Rewards_10:
# 143 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_14
ConArtist103Rewards_13:
# 148 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_17
ConArtist103Rewards_16:
# 156 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_19
	goto ConArtist103Rewards_5

ConArtist103Rewards_8:
# 163 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 164 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 165 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_13
# 167 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_1

ConArtist103Rewards_11:
# 139 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 140 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_10

ConArtist103Rewards_14:
# 144 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
# 145 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_13

ConArtist103Rewards_17:
# 149 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_12
# 153 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_16

ConArtist103Rewards_19:
# 157 "data/maps/OldaleTown/scripts.pory"
	goto refusedeggs
	goto ConArtist103Rewards_5


OldaleVendingMachine::
# 181 "data/maps/OldaleTown/scripts.pory"
	lock
# 182 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 183 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 184 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 187 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 240 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 293 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 345 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 348 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 349 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 350 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 188 "data/maps/OldaleTown/scripts.pory"
	checkmoney 50
# 189 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 234 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 241 "data/maps/OldaleTown/scripts.pory"
	checkmoney 70
# 242 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 287 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 190 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 191 "data/maps/OldaleTown/scripts.pory"
	waitse
# 192 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 194 "data/maps/OldaleTown/scripts.pory"
	random 4
# 195 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 196 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 198 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 199 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 200 "data/maps/OldaleTown/scripts.pory"
	waitse
# 201 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 202 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 203 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 204 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 206 "data/maps/OldaleTown/scripts.pory"
	random 20
# 207 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 208 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 210 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 211 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 212 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 213 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 214 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 216 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 217 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 218 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 219 "data/maps/OldaleTown/scripts.pory"
	waitse
# 220 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 222 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 223 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 228 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 294 "data/maps/OldaleTown/scripts.pory"
	checkmoney 40
# 295 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 340 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 243 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 244 "data/maps/OldaleTown/scripts.pory"
	waitse
# 245 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 247 "data/maps/OldaleTown/scripts.pory"
	random 4
# 248 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, teagotstuck
# 249 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gottea
# 251 "data/maps/OldaleTown/scripts.pory"
gottea:
# 252 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 253 "data/maps/OldaleTown/scripts.pory"
	waitse
# 254 "data/maps/OldaleTown/scripts.pory"
	removemoney 70
# 255 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 256 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 257 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TEA
# 259 "data/maps/OldaleTown/scripts.pory"
	random 20
# 260 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 261 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextratea
# 263 "data/maps/OldaleTown/scripts.pory"
gotextratea:
# 264 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 265 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 266 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TEA
# 267 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 269 "data/maps/OldaleTown/scripts.pory"
teagotstuck:
# 270 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 271 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 272 "data/maps/OldaleTown/scripts.pory"
	waitse
# 273 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 275 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 276 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 281 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 235 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 224 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 225 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 346 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 296 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 297 "data/maps/OldaleTown/scripts.pory"
	waitse
# 298 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 300 "data/maps/OldaleTown/scripts.pory"
	random 4
# 301 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, lavacookiegotstuck
# 302 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotlavacookie
# 304 "data/maps/OldaleTown/scripts.pory"
gotlavacookie:
# 305 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 306 "data/maps/OldaleTown/scripts.pory"
	waitse
# 307 "data/maps/OldaleTown/scripts.pory"
	removemoney 40
# 308 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 309 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 310 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 312 "data/maps/OldaleTown/scripts.pory"
	random 20
# 313 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 314 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextralavacookie
# 316 "data/maps/OldaleTown/scripts.pory"
gotextralavacookie:
# 317 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 318 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 319 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 320 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 322 "data/maps/OldaleTown/scripts.pory"
lavacookiegotstuck:
# 323 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 324 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 325 "data/maps/OldaleTown/scripts.pory"
	waitse
# 326 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 328 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 329 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 334 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 288 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 277 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 278 "data/maps/OldaleTown/scripts.pory"
	goto gottea
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 229 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 341 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 330 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 331 "data/maps/OldaleTown/scripts.pory"
	goto gotlavacookie
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 282 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 335 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 355 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 356 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 357 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 358 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 359 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 360 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 365 "data/maps/OldaleTown/scripts.pory"
	lock
# 366 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 367 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 371 "data/maps/OldaleTown/scripts.pory"
	lock
# 372 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 373 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 377 "data/maps/OldaleTown/scripts.pory"
	lock
# 378 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 379 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale102Sign::
# 384 "data/maps/OldaleTown/scripts.pory"
	lock
# 385 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale102Sign_Text_0
# 386 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalePeekingOldman::
# 390 "data/maps/OldaleTown/scripts.pory"
	lock
# 391 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 392 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_0
# 394 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 398 "data/maps/OldaleTown/scripts.pory"
	lock
# 399 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 400 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 401 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 406 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 411 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 416 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 421 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 403 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 408 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 413 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 418 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 425 "data/maps/OldaleTown/scripts.pory"
	lock
# 426 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 427 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, ConArtist103Rewards_Movement_0
# 429 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_3
OldaleOutsideParkNPC_1:
# 434 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_8
OldaleOutsideParkNPC_6:
# 441 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_13
OldaleOutsideParkNPC_11:
# 447 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_18
OldaleOutsideParkNPC_16:
# 453 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_2:
# 431 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_3:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_2
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_7:
# 436 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_8:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_7
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_12:
# 443 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_2
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_13:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_12
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_17:
# 449 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_3
	goto OldaleOutsideParkNPC_16

OldaleOutsideParkNPC_18:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_17
	goto OldaleOutsideParkNPC_16


OldaleOutsideOldGuy::
# 463 "data/maps/OldaleTown/scripts.pory"
	lock
# 464 "data/maps/OldaleTown/scripts.pory"
	applymovement 12, ConArtist103Rewards_Movement_0
# 465 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 469 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldWoman::
# 473 "data/maps/OldaleTown/scripts.pory"
	lock
# 474 "data/maps/OldaleTown/scripts.pory"
	applymovement 30, ConArtist103Rewards_Movement_0
# 475 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldWoman_Text_0
# 477 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


DLCTeacherOutside::
# 481 "data/maps/OldaleTown/scripts.pory"
	lock
# 482 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 483 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq DLCTeacherOutside_2
DLCTeacherOutside_1:
# 487 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq DLCTeacherOutside_5
DLCTeacherOutside_4:
# 494 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

DLCTeacherOutside_2:
# 484 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_0
	goto DLCTeacherOutside_1

DLCTeacherOutside_5:
# 488 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 489 "data/maps/OldaleTown/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 490 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_1
	goto DLCTeacherOutside_4


OldaleTown_GotoTherapy::
# 498 "data/maps/OldaleTown/scripts.pory"
	lock
# 499 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 500 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 501 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 502 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 503 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 504 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 505 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 506 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 507 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 508 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 509 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 510 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 511 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 516 "data/maps/OldaleTown/scripts.pory"
	goto_if_set sharpycameliaDLCcs, OldaleSharpyCameliaOutDLCCutscene_1
# 728 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleSharpyCameliaOutDLCCutscene_1:
# 518 "data/maps/OldaleTown/scripts.pory"
	lock
# 519 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 520 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 521 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 522 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 524 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 525 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 526 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 527 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 530 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 531 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 532 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 534 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 535 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 540 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 544 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 545 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 546 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 547 "data/maps/OldaleTown/scripts.pory"
	waitse
# 548 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 549 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 551 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 554 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 557 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 558 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 559 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 560 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 561 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 562 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 563 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 565 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 566 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 567 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 568 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 570 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 571 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 572 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 573 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 576 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 577 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 578 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 579 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 582 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 583 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 585 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 589 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 678 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 679 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 680 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 681 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 682 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 684 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 685 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 686 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 687 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 689 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 690 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 691 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 692 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 694 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 695 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 696 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 697 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 699 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 700 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 701 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 702 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 705 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 706 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 707 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 708 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 709 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 710 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 711 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 712 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 714 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 715 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 717 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 17, 0, 0
# 719 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpycameliaDLCcs
# 720 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 721 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 722 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 723 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 724 "data/maps/OldaleTown/scripts.pory"
	setflag finishedtherapy
# 725 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_5:
# 536 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 541 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 552 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 555 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 586 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 590 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 591 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 592 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 593 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 596 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 597 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 598 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 599 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 600 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 602 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 603 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 604 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 605 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 608 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 609 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 610 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 611 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 612 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 614 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 615 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 617 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 621 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_26
OldaleSharpyCameliaOutDLCCutscene_25:
# 627 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 628 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 629 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 630 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 633 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 634 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 635 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 636 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 637 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 639 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 640 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 641 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 642 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 643 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 645 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 646 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 647 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 648 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 650 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 651 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 652 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 653 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 655 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 656 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 657 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 658 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 659 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 661 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 662 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 663 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 664 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 665 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 666 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 668 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 669 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 670 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 673 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 674 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 618 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_22

OldaleSharpyCameliaOutDLCCutscene_26:
# 622 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 623 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 624 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 625 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_25


OldaleCamelia::
# 733 "data/maps/OldaleTown/scripts.pory"
	lock
# 735 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 760 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 761 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 762 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 763 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 765 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 766 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 767 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 768 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 771 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 772 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 738 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 739 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, ConArtist103Rewards_Movement_0
# 740 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 741 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 742 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 745 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 746 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 747 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 748 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 750 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 751 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 752 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 753 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


OldaleDevonGrunts::
# 785 "data/maps/OldaleTown/scripts.pory"
	lock
# 786 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 787 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_3
OldaleDevonGrunts_1:
# 800 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_8
OldaleDevonGrunts_6:
# 818 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_12
OldaleDevonGrunts_11:
# 855 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 857 "data/maps/OldaleTown/scripts.pory"
	setflag devonsdontblock102
# 858 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 789 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 790 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 793 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 794 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 796 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 797 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_3:
# 787 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Sharpydefeatedat103, OldaleDevonGrunts_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_7:
# 801 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 802 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
# 805 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 806 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 810 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_2
# 811 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 813 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 814 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_8:
# 800 "data/maps/OldaleTown/scripts.pory"
	goto_if_set Sharpydefeatedat103, OldaleDevonGrunts_7
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_12:
# 819 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 820 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 823 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 824 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_7
# 826 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 827 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 828 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_8
# 829 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 831 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleDevonGrunts_15
OldaleDevonGrunts_14:
# 844 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleDevonGrunts_18
OldaleDevonGrunts_17:
# 847 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 848 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 850 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
	goto OldaleDevonGrunts_11

OldaleDevonGrunts_15:
# 832 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_9
# 834 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 835 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_10
# 839 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 840 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_11
	goto OldaleDevonGrunts_14

OldaleDevonGrunts_18:
# 845 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_12
	goto OldaleDevonGrunts_17


OldaleRival::
# 862 "data/maps/OldaleTown/scripts.pory"
	lock
# 863 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 864 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_0
# 866 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_1
# 867 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_2
# 868 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_3
# 870 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 872 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 873 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_2
OldaleRival_1:
# 876 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_5
OldaleRival_4:
# 878 "data/maps/OldaleTown/scripts.pory"
	removeobject 21
# 879 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
	return

OldaleRival_2:
# 874 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRival_1

OldaleRival_5:
# 877 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_MALE
	goto OldaleRival_4


OldaleRivalfollowchat::
# 883 "data/maps/OldaleTown/scripts.pory"
	lock
# 884 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_0
# 886 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_1
# 887 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleRivalDontLeaveOldaleto101::
# 890 "data/maps/OldaleTown/scripts.pory"
	lock
# 891 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 892 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 893 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_0
# 895 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_1
# 898 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_2
# 899 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 900 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto101_2
OldaleRivalDontLeaveOldaleto101_1:
# 910 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto101_5
OldaleRivalDontLeaveOldaleto101_4:
# 916 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto101_2:
# 901 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 902 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 903 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 904 "data/maps/OldaleTown/scripts.pory"
	addobject 21
# 905 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 906 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 907 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalDontLeaveOldaleto101_1

OldaleRivalDontLeaveOldaleto101_5:
# 912 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 913 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 914 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto101_4


OldaleWareHouseSign::
# 921 "data/maps/OldaleTown/scripts.pory"
	lock
# 922 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWareHouseSign_Text_0
# 923 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleMotorBike::
# 927 "data/maps/OldaleTown/scripts.pory"
	lock
# 928 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleMotorBike_Text_0
# 929 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCar::
# 933 "data/maps/OldaleTown/scripts.pory"
	lock
# 934 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCar_Text_0
# 935 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleBike::
# 939 "data/maps/OldaleTown/scripts.pory"
	lock
# 940 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 941 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleBike_Text_0
# 942 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePlant::
# 946 "data/maps/OldaleTown/scripts.pory"
	lock
# 947 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 948 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePlant_Text_0
# 950 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDLCWindow::
# 954 "data/maps/OldaleTown/scripts.pory"
	lock
# 955 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 956 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCWindow_Text_0
# 958 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePostFenceItem::
# 965 "data/maps/OldaleTown/scripts.pory"
	lock
# 966 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_BIKE_VOUCHER
# 969 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 970 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleHouse2GardenItem::
# 973 "data/maps/OldaleTown/scripts.pory"
	lock
# 974 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_SOFT_SAND
# 977 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 978 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleParkingItem::
# 981 "data/maps/OldaleTown/scripts.pory"
	lock
# 982 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_METAL_COAT
# 983 "data/maps/OldaleTown/scripts.pory"
	removeobject 3
# 984 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalebyTruckItem::
# 987 "data/maps/OldaleTown/scripts.pory"
	lock
# 988 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_RAZOR_FANG
# 989 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 990 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalDontLeaveOldaleto103::
# 994 "data/maps/OldaleTown/scripts.pory"
	lock
# 995 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 996 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 997 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_0
# 999 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_1
# 1000 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1001 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto103_2
OldaleRivalDontLeaveOldaleto103_1:
# 1011 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto103_5
OldaleRivalDontLeaveOldaleto103_4:
# 1017 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto103_2:
# 1002 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 1003 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1004 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1005 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 1006 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1007 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1008 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalDontLeaveOldaleto103_1

OldaleRivalDontLeaveOldaleto103_5:
# 1013 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1014 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 1015 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto103_4


OldaleRivalnoleavetoWhouse::
# 1021 "data/maps/OldaleTown/scripts.pory"
	lock
# 1022 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1023 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 1024 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_0
# 1026 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_1
# 1027 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1028 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalnoleavetoWhouse_2
OldaleRivalnoleavetoWhouse_1:
# 1038 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalnoleavetoWhouse_5
OldaleRivalnoleavetoWhouse_4:
# 1044 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalnoleavetoWhouse_2:
# 1029 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_2
# 1030 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1031 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1032 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 1033 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1034 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1035 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalnoleavetoWhouse_1

OldaleRivalnoleavetoWhouse_5:
# 1040 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1041 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1042 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalnoleavetoWhouse_4


OldaleWarehouseRebelGuard::
# 1054 "data/maps/OldaleTown/scripts.pory"
	lock
# 1055 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1056 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 1057 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleVendingMachine_Movement_0
# 1058 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1059 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1061 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1062 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 1064 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 1067 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 1070 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 1072 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 1073 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1074 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1075 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 1077 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 1078 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1079 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 1080 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1081 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1082 "data/maps/OldaleTown/scripts.pory"
	removeobject 18
# 1083 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 1084 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 1085 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1087 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 1063 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 1065 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 1096 "data/maps/OldaleTown/scripts.pory"
	lock
# 1097 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 1098 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleTruckRebel_Movement_0
# 1099 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1101 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 1103 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 1107 "data/maps/OldaleTown/scripts.pory"
	lock
# 1108 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 1109 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 1113 "data/maps/OldaleTown/scripts.pory"
	lock
# 1114 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1115 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1116 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1117 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1118 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1119 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1120 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach0_Movement_0
# 1121 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1122 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1123 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 1127 "data/maps/OldaleTown/scripts.pory"
	lock
# 1128 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1129 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1130 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1131 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1132 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1133 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach1_Movement_0
# 1134 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1135 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1136 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 1140 "data/maps/OldaleTown/scripts.pory"
	lock
# 1141 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1142 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1143 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1144 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1145 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1146 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach2_Movement_0
# 1147 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1148 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1149 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 1154 "data/maps/OldaleTown/scripts.pory"
	lock
# 1155 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1156 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 1157 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 1159 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1160 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1161 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1162 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 1163 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1164 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 1165 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1166 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_3
# 1167 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1168 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_4
# 1169 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1170 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1171 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1172 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1173 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1174 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 1175 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebel_Movement_0
# 1176 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1177 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1178 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1179 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1180 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1181 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1182 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1183 "data/maps/OldaleTown/scripts.pory"
	removeobject 24
# 1184 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1185 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1186 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 1192 "data/maps/OldaleTown/scripts.pory"
	lock
# 1193 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_0
# 1194 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 1196 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1197 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1198 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1199 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 1200 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1201 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1202 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1203 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1204 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1205 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 1206 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1207 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1208 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_1
# 1209 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1210 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1211 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1212 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1213 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 1214 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1215 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1216 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaCall1::
# 1222 "data/maps/OldaleTown/scripts.pory"
	lock
# 1223 "data/maps/OldaleTown/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_gt SamanthaCall1_1
# 1232 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaCall1_1:
# 1224 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1225 "data/maps/OldaleTown/scripts.pory"
	pokenavcall SamanthaCall1_Text_0
# 1229 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 1230 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaDontgotoDevonCenter::
# 1239 "data/maps/OldaleTown/scripts.pory"
	lock
# 1240 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoDevonCenter_2
# 1252 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoDevonCenter_1:
# 1254 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 1255 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1256 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoDevonCenter_2:
# 1243 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1244 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1245 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1246 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_0
# 1247 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_1
	goto SamanthaDontgotoDevonCenter_1


SamanthaDontgotoDLC::
# 1260 "data/maps/OldaleTown/scripts.pory"
	lock
# 1261 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoDLC_2
# 1273 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoDLC_1:
# 1275 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoDLC_Movement_0
# 1276 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1277 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoDLC_2:
# 1264 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1265 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1266 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1267 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_0
# 1268 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_1
	goto SamanthaDontgotoDLC_1


SamanthaDontgoto102::
# 1280 "data/maps/OldaleTown/scripts.pory"
	lock
# 1281 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgoto102_2
# 1295 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgoto102_1:
# 1297 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 1298 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1299 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgoto102_2:
# 1284 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1285 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1286 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1287 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_0
# 1289 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_1
	goto SamanthaDontgoto102_1


SamanthaDontgoto103::
# 1303 "data/maps/OldaleTown/scripts.pory"
	lock
# 1304 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgoto103_2
# 1316 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgoto103_1:
# 1318 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoDLC_Movement_0
# 1319 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1320 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgoto103_2:
# 1306 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1307 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1308 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1309 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_0
# 1311 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_1
	goto SamanthaDontgoto103_1


SamanthaDontgotoWarehouse::
# 1324 "data/maps/OldaleTown/scripts.pory"
	lock
# 1325 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoWarehouse_2
# 1346 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoWarehouse_1:
# 1348 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1349 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1350 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoWarehouse_2:
# 1327 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1328 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1329 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1330 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_0
# 1332 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_lt SamanthaDontgotoWarehouse_6
# 1338 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_2
SamanthaDontgotoWarehouse_5:
# 1340 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1341 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1342 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_3
	goto SamanthaDontgotoWarehouse_1

SamanthaDontgotoWarehouse_6:
# 1334 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_1
	goto SamanthaDontgotoWarehouse_5


SamanthaGetSnacksCutscene::
# 1355 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaGetSnacksCutscene_1
# 1397 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaGetSnacksCutscene_1:
# 1357 "data/maps/OldaleTown/scripts.pory"
	lock
# 1358 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1359 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_0
# 1360 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_0
# 1361 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaGetSnacksCutscene_Movement_1
# 1362 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_2
# 1363 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1364 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_1
# 1365 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1366 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1367 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1368 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_2
# 1369 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1370 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1371 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1372 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1373 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1374 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1375 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_3
# 1376 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1377 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1378 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1379 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1380 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1381 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1382 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1383 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1384 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1385 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1387 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_4
# 1388 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1389 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1390 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_4
# 1392 "data/maps/OldaleTown/scripts.pory"
	setflag Samanthagotsnacks
# 1394 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaShake::
# 1402 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1403 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 1404 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 1405 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 1406 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 1407 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


# 119 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 119 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 217 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 217 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 501 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 501 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 501 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 501 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 501 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 501 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 501 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 506 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 506 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 506 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 506 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 506 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 506 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 506 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 509 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 545 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 545 "data/maps/OldaleTown/scripts.pory"
	face_left
# 545 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 558 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 558 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 558 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 559 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 559 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 609 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 609 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 669 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 669 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 789 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 789 "data/maps/OldaleTown/scripts.pory"
	face_player
# 789 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 805 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 805 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 805 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 810 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 810 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 810 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 834 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_3:
# 834 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 892 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_0:
# 892 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 913 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_1:
# 913 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 996 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto103_Movement_0:
# 996 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1041 "data/maps/OldaleTown/scripts.pory"
OldaleRivalnoleavetoWhouse_Movement_0:
# 1041 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 1098 "data/maps/OldaleTown/scripts.pory"
OldaleTruckRebel_Movement_0:
# 1098 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1120 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 1120 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 1120 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1133 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 1133 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 1146 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 1146 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 1175 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 1175 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1175 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1175 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1175 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1175 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1175 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1175 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1175 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1193 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 1193 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 1193 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1208 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
# 1208 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1208 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1208 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1208 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1208 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1208 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1208 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1243 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDevonCenter_Movement_0:
# 1243 "data/maps/OldaleTown/scripts.pory"
	face_player
# 1243 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 1275 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDLC_Movement_0:
# 1275 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 1359 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_0:
# 1359 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 1359 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 1361 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_1:
# 1361 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1361 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1362 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_2:
# 1362 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1362 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1362 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1362 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1362 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1365 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_3:
# 1365 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 1387 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_4:
# 1387 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1387 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

ChangeTrainerCardTest_Text_0:
# 44 "data/maps/OldaleTown/scripts.pory"
	.string "All symbols given$"

BalsamCallAfterWarehouse_Text_0:
# 63 "data/maps/OldaleTown/scripts.pory"
	.string "Prof Balsam: Hey there, {PLAYER}. It's\n"
	.string "me, Balsam.\p"
	.string "Are you alright? Therapy should have\n"
	.string "finished ages ago, but you haven't\l"
	.string "returned like we discussed.\p"
	.string "It's alright if you want to stretch your\n"
	.string "legs, but you should have told us. Your\l"
	.string "grandpa Birch was worried sick.\p"
	.string "Since you're feeling adventurous - why\n"
	.string "don't you go visit your other grandpa\l"
	.string "at Petalburg?\p"
	.string "A change of scenery will do you good.\n"
	.string "It's very close, but give me a call if you\l"
	.string "get lost.$"

BalsamCallAfterWarehouse_Text_1:
# 71 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, and we still need help with finding\n"
	.string "that Voltorb Shard my Aide asked you\l"
	.string "about.\p"
	.string "It's not urgent, but we'd really\n"
	.string "appreciate it.$"

BalsamCallAfterWarehouse_Text_2:
# 75 "data/maps/OldaleTown/scripts.pory"
	.string "It's back to work for me. Take care,\n"
	.string "{PLAYER}.$"

TimeofDayTest_Text_0:
# 84 "data/maps/OldaleTown/scripts.pory"
	.string "Morning.$"

TimeofDayTest_Text_1:
# 88 "data/maps/OldaleTown/scripts.pory"
	.string "Day.$"

TimeofDayTest_Text_2:
# 92 "data/maps/OldaleTown/scripts.pory"
	.string "Evening.$"

TimeofDayTest_Text_3:
# 96 "data/maps/OldaleTown/scripts.pory"
	.string "Night.$"

ConArtist103Rewards_Text_0:
# 123 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 126 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 128 "data/maps/OldaleTown/scripts.pory"
	.string "Look, I know I said I'd give you some\n"
	.string "cash but...\p"
	.string "All I have is my wares! The cash I get\n"
	.string "when I sell them, duh!\p"
	.string "Speaking of wares - would you like to\n"
	.string "take a look at them?$"

ConArtist103Rewards_Text_3:
# 132 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 132 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 135 "data/maps/OldaleTown/scripts.pory"
	.string "Hehe, of course you do... here's what I\n"
	.string "got! Only 500 each!$"

ConArtist103Rewards_Text_6:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 1$"

ConArtist103Rewards_Text_7:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 2$"

ConArtist103Rewards_Text_8:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "Rosy Egg$"

ConArtist103Rewards_Text_9:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "Not really$"

ConArtist103Rewards_Text_10:
# 139 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 1 here$"

ConArtist103Rewards_Text_11:
# 144 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 2 here$"

ConArtist103Rewards_Text_12:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 3 here$"

ConArtist103Rewards_Text_13:
# 165 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to Petalburg soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_14:
# 172 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in some eggs?$"

OldaleVendingMachine_Text_0:
# 182 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 184 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 50¥$"

OldaleVendingMachine_Text_2:
# 184 "data/maps/OldaleTown/scripts.pory"
	.string "Tea - 70¥$"

OldaleVendingMachine_Text_3:
# 184 "data/maps/OldaleTown/scripts.pory"
	.string "Lava Cookie - 40¥$"

OldaleVendingMachine_Text_4:
# 184 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 202 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 211 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 220 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 222 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 229 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 235 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 255 "data/maps/OldaleTown/scripts.pory"
	.string "A Tea dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 264 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Tea can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 273 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Tea can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 282 "data/maps/OldaleTown/scripts.pory"
	.string "The Tea can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 308 "data/maps/OldaleTown/scripts.pory"
	.string "A Lava Cookie dropped on the machine's\n"
	.string "tray.$"

OldaleVendingMachine_Text_16:
# 317 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Lava Cookie can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 326 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Lava\n"
	.string "Cookie enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 335 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Lava Cookie just stays on\n"
	.string "the verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 366 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 372 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 378 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

Oldale102Sign_Text_0:
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "West - Road 002.$"

OldalePeekingOldman_Text_0:
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "Those Rebel hoodlums... just when we\n"
	.string "start to get back on our feet, they\l"
	.string "come to ruin things!\p"
	.string "Murkrows, the lot of them!$"

OldaleOutsideHikerGuy_Text_0:
# 403 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 413 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 418 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkNPC_Text_0:
# 431 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the Rebel Zone\n"
	.string "who get crazy rich by finding treasure\l"
	.string "with their {COLOR BLUE}Object Spotters{COLOR DARK_GRAY}.\p"
	.string "Haven't managed to get my hands on one,\n"
	.string "or I wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 436 "data/maps/OldaleTown/scripts.pory"
	.string "So... I saw you digging through that\n"
	.string "trash can.\p"
	.string "If you need pokeyen, you should get an\n"
	.string "{COLOR BLUE}Object Spotter{COLOR DARK_GRAY} and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideParkNPC_Text_2:
# 443 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Why don't you try it right here? Who\n"
	.string "knows, you might find something!$"

OldaleOutsideParkNPC_Text_3:
# 449 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Hopefully something better than what\n"
	.string "you found in that trash can... ha-ha-ha!$"

OldaleOutsideOldGuy_Text_0:
# 465 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleOutsideOldWoman_Text_0:
# 475 "data/maps/OldaleTown/scripts.pory"
	.string "Did you see the greenish rain just\n"
	.string "now...?\p"
	.string "The Weather Institute says it's not\n"
	.string "harmful on the short-term. But I worry\l"
	.string "about the long term...$"

DLCTeacherOutside_Text_0:
# 484 "data/maps/OldaleTown/scripts.pory"
	.string "I'm really dying for a smoke here...\p"
	.string "If only those loser Rebels left the\n"
	.string "Warehouse, Devon Co. would start\l"
	.string "sending supplies again.$"

DLCTeacherOutside_Text_1:
# 490 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Ah, sorry for blowing the smoke on your\n"
	.string "face. Haven't smoked in days...\p"
	.string "With the Rebels gone, the mart is\n"
	.string "getting stocked again.\p"
	.string "Was about time! {COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_GotoTherapy_Text_0:
# 503 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... the\n"
	.string "therapy session should be about to\l"
	.string "start.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 522 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 527 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 536 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 541 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 552 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 555 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 563 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 568 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 573 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and our tutor!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 579 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 593 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 600 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the {COLOR RED}Rebels{COLOR DARK_GRAY}, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 605 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 612 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 625 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 630 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 637 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 643 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 648 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 653 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 659 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's {COLOR RED}Rebels{COLOR DARK_GRAY} talk...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 665 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, come to Route 103! I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 682 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 687 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... he told us we'd\n"
	.string "need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 692 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 697 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 702 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 712 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 742 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 748 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 753 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "our tutor will be mad if we're not back\l"
	.string "at the dojo soon...$"

OldaleCamelia_Text_3:
# 763 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 768 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

OldaleDevonGrunts_Text_0:
# 790 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but we can't let anyone\n"
	.string "through until the {COLOR RED}Rebels{COLOR DARK_GRAY} occupying\l"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY}, are dealt with.$"

OldaleDevonGrunts_Text_1:
# 794 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to New Rustboro... but don't\l"
	.string "worry!\p"
	.string "Reinforcements from Devon HQ are\n"
	.string "currently on the way.$"

OldaleDevonGrunts_Text_2:
# 797 "data/maps/OldaleTown/scripts.pory"
	.string "Yup! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_3:
# 802 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Devon Ball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_4:
# 806 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_5:
# 811 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 820 "data/maps/OldaleTown/scripts.pory"
	.string "Hello there, civilian! We have great\n"
	.string "news!\p"
	.string "Those pesky {COLOR RED}Rebels{COLOR DARK_GRAY} have finally left\n"
	.string "Oldale Warehouse. The town is safe\l"
	.string "again!$"

OldaleDevonGrunts_Text_7:
# 824 "data/maps/OldaleTown/scripts.pory"
	.string "They must have caught wind of\n"
	.string "reinforcements coming, and didn't feel\l"
	.string "like spending the rest of their lives on\l"
	.string "{COLOR RED}Dewford Prison{COLOR DARK_GRAY}.$"

OldaleDevonGrunts_Text_8:
# 828 "data/maps/OldaleTown/scripts.pory"
	.string "Most likely! So... I suppose you want to\n"
	.string "go through Road 002?$"

OldaleDevonGrunts_Text_9:
# 832 "data/maps/OldaleTown/scripts.pory"
	.string "I see... well, I'm sorry to say...\p"
	.string "In the Rebel Zone, when it's not one\n"
	.string "thing, it's the other, you know?$"

OldaleDevonGrunts_Text_10:
# 835 "data/maps/OldaleTown/scripts.pory"
	.string "We have one of our scientists searching\n"
	.string "Road 002 for a very dangerous Pokémon.\p"
	.string "It's the next species on the list of\n"
	.string "Pokémon to be {COLOR BLUE}safened{COLOR DARK_GRAY}, and we can't let\l"
	.string "his work be disturbed$"

OldaleDevonGrunts_Text_11:
# 840 "data/maps/OldaleTown/scripts.pory"
	.string "I'm afraid so. But don't worry - these\n"
	.string "tasks usually take from 3 to 4 months.\p"
	.string "And what's a little waiting if it means\n"
	.string "Hoenn becomes safer?$"

OldaleDevonGrunts_Text_12:
# 845 "data/maps/OldaleTown/scripts.pory"
	.string "Grand, then please enjoy this shith-... I\n"
	.string "mean, this cozy, cute sleepy town!$"

OldaleRival_Text_0:
# 864 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... I saw you talking with\n"
	.string "those enemy soldiers just now.\p"
	.string "Don't you KNOW by now!? You cannot\n"
	.string "reason with the enemy.$"

OldaleRival_Text_1:
# 866 "data/maps/OldaleTown/scripts.pory"
	.string "You can only {COLOR RED}FIGHT{COLOR DARK_GRAY} it!$"

OldaleRival_Text_2:
# 867 "data/maps/OldaleTown/scripts.pory"
	.string "But I understand. It was two versus\n"
	.string "one. Don't worry, I am here now.$"

OldaleRival_Text_3:
# 868 "data/maps/OldaleTown/scripts.pory"
	.string "Let's show those Kantonians they can't\n"
	.string "take our country! LEAD THE WAY,\l"
	.string "{PLAYER}.$"

OldaleRivalfollowchat_Text_0:
# 884 "data/maps/OldaleTown/scripts.pory"
	.string "Let's go, {PLAYER} - those Kantonians\n"
	.string "are on the {COLOR RED}western exit of Oldale Town!{COLOR DARK_GRAY}$"

OldaleRivalfollowchat_Text_1:
# 886 "data/maps/OldaleTown/scripts.pory"
	.string "Let's kick their ass all the way to their\n"
	.string "miserable region across the sea!$"

OldaleRivalDontLeaveOldaleto101_Text_0:
# 893 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!?$"

OldaleRivalDontLeaveOldaleto101_Text_1:
# 895 "data/maps/OldaleTown/scripts.pory"
	.string "We have already secured the southern\n"
	.string "front, remember!? Thanks to your\l"
	.string "glorious victory!$"

OldaleRivalDontLeaveOldaleto101_Text_2:
# 898 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the next battle?$"

OldaleRivalDontLeaveOldaleto101_Text_3:
# 901 "data/maps/OldaleTown/scripts.pory"
	.string "Very well... I'll be keeping an eye on\n"
	.string "them. Don't take long!$"

OldaleRivalDontLeaveOldaleto101_Text_4:
# 912 "data/maps/OldaleTown/scripts.pory"
	.string "Let's not delay then. I'm as ready as\n"
	.string "I'll ever be!$"

OldaleWareHouseSign_Text_0:
# 922 "data/maps/OldaleTown/scripts.pory"
	.string "East - Oldale Warehouse.$"

OldaleMotorBike_Text_0:
# 928 "data/maps/OldaleTown/scripts.pory"
	.string "A motorbike. A decal on its die reads\n"
	.string "'Rebel 4 Life'.$"

OldaleCar_Text_0:
# 934 "data/maps/OldaleTown/scripts.pory"
	.string "The car seems to have been parked for\n"
	.string "some time.$"

OldaleBike_Text_0:
# 941 "data/maps/OldaleTown/scripts.pory"
	.string "The bike has tons of locks on the\n"
	.string "wheels, to discourage theft.$"

OldalePlant_Text_0:
# 948 "data/maps/OldaleTown/scripts.pory"
	.string "The plants are on the same state that\n"
	.string "the trees around...\p"
	.string "On their way to wither.$"

OldaleDLCWindow_Text_0:
# 956 "data/maps/OldaleTown/scripts.pory"
	.string "You can see the DLC's library through\n"
	.string "the window.\p"
	.string "The library's clerk is browsing an...\n"
	.string "'explicit' website.$"

OldaleRivalDontLeaveOldaleto103_Text_0:
# 997 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? The\n"
	.string "enemy is not this way!$"

OldaleRivalDontLeaveOldaleto103_Text_1:
# 999 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the battle?$"

OldaleRivalnoleavetoWhouse_Text_0:
# 1024 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? This\n"
	.string "way is to the {COLOR GREEN}warehouse{COLOR DARK_GRAY}!$"

OldaleRivalnoleavetoWhouse_Text_1:
# 1026 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you want to resupply there\n"
	.string "before the battle?$"

OldaleRivalnoleavetoWhouse_Text_2:
# 1029 "data/maps/OldaleTown/scripts.pory"
	.string "Aah, smart thinking! I'll keep an eye on\n"
	.string "those Kantonians. Don't take long!$"

OldaleWarehouseRebelGuard_Text_0:
# 1056 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 1063 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 1065 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 1067 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you that not every Rebel is\n"
	.string "like him!$"

OldaleWarehouseRebelGuard_Text_4:
# 1072 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 1075 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 1101 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 1108 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only broken clankers in\n"
	.string "this grass! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 1117 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 1157 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 1170 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 1172 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 1194 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

SamanthaCall1_Text_0:
# 1225 "data/maps/OldaleTown/scripts.pory"
	.string "U-uhm... hi, {PLAYER}! It's me,\n"
	.string "Samantha.\p"
	.string "I hope I haven't caught you at a bad\n"
	.string "time...\p"
	.string "B-but, since you said you'd help me out\n"
	.string "here in the Mausoleum, I...\p"
	.string "I-I was wondering if you could, like...\n"
	.string "come do me a favour?\p"
	.string "I-it's okay if you're too busy, and\n"
	.string "there's no hurry, but...\p"
	.string "I-I'll be here if you decide to come!\p"
	.string "Sorry for bothering. S-see you!$"

SamanthaDontgotoDevonCenter_Text_0:
# 1246 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... I-I know they sell\n"
	.string "boxed lunches in here, but...$"

SamanthaDontgotoDevonCenter_Text_1:
# 1247 "data/maps/OldaleTown/scripts.pory"
	.string "I-I don't have enough money for\n"
	.string "those...\p"
	.string "Can... can we go to the vending machine\n"
	.string "instead?$"

SamanthaDontgotoDevonCenter_Text_2:
# 1252 "data/maps/OldaleTown/scripts.pory"
	.string "W-we can go back to the Mausoleum now...\n"
	.string "I-I don't want to take more of your\l"
	.string "time...!$"

SamanthaDontgotoDLC_Text_0:
# 1267 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... is this the Devon\n"
	.string "Learning Center?$"

SamanthaDontgotoDLC_Text_1:
# 1268 "data/maps/OldaleTown/scripts.pory"
	.string "It seems like they are holding a lesson\n"
	.string "now...\p"
	.string "I have not signed up for it, so I would\n"
	.string "not like to interrupt.$"

SamanthaDontgoto102_Text_0:
# 1287 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Road 002, right?$"

SamanthaDontgoto102_Text_1:
# 1289 "data/maps/OldaleTown/scripts.pory"
	.string "W-we don't need to go that far...\p"
	.string "I'm sure there's another vending\n"
	.string "machine in Petalburg, b-but... the one\l"
	.string "here in Oldale will do!$"

SamanthaDontgoto103_Text_0:
# 1309 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Route 103, right?$"

SamanthaDontgoto103_Text_1:
# 1311 "data/maps/OldaleTown/scripts.pory"
	.string "B-but Slateport is very far... t-the\n"
	.string "food here in Oldale will do!$"

SamanthaDontgotoWarehouse_Text_0:
# 1330 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... Oldale's Warehouse is\n"
	.string "over there, right?$"

SamanthaDontgotoWarehouse_Text_1:
# 1334 "data/maps/OldaleTown/scripts.pory"
	.string "I-I dont' think they sell any food over\n"
	.string "there...$"

SamanthaDontgotoWarehouse_Text_2:
# 1338 "data/maps/OldaleTown/scripts.pory"
	.string "I-I see some scary Rebels over there...\n"
	.string "m-maybe we shouldn't get near...$"

SamanthaDontgotoWarehouse_Text_3:
# 1342 "data/maps/OldaleTown/scripts.pory"
	.string "I-I'll just get some snacks from the\n"
	.string "vending machine there, o-okay?$"

SamanthaGetSnacksCutscene_Text_0:
# 1360 "data/maps/OldaleTown/scripts.pory"
	.string "A-ah... here we are, {PLAYER}! Give me\n"
	.string "a moment...$"

SamanthaGetSnacksCutscene_Text_1:
# 1364 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I'll have some of these...$"

SamanthaGetSnacksCutscene_Text_2:
# 1368 "data/maps/OldaleTown/scripts.pory"
	.string "And of these...$"

SamanthaGetSnacksCutscene_Text_3:
# 1375 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, and these too...!$"

SamanthaGetSnacksCutscene_Text_4:
# 1390 "data/maps/OldaleTown/scripts.pory"
	.string "Hehehe... I've got tons. We can go back.\p"
	.string "T-thank you...$"

DevonGruntFOutro::
# 777 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 780 "data/maps/OldaleTown/scripts.pory"
	.string "No, not this time!$"

RebelOldale_Outro::
# 1090 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
