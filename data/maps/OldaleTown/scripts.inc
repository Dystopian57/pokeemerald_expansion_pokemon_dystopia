# 1 "data/maps/OldaleTown/scripts.pory"


OldaleTown_MapScripts::
# 9 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleWeather
# 10 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GenderedSpriteOldale
	.byte 0


GenderedSpriteOldale::
# 15 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


OldaleWeather::
# 20 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 23 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 26 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 21 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 24 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 27 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


ConArtist103Rewards::
# 32 "data/maps/OldaleTown/scripts.pory"
	lock
# 33 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 34 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 35 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_2
# 85 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_14
# 86 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
ConArtist103Rewards_1:
# 88 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 89 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 37 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 38 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 40 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 41 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 42 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 44 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 48 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 49 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_6
ConArtist103Rewards_5:
# 77 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_8
	goto ConArtist103Rewards_1

ConArtist103Rewards_6:
# 50 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 51 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 52 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_6, ConArtist103Rewards_Text_7, ConArtist103Rewards_Text_8, ConArtist103Rewards_Text_9
# 53 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_11
ConArtist103Rewards_10:
# 58 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_14
ConArtist103Rewards_13:
# 63 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_17
ConArtist103Rewards_16:
# 71 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_19
	goto ConArtist103Rewards_5

ConArtist103Rewards_8:
# 78 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 79 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_13
# 81 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_1

ConArtist103Rewards_11:
# 54 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 55 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_10

ConArtist103Rewards_14:
# 59 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
# 60 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_13

ConArtist103Rewards_17:
# 64 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_12
# 68 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_16

ConArtist103Rewards_19:
# 72 "data/maps/OldaleTown/scripts.pory"
	goto refusedeggs
	goto ConArtist103Rewards_5


OldaleVendingMachine::
# 94 "data/maps/OldaleTown/scripts.pory"
	lockall
# 95 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 96 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 97 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3
# 100 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 153 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 206 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 258 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 259 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 260 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 101 "data/maps/OldaleTown/scripts.pory"
	checkmoney 50
# 102 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 147 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 154 "data/maps/OldaleTown/scripts.pory"
	checkmoney 70
# 155 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 200 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_24
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 103 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 104 "data/maps/OldaleTown/scripts.pory"
	waitse
# 105 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 107 "data/maps/OldaleTown/scripts.pory"
	random 4
# 108 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 109 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 111 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 112 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 113 "data/maps/OldaleTown/scripts.pory"
	waitse
# 114 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 115 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_4
# 116 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 117 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 119 "data/maps/OldaleTown/scripts.pory"
	random 20
# 120 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 121 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 123 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 124 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 125 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 126 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 127 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 129 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 130 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 131 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 132 "data/maps/OldaleTown/scripts.pory"
	waitse
# 133 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 135 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_7, OldaleVendingMachine_Text_8
# 136 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 141 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_29
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 207 "data/maps/OldaleTown/scripts.pory"
	checkmoney 80
# 208 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 253 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_31
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 156 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 157 "data/maps/OldaleTown/scripts.pory"
	waitse
# 158 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 160 "data/maps/OldaleTown/scripts.pory"
	random 4
# 161 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, sodagotstuck
# 162 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotsoda
# 164 "data/maps/OldaleTown/scripts.pory"
gotsoda:
# 165 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 166 "data/maps/OldaleTown/scripts.pory"
	waitse
# 167 "data/maps/OldaleTown/scripts.pory"
	removemoney 70
# 168 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 169 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 170 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 172 "data/maps/OldaleTown/scripts.pory"
	random 20
# 173 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 174 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrasoda
# 176 "data/maps/OldaleTown/scripts.pory"
gotextrasoda:
# 177 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 178 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 179 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 180 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 182 "data/maps/OldaleTown/scripts.pory"
sodagotstuck:
# 183 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 184 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 185 "data/maps/OldaleTown/scripts.pory"
	waitse
# 186 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 188 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_7, OldaleVendingMachine_Text_8
# 189 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_27
OldaleVendingMachine_26:
# 194 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_36
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 148 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 137 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 138 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 209 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 210 "data/maps/OldaleTown/scripts.pory"
	waitse
# 211 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 213 "data/maps/OldaleTown/scripts.pory"
	random 4
# 214 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, coffeegotstuck
# 215 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotcoffee
# 217 "data/maps/OldaleTown/scripts.pory"
gotcoffee:
# 218 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 219 "data/maps/OldaleTown/scripts.pory"
	waitse
# 220 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 221 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 222 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 223 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 225 "data/maps/OldaleTown/scripts.pory"
	random 20
# 226 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 227 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextracoffee
# 229 "data/maps/OldaleTown/scripts.pory"
gotextracoffee:
# 230 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 231 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 232 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 233 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 235 "data/maps/OldaleTown/scripts.pory"
coffeegotstuck:
# 236 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 237 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 238 "data/maps/OldaleTown/scripts.pory"
	waitse
# 239 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 241 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_7, OldaleVendingMachine_Text_8
# 242 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_34
OldaleVendingMachine_33:
# 247 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_38
	goto OldaleVendingMachine_21

OldaleVendingMachine_24:
# 201 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_27:
# 190 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 191 "data/maps/OldaleTown/scripts.pory"
	goto gotsoda
	goto OldaleVendingMachine_26

OldaleVendingMachine_29:
# 142 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_31:
# 254 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_34:
# 243 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 244 "data/maps/OldaleTown/scripts.pory"
	goto gotcoffee
	goto OldaleVendingMachine_33

OldaleVendingMachine_36:
# 195 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_38:
# 248 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_21


MachineShake::
# 265 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 266 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 267 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 268 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 269 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 270 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 275 "data/maps/OldaleTown/scripts.pory"
	lockall
# 276 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 277 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 281 "data/maps/OldaleTown/scripts.pory"
	lockall
# 282 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 283 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 287 "data/maps/OldaleTown/scripts.pory"
	lockall
# 288 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 289 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 293 "data/maps/OldaleTown/scripts.pory"
	lockall
# 294 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 295 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 300 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 305 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 310 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 315 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 296 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 297 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 301 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 302 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 306 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 307 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 311 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 312 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkGuy::
# 319 "data/maps/OldaleTown/scripts.pory"
	lockall
# 320 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 321 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, ConArtist103Rewards_Movement_0
# 324 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkGuy_Text_0
# 330 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldGuy::
# 334 "data/maps/OldaleTown/scripts.pory"
	lockall
# 335 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 336 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 340 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 344 "data/maps/OldaleTown/scripts.pory"
	lockall
# 345 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 346 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 347 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 348 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 349 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 350 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 351 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 352 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 353 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 354 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 355 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 356 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 360 "data/maps/OldaleTown/scripts.pory"
	lockall
# 361 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 362 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 363 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 364 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 366 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 367 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 368 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 369 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 372 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 373 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 374 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 376 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 377 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 382 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 386 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 387 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 388 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 389 "data/maps/OldaleTown/scripts.pory"
	waitse
# 390 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 391 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 393 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 396 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 399 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 400 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 401 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 402 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 403 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 404 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 405 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 407 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 408 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 409 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 410 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 412 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 413 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 414 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 415 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 418 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 419 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 420 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 421 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 424 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 425 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 427 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 431 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 518 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 519 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 520 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 521 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 522 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 524 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 525 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 526 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 527 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 529 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 530 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 531 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 532 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 534 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 535 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 536 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 537 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 539 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 540 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 541 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 542 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 545 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 546 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 547 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 548 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 549 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 550 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 551 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 552 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 554 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 555 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 556 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 557 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 558 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 559 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 560 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 561 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 562 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 563 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 378 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 383 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 394 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 397 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 428 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 432 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 433 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 434 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 435 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 438 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 439 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 440 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 441 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 442 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 444 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 445 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 446 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 447 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 450 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 451 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 452 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 453 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 454 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 456 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 457 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 459 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 463 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 469 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 470 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 471 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 472 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 475 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 476 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 477 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 478 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 480 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 481 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 482 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 483 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 485 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 486 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 487 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 488 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 490 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 491 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 492 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 493 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 495 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 496 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 497 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 498 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 499 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 501 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 502 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 503 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 504 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 505 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 506 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 508 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 509 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 510 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 513 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 514 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 460 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 464 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 465 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 466 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 467 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_22


OldaleCamelia::
# 567 "data/maps/OldaleTown/scripts.pory"
	lockall
# 569 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 594 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 595 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 596 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 597 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 599 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 600 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 601 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 602 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 605 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 606 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 572 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 573 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, ConArtist103Rewards_Movement_0
# 574 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 575 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 576 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 579 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 580 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 581 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 582 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 584 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 585 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 586 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 587 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


Rivalfollowchat::
# 610 "data/maps/OldaleTown/scripts.pory"
	lockall
# 611 "data/maps/OldaleTown/scripts.pory"
	msgbox Rivalfollowchat_Text_0
# 612 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalFollower::
# 616 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, Rivalfollowchat, PARTNER_STEVEN
	return


OldaleDevonGrunts::
# 627 "data/maps/OldaleTown/scripts.pory"
	lockall
# 628 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 629 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 631 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 632 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_2
OldaleDevonGrunts_1:
# 643 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_5
OldaleDevonGrunts_4:
# 660 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 634 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 635 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 636 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_0
# 637 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
# 639 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 640 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_5:
# 644 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 645 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 648 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 649 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 653 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_2
# 654 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 656 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 657 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_4


OldaleWarehouseRebelGuard::
# 670 "data/maps/OldaleTown/scripts.pory"
	lockall
# 671 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 672 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 673 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleVendingMachine_Movement_0
# 674 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 675 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 677 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 678 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 680 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 683 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 686 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 688 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 689 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 690 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_0
# 691 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 693 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 694 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 695 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 696 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_1
# 697 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 698 "data/maps/OldaleTown/scripts.pory"
	removeobject 19
# 699 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 700 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 701 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 703 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 679 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 681 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 712 "data/maps/OldaleTown/scripts.pory"
	lock
# 713 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 714 "data/maps/OldaleTown/scripts.pory"
	applymovement 26, OldaleTruckRebel_Movement_0
# 715 "data/maps/OldaleTown/scripts.pory"
	waitmovement 26
# 717 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 719 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 723 "data/maps/OldaleTown/scripts.pory"
	lock
# 724 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 725 "data/maps/OldaleTown/scripts.pory"
	release
	return


# 34 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 34 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 130 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 130 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 346 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 346 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 346 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 346 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 346 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 346 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 346 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 351 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 351 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 351 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 351 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 351 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 351 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 351 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 354 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 354 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 387 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 387 "data/maps/OldaleTown/scripts.pory"
	face_left
# 387 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 400 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 400 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 400 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 401 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 401 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 451 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 451 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 509 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 509 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 634 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 634 "data/maps/OldaleTown/scripts.pory"
	face_player
# 634 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 648 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 648 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 648 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 653 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 653 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 653 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 690 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_0:
# 690 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 696 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_1:
# 696 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 714 "data/maps/OldaleTown/scripts.pory"
OldaleTruckRebel_Movement_0:
# 714 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

ConArtist103Rewards_Text_0:
# 38 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 42 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 44 "data/maps/OldaleTown/scripts.pory"
	.string "Look, I know I said I'd give you some\n"
	.string "cash but...\p"
	.string "All I have is my wares! The cash I get\n"
	.string "when I sell them, duh!\p"
	.string "Speaking of wares - would you like to\n"
	.string "take a look at them?$"

ConArtist103Rewards_Text_3:
# 48 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 48 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 50 "data/maps/OldaleTown/scripts.pory"
	.string "Hehe, of course you do... here's what I\n"
	.string "got! Only 500 each!$"

ConArtist103Rewards_Text_6:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 1$"

ConArtist103Rewards_Text_7:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 2$"

ConArtist103Rewards_Text_8:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "Rosy Egg$"

ConArtist103Rewards_Text_9:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "Not really$"

ConArtist103Rewards_Text_10:
# 54 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 1 here$"

ConArtist103Rewards_Text_11:
# 59 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 2 here$"

ConArtist103Rewards_Text_12:
# 64 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 3 here$"

ConArtist103Rewards_Text_13:
# 79 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to Petalburg soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_14:
# 85 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in some eggs?$"

OldaleVendingMachine_Text_0:
# 95 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 97 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 50¥$"

OldaleVendingMachine_Text_2:
# 97 "data/maps/OldaleTown/scripts.pory"
	.string "Soda Pop - 70¥$"

OldaleVendingMachine_Text_3:
# 97 "data/maps/OldaleTown/scripts.pory"
	.string "Strong Coffee - 80¥$"

OldaleVendingMachine_Text_4:
# 115 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_5:
# 124 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_6:
# 133 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_7:
# 135 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_8:
# 135 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_9:
# 142 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 148 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 168 "data/maps/OldaleTown/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 177 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 186 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 195 "data/maps/OldaleTown/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 221 "data/maps/OldaleTown/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_16:
# 230 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 239 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 248 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 276 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 282 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 288 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

OldaleOutsideHikerGuy_Text_0:
# 297 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 307 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 312 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkGuy_Text_0:
# 324 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the Internment\n"
	.string "Zone who get crazy rich by selling ores,\l"
	.string "pearls and other high value items.\p"
	.string "Do you know where to find those\n"
	.string "though? Cause I sure don't!$"

OldaleOutsideOldGuy_Text_0:
# 336 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 348 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 364 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 369 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 378 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 383 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 394 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 405 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 415 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and old man Norman!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 421 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 435 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 442 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the Rebels, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 447 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 454 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 467 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 472 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 478 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 483 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 488 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 493 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 499 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's what rebelssay...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 505 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, ome join me in Route 103! I'll\n"
	.string "be waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 522 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 527 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... Norman told us\n"
	.string "we'd need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 532 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 537 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 542 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 552 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 576 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 582 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 587 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "Norman will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 597 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 602 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

Rivalfollowchat_Text_0:
# 611 "data/maps/OldaleTown/scripts.pory"
	.string "Let's quick some Devon ass.$"

OldaleDevonGrunts_Text_0:
# 628 "data/maps/OldaleTown/scripts.pory"
	.string "Multi-battle test.$"

OldaleDevonGrunts_Text_1:
# 635 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but due to the level of Rebel\n"
	.string "activity on the eastern warehouse, we\l"
	.string "can't let anyone leave Oldale at\l"
	.string "present.$"

OldaleDevonGrunts_Text_2:
# 637 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to Rustboro... but don't worry!\p"
	.string "To deal with the threat, we have\n"
	.string "requested reinforcements from Devon\l"
	.string "HQ.$"

OldaleDevonGrunts_Text_3:
# 640 "data/maps/OldaleTown/scripts.pory"
	.string "Indeed! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_4:
# 645 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Pokéball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_5:
# 649 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 654 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseRebelGuard_Text_0:
# 672 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 679 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 681 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 683 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you, not every Rebel is like\n"
	.string "him!$"

OldaleWarehouseRebelGuard_Text_4:
# 688 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 691 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 717 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 724 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only broken clankers in\n"
	.string "this grass! I hate clankers!$"

DevonGruntFOutro::
# 619 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 622 "data/maps/OldaleTown/scripts.pory"
	.string "No I was not!.$"

RebelOldale_Outro::
# 706 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
