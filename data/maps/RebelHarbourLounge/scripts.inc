RebelHarbourLounge_MapScripts::
# 2 "data/maps/RebelHarbourLounge/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RebelHarbourLoungeMapscriptBundle
# 3 "data/maps/RebelHarbourLounge/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RebelHarbourLoungeMapscriptBundle
# 4 "data/maps/RebelHarbourLounge/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RebelHarbourLoungeMapscriptBundle
	.byte 0


RebelHarbourLoungeMapscriptBundle::
# 10 "data/maps/RebelHarbourLounge/scripts.pory"
	gettimeofday
# 11 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq RebelHarbourLoungeMapscriptBundle_2
RebelHarbourLoungeMapscriptBundle_1:
# 45 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq RebelHarbourLoungeMapscriptBundle_5
RebelHarbourLoungeMapscriptBundle_4:
# 55 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq RebelHarbourLoungeMapscriptBundle_10
RebelHarbourLoungeMapscriptBundle_9:
# 58 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq RebelHarbourLoungeMapscriptBundle_17
RebelHarbourLoungeMapscriptBundle_16:
# 64 "data/maps/RebelHarbourLounge/scripts.pory"
	goto DayNightNPC
	return

RebelHarbourLoungeMapscriptBundle_2:
# 12 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_NONE
# 16 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungebreakfastguestlotto, RebelHarbourLoungeMapscriptBundle_7
	goto RebelHarbourLoungeMapscriptBundle_1

RebelHarbourLoungeMapscriptBundle_5:
# 46 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_NONE
	goto RebelHarbourLoungeMapscriptBundle_4

RebelHarbourLoungeMapscriptBundle_7:
# 17 "data/maps/RebelHarbourLounge/scripts.pory"
	random 2
# 18 "data/maps/RebelHarbourLounge/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 19 "data/maps/RebelHarbourLounge/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/RebelHarbourLounge/scripts.pory"
	case 0, RebelHarbourLoungeMapscriptBundle_14
# 30 "data/maps/RebelHarbourLounge/scripts.pory"
	case 1, RebelHarbourLoungeMapscriptBundle_15
RebelHarbourLoungeMapscriptBundle_12:
# 39 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborloungebreakfastguestlotto
	goto RebelHarbourLoungeMapscriptBundle_1

RebelHarbourLoungeMapscriptBundle_10:
# 56 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_NONE
	goto RebelHarbourLoungeMapscriptBundle_9

RebelHarbourLoungeMapscriptBundle_14:
# 22 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborbreakfastone
# 24 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfasttwo
# 25 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchone
# 26 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtwo
# 27 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnerone
# 28 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertwo
	goto RebelHarbourLoungeMapscriptBundle_12

RebelHarbourLoungeMapscriptBundle_15:
# 31 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborbreakfasttwo
# 32 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfastone
# 33 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchone
# 34 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtwo
# 35 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnerone
# 36 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertwo
	goto RebelHarbourLoungeMapscriptBundle_12

RebelHarbourLoungeMapscriptBundle_17:
# 59 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_SHADE
	goto RebelHarbourLoungeMapscriptBundle_16


RebelHarborTouristAsksRebento::
# 69 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 70 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 15, RebelHarborTouristAsksRebento_Movement_0
# 71 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 15
# 72 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborTouristAsksRebento_Text_0
# 75 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 15, RebelHarborTouristAsksRebento_Movement_1
# 76 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 15
# 77 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return


RebelHarborGuyCalmsTourist::
# 81 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 82 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborGuyCalmsTourist_Text_0
# 84 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return


RebelHarborLoungeClerkOverCounter::
# 89 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 90 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborTouristAsksRebento_Movement_0
# 91 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
# 92 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerkOverCounter_Text_0
# 93 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborTouristAsksRebento_Movement_1
# 94 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
# 95 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return


RebelHarborLoungeClerk::
# 99 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 101 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, RebelHarborLoungeClerk_2
RebelHarborLoungeClerk_1:
# 104 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, RebelHarborLoungeClerk_5
RebelHarborLoungeClerk_4:
# 107 "data/maps/RebelHarbourLounge/scripts.pory"
normalharborloungeclerkstart:
# 108 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_0
# 111 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_1, RebelHarborLoungeClerk_Text_2, RebelHarborLoungeClerk_Text_3, RebelHarborLoungeClerk_Text_4
# 117 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RebelHarborLoungeClerk_8
RebelHarborLoungeClerk_7:
# 121 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RebelHarborLoungeClerk_11
RebelHarborLoungeClerk_10:
# 123 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborLoungeClerk_14
RebelHarborLoungeClerk_13:
# 125 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RebelHarborLoungeClerk_17
RebelHarborLoungeClerk_16:
# 203 "data/maps/RebelHarbourLounge/scripts.pory"
questactiveharborloungeclerk:
# 204 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 0
	goto_if_eq RebelHarborLoungeClerk_20
RebelHarborLoungeClerk_19:
# 210 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 1
	goto_if_eq RebelHarborLoungeClerk_26
RebelHarborLoungeClerk_25:
# 1061 "data/maps/RebelHarbourLounge/scripts.pory"
rebelharborloungeclerkend:
# 1062 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

RebelHarborLoungeClerk_2:
# 102 "data/maps/RebelHarbourLounge/scripts.pory"
	goto normalharborloungeclerkstart
	goto RebelHarborLoungeClerk_1

RebelHarborLoungeClerk_5:
# 105 "data/maps/RebelHarbourLounge/scripts.pory"
	goto questactiveharborloungeclerk
	goto RebelHarborLoungeClerk_4

RebelHarborLoungeClerk_8:
# 118 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_7

RebelHarborLoungeClerk_11:
	goto RebelHarborLoungeClerk_10

RebelHarborLoungeClerk_14:
	goto RebelHarborLoungeClerk_13

RebelHarborLoungeClerk_17:
# 127 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, RebelHarborLoungeClerk_23
RebelHarborLoungeClerk_22:
# 133 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, RebelHarborLoungeClerk_28
	goto RebelHarborLoungeClerk_16

RebelHarborLoungeClerk_20:
# 206 "data/maps/RebelHarbourLounge/scripts.pory"
harborloungeclerkdemandsorders:
# 207 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_16
	goto RebelHarborLoungeClerk_19

RebelHarborLoungeClerk_23:
# 129 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_5
# 130 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_22

RebelHarborLoungeClerk_26:
# 211 "data/maps/RebelHarbourLounge/scripts.pory"
harborloungeclerkrevieworders:
# 212 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_17
# 213 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 214 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_0
# 215 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 216 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 217 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_18
# 222 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set morningstartwaiterquest, RebelHarborLoungeClerk_30
	goto RebelHarborLoungeClerk_25

RebelHarborLoungeClerk_28:
# 136 "data/maps/RebelHarbourLounge/scripts.pory"
	gettimeofday
# 137 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq RebelHarborLoungeClerk_33
RebelHarborLoungeClerk_32:
# 144 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq RebelHarborLoungeClerk_39
RebelHarborLoungeClerk_38:
# 151 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq RebelHarborLoungeClerk_49
RebelHarborLoungeClerk_48:
# 158 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq RebelHarborLoungeClerk_58
RebelHarborLoungeClerk_57:
# 165 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 166 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RebelHarborLoungeClerk_67
RebelHarborLoungeClerk_66:
# 168 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_11
# 170 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_12, RebelHarborLoungeClerk_Text_13
# 174 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborLoungeClerk_76
RebelHarborLoungeClerk_75:
# 180 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RebelHarborLoungeClerk_86
RebelHarborLoungeClerk_85:
# 197 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_16

RebelHarborLoungeClerk_30:
# 224 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_19, RebelHarborLoungeClerk_Text_20, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35
# 243 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RebelHarborLoungeClerk_36
RebelHarborLoungeClerk_35:
# 254 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq RebelHarborLoungeClerk_42
# 267 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
RebelHarborLoungeClerk_41:
# 269 "data/maps/RebelHarbourLounge/scripts.pory"
proceedtotable2:
# 270 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 271 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_1
# 272 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 273 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 275 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_36
# 279 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_19, RebelHarborLoungeClerk_Text_20, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35
# 299 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RebelHarborLoungeClerk_52
RebelHarborLoungeClerk_51:
# 314 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq RebelHarborLoungeClerk_61
RebelHarborLoungeClerk_60:
# 330 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RebelHarborLoungeClerk_70
RebelHarborLoungeClerk_69:
# 344 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq RebelHarborLoungeClerk_79
# 360 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
RebelHarborLoungeClerk_78:
# 363 "data/maps/RebelHarbourLounge/scripts.pory"
proceedtotable2seconchoice:
# 364 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_37
# 368 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_38, RebelHarborLoungeClerk_Text_19, RebelHarborLoungeClerk_Text_20, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35
# 388 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RebelHarborLoungeClerk_89
RebelHarborLoungeClerk_88:
# 402 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq RebelHarborLoungeClerk_95
RebelHarborLoungeClerk_94:
# 418 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RebelHarborLoungeClerk_101
RebelHarborLoungeClerk_100:
# 432 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq RebelHarborLoungeClerk_107
# 446 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
RebelHarborLoungeClerk_106:
# 449 "data/maps/RebelHarbourLounge/scripts.pory"
proceedtotable3:
# 450 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 451 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_2
# 452 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 453 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 455 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_39
# 459 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_19, RebelHarborLoungeClerk_Text_20, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35
# 478 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RebelHarborLoungeClerk_114
RebelHarborLoungeClerk_113:
# 492 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RebelHarborLoungeClerk_120
RebelHarborLoungeClerk_119:
# 506 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RebelHarborLoungeClerk_126
RebelHarborLoungeClerk_125:
# 520 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq RebelHarborLoungeClerk_132
# 535 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
RebelHarborLoungeClerk_131:
# 539 "data/maps/RebelHarbourLounge/scripts.pory"
proceedtotable3seconchoice:
# 540 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_40
# 544 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_38, RebelHarborLoungeClerk_Text_19, RebelHarborLoungeClerk_Text_20, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_41, RebelHarborLoungeClerk_Text_35
# 564 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RebelHarborLoungeClerk_139
RebelHarborLoungeClerk_138:
# 578 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq RebelHarborLoungeClerk_145
RebelHarborLoungeClerk_144:
# 592 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RebelHarborLoungeClerk_151
RebelHarborLoungeClerk_150:
# 606 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_eq RebelHarborLoungeClerk_157
# 620 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
RebelHarborLoungeClerk_156:
# 623 "data/maps/RebelHarbourLounge/scripts.pory"
finishedwaiterorderrelay:
# 624 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_3
# 626 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 627 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 630 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_42
# 633 "data/maps/RebelHarbourLounge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 635 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag breakfastonefoodtrays
# 636 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 41
# 637 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 38
# 638 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 37
# 639 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 39
# 640 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 40
# 643 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborbreakfastone, RebelHarborLoungeClerk_164
RebelHarborLoungeClerk_163:
# 652 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborbreakfasttwo, RebelHarborLoungeClerk_170
RebelHarborLoungeClerk_169:
# 662 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeoutbgm 1
# 663 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeinbgm 1
# 664 "data/maps/RebelHarbourLounge/scripts.pory"
	playbgm MUS_CONTEST_RESULTS, TRUE
# 666 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborLoungeClerk_Movement_4
# 668 "data/maps/RebelHarbourLounge/scripts.pory"
	hidefollower
# 672 "data/maps/RebelHarbourLounge/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 674 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_43
# 676 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 678 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 679 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_5
# 680 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 681 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 686 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERFIRSTTABLESUCCESS, 0
	goto_if_eq RebelHarborLoungeClerk_173
RebelHarborLoungeClerk_172:
# 707 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERFIRSTTABLESUCCESS, 1
	goto_if_eq RebelHarborLoungeClerk_176
RebelHarborLoungeClerk_175:
# 730 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERSECONDTABLESUCCESS, 0
	goto_if_eq RebelHarborLoungeClerk_182
RebelHarborLoungeClerk_181:
# 759 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERSECONDTABLESUCCESS, 1
	goto_if_eq RebelHarborLoungeClerk_191
RebelHarborLoungeClerk_190:
# 787 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERSECONDTABLESUCCESS, 2
	goto_if_eq RebelHarborLoungeClerk_200
RebelHarborLoungeClerk_199:
# 819 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERTHIRDTABLESUCCESS, 0
	goto_if_eq RebelHarborLoungeClerk_209
RebelHarborLoungeClerk_208:
# 852 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERTHIRDTABLESUCCESS, 1
	goto_if_eq RebelHarborLoungeClerk_218
RebelHarborLoungeClerk_217:
# 885 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERTHIRDTABLESUCCESS, 2
	goto_if_eq RebelHarborLoungeClerk_227
RebelHarborLoungeClerk_226:
# 918 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 919 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_7
# 920 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 921 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 924 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborLoungeClerk_Movement_8
# 925 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborLoungeClerk_Movement_8
# 926 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 930 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 1
	goto_if_eq RebelHarborLoungeClerk_236
RebelHarborLoungeClerk_235:
# 947 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 2
	goto_if_eq RebelHarborLoungeClerk_245
RebelHarborLoungeClerk_244:
# 966 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 3
	goto_if_eq RebelHarborLoungeClerk_251
RebelHarborLoungeClerk_250:
# 984 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 4
	goto_if_eq RebelHarborLoungeClerk_254
RebelHarborLoungeClerk_253:
# 1002 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 5
	goto_if_eq RebelHarborLoungeClerk_257
RebelHarborLoungeClerk_256:
# 1018 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 6
	goto_if_eq RebelHarborLoungeClerk_260
RebelHarborLoungeClerk_259:
# 1023 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 1025 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungequestaccepted
# 1026 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag morningstartwaiterquest
# 1027 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag daystartwaiterquest
# 1028 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag nightstartwaiterquest
# 1031 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 0
# 1032 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERFIRSTTABLESUCCESS, 0
# 1033 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERSECONDTABLESUCCESS, 0
# 1034 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERTHIRDTABLESUCCESS, 0
# 1036 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tableonefirstcorrectbreakfast
# 1037 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tableonesecondcorrectbreakfast
# 1039 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 1040 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 1041 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 1042 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 1044 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 1045 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 1046 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 1047 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 1049 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeoutbgm 1
# 1050 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeinbgm 1
# 1051 "data/maps/RebelHarbourLounge/scripts.pory"
	playbgm MUS_PIRATESGUIGE, TRUE
# 1053 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_25

RebelHarborLoungeClerk_33:
# 139 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag morningstartwaiterquest
# 140 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_6
	goto RebelHarborLoungeClerk_32

RebelHarborLoungeClerk_36:
# 245 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, RebelHarborLoungeClerk_45
# 251 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_35

RebelHarborLoungeClerk_39:
# 146 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag daystartwaiterquest
# 147 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_7
	goto RebelHarborLoungeClerk_38

RebelHarborLoungeClerk_42:
# 257 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, RebelHarborLoungeClerk_54
# 263 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_41

RebelHarborLoungeClerk_45:
# 247 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 248 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERFIRSTTABLESUCCESS, + 1
	goto RebelHarborLoungeClerk_35

RebelHarborLoungeClerk_49:
# 153 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_8
# 155 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_48

RebelHarborLoungeClerk_52:
# 301 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, RebelHarborLoungeClerk_63
# 309 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_51

RebelHarborLoungeClerk_54:
# 259 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 260 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERFIRSTTABLESUCCESS, + 1
	goto RebelHarborLoungeClerk_41

RebelHarborLoungeClerk_58:
# 160 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag nightstartwaiterquest
# 161 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_9
	goto RebelHarborLoungeClerk_57

RebelHarborLoungeClerk_61:
# 317 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, RebelHarborLoungeClerk_72
# 325 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_60

RebelHarborLoungeClerk_63:
# 303 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 304 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 305 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 306 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_51

RebelHarborLoungeClerk_67:
# 167 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_10
	goto RebelHarborLoungeClerk_66

RebelHarborLoungeClerk_70:
# 332 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, RebelHarborLoungeClerk_82
# 340 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_69

RebelHarborLoungeClerk_72:
# 319 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 320 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 321 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 322 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_60

RebelHarborLoungeClerk_76:
# 175 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_14
# 177 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_75

RebelHarborLoungeClerk_79:
# 346 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, RebelHarborLoungeClerk_91
# 354 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_78

RebelHarborLoungeClerk_82:
# 334 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 335 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 336 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 337 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_69

RebelHarborLoungeClerk_86:
# 181 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_15
# 182 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 185 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborloungequestaccepted
# 190 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeoutbgm 1
# 191 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeinbgm 1
# 192 "data/maps/RebelHarbourLounge/scripts.pory"
	playbgm MUS_BUYSOMETHINGWILLYA, TRUE
	goto RebelHarborLoungeClerk_85

RebelHarborLoungeClerk_89:
# 390 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, RebelHarborLoungeClerk_97
# 398 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_88

RebelHarborLoungeClerk_91:
# 348 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 349 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 350 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 351 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_78

RebelHarborLoungeClerk_95:
# 405 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, RebelHarborLoungeClerk_103
# 413 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_94

RebelHarborLoungeClerk_97:
# 392 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 393 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 394 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 395 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_88

RebelHarborLoungeClerk_101:
# 420 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, RebelHarborLoungeClerk_110
# 428 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_100

RebelHarborLoungeClerk_103:
# 407 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 408 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 409 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 410 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_94

RebelHarborLoungeClerk_107:
# 434 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, RebelHarborLoungeClerk_116
# 442 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_106

RebelHarborLoungeClerk_110:
# 422 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 423 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 424 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 425 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_100

RebelHarborLoungeClerk_114:
# 480 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, RebelHarborLoungeClerk_122
# 488 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_113

RebelHarborLoungeClerk_116:
# 436 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 437 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 438 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 439 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_106

RebelHarborLoungeClerk_120:
# 494 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, RebelHarborLoungeClerk_128
# 502 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_119

RebelHarborLoungeClerk_122:
# 482 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 483 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 484 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 485 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_113

RebelHarborLoungeClerk_126:
# 508 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, RebelHarborLoungeClerk_135
# 516 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_125

RebelHarborLoungeClerk_128:
# 496 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 497 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 498 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 499 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_119

RebelHarborLoungeClerk_132:
# 522 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, RebelHarborLoungeClerk_141
# 530 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_131

RebelHarborLoungeClerk_135:
# 510 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 511 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 512 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 513 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_125

RebelHarborLoungeClerk_139:
# 566 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, RebelHarborLoungeClerk_147
# 574 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_138

RebelHarborLoungeClerk_141:
# 524 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 525 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 526 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 527 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_131

RebelHarborLoungeClerk_145:
# 580 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, RebelHarborLoungeClerk_153
# 588 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_144

RebelHarborLoungeClerk_147:
# 568 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 569 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 570 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 571 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_138

RebelHarborLoungeClerk_151:
# 594 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, RebelHarborLoungeClerk_160
# 602 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_150

RebelHarborLoungeClerk_153:
# 582 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 583 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 584 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 585 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_144

RebelHarborLoungeClerk_157:
# 608 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, RebelHarborLoungeClerk_166
# 616 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_156

RebelHarborLoungeClerk_160:
# 596 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 597 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 598 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 599 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_150

RebelHarborLoungeClerk_164:
# 645 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 41, 3, 8
# 646 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 38, 4, 12
# 647 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 37, 5, 12
# 648 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 39, 10, 14
# 649 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 40, 11, 14
	goto RebelHarborLoungeClerk_163

RebelHarborLoungeClerk_166:
# 610 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 611 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 612 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 613 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_156

RebelHarborLoungeClerk_170:
# 654 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 41, 3, 9
# 655 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 38, 4, 12
# 656 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 37, 4, 12
# 657 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 39, 10, 14
# 658 "data/maps/RebelHarbourLounge/scripts.pory"
	setobjectxy 40, 10, 14
	goto RebelHarborLoungeClerk_169

RebelHarborLoungeClerk_173:
# 689 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborbreakfastone, RebelHarborLoungeClerk_179
RebelHarborLoungeClerk_178:
# 696 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborbreakfasttwo, RebelHarborLoungeClerk_188
RebelHarborLoungeClerk_187:
# 703 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_44
	goto RebelHarborLoungeClerk_172

RebelHarborLoungeClerk_176:
# 709 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborbreakfastone, RebelHarborLoungeClerk_185
RebelHarborLoungeClerk_184:
# 716 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborbreakfasttwo, RebelHarborLoungeClerk_197
RebelHarborLoungeClerk_196:
# 723 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_45
	goto RebelHarborLoungeClerk_175

RebelHarborLoungeClerk_179:
# 691 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 692 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 7, RebelHarborLoungeClerk_Movement_6
# 693 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 7
	goto RebelHarborLoungeClerk_178

RebelHarborLoungeClerk_182:
# 733 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_194
RebelHarborLoungeClerk_193:
# 744 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_206
RebelHarborLoungeClerk_205:
# 755 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_46
	goto RebelHarborLoungeClerk_181

RebelHarborLoungeClerk_185:
# 711 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 712 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 7, RebelHarborLoungeClerk_Movement_6
# 713 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 7
	goto RebelHarborLoungeClerk_184

RebelHarborLoungeClerk_188:
# 698 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 699 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 29, RebelHarborLoungeClerk_Movement_6
# 700 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 29
	goto RebelHarborLoungeClerk_187

RebelHarborLoungeClerk_191:
# 761 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_203
RebelHarborLoungeClerk_202:
# 772 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_215
RebelHarborLoungeClerk_214:
# 783 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_47
	goto RebelHarborLoungeClerk_190

RebelHarborLoungeClerk_194:
# 735 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 736 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_6
# 737 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 739 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 740 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborLoungeClerk_Movement_6
# 741 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 19
	goto RebelHarborLoungeClerk_193

RebelHarborLoungeClerk_197:
# 718 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 719 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 29, RebelHarborLoungeClerk_Movement_6
# 720 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 29
	goto RebelHarborLoungeClerk_196

RebelHarborLoungeClerk_200:
# 789 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_212
RebelHarborLoungeClerk_211:
# 800 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_224
RebelHarborLoungeClerk_223:
# 811 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_48
	goto RebelHarborLoungeClerk_199

RebelHarborLoungeClerk_203:
# 763 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 764 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_6
# 765 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 767 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 768 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborLoungeClerk_Movement_6
# 769 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 19
	goto RebelHarborLoungeClerk_202

RebelHarborLoungeClerk_206:
# 746 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 747 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborLoungeClerk_Movement_6
# 748 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 49
# 750 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 751 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, RebelHarborLoungeClerk_Movement_6
# 752 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 50
	goto RebelHarborLoungeClerk_205

RebelHarborLoungeClerk_209:
# 821 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_221
RebelHarborLoungeClerk_220:
# 836 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_233
RebelHarborLoungeClerk_232:
# 848 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_49
	goto RebelHarborLoungeClerk_208

RebelHarborLoungeClerk_212:
# 791 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 792 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_6
# 793 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 795 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 796 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborLoungeClerk_Movement_6
# 797 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 19
	goto RebelHarborLoungeClerk_211

RebelHarborLoungeClerk_215:
# 774 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 775 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborLoungeClerk_Movement_6
# 776 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 49
# 778 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 779 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, RebelHarborLoungeClerk_Movement_6
# 780 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 50
	goto RebelHarborLoungeClerk_214

RebelHarborLoungeClerk_218:
# 854 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_230
RebelHarborLoungeClerk_229:
# 869 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_242
RebelHarborLoungeClerk_241:
# 881 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_50
	goto RebelHarborLoungeClerk_217

RebelHarborLoungeClerk_221:
# 823 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 824 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborLoungeClerk_Movement_6
# 825 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 36
# 827 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 828 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborLoungeClerk_Movement_6
# 829 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 34
# 831 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 832 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_6
# 833 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_220

RebelHarborLoungeClerk_224:
# 802 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 803 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborLoungeClerk_Movement_6
# 804 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 49
# 806 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 807 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, RebelHarborLoungeClerk_Movement_6
# 808 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 50
	goto RebelHarborLoungeClerk_223

RebelHarborLoungeClerk_227:
# 887 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_239
RebelHarborLoungeClerk_238:
# 902 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_248
RebelHarborLoungeClerk_247:
# 914 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_51
	goto RebelHarborLoungeClerk_226

RebelHarborLoungeClerk_230:
# 856 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 857 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborLoungeClerk_Movement_6
# 858 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 36
# 860 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 861 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborLoungeClerk_Movement_6
# 862 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 34
# 864 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 865 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_6
# 866 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_229

RebelHarborLoungeClerk_233:
# 838 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 839 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborLoungeClerk_Movement_6
# 840 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 46
# 842 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 843 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_6
# 844 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_232

RebelHarborLoungeClerk_236:
# 932 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_52
# 934 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 935 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_53
# 937 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 500
# 938 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 939 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 940 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 941 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 943 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_54
	goto RebelHarborLoungeClerk_235

RebelHarborLoungeClerk_239:
# 889 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 890 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborLoungeClerk_Movement_6
# 891 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 36
# 893 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 894 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborLoungeClerk_Movement_6
# 895 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 34
# 897 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 898 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_6
# 899 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_238

RebelHarborLoungeClerk_242:
# 871 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 872 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborLoungeClerk_Movement_6
# 873 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 46
# 875 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 876 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_6
# 877 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_241

RebelHarborLoungeClerk_245:
# 949 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_55
# 952 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 954 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_56
# 957 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 1000
# 958 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 959 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 960 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 961 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 963 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_57
	goto RebelHarborLoungeClerk_244

RebelHarborLoungeClerk_248:
# 904 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 905 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborLoungeClerk_Movement_6
# 906 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 46
# 908 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 909 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_6
# 910 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_247

RebelHarborLoungeClerk_251:
# 968 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_58
# 970 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 971 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_59
# 973 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 1500
# 974 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 975 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 976 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 977 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 979 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_60
	goto RebelHarborLoungeClerk_250

RebelHarborLoungeClerk_254:
# 986 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_61
# 988 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 989 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_62
# 991 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 2000
# 992 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 993 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 994 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 995 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 997 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_63
	goto RebelHarborLoungeClerk_253

RebelHarborLoungeClerk_257:
# 1004 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 1005 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_64
# 1007 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 2500
# 1008 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 1009 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 1010 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 1011 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 1013 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_65
	goto RebelHarborLoungeClerk_256

RebelHarborLoungeClerk_260:
# 1020 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_66
	goto RebelHarborLoungeClerk_259


PetalburgHarbourOrderChecker::
# 1072 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set morningstartwaiterquest, PetalburgHarbourOrderChecker_2
PetalburgHarbourOrderChecker_1:
# 1106 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourOrderChecker_2:
# 1075 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, PetalburgHarbourOrderChecker_5
PetalburgHarbourOrderChecker_4:
# 1090 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, PetalburgHarbourOrderChecker_7
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_5:
# 1078 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, PetalburgHarbourOrderChecker_11
	goto PetalburgHarbourOrderChecker_4

PetalburgHarbourOrderChecker_7:
# 1093 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, PetalburgHarbourOrderChecker_21
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_9:
# 1085 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 1
	goto PetalburgHarbourOrderChecker_4

PetalburgHarbourOrderChecker_10:
# 1080 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, PetalburgHarbourOrderChecker_15
	goto PetalburgHarbourOrderChecker_4

PetalburgHarbourOrderChecker_11:
# 1079 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, PetalburgHarbourOrderChecker_10
	goto PetalburgHarbourOrderChecker_4

PetalburgHarbourOrderChecker_14:
# 1082 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, PetalburgHarbourOrderChecker_9
	goto PetalburgHarbourOrderChecker_4

PetalburgHarbourOrderChecker_15:
# 1081 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, PetalburgHarbourOrderChecker_14
	goto PetalburgHarbourOrderChecker_4

PetalburgHarbourOrderChecker_19:
# 1100 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 1
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_20:
# 1095 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, PetalburgHarbourOrderChecker_25
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_21:
# 1094 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, PetalburgHarbourOrderChecker_20
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_24:
# 1097 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, PetalburgHarbourOrderChecker_19
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_25:
# 1096 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, PetalburgHarbourOrderChecker_24
	goto PetalburgHarbourOrderChecker_1


PetalburgHarbourTable1YoungFatManGuest::
# 1112 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1113 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 7, RebelHarborTouristAsksRebento_Movement_0
# 1116 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable1YoungFatManGuest_2
PetalburgHarbourTable1YoungFatManGuest_1:
# 1122 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable1YoungFatManGuest_5
PetalburgHarbourTable1YoungFatManGuest_4:
# 1153 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 7, PetalburgHarbourTable1YoungFatManGuest_Movement_0
# 1154 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 7
# 1155 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 1156 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable1YoungFatManGuest_2:
# 1119 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuest_Text_0
	goto PetalburgHarbourTable1YoungFatManGuest_1

PetalburgHarbourTable1YoungFatManGuest_5:
# 1126 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable1YoungFatManGuest_8
PetalburgHarbourTable1YoungFatManGuest_7:
# 1133 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable1YoungFatManGuest_10
	goto PetalburgHarbourTable1YoungFatManGuest_4

PetalburgHarbourTable1YoungFatManGuest_8:
# 1129 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuest_Text_1
	goto PetalburgHarbourTable1YoungFatManGuest_7

PetalburgHarbourTable1YoungFatManGuest_10:
# 1138 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, PetalburgHarbourTable1YoungFatManGuest_13
PetalburgHarbourTable1YoungFatManGuest_12:
# 1143 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tableonefirstcorrectbreakfast, PetalburgHarbourTable1YoungFatManGuest_15
	goto PetalburgHarbourTable1YoungFatManGuest_4

PetalburgHarbourTable1YoungFatManGuest_13:
# 1140 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuest_Text_2
	goto PetalburgHarbourTable1YoungFatManGuest_12

PetalburgHarbourTable1YoungFatManGuest_15:
# 1145 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuest_Text_3
# 1146 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonefirstcorrectbreakfast
	goto PetalburgHarbourTable1YoungFatManGuest_4


PetalburgHarbourTable1OldFatManGuest::
# 1160 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1161 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 29, RebelHarborTouristAsksRebento_Movement_0
# 1164 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable1OldFatManGuest_2
PetalburgHarbourTable1OldFatManGuest_1:
# 1171 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable1OldFatManGuest_5
PetalburgHarbourTable1OldFatManGuest_4:
# 1202 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 29, PetalburgHarbourTable1YoungFatManGuest_Movement_0
# 1203 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 29
# 1204 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 1205 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable1OldFatManGuest_2:
# 1167 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuest_Text_0
	goto PetalburgHarbourTable1OldFatManGuest_1

PetalburgHarbourTable1OldFatManGuest_5:
# 1176 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable1OldFatManGuest_8
PetalburgHarbourTable1OldFatManGuest_7:
# 1183 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable1OldFatManGuest_10
	goto PetalburgHarbourTable1OldFatManGuest_4

PetalburgHarbourTable1OldFatManGuest_8:
# 1179 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuest_Text_1
	goto PetalburgHarbourTable1OldFatManGuest_7

PetalburgHarbourTable1OldFatManGuest_10:
# 1187 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, PetalburgHarbourTable1OldFatManGuest_13
PetalburgHarbourTable1OldFatManGuest_12:
# 1193 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tableonesecondcorrectbreakfast, PetalburgHarbourTable1OldFatManGuest_15
	goto PetalburgHarbourTable1OldFatManGuest_4

PetalburgHarbourTable1OldFatManGuest_13:
# 1189 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuest_Text_2
# 1190 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonesecondcorrectbreakfast
	goto PetalburgHarbourTable1OldFatManGuest_12

PetalburgHarbourTable1OldFatManGuest_15:
# 1195 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuest_Text_3
# 1196 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonesecondcorrectbreakfast
	goto PetalburgHarbourTable1OldFatManGuest_4


PetalburgHarbourTable2WageSlaveGuest::
# 1210 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1211 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborTouristAsksRebento_Movement_0
# 1214 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2WageSlaveGuest_2
PetalburgHarbourTable2WageSlaveGuest_1:
# 1220 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2WageSlaveGuest_5
PetalburgHarbourTable2WageSlaveGuest_4:
# 1249 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_4
# 1250 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 1251 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 1252 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2WageSlaveGuest_2:
# 1217 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2WageSlaveGuest_Text_0
	goto PetalburgHarbourTable2WageSlaveGuest_1

PetalburgHarbourTable2WageSlaveGuest_5:
# 1225 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2WageSlaveGuest_8
PetalburgHarbourTable2WageSlaveGuest_7:
# 1232 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2WageSlaveGuest_10
	goto PetalburgHarbourTable2WageSlaveGuest_4

PetalburgHarbourTable2WageSlaveGuest_8:
# 1228 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2WageSlaveGuest_Text_1
	goto PetalburgHarbourTable2WageSlaveGuest_7

PetalburgHarbourTable2WageSlaveGuest_10:
# 1235 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, PetalburgHarbourTable2WageSlaveGuest_13
PetalburgHarbourTable2WageSlaveGuest_12:
# 1240 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwofirstcorrectbreakfast, PetalburgHarbourTable2WageSlaveGuest_15
	goto PetalburgHarbourTable2WageSlaveGuest_4

PetalburgHarbourTable2WageSlaveGuest_13:
# 1237 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2WageSlaveGuest_Text_2
	goto PetalburgHarbourTable2WageSlaveGuest_12

PetalburgHarbourTable2WageSlaveGuest_15:
# 1242 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2WageSlaveGuest_Text_3
# 1243 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwofirstcorrectbreakfast
	goto PetalburgHarbourTable2WageSlaveGuest_4


PetalburgHarbourTable2DaugtherGuest::
# 1257 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1258 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborTouristAsksRebento_Movement_0
# 1260 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2DaugtherGuest_2
PetalburgHarbourTable2DaugtherGuest_1:
# 1268 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2DaugtherGuest_5
PetalburgHarbourTable2DaugtherGuest_4:
# 1326 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2DaugtherGuest_2:
# 1263 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_0
	goto PetalburgHarbourTable2DaugtherGuest_1

PetalburgHarbourTable2DaugtherGuest_5:
# 1271 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_1
# 1276 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2DaugtherGuest_8
PetalburgHarbourTable2DaugtherGuest_7:
# 1284 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2DaugtherGuest_10
	goto PetalburgHarbourTable2DaugtherGuest_4

PetalburgHarbourTable2DaugtherGuest_8:
# 1279 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_1
	goto PetalburgHarbourTable2DaugtherGuest_7

PetalburgHarbourTable2DaugtherGuest_10:
# 1288 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, PetalburgHarbourTable2DaugtherGuest_13
PetalburgHarbourTable2DaugtherGuest_12:
# 1300 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwosecondcorrectbreakfast, PetalburgHarbourTable2DaugtherGuest_16
PetalburgHarbourTable2DaugtherGuest_15:
# 1319 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborLoungeClerk_Movement_4
# 1320 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 19
# 1321 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
	goto PetalburgHarbourTable2DaugtherGuest_4

PetalburgHarbourTable2DaugtherGuest_13:
# 1289 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 1290 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable2DaugtherGuest_19
PetalburgHarbourTable2DaugtherGuest_18:
# 1294 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable2DaugtherGuest_24
	goto PetalburgHarbourTable2DaugtherGuest_12

PetalburgHarbourTable2DaugtherGuest_16:
# 1302 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_4
# 1305 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHarbourTable2DaugtherGuest_Text_5, PetalburgHarbourTable2DaugtherGuest_Text_6
# 1309 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHarbourTable2DaugtherGuest_22
PetalburgHarbourTable2DaugtherGuest_21:
# 1313 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHarbourTable2DaugtherGuest_27
PetalburgHarbourTable2DaugtherGuest_26:
# 1317 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwosecondcorrectbreakfast
	goto PetalburgHarbourTable2DaugtherGuest_15

PetalburgHarbourTable2DaugtherGuest_19:
# 1291 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_2
	goto PetalburgHarbourTable2DaugtherGuest_18

PetalburgHarbourTable2DaugtherGuest_22:
# 1310 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_7
	goto PetalburgHarbourTable2DaugtherGuest_21

PetalburgHarbourTable2DaugtherGuest_24:
# 1295 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_3
	goto PetalburgHarbourTable2DaugtherGuest_12

PetalburgHarbourTable2DaugtherGuest_27:
# 1314 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_8
	goto PetalburgHarbourTable2DaugtherGuest_26


PetalburgHarbourTable2MercenaryMGuest::
# 1331 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1332 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborTouristAsksRebento_Movement_0
# 1334 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2MercenaryMGuest_2
PetalburgHarbourTable2MercenaryMGuest_1:
# 1342 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2MercenaryMGuest_5
PetalburgHarbourTable2MercenaryMGuest_4:
# 1379 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborTouristAsksRebento_Movement_1
# 1380 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 49
# 1381 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 1382 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2MercenaryMGuest_2:
# 1337 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_0
	goto PetalburgHarbourTable2MercenaryMGuest_1

PetalburgHarbourTable2MercenaryMGuest_5:
# 1346 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2MercenaryMGuest_8
PetalburgHarbourTable2MercenaryMGuest_7:
# 1353 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2MercenaryMGuest_10
	goto PetalburgHarbourTable2MercenaryMGuest_4

PetalburgHarbourTable2MercenaryMGuest_8:
# 1349 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_1
	goto PetalburgHarbourTable2MercenaryMGuest_7

PetalburgHarbourTable2MercenaryMGuest_10:
# 1357 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, PetalburgHarbourTable2MercenaryMGuest_13
PetalburgHarbourTable2MercenaryMGuest_12:
# 1363 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwothirdcorrectbreakfast, PetalburgHarbourTable2MercenaryMGuest_15
	goto PetalburgHarbourTable2MercenaryMGuest_4

PetalburgHarbourTable2MercenaryMGuest_13:
# 1359 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_2
	goto PetalburgHarbourTable2MercenaryMGuest_12

PetalburgHarbourTable2MercenaryMGuest_15:
# 1365 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_3
# 1367 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 1368 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable2MercenaryMGuest_18
PetalburgHarbourTable2MercenaryMGuest_17:
# 1371 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable2MercenaryMGuest_21
PetalburgHarbourTable2MercenaryMGuest_20:
# 1375 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwothirdcorrectbreakfast
# 1376 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwofourthcorrectbreakfast
	goto PetalburgHarbourTable2MercenaryMGuest_4

PetalburgHarbourTable2MercenaryMGuest_18:
# 1369 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_4
	goto PetalburgHarbourTable2MercenaryMGuest_17

PetalburgHarbourTable2MercenaryMGuest_21:
# 1372 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_5
	goto PetalburgHarbourTable2MercenaryMGuest_20


PetalburgHarbourTable3BandagedManGuest::
# 1388 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1389 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborTouristAsksRebento_Movement_0
# 1391 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3BandagedManGuest_2
PetalburgHarbourTable3BandagedManGuest_1:
# 1397 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3BandagedManGuest_5
PetalburgHarbourTable3BandagedManGuest_4:
# 1435 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborTouristAsksRebento_Movement_1
# 1436 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 36
# 1437 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 1438 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3BandagedManGuest_2:
# 1394 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_0
	goto PetalburgHarbourTable3BandagedManGuest_1

PetalburgHarbourTable3BandagedManGuest_5:
# 1401 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3BandagedManGuest_8
PetalburgHarbourTable3BandagedManGuest_7:
# 1417 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3BandagedManGuest_10
	goto PetalburgHarbourTable3BandagedManGuest_4

PetalburgHarbourTable3BandagedManGuest_8:
# 1404 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_1
# 1407 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 1408 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable3BandagedManGuest_13
PetalburgHarbourTable3BandagedManGuest_12:
# 1411 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable3BandagedManGuest_18
	goto PetalburgHarbourTable3BandagedManGuest_7

PetalburgHarbourTable3BandagedManGuest_10:
# 1422 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, PetalburgHarbourTable3BandagedManGuest_16
PetalburgHarbourTable3BandagedManGuest_15:
# 1429 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreefirstcorrectbreakfast, PetalburgHarbourTable3BandagedManGuest_20
	goto PetalburgHarbourTable3BandagedManGuest_4

PetalburgHarbourTable3BandagedManGuest_13:
# 1409 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_2
	goto PetalburgHarbourTable3BandagedManGuest_12

PetalburgHarbourTable3BandagedManGuest_16:
# 1424 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_4
	goto PetalburgHarbourTable3BandagedManGuest_15

PetalburgHarbourTable3BandagedManGuest_18:
# 1412 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_3
	goto PetalburgHarbourTable3BandagedManGuest_7

PetalburgHarbourTable3BandagedManGuest_20:
# 1431 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_5
# 1432 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreefirstcorrectbreakfast
	goto PetalburgHarbourTable3BandagedManGuest_4


PetalburgHarbourTable3TrapinchTechnicianGuest::
# 1442 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1443 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborTouristAsksRebento_Movement_0
# 1446 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3TrapinchTechnicianGuest_2
PetalburgHarbourTable3TrapinchTechnicianGuest_1:
# 1454 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3TrapinchTechnicianGuest_5
PetalburgHarbourTable3TrapinchTechnicianGuest_4:
# 1477 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborLoungeClerk_Movement_8
# 1478 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 34
# 1479 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 1480 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3TrapinchTechnicianGuest_2:
# 1449 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3TrapinchTechnicianGuest_Text_0
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_1

PetalburgHarbourTable3TrapinchTechnicianGuest_5:
# 1458 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3TrapinchTechnicianGuest_8
PetalburgHarbourTable3TrapinchTechnicianGuest_7:
# 1465 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, PetalburgHarbourTable3TrapinchTechnicianGuest_11
PetalburgHarbourTable3TrapinchTechnicianGuest_10:
# 1471 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreesecondcorrectbreakfast, PetalburgHarbourTable3TrapinchTechnicianGuest_13
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_4

PetalburgHarbourTable3TrapinchTechnicianGuest_8:
# 1461 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3TrapinchTechnicianGuest_Text_1
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_7

PetalburgHarbourTable3TrapinchTechnicianGuest_11:
# 1467 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3TrapinchTechnicianGuest_Text_2
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_10

PetalburgHarbourTable3TrapinchTechnicianGuest_13:
# 1473 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3TrapinchTechnicianGuest_Text_3
# 1474 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreesecondcorrectbreakfast
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_4


PetalburgHarbourTable3CuboneWomanGuest::
# 1485 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1486 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborTouristAsksRebento_Movement_0
# 1489 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3CuboneWomanGuest_2
PetalburgHarbourTable3CuboneWomanGuest_1:
# 1495 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3CuboneWomanGuest_5
PetalburgHarbourTable3CuboneWomanGuest_4:
# 1530 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborLoungeClerk_Movement_8
# 1531 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 46
# 1532 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 1533 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3CuboneWomanGuest_2:
# 1492 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_0
	goto PetalburgHarbourTable3CuboneWomanGuest_1

PetalburgHarbourTable3CuboneWomanGuest_5:
# 1499 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3CuboneWomanGuest_8
PetalburgHarbourTable3CuboneWomanGuest_7:
# 1508 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, PetalburgHarbourTable3CuboneWomanGuest_11
PetalburgHarbourTable3CuboneWomanGuest_10:
# 1523 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreethirdcorrectbreakfast, PetalburgHarbourTable3CuboneWomanGuest_13
	goto PetalburgHarbourTable3CuboneWomanGuest_4

PetalburgHarbourTable3CuboneWomanGuest_8:
# 1502 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_1
	goto PetalburgHarbourTable3CuboneWomanGuest_7

PetalburgHarbourTable3CuboneWomanGuest_11:
# 1510 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_2
# 1513 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 1514 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable3CuboneWomanGuest_16
PetalburgHarbourTable3CuboneWomanGuest_15:
# 1517 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable3CuboneWomanGuest_18
	goto PetalburgHarbourTable3CuboneWomanGuest_10

PetalburgHarbourTable3CuboneWomanGuest_13:
# 1525 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_5
# 1526 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreethirdcorrectbreakfast
# 1527 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreefourthcorrectbreakfast
	goto PetalburgHarbourTable3CuboneWomanGuest_4

PetalburgHarbourTable3CuboneWomanGuest_16:
# 1515 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_3
	goto PetalburgHarbourTable3CuboneWomanGuest_15

PetalburgHarbourTable3CuboneWomanGuest_18:
# 1518 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_4
	goto PetalburgHarbourTable3CuboneWomanGuest_10


PetalburgHarbourTable1Nosepass::
# 1538 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1539 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_NOSEPASS, CRY_MODE_NORMAL
# 1540 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1Nosepass_Text_0
# 1542 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return


PetalburgHarbourTable2Raticate::
# 1546 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1547 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, RebelHarborTouristAsksRebento_Movement_0
# 1549 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2Raticate_2
PetalburgHarbourTable2Raticate_1:
# 1557 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2Raticate_5
PetalburgHarbourTable2Raticate_4:
# 1566 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, PetalburgHarbourTable1YoungFatManGuest_Movement_0
# 1567 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 50
# 1568 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2Raticate_2:
# 1552 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_WEAK
# 1553 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2Raticate_Text_0
	goto PetalburgHarbourTable2Raticate_1

PetalburgHarbourTable2Raticate_5:
# 1561 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_HIGH_PITCH
# 1562 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2Raticate_Text_1
	goto PetalburgHarbourTable2Raticate_4


PetalburgHarbourTable3Cubone::
# 1572 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1573 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborTouristAsksRebento_Movement_0
# 1574 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 1576 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3Cubone_2
PetalburgHarbourTable3Cubone_1:
# 1582 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3Cubone_5
PetalburgHarbourTable3Cubone_4:
# 1588 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborTouristAsksRebento_Movement_1
# 1589 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Cubone_Text_2
# 1590 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3Cubone_2:
# 1578 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Cubone_Text_0
	goto PetalburgHarbourTable3Cubone_1

PetalburgHarbourTable3Cubone_5:
# 1586 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Cubone_Text_1
	goto PetalburgHarbourTable3Cubone_4


PetalburgHarbourTable3Trapinch::
# 1594 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 1595 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 35, RebelHarborTouristAsksRebento_Movement_0
# 1597 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3Trapinch_2
PetalburgHarbourTable3Trapinch_1:
# 1604 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3Trapinch_5
PetalburgHarbourTable3Trapinch_4:
# 1611 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 35, RebelHarborLoungeClerk_Movement_4
# 1612 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Trapinch_Text_2
# 1613 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3Trapinch_2:
# 1599 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_WEAK
# 1600 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Trapinch_Text_0
	goto PetalburgHarbourTable3Trapinch_1

PetalburgHarbourTable3Trapinch_5:
# 1608 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 1609 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Trapinch_Text_1
	goto PetalburgHarbourTable3Trapinch_4


trashscript::
# 1619 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox trashscript_Text_0
# 1623 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_PETALBURG_PHASE, 6
	goto_if_lt trashscript_2
trashscript_1:
# 1625 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_PETALBURG_PHASE, 6
	goto_if_eq trashscript_4
	return

trashscript_2:
# 1624 "data/maps/RebelHarbourLounge/scripts.pory"
	bufferstring STR_VAR_1, trashscript_Text_1
	goto trashscript_1

trashscript_4:
# 1626 "data/maps/RebelHarbourLounge/scripts.pory"
	bufferstring STR_VAR_1, trashscript_Text_2
	return


MyScript::
# 1632 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox MyScript_Text_0
# 1634 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_38, RebelHarborLoungeClerk_Text_19, RebelHarborLoungeClerk_Text_20, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35
# 1654 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyScript_1
	return

MyScript_1:
	return


# 70 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborTouristAsksRebento_Movement_0:
# 70 "data/maps/RebelHarbourLounge/scripts.pory"
	face_player
	step_end

# 75 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborTouristAsksRebento_Movement_1:
# 75 "data/maps/RebelHarbourLounge/scripts.pory"
	face_right
	step_end

# 214 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_0:
# 214 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 214 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 214 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 214 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
	step_end

# 271 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_1:
# 271 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 271 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 271 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 271 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 271 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 271 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
	step_end

# 451 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_2:
# 451 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 451 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 451 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 451 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 451 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 451 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
	step_end

# 625 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_3:
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
	step_end

# 666 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_4:
# 666 "data/maps/RebelHarbourLounge/scripts.pory"
	face_down
	step_end

# 679 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_5:
# 679 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 679 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 679 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 679 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
	step_end

# 692 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_6:
# 692 "data/maps/RebelHarbourLounge/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 919 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_7:
# 919 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 919 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 919 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 919 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
	step_end

# 924 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_8:
# 924 "data/maps/RebelHarbourLounge/scripts.pory"
	face_up
	step_end

# 1153 "data/maps/RebelHarbourLounge/scripts.pory"
PetalburgHarbourTable1YoungFatManGuest_Movement_0:
# 1153 "data/maps/RebelHarbourLounge/scripts.pory"
	face_left
	step_end

RebelHarborTouristAsksRebento_Text_0:
# 72 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "This is foreign discrimination, plain and\n"
	.string "simple!\p"
	.string "I've heard they sell a Rebel-themed\n"
	.string "lunch box here, called Rebento!\p"
	.string "But they won't sell it to me - surely\n"
	.string "because I'm a foreigner!$"

RebelHarborGuyCalmsTourist_Text_0:
# 82 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "SSSSH. You've got it all wrong pal.\n"
	.string "Believe me, you don't want one of those.\p"
	.string "Just get a Petalburguer and sit your\n"
	.string "fat arse down.$"

RebelHarborLoungeClerkOverCounter_Text_0:
# 92 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hey, don't invade my space! If you want\n"
	.string "to order, go over the counter.$"

RebelHarborLoungeClerk_Text_0:
# 108 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "What do you want?$"

RebelHarborLoungeClerk_Text_1:
# 112 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Order food$"

RebelHarborLoungeClerk_Text_2:
# 113 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Special order$"

RebelHarborLoungeClerk_Text_3:
# 114 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Part time job$"

RebelHarborLoungeClerk_Text_4:
# 115 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Leave$"

RebelHarborLoungeClerk_Text_5:
# 129 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You already worked here today. We're\n"
	.string "not hiring full-time, sorry!$"

RebelHarborLoungeClerk_Text_6:
# 140 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You come just in time. We could use a\n"
	.string "couple extra hands to serve breakfast.$"

RebelHarborLoungeClerk_Text_7:
# 147 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You come just in time. We could use a\n"
	.string "couple extra hands to serve lunch.$"

RebelHarborLoungeClerk_Text_8:
# 153 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We don't need any help on the evenings.\p"
	.string "But come back on the morning, midday or\n"
	.string "night, and we'll likely do.$"

RebelHarborLoungeClerk_Text_9:
# 161 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You come just in time. We could use a\n"
	.string "couple extra hands to serve dinner.$"

RebelHarborLoungeClerk_Text_10:
# 167 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "... well, one hand, in your case.$"

RebelHarborLoungeClerk_Text_11:
# 168 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "3000¥ per shift, with deductions if you\n"
	.string "mess up. You in?$"

RebelHarborLoungeClerk_Text_12:
# 171 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Sure$"

RebelHarborLoungeClerk_Text_13:
# 172 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "No thanks$"

RebelHarborLoungeClerk_Text_14:
# 175 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Too hard for you? They're also hiring on\n"
	.string "the cargo bay, if that's more your\l"
	.string "fancy.$"

RebelHarborLoungeClerk_Text_15:
# 181 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Great - go and get those orders then!$"

RebelHarborLoungeClerk_Text_16:
# 207 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "What are you waiting for? You haven't\n"
	.string "picked everyone's orders!$"

RebelHarborLoungeClerk_Text_17:
# 212 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Alright, let's go over the orders.$"

RebelHarborLoungeClerk_Text_18:
# 217 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "What does Table 1 want?$"

RebelHarborLoungeClerk_Text_19:
# 225 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Barboach Caviar$"

RebelHarborLoungeClerk_Text_20:
# 226 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Boiled Shellder$"

RebelHarborLoungeClerk_Text_21:
# 227 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Carvanha Fin Soup$"

RebelHarborLoungeClerk_Text_22:
# 228 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Corphish Legs$"

RebelHarborLoungeClerk_Text_23:
# 229 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Dried Feebas$"

RebelHarborLoungeClerk_Text_24:
# 230 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Magikarp Sushi$"

RebelHarborLoungeClerk_Text_25:
# 231 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Murkrow Egg$"

RebelHarborLoungeClerk_Text_26:
# 232 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Petalburger$"

RebelHarborLoungeClerk_Text_27:
# 233 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Octiyaki$"

RebelHarborLoungeClerk_Text_28:
# 234 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Slateport Pizza$"

RebelHarborLoungeClerk_Text_29:
# 235 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Sautéed Shiitako$"

RebelHarborLoungeClerk_Text_30:
# 236 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Seedot Nuts$"

RebelHarborLoungeClerk_Text_31:
# 237 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Shaved Aryscream$"

RebelHarborLoungeClerk_Text_32:
# 238 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Shuckle Juice$"

RebelHarborLoungeClerk_Text_33:
# 239 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Swablu Candy$"

RebelHarborLoungeClerk_Text_34:
# 240 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Swinub Bacon$"

RebelHarborLoungeClerk_Text_35:
# 241 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Wingull Wings$"

RebelHarborLoungeClerk_Text_36:
# 275 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Alright. What about Table 2?$"

RebelHarborLoungeClerk_Text_37:
# 364 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Anything else on Table 2?$"

RebelHarborLoungeClerk_Text_38:
# 369 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "No, nothing$"

RebelHarborLoungeClerk_Text_39:
# 455 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Alright. To finish up, tell me what Table\n"
	.string "3 has ordered.$"

RebelHarborLoungeClerk_Text_40:
# 540 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Anything else on Table 3?$"

RebelHarborLoungeClerk_Text_41:
# 561 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Swinub Ham$"

RebelHarborLoungeClerk_Text_42:
# 630 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Very well. I'll take this to the cook.\n"
	.string "Standby to deliver the orders!$"

RebelHarborLoungeClerk_Text_43:
# 674 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} has delivered the orders,\n"
	.string "and observes the guests' reaction...$"

RebelHarborLoungeClerk_Text_44:
# 703 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 1 does not seem very happy.$"

RebelHarborLoungeClerk_Text_45:
# 723 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 1 seems quite happy.$"

RebelHarborLoungeClerk_Text_46:
# 755 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 2 does not seem very happy.$"

RebelHarborLoungeClerk_Text_47:
# 783 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "There seems to have been a mistake in\n"
	.string "Table 2...$"

RebelHarborLoungeClerk_Text_48:
# 811 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 2 seems quite happy.$"

RebelHarborLoungeClerk_Text_49:
# 848 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 3 does not seem very happy.$"

RebelHarborLoungeClerk_Text_50:
# 881 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "There seems to have been a mistake in\n"
	.string "Table 3...$"

RebelHarborLoungeClerk_Text_51:
# 914 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 3 seems quite happy.$"

RebelHarborLoungeClerk_Text_52:
# 932 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "... you did not get a single order right.\n"
	.string "That's kind of impressive.$"

RebelHarborLoungeClerk_Text_53:
# 935 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "What's not impressive is your pay -\n"
	.string "500¥.$"

RebelHarborLoungeClerk_Text_54:
# 943 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "And be thankful it doesn't come with a\n"
	.string "Megakick as a tip.$"

RebelHarborLoungeClerk_Text_55:
# 949 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You got a single correct order right.\n"
	.string "Wonder if it was pure luck...$"

RebelHarborLoungeClerk_Text_56:
# 954 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Speaking of luck, you're lucky I'm even\n"
	.string "paying you these 1000¥.$"

RebelHarborLoungeClerk_Text_57:
# 963 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Now get out of my sight.$"

RebelHarborLoungeClerk_Text_58:
# 968 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You got only a couple orders right. Were\n"
	.string "you even paying attention?$"

RebelHarborLoungeClerk_Text_59:
# 971 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Well, here's all I can give you for your\n"
	.string "lousy work - 1500¥.$"

RebelHarborLoungeClerk_Text_60:
# 979 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If you think you can do better, you can\n"
	.string "come help again. See ya.$"

RebelHarborLoungeClerk_Text_61:
# 986 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You got two orders wrong... well. It's\n"
	.string "not like people expect much better in\l"
	.string "this joint.$"

RebelHarborLoungeClerk_Text_62:
# 989 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Still, I need to deduct 1000¥ from your\n"
	.string "pay. I don't make the rules.$"

RebelHarborLoungeClerk_Text_63:
# 997 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Could use you tomorrow too. Evenings\n"
	.string "aside, we're busy all the time.$"

RebelHarborLoungeClerk_Text_64:
# 1005 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You got one order wrong, but that's\n"
	.string "better than our average part-timer.$"

RebelHarborLoungeClerk_Text_65:
# 1013 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Good job today. If you need some quick\n"
	.string "cash again, come right back.$"

RebelHarborLoungeClerk_Text_66:
# 1020 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Wow, you got every order right. I'm\n"
	.string "impressed.$"

PetalburgHarbourTable1YoungFatManGuest_Text_0:
# 1119 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I still have room for a bit more...$"

PetalburgHarbourTable1YoungFatManGuest_Text_1:
# 1129 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I never get tired of the burgers here,\n"
	.string "but maybe I'll try something new\l"
	.string "today...$"

PetalburgHarbourTable1YoungFatManGuest_Text_2:
# 1140 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Are you deaf? I said I want a\n"
	.string "Petalburger! Come on, I'm starving here!$"

PetalburgHarbourTable1YoungFatManGuest_Text_3:
# 1145 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hmm... I'll have a Slateport Pizz-... nay,\n"
	.string "a Petalburger!$"

PetalburgHarbourTable1OldFatManGuest_Text_0:
# 1167 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm just waiting for Nosepass to finish\n"
	.string "eating now.\p"
	.string "One more floor tile ought to do it.$"

PetalburgHarbourTable1OldFatManGuest_Text_1:
# 1179 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Some people need to buy food for their\n"
	.string "Pokémon - but me?\p"
	.string "My Nosepass eats rocks and stuff like\n"
	.string "that. Talk about cost-effective!$"

PetalburgHarbourTable1OldFatManGuest_Text_2:
# 1189 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Still waiting for that bacon. Don't tell\n"
	.string "me you've ran out of it?$"

PetalburgHarbourTable1OldFatManGuest_Text_3:
# 1195 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have a ration of Swinub Bacon.$"

PetalburgHarbourTable2WageSlaveGuest_Text_0:
# 1217 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If only I could buy some dessert for\n"
	.string "her now...$"

PetalburgHarbourTable2WageSlaveGuest_Text_1:
# 1228 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I wish I could afford to take my\n"
	.string "daugther to a nicer place than this...\p"
	.string "But some people can't even afford this\n"
	.string "these days, so perhaps I should not\l"
	.string "complain.$"

PetalburgHarbourTable2WageSlaveGuest_Text_2:
# 1237 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Nothing else, only the Murkrow Egg. I'll\n"
	.string "share it with my daugther.$"

PetalburgHarbourTable2WageSlaveGuest_Text_3:
# 1242 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "A Murkrow Egg, sunny side up, please.$"

PetalburgHarbourTable2DaugtherGuest_Text_0:
# 1263 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Psst...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Don't tell daddy, but I'm eating slowly\n"
	.string "so we can be together longer.$"

PetalburgHarbourTable2DaugtherGuest_Text_1:
# 1271 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "When I'm a good girl, my daddy brings me\n"
	.string "here to have breakfast!\p"
	.string "But then he says he's not hungry, and I\n"
	.string "eat most of it.\p"
	.string "I think he's just picky!$"

PetalburgHarbourTable2DaugtherGuest_Text_2:
# 1291 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Sir, when is my Shuckle Juice coming?\n"
	.string "Are they asking the Shuckle for it now?$"

PetalburgHarbourTable2DaugtherGuest_Text_3:
# 1295 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Miss, when is my Shuckle Juice coming?\n"
	.string "Are they asking the Shuckle for it now?$"

PetalburgHarbourTable2DaugtherGuest_Text_4:
# 1302 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Daddy said I can have some Shuckle\n"
	.string "Juice with my egg! Can I?\p"
	.string "Do you ask the Shuckle nicely to give it\n"
	.string "to you?$"

PetalburgHarbourTable2DaugtherGuest_Text_5:
# 1306 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Yes$"

PetalburgHarbourTable2DaugtherGuest_Text_6:
# 1307 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "No$"

PetalburgHarbourTable2DaugtherGuest_Text_7:
# 1310 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "That's so cool! Maybe I'll ask my dad for\n"
	.string "a Shuckle for my birthday.$"

PetalburgHarbourTable2DaugtherGuest_Text_8:
# 1314 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Oh no, please don't be mean to the\n"
	.string "Shuckle! Don't steal its juice!$"

PetalburgHarbourTable2MercenaryMGuest_Text_0:
# 1337 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I tell you, you're bursting your ass for\n"
	.string "pennies working for that bitchy punk\l"
	.string "girl.\p"
	.string "You should become a freelancer. You own\n"
	.string "boss, your own rules - that's the way.$"

PetalburgHarbourTable2MercenaryMGuest_Text_1:
# 1349 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I swear, this fat rat of a Pokémon eats\n"
	.string "more every day. Gonna be my ruin.$"

PetalburgHarbourTable2MercenaryMGuest_Text_2:
# 1359 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Come on, your cook went to fish that\n"
	.string "Feebas to Fortree or what?\p"
	.string "And don't forget about the Wingull\n"
	.string "Wings for my Raticate.$"

PetalburgHarbourTable2MercenaryMGuest_Text_3:
# 1365 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Some Dried Feebas for me, and Wingull\n"
	.string "Wings for my Raticate.$"

PetalburgHarbourTable2MercenaryMGuest_Text_4:
# 1369 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Just dont' feed them to it. Might chomp\n"
	.string "your good leg off, hehe.$"

PetalburgHarbourTable2MercenaryMGuest_Text_5:
# 1372 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Just dont' feed them to it. Might chomp\n"
	.string "your good arm off, hehe.$"

PetalburgHarbourTable3BandagedManGuest_Text_0:
# 1394 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm stuffed... and it wasn't even good.\n"
	.string "Guess hunger is the best spice!$"

PetalburgHarbourTable3BandagedManGuest_Text_1:
# 1404 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm losing sight on my good eye... doctor\n"
	.string "Wally recommended I include fish on my\l"
	.string "diet, among other things.$"

PetalburgHarbourTable3BandagedManGuest_Text_2:
# 1409 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If you haven't already, go have him\n"
	.string "check your leg. You won't be worse off\l"
	.string "for it.$"

PetalburgHarbourTable3BandagedManGuest_Text_3:
# 1412 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If you haven't already, go have him\n"
	.string "check your arm. You won't be worse off\l"
	.string "for it.$"

PetalburgHarbourTable3BandagedManGuest_Text_4:
# 1424 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Feebas' uglyness is a self-defense\n"
	.string "mechanism - they look like they'd taste\l"
	.string "awful, so predators ignore them.\p"
	.string "But they are actually not that bad, if\n"
	.string "cleaned and seasoned properly.$"

PetalburgHarbourTable3BandagedManGuest_Text_5:
# 1431 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Dried Feebas, please.$"

PetalburgHarbourTable3TrapinchTechnicianGuest_Text_0:
# 1449 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "There goes a bit more of my dwindling\n"
	.string "savings... I really need to find a new\l"
	.string "job soon.\p"
	.string "Maybe I can part-time here like you!$"

PetalburgHarbourTable3TrapinchTechnicianGuest_Text_1:
# 1461 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Let's see... something cheap, filling,\n"
	.string "and that I can share with Trapinch...$"

PetalburgHarbourTable3TrapinchTechnicianGuest_Text_2:
# 1467 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I've read that some Trapinch cultivate\n"
	.string "fungi in their underground caverns.\p"
	.string "Perhaps that's why mine likes Sautéed\n"
	.string "Shiitako so much. Is it ready yet?$"

PetalburgHarbourTable3TrapinchTechnicianGuest_Text_3:
# 1473 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "A Sautéed Shiitako, for me and my\n"
	.string "Trapinch.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_0:
# 1492 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You did a good job. You should rest a\n"
	.string "little.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_1:
# 1502 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I met this Cubone the other day... it\n"
	.string "seems we both lost someone dear\l"
	.string "recently.\p"
	.string "I think it was fate that brought us\n"
	.string "together, so I'm taking care of him.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_2:
# 1510 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Have you forgotten? It's a Carvanha\n"
	.string "Fin Soup, and Seedot Nuts.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_3:
# 1515 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "It must be tough working with that leg.\n"
	.string "Please, don't hurry on my behalf.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_4:
# 1518 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "It must be tough working with that arm.\n"
	.string "Please, don't hurry on my behalf.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_5:
# 1525 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Carvanha Fin Soup, and\n"
	.string "Seedot Nuts for my Cubone.$"

PetalburgHarbourTable1Nosepass_Text_0:
# 1540 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Nnnoooss...\p"
	.string "The Nosepass is eating - snorting? -\n"
	.string "loose chunks of floor tiles through its\l"
	.string "nose.$"

PetalburgHarbourTable2Raticate_Text_0:
# 1553 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Munch munch...\p"
	.string "The Raticate is eating the last bits of\n"
	.string "meat off the bones.$"

PetalburgHarbourTable2Raticate_Text_1:
# 1562 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "GRRRR!\p"
	.string "This Raticate might bite someone if it's\n"
	.string "not fed soon...$"

PetalburgHarbourTable3Cubone_Text_0:
# 1578 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Yawn...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "The Cubone seems sleepy after eating.$"

PetalburgHarbourTable3Cubone_Text_1:
# 1586 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Booo...$"

PetalburgHarbourTable3Cubone_Text_2:
# 1589 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "The Cubone's belly rumbles can be heard\n"
	.string "from afar.$"

PetalburgHarbourTable3Trapinch_Text_0:
# 1600 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Trr...\p"
	.string "The Trapinch seems to be enjoying the\n"
	.string "aftertaste of the food.$"

PetalburgHarbourTable3Trapinch_Text_1:
# 1609 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Trrrr!$"

PetalburgHarbourTable3Trapinch_Text_2:
# 1612 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "The Trapinch looks at the empty bowl\n"
	.string "with anticipation.$"

trashscript_Text_0:
# 1619 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Some people left without paying today.\n"
	.string "And it's not coming out of my pocket.\p"
	.string "It's coming out of yours. (2000 is top\n"
	.string "pay, -500 for each wrongly served\l"
	.string "table.)$"

trashscript_Text_1:
# 1624 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "???$"

trashscript_Text_2:
# 1626 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Rebento$"

MyScript_Text_0:
# 1632 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "A long menu list is written on the board.$"
