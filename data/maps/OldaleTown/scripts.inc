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


OldaleVendingMachine::
# 33 "data/maps/OldaleTown/scripts.pory"
	lockall
# 34 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_0
# 35 "data/maps/OldaleTown/scripts.pory"
	showmoneybox 0, 0
# 36 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_1
# 38 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_2
OldaleVendingMachine_1:
# 87 "data/maps/OldaleTown/scripts.pory"
endvendingmachine:
# 88 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 89 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleVendingMachine_2:
# 39 "data/maps/OldaleTown/scripts.pory"
	checkmoney 100
# 40 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleVendingMachine_5
OldaleVendingMachine_4:
# 82 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleVendingMachine_7
	goto OldaleVendingMachine_1

OldaleVendingMachine_5:
# 41 "data/maps/OldaleTown/scripts.pory"
	updatemoneybox
# 43 "data/maps/OldaleTown/scripts.pory"
	random 4
# 44 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, freshwatergotstuck
# 45 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotfreshwater
# 47 "data/maps/OldaleTown/scripts.pory"
gotfreshwater:
# 48 "data/maps/OldaleTown/scripts.pory"
	playse SE_VEND
# 49 "data/maps/OldaleTown/scripts.pory"
	waitse
# 50 "data/maps/OldaleTown/scripts.pory"
	removemoney 100
# 51 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_2
# 52 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 53 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 55 "data/maps/OldaleTown/scripts.pory"
	random 20
# 56 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_RESULT, 0, endvendingmachine
# 57 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, gotextrafreshwater
# 59 "data/maps/OldaleTown/scripts.pory"
gotextrafreshwater:
# 60 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_3
# 61 "data/maps/OldaleTown/scripts.pory"
	hidemoneybox
# 62 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 63 "data/maps/OldaleTown/scripts.pory"
	goto endvendingmachine
# 65 "data/maps/OldaleTown/scripts.pory"
freshwatergotstuck:
# 66 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 67 "data/maps/OldaleTown/scripts.pory"
	waitse
# 68 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_4
# 70 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, OldaleVendingMachine_Text_5, OldaleVendingMachine_Text_6
# 71 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_10
OldaleVendingMachine_9:
# 76 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleVendingMachine_12
	goto OldaleVendingMachine_4

OldaleVendingMachine_7:
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_8
	goto OldaleVendingMachine_1

OldaleVendingMachine_10:
# 72 "data/maps/OldaleTown/scripts.pory"
	call MachineShake
# 73 "data/maps/OldaleTown/scripts.pory"
	goto gotfreshwater
	goto OldaleVendingMachine_9

OldaleVendingMachine_12:
# 77 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleVendingMachine_Text_7
	goto OldaleVendingMachine_4


MachineShake::
# 94 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_REVERSAL
# 95 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8004, 2
# 96 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8005, 6
# 97 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8006, 4
# 98 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8007, 4
# 99 "data/maps/OldaleTown/scripts.pory"
	special ShakeCamera
	return


OldaleTownSign::
# 104 "data/maps/OldaleTown/scripts.pory"
	lockall
# 105 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 106 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 110 "data/maps/OldaleTown/scripts.pory"
	lockall
# 111 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 112 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 116 "data/maps/OldaleTown/scripts.pory"
	lockall
# 117 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 118 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 122 "data/maps/OldaleTown/scripts.pory"
	lockall
# 123 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 124 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 129 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 134 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 139 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 144 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 125 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 126 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 130 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 131 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 135 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 136 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 140 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 141 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkGuy::
# 148 "data/maps/OldaleTown/scripts.pory"
	lockall
# 149 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 150 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, OldaleOutsideHikerGuy_Movement_0
# 151 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkGuy_Text_0
# 154 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldGuy::
# 158 "data/maps/OldaleTown/scripts.pory"
	lockall
# 159 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, OldaleOutsideHikerGuy_Movement_0
# 160 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 164 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 168 "data/maps/OldaleTown/scripts.pory"
	lockall
# 169 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 170 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 171 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 173 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 174 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 175 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 176 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 178 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 179 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 180 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 184 "data/maps/OldaleTown/scripts.pory"
	lockall
# 185 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 186 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 187 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 188 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 190 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 191 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 192 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 193 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 196 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 197 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 198 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 200 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 201 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 206 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 210 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 211 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 212 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 213 "data/maps/OldaleTown/scripts.pory"
	waitse
# 214 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 215 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 217 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 220 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 223 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 224 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 225 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 226 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 227 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 228 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 229 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 231 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 232 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 233 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 234 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 236 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 237 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 238 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 239 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 242 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 243 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 244 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 245 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 248 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_10, OldaleSharpyCameliaOutDLCCutscene_Text_11
# 249 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 251 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 255 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 342 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 343 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 344 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 345 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 346 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 348 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 349 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 350 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 351 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 353 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 354 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 355 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 356 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 358 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 359 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 360 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 361 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 363 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 364 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 365 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 366 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_28
# 369 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 370 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 371 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 372 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 373 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 374 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 375 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 376 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_29
# 378 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 379 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 380 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 381 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 382 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 383 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 384 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 385 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 386 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 387 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 202 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 207 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 218 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 221 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 252 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 256 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 257 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 258 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 259 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 262 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 263 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 264 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 265 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 266 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 268 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 269 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 270 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 271 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
# 274 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 275 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 276 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 277 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 278 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 280 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_10, OldaleSharpyCameliaOutDLCCutscene_Text_11
# 281 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 283 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 287 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 293 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 294 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 295 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 296 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 299 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 300 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 301 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 302 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 304 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 305 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 306 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 307 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 309 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 310 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 311 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 312 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 314 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 315 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 316 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 317 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 319 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 320 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 321 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 322 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 323 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 325 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 326 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 327 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 328 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 329 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 330 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 332 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 333 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 334 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 337 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 338 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 284 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 288 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 289 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 290 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 291 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
	goto OldaleSharpyCameliaOutDLCCutscene_22


OldaleCamelia::
# 391 "data/maps/OldaleTown/scripts.pory"
	lockall
# 393 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 418 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 419 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 420 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 421 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 423 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 424 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 425 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 426 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 429 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 430 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 396 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 397 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleOutsideHikerGuy_Movement_0
# 398 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 399 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 400 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 403 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 404 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 405 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 406 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 408 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 409 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 410 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 411 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


Rivalfollowchat::
# 434 "data/maps/OldaleTown/scripts.pory"
	lockall
# 435 "data/maps/OldaleTown/scripts.pory"
	msgbox Rivalfollowchat_Text_0
# 436 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalFollower::
# 440 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc LOCALID_OLDALE_RIVAL, FNPC_ALL, Rivalfollowchat, PARTNER_STEVEN
	return


OldaleDevonGrunts::
# 451 "data/maps/OldaleTown/scripts.pory"
	lockall
# 452 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 453 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 455 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 456 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_2
OldaleDevonGrunts_1:
# 467 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_5
OldaleDevonGrunts_4:
# 484 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 458 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 459 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 460 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_0
# 461 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
# 463 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 464 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_5:
# 468 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 469 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 472 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 473 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 477 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_2
# 478 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 480 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 481 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_4


OldaleWarehouseRebelGuard::
# 494 "data/maps/OldaleTown/scripts.pory"
	lockall
# 495 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 496 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 497 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_0
# 498 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 499 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 501 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 502 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 504 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 507 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 510 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 512 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 513 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 514 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_1
# 515 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 517 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 518 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 519 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 520 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_2
# 521 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 522 "data/maps/OldaleTown/scripts.pory"
	removeobject 19
# 523 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 524 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 525 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 527 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 503 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 505 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


# 125 "data/maps/OldaleTown/scripts.pory"
OldaleOutsideHikerGuy_Movement_0:
# 125 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 170 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 175 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 178 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 211 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 211 "data/maps/OldaleTown/scripts.pory"
	face_left
# 211 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 224 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 224 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 224 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 225 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 225 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 275 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 275 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 333 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 458 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 458 "data/maps/OldaleTown/scripts.pory"
	face_player
# 458 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 472 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 472 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 472 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 477 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 477 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 477 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 497 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_0:
# 497 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 514 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_1:
# 514 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 520 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_2:
# 520 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

OldaleVendingMachine_Text_0:
# 34 "data/maps/OldaleTown/scripts.pory"
	.string "It's a vending machine.$"

OldaleVendingMachine_Text_1:
# 36 "data/maps/OldaleTown/scripts.pory"
	.string "Fresh Water - 100¥$"

OldaleVendingMachine_Text_2:
# 51 "data/maps/OldaleTown/scripts.pory"
	.string "A Fresh Water Bottle dropped on the\n"
	.string "machine's tray.$"

OldaleVendingMachine_Text_3:
# 60 "data/maps/OldaleTown/scripts.pory"
	.string "An extra Fresh Water Bottle dropped on\n"
	.string "the machine's tray!$"

OldaleVendingMachine_Text_4:
# 68 "data/maps/OldaleTown/scripts.pory"
	.string "The machine does not push the Fresh\n"
	.string "Water enough for it to fall...$"

OldaleVendingMachine_Text_5:
# 70 "data/maps/OldaleTown/scripts.pory"
	.string "Shake the machine$"

OldaleVendingMachine_Text_6:
# 70 "data/maps/OldaleTown/scripts.pory"
	.string "Leave$"

OldaleVendingMachine_Text_7:
# 77 "data/maps/OldaleTown/scripts.pory"
	.string "The Fresh Water just stays on the\n"
	.string "verge of falling, mockingly.$"

OldaleVendingMachine_Text_8:
# 83 "data/maps/OldaleTown/scripts.pory"
	.string "Not enough money...$"

OldaleTownSign_Text_0:
# 105 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 111 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 117 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

OldaleOutsideHikerGuy_Text_0:
# 126 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 136 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 141 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkGuy_Text_0:
# 151 "data/maps/OldaleTown/scripts.pory"
	.string "It's tough being a trader around here\n"
	.string "lately... tons of competition.\p"
	.string "There's scammers taking advantage of\n"
	.string "war tourists, war victims selling their\l"
	.string "valuables to stay afloat...\p"
	.string "You should be careful where you shop!$"

OldaleOutsideOldGuy_Text_0:
# 160 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 172 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 188 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 193 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 202 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 207 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 218 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 221 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 229 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Co., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 234 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into lame\n"
	.string "Safemon, making things expensive, and\l"
	.string "doing many other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 239 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and old man Norman!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 245 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 248 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 248 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 259 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 266 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the Rebels, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 271 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 278 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 291 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 296 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 302 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 307 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 312 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 317 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 323 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but the end justifies the\n"
	.string "means! W-wait, that's what rebelssay...$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 329 "data/maps/OldaleTown/scripts.pory"
	.string "A-anyway, ome join me in Route 103! I'll\n"
	.string "be waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 346 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 351 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... Norman told us\n"
	.string "we'd need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 356 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 361 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_28:
# 366 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_29:
# 376 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 400 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 406 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 411 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "Norman will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 421 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 426 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

Rivalfollowchat_Text_0:
# 435 "data/maps/OldaleTown/scripts.pory"
	.string "Let's quick some Devon ass.$"

OldaleDevonGrunts_Text_0:
# 452 "data/maps/OldaleTown/scripts.pory"
	.string "Multi-battle test.$"

OldaleDevonGrunts_Text_1:
# 459 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but due to the level of Rebel\n"
	.string "activity on the eastern warehouse, we\l"
	.string "can't let anyone leave Oldale at\l"
	.string "present.$"

OldaleDevonGrunts_Text_2:
# 461 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to Rustboro... but don't worry!\p"
	.string "To deal with the threat, we have\n"
	.string "requested reinforcements from Devon\l"
	.string "HQ.$"

OldaleDevonGrunts_Text_3:
# 464 "data/maps/OldaleTown/scripts.pory"
	.string "Indeed! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_4:
# 469 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Pokéball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_5:
# 473 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 478 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseRebelGuard_Text_0:
# 496 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 503 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 505 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 507 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you, not every Rebel is like\n"
	.string "him!$"

OldaleWarehouseRebelGuard_Text_4:
# 512 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 515 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

DevonGruntFOutro::
# 443 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 446 "data/maps/OldaleTown/scripts.pory"
	.string "No I was not!.$"

RebelOldale_Outro::
# 530 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
