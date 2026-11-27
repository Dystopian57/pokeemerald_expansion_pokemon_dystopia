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
# 12 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq RebelHarbourLoungeMapscriptBundle_2
RebelHarbourLoungeMapscriptBundle_1:
# 50 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq RebelHarbourLoungeMapscriptBundle_5
RebelHarbourLoungeMapscriptBundle_4:
# 88 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq RebelHarbourLoungeMapscriptBundle_11
RebelHarbourLoungeMapscriptBundle_10:
# 107 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq RebelHarbourLoungeMapscriptBundle_21
RebelHarbourLoungeMapscriptBundle_20:
# 146 "data/maps/RebelHarbourLounge/scripts.pory"
endofloungeguestpop:
# 147 "data/maps/RebelHarbourLounge/scripts.pory"
	goto DayNightNPC
	return

RebelHarbourLoungeMapscriptBundle_2:
# 13 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_NONE
# 17 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungebreakfastguestlotto, RebelHarbourLoungeMapscriptBundle_8
RebelHarbourLoungeMapscriptBundle_7:
# 46 "data/maps/RebelHarbourLounge/scripts.pory"
	goto endofloungeguestpop
	goto RebelHarbourLoungeMapscriptBundle_1

RebelHarbourLoungeMapscriptBundle_5:
# 51 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_NONE
# 55 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungelunchguestlotto, RebelHarbourLoungeMapscriptBundle_14
RebelHarbourLoungeMapscriptBundle_13:
# 84 "data/maps/RebelHarbourLounge/scripts.pory"
	goto endofloungeguestpop
	goto RebelHarbourLoungeMapscriptBundle_4

RebelHarbourLoungeMapscriptBundle_8:
# 18 "data/maps/RebelHarbourLounge/scripts.pory"
	random 2
# 19 "data/maps/RebelHarbourLounge/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 20 "data/maps/RebelHarbourLounge/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/RebelHarbourLounge/scripts.pory"
	case 0, RebelHarbourLoungeMapscriptBundle_18
# 31 "data/maps/RebelHarbourLounge/scripts.pory"
	case 1, RebelHarbourLoungeMapscriptBundle_19
RebelHarbourLoungeMapscriptBundle_16:
# 41 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborloungebreakfastguestlotto
# 42 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungelunchguestlotto
# 43 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungedinnerguestlotto
	goto RebelHarbourLoungeMapscriptBundle_7

RebelHarbourLoungeMapscriptBundle_11:
# 92 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfastone
# 93 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfasttwo
# 94 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtwo
# 95 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchone
# 96 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnerone
# 97 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertwo
# 99 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_NONE
# 101 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungebreakfastguestlotto
# 102 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungedinnerguestlotto
# 103 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungelunchguestlotto
	goto RebelHarbourLoungeMapscriptBundle_10

RebelHarbourLoungeMapscriptBundle_14:
# 56 "data/maps/RebelHarbourLounge/scripts.pory"
	random 2
# 57 "data/maps/RebelHarbourLounge/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 58 "data/maps/RebelHarbourLounge/scripts.pory"
	switch VAR_RESULT
# 60 "data/maps/RebelHarbourLounge/scripts.pory"
	case 0, RebelHarbourLoungeMapscriptBundle_25
# 69 "data/maps/RebelHarbourLounge/scripts.pory"
	case 1, RebelHarbourLoungeMapscriptBundle_26
RebelHarbourLoungeMapscriptBundle_23:
# 79 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborloungelunchguestlotto
# 80 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungebreakfastguestlotto
# 81 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungedinnerguestlotto
	goto RebelHarbourLoungeMapscriptBundle_13

RebelHarbourLoungeMapscriptBundle_18:
# 23 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborbreakfastone
# 25 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfasttwo
# 26 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchone
# 27 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtwo
# 28 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnerone
# 29 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertwo
	goto RebelHarbourLoungeMapscriptBundle_16

RebelHarbourLoungeMapscriptBundle_19:
# 32 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborbreakfasttwo
# 34 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfastone
# 35 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchone
# 36 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtwo
# 37 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnerone
# 38 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertwo
	goto RebelHarbourLoungeMapscriptBundle_16

RebelHarbourLoungeMapscriptBundle_21:
# 109 "data/maps/RebelHarbourLounge/scripts.pory"
	setweather WEATHER_SHADE
# 112 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungedinnerguestlotto, RebelHarbourLoungeMapscriptBundle_28
RebelHarbourLoungeMapscriptBundle_27:
# 142 "data/maps/RebelHarbourLounge/scripts.pory"
	goto endofloungeguestpop
	goto RebelHarbourLoungeMapscriptBundle_20

RebelHarbourLoungeMapscriptBundle_25:
# 61 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborlunchone
# 63 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfastone
# 64 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfasttwo
# 65 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtwo
# 66 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnerone
# 67 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertwo
	goto RebelHarbourLoungeMapscriptBundle_23

RebelHarbourLoungeMapscriptBundle_26:
# 70 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborlunchtwo
# 72 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfastone
# 73 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfasttwo
# 74 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchone
# 75 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnerone
# 76 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertwo
	goto RebelHarbourLoungeMapscriptBundle_23

RebelHarbourLoungeMapscriptBundle_28:
# 113 "data/maps/RebelHarbourLounge/scripts.pory"
	random 2
# 114 "data/maps/RebelHarbourLounge/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 115 "data/maps/RebelHarbourLounge/scripts.pory"
	switch VAR_RESULT
# 117 "data/maps/RebelHarbourLounge/scripts.pory"
	case 0, RebelHarbourLoungeMapscriptBundle_32
# 126 "data/maps/RebelHarbourLounge/scripts.pory"
	case 1, RebelHarbourLoungeMapscriptBundle_33
RebelHarbourLoungeMapscriptBundle_30:
# 137 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborloungedinnerguestlotto
# 138 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungebreakfastguestlotto
# 139 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungelunchguestlotto
	goto RebelHarbourLoungeMapscriptBundle_27

RebelHarbourLoungeMapscriptBundle_32:
# 118 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harbordinnerone
# 120 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfastone
# 121 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfasttwo
# 122 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchone
# 123 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtwo
# 124 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertwo
	goto RebelHarbourLoungeMapscriptBundle_30

RebelHarbourLoungeMapscriptBundle_33:
# 127 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harbordinnertwo
# 129 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfastone
# 130 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfasttwo
# 131 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchone
# 132 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtwo
# 133 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnerone
	goto RebelHarbourLoungeMapscriptBundle_30


RebelHarborTouristAsksRebento::
# 152 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 153 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 15, RebelHarborTouristAsksRebento_Movement_0
# 154 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 15
# 155 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborTouristAsksRebento_Text_0
# 158 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 15, RebelHarborTouristAsksRebento_Movement_1
# 159 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 15
# 160 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return


RebelHarborGuyCalmsTourist::
# 164 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 165 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborGuyCalmsTourist_Text_0
# 167 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return


RebelHarborLoungeClerkOverCounter::
# 172 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 173 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborTouristAsksRebento_Movement_0
# 174 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
# 175 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerkOverCounter_Text_0
# 176 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborTouristAsksRebento_Movement_1
# 177 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
# 178 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return


RebelHarborLoungeClerk::
# 182 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 184 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, RebelHarborLoungeClerk_2
RebelHarborLoungeClerk_1:
# 187 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, RebelHarborLoungeClerk_5
RebelHarborLoungeClerk_4:
# 190 "data/maps/RebelHarbourLounge/scripts.pory"
normalharborloungeclerkstart:
# 191 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_0
# 194 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_1, RebelHarborLoungeClerk_Text_2, RebelHarborLoungeClerk_Text_3, RebelHarborLoungeClerk_Text_4
# 200 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RebelHarborLoungeClerk_8
RebelHarborLoungeClerk_7:
# 204 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RebelHarborLoungeClerk_11
RebelHarborLoungeClerk_10:
# 206 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborLoungeClerk_14
RebelHarborLoungeClerk_13:
# 208 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RebelHarborLoungeClerk_17
RebelHarborLoungeClerk_16:
# 401 "data/maps/RebelHarbourLounge/scripts.pory"
questactiveharborloungeclerk:
# 402 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 0
	goto_if_eq RebelHarborLoungeClerk_20
RebelHarborLoungeClerk_19:
# 408 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 1
	goto_if_eq RebelHarborLoungeClerk_26
RebelHarborLoungeClerk_25:
# 2496 "data/maps/RebelHarbourLounge/scripts.pory"
rebelharborloungeclerkend:
# 2497 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

RebelHarborLoungeClerk_2:
# 185 "data/maps/RebelHarbourLounge/scripts.pory"
	goto normalharborloungeclerkstart
	goto RebelHarborLoungeClerk_1

RebelHarborLoungeClerk_5:
# 188 "data/maps/RebelHarbourLounge/scripts.pory"
	goto questactiveharborloungeclerk
	goto RebelHarborLoungeClerk_4

RebelHarborLoungeClerk_8:
# 201 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_7

RebelHarborLoungeClerk_11:
	goto RebelHarborLoungeClerk_10

RebelHarborLoungeClerk_14:
	goto RebelHarborLoungeClerk_13

RebelHarborLoungeClerk_17:
# 210 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, RebelHarborLoungeClerk_23
RebelHarborLoungeClerk_22:
# 216 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, RebelHarborLoungeClerk_28
	goto RebelHarborLoungeClerk_16

RebelHarborLoungeClerk_20:
# 404 "data/maps/RebelHarbourLounge/scripts.pory"
harborloungeclerkdemandsorders:
# 405 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_18
	goto RebelHarborLoungeClerk_19

RebelHarborLoungeClerk_23:
# 212 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_5
# 213 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_22

RebelHarborLoungeClerk_26:
# 409 "data/maps/RebelHarbourLounge/scripts.pory"
harborloungeclerkrevieworders:
# 410 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_19
# 411 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 412 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_5
# 413 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 414 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 415 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_20
# 419 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35, RebelHarborLoungeClerk_Text_36, RebelHarborLoungeClerk_Text_37
# 440 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set morningstartwaiterquest, RebelHarborLoungeClerk_31
RebelHarborLoungeClerk_30:
# 473 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set daystartwaiterquest, RebelHarborLoungeClerk_37
RebelHarborLoungeClerk_36:
# 508 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set nightstartwaiterquest, RebelHarborLoungeClerk_46
RebelHarborLoungeClerk_45:
# 541 "data/maps/RebelHarbourLounge/scripts.pory"
proceedtotable2:
# 542 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 543 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_6
# 544 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 545 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 547 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_38
# 550 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35, RebelHarborLoungeClerk_Text_36, RebelHarborLoungeClerk_Text_37
# 571 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set morningstartwaiterquest, RebelHarborLoungeClerk_61
RebelHarborLoungeClerk_60:
# 640 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set daystartwaiterquest, RebelHarborLoungeClerk_79
RebelHarborLoungeClerk_78:
# 711 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set nightstartwaiterquest, RebelHarborLoungeClerk_97
RebelHarborLoungeClerk_96:
# 780 "data/maps/RebelHarbourLounge/scripts.pory"
proceedtotable2seconchoice:
# 781 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_39
# 785 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_40, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35, RebelHarborLoungeClerk_Text_36, RebelHarborLoungeClerk_Text_37
# 806 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set morningstartwaiterquest, RebelHarborLoungeClerk_115
RebelHarborLoungeClerk_114:
# 875 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set daystartwaiterquest, RebelHarborLoungeClerk_136
RebelHarborLoungeClerk_135:
# 946 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set nightstartwaiterquest, RebelHarborLoungeClerk_163
RebelHarborLoungeClerk_162:
# 1014 "data/maps/RebelHarbourLounge/scripts.pory"
proceedtotable3:
# 1015 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 1016 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_7
# 1017 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1018 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 1020 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_41
# 1024 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35, RebelHarborLoungeClerk_Text_36, RebelHarborLoungeClerk_Text_37
# 1044 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set morningstartwaiterquest, RebelHarborLoungeClerk_196
RebelHarborLoungeClerk_195:
# 1110 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set daystartwaiterquest, RebelHarborLoungeClerk_229
RebelHarborLoungeClerk_228:
# 1179 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set nightstartwaiterquest, RebelHarborLoungeClerk_259
RebelHarborLoungeClerk_258:
# 1244 "data/maps/RebelHarbourLounge/scripts.pory"
proceedtotable3seconchoice:
# 1245 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_42
# 1249 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_40, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35, RebelHarborLoungeClerk_Text_43, RebelHarborLoungeClerk_Text_37
# 1271 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set morningstartwaiterquest, RebelHarborLoungeClerk_286
RebelHarborLoungeClerk_285:
# 1337 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set daystartwaiterquest, RebelHarborLoungeClerk_313
RebelHarborLoungeClerk_312:
# 1407 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set nightstartwaiterquest, RebelHarborLoungeClerk_340
RebelHarborLoungeClerk_339:
# 1473 "data/maps/RebelHarbourLounge/scripts.pory"
finishedwaiterorderrelay:
# 1474 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1475 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_8
# 1477 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1478 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 1486 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttakeaway, RebelHarborLoungeClerk_367
RebelHarborLoungeClerk_366:
# 1527 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtakeaway, RebelHarborLoungeClerk_394
RebelHarborLoungeClerk_393:
# 1568 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertakeaway, RebelHarborLoungeClerk_420
RebelHarborLoungeClerk_419:
# 1607 "data/maps/RebelHarbourLounge/scripts.pory"
finishedtakeaway:
# 1608 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_46
# 1612 "data/maps/RebelHarbourLounge/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1614 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttakeaway, RebelHarborLoungeClerk_443
RebelHarborLoungeClerk_442:
# 1619 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtakeaway, RebelHarborLoungeClerk_460
RebelHarborLoungeClerk_459:
# 1623 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertakeaway, RebelHarborLoungeClerk_469
RebelHarborLoungeClerk_468:
# 1656 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfasttakeaway
# 1657 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtakeaway
# 1658 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertakeaway
# 1660 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeoutbgm 1
# 1661 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeinbgm 1
# 1662 "data/maps/RebelHarbourLounge/scripts.pory"
	playbgm MUS_CONTEST_RESULTS, TRUE
# 1664 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborLoungeClerk_Movement_9
# 1666 "data/maps/RebelHarbourLounge/scripts.pory"
	hidefollower
# 1667 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 1671 "data/maps/RebelHarbourLounge/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1673 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_47
# 1675 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 1677 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 1678 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_10
# 1679 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1680 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 1686 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERFIRSTTABLESUCCESS, 0
	goto_if_eq RebelHarborLoungeClerk_472
RebelHarborLoungeClerk_471:
# 1738 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERFIRSTTABLESUCCESS, 1
	goto_if_eq RebelHarborLoungeClerk_475
RebelHarborLoungeClerk_474:
# 1791 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERSECONDTABLESUCCESS, 0
	goto_if_eq RebelHarborLoungeClerk_481
RebelHarborLoungeClerk_480:
# 1888 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERSECONDTABLESUCCESS, 1
	goto_if_eq RebelHarborLoungeClerk_490
RebelHarborLoungeClerk_489:
# 1965 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERSECONDTABLESUCCESS, 2
	goto_if_eq RebelHarborLoungeClerk_502
RebelHarborLoungeClerk_501:
# 2046 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERTHIRDTABLESUCCESS, 0
	goto_if_eq RebelHarborLoungeClerk_517
RebelHarborLoungeClerk_516:
# 2138 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERTHIRDTABLESUCCESS, 1
	goto_if_eq RebelHarborLoungeClerk_535
RebelHarborLoungeClerk_534:
# 2220 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERTHIRDTABLESUCCESS, 2
	goto_if_eq RebelHarborLoungeClerk_556
RebelHarborLoungeClerk_555:
# 2301 "data/maps/RebelHarbourLounge/scripts.pory"
	special SpawnCameraObject
# 2302 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RebelHarborLoungeClerk_Movement_14
# 2303 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 2304 "data/maps/RebelHarbourLounge/scripts.pory"
	special RemoveCameraObject
# 2307 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborLoungeClerk_Movement_15
# 2308 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, RebelHarborLoungeClerk_Movement_15
# 2309 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 2312 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set takeawaycorrectorder, RebelHarborLoungeClerk_577
RebelHarborLoungeClerk_576:
# 2317 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 1
	goto_if_eq RebelHarborLoungeClerk_598
RebelHarborLoungeClerk_597:
# 2334 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 2
	goto_if_eq RebelHarborLoungeClerk_619
RebelHarborLoungeClerk_618:
# 2353 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 3
	goto_if_eq RebelHarborLoungeClerk_636
RebelHarborLoungeClerk_635:
# 2371 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 4
	goto_if_eq RebelHarborLoungeClerk_648
RebelHarborLoungeClerk_647:
# 2389 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 5
	goto_if_eq RebelHarborLoungeClerk_660
RebelHarborLoungeClerk_659:
# 2406 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 6
	goto_if_eq RebelHarborLoungeClerk_666
RebelHarborLoungeClerk_665:
# 2430 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 7
	goto_if_eq RebelHarborLoungeClerk_669
RebelHarborLoungeClerk_668:
# 2450 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_WAITERQUEST, 8
	goto_if_eq RebelHarborLoungeClerk_675
RebelHarborLoungeClerk_674:
# 2454 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 2456 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungequestaccepted
# 2457 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag morningstartwaiterquest
# 2458 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag daystartwaiterquest
# 2459 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag nightstartwaiterquest
# 2460 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborloungequestdone
# 2461 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag takeawaytookorder
# 2462 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag takeawaycorrectorder
# 2465 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 0
# 2466 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERFIRSTTABLESUCCESS, 0
# 2467 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERSECONDTABLESUCCESS, 0
# 2468 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERTHIRDTABLESUCCESS, 0
# 2469 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERCANTLEAVE, 0
# 2471 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tableonefirstcorrectbreakfast
# 2472 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tableonesecondcorrectbreakfast
# 2474 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 2475 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 2476 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 2477 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 2479 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 2480 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 2481 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 2482 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 2484 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeoutbgm 1
# 2485 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeinbgm 1
# 2486 "data/maps/RebelHarbourLounge/scripts.pory"
	playbgm MUS_PIRATESGUIGE, TRUE
# 2488 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_25

RebelHarborLoungeClerk_28:
# 219 "data/maps/RebelHarbourLounge/scripts.pory"
	gettimeofday
# 220 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq RebelHarborLoungeClerk_34
RebelHarborLoungeClerk_33:
# 227 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq RebelHarborLoungeClerk_43
RebelHarborLoungeClerk_42:
# 234 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq RebelHarborLoungeClerk_58
RebelHarborLoungeClerk_57:
# 241 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq RebelHarborLoungeClerk_76
RebelHarborLoungeClerk_75:
# 248 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 249 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RebelHarborLoungeClerk_94
RebelHarborLoungeClerk_93:
# 251 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_11
# 253 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_12, RebelHarborLoungeClerk_Text_13
# 257 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborLoungeClerk_112
RebelHarborLoungeClerk_111:
# 263 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RebelHarborLoungeClerk_133
RebelHarborLoungeClerk_132:
# 395 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_16

RebelHarborLoungeClerk_31:
# 443 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RebelHarborLoungeClerk_40
RebelHarborLoungeClerk_39:
# 454 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq RebelHarborLoungeClerk_51
# 468 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_30

RebelHarborLoungeClerk_34:
# 222 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag morningstartwaiterquest
# 223 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_6
	goto RebelHarborLoungeClerk_33

RebelHarborLoungeClerk_37:
# 476 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RebelHarborLoungeClerk_49
RebelHarborLoungeClerk_48:
# 487 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq RebelHarborLoungeClerk_66
# 501 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_36

RebelHarborLoungeClerk_40:
# 445 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, RebelHarborLoungeClerk_54
# 451 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_39

RebelHarborLoungeClerk_43:
# 229 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag daystartwaiterquest
# 230 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_7
	goto RebelHarborLoungeClerk_42

RebelHarborLoungeClerk_46:
# 511 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RebelHarborLoungeClerk_64
RebelHarborLoungeClerk_63:
# 522 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RebelHarborLoungeClerk_84
# 536 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_45

RebelHarborLoungeClerk_49:
# 478 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, RebelHarborLoungeClerk_69
# 484 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_48

RebelHarborLoungeClerk_51:
# 457 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, RebelHarborLoungeClerk_72
# 463 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_30

RebelHarborLoungeClerk_54:
# 447 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 448 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERFIRSTTABLESUCCESS, + 1
	goto RebelHarborLoungeClerk_39

RebelHarborLoungeClerk_58:
# 236 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_8
# 238 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_57

RebelHarborLoungeClerk_61:
# 574 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RebelHarborLoungeClerk_82
RebelHarborLoungeClerk_81:
# 589 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq RebelHarborLoungeClerk_103
RebelHarborLoungeClerk_102:
# 605 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RebelHarborLoungeClerk_127
RebelHarborLoungeClerk_126:
# 619 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq RebelHarborLoungeClerk_153
# 634 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_60

RebelHarborLoungeClerk_64:
# 513 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, RebelHarborLoungeClerk_87
# 519 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_63

RebelHarborLoungeClerk_66:
# 490 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, RebelHarborLoungeClerk_90
# 496 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_36

RebelHarborLoungeClerk_69:
# 480 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 481 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERFIRSTTABLESUCCESS, + 1
	goto RebelHarborLoungeClerk_48

RebelHarborLoungeClerk_72:
# 459 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 460 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERFIRSTTABLESUCCESS, + 1
	goto RebelHarborLoungeClerk_30

RebelHarborLoungeClerk_76:
# 243 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag nightstartwaiterquest
# 244 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_9
	goto RebelHarborLoungeClerk_75

RebelHarborLoungeClerk_79:
# 643 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RebelHarborLoungeClerk_100
RebelHarborLoungeClerk_99:
# 658 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RebelHarborLoungeClerk_121
RebelHarborLoungeClerk_120:
# 674 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RebelHarborLoungeClerk_148
RebelHarborLoungeClerk_147:
# 688 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RebelHarborLoungeClerk_180
# 703 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_78

RebelHarborLoungeClerk_82:
# 576 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, RebelHarborLoungeClerk_105
# 584 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_81

RebelHarborLoungeClerk_84:
# 525 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, RebelHarborLoungeClerk_108
# 531 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2
	goto RebelHarborLoungeClerk_45

RebelHarborLoungeClerk_87:
# 515 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 516 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERFIRSTTABLESUCCESS, + 1
	goto RebelHarborLoungeClerk_63

RebelHarborLoungeClerk_90:
# 492 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 493 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERFIRSTTABLESUCCESS, + 1
	goto RebelHarborLoungeClerk_36

RebelHarborLoungeClerk_94:
# 250 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_10
	goto RebelHarborLoungeClerk_93

RebelHarborLoungeClerk_97:
# 714 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RebelHarborLoungeClerk_118
RebelHarborLoungeClerk_117:
# 729 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RebelHarborLoungeClerk_142
RebelHarborLoungeClerk_141:
# 745 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RebelHarborLoungeClerk_175
RebelHarborLoungeClerk_174:
# 759 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RebelHarborLoungeClerk_213
# 774 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_96

RebelHarborLoungeClerk_100:
# 645 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, RebelHarborLoungeClerk_123
# 653 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_99

RebelHarborLoungeClerk_103:
# 592 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, RebelHarborLoungeClerk_129
# 600 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_102

RebelHarborLoungeClerk_105:
# 578 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 579 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 580 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 581 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_81

RebelHarborLoungeClerk_108:
# 527 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 528 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERFIRSTTABLESUCCESS, + 1
	goto RebelHarborLoungeClerk_45

RebelHarborLoungeClerk_112:
# 258 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_14
# 260 "data/maps/RebelHarbourLounge/scripts.pory"
	goto rebelharborloungeclerkend
	goto RebelHarborLoungeClerk_111

RebelHarborLoungeClerk_115:
# 810 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq RebelHarborLoungeClerk_139
RebelHarborLoungeClerk_138:
# 824 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq RebelHarborLoungeClerk_169
RebelHarborLoungeClerk_168:
# 840 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RebelHarborLoungeClerk_208
RebelHarborLoungeClerk_207:
# 854 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq RebelHarborLoungeClerk_246
# 868 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_114

RebelHarborLoungeClerk_118:
# 716 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, RebelHarborLoungeClerk_144
# 724 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_117

RebelHarborLoungeClerk_121:
# 661 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, RebelHarborLoungeClerk_150
# 669 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_120

RebelHarborLoungeClerk_123:
# 647 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 648 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 649 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 650 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_99

RebelHarborLoungeClerk_127:
# 607 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, RebelHarborLoungeClerk_156
# 615 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_126

RebelHarborLoungeClerk_129:
# 594 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 595 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 596 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 597 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_102

RebelHarborLoungeClerk_133:
# 264 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_15
# 265 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERCANTLEAVE, 1
# 266 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 268 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborloungequestaccepted
# 274 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set morningstartwaiterquest, RebelHarborLoungeClerk_160
RebelHarborLoungeClerk_159:
# 314 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set daystartwaiterquest, RebelHarborLoungeClerk_190
RebelHarborLoungeClerk_189:
# 350 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set nightstartwaiterquest, RebelHarborLoungeClerk_223
RebelHarborLoungeClerk_222:
# 387 "data/maps/RebelHarbourLounge/scripts.pory"
notakeawaylotto:
# 388 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 389 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeoutbgm 1
# 390 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeinbgm 1
# 391 "data/maps/RebelHarbourLounge/scripts.pory"
	playbgm MUS_BUYSOMETHINGWILLYA, TRUE
	goto RebelHarborLoungeClerk_132

RebelHarborLoungeClerk_136:
# 878 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RebelHarborLoungeClerk_166
RebelHarborLoungeClerk_165:
# 893 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RebelHarborLoungeClerk_202
RebelHarborLoungeClerk_201:
# 909 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RebelHarborLoungeClerk_241
RebelHarborLoungeClerk_240:
# 923 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RebelHarborLoungeClerk_276
# 938 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_135

RebelHarborLoungeClerk_139:
# 812 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, RebelHarborLoungeClerk_171
# 820 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_138

RebelHarborLoungeClerk_142:
# 732 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, RebelHarborLoungeClerk_177
# 740 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_141

RebelHarborLoungeClerk_144:
# 718 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 719 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 720 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 721 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_117

RebelHarborLoungeClerk_148:
# 676 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, RebelHarborLoungeClerk_183
# 684 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_147

RebelHarborLoungeClerk_150:
# 663 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 664 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 665 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 666 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_120

RebelHarborLoungeClerk_153:
# 621 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, RebelHarborLoungeClerk_186
# 629 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_60

RebelHarborLoungeClerk_156:
# 609 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 610 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 611 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 612 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_126

RebelHarborLoungeClerk_160:
# 277 "data/maps/RebelHarbourLounge/scripts.pory"
	random 2
# 278 "data/maps/RebelHarbourLounge/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 280 "data/maps/RebelHarbourLounge/scripts.pory"
	switch VAR_RESULT
# 282 "data/maps/RebelHarbourLounge/scripts.pory"
	case 0, RebelHarborLoungeClerk_193
# 309 "data/maps/RebelHarbourLounge/scripts.pory"
	case 1, RebelHarborLoungeClerk_194
	goto RebelHarborLoungeClerk_159

RebelHarborLoungeClerk_163:
# 949 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RebelHarborLoungeClerk_199
RebelHarborLoungeClerk_198:
# 964 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RebelHarborLoungeClerk_235
RebelHarborLoungeClerk_234:
# 980 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq RebelHarborLoungeClerk_271
RebelHarborLoungeClerk_270:
# 994 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RebelHarborLoungeClerk_303
# 1009 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_162

RebelHarborLoungeClerk_166:
# 880 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, RebelHarborLoungeClerk_204
# 888 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_165

RebelHarborLoungeClerk_169:
# 827 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, RebelHarborLoungeClerk_210
# 835 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_168

RebelHarborLoungeClerk_171:
# 814 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 815 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 816 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 817 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_138

RebelHarborLoungeClerk_175:
# 747 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, RebelHarborLoungeClerk_216
# 755 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_174

RebelHarborLoungeClerk_177:
# 734 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 735 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 736 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 737 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_141

RebelHarborLoungeClerk_180:
# 690 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, RebelHarborLoungeClerk_219
# 698 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_78

RebelHarborLoungeClerk_183:
# 678 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 679 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 680 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 681 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_147

RebelHarborLoungeClerk_186:
# 623 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 624 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 625 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 626 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_60

RebelHarborLoungeClerk_190:
# 317 "data/maps/RebelHarbourLounge/scripts.pory"
	random 2
# 318 "data/maps/RebelHarbourLounge/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 320 "data/maps/RebelHarbourLounge/scripts.pory"
	switch VAR_RESULT
# 322 "data/maps/RebelHarbourLounge/scripts.pory"
	case 0, RebelHarborLoungeClerk_226
# 343 "data/maps/RebelHarbourLounge/scripts.pory"
	case 1, RebelHarborLoungeClerk_227
	goto RebelHarborLoungeClerk_189

RebelHarborLoungeClerk_193:
# 285 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborbreakfasttakeaway
# 286 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_DOOR
# 287 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 32
# 288 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 290 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_DOOR
# 291 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 33
# 292 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 294 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 32, RebelHarborLoungeClerk_Movement_0
# 295 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 33, RebelHarborLoungeClerk_Movement_1
# 296 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement
# 298 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborLoungeClerk_Movement_2
# 299 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborLoungeClerk_Movement_2
# 300 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
# 302 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_16
# 304 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 306 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborLoungeClerk_Movement_3
# 307 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
	goto RebelHarborLoungeClerk_159

RebelHarborLoungeClerk_194:
# 310 "data/maps/RebelHarbourLounge/scripts.pory"
	goto notakeawaylotto
	goto RebelHarborLoungeClerk_159

RebelHarborLoungeClerk_196:
# 1047 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RebelHarborLoungeClerk_232
RebelHarborLoungeClerk_231:
# 1061 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RebelHarborLoungeClerk_265
RebelHarborLoungeClerk_264:
# 1075 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RebelHarborLoungeClerk_298
RebelHarborLoungeClerk_297:
# 1089 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq RebelHarborLoungeClerk_330
# 1104 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_195

RebelHarborLoungeClerk_199:
# 951 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, RebelHarborLoungeClerk_237
# 959 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_198

RebelHarborLoungeClerk_202:
# 896 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, RebelHarborLoungeClerk_243
# 904 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_201

RebelHarborLoungeClerk_204:
# 882 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 883 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 884 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 885 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_165

RebelHarborLoungeClerk_208:
# 842 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, RebelHarborLoungeClerk_249
# 850 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_207

RebelHarborLoungeClerk_210:
# 829 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 830 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 831 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 832 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_168

RebelHarborLoungeClerk_213:
# 761 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, RebelHarborLoungeClerk_252
# 769 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_96

RebelHarborLoungeClerk_216:
# 749 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 750 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 751 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 752 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_174

RebelHarborLoungeClerk_219:
# 692 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 693 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 694 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 695 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_78

RebelHarborLoungeClerk_223:
# 353 "data/maps/RebelHarbourLounge/scripts.pory"
	random 2
# 354 "data/maps/RebelHarbourLounge/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 356 "data/maps/RebelHarbourLounge/scripts.pory"
	switch VAR_RESULT
# 358 "data/maps/RebelHarbourLounge/scripts.pory"
	case 0, RebelHarborLoungeClerk_256
# 383 "data/maps/RebelHarbourLounge/scripts.pory"
	case 1, RebelHarborLoungeClerk_257
	goto RebelHarborLoungeClerk_222

RebelHarborLoungeClerk_226:
# 323 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborlunchtakeaway
# 325 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_DOOR
# 326 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 47
# 327 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 329 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 47, RebelHarborLoungeClerk_Movement_4
# 330 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement
# 332 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborLoungeClerk_Movement_2
# 333 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborLoungeClerk_Movement_2
# 334 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
# 336 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_17
# 338 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 340 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborLoungeClerk_Movement_3
# 341 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
	goto RebelHarborLoungeClerk_189

RebelHarborLoungeClerk_227:
# 344 "data/maps/RebelHarbourLounge/scripts.pory"
	goto notakeawaylotto
	goto RebelHarborLoungeClerk_189

RebelHarborLoungeClerk_229:
# 1114 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_eq RebelHarborLoungeClerk_262
RebelHarborLoungeClerk_261:
# 1128 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq RebelHarborLoungeClerk_292
RebelHarborLoungeClerk_291:
# 1142 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq RebelHarborLoungeClerk_325
RebelHarborLoungeClerk_324:
# 1156 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq RebelHarborLoungeClerk_357
# 1171 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_228

RebelHarborLoungeClerk_232:
# 1049 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, RebelHarborLoungeClerk_267
# 1057 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_231

RebelHarborLoungeClerk_235:
# 967 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, RebelHarborLoungeClerk_273
# 975 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_234

RebelHarborLoungeClerk_237:
# 953 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 954 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 955 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 956 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_198

RebelHarborLoungeClerk_241:
# 911 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, RebelHarborLoungeClerk_279
# 919 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_240

RebelHarborLoungeClerk_243:
# 898 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 899 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 900 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 901 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_201

RebelHarborLoungeClerk_246:
# 856 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, RebelHarborLoungeClerk_282
# 864 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_114

RebelHarborLoungeClerk_249:
# 844 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 845 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 846 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 847 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_207

RebelHarborLoungeClerk_252:
# 763 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 764 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 765 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 766 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable2seconchoice
	goto RebelHarborLoungeClerk_96

RebelHarborLoungeClerk_256:
# 359 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harbordinnertakeaway
# 360 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_DOOR
# 361 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 31
# 362 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 364 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_DOOR
# 365 "data/maps/RebelHarbourLounge/scripts.pory"
	addobject 30
# 366 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 368 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 31, RebelHarborLoungeClerk_Movement_0
# 369 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 30, RebelHarborLoungeClerk_Movement_1
# 370 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement
# 372 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RebelHarborLoungeClerk_Movement_2
# 373 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborLoungeClerk_Movement_2
# 374 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
# 376 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_16
# 378 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 380 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborLoungeClerk_Movement_3
# 381 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 4
	goto RebelHarborLoungeClerk_222

RebelHarborLoungeClerk_257:
# 384 "data/maps/RebelHarbourLounge/scripts.pory"
	goto notakeawaylotto
	goto RebelHarborLoungeClerk_222

RebelHarborLoungeClerk_259:
# 1182 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq RebelHarborLoungeClerk_289
RebelHarborLoungeClerk_288:
# 1196 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_eq RebelHarborLoungeClerk_319
RebelHarborLoungeClerk_318:
# 1210 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq RebelHarborLoungeClerk_352
RebelHarborLoungeClerk_351:
# 1224 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq RebelHarborLoungeClerk_384
# 1239 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_258

RebelHarborLoungeClerk_262:
# 1116 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, RebelHarborLoungeClerk_294
# 1124 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_261

RebelHarborLoungeClerk_265:
# 1063 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, RebelHarborLoungeClerk_300
# 1071 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_264

RebelHarborLoungeClerk_267:
# 1051 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1052 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1053 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 1054 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_231

RebelHarborLoungeClerk_271:
# 982 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, RebelHarborLoungeClerk_306
# 990 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_270

RebelHarborLoungeClerk_273:
# 969 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 970 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 971 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 972 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_234

RebelHarborLoungeClerk_276:
# 925 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, RebelHarborLoungeClerk_309
# 933 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_135

RebelHarborLoungeClerk_279:
# 913 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 914 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 915 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 916 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_240

RebelHarborLoungeClerk_282:
# 858 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 859 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 860 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 861 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_114

RebelHarborLoungeClerk_286:
# 1274 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RebelHarborLoungeClerk_316
RebelHarborLoungeClerk_315:
# 1288 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq RebelHarborLoungeClerk_346
RebelHarborLoungeClerk_345:
# 1302 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RebelHarborLoungeClerk_379
RebelHarborLoungeClerk_378:
# 1316 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_eq RebelHarborLoungeClerk_410
# 1330 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_285

RebelHarborLoungeClerk_289:
# 1184 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, RebelHarborLoungeClerk_321
# 1192 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_288

RebelHarborLoungeClerk_292:
# 1130 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, RebelHarborLoungeClerk_327
# 1138 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_291

RebelHarborLoungeClerk_294:
# 1118 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1119 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1120 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 1121 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_261

RebelHarborLoungeClerk_298:
# 1077 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, RebelHarborLoungeClerk_333
# 1085 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_297

RebelHarborLoungeClerk_300:
# 1065 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1066 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1067 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 1068 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_264

RebelHarborLoungeClerk_303:
# 996 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, RebelHarborLoungeClerk_336
# 1004 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_162

RebelHarborLoungeClerk_306:
# 984 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 985 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 986 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 987 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_270

RebelHarborLoungeClerk_309:
# 927 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 928 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 929 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 930 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_135

RebelHarborLoungeClerk_313:
# 1341 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_eq RebelHarborLoungeClerk_343
RebelHarborLoungeClerk_342:
# 1355 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq RebelHarborLoungeClerk_373
RebelHarborLoungeClerk_372:
# 1370 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_eq RebelHarborLoungeClerk_405
RebelHarborLoungeClerk_404:
# 1384 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq RebelHarborLoungeClerk_433
# 1401 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_312

RebelHarborLoungeClerk_316:
# 1276 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, RebelHarborLoungeClerk_348
# 1284 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_315

RebelHarborLoungeClerk_319:
# 1198 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, RebelHarborLoungeClerk_354
# 1206 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_318

RebelHarborLoungeClerk_321:
# 1186 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1187 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1188 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 1189 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_288

RebelHarborLoungeClerk_325:
# 1144 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, RebelHarborLoungeClerk_360
# 1152 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_324

RebelHarborLoungeClerk_327:
# 1132 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1133 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1134 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 1135 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_291

RebelHarborLoungeClerk_330:
# 1091 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, RebelHarborLoungeClerk_363
# 1099 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_195

RebelHarborLoungeClerk_333:
# 1079 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1080 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1081 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 1082 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_297

RebelHarborLoungeClerk_336:
# 998 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 999 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERSECONDTABLESUCCESS, + 1
# 1000 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 1001 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3
	goto RebelHarborLoungeClerk_162

RebelHarborLoungeClerk_340:
# 1410 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RebelHarborLoungeClerk_370
RebelHarborLoungeClerk_369:
# 1424 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_eq RebelHarborLoungeClerk_399
RebelHarborLoungeClerk_398:
# 1438 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RebelHarborLoungeClerk_428
RebelHarborLoungeClerk_427:
# 1452 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq RebelHarborLoungeClerk_450
# 1467 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_339

RebelHarborLoungeClerk_343:
# 1343 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, RebelHarborLoungeClerk_375
# 1351 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_342

RebelHarborLoungeClerk_346:
# 1290 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, RebelHarborLoungeClerk_381
# 1298 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_345

RebelHarborLoungeClerk_348:
# 1278 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1279 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1280 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 1281 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_315

RebelHarborLoungeClerk_352:
# 1212 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, RebelHarborLoungeClerk_387
# 1220 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_351

RebelHarborLoungeClerk_354:
# 1200 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1201 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1202 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 1203 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_318

RebelHarborLoungeClerk_357:
# 1158 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, RebelHarborLoungeClerk_390
# 1166 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_228

RebelHarborLoungeClerk_360:
# 1146 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1147 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1148 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 1149 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_324

RebelHarborLoungeClerk_363:
# 1093 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1094 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1095 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 1096 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_195

RebelHarborLoungeClerk_367:
# 1489 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_44
# 1492 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35, RebelHarborLoungeClerk_Text_36, RebelHarborLoungeClerk_Text_37
# 1511 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_eq RebelHarborLoungeClerk_396
	goto RebelHarborLoungeClerk_366

RebelHarborLoungeClerk_370:
# 1412 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, RebelHarborLoungeClerk_401
# 1420 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_369

RebelHarborLoungeClerk_373:
# 1357 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, RebelHarborLoungeClerk_407
# 1365 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_372

RebelHarborLoungeClerk_375:
# 1345 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1346 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1347 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 1348 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_342

RebelHarborLoungeClerk_379:
# 1304 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, RebelHarborLoungeClerk_413
# 1312 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_378

RebelHarborLoungeClerk_381:
# 1292 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1293 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1294 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 1295 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_345

RebelHarborLoungeClerk_384:
# 1226 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, RebelHarborLoungeClerk_416
# 1234 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_258

RebelHarborLoungeClerk_387:
# 1214 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1215 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1216 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 1217 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_351

RebelHarborLoungeClerk_390:
# 1160 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1161 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1162 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 1163 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_228

RebelHarborLoungeClerk_394:
# 1530 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_45
# 1533 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35, RebelHarborLoungeClerk_Text_36, RebelHarborLoungeClerk_Text_37
# 1552 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq RebelHarborLoungeClerk_422
	goto RebelHarborLoungeClerk_393

RebelHarborLoungeClerk_396:
# 1513 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set takeawaycorrectorder, RebelHarborLoungeClerk_424
# 1519 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedtakeaway
	goto RebelHarborLoungeClerk_366

RebelHarborLoungeClerk_399:
# 1426 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, RebelHarborLoungeClerk_430
# 1434 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_398

RebelHarborLoungeClerk_401:
# 1414 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1415 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1416 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 1417 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_369

RebelHarborLoungeClerk_405:
# 1372 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, RebelHarborLoungeClerk_436
# 1380 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_404

RebelHarborLoungeClerk_407:
# 1359 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1360 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1361 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 1362 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_372

RebelHarborLoungeClerk_410:
# 1318 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, RebelHarborLoungeClerk_439
# 1326 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_285

RebelHarborLoungeClerk_413:
# 1306 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1307 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1308 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 1309 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_378

RebelHarborLoungeClerk_416:
# 1228 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1229 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1230 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 1231 "data/maps/RebelHarbourLounge/scripts.pory"
	goto proceedtotable3seconchoice
	goto RebelHarborLoungeClerk_258

RebelHarborLoungeClerk_420:
# 1571 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_44
# 1574 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35, RebelHarborLoungeClerk_Text_36, RebelHarborLoungeClerk_Text_37
# 1593 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq RebelHarborLoungeClerk_445
	goto RebelHarborLoungeClerk_419

RebelHarborLoungeClerk_422:
# 1554 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set takeawaycorrectorder, RebelHarborLoungeClerk_447
# 1560 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedtakeaway
	goto RebelHarborLoungeClerk_393

RebelHarborLoungeClerk_424:
# 1515 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1516 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedtakeaway
	goto RebelHarborLoungeClerk_366

RebelHarborLoungeClerk_428:
# 1440 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, RebelHarborLoungeClerk_453
# 1448 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_427

RebelHarborLoungeClerk_430:
# 1428 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1429 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1430 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 1431 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_398

RebelHarborLoungeClerk_433:
# 1386 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, RebelHarborLoungeClerk_456
# 1394 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_312

RebelHarborLoungeClerk_436:
# 1374 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1375 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1376 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 1377 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_404

RebelHarborLoungeClerk_439:
# 1320 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1321 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1322 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 1323 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_285

RebelHarborLoungeClerk_443:
# 1615 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborbreakfasttakeaway
# 1616 "data/maps/RebelHarbourLounge/scripts.pory"
	removeobject 32
# 1617 "data/maps/RebelHarbourLounge/scripts.pory"
	removeobject 33
	goto RebelHarborLoungeClerk_442

RebelHarborLoungeClerk_445:
# 1595 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set takeawaycorrectorder, RebelHarborLoungeClerk_462
# 1601 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedtakeaway
	goto RebelHarborLoungeClerk_419

RebelHarborLoungeClerk_447:
# 1556 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1557 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedtakeaway
	goto RebelHarborLoungeClerk_393

RebelHarborLoungeClerk_450:
# 1454 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, RebelHarborLoungeClerk_465
# 1462 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_339

RebelHarborLoungeClerk_453:
# 1442 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1443 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1444 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 1445 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_427

RebelHarborLoungeClerk_456:
# 1388 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1389 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1390 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 1391 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_312

RebelHarborLoungeClerk_460:
# 1620 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborlunchtakeaway
# 1621 "data/maps/RebelHarbourLounge/scripts.pory"
	removeobject 47
	goto RebelHarborLoungeClerk_459

RebelHarborLoungeClerk_462:
# 1597 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1598 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedtakeaway
	goto RebelHarborLoungeClerk_419

RebelHarborLoungeClerk_465:
# 1456 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
# 1457 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERTHIRDTABLESUCCESS, + 1
# 1458 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 1459 "data/maps/RebelHarbourLounge/scripts.pory"
	goto finishedwaiterorderrelay
	goto RebelHarborLoungeClerk_339

RebelHarborLoungeClerk_469:
# 1624 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harbordinnertakeaway
# 1625 "data/maps/RebelHarbourLounge/scripts.pory"
	removeobject 30
# 1626 "data/maps/RebelHarbourLounge/scripts.pory"
	removeobject 31
	goto RebelHarborLoungeClerk_468

RebelHarborLoungeClerk_472:
# 1689 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_478
RebelHarborLoungeClerk_477:
# 1696 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, RebelHarborLoungeClerk_487
RebelHarborLoungeClerk_486:
# 1703 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnerone, RebelHarborLoungeClerk_499
RebelHarborLoungeClerk_498:
# 1710 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_514
RebelHarborLoungeClerk_513:
# 1717 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, RebelHarborLoungeClerk_532
RebelHarborLoungeClerk_531:
# 1724 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertwo, RebelHarborLoungeClerk_553
RebelHarborLoungeClerk_552:
# 1731 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_48
# 1732 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
	goto RebelHarborLoungeClerk_471

RebelHarborLoungeClerk_475:
# 1740 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_484
RebelHarborLoungeClerk_483:
# 1747 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, RebelHarborLoungeClerk_496
RebelHarborLoungeClerk_495:
# 1754 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnerone, RebelHarborLoungeClerk_511
RebelHarborLoungeClerk_510:
# 1761 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_529
RebelHarborLoungeClerk_528:
# 1768 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, RebelHarborLoungeClerk_550
RebelHarborLoungeClerk_549:
# 1775 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertwo, RebelHarborLoungeClerk_574
RebelHarborLoungeClerk_573:
# 1782 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_49
# 1783 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
	goto RebelHarborLoungeClerk_474

RebelHarborLoungeClerk_478:
# 1691 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1692 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 7, RebelHarborLoungeClerk_Movement_11
# 1693 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 7
	goto RebelHarborLoungeClerk_477

RebelHarborLoungeClerk_481:
# 1794 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_493
RebelHarborLoungeClerk_492:
# 1805 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_508
RebelHarborLoungeClerk_507:
# 1818 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, RebelHarborLoungeClerk_526
RebelHarborLoungeClerk_525:
# 1829 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, RebelHarborLoungeClerk_547
RebelHarborLoungeClerk_546:
# 1844 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnerone, RebelHarborLoungeClerk_571
RebelHarborLoungeClerk_570:
# 1855 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertwo, RebelHarborLoungeClerk_595
RebelHarborLoungeClerk_594:
# 1866 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_50
# 1867 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 1870 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, RebelHarborLoungeClerk_616
RebelHarborLoungeClerk_615:
# 1877 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_633
	goto RebelHarborLoungeClerk_480

RebelHarborLoungeClerk_484:
# 1742 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1743 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 7, RebelHarborLoungeClerk_Movement_12
# 1744 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 7
	goto RebelHarborLoungeClerk_483

RebelHarborLoungeClerk_487:
# 1698 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1699 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 15, RebelHarborLoungeClerk_Movement_11
# 1700 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 15
	goto RebelHarborLoungeClerk_486

RebelHarborLoungeClerk_490:
# 1891 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_505
RebelHarborLoungeClerk_504:
# 1902 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_523
RebelHarborLoungeClerk_522:
# 1914 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, RebelHarborLoungeClerk_544
RebelHarborLoungeClerk_543:
# 1925 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, RebelHarborLoungeClerk_568
RebelHarborLoungeClerk_567:
# 1938 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnerone, RebelHarborLoungeClerk_592
RebelHarborLoungeClerk_591:
# 1949 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertwo, RebelHarborLoungeClerk_613
RebelHarborLoungeClerk_612:
# 1960 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_53
# 1961 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
	goto RebelHarborLoungeClerk_489

RebelHarborLoungeClerk_493:
# 1796 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1797 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_11
# 1798 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 1800 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1801 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborLoungeClerk_Movement_11
# 1802 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 19
	goto RebelHarborLoungeClerk_492

RebelHarborLoungeClerk_496:
# 1749 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1750 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 15, RebelHarborLoungeClerk_Movement_12
# 1751 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 15
	goto RebelHarborLoungeClerk_495

RebelHarborLoungeClerk_499:
# 1705 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1706 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 28, RebelHarborLoungeClerk_Movement_11
# 1707 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 28
	goto RebelHarborLoungeClerk_498

RebelHarborLoungeClerk_502:
# 1968 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_520
RebelHarborLoungeClerk_519:
# 1979 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_541
RebelHarborLoungeClerk_540:
# 1991 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, RebelHarborLoungeClerk_565
RebelHarborLoungeClerk_564:
# 2002 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, RebelHarborLoungeClerk_589
RebelHarborLoungeClerk_588:
# 2015 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnerone, RebelHarborLoungeClerk_610
RebelHarborLoungeClerk_609:
# 2026 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertwo, RebelHarborLoungeClerk_631
RebelHarborLoungeClerk_630:
# 2037 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_54
# 2038 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
	goto RebelHarborLoungeClerk_501

RebelHarborLoungeClerk_505:
# 1893 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1894 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_13
# 1895 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 1897 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1898 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborLoungeClerk_Movement_13
# 1899 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 19
	goto RebelHarborLoungeClerk_504

RebelHarborLoungeClerk_508:
# 1807 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1808 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborLoungeClerk_Movement_11
# 1809 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 49
# 1811 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1812 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, RebelHarborLoungeClerk_Movement_11
# 1813 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 50
	goto RebelHarborLoungeClerk_507

RebelHarborLoungeClerk_511:
# 1756 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1757 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 28, RebelHarborLoungeClerk_Movement_12
# 1758 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 28
	goto RebelHarborLoungeClerk_510

RebelHarborLoungeClerk_514:
# 1712 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1713 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 29, RebelHarborLoungeClerk_Movement_11
# 1714 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 29
	goto RebelHarborLoungeClerk_513

RebelHarborLoungeClerk_517:
# 2049 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_538
RebelHarborLoungeClerk_537:
# 2064 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_562
RebelHarborLoungeClerk_561:
# 2077 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, RebelHarborLoungeClerk_586
RebelHarborLoungeClerk_585:
# 2085 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, RebelHarborLoungeClerk_607
RebelHarborLoungeClerk_606:
# 2099 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnerone, RebelHarborLoungeClerk_628
RebelHarborLoungeClerk_627:
# 2112 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertwo, RebelHarborLoungeClerk_645
RebelHarborLoungeClerk_644:
# 2124 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_55
# 2126 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, RebelHarborLoungeClerk_657
RebelHarborLoungeClerk_656:
# 2134 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
	goto RebelHarborLoungeClerk_516

RebelHarborLoungeClerk_520:
# 1970 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1971 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_12
# 1972 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 1974 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1975 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborLoungeClerk_Movement_12
# 1976 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 19
	goto RebelHarborLoungeClerk_519

RebelHarborLoungeClerk_523:
# 1904 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1905 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborLoungeClerk_Movement_13
# 1906 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 49
# 1908 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1909 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, RebelHarborLoungeClerk_Movement_13
# 1910 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 50
	goto RebelHarborLoungeClerk_522

RebelHarborLoungeClerk_526:
# 1820 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1821 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_11
# 1822 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 1824 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1825 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborLoungeClerk_Movement_11
# 1826 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 19
	goto RebelHarborLoungeClerk_525

RebelHarborLoungeClerk_529:
# 1763 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1764 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 29, RebelHarborLoungeClerk_Movement_12
# 1765 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 29
	goto RebelHarborLoungeClerk_528

RebelHarborLoungeClerk_532:
# 1719 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1720 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 27, RebelHarborLoungeClerk_Movement_11
# 1721 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 27
	goto RebelHarborLoungeClerk_531

RebelHarborLoungeClerk_535:
# 2141 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_559
RebelHarborLoungeClerk_558:
# 2156 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_583
RebelHarborLoungeClerk_582:
# 2168 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, RebelHarborLoungeClerk_604
RebelHarborLoungeClerk_603:
# 2176 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, RebelHarborLoungeClerk_625
RebelHarborLoungeClerk_624:
# 2190 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnerone, RebelHarborLoungeClerk_642
RebelHarborLoungeClerk_641:
# 2203 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertwo, RebelHarborLoungeClerk_654
RebelHarborLoungeClerk_653:
# 2215 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_57
# 2216 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
	goto RebelHarborLoungeClerk_534

RebelHarborLoungeClerk_538:
# 2051 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2052 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborLoungeClerk_Movement_11
# 2053 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 36
# 2055 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2056 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborLoungeClerk_Movement_11
# 2057 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 34
# 2059 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2060 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_11
# 2061 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_537

RebelHarborLoungeClerk_541:
# 1981 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1982 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborLoungeClerk_Movement_12
# 1983 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 49
# 1985 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1986 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, RebelHarborLoungeClerk_Movement_12
# 1987 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 50
	goto RebelHarborLoungeClerk_540

RebelHarborLoungeClerk_544:
# 1916 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1917 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 23, RebelHarborLoungeClerk_Movement_13
# 1918 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 23
# 1920 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1921 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 24, RebelHarborLoungeClerk_Movement_13
# 1922 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 24
	goto RebelHarborLoungeClerk_543

RebelHarborLoungeClerk_547:
# 1831 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1832 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 23, RebelHarborLoungeClerk_Movement_11
# 1833 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 23
# 1835 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1836 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 24, RebelHarborLoungeClerk_Movement_11
# 1837 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 24
	goto RebelHarborLoungeClerk_546

RebelHarborLoungeClerk_550:
# 1770 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1771 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 27, RebelHarborLoungeClerk_Movement_12
# 1772 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 27
	goto RebelHarborLoungeClerk_549

RebelHarborLoungeClerk_553:
# 1726 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1727 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 6, RebelHarborLoungeClerk_Movement_11
# 1728 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 6
	goto RebelHarborLoungeClerk_552

RebelHarborLoungeClerk_556:
# 2223 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, RebelHarborLoungeClerk_580
RebelHarborLoungeClerk_579:
# 2238 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, RebelHarborLoungeClerk_601
RebelHarborLoungeClerk_600:
# 2250 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, RebelHarborLoungeClerk_622
RebelHarborLoungeClerk_621:
# 2257 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, RebelHarborLoungeClerk_639
RebelHarborLoungeClerk_638:
# 2270 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnerone, RebelHarborLoungeClerk_651
RebelHarborLoungeClerk_650:
# 2283 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertwo, RebelHarborLoungeClerk_663
RebelHarborLoungeClerk_662:
# 2295 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_58
# 2296 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
	goto RebelHarborLoungeClerk_555

RebelHarborLoungeClerk_559:
# 2143 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2144 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborLoungeClerk_Movement_13
# 2145 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 36
# 2147 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2148 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborLoungeClerk_Movement_13
# 2149 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 34
# 2151 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2152 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_13
# 2153 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_558

RebelHarborLoungeClerk_562:
# 2066 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2067 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborLoungeClerk_Movement_11
# 2068 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 46
# 2070 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2071 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_11
# 2072 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_561

RebelHarborLoungeClerk_565:
# 1993 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1994 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 23, RebelHarborLoungeClerk_Movement_12
# 1995 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 23
# 1997 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1998 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 24, RebelHarborLoungeClerk_Movement_12
# 1999 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 24
	goto RebelHarborLoungeClerk_564

RebelHarborLoungeClerk_568:
# 1927 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1928 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 48, RebelHarborLoungeClerk_Movement_13
# 1929 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 48
# 1931 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1932 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 51, RebelHarborLoungeClerk_Movement_13
# 1933 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 51
	goto RebelHarborLoungeClerk_567

RebelHarborLoungeClerk_571:
# 1846 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1847 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 16, RebelHarborLoungeClerk_Movement_11
# 1848 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 16
# 1850 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1851 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 20, RebelHarborLoungeClerk_Movement_11
# 1852 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 20
	goto RebelHarborLoungeClerk_570

RebelHarborLoungeClerk_574:
# 1777 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 1778 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 6, RebelHarborLoungeClerk_Movement_12
# 1779 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 6
	goto RebelHarborLoungeClerk_573

RebelHarborLoungeClerk_577:
# 2314 "data/maps/RebelHarbourLounge/scripts.pory"
	addvar VAR_WAITERQUEST, + 1
	goto RebelHarborLoungeClerk_576

RebelHarborLoungeClerk_580:
# 2225 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2226 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborLoungeClerk_Movement_12
# 2227 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 36
# 2229 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2230 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborLoungeClerk_Movement_12
# 2231 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 34
# 2233 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2234 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_12
# 2235 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_579

RebelHarborLoungeClerk_583:
# 2158 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2159 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborLoungeClerk_Movement_13
# 2160 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 46
# 2162 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2163 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_13
# 2164 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_582

RebelHarborLoungeClerk_586:
# 2079 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2080 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 56, RebelHarborLoungeClerk_Movement_11
# 2081 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 56
	goto RebelHarborLoungeClerk_585

RebelHarborLoungeClerk_589:
# 2004 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2005 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 48, RebelHarborLoungeClerk_Movement_12
# 2006 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 48
# 2008 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2009 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 51, RebelHarborLoungeClerk_Movement_12
# 2010 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 51
	goto RebelHarborLoungeClerk_588

RebelHarborLoungeClerk_592:
# 1940 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1941 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 16, RebelHarborLoungeClerk_Movement_13
# 1942 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 16
# 1944 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1945 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 20, RebelHarborLoungeClerk_Movement_13
# 1946 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 20
	goto RebelHarborLoungeClerk_591

RebelHarborLoungeClerk_595:
# 1857 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1858 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 25, RebelHarborLoungeClerk_Movement_11
# 1859 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 25
# 1861 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 1862 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 26, RebelHarborLoungeClerk_Movement_11
# 1863 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 26
	goto RebelHarborLoungeClerk_594

RebelHarborLoungeClerk_598:
# 2319 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_59
# 2321 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 2322 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_60
# 2324 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 500
# 2325 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 2326 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 2327 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 2328 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 2330 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_61
	goto RebelHarborLoungeClerk_597

RebelHarborLoungeClerk_601:
# 2240 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2241 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborLoungeClerk_Movement_12
# 2242 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 46
# 2244 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2245 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborLoungeClerk_Movement_12
# 2246 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 54
	goto RebelHarborLoungeClerk_600

RebelHarborLoungeClerk_604:
# 2170 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2171 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 56, RebelHarborLoungeClerk_Movement_13
# 2172 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 56
	goto RebelHarborLoungeClerk_603

RebelHarborLoungeClerk_607:
# 2087 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2088 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 52, RebelHarborLoungeClerk_Movement_11
# 2089 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 52
# 2091 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2092 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 53, RebelHarborLoungeClerk_Movement_11
# 2093 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 53
	goto RebelHarborLoungeClerk_606

RebelHarborLoungeClerk_610:
# 2017 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2018 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 16, RebelHarborLoungeClerk_Movement_12
# 2019 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 16
# 2021 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2022 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 20, RebelHarborLoungeClerk_Movement_12
# 2023 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 20
	goto RebelHarborLoungeClerk_609

RebelHarborLoungeClerk_613:
# 1951 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1952 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 21, RebelHarborLoungeClerk_Movement_13
# 1953 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 21
# 1955 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 1956 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, RebelHarborLoungeClerk_Movement_13
# 1957 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 22
	goto RebelHarborLoungeClerk_612

RebelHarborLoungeClerk_616:
# 1872 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 23, RebelHarborLoungeClerk_Movement_2
# 1873 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 23
# 1874 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_51
	goto RebelHarborLoungeClerk_615

RebelHarborLoungeClerk_619:
# 2336 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_62
# 2339 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 2341 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_63
# 2344 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 1000
# 2345 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 2346 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 2347 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 2348 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 2350 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_64
	goto RebelHarborLoungeClerk_618

RebelHarborLoungeClerk_622:
# 2252 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2253 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 56, RebelHarborLoungeClerk_Movement_12
# 2254 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 56
	goto RebelHarborLoungeClerk_621

RebelHarborLoungeClerk_625:
# 2178 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2179 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 52, RebelHarborLoungeClerk_Movement_13
# 2180 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 52
# 2182 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2183 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 53, RebelHarborLoungeClerk_Movement_13
# 2184 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 53
	goto RebelHarborLoungeClerk_624

RebelHarborLoungeClerk_628:
# 2101 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2102 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 5, RebelHarborLoungeClerk_Movement_11
# 2103 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 5
# 2105 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2106 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 55, RebelHarborLoungeClerk_Movement_11
# 2107 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 55
	goto RebelHarborLoungeClerk_627

RebelHarborLoungeClerk_631:
# 2028 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2029 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 25, RebelHarborLoungeClerk_Movement_12
# 2030 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 25
# 2032 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2033 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 26, RebelHarborLoungeClerk_Movement_12
# 2034 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 26
	goto RebelHarborLoungeClerk_630

RebelHarborLoungeClerk_633:
# 1879 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_3
# 1880 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 1881 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_52
	goto RebelHarborLoungeClerk_480

RebelHarborLoungeClerk_636:
# 2355 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_65
# 2357 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 2358 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_66
# 2360 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 1500
# 2361 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 2362 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 2363 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 2364 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 2366 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_67
	goto RebelHarborLoungeClerk_635

RebelHarborLoungeClerk_639:
# 2259 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2260 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 52, RebelHarborLoungeClerk_Movement_12
# 2261 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 52
# 2263 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2264 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 53, RebelHarborLoungeClerk_Movement_12
# 2265 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 53
	goto RebelHarborLoungeClerk_638

RebelHarborLoungeClerk_642:
# 2192 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2193 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 5, RebelHarborLoungeClerk_Movement_13
# 2194 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 5
# 2196 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2197 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 55, RebelHarborLoungeClerk_Movement_13
# 2198 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 55
	goto RebelHarborLoungeClerk_641

RebelHarborLoungeClerk_645:
# 2114 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2115 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, RebelHarborLoungeClerk_Movement_11
# 2116 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 22
# 2118 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_SWAGGER2
# 2119 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 21, RebelHarborLoungeClerk_Movement_11
# 2120 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 21
	goto RebelHarborLoungeClerk_644

RebelHarborLoungeClerk_648:
# 2373 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_68
# 2375 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 2376 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_69
# 2378 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 2000
# 2379 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 2380 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 2381 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 2382 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 2384 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_70
	goto RebelHarborLoungeClerk_647

RebelHarborLoungeClerk_651:
# 2272 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2273 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 5, RebelHarborLoungeClerk_Movement_12
# 2274 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 5
# 2276 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2277 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 55, RebelHarborLoungeClerk_Movement_12
# 2278 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 55
	goto RebelHarborLoungeClerk_650

RebelHarborLoungeClerk_654:
# 2205 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2206 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, RebelHarborLoungeClerk_Movement_13
# 2207 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 21
# 2209 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_METRONOME
# 2210 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, RebelHarborLoungeClerk_Movement_13
# 2211 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 21
	goto RebelHarborLoungeClerk_653

RebelHarborLoungeClerk_657:
# 2128 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 52, RebelHarborLoungeClerk_Movement_2
# 2129 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 52
# 2130 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_56
	goto RebelHarborLoungeClerk_656

RebelHarborLoungeClerk_660:
# 2391 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 2392 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_71
# 2394 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 2500
# 2395 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 2396 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 2397 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 2398 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 2400 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_72
	goto RebelHarborLoungeClerk_659

RebelHarborLoungeClerk_663:
# 2285 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2286 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, RebelHarborLoungeClerk_Movement_12
# 2287 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 21
# 2289 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_ATTRACT
# 2290 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, RebelHarborLoungeClerk_Movement_12
# 2291 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 21
	goto RebelHarborLoungeClerk_662

RebelHarborLoungeClerk_666:
# 2408 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_73
# 2410 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 2411 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 2412 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RebelHarborLoungeClerk_672
RebelHarborLoungeClerk_671:
# 2416 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RebelHarborLoungeClerk_678
RebelHarborLoungeClerk_677:
# 2420 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 3000
# 2421 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 2422 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 2423 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 2424 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 2426 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_76
	goto RebelHarborLoungeClerk_665

RebelHarborLoungeClerk_669:
# 2432 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_77
# 2435 "data/maps/RebelHarbourLounge/scripts.pory"
	showmoneybox 18, 0
# 2437 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_78
# 2440 "data/maps/RebelHarbourLounge/scripts.pory"
	addmoney 3500
# 2441 "data/maps/RebelHarbourLounge/scripts.pory"
	updatemoneybox
# 2442 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_RG_SHOP
# 2443 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 2444 "data/maps/RebelHarbourLounge/scripts.pory"
	hidemoneybox
# 2446 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_76
	goto RebelHarborLoungeClerk_668

RebelHarborLoungeClerk_672:
# 2413 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_74
	goto RebelHarborLoungeClerk_671

RebelHarborLoungeClerk_675:
# 2452 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_79
	goto RebelHarborLoungeClerk_674

RebelHarborLoungeClerk_678:
# 2417 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox RebelHarborLoungeClerk_Text_75
	goto RebelHarborLoungeClerk_677


PetalburgHarbourOrderChecker::
# 2508 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfastone, PetalburgHarbourOrderChecker_2
# 2509 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchone, PetalburgHarbourOrderChecker_2
# 2510 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnerone, PetalburgHarbourOrderChecker_2
PetalburgHarbourOrderChecker_1:
# 2541 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttwo, PetalburgHarbourOrderChecker_9
# 2542 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtwo, PetalburgHarbourOrderChecker_9
# 2543 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertwo, PetalburgHarbourOrderChecker_9
PetalburgHarbourOrderChecker_8:
# 2574 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourOrderChecker_2:
# 2514 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, PetalburgHarbourOrderChecker_17
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_9:
# 2546 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, PetalburgHarbourOrderChecker_27
	goto PetalburgHarbourOrderChecker_8

PetalburgHarbourOrderChecker_15:
# 2522 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborbreakfasttakeaway, PetalburgHarbourOrderChecker_38
PetalburgHarbourOrderChecker_35:
# 2529 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttakeaway, PetalburgHarbourOrderChecker_49
# 2530 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtakeaway, PetalburgHarbourOrderChecker_49
# 2531 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertakeaway, PetalburgHarbourOrderChecker_54
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_16:
# 2516 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, PetalburgHarbourOrderChecker_21
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_17:
# 2515 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, PetalburgHarbourOrderChecker_16
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_20:
# 2518 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, PetalburgHarbourOrderChecker_15
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_21:
# 2517 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, PetalburgHarbourOrderChecker_20
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_25:
# 2554 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborbreakfasttakeaway, PetalburgHarbourOrderChecker_45
PetalburgHarbourOrderChecker_42:
# 2561 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborbreakfasttakeaway, PetalburgHarbourOrderChecker_57
# 2562 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborlunchtakeaway, PetalburgHarbourOrderChecker_57
# 2563 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harbordinnertakeaway, PetalburgHarbourOrderChecker_62
	goto PetalburgHarbourOrderChecker_8

PetalburgHarbourOrderChecker_26:
# 2548 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, PetalburgHarbourOrderChecker_31
	goto PetalburgHarbourOrderChecker_8

PetalburgHarbourOrderChecker_27:
# 2547 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, PetalburgHarbourOrderChecker_26
	goto PetalburgHarbourOrderChecker_8

PetalburgHarbourOrderChecker_30:
# 2550 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, PetalburgHarbourOrderChecker_25
	goto PetalburgHarbourOrderChecker_8

PetalburgHarbourOrderChecker_31:
# 2549 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, PetalburgHarbourOrderChecker_30
	goto PetalburgHarbourOrderChecker_8

PetalburgHarbourOrderChecker_36:
# 2526 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 1
	goto PetalburgHarbourOrderChecker_35

PetalburgHarbourOrderChecker_37:
# 2524 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harbordinnertakeaway, PetalburgHarbourOrderChecker_36
	goto PetalburgHarbourOrderChecker_35

PetalburgHarbourOrderChecker_38:
# 2523 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborlunchtakeaway, PetalburgHarbourOrderChecker_37
	goto PetalburgHarbourOrderChecker_35

PetalburgHarbourOrderChecker_43:
# 2558 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 1
	goto PetalburgHarbourOrderChecker_42

PetalburgHarbourOrderChecker_44:
# 2556 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harbordinnertakeaway, PetalburgHarbourOrderChecker_43
	goto PetalburgHarbourOrderChecker_42

PetalburgHarbourOrderChecker_45:
# 2555 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborlunchtakeaway, PetalburgHarbourOrderChecker_44
	goto PetalburgHarbourOrderChecker_42

PetalburgHarbourOrderChecker_49:
# 2535 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 1
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_54:
# 2532 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set takeawaytookorder, PetalburgHarbourOrderChecker_49
	goto PetalburgHarbourOrderChecker_1

PetalburgHarbourOrderChecker_57:
# 2567 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 1
	goto PetalburgHarbourOrderChecker_8

PetalburgHarbourOrderChecker_62:
# 2564 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set takeawaytookorder, PetalburgHarbourOrderChecker_57
	goto PetalburgHarbourOrderChecker_8


PetalburgHarbourTakeAwayBreakfastBalsam::
# 2583 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 2584 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 32, RebelHarborTouristAsksRebento_Movement_0
# 2585 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset takeawaytookorder, PetalburgHarbourTakeAwayBreakfastBalsam_2
# 2606 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 2607 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 2608 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastBalsam_Text_3
PetalburgHarbourTakeAwayBreakfastBalsam_1:
# 2611 "data/maps/RebelHarbourLounge/scripts.pory"
	removefieldmugshot
# 2612 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 2613 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTakeAwayBreakfastBalsam_2:
# 2588 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 2589 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 2590 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastBalsam_Text_0
# 2592 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 2593 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_HAPPY
# 2594 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastBalsam_Text_1
# 2596 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 2597 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 2598 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastBalsam_Text_2
# 2601 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag takeawaytookorder
	goto PetalburgHarbourTakeAwayBreakfastBalsam_1


PetalburgHarbourTakeAwayBreakfastAide::
# 2619 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 2620 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 33, RebelHarborTouristAsksRebento_Movement_0
# 2621 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset takeawaytookorder, PetalburgHarbourTakeAwayBreakfastAide_2
# 2654 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2655 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2656 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_5
# 2658 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2659 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 2660 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_6
# 2662 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_lt PetalburgHarbourTakeAwayBreakfastAide_9
PetalburgHarbourTakeAwayBreakfastAide_8:
# 2670 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_gt PetalburgHarbourTakeAwayBreakfastAide_15
PetalburgHarbourTakeAwayBreakfastAide_14:
# 2685 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 7
	goto_if_gt PetalburgHarbourTakeAwayBreakfastAide_17
PetalburgHarbourTakeAwayBreakfastAide_1:
# 2699 "data/maps/RebelHarbourLounge/scripts.pory"
	removefieldmugshot
# 2700 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 2701 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTakeAwayBreakfastAide_2:
# 2624 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2625 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2626 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_0
# 2628 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2629 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 2630 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_1
# 2633 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2634 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 2635 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_lt PetalburgHarbourTakeAwayBreakfastAide_6
PetalburgHarbourTakeAwayBreakfastAide_5:
# 2640 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 6
	goto_if_gt PetalburgHarbourTakeAwayBreakfastAide_12
PetalburgHarbourTakeAwayBreakfastAide_11:
# 2645 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2646 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2647 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_4
	goto PetalburgHarbourTakeAwayBreakfastAide_1

PetalburgHarbourTakeAwayBreakfastAide_6:
# 2637 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_2
	goto PetalburgHarbourTakeAwayBreakfastAide_5

PetalburgHarbourTakeAwayBreakfastAide_9:
# 2664 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2665 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 2666 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_7
	goto PetalburgHarbourTakeAwayBreakfastAide_8

PetalburgHarbourTakeAwayBreakfastAide_12:
# 2642 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_3
	goto PetalburgHarbourTakeAwayBreakfastAide_11

PetalburgHarbourTakeAwayBreakfastAide_15:
# 2672 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2673 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 2674 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_8
# 2676 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2677 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 2678 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_9
# 2680 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2681 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2682 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_10
	goto PetalburgHarbourTakeAwayBreakfastAide_14

PetalburgHarbourTakeAwayBreakfastAide_17:
# 2687 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_8
# 2689 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2690 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 2691 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_11
# 2693 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2694 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2695 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayBreakfastAide_Text_12
	goto PetalburgHarbourTakeAwayBreakfastAide_1


PetalburgHarbourTakeAwayLunchNorman::
# 2709 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 2710 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 47, RebelHarborTouristAsksRebento_Movement_0
# 2711 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset takeawaytookorder, PetalburgHarbourTakeAwayLunchNorman_2
# 2760 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2761 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 2762 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_10
# 2764 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2765 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 2766 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_11
PetalburgHarbourTakeAwayLunchNorman_1:
# 2768 "data/maps/RebelHarbourLounge/scripts.pory"
	removefieldmugshot
# 2769 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 2770 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTakeAwayLunchNorman_2:
# 2713 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2714 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 2715 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_0
# 2718 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2719 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_HAPPY
# 2720 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_1
# 2722 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2723 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 2724 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_2
# 2726 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHarbourTakeAwayLunchNorman_Text_3, PetalburgHarbourTakeAwayLunchNorman_Text_4
# 2730 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHarbourTakeAwayLunchNorman_6
PetalburgHarbourTakeAwayLunchNorman_5:
# 2741 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHarbourTakeAwayLunchNorman_9
PetalburgHarbourTakeAwayLunchNorman_8:
# 2751 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2752 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_TALK
# 2753 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_9
# 2755 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag takeawaytookorder
	goto PetalburgHarbourTakeAwayLunchNorman_1

PetalburgHarbourTakeAwayLunchNorman_6:
# 2731 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2732 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 2733 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_5
# 2735 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2736 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 2737 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_6
	goto PetalburgHarbourTakeAwayLunchNorman_5

PetalburgHarbourTakeAwayLunchNorman_9:
# 2742 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2743 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_ANGRY
# 2744 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_7
# 2746 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_NORMAN ]
# 2747 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_NORMAN, EMOTE_NORMAL
# 2748 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayLunchNorman_Text_8
	goto PetalburgHarbourTakeAwayLunchNorman_8


PetalburgHarbourTakeAwayDinnerSharpy::
# 2777 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 2778 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 30, RebelHarborTouristAsksRebento_Movement_0
# 2779 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset takeawaytookorder, PetalburgHarbourTakeAwayDinnerSharpy_2
# 2841 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2842 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 2843 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_10
PetalburgHarbourTakeAwayDinnerSharpy_1:
# 2846 "data/maps/RebelHarbourLounge/scripts.pory"
	removefieldmugshot
# 2847 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 2848 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTakeAwayDinnerSharpy_2:
# 2782 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2783 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 2784 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_0
# 2786 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 30, RebelHarborTouristAsksRebento_Movement_1
# 2787 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 31, RebelHarborTouristAsksRebento_Movement_1
# 2788 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 31
# 2790 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2791 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 2792 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 2793 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTakeAwayDinnerSharpy_6
PetalburgHarbourTakeAwayDinnerSharpy_5:
# 2796 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTakeAwayDinnerSharpy_9
PetalburgHarbourTakeAwayDinnerSharpy_8:
# 2801 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2802 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 2803 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 30, RebelHarborTouristAsksRebento_Movement_0
# 2804 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 31, RebelHarborTouristAsksRebento_Movement_0
# 2805 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 31
# 2806 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_3
# 2808 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2809 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 2811 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_4
# 2814 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2815 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 2816 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_5
# 2818 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2819 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 2820 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_6
# 2822 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2823 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 2824 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_7
# 2826 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 30, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 2827 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 30
# 2828 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2829 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 2830 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_8
# 2832 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2833 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 2834 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_9
# 2836 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag takeawaytookorder
	goto PetalburgHarbourTakeAwayDinnerSharpy_1

PetalburgHarbourTakeAwayDinnerSharpy_6:
# 2794 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_1
	goto PetalburgHarbourTakeAwayDinnerSharpy_5

PetalburgHarbourTakeAwayDinnerSharpy_9:
# 2797 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerSharpy_Text_2
	goto PetalburgHarbourTakeAwayDinnerSharpy_8


PetalburgHarbourTakeAwayDinnerCamelia::
# 2854 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 2855 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 31, RebelHarborTouristAsksRebento_Movement_0
# 2856 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset takeawaytookorder, PetalburgHarbourTakeAwayDinnerCamelia_2
# 2913 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2914 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 2915 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_9
# 2918 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2919 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 2920 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_10
# 2922 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2923 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 2924 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 30, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 2925 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 30
# 2926 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_11
# 2928 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 31, RebelHarborTouristAsksRebento_Movement_1
# 2929 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 31
# 2930 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2931 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 2932 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_12
PetalburgHarbourTakeAwayDinnerCamelia_1:
# 2935 "data/maps/RebelHarbourLounge/scripts.pory"
	removefieldmugshot
# 2936 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 2937 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTakeAwayDinnerCamelia_2:
# 2858 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2859 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 2860 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_0
# 2862 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 31, RebelHarborTouristAsksRebento_Movement_1
# 2863 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 31
# 2864 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2865 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 2866 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_1
# 2868 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 30, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 2869 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 30
# 2870 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2871 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 2872 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_2
# 2874 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2875 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 2876 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_3
# 2879 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 31, RebelHarborLoungeClerk_Movement_9
# 2880 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 31
# 2881 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2882 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 2883 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_4
# 2886 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2887 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 2888 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_5
# 2890 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 31, RebelHarborTouristAsksRebento_Movement_0
# 2891 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 31
# 2893 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 2894 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 2895 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_6
# 2897 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2898 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_HAPPY
# 2899 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 30, RebelHarborTouristAsksRebento_Movement_0
# 2900 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 30
# 2901 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_7
# 2903 "data/maps/RebelHarbourLounge/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 2904 "data/maps/RebelHarbourLounge/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 2905 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTakeAwayDinnerCamelia_Text_8
# 2908 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag takeawaytookorder
	goto PetalburgHarbourTakeAwayDinnerCamelia_1


PetalburgHarbourTable1YoungFatManGuestBreakfast::
# 2946 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 2947 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 7, RebelHarborTouristAsksRebento_Movement_0
# 2948 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable1YoungFatManGuestBreakfast_2
PetalburgHarbourTable1YoungFatManGuestBreakfast_1:
# 2952 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable1YoungFatManGuestBreakfast_5
PetalburgHarbourTable1YoungFatManGuestBreakfast_4:
# 2977 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 7, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 2978 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 7
# 2979 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 2980 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable1YoungFatManGuestBreakfast_2:
# 2950 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_0
	goto PetalburgHarbourTable1YoungFatManGuestBreakfast_1

PetalburgHarbourTable1YoungFatManGuestBreakfast_5:
# 2954 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable1YoungFatManGuestBreakfast_8
PetalburgHarbourTable1YoungFatManGuestBreakfast_7:
# 2960 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable1YoungFatManGuestBreakfast_10
	goto PetalburgHarbourTable1YoungFatManGuestBreakfast_4

PetalburgHarbourTable1YoungFatManGuestBreakfast_8:
# 2956 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_1
	goto PetalburgHarbourTable1YoungFatManGuestBreakfast_7

PetalburgHarbourTable1YoungFatManGuestBreakfast_10:
# 2964 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, PetalburgHarbourTable1YoungFatManGuestBreakfast_13
PetalburgHarbourTable1YoungFatManGuestBreakfast_12:
# 2969 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tableonefirstcorrectbreakfast, PetalburgHarbourTable1YoungFatManGuestBreakfast_15
	goto PetalburgHarbourTable1YoungFatManGuestBreakfast_4

PetalburgHarbourTable1YoungFatManGuestBreakfast_13:
# 2966 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_2
	goto PetalburgHarbourTable1YoungFatManGuestBreakfast_12

PetalburgHarbourTable1YoungFatManGuestBreakfast_15:
# 2971 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_3
# 2972 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonefirstcorrectbreakfast
	goto PetalburgHarbourTable1YoungFatManGuestBreakfast_4


PetalburgHarbourTable1OldFatManGuestBreakfast::
# 2984 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 2985 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 27, RebelHarborTouristAsksRebento_Movement_0
# 2988 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable1OldFatManGuestBreakfast_2
PetalburgHarbourTable1OldFatManGuestBreakfast_1:
# 2995 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable1OldFatManGuestBreakfast_5
PetalburgHarbourTable1OldFatManGuestBreakfast_4:
# 3025 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 27, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 3026 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 27
# 3027 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3028 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable1OldFatManGuestBreakfast_2:
# 2991 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestBreakfast_Text_0
	goto PetalburgHarbourTable1OldFatManGuestBreakfast_1

PetalburgHarbourTable1OldFatManGuestBreakfast_5:
# 2999 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable1OldFatManGuestBreakfast_8
PetalburgHarbourTable1OldFatManGuestBreakfast_7:
# 3006 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable1OldFatManGuestBreakfast_10
	goto PetalburgHarbourTable1OldFatManGuestBreakfast_4

PetalburgHarbourTable1OldFatManGuestBreakfast_8:
# 3002 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestBreakfast_Text_1
	goto PetalburgHarbourTable1OldFatManGuestBreakfast_7

PetalburgHarbourTable1OldFatManGuestBreakfast_10:
# 3010 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, PetalburgHarbourTable1OldFatManGuestBreakfast_13
PetalburgHarbourTable1OldFatManGuestBreakfast_12:
# 3016 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tableonesecondcorrectbreakfast, PetalburgHarbourTable1OldFatManGuestBreakfast_15
	goto PetalburgHarbourTable1OldFatManGuestBreakfast_4

PetalburgHarbourTable1OldFatManGuestBreakfast_13:
# 3012 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestBreakfast_Text_2
# 3013 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonesecondcorrectbreakfast
	goto PetalburgHarbourTable1OldFatManGuestBreakfast_12

PetalburgHarbourTable1OldFatManGuestBreakfast_15:
# 3018 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestBreakfast_Text_3
# 3019 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonesecondcorrectbreakfast
	goto PetalburgHarbourTable1OldFatManGuestBreakfast_4


PetalburgHarbourTable1YoungFatManGuestLunch::
# 3034 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3035 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 15, RebelHarborTouristAsksRebento_Movement_0
# 3036 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable1YoungFatManGuestLunch_2
PetalburgHarbourTable1YoungFatManGuestLunch_1:
# 3040 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable1YoungFatManGuestLunch_5
PetalburgHarbourTable1YoungFatManGuestLunch_4:
# 3065 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 15, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 3066 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 15
# 3067 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3068 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable1YoungFatManGuestLunch_2:
# 3038 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_0
	goto PetalburgHarbourTable1YoungFatManGuestLunch_1

PetalburgHarbourTable1YoungFatManGuestLunch_5:
# 3042 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable1YoungFatManGuestLunch_8
PetalburgHarbourTable1YoungFatManGuestLunch_7:
# 3048 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable1YoungFatManGuestLunch_10
	goto PetalburgHarbourTable1YoungFatManGuestLunch_4

PetalburgHarbourTable1YoungFatManGuestLunch_8:
# 3044 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_1
	goto PetalburgHarbourTable1YoungFatManGuestLunch_7

PetalburgHarbourTable1YoungFatManGuestLunch_10:
# 3052 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, PetalburgHarbourTable1YoungFatManGuestLunch_13
PetalburgHarbourTable1YoungFatManGuestLunch_12:
# 3057 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tableonefirstcorrectbreakfast, PetalburgHarbourTable1YoungFatManGuestLunch_15
	goto PetalburgHarbourTable1YoungFatManGuestLunch_4

PetalburgHarbourTable1YoungFatManGuestLunch_13:
# 3054 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_2
	goto PetalburgHarbourTable1YoungFatManGuestLunch_12

PetalburgHarbourTable1YoungFatManGuestLunch_15:
# 3059 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_3
# 3060 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonefirstcorrectbreakfast
	goto PetalburgHarbourTable1YoungFatManGuestLunch_4


PetalburgHarbourTable1OldFatManGuestLunch::
# 3073 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3074 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 27, RebelHarborTouristAsksRebento_Movement_0
# 3077 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable1OldFatManGuestLunch_2
PetalburgHarbourTable1OldFatManGuestLunch_1:
# 3084 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable1OldFatManGuestLunch_5
PetalburgHarbourTable1OldFatManGuestLunch_4:
# 3114 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 27, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 3115 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 27
# 3116 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3117 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable1OldFatManGuestLunch_2:
# 3080 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestBreakfast_Text_0
	goto PetalburgHarbourTable1OldFatManGuestLunch_1

PetalburgHarbourTable1OldFatManGuestLunch_5:
# 3088 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable1OldFatManGuestLunch_8
PetalburgHarbourTable1OldFatManGuestLunch_7:
# 3095 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable1OldFatManGuestLunch_10
	goto PetalburgHarbourTable1OldFatManGuestLunch_4

PetalburgHarbourTable1OldFatManGuestLunch_8:
# 3091 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestBreakfast_Text_1
	goto PetalburgHarbourTable1OldFatManGuestLunch_7

PetalburgHarbourTable1OldFatManGuestLunch_10:
# 3099 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, PetalburgHarbourTable1OldFatManGuestLunch_13
PetalburgHarbourTable1OldFatManGuestLunch_12:
# 3105 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tableonesecondcorrectbreakfast, PetalburgHarbourTable1OldFatManGuestLunch_15
	goto PetalburgHarbourTable1OldFatManGuestLunch_4

PetalburgHarbourTable1OldFatManGuestLunch_13:
# 3101 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestLunch_Text_0
# 3102 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonesecondcorrectbreakfast
	goto PetalburgHarbourTable1OldFatManGuestLunch_12

PetalburgHarbourTable1OldFatManGuestLunch_15:
# 3107 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestLunch_Text_1
# 3108 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonesecondcorrectbreakfast
	goto PetalburgHarbourTable1OldFatManGuestLunch_4


PetalburgHarbourTable1YoungFatManGuestDinner::
# 3125 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3126 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 28, RebelHarborTouristAsksRebento_Movement_0
# 3127 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable1YoungFatManGuestDinner_2
PetalburgHarbourTable1YoungFatManGuestDinner_1:
# 3131 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable1YoungFatManGuestDinner_5
PetalburgHarbourTable1YoungFatManGuestDinner_4:
# 3157 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 28, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 3158 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 28
# 3159 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3160 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable1YoungFatManGuestDinner_2:
# 3129 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestDinner_Text_0
	goto PetalburgHarbourTable1YoungFatManGuestDinner_1

PetalburgHarbourTable1YoungFatManGuestDinner_5:
# 3133 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable1YoungFatManGuestDinner_8
PetalburgHarbourTable1YoungFatManGuestDinner_7:
# 3139 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable1YoungFatManGuestDinner_10
	goto PetalburgHarbourTable1YoungFatManGuestDinner_4

PetalburgHarbourTable1YoungFatManGuestDinner_8:
# 3135 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_1
	goto PetalburgHarbourTable1YoungFatManGuestDinner_7

PetalburgHarbourTable1YoungFatManGuestDinner_10:
# 3143 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonefirstcorrectbreakfast, PetalburgHarbourTable1YoungFatManGuestDinner_13
PetalburgHarbourTable1YoungFatManGuestDinner_12:
# 3148 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tableonefirstcorrectbreakfast, PetalburgHarbourTable1YoungFatManGuestDinner_15
	goto PetalburgHarbourTable1YoungFatManGuestDinner_4

PetalburgHarbourTable1YoungFatManGuestDinner_13:
# 3145 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestDinner_Text_1
	goto PetalburgHarbourTable1YoungFatManGuestDinner_12

PetalburgHarbourTable1YoungFatManGuestDinner_15:
# 3150 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1YoungFatManGuestDinner_Text_2
# 3152 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonefirstcorrectbreakfast
	goto PetalburgHarbourTable1YoungFatManGuestDinner_4


PetalburgHarbourTable1OldFatManGuestDinner::
# 3165 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3166 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 6, RebelHarborTouristAsksRebento_Movement_0
# 3169 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable1OldFatManGuestDinner_2
PetalburgHarbourTable1OldFatManGuestDinner_1:
# 3176 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable1OldFatManGuestDinner_5
PetalburgHarbourTable1OldFatManGuestDinner_4:
# 3206 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 6, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 3207 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 6
# 3208 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3209 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable1OldFatManGuestDinner_2:
# 3172 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestDinner_Text_0
	goto PetalburgHarbourTable1OldFatManGuestDinner_1

PetalburgHarbourTable1OldFatManGuestDinner_5:
# 3180 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable1OldFatManGuestDinner_8
PetalburgHarbourTable1OldFatManGuestDinner_7:
# 3187 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable1OldFatManGuestDinner_10
	goto PetalburgHarbourTable1OldFatManGuestDinner_4

PetalburgHarbourTable1OldFatManGuestDinner_8:
# 3183 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestBreakfast_Text_1
	goto PetalburgHarbourTable1OldFatManGuestDinner_7

PetalburgHarbourTable1OldFatManGuestDinner_10:
# 3191 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tableonesecondcorrectbreakfast, PetalburgHarbourTable1OldFatManGuestDinner_13
PetalburgHarbourTable1OldFatManGuestDinner_12:
# 3197 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tableonesecondcorrectbreakfast, PetalburgHarbourTable1OldFatManGuestDinner_15
	goto PetalburgHarbourTable1OldFatManGuestDinner_4

PetalburgHarbourTable1OldFatManGuestDinner_13:
# 3193 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestDinner_Text_1
# 3194 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonesecondcorrectbreakfast
	goto PetalburgHarbourTable1OldFatManGuestDinner_12

PetalburgHarbourTable1OldFatManGuestDinner_15:
# 3199 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1OldFatManGuestDinner_Text_2
# 3200 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tableonesecondcorrectbreakfast
	goto PetalburgHarbourTable1OldFatManGuestDinner_4


PetalburgHarbourTable2WageSlaveGuest::
# 3220 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3221 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborTouristAsksRebento_Movement_0
# 3224 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2WageSlaveGuest_2
PetalburgHarbourTable2WageSlaveGuest_1:
# 3230 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2WageSlaveGuest_5
PetalburgHarbourTable2WageSlaveGuest_4:
# 3258 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 18, RebelHarborLoungeClerk_Movement_9
# 3259 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 18
# 3260 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3261 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2WageSlaveGuest_2:
# 3227 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2WageSlaveGuest_Text_0
	goto PetalburgHarbourTable2WageSlaveGuest_1

PetalburgHarbourTable2WageSlaveGuest_5:
# 3234 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2WageSlaveGuest_8
PetalburgHarbourTable2WageSlaveGuest_7:
# 3241 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2WageSlaveGuest_10
	goto PetalburgHarbourTable2WageSlaveGuest_4

PetalburgHarbourTable2WageSlaveGuest_8:
# 3237 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2WageSlaveGuest_Text_1
	goto PetalburgHarbourTable2WageSlaveGuest_7

PetalburgHarbourTable2WageSlaveGuest_10:
# 3244 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, PetalburgHarbourTable2WageSlaveGuest_13
PetalburgHarbourTable2WageSlaveGuest_12:
# 3249 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwofirstcorrectbreakfast, PetalburgHarbourTable2WageSlaveGuest_15
	goto PetalburgHarbourTable2WageSlaveGuest_4

PetalburgHarbourTable2WageSlaveGuest_13:
# 3246 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2WageSlaveGuest_Text_2
	goto PetalburgHarbourTable2WageSlaveGuest_12

PetalburgHarbourTable2WageSlaveGuest_15:
# 3251 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2WageSlaveGuest_Text_3
# 3252 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwofirstcorrectbreakfast
	goto PetalburgHarbourTable2WageSlaveGuest_4


PetalburgHarbourTable2DaugtherGuest::
# 3267 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3268 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborTouristAsksRebento_Movement_0
# 3270 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2DaugtherGuest_2
PetalburgHarbourTable2DaugtherGuest_1:
# 3278 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2DaugtherGuest_5
PetalburgHarbourTable2DaugtherGuest_4:
# 3331 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 19, RebelHarborLoungeClerk_Movement_9
# 3332 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 19
# 3333 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3334 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2DaugtherGuest_2:
# 3273 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_0
	goto PetalburgHarbourTable2DaugtherGuest_1

PetalburgHarbourTable2DaugtherGuest_5:
# 3283 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2DaugtherGuest_8
PetalburgHarbourTable2DaugtherGuest_7:
# 3291 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2DaugtherGuest_10
	goto PetalburgHarbourTable2DaugtherGuest_4

PetalburgHarbourTable2DaugtherGuest_8:
# 3286 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_1
	goto PetalburgHarbourTable2DaugtherGuest_7

PetalburgHarbourTable2DaugtherGuest_10:
# 3295 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, PetalburgHarbourTable2DaugtherGuest_13
PetalburgHarbourTable2DaugtherGuest_12:
# 3307 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwosecondcorrectbreakfast, PetalburgHarbourTable2DaugtherGuest_15
	goto PetalburgHarbourTable2DaugtherGuest_4

PetalburgHarbourTable2DaugtherGuest_13:
# 3296 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 3297 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable2DaugtherGuest_18
PetalburgHarbourTable2DaugtherGuest_17:
# 3301 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable2DaugtherGuest_23
	goto PetalburgHarbourTable2DaugtherGuest_12

PetalburgHarbourTable2DaugtherGuest_15:
# 3309 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_4
# 3312 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHarbourTakeAwayLunchNorman_Text_3, PetalburgHarbourTakeAwayLunchNorman_Text_4
# 3316 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHarbourTable2DaugtherGuest_21
PetalburgHarbourTable2DaugtherGuest_20:
# 3320 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHarbourTable2DaugtherGuest_26
PetalburgHarbourTable2DaugtherGuest_25:
# 3324 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwosecondcorrectbreakfast
	goto PetalburgHarbourTable2DaugtherGuest_4

PetalburgHarbourTable2DaugtherGuest_18:
# 3298 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_2
	goto PetalburgHarbourTable2DaugtherGuest_17

PetalburgHarbourTable2DaugtherGuest_21:
# 3317 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_5
	goto PetalburgHarbourTable2DaugtherGuest_20

PetalburgHarbourTable2DaugtherGuest_23:
# 3302 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_3
	goto PetalburgHarbourTable2DaugtherGuest_12

PetalburgHarbourTable2DaugtherGuest_26:
# 3321 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2DaugtherGuest_Text_6
	goto PetalburgHarbourTable2DaugtherGuest_25


PetalburgHarbourTable2MercenaryMGuest::
# 3340 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3341 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborTouristAsksRebento_Movement_0
# 3343 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2MercenaryMGuest_2
PetalburgHarbourTable2MercenaryMGuest_1:
# 3351 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2MercenaryMGuest_5
PetalburgHarbourTable2MercenaryMGuest_4:
# 3388 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 49, RebelHarborTouristAsksRebento_Movement_1
# 3389 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 49
# 3390 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3391 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2MercenaryMGuest_2:
# 3346 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_0
	goto PetalburgHarbourTable2MercenaryMGuest_1

PetalburgHarbourTable2MercenaryMGuest_5:
# 3355 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2MercenaryMGuest_8
PetalburgHarbourTable2MercenaryMGuest_7:
# 3362 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2MercenaryMGuest_10
	goto PetalburgHarbourTable2MercenaryMGuest_4

PetalburgHarbourTable2MercenaryMGuest_8:
# 3358 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_1
	goto PetalburgHarbourTable2MercenaryMGuest_7

PetalburgHarbourTable2MercenaryMGuest_10:
# 3366 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, PetalburgHarbourTable2MercenaryMGuest_13
PetalburgHarbourTable2MercenaryMGuest_12:
# 3372 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwothirdcorrectbreakfast, PetalburgHarbourTable2MercenaryMGuest_15
	goto PetalburgHarbourTable2MercenaryMGuest_4

PetalburgHarbourTable2MercenaryMGuest_13:
# 3368 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_2
	goto PetalburgHarbourTable2MercenaryMGuest_12

PetalburgHarbourTable2MercenaryMGuest_15:
# 3374 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_3
# 3376 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 3377 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable2MercenaryMGuest_18
PetalburgHarbourTable2MercenaryMGuest_17:
# 3380 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable2MercenaryMGuest_21
PetalburgHarbourTable2MercenaryMGuest_20:
# 3384 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwothirdcorrectbreakfast
# 3385 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwofourthcorrectbreakfast
	goto PetalburgHarbourTable2MercenaryMGuest_4

PetalburgHarbourTable2MercenaryMGuest_18:
# 3378 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_4
	goto PetalburgHarbourTable2MercenaryMGuest_17

PetalburgHarbourTable2MercenaryMGuest_21:
# 3381 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2MercenaryMGuest_Text_5
	goto PetalburgHarbourTable2MercenaryMGuest_20


PetalburgHarbourTable2TouristMGuest::
# 3399 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3400 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 23, RebelHarborTouristAsksRebento_Movement_0
# 3403 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2TouristMGuest_2
PetalburgHarbourTable2TouristMGuest_1:
# 3410 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2TouristMGuest_5
PetalburgHarbourTable2TouristMGuest_4:
# 3439 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 23, RebelHarborTouristAsksRebento_Movement_1
# 3440 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 23
# 3441 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3442 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2TouristMGuest_2:
# 3406 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2TouristMGuest_Text_0
	goto PetalburgHarbourTable2TouristMGuest_1

PetalburgHarbourTable2TouristMGuest_5:
# 3414 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2TouristMGuest_8
PetalburgHarbourTable2TouristMGuest_7:
# 3421 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2TouristMGuest_10
	goto PetalburgHarbourTable2TouristMGuest_4

PetalburgHarbourTable2TouristMGuest_8:
# 3417 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2TouristMGuest_Text_1
	goto PetalburgHarbourTable2TouristMGuest_7

PetalburgHarbourTable2TouristMGuest_10:
# 3424 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, PetalburgHarbourTable2TouristMGuest_13
PetalburgHarbourTable2TouristMGuest_12:
# 3429 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwofirstcorrectbreakfast, PetalburgHarbourTable2TouristMGuest_15
	goto PetalburgHarbourTable2TouristMGuest_4

PetalburgHarbourTable2TouristMGuest_13:
# 3426 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2TouristMGuest_Text_2
	goto PetalburgHarbourTable2TouristMGuest_12

PetalburgHarbourTable2TouristMGuest_15:
# 3431 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2TouristMGuest_Text_3
# 3433 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwofirstcorrectbreakfast
	goto PetalburgHarbourTable2TouristMGuest_4


PetalburgHarbourTable2TouristFGuest::
# 3447 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3448 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 24, RebelHarborTouristAsksRebento_Movement_0
# 3451 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2TouristFGuest_2
PetalburgHarbourTable2TouristFGuest_1:
# 3458 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2TouristFGuest_5
PetalburgHarbourTable2TouristFGuest_4:
# 3486 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 24, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 3487 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 24
# 3488 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3489 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2TouristFGuest_2:
# 3454 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2TouristFGuest_Text_0
	goto PetalburgHarbourTable2TouristFGuest_1

PetalburgHarbourTable2TouristFGuest_5:
# 3462 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2TouristFGuest_8
PetalburgHarbourTable2TouristFGuest_7:
# 3469 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2TouristFGuest_10
	goto PetalburgHarbourTable2TouristFGuest_4

PetalburgHarbourTable2TouristFGuest_8:
# 3465 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2TouristFGuest_Text_1
	goto PetalburgHarbourTable2TouristFGuest_7

PetalburgHarbourTable2TouristFGuest_10:
# 3472 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, PetalburgHarbourTable2TouristFGuest_13
PetalburgHarbourTable2TouristFGuest_12:
# 3477 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwosecondcorrectbreakfast, PetalburgHarbourTable2TouristFGuest_15
	goto PetalburgHarbourTable2TouristFGuest_4

PetalburgHarbourTable2TouristFGuest_13:
# 3474 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2TouristFGuest_Text_2
	goto PetalburgHarbourTable2TouristFGuest_12

PetalburgHarbourTable2TouristFGuest_15:
# 3479 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2TouristFGuest_Text_3
# 3480 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwosecondcorrectbreakfast
	goto PetalburgHarbourTable2TouristFGuest_4


PetalburgHarbourTable2RebelGuest::
# 3495 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3496 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 48, RebelHarborTouristAsksRebento_Movement_0
# 3499 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2RebelGuest_2
PetalburgHarbourTable2RebelGuest_1:
# 3506 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2RebelGuest_5
PetalburgHarbourTable2RebelGuest_4:
# 3537 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 48, RebelHarborTouristAsksRebento_Movement_1
# 3538 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 48
# 3539 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3540 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2RebelGuest_2:
# 3501 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_TRUCK_UNLOAD
# 3502 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 3503 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2RebelGuest_Text_0
	goto PetalburgHarbourTable2RebelGuest_1

PetalburgHarbourTable2RebelGuest_5:
# 3510 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2RebelGuest_8
PetalburgHarbourTable2RebelGuest_7:
# 3517 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2RebelGuest_10
	goto PetalburgHarbourTable2RebelGuest_4

PetalburgHarbourTable2RebelGuest_8:
# 3513 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2RebelGuest_Text_1
	goto PetalburgHarbourTable2RebelGuest_7

PetalburgHarbourTable2RebelGuest_10:
# 3520 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, PetalburgHarbourTable2RebelGuest_13
PetalburgHarbourTable2RebelGuest_12:
# 3526 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwothirdcorrectbreakfast, PetalburgHarbourTable2RebelGuest_15
	goto PetalburgHarbourTable2RebelGuest_4

PetalburgHarbourTable2RebelGuest_13:
# 3522 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2RebelGuest_Text_2
	goto PetalburgHarbourTable2RebelGuest_12

PetalburgHarbourTable2RebelGuest_15:
# 3528 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2RebelGuest_Text_3
# 3530 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwothirdcorrectbreakfast
# 3531 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwofourthcorrectbreakfast
	goto PetalburgHarbourTable2RebelGuest_4


PetalburgHarbourTable2ClerkMGuest::
# 3550 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3551 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 16, RebelHarborTouristAsksRebento_Movement_0
# 3554 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2ClerkMGuest_2
PetalburgHarbourTable2ClerkMGuest_1:
# 3566 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2ClerkMGuest_5
PetalburgHarbourTable2ClerkMGuest_4:
# 3595 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 16, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 3596 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 16
# 3597 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3598 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2ClerkMGuest_2:
# 3557 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2ClerkMGuest_Text_0
# 3558 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 16, RebelHarborLoungeClerk_Movement_9
# 3559 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 16
# 3560 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2ClerkMGuest_Text_1
	goto PetalburgHarbourTable2ClerkMGuest_1

PetalburgHarbourTable2ClerkMGuest_5:
# 3570 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2ClerkMGuest_8
PetalburgHarbourTable2ClerkMGuest_7:
# 3576 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2ClerkMGuest_10
	goto PetalburgHarbourTable2ClerkMGuest_4

PetalburgHarbourTable2ClerkMGuest_8:
# 3573 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2ClerkMGuest_Text_2
	goto PetalburgHarbourTable2ClerkMGuest_7

PetalburgHarbourTable2ClerkMGuest_10:
# 3579 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofirstcorrectbreakfast, PetalburgHarbourTable2ClerkMGuest_13
PetalburgHarbourTable2ClerkMGuest_12:
# 3585 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwofirstcorrectbreakfast, PetalburgHarbourTable2ClerkMGuest_15
	goto PetalburgHarbourTable2ClerkMGuest_4

PetalburgHarbourTable2ClerkMGuest_13:
# 3581 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2ClerkMGuest_Text_3
	goto PetalburgHarbourTable2ClerkMGuest_12

PetalburgHarbourTable2ClerkMGuest_15:
# 3587 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2ClerkMGuest_Text_4
# 3589 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwofirstcorrectbreakfast
	goto PetalburgHarbourTable2ClerkMGuest_4


PetalburgHarbourTable2ClerkFGuest::
# 3603 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3604 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 20, RebelHarborTouristAsksRebento_Movement_0
# 3607 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2ClerkFGuest_2
PetalburgHarbourTable2ClerkFGuest_1:
# 3613 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2ClerkFGuest_5
PetalburgHarbourTable2ClerkFGuest_4:
# 3640 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 20, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 3641 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 20
# 3642 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3643 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2ClerkFGuest_2:
# 3610 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2ClerkFGuest_Text_0
	goto PetalburgHarbourTable2ClerkFGuest_1

PetalburgHarbourTable2ClerkFGuest_5:
# 3617 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2ClerkFGuest_8
PetalburgHarbourTable2ClerkFGuest_7:
# 3623 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2ClerkFGuest_10
	goto PetalburgHarbourTable2ClerkFGuest_4

PetalburgHarbourTable2ClerkFGuest_8:
# 3620 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2ClerkFGuest_Text_1
	goto PetalburgHarbourTable2ClerkFGuest_7

PetalburgHarbourTable2ClerkFGuest_10:
# 3626 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwosecondcorrectbreakfast, PetalburgHarbourTable2ClerkFGuest_13
PetalburgHarbourTable2ClerkFGuest_12:
# 3631 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwosecondcorrectbreakfast, PetalburgHarbourTable2ClerkFGuest_15
	goto PetalburgHarbourTable2ClerkFGuest_4

PetalburgHarbourTable2ClerkFGuest_13:
# 3628 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2ClerkFGuest_Text_2
	goto PetalburgHarbourTable2ClerkFGuest_12

PetalburgHarbourTable2ClerkFGuest_15:
# 3633 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2ClerkFGuest_Text_3
# 3634 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwosecondcorrectbreakfast
	goto PetalburgHarbourTable2ClerkFGuest_4


PetalburgHarbourTable2OldmanGuest::
# 3652 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3653 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 25, RebelHarborTouristAsksRebento_Movement_0
# 3656 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2OldmanGuest_2
PetalburgHarbourTable2OldmanGuest_1:
# 3663 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2OldmanGuest_5
PetalburgHarbourTable2OldmanGuest_4:
# 3692 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 25, RebelHarborLoungeClerk_Movement_15
# 3693 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 25
# 3694 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3695 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2OldmanGuest_2:
# 3659 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2OldmanGuest_Text_0
	goto PetalburgHarbourTable2OldmanGuest_1

PetalburgHarbourTable2OldmanGuest_5:
# 3667 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2OldmanGuest_8
PetalburgHarbourTable2OldmanGuest_7:
# 3674 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2OldmanGuest_10
	goto PetalburgHarbourTable2OldmanGuest_4

PetalburgHarbourTable2OldmanGuest_8:
# 3670 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2OldmanGuest_Text_1
	goto PetalburgHarbourTable2OldmanGuest_7

PetalburgHarbourTable2OldmanGuest_10:
# 3677 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwothirdcorrectbreakfast, PetalburgHarbourTable2OldmanGuest_13
PetalburgHarbourTable2OldmanGuest_12:
# 3683 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwothirdcorrectbreakfast, PetalburgHarbourTable2OldmanGuest_15
	goto PetalburgHarbourTable2OldmanGuest_4

PetalburgHarbourTable2OldmanGuest_13:
# 3679 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2OldmanGuest_Text_2
	goto PetalburgHarbourTable2OldmanGuest_12

PetalburgHarbourTable2OldmanGuest_15:
# 3685 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2OldmanGuest_Text_3
# 3686 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwothirdcorrectbreakfast
	goto PetalburgHarbourTable2OldmanGuest_4


PetalburgHarbourTable2OldwomanGuest::
# 3700 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3701 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 26, RebelHarborTouristAsksRebento_Movement_0
# 3704 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2OldwomanGuest_2
PetalburgHarbourTable2OldwomanGuest_1:
# 3711 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2OldwomanGuest_5
PetalburgHarbourTable2OldwomanGuest_4:
# 3741 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 26, RebelHarborLoungeClerk_Movement_15
# 3742 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 26
# 3743 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3744 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2OldwomanGuest_2:
# 3707 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2OldwomanGuest_Text_0
	goto PetalburgHarbourTable2OldwomanGuest_1

PetalburgHarbourTable2OldwomanGuest_5:
# 3715 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable2OldwomanGuest_8
PetalburgHarbourTable2OldwomanGuest_7:
# 3723 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable2OldwomanGuest_10
	goto PetalburgHarbourTable2OldwomanGuest_4

PetalburgHarbourTable2OldwomanGuest_8:
# 3718 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2OldwomanGuest_Text_1
	goto PetalburgHarbourTable2OldwomanGuest_7

PetalburgHarbourTable2OldwomanGuest_10:
# 3726 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tabletwofourthcorrectbreakfast, PetalburgHarbourTable2OldwomanGuest_13
PetalburgHarbourTable2OldwomanGuest_12:
# 3732 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tabletwofourthcorrectbreakfast, PetalburgHarbourTable2OldwomanGuest_15
	goto PetalburgHarbourTable2OldwomanGuest_4

PetalburgHarbourTable2OldwomanGuest_13:
# 3728 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2OldwomanGuest_Text_2
	goto PetalburgHarbourTable2OldwomanGuest_12

PetalburgHarbourTable2OldwomanGuest_15:
# 3734 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2OldwomanGuest_Text_3
# 3735 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tabletwofourthcorrectbreakfast
	goto PetalburgHarbourTable2OldwomanGuest_4


PetalburgHarbourTable3BandagedManGuest::
# 3753 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3754 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborTouristAsksRebento_Movement_0
# 3756 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3BandagedManGuest_2
PetalburgHarbourTable3BandagedManGuest_1:
# 3762 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3BandagedManGuest_5
PetalburgHarbourTable3BandagedManGuest_4:
# 3799 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 36, RebelHarborTouristAsksRebento_Movement_1
# 3800 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 36
# 3801 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3802 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3BandagedManGuest_2:
# 3759 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_0
	goto PetalburgHarbourTable3BandagedManGuest_1

PetalburgHarbourTable3BandagedManGuest_5:
# 3766 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3BandagedManGuest_8
PetalburgHarbourTable3BandagedManGuest_7:
# 3782 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3BandagedManGuest_10
	goto PetalburgHarbourTable3BandagedManGuest_4

PetalburgHarbourTable3BandagedManGuest_8:
# 3769 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_1
# 3772 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 3773 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable3BandagedManGuest_13
PetalburgHarbourTable3BandagedManGuest_12:
# 3776 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable3BandagedManGuest_18
	goto PetalburgHarbourTable3BandagedManGuest_7

PetalburgHarbourTable3BandagedManGuest_10:
# 3786 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, PetalburgHarbourTable3BandagedManGuest_16
PetalburgHarbourTable3BandagedManGuest_15:
# 3793 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreefirstcorrectbreakfast, PetalburgHarbourTable3BandagedManGuest_20
	goto PetalburgHarbourTable3BandagedManGuest_4

PetalburgHarbourTable3BandagedManGuest_13:
# 3774 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_2
	goto PetalburgHarbourTable3BandagedManGuest_12

PetalburgHarbourTable3BandagedManGuest_16:
# 3788 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_4
	goto PetalburgHarbourTable3BandagedManGuest_15

PetalburgHarbourTable3BandagedManGuest_18:
# 3777 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_3
	goto PetalburgHarbourTable3BandagedManGuest_7

PetalburgHarbourTable3BandagedManGuest_20:
# 3795 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3BandagedManGuest_Text_5
# 3796 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreefirstcorrectbreakfast
	goto PetalburgHarbourTable3BandagedManGuest_4


PetalburgHarbourTable3TrapinchTechnicianGuest::
# 3806 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3807 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborTouristAsksRebento_Movement_0
# 3810 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3TrapinchTechnicianGuest_2
PetalburgHarbourTable3TrapinchTechnicianGuest_1:
# 3818 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3TrapinchTechnicianGuest_5
PetalburgHarbourTable3TrapinchTechnicianGuest_4:
# 3846 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 34, RebelHarborLoungeClerk_Movement_15
# 3847 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 34
# 3848 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3849 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3TrapinchTechnicianGuest_2:
# 3813 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3TrapinchTechnicianGuest_Text_0
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_1

PetalburgHarbourTable3TrapinchTechnicianGuest_5:
# 3822 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3TrapinchTechnicianGuest_8
PetalburgHarbourTable3TrapinchTechnicianGuest_7:
# 3829 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3TrapinchTechnicianGuest_10
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_4

PetalburgHarbourTable3TrapinchTechnicianGuest_8:
# 3825 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3TrapinchTechnicianGuest_Text_1
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_7

PetalburgHarbourTable3TrapinchTechnicianGuest_10:
# 3833 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, PetalburgHarbourTable3TrapinchTechnicianGuest_13
PetalburgHarbourTable3TrapinchTechnicianGuest_12:
# 3839 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreesecondcorrectbreakfast, PetalburgHarbourTable3TrapinchTechnicianGuest_15
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_4

PetalburgHarbourTable3TrapinchTechnicianGuest_13:
# 3835 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3TrapinchTechnicianGuest_Text_2
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_12

PetalburgHarbourTable3TrapinchTechnicianGuest_15:
# 3841 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3TrapinchTechnicianGuest_Text_3
# 3842 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreesecondcorrectbreakfast
	goto PetalburgHarbourTable3TrapinchTechnicianGuest_4


PetalburgHarbourTable3CuboneWomanGuest::
# 3854 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3855 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborTouristAsksRebento_Movement_0
# 3858 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3CuboneWomanGuest_2
PetalburgHarbourTable3CuboneWomanGuest_1:
# 3864 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3CuboneWomanGuest_5
PetalburgHarbourTable3CuboneWomanGuest_4:
# 3903 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 46, RebelHarborLoungeClerk_Movement_15
# 3904 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 46
# 3905 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3906 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3CuboneWomanGuest_2:
# 3861 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_0
	goto PetalburgHarbourTable3CuboneWomanGuest_1

PetalburgHarbourTable3CuboneWomanGuest_5:
# 3868 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3CuboneWomanGuest_8
PetalburgHarbourTable3CuboneWomanGuest_7:
# 3876 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3CuboneWomanGuest_10
	goto PetalburgHarbourTable3CuboneWomanGuest_4

PetalburgHarbourTable3CuboneWomanGuest_8:
# 3871 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_1
	goto PetalburgHarbourTable3CuboneWomanGuest_7

PetalburgHarbourTable3CuboneWomanGuest_10:
# 3881 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, PetalburgHarbourTable3CuboneWomanGuest_13
PetalburgHarbourTable3CuboneWomanGuest_12:
# 3896 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreethirdcorrectbreakfast, PetalburgHarbourTable3CuboneWomanGuest_15
	goto PetalburgHarbourTable3CuboneWomanGuest_4

PetalburgHarbourTable3CuboneWomanGuest_13:
# 3883 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_2
# 3886 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 3887 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable3CuboneWomanGuest_18
PetalburgHarbourTable3CuboneWomanGuest_17:
# 3890 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable3CuboneWomanGuest_20
	goto PetalburgHarbourTable3CuboneWomanGuest_12

PetalburgHarbourTable3CuboneWomanGuest_15:
# 3898 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_5
# 3899 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreethirdcorrectbreakfast
# 3900 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreefourthcorrectbreakfast
	goto PetalburgHarbourTable3CuboneWomanGuest_4

PetalburgHarbourTable3CuboneWomanGuest_18:
# 3888 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_3
	goto PetalburgHarbourTable3CuboneWomanGuest_17

PetalburgHarbourTable3CuboneWomanGuest_20:
# 3891 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3CuboneWomanGuest_Text_4
	goto PetalburgHarbourTable3CuboneWomanGuest_12


PetalburgHarbourTable3PrisonerGuest::
# 3912 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3913 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 56, RebelHarborTouristAsksRebento_Movement_0
# 3915 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3PrisonerGuest_2
PetalburgHarbourTable3PrisonerGuest_1:
# 3922 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3PrisonerGuest_5
PetalburgHarbourTable3PrisonerGuest_4:
# 3950 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 56, RebelHarborLoungeClerk_Movement_9
# 3951 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 56
# 3952 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 3953 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3PrisonerGuest_2:
# 3918 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PrisonerGuest_Text_0
	goto PetalburgHarbourTable3PrisonerGuest_1

PetalburgHarbourTable3PrisonerGuest_5:
# 3926 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3PrisonerGuest_8
PetalburgHarbourTable3PrisonerGuest_7:
# 3933 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3PrisonerGuest_10
	goto PetalburgHarbourTable3PrisonerGuest_4

PetalburgHarbourTable3PrisonerGuest_8:
# 3929 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PrisonerGuest_Text_1
	goto PetalburgHarbourTable3PrisonerGuest_7

PetalburgHarbourTable3PrisonerGuest_10:
# 3937 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, PetalburgHarbourTable3PrisonerGuest_13
PetalburgHarbourTable3PrisonerGuest_12:
# 3942 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreefirstcorrectbreakfast, PetalburgHarbourTable3PrisonerGuest_15
	goto PetalburgHarbourTable3PrisonerGuest_4

PetalburgHarbourTable3PrisonerGuest_13:
# 3939 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PrisonerGuest_Text_2
	goto PetalburgHarbourTable3PrisonerGuest_12

PetalburgHarbourTable3PrisonerGuest_15:
# 3944 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PrisonerGuest_Text_3
# 3946 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreefirstcorrectbreakfast
# 3947 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreesecondcorrectbreakfast
	goto PetalburgHarbourTable3PrisonerGuest_4


PetalburgHarbourTable3PatientMGuest::
# 3959 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 3960 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 53, RebelHarborTouristAsksRebento_Movement_0
# 3962 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3PatientMGuest_2
PetalburgHarbourTable3PatientMGuest_1:
# 3969 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3PatientMGuest_5
PetalburgHarbourTable3PatientMGuest_4:
# 3997 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 53, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 3998 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 53
# 3999 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 4000 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3PatientMGuest_2:
# 3965 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PatientMGuest_Text_0
	goto PetalburgHarbourTable3PatientMGuest_1

PetalburgHarbourTable3PatientMGuest_5:
# 3973 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3PatientMGuest_8
PetalburgHarbourTable3PatientMGuest_7:
# 3981 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3PatientMGuest_10
	goto PetalburgHarbourTable3PatientMGuest_4

PetalburgHarbourTable3PatientMGuest_8:
# 3976 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PatientMGuest_Text_1
	goto PetalburgHarbourTable3PatientMGuest_7

PetalburgHarbourTable3PatientMGuest_10:
# 3985 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, PetalburgHarbourTable3PatientMGuest_13
PetalburgHarbourTable3PatientMGuest_12:
# 3990 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreefourthcorrectbreakfast, PetalburgHarbourTable3PatientMGuest_15
	goto PetalburgHarbourTable3PatientMGuest_4

PetalburgHarbourTable3PatientMGuest_13:
# 3987 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PatientMGuest_Text_2
	goto PetalburgHarbourTable3PatientMGuest_12

PetalburgHarbourTable3PatientMGuest_15:
# 3992 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PatientMGuest_Text_3
# 3994 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreefourthcorrectbreakfast
	goto PetalburgHarbourTable3PatientMGuest_4


PetalburgHarbourTable3PatientFGuest::
# 4005 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4006 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 52, RebelHarborTouristAsksRebento_Movement_0
# 4008 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3PatientFGuest_2
PetalburgHarbourTable3PatientFGuest_1:
# 4014 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3PatientFGuest_5
PetalburgHarbourTable3PatientFGuest_4:
# 4040 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 52, RebelHarborTouristAsksRebento_Movement_1
# 4041 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 52
# 4042 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 4043 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3PatientFGuest_2:
# 4011 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PatientFGuest_Text_0
	goto PetalburgHarbourTable3PatientFGuest_1

PetalburgHarbourTable3PatientFGuest_5:
# 4018 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3PatientFGuest_8
PetalburgHarbourTable3PatientFGuest_7:
# 4025 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3PatientFGuest_10
	goto PetalburgHarbourTable3PatientFGuest_4

PetalburgHarbourTable3PatientFGuest_8:
# 4021 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PatientFGuest_Text_1
	goto PetalburgHarbourTable3PatientFGuest_7

PetalburgHarbourTable3PatientFGuest_10:
# 4029 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, PetalburgHarbourTable3PatientFGuest_13
PetalburgHarbourTable3PatientFGuest_12:
# 4034 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreethirdcorrectbreakfast, PetalburgHarbourTable3PatientFGuest_15
	goto PetalburgHarbourTable3PatientFGuest_4

PetalburgHarbourTable3PatientFGuest_13:
# 4031 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PatientFGuest_Text_2
	goto PetalburgHarbourTable3PatientFGuest_12

PetalburgHarbourTable3PatientFGuest_15:
# 4036 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PatientFGuest_Text_3
# 4037 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreethirdcorrectbreakfast
	goto PetalburgHarbourTable3PatientFGuest_4


PetalburgHarbourTable3RedHairGirlGuest::
# 4050 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4051 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 5, RebelHarborTouristAsksRebento_Movement_0
# 4053 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3RedHairGirlGuest_2
PetalburgHarbourTable3RedHairGirlGuest_1:
# 4059 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3RedHairGirlGuest_5
PetalburgHarbourTable3RedHairGirlGuest_4:
# 4105 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 5, RebelHarborTouristAsksRebento_Movement_1
# 4106 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 5
# 4107 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 4108 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3RedHairGirlGuest_2:
# 4056 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3RedHairGirlGuest_Text_0
	goto PetalburgHarbourTable3RedHairGirlGuest_1

PetalburgHarbourTable3RedHairGirlGuest_5:
# 4063 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3RedHairGirlGuest_8
PetalburgHarbourTable3RedHairGirlGuest_7:
# 4070 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3RedHairGirlGuest_10
	goto PetalburgHarbourTable3RedHairGirlGuest_4

PetalburgHarbourTable3RedHairGirlGuest_8:
# 4066 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3RedHairGirlGuest_Text_1
	goto PetalburgHarbourTable3RedHairGirlGuest_7

PetalburgHarbourTable3RedHairGirlGuest_10:
# 4074 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefirstcorrectbreakfast, PetalburgHarbourTable3RedHairGirlGuest_13
PetalburgHarbourTable3RedHairGirlGuest_12:
# 4080 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreefirstcorrectbreakfast, PetalburgHarbourTable3RedHairGirlGuest_15
	goto PetalburgHarbourTable3RedHairGirlGuest_4

PetalburgHarbourTable3RedHairGirlGuest_13:
# 4076 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3RedHairGirlGuest_Text_2
	goto PetalburgHarbourTable3RedHairGirlGuest_12

PetalburgHarbourTable3RedHairGirlGuest_15:
# 4083 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 4084 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable3RedHairGirlGuest_18
PetalburgHarbourTable3RedHairGirlGuest_17:
# 4087 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable3RedHairGirlGuest_21
PetalburgHarbourTable3RedHairGirlGuest_20:
# 4090 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHarbourTakeAwayLunchNorman_Text_3, PetalburgHarbourTakeAwayLunchNorman_Text_4
# 4094 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHarbourTable3RedHairGirlGuest_24
PetalburgHarbourTable3RedHairGirlGuest_23:
# 4098 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHarbourTable3RedHairGirlGuest_27
PetalburgHarbourTable3RedHairGirlGuest_26:
# 4102 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreefirstcorrectbreakfast
	goto PetalburgHarbourTable3RedHairGirlGuest_4

PetalburgHarbourTable3RedHairGirlGuest_18:
# 4085 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3RedHairGirlGuest_Text_3
	goto PetalburgHarbourTable3RedHairGirlGuest_17

PetalburgHarbourTable3RedHairGirlGuest_21:
# 4088 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3RedHairGirlGuest_Text_4
	goto PetalburgHarbourTable3RedHairGirlGuest_20

PetalburgHarbourTable3RedHairGirlGuest_24:
# 4095 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3RedHairGirlGuest_Text_5
	goto PetalburgHarbourTable3RedHairGirlGuest_23

PetalburgHarbourTable3RedHairGirlGuest_27:
# 4099 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3RedHairGirlGuest_Text_6
	goto PetalburgHarbourTable3RedHairGirlGuest_26


PetalburgHarbourTable3PunkMGuest::
# 4113 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4114 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 55, RebelHarborTouristAsksRebento_Movement_0
# 4116 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3PunkMGuest_2
PetalburgHarbourTable3PunkMGuest_1:
# 4123 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3PunkMGuest_5
PetalburgHarbourTable3PunkMGuest_4:
# 4162 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 55, RebelHarborLoungeClerk_Movement_9
# 4163 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 55
# 4164 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 4165 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3PunkMGuest_2:
# 4119 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PunkMGuest_Text_0
	goto PetalburgHarbourTable3PunkMGuest_1

PetalburgHarbourTable3PunkMGuest_5:
# 4127 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3PunkMGuest_8
PetalburgHarbourTable3PunkMGuest_7:
# 4135 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3PunkMGuest_10
	goto PetalburgHarbourTable3PunkMGuest_4

PetalburgHarbourTable3PunkMGuest_8:
# 4130 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PunkMGuest_Text_1
	goto PetalburgHarbourTable3PunkMGuest_7

PetalburgHarbourTable3PunkMGuest_10:
# 4139 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreesecondcorrectbreakfast, PetalburgHarbourTable3PunkMGuest_13
PetalburgHarbourTable3PunkMGuest_12:
# 4144 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreesecondcorrectbreakfast, PetalburgHarbourTable3PunkMGuest_15
	goto PetalburgHarbourTable3PunkMGuest_4

PetalburgHarbourTable3PunkMGuest_13:
# 4141 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PunkMGuest_Text_2
	goto PetalburgHarbourTable3PunkMGuest_12

PetalburgHarbourTable3PunkMGuest_15:
# 4148 "data/maps/RebelHarbourLounge/scripts.pory"
	checkplayergender
# 4149 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHarbourTable3PunkMGuest_18
PetalburgHarbourTable3PunkMGuest_17:
# 4152 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHarbourTable3PunkMGuest_21
PetalburgHarbourTable3PunkMGuest_20:
# 4157 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PunkMGuest_Text_5
# 4159 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreesecondcorrectbreakfast
	goto PetalburgHarbourTable3PunkMGuest_4

PetalburgHarbourTable3PunkMGuest_18:
# 4150 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PunkMGuest_Text_3
	goto PetalburgHarbourTable3PunkMGuest_17

PetalburgHarbourTable3PunkMGuest_21:
# 4153 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PunkMGuest_Text_4
	goto PetalburgHarbourTable3PunkMGuest_20


PetalburgHarbourTable3PoorBoyGuest::
# 4171 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4172 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, RebelHarborTouristAsksRebento_Movement_0
# 4174 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3PoorBoyGuest_2
PetalburgHarbourTable3PoorBoyGuest_1:
# 4181 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3PoorBoyGuest_5
PetalburgHarbourTable3PoorBoyGuest_4:
# 4208 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 4209 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 22
# 4210 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 4211 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3PoorBoyGuest_2:
# 4177 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorBoyGuest_Text_0
	goto PetalburgHarbourTable3PoorBoyGuest_1

PetalburgHarbourTable3PoorBoyGuest_5:
# 4185 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3PoorBoyGuest_8
PetalburgHarbourTable3PoorBoyGuest_7:
# 4193 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3PoorBoyGuest_10
	goto PetalburgHarbourTable3PoorBoyGuest_4

PetalburgHarbourTable3PoorBoyGuest_8:
# 4188 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorBoyGuest_Text_1
	goto PetalburgHarbourTable3PoorBoyGuest_7

PetalburgHarbourTable3PoorBoyGuest_10:
# 4197 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreethirdcorrectbreakfast, PetalburgHarbourTable3PoorBoyGuest_13
PetalburgHarbourTable3PoorBoyGuest_12:
# 4202 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreethirdcorrectbreakfast, PetalburgHarbourTable3PoorBoyGuest_15
	goto PetalburgHarbourTable3PoorBoyGuest_4

PetalburgHarbourTable3PoorBoyGuest_13:
# 4199 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorBoyGuest_Text_2
	goto PetalburgHarbourTable3PoorBoyGuest_12

PetalburgHarbourTable3PoorBoyGuest_15:
# 4204 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorBoyGuest_Text_3
# 4205 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreethirdcorrectbreakfast
	goto PetalburgHarbourTable3PoorBoyGuest_4


PetalburgHarbourTable3PoorGirlGuest::
# 4216 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4217 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 21, RebelHarborTouristAsksRebento_Movement_0
# 4219 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3PoorGirlGuest_2
PetalburgHarbourTable3PoorGirlGuest_1:
# 4245 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3PoorGirlGuest_5
PetalburgHarbourTable3PoorGirlGuest_4:
# 4288 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 21, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 4289 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 21
# 4290 "data/maps/RebelHarbourLounge/scripts.pory"
	goto PetalburgHarbourOrderChecker
# 4291 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3PoorGirlGuest_2:
# 4223 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_0
# 4225 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 21, RebelHarborTouristAsksRebento_Movement_1
# 4227 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 13, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 4228 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 13
# 4229 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_1
# 4230 "data/maps/RebelHarbourLounge/scripts.pory"
	closemessage
# 4231 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_LEDGE
# 4232 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 13, PetalburgHarbourTable3PoorGirlGuest_Movement_0
# 4233 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 13
# 4235 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 4236 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_2
# 4238 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 13, RebelHarborLoungeClerk_Movement_9
# 4239 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 13
	goto PetalburgHarbourTable3PoorGirlGuest_1

PetalburgHarbourTable3PoorGirlGuest_5:
# 4249 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestaccepted, PetalburgHarbourTable3PoorGirlGuest_8
PetalburgHarbourTable3PoorGirlGuest_7:
# 4263 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestaccepted, PetalburgHarbourTable3PoorGirlGuest_10
	goto PetalburgHarbourTable3PoorGirlGuest_4

PetalburgHarbourTable3PoorGirlGuest_8:
# 4253 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_3
# 4254 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, RebelHarborLoungeClerk_Movement_9
# 4255 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 21, RebelHarborLoungeClerk_Movement_15
# 4256 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 21
# 4257 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_4
# 4258 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 21, PetalburgHarbourTable3PoorGirlGuest_Movement_1
# 4259 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_5
# 4260 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
	goto PetalburgHarbourTable3PoorGirlGuest_7

PetalburgHarbourTable3PoorGirlGuest_10:
# 4267 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set tablethreefourthcorrectbreakfast, PetalburgHarbourTable3PoorGirlGuest_13
PetalburgHarbourTable3PoorGirlGuest_12:
# 4273 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset tablethreefourthcorrectbreakfast, PetalburgHarbourTable3PoorGirlGuest_15
	goto PetalburgHarbourTable3PoorGirlGuest_4

PetalburgHarbourTable3PoorGirlGuest_13:
# 4269 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_6
	goto PetalburgHarbourTable3PoorGirlGuest_12

PetalburgHarbourTable3PoorGirlGuest_15:
# 4275 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_7
# 4277 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, RebelHarborLoungeClerk_Movement_9
# 4278 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 21, RebelHarborLoungeClerk_Movement_15
# 4279 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 21
# 4280 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_8
# 4281 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 21, PetalburgHarbourTable3PoorGirlGuest_Movement_1
# 4282 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3PoorGirlGuest_Text_9
# 4283 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 22, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 4285 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag tablethreefourthcorrectbreakfast
	goto PetalburgHarbourTable3PoorGirlGuest_4


PetalburgHarbourTable3Zigzagoon::
# 4297 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4298 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 13, RebelHarborTouristAsksRebento_Movement_0
# 4299 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 4300 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Zigzagoon_Text_0
# 4302 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 13, RebelHarborLoungeClerk_Movement_9
# 4303 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 13
# 4304 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return


PetalburgHarbourTable1Nosepass::
# 4308 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4309 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_NOSEPASS, CRY_MODE_NORMAL
# 4310 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable1Nosepass_Text_0
# 4312 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return


PetalburgHarbourTable2Raticate::
# 4316 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4317 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, RebelHarborTouristAsksRebento_Movement_0
# 4319 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2Raticate_2
PetalburgHarbourTable2Raticate_1:
# 4327 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2Raticate_5
PetalburgHarbourTable2Raticate_4:
# 4336 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 50, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 4337 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 50
# 4338 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2Raticate_2:
# 4322 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_WEAK
# 4323 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2Raticate_Text_0
	goto PetalburgHarbourTable2Raticate_1

PetalburgHarbourTable2Raticate_5:
# 4331 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_RATICATE, CRY_MODE_HIGH_PITCH
# 4332 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2Raticate_Text_1
	goto PetalburgHarbourTable2Raticate_4


PetalburgHarbourTable3Cubone::
# 4342 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4343 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborTouristAsksRebento_Movement_0
# 4344 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_WEAK
# 4346 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3Cubone_2
PetalburgHarbourTable3Cubone_1:
# 4352 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3Cubone_5
PetalburgHarbourTable3Cubone_4:
# 4359 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 54, RebelHarborTouristAsksRebento_Movement_1
# 4361 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3Cubone_2:
# 4348 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Cubone_Text_0
	goto PetalburgHarbourTable3Cubone_1

PetalburgHarbourTable3Cubone_5:
# 4356 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Cubone_Text_1
# 4357 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Cubone_Text_2
	goto PetalburgHarbourTable3Cubone_4


PetalburgHarbourTable3Trapinch::
# 4365 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4366 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 35, RebelHarborTouristAsksRebento_Movement_0
# 4368 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable3Trapinch_2
PetalburgHarbourTable3Trapinch_1:
# 4375 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable3Trapinch_5
PetalburgHarbourTable3Trapinch_4:
# 4383 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 35, RebelHarborLoungeClerk_Movement_9
# 4385 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable3Trapinch_2:
# 4370 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_WEAK
# 4371 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Trapinch_Text_0
	goto PetalburgHarbourTable3Trapinch_1

PetalburgHarbourTable3Trapinch_5:
# 4379 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 4380 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Trapinch_Text_1
# 4381 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable3Trapinch_Text_2
	goto PetalburgHarbourTable3Trapinch_4


PetalburgHarbourTable2Wimpod::
# 4390 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4391 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 51, RebelHarborTouristAsksRebento_Movement_0
# 4393 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_set harborloungequestdone, PetalburgHarbourTable2Wimpod_2
PetalburgHarbourTable2Wimpod_1:
# 4401 "data/maps/RebelHarbourLounge/scripts.pory"
	goto_if_unset harborloungequestdone, PetalburgHarbourTable2Wimpod_5
PetalburgHarbourTable2Wimpod_4:
# 4409 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 51, PetalburgHarbourTakeAwayDinnerSharpy_Movement_0
# 4410 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement 51
# 4411 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourTable2Wimpod_2:
# 4396 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_WIMPOD, CRY_MODE_NORMAL
# 4397 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2Wimpod_Text_0
	goto PetalburgHarbourTable2Wimpod_1

PetalburgHarbourTable2Wimpod_5:
# 4405 "data/maps/RebelHarbourLounge/scripts.pory"
	playmoncry SPECIES_WIMPOD, CRY_MODE_WEAK
# 4406 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourTable2Wimpod_Text_1
	goto PetalburgHarbourTable2Wimpod_4


PetalburgHarbourWaiterDontGoToPier::
# 4418 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4419 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborTouristAsksRebento_Movement_0
# 4421 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourWaiterDontGoToPier_Text_0
# 4424 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHarbourWaiterDontGoToPier_Text_1, PetalburgHarbourWaiterDontGoToPier_Text_2
# 4428 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHarbourWaiterDontGoToPier_2
PetalburgHarbourWaiterDontGoToPier_1:
# 4434 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHarbourWaiterDontGoToPier_5
PetalburgHarbourWaiterDontGoToPier_4:
# 4471 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborLoungeClerk_Movement_9
# 4472 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement
# 4473 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourWaiterDontGoToPier_2:
# 4429 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourWaiterDontGoToPier_Text_3
# 4430 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgHarbourWaiterDontGoToPier_Movement_0
# 4431 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgHarbourWaiterDontGoToPier_1

PetalburgHarbourWaiterDontGoToPier_5:
# 4435 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourWaiterDontGoToPier_Text_4
# 4439 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungequestaccepted
# 4440 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag morningstartwaiterquest
# 4441 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag daystartwaiterquest
# 4442 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag nightstartwaiterquest
# 4443 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborloungequestdone
# 4446 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 0
# 4447 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERFIRSTTABLESUCCESS, 0
# 4448 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERSECONDTABLESUCCESS, 0
# 4449 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERTHIRDTABLESUCCESS, 0
# 4450 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERCANTLEAVE, 0
# 4452 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tableonefirstcorrectbreakfast
# 4453 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tableonesecondcorrectbreakfast
# 4455 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 4456 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 4457 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 4458 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 4460 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 4461 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 4462 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 4463 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 4465 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeoutbgm 1
# 4466 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeinbgm 1
# 4467 "data/maps/RebelHarbourLounge/scripts.pory"
	playbgm MUS_PIRATESGUIGE, TRUE
	goto PetalburgHarbourWaiterDontGoToPier_4


PetalburgHarbourWaiterDontGoToMainRoom::
# 4478 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4479 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 4, RebelHarborTouristAsksRebento_Movement_0
# 4481 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourWaiterDontGoToPier_Text_0
# 4484 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHarbourWaiterDontGoToPier_Text_1, PetalburgHarbourWaiterDontGoToPier_Text_2
# 4488 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHarbourWaiterDontGoToMainRoom_2
PetalburgHarbourWaiterDontGoToMainRoom_1:
# 4494 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHarbourWaiterDontGoToMainRoom_5
PetalburgHarbourWaiterDontGoToMainRoom_4:
# 4531 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourWaiterDontGoToMainRoom_2:
# 4489 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourWaiterDontGoToPier_Text_3
# 4490 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgHarbourWaiterDontGoToMainRoom_Movement_0
# 4491 "data/maps/RebelHarbourLounge/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PetalburgHarbourWaiterDontGoToMainRoom_1

PetalburgHarbourWaiterDontGoToMainRoom_5:
# 4495 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourWaiterDontGoToPier_Text_4
# 4499 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag harborloungequestaccepted
# 4500 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag morningstartwaiterquest
# 4501 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag daystartwaiterquest
# 4502 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag nightstartwaiterquest
# 4503 "data/maps/RebelHarbourLounge/scripts.pory"
	setflag harborloungequestdone
# 4506 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERQUEST, 0
# 4507 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERFIRSTTABLESUCCESS, 0
# 4508 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERSECONDTABLESUCCESS, 0
# 4509 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERTHIRDTABLESUCCESS, 0
# 4510 "data/maps/RebelHarbourLounge/scripts.pory"
	setvar VAR_WAITERCANTLEAVE, 0
# 4512 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tableonefirstcorrectbreakfast
# 4513 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tableonesecondcorrectbreakfast
# 4515 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofirstcorrectbreakfast
# 4516 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwosecondcorrectbreakfast
# 4517 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwothirdcorrectbreakfast
# 4518 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tabletwofourthcorrectbreakfast
# 4520 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefirstcorrectbreakfast
# 4521 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreesecondcorrectbreakfast
# 4522 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreethirdcorrectbreakfast
# 4523 "data/maps/RebelHarbourLounge/scripts.pory"
	clearflag tablethreefourthcorrectbreakfast
# 4525 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeoutbgm 1
# 4526 "data/maps/RebelHarbourLounge/scripts.pory"
	fadeinbgm 1
# 4527 "data/maps/RebelHarbourLounge/scripts.pory"
	playbgm MUS_PIRATESGUIGE, TRUE
	goto PetalburgHarbourWaiterDontGoToMainRoom_4


PetalburgHarbourKitchenHelperBlocking::
# 4536 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4537 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 42, RebelHarborTouristAsksRebento_Movement_0
# 4539 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_PETALBURG_PHASE, 2
	goto_if_lt PetalburgHarbourKitchenHelperBlocking_2
PetalburgHarbourKitchenHelperBlocking_1:
# 4545 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_PETALBURG_PHASE, 2
	goto_if_gt PetalburgHarbourKitchenHelperBlocking_5
PetalburgHarbourKitchenHelperBlocking_4:
# 4552 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourKitchenHelperBlocking_2:
# 4541 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourKitchenHelperBlocking_Text_0
	goto PetalburgHarbourKitchenHelperBlocking_1

PetalburgHarbourKitchenHelperBlocking_5:
# 4547 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourKitchenHelperBlocking_Text_0
	goto PetalburgHarbourKitchenHelperBlocking_4


PetalburgHarbourKitchenHelperCleaning::
# 4556 "data/maps/RebelHarbourLounge/scripts.pory"
	lock
# 4559 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_PETALBURG_PHASE, 2
	goto_if_lt PetalburgHarbourKitchenHelperCleaning_2
PetalburgHarbourKitchenHelperCleaning_1:
# 4565 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_PETALBURG_PHASE, 2
	goto_if_gt PetalburgHarbourKitchenHelperCleaning_5
PetalburgHarbourKitchenHelperCleaning_4:
# 4577 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 43, RebelHarborLoungeClerk_Movement_15
# 4579 "data/maps/RebelHarbourLounge/scripts.pory"
	release
	return

PetalburgHarbourKitchenHelperCleaning_2:
# 4561 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourKitchenHelperBlocking_Text_0
	goto PetalburgHarbourKitchenHelperCleaning_1

PetalburgHarbourKitchenHelperCleaning_5:
# 4568 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_BUBBLE
# 4569 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 4570 "data/maps/RebelHarbourLounge/scripts.pory"
	playse SE_M_BUBBLE
# 4571 "data/maps/RebelHarbourLounge/scripts.pory"
	waitse
# 4572 "data/maps/RebelHarbourLounge/scripts.pory"
	applymovement 43, RebelHarborTouristAsksRebento_Movement_0
# 4573 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourKitchenHelperCleaning_Text_0
	goto PetalburgHarbourKitchenHelperCleaning_4


trashscript::
# 4585 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox trashscript_Text_0
# 4589 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_PETALBURG_PHASE, 6
	goto_if_lt trashscript_2
trashscript_1:
# 4591 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_PETALBURG_PHASE, 6
	goto_if_eq trashscript_4
	return

trashscript_2:
# 4590 "data/maps/RebelHarbourLounge/scripts.pory"
	bufferstring STR_VAR_1, trashscript_Text_1
	goto trashscript_1

trashscript_4:
# 4592 "data/maps/RebelHarbourLounge/scripts.pory"
	bufferstring STR_VAR_1, trashscript_Text_2
	return


PetalburgHarbourMenuList::
# 4598 "data/maps/RebelHarbourLounge/scripts.pory"
	msgbox PetalburgHarbourMenuList_Text_0
# 4600 "data/maps/RebelHarbourLounge/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, RebelHarborLoungeClerk_Text_40, RebelHarborLoungeClerk_Text_21, RebelHarborLoungeClerk_Text_22, RebelHarborLoungeClerk_Text_23, RebelHarborLoungeClerk_Text_24, RebelHarborLoungeClerk_Text_25, RebelHarborLoungeClerk_Text_26, RebelHarborLoungeClerk_Text_27, RebelHarborLoungeClerk_Text_28, RebelHarborLoungeClerk_Text_29, RebelHarborLoungeClerk_Text_30, RebelHarborLoungeClerk_Text_31, RebelHarborLoungeClerk_Text_32, RebelHarborLoungeClerk_Text_33, RebelHarborLoungeClerk_Text_34, RebelHarborLoungeClerk_Text_35, RebelHarborLoungeClerk_Text_36, RebelHarborLoungeClerk_Text_37
# 4620 "data/maps/RebelHarbourLounge/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHarbourMenuList_1
	return

PetalburgHarbourMenuList_1:
	return


# 153 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborTouristAsksRebento_Movement_0:
# 153 "data/maps/RebelHarbourLounge/scripts.pory"
	face_player
	step_end

# 158 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborTouristAsksRebento_Movement_1:
# 158 "data/maps/RebelHarbourLounge/scripts.pory"
	face_right
	step_end

# 294 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_0:
# 294 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 294 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 294 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
	step_end

# 295 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_1:
# 295 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 295 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 295 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
	step_end

# 298 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_2:
# 298 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_in_place_right
	step_end

# 306 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_3:
# 306 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_in_place_down
	step_end

# 329 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_4:
# 329 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 329 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
	step_end

# 412 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_5:
# 412 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 412 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 412 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 412 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
	step_end

# 543 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_6:
# 543 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 543 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 543 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 543 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 543 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 543 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
	step_end

# 1016 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_7:
# 1016 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 1016 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 1016 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 1016 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 1016 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
# 1016 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
	step_end

# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_8:
# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 1476 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
	step_end

# 1664 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_9:
# 1664 "data/maps/RebelHarbourLounge/scripts.pory"
	face_down
	step_end

# 1678 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_10:
# 1678 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 1678 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 1678 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
# 1678 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_down
	step_end

# 1692 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_11:
# 1692 "data/maps/RebelHarbourLounge/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 1743 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_12:
# 1743 "data/maps/RebelHarbourLounge/scripts.pory"
	emote_heart
	step_end

# 1894 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_13:
# 1894 "data/maps/RebelHarbourLounge/scripts.pory"
	emote_x
	step_end

# 2302 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_14:
# 2302 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 2302 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 2302 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
# 2302 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_up
	step_end

# 2307 "data/maps/RebelHarbourLounge/scripts.pory"
RebelHarborLoungeClerk_Movement_15:
# 2307 "data/maps/RebelHarbourLounge/scripts.pory"
	face_up
	step_end

# 2826 "data/maps/RebelHarbourLounge/scripts.pory"
PetalburgHarbourTakeAwayDinnerSharpy_Movement_0:
# 2826 "data/maps/RebelHarbourLounge/scripts.pory"
	face_left
	step_end

# 4232 "data/maps/RebelHarbourLounge/scripts.pory"
PetalburgHarbourTable3PoorGirlGuest_Movement_0:
# 4232 "data/maps/RebelHarbourLounge/scripts.pory"
	jump_in_place_left
	step_end

# 4258 "data/maps/RebelHarbourLounge/scripts.pory"
PetalburgHarbourTable3PoorGirlGuest_Movement_1:
# 4258 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_in_place_up
	step_end

# 4430 "data/maps/RebelHarbourLounge/scripts.pory"
PetalburgHarbourWaiterDontGoToPier_Movement_0:
# 4430 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_right
	step_end

# 4490 "data/maps/RebelHarbourLounge/scripts.pory"
PetalburgHarbourWaiterDontGoToMainRoom_Movement_0:
# 4490 "data/maps/RebelHarbourLounge/scripts.pory"
	walk_left
	step_end

RebelHarborTouristAsksRebento_Text_0:
# 155 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "This is foreign discrimination, plain and\n"
	.string "simple!\p"
	.string "I've heard they sell a Rebel-themed\n"
	.string "lunch box here, called Rebento!\p"
	.string "But they won't sell it to me - surely\n"
	.string "because I'm a foreigner!$"

RebelHarborGuyCalmsTourist_Text_0:
# 165 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "SSSSH. You've got it all wrong pal.\n"
	.string "Believe me, you don't want one of those.\p"
	.string "Just get a Petalburguer and sit your\n"
	.string "fat arse down.$"

RebelHarborLoungeClerkOverCounter_Text_0:
# 175 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hey, don't invade my space! If you want\n"
	.string "to order, go over the counter.$"

RebelHarborLoungeClerk_Text_0:
# 191 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "What do you want?$"

RebelHarborLoungeClerk_Text_1:
# 195 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Order food$"

RebelHarborLoungeClerk_Text_2:
# 196 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Special order$"

RebelHarborLoungeClerk_Text_3:
# 197 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Part time job$"

RebelHarborLoungeClerk_Text_4:
# 198 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Leave$"

RebelHarborLoungeClerk_Text_5:
# 212 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You already worked here today. We're\n"
	.string "not hiring full-time, sorry!$"

RebelHarborLoungeClerk_Text_6:
# 223 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You come just in time. We could use a\n"
	.string "couple extra hands for breakfast.$"

RebelHarborLoungeClerk_Text_7:
# 230 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You come just in time. We could use a\n"
	.string "couple extra hands for lunch.$"

RebelHarborLoungeClerk_Text_8:
# 236 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We don't need any help on the evenings.\p"
	.string "But come back on the morning, midday or\n"
	.string "night, and we'll likely do.$"

RebelHarborLoungeClerk_Text_9:
# 244 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You come just in time. We could use a\n"
	.string "couple extra hands for dinner.$"

RebelHarborLoungeClerk_Text_10:
# 250 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "... well, one hand, in your case.$"

RebelHarborLoungeClerk_Text_11:
# 251 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "3000¥ per shift, with deductions if you\n"
	.string "mess up. You in?$"

RebelHarborLoungeClerk_Text_12:
# 254 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Sure$"

RebelHarborLoungeClerk_Text_13:
# 255 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "No thanks$"

RebelHarborLoungeClerk_Text_14:
# 258 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Well, they're also hiring on the cargo\n"
	.string "bay, if that's more your fancy.$"

RebelHarborLoungeClerk_Text_15:
# 264 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Great - go and get those orders then!$"

RebelHarborLoungeClerk_Text_16:
# 302 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Oh, seems we got some customers for\n"
	.string "takeaway. Take their orders too.$"

RebelHarborLoungeClerk_Text_17:
# 336 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Oh, seems we got a customer for\n"
	.string "takeaway. Take his order too.$"

RebelHarborLoungeClerk_Text_18:
# 405 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "What are you waiting for? You haven't\n"
	.string "picked everyone's orders!$"

RebelHarborLoungeClerk_Text_19:
# 410 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Alright, let's go over the orders.$"

RebelHarborLoungeClerk_Text_20:
# 415 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "What does Table 1 want?$"

RebelHarborLoungeClerk_Text_21:
# 420 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Barboach Caviar$"

RebelHarborLoungeClerk_Text_22:
# 421 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Boiled Shellder$"

RebelHarborLoungeClerk_Text_23:
# 422 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Carvanha Fin Soup$"

RebelHarborLoungeClerk_Text_24:
# 423 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Corphish Legs$"

RebelHarborLoungeClerk_Text_25:
# 424 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Dried Feebas$"

RebelHarborLoungeClerk_Text_26:
# 425 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Magikarp Sushi$"

RebelHarborLoungeClerk_Text_27:
# 426 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Murkrow Egg$"

RebelHarborLoungeClerk_Text_28:
# 427 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Petalburger$"

RebelHarborLoungeClerk_Text_29:
# 428 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Octiyaki$"

RebelHarborLoungeClerk_Text_30:
# 429 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Slateport Pizza$"

RebelHarborLoungeClerk_Text_31:
# 430 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Sautéed Shiitako$"

RebelHarborLoungeClerk_Text_32:
# 431 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Seedot Nuts$"

RebelHarborLoungeClerk_Text_33:
# 432 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Shaved Aryscream$"

RebelHarborLoungeClerk_Text_34:
# 433 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Shuckle Juice$"

RebelHarborLoungeClerk_Text_35:
# 434 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Swablu Candy$"

RebelHarborLoungeClerk_Text_36:
# 435 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Swinub Bacon$"

RebelHarborLoungeClerk_Text_37:
# 436 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Wingull Wings$"

RebelHarborLoungeClerk_Text_38:
# 547 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Alright. What about Table 2?$"

RebelHarborLoungeClerk_Text_39:
# 781 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Anything else on Table 2?$"

RebelHarborLoungeClerk_Text_40:
# 786 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "No, nothing$"

RebelHarborLoungeClerk_Text_41:
# 1020 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Alright. To finish up, tell me what Table\n"
	.string "3 has ordered.$"

RebelHarborLoungeClerk_Text_42:
# 1245 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Anything else on Table 3?$"

RebelHarborLoungeClerk_Text_43:
# 1266 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Swinub Ham$"

RebelHarborLoungeClerk_Text_44:
# 1489 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "And last but not least... what did the\n"
	.string "takeaway fellows order?$"

RebelHarborLoungeClerk_Text_45:
# 1530 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "And last but not least... what did the\n"
	.string "takeaway fellow order?$"

RebelHarborLoungeClerk_Text_46:
# 1608 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Very well. I'll take this to the cook.\n"
	.string "Standby to deliver the orders!$"

RebelHarborLoungeClerk_Text_47:
# 1673 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR GREEN}{PLAYER} has delivered the orders,\n"
	.string "and observes the guests' reaction...$"

RebelHarborLoungeClerk_Text_48:
# 1731 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 1 does not seem very happy.$"

RebelHarborLoungeClerk_Text_49:
# 1782 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 1 seems quite happy.$"

RebelHarborLoungeClerk_Text_50:
# 1866 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 2 does not seem very happy.$"

RebelHarborLoungeClerk_Text_51:
# 1874 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Next holidays, we're going to Jotho\n"
	.string "dear!$"

RebelHarborLoungeClerk_Text_52:
# 1881 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm sorry sweetheart... please try to\n"
	.string "eat it anyway.$"

RebelHarborLoungeClerk_Text_53:
# 1960 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "There seems to have been a mistake in\n"
	.string "Table 2...$"

RebelHarborLoungeClerk_Text_54:
# 2037 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 2 seems quite happy.$"

RebelHarborLoungeClerk_Text_55:
# 2124 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 3 does not seem very happy.$"

RebelHarborLoungeClerk_Text_56:
# 2130 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE} I-I think I'm allergic to this...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

RebelHarborLoungeClerk_Text_57:
# 2215 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "There seems to have been a mistake in\n"
	.string "Table 3...$"

RebelHarborLoungeClerk_Text_58:
# 2295 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Table 3 seems quite happy.$"

RebelHarborLoungeClerk_Text_59:
# 2319 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "... you did not get a single order right.\n"
	.string "That's kind of impressive.$"

RebelHarborLoungeClerk_Text_60:
# 2322 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "What's not impressive is your pay -\n"
	.string "500¥.$"

RebelHarborLoungeClerk_Text_61:
# 2330 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "And be thankful it doesn't come with a\n"
	.string "Megakick as a tip.$"

RebelHarborLoungeClerk_Text_62:
# 2336 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You got a single correct order right.\n"
	.string "Wonder if it was pure luck...$"

RebelHarborLoungeClerk_Text_63:
# 2341 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Speaking of luck, you're lucky I'm even\n"
	.string "paying you these 1000¥.$"

RebelHarborLoungeClerk_Text_64:
# 2350 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Now get out of my sight.$"

RebelHarborLoungeClerk_Text_65:
# 2355 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You got only a couple orders right. Were\n"
	.string "you even paying attention?$"

RebelHarborLoungeClerk_Text_66:
# 2358 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Well, here's all I can give you for your\n"
	.string "lousy work - 1500¥.$"

RebelHarborLoungeClerk_Text_67:
# 2366 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If you think you can do better, you can\n"
	.string "come help again. See ya.$"

RebelHarborLoungeClerk_Text_68:
# 2373 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You got two orders wrong... well. It's\n"
	.string "not like people expect much better in\l"
	.string "this joint.$"

RebelHarborLoungeClerk_Text_69:
# 2376 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Still, I need to deduct 1000¥ from your\n"
	.string "pay. I don't make the rules.$"

RebelHarborLoungeClerk_Text_70:
# 2384 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Could use you tomorrow too. Evenings\n"
	.string "aside, we're busy all the time.$"

RebelHarborLoungeClerk_Text_71:
# 2392 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You got one order wrong, but that's\n"
	.string "better than our average part-timer.$"

RebelHarborLoungeClerk_Text_72:
# 2400 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Good job today. If you need some quick\n"
	.string "cash again, come right back.$"

RebelHarborLoungeClerk_Text_73:
# 2408 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Wow, you got every order right. I'm\n"
	.string "impressed.$"

RebelHarborLoungeClerk_Text_74:
# 2413 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You might be the best waiter we've had.\n"
	.string "Here's your full pay.$"

RebelHarborLoungeClerk_Text_75:
# 2417 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You might be the best waitress we've\n"
	.string "had. Here's your full pay.$"

RebelHarborLoungeClerk_Text_76:
# 2426 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We'd be happy to have you help out\n"
	.string "tomorrow!$"

RebelHarborLoungeClerk_Text_77:
# 2432 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Wow, you did not miss a single order. Not\n"
	.string "even the takeaway.$"

RebelHarborLoungeClerk_Text_78:
# 2437 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You have a tip from that end, so you get\n"
	.string "full pay, plus a little extra!$"

RebelHarborLoungeClerk_Text_79:
# 2452 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Bad gateway.$"

PetalburgHarbourTakeAwayBreakfastBalsam_Text_0:
# 2590 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{PLAYER}...? Fancy meeting you here.\n"
	.string "Wait, you work here?$"

PetalburgHarbourTakeAwayBreakfastBalsam_Text_1:
# 2594 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "That's great. I'm happy to see you're\n"
	.string "readapting to society so quickly.$"

PetalburgHarbourTakeAwayBreakfastBalsam_Text_2:
# 2598 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We'll have some Swinub Bacon to take.\n"
	.string "It'll be a long day of research ahead\l"
	.string "for us, so we need some protein-rich\l"
	.string "breakfast.$"

PetalburgHarbourTakeAwayBreakfastBalsam_Text_3:
# 2608 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Sorry for giving you extra work - seems\n"
	.string "like a busy morning here.\p"
	.string "Try to get us that Swinub Bacon, and\n"
	.string "we'll be off.$"

PetalburgHarbourTakeAwayBreakfastAide_Text_0:
# 2626 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{PLAYER}! The Rebel Zone is a small\n"
	.string "world, isn't it?$"

PetalburgHarbourTakeAwayBreakfastAide_Text_1:
# 2630 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I see you have your own work now, but I\n"
	.string "hope you can still help us with ours.$"

PetalburgHarbourTakeAwayBreakfastAide_Text_2:
# 2637 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "... in particular, that Voltorb Shard we\n"
	.string "asked you to find some time ago.$"

PetalburgHarbourTakeAwayBreakfastAide_Text_3:
# 2642 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You know what I mean. I'm always\n"
	.string "expecting your contributions!$"

PetalburgHarbourTakeAwayBreakfastAide_Text_4:
# 2647 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "But let's leave that chat for a more\n"
	.string "private place. Balsam will take our\l"
	.string "order - I've never been too picky.$"

PetalburgHarbourTakeAwayBreakfastAide_Text_5:
# 2656 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Oh, if you want to get back to\n"
	.string "Littleroot quickly...$"

PetalburgHarbourTakeAwayBreakfastAide_Text_6:
# 2660 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "There's a tunnel shortcut you can take\n"
	.string "in Petalburg Beach.$"

PetalburgHarbourTakeAwayBreakfastAide_Text_7:
# 2666 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If you give us a hand with that favour\n"
	.string "we asked you, I'd be happy to tell you\l"
	.string "more about it.$"

PetalburgHarbourTakeAwayBreakfastAide_Text_8:
# 2674 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We had that built with a herd of\n"
	.string "Digletts the Kanto Rebels sent us.$"

PetalburgHarbourTakeAwayBreakfastAide_Text_9:
# 2678 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "It should be useful if a certain\n"
	.string "company comes knocking on our door...$"

PetalburgHarbourTakeAwayBreakfastAide_Text_10:
# 2682 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "But I hope we never need to find out!$"

PetalburgHarbourTakeAwayBreakfastAide_Text_11:
# 2691 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If a certain company comes knocking\n"
	.string "again, we may need to use it...$"

PetalburgHarbourTakeAwayBreakfastAide_Text_12:
# 2695 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Unless we can count on you to deal with\n"
	.string "them again!$"

PetalburgHarbourTakeAwayLunchNorman_Text_0:
# 2715 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{PLAYER}... I thought that was you. So\n"
	.string "you're part-timing here?$"

PetalburgHarbourTakeAwayLunchNorman_Text_1:
# 2720 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You're a hard worker. I guess that\n"
	.string "comes in the family.$"

PetalburgHarbourTakeAwayLunchNorman_Text_2:
# 2724 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "But if you are ever too short on money...\n"
	.string "I want you to let me help. Will you?$"

PetalburgHarbourTakeAwayLunchNorman_Text_3:
# 2727 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Yes$"

PetalburgHarbourTakeAwayLunchNorman_Text_4:
# 2728 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "No$"

PetalburgHarbourTakeAwayLunchNorman_Text_5:
# 2733 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Thank you. I know it does not\n"
	.string "compensate for... anything, really.$"

PetalburgHarbourTakeAwayLunchNorman_Text_6:
# 2737 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "But I'd be happy to help you in that\n"
	.string "regard. I have a bit saved up from my\l"
	.string "gym leader days. It's the least I can do.$"

PetalburgHarbourTakeAwayLunchNorman_Text_7:
# 2744 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I see... of course you won't. And I have\n"
	.string "no right to complain.$"

PetalburgHarbourTakeAwayLunchNorman_Text_8:
# 2748 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "But if you ever change your mind, my\n"
	.string "offer will always stand.$"

PetalburgHarbourTakeAwayLunchNorman_Text_9:
# 2753 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "As for my order, I'll have some Magikarp\n"
	.string "Sushi. Please, I am in no hurry.$"

PetalburgHarbourTakeAwayLunchNorman_Text_10:
# 2762 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If you find yourself in financial need -\n"
	.string "please, consider my offer.$"

PetalburgHarbourTakeAwayLunchNorman_Text_11:
# 2766 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "But I won't insist. Now, how is that\n"
	.string "Magikarp Sushi coming along?$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_0:
# 2784 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Wow, {PLAYER} - you're having dinner\n"
	.string "here too?$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_1:
# 2794 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "He's working here, silly.$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_2:
# 2797 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "She's working here, silly.$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_3:
# 2806 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{PLAYER} - can we have a Petalburg\n"
	.string "Pizza, to take?$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_4:
# 2811 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Oh yeah - with extra cheese! We're\n"
	.string "sharing it with Norman back at the dojo!$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_5:
# 2816 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Oh, I'm sorry... should have told you, and\n"
	.string "make sure you were free.$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_6:
# 2820 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Yeah, it was all Sharpy's improv plan...$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_7:
# 2824 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "That means, we'll invite you next time,\n"
	.string "and he has to pay!$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_8:
# 2830 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You're o-...$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_9:
# 2834 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Wait, why do I have to pay!?$"

PetalburgHarbourTakeAwayDinnerSharpy_Text_10:
# 2843 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Is the pizza ready yet? Not rushing you\n"
	.string "guys or anything, but I'm peckish!$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_0:
# 2860 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "So you're working here, {PLAYER}?$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_1:
# 2866 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Well, now I feel self-conscious. Sharpy,\n"
	.string "we should find work too.$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_2:
# 2872 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Y-you're right! We can't depend on\n"
	.string "Norman forever!$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_3:
# 2876 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I've sailed with my dad tons of times, so\n"
	.string "I could work as a sailor in this harbor!$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_4:
# 2883 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "As for me... I'm a good organizer, so\n"
	.string "perhaps I can work at the DLC's\l"
	.string "library...$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_5:
# 2888 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "But that means working for Devon. Ugh...\n"
	.string "anyways...$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_6:
# 2895 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We'll have Slateport Pizza to take,\n"
	.string "{PLAYER}. Take your time.$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_7:
# 2901 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Extra cheese, please!$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_8:
# 2905 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We'll make sure you're free next time,\n"
	.string "and eat one together at the dojo!$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_9:
# 2915 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Don't mind us too much, {PLAYER}.\n"
	.string "Don't want to interfere with your work.$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_10:
# 2920 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll make sure this ravenous guy here\n"
	.string "doesn't assault your kitchen.$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_11:
# 2926 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hey, you're the one whose stomach is\n"
	.string "rumbling here!$"

PetalburgHarbourTakeAwayDinnerCamelia_Text_12:
# 2932 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "S-shut up!$"

PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_0:
# 2950 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I still have room for a bit more...$"

PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_1:
# 2956 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I never get tired of the burgers here,\n"
	.string "but maybe I'll try something new\l"
	.string "today...$"

PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_2:
# 2966 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Are you deaf? I said I want a\n"
	.string "Petalburger! Come on, I'm starving here!$"

PetalburgHarbourTable1YoungFatManGuestBreakfast_Text_3:
# 2971 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hmm... I'll have a Slateport Pizz-... nay,\n"
	.string "a Petalburger!$"

PetalburgHarbourTable1OldFatManGuestBreakfast_Text_0:
# 2991 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm just waiting for Nosepass to finish\n"
	.string "eating now.\p"
	.string "One more floor tile ought to do it.$"

PetalburgHarbourTable1OldFatManGuestBreakfast_Text_1:
# 3002 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Some people need to buy food for their\n"
	.string "Pokémon - but me?\p"
	.string "My Nosepass eats rocks and stuff like\n"
	.string "that. Talk about cost-effective!$"

PetalburgHarbourTable1OldFatManGuestBreakfast_Text_2:
# 3012 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Is the bacon ready yet? Don't tell me\n"
	.string "you've ran out of it!$"

PetalburgHarbourTable1OldFatManGuestBreakfast_Text_3:
# 3018 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Swinub Bacon.$"

PetalburgHarbourTable1OldFatManGuestLunch_Text_0:
# 3101 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Where are those Win-Wins at!?$"

PetalburgHarbourTable1OldFatManGuestLunch_Text_1:
# 3107 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Wingull Wings - or how I\n"
	.string "like to call them... Win-Wins!$"

PetalburgHarbourTable1YoungFatManGuestDinner_Text_0:
# 3129 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Boy, I'm stuffed...$"

PetalburgHarbourTable1YoungFatManGuestDinner_Text_1:
# 3145 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm not smelling that patty being\n"
	.string "cooked! Come on, hurry it up!$"

PetalburgHarbourTable1YoungFatManGuestDinner_Text_2:
# 3150 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I don't care if it has Ratatta's meat.\p"
	.string "Get me a Petalburger for dinner, and I\n"
	.string "go to bed a happy man!$"

PetalburgHarbourTable1OldFatManGuestDinner_Text_0:
# 3172 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "My Nosepass has been eating floor tiles\n"
	.string "all day... now it's sick.\p"
	.string "I think this food is making me sick\n"
	.string "too...$"

PetalburgHarbourTable1OldFatManGuestDinner_Text_1:
# 3193 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Didn't you just take my order? A\n"
	.string "Petalburg Pizza, no topping change.$"

PetalburgHarbourTable1OldFatManGuestDinner_Text_2:
# 3199 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have a Petalburg Pizza.$"

PetalburgHarbourTable2WageSlaveGuest_Text_0:
# 3227 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If only I could buy some dessert for\n"
	.string "her now...$"

PetalburgHarbourTable2WageSlaveGuest_Text_1:
# 3237 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I wish I could afford to take my\n"
	.string "daugther to a nicer place than this...\p"
	.string "But some people can't even afford this,\n"
	.string "so perhaps I should not complain.$"

PetalburgHarbourTable2WageSlaveGuest_Text_2:
# 3246 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Nothing else, only the Murkrow Egg. I'll\n"
	.string "share it with my daugther.$"

PetalburgHarbourTable2WageSlaveGuest_Text_3:
# 3251 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "A Murkrow Egg, sunny side up, please.$"

PetalburgHarbourTable2DaugtherGuest_Text_0:
# 3273 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Psst...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Don't tell daddy, but I'm eating slowly\n"
	.string "so we can be together longer.$"

PetalburgHarbourTable2DaugtherGuest_Text_1:
# 3286 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "When I'm a good girl, my daddy brings me\n"
	.string "here to have breakfast!\p"
	.string "But then he says he's not hungry, and I\n"
	.string "eat most of it.\p"
	.string "I think he's just picky!$"

PetalburgHarbourTable2DaugtherGuest_Text_2:
# 3298 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Sir, when is my Shuckle Juice coming?\n"
	.string "Are they asking the Shuckle for it now?$"

PetalburgHarbourTable2DaugtherGuest_Text_3:
# 3302 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Miss, when is my Shuckle Juice coming?\n"
	.string "Are they asking the Shuckle for it now?$"

PetalburgHarbourTable2DaugtherGuest_Text_4:
# 3309 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Daddy said I can have some Shuckle\n"
	.string "Juice with my egg! Can I?\p"
	.string "Do you ask the Shuckle nicely to give it\n"
	.string "to you?$"

PetalburgHarbourTable2DaugtherGuest_Text_5:
# 3317 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "That's so cool! Maybe I'll ask my dad for\n"
	.string "a Shuckle for my birthday.$"

PetalburgHarbourTable2DaugtherGuest_Text_6:
# 3321 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Oh no, please don't be mean to the\n"
	.string "Shuckle! Don't steal its juice!$"

PetalburgHarbourTable2MercenaryMGuest_Text_0:
# 3346 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I tell you, you're bursting your ass for\n"
	.string "pennies working for that bitchy punk.\p"
	.string "You should become a freelancer. You own\n"
	.string "boss, your own rules - that's the way.$"

PetalburgHarbourTable2MercenaryMGuest_Text_1:
# 3358 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I swear, this fat rat of a Pokémon eats\n"
	.string "more every day. Gonna be my ruin.$"

PetalburgHarbourTable2MercenaryMGuest_Text_2:
# 3368 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Come on, your cook went to fish that\n"
	.string "Feebas to Fortree or what?\p"
	.string "And don't forget about the Wingull\n"
	.string "Wings for my Raticate.$"

PetalburgHarbourTable2MercenaryMGuest_Text_3:
# 3374 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Some Dried Feebas for me, and Wingull\n"
	.string "Wings for my Raticate.$"

PetalburgHarbourTable2MercenaryMGuest_Text_4:
# 3378 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "But dont' feed them to it. Might chomp\n"
	.string "your good leg off, hehe.$"

PetalburgHarbourTable2MercenaryMGuest_Text_5:
# 3381 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "But dont' feed them to it. Might chomp\n"
	.string "your good arm off, hehe.$"

PetalburgHarbourTable2TouristMGuest_Text_0:
# 3406 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm scoring one star to this place on\n"
	.string "the Devon Net.\p"
	.string "That tasted like mud!$"

PetalburgHarbourTable2TouristMGuest_Text_1:
# 3417 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Don't distract me, please! I'm scouring\n"
	.string "the Devon Net for recommendations on\l"
	.string "what to eat here!$"

PetalburgHarbourTable2TouristMGuest_Text_2:
# 3426 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Yes, I'm pretty sure it was a Dried\n"
	.string "Feebas. It sounds so exotic!$"

PetalburgHarbourTable2TouristMGuest_Text_3:
# 3431 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "That guide said something about\n"
	.string "“Harbour Specialties”. What were them\l"
	.string "now...?\p"
	.string "Ah, I remember now - a Dried Feebas,\n"
	.string "please!$"

PetalburgHarbourTable2TouristFGuest_Text_0:
# 3454 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I think we ought to live off boxed\n"
	.string "lunches from the Devon Center, during\l"
	.string "the rest of our stay...$"

PetalburgHarbourTable2TouristFGuest_Text_1:
# 3465 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm on a mission to taste all of the\n"
	.string "dishes made with crab Pokémon around\l"
	.string "the world!\p"
	.string "We only have two species in Kalos, so I\n"
	.string "have tons to discover still.$"

PetalburgHarbourTable2TouristFGuest_Text_2:
# 3474 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I wonder if they taste like the Krabby\n"
	.string "legs I had in Kanto...$"

PetalburgHarbourTable2TouristFGuest_Text_3:
# 3479 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Bonjour! I'll have a ration of Corphish\n"
	.string "Legs, please!$"

PetalburgHarbourTable2RebelGuest_Text_0:
# 3503 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "...\p"
	.string "That was my Wimpod farting, not me.$"

PetalburgHarbourTable2RebelGuest_Text_1:
# 3513 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Bad food, slow service, grimey tables.\n"
	.string "That's the Harbor Lounge.\p"
	.string "But the food is cheap, and that's what\n"
	.string "we're all here for, right?$"

PetalburgHarbourTable2RebelGuest_Text_2:
# 3522 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Remember - extra mass on that pizza.\n"
	.string "Last time it was thinner than a\l"
	.string "Stunkfish.\p"
	.string "And don't forget about the Octiyaki$"

PetalburgHarbourTable2RebelGuest_Text_3:
# 3528 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Finally, someone taking orders. Get me a\n"
	.string "fat Slateport Pizza, extra mass.\p"
	.string "Oh, and some Octiyaki for my Wimpod.$"

PetalburgHarbourTable2ClerkMGuest_Text_0:
# 3557 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "O-oh, hey there! Guess you bring the\n"
	.string "bill? Right, just a sec...$"

PetalburgHarbourTable2ClerkMGuest_Text_1:
# 3560 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE} Psst, honey... did you bring your\n"
	.string "Running Shoes?$"

PetalburgHarbourTable2ClerkMGuest_Text_2:
# 3573 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We're going all out tonight! Pokéyen\n"
	.string "burning a hole through my pocket!$"

PetalburgHarbourTable2ClerkMGuest_Text_3:
# 3581 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Where's that Barboach Caviar at! Bring\n"
	.string "it soon, and I'll leave a fat tip!$"

PetalburgHarbourTable2ClerkMGuest_Text_4:
# 3587 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm treating my babe to the dinner she\n"
	.string "deserves tonight!\p"
	.string "And that means we'll have your best\n"
	.string "Barboach Caviar!$"

PetalburgHarbourTable2ClerkFGuest_Text_0:
# 3610 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "He's the one who ordered. He wanted to\n"
	.string "be the big man. So he pays!$"

PetalburgHarbourTable2ClerkFGuest_Text_1:
# 3620 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If this guy makes us pull a dine and\n"
	.string "dash again, we're done.$"

PetalburgHarbourTable2ClerkFGuest_Text_2:
# 3628 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Corphish Legs, if you'd be so kind. Fat,\n"
	.string "juicy ones.$"

PetalburgHarbourTable2ClerkFGuest_Text_3:
# 3633 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Corphish Legs, please.$"

PetalburgHarbourTable2OldmanGuest_Text_0:
# 3659 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Thank you for serving us tonight.\n"
	.string "Everything was delicious.$"

PetalburgHarbourTable2OldmanGuest_Text_1:
# 3670 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Back when I was young, the only boat\n"
	.string "around was my friend's, Briney's.\p"
	.string "Look at this harbor now. I'm sure he\n"
	.string "would be excited to see it.$"

PetalburgHarbourTable2OldmanGuest_Text_2:
# 3679 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Back when I was a sailor, I had Magikarp\n"
	.string "Sushi all the time.\p"
	.string "It brings me back to those trying, but\n"
	.string "happy times. Ah, to grow old...$"

PetalburgHarbourTable2OldmanGuest_Text_3:
# 3685 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Magikarp Sushi.$"

PetalburgHarbourTable2OldwomanGuest_Text_0:
# 3707 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I wish I could give you a tip, but we did\n"
	.string "not bring any spare...\p"
	.string "I'm so sorry - you deserve it for your\n"
	.string "hard work.$"

PetalburgHarbourTable2OldwomanGuest_Text_1:
# 3718 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I always thought young people were\n"
	.string "weaker than our generation...\p"
	.string "But look at them. Even after all that\n"
	.string "happened, they're working, spending.\p"
	.string "I think Hoenn will get back on its feet,\n"
	.string "one step at a time.$"

PetalburgHarbourTable2OldwomanGuest_Text_2:
# 3728 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "My teeth are not what they used to... so\n"
	.string "soup is the easiest for me to eat.$"

PetalburgHarbourTable2OldwomanGuest_Text_3:
# 3734 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Carvanha Fin Soup.$"

PetalburgHarbourTable3BandagedManGuest_Text_0:
# 3759 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm stuffed... and it wasn't even good.\n"
	.string "Guess hunger is the best spice!$"

PetalburgHarbourTable3BandagedManGuest_Text_1:
# 3769 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'm losing sight on my good eye... doctor\n"
	.string "Wally recommended I include fish on my\l"
	.string "diet, among other things.$"

PetalburgHarbourTable3BandagedManGuest_Text_2:
# 3774 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If you haven't already, go have him\n"
	.string "check your leg. You won't be worse off\l"
	.string "for it.$"

PetalburgHarbourTable3BandagedManGuest_Text_3:
# 3777 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "If you haven't already, go have him\n"
	.string "check your arm. You won't be worse off\l"
	.string "for it.$"

PetalburgHarbourTable3BandagedManGuest_Text_4:
# 3788 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Feebas' uglyness is a self-defense\n"
	.string "mechanism - they look like they'd taste\l"
	.string "awful, so predators ignore them.\p"
	.string "But they are actually not that bad, if\n"
	.string "cleaned and seasoned properly.$"

PetalburgHarbourTable3BandagedManGuest_Text_5:
# 3795 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Dried Feebas, please.$"

PetalburgHarbourTable3TrapinchTechnicianGuest_Text_0:
# 3813 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "There goes a bit more of my dwindling\n"
	.string "savings... I really need to find a new\l"
	.string "job soon.\p"
	.string "Maybe I can part-time here like you!$"

PetalburgHarbourTable3TrapinchTechnicianGuest_Text_1:
# 3825 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Let's see... something cheap, filling,\n"
	.string "and that I can share with Trapinch...$"

PetalburgHarbourTable3TrapinchTechnicianGuest_Text_2:
# 3835 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I've read that some Trapinch cultivate\n"
	.string "fungi in their underground caverns.\p"
	.string "Perhaps that's why mine likes Sautéed\n"
	.string "Shiitako so much. Is it ready yet?$"

PetalburgHarbourTable3TrapinchTechnicianGuest_Text_3:
# 3841 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "A Sautéed Shiitako, for me and my\n"
	.string "Trapinch.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_0:
# 3861 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "You did a good job. You should rest a\n"
	.string "little.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_1:
# 3871 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I met this Cubone the other day... it\n"
	.string "seems we both lost someone dear\l"
	.string "recently.\p"
	.string "I think it was fate that brought us\n"
	.string "together, so I'm taking care of him.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_2:
# 3883 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Have you forgotten? It's a Carvanha\n"
	.string "Fin Soup, and Seedot Nuts.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_3:
# 3888 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "It must be tough working with that leg.\n"
	.string "Please, don't hurry on my behalf.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_4:
# 3891 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "It must be tough working with that arm.\n"
	.string "Please, don't hurry on my behalf.$"

PetalburgHarbourTable3CuboneWomanGuest_Text_5:
# 3898 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Carvanha Fin Soup, and\n"
	.string "Seedot Nuts for my Cubone.$"

PetalburgHarbourTable3PrisonerGuest_Text_0:
# 3918 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "... wait, I forgot. I don't have any\n"
	.string "pokeyen.\p"
	.string "... well, what's a dine and dash to the\n"
	.string "list...?$"

PetalburgHarbourTable3PrisonerGuest_Text_1:
# 3929 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Haa... haaa... g-give me a minute - I'm\n"
	.string "out of... breath...!$"

PetalburgHarbourTable3PrisonerGuest_Text_2:
# 3939 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Wingull Wings, and Shuckle Juice! I'm\n"
	.string "STARVING!$"

PetalburgHarbourTable3PrisonerGuest_Text_3:
# 3944 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Haa, haa... I-I made it... I swam all the\n"
	.string "way! I'm FREE! Ahahaha!\p"
	.string "You, get me a ton of Wingull Wings, and\n"
	.string "Shuckle Juice!!$"

PetalburgHarbourTable3PatientMGuest_Text_0:
# 3965 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Thanks for taking my sisters' order\n"
	.string "from her, instead of asking me.\p"
	.string "I know it's not easy to hear her, but it\n"
	.string "makes her happy when people try.$"

PetalburgHarbourTable3PatientMGuest_Text_1:
# 3976 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Many folks here look scary, but they've\n"
	.string "never done anything to sis or me.\p"
	.string "I think it's like a facade. Some do that\n"
	.string "when they have it rough.$"

PetalburgHarbourTable3PatientMGuest_Text_2:
# 3987 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Shuckle Juice, not too cold, please.$"

PetalburgHarbourTable3PatientMGuest_Text_3:
# 3992 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Mister Wally said I can't eat solid yet.\n"
	.string "So I'll have some Shuckle Juice, please.$"

PetalburgHarbourTable3PatientFGuest_Text_0:
# 4011 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}I'm a bit... tired. We should go... home.$"

PetalburgHarbourTable3PatientFGuest_Text_1:
# 4021 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Hello...$"

PetalburgHarbourTable3PatientFGuest_Text_2:
# 4031 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sautéed... Shiitako.$"

PetalburgHarbourTable3PatientFGuest_Text_3:
# 4036 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sautéed... Shiitako. Please.$"

PetalburgHarbourTable3RedHairGirlGuest_Text_0:
# 4056 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "The food was way too salty... did you\n"
	.string "get back at me for my joke?$"

PetalburgHarbourTable3RedHairGirlGuest_Text_1:
# 4066 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "That guy keeps staring at me... does he\n"
	.string "think he has a chance? As if!$"

PetalburgHarbourTable3RedHairGirlGuest_Text_2:
# 4076 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hellooo? I ordered Octiyaki, did you\n"
	.string "forget already!?\p"
	.string "Guess you're as bad taking orders as\n"
	.string "you are taking jokes.$"

PetalburgHarbourTable3RedHairGirlGuest_Text_3:
# 4085 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hey there, stud. Wanna have dinner with\n"
	.string "me?$"

PetalburgHarbourTable3RedHairGirlGuest_Text_4:
# 4088 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hey there, cutie. Wanna have dinner with\n"
	.string "me?$"

PetalburgHarbourTable3RedHairGirlGuest_Text_5:
# 4095 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Ahaha, I was just joking - sorry! Bring\n"
	.string "me some Octiyaki, quick!$"

PetalburgHarbourTable3RedHairGirlGuest_Text_6:
# 4099 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Pfft, it was a joke. Bring me some\n"
	.string "Octiyaki, come on.$"

PetalburgHarbourTable3PunkMGuest_Text_0:
# 4119 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "She wasn't interested. Well, it's her\n"
	.string "loss - more for me! {COLOR LIGHT_GRAY}{SHADOW WHITE}Hic...$"

PetalburgHarbourTable3PunkMGuest_Text_1:
# 4130 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Where's a guy to find a kind girl these\n"
	.string "days? They're all meaner than a\l"
	.string "Vigoroth.\p"
	.string "Maybe I'll move up north and fish me a\n"
	.string "rich girl...$"

PetalburgHarbourTable3PunkMGuest_Text_2:
# 4141 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Shuckle Juice, ice cold - I bring the rum\n"
	.string "myself, hehe...$"

PetalburgHarbourTable3PunkMGuest_Text_3:
# 4150 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hey there pal. Be a brother, and bring me\n"
	.string "some Shuckle Juice.$"

PetalburgHarbourTable3PunkMGuest_Text_4:
# 4153 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Sorry girl, got my eyes on that\n"
	.string "red-haired ov-...\p"
	.string "Oh, you're the waitress? Sorry. Get me\n"
	.string "some Shuckle Juice, then.$"

PetalburgHarbourTable3PunkMGuest_Text_5:
# 4157 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll prepare some drinks with it and\n"
	.string "treat that cutie over there!$"

PetalburgHarbourTable3PoorBoyGuest_Text_0:
# 4177 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "When I'm a bit older, I'll be a sailor, and\n"
	.string "then we'll eat good everyday.$"

PetalburgHarbourTable3PoorBoyGuest_Text_1:
# 4188 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I don't want no Pokémon. It's hard\n"
	.string "enough to find food for us two.\p"
	.string "But she likes Gogo so much, it'd break\n"
	.string "her heart if we didn't keep him.$"

PetalburgHarbourTable3PoorBoyGuest_Text_2:
# 4199 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "That's a Dried Feebas, and two sets of\n"
	.string "chopsticks.$"

PetalburgHarbourTable3PoorBoyGuest_Text_3:
# 4204 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We'll have one Dried Feebas. Big one, if\n"
	.string "you can.$"

PetalburgHarbourTable3PoorGirlGuest_Text_0:
# 4223 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "That was so yummy! I hope we find\n"
	.string "another coin tomorrow.$"

PetalburgHarbourTable3PoorGirlGuest_Text_1:
# 4229 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Gogo will help us look - right Gogo?$"

PetalburgHarbourTable3PoorGirlGuest_Text_2:
# 4236 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Za-gggooo!$"

PetalburgHarbourTable3PoorGirlGuest_Text_3:
# 4253 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "My brother found some pokéyen on the\n"
	.string "floor, so we're using it to-!$"

PetalburgHarbourTable3PoorGirlGuest_Text_4:
# 4257 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Sssh, be quiet! Somene here might have\n"
	.string "dropped it, and ask it back!$"

PetalburgHarbourTable3PoorGirlGuest_Text_5:
# 4259 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Oh, I'm sorry big bro...!$"

PetalburgHarbourTable3PoorGirlGuest_Text_6:
# 4269 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Did you know? If you pour water in a can\n"
	.string "with Swablu Candies...\p"
	.string "You get tasty candy water!$"

PetalburgHarbourTable3PoorGirlGuest_Text_7:
# 4275 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "I'll have some Swablu Candies, please!$"

PetalburgHarbourTable3PoorGirlGuest_Text_8:
# 4280 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "One... if we order the meal, we only have\n"
	.string "money for one, sis.$"

PetalburgHarbourTable3PoorGirlGuest_Text_9:
# 4282 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Oh, okay... just one then!$"

PetalburgHarbourTable3Zigzagoon_Text_0:
# 4300 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Go-gooo...!\p"
	.string "The Zigzagoon has a cross-eyed right\n"
	.string "eye. It's kinda cute.$"

PetalburgHarbourTable1Nosepass_Text_0:
# 4310 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Nnnoooss...\p"
	.string "The Nosepass is eating - snorting? -\n"
	.string "chunks of floor tiles through its nose.$"

PetalburgHarbourTable2Raticate_Text_0:
# 4323 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Munch munch...\p"
	.string "The Raticate is eating the last bits of\n"
	.string "meat off the bones.$"

PetalburgHarbourTable2Raticate_Text_1:
# 4332 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "GRRRR!\p"
	.string "This Raticate might bite someone if it's\n"
	.string "not fed soon...$"

PetalburgHarbourTable3Cubone_Text_0:
# 4348 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Yawn...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "The Cubone seems sleepy after eating.$"

PetalburgHarbourTable3Cubone_Text_1:
# 4356 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Booo...$"

PetalburgHarbourTable3Cubone_Text_2:
# 4357 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "The Cubone's belly rumbles can be heard\n"
	.string "from afar.$"

PetalburgHarbourTable3Trapinch_Text_0:
# 4371 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Trr...\p"
	.string "The Trapinch seems to be enjoying the\n"
	.string "aftertaste of the food.$"

PetalburgHarbourTable3Trapinch_Text_1:
# 4380 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Trrrr!$"

PetalburgHarbourTable3Trapinch_Text_2:
# 4381 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "The Trapinch looks at the empty bowl\n"
	.string "with anticipation.$"

PetalburgHarbourTable2Wimpod_Text_0:
# 4397 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Gzzzz...\p"
	.string "The Wimpod is eating with a leisured\n"
	.string "pace.$"

PetalburgHarbourTable2Wimpod_Text_1:
# 4406 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Gzzz...\p"
	.string "The Wimpod averts its gaze, and shifts\n"
	.string "it downwards.$"

PetalburgHarbourWaiterDontGoToPier_Text_0:
# 4421 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Hey, where are you going? We have no\n"
	.string "tables outside.\p"
	.string "You're not quitting in the middle of a\n"
	.string "service, are you?$"

PetalburgHarbourWaiterDontGoToPier_Text_1:
# 4425 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Yes, I'm leaving$"

PetalburgHarbourWaiterDontGoToPier_Text_2:
# 4426 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "No, I'll finish the shift$"

PetalburgHarbourWaiterDontGoToPier_Text_3:
# 4429 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Good - you can take a break when you're\n"
	.string "done. Go take those orders!$"

PetalburgHarbourWaiterDontGoToPier_Text_4:
# 4435 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "... you've got to be kidding me. Well,\n"
	.string "thanks for nothing, I guess.$"

PetalburgHarbourKitchenHelperBlocking_Text_0:
# 4541 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "We've got uhm, a small issue in the\n"
	.string "kitchen. Can't let you in right now.$"

PetalburgHarbourKitchenHelperCleaning_Text_0:
# 4573 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "... what, you get a kick off seeing\n"
	.string "people work? Get out of my space.$"

trashscript_Text_0:
# 4585 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Some people left without paying today.\n"
	.string "And it's not coming out of my pocket.\p"
	.string "It's coming out of yours. (2000 is top\n"
	.string "pay, -500 for each wrongly served\l"
	.string "table.)$"

trashscript_Text_1:
# 4590 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "???$"

trashscript_Text_2:
# 4592 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "Rebento$"

PetalburgHarbourMenuList_Text_0:
# 4598 "data/maps/RebelHarbourLounge/scripts.pory"
	.string "A long menu list is written on the board.$"
