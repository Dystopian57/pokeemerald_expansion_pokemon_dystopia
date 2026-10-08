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


OldaleTruckBaseItem::
# 136 "data/maps/OldaleTown/scripts.pory"
	lock
# 137 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_TM_POUNCE
# 140 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


ConArtist103Rewards::
# 144 "data/maps/OldaleTown/scripts.pory"
	lock
# 145 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 146 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 148 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq ConArtist103Rewards_2
ConArtist103Rewards_1:
# 204 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq ConArtist103Rewards_5
ConArtist103Rewards_4:
# 209 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 210 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 150 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_8
ConArtist103Rewards_7:
# 197 "data/maps/OldaleTown/scripts.pory"
	goto_if_set conartistthanked, ConArtist103Rewards_10
	goto ConArtist103Rewards_1

ConArtist103Rewards_5:
# 205 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 206 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
	goto ConArtist103Rewards_4

ConArtist103Rewards_8:
# 152 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 154 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 155 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 156 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 157 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 158 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 159 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 163 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 164 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 165 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 166 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_13
ConArtist103Rewards_12:
# 188 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_15
	goto ConArtist103Rewards_7

ConArtist103Rewards_10:
# 198 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 199 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 200 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 201 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
	goto ConArtist103Rewards_1

ConArtist103Rewards_13:
# 167 "data/maps/OldaleTown/scripts.pory"
	removemoney 500
# 168 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 169 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 170 "data/maps/OldaleTown/scripts.pory"
	waitse
# 171 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 172 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 173 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 174 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 175 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_6
# 176 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 177 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 178 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_7
# 181 "data/maps/OldaleTown/scripts.pory"
	register_matchcall TRAINER_SHADYDEALER_103
# 182 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 183 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_8
# 184 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 2
# 185 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_12

ConArtist103Rewards_15:
# 189 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 190 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 191 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 192 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_9
# 194 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_7


OldaleVendingMachine::
# 215 "data/maps/OldaleTown/scripts.pory"
	lock
# 216 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 217 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 218 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 221 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 275 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 329 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 382 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 385 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 386 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 387 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 222 "data/maps/OldaleTown/scripts.pory"
	checkmoney 175
# 223 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 269 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 276 "data/maps/OldaleTown/scripts.pory"
	checkmoney 100
# 277 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 323 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 224 "data/maps/OldaleTown/scripts.pory"
	removemoney 175
# 225 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 226 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 227 "data/maps/OldaleTown/scripts.pory"
	waitse
# 233 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 234 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 235 "data/maps/OldaleTown/scripts.pory"
	waitse
# 237 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 238 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 239 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 241 "data/maps/OldaleTown/scripts.pory"
	random 20
# 242 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 243 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 245 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 246 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 247 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 248 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 249 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 251 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 252 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 253 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 254 "data/maps/OldaleTown/scripts.pory"
	waitse
# 255 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 257 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 258 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 263 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 330 "data/maps/OldaleTown/scripts.pory"
	checkmoney 200
# 331 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 377 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 278 "data/maps/OldaleTown/scripts.pory"
	removemoney 100
# 279 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 280 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 281 "data/maps/OldaleTown/scripts.pory"
	waitse
# 283 "data/maps/OldaleTown/scripts.pory"
	random 4
# 284 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, teagotstuck
# 285 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gottea
# 287 "data/maps/OldaleTown/scripts.pory"
gottea:
# 288 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 289 "data/maps/OldaleTown/scripts.pory"
	waitse
# 291 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 292 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 293 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TEA
# 295 "data/maps/OldaleTown/scripts.pory"
	random 20
# 296 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 297 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextratea
# 299 "data/maps/OldaleTown/scripts.pory"
gotextratea:
# 300 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 301 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 302 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_TEA
# 303 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 305 "data/maps/OldaleTown/scripts.pory"
teagotstuck:
# 306 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 307 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 308 "data/maps/OldaleTown/scripts.pory"
	waitse
# 309 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 311 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 312 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 317 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 270 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 259 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 260 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 383 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 332 "data/maps/OldaleTown/scripts.pory"
	removemoney 200
# 333 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 334 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 335 "data/maps/OldaleTown/scripts.pory"
	waitse
# 337 "data/maps/OldaleTown/scripts.pory"
	random 4
# 338 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, lavacookiegotstuck
# 339 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotlavacookie
# 341 "data/maps/OldaleTown/scripts.pory"
gotlavacookie:
# 342 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 343 "data/maps/OldaleTown/scripts.pory"
	waitse
# 345 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 346 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 347 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 349 "data/maps/OldaleTown/scripts.pory"
	random 20
# 350 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 351 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextralavacookie
# 353 "data/maps/OldaleTown/scripts.pory"
gotextralavacookie:
# 354 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 355 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 356 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 357 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 359 "data/maps/OldaleTown/scripts.pory"
lavacookiegotstuck:
# 360 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 361 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 362 "data/maps/OldaleTown/scripts.pory"
	waitse
# 363 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 365 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 366 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 371 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 324 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 313 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 314 "data/maps/OldaleTown/scripts.pory"
	goto gottea
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 264 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 378 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 367 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 368 "data/maps/OldaleTown/scripts.pory"
	goto gotlavacookie
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 318 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 372 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 392 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 393 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 394 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 395 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 396 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 397 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 402 "data/maps/OldaleTown/scripts.pory"
	lock
# 403 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 404 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 408 "data/maps/OldaleTown/scripts.pory"
	lock
# 409 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 410 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 414 "data/maps/OldaleTown/scripts.pory"
	lock
# 415 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 416 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale102Sign::
# 421 "data/maps/OldaleTown/scripts.pory"
	lock
# 422 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale102Sign_Text_0
# 423 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalePeekingOldman::
# 427 "data/maps/OldaleTown/scripts.pory"
	lock
# 428 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 429 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldalePeekingOldman_2
OldalePeekingOldman_1:
# 433 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldalePeekingOldman_5
OldalePeekingOldman_4:
# 437 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_ge OldalePeekingOldman_8
OldalePeekingOldman_7:
# 441 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldalePeekingOldman_2:
# 430 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_0
	goto OldalePeekingOldman_1

OldalePeekingOldman_5:
# 434 "data/maps/OldaleTown/scripts.pory"
	applymovement 32, ConArtist103Rewards_Movement_0
# 435 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_1
	goto OldalePeekingOldman_4

OldalePeekingOldman_8:
# 438 "data/maps/OldaleTown/scripts.pory"
	applymovement 32, ConArtist103Rewards_Movement_0
# 439 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_2
	goto OldalePeekingOldman_7


OldaleOutsideHikerGuy::
# 445 "data/maps/OldaleTown/scripts.pory"
	lock
# 446 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 447 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 449 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 454 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 459 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 464 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 469 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 451 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 456 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 461 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 466 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 473 "data/maps/OldaleTown/scripts.pory"
	lock
# 474 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 475 "data/maps/OldaleTown/scripts.pory"
	applymovement 10, ConArtist103Rewards_Movement_0
# 476 "data/maps/OldaleTown/scripts.pory"
	applymovement 31, ConArtist103Rewards_Movement_0
# 478 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_3
OldaleOutsideParkNPC_1:
# 483 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_8
OldaleOutsideParkNPC_6:
# 490 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_13
OldaleOutsideParkNPC_11:
# 496 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_18
OldaleOutsideParkNPC_16:
# 502 "data/maps/OldaleTown/scripts.pory"
	applymovement 10, OldaleOutsideParkNPC_Movement_0
# 503 "data/maps/OldaleTown/scripts.pory"
	applymovement 31, OldaleOutsideParkNPC_Movement_0
# 504 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_2:
# 480 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_3:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_2
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_7:
# 485 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_8:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_7
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_12:
# 492 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_2
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_13:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_12
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_17:
# 498 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_3
	goto OldaleOutsideParkNPC_16

OldaleOutsideParkNPC_18:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_17
	goto OldaleOutsideParkNPC_16


OldaleOutsideOldGuy::
# 514 "data/maps/OldaleTown/scripts.pory"
	lock
# 515 "data/maps/OldaleTown/scripts.pory"
	applymovement 12, ConArtist103Rewards_Movement_0
# 516 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 520 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldWoman::
# 524 "data/maps/OldaleTown/scripts.pory"
	lock
# 525 "data/maps/OldaleTown/scripts.pory"
	applymovement 30, ConArtist103Rewards_Movement_0
# 526 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldWoman_Text_0
# 529 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


DLCTeacherOutside::
# 533 "data/maps/OldaleTown/scripts.pory"
	lock
# 534 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 535 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_lt DLCTeacherOutside_2
DLCTeacherOutside_1:
# 539 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_ge DLCTeacherOutside_5
DLCTeacherOutside_4:
# 546 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

DLCTeacherOutside_2:
# 536 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_0
	goto DLCTeacherOutside_1

DLCTeacherOutside_5:
# 540 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 541 "data/maps/OldaleTown/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 542 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_1
	goto DLCTeacherOutside_4


OldaleTown_GotoTherapy::
# 550 "data/maps/OldaleTown/scripts.pory"
	lock
# 551 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 552 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 553 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_0
# 554 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 555 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 556 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 557 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 558 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 559 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 560 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_2
# 561 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 563 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 564 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 565 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 570 "data/maps/OldaleTown/scripts.pory"
	goto_if_set sharpycameliaDLCcs, OldaleSharpyCameliaOutDLCCutscene_1
# 805 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleSharpyCameliaOutDLCCutscene_1:
# 572 "data/maps/OldaleTown/scripts.pory"
	lock
# 573 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 574 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 575 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 576 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_SKETCH
# 577 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 578 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 580 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 581 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 582 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 583 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 586 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 587 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 588 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 590 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 591 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 596 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 600 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 601 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 602 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 603 "data/maps/OldaleTown/scripts.pory"
	waitse
# 604 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 605 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 607 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 610 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 613 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 614 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 615 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 616 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 617 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 618 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 619 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 621 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 622 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 623 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 624 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 626 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 627 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 628 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 629 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 632 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 633 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 634 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 635 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 638 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 639 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 641 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 645 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 752 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 753 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 754 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 755 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 756 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 758 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 759 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 760 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 761 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 763 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 764 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 765 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 766 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 768 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 769 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 770 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 771 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 773 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 774 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 775 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 776 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_28
# 777 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 778 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 782 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 783 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_6
# 784 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 785 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 786 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 787 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 788 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 789 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_29
# 791 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 792 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 794 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 17, 0, 0
# 796 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpycameliaDLCcs
# 797 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 798 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 801 "data/maps/OldaleTown/scripts.pory"
	setflag finishedtherapy
# 802 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_5:
# 592 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 597 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 608 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 611 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 642 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 646 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 647 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 648 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 649 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 652 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 653 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 654 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 655 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 656 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 658 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 659 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 660 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 661 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 664 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 665 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 666 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 667 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 668 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 670 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 671 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 673 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 677 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_26
OldaleSharpyCameliaOutDLCCutscene_25:
# 683 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 684 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 685 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 686 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 689 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 690 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 691 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 692 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 693 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 695 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 696 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 697 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 698 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 699 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 700 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 701 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 702 "data/maps/OldaleTown/scripts.pory"
	waitse
# 703 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 704 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 705 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 706 "data/maps/OldaleTown/scripts.pory"
	waitmovement 17
# 707 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 709 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 710 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 711 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 712 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 714 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 715 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 716 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 717 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 719 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 720 "data/maps/OldaleTown/scripts.pory"
	waitmovement 17
# 721 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 722 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 723 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 724 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 726 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleOutsideParkNPC_Movement_0
# 727 "data/maps/OldaleTown/scripts.pory"
	waitmovement 17
# 728 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 729 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 730 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 731 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 734 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 735 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 736 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 737 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 738 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 739 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 740 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 742 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 743 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_6
# 744 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 747 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 748 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 674 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_22

OldaleSharpyCameliaOutDLCCutscene_26:
# 678 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 679 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 680 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 681 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_25


OldaleCamelia::
# 810 "data/maps/OldaleTown/scripts.pory"
	lock
# 812 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 837 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 838 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 839 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 840 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 842 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 843 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 844 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 845 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 848 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 849 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 850 "data/maps/OldaleTown/scripts.pory"
	waitmovement 16
# 851 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 815 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 816 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, ConArtist103Rewards_Movement_0
# 817 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 818 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 819 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 822 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 823 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 824 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 825 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 827 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 828 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 829 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 830 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


OldaleDevonGrunts::
# 861 "data/maps/OldaleTown/scripts.pory"
	lock
# 862 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 863 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_3
OldaleDevonGrunts_1:
# 876 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_8
OldaleDevonGrunts_6:
# 897 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_12
OldaleDevonGrunts_11:
# 941 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_eq OldaleDevonGrunts_15
OldaleDevonGrunts_14:
# 1071 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 865 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 866 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 869 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 870 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 872 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 873 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_3:
# 863 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Sharpydefeatedat103, OldaleDevonGrunts_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_7:
# 877 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 878 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
# 881 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 882 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 886 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_2
# 887 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 889 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleTown_GotoTherapy_Movement_0
# 890 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 892 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_8:
# 876 "data/maps/OldaleTown/scripts.pory"
	goto_if_set Sharpydefeatedat103, OldaleDevonGrunts_7
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_12:
# 898 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 899 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_7
# 902 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 903 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_8
# 905 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 906 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 907 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_9
# 908 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 910 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleDevonGrunts_18
OldaleDevonGrunts_17:
# 924 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleDevonGrunts_24
OldaleDevonGrunts_23:
# 928 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 929 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 931 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 932 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 933 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_30
OldaleDevonGrunts_29:
# 934 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_35
	goto OldaleDevonGrunts_11

OldaleDevonGrunts_15:
# 943 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 944 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_14
# 946 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_HELP, TRUE
# 947 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 948 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 949 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_21
OldaleDevonGrunts_20:
# 950 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_27
OldaleDevonGrunts_26:
# 951 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 952 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_15
# 953 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 954 "data/maps/OldaleTown/scripts.pory"
	setspeaker NULL
# 955 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 956 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_16
# 957 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_4
# 958 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_17
# 959 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 960 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 961 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 962 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_33
OldaleDevonGrunts_32:
# 963 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_38
OldaleDevonGrunts_37:
# 964 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 965 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_18
# 966 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 967 "data/maps/OldaleTown/scripts.pory"
	setspeaker NULL
# 968 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_OPEN
# 969 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_3
# 970 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 971 "data/maps/OldaleTown/scripts.pory"
	clearflag DOLL_BATTLE
# 972 "data/maps/OldaleTown/scripts.pory"
	addobject 36
# 973 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_4
# 974 "data/maps/OldaleTown/scripts.pory"
	waitse
# 975 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 976 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_5
# 977 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 978 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 979 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_5
# 980 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 982 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_MIMIYURUI, CRY_MODE_NORMAL
# 984 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_19
# 985 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 986 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_6
# 987 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_6
# 988 "data/maps/OldaleTown/scripts.pory"
	waitmovement 15
# 990 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro, TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro
# 992 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_20
# 995 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_4
# 996 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_3
# 997 "data/maps/OldaleTown/scripts.pory"
	waitmovement 14
# 998 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 999 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_5
# 1000 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 1001 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1002 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_5
# 1003 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 1004 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1006 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_MIMIYURUI, CRY_MODE_NORMAL
# 1007 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_19
# 1009 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_5
# 1010 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 1011 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1012 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_21
# 1013 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1015 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_7
# 1016 "data/maps/OldaleTown/scripts.pory"
	waitmovement 14
# 1017 "data/maps/OldaleTown/scripts.pory"
	removeobject 14
# 1018 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1019 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1020 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_7
# 1021 "data/maps/OldaleTown/scripts.pory"
	waitmovement 15
# 1022 "data/maps/OldaleTown/scripts.pory"
	removeobject 15
# 1023 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1024 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1026 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 2
# 1027 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_LAVENDERHGSS, TRUE
# 1031 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, ConArtist103Rewards_Movement_0
# 1032 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1033 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_41
OldaleDevonGrunts_40:
# 1034 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_44
OldaleDevonGrunts_43:
# 1035 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1037 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_22
# 1040 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_47
OldaleDevonGrunts_46:
# 1041 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_50
OldaleDevonGrunts_49:
# 1042 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1044 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_23
# 1045 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1046 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1048 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1049 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_8
# 1050 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1051 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
# 1053 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1054 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleDevonGrunts_53
OldaleDevonGrunts_52:
# 1055 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleDevonGrunts_56
OldaleDevonGrunts_55:
# 1057 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1058 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1059 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1060 "data/maps/OldaleTown/scripts.pory"
	applymovement 36, OldaleDevonGrunts_Movement_9
# 1061 "data/maps/OldaleTown/scripts.pory"
	waitmovement 36
# 1062 "data/maps/OldaleTown/scripts.pory"
	setflag DOLL_BATTLE
# 1063 "data/maps/OldaleTown/scripts.pory"
	removeobject 36
# 1064 "data/maps/OldaleTown/scripts.pory"
	playse SE_EXIT
# 1065 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1067 "data/maps/OldaleTown/scripts.pory"
	setflag devonsdontblock102
# 1068 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 4
	goto OldaleDevonGrunts_14

OldaleDevonGrunts_18:
# 911 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 912 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_10
# 914 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleTown_GotoTherapy_Movement_0
# 915 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_11
# 919 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 920 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_12
	goto OldaleDevonGrunts_17

OldaleDevonGrunts_21:
# 949 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_20

OldaleDevonGrunts_24:
# 925 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleTown_GotoTherapy_Movement_0
# 926 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_13
	goto OldaleDevonGrunts_23

OldaleDevonGrunts_27:
# 950 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_26

OldaleDevonGrunts_30:
# 933 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalfappearsinOldale
	goto OldaleDevonGrunts_29

OldaleDevonGrunts_33:
# 962 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_32

OldaleDevonGrunts_35:
# 934 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalmappearsinOldale
	goto OldaleDevonGrunts_11

OldaleDevonGrunts_38:
# 963 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_37

OldaleDevonGrunts_41:
# 1033 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_40

OldaleDevonGrunts_44:
# 1034 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleDevonGrunts_43

OldaleDevonGrunts_47:
# 1040 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_46

OldaleDevonGrunts_50:
# 1041 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleDevonGrunts_49

OldaleDevonGrunts_53:
# 1054 "data/maps/OldaleTown/scripts.pory"
	setflag rivalfappearsinOldale
	goto OldaleDevonGrunts_52

OldaleDevonGrunts_56:
# 1055 "data/maps/OldaleTown/scripts.pory"
	setflag rivalmappearsinOldale
	goto OldaleDevonGrunts_55


OldaleRival::
# 1081 "data/maps/OldaleTown/scripts.pory"
	lock
# 1082 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1083 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1084 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_2
OldaleRival_1:
# 1085 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_5
OldaleRival_4:
# 1089 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1090 "data/maps/OldaleTown/scripts.pory"
	applymovement 21, ConArtist103Rewards_Movement_0
# 1091 "data/maps/OldaleTown/scripts.pory"
	applymovement 38, ConArtist103Rewards_Movement_0
# 1092 "data/maps/OldaleTown/scripts.pory"
	applymovement 39, ConArtist103Rewards_Movement_0
# 1093 "data/maps/OldaleTown/scripts.pory"
	goto_if_set OldaleDevonFightLost, OldaleRival_8
OldaleRival_7:
# 1113 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_4
# 1114 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1115 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_11
OldaleRival_10:
# 1116 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_17
OldaleRival_16:
# 1117 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1118 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_SWAGGER2
# 1119 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_5
# 1120 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1121 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_6
# 1122 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1123 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_23
OldaleRival_22:
# 1124 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_29
OldaleRival_28:
# 1125 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1126 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_7
# 1127 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1128 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_8
# 1129 "data/maps/OldaleTown/scripts.pory"
afteroldalerivallost:
# 1130 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1131 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 1133 "data/maps/OldaleTown/scripts.pory"
	setspeaker NULL
# 1134 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1136 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1137 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_35
OldaleRival_34:
# 1140 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_41
OldaleRival_40:
# 1142 "data/maps/OldaleTown/scripts.pory"
	removeobject 21
# 1143 "data/maps/OldaleTown/scripts.pory"
	removeobject 38
# 1144 "data/maps/OldaleTown/scripts.pory"
	removeobject 39
# 1145 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
# 1146 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1147 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_47
OldaleRival_46:
# 1148 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_50
OldaleRival_49:
# 1149 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRival_2:
# 1084 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRival_1

OldaleRival_5:
# 1085 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRival_4

OldaleRival_8:
# 1094 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_0
# 1095 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1096 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_14
OldaleRival_13:
# 1097 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_20
OldaleRival_19:
# 1098 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1099 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_1
# 1101 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_26
OldaleRival_25:
# 1102 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_32
OldaleRival_31:
# 1103 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1104 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_2
# 1106 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_38
OldaleRival_37:
# 1107 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_44
OldaleRival_43:
# 1108 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1109 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_3
# 1110 "data/maps/OldaleTown/scripts.pory"
	goto afteroldalerivallost
	goto OldaleRival_7

OldaleRival_11:
# 1115 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleRival_10

OldaleRival_14:
# 1096 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleRival_13

OldaleRival_17:
# 1116 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleRival_16

OldaleRival_20:
# 1097 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleRival_19

OldaleRival_23:
# 1123 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRival_22

OldaleRival_26:
# 1101 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRival_25

OldaleRival_29:
# 1124 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRival_28

OldaleRival_32:
# 1102 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRival_31

OldaleRival_35:
# 1138 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVALF, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRival_34

OldaleRival_38:
# 1106 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRival_37

OldaleRival_41:
# 1141 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVALM, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_MALE
	goto OldaleRival_40

OldaleRival_44:
# 1107 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRival_43

OldaleRival_47:
# 1147 "data/maps/OldaleTown/scripts.pory"
	setflag rivalfappearsinOldale
	goto OldaleRival_46

OldaleRival_50:
# 1148 "data/maps/OldaleTown/scripts.pory"
	setflag rivalmappearsinOldale
	goto OldaleRival_49


OldaleRivalfollowchat::
# 1153 "data/maps/OldaleTown/scripts.pory"
	lock
# 1154 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, ConArtist103Rewards_Movement_0
# 1155 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1156 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalfollowchat_2
OldaleRivalfollowchat_1:
# 1157 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalfollowchat_5
OldaleRivalfollowchat_4:
# 1158 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1159 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_0
# 1160 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1161 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalfollowchat_8
OldaleRivalfollowchat_7:
# 1162 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalfollowchat_11
OldaleRivalfollowchat_10:
# 1163 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1164 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_1
# 1165 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1166 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleRivalfollowchat_2:
# 1156 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalfollowchat_1

OldaleRivalfollowchat_5:
# 1157 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalfollowchat_4

OldaleRivalfollowchat_8:
# 1161 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_ANGRY
	goto OldaleRivalfollowchat_7

OldaleRivalfollowchat_11:
# 1162 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_ANGRY
	goto OldaleRivalfollowchat_10


OldaleRivalDontLeaveOldaleto101::
# 1169 "data/maps/OldaleTown/scripts.pory"
	lock
# 1170 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1171 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1172 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1173 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_METRONOME
# 1174 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1175 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_2
OldaleRivalDontLeaveOldaleto101_1:
# 1176 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_5
OldaleRivalDontLeaveOldaleto101_4:
# 1177 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1178 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_0
# 1179 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1180 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_8
OldaleRivalDontLeaveOldaleto101_7:
# 1181 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_11
OldaleRivalDontLeaveOldaleto101_10:
# 1182 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1183 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_1
# 1185 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1186 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_2
# 1187 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1188 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto101_14
OldaleRivalDontLeaveOldaleto101_13:
# 1205 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto101_17
OldaleRivalDontLeaveOldaleto101_16:
# 1219 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto101_2:
# 1175 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto101_1

OldaleRivalDontLeaveOldaleto101_5:
# 1176 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto101_4

OldaleRivalDontLeaveOldaleto101_8:
# 1180 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_7

OldaleRivalDontLeaveOldaleto101_11:
# 1181 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_10

OldaleRivalDontLeaveOldaleto101_14:
# 1189 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1190 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 1191 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1192 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1193 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1194 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1195 "data/maps/OldaleTown/scripts.pory"
	addobject 21
# 1196 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1197 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1198 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_20
OldaleRivalDontLeaveOldaleto101_19:
# 1199 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_26
OldaleRivalDontLeaveOldaleto101_25:
# 1200 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1201 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 1202 "data/maps/OldaleTown/scripts.pory"
	goto endoffollowrivaloldale
	goto OldaleRivalDontLeaveOldaleto101_13

OldaleRivalDontLeaveOldaleto101_17:
# 1207 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1208 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_23
OldaleRivalDontLeaveOldaleto101_22:
# 1209 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto101_29
OldaleRivalDontLeaveOldaleto101_28:
# 1210 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1211 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1212 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1213 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1214 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_2
# 1215 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_2
# 1216 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto101_16

OldaleRivalDontLeaveOldaleto101_20:
# 1198 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalfappearsinOldale
	goto OldaleRivalDontLeaveOldaleto101_19

OldaleRivalDontLeaveOldaleto101_23:
# 1208 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_22

OldaleRivalDontLeaveOldaleto101_26:
# 1199 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalmappearsinOldale
	goto OldaleRivalDontLeaveOldaleto101_25

OldaleRivalDontLeaveOldaleto101_29:
# 1209 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto101_28


OldaleWareHouseSign::
# 1224 "data/maps/OldaleTown/scripts.pory"
	lock
# 1225 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWareHouseSign_Text_0
# 1226 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleMotorBike::
# 1230 "data/maps/OldaleTown/scripts.pory"
	lock
# 1231 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleMotorBike_Text_0
# 1232 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCar::
# 1236 "data/maps/OldaleTown/scripts.pory"
	lock
# 1237 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCar_Text_0
# 1238 "data/maps/OldaleTown/scripts.pory"
	release
	return


Oldale4x4::
# 1242 "data/maps/OldaleTown/scripts.pory"
	lock
# 1243 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale4x4_Text_0
# 1244 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleBike::
# 1248 "data/maps/OldaleTown/scripts.pory"
	lock
# 1249 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1250 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleBike_Text_0
# 1251 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePlant::
# 1255 "data/maps/OldaleTown/scripts.pory"
	lock
# 1256 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1257 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePlant_Text_0
# 1259 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDLCWindow::
# 1263 "data/maps/OldaleTown/scripts.pory"
	lock
# 1264 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1265 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCWindow_Text_0
# 1267 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDevonTruck::
# 1271 "data/maps/OldaleTown/scripts.pory"
	lock
# 1272 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonTruck_Text_0
# 1273 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDevonTruckDamaged::
# 1277 "data/maps/OldaleTown/scripts.pory"
	lock
# 1278 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonTruckDamaged_Text_0
# 1279 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePostFenceItem::
# 1283 "data/maps/OldaleTown/scripts.pory"
	lock
# 1284 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_BIKE_VOUCHER
# 1287 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 1288 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleHouse2GardenItem::
# 1291 "data/maps/OldaleTown/scripts.pory"
	lock
# 1292 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_SOFT_SAND
# 1295 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 1296 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleParkingItem::
# 1299 "data/maps/OldaleTown/scripts.pory"
	lock
# 1300 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_METAL_COAT
# 1301 "data/maps/OldaleTown/scripts.pory"
	removeobject 3
# 1302 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalebyTruckItem::
# 1305 "data/maps/OldaleTown/scripts.pory"
	lock
# 1306 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_RAZOR_FANG
# 1307 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 1308 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalDontLeaveOldaleto103::
# 1312 "data/maps/OldaleTown/scripts.pory"
	lock
# 1313 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1314 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleOutsideParkNPC_Movement_0
# 1315 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1316 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_METRONOME
# 1317 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1318 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_2
OldaleRivalDontLeaveOldaleto103_1:
# 1319 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_5
OldaleRivalDontLeaveOldaleto103_4:
# 1320 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1321 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_0
# 1322 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1323 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_8
OldaleRivalDontLeaveOldaleto103_7:
# 1324 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_11
OldaleRivalDontLeaveOldaleto103_10:
# 1325 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1326 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_1
# 1327 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1328 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto103_14
OldaleRivalDontLeaveOldaleto103_13:
# 1348 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto103_17
OldaleRivalDontLeaveOldaleto103_16:
# 1362 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto103_2:
# 1318 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto103_1

OldaleRivalDontLeaveOldaleto103_5:
# 1319 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRivalDontLeaveOldaleto103_4

OldaleRivalDontLeaveOldaleto103_8:
# 1323 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_7

OldaleRivalDontLeaveOldaleto103_11:
# 1324 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_10

OldaleRivalDontLeaveOldaleto103_14:
# 1329 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1330 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_20
OldaleRivalDontLeaveOldaleto103_19:
# 1331 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_26
OldaleRivalDontLeaveOldaleto103_25:
# 1332 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1333 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 1334 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1335 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1336 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1337 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1338 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 1339 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1340 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1341 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_32
OldaleRivalDontLeaveOldaleto103_31:
# 1342 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_35
OldaleRivalDontLeaveOldaleto103_34:
# 1343 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1344 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 1345 "data/maps/OldaleTown/scripts.pory"
	goto endoffollowrivaloldale
	goto OldaleRivalDontLeaveOldaleto103_13

OldaleRivalDontLeaveOldaleto103_17:
# 1350 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1351 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_23
OldaleRivalDontLeaveOldaleto103_22:
# 1352 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalDontLeaveOldaleto103_29
OldaleRivalDontLeaveOldaleto103_28:
# 1353 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1354 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1355 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1356 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1357 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleTown_GotoTherapy_Movement_3
# 1358 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 1359 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto103_16

OldaleRivalDontLeaveOldaleto103_20:
# 1330 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_19

OldaleRivalDontLeaveOldaleto103_23:
# 1351 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_22

OldaleRivalDontLeaveOldaleto103_26:
# 1331 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_25

OldaleRivalDontLeaveOldaleto103_29:
# 1352 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalDontLeaveOldaleto103_28

OldaleRivalDontLeaveOldaleto103_32:
# 1341 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalfappearsinOldale
	goto OldaleRivalDontLeaveOldaleto103_31

OldaleRivalDontLeaveOldaleto103_35:
# 1342 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalmappearsinOldale
	goto OldaleRivalDontLeaveOldaleto103_34


OldaleRivalnoleavetoWhouse::
# 1366 "data/maps/OldaleTown/scripts.pory"
	lock
# 1367 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1368 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 1369 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1370 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_METRONOME
# 1371 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1372 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_2
OldaleRivalnoleavetoWhouse_1:
# 1373 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_5
OldaleRivalnoleavetoWhouse_4:
# 1374 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1375 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_0
# 1376 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1377 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_8
OldaleRivalnoleavetoWhouse_7:
# 1378 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_11
OldaleRivalnoleavetoWhouse_10:
# 1379 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1380 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_1
# 1381 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 1382 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalnoleavetoWhouse_14
OldaleRivalnoleavetoWhouse_13:
# 1400 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalnoleavetoWhouse_17
OldaleRivalnoleavetoWhouse_16:
# 1414 "data/maps/OldaleTown/scripts.pory"
endoffollowrivaloldale:
# 1415 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalnoleavetoWhouse_2:
# 1372 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_SAD
	goto OldaleRivalnoleavetoWhouse_1

OldaleRivalnoleavetoWhouse_5:
# 1373 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_SAD
	goto OldaleRivalnoleavetoWhouse_4

OldaleRivalnoleavetoWhouse_8:
# 1377 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_7

OldaleRivalnoleavetoWhouse_11:
# 1378 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_10

OldaleRivalnoleavetoWhouse_14:
# 1383 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1384 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_20
OldaleRivalnoleavetoWhouse_19:
# 1385 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_26
OldaleRivalnoleavetoWhouse_25:
# 1386 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1387 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_2
# 1388 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1389 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 1390 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 1391 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 1392 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1393 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_32
OldaleRivalnoleavetoWhouse_31:
# 1394 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_35
OldaleRivalnoleavetoWhouse_34:
# 1395 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1396 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 1397 "data/maps/OldaleTown/scripts.pory"
	goto endoffollowrivaloldale
	goto OldaleRivalnoleavetoWhouse_13

OldaleRivalnoleavetoWhouse_17:
# 1402 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1403 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalnoleavetoWhouse_23
OldaleRivalnoleavetoWhouse_22:
# 1404 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalnoleavetoWhouse_29
OldaleRivalnoleavetoWhouse_28:
# 1405 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_RIVAL ]
# 1406 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 1407 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1408 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 1409 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalnoleavetoWhouse_Movement_0
# 1410 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1411 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalnoleavetoWhouse_16

OldaleRivalnoleavetoWhouse_20:
# 1384 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_19

OldaleRivalnoleavetoWhouse_23:
# 1403 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_FPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_22

OldaleRivalnoleavetoWhouse_26:
# 1385 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_25

OldaleRivalnoleavetoWhouse_29:
# 1404 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
	goto OldaleRivalnoleavetoWhouse_28

OldaleRivalnoleavetoWhouse_32:
# 1393 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalfappearsinOldale
	goto OldaleRivalnoleavetoWhouse_31

OldaleRivalnoleavetoWhouse_35:
# 1394 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalmappearsinOldale
	goto OldaleRivalnoleavetoWhouse_34


OldaleWarehouseRebelGuard::
# 1425 "data/maps/OldaleTown/scripts.pory"
	lock
# 1426 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1427 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 1428 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleVendingMachine_Movement_0
# 1429 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1430 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 1432 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1433 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 1435 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 1438 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 1441 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 1443 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 1444 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1445 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1446 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 1447 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1448 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 1449 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1450 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 1451 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_2
# 1452 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1453 "data/maps/OldaleTown/scripts.pory"
	removeobject 18
# 1454 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 1455 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 1456 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1457 "data/maps/OldaleTown/scripts.pory"
	fadenewbgm 1
# 1458 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1460 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 1434 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 1436 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 1469 "data/maps/OldaleTown/scripts.pory"
	lock
# 1470 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 1471 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleDevonGrunts_Movement_7
# 1472 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1474 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 1476 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 1480 "data/maps/OldaleTown/scripts.pory"
	lock
# 1481 "data/maps/OldaleTown/scripts.pory"
	applymovement 26, ConArtist103Rewards_Movement_0
# 1482 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 1483 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 1489 "data/maps/OldaleTown/scripts.pory"
	lock
# 1490 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1491 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1492 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1493 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1494 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleOutsideParkNPC_Movement_0
# 1495 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1496 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach0_Movement_0
# 1497 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1498 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1499 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 1503 "data/maps/OldaleTown/scripts.pory"
	lock
# 1504 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1505 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1506 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1507 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1508 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1509 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach1_Movement_0
# 1510 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1511 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleOutsideParkNPC_Movement_0
# 1512 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 1516 "data/maps/OldaleTown/scripts.pory"
	lock
# 1517 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1518 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1519 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1520 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1521 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1522 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach2_Movement_0
# 1523 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1524 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleOutsideParkNPC_Movement_0
# 1525 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 1530 "data/maps/OldaleTown/scripts.pory"
	lock
# 1531 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1532 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 1533 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 1535 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1536 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1537 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1538 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 1539 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1540 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 1541 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1542 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_3
# 1543 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1544 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_4
# 1545 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1546 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1547 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1548 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1549 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1550 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1551 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 1552 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebel_Movement_0
# 1553 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1554 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1555 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1556 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1557 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1558 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1559 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1560 "data/maps/OldaleTown/scripts.pory"
	removeobject 24
# 1561 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1562 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1563 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 1569 "data/maps/OldaleTown/scripts.pory"
	lock
# 1570 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1571 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1572 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarBehind_Movement_0
# 1573 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1574 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1575 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 1577 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1578 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1579 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1580 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 1581 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1582 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1583 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 1584 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1585 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 1586 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1587 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach2_Movement_0
# 1588 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1589 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1590 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarBehind_Movement_1
# 1591 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1592 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1593 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1594 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1595 "data/maps/OldaleTown/scripts.pory"
	removeobject 24
# 1596 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1597 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1598 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaCall1::
# 1605 "data/maps/OldaleTown/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_gt SamanthaCall1_1
# 1618 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaCall1_1:
# 1606 "data/maps/OldaleTown/scripts.pory"
	lock
# 1607 "data/maps/OldaleTown/scripts.pory"
	playse SE_POKENAV_CALL
# 1608 "data/maps/OldaleTown/scripts.pory"
	msgbox BalsamCallAfterWarehouse_Text_0
# 1609 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1610 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaCall1_Text_0
# 1614 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 1615 "data/maps/OldaleTown/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 1616 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaDontgotoDevonCenter::
# 1625 "data/maps/OldaleTown/scripts.pory"
	lock
# 1626 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoDevonCenter_2
# 1638 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoDevonCenter_1:
# 1640 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 1641 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleTown_GotoTherapy_Movement_3
# 1642 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1643 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoDevonCenter_2:
# 1629 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1630 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1631 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1632 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_0
# 1633 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_1
	goto SamanthaDontgotoDevonCenter_1


SamanthaDontgotoDLC::
# 1647 "data/maps/OldaleTown/scripts.pory"
	lock
# 1648 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoDLC_2
# 1660 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoDLC_1:
# 1662 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 1663 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1664 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoDLC_2:
# 1651 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1652 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1653 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1654 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_0
# 1655 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_1
	goto SamanthaDontgotoDLC_1


SamanthaDontgoto102::
# 1667 "data/maps/OldaleTown/scripts.pory"
	lock
# 1668 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgoto102_2
# 1682 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgoto102_1:
# 1684 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgoto102_Movement_0
# 1685 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgoto102_Movement_0
# 1686 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1687 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgoto102_2:
# 1671 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1672 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1673 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1674 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_0
# 1676 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_1
	goto SamanthaDontgoto102_1


SamanthaDontgoto103::
# 1691 "data/maps/OldaleTown/scripts.pory"
	lock
# 1692 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgoto103_2
# 1705 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgoto103_1:
# 1707 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_3
# 1708 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgoto103_Movement_0
# 1709 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1710 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgoto103_2:
# 1694 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1695 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1696 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1697 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_0
# 1699 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_1
	goto SamanthaDontgoto103_1


SamanthaDontgotoWarehouse::
# 1714 "data/maps/OldaleTown/scripts.pory"
	lock
# 1715 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoWarehouse_2
# 1736 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDevonCenter_Text_2
SamanthaDontgotoWarehouse_1:
# 1738 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalnoleavetoWhouse_Movement_0
# 1739 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1740 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1741 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1742 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoWarehouse_2:
# 1717 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDevonCenter_Movement_0
# 1718 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1719 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1720 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_0
# 1722 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_lt SamanthaDontgotoWarehouse_6
# 1728 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_2
SamanthaDontgotoWarehouse_5:
# 1730 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1731 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1732 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_3
	goto SamanthaDontgotoWarehouse_1

SamanthaDontgotoWarehouse_6:
# 1724 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_1
	goto SamanthaDontgotoWarehouse_5


SamanthaGetSnacksCutscene::
# 1751 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaGetSnacksCutscene_1
# 1793 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaGetSnacksCutscene_1:
# 1753 "data/maps/OldaleTown/scripts.pory"
	lock
# 1754 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1755 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_0
# 1756 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_0
# 1757 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaGetSnacksCutscene_Movement_1
# 1758 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_2
# 1759 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1760 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_1
# 1761 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1762 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1763 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1764 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_2
# 1765 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1766 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1767 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1768 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1769 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1770 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1771 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_3
# 1772 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1773 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1774 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1775 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1776 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1777 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1778 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleDevonGrunts_Movement_3
# 1779 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1780 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1781 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1783 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1784 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1785 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1786 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_4
# 1788 "data/maps/OldaleTown/scripts.pory"
	setflag Samanthagotsnacks
# 1790 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaShake::
# 1798 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1799 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 1800 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 1801 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 1802 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 1803 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


GiveSafemonParty1::
# 1808 "data/maps/OldaleTown/scripts.pory"
	callnative ZeroPlayerPartyMons
# 1809 "data/maps/OldaleTown/scripts.pory"
	msgbox GiveSafemonParty1_Text_0
# 1810 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, GiveSafemonParty1_Text_1, GiveSafemonParty1_Text_2, GiveSafemonParty1_Text_3, GiveSafemonParty1_Text_4, GiveSafemonParty1_Text_5, GiveSafemonParty1_Text_6
# 1811 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GiveSafemonParty1_2
GiveSafemonParty1_1:
# 1819 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GiveSafemonParty1_5
GiveSafemonParty1_4:
# 1828 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GiveSafemonParty1_8
GiveSafemonParty1_7:
# 1837 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq GiveSafemonParty1_11
GiveSafemonParty1_10:
# 1846 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq GiveSafemonParty1_14
GiveSafemonParty1_13:
# 1855 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq GiveSafemonParty1_17
GiveSafemonParty1_16:
# 1864 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

GiveSafemonParty1_2:
# 1812 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_BULBASYNTH, 7, ITEM_REMEDY
# 1813 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_SMOTHQUIL, 7, ITEM_HEAL_POWDER
# 1814 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_WARABBIT, 7, ITEM_FULL_HEAL
# 1815 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_PIKACHU_SAFE, 7, ITEM_AERODACTYLITE
# 1816 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_MIMIYURUI, 7, ITEM_SUPERB_REMEDY
# 1817 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_NINKABURI, 7, ITEM_SHALOUR_SABLE
	goto GiveSafemonParty1_1

GiveSafemonParty1_5:
# 1820 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_SHIITAKO, 7, ITEM_REMEDY
# 1821 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_POOCHAIN, 7, ITEM_HEAL_POWDER
# 1822 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_GEOSLUG, 7, ITEM_FULL_HEAL
# 1823 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_FOOMING, 7, ITEM_AERODACTYLITE
# 1824 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_ROTOM_MONITOR, 7, ITEM_SUPERB_REMEDY
# 1825 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_MANCHINE, 7, ITEM_SHALOUR_SABLE
	goto GiveSafemonParty1_4

GiveSafemonParty1_8:
# 1829 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_VERDOOM, 7, ITEM_REMEDY
# 1830 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_LOADTAD, 7, ITEM_HEAL_POWDER
# 1831 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_HELIPIP, 7, ITEM_FULL_HEAL
# 1832 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_CHEERORB, 7, ITEM_AERODACTYLITE
# 1833 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_MUDDER, 7, ITEM_SUPERB_REMEDY
# 1834 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_TUMBELA, 7, ITEM_SHALOUR_SABLE
	goto GiveSafemonParty1_7

GiveSafemonParty1_11:
# 1838 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_VERIWOODO, 7, ITEM_REMEDY
# 1839 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_WARTZ, 7, ITEM_HEAL_POWDER
# 1840 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_GUMMIN, 7, ITEM_FULL_HEAL
# 1841 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_KAMOKEN, 7, ITEM_AERODACTYLITE
# 1842 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_GACHAPOD, 7, ITEM_SUPERB_REMEDY
# 1843 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_TAMARAKKU, 7, ITEM_SHALOUR_SABLE
	goto GiveSafemonParty1_10

GiveSafemonParty1_14:
# 1847 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_TRASHEAL, 7, ITEM_REMEDY
# 1848 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_DELIBIN, 7, ITEM_SHALOUR_SABLE
# 1849 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_ROLLOON, 7, ITEM_HEAL_POWDER
# 1850 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_NIDORAN_I, 7, ITEM_FULL_HEAL
# 1851 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_DOUNO, 7, ITEM_AERODACTYLITE
# 1852 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_KANGASKID, 7, ITEM_SUPERB_REMEDY
	goto GiveSafemonParty1_13

GiveSafemonParty1_17:
# 1856 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_BULBASYNTH, 10, ITEM_REMEDY
# 1857 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_PIKACHU_SAFE, 10, ITEM_SHALOUR_SABLE
# 1858 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_SMOTHQUIL, 10, ITEM_HEAL_POWDER
# 1859 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_WARABBIT, 10, ITEM_FULL_HEAL
# 1860 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_MANCHINE, 10, ITEM_AERODACTYLITE
# 1861 "data/maps/OldaleTown/scripts.pory"
	givemon SPECIES_LOADTAD, 10, ITEM_SUPERB_REMEDY
	goto GiveSafemonParty1_16


# 146 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 146 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 252 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 252 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 502 "data/maps/OldaleTown/scripts.pory"
OldaleOutsideParkNPC_Movement_0:
# 502 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 553 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 553 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 554 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 554 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 554 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 554 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 554 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 554 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 554 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 560 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 560 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 560 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 560 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 560 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 560 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 560 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 563 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_3:
# 563 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 577 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 577 "data/maps/OldaleTown/scripts.pory"
	emote_x
	step_end

# 601 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 601 "data/maps/OldaleTown/scripts.pory"
	face_left
# 601 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 614 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 614 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 614 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 615 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 615 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 665 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 665 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 705 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_5:
# 705 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

# 743 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_6:
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 865 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 865 "data/maps/OldaleTown/scripts.pory"
	face_player
# 865 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 881 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 881 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 881 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 886 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 886 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 886 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 955 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_3:
# 955 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 957 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_4:
# 957 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
	step_end

# 976 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_5:
# 976 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_down
	step_end

# 986 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_6:
# 986 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 986 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 1015 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_7:
# 1015 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1049 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_8:
# 1049 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1049 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1060 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_9:
# 1060 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 1060 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1171 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_0:
# 1171 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1172 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_1:
# 1172 "data/maps/OldaleTown/scripts.pory"
	emote_question_mark
# 1172 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 1214 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_2:
# 1214 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 1409 "data/maps/OldaleTown/scripts.pory"
OldaleRivalnoleavetoWhouse_Movement_0:
# 1409 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 1496 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 1496 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 1496 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1509 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 1509 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 1522 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 1522 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 1552 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 1552 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1552 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1552 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1552 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1552 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1552 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1552 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1552 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1572 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 1572 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 1572 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1590 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
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
# 1590 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1629 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDevonCenter_Movement_0:
# 1629 "data/maps/OldaleTown/scripts.pory"
	face_player
# 1629 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 1684 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgoto102_Movement_0:
# 1684 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 1708 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgoto103_Movement_0:
# 1708 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 1708 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 1755 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_0:
# 1755 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 1755 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 1757 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_1:
# 1757 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1757 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1758 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_2:
# 1758 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1758 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1758 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1758 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1758 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1783 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_3:
# 1783 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1783 "data/maps/OldaleTown/scripts.pory"
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
	.string "Since you're feeling adventurous, why\n"
	.string "don't you go visit your other grandpa\l"
	.string "at {COLOR GREEN}Petalburg City{COLOR DARK_GRAY}?\p"
	.string "A change of scenery will do you good.\n"
	.string "It's very close, but give me a call if you\l"
	.string "get lost.$"

BalsamCallAfterWarehouse_Text_2:
# 84 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, and we still need help with finding\n"
	.string "that {COLOR RED}Voltorb Shard{COLOR DARK_GRAY} my Aide asked you\l"
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
# 154 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 157 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 159 "data/maps/OldaleTown/scripts.pory"
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
# 165 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 165 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 172 "data/maps/OldaleTown/scripts.pory"
	.string "A smart choice! I knew you had an eye\n"
	.string "for good deals - here you go!$"

ConArtist103Rewards_Text_6:
# 175 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Multiplying Egg!$"

ConArtist103Rewards_Text_7:
# 178 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sure you won't be disappointed.\n"
	.string "Especially if you continue your\l"
	.string "patronage at my store in {COLOR GREEN}Petalburg{COLOR DARK_GRAY}!\p"
	.string "I'll let you know when I set up there.\n"
	.string "And to that end...$"

ConArtist103Rewards_Text_8:
# 183 "data/maps/OldaleTown/scripts.pory"
	.string "All set. Pleasure doing business with\n"
	.string "you, and have an EGGcelent day!$"

ConArtist103Rewards_Text_9:
# 192 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to {COLOR GREEN}Petalburg{COLOR DARK_GRAY} soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_10:
# 200 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in that egg that\n"
	.string "multiplies itself?$"

ConArtist103Rewards_Text_11:
# 206 "data/maps/OldaleTown/scripts.pory"
	.string "Thank you so much for your help and\n"
	.string "patronage. See you at {COLOR GREEN}Petalburg{COLOR DARK_GRAY}!$"

OldaleVendingMachine_Text_0:
# 216 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 218 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 175¥$"

OldaleVendingMachine_Text_2:
# 218 "data/maps/OldaleTown/scripts.pory"
	.string "Tea - 100¥$"

OldaleVendingMachine_Text_3:
# 218 "data/maps/OldaleTown/scripts.pory"
	.string "Lava Cookie - 200¥$"

OldaleVendingMachine_Text_4:
# 218 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 237 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 246 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 255 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 257 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 264 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 270 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 291 "data/maps/OldaleTown/scripts.pory"
	.string "A Tea dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 300 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Tea can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 309 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Tea can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 318 "data/maps/OldaleTown/scripts.pory"
	.string "The Tea can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 345 "data/maps/OldaleTown/scripts.pory"
	.string "A Lava Cookie dropped on the machine's\n"
	.string "tray.$"

OldaleVendingMachine_Text_16:
# 354 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Lava Cookie can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 363 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Lava\n"
	.string "Cookie enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 372 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Lava Cookie just stays on\n"
	.string "the verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 403 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 409 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 415 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

Oldale102Sign_Text_0:
# 422 "data/maps/OldaleTown/scripts.pory"
	.string "West - Road 002.$"

OldalePeekingOldman_Text_0:
# 430 "data/maps/OldaleTown/scripts.pory"
	.string "Those Rebel hoodlums... just when we\n"
	.string "start to get back on our feet, they\l"
	.string "come to ruin things!\p"
	.string "Murkrows, the lot of them!$"

OldalePeekingOldman_Text_1:
# 435 "data/maps/OldaleTown/scripts.pory"
	.string "Those hoodlums left town as if chased\n"
	.string "by a Mightyena. Good riddance I say!$"

OldalePeekingOldman_Text_2:
# 439 "data/maps/OldaleTown/scripts.pory"
	.string "Finally, Devon is manning the warehouse\n"
	.string "again.\p"
	.string "With that, Oldale gets money and\n"
	.string "safety. It's as much as one can wish for\l"
	.string "these days.$"

OldaleOutsideHikerGuy_Text_0:
# 451 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in {COLOR BLUE}New Rustboro{COLOR DARK_GRAY} one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 461 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}New Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 466 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "We will be much happier in the big city,\n"
	.string "I'm sure of it!$"

OldaleOutsideParkNPC_Text_0:
# 480 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}\n"
	.string "who get crazy rich by finding treasure\l"
	.string "with their {COLOR BLUE}Object Spotters{COLOR DARK_GRAY}.\p"
	.string "Haven't managed to get my hands on one,\n"
	.string "or I wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 485 "data/maps/OldaleTown/scripts.pory"
	.string "So... I saw you digging through that\n"
	.string "trash can.\p"
	.string "If you need pokeyen, you should get an\n"
	.string "{COLOR BLUE}Object Spotter{COLOR DARK_GRAY} and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideParkNPC_Text_2:
# 492 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Why don't you try it right here? Who\n"
	.string "knows, you might find something!$"

OldaleOutsideParkNPC_Text_3:
# 498 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Hopefully something better than what\n"
	.string "you found in that trash can... ha-ha-ha!$"

OldaleOutsideOldGuy_Text_0:
# 516 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleOutsideOldWoman_Text_0:
# 526 "data/maps/OldaleTown/scripts.pory"
	.string "Have you ever noticed that rain has a\n"
	.string "greenish tint recently...?\p"
	.string "It's caused by the polluted sea.\p"
	.string "The Weather Institute says it's not\n"
	.string "harmful on the short-term.\p"
	.string "But I worry about the long term...$"

DLCTeacherOutside_Text_0:
# 536 "data/maps/OldaleTown/scripts.pory"
	.string "I'm really dying for a smoke here...\p"
	.string "If only those loser {COLOR RED}Rebels{COLOR DARK_GRAY} left the\n"
	.string "Warehouse, Devon Co. would start\l"
	.string "sending supplies again.$"

DLCTeacherOutside_Text_1:
# 542 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Ah, sorry for blowing the smoke on your\n"
	.string "face. Haven't smoked in days...\p"
	.string "With the {COLOR RED}Rebels{COLOR DARK_GRAY} gone, the mart is\n"
	.string "getting stocked again.\p"
	.string "Was about time! {COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_GotoTherapy_Text_0:
# 556 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... the\n"
	.string "therapy session should be about to\l"
	.string "start.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 578 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 583 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 592 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 597 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 608 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 611 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 619 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know {COLOR BLUE}Devon Co.{COLOR DARK_GRAY}, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 624 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 629 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and our tutor!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 635 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 649 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave\l"
	.string "and you do what's right... right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 656 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the {COLOR RED}Rebels{COLOR DARK_GRAY}, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 661 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 668 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 681 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 686 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 693 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 699 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you...$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 707 "data/maps/OldaleTown/scripts.pory"
	.string "To a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 712 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 717 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 724 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 731 "data/maps/OldaleTown/scripts.pory"
	.string "W-wait, that's {COLOR RED}Rebel{COLOR DARK_GRAY} talk...$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 738 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, come to {COLOR GREEN}Route 103{COLOR DARK_GRAY}! I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 756 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 761 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... he told us we'd\n"
	.string "need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 766 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 771 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_28:
# 776 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in {COLOR GREEN}Route 103{COLOR DARK_GRAY}. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_29:
# 789 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 819 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 825 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 830 "data/maps/OldaleTown/scripts.pory"
	.string "He'll be waiting there a while, and our\n"
	.string "tutor will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 840 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 845 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

OldaleDevonGrunts_Text_0:
# 866 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but we can't let anyone\n"
	.string "through until the {COLOR RED}Rebels{COLOR DARK_GRAY} occupying\l"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY} are dealt with.$"

OldaleDevonGrunts_Text_1:
# 870 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to {COLOR BLUE}New Rustboro{COLOR DARK_GRAY}... but don't\l"
	.string "worry!\p"
	.string "Reinforcements from {COLOR BLUE}Devon HQ{COLOR DARK_GRAY} are\n"
	.string "currently on the way.$"

OldaleDevonGrunts_Text_2:
# 873 "data/maps/OldaleTown/scripts.pory"
	.string "Yup! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_3:
# 878 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Devon Ball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_4:
# 882 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devonav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_5:
# 887 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 892 "data/maps/OldaleTown/scripts.pory"
	.string "Ahem. If you've come to inquire about\n"
	.string "access to Road 002... I'm afraid we can't\l"
	.string "let anyone through until the {COLOR RED}Warehouse\l"
	.string "situation{COLOR DARK_GRAY} is under control.$"

OldaleDevonGrunts_Text_7:
# 899 "data/maps/OldaleTown/scripts.pory"
	.string "Hello there, civilian! We have great\n"
	.string "news!\p"
	.string "Those pesky {COLOR RED}Rebels{COLOR DARK_GRAY} have finally left\n"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY}. The town is safe\l"
	.string "again!$"

OldaleDevonGrunts_Text_8:
# 903 "data/maps/OldaleTown/scripts.pory"
	.string "They must have caught wind of\n"
	.string "reinforcements coming, and didn't feel\l"
	.string "like spending the rest of their lives on\l"
	.string "{COLOR RED}Dewford Prison{COLOR DARK_GRAY}.$"

OldaleDevonGrunts_Text_9:
# 907 "data/maps/OldaleTown/scripts.pory"
	.string "Most likely! So... I suppose you want to\n"
	.string "go through {COLOR GREEN}Road 002{COLOR DARK_GRAY}?$"

OldaleDevonGrunts_Text_10:
# 912 "data/maps/OldaleTown/scripts.pory"
	.string "I see... well, I'm sorry to say...\p"
	.string "In the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}, when it's not one\n"
	.string "thing, it's the other, you know?$"

OldaleDevonGrunts_Text_11:
# 915 "data/maps/OldaleTown/scripts.pory"
	.string "We have one of our scientists searching\n"
	.string "{COLOR GREEN}Road 002{COLOR DARK_GRAY} for a very dangerous Pokémon.\p"
	.string "It's the next species on the list of\n"
	.string "Pokémon to be {COLOR BLUE}safened{COLOR DARK_GRAY}, and we can't let\l"
	.string "his work be disturbed.$"

OldaleDevonGrunts_Text_12:
# 920 "data/maps/OldaleTown/scripts.pory"
	.string "I'm afraid so. But don't worry - these\n"
	.string "tasks usually take from 3 to 4 months.\p"
	.string "And what's a little waiting if it means\n"
	.string "Hoenn becomes safer?$"

OldaleDevonGrunts_Text_13:
# 926 "data/maps/OldaleTown/scripts.pory"
	.string "Grand, then please enjoy this shith-... I\n"
	.string "mean, this cozy, cute sleepy town!$"

OldaleDevonGrunts_Text_14:
# 944 "data/maps/OldaleTown/scripts.pory"
	.string "Good day, dear civilians! I'm sorry to\n"
	.string "say, Road 002 is still off lim-...$"

OldaleDevonGrunts_Text_15:
# 952 "data/maps/OldaleTown/scripts.pory"
	.string "Save your breath, filthy invader - or\n"
	.string "your next words will be your last!$"

OldaleDevonGrunts_Text_16:
# 956 "data/maps/OldaleTown/scripts.pory"
	.string "Jerry, I believe we have a loonie in our\n"
	.string "hands.$"

OldaleDevonGrunts_Text_17:
# 958 "data/maps/OldaleTown/scripts.pory"
	.string "Those DLC therapies aren't doing much\n"
	.string "good...$"

OldaleDevonGrunts_Text_18:
# 965 "data/maps/OldaleTown/scripts.pory"
	.string "They're mocking us, {PLAYER}! What\n"
	.string "are you waiting for!? Go, YURE!$"

OldaleDevonGrunts_Text_19:
# 984 "data/maps/OldaleTown/scripts.pory"
	.string "MIMIIII!$"

OldaleDevonGrunts_Text_20:
# 992 "data/maps/OldaleTown/scripts.pory"
	.string "Well... just because you've beaten us,\n"
	.string "doesn't mean we need to mov-...$"

OldaleDevonGrunts_Text_21:
# 1012 "data/maps/OldaleTown/scripts.pory"
	.string "A-alright Karen, protocol calls for\n"
	.string "retreat!$"

OldaleDevonGrunts_Text_22:
# 1037 "data/maps/OldaleTown/scripts.pory"
	.string "Great work, {PLAYER} - we're a killer\n"
	.string "duo as always!\p"
	.string "But don't rest on your laurels just yet.\n"
	.string "It's time to press on the advantage!$"

OldaleDevonGrunts_Text_23:
# 1044 "data/maps/OldaleTown/scripts.pory"
	.string "CHAAAARGE!$"

OldaleRival_Text_0:
# 1094 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... as long as we stand. No, as\n"
	.string "long as we BREATHE.$"

OldaleRival_Text_1:
# 1099 "data/maps/OldaleTown/scripts.pory"
	.string "The battle for Hoenn is not over!!$"

OldaleRival_Text_2:
# 1104 "data/maps/OldaleTown/scripts.pory"
	.string "Think about what your parents would\n"
	.string "say if you gave up now...$"

OldaleRival_Text_3:
# 1109 "data/maps/OldaleTown/scripts.pory"
	.string "Let's make them proud instead. Let's\n"
	.string "beat those Kantonians once and for all!$"

OldaleRival_Text_4:
# 1113 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... I saw you talking with\n"
	.string "those enemy soldiers just now.$"

OldaleRival_Text_5:
# 1119 "data/maps/OldaleTown/scripts.pory"
	.string "Don't you KNOW by now!? You cannot\n"
	.string "reason with the ENEMY!$"

OldaleRival_Text_6:
# 1121 "data/maps/OldaleTown/scripts.pory"
	.string "You can only {COLOR RED}FIGHT{COLOR DARK_GRAY} it!$"

OldaleRival_Text_7:
# 1126 "data/maps/OldaleTown/scripts.pory"
	.string "But I understand. It was two versus\n"
	.string "one. Don't worry, I am here now.$"

OldaleRival_Text_8:
# 1128 "data/maps/OldaleTown/scripts.pory"
	.string "Let's show those Kantonians they can't\n"
	.string "take our region! LEAD THE WAY,\l"
	.string "{PLAYER}.$"

OldaleRivalfollowchat_Text_0:
# 1159 "data/maps/OldaleTown/scripts.pory"
	.string "Let's go, {PLAYER} - those Kantonians\n"
	.string "are on the {COLOR RED}western exit of Oldale Town!{COLOR DARK_GRAY}$"

OldaleRivalfollowchat_Text_1:
# 1164 "data/maps/OldaleTown/scripts.pory"
	.string "Let's kick their ass all the way to their\n"
	.string "miserable region across the sea!$"

OldaleRivalDontLeaveOldaleto101_Text_0:
# 1178 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!?$"

OldaleRivalDontLeaveOldaleto101_Text_1:
# 1183 "data/maps/OldaleTown/scripts.pory"
	.string "We have already secured the southern\n"
	.string "front, remember!? Thanks to your\l"
	.string "glorious victory!$"

OldaleRivalDontLeaveOldaleto101_Text_2:
# 1186 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the next battle?$"

OldaleRivalDontLeaveOldaleto101_Text_3:
# 1190 "data/maps/OldaleTown/scripts.pory"
	.string "Very well... I'll be keeping an eye on\n"
	.string "them. Don't take long!$"

OldaleRivalDontLeaveOldaleto101_Text_4:
# 1211 "data/maps/OldaleTown/scripts.pory"
	.string "Let's not delay then. I'm as ready as\n"
	.string "I'll ever be!$"

OldaleWareHouseSign_Text_0:
# 1225 "data/maps/OldaleTown/scripts.pory"
	.string "East - Oldale Warehouse.$"

OldaleMotorBike_Text_0:
# 1231 "data/maps/OldaleTown/scripts.pory"
	.string "A motorbike. A decal on its die reads\n"
	.string "'Rebel 4 Life'.$"

OldaleCar_Text_0:
# 1237 "data/maps/OldaleTown/scripts.pory"
	.string "It's a Devon Roader. It's got\n"
	.string "footprints all over the ceiling.$"

Oldale4x4_Text_0:
# 1243 "data/maps/OldaleTown/scripts.pory"
	.string "It's a Devon Hauler. Seems to have been\n"
	.string "parked for some time.$"

OldaleBike_Text_0:
# 1250 "data/maps/OldaleTown/scripts.pory"
	.string "The bike has tons of locks on the\n"
	.string "wheels, to discourage theft.$"

OldalePlant_Text_0:
# 1257 "data/maps/OldaleTown/scripts.pory"
	.string "The plants are on the same state that\n"
	.string "the trees around...\p"
	.string "On their way to wither.$"

OldaleDLCWindow_Text_0:
# 1265 "data/maps/OldaleTown/scripts.pory"
	.string "You can see the DLC's library through\n"
	.string "the window.\p"
	.string "The library's clerk is browsing an...\n"
	.string "“explicit” website.$"

OldaleDevonTruck_Text_0:
# 1272 "data/maps/OldaleTown/scripts.pory"
	.string "Dirt has accumulated on the Devon\n"
	.string "truck. Seems to have been parked for\l"
	.string "some time.$"

OldaleDevonTruckDamaged_Text_0:
# 1278 "data/maps/OldaleTown/scripts.pory"
	.string "There's many hit marks on the truck.\n"
	.string "Someone tried to open it, to no avail.$"

OldaleRivalDontLeaveOldaleto103_Text_0:
# 1321 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? The\n"
	.string "enemy is not this way!$"

OldaleRivalDontLeaveOldaleto103_Text_1:
# 1326 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the battle?$"

OldaleRivalnoleavetoWhouse_Text_0:
# 1375 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? This\n"
	.string "way is to the {COLOR GREEN}warehouse{COLOR DARK_GRAY}!$"

OldaleRivalnoleavetoWhouse_Text_1:
# 1380 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you want to resupply there\n"
	.string "before the battle?$"

OldaleRivalnoleavetoWhouse_Text_2:
# 1387 "data/maps/OldaleTown/scripts.pory"
	.string "Aah, smart thinking! I'll keep an eye on\n"
	.string "those Kantonians. Don't take long!$"

OldaleWarehouseRebelGuard_Text_0:
# 1427 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 1434 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Calvin!$"

OldaleWarehouseRebelGuard_Text_2:
# 1436 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Calvin!$"

OldaleWarehouseRebelGuard_Text_3:
# 1438 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "next to you? He's so pathetic!\p"
	.string "I'll teach you that not every Rebel is\n"
	.string "like him!$"

OldaleWarehouseRebelGuard_Text_4:
# 1443 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 1446 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 1474 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 1482 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only clanker Safemon in\n"
	.string "this patch! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 1493 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 1533 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 1546 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 1548 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 1575 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

SamanthaCall1_Text_0:
# 1610 "data/maps/OldaleTown/scripts.pory"
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
# 1632 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... I-I know they sell\n"
	.string "boxed lunches in here, but...$"

SamanthaDontgotoDevonCenter_Text_1:
# 1633 "data/maps/OldaleTown/scripts.pory"
	.string "I-I don't have enough money for\n"
	.string "those...\p"
	.string "Can... can we go to the vending machine\n"
	.string "instead?$"

SamanthaDontgotoDevonCenter_Text_2:
# 1638 "data/maps/OldaleTown/scripts.pory"
	.string "W-we can go back to the {COLOR GREEN}Mausoleum{COLOR DARK_GRAY} now...\n"
	.string "I-I don't want to take more of your\l"
	.string "time...!$"

SamanthaDontgotoDLC_Text_0:
# 1654 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... is this the Devon\n"
	.string "Learning Center?$"

SamanthaDontgotoDLC_Text_1:
# 1655 "data/maps/OldaleTown/scripts.pory"
	.string "It seems like they are holding a lesson\n"
	.string "now...\p"
	.string "I have not signed up for it, so I would\n"
	.string "not like to interrupt.$"

SamanthaDontgoto102_Text_0:
# 1674 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Road 002, right?$"

SamanthaDontgoto102_Text_1:
# 1676 "data/maps/OldaleTown/scripts.pory"
	.string "W-we don't need to go that far...\p"
	.string "I'm sure there's another vending\n"
	.string "machine in {COLOR GREEN}Petalburg{COLOR DARK_GRAY}, b-but... the one\l"
	.string "here in {COLOR GREEN}Oldale{COLOR DARK_GRAY} will do!$"

SamanthaDontgoto103_Text_0:
# 1697 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Route 103, right?$"

SamanthaDontgoto103_Text_1:
# 1699 "data/maps/OldaleTown/scripts.pory"
	.string "B-but {COLOR GREEN}Slateport{COLOR DARK_GRAY} is very far... t-the\n"
	.string "snacks here in {COLOR GREEN}Oldale{COLOR DARK_GRAY} will do!$"

SamanthaDontgotoWarehouse_Text_0:
# 1720 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... Oldale's Warehouse is\n"
	.string "over there, right?$"

SamanthaDontgotoWarehouse_Text_1:
# 1724 "data/maps/OldaleTown/scripts.pory"
	.string "I-I dont' think they sell any food over\n"
	.string "there...$"

SamanthaDontgotoWarehouse_Text_2:
# 1728 "data/maps/OldaleTown/scripts.pory"
	.string "I-I see some scary {COLOR RED}Rebels{COLOR DARK_GRAY} over there...\n"
	.string "m-maybe we shouldn't get near...$"

SamanthaDontgotoWarehouse_Text_3:
# 1732 "data/maps/OldaleTown/scripts.pory"
	.string "I-I'll just get some snacks from the\n"
	.string "vending machine there, o-okay?$"

SamanthaGetSnacksCutscene_Text_0:
# 1756 "data/maps/OldaleTown/scripts.pory"
	.string "A-ah... here we are, {PLAYER}! Give me\n"
	.string "a moment...$"

SamanthaGetSnacksCutscene_Text_1:
# 1760 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I'll have some of these...$"

SamanthaGetSnacksCutscene_Text_2:
# 1764 "data/maps/OldaleTown/scripts.pory"
	.string "And of these...$"

SamanthaGetSnacksCutscene_Text_3:
# 1771 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, and these too...!$"

SamanthaGetSnacksCutscene_Text_4:
# 1786 "data/maps/OldaleTown/scripts.pory"
	.string "Hehehe... I've got tons. We can go back.\p"
	.string "T-thank you...$"

GiveSafemonParty1_Text_0:
# 1809 "data/maps/OldaleTown/scripts.pory"
	.string "Pick a team$"

GiveSafemonParty1_Text_1:
# 1810 "data/maps/OldaleTown/scripts.pory"
	.string "1st Party$"

GiveSafemonParty1_Text_2:
# 1810 "data/maps/OldaleTown/scripts.pory"
	.string "2nd Party$"

GiveSafemonParty1_Text_3:
# 1810 "data/maps/OldaleTown/scripts.pory"
	.string "3rd Party$"

GiveSafemonParty1_Text_4:
# 1810 "data/maps/OldaleTown/scripts.pory"
	.string "4th Party$"

GiveSafemonParty1_Text_5:
# 1810 "data/maps/OldaleTown/scripts.pory"
	.string "5th Party$"

GiveSafemonParty1_Text_6:
# 1810 "data/maps/OldaleTown/scripts.pory"
	.string "Good Party$"

DevonGruntMOutro::
# 1074 "data/maps/OldaleTown/scripts.pory"
	.string "We haven't lost. We have just delegated\nyour arrest to fellow Devon Guards.$"

DevonGruntFOutro::
# 1077 "data/maps/OldaleTown/scripts.pory"
	.string "... exactly.$"

RebelOldale_Outro::
# 1463 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Calvin was right after\nall...$"
