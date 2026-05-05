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


OldaleWeather::
# 23 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 26 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 29 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 24 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 27 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 30 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


ConArtist103Rewards::
# 35 "data/maps/OldaleTown/scripts.pory"
	lock
# 36 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 37 "data/maps/OldaleTown/scripts.pory"
	applymovement 34, ConArtist103Rewards_Movement_0
# 38 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset conartistthanked, ConArtist103Rewards_2
# 87 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_14
# 88 "data/maps/OldaleTown/scripts.pory"
	goto eggoffer
ConArtist103Rewards_1:
# 90 "data/maps/OldaleTown/scripts.pory"
finisheggdeal:
# 91 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

ConArtist103Rewards_2:
# 40 "data/maps/OldaleTown/scripts.pory"
	setflag conartistthanked
# 41 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_0
# 42 "data/maps/OldaleTown/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 43 "data/maps/OldaleTown/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 44 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_1
# 46 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_2
# 50 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 51 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_6
ConArtist103Rewards_5:
# 79 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_8
	goto ConArtist103Rewards_1

ConArtist103Rewards_6:
# 52 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_5
# 53 "data/maps/OldaleTown/scripts.pory"
eggoffer:
# 54 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_6, ConArtist103Rewards_Text_7, ConArtist103Rewards_Text_8, ConArtist103Rewards_Text_9
# 55 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ConArtist103Rewards_11
ConArtist103Rewards_10:
# 60 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ConArtist103Rewards_14
ConArtist103Rewards_13:
# 65 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_17
ConArtist103Rewards_16:
# 73 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ConArtist103Rewards_19
	goto ConArtist103Rewards_5

ConArtist103Rewards_8:
# 80 "data/maps/OldaleTown/scripts.pory"
refusedeggs:
# 81 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_13
# 83 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_1

ConArtist103Rewards_11:
# 56 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_10
# 57 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_10

ConArtist103Rewards_14:
# 61 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_11
# 62 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_13

ConArtist103Rewards_17:
# 66 "data/maps/OldaleTown/scripts.pory"
	msgbox ConArtist103Rewards_Text_12
# 70 "data/maps/OldaleTown/scripts.pory"
	goto finisheggdeal
	goto ConArtist103Rewards_16

ConArtist103Rewards_19:
# 74 "data/maps/OldaleTown/scripts.pory"
	goto refusedeggs
	goto ConArtist103Rewards_5


OldaleVendingMachine::
# 96 "data/maps/OldaleTown/scripts.pory"
	lock
# 97 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 98 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 18, 0
# 99 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1, OldaleVendingMachine_Text_2, OldaleVendingMachine_Text_3, OldaleVendingMachine_Text_4
# 102 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 155 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 208 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleVendingMachine_11
OldaleVendingMachine_10:
# 260 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldaleVendingMachine_22
OldaleVendingMachine_21:
# 263 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 264 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 265 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 103 "data/maps/OldaleTown/scripts.pory"
	checkmoney 50
# 104 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_8
OldaleVendingMachine_7:
# 149 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_16
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 156 "data/maps/OldaleTown/scripts.pory"
	checkmoney 70
# 157 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_14
OldaleVendingMachine_13:
# 202 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_27
	goto OldaleVendingMachine_4

OldaleVendingMachine_8:
# 105 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 106 "data/maps/OldaleTown/scripts.pory"
	waitse
# 107 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 109 "data/maps/OldaleTown/scripts.pory"
	random 4
# 110 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 111 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 113 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 114 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 115 "data/maps/OldaleTown/scripts.pory"
	waitse
# 116 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 117 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_5
# 118 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 119 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 121 "data/maps/OldaleTown/scripts.pory"
	random 20
# 122 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 123 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 125 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 126 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_6
# 127 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 128 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 129 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 131 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 132 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 133 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 134 "data/maps/OldaleTown/scripts.pory"
	waitse
# 135 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
# 137 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 138 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_19
OldaleVendingMachine_18:
# 143 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_32
	goto OldaleVendingMachine_7

OldaleVendingMachine_11:
# 209 "data/maps/OldaleTown/scripts.pory"
	checkmoney 80
# 210 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_25
OldaleVendingMachine_24:
# 255 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_34
	goto OldaleVendingMachine_10

OldaleVendingMachine_14:
# 158 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 159 "data/maps/OldaleTown/scripts.pory"
	waitse
# 160 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 162 "data/maps/OldaleTown/scripts.pory"
	random 4
# 163 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, sodagotstuck
# 164 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotsoda
# 166 "data/maps/OldaleTown/scripts.pory"
gotsoda:
# 167 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 168 "data/maps/OldaleTown/scripts.pory"
	waitse
# 169 "data/maps/OldaleTown/scripts.pory"
	removemoney 70
# 170 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_11
# 171 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 172 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 174 "data/maps/OldaleTown/scripts.pory"
	random 20
# 175 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 176 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrasoda
# 178 "data/maps/OldaleTown/scripts.pory"
gotextrasoda:
# 179 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_12
# 180 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 181 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_SODA_POP
# 182 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 184 "data/maps/OldaleTown/scripts.pory"
sodagotstuck:
# 185 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 186 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 187 "data/maps/OldaleTown/scripts.pory"
	waitse
# 188 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_13
# 190 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 191 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_30
OldaleVendingMachine_29:
# 196 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_39
	goto OldaleVendingMachine_13

OldaleVendingMachine_16:
# 150 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_1

OldaleVendingMachine_19:
# 139 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 140 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_18

OldaleVendingMachine_22:
# 261 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
	goto OldaleVendingMachine_21

OldaleVendingMachine_25:
# 211 "data/maps/OldaleTown/scripts.pory"
	playse SE_SHOP
# 212 "data/maps/OldaleTown/scripts.pory"
	waitse
# 213 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 215 "data/maps/OldaleTown/scripts.pory"
	random 4
# 216 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, coffeegotstuck
# 217 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotcoffee
# 219 "data/maps/OldaleTown/scripts.pory"
gotcoffee:
# 220 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 221 "data/maps/OldaleTown/scripts.pory"
	waitse
# 222 "data/maps/OldaleTown/scripts.pory"
	removemoney 50
# 223 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_15
# 224 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 225 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 227 "data/maps/OldaleTown/scripts.pory"
	random 20
# 228 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 229 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextracoffee
# 231 "data/maps/OldaleTown/scripts.pory"
gotextracoffee:
# 232 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_16
# 233 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 234 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_HEAL_POWDER
# 235 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 237 "data/maps/OldaleTown/scripts.pory"
coffeegotstuck:
# 238 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleVendingMachine_Movement_0
# 239 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 240 "data/maps/OldaleTown/scripts.pory"
	waitse
# 241 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_17
# 243 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_8, OldaleVendingMachine_Text_4
# 244 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_37
OldaleVendingMachine_36:
# 249 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_41
	goto OldaleVendingMachine_24

OldaleVendingMachine_27:
# 203 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_4

OldaleVendingMachine_30:
# 192 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 193 "data/maps/OldaleTown/scripts.pory"
	goto gotsoda
	goto OldaleVendingMachine_29

OldaleVendingMachine_32:
# 144 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_9
	goto OldaleVendingMachine_7

OldaleVendingMachine_34:
# 256 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_10
	goto OldaleVendingMachine_10

OldaleVendingMachine_37:
# 245 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 246 "data/maps/OldaleTown/scripts.pory"
	goto gotcoffee
	goto OldaleVendingMachine_36

OldaleVendingMachine_39:
# 197 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_14
	goto OldaleVendingMachine_13

OldaleVendingMachine_41:
# 250 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_18
	goto OldaleVendingMachine_24


MachineShake::
# 270 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 271 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 272 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 273 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 274 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 275 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 280 "data/maps/OldaleTown/scripts.pory"
	lock
# 281 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 282 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 286 "data/maps/OldaleTown/scripts.pory"
	lock
# 287 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 288 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 292 "data/maps/OldaleTown/scripts.pory"
	lock
# 293 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 294 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 298 "data/maps/OldaleTown/scripts.pory"
	lockall
# 299 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 300 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 305 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 310 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 315 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 320 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 301 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 302 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 306 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 307 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 311 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 312 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 316 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, ConArtist103Rewards_Movement_0
# 317 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkNPC::
# 324 "data/maps/OldaleTown/scripts.pory"
	lock
# 325 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 326 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, ConArtist103Rewards_Movement_0
# 328 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_OLDALE_TRASHCAN, OldaleOutsideParkNPC_1
# 335 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_1
# 339 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleOutsideParkNPC_1:
# 330 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkNPC_Text_0
	return


OldaleOutsideOldGuy::
# 351 "data/maps/OldaleTown/scripts.pory"
	lockall
# 352 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, ConArtist103Rewards_Movement_0
# 353 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 357 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 361 "data/maps/OldaleTown/scripts.pory"
	lock
# 362 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 363 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 364 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 365 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 366 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 367 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 368 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 369 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 370 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 371 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 372 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 373 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 377 "data/maps/OldaleTown/scripts.pory"
	lock
# 378 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 379 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 380 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 381 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 383 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 384 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 385 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 386 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 389 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 390 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 391 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 393 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 394 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 399 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 403 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 404 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 405 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 406 "data/maps/OldaleTown/scripts.pory"
	waitse
# 407 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 408 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 410 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 413 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 416 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 417 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 418 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 419 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 420 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 421 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 422 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 424 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 425 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 426 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 427 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 429 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 430 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 431 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 432 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 435 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 436 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 437 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 438 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 441 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 442 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 444 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 448 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 535 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 536 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 537 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 538 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 539 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 541 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 542 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 543 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 544 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 546 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 547 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 548 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 549 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 551 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 552 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 553 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 554 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 556 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 557 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 558 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 559 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 562 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 563 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 564 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 565 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 566 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 567 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 568 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 569 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 571 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 572 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 573 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 574 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 575 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 576 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 577 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 578 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 579 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 580 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 395 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 400 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 411 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 414 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 445 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 449 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 450 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 451 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 452 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_10
# 455 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 456 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 457 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 458 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 459 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 461 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 462 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 463 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 464 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 467 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 468 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 469 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 470 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 471 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 473 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ConArtist103Rewards_Text_3, ConArtist103Rewards_Text_4
# 474 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 476 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 480 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 486 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 487 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 488 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 489 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 492 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 493 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 494 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 495 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
# 497 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 498 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 499 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 500 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 502 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 503 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 504 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 505 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 507 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 508 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 509 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 510 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 512 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 513 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 514 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 515 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 516 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 518 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 519 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 520 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 521 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 522 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 523 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 525 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 526 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 527 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 530 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 531 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 477 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 481 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 482 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 483 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 484 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
	goto OldaleSharpyCameliaOutDLCCutscene_22


OldaleCamelia::
# 584 "data/maps/OldaleTown/scripts.pory"
	lock
# 586 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 611 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 612 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 613 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 614 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 616 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 617 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 618 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 619 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 622 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 623 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 589 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 590 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, ConArtist103Rewards_Movement_0
# 591 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 592 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 593 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 596 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 597 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 598 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 599 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 601 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 602 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 603 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 604 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


Rivalfollowchat::
# 627 "data/maps/OldaleTown/scripts.pory"
	lock
# 628 "data/maps/OldaleTown/scripts.pory"
	msgbox Rivalfollowchat_Text_0
# 629 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalFollower::
# 633 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 634 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleRivalFollower_2
OldaleRivalFollower_1:
# 637 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleRivalFollower_4
	return

OldaleRivalFollower_2:
# 635 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, Rivalfollowchat, PARTNER_RIVAL_FEMALE
	goto OldaleRivalFollower_1

OldaleRivalFollower_4:
# 638 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, Rivalfollowchat, PARTNER_RIVAL_MALE
	return


OldaleDevonGrunts::
# 650 "data/maps/OldaleTown/scripts.pory"
	lock
# 651 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 652 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 654 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 655 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_2
OldaleDevonGrunts_1:
# 666 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_5
OldaleDevonGrunts_4:
# 683 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 657 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 658 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 659 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_0
# 660 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
# 662 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 663 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_5:
# 667 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 668 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 671 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 672 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 676 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_2
# 677 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 679 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 680 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_4


OldaleWarehouseRebelGuard::
# 693 "data/maps/OldaleTown/scripts.pory"
	lockall
# 694 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 695 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 696 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleVendingMachine_Movement_0
# 697 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 698 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 700 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 701 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 703 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 706 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 709 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 711 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 712 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 713 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_0
# 714 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 716 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 717 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 718 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 719 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_1
# 720 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 721 "data/maps/OldaleTown/scripts.pory"
	removeobject 19
# 722 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 723 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 724 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 726 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 702 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 704 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


OldaleTruckRebel::
# 735 "data/maps/OldaleTown/scripts.pory"
	lock
# 736 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 737 "data/maps/OldaleTown/scripts.pory"
	applymovement 26, OldaleTruckRebel_Movement_0
# 738 "data/maps/OldaleTown/scripts.pory"
	waitmovement 26
# 740 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTruckRebel_Text_0
# 742 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleGrassRebel::
# 746 "data/maps/OldaleTown/scripts.pory"
	lock
# 747 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleGrassRebel_Text_0
# 748 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarRebelApproach0::
# 752 "data/maps/OldaleTown/scripts.pory"
	lock
# 753 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 754 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 755 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 756 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 757 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleCarRebelApproach0_Movement_0
# 758 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 759 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach0_Movement_1
# 760 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 761 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleWarehouseRebelGuard_Movement_0
# 762 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach1::
# 766 "data/maps/OldaleTown/scripts.pory"
	lock
# 767 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 768 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 769 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 770 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 771 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 772 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach1_Movement_0
# 773 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 774 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleCarRebelApproach0_Movement_0
# 775 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebelApproach2::
# 779 "data/maps/OldaleTown/scripts.pory"
	lock
# 780 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 781 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 782 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleVendingMachine_Movement_0
# 783 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebelApproach0_Text_0
# 784 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 785 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 786 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 787 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleCarRebelApproach0_Movement_0
# 788 "data/maps/OldaleTown/scripts.pory"
	goto carrebeloldaleafterapproach
	return


OldaleCarRebel::
# 793 "data/maps/OldaleTown/scripts.pory"
	lock
# 794 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 795 "data/maps/OldaleTown/scripts.pory"
carrebeloldaleafterapproach:
# 796 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_0
# 798 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 799 "data/maps/OldaleTown/scripts.pory"
	waitse
# 800 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 801 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 802 "data/maps/OldaleTown/scripts.pory"
	waitse
# 803 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 804 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 805 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 806 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 807 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebel_Movement_0
# 808 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 809 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 810 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 811 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 812 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 813 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 814 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 815 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleCarBehind::
# 822 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_0
# 823 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarBehind_Text_0
# 825 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_THROW
# 826 "data/maps/OldaleTown/scripts.pory"
	waitse
# 827 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 3
# 828 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_TRAY_ENTER
# 829 "data/maps/OldaleTown/scripts.pory"
	waitse
# 830 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_1
# 831 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 832 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCarRebel_Text_2
# 833 "data/maps/OldaleTown/scripts.pory"
	playse SE_LEDGE
# 834 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarRebelApproach2_Movement_0
# 835 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 836 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 837 "data/maps/OldaleTown/scripts.pory"
	applymovement 25, OldaleCarBehind_Movement_1
# 838 "data/maps/OldaleTown/scripts.pory"
	waitmovement 25
# 839 "data/maps/OldaleTown/scripts.pory"
	fadeoutbgm 1
# 840 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 841 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALECARREBEL, 1
# 842 "data/maps/OldaleTown/scripts.pory"
	removeobject 25
# 843 "data/maps/OldaleTown/scripts.pory"
	setflag carrebelleavescar
# 844 "data/maps/OldaleTown/scripts.pory"
	clearflag carrebelatDC
# 845 "data/maps/OldaleTown/scripts.pory"
	release
	return


# 37 "data/maps/OldaleTown/scripts.pory"
ConArtist103Rewards_Movement_0:
# 37 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 132 "data/maps/OldaleTown/scripts.pory"
OldaleVendingMachine_Movement_0:
# 132 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 363 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 363 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 363 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 363 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 363 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 363 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 363 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 368 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 368 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 368 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 368 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 368 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 368 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 368 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 371 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 371 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 404 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 404 "data/maps/OldaleTown/scripts.pory"
	face_left
# 404 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 417 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 417 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 417 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 418 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 418 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 468 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 468 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 526 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 526 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 657 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 657 "data/maps/OldaleTown/scripts.pory"
	face_player
# 657 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 671 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 671 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 671 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 676 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 676 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 676 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 713 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_0:
# 713 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 719 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_1:
# 719 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 737 "data/maps/OldaleTown/scripts.pory"
OldaleTruckRebel_Movement_0:
# 737 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_left
	step_end

# 757 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_0:
# 757 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 759 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach0_Movement_1:
# 759 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
# 759 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 772 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach1_Movement_0:
# 772 "data/maps/OldaleTown/scripts.pory"
	jump_up
	step_end

# 785 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebelApproach2_Movement_0:
# 785 "data/maps/OldaleTown/scripts.pory"
	jump_2_up
	step_end

# 807 "data/maps/OldaleTown/scripts.pory"
OldaleCarRebel_Movement_0:
# 807 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 807 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 807 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 807 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 807 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 807 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 807 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 807 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 822 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_0:
# 822 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 822 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 837 "data/maps/OldaleTown/scripts.pory"
OldaleCarBehind_Movement_1:
# 837 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 837 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 837 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 837 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 837 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 837 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 837 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

ConArtist103Rewards_Text_0:
# 41 "data/maps/OldaleTown/scripts.pory"
	.string "You did me a solid there, champ! You're a\n"
	.string "pro performer!\p"
	.string "Here's your reward - Jimmy McGligar\n"
	.string "never goes back on his word!$"

ConArtist103Rewards_Text_1:
# 44 "data/maps/OldaleTown/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

ConArtist103Rewards_Text_2:
# 46 "data/maps/OldaleTown/scripts.pory"
	.string "Look, I know I said I'd give you some\n"
	.string "cash but...\p"
	.string "All I have is my wares! The cash I get\n"
	.string "when I sell them, duh!\p"
	.string "Speaking of wares - would you like to\n"
	.string "take a look at them?$"

ConArtist103Rewards_Text_3:
# 50 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

ConArtist103Rewards_Text_4:
# 50 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

ConArtist103Rewards_Text_5:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "Hehe, of course you do... here's what I\n"
	.string "got! Only 500 each!$"

ConArtist103Rewards_Text_6:
# 54 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 1$"

ConArtist103Rewards_Text_7:
# 54 "data/maps/OldaleTown/scripts.pory"
	.string "Egg Option 2$"

ConArtist103Rewards_Text_8:
# 54 "data/maps/OldaleTown/scripts.pory"
	.string "Rosy Egg$"

ConArtist103Rewards_Text_9:
# 54 "data/maps/OldaleTown/scripts.pory"
	.string "Not really$"

ConArtist103Rewards_Text_10:
# 56 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 1 here$"

ConArtist103Rewards_Text_11:
# 61 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 2 here$"

ConArtist103Rewards_Text_12:
# 66 "data/maps/OldaleTown/scripts.pory"
	.string "Egg 3 here$"

ConArtist103Rewards_Text_13:
# 81 "data/maps/OldaleTown/scripts.pory"
	.string "Welp, that's your loss.\p"
	.string "I'm off to Petalburg soon, so you'll\n"
	.string "have to walk if you change your mind!$"

ConArtist103Rewards_Text_14:
# 87 "data/maps/OldaleTown/scripts.pory"
	.string "So? Interested in some eggs?$"

OldaleVendingMachine_Text_0:
# 97 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 99 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 50¥$"

OldaleVendingMachine_Text_2:
# 99 "data/maps/OldaleTown/scripts.pory"
	.string "Soda Pop - 70¥$"

OldaleVendingMachine_Text_3:
# 99 "data/maps/OldaleTown/scripts.pory"
	.string "Strong Coffee - 80¥$"

OldaleVendingMachine_Text_4:
# 99 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_5:
# 117 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_6:
# 126 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_7:
# 135 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_8:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_9:
# 144 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_10:
# 150 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleVendingMachine_Text_11:
# 170 "data/maps/OldaleTown/scripts.pory"
	.string "A Soda dropped on the machine's tray.$"

OldaleVendingMachine_Text_12:
# 179 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Soda can dropped on the\n"
	.string "machine's tray!$"

OldaleVendingMachine_Text_13:
# 188 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Soda can\n"
	.string "enough for it to fall...$"

OldaleVendingMachine_Text_14:
# 197 "data/maps/OldaleTown/scripts.pory"
	.string "The Soda can just stays on the verge of\n"
	.string "falling, mockingly.$"

OldaleVendingMachine_Text_15:
# 223 "data/maps/OldaleTown/scripts.pory"
	.string "A Strong Coffee can dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_16:
# 232 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Strong Coffee can dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_17:
# 241 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Strong\n"
	.string "Coffee enough for it to fall...$"

OldaleVendingMachine_Text_18:
# 250 "data/maps/OldaleTown/scripts.pory"
	.string "The Strong Coffee just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleTownSign_Text_0:
# 281 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 287 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 293 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

OldaleOutsideHikerGuy_Text_0:
# 302 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 312 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 317 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkNPC_Text_0:
# 330 "data/maps/OldaleTown/scripts.pory"
	.string "I hear there's people in the Rebel Zone\n"
	.string "who get crazy rich by selling ores,\l"
	.string "pearls and other high value items.\p"
	.string "Do you know where to find those\n"
	.string "though? Cause I sure don't, or I\l"
	.string "wouldn't be sitting here!$"

OldaleOutsideParkNPC_Text_1:
# 335 "data/maps/OldaleTown/scripts.pory"
	.string "Uhm... did you just dig through that\n"
	.string "trash can over there?\p"
	.string "If you need pokeyen, you should get a\n"
	.string "Devon Radar and find scrap to sell.\l"
	.string "There's lots lying around.\p"
	.string "Other people get rich by selling items\n"
	.string "like ores and pearls, but I wouldn't\l"
	.string "know where to start looking for those.$"

OldaleOutsideOldGuy_Text_0:
# 353 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 365 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 381 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 400 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 411 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 414 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 422 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 427 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 432 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and old man Norman!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 438 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 452 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 459 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the Rebels, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 464 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 471 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 484 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 489 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 495 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 500 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 505 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 510 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 516 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's what rebelssay...$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 522 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, ome join me in Route 103! I'll\n"
	.string "be waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 539 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 544 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... Norman told us\n"
	.string "we'd need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 549 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 554 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 559 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 569 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 593 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 599 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 604 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "Norman will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 614 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 619 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

Rivalfollowchat_Text_0:
# 628 "data/maps/OldaleTown/scripts.pory"
	.string "Let's quick some Devon ass.$"

OldaleDevonGrunts_Text_0:
# 651 "data/maps/OldaleTown/scripts.pory"
	.string "Multi-battle test.$"

OldaleDevonGrunts_Text_1:
# 658 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but due to the level of Rebel\n"
	.string "activity on the eastern warehouse, we\l"
	.string "can't let anyone leave Oldale at\l"
	.string "present.$"

OldaleDevonGrunts_Text_2:
# 660 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to Rustboro... but don't worry!\p"
	.string "To deal with the threat, we have\n"
	.string "requested reinforcements from Devon\l"
	.string "HQ.$"

OldaleDevonGrunts_Text_3:
# 663 "data/maps/OldaleTown/scripts.pory"
	.string "Indeed! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_4:
# 668 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Pokéball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_5:
# 672 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 677 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseRebelGuard_Text_0:
# 695 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 702 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 704 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 706 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you, not every Rebel is like\n"
	.string "him!$"

OldaleWarehouseRebelGuard_Text_4:
# 711 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 714 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

OldaleTruckRebel_Text_0:
# 740 "data/maps/OldaleTown/scripts.pory"
	.string "The rebel is trying to pry open the\n"
	.string "truck. Better to leave her alone.$"

OldaleGrassRebel_Text_0:
# 747 "data/maps/OldaleTown/scripts.pory"
	.string "Damn it, there's only broken clankers in\n"
	.string "this grass! I hate clankers!$"

OldaleCarRebelApproach0_Text_0:
# 756 "data/maps/OldaleTown/scripts.pory"
	.string "Stop it, kid!$"

OldaleCarRebel_Text_0:
# 796 "data/maps/OldaleTown/scripts.pory"
	.string "This is Rebel turf! We don't want no kids\n"
	.string "nosing around!\p"
	.string "Gonna have to teach you a lesson... GO,\n"
	.string "ELECTRIKE!$"

OldaleCarRebel_Text_1:
# 803 "data/maps/OldaleTown/scripts.pory"
	.string "... oh. Right. He's fainted from before...\p"
	.string "... {COLOR LIGHT_GRAY}{SHADOW WHITE}Shit...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleCarRebel_Text_2:
# 805 "data/maps/OldaleTown/scripts.pory"
	.string "Wait right here, you hear me!? I'll go to\n"
	.string "the Devon Center real quick!$"

OldaleCarBehind_Text_0:
# 823 "data/maps/OldaleTown/scripts.pory"
	.string "Hey, you think you're smart or\n"
	.string "something? Trying to sneak up on me!?\p"
	.string "Well, you asked for it - GO, ELECTRIKE!$"

DevonGruntFOutro::
# 642 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 645 "data/maps/OldaleTown/scripts.pory"
	.string "No I was not!.$"

RebelOldale_Outro::
# 729 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
