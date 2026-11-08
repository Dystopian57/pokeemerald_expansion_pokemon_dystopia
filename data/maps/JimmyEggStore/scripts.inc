# 1 "data/maps/JimmyEggStore/scripts.pory"

# 2 "data/maps/JimmyEggStore/scripts.pory"
JimmyEggStore_MapScripts::
# 3 "data/maps/JimmyEggStore/scripts.pory"
	.byte 0

JimmyMcGligarSewersIdle::
# 10 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_unset JimmySewersIntro, JimmyMcGligarSewersIdle_2
JimmyMcGligarSewersIdle_1:
# 69 "data/maps/JimmyEggStore/scripts.pory"
startJimmyStoreidle:
# 70 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_4
# 73 "data/maps/JimmyEggStore/scripts.pory"
eggsell:
# 74 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_5, JimmyMcGligarSewersIdle_Text_6, JimmyMcGligarSewersIdle_Text_7, JimmyMcGligarSewersIdle_Text_8
# 77 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq JimmyMcGligarSewersIdle_5
JimmyMcGligarSewersIdle_4:
# 83 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_13
JimmyMcGligarSewersIdle_12:
# 239 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_21
JimmyMcGligarSewersIdle_20:
# 737 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_37
JimmyMcGligarSewersIdle_36:
# 755 "data/maps/JimmyEggStore/scripts.pory"
endofjimmystoreidle:
# 756 "data/maps/JimmyEggStore/scripts.pory"
	release
	return

JimmyMcGligarSewersIdle_2:
# 14 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyMcGligarSewersIdle_9
JimmyMcGligarSewersIdle_7:
# 19 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyMcGligarSewersIdle_17
JimmyMcGligarSewersIdle_15:
# 49 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq JimmyMcGligarSewersIdle_29
JimmyMcGligarSewersIdle_26:
# 53 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq JimmyMcGligarSewersIdle_50
JimmyMcGligarSewersIdle_47:
# 57 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 2
	goto_if_eq JimmyMcGligarSewersIdle_66
JimmyMcGligarSewersIdle_63:
# 60 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 3
	goto_if_eq JimmyMcGligarSewersIdle_79
JimmyMcGligarSewersIdle_78:
# 65 "data/maps/JimmyEggStore/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 4
	goto JimmyMcGligarSewersIdle_1

JimmyMcGligarSewersIdle_5:
# 78 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_9
# 80 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_4

JimmyMcGligarSewersIdle_8:
# 16 "data/maps/JimmyEggStore/scripts.pory"
	goto startJimmyStoreidle
	goto JimmyMcGligarSewersIdle_7

JimmyMcGligarSewersIdle_9:
# 14 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_unset conartistaskeddistract, JimmyMcGligarSewersIdle_8
	goto JimmyMcGligarSewersIdle_7

JimmyMcGligarSewersIdle_13:
# 84 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_10
# 86 "data/maps/JimmyEggStore/scripts.pory"
	checkmoney 1000
# 87 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JimmyMcGligarSewersIdle_24
JimmyMcGligarSewersIdle_23:
# 225 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JimmyMcGligarSewersIdle_42
	goto JimmyMcGligarSewersIdle_12

JimmyMcGligarSewersIdle_16:
# 23 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_0
# 24 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 25 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_PIN
# 26 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_0
# 27 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 28 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_1
# 31 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_M_SWAGGER2
# 32 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_1
# 33 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 35 "data/maps/JimmyEggStore/scripts.pory"
	checkplayergender
# 36 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JimmyMcGligarSewersIdle_34
JimmyMcGligarSewersIdle_33:
# 40 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq JimmyMcGligarSewersIdle_55
JimmyMcGligarSewersIdle_54:
# 44 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_3
# 46 "data/maps/JimmyEggStore/scripts.pory"
	goto startJimmyStoreidle
	goto JimmyMcGligarSewersIdle_15

JimmyMcGligarSewersIdle_17:
# 19 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistaskeddistract, JimmyMcGligarSewersIdle_16
	goto JimmyMcGligarSewersIdle_15

JimmyMcGligarSewersIdle_21:
# 241 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set dailythimbleregg, JimmyMcGligarSewersIdle_40
JimmyMcGligarSewersIdle_39:
# 249 "data/maps/JimmyEggStore/scripts.pory"
	checkplayergender
# 250 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JimmyMcGligarSewersIdle_58
JimmyMcGligarSewersIdle_57:
# 254 "data/maps/JimmyEggStore/scripts.pory"
	checkplayergender
# 255 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq JimmyMcGligarSewersIdle_71
JimmyMcGligarSewersIdle_70:
# 258 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 260 "data/maps/JimmyEggStore/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 263 "data/maps/JimmyEggStore/scripts.pory"
	setflag thimbleregghideobjects
# 264 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 6
# 265 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 7
# 266 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 8
# 267 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 12
# 271 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggballs
# 272 "data/maps/JimmyEggStore/scripts.pory"
	addobject 14
# 273 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 274 "data/maps/JimmyEggStore/scripts.pory"
	addobject 16
# 276 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 5, 1, 3
# 277 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 1, 5
# 279 "data/maps/JimmyEggStore/scripts.pory"
	special SpawnCameraObject
# 280 "data/maps/JimmyEggStore/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JimmyMcGligarSewersIdle_Movement_2
# 281 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 282 "data/maps/JimmyEggStore/scripts.pory"
	special RemoveCameraObject
# 284 "data/maps/JimmyEggStore/scripts.pory"
	fadeoutbgm 1
# 285 "data/maps/JimmyEggStore/scripts.pory"
	fadeinbgm 1
# 286 "data/maps/JimmyEggStore/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 288 "data/maps/JimmyEggStore/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 292 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_30
# 295 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 296 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 297 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 298 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 299 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 300 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 302 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_TRADE
# 303 "data/maps/JimmyEggStore/scripts.pory"
	setflag thimblereggegg
# 304 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 13
# 305 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 309 "data/maps/JimmyEggStore/scripts.pory"
	random 3
# 310 "data/maps/JimmyEggStore/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 312 "data/maps/JimmyEggStore/scripts.pory"
	switch VAR_RESULT
# 316 "data/maps/JimmyEggStore/scripts.pory"
	case 0, JimmyMcGligarSewersIdle_82
# 436 "data/maps/JimmyEggStore/scripts.pory"
	case 1, JimmyMcGligarSewersIdle_83
# 555 "data/maps/JimmyEggStore/scripts.pory"
	case 2, JimmyMcGligarSewersIdle_84
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_24:
# 88 "data/maps/JimmyEggStore/scripts.pory"
	showmoneybox 18, 0
# 90 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_11, JimmyMcGligarSewersIdle_Text_12, JimmyMcGligarSewersIdle_Text_13, JimmyMcGligarSewersIdle_Text_14, JimmyMcGligarSewersIdle_Text_15, JimmyMcGligarSewersIdle_Text_16, JimmyMcGligarSewersIdle_Text_17
# 99 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_45
JimmyMcGligarSewersIdle_44:
# 105 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_61
JimmyMcGligarSewersIdle_60:
# 122 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_74
JimmyMcGligarSewersIdle_73:
# 140 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_86
JimmyMcGligarSewersIdle_85:
# 158 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq JimmyMcGligarSewersIdle_100
JimmyMcGligarSewersIdle_99:
# 176 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq JimmyMcGligarSewersIdle_117
JimmyMcGligarSewersIdle_116:
# 194 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq JimmyMcGligarSewersIdle_140
JimmyMcGligarSewersIdle_139:
# 214 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set newmonabouttobesenttoPC, JimmyMcGligarSewersIdle_159
JimmyMcGligarSewersIdle_158:
# 220 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_25
# 221 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_23

JimmyMcGligarSewersIdle_27:
	goto JimmyMcGligarSewersIdle_26

JimmyMcGligarSewersIdle_28:
# 49 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set ! betrayedconcordconartist, JimmyMcGligarSewersIdle_27
	goto JimmyMcGligarSewersIdle_26

JimmyMcGligarSewersIdle_29:
# 49 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_28
	goto JimmyMcGligarSewersIdle_26

JimmyMcGligarSewersIdle_34:
# 37 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_2
	goto JimmyMcGligarSewersIdle_33

JimmyMcGligarSewersIdle_37:
# 738 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_42
# 750 "data/maps/JimmyEggStore/scripts.pory"
	goto eggsell
	goto JimmyMcGligarSewersIdle_36

JimmyMcGligarSewersIdle_40:
# 243 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_27
# 246 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_39

JimmyMcGligarSewersIdle_42:
# 227 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 228 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_PIN
# 229 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyMcGligarSewersIdle_Movement_0
# 230 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 231 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_26
# 233 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_12

JimmyMcGligarSewersIdle_45:
# 100 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_9
# 102 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_44

JimmyMcGligarSewersIdle_48:
	goto JimmyMcGligarSewersIdle_47

JimmyMcGligarSewersIdle_49:
# 53 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set helpedconcordconartist, JimmyMcGligarSewersIdle_48
	goto JimmyMcGligarSewersIdle_47

JimmyMcGligarSewersIdle_50:
# 53 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_49
	goto JimmyMcGligarSewersIdle_47

JimmyMcGligarSewersIdle_55:
# 41 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_2
	goto JimmyMcGligarSewersIdle_54

JimmyMcGligarSewersIdle_58:
# 251 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_28
	goto JimmyMcGligarSewersIdle_57

JimmyMcGligarSewersIdle_61:
# 107 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 108 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_76
	goto JimmyMcGligarSewersIdle_60

JimmyMcGligarSewersIdle_64:
	goto JimmyMcGligarSewersIdle_63

JimmyMcGligarSewersIdle_65:
# 57 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set betrayedconcordconartist, JimmyMcGligarSewersIdle_64
	goto JimmyMcGligarSewersIdle_63

JimmyMcGligarSewersIdle_66:
# 57 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set conartistescaped, JimmyMcGligarSewersIdle_65
	goto JimmyMcGligarSewersIdle_63

JimmyMcGligarSewersIdle_71:
# 256 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_29
	goto JimmyMcGligarSewersIdle_70

JimmyMcGligarSewersIdle_74:
# 124 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 125 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_88
	goto JimmyMcGligarSewersIdle_73

JimmyMcGligarSewersIdle_76:
# 109 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 110 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 111 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 112 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 113 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 114 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 116 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 117 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 118 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_18
	goto JimmyMcGligarSewersIdle_60

JimmyMcGligarSewersIdle_79:
	goto JimmyMcGligarSewersIdle_78

JimmyMcGligarSewersIdle_82:
# 317 "data/maps/JimmyEggStore/scripts.pory"
temporarythimblecommonstart:
# 319 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 320 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_3
# 321 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_4
# 322 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 14
# 324 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 325 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_5
# 326 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_6
# 327 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 329 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 330 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_7
# 331 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_8
# 332 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 335 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_31
# 337 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_32, JimmyMcGligarSewersIdle_Text_33, JimmyMcGligarSewersIdle_Text_34
# 340 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_91
JimmyMcGligarSewersIdle_90:
# 360 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_105
JimmyMcGligarSewersIdle_104:
# 365 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_121
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_83:
# 437 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 438 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_5
# 439 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_6
# 440 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 442 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 443 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_3
# 444 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_4
# 445 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 447 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 448 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_5
# 449 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_6
# 450 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 15
# 453 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_31
# 455 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_32, JimmyMcGligarSewersIdle_Text_33, JimmyMcGligarSewersIdle_Text_34
# 458 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_94
JimmyMcGligarSewersIdle_93:
# 527 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_108
JimmyMcGligarSewersIdle_107:
# 532 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_123
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_84:
# 558 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 559 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_9
# 560 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_10
# 561 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 563 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 564 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_3
# 565 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_4
# 566 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 568 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 569 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_3
# 570 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 16, JimmyMcGligarSewersIdle_Movement_4
# 571 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 16
# 573 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_THROW
# 574 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 14, JimmyMcGligarSewersIdle_Movement_3
# 575 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 15, JimmyMcGligarSewersIdle_Movement_4
# 576 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 15
# 580 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_31
# 582 "data/maps/JimmyEggStore/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, JimmyMcGligarSewersIdle_Text_32, JimmyMcGligarSewersIdle_Text_33, JimmyMcGligarSewersIdle_Text_34
# 585 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JimmyMcGligarSewersIdle_97
JimmyMcGligarSewersIdle_96:
# 606 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JimmyMcGligarSewersIdle_114
JimmyMcGligarSewersIdle_113:
# 676 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JimmyMcGligarSewersIdle_134
JimmyMcGligarSewersIdle_133:
# 682 "data/maps/JimmyEggStore/scripts.pory"
jimmypicksupthimblereggstuff:
# 683 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_40
# 684 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 687 "data/maps/JimmyEggStore/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 689 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_M_STRENGTH
# 690 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 691 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_M_STRENGTH
# 692 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 695 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 13
# 696 "data/maps/JimmyEggStore/scripts.pory"
	setflag thimblereggegg
# 699 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimbleregghideobjects
# 700 "data/maps/JimmyEggStore/scripts.pory"
	addobject 6
# 701 "data/maps/JimmyEggStore/scripts.pory"
	addobject 7
# 702 "data/maps/JimmyEggStore/scripts.pory"
	addobject 8
# 703 "data/maps/JimmyEggStore/scripts.pory"
	addobject 12
# 707 "data/maps/JimmyEggStore/scripts.pory"
	setflag thimblereggballs
# 708 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 14
# 709 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 710 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 16
# 712 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 5, 4, 4
# 713 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 5
# 715 "data/maps/JimmyEggStore/scripts.pory"
	special SpawnCameraObject
# 716 "data/maps/JimmyEggStore/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JimmyMcGligarSewersIdle_Movement_11
# 717 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 718 "data/maps/JimmyEggStore/scripts.pory"
	special RemoveCameraObject
# 720 "data/maps/JimmyEggStore/scripts.pory"
	fadeoutbgm 1
# 721 "data/maps/JimmyEggStore/scripts.pory"
	fadeinbgm 1
# 722 "data/maps/JimmyEggStore/scripts.pory"
	playbgm MUS_PYRITETOWN, TRUE
# 724 "data/maps/JimmyEggStore/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 726 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_41
# 727 "data/maps/JimmyEggStore/scripts.pory"
	setflag dailythimbleregg
# 730 "data/maps/JimmyEggStore/scripts.pory"
	goto endofjimmystoreidle
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_86:
# 142 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 143 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_102
	goto JimmyMcGligarSewersIdle_85

JimmyMcGligarSewersIdle_88:
# 126 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 127 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 128 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 129 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 130 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 131 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 133 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 134 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 135 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_19
	goto JimmyMcGligarSewersIdle_73

JimmyMcGligarSewersIdle_91:
# 341 "data/maps/JimmyEggStore/scripts.pory"
wrongthimblereggeggitsinright:
# 342 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_RG_HELP_ERROR
# 343 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_35
# 345 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 347 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 348 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 349 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 2, 4
# 350 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 352 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 353 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 355 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_36
# 356 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_90

JimmyMcGligarSewersIdle_94:
# 459 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SUCCESS
# 460 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 463 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 465 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 466 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 467 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 0, 4
# 468 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 471 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 472 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_37
# 476 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 477 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_111
JimmyMcGligarSewersIdle_110:
# 480 "data/maps/JimmyEggStore/scripts.pory"
	random 6
# 481 "data/maps/JimmyEggStore/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 483 "data/maps/JimmyEggStore/scripts.pory"
	switch VAR_RESULT
# 486 "data/maps/JimmyEggStore/scripts.pory"
	case 0, JimmyMcGligarSewersIdle_127
# 491 "data/maps/JimmyEggStore/scripts.pory"
	case 1, JimmyMcGligarSewersIdle_128
# 496 "data/maps/JimmyEggStore/scripts.pory"
	case 2, JimmyMcGligarSewersIdle_129
# 501 "data/maps/JimmyEggStore/scripts.pory"
	case 3, JimmyMcGligarSewersIdle_130
# 506 "data/maps/JimmyEggStore/scripts.pory"
	case 4, JimmyMcGligarSewersIdle_131
# 511 "data/maps/JimmyEggStore/scripts.pory"
	case 5, JimmyMcGligarSewersIdle_132
JimmyMcGligarSewersIdle_125:
# 518 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set newmonabouttobesenttoPC, JimmyMcGligarSewersIdle_148
JimmyMcGligarSewersIdle_147:
# 524 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_93

JimmyMcGligarSewersIdle_97:
# 587 "data/maps/JimmyEggStore/scripts.pory"
wrongthimblereggeggitsinmiddle:
# 588 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_RG_HELP_ERROR
# 589 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_35
# 591 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 593 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 594 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 595 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 1, 4
# 596 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 598 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 599 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 601 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_39
# 602 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_96

JimmyMcGligarSewersIdle_100:
# 160 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 161 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_119
	goto JimmyMcGligarSewersIdle_99

JimmyMcGligarSewersIdle_102:
# 144 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 145 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 146 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 147 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 148 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 149 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 151 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TEDDIURSA
# 152 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 153 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_20
	goto JimmyMcGligarSewersIdle_85

JimmyMcGligarSewersIdle_105:
# 361 "data/maps/JimmyEggStore/scripts.pory"
	goto wrongthimblereggeggitsinright
	goto JimmyMcGligarSewersIdle_104

JimmyMcGligarSewersIdle_108:
# 528 "data/maps/JimmyEggStore/scripts.pory"
	goto wrongthimblereggeggitsinleft
	goto JimmyMcGligarSewersIdle_107

JimmyMcGligarSewersIdle_111:
# 478 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_110

JimmyMcGligarSewersIdle_114:
# 608 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SUCCESS
# 609 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 612 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 614 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 615 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 616 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 1, 4
# 617 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 620 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 621 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_37
# 623 "data/maps/JimmyEggStore/scripts.pory"
	random 6
# 624 "data/maps/JimmyEggStore/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 626 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 627 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_137
JimmyMcGligarSewersIdle_136:
# 630 "data/maps/JimmyEggStore/scripts.pory"
	switch VAR_RESULT
# 633 "data/maps/JimmyEggStore/scripts.pory"
	case 0, JimmyMcGligarSewersIdle_152
# 638 "data/maps/JimmyEggStore/scripts.pory"
	case 1, JimmyMcGligarSewersIdle_153
# 643 "data/maps/JimmyEggStore/scripts.pory"
	case 2, JimmyMcGligarSewersIdle_154
# 648 "data/maps/JimmyEggStore/scripts.pory"
	case 3, JimmyMcGligarSewersIdle_155
# 653 "data/maps/JimmyEggStore/scripts.pory"
	case 4, JimmyMcGligarSewersIdle_156
# 658 "data/maps/JimmyEggStore/scripts.pory"
	case 5, JimmyMcGligarSewersIdle_157
JimmyMcGligarSewersIdle_150:
# 665 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set newmonabouttobesenttoPC, JimmyMcGligarSewersIdle_172
JimmyMcGligarSewersIdle_171:
# 671 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_113

JimmyMcGligarSewersIdle_117:
# 178 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 179 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_142
	goto JimmyMcGligarSewersIdle_116

JimmyMcGligarSewersIdle_119:
# 162 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 163 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 164 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 165 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 166 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 167 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 169 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HELIOPTILE
# 170 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 171 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_21
	goto JimmyMcGligarSewersIdle_99

JimmyMcGligarSewersIdle_121:
# 367 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SUCCESS
# 368 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 371 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 373 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 374 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 375 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 2, 4
# 376 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 379 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 380 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_37
# 384 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 385 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_145
JimmyMcGligarSewersIdle_144:
# 388 "data/maps/JimmyEggStore/scripts.pory"
	random 6
# 389 "data/maps/JimmyEggStore/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 391 "data/maps/JimmyEggStore/scripts.pory"
	switch VAR_RESULT
# 394 "data/maps/JimmyEggStore/scripts.pory"
	case 0, JimmyMcGligarSewersIdle_165
# 399 "data/maps/JimmyEggStore/scripts.pory"
	case 1, JimmyMcGligarSewersIdle_166
# 404 "data/maps/JimmyEggStore/scripts.pory"
	case 2, JimmyMcGligarSewersIdle_167
# 409 "data/maps/JimmyEggStore/scripts.pory"
	case 3, JimmyMcGligarSewersIdle_168
# 414 "data/maps/JimmyEggStore/scripts.pory"
	case 4, JimmyMcGligarSewersIdle_169
# 419 "data/maps/JimmyEggStore/scripts.pory"
	case 5, JimmyMcGligarSewersIdle_170
JimmyMcGligarSewersIdle_163:
# 426 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_set newmonabouttobesenttoPC, JimmyMcGligarSewersIdle_175
JimmyMcGligarSewersIdle_174:
# 432 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_123:
# 534 "data/maps/JimmyEggStore/scripts.pory"
wrongthimblereggeggitsinleft:
# 535 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_RG_HELP_ERROR
# 536 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_35
# 538 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_BALL_OPEN
# 540 "data/maps/JimmyEggStore/scripts.pory"
	removeobject 15
# 541 "data/maps/JimmyEggStore/scripts.pory"
	addobject 13
# 542 "data/maps/JimmyEggStore/scripts.pory"
	setobjectxy 13, 0, 4
# 543 "data/maps/JimmyEggStore/scripts.pory"
	clearflag thimblereggegg
# 545 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 546 "data/maps/JimmyEggStore/scripts.pory"
	addobject 15
# 548 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_38
# 549 "data/maps/JimmyEggStore/scripts.pory"
	goto jimmypicksupthimblereggstuff
	goto JimmyMcGligarSewersIdle_20

JimmyMcGligarSewersIdle_127:
# 487 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 488 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 489 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_18
	goto JimmyMcGligarSewersIdle_125

JimmyMcGligarSewersIdle_128:
# 492 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 493 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 494 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_19
	goto JimmyMcGligarSewersIdle_125

JimmyMcGligarSewersIdle_129:
# 497 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TEDDIURSA
# 498 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 499 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_20
	goto JimmyMcGligarSewersIdle_125

JimmyMcGligarSewersIdle_130:
# 502 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HELIOPTILE
# 503 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 504 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_21
	goto JimmyMcGligarSewersIdle_125

JimmyMcGligarSewersIdle_131:
# 507 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_FOMANTIS
# 508 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 509 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_22
	goto JimmyMcGligarSewersIdle_125

JimmyMcGligarSewersIdle_132:
# 512 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HAPPINY
# 513 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 514 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_23
	goto JimmyMcGligarSewersIdle_125

JimmyMcGligarSewersIdle_134:
# 677 "data/maps/JimmyEggStore/scripts.pory"
	goto wrongthimblereggeggitsinmiddle
	goto JimmyMcGligarSewersIdle_133

JimmyMcGligarSewersIdle_137:
# 628 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_136

JimmyMcGligarSewersIdle_140:
# 197 "data/maps/JimmyEggStore/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 198 "data/maps/JimmyEggStore/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JimmyMcGligarSewersIdle_161
	goto JimmyMcGligarSewersIdle_139

JimmyMcGligarSewersIdle_142:
# 180 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 181 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 182 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 183 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 184 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 185 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 187 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_FOMANTIS
# 188 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 189 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_22
	goto JimmyMcGligarSewersIdle_116

JimmyMcGligarSewersIdle_145:
# 386 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_144

JimmyMcGligarSewersIdle_148:
# 520 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_24
# 521 "data/maps/JimmyEggStore/scripts.pory"
	clearflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_147

JimmyMcGligarSewersIdle_152:
# 634 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 635 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 636 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_18
	goto JimmyMcGligarSewersIdle_150

JimmyMcGligarSewersIdle_153:
# 639 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 640 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 641 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_19
	goto JimmyMcGligarSewersIdle_150

JimmyMcGligarSewersIdle_154:
# 644 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TEDDIURSA
# 645 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 646 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_20
	goto JimmyMcGligarSewersIdle_150

JimmyMcGligarSewersIdle_155:
# 649 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HELIOPTILE
# 650 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 651 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_21
	goto JimmyMcGligarSewersIdle_150

JimmyMcGligarSewersIdle_156:
# 654 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_FOMANTIS
# 655 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 656 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_22
	goto JimmyMcGligarSewersIdle_150

JimmyMcGligarSewersIdle_157:
# 659 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HAPPINY
# 660 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 661 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_23
	goto JimmyMcGligarSewersIdle_150

JimmyMcGligarSewersIdle_159:
# 216 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_24
# 217 "data/maps/JimmyEggStore/scripts.pory"
	clearflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_158

JimmyMcGligarSewersIdle_161:
# 199 "data/maps/JimmyEggStore/scripts.pory"
	setflag newmonabouttobesenttoPC
# 200 "data/maps/JimmyEggStore/scripts.pory"
	removemoney 1000
# 201 "data/maps/JimmyEggStore/scripts.pory"
	updatemoneybox
# 202 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_SHOP
# 203 "data/maps/JimmyEggStore/scripts.pory"
	waitse
# 204 "data/maps/JimmyEggStore/scripts.pory"
	hidemoneybox
# 206 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HAPPINY
# 207 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 208 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_23
	goto JimmyMcGligarSewersIdle_139

JimmyMcGligarSewersIdle_165:
# 395 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 396 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 397 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_18
	goto JimmyMcGligarSewersIdle_163

JimmyMcGligarSewersIdle_166:
# 400 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_EXEGGCUTE
# 401 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 402 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_19
	goto JimmyMcGligarSewersIdle_163

JimmyMcGligarSewersIdle_167:
# 405 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_TEDDIURSA
# 406 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 407 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_20
	goto JimmyMcGligarSewersIdle_163

JimmyMcGligarSewersIdle_168:
# 410 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HELIOPTILE
# 411 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 412 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_21
	goto JimmyMcGligarSewersIdle_163

JimmyMcGligarSewersIdle_169:
# 415 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_FOMANTIS
# 416 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 417 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_22
	goto JimmyMcGligarSewersIdle_163

JimmyMcGligarSewersIdle_170:
# 420 "data/maps/JimmyEggStore/scripts.pory"
	giveegg SPECIES_HAPPINY
# 421 "data/maps/JimmyEggStore/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 422 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_23
	goto JimmyMcGligarSewersIdle_163

JimmyMcGligarSewersIdle_172:
# 667 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_24
# 668 "data/maps/JimmyEggStore/scripts.pory"
	clearflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_171

JimmyMcGligarSewersIdle_175:
# 428 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyMcGligarSewersIdle_Text_24
# 429 "data/maps/JimmyEggStore/scripts.pory"
	clearflag newmonabouttobesenttoPC
	goto JimmyMcGligarSewersIdle_174


JimmyTamarakkuIdle::
# 761 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 762 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 1, JimmyTamarakkuIdle_Movement_0
# 763 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 1
# 764 "data/maps/JimmyEggStore/scripts.pory"
	playmoncry SPECIES_TAMARAKKU, CRY_MODE_WEAK
# 765 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyTamarakkuIdle_Text_0
# 766 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 1, JimmyTamarakkuIdle_Movement_1
# 767 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 1
# 768 "data/maps/JimmyEggStore/scripts.pory"
	release
	return


JimmyKecleonIdle::
# 772 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 773 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 7, JimmyTamarakkuIdle_Movement_0
# 774 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 7
# 775 "data/maps/JimmyEggStore/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 776 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyKecleonIdle_Text_0
# 777 "data/maps/JimmyEggStore/scripts.pory"
	release
	return


JimmyGachapodIdle::
# 781 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 782 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 6, JimmyTamarakkuIdle_Movement_0
# 783 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 6
# 784 "data/maps/JimmyEggStore/scripts.pory"
	playmoncry SPECIES_GACHAPOD, CRY_MODE_WEAK
# 785 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyGachapodIdle_Text_0
# 786 "data/maps/JimmyEggStore/scripts.pory"
	release
	return


JimmyStoreBoxItem::
# 790 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 791 "data/maps/JimmyEggStore/scripts.pory"
	goto_if_unset jimmystoreboxitem, JimmyStoreBoxItem_2
# 797 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreBoxItem_Text_1
JimmyStoreBoxItem_1:
# 798 "data/maps/JimmyEggStore/scripts.pory"
	release
	return

JimmyStoreBoxItem_2:
# 793 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreBoxItem_Text_0
# 794 "data/maps/JimmyEggStore/scripts.pory"
	giveitem ITEM_OVAL_CHARM
# 795 "data/maps/JimmyEggStore/scripts.pory"
	setflag jimmystoreboxitem
	goto JimmyStoreBoxItem_1


JimmyStoreBriefcase::
# 803 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 804 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreBriefcase_Text_0
# 805 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


JimmyStoreTamarakkudoll::
# 809 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 810 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreTamarakkudoll_Text_0
# 811 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


JimmyStoreBucket::
# 815 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 816 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreBucket_Text_0
# 817 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


JimmyStoreEggsoncushions::
# 821 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 822 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreEggsoncushions_Text_0
# 823 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


JimmyStoreMoneyBags::
# 827 "data/maps/JimmyEggStore/scripts.pory"
	lock
# 828 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreMoneyBags_Text_0
# 829 "data/maps/JimmyEggStore/scripts.pory"
	closemessage
# 830 "data/maps/JimmyEggStore/scripts.pory"
	playse SE_PIN
# 831 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyStoreMoneyBags_Movement_0
# 832 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 833 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyStoreMoneyBags_Text_1
# 834 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 1, JimmyStoreMoneyBags_Movement_1
# 835 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 1
# 836 "data/maps/JimmyEggStore/scripts.pory"
	playmoncry SPECIES_TAMARAKKU, CRY_MODE_WEAK
# 837 "data/maps/JimmyEggStore/scripts.pory"
	msgbox JimmyTamarakkuIdle_Text_0
# 838 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 1, JimmyTamarakkuIdle_Movement_1
# 839 "data/maps/JimmyEggStore/scripts.pory"
	applymovement 5, JimmyTamarakkuIdle_Movement_1
# 840 "data/maps/JimmyEggStore/scripts.pory"
	waitmovement 5
# 841 "data/maps/JimmyEggStore/scripts.pory"
	releaseall
	return


# 26 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_0:
# 26 "data/maps/JimmyEggStore/scripts.pory"
	emote_exclamation_mark
	step_end

# 32 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_1:
# 32 "data/maps/JimmyEggStore/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 280 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_2:
# 280 "data/maps/JimmyEggStore/scripts.pory"
	walk_left
# 280 "data/maps/JimmyEggStore/scripts.pory"
	walk_left
# 280 "data/maps/JimmyEggStore/scripts.pory"
	walk_left
# 280 "data/maps/JimmyEggStore/scripts.pory"
	walk_up
	step_end

# 320 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_3:
# 320 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
# 320 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 320 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
	step_end

# 321 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_4:
# 321 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
# 321 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 321 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
	step_end

# 325 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_5:
# 325 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
# 325 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 325 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
	step_end

# 326 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_6:
# 326 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
# 326 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 326 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
	step_end

# 330 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_7:
# 330 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
# 330 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 330 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 330 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
	step_end

# 331 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_8:
# 331 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
# 331 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 331 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 331 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
	step_end

# 559 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_9:
# 559 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
# 559 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 559 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_right
# 559 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
	step_end

# 560 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_10:
# 560 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_up
# 560 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 560 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_left
# 560 "data/maps/JimmyEggStore/scripts.pory"
	walk_fast_down
	step_end

# 716 "data/maps/JimmyEggStore/scripts.pory"
JimmyMcGligarSewersIdle_Movement_11:
# 716 "data/maps/JimmyEggStore/scripts.pory"
	walk_right
# 716 "data/maps/JimmyEggStore/scripts.pory"
	walk_right
# 716 "data/maps/JimmyEggStore/scripts.pory"
	walk_right
# 716 "data/maps/JimmyEggStore/scripts.pory"
	walk_down
	step_end

# 762 "data/maps/JimmyEggStore/scripts.pory"
JimmyTamarakkuIdle_Movement_0:
# 762 "data/maps/JimmyEggStore/scripts.pory"
	face_player
	step_end

# 766 "data/maps/JimmyEggStore/scripts.pory"
JimmyTamarakkuIdle_Movement_1:
# 766 "data/maps/JimmyEggStore/scripts.pory"
	face_down
	step_end

# 831 "data/maps/JimmyEggStore/scripts.pory"
JimmyStoreMoneyBags_Movement_0:
# 831 "data/maps/JimmyEggStore/scripts.pory"
	face_left
# 831 "data/maps/JimmyEggStore/scripts.pory"
	emote_exclamation_mark
	step_end

# 834 "data/maps/JimmyEggStore/scripts.pory"
JimmyStoreMoneyBags_Movement_1:
# 834 "data/maps/JimmyEggStore/scripts.pory"
	face_left
	step_end

JimmyMcGligarSewersIdle_Text_0:
# 23 "data/maps/JimmyEggStore/scripts.pory"
	.string "Hello there, dear custo-...$"

JimmyMcGligarSewersIdle_Text_1:
# 28 "data/maps/JimmyEggStore/scripts.pory"
	.string "Wait a minute. I remember you!\p"
	.string "I asked you for help on Concord Bridge,\n"
	.string "and you just waltzed away!$"

JimmyMcGligarSewersIdle_Text_2:
# 37 "data/maps/JimmyEggStore/scripts.pory"
	.string "Grr... not a man of your word, aren't you?\n"
	.string "What a shame.$"

JimmyMcGligarSewersIdle_Text_3:
# 44 "data/maps/JimmyEggStore/scripts.pory"
	.string "You're lucky grudges aren't profitable,\n"
	.string "or I might be showing you the door now.\p"
	.string "... well, the pipe. Same thing. Anyhow...$"

JimmyMcGligarSewersIdle_Text_4:
# 70 "data/maps/JimmyEggStore/scripts.pory"
	.string "Welcome to Jimmy's Egg Store - Where\n"
	.string "Happiness Hatches!\p"
	.string "What can I do for you, oh dear\n"
	.string "customer?$"

JimmyMcGligarSewersIdle_Text_5:
# 74 "data/maps/JimmyEggStore/scripts.pory"
	.string "Buy an egg$"

JimmyMcGligarSewersIdle_Text_6:
# 74 "data/maps/JimmyEggStore/scripts.pory"
	.string "Play Thimbleregg$"

JimmyMcGligarSewersIdle_Text_7:
# 74 "data/maps/JimmyEggStore/scripts.pory"
	.string "Explanation$"

JimmyMcGligarSewersIdle_Text_8:
# 74 "data/maps/JimmyEggStore/scripts.pory"
	.string "Leave$"

JimmyMcGligarSewersIdle_Text_9:
# 78 "data/maps/JimmyEggStore/scripts.pory"
	.string "Well, maybe some other time!\n"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Cheapstake...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

JimmyMcGligarSewersIdle_Text_10:
# 84 "data/maps/JimmyEggStore/scripts.pory"
	.string "Sure thing - it's only 1000¥ each! The\n"
	.string "species is a surprise!$"

JimmyMcGligarSewersIdle_Text_11:
# 91 "data/maps/JimmyEggStore/scripts.pory"
	.string "Cracked Egg$"

JimmyMcGligarSewersIdle_Text_12:
# 92 "data/maps/JimmyEggStore/scripts.pory"
	.string "Bundle Egg$"

JimmyMcGligarSewersIdle_Text_13:
# 93 "data/maps/JimmyEggStore/scripts.pory"
	.string "Moon Egg$"

JimmyMcGligarSewersIdle_Text_14:
# 94 "data/maps/JimmyEggStore/scripts.pory"
	.string "Sun Egg$"

JimmyMcGligarSewersIdle_Text_15:
# 95 "data/maps/JimmyEggStore/scripts.pory"
	.string "Flower Egg$"

JimmyMcGligarSewersIdle_Text_16:
# 96 "data/maps/JimmyEggStore/scripts.pory"
	.string "Pink Egg$"

JimmyMcGligarSewersIdle_Text_17:
# 97 "data/maps/JimmyEggStore/scripts.pory"
	.string "Nevermind$"

JimmyMcGligarSewersIdle_Text_18:
# 118 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Cracked Egg!$"

JimmyMcGligarSewersIdle_Text_19:
# 135 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Bundle Egg!$"

JimmyMcGligarSewersIdle_Text_20:
# 153 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Moon Egg!$"

JimmyMcGligarSewersIdle_Text_21:
# 171 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Sun Egg!$"

JimmyMcGligarSewersIdle_Text_22:
# 189 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Flower Egg!$"

JimmyMcGligarSewersIdle_Text_23:
# 208 "data/maps/JimmyEggStore/scripts.pory"
	.string "Obtained the Pink Egg!$"

JimmyMcGligarSewersIdle_Text_24:
# 216 "data/maps/JimmyEggStore/scripts.pory"
	.string "The Egg was sent to the PC.$"

JimmyMcGligarSewersIdle_Text_25:
# 220 "data/maps/JimmyEggStore/scripts.pory"
	.string "Thank you for your patronage - you\n"
	.string "take good care of that hatchling now!$"

JimmyMcGligarSewersIdle_Text_26:
# 231 "data/maps/JimmyEggStore/scripts.pory"
	.string "Wait a minute... I can smell it on you.\n"
	.string "You ain't got enough dough!\p"
	.string "Parenting takes money you know? You\n"
	.string "sort your financials before coming\l"
	.string "back!$"

JimmyMcGligarSewersIdle_Text_27:
# 243 "data/maps/JimmyEggStore/scripts.pory"
	.string "Oh, I'm sorry dear customer - only one\n"
	.string "Thimbleregg round per day!\p"
	.string "I've got some customers addicted to\n"
	.string "the thrilling gambling rush, and it's not\l"
	.string "a pleasant experience.\p"
	.string "So come back tomorrow - I'll be happy to\n"
	.string "play then!$"

JimmyMcGligarSewersIdle_Text_28:
# 251 "data/maps/JimmyEggStore/scripts.pory"
	.string "Thumbleregg? You're on, lad! Let me get\n"
	.string "everything ready...$"

JimmyMcGligarSewersIdle_Text_29:
# 256 "data/maps/JimmyEggStore/scripts.pory"
	.string "Thumbleregg? You're on, lass! Let me get\n"
	.string "everything ready...$"

JimmyMcGligarSewersIdle_Text_30:
# 292 "data/maps/JimmyEggStore/scripts.pory"
	.string "Alright, eyes sharp now! Guess inside\n"
	.string "which ball is the egg, and get that egg\l"
	.string "as a prize!$"

JimmyMcGligarSewersIdle_Text_31:
# 335 "data/maps/JimmyEggStore/scripts.pory"
	.string "Well, where is the egg?$"

JimmyMcGligarSewersIdle_Text_32:
# 338 "data/maps/JimmyEggStore/scripts.pory"
	.string "Left ball$"

JimmyMcGligarSewersIdle_Text_33:
# 338 "data/maps/JimmyEggStore/scripts.pory"
	.string "Middle ball$"

JimmyMcGligarSewersIdle_Text_34:
# 338 "data/maps/JimmyEggStore/scripts.pory"
	.string "Right ball$"

JimmyMcGligarSewersIdle_Text_35:
# 343 "data/maps/JimmyEggStore/scripts.pory"
	.string "Nope!$"

JimmyMcGligarSewersIdle_Text_36:
# 355 "data/maps/JimmyEggStore/scripts.pory"
	.string "It was on the right ball! Better luck\n"
	.string "next time!$"

JimmyMcGligarSewersIdle_Text_37:
# 380 "data/maps/JimmyEggStore/scripts.pory"
	.string "Good job! You guessed right - here's\n"
	.string "your egg!$"

JimmyMcGligarSewersIdle_Text_38:
# 548 "data/maps/JimmyEggStore/scripts.pory"
	.string "It was on the left ball! Better luck\n"
	.string "next time!$"

JimmyMcGligarSewersIdle_Text_39:
# 601 "data/maps/JimmyEggStore/scripts.pory"
	.string "It was on the middle ball! Better luck\n"
	.string "next time!$"

JimmyMcGligarSewersIdle_Text_40:
# 683 "data/maps/JimmyEggStore/scripts.pory"
	.string "Now let me put everything back in\n"
	.string "place...$"

JimmyMcGligarSewersIdle_Text_41:
# 726 "data/maps/JimmyEggStore/scripts.pory"
	.string "Pretty fun, right? Come back tomorrow\n"
	.string "for another round!$"

JimmyMcGligarSewersIdle_Text_42:
# 738 "data/maps/JimmyEggStore/scripts.pory"
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
# 765 "data/maps/JimmyEggStore/scripts.pory"
	.string "...$"

JimmyKecleonIdle_Text_0:
# 776 "data/maps/JimmyEggStore/scripts.pory"
	.string "Ke-keeee!$"

JimmyGachapodIdle_Text_0:
# 785 "data/maps/JimmyEggStore/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Ga-gaaa...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

JimmyStoreBoxItem_Text_0:
# 793 "data/maps/JimmyEggStore/scripts.pory"
	.string "There's something inside the box...$"

JimmyStoreBoxItem_Text_1:
# 797 "data/maps/JimmyEggStore/scripts.pory"
	.string "There's nothing inside the box.$"

JimmyStoreBriefcase_Text_0:
# 804 "data/maps/JimmyEggStore/scripts.pory"
	.string "An inconspicuous briefcase, worn with\n"
	.string "use.$"

JimmyStoreTamarakkudoll_Text_0:
# 810 "data/maps/JimmyEggStore/scripts.pory"
	.string "A Tamarakku doll. It's a bit creepy.$"

JimmyStoreBucket_Text_0:
# 816 "data/maps/JimmyEggStore/scripts.pory"
	.string "The bucket is filling with the leakage\n"
	.string "from the pipe.\p"
	.string "It's a bit disgusting...$"

JimmyStoreEggsoncushions_Text_0:
# 822 "data/maps/JimmyEggStore/scripts.pory"
	.string "A few eggs are arranged on top of\n"
	.string "cushions.$"

JimmyStoreMoneyBags_Text_0:
# 828 "data/maps/JimmyEggStore/scripts.pory"
	.string "It's a bundle of bags, like the kind used\n"
	.string "to keep mon-...$"

JimmyStoreMoneyBags_Text_1:
# 833 "data/maps/JimmyEggStore/scripts.pory"
	.string "Hey! Don't you touch my money, or I'll\n"
	.string "put Tamarakku on you!$"
