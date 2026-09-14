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
# 28 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleMusic
	.byte 0


OldaleMusic::
# 34 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleMusic_1
	return

OldaleMusic_1:
# 36 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_LAVENDERHGSS, TRUE
	return


ResetFountainHIHint::
# 41 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_FOUNTAIN, ResetFountainHIHint_1
	return

ResetFountainHIHint_1:
# 42 "data/maps/OldaleTown/scripts.pory"
	clearflag oldalefountainsparkle
	return


ChangeTrainerCardTest::
# 48 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_TOWER_GOLD
# 49 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_DOME_GOLD
# 50 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_PALACE_GOLD
# 51 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_ARENA_GOLD
# 52 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_FACTORY_GOLD
# 53 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_PIKE_GOLD
# 54 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_PYRAMID_GOLD
# 55 "data/maps/OldaleTown/scripts.pory"
	msgbox ChangeTrainerCardTest_Text_0
	return


GenderedSpriteOldale::
# 59 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


FountainCoinSparkle::
# 62 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset oldalefountainsparkle, FountainCoinSparkle_1
	return

FountainCoinSparkle_1:
# 63 "data/maps/OldaleTown/scripts.pory"
	dofieldeffectsparkle 10, 9, 1
# 64 "data/maps/OldaleTown/scripts.pory"
	setflag oldalefountainsparkle
	return


BalsamCallAfterWarehouse::
# 70 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset BalsamtoldtogoseeNorman, BalsamCallAfterWarehouse_1
# 96 "data/maps/OldaleTown/scripts.pory"
	release
	return

BalsamCallAfterWarehouse_1:
# 72 "data/maps/OldaleTown/scripts.pory"
	lock
# 73 "data/maps/OldaleTown/scripts.pory"
	playse SE_POKENAV_CALL
# 74 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_0
# 75 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_1
# 83 "data/maps/OldaleTown/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_le BalsamCallAfterWarehouse_5
BalsamCallAfterWarehouse_4:
# 88 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_3
# 89 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 91 "data/maps/OldaleTown/scripts.pory"
	setflag BalsamtoldtogoseeNorman
# 92 "data/maps/OldaleTown/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 94 "data/maps/OldaleTown/scripts.pory"
	release
	return

BalsamCallAfterWarehouse_5:
# 84 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_2
	goto BalsamCallAfterWarehouse_4


TimeofDayTest::
# 100 "data/maps/OldaleTown/scripts.pory"
	lock
# 101 "data/maps/OldaleTown/scripts.pory"
	gettimeofday
# 102 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq TimeofDayTest_2
TimeofDayTest_1:
# 106 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq TimeofDayTest_5
TimeofDayTest_4:
# 110 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq TimeofDayTest_8
TimeofDayTest_7:
# 114 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq TimeofDayTest_11
TimeofDayTest_10:
# 117 "data/maps/OldaleTown/scripts.pory"
endoftimeofdaytest:
# 118 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

TimeofDayTest_2:
# 103 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_0
# 104 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_1

TimeofDayTest_5:
# 107 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_1
# 108 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_4

TimeofDayTest_8:
# 111 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_2
# 112 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_7

TimeofDayTest_11:
# 115 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_3
# 116 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_10


OldaleWeather::
# 124 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 127 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 130 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 125 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 128 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 131 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


ConArtist103Rewards::
# 136 "data/maps/OldaleTown/scripts.pory"
	lock
# 137 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 138 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 140 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_le ConArtist103Rewards_2
ConArtist103Rewards_1:
# 196 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq ConArtist103Rewards_5
ConArtist103Rewards_4:
# 200 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 201 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 142 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_7
# 191 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 192 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 193 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
	goto ConArtist103Rewards_1

ConArtist103Rewards_5:
# 197 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
	goto ConArtist103Rewards_4

ConArtist103Rewards_7:
# 144 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 145 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 2
# 146 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 147 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 148 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 149 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 150 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 151 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 155 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 156 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 157 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_11
ConArtist103Rewards_10:
# 176 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_14
ConArtist103Rewards_13:
# 182 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_16
	goto ConArtist103Rewards_1

ConArtist103Rewards_11:
# 159 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 160 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 161 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 162 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_6
# 163 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 168 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_7
# 170 "data/maps/OldaleTown/scripts.pory"
	register_matchcall TRAINER_SHADYDEALER_103
# 171 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_8
# 172 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 2
# 173 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_10

ConArtist103Rewards_14:
# 177 "data/maps/OldaleTown/scripts.pory"
	goto refusedeggs
	goto ConArtist103Rewards_13

ConArtist103Rewards_16:
# 183 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 184 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 185 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_9
# 187 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_1


OldaleVendingMachine::
# 206 "data/maps/OldaleTown/scripts.pory"
	lock
# 207 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 208 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 209 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 212 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 265 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 318 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 370 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 373 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 374 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 375 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 213 "data/maps/OldaleTown/scripts.pory"
	checkmoney 50
# 214 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 259 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 266 "data/maps/OldaleTown/scripts.pory"
	checkmoney 70
# 267 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 312 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 215 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 216 "data/maps/OldaleTown/scripts.pory"
	waitse
# 217 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 219 "data/maps/OldaleTown/scripts.pory"
	random 4
# 220 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 221 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 223 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 224 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 225 "data/maps/OldaleTown/scripts.pory"
	waitse
# 226 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 227 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 228 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 229 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 231 "data/maps/OldaleTown/scripts.pory"
	random 20
# 232 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 233 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 235 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 236 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 237 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 238 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 239 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 241 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 242 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 243 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 244 "data/maps/OldaleTown/scripts.pory"
	waitse
# 245 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 247 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 248 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 253 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 319 "data/maps/OldaleTown/scripts.pory"
	checkmoney 40
# 320 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 365 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 268 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 269 "data/maps/OldaleTown/scripts.pory"
	waitse
# 270 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 272 "data/maps/OldaleTown/scripts.pory"
	random 4
# 273 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, teagotstuck
# 274 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gottea
# 276 "data/maps/OldaleTown/scripts.pory"
gottea:
# 277 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 278 "data/maps/OldaleTown/scripts.pory"
	waitse
# 279 "data/maps/OldaleTown/scripts.pory"
	removemoney 70
# 280 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 281 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 282 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TEA
# 284 "data/maps/OldaleTown/scripts.pory"
	random 20
# 285 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 286 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextratea
# 288 "data/maps/OldaleTown/scripts.pory"
gotextratea:
# 289 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 290 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 291 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TEA
# 292 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 294 "data/maps/OldaleTown/scripts.pory"
teagotstuck:
# 295 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 296 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 297 "data/maps/OldaleTown/scripts.pory"
	waitse
# 298 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 300 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 301 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 306 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 260 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 249 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 250 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 371 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 321 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 322 "data/maps/OldaleTown/scripts.pory"
	waitse
# 323 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 325 "data/maps/OldaleTown/scripts.pory"
	random 4
# 326 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, lavacookiegotstuck
# 327 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotlavacookie
# 329 "data/maps/OldaleTown/scripts.pory"
gotlavacookie:
# 330 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 331 "data/maps/OldaleTown/scripts.pory"
	waitse
# 332 "data/maps/OldaleTown/scripts.pory"
	removemoney 40
# 333 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 334 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 335 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 337 "data/maps/OldaleTown/scripts.pory"
	random 20
# 338 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 339 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextralavacookie
# 341 "data/maps/OldaleTown/scripts.pory"
gotextralavacookie:
# 342 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 343 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 344 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 345 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 347 "data/maps/OldaleTown/scripts.pory"
lavacookiegotstuck:
# 348 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 349 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 350 "data/maps/OldaleTown/scripts.pory"
	waitse
# 351 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 353 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 354 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 359 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 313 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 302 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 303 "data/maps/OldaleTown/scripts.pory"
	goto gottea
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 254 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 366 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 355 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 356 "data/maps/OldaleTown/scripts.pory"
	goto gotlavacookie
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 307 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 360 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 380 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 381 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 382 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 383 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 384 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 385 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 390 "data/maps/OldaleTown/scripts.pory"
	lock
# 391 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 392 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 396 "data/maps/OldaleTown/scripts.pory"
	lock
# 397 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 398 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 402 "data/maps/OldaleTown/scripts.pory"
	lock
# 403 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 404 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale102Sign::
# 409 "data/maps/OldaleTown/scripts.pory"
	lock
# 410 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale102Sign_Text_0
# 411 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalePeekingOldman::
# 415 "data/maps/OldaleTown/scripts.pory"
	lock
# 416 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 417 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldalePeekingOldman_2
OldalePeekingOldman_1:
# 421 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldalePeekingOldman_5
OldalePeekingOldman_4:
# 425 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_ge OldalePeekingOldman_8
OldalePeekingOldman_7:
# 429 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldalePeekingOldman_2:
# 418 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_0
	goto OldalePeekingOldman_1

OldalePeekingOldman_5:
# 422 "data/maps/OldaleTown/scripts.pory"
	applymovement 32, ConArtist103Rewards_Movement_0
# 423 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_1
	goto OldalePeekingOldman_4

OldalePeekingOldman_8:
# 426 "data/maps/OldaleTown/scripts.pory"
	applymovement 32, ConArtist103Rewards_Movement_0
# 427 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_2
	goto OldalePeekingOldman_7


OldaleOutsideHikerGuy::
# 433 "data/maps/OldaleTown/scripts.pory"
	lock
# 434 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 435 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 436 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 441 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 446 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 451 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 456 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 438 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 443 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 448 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 453 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 460 "data/maps/OldaleTown/scripts.pory"
	lock
# 461 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 462 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, ConArtist103Rewards_Movement_0
# 464 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_3
OldaleOutsideParkNPC_1:
# 469 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_8
OldaleOutsideParkNPC_6:
# 476 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_13
OldaleOutsideParkNPC_11:
# 482 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_18
OldaleOutsideParkNPC_16:
# 488 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_2:
# 466 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_3:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_2
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_7:
# 471 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_8:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_7
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_12:
# 478 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_2
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_13:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_12
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_17:
# 484 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_3
	goto OldaleOutsideParkNPC_16

OldaleOutsideParkNPC_18:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_17
	goto OldaleOutsideParkNPC_16


OldaleOutsideOldGuy::
# 498 "data/maps/OldaleTown/scripts.pory"
	lock
# 499 "data/maps/OldaleTown/scripts.pory"
	applymovement 12, ConArtist103Rewards_Movement_0
# 500 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 504 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldWoman::
# 508 "data/maps/OldaleTown/scripts.pory"
	lock
# 509 "data/maps/OldaleTown/scripts.pory"
	applymovement 30, ConArtist103Rewards_Movement_0
# 510 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldWoman_Text_0
# 513 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


DLCTeacherOutside::
# 517 "data/maps/OldaleTown/scripts.pory"
	lock
# 518 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 519 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_lt DLCTeacherOutside_2
DLCTeacherOutside_1:
# 523 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_ge DLCTeacherOutside_5
DLCTeacherOutside_4:
# 530 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

DLCTeacherOutside_2:
# 520 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_0
	goto DLCTeacherOutside_1

DLCTeacherOutside_5:
# 524 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 525 "data/maps/OldaleTown/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 526 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_1
	goto DLCTeacherOutside_4


OldaleTown_GotoTherapy::
# 534 "data/maps/OldaleTown/scripts.pory"
	lock
# 535 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 536 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 537 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 538 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 540 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 541 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 542 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 543 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 545 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 546 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 547 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 552 "data/maps/OldaleTown/scripts.pory"
	goto_if_set sharpycameliaDLCcs, OldaleSharpyCameliaOutDLCCutscene_1
# 766 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleSharpyCameliaOutDLCCutscene_1:
# 554 "data/maps/OldaleTown/scripts.pory"
	lock
# 555 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 556 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 557 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 558 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_SKETCH
# 559 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 560 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 562 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 563 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 564 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 565 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 568 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 569 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 570 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 572 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 573 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 578 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 582 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 583 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 584 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 585 "data/maps/OldaleTown/scripts.pory"
	waitse
# 586 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 587 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 589 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 592 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 595 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 596 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 597 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 598 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 599 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 600 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 601 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 603 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 604 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 605 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 606 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 608 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 609 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 610 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 611 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 614 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 615 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 616 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 617 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 620 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 621 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 623 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 627 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 716 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 717 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 718 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 719 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 720 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 722 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 723 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 724 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 725 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 727 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 728 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 729 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 730 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 732 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 733 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 734 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 735 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 737 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 738 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 739 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 740 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 743 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 744 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 745 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 746 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 747 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 748 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 749 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 750 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 752 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 753 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 755 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 17, 0, 0
# 757 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpycameliaDLCcs
# 758 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 759 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 762 "data/maps/OldaleTown/scripts.pory"
	setflag finishedtherapy
# 763 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_5:
# 574 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 579 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 590 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 593 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 624 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 628 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 629 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 630 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 631 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 634 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 635 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 636 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 637 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 638 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 640 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 641 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 642 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 643 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 646 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 647 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 648 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 649 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 650 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 652 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 653 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 655 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 659 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_26
OldaleSharpyCameliaOutDLCCutscene_25:
# 665 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 666 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 667 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 668 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 671 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 672 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 673 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 674 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 675 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 677 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 678 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 679 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 680 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 681 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 683 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 684 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 685 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 686 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 688 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 689 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 690 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 691 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 693 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 694 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 695 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 696 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 697 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 699 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 700 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 701 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 702 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 703 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 704 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 706 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 707 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 708 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 711 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 712 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 656 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_22

OldaleSharpyCameliaOutDLCCutscene_26:
# 660 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 661 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 662 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 663 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_25


OldaleCamelia::
# 771 "data/maps/OldaleTown/scripts.pory"
	lock
# 773 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 798 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 799 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 800 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 801 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 803 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 804 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 805 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 806 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 809 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 810 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 776 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 777 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, ConArtist103Rewards_Movement_0
# 778 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 779 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 780 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 783 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 784 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 785 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 786 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 788 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 789 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 790 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 791 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


OldaleDevonGrunts::
# 820 "data/maps/OldaleTown/scripts.pory"
	lock
# 821 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 822 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_3
OldaleDevonGrunts_1:
# 835 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_8
OldaleDevonGrunts_6:
# 856 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_12
OldaleDevonGrunts_11:
# 895 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_eq OldaleDevonGrunts_15
OldaleDevonGrunts_14:
# 1019 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 824 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 825 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 828 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 829 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 831 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 832 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_3:
# 822 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Sharpydefeatedat103, OldaleDevonGrunts_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_7:
# 836 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 837 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
# 840 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 841 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 845 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_2
# 846 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 848 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_3
# 849 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 851 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_8:
# 835 "data/maps/OldaleTown/scripts.pory"
	goto_if_set Sharpydefeatedat103, OldaleDevonGrunts_7
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_12:
# 857 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 858 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_7
# 861 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 862 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_8
# 864 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 865 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 866 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_9
# 867 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 869 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleDevonGrunts_18
OldaleDevonGrunts_17:
# 883 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleDevonGrunts_24
OldaleDevonGrunts_23:
# 887 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 888 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 890 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
	goto OldaleDevonGrunts_11

OldaleDevonGrunts_15:
# 897 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 898 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_14
# 900 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_HELP, TRUE
# 901 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_4
# 902 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 903 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_21
OldaleDevonGrunts_20:
# 904 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_27
OldaleDevonGrunts_26:
# 905 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 906 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_15
# 907 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 908 "data/maps/OldaleTown/scripts.pory"
	setspeaker NULL
# 909 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_5
# 910 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_16
# 911 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_6
# 912 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_17
# 913 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 914 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 915 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_4
# 916 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_30
OldaleDevonGrunts_29:
# 917 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_33
OldaleDevonGrunts_32:
# 918 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 919 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_18
# 920 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 921 "data/maps/OldaleTown/scripts.pory"
	setspeaker NULL
# 922 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_OPEN
# 923 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_5
# 924 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_5
# 925 "data/maps/OldaleTown/scripts.pory"
	clearflag DOLL_BATTLE
# 926 "data/maps/OldaleTown/scripts.pory"
	addobject 36
# 927 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_6
# 928 "data/maps/OldaleTown/scripts.pory"
	waitse
# 929 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 930 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_7
# 931 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 932 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 933 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_7
# 934 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 936 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_MIMIYURUI, CRY_MODE_NORMAL
# 938 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_19
# 939 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 940 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_8
# 941 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_8
# 942 "data/maps/OldaleTown/scripts.pory"
	waitmovement 15
# 944 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro, TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro
# 946 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_20
# 949 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_6
# 950 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_5
# 951 "data/maps/OldaleTown/scripts.pory"
	waitmovement 14
# 952 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 953 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_7
# 954 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 955 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 956 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_7
# 957 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 958 "data/maps/OldaleTown/scripts.pory"
	waitse
# 960 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_MIMIYURUI, CRY_MODE_NORMAL
# 961 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_19
# 963 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_7
# 964 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_5
# 965 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 966 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_21
# 967 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 969 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_9
# 970 "data/maps/OldaleTown/scripts.pory"
	waitmovement 14
# 971 "data/maps/OldaleTown/scripts.pory"
	removeobject 14
# 972 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 973 "data/maps/OldaleTown/scripts.pory"
	waitse
# 974 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_9
# 975 "data/maps/OldaleTown/scripts.pory"
	waitmovement 15
# 976 "data/maps/OldaleTown/scripts.pory"
	removeobject 15
# 977 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 978 "data/maps/OldaleTown/scripts.pory"
	waitse
# 980 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 2
# 981 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_LAVENDERHGSS, TRUE
# 985 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, ConArtist103Rewards_Movement_0
# 986 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 987 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_36
OldaleDevonGrunts_35:
# 988 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_39
OldaleDevonGrunts_38:
# 989 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 991 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_22
# 994 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_42
OldaleDevonGrunts_41:
# 995 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_45
OldaleDevonGrunts_44:
# 996 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 998 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_23
# 999 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1001 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1002 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_10
# 1003 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1004 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
# 1005 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1006 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1007 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1008 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_11
# 1009 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 1010 "data/maps/OldaleTown/scripts.pory"
	setflag DOLL_BATTLE
# 1011 "data/maps/OldaleTown/scripts.pory"
	removeobject 36
# 1012 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1013 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1014 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1015 "data/maps/OldaleTown/scripts.pory"
	setflag devonsdontblock102
# 1016 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 4
	goto OldaleDevonGrunts_14

OldaleDevonGrunts_18:
# 870 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 871 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_10
# 873 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 874 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_11
# 878 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 879 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_12
	goto OldaleDevonGrunts_17

OldaleDevonGrunts_21:
# 903 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_20

OldaleDevonGrunts_24:
# 884 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_3
# 885 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_13
	goto OldaleDevonGrunts_23

OldaleDevonGrunts_27:
# 904 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_26

OldaleDevonGrunts_30:
# 916 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_29

OldaleDevonGrunts_33:
# 917 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_32

OldaleDevonGrunts_36:
# 987 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_35

OldaleDevonGrunts_39:
# 988 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_38

OldaleDevonGrunts_42:
# 994 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_41

OldaleDevonGrunts_45:
# 995 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_44


OldaleRival::
# 1029 "data/maps/OldaleTown/scripts.pory"
	lock
# 1030 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1031 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1032 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_2
OldaleRival_1:
# 1033 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_5
OldaleRival_4:
# 1034 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1035 "data/maps/OldaleTown/scripts.pory"
	applymovement 21, ConArtist103Rewards_Movement_0
# 1036 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_0
# 1037 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1038 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_8
OldaleRival_7:
# 1039 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_11
OldaleRival_10:
# 1040 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1041 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_SWAGGER2
# 1042 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_1
# 1043 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1044 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_2
# 1045 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1046 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_14
OldaleRival_13:
# 1047 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_17
OldaleRival_16:
# 1048 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1049 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_3
# 1050 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1051 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_4
# 1052 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1053 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 1055 "data/maps/OldaleTown/scripts.pory"
	setspeaker NULL
# 1056 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1058 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1059 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_20
OldaleRival_19:
# 1062 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_23
OldaleRival_22:
# 1064 "data/maps/OldaleTown/scripts.pory"
	removeobject 21
# 1065 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
	return

OldaleRival_2:
# 1032 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRival_1

OldaleRival_5:
# 1033 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRival_4

OldaleRival_8:
# 1038 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleRival_7

OldaleRival_11:
# 1039 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleRival_10

OldaleRival_14:
# 1046 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRival_13

OldaleRival_17:
# 1047 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRival_16

OldaleRival_20:
# 1060 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRival_19

OldaleRival_23:
# 1063 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_MALE
	goto OldaleRival_22


OldaleRivalfollowchat::
# 1069 "data/maps/OldaleTown/scripts.pory"
	lock
# 1070 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, ConArtist103Rewards_Movement_0
# 1071 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1072 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalfollowchat_2
OldaleRivalfollowchat_1:
# 1073 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalfollowchat_5
OldaleRivalfollowchat_4:
# 1074 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1075 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_0
# 1076 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1077 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalfollowchat_8
OldaleRivalfollowchat_7:
# 1078 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalfollowchat_11
OldaleRivalfollowchat_10:
# 1079 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1080 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_1
# 1081 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1082 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleRivalfollowchat_2:
# 1072 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalfollowchat_1

OldaleRivalfollowchat_5:
# 1073 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalfollowchat_4

OldaleRivalfollowchat_8:
# 1077 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleRivalfollowchat_7

OldaleRivalfollowchat_11:
# 1078 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleRivalfollowchat_10


OldaleRivalDontLeaveOldaleto101::
# 1085 "data/maps/OldaleTown/scripts.pory"
	lock
# 1086 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1087 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1088 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1089 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_METRONOME
# 1090 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1091 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_2
OldaleRivalDontLeaveOldaleto101_1:
# 1092 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_5
OldaleRivalDontLeaveOldaleto101_4:
# 1093 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1094 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_0
# 1095 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1096 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_8
OldaleRivalDontLeaveOldaleto101_7:
# 1097 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_11
OldaleRivalDontLeaveOldaleto101_10:
# 1098 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1099 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_1
# 1101 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1102 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_2
# 1103 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1104 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto101_14
OldaleRivalDontLeaveOldaleto101_13:
# 1117 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto101_17
OldaleRivalDontLeaveOldaleto101_16:
# 1128 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto101_2:
# 1091 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto101_1

OldaleRivalDontLeaveOldaleto101_5:
# 1092 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto101_4

OldaleRivalDontLeaveOldaleto101_8:
# 1096 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_7

OldaleRivalDontLeaveOldaleto101_11:
# 1097 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_10

OldaleRivalDontLeaveOldaleto101_14:
# 1105 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1106 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 1107 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1108 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1109 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1110 "data/maps/OldaleTown/scripts.pory"
	addobject 21
# 1111 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1112 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1113 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalDontLeaveOldaleto101_13

OldaleRivalDontLeaveOldaleto101_17:
# 1119 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1120 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_20
OldaleRivalDontLeaveOldaleto101_19:
# 1121 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_23
OldaleRivalDontLeaveOldaleto101_22:
# 1122 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1123 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1124 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_2
# 1125 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1126 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
	goto OldaleRivalDontLeaveOldaleto101_16

OldaleRivalDontLeaveOldaleto101_20:
# 1120 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_19

OldaleRivalDontLeaveOldaleto101_23:
# 1121 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_22


OldaleWareHouseSign::
# 1133 "data/maps/OldaleTown/scripts.pory"
	lock
# 1134 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWareHouseSign_Text_0
# 1135 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleMotorBike::
# 1139 "data/maps/OldaleTown/scripts.pory"
	lock
# 1140 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleMotorBike_Text_0
# 1141 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCar::
# 1145 "data/maps/OldaleTown/scripts.pory"
	lock
# 1146 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCar_Text_0
# 1147 "data/maps/OldaleTown/scripts.pory"
	release
	return


Oldale4x4::
# 1151 "data/maps/OldaleTown/scripts.pory"
	lock
# 1152 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale4x4_Text_0
# 1153 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleBike::
# 1157 "data/maps/OldaleTown/scripts.pory"
	lock
# 1158 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1159 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleBike_Text_0
# 1160 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePlant::
# 1164 "data/maps/OldaleTown/scripts.pory"
	lock
# 1165 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1166 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePlant_Text_0
# 1168 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDLCWindow::
# 1172 "data/maps/OldaleTown/scripts.pory"
	lock
# 1173 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1174 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCWindow_Text_0
# 1176 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDevonTruck::
# 1180 "data/maps/OldaleTown/scripts.pory"
	lock
# 1181 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonTruck_Text_0
# 1182 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDevonTruckDamaged::
# 1186 "data/maps/OldaleTown/scripts.pory"
	lock
# 1187 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonTruckDamaged_Text_0
# 1188 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePostFenceItem::
# 1192 "data/maps/OldaleTown/scripts.pory"
	lock
# 1193 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_BIKE_VOUCHER
# 1196 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 1197 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleHouse2GardenItem::
# 1200 "data/maps/OldaleTown/scripts.pory"
	lock
# 1201 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_SOFT_SAND
# 1204 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 1205 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleParkingItem::
# 1208 "data/maps/OldaleTown/scripts.pory"
	lock
# 1209 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_METAL_COAT
# 1210 "data/maps/OldaleTown/scripts.pory"
	removeobject 3
# 1211 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalebyTruckItem::
# 1214 "data/maps/OldaleTown/scripts.pory"
	lock
# 1215 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_RAZOR_FANG
# 1216 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 1217 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalDontLeaveOldaleto103::
# 1221 "data/maps/OldaleTown/scripts.pory"
	lock
# 1222 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1223 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1224 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1225 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_METRONOME
# 1226 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1227 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_2
OldaleRivalDontLeaveOldaleto103_1:
# 1228 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_5
OldaleRivalDontLeaveOldaleto103_4:
# 1229 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1230 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_0
# 1231 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1232 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_8
OldaleRivalDontLeaveOldaleto103_7:
# 1233 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_11
OldaleRivalDontLeaveOldaleto103_10:
# 1234 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1235 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_1
# 1236 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1237 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto103_14
OldaleRivalDontLeaveOldaleto103_13:
# 1252 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto103_17
OldaleRivalDontLeaveOldaleto103_16:
# 1262 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1263 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto103_2:
# 1227 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto103_1

OldaleRivalDontLeaveOldaleto103_5:
# 1228 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto103_4

OldaleRivalDontLeaveOldaleto103_8:
# 1232 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_7

OldaleRivalDontLeaveOldaleto103_11:
# 1233 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_10

OldaleRivalDontLeaveOldaleto103_14:
# 1238 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1239 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_20
OldaleRivalDontLeaveOldaleto103_19:
# 1240 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_26
OldaleRivalDontLeaveOldaleto103_25:
# 1241 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1242 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 1243 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1244 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1245 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1246 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 1247 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1248 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1249 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalDontLeaveOldaleto103_13

OldaleRivalDontLeaveOldaleto103_17:
# 1254 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1255 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_23
OldaleRivalDontLeaveOldaleto103_22:
# 1256 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_29
OldaleRivalDontLeaveOldaleto103_28:
# 1257 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1258 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1259 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 1260 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto103_16

OldaleRivalDontLeaveOldaleto103_20:
# 1239 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_19

OldaleRivalDontLeaveOldaleto103_23:
# 1255 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_22

OldaleRivalDontLeaveOldaleto103_26:
# 1240 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_25

OldaleRivalDontLeaveOldaleto103_29:
# 1256 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_28


OldaleRivalnoleavetoWhouse::
# 1267 "data/maps/OldaleTown/scripts.pory"
	lock
# 1268 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1269 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 1270 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1271 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_METRONOME
# 1272 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1273 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_2
OldaleRivalnoleavetoWhouse_1:
# 1274 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_5
OldaleRivalnoleavetoWhouse_4:
# 1275 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1276 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_0
# 1277 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1278 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_8
OldaleRivalnoleavetoWhouse_7:
# 1279 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_11
OldaleRivalnoleavetoWhouse_10:
# 1280 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1281 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_1
# 1282 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1283 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalnoleavetoWhouse_14
OldaleRivalnoleavetoWhouse_13:
# 1297 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalnoleavetoWhouse_17
OldaleRivalnoleavetoWhouse_16:
# 1307 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1308 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalnoleavetoWhouse_2:
# 1273 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRivalnoleavetoWhouse_1

OldaleRivalnoleavetoWhouse_5:
# 1274 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRivalnoleavetoWhouse_4

OldaleRivalnoleavetoWhouse_8:
# 1278 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_7

OldaleRivalnoleavetoWhouse_11:
# 1279 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_10

OldaleRivalnoleavetoWhouse_14:
# 1284 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1285 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_20
OldaleRivalnoleavetoWhouse_19:
# 1286 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_26
OldaleRivalnoleavetoWhouse_25:
# 1287 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1288 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_2
# 1289 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1290 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1291 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 1292 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1293 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1294 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalnoleavetoWhouse_13

OldaleRivalnoleavetoWhouse_17:
# 1299 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1300 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_23
OldaleRivalnoleavetoWhouse_22:
# 1301 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_29
OldaleRivalnoleavetoWhouse_28:
# 1302 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1303 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1304 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1305 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalnoleavetoWhouse_16

OldaleRivalnoleavetoWhouse_20:
# 1285 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_19

OldaleRivalnoleavetoWhouse_23:
# 1300 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_22

OldaleRivalnoleavetoWhouse_26:
# 1286 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_25

OldaleRivalnoleavetoWhouse_29:
# 1301 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_28


OldaleWarehouseRebelGuard::
# 1318 "data/maps/OldaleTown/scripts.pory"
	lock
# 1319 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1320 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 1321 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleVendingMachine_Movement_0
# 1322 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1323 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 1325 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1326 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 1328 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 1331 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 1334 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 1336 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 1337 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1338 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1339 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 1340 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1341 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 1342 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1343 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 1344 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_2
# 1345 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1346 "data/maps/OldaleTown/scripts.pory"
	removeobject 18
# 1347 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 1348 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 1349 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1350 "data/maps/OldaleTown/scripts.pory"
	fadenewbgm 1
# 1351 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1353 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 1327 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 1329 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 1362 "data/maps/OldaleTown/scripts.pory"
	lock
# 1363 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 1364 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleDevonGrunts_Movement_9
# 1365 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1367 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 1369 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 1373 "data/maps/OldaleTown/scripts.pory"
	lock
# 1374 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 1375 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 1379 "data/maps/OldaleTown/scripts.pory"
	lock
# 1380 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1381 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1382 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1383 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1384 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1385 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1386 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach0_Movement_0
# 1387 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1388 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1389 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 1393 "data/maps/OldaleTown/scripts.pory"
	lock
# 1394 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1395 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1396 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1397 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1398 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1399 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach1_Movement_0
# 1400 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1401 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1402 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 1406 "data/maps/OldaleTown/scripts.pory"
	lock
# 1407 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1408 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1409 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1410 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1411 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1412 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach2_Movement_0
# 1413 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1414 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1415 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 1420 "data/maps/OldaleTown/scripts.pory"
	lock
# 1421 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1422 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 1423 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 1425 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1426 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1427 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1428 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 1429 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1430 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 1431 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1432 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_3
# 1433 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1434 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_4
# 1435 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1436 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1437 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1438 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1439 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1440 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1441 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 1442 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebel_Movement_0
# 1443 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1444 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1445 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1446 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1447 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1448 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1449 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1450 "data/maps/OldaleTown/scripts.pory"
	removeobject 24
# 1451 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1452 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1453 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 1459 "data/maps/OldaleTown/scripts.pory"
	lock
# 1460 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_0
# 1461 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 1463 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1464 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1465 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1466 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 1467 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1468 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1469 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1470 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1471 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1472 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 1473 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1474 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1475 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_1
# 1476 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1477 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1478 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1479 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1480 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 1481 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1482 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1483 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaCall1::
# 1489 "data/maps/OldaleTown/scripts.pory"
	lock
# 1490 "data/maps/OldaleTown/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_gt SamanthaCall1_1
# 1499 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaCall1_1:
# 1491 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1492 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaCall1_Text_0
# 1496 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 1497 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaDontgotoDevonCenter::
# 1506 "data/maps/OldaleTown/scripts.pory"
	lock
# 1507 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoDevonCenter_2
# 1519 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoDevonCenter_1:
# 1521 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 1522 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1523 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoDevonCenter_2:
# 1510 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1511 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1512 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1513 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_0
# 1514 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_1
	goto SamanthaDontgotoDevonCenter_1


SamanthaDontgotoDLC::
# 1527 "data/maps/OldaleTown/scripts.pory"
	lock
# 1528 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoDLC_2
# 1540 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoDLC_1:
# 1542 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoDLC_Movement_0
# 1543 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1544 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoDLC_2:
# 1531 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1532 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1533 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1534 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_0
# 1535 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_1
	goto SamanthaDontgotoDLC_1


SamanthaDontgoto102::
# 1547 "data/maps/OldaleTown/scripts.pory"
	lock
# 1548 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgoto102_2
# 1562 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgoto102_1:
# 1564 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 1565 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1566 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgoto102_2:
# 1551 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1552 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1553 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1554 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_0
# 1556 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_1
	goto SamanthaDontgoto102_1


SamanthaDontgoto103::
# 1570 "data/maps/OldaleTown/scripts.pory"
	lock
# 1571 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgoto103_2
# 1583 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgoto103_1:
# 1585 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoDLC_Movement_0
# 1586 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1587 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgoto103_2:
# 1573 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1574 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1575 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1576 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_0
# 1578 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_1
	goto SamanthaDontgoto103_1


SamanthaDontgotoWarehouse::
# 1591 "data/maps/OldaleTown/scripts.pory"
	lock
# 1592 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoWarehouse_2
# 1613 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoWarehouse_1:
# 1615 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1616 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1617 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoWarehouse_2:
# 1594 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1595 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1596 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1597 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_0
# 1599 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_lt SamanthaDontgotoWarehouse_6
# 1605 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_2
SamanthaDontgotoWarehouse_5:
# 1607 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1608 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1609 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_3
	goto SamanthaDontgotoWarehouse_1

SamanthaDontgotoWarehouse_6:
# 1601 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_1
	goto SamanthaDontgotoWarehouse_5


SamanthaGetSnacksCutscene::
# 1622 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaGetSnacksCutscene_1
# 1664 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaGetSnacksCutscene_1:
# 1624 "data/maps/OldaleTown/scripts.pory"
	lock
# 1625 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1626 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_0
# 1627 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_0
# 1628 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaGetSnacksCutscene_Movement_1
# 1629 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_2
# 1630 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1631 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_1
# 1632 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_5
# 1633 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1634 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1635 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_2
# 1636 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_5
# 1637 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1638 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1639 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_5
# 1640 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1641 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1642 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_3
# 1643 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_5
# 1644 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1645 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1646 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_5
# 1647 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1648 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1649 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_5
# 1650 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1651 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1652 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1654 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1655 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1656 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1657 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_4
# 1659 "data/maps/OldaleTown/scripts.pory"
	setflag Samanthagotsnacks
# 1661 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaShake::
# 1669 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1670 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 1671 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 1672 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 1673 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 1674 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


GiveSafemonParty1::
# 1679 "data/maps/OldaleTown/scripts.pory"
	callnative ZeroPlayerPartyMons
# 1680 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_BULBASYNTH, 10, ITEM_REMEDY
# 1681 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_SMOTHQUIL, 10, ITEM_HEAL_POWDER
# 1682 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_WARABBIT, 10, ITEM_FULL_HEAL
# 1683 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_PIKACHU_SAFE, 10, ITEM_AERODACTYLITE
# 1684 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_MIMIYURUI, 10, ITEM_SUPERB_REMEDY
# 1685 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_NINKABURI, 10, ITEM_SHALOUR_SABLE
	return


# 138 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 138 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 242 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 242 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 537 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 537 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 537 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 537 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 537 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 537 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 537 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 542 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 542 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 542 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 542 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 542 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 542 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 542 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 545 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 545 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 559 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 559 "data/maps/OldaleTown/scripts.pory"
	emote_x
	step_end

# 583 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 583 "data/maps/OldaleTown/scripts.pory"
	face_left
# 583 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 596 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 596 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 596 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 597 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 597 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 647 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 647 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 707 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_5:
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 824 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 824 "data/maps/OldaleTown/scripts.pory"
	face_player
# 824 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 840 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 840 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 840 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 845 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 845 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 845 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 848 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_3:
# 848 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 901 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_4:
# 901 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

# 909 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_5:
# 909 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 911 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_6:
# 911 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
	step_end

# 930 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_7:
# 930 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_down
	step_end

# 940 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_8:
# 940 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 940 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 969 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_9:
# 969 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1002 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_10:
# 1002 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1002 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1008 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_11:
# 1008 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 1008 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1087 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_0:
# 1087 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1088 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_1:
# 1088 "data/maps/OldaleTown/scripts.pory"
	emote_question_mark
# 1088 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 1124 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_2:
# 1124 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 1223 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto103_Movement_0:
# 1223 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1304 "data/maps/OldaleTown/scripts.pory"
OldaleRivalnoleavetoWhouse_Movement_0:
# 1304 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 1386 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 1386 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 1386 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1399 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 1399 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 1412 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 1412 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 1442 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 1442 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1442 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1442 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1442 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1442 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1442 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1442 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1442 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1460 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 1460 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 1460 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1475 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
# 1475 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1475 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1475 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1475 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1475 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1475 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1475 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1510 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDevonCenter_Movement_0:
# 1510 "data/maps/OldaleTown/scripts.pory"
	face_player
# 1510 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 1542 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDLC_Movement_0:
# 1542 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 1626 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_0:
# 1626 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 1626 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 1628 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_1:
# 1628 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1628 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1629 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_2:
# 1629 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1629 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1629 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1629 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1629 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1654 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_3:
# 1654 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1654 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

ChangeTrainerCardTest_Text_0:
# 55 "data/maps/OldaleTown/scripts.pory"
	.string "All symbols given$"

BalsamCallAfterWarehouse_Text_0:
# 74 "data/maps/OldaleTown/scripts.pory"
	.string "...$"

BalsamCallAfterWarehouse_Text_1:
# 75 "data/maps/OldaleTown/scripts.pory"
	.string "Prof Balsam: Hey there, {PLAYER}. It's\n"
	.string "me, Balsam.\p"
	.string "Are you alright? Therapy should have\n"
	.string "finished ages ago, but you haven't\l"
	.string "returned like we discussed.\p"
	.string "It's okay if you want to stretch your\n"
	.string "legs, but you should have told us.\p"
	.string "Your grandpa Birch was worried sick.\p"
	.string "Since you're feeling adventurous,why\n"
	.string "don't you go visit your other grandpa\l"
	.string "at Petalburg?\p"
	.string "A change of scenery will do you good.\n"
	.string "It's very close, but give me a call if you\l"
	.string "get lost.$"

BalsamCallAfterWarehouse_Text_2:
# 84 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, and we still need help with finding\n"
	.string "that Voltorb Shard my Aide asked you\l"
	.string "about.\p"
	.string "It's not urgent, but we'd really\n"
	.string "appreciate it.$"

BalsamCallAfterWarehouse_Text_3:
# 88 "data/maps/OldaleTown/scripts.pory"
	.string "It's back to work for me. Take care,\n"
	.string "{PLAYER}.$"

TimeofDayTest_Text_0:
# 103 "data/maps/OldaleTown/scripts.pory"
	.string "Morning.$"

TimeofDayTest_Text_1:
# 107 "data/maps/OldaleTown/scripts.pory"
	.string "Day.$"

TimeofDayTest_Text_2:
# 111 "data/maps/OldaleTown/scripts.pory"
	.string "Evening.$"

TimeofDayTest_Text_3:
# 115 "data/maps/OldaleTown/scripts.pory"
	.string "Night.$"

ConArtist103Rewards_Text_0:
# 146 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 151 "data/maps/OldaleTown/scripts.pory"
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
# 156 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 156 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 160 "data/maps/OldaleTown/scripts.pory"
	.string "A smart choice! I knew you had an eye\n"
	.string "for good deals - here you go!$"

ConArtist103Rewards_Text_6:
# 162 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Multiplying Egg!$"

ConArtist103Rewards_Text_7:
# 168 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sure you won't be disappointed.\n"
	.string "Especially if you continue your\l"
	.string "patronage at my store in Petalburg!\p"
	.string "I'll let you know when I set up there.\n"
	.string "And to that end...$"

ConArtist103Rewards_Text_8:
# 171 "data/maps/OldaleTown/scripts.pory"
	.string "All set. Pleasure doing business with\n"
	.string "you, and have an EGGcelent day!$"

ConArtist103Rewards_Text_9:
# 185 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to Petalburg soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_10:
# 192 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in that egg that\n"
	.string "multiplies itself?$"

ConArtist103Rewards_Text_11:
# 197 "data/maps/OldaleTown/scripts.pory"
	.string "Thank you so much for your help and\n"
	.string "patronage. See you at Petalburg!$"

OldaleVendingMachine_Text_0:
# 207 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 209 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 50¥$"

OldaleVendingMachine_Text_2:
# 209 "data/maps/OldaleTown/scripts.pory"
	.string "Tea - 70¥$"

OldaleVendingMachine_Text_3:
# 209 "data/maps/OldaleTown/scripts.pory"
	.string "Lava Cookie - 40¥$"

OldaleVendingMachine_Text_4:
# 209 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 227 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 236 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 245 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 247 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 254 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 260 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 280 "data/maps/OldaleTown/scripts.pory"
	.string "A Tea dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 289 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Tea can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 298 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Tea can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 307 "data/maps/OldaleTown/scripts.pory"
	.string "The Tea can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 333 "data/maps/OldaleTown/scripts.pory"
	.string "A Lava Cookie dropped on the machine's\n"
	.string "tray.$"

OldaleVendingMachine_Text_16:
# 342 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Lava Cookie can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 351 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Lava\n"
	.string "Cookie enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 360 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Lava Cookie just stays on\n"
	.string "the verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 403 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

Oldale102Sign_Text_0:
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "West - Road 002.$"

OldalePeekingOldman_Text_0:
# 418 "data/maps/OldaleTown/scripts.pory"
	.string "Those Rebel hoodlums... just when we\n"
	.string "start to get back on our feet, they\l"
	.string "come to ruin things!\p"
	.string "Murkrows, the lot of them!$"

OldalePeekingOldman_Text_1:
# 423 "data/maps/OldaleTown/scripts.pory"
	.string "Those hoodlums left town as if chased\n"
	.string "by a Mightyena. Good riddance I say!$"

OldalePeekingOldman_Text_2:
# 427 "data/maps/OldaleTown/scripts.pory"
	.string "Finally, Devon is manning the warehouse\n"
	.string "again.\p"
	.string "With that, Oldale gets money and\n"
	.string "safety. It's as much as one can wish for\l"
	.string "these days.$"

OldaleOutsideHikerGuy_Text_0:
# 438 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 448 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 453 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkNPC_Text_0:
# 466 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the Rebel Zone\n"
	.string "who get crazy rich by finding treasure\l"
	.string "with their {COLOR BLUE}Object Spotters{COLOR DARK_GRAY}.\p"
	.string "Haven't managed to get my hands on one,\n"
	.string "or I wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 471 "data/maps/OldaleTown/scripts.pory"
	.string "So... I saw you digging through that\n"
	.string "trash can.\p"
	.string "If you need pokeyen, you should get an\n"
	.string "{COLOR BLUE}Object Spotter{COLOR DARK_GRAY} and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideParkNPC_Text_2:
# 478 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Why don't you try it right here? Who\n"
	.string "knows, you might find something!$"

OldaleOutsideParkNPC_Text_3:
# 484 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Hopefully something better than what\n"
	.string "you found in that trash can... ha-ha-ha!$"

OldaleOutsideOldGuy_Text_0:
# 500 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleOutsideOldWoman_Text_0:
# 510 "data/maps/OldaleTown/scripts.pory"
	.string "Have you ever noticed that rain has a\n"
	.string "greenish tint recently...? It's caused\l"
	.string "by the polluted sea.\p"
	.string "The Weather Institute says it's not\n"
	.string "harmful on the short-term. But I worry\l"
	.string "about the long term...$"

DLCTeacherOutside_Text_0:
# 520 "data/maps/OldaleTown/scripts.pory"
	.string "I'm really dying for a smoke here...\p"
	.string "If only those loser Rebels left the\n"
	.string "Warehouse, Devon Co. would start\l"
	.string "sending supplies again.$"

DLCTeacherOutside_Text_1:
# 526 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Ah, sorry for blowing the smoke on your\n"
	.string "face. Haven't smoked in days...\p"
	.string "With the Rebels gone, the mart is\n"
	.string "getting stocked again.\p"
	.string "Was about time! {COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_GotoTherapy_Text_0:
# 539 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... the\n"
	.string "therapy session should be about to\l"
	.string "start.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 560 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 565 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 574 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 579 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 590 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 593 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 601 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 606 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 611 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and our tutor!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 617 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 631 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 638 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the {COLOR RED}Rebels{COLOR DARK_GRAY}, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 643 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 650 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 663 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 668 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 675 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 681 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 686 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 691 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 697 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's {COLOR RED}Rebels{COLOR DARK_GRAY} talk...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 703 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, come to Route 103! I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 720 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 725 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... he told us we'd\n"
	.string "need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 730 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 735 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 740 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 750 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 780 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 786 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 791 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "our tutor will be mad if we're not back\l"
	.string "at the dojo soon...$"

OldaleCamelia_Text_3:
# 801 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 806 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

OldaleDevonGrunts_Text_0:
# 825 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but we can't let anyone\n"
	.string "through until the {COLOR RED}Rebels{COLOR DARK_GRAY} occupying\l"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY}, are dealt with.$"

OldaleDevonGrunts_Text_1:
# 829 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to New Rustboro... but don't\l"
	.string "worry!\p"
	.string "Reinforcements from Devon HQ are\n"
	.string "currently on the way.$"

OldaleDevonGrunts_Text_2:
# 832 "data/maps/OldaleTown/scripts.pory"
	.string "Yup! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_3:
# 837 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Devon Ball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_4:
# 841 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_5:
# 846 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 851 "data/maps/OldaleTown/scripts.pory"
	.string "Ahem. If you've come to inquire about\n"
	.string "access to Road 002... I'm afraid we can't\l"
	.string "let anyone through until the {COLOR RED}Warehouse\l"
	.string "situation{COLOR DARK_GRAY} is under control.$"

OldaleDevonGrunts_Text_7:
# 858 "data/maps/OldaleTown/scripts.pory"
	.string "Hello there, civilian! We have great\n"
	.string "news!\p"
	.string "Those pesky {COLOR RED}Rebels{COLOR DARK_GRAY} have finally left\n"
	.string "Oldale Warehouse. The town is safe\l"
	.string "again!$"

OldaleDevonGrunts_Text_8:
# 862 "data/maps/OldaleTown/scripts.pory"
	.string "They must have caught wind of\n"
	.string "reinforcements coming, and didn't feel\l"
	.string "like spending the rest of their lives on\l"
	.string "{COLOR RED}Dewford Prison{COLOR DARK_GRAY}.$"

OldaleDevonGrunts_Text_9:
# 866 "data/maps/OldaleTown/scripts.pory"
	.string "Most likely! So... I suppose you want to\n"
	.string "go through Road 002?$"

OldaleDevonGrunts_Text_10:
# 871 "data/maps/OldaleTown/scripts.pory"
	.string "I see... well, I'm sorry to say...\p"
	.string "In the Rebel Zone, when it's not one\n"
	.string "thing, it's the other, you know?$"

OldaleDevonGrunts_Text_11:
# 874 "data/maps/OldaleTown/scripts.pory"
	.string "We have one of our scientists searching\n"
	.string "Road 002 for a very dangerous Pokémon.\p"
	.string "It's the next species on the list of\n"
	.string "Pokémon to be {COLOR BLUE}safened{COLOR DARK_GRAY}, and we can't let\l"
	.string "his work be disturbed.$"

OldaleDevonGrunts_Text_12:
# 879 "data/maps/OldaleTown/scripts.pory"
	.string "I'm afraid so. But don't worry - these\n"
	.string "tasks usually take from 3 to 4 months.\p"
	.string "And what's a little waiting if it means\n"
	.string "Hoenn becomes safer?$"

OldaleDevonGrunts_Text_13:
# 885 "data/maps/OldaleTown/scripts.pory"
	.string "Grand, then please enjoy this shith-... I\n"
	.string "mean, this cozy, cute sleepy town!$"

OldaleDevonGrunts_Text_14:
# 898 "data/maps/OldaleTown/scripts.pory"
	.string "Good day, dear civilians! I'm sorry to\n"
	.string "say, Road 002 is still off lim-...$"

OldaleDevonGrunts_Text_15:
# 906 "data/maps/OldaleTown/scripts.pory"
	.string "Save your breath, filthy invader - or\n"
	.string "your next words will be your last!$"

OldaleDevonGrunts_Text_16:
# 910 "data/maps/OldaleTown/scripts.pory"
	.string "Jerry, I believe we have a loonie in our\n"
	.string "hands.$"

OldaleDevonGrunts_Text_17:
# 912 "data/maps/OldaleTown/scripts.pory"
	.string "Those DLC therapies aren't doing much\n"
	.string "good...$"

OldaleDevonGrunts_Text_18:
# 919 "data/maps/OldaleTown/scripts.pory"
	.string "They're mocking us, {PLAYER}! What\n"
	.string "are you waiting for!? Go, YURE!$"

OldaleDevonGrunts_Text_19:
# 938 "data/maps/OldaleTown/scripts.pory"
	.string "MIMIIII!$"

OldaleDevonGrunts_Text_20:
# 946 "data/maps/OldaleTown/scripts.pory"
	.string "Well... just because you've beaten us,\n"
	.string "doesn't mean we need to mov-...$"

OldaleDevonGrunts_Text_21:
# 966 "data/maps/OldaleTown/scripts.pory"
	.string "A-alright Karen, protocol calls for\n"
	.string "retreat!$"

OldaleDevonGrunts_Text_22:
# 991 "data/maps/OldaleTown/scripts.pory"
	.string "Great work, {PLAYER} - we're a killer\n"
	.string "duo as always!\p"
	.string "But don't rest on your laurels just yet.\n"
	.string "It's time to press on the advantage!$"

OldaleDevonGrunts_Text_23:
# 998 "data/maps/OldaleTown/scripts.pory"
	.string "CHAAAARGE!$"

OldaleRival_Text_0:
# 1036 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... I saw you talking with\n"
	.string "those enemy soldiers just now.$"

OldaleRival_Text_1:
# 1042 "data/maps/OldaleTown/scripts.pory"
	.string "Don't you KNOW by now!? You cannot\n"
	.string "reason with the ENEMY!$"

OldaleRival_Text_2:
# 1044 "data/maps/OldaleTown/scripts.pory"
	.string "You can only {COLOR RED}FIGHT{COLOR DARK_GRAY} it!$"

OldaleRival_Text_3:
# 1049 "data/maps/OldaleTown/scripts.pory"
	.string "But I understand. It was two versus\n"
	.string "one. Don't worry, I am here now.$"

OldaleRival_Text_4:
# 1051 "data/maps/OldaleTown/scripts.pory"
	.string "Let's show those Kantonians they can't\n"
	.string "take our region! LEAD THE WAY,\l"
	.string "{PLAYER}.$"

OldaleRivalfollowchat_Text_0:
# 1075 "data/maps/OldaleTown/scripts.pory"
	.string "Let's go, {PLAYER} - those Kantonians\n"
	.string "are on the {COLOR RED}western exit of Oldale Town!{COLOR DARK_GRAY}$"

OldaleRivalfollowchat_Text_1:
# 1080 "data/maps/OldaleTown/scripts.pory"
	.string "Let's kick their ass all the way to their\n"
	.string "miserable region across the sea!$"

OldaleRivalDontLeaveOldaleto101_Text_0:
# 1094 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!?$"

OldaleRivalDontLeaveOldaleto101_Text_1:
# 1099 "data/maps/OldaleTown/scripts.pory"
	.string "We have already secured the southern\n"
	.string "front, remember!? Thanks to your\l"
	.string "glorious victory!$"

OldaleRivalDontLeaveOldaleto101_Text_2:
# 1102 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the next battle?$"

OldaleRivalDontLeaveOldaleto101_Text_3:
# 1106 "data/maps/OldaleTown/scripts.pory"
	.string "Very well... I'll be keeping an eye on\n"
	.string "them. Don't take long!$"

OldaleRivalDontLeaveOldaleto101_Text_4:
# 1123 "data/maps/OldaleTown/scripts.pory"
	.string "Let's not delay then. I'm as ready as\n"
	.string "I'll ever be!$"

OldaleWareHouseSign_Text_0:
# 1134 "data/maps/OldaleTown/scripts.pory"
	.string "East - Oldale Warehouse.$"

OldaleMotorBike_Text_0:
# 1140 "data/maps/OldaleTown/scripts.pory"
	.string "A motorbike. A decal on its die reads\n"
	.string "'Rebel 4 Life'.$"

OldaleCar_Text_0:
# 1146 "data/maps/OldaleTown/scripts.pory"
	.string "It's a Devon Roader. It's got\n"
	.string "footprints all over the ceiling.$"

Oldale4x4_Text_0:
# 1152 "data/maps/OldaleTown/scripts.pory"
	.string "It's a Devon Hauler. Seems to have been\n"
	.string "parked for some time.$"

OldaleBike_Text_0:
# 1159 "data/maps/OldaleTown/scripts.pory"
	.string "The bike has tons of locks on the\n"
	.string "wheels, to discourage theft.$"

OldalePlant_Text_0:
# 1166 "data/maps/OldaleTown/scripts.pory"
	.string "The plants are on the same state that\n"
	.string "the trees around...\p"
	.string "On their way to wither.$"

OldaleDLCWindow_Text_0:
# 1174 "data/maps/OldaleTown/scripts.pory"
	.string "You can see the DLC's library through\n"
	.string "the window.\p"
	.string "The library's clerk is browsing an...\n"
	.string "'explicit' website.$"

OldaleDevonTruck_Text_0:
# 1181 "data/maps/OldaleTown/scripts.pory"
	.string "Dirt has accumulated on the Devon\n"
	.string "truck. Seems to have been parked for\l"
	.string "some time.$"

OldaleDevonTruckDamaged_Text_0:
# 1187 "data/maps/OldaleTown/scripts.pory"
	.string "There's many hit marks on the truck.\n"
	.string "Someone tried to open it, to no avail.$"

OldaleRivalDontLeaveOldaleto103_Text_0:
# 1230 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? The\n"
	.string "enemy is not this way!$"

OldaleRivalDontLeaveOldaleto103_Text_1:
# 1235 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the battle?$"

OldaleRivalnoleavetoWhouse_Text_0:
# 1276 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? This\n"
	.string "way is to the {COLOR GREEN}warehouse{COLOR DARK_GRAY}!$"

OldaleRivalnoleavetoWhouse_Text_1:
# 1281 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you want to resupply there\n"
	.string "before the battle?$"

OldaleRivalnoleavetoWhouse_Text_2:
# 1288 "data/maps/OldaleTown/scripts.pory"
	.string "Aah, smart thinking! I'll keep an eye on\n"
	.string "those Kantonians. Don't take long!$"

OldaleWarehouseRebelGuard_Text_0:
# 1320 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 1327 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Calvin!$"

OldaleWarehouseRebelGuard_Text_2:
# 1329 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Calvin!$"

OldaleWarehouseRebelGuard_Text_3:
# 1331 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "next to you? He's so pathetic!\p"
	.string "I'll teach you that not every Rebel is\n"
	.string "like him!$"

OldaleWarehouseRebelGuard_Text_4:
# 1336 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 1339 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 1367 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 1374 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only broken clankers in\n"
	.string "this grass! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 1383 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 1423 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 1436 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 1438 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 1461 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

SamanthaCall1_Text_0:
# 1492 "data/maps/OldaleTown/scripts.pory"
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
# 1513 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... I-I know they sell\n"
	.string "boxed lunches in here, but...$"

SamanthaDontgotoDevonCenter_Text_1:
# 1514 "data/maps/OldaleTown/scripts.pory"
	.string "I-I don't have enough money for\n"
	.string "those...\p"
	.string "Can... can we go to the vending machine\n"
	.string "instead?$"

SamanthaDontgotoDevonCenter_Text_2:
# 1519 "data/maps/OldaleTown/scripts.pory"
	.string "W-we can go back to the Mausoleum now...\n"
	.string "I-I don't want to take more of your\l"
	.string "time...!$"

SamanthaDontgotoDLC_Text_0:
# 1534 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... is this the Devon\n"
	.string "Learning Center?$"

SamanthaDontgotoDLC_Text_1:
# 1535 "data/maps/OldaleTown/scripts.pory"
	.string "It seems like they are holding a lesson\n"
	.string "now...\p"
	.string "I have not signed up for it, so I would\n"
	.string "not like to interrupt.$"

SamanthaDontgoto102_Text_0:
# 1554 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Road 002, right?$"

SamanthaDontgoto102_Text_1:
# 1556 "data/maps/OldaleTown/scripts.pory"
	.string "W-we don't need to go that far...\p"
	.string "I'm sure there's another vending\n"
	.string "machine in Petalburg, b-but... the one\l"
	.string "here in Oldale will do!$"

SamanthaDontgoto103_Text_0:
# 1576 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Route 103, right?$"

SamanthaDontgoto103_Text_1:
# 1578 "data/maps/OldaleTown/scripts.pory"
	.string "B-but Slateport is very far... t-the\n"
	.string "food here in Oldale will do!$"

SamanthaDontgotoWarehouse_Text_0:
# 1597 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... Oldale's Warehouse is\n"
	.string "over there, right?$"

SamanthaDontgotoWarehouse_Text_1:
# 1601 "data/maps/OldaleTown/scripts.pory"
	.string "I-I dont' think they sell any food over\n"
	.string "there...$"

SamanthaDontgotoWarehouse_Text_2:
# 1605 "data/maps/OldaleTown/scripts.pory"
	.string "I-I see some scary Rebels over there...\n"
	.string "m-maybe we shouldn't get near...$"

SamanthaDontgotoWarehouse_Text_3:
# 1609 "data/maps/OldaleTown/scripts.pory"
	.string "I-I'll just get some snacks from the\n"
	.string "vending machine there, o-okay?$"

SamanthaGetSnacksCutscene_Text_0:
# 1627 "data/maps/OldaleTown/scripts.pory"
	.string "A-ah... here we are, {PLAYER}! Give me\n"
	.string "a moment...$"

SamanthaGetSnacksCutscene_Text_1:
# 1631 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I'll have some of these...$"

SamanthaGetSnacksCutscene_Text_2:
# 1635 "data/maps/OldaleTown/scripts.pory"
	.string "And of these...$"

SamanthaGetSnacksCutscene_Text_3:
# 1642 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, and these too...!$"

SamanthaGetSnacksCutscene_Text_4:
# 1657 "data/maps/OldaleTown/scripts.pory"
	.string "Hehehe... I've got tons. We can go back.\p"
	.string "T-thank you...$"

DevonGruntMOutro::
# 1022 "data/maps/OldaleTown/scripts.pory"
	.string "We haven't lost. We have just delegated\nyour arrest to fellow Devon Guards.$"

DevonGruntFOutro::
# 1025 "data/maps/OldaleTown/scripts.pory"
	.string "... exactly.$"

RebelOldale_Outro::
# 1356 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Calvin was right after\nall...$"
