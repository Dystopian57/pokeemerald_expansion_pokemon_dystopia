# 1 "data/maps/JimmyEggStore/scripts.pory"

# 2 "data/maps/JimmyEggStore/scripts.pory"
JimmyEggStore_MapScripts::
# 3 "data/maps/JimmyEggStore/scripts.pory"
	.byte 0

JimmyMcGligarSewersIdle::
# 10 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_unset JimmySewersIntro, JimmyMcGligarSewersIdle_2
JimmyMcGligarSewersIdle_1:
# 137 "data/maps/JimmyEggStore/scripts.pory"
startJimmyStoreidle:
# 138 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_14
# 141 "data/maps/JimmyEggStore/scripts.pory"
eggsell:
# 142 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_15, JimmyMcGligarSewersIdle_Text_16, JimmyMcGligarSewersIdle_Text_17, JimmyMcGligarSewersIdle_Text_18
# 145 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq JimmyMcGligarSewersIdle_5
JimmyMcGligarSewersIdle_4:
# 151 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_13
JimmyMcGligarSewersIdle_12:
# 307 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_21
JimmyMcGligarSewersIdle_20:
# 805 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_37
JimmyMcGligarSewersIdle_36:
# 823 "data/maps/JimmyEggStore/scripts.pory"
endofjimmystoreidle:
# 824 "data/maps/JimmyEggStore/scripts.pory"
	release
	return

JimmyMcGligarSewersIdle_2:
# 14 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyMcGligarSewersIdle_9
JimmyMcGligarSewersIdle_7:
# 22 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyMcGligarSewersIdle_17
JimmyMcGligarSewersIdle_15:
# 54 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq JimmyMcGligarSewersIdle_29
JimmyMcGligarSewersIdle_26:
# 73 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq JimmyMcGligarSewersIdle_50
JimmyMcGligarSewersIdle_47:
# 86 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq JimmyMcGligarSewersIdle_66
JimmyMcGligarSewersIdle_63:
# 117 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 3
	goto_if_eq JimmyMcGligarSewersIdle_78
	goto JimmyMcGligarSewersIdle_1

JimmyMcGligarSewersIdle_5:
# 146 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_19
# 148 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_4

JimmyMcGligarSewersIdle_8:
# 17 "data/maps/JimmyEggStore/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 4
# 18 "data/maps/JimmyEggStore/scripts.pory"
	setflag JimmySewersIntro
# 19 "data/maps/JimmyEggStore/scripts.pory"
	goto startJimmyStoreidle
	goto JimmyMcGligarSewersIdle_7

JimmyMcGligarSewersIdle_9:
# 14 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_unset conartistaskeddistract, JimmyMcGligarSewersIdle_8
	goto JimmyMcGligarSewersIdle_7

JimmyMcGligarSewersIdle_13:
# 152 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_20
# 154 "data/maps/JimmyEggStore/scripts.pory"
	checkmoney 1000
# 155 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JimmyMcGligarSewersIdle_24
JimmyMcGligarSewersIdle_23:
# 293 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JimmyMcGligarSewersIdle_42
	goto JimmyMcGligarSewersIdle_12

JimmyMcGligarSewersIdle_16:
# 26 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_0
# 27 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 28 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_PIN
# 29 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_0
# 30 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 31 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_1
# 34 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_M_SWAGGER2
# 35 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_1
# 36 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 38 "data/maps/JimmyEggStore/scripts.pory"
	checkplayergender
# 39 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JimmyMcGligarSewersIdle_34
JimmyMcGligarSewersIdle_33:
# 43 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq JimmyMcGligarSewersIdle_55
JimmyMcGligarSewersIdle_54:
# 47 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_4
# 49 "data/maps/JimmyEggStore/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 4
# 50 "data/maps/JimmyEggStore/scripts.pory"
	setflag JimmySewersIntro
# 51 "data/maps/JimmyEggStore/scripts.pory"
	goto startJimmyStoreidle
	goto JimmyMcGligarSewersIdle_15

JimmyMcGligarSewersIdle_17:
# 22 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistaskeddistract, JimmyMcGligarSewersIdle_16
	goto JimmyMcGligarSewersIdle_15

JimmyMcGligarSewersIdle_21:
# 309 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set dailythimbleregg, JimmyMcGligarSewersIdle_40
JimmyMcGligarSewersIdle_39:
# 317 "data/maps/JimmyEggStore/scripts.pory"
	checkplayergender
# 318 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JimmyMcGligarSewersIdle_58
JimmyMcGligarSewersIdle_57:
# 322 "data/maps/JimmyEggStore/scripts.pory"
	checkplayergender
# 323 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq JimmyMcGligarSewersIdle_71
JimmyMcGligarSewersIdle_70:
# 326 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 328 "data/maps/JimmyEggStore/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 331 "data/maps/JimmyEggStore/scripts.pory"
	setflag thimbleregghideobjects
# 332 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 6
# 333 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 7
# 334 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 8
# 335 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 12
# 339 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggballs
# 340 "data/maps/JimmyEggStore/scripts.pory"
	addobject 14
# 341 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 342 "data/maps/JimmyEggStore/scripts.pory"
	addobject 16
# 344 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 5, 1, 3
# 345 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 1, 5
# 347 "data/maps/JimmyEggStore/scripts.pory"
	special SpawnCameraObject
# 348 "data/maps/JimmyEggStore/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JimmyMcGligarSewersIdle_Movement_5
# 349 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 350 "data/maps/JimmyEggStore/scripts.pory"
	special RemoveCameraObject
# 352 "data/maps/JimmyEggStore/scripts.pory"
	fadeoutbgm 1
# 353 "data/maps/JimmyEggStore/scripts.pory"
	fadeinbgm 1
# 354 "data/maps/JimmyEggStore/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 356 "data/maps/JimmyEggStore/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 360 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_40
# 363 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 364 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 365 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 366 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 367 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 368 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 370 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_TRADE
# 371 "data/maps/JimmyEggStore/scripts.pory"
	setflag thimblereggegg
# 372 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 13
# 373 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 377 "data/maps/JimmyEggStore/scripts.pory"
	random 3
# 378 "data/maps/JimmyEggStore/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 380 "data/maps/JimmyEggStore/scripts.pory"
	switch VAR_RESULT
# 384 "data/maps/JimmyEggStore/scripts.pory"
	case 0, JimmyMcGligarSewersIdle_81
# 504 "data/maps/JimmyEggStore/scripts.pory"
	case 1, JimmyMcGligarSewersIdle_82
# 623 "data/maps/JimmyEggStore/scripts.pory"
	case 2, JimmyMcGligarSewersIdle_83
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_24:
# 156 "data/maps/JimmyEggStore/scripts.pory"
	showmoneybox 18, 0
# 158 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_21, JimmyMcGligarSewersIdle_Text_22, JimmyMcGligarSewersIdle_Text_23, JimmyMcGligarSewersIdle_Text_24, JimmyMcGligarSewersIdle_Text_25, JimmyMcGligarSewersIdle_Text_26, JimmyMcGligarSewersIdle_Text_27
# 167 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_45
JimmyMcGligarSewersIdle_44:
# 173 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_61
JimmyMcGligarSewersIdle_60:
# 190 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_74
JimmyMcGligarSewersIdle_73:
# 208 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_85
JimmyMcGligarSewersIdle_84:
# 226 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq JimmyMcGligarSewersIdle_99
JimmyMcGligarSewersIdle_98:
# 244 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq JimmyMcGligarSewersIdle_116
JimmyMcGligarSewersIdle_115:
# 262 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq JimmyMcGligarSewersIdle_139
JimmyMcGligarSewersIdle_138:
# 282 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set newmonabouttobesenttoPC, JimmyMcGligarSewersIdle_158
JimmyMcGligarSewersIdle_157:
# 288 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_35
# 289 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_23

JimmyMcGligarSewersIdle_27:
# 57 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_5
# 61 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 62 "data/maps/JimmyEggStore/scripts.pory"
	fadeoutbgm 1
# 63 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 64 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_6
# 66 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_7
# 68 "data/maps/JimmyEggStore/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 4
# 69 "data/maps/JimmyEggStore/scripts.pory"
	setflag JimmySewersIntro
# 70 "data/maps/JimmyEggStore/scripts.pory"
	goto startJimmyStoreidle
	goto JimmyMcGligarSewersIdle_26

JimmyMcGligarSewersIdle_28:
# 54 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set ! betrayedconcordconartist, JimmyMcGligarSewersIdle_27
	goto JimmyMcGligarSewersIdle_26

JimmyMcGligarSewersIdle_29:
# 54 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_28
	goto JimmyMcGligarSewersIdle_26

JimmyMcGligarSewersIdle_34:
# 40 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_2
	goto JimmyMcGligarSewersIdle_33

JimmyMcGligarSewersIdle_37:
# 806 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_52
# 818 "data/maps/JimmyEggStore/scripts.pory"
	goto eggsell
	goto JimmyMcGligarSewersIdle_36

JimmyMcGligarSewersIdle_40:
# 311 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_37
# 314 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_39

JimmyMcGligarSewersIdle_42:
# 295 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 296 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_PIN
# 297 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_0
# 298 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 299 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_36
# 301 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_12

JimmyMcGligarSewersIdle_45:
# 168 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_19
# 170 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_44

JimmyMcGligarSewersIdle_48:
# 76 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_PIN
# 77 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_0
# 78 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 79 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_8
# 81 "data/maps/JimmyEggStore/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 4
# 82 "data/maps/JimmyEggStore/scripts.pory"
	setflag JimmySewersIntro
# 83 "data/maps/JimmyEggStore/scripts.pory"
	goto startJimmyStoreidle
	goto JimmyMcGligarSewersIdle_47

JimmyMcGligarSewersIdle_49:
# 73 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set helpedconcordconartist, JimmyMcGligarSewersIdle_48
	goto JimmyMcGligarSewersIdle_47

JimmyMcGligarSewersIdle_50:
# 73 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_49
	goto JimmyMcGligarSewersIdle_47

JimmyMcGligarSewersIdle_55:
# 44 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_3
	goto JimmyMcGligarSewersIdle_54

JimmyMcGligarSewersIdle_58:
# 319 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_38
	goto JimmyMcGligarSewersIdle_57

JimmyMcGligarSewersIdle_61:
# 175 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 176 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_76
	goto JimmyMcGligarSewersIdle_60

JimmyMcGligarSewersIdle_64:
# 89 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_PIN
# 90 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_0
# 91 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 92 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_9
# 93 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_M_SWAGGER2
# 94 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_1
# 95 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 96 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_10
# 101 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_2
# 102 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 103 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_11
# 104 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_LEDGE
# 105 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 1, JimmyMcGligarSewersIdle_Movement_3
# 106 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 1
# 107 "data/maps/JimmyEggStore/scripts.pory"
	playmoncry SPECIES_TAMARAKKU, CRY_MODE_WEAK
# 109 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_4
# 110 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 111 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_12
# 112 "data/maps/JimmyEggStore/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 4
# 113 "data/maps/JimmyEggStore/scripts.pory"
	setflag JimmySewersIntro
# 114 "data/maps/JimmyEggStore/scripts.pory"
	goto startJimmyStoreidle
	goto JimmyMcGligarSewersIdle_63

JimmyMcGligarSewersIdle_65:
# 86 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set betrayedconcordconartist, JimmyMcGligarSewersIdle_64
	goto JimmyMcGligarSewersIdle_63

JimmyMcGligarSewersIdle_66:
# 86 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_65
	goto JimmyMcGligarSewersIdle_63

JimmyMcGligarSewersIdle_71:
# 324 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_39
	goto JimmyMcGligarSewersIdle_70

JimmyMcGligarSewersIdle_74:
# 192 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 193 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_87
	goto JimmyMcGligarSewersIdle_73

JimmyMcGligarSewersIdle_76:
# 177 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 178 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 179 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 180 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 181 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 182 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 184 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 185 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 186 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_28
	goto JimmyMcGligarSewersIdle_60

JimmyMcGligarSewersIdle_78:
# 120 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_PIN
# 121 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_0
# 122 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 123 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_13
# 125 "data/maps/JimmyEggStore/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 4
# 126 "data/maps/JimmyEggStore/scripts.pory"
	setflag JimmySewersIntro
# 127 "data/maps/JimmyEggStore/scripts.pory"
	goto startJimmyStoreidle
	goto JimmyMcGligarSewersIdle_1

JimmyMcGligarSewersIdle_81:
# 385 "data/maps/JimmyEggStore/scripts.pory"
temporarythimblecommonstart:
# 387 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 388 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_6
# 389 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_7
# 390 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 14
# 392 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 393 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_8
# 394 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_9
# 395 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 397 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 398 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_10
# 399 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_11
# 400 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 403 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_41
# 405 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_42, JimmyMcGligarSewersIdle_Text_43, JimmyMcGligarSewersIdle_Text_44
# 408 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_90
JimmyMcGligarSewersIdle_89:
# 428 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_104
JimmyMcGligarSewersIdle_103:
# 433 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_120
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_82:
# 505 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 506 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_8
# 507 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_9
# 508 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 510 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 511 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_6
# 512 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_7
# 513 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 515 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 516 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_8
# 517 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_9
# 518 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 15
# 521 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_41
# 523 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_42, JimmyMcGligarSewersIdle_Text_43, JimmyMcGligarSewersIdle_Text_44
# 526 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_93
JimmyMcGligarSewersIdle_92:
# 595 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_107
JimmyMcGligarSewersIdle_106:
# 600 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_122
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_83:
# 626 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 627 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_12
# 628 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_13
# 629 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 631 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 632 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_6
# 633 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_7
# 634 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 636 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 637 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_6
# 638 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_7
# 639 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 641 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 642 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_6
# 643 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_7
# 644 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 15
# 648 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_41
# 650 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_42, JimmyMcGligarSewersIdle_Text_43, JimmyMcGligarSewersIdle_Text_44
# 653 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_96
JimmyMcGligarSewersIdle_95:
# 674 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_113
JimmyMcGligarSewersIdle_112:
# 744 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_133
JimmyMcGligarSewersIdle_132:
# 750 "data/maps/JimmyEggStore/scripts.pory"
jimmypicksupthimblereggstuff:
# 751 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_50
# 752 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 755 "data/maps/JimmyEggStore/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 757 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_M_STRENGTH
# 758 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 759 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_M_STRENGTH
# 760 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 763 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 13
# 764 "data/maps/JimmyEggStore/scripts.pory"
	setflag thimblereggegg
# 767 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimbleregghideobjects
# 768 "data/maps/JimmyEggStore/scripts.pory"
	addobject 6
# 769 "data/maps/JimmyEggStore/scripts.pory"
	addobject 7
# 770 "data/maps/JimmyEggStore/scripts.pory"
	addobject 8
# 771 "data/maps/JimmyEggStore/scripts.pory"
	addobject 12
# 775 "data/maps/JimmyEggStore/scripts.pory"
	setflag thimblereggballs
# 776 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 14
# 777 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 778 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 16
# 780 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 5, 4, 4
# 781 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 5
# 783 "data/maps/JimmyEggStore/scripts.pory"
	special SpawnCameraObject
# 784 "data/maps/JimmyEggStore/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JimmyMcGligarSewersIdle_Movement_14
# 785 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 786 "data/maps/JimmyEggStore/scripts.pory"
	special RemoveCameraObject
# 788 "data/maps/JimmyEggStore/scripts.pory"
	fadeoutbgm 1
# 789 "data/maps/JimmyEggStore/scripts.pory"
	fadeinbgm 1
# 790 "data/maps/JimmyEggStore/scripts.pory"
	playbgm MUS_PYRITETOWN, TRUE
# 792 "data/maps/JimmyEggStore/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 794 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_51
# 795 "data/maps/JimmyEggStore/scripts.pory"
	setflag dailythimbleregg
# 798 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_85:
# 210 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 211 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_101
	goto JimmyMcGligarSewersIdle_84

JimmyMcGligarSewersIdle_87:
# 194 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 195 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 196 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 197 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 198 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 199 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 201 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 202 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 203 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_29
	goto JimmyMcGligarSewersIdle_73

JimmyMcGligarSewersIdle_90:
# 409 "data/maps/JimmyEggStore/scripts.pory"
wrongthimblereggeggitsinright:
# 410 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_RG_HELP_ERROR
# 411 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_45
# 413 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 415 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 416 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 417 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 2, 4
# 418 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 420 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 421 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 423 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_46
# 424 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_89

JimmyMcGligarSewersIdle_93:
# 527 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SUCCESS
# 528 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 531 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 533 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 534 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 535 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 0, 4
# 536 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 539 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 540 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_47
# 544 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 545 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_110
JimmyMcGligarSewersIdle_109:
# 548 "data/maps/JimmyEggStore/scripts.pory"
	random 6
# 549 "data/maps/JimmyEggStore/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 551 "data/maps/JimmyEggStore/scripts.pory"
	switch VAR_RESULT
# 554 "data/maps/JimmyEggStore/scripts.pory"
	case 0, JimmyMcGligarSewersIdle_126
# 559 "data/maps/JimmyEggStore/scripts.pory"
	case 1, JimmyMcGligarSewersIdle_127
# 564 "data/maps/JimmyEggStore/scripts.pory"
	case 2, JimmyMcGligarSewersIdle_128
# 569 "data/maps/JimmyEggStore/scripts.pory"
	case 3, JimmyMcGligarSewersIdle_129
# 574 "data/maps/JimmyEggStore/scripts.pory"
	case 4, JimmyMcGligarSewersIdle_130
# 579 "data/maps/JimmyEggStore/scripts.pory"
	case 5, JimmyMcGligarSewersIdle_131
JimmyMcGligarSewersIdle_124:
# 586 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set newmonabouttobesenttoPC, JimmyMcGligarSewersIdle_147
JimmyMcGligarSewersIdle_146:
# 592 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_92

JimmyMcGligarSewersIdle_96:
# 655 "data/maps/JimmyEggStore/scripts.pory"
wrongthimblereggeggitsinmiddle:
# 656 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_RG_HELP_ERROR
# 657 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_45
# 659 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 661 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 662 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 663 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 1, 4
# 664 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 666 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 667 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 669 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_49
# 670 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_95

JimmyMcGligarSewersIdle_99:
# 228 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 229 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_118
	goto JimmyMcGligarSewersIdle_98

JimmyMcGligarSewersIdle_101:
# 212 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 213 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 214 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 215 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 216 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 217 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 219 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TEDDIURSA
# 220 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 221 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_30
	goto JimmyMcGligarSewersIdle_84

JimmyMcGligarSewersIdle_104:
# 429 "data/maps/JimmyEggStore/scripts.pory"
	goto wrongthimblereggeggitsinright
	goto JimmyMcGligarSewersIdle_103

JimmyMcGligarSewersIdle_107:
# 596 "data/maps/JimmyEggStore/scripts.pory"
	goto wrongthimblereggeggitsinleft
	goto JimmyMcGligarSewersIdle_106

JimmyMcGligarSewersIdle_110:
# 546 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_109

JimmyMcGligarSewersIdle_113:
# 676 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SUCCESS
# 677 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 680 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 682 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 683 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 684 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 1, 4
# 685 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 688 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 689 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_47
# 691 "data/maps/JimmyEggStore/scripts.pory"
	random 6
# 692 "data/maps/JimmyEggStore/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 694 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 695 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_136
JimmyMcGligarSewersIdle_135:
# 698 "data/maps/JimmyEggStore/scripts.pory"
	switch VAR_RESULT
# 701 "data/maps/JimmyEggStore/scripts.pory"
	case 0, JimmyMcGligarSewersIdle_151
# 706 "data/maps/JimmyEggStore/scripts.pory"
	case 1, JimmyMcGligarSewersIdle_152
# 711 "data/maps/JimmyEggStore/scripts.pory"
	case 2, JimmyMcGligarSewersIdle_153
# 716 "data/maps/JimmyEggStore/scripts.pory"
	case 3, JimmyMcGligarSewersIdle_154
# 721 "data/maps/JimmyEggStore/scripts.pory"
	case 4, JimmyMcGligarSewersIdle_155
# 726 "data/maps/JimmyEggStore/scripts.pory"
	case 5, JimmyMcGligarSewersIdle_156
JimmyMcGligarSewersIdle_149:
# 733 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set newmonabouttobesenttoPC, JimmyMcGligarSewersIdle_171
JimmyMcGligarSewersIdle_170:
# 739 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_112

JimmyMcGligarSewersIdle_116:
# 246 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 247 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_141
	goto JimmyMcGligarSewersIdle_115

JimmyMcGligarSewersIdle_118:
# 230 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 231 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 232 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 233 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 234 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 235 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 237 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HELIOPTILE
# 238 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 239 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_31
	goto JimmyMcGligarSewersIdle_98

JimmyMcGligarSewersIdle_120:
# 435 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SUCCESS
# 436 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 439 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 441 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 442 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 443 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 2, 4
# 444 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 447 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 448 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_47
# 452 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 453 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_144
JimmyMcGligarSewersIdle_143:
# 456 "data/maps/JimmyEggStore/scripts.pory"
	random 6
# 457 "data/maps/JimmyEggStore/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 459 "data/maps/JimmyEggStore/scripts.pory"
	switch VAR_RESULT
# 462 "data/maps/JimmyEggStore/scripts.pory"
	case 0, JimmyMcGligarSewersIdle_164
# 467 "data/maps/JimmyEggStore/scripts.pory"
	case 1, JimmyMcGligarSewersIdle_165
# 472 "data/maps/JimmyEggStore/scripts.pory"
	case 2, JimmyMcGligarSewersIdle_166
# 477 "data/maps/JimmyEggStore/scripts.pory"
	case 3, JimmyMcGligarSewersIdle_167
# 482 "data/maps/JimmyEggStore/scripts.pory"
	case 4, JimmyMcGligarSewersIdle_168
# 487 "data/maps/JimmyEggStore/scripts.pory"
	case 5, JimmyMcGligarSewersIdle_169
JimmyMcGligarSewersIdle_162:
# 494 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set newmonabouttobesenttoPC, JimmyMcGligarSewersIdle_174
JimmyMcGligarSewersIdle_173:
# 500 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_122:
# 602 "data/maps/JimmyEggStore/scripts.pory"
wrongthimblereggeggitsinleft:
# 603 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_RG_HELP_ERROR
# 604 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_45
# 606 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 608 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 609 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 610 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 0, 4
# 611 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 613 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 614 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 616 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_48
# 617 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_126:
# 555 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 556 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 557 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_28
	goto JimmyMcGligarSewersIdle_124

JimmyMcGligarSewersIdle_127:
# 560 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 561 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 562 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_29
	goto JimmyMcGligarSewersIdle_124

JimmyMcGligarSewersIdle_128:
# 565 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TEDDIURSA
# 566 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 567 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_30
	goto JimmyMcGligarSewersIdle_124

JimmyMcGligarSewersIdle_129:
# 570 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HELIOPTILE
# 571 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 572 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_31
	goto JimmyMcGligarSewersIdle_124

JimmyMcGligarSewersIdle_130:
# 575 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_FOMANTIS
# 576 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 577 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_32
	goto JimmyMcGligarSewersIdle_124

JimmyMcGligarSewersIdle_131:
# 580 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HAPPINY
# 581 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 582 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_33
	goto JimmyMcGligarSewersIdle_124

JimmyMcGligarSewersIdle_133:
# 745 "data/maps/JimmyEggStore/scripts.pory"
	goto wrongthimblereggeggitsinmiddle
	goto JimmyMcGligarSewersIdle_132

JimmyMcGligarSewersIdle_136:
# 696 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_135

JimmyMcGligarSewersIdle_139:
# 265 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 266 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_160
	goto JimmyMcGligarSewersIdle_138

JimmyMcGligarSewersIdle_141:
# 248 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 249 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 250 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 251 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 252 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 253 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 255 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_FOMANTIS
# 256 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 257 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_32
	goto JimmyMcGligarSewersIdle_115

JimmyMcGligarSewersIdle_144:
# 454 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_143

JimmyMcGligarSewersIdle_147:
# 588 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_34
# 589 "data/maps/JimmyEggStore/scripts.pory"
	clearflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_146

JimmyMcGligarSewersIdle_151:
# 702 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 703 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 704 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_28
	goto JimmyMcGligarSewersIdle_149

JimmyMcGligarSewersIdle_152:
# 707 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 708 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 709 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_29
	goto JimmyMcGligarSewersIdle_149

JimmyMcGligarSewersIdle_153:
# 712 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TEDDIURSA
# 713 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 714 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_30
	goto JimmyMcGligarSewersIdle_149

JimmyMcGligarSewersIdle_154:
# 717 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HELIOPTILE
# 718 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 719 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_31
	goto JimmyMcGligarSewersIdle_149

JimmyMcGligarSewersIdle_155:
# 722 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_FOMANTIS
# 723 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 724 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_32
	goto JimmyMcGligarSewersIdle_149

JimmyMcGligarSewersIdle_156:
# 727 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HAPPINY
# 728 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 729 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_33
	goto JimmyMcGligarSewersIdle_149

JimmyMcGligarSewersIdle_158:
# 284 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_34
# 285 "data/maps/JimmyEggStore/scripts.pory"
	clearflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_157

JimmyMcGligarSewersIdle_160:
# 267 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 268 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 269 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 270 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 271 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 272 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 274 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HAPPINY
# 275 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 276 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_33
	goto JimmyMcGligarSewersIdle_138

JimmyMcGligarSewersIdle_164:
# 463 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 464 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 465 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_28
	goto JimmyMcGligarSewersIdle_162

JimmyMcGligarSewersIdle_165:
# 468 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 469 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 470 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_29
	goto JimmyMcGligarSewersIdle_162

JimmyMcGligarSewersIdle_166:
# 473 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TEDDIURSA
# 474 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 475 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_30
	goto JimmyMcGligarSewersIdle_162

JimmyMcGligarSewersIdle_167:
# 478 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HELIOPTILE
# 479 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 480 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_31
	goto JimmyMcGligarSewersIdle_162

JimmyMcGligarSewersIdle_168:
# 483 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_FOMANTIS
# 484 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 485 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_32
	goto JimmyMcGligarSewersIdle_162

JimmyMcGligarSewersIdle_169:
# 488 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HAPPINY
# 489 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 490 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_33
	goto JimmyMcGligarSewersIdle_162

JimmyMcGligarSewersIdle_171:
# 735 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_34
# 736 "data/maps/JimmyEggStore/scripts.pory"
	clearflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_170

JimmyMcGligarSewersIdle_174:
# 496 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_34
# 497 "data/maps/JimmyEggStore/scripts.pory"
	clearflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_173


JimmyTamarakkuIdle::
# 829 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 830 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 1, JimmyMcGligarSewersIdle_Movement_4
# 831 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 1
# 832 "data/maps/JimmyEggStore/scripts.pory"
	playmoncry SPECIES_TAMARAKKU, CRY_MODE_WEAK
# 833 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyTamarakkuIdle_Text_0
# 834 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 1, JimmyTamarakkuIdle_Movement_0
# 835 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 1
# 836 "data/maps/JimmyEggStore/scripts.pory"
	release
	return


JimmyKecleonIdle::
# 840 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 841 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 7, JimmyMcGligarSewersIdle_Movement_4
# 842 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 7
# 843 "data/maps/JimmyEggStore/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 844 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyKecleonIdle_Text_0
# 845 "data/maps/JimmyEggStore/scripts.pory"
	release
	return


JimmyGachapodIdle::
# 849 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 850 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 6, JimmyMcGligarSewersIdle_Movement_4
# 851 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 6
# 852 "data/maps/JimmyEggStore/scripts.pory"
	playmoncry SPECIES_GACHAPOD, CRY_MODE_WEAK
# 853 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyGachapodIdle_Text_0
# 854 "data/maps/JimmyEggStore/scripts.pory"
	release
	return


JimmyStoreBoxItem::
# 858 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 859 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_unset jimmystoreboxitem, JimmyStoreBoxItem_2
# 865 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreBoxItem_Text_1
JimmyStoreBoxItem_1:
# 866 "data/maps/JimmyEggStore/scripts.pory"
	release
	return

JimmyStoreBoxItem_2:
# 861 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreBoxItem_Text_0
# 862 "data/maps/JimmyEggStore/scripts.pory"
	giveitem ITEM_OVAL_CHARM
# 863 "data/maps/JimmyEggStore/scripts.pory"
	setflag jimmystoreboxitem
	goto JimmyStoreBoxItem_1


JimmyStoreBriefcase::
# 871 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 872 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreBriefcase_Text_0
# 873 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


JimmyStoreTamarakkudoll::
# 877 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 878 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreTamarakkudoll_Text_0
# 879 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


JimmyStoreBucket::
# 883 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 884 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreBucket_Text_0
# 885 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


JimmyStoreEggsoncushions::
# 889 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 890 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreEggsoncushions_Text_0
# 891 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


JimmyStoreMoneyBags::
# 895 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 896 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreMoneyBags_Text_0
# 897 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 898 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_PIN
# 899 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyStoreMoneyBags_Movement_0
# 900 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 901 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreMoneyBags_Text_1
# 902 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 1, JimmyMcGligarSewersIdle_Movement_2
# 903 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 1
# 904 "data/maps/JimmyEggStore/scripts.pory"
	playmoncry SPECIES_TAMARAKKU, CRY_MODE_WEAK
# 905 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyTamarakkuIdle_Text_0
# 906 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 1, JimmyTamarakkuIdle_Movement_0
# 907 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyTamarakkuIdle_Movement_0
# 908 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 909 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


# 29 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_0:
# 29 "data/maps/JimmyEggStore/scripts.pory"
	emote_exclamation_mark
	step_end

# 35 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_1:
# 35 "data/maps/JimmyEggStore/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 101 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_2:
# 101 "data/maps/JimmyEggStore/scripts.pory"
	face_left
	step_end

# 105 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_3:
# 105 "data/maps/JimmyEggStore/scripts.pory"
	jump_in_place_down
	step_end

# 109 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_4:
# 109 "data/maps/JimmyEggStore/scripts.pory"
	face_player
	step_end

# 348 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_5:
# 348 "data/maps/JimmyEggStore/scripts.pory"
	walk_left
# 348 "data/maps/JimmyEggStore/scripts.pory"
	walk_left
# 348 "data/maps/JimmyEggStore/scripts.pory"
	walk_left
# 348 "data/maps/JimmyEggStore/scripts.pory"
	walk_up
	step_end

# 388 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_6:
# 388 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
# 388 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 388 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
	step_end

# 389 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_7:
# 389 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
# 389 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 389 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
	step_end

# 393 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_8:
# 393 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
# 393 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 393 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
	step_end

# 394 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_9:
# 394 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
# 394 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 394 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
	step_end

# 398 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_10:
# 398 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
# 398 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 398 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 398 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
	step_end

# 399 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_11:
# 399 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
# 399 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 399 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 399 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
	step_end

# 627 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_12:
# 627 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
# 627 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 627 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 627 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
	step_end

# 628 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_13:
# 628 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
# 628 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 628 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 628 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
	step_end

# 784 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_14:
# 784 "data/maps/JimmyEggStore/scripts.pory"
	walk_right
# 784 "data/maps/JimmyEggStore/scripts.pory"
	walk_right
# 784 "data/maps/JimmyEggStore/scripts.pory"
	walk_right
# 784 "data/maps/JimmyEggStore/scripts.pory"
	walk_down
	step_end

# 834 "data/maps/JimmyEggStore/scripts.pory"
JimmyTamarakkuIdle_Movement_0:
# 834 "data/maps/JimmyEggStore/scripts.pory"
	face_down
	step_end

# 899 "data/maps/JimmyEggStore/scripts.pory"
JimmyStoreMoneyBags_Movement_0:
# 899 "data/maps/JimmyEggStore/scripts.pory"
	face_left
# 899 "data/maps/JimmyEggStore/scripts.pory"
	emote_exclamation_mark
	step_end

JimmyMcGligarSewersIdle_Text_0:
# 26 "data/maps/JimmyEggStore/scripts.pory"
	.string "Hello there, dear custo-...$"

JimmyMcGligarSewersIdle_Text_1:
# 31 "data/maps/JimmyEggStore/scripts.pory"
	.string "Wait a minute. I remember you!\p"
	.string "I asked you for help on Concord Bridge,\n"
	.string "and you just waltzed away!$"

JimmyMcGligarSewersIdle_Text_2:
# 40 "data/maps/JimmyEggStore/scripts.pory"
	.string "Grr... not a man of your word, aren't you?\n"
	.string "What a shame.$"

JimmyMcGligarSewersIdle_Text_3:
# 44 "data/maps/JimmyEggStore/scripts.pory"
	.string "Grr... not a woman of your word, aren't\n"
	.string "you? What a shame.$"

JimmyMcGligarSewersIdle_Text_4:
# 47 "data/maps/JimmyEggStore/scripts.pory"
	.string "You're lucky grudges aren't profitable,\n"
	.string "or I might be showing you the door now.\p"
	.string "... well, the pipe. Same thing. Anyhow...$"

JimmyMcGligarSewersIdle_Text_5:
# 57 "data/maps/JimmyEggStore/scripts.pory"
	.string "Well well, if it isn't my personal saviour,\n"
	.string "AND favourite customer!\p"
	.string "You're such a good samaritan, you\n"
	.string "helped me without coming to claim the\l"
	.string "reward I promised you!\p"
	.string "But Jimmy McGligar is a man of his word -\n"
	.string "and here's the proof!$"

JimmyMcGligarSewersIdle_Text_6:
# 64 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

JimmyMcGligarSewersIdle_Text_7:
# 66 "data/maps/JimmyEggStore/scripts.pory"
	.string "There you go - I'm sure it'll hatch into\n"
	.string "a strong, healthy baby!\p"
	.string "And if you're interested in more, well...\n"
	.string "you're in the right place!$"

JimmyMcGligarSewersIdle_Text_8:
# 79 "data/maps/JimmyEggStore/scripts.pory"
	.string "Well well, if it isn't my personal\n"
	.string "saviour! Glad you found my humble\l"
	.string "place!\p"
	.string "I wouldn't be here if it wasn't for you,\n"
	.string "so please, make yourself at sewer!$"

JimmyMcGligarSewersIdle_Text_9:
# 92 "data/maps/JimmyEggStore/scripts.pory"
	.string "Hey, it's YOU! You damn kid!$"

JimmyMcGligarSewersIdle_Text_10:
# 96 "data/maps/JimmyEggStore/scripts.pory"
	.string "You really played a number on me back on\n"
	.string "Concord Bridge!\p"
	.string "I should kick you right out of my shop\n"
	.string "for it. But… I'll confess...\p"
	.string "That was the first time someone tricked\n"
	.string "ME. And part of me respects that.\p"
	.string "What say we let bygone be bygones?\n"
	.string "Water under the Concord Bridge!\p"
	.string "But I warn you. Fool me once, that's\n"
	.string "alright...$"

JimmyMcGligarSewersIdle_Text_11:
# 103 "data/maps/JimmyEggStore/scripts.pory"
	.string "Fool me twice, I'll throw this fella at\n"
	.string "your throat.$"

JimmyMcGligarSewersIdle_Text_12:
# 111 "data/maps/JimmyEggStore/scripts.pory"
	.string "Anyhow...$"

JimmyMcGligarSewersIdle_Text_13:
# 123 "data/maps/JimmyEggStore/scripts.pory"
	.string "Well well, if it isn't my personal saviour\n"
	.string "AND favourite customer!\p"
	.string "I wouldn't be here if it wasn't for you,\n"
	.string "so please, make yourself at sewer!$"

JimmyMcGligarSewersIdle_Text_14:
# 138 "data/maps/JimmyEggStore/scripts.pory"
	.string "Welcome to Jimmy's Egg Store - Where\n"
	.string "Happiness Hatches!\p"
	.string "What can I do for you, oh dear\n"
	.string "customer?$"

JimmyMcGligarSewersIdle_Text_15:
# 142 "data/maps/JimmyEggStore/scripts.pory"
	.string "Buy an egg$"

JimmyMcGligarSewersIdle_Text_16:
# 142 "data/maps/JimmyEggStore/scripts.pory"
	.string "Play Thimbleregg$"

JimmyMcGligarSewersIdle_Text_17:
# 142 "data/maps/JimmyEggStore/scripts.pory"
	.string "Egg Store?$"

JimmyMcGligarSewersIdle_Text_18:
# 142 "data/maps/JimmyEggStore/scripts.pory"
	.string "Leave$"

JimmyMcGligarSewersIdle_Text_19:
# 146 "data/maps/JimmyEggStore/scripts.pory"
	.string "Well, maybe some other time!\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Cheapstake...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

JimmyMcGligarSewersIdle_Text_20:
# 152 "data/maps/JimmyEggStore/scripts.pory"
	.string "Sure thing - it's only 1000¥ each! The\n"
	.string "species is a surprise!$"

JimmyMcGligarSewersIdle_Text_21:
# 159 "data/maps/JimmyEggStore/scripts.pory"
	.string "Cracked Egg$"

JimmyMcGligarSewersIdle_Text_22:
# 160 "data/maps/JimmyEggStore/scripts.pory"
	.string "Bundle Egg$"

JimmyMcGligarSewersIdle_Text_23:
# 161 "data/maps/JimmyEggStore/scripts.pory"
	.string "Moon Egg$"

JimmyMcGligarSewersIdle_Text_24:
# 162 "data/maps/JimmyEggStore/scripts.pory"
	.string "Sun Egg$"

JimmyMcGligarSewersIdle_Text_25:
# 163 "data/maps/JimmyEggStore/scripts.pory"
	.string "Flower Egg$"

JimmyMcGligarSewersIdle_Text_26:
# 164 "data/maps/JimmyEggStore/scripts.pory"
	.string "Pink Egg$"

JimmyMcGligarSewersIdle_Text_27:
# 165 "data/maps/JimmyEggStore/scripts.pory"
	.string "Nevermind$"

JimmyMcGligarSewersIdle_Text_28:
# 186 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Cracked Egg!$"

JimmyMcGligarSewersIdle_Text_29:
# 203 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Bundle Egg!$"

JimmyMcGligarSewersIdle_Text_30:
# 221 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Moon Egg!$"

JimmyMcGligarSewersIdle_Text_31:
# 239 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Sun Egg!$"

JimmyMcGligarSewersIdle_Text_32:
# 257 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Flower Egg!$"

JimmyMcGligarSewersIdle_Text_33:
# 276 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Pink Egg!$"

JimmyMcGligarSewersIdle_Text_34:
# 284 "data/maps/JimmyEggStore/scripts.pory"
	.string "The Egg was sent to the PC.$"

JimmyMcGligarSewersIdle_Text_35:
# 288 "data/maps/JimmyEggStore/scripts.pory"
	.string "Thank you for your patronage - you\n"
	.string "take good care of that hatchling now!$"

JimmyMcGligarSewersIdle_Text_36:
# 299 "data/maps/JimmyEggStore/scripts.pory"
	.string "Wait a minute... I can smell it on you.\n"
	.string "You ain't got enough dough!\p"
	.string "Parenting takes money you know? You\n"
	.string "sort your financials before coming\l"
	.string "back!$"

JimmyMcGligarSewersIdle_Text_37:
# 311 "data/maps/JimmyEggStore/scripts.pory"
	.string "Oh, I'm sorry dear customer - only one\n"
	.string "Thimbleregg round per day!\p"
	.string "I've got some customers addicted to\n"
	.string "the thrilling gambling rush, and it's not\l"
	.string "a pleasant experience.\p"
	.string "So come back tomorrow - I'll be happy to\n"
	.string "play then!$"

JimmyMcGligarSewersIdle_Text_38:
# 319 "data/maps/JimmyEggStore/scripts.pory"
	.string "Thumbleregg? You're on, lad! Let me get\n"
	.string "everything ready...$"

JimmyMcGligarSewersIdle_Text_39:
# 324 "data/maps/JimmyEggStore/scripts.pory"
	.string "Thumbleregg? You're on, lass! Let me get\n"
	.string "everything ready...$"

JimmyMcGligarSewersIdle_Text_40:
# 360 "data/maps/JimmyEggStore/scripts.pory"
	.string "Alright, eyes sharp now! Guess inside\n"
	.string "which ball is the egg, and get that egg\l"
	.string "as a prize!$"

JimmyMcGligarSewersIdle_Text_41:
# 403 "data/maps/JimmyEggStore/scripts.pory"
	.string "Well, where is the egg?$"

JimmyMcGligarSewersIdle_Text_42:
# 406 "data/maps/JimmyEggStore/scripts.pory"
	.string "Left ball$"

JimmyMcGligarSewersIdle_Text_43:
# 406 "data/maps/JimmyEggStore/scripts.pory"
	.string "Middle ball$"

JimmyMcGligarSewersIdle_Text_44:
# 406 "data/maps/JimmyEggStore/scripts.pory"
	.string "Right ball$"

JimmyMcGligarSewersIdle_Text_45:
# 411 "data/maps/JimmyEggStore/scripts.pory"
	.string "Nope!$"

JimmyMcGligarSewersIdle_Text_46:
# 423 "data/maps/JimmyEggStore/scripts.pory"
	.string "It was on the right ball! Better luck\n"
	.string "next time!$"

JimmyMcGligarSewersIdle_Text_47:
# 448 "data/maps/JimmyEggStore/scripts.pory"
	.string "Good job! You guessed right - here's\n"
	.string "your egg!$"

JimmyMcGligarSewersIdle_Text_48:
# 616 "data/maps/JimmyEggStore/scripts.pory"
	.string "It was on the left ball! Better luck\n"
	.string "next time!$"

JimmyMcGligarSewersIdle_Text_49:
# 669 "data/maps/JimmyEggStore/scripts.pory"
	.string "It was on the middle ball! Better luck\n"
	.string "next time!$"

JimmyMcGligarSewersIdle_Text_50:
# 751 "data/maps/JimmyEggStore/scripts.pory"
	.string "Now let me put everything back in\n"
	.string "place...$"

JimmyMcGligarSewersIdle_Text_51:
# 794 "data/maps/JimmyEggStore/scripts.pory"
	.string "Pretty fun, right? Come back tomorrow\n"
	.string "for another round!$"

JimmyMcGligarSewersIdle_Text_52:
# 806 "data/maps/JimmyEggStore/scripts.pory"
	.string "Why, I think it's rather\n"
	.string "self-explanatory - but I'm happy to\l"
	.string "tell you a bit more.\p"
	.string "These days, only Devon Breeders are\n"
	.string "legally allowed to breed Pokémon, and\l"
	.string "handle their offspring.\p"
	.string "Anyone else who gets caught doing it...\n"
	.string "it's a heavy fine in the best of cases,\l"
	.string "and Dewford Prison in the worst.\p"
	.string "Devon Co. only want Safemon inhabiting\n"
	.string "routes, and regular Pokémon\l"
	.string "reproduction goes against that goal.\p"
	.string "But you know Pokémon - and hell, humans\n"
	.string "too.\p"
	.string "They're gonna screw no matter what.\n"
	.string "Bwahaha!\p"
	.string "When they do, keeping the egg is just\n"
	.string "asking for legal trouble.\p"
	.string "And that's where yours truly in!\p"
	.string "I take these eggs off people, and give\n"
	.string "them a new home. Simple as that.\p"
	.string "Illegal? Maybe. Moral? Probably.\n"
	.string "Profitable? Very!\p"
	.string "Speaking of profit, I ain't running a\n"
	.string "DLC here, so...\p"
	.string "Wanna buy an egg?$"

JimmyTamarakkuIdle_Text_0:
# 833 "data/maps/JimmyEggStore/scripts.pory"
	.string "...$"

JimmyKecleonIdle_Text_0:
# 844 "data/maps/JimmyEggStore/scripts.pory"
	.string "Ke-keeee!$"

JimmyGachapodIdle_Text_0:
# 853 "data/maps/JimmyEggStore/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Ga-gaaa...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

JimmyStoreBoxItem_Text_0:
# 861 "data/maps/JimmyEggStore/scripts.pory"
	.string "There's something inside the box...$"

JimmyStoreBoxItem_Text_1:
# 865 "data/maps/JimmyEggStore/scripts.pory"
	.string "There's nothing inside the box.$"

JimmyStoreBriefcase_Text_0:
# 872 "data/maps/JimmyEggStore/scripts.pory"
	.string "An inconspicuous briefcase, worn with\n"
	.string "use.$"

JimmyStoreTamarakkudoll_Text_0:
# 878 "data/maps/JimmyEggStore/scripts.pory"
	.string "A Tamarakku doll. It's a bit creepy.$"

JimmyStoreBucket_Text_0:
# 884 "data/maps/JimmyEggStore/scripts.pory"
	.string "The bucket is filling with the leakage\n"
	.string "from the pipe.\p"
	.string "It's a bit disgusting...$"

JimmyStoreEggsoncushions_Text_0:
# 890 "data/maps/JimmyEggStore/scripts.pory"
	.string "A few eggs are arranged on top of\n"
	.string "cushions.$"

JimmyStoreMoneyBags_Text_0:
# 896 "data/maps/JimmyEggStore/scripts.pory"
	.string "It's a bundle of bags, like the kind used\n"
	.string "to keep mon-...$"

JimmyStoreMoneyBags_Text_1:
# 901 "data/maps/JimmyEggStore/scripts.pory"
	.string "Hey! Don't you touch my money, or I'll\n"
	.string "put Tamarakku on you!$"
