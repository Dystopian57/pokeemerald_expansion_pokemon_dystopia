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


TimeofDayTest::
# 24 "data/maps/OldaleTown/scripts.pory"
	lockall
# 25 "data/maps/OldaleTown/scripts.pory"
	gettimeofday
# 26 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq TimeofDayTest_2
TimeofDayTest_1:
# 30 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq TimeofDayTest_5
TimeofDayTest_4:
# 34 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq TimeofDayTest_8
TimeofDayTest_7:
# 38 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq TimeofDayTest_11
TimeofDayTest_10:
# 41 "data/maps/OldaleTown/scripts.pory"
endoftimeofdaytest:
# 42 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

TimeofDayTest_2:
# 27 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_0
# 28 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_1

TimeofDayTest_5:
# 31 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_1
# 32 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_4

TimeofDayTest_8:
# 35 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_2
# 36 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_7

TimeofDayTest_11:
# 39 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_3
# 40 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_10


OldaleWeather::
# 48 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 51 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 54 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 49 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 52 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 55 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


ConArtist103Rewards::
# 60 "data/maps/OldaleTown/scripts.pory"
	lock
# 61 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 62 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 63 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_2
# 112 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_14
# 113 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
ConArtist103Rewards_1:
# 115 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 116 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 65 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 66 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 67 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 68 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 69 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 71 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 75 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 76 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_6
ConArtist103Rewards_5:
# 104 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_8
	goto ConArtist103Rewards_1

ConArtist103Rewards_6:
# 77 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 78 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 79 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_6, ConArtist103Rewards_Text_7, ConArtist103Rewards_Text_8, ConArtist103Rewards_Text_9
# 80 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_11
ConArtist103Rewards_10:
# 85 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_14
ConArtist103Rewards_13:
# 90 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_17
ConArtist103Rewards_16:
# 98 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_19
	goto ConArtist103Rewards_5

ConArtist103Rewards_8:
# 105 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 106 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_13
# 108 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_1

ConArtist103Rewards_11:
# 81 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 82 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_10

ConArtist103Rewards_14:
# 86 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
# 87 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_13

ConArtist103Rewards_17:
# 91 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_12
# 95 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_16

ConArtist103Rewards_19:
# 99 "data/maps/OldaleTown/scripts.pory"
	goto refusedeggs
	goto ConArtist103Rewards_5


OldaleVendingMachine::
# 121 "data/maps/OldaleTown/scripts.pory"
	lock
# 122 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 123 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 124 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 127 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 180 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 233 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 285 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 288 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 289 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 290 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 128 "data/maps/OldaleTown/scripts.pory"
	checkmoney 50
# 129 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 174 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 181 "data/maps/OldaleTown/scripts.pory"
	checkmoney 70
# 182 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 227 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 130 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 131 "data/maps/OldaleTown/scripts.pory"
	waitse
# 132 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 134 "data/maps/OldaleTown/scripts.pory"
	random 4
# 135 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 136 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 138 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 139 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 140 "data/maps/OldaleTown/scripts.pory"
	waitse
# 141 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 142 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 143 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 144 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 146 "data/maps/OldaleTown/scripts.pory"
	random 20
# 147 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 148 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 150 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 151 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 152 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 153 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 154 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 156 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 157 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 158 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 159 "data/maps/OldaleTown/scripts.pory"
	waitse
# 160 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 162 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 163 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 168 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 234 "data/maps/OldaleTown/scripts.pory"
	checkmoney 80
# 235 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 280 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 183 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 184 "data/maps/OldaleTown/scripts.pory"
	waitse
# 185 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 187 "data/maps/OldaleTown/scripts.pory"
	random 4
# 188 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, sodagotstuck
# 189 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotsoda
# 191 "data/maps/OldaleTown/scripts.pory"
gotsoda:
# 192 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 193 "data/maps/OldaleTown/scripts.pory"
	waitse
# 194 "data/maps/OldaleTown/scripts.pory"
	removemoney 70
# 195 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 196 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 197 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 199 "data/maps/OldaleTown/scripts.pory"
	random 20
# 200 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 201 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrasoda
# 203 "data/maps/OldaleTown/scripts.pory"
gotextrasoda:
# 204 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 205 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 206 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 207 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 209 "data/maps/OldaleTown/scripts.pory"
sodagotstuck:
# 210 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 211 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 212 "data/maps/OldaleTown/scripts.pory"
	waitse
# 213 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 215 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 216 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 221 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 175 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 164 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 165 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 286 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 236 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 237 "data/maps/OldaleTown/scripts.pory"
	waitse
# 238 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 240 "data/maps/OldaleTown/scripts.pory"
	random 4
# 241 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, coffeegotstuck
# 242 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotcoffee
# 244 "data/maps/OldaleTown/scripts.pory"
gotcoffee:
# 245 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 246 "data/maps/OldaleTown/scripts.pory"
	waitse
# 247 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 248 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 249 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 250 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 252 "data/maps/OldaleTown/scripts.pory"
	random 20
# 253 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 254 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextracoffee
# 256 "data/maps/OldaleTown/scripts.pory"
gotextracoffee:
# 257 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 258 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 259 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 260 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 262 "data/maps/OldaleTown/scripts.pory"
coffeegotstuck:
# 263 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 264 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 265 "data/maps/OldaleTown/scripts.pory"
	waitse
# 266 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 268 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 269 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 274 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 228 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 217 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 218 "data/maps/OldaleTown/scripts.pory"
	goto gotsoda
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 169 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 281 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 270 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 271 "data/maps/OldaleTown/scripts.pory"
	goto gotcoffee
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 222 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 275 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 295 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 296 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 297 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 298 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 299 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 300 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 305 "data/maps/OldaleTown/scripts.pory"
	lock
# 306 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 307 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 311 "data/maps/OldaleTown/scripts.pory"
	lock
# 312 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 313 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 317 "data/maps/OldaleTown/scripts.pory"
	lock
# 318 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 319 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 323 "data/maps/OldaleTown/scripts.pory"
	lockall
# 324 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 325 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 330 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 335 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 340 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 345 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 326 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 327 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 331 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 332 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 336 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 337 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 341 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 342 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 349 "data/maps/OldaleTown/scripts.pory"
	lock
# 350 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 351 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, ConArtist103Rewards_Movement_0
# 353 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_3
OldaleOutsideParkNPC_1:
# 358 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_8
OldaleOutsideParkNPC_6:
# 365 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_13
OldaleOutsideParkNPC_11:
# 371 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_18
OldaleOutsideParkNPC_16:
# 377 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_2:
# 355 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_3:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_2
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_7:
# 360 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_8:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_7
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_12:
# 367 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_2
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_13:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_12
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_17:
# 373 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_3
	goto OldaleOutsideParkNPC_16

OldaleOutsideParkNPC_18:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_17
	goto OldaleOutsideParkNPC_16


OldaleOutsideOldGuy::
# 387 "data/maps/OldaleTown/scripts.pory"
	lockall
# 388 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 389 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 393 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldWoman::
# 397 "data/maps/OldaleTown/scripts.pory"
	lockall
# 398 "data/maps/OldaleTown/scripts.pory"
	applymovement 31, ConArtist103Rewards_Movement_0
# 399 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldWoman_Text_0
# 401 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 405 "data/maps/OldaleTown/scripts.pory"
	lock
# 406 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 407 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 408 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 409 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 410 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 411 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 412 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 413 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 414 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 415 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 416 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 417 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 421 "data/maps/OldaleTown/scripts.pory"
	lock
# 422 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 423 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 424 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 425 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 427 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 428 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 429 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 430 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 433 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 434 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 435 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 437 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 438 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 443 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 447 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 448 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 449 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 450 "data/maps/OldaleTown/scripts.pory"
	waitse
# 451 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 452 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 454 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 457 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 460 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 461 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 462 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 463 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 464 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 465 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 466 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 468 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 469 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 470 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 471 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 473 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 474 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 475 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 476 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 479 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 480 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 481 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 482 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 485 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 486 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 488 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 492 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 579 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 580 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 581 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 582 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 583 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 585 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 586 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 587 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 588 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 590 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 591 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 592 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 593 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 595 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 596 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 597 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 598 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 600 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 601 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 602 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 603 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 606 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 607 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 608 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 609 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 610 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 611 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 612 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 613 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 615 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 616 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 617 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 618 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 619 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 620 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 621 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 622 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 623 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 624 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 439 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 444 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 455 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 458 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 489 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 493 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 494 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 495 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 496 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 499 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 500 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 501 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 502 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 503 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 505 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 506 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 507 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 508 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 511 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 512 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 513 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 514 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 515 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 517 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 518 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 520 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 524 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 530 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 531 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 532 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 533 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 536 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 537 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 538 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 539 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 541 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 542 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 543 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 544 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 546 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 547 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 548 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 549 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 551 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 552 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 553 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 554 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 556 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 557 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 558 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 559 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 560 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 562 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 563 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 564 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 565 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 566 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 567 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 569 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 570 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 571 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 574 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 575 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 521 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 525 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 526 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 527 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 528 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_22


OldaleCamelia::
# 628 "data/maps/OldaleTown/scripts.pory"
	lock
# 630 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 655 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 656 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 657 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 658 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 660 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 661 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 662 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 663 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 666 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 667 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 633 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 634 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, ConArtist103Rewards_Movement_0
# 635 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 636 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 637 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 640 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 641 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 642 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 643 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 645 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 646 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 647 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 648 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


OldaleDevonGrunts::
# 680 "data/maps/OldaleTown/scripts.pory"
	lock
# 681 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 682 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_2
OldaleDevonGrunts_1:
# 695 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_5
OldaleDevonGrunts_4:
# 713 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_eq OldaleDevonGrunts_8
OldaleDevonGrunts_7:
# 750 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 752 "data/maps/OldaleTown/scripts.pory"
	setflag devonsdontblock102
# 753 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 684 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 685 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 688 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_0
# 689 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 691 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 692 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_5:
# 696 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 697 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
# 700 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 701 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 705 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_2
# 706 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 708 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 709 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_4

OldaleDevonGrunts_8:
# 714 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 715 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 718 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 719 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_7
# 721 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 722 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 723 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_8
# 724 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 726 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleDevonGrunts_11
OldaleDevonGrunts_10:
# 739 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleDevonGrunts_14
OldaleDevonGrunts_13:
# 742 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 743 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 745 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
	goto OldaleDevonGrunts_7

OldaleDevonGrunts_11:
# 727 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_9
# 729 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_3
# 730 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_10
# 734 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 735 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_11
	goto OldaleDevonGrunts_10

OldaleDevonGrunts_14:
# 740 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_12
	goto OldaleDevonGrunts_13


OldaleRival::
# 757 "data/maps/OldaleTown/scripts.pory"
	lock
# 758 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 759 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_0
# 761 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_1
# 762 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_2
# 763 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_3
# 765 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 4
# 767 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 768 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_2
OldaleRival_1:
# 771 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_5
OldaleRival_4:
# 773 "data/maps/OldaleTown/scripts.pory"
	removeobject 22
# 774 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
	return

OldaleRival_2:
# 769 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRival_1

OldaleRival_5:
# 772 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_MALE
	goto OldaleRival_4


OldaleRivalfollowchat::
# 778 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_0
# 780 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_1
	return


OldaleRivalDontLeaveOldaleto101::
# 783 "data/maps/OldaleTown/scripts.pory"
	lock
# 784 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 785 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 786 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_0
# 788 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_1
# 791 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_2
# 792 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 793 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto101_2
OldaleRivalDontLeaveOldaleto101_1:
# 803 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto101_5
OldaleRivalDontLeaveOldaleto101_4:
# 809 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto101_2:
# 794 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 795 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 796 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 797 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 798 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 799 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 800 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
	goto OldaleRivalDontLeaveOldaleto101_1

OldaleRivalDontLeaveOldaleto101_5:
# 805 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 806 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 807 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto101_4


OldaleRivalDontLeaveOldaleto103::
# 813 "data/maps/OldaleTown/scripts.pory"
	lock
# 814 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 815 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 816 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_0
# 818 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_1
# 819 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 820 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto103_2
OldaleRivalDontLeaveOldaleto103_1:
# 830 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto103_5
OldaleRivalDontLeaveOldaleto103_4:
# 836 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto103_2:
# 821 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 822 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 823 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 824 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 825 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 826 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 827 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
	goto OldaleRivalDontLeaveOldaleto103_1

OldaleRivalDontLeaveOldaleto103_5:
# 832 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 833 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 834 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto103_4


OldaleRivalnoleavetoWhouse::
# 840 "data/maps/OldaleTown/scripts.pory"
	lock
# 841 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 842 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 843 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_0
# 845 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_1
# 846 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 847 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalnoleavetoWhouse_2
OldaleRivalnoleavetoWhouse_1:
# 857 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalnoleavetoWhouse_5
OldaleRivalnoleavetoWhouse_4:
# 863 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalnoleavetoWhouse_2:
# 848 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_2
# 849 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 850 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 851 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 852 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 853 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 854 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
	goto OldaleRivalnoleavetoWhouse_1

OldaleRivalnoleavetoWhouse_5:
# 859 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 860 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 861 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalnoleavetoWhouse_4


OldaleWarehouseRebelGuard::
# 873 "data/maps/OldaleTown/scripts.pory"
	lockall
# 874 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 875 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 876 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleVendingMachine_Movement_0
# 877 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 878 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 880 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 881 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 883 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 886 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 889 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 891 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 892 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 893 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleRivalDontLeaveOldaleto101_Movement_0
# 894 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 896 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 897 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 898 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 899 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleRivalDontLeaveOldaleto101_Movement_1
# 900 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 901 "data/maps/OldaleTown/scripts.pory"
	removeobject 19
# 902 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 903 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 904 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 906 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 882 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 884 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 915 "data/maps/OldaleTown/scripts.pory"
	lock
# 916 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 917 "data/maps/OldaleTown/scripts.pory"
	applymovement 26, OldaleTruckRebel_Movement_0
# 918 "data/maps/OldaleTown/scripts.pory"
	waitmovement 26
# 920 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 922 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 926 "data/maps/OldaleTown/scripts.pory"
	lock
# 927 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 928 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 932 "data/maps/OldaleTown/scripts.pory"
	lock
# 933 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 934 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 935 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 936 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 937 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 938 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 939 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach0_Movement_0
# 940 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 941 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 942 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 946 "data/maps/OldaleTown/scripts.pory"
	lock
# 947 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 948 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 949 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 950 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 951 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 952 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach1_Movement_0
# 953 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 954 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 955 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 959 "data/maps/OldaleTown/scripts.pory"
	lock
# 960 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 961 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 962 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 963 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 964 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 965 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 966 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 967 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 968 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 973 "data/maps/OldaleTown/scripts.pory"
	lock
# 974 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 975 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 976 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 978 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 979 "data/maps/OldaleTown/scripts.pory"
	waitse
# 980 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 981 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 982 "data/maps/OldaleTown/scripts.pory"
	waitse
# 983 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 984 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 985 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 986 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 987 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebel_Movement_0
# 988 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 989 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 990 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 991 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 992 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 993 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 994 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 995 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 1002 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_0
# 1003 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 1005 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1006 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1007 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1008 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 1009 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1010 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1011 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1012 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1013 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1014 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 1015 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1016 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1017 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_1
# 1018 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1019 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1020 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1021 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1022 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 1023 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1024 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1025 "data/maps/OldaleTown/scripts.pory"
	release
	return


# 62 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 62 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 157 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 157 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 407 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 407 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 407 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 407 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 407 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 407 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 407 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 412 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 412 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 412 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 412 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 412 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 412 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 412 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 415 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 415 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 448 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 448 "data/maps/OldaleTown/scripts.pory"
	face_left
# 448 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 461 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 461 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 461 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 462 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 462 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 512 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 512 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 570 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 570 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 684 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 684 "data/maps/OldaleTown/scripts.pory"
	face_player
# 684 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 700 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 700 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 700 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 705 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 705 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 705 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 729 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_3:
# 729 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 785 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_0:
# 785 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 806 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_1:
# 806 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 815 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto103_Movement_0:
# 815 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 860 "data/maps/OldaleTown/scripts.pory"
OldaleRivalnoleavetoWhouse_Movement_0:
# 860 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 917 "data/maps/OldaleTown/scripts.pory"
OldaleTruckRebel_Movement_0:
# 917 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 939 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 939 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 939 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 952 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 952 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 965 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 965 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 987 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 987 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 987 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 987 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 987 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 987 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 987 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 987 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 987 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1002 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 1002 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 1002 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1017 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
# 1017 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1017 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1017 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1017 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1017 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1017 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1017 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

TimeofDayTest_Text_0:
# 27 "data/maps/OldaleTown/scripts.pory"
	.string "Morning.$"

TimeofDayTest_Text_1:
# 31 "data/maps/OldaleTown/scripts.pory"
	.string "Day.$"

TimeofDayTest_Text_2:
# 35 "data/maps/OldaleTown/scripts.pory"
	.string "Evening.$"

TimeofDayTest_Text_3:
# 39 "data/maps/OldaleTown/scripts.pory"
	.string "Night.$"

ConArtist103Rewards_Text_0:
# 66 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 69 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 71 "data/maps/OldaleTown/scripts.pory"
	.string "Look, I know I said I'd give you some\n"
	.string "cash but...\p"
	.string "All I have is my wares! The cash I get\n"
	.string "when I sell them, duh!\p"
	.string "Speaking of wares - would you like to\n"
	.string "take a look at them?$"

ConArtist103Rewards_Text_3:
# 75 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 75 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 77 "data/maps/OldaleTown/scripts.pory"
	.string "Hehe, of course you do... here's what I\n"
	.string "got! Only 500 each!$"

ConArtist103Rewards_Text_6:
# 79 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 1$"

ConArtist103Rewards_Text_7:
# 79 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 2$"

ConArtist103Rewards_Text_8:
# 79 "data/maps/OldaleTown/scripts.pory"
	.string "Rosy Egg$"

ConArtist103Rewards_Text_9:
# 79 "data/maps/OldaleTown/scripts.pory"
	.string "Not really$"

ConArtist103Rewards_Text_10:
# 81 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 1 here$"

ConArtist103Rewards_Text_11:
# 86 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 2 here$"

ConArtist103Rewards_Text_12:
# 91 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 3 here$"

ConArtist103Rewards_Text_13:
# 106 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to Petalburg soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_14:
# 112 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in some eggs?$"

OldaleVendingMachine_Text_0:
# 122 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 124 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 50¥$"

OldaleVendingMachine_Text_2:
# 124 "data/maps/OldaleTown/scripts.pory"
	.string "Soda Pop - 70¥$"

OldaleVendingMachine_Text_3:
# 124 "data/maps/OldaleTown/scripts.pory"
	.string "Strong Coffee - 80¥$"

OldaleVendingMachine_Text_4:
# 124 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 142 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 151 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 160 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 162 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 169 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 175 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 195 "data/maps/OldaleTown/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 204 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 213 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 222 "data/maps/OldaleTown/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 248 "data/maps/OldaleTown/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_16:
# 257 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 266 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 275 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 306 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 312 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 318 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

OldaleOutsideHikerGuy_Text_0:
# 327 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 337 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 342 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkNPC_Text_0:
# 355 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the Rebel Zone\n"
	.string "who get crazy rich by finding treasure\l"
	.string "with their {COLOR BLUE}Object Spotters{COLOR DARK_GRAY}.\p"
	.string "Haven't managed to get my hands on one,\n"
	.string "or I wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 360 "data/maps/OldaleTown/scripts.pory"
	.string "So... I saw you digging through that\n"
	.string "trash can.\p"
	.string "If you need pokeyen, you should get an\n"
	.string "{COLOR BLUE}Object Spotter{COLOR DARK_GRAY} and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideParkNPC_Text_2:
# 367 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Why don't you try it right here? Who\n"
	.string "knows, you might find something!$"

OldaleOutsideParkNPC_Text_3:
# 373 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Hopefully something better than what\n"
	.string "you found in that trash can... ha-ha-ha!$"

OldaleOutsideOldGuy_Text_0:
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleOutsideOldWoman_Text_0:
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "Did you see the greenish rain just\n"
	.string "now...?\p"
	.string "The Weather Institute says it's not\n"
	.string "harmful on the short-term. But I worry\l"
	.string "about the long term...$"

OldaleTown_GotoTherapy_Text_0:
# 409 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 425 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 430 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 439 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 444 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 455 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 458 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 466 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 471 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 476 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and old man Norman!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 482 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 496 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 503 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the Rebels, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 508 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 515 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 528 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 533 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 539 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 544 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 549 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 554 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 560 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's what rebelssay...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 566 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, ome join me in Route 103! I'll\n"
	.string "be waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 583 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 588 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... Norman told us\n"
	.string "we'd need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 593 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 598 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 603 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 613 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 637 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 643 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 648 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "Norman will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 658 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 663 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

OldaleDevonGrunts_Text_0:
# 685 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but we can't let anyone\n"
	.string "through until the {COLOR RED}Rebels{COLOR DARK_GRAY} occupying\l"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY}, are dealt with.$"

OldaleDevonGrunts_Text_1:
# 689 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to New Rustboro... but don't\l"
	.string "worry!\p"
	.string "Reinforcements from Devon HQ are\n"
	.string "currently on the way.$"

OldaleDevonGrunts_Text_2:
# 692 "data/maps/OldaleTown/scripts.pory"
	.string "Yup! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_3:
# 697 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Devon Ball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_4:
# 701 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_5:
# 706 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 715 "data/maps/OldaleTown/scripts.pory"
	.string "Hello there, civilian! We have great\n"
	.string "news!\p"
	.string "Those pesky {COLOR RED}Rebels{COLOR DARK_GRAY} have finally left\n"
	.string "Oldale Warehouse. The town is safe\l"
	.string "again!$"

OldaleDevonGrunts_Text_7:
# 719 "data/maps/OldaleTown/scripts.pory"
	.string "They must have caught wind of\n"
	.string "reinforcements coming, and didn't feel\l"
	.string "like spending the rest of their lives on\l"
	.string "{COLOR RED}Dewford Prison{COLOR DARK_GRAY}.$"

OldaleDevonGrunts_Text_8:
# 723 "data/maps/OldaleTown/scripts.pory"
	.string "Most likely! So... I suppose you want to\n"
	.string "go through Route 102?$"

OldaleDevonGrunts_Text_9:
# 727 "data/maps/OldaleTown/scripts.pory"
	.string "I see... well, I'm sorry to say...\p"
	.string "In the Rebel Zone, when it's not one\n"
	.string "thing, it's the other, you know?$"

OldaleDevonGrunts_Text_10:
# 730 "data/maps/OldaleTown/scripts.pory"
	.string "We have one of our scientists searching\n"
	.string "Route 102 for a very dangerous\l"
	.string "Pokémon.\p"
	.string "It's the next species on the list of\n"
	.string "Pokémon to be {COLOR BLUE}safened{COLOR DARK_GRAY}, and we can't let\l"
	.string "his work be disturbed$"

OldaleDevonGrunts_Text_11:
# 735 "data/maps/OldaleTown/scripts.pory"
	.string "I'm afraid so. But don't worry - these\n"
	.string "tasks usually take from 3 to 4 months.\p"
	.string "And what's a little waiting if it means\n"
	.string "Hoenn becomes safer?$"

OldaleDevonGrunts_Text_12:
# 740 "data/maps/OldaleTown/scripts.pory"
	.string "Grand, then please enjoy this shith-... I\n"
	.string "mean, this cozy, cute sleepy town!$"

OldaleRival_Text_0:
# 759 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... I saw you talking with\n"
	.string "those enemy soldiers just now.\p"
	.string "Don't you KNOW by now!? You cannot\n"
	.string "reason with the enemy.$"

OldaleRival_Text_1:
# 761 "data/maps/OldaleTown/scripts.pory"
	.string "You can only {COLOR RED}FIGHT{COLOR DARK_GRAY} it!$"

OldaleRival_Text_2:
# 762 "data/maps/OldaleTown/scripts.pory"
	.string "But I understand. It was two versus\n"
	.string "one. Don't worry, I am here now.$"

OldaleRival_Text_3:
# 763 "data/maps/OldaleTown/scripts.pory"
	.string "Let's show those Kantonians they can't\n"
	.string "take our country! LEAD THE WAY,\l"
	.string "{PLAYER}.$"

OldaleRivalfollowchat_Text_0:
# 778 "data/maps/OldaleTown/scripts.pory"
	.string "Let's go, {PLAYER} - those Kantonians\n"
	.string "are on the {COLOR RED}western exit of Oldale Town!{COLOR DARK_GRAY}$"

OldaleRivalfollowchat_Text_1:
# 780 "data/maps/OldaleTown/scripts.pory"
	.string "Let's kick their ass all the way to their\n"
	.string "miserable region across the sea!$"

OldaleRivalDontLeaveOldaleto101_Text_0:
# 786 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!?$"

OldaleRivalDontLeaveOldaleto101_Text_1:
# 788 "data/maps/OldaleTown/scripts.pory"
	.string "We have already secured the southern\n"
	.string "front, remember!? Thanks to your\l"
	.string "glorious victory!$"

OldaleRivalDontLeaveOldaleto101_Text_2:
# 791 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the next battle?$"

OldaleRivalDontLeaveOldaleto101_Text_3:
# 794 "data/maps/OldaleTown/scripts.pory"
	.string "Very well... I'll be keeping an eye on\n"
	.string "them. Don't take long!$"

OldaleRivalDontLeaveOldaleto101_Text_4:
# 805 "data/maps/OldaleTown/scripts.pory"
	.string "Let's not delay then. I'm as ready as\n"
	.string "I'll ever be!$"

OldaleRivalDontLeaveOldaleto103_Text_0:
# 816 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? The\n"
	.string "enemy is not this way!$"

OldaleRivalDontLeaveOldaleto103_Text_1:
# 818 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the battle?$"

OldaleRivalnoleavetoWhouse_Text_0:
# 843 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? This\n"
	.string "way is to the {COLOR GREEN}warehouse{COLOR DARK_GRAY}!$"

OldaleRivalnoleavetoWhouse_Text_1:
# 845 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you want to resupply there\n"
	.string "before the battle?$"

OldaleRivalnoleavetoWhouse_Text_2:
# 848 "data/maps/OldaleTown/scripts.pory"
	.string "Aah, smart thinking! I'll keep an eye on\n"
	.string "those Kantonians. Don't take long!$"

OldaleWarehouseRebelGuard_Text_0:
# 875 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 882 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 884 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 886 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you that not every Rebel is\n"
	.string "like him!$"

OldaleWarehouseRebelGuard_Text_4:
# 891 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 894 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 920 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 927 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only broken clankers in\n"
	.string "this grass! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 936 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 976 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 983 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 985 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 1003 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

DevonGruntFOutro::
# 672 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 675 "data/maps/OldaleTown/scripts.pory"
	.string "No, not this time!$"

RebelOldale_Outro::
# 909 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
