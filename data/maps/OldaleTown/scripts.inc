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


OldaleTownSign::
# 32 "data/maps/OldaleTown/scripts.pory"
	lockall
# 33 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 34 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 38 "data/maps/OldaleTown/scripts.pory"
	lockall
# 39 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 40 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 44 "data/maps/OldaleTown/scripts.pory"
	lockall
# 45 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 46 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 50 "data/maps/OldaleTown/scripts.pory"
	lockall
# 51 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 52 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 57 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 62 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 67 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 72 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 53 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 54 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 58 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 59 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 63 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 64 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 68 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 69 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkGuy::
# 76 "data/maps/OldaleTown/scripts.pory"
	lockall
# 77 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 78 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, OldaleOutsideHikerGuy_Movement_0
# 79 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkGuy_Text_0
# 82 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldGuy::
# 86 "data/maps/OldaleTown/scripts.pory"
	lockall
# 87 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, OldaleOutsideHikerGuy_Movement_0
# 88 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 92 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 96 "data/maps/OldaleTown/scripts.pory"
	lockall
# 97 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 98 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 99 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 100 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 101 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 102 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 103 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 104 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 106 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 107 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 108 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 112 "data/maps/OldaleTown/scripts.pory"
	lockall
# 113 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 114 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 115 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 116 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 118 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 119 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 120 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 121 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 124 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 125 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 126 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 128 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 129 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 134 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 138 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 139 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 140 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 141 "data/maps/OldaleTown/scripts.pory"
	waitse
# 142 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 143 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 145 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 148 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 151 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 152 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 153 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 154 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 155 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 156 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 157 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 159 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 160 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 161 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 162 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 164 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 165 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 166 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 167 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 170 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 171 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 172 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 173 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_9
# 176 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_10, OldaleSharpyCameliaOutDLCCutscene_Text_11
# 177 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 179 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_14
OldaleSharpyCameliaOutDLCCutscene_13:
# 183 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_17
OldaleSharpyCameliaOutDLCCutscene_16:
# 270 "data/maps/OldaleTown/scripts.pory"
saidyestoSharpy:
# 271 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 272 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 273 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 274 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 276 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 277 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 278 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 279 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 281 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 282 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 283 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 284 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 286 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 287 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 288 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 289 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_27
# 291 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 292 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 293 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 294 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_28
# 297 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 298 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 299 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 300 "data/maps/OldaleTown/scripts.pory"
thisguy:
# 301 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 302 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 303 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 304 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_29
# 306 "data/maps/OldaleTown/scripts.pory"
finishOldalekidscutscene:
# 307 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 308 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 309 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 310 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 311 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 312 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 313 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 314 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 315 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 130 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 135 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 146 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 149 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_14:
# 180 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_13

OldaleSharpyCameliaOutDLCCutscene_17:
# 184 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 185 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 186 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 187 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 190 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 191 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 192 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 193 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 194 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 196 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 197 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 198 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 199 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
# 202 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 203 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 204 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 205 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 206 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 208 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_10, OldaleSharpyCameliaOutDLCCutscene_Text_11
# 209 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 211 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_20
OldaleSharpyCameliaOutDLCCutscene_19:
# 215 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_23
OldaleSharpyCameliaOutDLCCutscene_22:
# 221 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 222 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 223 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 224 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 227 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 228 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 229 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 230 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 232 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 233 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 234 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 235 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 237 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 238 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 239 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 240 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 242 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 243 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 244 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 245 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 247 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 248 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 249 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 250 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 251 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 253 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 254 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 255 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 256 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 257 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 258 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 260 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 261 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 262 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 265 "data/maps/OldaleTown/scripts.pory"
	setflag saidnotosharpyinoldale
# 266 "data/maps/OldaleTown/scripts.pory"
	goto thisguy
	goto OldaleSharpyCameliaOutDLCCutscene_16

OldaleSharpyCameliaOutDLCCutscene_20:
# 212 "data/maps/OldaleTown/scripts.pory"
	goto saidyestoSharpy
	goto OldaleSharpyCameliaOutDLCCutscene_19

OldaleSharpyCameliaOutDLCCutscene_23:
# 216 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 217 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 218 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 219 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
	goto OldaleSharpyCameliaOutDLCCutscene_22


OldaleCamelia::
# 319 "data/maps/OldaleTown/scripts.pory"
	lockall
# 321 "data/maps/OldaleTown/scripts.pory"
	goto_if_set saidnotosharpyinoldale, OldaleCamelia_2
# 346 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 347 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 348 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 349 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_3
# 351 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 352 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 353 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 354 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_4
OldaleCamelia_1:
# 357 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 358 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleCamelia_2:
# 324 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 325 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleOutsideHikerGuy_Movement_0
# 326 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 327 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 328 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 331 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 332 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 333 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 334 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 336 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 337 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 338 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 339 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
	goto OldaleCamelia_1


Rivalfollowchat::
# 362 "data/maps/OldaleTown/scripts.pory"
	lockall
# 363 "data/maps/OldaleTown/scripts.pory"
	msgbox Rivalfollowchat_Text_0
# 364 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleRivalFollower::
# 368 "data/maps/OldaleTown/scripts.pory"
	setfollowernpc 24, FNPC_ALL, Rivalfollowchat, PARTNER_STEVEN
	return


OldaleDevonGrunts::
# 379 "data/maps/OldaleTown/scripts.pory"
	lockall
# 380 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 381 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_two_trainers TRAINER_OLDALEDEVONGRUNT_F, DevonGruntFOutro, TRAINER_OLDALEDEVONGRUNT_M, DevonGruntMOutro
# 383 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 384 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_2
OldaleDevonGrunts_1:
# 395 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_5
OldaleDevonGrunts_4:
# 412 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 386 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 387 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
# 388 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_0
# 389 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
# 391 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 392 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_5:
# 396 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 397 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 400 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 401 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_5
# 405 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_2
# 406 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_6
# 408 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 409 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_2
	goto OldaleDevonGrunts_4


OldaleWarehouseRebelGuard::
# 422 "data/maps/OldaleTown/scripts.pory"
	lockall
# 423 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 424 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 425 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_0
# 426 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 427 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 429 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 430 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 432 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 435 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 438 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 440 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 441 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 442 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_1
# 443 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 445 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 446 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 447 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 448 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_2
# 449 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 450 "data/maps/OldaleTown/scripts.pory"
	removeobject 19
# 451 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 452 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 453 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 455 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 431 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 433 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


# 53 "data/maps/OldaleTown/scripts.pory"
OldaleOutsideHikerGuy_Movement_0:
# 53 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 98 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 103 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 106 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 139 "data/maps/OldaleTown/scripts.pory"
	face_left
# 139 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 152 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 153 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 153 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 203 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 203 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 261 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 261 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 386 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 386 "data/maps/OldaleTown/scripts.pory"
	face_player
# 386 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 400 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 400 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 400 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 405 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 405 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 405 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 425 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_0:
# 425 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 442 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_1:
# 442 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 448 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_2:
# 448 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

OldaleTownSign_Text_0:
# 33 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 39 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 45 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

OldaleOutsideHikerGuy_Text_0:
# 54 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 64 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 69 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkGuy_Text_0:
# 79 "data/maps/OldaleTown/scripts.pory"
	.string "It's tough being a trader around here\n"
	.string "lately... tons of competition.\p"
	.string "There's scammers taking advantage of\n"
	.string "war tourists, war victims selling their\l"
	.string "valuables to stay afloat...\p"
	.string "You should be careful where you shop!$"

OldaleOutsideOldGuy_Text_0:
# 88 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The trees are brown because they are\n"
	.string "sick. It's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 100 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 116 "data/maps/OldaleTown/scripts.pory"
	.string "Hmm... I don't think we'll find any\n"
	.string "volunteers here...$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 121 "data/maps/OldaleTown/scripts.pory"
	.string "I hate to agree. Everyone was either\n"
	.string "scared of Pokémon, a Devon supporter,\l"
	.string "or both.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 130 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "he's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 135 "data/maps/OldaleTown/scripts.pory"
	.string "Someone caught my eye though... and\n"
	.string "she's behind you now.$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 146 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there mister! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, hello there miss! You're just in\n"
	.string "time!$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 157 "data/maps/OldaleTown/scripts.pory"
	.string "Would you like to join us fight Devon?\n"
	.string "You know Devon Inc., right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 162 "data/maps/OldaleTown/scripts.pory"
	.string "They're turning Pokémon into Safemon,\n"
	.string "making things expensive, and many\l"
	.string "other bad things!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 167 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia and I want to stop them - well,\n"
	.string "us and old man Norman!\p"
	.string "Oh, name is Sharpy, by the way! What's\n"
	.string "yours? {PLAYER}? Cool name!$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 173 "data/maps/OldaleTown/scripts.pory"
	.string "So, will you help us?$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 176 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 176 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 187 "data/maps/OldaleTown/scripts.pory"
	.string "Whaaat!? But you look like a soldier -\n"
	.string "which means you're strong, and brave,\l"
	.string "right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 194 "data/maps/OldaleTown/scripts.pory"
	.string "We're not with the Rebels, if that's\n"
	.string "what you're worried about.$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 199 "data/maps/OldaleTown/scripts.pory"
	.string "Unlike them, we want to change things\n"
	.string "through peaceful means.$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 206 "data/maps/OldaleTown/scripts.pory"
	.string "Exactly! So, now that you know that,\n"
	.string "you'll join us, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 219 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? But listen, we have to-$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 224 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's alright, Sharpy. We'll keep\n"
	.string "looking tomorrow.$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 230 "data/maps/OldaleTown/scripts.pory"
	.string "Grr... you give up too easily, Camelia.\n"
	.string "But I'm not like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 235 "data/maps/OldaleTown/scripts.pory"
	.string "You leave me with no other choice... I\n"
	.string "challenge you... to a BATTLE!$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 240 "data/maps/OldaleTown/scripts.pory"
	.string "If you win, I'll leave you alone forever\n"
	.string "- but if I do, you'll have to join us!$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 245 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy, that's essentially harrasment...$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 251 "data/maps/OldaleTown/scripts.pory"
	.string "Maybe - but it's for a good reason!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 257 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103! I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 274 "data/maps/OldaleTown/scripts.pory"
	.string "Awesome - I knew you would just by\n"
	.string "looking at you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 279 "data/maps/OldaleTown/scripts.pory"
	.string "But there's one thing... Norman told us\n"
	.string "we'd need strong people...$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 284 "data/maps/OldaleTown/scripts.pory"
	.string "So we need to battle first - if you win,\n"
	.string "that means you're strong enough!$"

OldaleSharpyCameliaOutDLCCutscene_Text_27:
# 289 "data/maps/OldaleTown/scripts.pory"
	.string "We can't battle here though - I don't\n"
	.string "want to scare any more kids...$"

OldaleSharpyCameliaOutDLCCutscene_Text_28:
# 294 "data/maps/OldaleTown/scripts.pory"
	.string "Come join me in Route 103. I'll be\n"
	.string "waiting!$"

OldaleSharpyCameliaOutDLCCutscene_Text_29:
# 304 "data/maps/OldaleTown/scripts.pory"
	.string "This guy...$"

OldaleCamelia_Text_0:
# 328 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 334 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 339 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "Norman will be mad if we're not back at\l"
	.string "the dojo soon...$"

OldaleCamelia_Text_3:
# 349 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry, I'm sure you won't have any\n"
	.string "issues beating Sharpy.$"

OldaleCamelia_Text_4:
# 354 "data/maps/OldaleTown/scripts.pory"
	.string "I do it all the time, and I have the type\n"
	.string "disadvantage.$"

Rivalfollowchat_Text_0:
# 363 "data/maps/OldaleTown/scripts.pory"
	.string "Let's quick some Devon ass.$"

OldaleDevonGrunts_Text_0:
# 380 "data/maps/OldaleTown/scripts.pory"
	.string "Multi-battle test.$"

OldaleDevonGrunts_Text_1:
# 387 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but due to the level of Rebel\n"
	.string "activity on the eastern warehouse, we\l"
	.string "can't let anyone leave Oldale at\l"
	.string "present.$"

OldaleDevonGrunts_Text_2:
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "We can't allow these criminals to get\n"
	.string "closer to Rustboro... but don't worry!\p"
	.string "To deal with the threat, we have\n"
	.string "requested reinforcements from Devon\l"
	.string "HQ.$"

OldaleDevonGrunts_Text_3:
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "Indeed! With the current pace of\n"
	.string "administrative protocols, they should\l"
	.string "be here in about 6 months.$"

OldaleDevonGrunts_Text_4:
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Pokéball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_5:
# 401 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_6:
# 406 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseRebelGuard_Text_0:
# 424 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 431 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 433 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 435 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you, not every Rebel is like\n"
	.string "him!$"

OldaleWarehouseRebelGuard_Text_4:
# 440 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 443 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

DevonGruntFOutro::
# 371 "data/maps/OldaleTown/scripts.pory"
	.string "... were you checking your Devon Nav while battling?$"

DevonGruntMOutro::
# 374 "data/maps/OldaleTown/scripts.pory"
	.string "No I was not!.$"

RebelOldale_Outro::
# 458 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess Rick was right after all...$"
