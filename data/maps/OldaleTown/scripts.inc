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
# 119 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_14
# 120 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
ConArtist103Rewards_1:
# 122 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 123 "data/maps/OldaleTown/scripts.pory"
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
# 78 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 82 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 83 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_6
ConArtist103Rewards_5:
# 111 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_8
	goto ConArtist103Rewards_1

ConArtist103Rewards_6:
# 84 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 85 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 86 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_6, ConArtist103Rewards_Text_7, ConArtist103Rewards_Text_8, ConArtist103Rewards_Text_9
# 87 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_11
ConArtist103Rewards_10:
# 92 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_14
ConArtist103Rewards_13:
# 97 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_17
ConArtist103Rewards_16:
# 105 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_19
	goto ConArtist103Rewards_5

ConArtist103Rewards_8:
# 112 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 113 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_13
# 115 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_1

ConArtist103Rewards_11:
# 88 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 89 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_10

ConArtist103Rewards_14:
# 93 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
# 94 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_13

ConArtist103Rewards_17:
# 98 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_12
# 102 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_16

ConArtist103Rewards_19:
# 106 "data/maps/OldaleTown/scripts.pory"
	goto refusedeggs
	goto ConArtist103Rewards_5


OldaleVendingMachine::
# 128 "data/maps/OldaleTown/scripts.pory"
	lock
# 129 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 130 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 131 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 134 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 187 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 240 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 292 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 295 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 296 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 297 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 135 "data/maps/OldaleTown/scripts.pory"
	checkmoney 50
# 136 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 181 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 188 "data/maps/OldaleTown/scripts.pory"
	checkmoney 70
# 189 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 234 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 137 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 138 "data/maps/OldaleTown/scripts.pory"
	waitse
# 139 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 141 "data/maps/OldaleTown/scripts.pory"
	random 4
# 142 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 143 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 145 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 146 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 147 "data/maps/OldaleTown/scripts.pory"
	waitse
# 148 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 149 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 150 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 151 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 153 "data/maps/OldaleTown/scripts.pory"
	random 20
# 154 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 155 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 157 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 158 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 159 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 160 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 161 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 163 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 164 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 165 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 166 "data/maps/OldaleTown/scripts.pory"
	waitse
# 167 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 169 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 170 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 175 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 241 "data/maps/OldaleTown/scripts.pory"
	checkmoney 80
# 242 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 287 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 190 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 191 "data/maps/OldaleTown/scripts.pory"
	waitse
# 192 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 194 "data/maps/OldaleTown/scripts.pory"
	random 4
# 195 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, sodagotstuck
# 196 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotsoda
# 198 "data/maps/OldaleTown/scripts.pory"
gotsoda:
# 199 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 200 "data/maps/OldaleTown/scripts.pory"
	waitse
# 201 "data/maps/OldaleTown/scripts.pory"
	removemoney 70
# 202 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 203 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 204 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 206 "data/maps/OldaleTown/scripts.pory"
	random 20
# 207 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 208 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrasoda
# 210 "data/maps/OldaleTown/scripts.pory"
gotextrasoda:
# 211 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 212 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 213 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 214 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 216 "data/maps/OldaleTown/scripts.pory"
sodagotstuck:
# 217 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 218 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 219 "data/maps/OldaleTown/scripts.pory"
	waitse
# 220 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 222 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 223 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 228 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 182 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 171 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 172 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 293 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 243 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 244 "data/maps/OldaleTown/scripts.pory"
	waitse
# 245 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 247 "data/maps/OldaleTown/scripts.pory"
	random 4
# 248 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, coffeegotstuck
# 249 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotcoffee
# 251 "data/maps/OldaleTown/scripts.pory"
gotcoffee:
# 252 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 253 "data/maps/OldaleTown/scripts.pory"
	waitse
# 254 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 255 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 256 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 257 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 259 "data/maps/OldaleTown/scripts.pory"
	random 20
# 260 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 261 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextracoffee
# 263 "data/maps/OldaleTown/scripts.pory"
gotextracoffee:
# 264 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 265 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 266 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 267 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 269 "data/maps/OldaleTown/scripts.pory"
coffeegotstuck:
# 270 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 271 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 272 "data/maps/OldaleTown/scripts.pory"
	waitse
# 273 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 275 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 276 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 281 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 235 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 224 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 225 "data/maps/OldaleTown/scripts.pory"
	goto gotsoda
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 176 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 288 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 277 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 278 "data/maps/OldaleTown/scripts.pory"
	goto gotcoffee
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 229 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 282 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 302 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 303 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 304 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 305 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 306 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 307 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 312 "data/maps/OldaleTown/scripts.pory"
	lock
# 313 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 314 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 318 "data/maps/OldaleTown/scripts.pory"
	lock
# 319 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 320 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 324 "data/maps/OldaleTown/scripts.pory"
	lock
# 325 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 326 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale102Sign::
# 331 "data/maps/OldaleTown/scripts.pory"
	lock
# 332 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale102Sign_Text_0
# 333 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 337 "data/maps/OldaleTown/scripts.pory"
	lock
# 338 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 339 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 344 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 349 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 354 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 359 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 340 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 341 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 345 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 346 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 350 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 351 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 355 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 356 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 363 "data/maps/OldaleTown/scripts.pory"
	lock
# 364 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 365 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, ConArtist103Rewards_Movement_0
# 367 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_3
OldaleOutsideParkNPC_1:
# 372 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_8
OldaleOutsideParkNPC_6:
# 379 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_13
OldaleOutsideParkNPC_11:
# 385 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_18
OldaleOutsideParkNPC_16:
# 391 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_2:
# 369 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_3:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_2
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_7:
# 374 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_8:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_7
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_12:
# 381 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_2
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_13:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_12
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_17:
# 387 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_3
	goto OldaleOutsideParkNPC_16

OldaleOutsideParkNPC_18:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_17
	goto OldaleOutsideParkNPC_16


OldaleOutsideOldGuy::
# 401 "data/maps/OldaleTown/scripts.pory"
	lock
# 402 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 403 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 407 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldWoman::
# 411 "data/maps/OldaleTown/scripts.pory"
	lock
# 412 "data/maps/OldaleTown/scripts.pory"
	applymovement 31, ConArtist103Rewards_Movement_0
# 413 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldWoman_Text_0
# 415 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


DLCTeacherOutside::
# 419 "data/maps/OldaleTown/scripts.pory"
	lock
# 420 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 421 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq DLCTeacherOutside_2
DLCTeacherOutside_1:
# 425 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_eq DLCTeacherOutside_5
DLCTeacherOutside_4:
# 431 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

DLCTeacherOutside_2:
# 422 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_0
	goto DLCTeacherOutside_1

DLCTeacherOutside_5:
# 426 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 427 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_1
	goto DLCTeacherOutside_4


OldaleTown_GotoTherapy::
# 435 "data/maps/OldaleTown/scripts.pory"
	lock
# 436 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 437 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 438 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 439 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 440 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 441 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 442 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 443 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 444 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 445 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 446 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 447 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 451 "data/maps/OldaleTown/scripts.pory"
	lock
# 452 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 453 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 454 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 455 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 457 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 458 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 459 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 460 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 463 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 464 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 465 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 467 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 468 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 473 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 477 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 478 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 479 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 480 "data/maps/OldaleTown/scripts.pory"
	waitse
# 481 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 482 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 484 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 487 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 490 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 491 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 492 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 493 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 494 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 495 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 496 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 498 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 499 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 500 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 501 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 503 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 504 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 505 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 506 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 509 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 510 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 511 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 512 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 515 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 516 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 518 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 522 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 611 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 612 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 613 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 614 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 615 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 617 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 618 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 619 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 620 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 622 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 623 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 624 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 625 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 627 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 628 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 629 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 630 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 632 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 633 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 634 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 635 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 638 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 639 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 640 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 641 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 642 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 643 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 644 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 645 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 647 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 648 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 649 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 650 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 651 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 652 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 653 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 654 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 655 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 656 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 469 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 474 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 485 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 488 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 519 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 523 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 524 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 525 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 526 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 529 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 530 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 531 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 532 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 533 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 535 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 536 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 537 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 538 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 541 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 542 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 543 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 544 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 545 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 547 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 548 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 550 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 554 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 560 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 561 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 562 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 563 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 566 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 567 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 568 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 569 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 570 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 572 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 573 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 574 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 575 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 576 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 578 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 579 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 580 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 581 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 583 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 584 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 585 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 586 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 588 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 589 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 590 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 591 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 592 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 594 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 595 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 596 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 597 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 598 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 599 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 601 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 602 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 603 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 606 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 607 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 551 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 555 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 556 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 557 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 558 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_22


OldaleCamelia::
# 660 "data/maps/OldaleTown/scripts.pory"
	lock
# 662 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 687 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 688 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 689 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 690 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 692 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 693 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 694 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 695 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 698 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 699 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 665 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 666 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, ConArtist103Rewards_Movement_0
# 667 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 668 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 669 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 672 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 673 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 674 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 675 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 677 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 678 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 679 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 680 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


OldaleDevonGrunts::
# 712 "data/maps/OldaleTown/scripts.pory"
	lock
# 713 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 714 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_2
OldaleDevonGrunts_1:
# 727 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_5
OldaleDevonGrunts_4:
# 745 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_eq OldaleDevonGrunts_8
OldaleDevonGrunts_7:
# 782 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 784 "data/maps/OldaleTown/scripts.pory"
	setflag devonsdontblock102
# 785 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 716 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 717 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 720 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_0
# 721 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 723 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 724 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_5:
# 728 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 729 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
# 732 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 733 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 737 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_2
# 738 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 740 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 741 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_4

OldaleDevonGrunts_8:
# 746 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 747 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 750 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 751 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_7
# 753 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 754 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 755 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_8
# 756 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 758 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleDevonGrunts_11
OldaleDevonGrunts_10:
# 771 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleDevonGrunts_14
OldaleDevonGrunts_13:
# 774 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 775 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 777 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
	goto OldaleDevonGrunts_7

OldaleDevonGrunts_11:
# 759 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_9
# 761 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_3
# 762 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_10
# 766 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 767 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_11
	goto OldaleDevonGrunts_10

OldaleDevonGrunts_14:
# 772 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_12
	goto OldaleDevonGrunts_13


OldaleRival::
# 789 "data/maps/OldaleTown/scripts.pory"
	lock
# 790 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 791 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_0
# 793 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_1
# 794 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_2
# 795 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_3
# 797 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 4
# 799 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 800 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_2
OldaleRival_1:
# 803 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_5
OldaleRival_4:
# 805 "data/maps/OldaleTown/scripts.pory"
	removeobject 22
# 806 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
	return

OldaleRival_2:
# 801 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRival_1

OldaleRival_5:
# 804 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_MALE
	goto OldaleRival_4


OldaleRivalfollowchat::
# 810 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_0
# 812 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_1
	return


OldaleRivalDontLeaveOldaleto101::
# 815 "data/maps/OldaleTown/scripts.pory"
	lock
# 816 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 817 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 818 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_0
# 820 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_1
# 823 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_2
# 824 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 825 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto101_2
OldaleRivalDontLeaveOldaleto101_1:
# 835 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto101_5
OldaleRivalDontLeaveOldaleto101_4:
# 841 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto101_2:
# 826 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 827 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 828 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 829 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 830 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 831 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 832 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
	goto OldaleRivalDontLeaveOldaleto101_1

OldaleRivalDontLeaveOldaleto101_5:
# 837 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 838 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 839 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto101_4


OldaleWareHouseSign::
# 846 "data/maps/OldaleTown/scripts.pory"
	lock
# 847 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWareHouseSign_Text_0
# 848 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleMotorBike::
# 852 "data/maps/OldaleTown/scripts.pory"
	lock
# 853 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleMotorBike_Text_0
# 854 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCar::
# 858 "data/maps/OldaleTown/scripts.pory"
	lock
# 859 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCar_Text_0
# 860 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleBike::
# 864 "data/maps/OldaleTown/scripts.pory"
	lock
# 865 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 866 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleBike_Text_0
# 867 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePlant::
# 871 "data/maps/OldaleTown/scripts.pory"
	lock
# 872 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 873 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePlant_Text_0
# 875 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDLCWindow::
# 879 "data/maps/OldaleTown/scripts.pory"
	lock
# 880 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 881 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCWindow_Text_0
# 883 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleHouse2GardenItem::
# 887 "data/maps/OldaleTown/scripts.pory"
	lock
# 888 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_SOFT_SAND
# 891 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 892 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleParkingItem::
# 895 "data/maps/OldaleTown/scripts.pory"
	lock
# 896 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_METAL_COAT
# 897 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_ITEM_OLDALE_PARKING
# 898 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 899 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalDontLeaveOldaleto103::
# 903 "data/maps/OldaleTown/scripts.pory"
	lock
# 904 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 905 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 906 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_0
# 908 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_1
# 909 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 910 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto103_2
OldaleRivalDontLeaveOldaleto103_1:
# 920 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto103_5
OldaleRivalDontLeaveOldaleto103_4:
# 926 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto103_2:
# 911 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 912 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 913 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 914 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 915 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 916 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 917 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
	goto OldaleRivalDontLeaveOldaleto103_1

OldaleRivalDontLeaveOldaleto103_5:
# 922 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 923 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 924 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto103_4


OldaleRivalnoleavetoWhouse::
# 930 "data/maps/OldaleTown/scripts.pory"
	lock
# 931 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 932 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 933 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_0
# 935 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_1
# 936 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 937 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalnoleavetoWhouse_2
OldaleRivalnoleavetoWhouse_1:
# 947 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalnoleavetoWhouse_5
OldaleRivalnoleavetoWhouse_4:
# 953 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalnoleavetoWhouse_2:
# 938 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_2
# 939 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 940 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 941 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 942 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 943 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 944 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
	goto OldaleRivalnoleavetoWhouse_1

OldaleRivalnoleavetoWhouse_5:
# 949 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 950 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 951 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalnoleavetoWhouse_4


OldaleWarehouseRebelGuard::
# 963 "data/maps/OldaleTown/scripts.pory"
	lock
# 964 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 965 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 966 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleVendingMachine_Movement_0
# 967 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 968 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 970 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 971 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 973 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 976 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 979 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 981 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 982 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 983 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleRivalDontLeaveOldaleto101_Movement_0
# 984 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 986 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 987 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 988 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 989 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleRivalDontLeaveOldaleto101_Movement_1
# 990 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 991 "data/maps/OldaleTown/scripts.pory"
	removeobject 19
# 992 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 993 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 994 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 996 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 972 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 974 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 1005 "data/maps/OldaleTown/scripts.pory"
	lock
# 1006 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 1007 "data/maps/OldaleTown/scripts.pory"
	applymovement 26, OldaleTruckRebel_Movement_0
# 1008 "data/maps/OldaleTown/scripts.pory"
	waitmovement 26
# 1010 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 1012 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 1016 "data/maps/OldaleTown/scripts.pory"
	lock
# 1017 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 1018 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 1022 "data/maps/OldaleTown/scripts.pory"
	lock
# 1023 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1024 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1025 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 1026 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1027 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1028 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1029 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach0_Movement_0
# 1030 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1031 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1032 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 1036 "data/maps/OldaleTown/scripts.pory"
	lock
# 1037 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1038 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1039 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 1040 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1041 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1042 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach1_Movement_0
# 1043 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1044 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1045 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 1049 "data/maps/OldaleTown/scripts.pory"
	lock
# 1050 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1051 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1052 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 1053 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1054 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1055 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 1056 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1057 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1058 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 1063 "data/maps/OldaleTown/scripts.pory"
	lock
# 1064 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1065 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 1066 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 1068 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1069 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1070 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1071 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 1072 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1073 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1074 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1075 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1076 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1077 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebel_Movement_0
# 1078 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1079 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1080 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1081 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1082 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 1083 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1084 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1085 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 1092 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_0
# 1093 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 1095 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1096 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1097 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1098 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 1099 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1100 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1101 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1102 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1103 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1104 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 1105 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1106 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1107 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_1
# 1108 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1109 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1110 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1111 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1112 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 1113 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1114 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1115 "data/maps/OldaleTown/scripts.pory"
	release
	return


# 69 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 69 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 164 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 164 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 437 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 437 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 437 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 437 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 437 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 437 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 437 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 442 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 442 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 442 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 442 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 442 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 442 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 442 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 445 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 445 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 478 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 478 "data/maps/OldaleTown/scripts.pory"
	face_left
# 478 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 491 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 491 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 491 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 492 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 492 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 542 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 542 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 602 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 602 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 716 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 716 "data/maps/OldaleTown/scripts.pory"
	face_player
# 716 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 732 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 732 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 732 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 737 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 737 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 737 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 761 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_3:
# 761 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 817 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_0:
# 817 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 838 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_1:
# 838 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 905 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto103_Movement_0:
# 905 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 950 "data/maps/OldaleTown/scripts.pory"
OldaleRivalnoleavetoWhouse_Movement_0:
# 950 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 1007 "data/maps/OldaleTown/scripts.pory"
OldaleTruckRebel_Movement_0:
# 1007 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1029 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 1029 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 1029 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1042 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 1042 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 1055 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 1055 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 1077 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 1077 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1077 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1077 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1077 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1077 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1077 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1077 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1077 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1092 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 1092 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 1092 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1107 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
# 1107 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1107 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1107 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1107 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1107 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1107 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1107 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
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
# 84 "data/maps/OldaleTown/scripts.pory"
	.string "Hehe, of course you do... here's what I\n"
	.string "got! Only 500 each!$"

ConArtist103Rewards_Text_6:
# 86 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 1$"

ConArtist103Rewards_Text_7:
# 86 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 2$"

ConArtist103Rewards_Text_8:
# 86 "data/maps/OldaleTown/scripts.pory"
	.string "Rosy Egg$"

ConArtist103Rewards_Text_9:
# 86 "data/maps/OldaleTown/scripts.pory"
	.string "Not really$"

ConArtist103Rewards_Text_10:
# 88 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 1 here$"

ConArtist103Rewards_Text_11:
# 93 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 2 here$"

ConArtist103Rewards_Text_12:
# 98 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 3 here$"

ConArtist103Rewards_Text_13:
# 113 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to Petalburg soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_14:
# 119 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in some eggs?$"

OldaleVendingMachine_Text_0:
# 129 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 131 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 50¥$"

OldaleVendingMachine_Text_2:
# 131 "data/maps/OldaleTown/scripts.pory"
	.string "Soda Pop - 70¥$"

OldaleVendingMachine_Text_3:
# 131 "data/maps/OldaleTown/scripts.pory"
	.string "Strong Coffee - 80¥$"

OldaleVendingMachine_Text_4:
# 131 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 158 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 167 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 169 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 176 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 182 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 202 "data/maps/OldaleTown/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 211 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 220 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 229 "data/maps/OldaleTown/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 255 "data/maps/OldaleTown/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_16:
# 264 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 273 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 282 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 313 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 319 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 325 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

Oldale102Sign_Text_0:
# 332 "data/maps/OldaleTown/scripts.pory"
	.string "West - Road 002.$"

OldaleOutsideHikerGuy_Text_0:
# 341 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 351 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 356 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkNPC_Text_0:
# 369 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the Rebel Zone\n"
	.string "who get crazy rich by finding treasure\l"
	.string "with their {COLOR BLUE}Object Spotters{COLOR DARK_GRAY}.\p"
	.string "Haven't managed to get my hands on one,\n"
	.string "or I wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 374 "data/maps/OldaleTown/scripts.pory"
	.string "So... I saw you digging through that\n"
	.string "trash can.\p"
	.string "If you need pokeyen, you should get an\n"
	.string "{COLOR BLUE}Object Spotter{COLOR DARK_GRAY} and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideParkNPC_Text_2:
# 381 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Why don't you try it right here? Who\n"
	.string "knows, you might find something!$"

OldaleOutsideParkNPC_Text_3:
# 387 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Hopefully something better than what\n"
	.string "you found in that trash can... ha-ha-ha!$"

OldaleOutsideOldGuy_Text_0:
# 403 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleOutsideOldWoman_Text_0:
# 413 "data/maps/OldaleTown/scripts.pory"
	.string "Did you see the greenish rain just\n"
	.string "now...?\p"
	.string "The Weather Institute says it's not\n"
	.string "harmful on the short-term. But I worry\l"
	.string "about the long term...$"

DLCTeacherOutside_Text_0:
# 422 "data/maps/OldaleTown/scripts.pory"
	.string "I'm really dying for a smoke here...\p"
	.string "If only those loser Rebels left the\n"
	.string "Warehouse, Devon Co. would start\l"
	.string "sending supplies again.$"

DLCTeacherOutside_Text_1:
# 427 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Ah, sorry for blowing the smoke on your\n"
	.string "face. Haven't smoked in days...\p"
	.string "With the Rebels gone, the mart is\n"
	.string "getting stocked again.\p"
	.string "Was about time! {COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_GotoTherapy_Text_0:
# 439 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... the\n"
	.string "therapy session should be about to\l"
	.string "start.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 455 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 460 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 469 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 474 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 485 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 488 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 496 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 501 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 506 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and old man Norman!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 512 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 526 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 533 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the {COLOR RED}Rebels{COLOR DARK_GRAY}, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 538 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 545 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 558 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 563 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 570 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 576 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 581 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 586 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 592 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's {COLOR RED}Rebels{COLOR DARK_GRAY} talk...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 598 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, come to Route 103! I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 615 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 620 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... Norman told us\n"
	.string "we'd need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 625 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 630 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 635 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 645 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 669 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 675 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 680 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "Norman will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 690 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 695 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

OldaleDevonGrunts_Text_0:
# 717 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but we can't let anyone\n"
	.string "through until the {COLOR RED}Rebels{COLOR DARK_GRAY} occupying\l"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY}, are dealt with.$"

OldaleDevonGrunts_Text_1:
# 721 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to New Rustboro... but don't\l"
	.string "worry!\p"
	.string "Reinforcements from Devon HQ are\n"
	.string "currently on the way.$"

OldaleDevonGrunts_Text_2:
# 724 "data/maps/OldaleTown/scripts.pory"
	.string "Yup! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_3:
# 729 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Devon Ball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_4:
# 733 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_5:
# 738 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 747 "data/maps/OldaleTown/scripts.pory"
	.string "Hello there, civilian! We have great\n"
	.string "news!\p"
	.string "Those pesky {COLOR RED}Rebels{COLOR DARK_GRAY} have finally left\n"
	.string "Oldale Warehouse. The town is safe\l"
	.string "again!$"

OldaleDevonGrunts_Text_7:
# 751 "data/maps/OldaleTown/scripts.pory"
	.string "They must have caught wind of\n"
	.string "reinforcements coming, and didn't feel\l"
	.string "like spending the rest of their lives on\l"
	.string "{COLOR RED}Dewford Prison{COLOR DARK_GRAY}.$"

OldaleDevonGrunts_Text_8:
# 755 "data/maps/OldaleTown/scripts.pory"
	.string "Most likely! So... I suppose you want to\n"
	.string "go through Route 102?$"

OldaleDevonGrunts_Text_9:
# 759 "data/maps/OldaleTown/scripts.pory"
	.string "I see... well, I'm sorry to say...\p"
	.string "In the Rebel Zone, when it's not one\n"
	.string "thing, it's the other, you know?$"

OldaleDevonGrunts_Text_10:
# 762 "data/maps/OldaleTown/scripts.pory"
	.string "We have one of our scientists searching\n"
	.string "Route 102 for a very dangerous\l"
	.string "Pokémon.\p"
	.string "It's the next species on the list of\n"
	.string "Pokémon to be {COLOR BLUE}safened{COLOR DARK_GRAY}, and we can't let\l"
	.string "his work be disturbed$"

OldaleDevonGrunts_Text_11:
# 767 "data/maps/OldaleTown/scripts.pory"
	.string "I'm afraid so. But don't worry - these\n"
	.string "tasks usually take from 3 to 4 months.\p"
	.string "And what's a little waiting if it means\n"
	.string "Hoenn becomes safer?$"

OldaleDevonGrunts_Text_12:
# 772 "data/maps/OldaleTown/scripts.pory"
	.string "Grand, then please enjoy this shith-... I\n"
	.string "mean, this cozy, cute sleepy town!$"

OldaleRival_Text_0:
# 791 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... I saw you talking with\n"
	.string "those enemy soldiers just now.\p"
	.string "Don't you KNOW by now!? You cannot\n"
	.string "reason with the enemy.$"

OldaleRival_Text_1:
# 793 "data/maps/OldaleTown/scripts.pory"
	.string "You can only {COLOR RED}FIGHT{COLOR DARK_GRAY} it!$"

OldaleRival_Text_2:
# 794 "data/maps/OldaleTown/scripts.pory"
	.string "But I understand. It was two versus\n"
	.string "one. Don't worry, I am here now.$"

OldaleRival_Text_3:
# 795 "data/maps/OldaleTown/scripts.pory"
	.string "Let's show those Kantonians they can't\n"
	.string "take our country! LEAD THE WAY,\l"
	.string "{PLAYER}.$"

OldaleRivalfollowchat_Text_0:
# 810 "data/maps/OldaleTown/scripts.pory"
	.string "Let's go, {PLAYER} - those Kantonians\n"
	.string "are on the {COLOR RED}western exit of Oldale Town!{COLOR DARK_GRAY}$"

OldaleRivalfollowchat_Text_1:
# 812 "data/maps/OldaleTown/scripts.pory"
	.string "Let's kick their ass all the way to their\n"
	.string "miserable region across the sea!$"

OldaleRivalDontLeaveOldaleto101_Text_0:
# 818 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!?$"

OldaleRivalDontLeaveOldaleto101_Text_1:
# 820 "data/maps/OldaleTown/scripts.pory"
	.string "We have already secured the southern\n"
	.string "front, remember!? Thanks to your\l"
	.string "glorious victory!$"

OldaleRivalDontLeaveOldaleto101_Text_2:
# 823 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the next battle?$"

OldaleRivalDontLeaveOldaleto101_Text_3:
# 826 "data/maps/OldaleTown/scripts.pory"
	.string "Very well... I'll be keeping an eye on\n"
	.string "them. Don't take long!$"

OldaleRivalDontLeaveOldaleto101_Text_4:
# 837 "data/maps/OldaleTown/scripts.pory"
	.string "Let's not delay then. I'm as ready as\n"
	.string "I'll ever be!$"

OldaleWareHouseSign_Text_0:
# 847 "data/maps/OldaleTown/scripts.pory"
	.string "East - Oldale Warehouse.$"

OldaleMotorBike_Text_0:
# 853 "data/maps/OldaleTown/scripts.pory"
	.string "A motorbike. A decal on its die reads\n"
	.string "'Rebel 4 Life'.$"

OldaleCar_Text_0:
# 859 "data/maps/OldaleTown/scripts.pory"
	.string "The car seems to have been parked for\n"
	.string "some time.$"

OldaleBike_Text_0:
# 866 "data/maps/OldaleTown/scripts.pory"
	.string "The bike has tons of locks on the\n"
	.string "wheels, to discourage theft.$"

OldalePlant_Text_0:
# 873 "data/maps/OldaleTown/scripts.pory"
	.string "The plants are on the same state than\n"
	.string "the trees around...\p"
	.string "On their way to wither.$"

OldaleDLCWindow_Text_0:
# 881 "data/maps/OldaleTown/scripts.pory"
	.string "You can see the DLC's library through\n"
	.string "the window.\p"
	.string "The library's clerk is browsing an...\n"
	.string "'explicit' website.$"

OldaleRivalDontLeaveOldaleto103_Text_0:
# 906 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? The\n"
	.string "enemy is not this way!$"

OldaleRivalDontLeaveOldaleto103_Text_1:
# 908 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the battle?$"

OldaleRivalnoleavetoWhouse_Text_0:
# 933 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? This\n"
	.string "way is to the {COLOR GREEN}warehouse{COLOR DARK_GRAY}!$"

OldaleRivalnoleavetoWhouse_Text_1:
# 935 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you want to resupply there\n"
	.string "before the battle?$"

OldaleRivalnoleavetoWhouse_Text_2:
# 938 "data/maps/OldaleTown/scripts.pory"
	.string "Aah, smart thinking! I'll keep an eye on\n"
	.string "those Kantonians. Don't take long!$"

OldaleWarehouseRebelGuard_Text_0:
# 965 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 972 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 974 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 976 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you that not every Rebel is\n"
	.string "like him!$"

OldaleWarehouseRebelGuard_Text_4:
# 981 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 984 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 1010 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 1017 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only broken clankers in\n"
	.string "this grass! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 1026 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 1066 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 1073 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 1075 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 1093 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

DevonGruntFOutro::
# 704 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 707 "data/maps/OldaleTown/scripts.pory"
	.string "No, not this time!$"

RebelOldale_Outro::
# 999 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
