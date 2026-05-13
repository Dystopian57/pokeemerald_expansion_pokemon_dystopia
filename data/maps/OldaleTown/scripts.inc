# 1 "data/maps/OldaleTown/scripts.pory"


OldaleTown_MapScripts::
# 9 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleWeather
# 10 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GenderedSpriteOldale
# 12 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleWeather
# 13 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GenderedSpriteOldale
	.byte 0


GenderedSpriteOldale::
# 18 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


TimeofDayTest::
# 23 "data/maps/OldaleTown/scripts.pory"
	lockall
# 24 "data/maps/OldaleTown/scripts.pory"
	gettimeofday
# 25 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq TimeofDayTest_2
TimeofDayTest_1:
# 29 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq TimeofDayTest_5
TimeofDayTest_4:
# 33 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq TimeofDayTest_8
TimeofDayTest_7:
# 37 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq TimeofDayTest_11
TimeofDayTest_10:
# 40 "data/maps/OldaleTown/scripts.pory"
endoftimeofdaytest:
# 41 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

TimeofDayTest_2:
# 26 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_0
# 27 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_1

TimeofDayTest_5:
# 30 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_1
# 31 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_4

TimeofDayTest_8:
# 34 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_2
# 35 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_7

TimeofDayTest_11:
# 38 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_3
# 39 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_10


OldaleWeather::
# 47 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 50 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 53 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 48 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 51 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 54 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


ConArtist103Rewards::
# 59 "data/maps/OldaleTown/scripts.pory"
	lock
# 60 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 61 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 62 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_2
# 111 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_14
# 112 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
ConArtist103Rewards_1:
# 114 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 115 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 64 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 65 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 66 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 67 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 68 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 70 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 74 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 75 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_6
ConArtist103Rewards_5:
# 103 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_8
	goto ConArtist103Rewards_1

ConArtist103Rewards_6:
# 76 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 77 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 78 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_6, ConArtist103Rewards_Text_7, ConArtist103Rewards_Text_8, ConArtist103Rewards_Text_9
# 79 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_11
ConArtist103Rewards_10:
# 84 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_14
ConArtist103Rewards_13:
# 89 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_17
ConArtist103Rewards_16:
# 97 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_19
	goto ConArtist103Rewards_5

ConArtist103Rewards_8:
# 104 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 105 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_13
# 107 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_1

ConArtist103Rewards_11:
# 80 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 81 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_10

ConArtist103Rewards_14:
# 85 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
# 86 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_13

ConArtist103Rewards_17:
# 90 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_12
# 94 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_16

ConArtist103Rewards_19:
# 98 "data/maps/OldaleTown/scripts.pory"
	goto refusedeggs
	goto ConArtist103Rewards_5


OldaleVendingMachine::
# 120 "data/maps/OldaleTown/scripts.pory"
	lock
# 121 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 122 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 123 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 126 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 179 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 232 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 284 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 287 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 288 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 289 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 127 "data/maps/OldaleTown/scripts.pory"
	checkmoney 50
# 128 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 173 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 180 "data/maps/OldaleTown/scripts.pory"
	checkmoney 70
# 181 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 226 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 129 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 130 "data/maps/OldaleTown/scripts.pory"
	waitse
# 131 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 133 "data/maps/OldaleTown/scripts.pory"
	random 4
# 134 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 135 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 137 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 138 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 139 "data/maps/OldaleTown/scripts.pory"
	waitse
# 140 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 141 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 142 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 143 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 145 "data/maps/OldaleTown/scripts.pory"
	random 20
# 146 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 147 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 149 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 150 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 151 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 152 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 153 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 155 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 156 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 157 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 158 "data/maps/OldaleTown/scripts.pory"
	waitse
# 159 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 161 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 162 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 167 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 233 "data/maps/OldaleTown/scripts.pory"
	checkmoney 80
# 234 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 279 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 182 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 183 "data/maps/OldaleTown/scripts.pory"
	waitse
# 184 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 186 "data/maps/OldaleTown/scripts.pory"
	random 4
# 187 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, sodagotstuck
# 188 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotsoda
# 190 "data/maps/OldaleTown/scripts.pory"
gotsoda:
# 191 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 192 "data/maps/OldaleTown/scripts.pory"
	waitse
# 193 "data/maps/OldaleTown/scripts.pory"
	removemoney 70
# 194 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 195 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 196 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 198 "data/maps/OldaleTown/scripts.pory"
	random 20
# 199 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 200 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrasoda
# 202 "data/maps/OldaleTown/scripts.pory"
gotextrasoda:
# 203 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 204 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 205 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 206 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 208 "data/maps/OldaleTown/scripts.pory"
sodagotstuck:
# 209 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 210 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 211 "data/maps/OldaleTown/scripts.pory"
	waitse
# 212 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 214 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 215 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 220 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 174 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 163 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 164 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 285 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 235 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 236 "data/maps/OldaleTown/scripts.pory"
	waitse
# 237 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 239 "data/maps/OldaleTown/scripts.pory"
	random 4
# 240 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, coffeegotstuck
# 241 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotcoffee
# 243 "data/maps/OldaleTown/scripts.pory"
gotcoffee:
# 244 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 245 "data/maps/OldaleTown/scripts.pory"
	waitse
# 246 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 247 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 248 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 249 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 251 "data/maps/OldaleTown/scripts.pory"
	random 20
# 252 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 253 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextracoffee
# 255 "data/maps/OldaleTown/scripts.pory"
gotextracoffee:
# 256 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 257 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 258 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 259 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 261 "data/maps/OldaleTown/scripts.pory"
coffeegotstuck:
# 262 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 263 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 264 "data/maps/OldaleTown/scripts.pory"
	waitse
# 265 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 267 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 268 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 273 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 227 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 216 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 217 "data/maps/OldaleTown/scripts.pory"
	goto gotsoda
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 168 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 280 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 269 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 270 "data/maps/OldaleTown/scripts.pory"
	goto gotcoffee
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 221 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 274 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 294 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 295 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 296 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 297 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 298 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 299 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 304 "data/maps/OldaleTown/scripts.pory"
	lock
# 305 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 306 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 310 "data/maps/OldaleTown/scripts.pory"
	lock
# 311 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 312 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 316 "data/maps/OldaleTown/scripts.pory"
	lock
# 317 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 318 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 322 "data/maps/OldaleTown/scripts.pory"
	lockall
# 323 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 324 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 329 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 334 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 339 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 344 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 325 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 326 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 330 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 331 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 335 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 336 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 340 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 341 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 348 "data/maps/OldaleTown/scripts.pory"
	lock
# 349 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 350 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, ConArtist103Rewards_Movement_0
# 352 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_1
# 359 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
# 363 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_1:
# 354 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	return


OldaleOutsideOldGuy::
# 375 "data/maps/OldaleTown/scripts.pory"
	lockall
# 376 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 377 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 381 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 385 "data/maps/OldaleTown/scripts.pory"
	lock
# 386 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 387 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 388 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 389 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 390 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 391 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 392 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 393 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 394 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 395 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 396 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 397 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 401 "data/maps/OldaleTown/scripts.pory"
	lock
# 402 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 403 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 404 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 405 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 407 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 408 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 409 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 410 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 413 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 414 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 415 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 417 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 418 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 423 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 427 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 428 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 429 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 430 "data/maps/OldaleTown/scripts.pory"
	waitse
# 431 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 432 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 434 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 437 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 440 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 441 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 442 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 443 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 444 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 445 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 446 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 448 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 449 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 450 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 451 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 453 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 454 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 455 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 456 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 459 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 460 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 461 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 462 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 465 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 466 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 468 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 472 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 559 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 560 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 561 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 562 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 563 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 565 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 566 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 567 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 568 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 570 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 571 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 572 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 573 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 575 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 576 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 577 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 578 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 580 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 581 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 582 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 583 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 586 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 587 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 588 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 589 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 590 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 591 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 592 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 593 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 595 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 596 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 597 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 598 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 599 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 600 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 601 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 602 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 603 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 604 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 419 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 424 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 435 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 438 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 469 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 473 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 474 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 475 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 476 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 479 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 480 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 481 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 482 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 483 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 485 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 486 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 487 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 488 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 491 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 492 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 493 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 494 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 495 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 497 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 498 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 500 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 504 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 510 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 511 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 512 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 513 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 516 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 517 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 518 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 519 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 521 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 522 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 523 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 524 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 526 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 527 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 528 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 529 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 531 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 532 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 533 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 534 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 536 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 537 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 538 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 539 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 540 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 542 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 543 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 544 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 545 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 546 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 547 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 549 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 550 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 551 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 554 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 555 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 501 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 505 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 506 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 507 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 508 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_22


OldaleCamelia::
# 608 "data/maps/OldaleTown/scripts.pory"
	lock
# 610 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 635 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 636 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 637 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 638 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 640 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 641 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 642 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 643 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 646 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 647 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 613 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 614 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, ConArtist103Rewards_Movement_0
# 615 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 616 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 617 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 620 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 621 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 622 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 623 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 625 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 626 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 627 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 628 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


Rivalfollowchat::
# 651 "data/maps/OldaleTown/scripts.pory"
	lock
# 652 "data/maps/OldaleTown/scripts.pory"
	msgbox Rivalfollowchat_Text_0
# 653 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalFollower::
# 657 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 658 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalFollower_2
OldaleRivalFollower_1:
# 661 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalFollower_4
	return

OldaleRivalFollower_2:
# 659 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, Rivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRivalFollower_1

OldaleRivalFollower_4:
# 662 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, Rivalfollowchat, PARTNER_RIVAL_MALE
	return


OldaleDevonGrunts::
# 674 "data/maps/OldaleTown/scripts.pory"
	lock
# 675 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 676 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 678 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 679 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_2
OldaleDevonGrunts_1:
# 690 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_5
OldaleDevonGrunts_4:
# 707 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 681 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 682 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 683 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_0
# 684 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
# 686 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 687 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_5:
# 691 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 692 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 695 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 696 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 700 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_2
# 701 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 703 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 704 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_4


OldaleWarehouseRebelGuard::
# 717 "data/maps/OldaleTown/scripts.pory"
	lockall
# 718 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 719 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 720 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleVendingMachine_Movement_0
# 721 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 722 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 724 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 725 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 727 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 730 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 733 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 735 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 736 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 737 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_0
# 738 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 740 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 741 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 742 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 743 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_1
# 744 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 745 "data/maps/OldaleTown/scripts.pory"
	removeobject 19
# 746 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 747 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 748 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 750 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 726 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 728 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 759 "data/maps/OldaleTown/scripts.pory"
	lock
# 760 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 761 "data/maps/OldaleTown/scripts.pory"
	applymovement 26, OldaleTruckRebel_Movement_0
# 762 "data/maps/OldaleTown/scripts.pory"
	waitmovement 26
# 764 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 766 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 770 "data/maps/OldaleTown/scripts.pory"
	lock
# 771 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 772 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 776 "data/maps/OldaleTown/scripts.pory"
	lock
# 777 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 778 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 779 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 780 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 781 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleCarRebelApproach0_Movement_0
# 782 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 783 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach0_Movement_1
# 784 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 785 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseRebelGuard_Movement_0
# 786 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 790 "data/maps/OldaleTown/scripts.pory"
	lock
# 791 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 792 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 793 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 794 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 795 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 796 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach1_Movement_0
# 797 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 798 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleCarRebelApproach0_Movement_0
# 799 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 803 "data/maps/OldaleTown/scripts.pory"
	lock
# 804 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 805 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 806 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 807 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 808 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 809 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 810 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 811 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleCarRebelApproach0_Movement_0
# 812 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 817 "data/maps/OldaleTown/scripts.pory"
	lock
# 818 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 819 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 820 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 822 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 823 "data/maps/OldaleTown/scripts.pory"
	waitse
# 824 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 825 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 826 "data/maps/OldaleTown/scripts.pory"
	waitse
# 827 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 828 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 829 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 830 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 831 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebel_Movement_0
# 832 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 833 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 834 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 835 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 836 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 837 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 838 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 839 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 846 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_0
# 847 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 849 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 850 "data/maps/OldaleTown/scripts.pory"
	waitse
# 851 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 852 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 853 "data/maps/OldaleTown/scripts.pory"
	waitse
# 854 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 855 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 856 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 857 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 858 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 859 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 860 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 861 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_1
# 862 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 863 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 864 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 865 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 866 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 867 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 868 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 869 "data/maps/OldaleTown/scripts.pory"
	release
	return


# 61 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 61 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 156 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 156 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 387 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 387 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 387 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 387 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 387 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 387 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 387 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 392 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 392 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 392 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 392 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 392 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 392 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 392 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 395 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 395 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 428 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 428 "data/maps/OldaleTown/scripts.pory"
	face_left
# 428 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 441 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 441 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 441 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 442 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 442 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 492 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 492 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 550 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 550 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 681 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 681 "data/maps/OldaleTown/scripts.pory"
	face_player
# 681 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 695 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 695 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 695 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 700 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 700 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 700 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 737 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_0:
# 737 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 743 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_1:
# 743 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 761 "data/maps/OldaleTown/scripts.pory"
OldaleTruckRebel_Movement_0:
# 761 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 781 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 781 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 783 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_1:
# 783 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 783 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 796 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 796 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 809 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 809 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 831 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 831 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 831 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 831 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 831 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 831 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 831 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 831 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 831 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 846 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 846 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 846 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 861 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
# 861 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 861 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 861 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 861 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 861 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 861 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 861 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

TimeofDayTest_Text_0:
# 26 "data/maps/OldaleTown/scripts.pory"
	.string "Morning.$"

TimeofDayTest_Text_1:
# 30 "data/maps/OldaleTown/scripts.pory"
	.string "Day.$"

TimeofDayTest_Text_2:
# 34 "data/maps/OldaleTown/scripts.pory"
	.string "Evening.$"

TimeofDayTest_Text_3:
# 38 "data/maps/OldaleTown/scripts.pory"
	.string "Night.$"

ConArtist103Rewards_Text_0:
# 65 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 68 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 70 "data/maps/OldaleTown/scripts.pory"
	.string "Look, I know I said I'd give you some\n"
	.string "cash but...\p"
	.string "All I have is my wares! The cash I get\n"
	.string "when I sell them, duh!\p"
	.string "Speaking of wares - would you like to\n"
	.string "take a look at them?$"

ConArtist103Rewards_Text_3:
# 74 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 74 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 76 "data/maps/OldaleTown/scripts.pory"
	.string "Hehe, of course you do... here's what I\n"
	.string "got! Only 500 each!$"

ConArtist103Rewards_Text_6:
# 78 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 1$"

ConArtist103Rewards_Text_7:
# 78 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 2$"

ConArtist103Rewards_Text_8:
# 78 "data/maps/OldaleTown/scripts.pory"
	.string "Rosy Egg$"

ConArtist103Rewards_Text_9:
# 78 "data/maps/OldaleTown/scripts.pory"
	.string "Not really$"

ConArtist103Rewards_Text_10:
# 80 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 1 here$"

ConArtist103Rewards_Text_11:
# 85 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 2 here$"

ConArtist103Rewards_Text_12:
# 90 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 3 here$"

ConArtist103Rewards_Text_13:
# 105 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to Petalburg soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_14:
# 111 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in some eggs?$"

OldaleVendingMachine_Text_0:
# 121 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 123 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 50¥$"

OldaleVendingMachine_Text_2:
# 123 "data/maps/OldaleTown/scripts.pory"
	.string "Soda Pop - 70¥$"

OldaleVendingMachine_Text_3:
# 123 "data/maps/OldaleTown/scripts.pory"
	.string "Strong Coffee - 80¥$"

OldaleVendingMachine_Text_4:
# 123 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 141 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 150 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 159 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 161 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 168 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 174 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 194 "data/maps/OldaleTown/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 203 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 212 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 221 "data/maps/OldaleTown/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 247 "data/maps/OldaleTown/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_16:
# 256 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 265 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 274 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 305 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 311 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 317 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

OldaleOutsideHikerGuy_Text_0:
# 326 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 336 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 341 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkNPC_Text_0:
# 354 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the Rebel Zone\n"
	.string "who get crazy rich by selling ores,\l"
	.string "pearls and other high value items.\p"
	.string "Do you know where to find those\n"
	.string "though? Cause I sure don't, or I\l"
	.string "wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 359 "data/maps/OldaleTown/scripts.pory"
	.string "Uhm... did you just dig through that\n"
	.string "trash can over there?\p"
	.string "If you need pokeyen, you should get a\n"
	.string "Devon Radar and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideOldGuy_Text_0:
# 377 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 405 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 419 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 424 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 435 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 438 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 446 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 451 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 456 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and old man Norman!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 462 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 476 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 483 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the Rebels, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 488 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 495 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 508 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 513 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 519 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 524 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 529 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 534 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 540 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's what rebelssay...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 546 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, ome join me in Route 103! I'll\n"
	.string "be waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 563 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 568 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... Norman told us\n"
	.string "we'd need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 573 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 578 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 583 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 593 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 617 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 623 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 628 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "Norman will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 638 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 643 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

Rivalfollowchat_Text_0:
# 652 "data/maps/OldaleTown/scripts.pory"
	.string "Let's quick some Devon ass.$"

OldaleDevonGrunts_Text_0:
# 675 "data/maps/OldaleTown/scripts.pory"
	.string "Multi-battle test.$"

OldaleDevonGrunts_Text_1:
# 682 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but due to the level of Rebel\n"
	.string "activity on the eastern warehouse, we\l"
	.string "can't let anyone leave Oldale at\l"
	.string "present.$"

OldaleDevonGrunts_Text_2:
# 684 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to Rustboro... but don't worry!\p"
	.string "To deal with the threat, we have\n"
	.string "requested reinforcements from Devon\l"
	.string "HQ.$"

OldaleDevonGrunts_Text_3:
# 687 "data/maps/OldaleTown/scripts.pory"
	.string "Indeed! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_4:
# 692 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Pokéball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_5:
# 696 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 701 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseRebelGuard_Text_0:
# 719 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 726 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 728 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 730 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you, not every Rebel is like\n"
	.string "him!$"

OldaleWarehouseRebelGuard_Text_4:
# 735 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 738 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 764 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 771 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only broken clankers in\n"
	.string "this grass! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 780 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 820 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 827 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 829 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 847 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

DevonGruntFOutro::
# 666 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 669 "data/maps/OldaleTown/scripts.pory"
	.string "No I was not!.$"

RebelOldale_Outro::
# 753 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
