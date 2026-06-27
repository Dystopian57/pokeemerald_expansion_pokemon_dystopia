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


BalsamCallAfterWarehouse::
# 32 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset BalsamtoldtogoseeNorman, BalsamCallAfterWarehouse_1
# 42 "data/maps/OldaleTown/scripts.pory"
	release
	return

BalsamCallAfterWarehouse_1:
# 34 "data/maps/OldaleTown/scripts.pory"
	pokenavcall BalsamCallAfterWarehouse_Text_0
	return


TimeofDayTest::
# 46 "data/maps/OldaleTown/scripts.pory"
	lock
# 47 "data/maps/OldaleTown/scripts.pory"
	gettimeofday
# 48 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq TimeofDayTest_2
TimeofDayTest_1:
# 52 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq TimeofDayTest_5
TimeofDayTest_4:
# 56 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq TimeofDayTest_8
TimeofDayTest_7:
# 60 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq TimeofDayTest_11
TimeofDayTest_10:
# 63 "data/maps/OldaleTown/scripts.pory"
endoftimeofdaytest:
# 64 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

TimeofDayTest_2:
# 49 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_0
# 50 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_1

TimeofDayTest_5:
# 53 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_1
# 54 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_4

TimeofDayTest_8:
# 57 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_2
# 58 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_7

TimeofDayTest_11:
# 61 "data/maps/OldaleTown/scripts.pory"
	msgbox TimeofDayTest_Text_3
# 62 "data/maps/OldaleTown/scripts.pory"
	goto endoftimeofdaytest
	goto TimeofDayTest_10


OldaleWeather::
# 70 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 73 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 76 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 71 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 74 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 77 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


ConArtist103Rewards::
# 82 "data/maps/OldaleTown/scripts.pory"
	lock
# 83 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 84 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 85 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_2
# 136 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 137 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_14
# 138 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
ConArtist103Rewards_1:
# 140 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 141 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 87 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 88 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 89 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 90 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 91 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 92 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 93 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 97 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 98 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_6
ConArtist103Rewards_5:
# 127 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_8
	goto ConArtist103Rewards_1

ConArtist103Rewards_6:
# 99 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 100 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 101 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 102 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_6, ConArtist103Rewards_Text_7, ConArtist103Rewards_Text_8, ConArtist103Rewards_Text_9
# 103 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_11
ConArtist103Rewards_10:
# 108 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_14
ConArtist103Rewards_13:
# 113 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_17
ConArtist103Rewards_16:
# 121 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_19
	goto ConArtist103Rewards_5

ConArtist103Rewards_8:
# 128 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 129 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 130 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_13
# 132 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_1

ConArtist103Rewards_11:
# 104 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 105 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_10

ConArtist103Rewards_14:
# 109 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
# 110 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_13

ConArtist103Rewards_17:
# 114 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_12
# 118 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_16

ConArtist103Rewards_19:
# 122 "data/maps/OldaleTown/scripts.pory"
	goto refusedeggs
	goto ConArtist103Rewards_5


OldaleVendingMachine::
# 146 "data/maps/OldaleTown/scripts.pory"
	lock
# 147 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 148 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 149 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 152 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 205 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 258 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 310 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 313 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 314 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 315 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 153 "data/maps/OldaleTown/scripts.pory"
	checkmoney 50
# 154 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 199 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 206 "data/maps/OldaleTown/scripts.pory"
	checkmoney 70
# 207 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 252 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 155 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 156 "data/maps/OldaleTown/scripts.pory"
	waitse
# 157 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 159 "data/maps/OldaleTown/scripts.pory"
	random 4
# 160 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 161 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 163 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 164 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 165 "data/maps/OldaleTown/scripts.pory"
	waitse
# 166 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 167 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 168 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 169 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 171 "data/maps/OldaleTown/scripts.pory"
	random 20
# 172 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 173 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 175 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 176 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 177 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 178 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 179 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 181 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 182 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 183 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 184 "data/maps/OldaleTown/scripts.pory"
	waitse
# 185 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 187 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 188 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 193 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 259 "data/maps/OldaleTown/scripts.pory"
	checkmoney 80
# 260 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 305 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 208 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 209 "data/maps/OldaleTown/scripts.pory"
	waitse
# 210 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 212 "data/maps/OldaleTown/scripts.pory"
	random 4
# 213 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, sodagotstuck
# 214 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotsoda
# 216 "data/maps/OldaleTown/scripts.pory"
gotsoda:
# 217 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 218 "data/maps/OldaleTown/scripts.pory"
	waitse
# 219 "data/maps/OldaleTown/scripts.pory"
	removemoney 70
# 220 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 221 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 222 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 224 "data/maps/OldaleTown/scripts.pory"
	random 20
# 225 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 226 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrasoda
# 228 "data/maps/OldaleTown/scripts.pory"
gotextrasoda:
# 229 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 230 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 231 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 232 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 234 "data/maps/OldaleTown/scripts.pory"
sodagotstuck:
# 235 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 236 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 237 "data/maps/OldaleTown/scripts.pory"
	waitse
# 238 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 240 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 241 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 246 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 200 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 189 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 190 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 311 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 261 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 262 "data/maps/OldaleTown/scripts.pory"
	waitse
# 263 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 265 "data/maps/OldaleTown/scripts.pory"
	random 4
# 266 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, coffeegotstuck
# 267 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotcoffee
# 269 "data/maps/OldaleTown/scripts.pory"
gotcoffee:
# 270 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 271 "data/maps/OldaleTown/scripts.pory"
	waitse
# 272 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 273 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 274 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 275 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 277 "data/maps/OldaleTown/scripts.pory"
	random 20
# 278 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 279 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextracoffee
# 281 "data/maps/OldaleTown/scripts.pory"
gotextracoffee:
# 282 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 283 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 284 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 285 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 287 "data/maps/OldaleTown/scripts.pory"
coffeegotstuck:
# 288 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 289 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 290 "data/maps/OldaleTown/scripts.pory"
	waitse
# 291 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 293 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 294 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 299 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 253 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 242 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 243 "data/maps/OldaleTown/scripts.pory"
	goto gotsoda
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 194 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 306 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 295 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 296 "data/maps/OldaleTown/scripts.pory"
	goto gotcoffee
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 247 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 300 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 320 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 321 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 322 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 323 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 324 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 325 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 330 "data/maps/OldaleTown/scripts.pory"
	lock
# 331 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 332 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 336 "data/maps/OldaleTown/scripts.pory"
	lock
# 337 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 338 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 342 "data/maps/OldaleTown/scripts.pory"
	lock
# 343 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 344 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale102Sign::
# 349 "data/maps/OldaleTown/scripts.pory"
	lock
# 350 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale102Sign_Text_0
# 351 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalePeekingOldman::
# 355 "data/maps/OldaleTown/scripts.pory"
	lock
# 356 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 357 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePeekingOldman_Text_0
# 359 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 363 "data/maps/OldaleTown/scripts.pory"
	lock
# 364 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 365 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 366 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 371 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 376 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 381 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 386 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 368 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 373 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 378 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 383 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 390 "data/maps/OldaleTown/scripts.pory"
	lock
# 391 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 392 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, ConArtist103Rewards_Movement_0
# 394 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_3
OldaleOutsideParkNPC_1:
# 399 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_8
OldaleOutsideParkNPC_6:
# 406 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_13
OldaleOutsideParkNPC_11:
# 412 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_18
OldaleOutsideParkNPC_16:
# 418 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_2:
# 396 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_3:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_2
	goto OldaleOutsideParkNPC_1

OldaleOutsideParkNPC_7:
# 401 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_8:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleOutsideParkNPC_7
	goto OldaleOutsideParkNPC_6

OldaleOutsideParkNPC_12:
# 408 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_2
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_13:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_12
	goto OldaleOutsideParkNPC_11

OldaleOutsideParkNPC_17:
# 414 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_3
	goto OldaleOutsideParkNPC_16

OldaleOutsideParkNPC_18:
	checkitem ITEM_ITEMFINDER
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleOutsideParkNPC_17
	goto OldaleOutsideParkNPC_16


OldaleOutsideOldGuy::
# 428 "data/maps/OldaleTown/scripts.pory"
	lock
# 429 "data/maps/OldaleTown/scripts.pory"
	applymovement 12, ConArtist103Rewards_Movement_0
# 430 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 434 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldWoman::
# 438 "data/maps/OldaleTown/scripts.pory"
	lock
# 439 "data/maps/OldaleTown/scripts.pory"
	applymovement 30, ConArtist103Rewards_Movement_0
# 440 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldWoman_Text_0
# 442 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


DLCTeacherOutside::
# 446 "data/maps/OldaleTown/scripts.pory"
	lock
# 447 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 448 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq DLCTeacherOutside_2
DLCTeacherOutside_1:
# 452 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq DLCTeacherOutside_5
DLCTeacherOutside_4:
# 459 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

DLCTeacherOutside_2:
# 449 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_0
	goto DLCTeacherOutside_1

DLCTeacherOutside_5:
# 453 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 454 "data/maps/OldaleTown/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 455 "data/maps/OldaleTown/scripts.pory"
	msgbox DLCTeacherOutside_Text_1
	goto DLCTeacherOutside_4


OldaleTown_GotoTherapy::
# 463 "data/maps/OldaleTown/scripts.pory"
	lock
# 464 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 465 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 466 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 467 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 468 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 469 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 470 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 471 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 472 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 473 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 474 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 475 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 476 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 481 "data/maps/OldaleTown/scripts.pory"
	goto_if_set sharpycameliaDLCcs, OldaleSharpyCameliaOutDLCCutscene_1
# 693 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleSharpyCameliaOutDLCCutscene_1:
# 483 "data/maps/OldaleTown/scripts.pory"
	lock
# 484 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 485 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 486 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 487 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 489 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 490 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 491 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 492 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 495 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 496 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 497 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 499 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 500 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 505 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 509 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 510 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 511 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 512 "data/maps/OldaleTown/scripts.pory"
	waitse
# 513 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 514 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 516 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 519 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 522 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 523 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 524 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 525 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 526 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 527 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 528 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 530 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 531 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 532 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 533 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 535 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 536 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 537 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 538 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 541 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 542 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 543 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 544 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 547 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 548 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 550 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 554 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 643 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 644 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 645 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 646 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 647 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 649 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 650 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 651 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 652 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 654 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 655 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 656 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 657 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 659 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 660 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 661 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 662 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 664 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 665 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 666 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 667 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 670 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 671 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 672 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 673 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 674 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 675 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 676 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 677 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 679 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 680 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 682 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 17, 0, 0
# 684 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpycameliaDLCcs
# 685 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 686 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 687 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 688 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 689 "data/maps/OldaleTown/scripts.pory"
	setflag finishedtherapy
# 690 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_5:
# 501 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 506 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 517 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 520 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 551 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 555 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 556 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 557 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 558 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 561 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 562 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 563 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 564 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 565 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 567 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 568 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 569 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 570 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 573 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 574 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 575 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 576 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 577 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 579 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 580 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 582 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 586 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_26
OldaleSharpyCameliaOutDLCCutscene_25:
# 592 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 593 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 594 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 595 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 598 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 599 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 600 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 601 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 602 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 604 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 605 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 606 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 607 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 608 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 610 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 611 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 612 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 613 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 615 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 616 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 617 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 618 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 620 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 621 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 622 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 623 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 624 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 626 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 627 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 628 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 629 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 630 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 631 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 633 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 634 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 635 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 638 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 639 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 583 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_22

OldaleSharpyCameliaOutDLCCutscene_26:
# 587 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 588 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 589 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 590 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_25


OldaleCamelia::
# 698 "data/maps/OldaleTown/scripts.pory"
	lock
# 700 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 725 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 726 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 727 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 728 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 730 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 731 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 732 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 733 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 736 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 737 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 703 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 704 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, ConArtist103Rewards_Movement_0
# 705 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 706 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 707 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 710 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 711 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 712 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 713 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 715 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 716 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 717 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 718 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


OldaleDevonGrunts::
# 750 "data/maps/OldaleTown/scripts.pory"
	lock
# 751 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 752 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_3
OldaleDevonGrunts_1:
# 765 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_8
OldaleDevonGrunts_6:
# 783 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_12
OldaleDevonGrunts_11:
# 820 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 822 "data/maps/OldaleTown/scripts.pory"
	setflag devonsdontblock102
# 823 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 754 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 755 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 758 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 759 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 761 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 762 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_3:
# 752 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Sharpydefeatedat103, OldaleDevonGrunts_2
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_7:
# 766 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 767 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
# 770 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 771 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 775 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_2
# 776 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 778 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 779 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_8:
# 765 "data/maps/OldaleTown/scripts.pory"
	goto_if_set Sharpydefeatedat103, OldaleDevonGrunts_7
	goto OldaleDevonGrunts_6

OldaleDevonGrunts_12:
# 784 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 785 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 788 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_1
# 789 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_7
# 791 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 792 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 793 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_8
# 794 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 796 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleDevonGrunts_15
OldaleDevonGrunts_14:
# 809 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleDevonGrunts_18
OldaleDevonGrunts_17:
# 812 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 813 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 815 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
	goto OldaleDevonGrunts_11

OldaleDevonGrunts_15:
# 797 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_9
# 799 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_3
# 800 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_10
# 804 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleDevonGrunts_Movement_0
# 805 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_11
	goto OldaleDevonGrunts_14

OldaleDevonGrunts_18:
# 810 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_12
	goto OldaleDevonGrunts_17


OldaleRival::
# 827 "data/maps/OldaleTown/scripts.pory"
	lock
# 828 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 829 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_0
# 831 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_1
# 832 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_2
# 833 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRival_Text_3
# 835 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 837 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 838 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRival_2
OldaleRival_1:
# 841 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRival_5
OldaleRival_4:
# 843 "data/maps/OldaleTown/scripts.pory"
	removeobject 21
# 844 "data/maps/OldaleTown/scripts.pory"
	setflag rivalappearsinOldale
	return

OldaleRival_2:
# 839 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRival_1

OldaleRival_5:
# 842 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, OldaleRivalfollowchat, PARTNER_RIVAL_MALE
	goto OldaleRival_4


OldaleRivalfollowchat::
# 848 "data/maps/OldaleTown/scripts.pory"
	lock
# 849 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_0
# 851 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalfollowchat_Text_1
# 852 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleRivalDontLeaveOldaleto101::
# 855 "data/maps/OldaleTown/scripts.pory"
	lock
# 856 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 857 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 858 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_0
# 860 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_1
# 863 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_2
# 864 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 865 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto101_2
OldaleRivalDontLeaveOldaleto101_1:
# 875 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto101_5
OldaleRivalDontLeaveOldaleto101_4:
# 881 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto101_2:
# 866 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 867 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 868 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 869 "data/maps/OldaleTown/scripts.pory"
	addobject 21
# 870 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 871 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 872 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalDontLeaveOldaleto101_1

OldaleRivalDontLeaveOldaleto101_5:
# 877 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 878 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_1
# 879 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto101_4


OldaleWareHouseSign::
# 886 "data/maps/OldaleTown/scripts.pory"
	lock
# 887 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWareHouseSign_Text_0
# 888 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleMotorBike::
# 892 "data/maps/OldaleTown/scripts.pory"
	lock
# 893 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleMotorBike_Text_0
# 894 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCar::
# 898 "data/maps/OldaleTown/scripts.pory"
	lock
# 899 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCar_Text_0
# 900 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleBike::
# 904 "data/maps/OldaleTown/scripts.pory"
	lock
# 905 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 906 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleBike_Text_0
# 907 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldalePlant::
# 911 "data/maps/OldaleTown/scripts.pory"
	lock
# 912 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 913 "data/maps/OldaleTown/scripts.pory"
	msgbox OldalePlant_Text_0
# 915 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleDLCWindow::
# 919 "data/maps/OldaleTown/scripts.pory"
	lock
# 920 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 921 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCWindow_Text_0
# 923 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleHouse2GardenItem::
# 927 "data/maps/OldaleTown/scripts.pory"
	lock
# 928 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_SOFT_SAND
# 931 "data/maps/OldaleTown/scripts.pory"
	removeobject 4
# 932 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleParkingItem::
# 935 "data/maps/OldaleTown/scripts.pory"
	lock
# 936 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_METAL_COAT
# 937 "data/maps/OldaleTown/scripts.pory"
	removeobject 3
# 938 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldalebyTruckItem::
# 941 "data/maps/OldaleTown/scripts.pory"
	lock
# 942 "data/maps/OldaleTown/scripts.pory"
	finditem ITEM_RAZOR_FANG
# 943 "data/maps/OldaleTown/scripts.pory"
	removeobject 35
# 944 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalDontLeaveOldaleto103::
# 948 "data/maps/OldaleTown/scripts.pory"
	lock
# 949 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 950 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 951 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_0
# 953 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto103_Text_1
# 954 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 955 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalDontLeaveOldaleto103_2
OldaleRivalDontLeaveOldaleto103_1:
# 965 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalDontLeaveOldaleto103_5
OldaleRivalDontLeaveOldaleto103_4:
# 971 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalDontLeaveOldaleto103_2:
# 956 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_3
# 957 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 958 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 959 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 960 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 961 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 962 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalDontLeaveOldaleto103_1

OldaleRivalDontLeaveOldaleto103_5:
# 967 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 968 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 969 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalDontLeaveOldaleto103_4


OldaleRivalnoleavetoWhouse::
# 975 "data/maps/OldaleTown/scripts.pory"
	lock
# 976 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 977 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 978 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_0
# 980 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_1
# 981 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 982 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleRivalnoleavetoWhouse_2
OldaleRivalnoleavetoWhouse_1:
# 992 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleRivalnoleavetoWhouse_5
OldaleRivalnoleavetoWhouse_4:
# 998 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleRivalnoleavetoWhouse_2:
# 983 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalnoleavetoWhouse_Text_2
# 984 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 985 "data/maps/OldaleTown/scripts.pory"
	destroyfollowernpc
# 986 "data/maps/OldaleTown/scripts.pory"
	addobject 22
# 987 "data/maps/OldaleTown/scripts.pory"
	clearflag rivalappearsinOldale
# 988 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 989 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
	goto OldaleRivalnoleavetoWhouse_1

OldaleRivalnoleavetoWhouse_5:
# 994 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleRivalDontLeaveOldaleto101_Text_4
# 995 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 996 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OldaleRivalnoleavetoWhouse_4


OldaleWarehouseRebelGuard::
# 1008 "data/maps/OldaleTown/scripts.pory"
	lock
# 1009 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1010 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 1011 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleVendingMachine_Movement_0
# 1012 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1013 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1015 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 1016 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 1018 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 1021 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 1024 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 1026 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 1027 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1028 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1029 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 1031 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 1032 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 1033 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 1034 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleRivalDontLeaveOldaleto101_Movement_1
# 1035 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1036 "data/maps/OldaleTown/scripts.pory"
	removeobject 18
# 1037 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 1038 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 1039 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1041 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 1017 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 1019 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 1050 "data/maps/OldaleTown/scripts.pory"
	lock
# 1051 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 1052 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleTruckRebel_Movement_0
# 1053 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1055 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 1057 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 1061 "data/maps/OldaleTown/scripts.pory"
	lock
# 1062 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 1063 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 1067 "data/maps/OldaleTown/scripts.pory"
	lock
# 1068 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1069 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1070 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1071 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1072 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1073 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1074 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach0_Movement_0
# 1075 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1076 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1077 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 1081 "data/maps/OldaleTown/scripts.pory"
	lock
# 1082 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1083 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1084 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1085 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1086 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1087 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach1_Movement_0
# 1088 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1089 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1090 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 1094 "data/maps/OldaleTown/scripts.pory"
	lock
# 1095 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1096 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1097 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleVendingMachine_Movement_0
# 1098 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 1099 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1100 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebelApproach2_Movement_0
# 1101 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 1102 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalDontLeaveOldaleto103_Movement_0
# 1103 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 1108 "data/maps/OldaleTown/scripts.pory"
	lock
# 1109 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1110 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 1111 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 1113 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1114 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1115 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1116 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 1117 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1118 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_2
# 1119 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1120 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_3
# 1121 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1122 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_BOUNCE_4
# 1123 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1124 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1125 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1126 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1127 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1128 "data/maps/OldaleTown/scripts.pory"
	applymovement 24, OldaleCarRebel_Movement_0
# 1129 "data/maps/OldaleTown/scripts.pory"
	waitmovement 24
# 1130 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1131 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1132 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1133 "data/maps/OldaleTown/scripts.pory"
	removeobject 24
# 1134 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1135 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1136 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 1142 "data/maps/OldaleTown/scripts.pory"
	lock
# 1143 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_0
# 1144 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 1146 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 1147 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1148 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 1149 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 1150 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1151 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 1152 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 1153 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 1154 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 1155 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 1156 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1157 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 1158 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_1
# 1159 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 1160 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 1161 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 1162 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 1163 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 1164 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 1165 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 1166 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaCall1::
# 1172 "data/maps/OldaleTown/scripts.pory"
	lock
# 1173 "data/maps/OldaleTown/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 0
	goto_if_gt SamanthaCall1_1
# 1182 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaCall1_1:
# 1174 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1175 "data/maps/OldaleTown/scripts.pory"
	pokenavcall SamanthaCall1_Text_0
# 1179 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_MAUSOLEUM_HEXGIRL, 2
# 1180 "data/maps/OldaleTown/scripts.pory"
	release
	return


SamanthaDontgotoDLC::
# 1188 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq SamanthaDontgotoDLC_1
# 1201 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaDontgotoDLC_1:
# 1190 "data/maps/OldaleTown/scripts.pory"
	lock
# 1191 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDLC_Movement_0
# 1192 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1193 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 1194 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_0
# 1195 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoDLC_Text_1
# 1197 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoDLC_Movement_1
# 1198 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1199 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaDontgoto102::
# 1205 "data/maps/OldaleTown/scripts.pory"
	lock
# 1206 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDLC_Movement_0
# 1207 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1208 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 1209 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_0
# 1211 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto102_Text_1
# 1214 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 1215 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1216 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaDontgoto103::
# 1220 "data/maps/OldaleTown/scripts.pory"
	lock
# 1221 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDLC_Movement_0
# 1222 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1223 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 1224 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_0
# 1226 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgoto103_Text_1
# 1228 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoDLC_Movement_1
# 1229 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1230 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaDontgotoWarehouse::
# 1234 "data/maps/OldaleTown/scripts.pory"
	lock
# 1235 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoDLC_Movement_0
# 1236 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 1237 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 1238 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_0
# 1240 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_gt SamanthaDontgotoWarehouse_2
# 1246 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_2
SamanthaDontgotoWarehouse_1:
# 1248 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, OldaleRivalDontLeaveOldaleto101_Movement_0
# 1249 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_3
# 1250 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleRivalnoleavetoWhouse_Movement_0
# 1251 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1253 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

SamanthaDontgotoWarehouse_2:
# 1242 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaDontgotoWarehouse_Text_1
	goto SamanthaDontgotoWarehouse_1


SamanthaGetSnacksCutscene::
# 1258 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaGetSnacksCutscene_1
# 1299 "data/maps/OldaleTown/scripts.pory"
	release
	return

SamanthaGetSnacksCutscene_1:
# 1260 "data/maps/OldaleTown/scripts.pory"
	lock
# 1261 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1262 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_0
# 1263 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_0
# 1264 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaGetSnacksCutscene_Movement_1
# 1265 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_2
# 1266 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1267 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_1
# 1268 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1269 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1270 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1271 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_2
# 1272 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1273 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1274 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1275 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1276 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1277 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 1278 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_3
# 1279 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1280 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1281 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1282 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1283 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1284 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1285 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_3
# 1286 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1287 "data/maps/OldaleTown/scripts.pory"
	waitse
# 1288 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1290 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaGetSnacksCutscene_Movement_4
# 1291 "data/maps/OldaleTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 1292 "data/maps/OldaleTown/scripts.pory"
	msgbox SamanthaGetSnacksCutscene_Text_4
# 1294 "data/maps/OldaleTown/scripts.pory"
	setflag Samanthagotsnacks
# 1296 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


SamanthaShake::
# 1304 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 1305 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 1306 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 1307 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 1308 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 1309 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


# 84 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 84 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 182 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 182 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 466 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 466 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 466 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 466 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 466 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 466 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 466 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 471 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 471 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 471 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 471 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 471 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 471 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 471 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 474 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 474 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 510 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 510 "data/maps/OldaleTown/scripts.pory"
	face_left
# 510 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 523 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 523 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 523 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 524 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 524 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 574 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 574 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 634 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 754 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 754 "data/maps/OldaleTown/scripts.pory"
	face_player
# 754 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 770 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 770 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 770 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 775 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 775 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 775 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 799 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_3:
# 799 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 857 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_0:
# 857 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 878 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto101_Movement_1:
# 878 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 950 "data/maps/OldaleTown/scripts.pory"
OldaleRivalDontLeaveOldaleto103_Movement_0:
# 950 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 995 "data/maps/OldaleTown/scripts.pory"
OldaleRivalnoleavetoWhouse_Movement_0:
# 995 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 1052 "data/maps/OldaleTown/scripts.pory"
OldaleTruckRebel_Movement_0:
# 1052 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 1074 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 1074 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 1074 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1087 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 1087 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 1100 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 1100 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 1128 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 1128 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1128 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1128 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1128 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1128 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1128 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1128 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1128 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1143 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 1143 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 1143 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 1158 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
# 1158 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1158 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1158 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1158 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1158 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1158 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 1158 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 1191 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDLC_Movement_0:
# 1191 "data/maps/OldaleTown/scripts.pory"
	face_player
# 1191 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 1197 "data/maps/OldaleTown/scripts.pory"
SamanthaDontgotoDLC_Movement_1:
# 1197 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 1262 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_0:
# 1262 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 1262 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 1264 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_1:
# 1264 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1264 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1265 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_2:
# 1265 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1265 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 1265 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1265 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 1265 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 1268 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_3:
# 1268 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
	step_end

# 1290 "data/maps/OldaleTown/scripts.pory"
SamanthaGetSnacksCutscene_Movement_4:
# 1290 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 1290 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

BalsamCallAfterWarehouse_Text_0:
# 34 "data/maps/OldaleTown/scripts.pory"
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
	.string "get lost.\p"
	.string "It's backto work for me. Take care,\n"
	.string "{PLAYER}.$"

TimeofDayTest_Text_0:
# 49 "data/maps/OldaleTown/scripts.pory"
	.string "Morning.$"

TimeofDayTest_Text_1:
# 53 "data/maps/OldaleTown/scripts.pory"
	.string "Day.$"

TimeofDayTest_Text_2:
# 57 "data/maps/OldaleTown/scripts.pory"
	.string "Evening.$"

TimeofDayTest_Text_3:
# 61 "data/maps/OldaleTown/scripts.pory"
	.string "Night.$"

ConArtist103Rewards_Text_0:
# 88 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 91 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 93 "data/maps/OldaleTown/scripts.pory"
	.string "Look, I know I said I'd give you some\n"
	.string "cash but...\p"
	.string "All I have is my wares! The cash I get\n"
	.string "when I sell them, duh!\p"
	.string "Speaking of wares - would you like to\n"
	.string "take a look at them?$"

ConArtist103Rewards_Text_3:
# 97 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 97 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 100 "data/maps/OldaleTown/scripts.pory"
	.string "Hehe, of course you do... here's what I\n"
	.string "got! Only 500 each!$"

ConArtist103Rewards_Text_6:
# 102 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 1$"

ConArtist103Rewards_Text_7:
# 102 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 2$"

ConArtist103Rewards_Text_8:
# 102 "data/maps/OldaleTown/scripts.pory"
	.string "Rosy Egg$"

ConArtist103Rewards_Text_9:
# 102 "data/maps/OldaleTown/scripts.pory"
	.string "Not really$"

ConArtist103Rewards_Text_10:
# 104 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 1 here$"

ConArtist103Rewards_Text_11:
# 109 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 2 here$"

ConArtist103Rewards_Text_12:
# 114 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 3 here$"

ConArtist103Rewards_Text_13:
# 130 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to Petalburg soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_14:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in some eggs?$"

OldaleVendingMachine_Text_0:
# 147 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 50¥$"

OldaleVendingMachine_Text_2:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "Soda Pop - 70¥$"

OldaleVendingMachine_Text_3:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "Strong Coffee - 80¥$"

OldaleVendingMachine_Text_4:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 167 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 176 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 185 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 187 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 194 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 200 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 220 "data/maps/OldaleTown/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 229 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 238 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 247 "data/maps/OldaleTown/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 273 "data/maps/OldaleTown/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_16:
# 282 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 291 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 300 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 331 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 337 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 343 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

Oldale102Sign_Text_0:
# 350 "data/maps/OldaleTown/scripts.pory"
	.string "West - Road 002.$"

OldalePeekingOldman_Text_0:
# 357 "data/maps/OldaleTown/scripts.pory"
	.string "Those Rebel hoodlums... just when we\n"
	.string "start to get back on our feet, they\l"
	.string "come to ruin things!\p"
	.string "Murkrows, the lot of them!$"

OldaleOutsideHikerGuy_Text_0:
# 368 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 378 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 383 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkNPC_Text_0:
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the Rebel Zone\n"
	.string "who get crazy rich by finding treasure\l"
	.string "with their {COLOR BLUE}Object Spotters{COLOR DARK_GRAY}.\p"
	.string "Haven't managed to get my hands on one,\n"
	.string "or I wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 401 "data/maps/OldaleTown/scripts.pory"
	.string "So... I saw you digging through that\n"
	.string "trash can.\p"
	.string "If you need pokeyen, you should get an\n"
	.string "{COLOR BLUE}Object Spotter{COLOR DARK_GRAY} and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideParkNPC_Text_2:
# 408 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Why don't you try it right here? Who\n"
	.string "knows, you might find something!$"

OldaleOutsideParkNPC_Text_3:
# 414 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, is that a Devon Radar? That's handy.\p"
	.string "If you're short on pokeyen, you should\n"
	.string "use it as much as you can. You might\l"
	.string "find some valuables to sell.\p"
	.string "Hopefully something better than what\n"
	.string "you found in that trash can... ha-ha-ha!$"

OldaleOutsideOldGuy_Text_0:
# 430 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleOutsideOldWoman_Text_0:
# 440 "data/maps/OldaleTown/scripts.pory"
	.string "Did you see the greenish rain just\n"
	.string "now...?\p"
	.string "The Weather Institute says it's not\n"
	.string "harmful on the short-term. But I worry\l"
	.string "about the long term...$"

DLCTeacherOutside_Text_0:
# 449 "data/maps/OldaleTown/scripts.pory"
	.string "I'm really dying for a smoke here...\p"
	.string "If only those loser Rebels left the\n"
	.string "Warehouse, Devon Co. would start\l"
	.string "sending supplies again.$"

DLCTeacherOutside_Text_1:
# 455 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Ah, sorry for blowing the smoke on your\n"
	.string "face. Haven't smoked in days...\p"
	.string "With the Rebels gone, the mart is\n"
	.string "getting stocked again.\p"
	.string "Was about time! {COLOR LIGHT_GRAY}{SHADOW WHITE}Fuu...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleTown_GotoTherapy_Text_0:
# 468 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... the\n"
	.string "therapy session should be about to\l"
	.string "start.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 487 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 492 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 501 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 506 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 517 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 520 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 528 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 533 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 538 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and our caretaker!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 544 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 558 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 565 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the {COLOR RED}Rebels{COLOR DARK_GRAY}, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 570 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 577 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 590 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 595 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 602 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 608 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 613 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 618 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 624 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's {COLOR RED}Rebels{COLOR DARK_GRAY} talk...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 630 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, come to Route 103! I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 647 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 652 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... he told us we'd\n"
	.string "need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 657 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 662 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 667 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 677 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 707 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 713 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 718 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "Norman will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 728 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 733 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

OldaleDevonGrunts_Text_0:
# 755 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but we can't let anyone\n"
	.string "through until the {COLOR RED}Rebels{COLOR DARK_GRAY} occupying\l"
	.string "{COLOR GREEN}Oldale Warehouse{COLOR DARK_GRAY}, are dealt with.$"

OldaleDevonGrunts_Text_1:
# 759 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to New Rustboro... but don't\l"
	.string "worry!\p"
	.string "Reinforcements from Devon HQ are\n"
	.string "currently on the way.$"

OldaleDevonGrunts_Text_2:
# 762 "data/maps/OldaleTown/scripts.pory"
	.string "Yup! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_3:
# 767 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Devon Ball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_4:
# 771 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_5:
# 776 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 785 "data/maps/OldaleTown/scripts.pory"
	.string "Hello there, civilian! We have great\n"
	.string "news!\p"
	.string "Those pesky {COLOR RED}Rebels{COLOR DARK_GRAY} have finally left\n"
	.string "Oldale Warehouse. The town is safe\l"
	.string "again!$"

OldaleDevonGrunts_Text_7:
# 789 "data/maps/OldaleTown/scripts.pory"
	.string "They must have caught wind of\n"
	.string "reinforcements coming, and didn't feel\l"
	.string "like spending the rest of their lives on\l"
	.string "{COLOR RED}Dewford Prison{COLOR DARK_GRAY}.$"

OldaleDevonGrunts_Text_8:
# 793 "data/maps/OldaleTown/scripts.pory"
	.string "Most likely! So... I suppose you want to\n"
	.string "go through Route 102?$"

OldaleDevonGrunts_Text_9:
# 797 "data/maps/OldaleTown/scripts.pory"
	.string "I see... well, I'm sorry to say...\p"
	.string "In the Rebel Zone, when it's not one\n"
	.string "thing, it's the other, you know?$"

OldaleDevonGrunts_Text_10:
# 800 "data/maps/OldaleTown/scripts.pory"
	.string "We have one of our scientists searching\n"
	.string "Route 102 for a very dangerous\l"
	.string "Pokémon.\p"
	.string "It's the next species on the list of\n"
	.string "Pokémon to be {COLOR BLUE}safened{COLOR DARK_GRAY}, and we can't let\l"
	.string "his work be disturbed$"

OldaleDevonGrunts_Text_11:
# 805 "data/maps/OldaleTown/scripts.pory"
	.string "I'm afraid so. But don't worry - these\n"
	.string "tasks usually take from 3 to 4 months.\p"
	.string "And what's a little waiting if it means\n"
	.string "Hoenn becomes safer?$"

OldaleDevonGrunts_Text_12:
# 810 "data/maps/OldaleTown/scripts.pory"
	.string "Grand, then please enjoy this shith-... I\n"
	.string "mean, this cozy, cute sleepy town!$"

OldaleRival_Text_0:
# 829 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}... I saw you talking with\n"
	.string "those enemy soldiers just now.\p"
	.string "Don't you KNOW by now!? You cannot\n"
	.string "reason with the enemy.$"

OldaleRival_Text_1:
# 831 "data/maps/OldaleTown/scripts.pory"
	.string "You can only {COLOR RED}FIGHT{COLOR DARK_GRAY} it!$"

OldaleRival_Text_2:
# 832 "data/maps/OldaleTown/scripts.pory"
	.string "But I understand. It was two versus\n"
	.string "one. Don't worry, I am here now.$"

OldaleRival_Text_3:
# 833 "data/maps/OldaleTown/scripts.pory"
	.string "Let's show those Kantonians they can't\n"
	.string "take our country! LEAD THE WAY,\l"
	.string "{PLAYER}.$"

OldaleRivalfollowchat_Text_0:
# 849 "data/maps/OldaleTown/scripts.pory"
	.string "Let's go, {PLAYER} - those Kantonians\n"
	.string "are on the {COLOR RED}western exit of Oldale Town!{COLOR DARK_GRAY}$"

OldaleRivalfollowchat_Text_1:
# 851 "data/maps/OldaleTown/scripts.pory"
	.string "Let's kick their ass all the way to their\n"
	.string "miserable region across the sea!$"

OldaleRivalDontLeaveOldaleto101_Text_0:
# 858 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!?$"

OldaleRivalDontLeaveOldaleto101_Text_1:
# 860 "data/maps/OldaleTown/scripts.pory"
	.string "We have already secured the southern\n"
	.string "front, remember!? Thanks to your\l"
	.string "glorious victory!$"

OldaleRivalDontLeaveOldaleto101_Text_2:
# 863 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the next battle?$"

OldaleRivalDontLeaveOldaleto101_Text_3:
# 866 "data/maps/OldaleTown/scripts.pory"
	.string "Very well... I'll be keeping an eye on\n"
	.string "them. Don't take long!$"

OldaleRivalDontLeaveOldaleto101_Text_4:
# 877 "data/maps/OldaleTown/scripts.pory"
	.string "Let's not delay then. I'm as ready as\n"
	.string "I'll ever be!$"

OldaleWareHouseSign_Text_0:
# 887 "data/maps/OldaleTown/scripts.pory"
	.string "East - Oldale Warehouse.$"

OldaleMotorBike_Text_0:
# 893 "data/maps/OldaleTown/scripts.pory"
	.string "A motorbike. A decal on its die reads\n"
	.string "'Rebel 4 Life'.$"

OldaleCar_Text_0:
# 899 "data/maps/OldaleTown/scripts.pory"
	.string "The car seems to have been parked for\n"
	.string "some time.$"

OldaleBike_Text_0:
# 906 "data/maps/OldaleTown/scripts.pory"
	.string "The bike has tons of locks on the\n"
	.string "wheels, to discourage theft.$"

OldalePlant_Text_0:
# 913 "data/maps/OldaleTown/scripts.pory"
	.string "The plants are on the same state than\n"
	.string "the trees around...\p"
	.string "On their way to wither.$"

OldaleDLCWindow_Text_0:
# 921 "data/maps/OldaleTown/scripts.pory"
	.string "You can see the DLC's library through\n"
	.string "the window.\p"
	.string "The library's clerk is browsing an...\n"
	.string "'explicit' website.$"

OldaleRivalDontLeaveOldaleto103_Text_0:
# 951 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? The\n"
	.string "enemy is not this way!$"

OldaleRivalDontLeaveOldaleto103_Text_1:
# 953 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you need to get ready before\n"
	.string "the battle?$"

OldaleRivalnoleavetoWhouse_Text_0:
# 978 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, where are you going!? This\n"
	.string "way is to the {COLOR GREEN}warehouse{COLOR DARK_GRAY}!$"

OldaleRivalnoleavetoWhouse_Text_1:
# 980 "data/maps/OldaleTown/scripts.pory"
	.string "Wait... do you want to resupply there\n"
	.string "before the battle?$"

OldaleRivalnoleavetoWhouse_Text_2:
# 983 "data/maps/OldaleTown/scripts.pory"
	.string "Aah, smart thinking! I'll keep an eye on\n"
	.string "those Kantonians. Don't take long!$"

OldaleWarehouseRebelGuard_Text_0:
# 1010 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 1017 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 1019 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 1021 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you that not every Rebel is\n"
	.string "like him!$"

OldaleWarehouseRebelGuard_Text_4:
# 1026 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 1029 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 1055 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 1062 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only broken clankers in\n"
	.string "this grass! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 1071 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 1111 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 1124 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 1126 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 1144 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

SamanthaCall1_Text_0:
# 1175 "data/maps/OldaleTown/scripts.pory"
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
# 1194 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... is this the Devon\n"
	.string "Learning Center?$"

SamanthaDontgotoDLC_Text_1:
# 1195 "data/maps/OldaleTown/scripts.pory"
	.string "It seems like they are holding a lesson\n"
	.string "now...\p"
	.string "I have not signed up for it, so I would\n"
	.string "not like to interrupt.$"

SamanthaDontgoto102_Text_0:
# 1209 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Route 103, right?$"

SamanthaDontgoto102_Text_1:
# 1211 "data/maps/OldaleTown/scripts.pory"
	.string "W-we don't need to go that far... I'm\n"
	.string "sure there's another vending machine in\l"
	.string "Petalburg, b-but... the one here in\l"
	.string "Oldale will do!$"

SamanthaDontgoto103_Text_0:
# 1224 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... that way leads to\n"
	.string "Route 102, right?$"

SamanthaDontgoto103_Text_1:
# 1226 "data/maps/OldaleTown/scripts.pory"
	.string "B-but Slateport is very far... t-the\n"
	.string "food here in Oldale will do!$"

SamanthaDontgotoWarehouse_Text_0:
# 1238 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, {PLAYER}... Oldale's Warehouse is\n"
	.string "over there, right?$"

SamanthaDontgotoWarehouse_Text_1:
# 1242 "data/maps/OldaleTown/scripts.pory"
	.string "I-I dont' think they sell any food over\n"
	.string "there...$"

SamanthaDontgotoWarehouse_Text_2:
# 1246 "data/maps/OldaleTown/scripts.pory"
	.string "I-I see some scary Rebels over there...\n"
	.string "m-maybe we shouldn't get near...$"

SamanthaDontgotoWarehouse_Text_3:
# 1249 "data/maps/OldaleTown/scripts.pory"
	.string "I-I'll just get some snacks from the\n"
	.string "vending machine there, o-okay?$"

SamanthaGetSnacksCutscene_Text_0:
# 1263 "data/maps/OldaleTown/scripts.pory"
	.string "A-ah... here we are, {PLAYER}! Give me\n"
	.string "a moment...$"

SamanthaGetSnacksCutscene_Text_1:
# 1267 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I'll have some of these...$"

SamanthaGetSnacksCutscene_Text_2:
# 1271 "data/maps/OldaleTown/scripts.pory"
	.string "And of these...$"

SamanthaGetSnacksCutscene_Text_3:
# 1278 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, and these too...!$"

SamanthaGetSnacksCutscene_Text_4:
# 1292 "data/maps/OldaleTown/scripts.pory"
	.string "Hehehe... I've got tons. We can go back.\p"
	.string "T-thank you...$"

DevonGruntFOutro::
# 742 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 745 "data/maps/OldaleTown/scripts.pory"
	.string "No, not this time!$"

RebelOldale_Outro::
# 1044 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
