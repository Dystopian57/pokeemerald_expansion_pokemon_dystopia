# 1 "data/maps/OldaleTown/scripts.pory"


OldaleTown_MapScripts::
# 9 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
# 10 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleWeather
# 11 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GenderedSpriteOldale
# 13 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleWeather
# 14 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GenderedSpriteOldale
	.byte 0


GenderedSpriteOldale::
# 19 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


FountainCoinSparkle::
# 22 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset oldalefountainsparkle, FountainCoinSparkle_2
# 26 "data/maps/OldaleTown/scripts.pory"
	release
FountainCoinSparkle_1:
# 27 "data/maps/OldaleTown/scripts.pory"
	release
	return

FountainCoinSparkle_2:
# 23 "data/maps/OldaleTown/scripts.pory"
	dofieldeffectsparkle 10, 9, 1
# 24 "data/maps/OldaleTown/scripts.pory"
	setflag oldalefountainsparkle
	goto FountainCoinSparkle_1


TimeofDayTest::
# 31 "data/maps/OldaleTown/scripts.pory"
	lock
# 32 "data/maps/OldaleTown/scripts.pory"
	gettimeofday
# 33 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq TimeofDayTest_2
TimeofDayTest_1:
# 37 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq TimeofDayTest_5
TimeofDayTest_4:
# 41 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq TimeofDayTest_8
TimeofDayTest_7:
# 45 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq TimeofDayTest_11
TimeofDayTest_10:
# 48 "data/maps/OldaleTown/scripts.pory"
endoftimeofdaytest:
# 49 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

TimeofDayTest_2:
# 34 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_0
# 35 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_1

TimeofDayTest_5:
# 38 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_1
# 39 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_4

TimeofDayTest_8:
# 42 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_2
# 43 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_7

TimeofDayTest_11:
# 46 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_3
# 47 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_10


OldaleWeather::
# 55 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 58 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 61 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 56 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 59 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 62 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


ConArtist103Rewards::
# 67 "data/maps/OldaleTown/scripts.pory"
	lock
# 68 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 69 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 70 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_2
# 121 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 122 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_14
# 123 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
ConArtist103Rewards_1:
# 125 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 126 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 72 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 73 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 74 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 75 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 76 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 77 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 78 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 82 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 83 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_6
ConArtist103Rewards_5:
# 112 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_8
	goto ConArtist103Rewards_1

ConArtist103Rewards_6:
# 84 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 85 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 86 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 87 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_6, ConArtist103Rewards_Text_7, ConArtist103Rewards_Text_8, ConArtist103Rewards_Text_9
# 88 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_11
ConArtist103Rewards_10:
# 93 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_14
ConArtist103Rewards_13:
# 98 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_17
ConArtist103Rewards_16:
# 106 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_19
	goto ConArtist103Rewards_5

ConArtist103Rewards_8:
# 113 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 114 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 115 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_13
# 117 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_1

ConArtist103Rewards_11:
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 90 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_10

ConArtist103Rewards_14:
# 94 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
# 95 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_13

ConArtist103Rewards_17:
# 99 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_12
# 103 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_16

ConArtist103Rewards_19:
# 107 "data/maps/OldaleTown/scripts.pory"
	goto refusedeggs
	goto ConArtist103Rewards_5


OldaleVendingMachine::
# 131 "data/maps/OldaleTown/scripts.pory"
	lock
# 132 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 133 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 134 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 137 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 190 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 243 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 295 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 298 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 299 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 300 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 138 "data/maps/OldaleTown/scripts.pory"
	checkmoney 50
# 139 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 184 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 191 "data/maps/OldaleTown/scripts.pory"
	checkmoney 70
# 192 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 237 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 140 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 141 "data/maps/OldaleTown/scripts.pory"
	waitse
# 142 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 144 "data/maps/OldaleTown/scripts.pory"
	random 4
# 145 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 146 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 148 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 149 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 150 "data/maps/OldaleTown/scripts.pory"
	waitse
# 151 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 152 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 153 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 154 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 156 "data/maps/OldaleTown/scripts.pory"
	random 20
# 157 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 158 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 160 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 161 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 162 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 163 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 164 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 166 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 167 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 168 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 169 "data/maps/OldaleTown/scripts.pory"
	waitse
# 170 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 172 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 173 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 178 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 244 "data/maps/OldaleTown/scripts.pory"
	checkmoney 80
# 245 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 290 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 193 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 194 "data/maps/OldaleTown/scripts.pory"
	waitse
# 195 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 197 "data/maps/OldaleTown/scripts.pory"
	random 4
# 198 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, sodagotstuck
# 199 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotsoda
# 201 "data/maps/OldaleTown/scripts.pory"
gotsoda:
# 202 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 203 "data/maps/OldaleTown/scripts.pory"
	waitse
# 204 "data/maps/OldaleTown/scripts.pory"
	removemoney 70
# 205 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 206 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 207 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 209 "data/maps/OldaleTown/scripts.pory"
	random 20
# 210 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 211 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrasoda
# 213 "data/maps/OldaleTown/scripts.pory"
gotextrasoda:
# 214 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 215 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 216 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 217 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 219 "data/maps/OldaleTown/scripts.pory"
sodagotstuck:
# 220 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 221 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 222 "data/maps/OldaleTown/scripts.pory"
	waitse
# 223 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 225 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 226 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 231 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 185 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 174 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 175 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 296 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 246 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 247 "data/maps/OldaleTown/scripts.pory"
	waitse
# 248 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 250 "data/maps/OldaleTown/scripts.pory"
	random 4
# 251 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, coffeegotstuck
# 252 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotcoffee
# 254 "data/maps/OldaleTown/scripts.pory"
gotcoffee:
# 255 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 256 "data/maps/OldaleTown/scripts.pory"
	waitse
# 257 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 258 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 259 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 260 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 262 "data/maps/OldaleTown/scripts.pory"
	random 20
# 263 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 264 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextracoffee
# 266 "data/maps/OldaleTown/scripts.pory"
gotextracoffee:
# 267 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 268 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 269 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 270 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 272 "data/maps/OldaleTown/scripts.pory"
coffeegotstuck:
# 273 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 274 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 275 "data/maps/OldaleTown/scripts.pory"
	waitse
# 276 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 278 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 279 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 284 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 238 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 227 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 228 "data/maps/OldaleTown/scripts.pory"
	goto gotsoda
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 179 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 291 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 280 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 281 "data/maps/OldaleTown/scripts.pory"
	goto gotcoffee
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 232 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 285 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 305 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 306 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 307 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 308 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 309 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 310 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 315 "data/maps/OldaleTown/scripts.pory"
	lock
# 316 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 317 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 321 "data/maps/OldaleTown/scripts.pory"
	lock
# 322 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 323 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 327 "data/maps/OldaleTown/scripts.pory"
	lock
# 328 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 329 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale102Sign::
# 334 "data/maps/OldaleTown/scripts.pory"
	lock
# 335 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale102Sign_Text_0
# 336 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalePeekingOldman::
# 340 "data/maps/OldaleTown/scripts.pory"
	lock
# 341 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 342 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_0
# 344 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 348 "data/maps/OldaleTown/scripts.pory"
	lock
# 349 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 350 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 351 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 356 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 361 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 366 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 371 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 353 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 358 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 363 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 368 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 375 "data/maps/OldaleTown/scripts.pory"
	lock
# 376 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 377 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, ConArtist103Rewards_Movement_0
# 379 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_3
OldaleOutsideParkNPC_1:
# 384 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_8
OldaleOutsideParkNPC_6:
# 391 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_13
OldaleOutsideParkNPC_11:
# 397 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_18
OldaleOutsideParkNPC_16:
# 403 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_2:
# 381 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_3:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_2
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_7:
# 386 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_8:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_7
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_12:
# 393 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_2
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_13:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_12
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_17:
# 399 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_3
	goto OldaleOutsideParkNPC_16

OldaleOutsideParkNPC_18:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_17
	goto OldaleOutsideParkNPC_16


OldaleOutsideOldGuy::
# 413 "data/maps/OldaleTown/scripts.pory"
	lock
# 414 "data/maps/OldaleTown/scripts.pory"
	applymovement 12, ConArtist103Rewards_Movement_0
# 415 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 419 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldWoman::
# 423 "data/maps/OldaleTown/scripts.pory"
	lock
# 424 "data/maps/OldaleTown/scripts.pory"
	applymovement 30, ConArtist103Rewards_Movement_0
# 425 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldWoman_Text_0
# 427 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


DLCTeacherOutside::
# 431 "data/maps/OldaleTown/scripts.pory"
	lock
# 432 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 433 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq DLCTeacherOutside_2
DLCTeacherOutside_1:
# 437 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq DLCTeacherOutside_5
DLCTeacherOutside_4:
# 444 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

DLCTeacherOutside_2:
# 434 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_0
	goto DLCTeacherOutside_1

DLCTeacherOutside_5:
# 438 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 439 "data/maps/OldaleTown/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 440 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_1
	goto DLCTeacherOutside_4


OldaleTown_GotoTherapy::
# 448 "data/maps/OldaleTown/scripts.pory"
	lock
# 449 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 450 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 451 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 452 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 453 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 454 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 455 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 456 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 457 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 458 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 459 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 460 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 461 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 466 "data/maps/OldaleTown/scripts.pory"
	lock
# 467 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 468 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 469 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 470 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 472 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 473 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 474 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 475 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 478 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 479 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 480 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 482 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 483 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 488 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 492 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 493 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 494 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 495 "data/maps/OldaleTown/scripts.pory"
	waitse
# 496 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 497 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 499 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 502 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 505 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 506 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 507 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 508 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 509 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 510 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 511 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 513 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 514 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 515 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 516 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 518 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 519 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 520 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 521 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 524 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 525 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 526 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 527 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 530 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 531 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 533 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 537 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 626 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 627 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 628 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 629 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 630 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 632 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 633 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 634 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 635 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 637 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 638 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 639 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 640 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 642 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 643 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 644 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 645 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 647 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 648 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 649 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 650 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 653 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 654 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 655 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 656 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 657 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 658 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 659 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 660 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 662 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 663 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 665 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 17, 0, 0
# 667 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 668 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 669 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 670 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 671 "data/maps/OldaleTown/scripts.pory"
	setflag finishedtherapy
# 672 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 484 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 489 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 500 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 503 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 534 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 538 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 539 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 540 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 541 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 544 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 545 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 546 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 547 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 548 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 550 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 551 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 552 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 553 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 556 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 557 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 558 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 559 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 560 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 562 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 563 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 565 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 569 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 575 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 576 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 577 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 578 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 581 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 582 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 583 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 584 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 585 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 587 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 588 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 589 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 590 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 591 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 593 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 594 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 595 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 596 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 598 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 599 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 600 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 601 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 603 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 604 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 605 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 606 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 607 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 609 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 610 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 611 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 612 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 613 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 614 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 616 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 617 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 618 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 621 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 622 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 566 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 570 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 571 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 572 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 573 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_22


OldaleCamelia::
# 678 "data/maps/OldaleTown/scripts.pory"
	lock
# 680 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 705 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 706 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 707 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 708 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 710 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 711 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 712 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 713 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 716 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 717 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 683 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 684 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, ConArtist103Rewards_Movement_0
# 685 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 686 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 687 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 690 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 691 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 692 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 693 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 695 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 696 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 697 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 698 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


OldaleDevonGrunts::
# 730 "data/maps/OldaleTown/scripts.pory"
	lock
# 731 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 732 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_3
OldaleDevonGrunts_1:
# 745 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_8
OldaleDevonGrunts_6:
# 763 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_12
OldaleDevonGrunts_11:
# 800 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 802 "data/maps/OldaleTown/scripts.pory"
	setflag devonsdontblock102
# 803 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 734 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 735 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 738 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 739 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 741 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 742 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_3:
# 732 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Sharpydefeatedat103, OldaleDevonGrunts_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_7:
# 746 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 747 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
# 750 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 751 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 755 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_2
# 756 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 758 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 759 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_8:
# 745 "data/maps/OldaleTown/scripts.pory"
	goto_if_set Sharpydefeatedat103, OldaleDevonGrunts_7
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_12:
# 764 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 765 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 768 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 769 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_7
# 771 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 772 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 773 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_8
# 774 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 776 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleDevonGrunts_15
OldaleDevonGrunts_14:
# 789 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleDevonGrunts_18
OldaleDevonGrunts_17:
# 792 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 793 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 795 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
	goto OldaleDevonGrunts_11

OldaleDevonGrunts_15:
# 777 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_9
# 779 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 780 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_10
# 784 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 785 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_11
	goto OldaleDevonGrunts_14

OldaleDevonGrunts_18:
# 790 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_12
	goto OldaleDevonGrunts_17


OldaleRival::
# 807 "data/maps/OldaleTown/scripts.pory"
	lock
# 808 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 809 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_0
# 811 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_1
# 812 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_2
# 813 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_3
# 815 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 817 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 818 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_2
OldaleRival_1:
# 821 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_5
OldaleRival_4:
# 823 "data/maps/OldaleTown/scripts.pory"
	removeobject 21
# 824 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
	return

OldaleRival_2:
# 819 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRival_1

OldaleRival_5:
# 822 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_MALE
	goto OldaleRival_4


OldaleRivalfollowchat::
# 828 "data/maps/OldaleTown/scripts.pory"
	lock
# 829 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_0
# 831 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_1
# 832 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleRivalDontLeaveOldaleto101::
# 835 "data/maps/OldaleTown/scripts.pory"
	lock
# 836 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 837 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 838 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_0
# 840 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_1
# 843 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_2
# 844 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 845 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto101_2
OldaleRivalDontLeaveOldaleto101_1:
# 855 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto101_5
OldaleRivalDontLeaveOldaleto101_4:
# 861 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto101_2:
# 846 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 847 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 848 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 849 "data/maps/OldaleTown/scripts.pory"
	addobject 21
# 850 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 851 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 852 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalDontLeaveOldaleto101_1

OldaleRivalDontLeaveOldaleto101_5:
# 857 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 858 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 859 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto101_4


OldaleWareHouseSign::
# 866 "data/maps/OldaleTown/scripts.pory"
	lock
# 867 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWareHouseSign_Text_0
# 868 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleMotorBike::
# 872 "data/maps/OldaleTown/scripts.pory"
	lock
# 873 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleMotorBike_Text_0
# 874 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCar::
# 878 "data/maps/OldaleTown/scripts.pory"
	lock
# 879 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCar_Text_0
# 880 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleBike::
# 884 "data/maps/OldaleTown/scripts.pory"
	lock
# 885 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 886 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleBike_Text_0
# 887 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePlant::
# 891 "data/maps/OldaleTown/scripts.pory"
	lock
# 892 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 893 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePlant_Text_0
# 895 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDLCWindow::
# 899 "data/maps/OldaleTown/scripts.pory"
	lock
# 900 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 901 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCWindow_Text_0
# 903 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleHouse2GardenItem::
# 907 "data/maps/OldaleTown/scripts.pory"
	lock
# 908 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_SOFT_SAND
# 911 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 912 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleParkingItem::
# 915 "data/maps/OldaleTown/scripts.pory"
	lock
# 916 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_METAL_COAT
# 917 "data/maps/OldaleTown/scripts.pory"
	removeobject 3
# 918 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalebyTruckItem::
# 921 "data/maps/OldaleTown/scripts.pory"
	lock
# 922 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_RAZOR_FANG
# 923 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 924 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalDontLeaveOldaleto103::
# 928 "data/maps/OldaleTown/scripts.pory"
	lock
# 929 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 930 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 931 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_0
# 933 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_1
# 934 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 935 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto103_2
OldaleRivalDontLeaveOldaleto103_1:
# 945 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto103_5
OldaleRivalDontLeaveOldaleto103_4:
# 951 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto103_2:
# 936 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 937 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 938 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 939 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 940 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 941 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 942 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalDontLeaveOldaleto103_1

OldaleRivalDontLeaveOldaleto103_5:
# 947 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 948 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 949 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto103_4


OldaleRivalnoleavetoWhouse::
# 955 "data/maps/OldaleTown/scripts.pory"
	lock
# 956 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 957 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 958 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_0
# 960 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_1
# 961 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 962 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalnoleavetoWhouse_2
OldaleRivalnoleavetoWhouse_1:
# 972 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalnoleavetoWhouse_5
OldaleRivalnoleavetoWhouse_4:
# 978 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalnoleavetoWhouse_2:
# 963 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_2
# 964 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 965 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 966 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 967 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 968 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 969 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalnoleavetoWhouse_1

OldaleRivalnoleavetoWhouse_5:
# 974 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 975 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 976 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalnoleavetoWhouse_4


OldaleWarehouseRebelGuard::
# 988 "data/maps/OldaleTown/scripts.pory"
	lock
# 989 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 990 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 991 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleVendingMachine_Movement_0
# 992 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 993 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 995 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 996 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 998 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 1001 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 1004 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 1006 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 1007 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1008 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1009 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 1011 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 1012 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1013 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 1014 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1015 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1016 "data/maps/OldaleTown/scripts.pory"
	removeobject 18
# 1017 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 1018 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 1019 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1021 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 997 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 999 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 1030 "data/maps/OldaleTown/scripts.pory"
	lock
# 1031 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 1032 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleTruckRebel_Movement_0
# 1033 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1035 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 1037 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 1041 "data/maps/OldaleTown/scripts.pory"
	lock
# 1042 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 1043 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 1047 "data/maps/OldaleTown/scripts.pory"
	lock
# 1048 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1049 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1050 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1051 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1052 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1053 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1054 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach0_Movement_0
# 1055 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1056 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1057 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 1061 "data/maps/OldaleTown/scripts.pory"
	lock
# 1062 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1063 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1064 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1065 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1066 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1067 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach1_Movement_0
# 1068 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1069 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1070 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 1074 "data/maps/OldaleTown/scripts.pory"
	lock
# 1075 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1076 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1077 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1078 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1079 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1080 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach2_Movement_0
# 1081 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1082 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1083 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 1088 "data/maps/OldaleTown/scripts.pory"
	lock
# 1089 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1090 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 1091 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 1093 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1094 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1095 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1096 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 1097 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1098 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 1099 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1100 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_3
# 1101 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1102 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_4
# 1103 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1104 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1105 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1106 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1107 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1108 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebel_Movement_0
# 1109 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1110 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1111 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1112 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1113 "data/maps/OldaleTown/scripts.pory"
	removeobject 24
# 1114 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1115 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1116 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 1122 "data/maps/OldaleTown/scripts.pory"
	lock
# 1123 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_0
# 1124 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 1126 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1127 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1128 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1129 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 1130 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1131 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1132 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1133 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1134 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1135 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 1136 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1137 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1138 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_1
# 1139 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1140 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1141 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1142 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1143 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 1144 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1145 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1146 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaCall1::
# 1152 "data/maps/OldaleTown/scripts.pory"
	lock
# 1153 "data/maps/OldaleTown/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_gt SamanthaCall1_1
# 1162 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaCall1_1:
# 1154 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1155 "data/maps/OldaleTown/scripts.pory"
	pokenavcall SamanthaCall1_Text_0
# 1159 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 1160 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaDontgotoDLC::
# 1168 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq SamanthaDontgotoDLC_1
# 1181 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaDontgotoDLC_1:
# 1170 "data/maps/OldaleTown/scripts.pory"
	lock
# 1171 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDLC_Movement_0
# 1172 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1173 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 1174 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_0
# 1175 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_1
# 1177 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoDLC_Movement_1
# 1178 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1179 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaDontgoto102::
# 1185 "data/maps/OldaleTown/scripts.pory"
	lock
# 1186 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDLC_Movement_0
# 1187 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1188 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 1189 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_0
# 1191 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_1
# 1194 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoDLC_Movement_1
# 1195 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1196 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaDontgoto103::
# 1200 "data/maps/OldaleTown/scripts.pory"
	lock
# 1201 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDLC_Movement_0
# 1202 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1203 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 1204 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_0
# 1206 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_1
# 1208 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoDLC_Movement_1
# 1209 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1210 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaDontgotoWarehouse::
# 1214 "data/maps/OldaleTown/scripts.pory"
	lock
# 1215 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDLC_Movement_0
# 1216 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1217 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 1218 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_0
# 1220 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_gt SamanthaDontgotoWarehouse_2
# 1226 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_2
SamanthaDontgotoWarehouse_1:
# 1228 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1229 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_3
# 1230 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1231 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1233 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoWarehouse_2:
# 1222 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_1
	goto SamanthaDontgotoWarehouse_1


SamanthaGetSnacksCutscene::
# 1238 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaGetSnacksCutscene_1
# 1277 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaGetSnacksCutscene_1:
# 1240 "data/maps/OldaleTown/scripts.pory"
	lock
# 1241 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_0
# 1242 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_0
# 1243 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaGetSnacksCutscene_Movement_1
# 1244 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_2
# 1246 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_1
# 1247 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1248 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1250 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_2
# 1251 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1252 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1253 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1254 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1255 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1257 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_3
# 1258 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1259 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1260 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1261 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1262 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1263 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1264 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1265 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1266 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1268 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_4
# 1269 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1270 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_4
# 1272 "data/maps/OldaleTown/scripts.pory"
	setflag Samanthagotsnacks
# 1274 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaShake::
# 1282 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1283 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 1284 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 1285 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 1286 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 1287 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


# 69 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 69 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 167 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 167 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 451 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 451 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 451 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 451 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 451 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 451 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 451 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 456 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 456 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 456 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 456 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 456 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 456 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 456 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 459 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 459 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 493 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 493 "data/maps/OldaleTown/scripts.pory"
	face_left
# 493 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 506 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 506 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 506 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 507 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 507 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 557 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 557 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 617 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 617 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 734 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 734 "data/maps/OldaleTown/scripts.pory"
	face_player
# 734 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 750 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 750 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 750 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 755 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 755 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 755 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 779 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_3:
# 779 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 837 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_0:
# 837 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 858 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_1:
# 858 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 930 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto103_Movement_0:
# 930 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 975 "data/maps/OldaleTown/scripts.pory"
OldaleRivalnoleavetoWhouse_Movement_0:
# 975 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 1032 "data/maps/OldaleTown/scripts.pory"
OldaleTruckRebel_Movement_0:
# 1032 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1054 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 1054 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 1054 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1067 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 1067 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 1080 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 1080 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 1108 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 1108 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1108 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1108 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1108 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1108 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1108 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1108 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1108 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1123 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 1123 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 1123 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1138 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
# 1138 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1138 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1138 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1138 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1138 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1138 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1138 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1171 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDLC_Movement_0:
# 1171 "data/maps/OldaleTown/scripts.pory"
	face_player
# 1171 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 1177 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDLC_Movement_1:
# 1177 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 1241 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_0:
# 1241 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 1241 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 1243 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_1:
# 1243 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1243 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1244 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_2:
# 1244 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1244 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1244 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1244 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1244 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1247 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_3:
# 1247 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 1268 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_4:
# 1268 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1268 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

TimeofDayTest_Text_0:
# 34 "data/maps/OldaleTown/scripts.pory"
	.string "Morning.$"

TimeofDayTest_Text_1:
# 38 "data/maps/OldaleTown/scripts.pory"
	.string "Day.$"

TimeofDayTest_Text_2:
# 42 "data/maps/OldaleTown/scripts.pory"
	.string "Evening.$"

TimeofDayTest_Text_3:
# 46 "data/maps/OldaleTown/scripts.pory"
	.string "Night.$"

ConArtist103Rewards_Text_0:
# 73 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 76 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 78 "data/maps/OldaleTown/scripts.pory"
	.string "Look, I know I said I'd give you some\n"
	.string "cash but...\p"
	.string "All I have is my wares! The cash I get\n"
	.string "when I sell them, duh!\p"
	.string "Speaking of wares - would you like to\n"
	.string "take a look at them?$"

ConArtist103Rewards_Text_3:
# 82 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 82 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 85 "data/maps/OldaleTown/scripts.pory"
	.string "Hehe, of course you do... here's what I\n"
	.string "got! Only 500 each!$"

ConArtist103Rewards_Text_6:
# 87 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 1$"

ConArtist103Rewards_Text_7:
# 87 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 2$"

ConArtist103Rewards_Text_8:
# 87 "data/maps/OldaleTown/scripts.pory"
	.string "Rosy Egg$"

ConArtist103Rewards_Text_9:
# 87 "data/maps/OldaleTown/scripts.pory"
	.string "Not really$"

ConArtist103Rewards_Text_10:
# 89 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 1 here$"

ConArtist103Rewards_Text_11:
# 94 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 2 here$"

ConArtist103Rewards_Text_12:
# 99 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 3 here$"

ConArtist103Rewards_Text_13:
# 115 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to Petalburg soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_14:
# 122 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in some eggs?$"

OldaleVendingMachine_Text_0:
# 132 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 134 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 50¥$"

OldaleVendingMachine_Text_2:
# 134 "data/maps/OldaleTown/scripts.pory"
	.string "Soda Pop - 70¥$"

OldaleVendingMachine_Text_3:
# 134 "data/maps/OldaleTown/scripts.pory"
	.string "Strong Coffee - 80¥$"

OldaleVendingMachine_Text_4:
# 134 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 152 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 161 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 170 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 172 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 179 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 185 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 205 "data/maps/OldaleTown/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 214 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 223 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 232 "data/maps/OldaleTown/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 258 "data/maps/OldaleTown/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_16:
# 267 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 276 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 285 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 316 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 322 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 328 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

Oldale102Sign_Text_0:
# 335 "data/maps/OldaleTown/scripts.pory"
	.string "West - Road 002.$"

OldalePeekingOldman_Text_0:
# 342 "data/maps/OldaleTown/scripts.pory"
	.string "Those Rebel hoodlums... just when we\n"
	.string "start to get back on our feet, they\l"
	.string "come to ruin things!\p"
	.string "Murkrows, the lot of them!$"

OldaleOutsideHikerGuy_Text_0:
# 353 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 363 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 368 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkNPC_Text_0:
# 381 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the Rebel Zone\n"
	.string "who get crazy rich by finding treasure\l"
	.string "with their {COLOR BLUE}Object Spotters{COLOR DARK_GRAY}.\p"
	.string "Haven't managed to get my hands on one,\n"
	.string "or I wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "So... I saw you digging through that\n"
	.string "trash can.\p"
	.string "If you need pokeyen, you should get an\n"
	.string "{COLOR BLUE}Object Spotter{COLOR DARK_GRAY} and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideParkNPC_Text_2:
# 393 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Why don't you try it right here? Who\n"
	.string "knows, you might find something!$"

OldaleOutsideParkNPC_Text_3:
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Hopefully something better than what\n"
	.string "you found in that trash can... ha-ha-ha!$"

OldaleOutsideOldGuy_Text_0:
# 415 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleOutsideOldWoman_Text_0:
# 425 "data/maps/OldaleTown/scripts.pory"
	.string "Did you see the greenish rain just\n"
	.string "now...?\p"
	.string "The Weather Institute says it's not\n"
	.string "harmful on the short-term. But I worry\l"
	.string "about the long term...$"

DLCTeacherOutside_Text_0:
# 434 "data/maps/OldaleTown/scripts.pory"
	.string "I'm really dying for a smoke here...\p"
	.string "If only those loser Rebels left the\n"
	.string "Warehouse, Devon Co. would start\l"
	.string "sending supplies again.$"

DLCTeacherOutside_Text_1:
# 440 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Ah, sorry for blowing the smoke on your\n"
	.string "face. Haven't smoked in days...\p"
	.string "With the Rebels gone, the mart is\n"
	.string "getting stocked again.\p"
	.string "Was about time! {COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_GotoTherapy_Text_0:
# 453 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... the\n"
	.string "therapy session should be about to\l"
	.string "start.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 470 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 475 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 484 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 489 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 500 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 503 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 511 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 516 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 521 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and old man Norman!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 527 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 541 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 548 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the {COLOR RED}Rebels{COLOR DARK_GRAY}, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 553 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 560 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 573 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 578 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 585 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 591 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 596 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 601 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 607 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's {COLOR RED}Rebels{COLOR DARK_GRAY} talk...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 613 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, come to Route 103! I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 630 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 635 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... Norman told us\n"
	.string "we'd need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 640 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 645 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 650 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 660 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 687 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 693 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 698 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "Norman will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 708 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 713 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

OldaleDevonGrunts_Text_0:
# 735 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but we can't let anyone\n"
	.string "through until the {COLOR RED}Rebels{COLOR DARK_GRAY} occupying\l"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY}, are dealt with.$"

OldaleDevonGrunts_Text_1:
# 739 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to New Rustboro... but don't\l"
	.string "worry!\p"
	.string "Reinforcements from Devon HQ are\n"
	.string "currently on the way.$"

OldaleDevonGrunts_Text_2:
# 742 "data/maps/OldaleTown/scripts.pory"
	.string "Yup! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_3:
# 747 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Devon Ball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_4:
# 751 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_5:
# 756 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 765 "data/maps/OldaleTown/scripts.pory"
	.string "Hello there, civilian! We have great\n"
	.string "news!\p"
	.string "Those pesky {COLOR RED}Rebels{COLOR DARK_GRAY} have finally left\n"
	.string "Oldale Warehouse. The town is safe\l"
	.string "again!$"

OldaleDevonGrunts_Text_7:
# 769 "data/maps/OldaleTown/scripts.pory"
	.string "They must have caught wind of\n"
	.string "reinforcements coming, and didn't feel\l"
	.string "like spending the rest of their lives on\l"
	.string "{COLOR RED}Dewford Prison{COLOR DARK_GRAY}.$"

OldaleDevonGrunts_Text_8:
# 773 "data/maps/OldaleTown/scripts.pory"
	.string "Most likely! So... I suppose you want to\n"
	.string "go through Route 102?$"

OldaleDevonGrunts_Text_9:
# 777 "data/maps/OldaleTown/scripts.pory"
	.string "I see... well, I'm sorry to say...\p"
	.string "In the Rebel Zone, when it's not one\n"
	.string "thing, it's the other, you know?$"

OldaleDevonGrunts_Text_10:
# 780 "data/maps/OldaleTown/scripts.pory"
	.string "We have one of our scientists searching\n"
	.string "Route 102 for a very dangerous\l"
	.string "Pokémon.\p"
	.string "It's the next species on the list of\n"
	.string "Pokémon to be {COLOR BLUE}safened{COLOR DARK_GRAY}, and we can't let\l"
	.string "his work be disturbed$"

OldaleDevonGrunts_Text_11:
# 785 "data/maps/OldaleTown/scripts.pory"
	.string "I'm afraid so. But don't worry - these\n"
	.string "tasks usually take from 3 to 4 months.\p"
	.string "And what's a little waiting if it means\n"
	.string "Hoenn becomes safer?$"

OldaleDevonGrunts_Text_12:
# 790 "data/maps/OldaleTown/scripts.pory"
	.string "Grand, then please enjoy this shith-... I\n"
	.string "mean, this cozy, cute sleepy town!$"

OldaleRival_Text_0:
# 809 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... I saw you talking with\n"
	.string "those enemy soldiers just now.\p"
	.string "Don't you KNOW by now!? You cannot\n"
	.string "reason with the enemy.$"

OldaleRival_Text_1:
# 811 "data/maps/OldaleTown/scripts.pory"
	.string "You can only {COLOR RED}FIGHT{COLOR DARK_GRAY} it!$"

OldaleRival_Text_2:
# 812 "data/maps/OldaleTown/scripts.pory"
	.string "But I understand. It was two versus\n"
	.string "one. Don't worry, I am here now.$"

OldaleRival_Text_3:
# 813 "data/maps/OldaleTown/scripts.pory"
	.string "Let's show those Kantonians they can't\n"
	.string "take our country! LEAD THE WAY,\l"
	.string "{PLAYER}.$"

OldaleRivalfollowchat_Text_0:
# 829 "data/maps/OldaleTown/scripts.pory"
	.string "Let's go, {PLAYER} - those Kantonians\n"
	.string "are on the {COLOR RED}western exit of Oldale Town!{COLOR DARK_GRAY}$"

OldaleRivalfollowchat_Text_1:
# 831 "data/maps/OldaleTown/scripts.pory"
	.string "Let's kick their ass all the way to their\n"
	.string "miserable region across the sea!$"

OldaleRivalDontLeaveOldaleto101_Text_0:
# 838 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!?$"

OldaleRivalDontLeaveOldaleto101_Text_1:
# 840 "data/maps/OldaleTown/scripts.pory"
	.string "We have already secured the southern\n"
	.string "front, remember!? Thanks to your\l"
	.string "glorious victory!$"

OldaleRivalDontLeaveOldaleto101_Text_2:
# 843 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the next battle?$"

OldaleRivalDontLeaveOldaleto101_Text_3:
# 846 "data/maps/OldaleTown/scripts.pory"
	.string "Very well... I'll be keeping an eye on\n"
	.string "them. Don't take long!$"

OldaleRivalDontLeaveOldaleto101_Text_4:
# 857 "data/maps/OldaleTown/scripts.pory"
	.string "Let's not delay then. I'm as ready as\n"
	.string "I'll ever be!$"

OldaleWareHouseSign_Text_0:
# 867 "data/maps/OldaleTown/scripts.pory"
	.string "East - Oldale Warehouse.$"

OldaleMotorBike_Text_0:
# 873 "data/maps/OldaleTown/scripts.pory"
	.string "A motorbike. A decal on its die reads\n"
	.string "'Rebel 4 Life'.$"

OldaleCar_Text_0:
# 879 "data/maps/OldaleTown/scripts.pory"
	.string "The car seems to have been parked for\n"
	.string "some time.$"

OldaleBike_Text_0:
# 886 "data/maps/OldaleTown/scripts.pory"
	.string "The bike has tons of locks on the\n"
	.string "wheels, to discourage theft.$"

OldalePlant_Text_0:
# 893 "data/maps/OldaleTown/scripts.pory"
	.string "The plants are on the same state than\n"
	.string "the trees around...\p"
	.string "On their way to wither.$"

OldaleDLCWindow_Text_0:
# 901 "data/maps/OldaleTown/scripts.pory"
	.string "You can see the DLC's library through\n"
	.string "the window.\p"
	.string "The library's clerk is browsing an...\n"
	.string "'explicit' website.$"

OldaleRivalDontLeaveOldaleto103_Text_0:
# 931 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? The\n"
	.string "enemy is not this way!$"

OldaleRivalDontLeaveOldaleto103_Text_1:
# 933 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the battle?$"

OldaleRivalnoleavetoWhouse_Text_0:
# 958 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? This\n"
	.string "way is to the {COLOR GREEN}warehouse{COLOR DARK_GRAY}!$"

OldaleRivalnoleavetoWhouse_Text_1:
# 960 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you want to resupply there\n"
	.string "before the battle?$"

OldaleRivalnoleavetoWhouse_Text_2:
# 963 "data/maps/OldaleTown/scripts.pory"
	.string "Aah, smart thinking! I'll keep an eye on\n"
	.string "those Kantonians. Don't take long!$"

OldaleWarehouseRebelGuard_Text_0:
# 990 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 997 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 999 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 1001 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you that not every Rebel is\n"
	.string "like him!$"

OldaleWarehouseRebelGuard_Text_4:
# 1006 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 1009 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 1035 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 1042 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only broken clankers in\n"
	.string "this grass! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 1051 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 1091 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 1104 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 1106 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 1124 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

SamanthaCall1_Text_0:
# 1155 "data/maps/OldaleTown/scripts.pory"
	.string "U-uhm... hi, {PLAYER}! It's me,\n"
	.string "Samantha.\p"
	.string "I hope I haven't caught you at a bad\n"
	.string "time... B-but, since you said you'd help\l"
	.string "me out here in the Mausoleum, I...\p"
	.string "I-I was wondering if you could, like...\n"
	.string "come do me a favour?\p"
	.string "I-it's okay if you're too busy, and\n"
	.string "there's no hurry, but... I-I'll be here if\l"
	.string "you decide to come!\p"
	.string "Sorry for bothering. S-see you!$"

SamanthaDontgotoDLC_Text_0:
# 1174 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... is this the Devon\n"
	.string "Learning Center?$"

SamanthaDontgotoDLC_Text_1:
# 1175 "data/maps/OldaleTown/scripts.pory"
	.string "It seems like they are holding a lesson\n"
	.string "now...\p"
	.string "I have not signed up for it, so I would\n"
	.string "not like to interrupt.$"

SamanthaDontgoto102_Text_0:
# 1189 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Route 103, right?$"

SamanthaDontgoto102_Text_1:
# 1191 "data/maps/OldaleTown/scripts.pory"
	.string "W-we don't need to go that far... I'm\n"
	.string "sure there's another vending machine in\l"
	.string "Petalburg, b-but... the one here in\l"
	.string "Oldale will do!$"

SamanthaDontgoto103_Text_0:
# 1204 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Route 102, right?$"

SamanthaDontgoto103_Text_1:
# 1206 "data/maps/OldaleTown/scripts.pory"
	.string "B-but Slateport is very far... t-the\n"
	.string "food here in Oldale will do!$"

SamanthaDontgotoWarehouse_Text_0:
# 1218 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... Oldale's Warehouse is\n"
	.string "over there, right?$"

SamanthaDontgotoWarehouse_Text_1:
# 1222 "data/maps/OldaleTown/scripts.pory"
	.string "I-I dont' think they sell any food over\n"
	.string "there...$"

SamanthaDontgotoWarehouse_Text_2:
# 1226 "data/maps/OldaleTown/scripts.pory"
	.string "I-I see some scary Rebels over there...\n"
	.string "m-maybe we shouldn't get near...$"

SamanthaDontgotoWarehouse_Text_3:
# 1229 "data/maps/OldaleTown/scripts.pory"
	.string "I-I'll just get some snacks from the\n"
	.string "vending machine there, o-okay?$"

SamanthaGetSnacksCutscene_Text_0:
# 1242 "data/maps/OldaleTown/scripts.pory"
	.string "A-ah... here we are, {PLAYER}! Give me\n"
	.string "a moment...$"

SamanthaGetSnacksCutscene_Text_1:
# 1246 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I'll have some of these...$"

SamanthaGetSnacksCutscene_Text_2:
# 1250 "data/maps/OldaleTown/scripts.pory"
	.string "And of these...$"

SamanthaGetSnacksCutscene_Text_3:
# 1257 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, and these too...!$"

SamanthaGetSnacksCutscene_Text_4:
# 1270 "data/maps/OldaleTown/scripts.pory"
	.string "Hehehe... I've got tons. We can go back.\p"
	.string "T-thank you...$"

DevonGruntFOutro::
# 722 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 725 "data/maps/OldaleTown/scripts.pory"
	.string "No, not this time!$"

RebelOldale_Outro::
# 1024 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
