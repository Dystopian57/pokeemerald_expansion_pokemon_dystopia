# 1 "data/maps/OldaleTown/scripts.pory"


OldaleTown_MapScripts::
# 9 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleWeather
	.byte 0


OldaleWeather::
# 14 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWeather_2
OldaleWeather_1:
# 17 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 20 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleWeather_7
	return

OldaleWeather_2:
# 15 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_1

OldaleWeather_5:
# 18 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	goto OldaleWeather_4

OldaleWeather_7:
# 21 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


OldaleTownSign::
# 26 "data/maps/OldaleTown/scripts.pory"
	lockall
# 27 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
# 28 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 29 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Oldale103Sign::
# 33 "data/maps/OldaleTown/scripts.pory"
	lockall
# 34 "data/maps/OldaleTown/scripts.pory"
	msgbox Oldale103Sign_Text_0
# 35 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDLCSign::
# 39 "data/maps/OldaleTown/scripts.pory"
	lockall
# 40 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDLCSign_Text_0
# 41 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideHikerGuy::
# 45 "data/maps/OldaleTown/scripts.pory"
	lockall
# 46 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 47 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 52 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 57 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 62 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 67 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 48 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 49 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 53 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 54 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 58 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 59 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 63 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 64 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkGuy::
# 71 "data/maps/OldaleTown/scripts.pory"
	lockall
# 72 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 73 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, OldaleOutsideHikerGuy_Movement_0
# 74 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkGuy_Text_0
# 77 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldGuy::
# 81 "data/maps/OldaleTown/scripts.pory"
	lockall
# 82 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, OldaleOutsideHikerGuy_Movement_0
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 87 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 91 "data/maps/OldaleTown/scripts.pory"
	lockall
# 92 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 93 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 94 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 95 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 96 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 97 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 98 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 99 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 100 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 101 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 102 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 103 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 107 "data/maps/OldaleTown/scripts.pory"
	lockall
# 108 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 109 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 110 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 111 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 113 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 114 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 115 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 116 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 118 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 119 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 120 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 121 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
# 124 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 125 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 126 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 127 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
# 129 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 130 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 131 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 133 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
# 135 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 136 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 137 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 138 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
# 141 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 142 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 143 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 144 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 146 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 147 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 148 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 149 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 150 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 151 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 152 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 153 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 154 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 155 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 156 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 157 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 159 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 160 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 191 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 221 "data/maps/OldaleTown/scripts.pory"
answeredsoldierquestion:
# 222 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 223 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 224 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 225 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 229 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 230 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 231 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 232 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 234 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 235 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 236 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 237 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 238 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 240 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 241 "data/maps/OldaleTown/scripts.pory"
	addobject 20
# 242 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 15, 18
# 243 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_OPEN
# 244 "data/maps/OldaleTown/scripts.pory"
	waitse
# 245 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 246 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 247 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 248 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 249 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 252 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 253 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 254 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 255 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 257 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 258 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 259 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 260 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 262 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 263 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 264 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 265 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 267 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 268 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 269 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 270 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 272 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 273 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 274 "data/maps/OldaleTown/scripts.pory"
	playse SE_FLEE
# 275 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 276 "data/maps/OldaleTown/scripts.pory"
	applymovement 20, OldaleSharpyCameliaOutDLCCutscene_Movement_6
# 277 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 279 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 280 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 281 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 282 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 283 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 284 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 285 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 286 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 287 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 288 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 289 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 290 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 291 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 161 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 162 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 163 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 164 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 166 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_9, OldaleSharpyCameliaOutDLCCutscene_Text_10
# 167 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 169 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 177 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_13
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 192 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 193 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 194 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 195 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
# 197 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_9, OldaleSharpyCameliaOutDLCCutscene_Text_10
# 198 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 200 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 207 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_16
OldaleSharpyCameliaOutDLCCutscene_15:
# 218 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 170 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 171 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 172 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 173 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 174 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 175 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 201 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 202 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 203 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 204 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 205 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_13:
# 178 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 179 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 180 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 181 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 183 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 184 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 185 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 186 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 187 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 188 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_16:
# 208 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 209 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 210 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 211 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 213 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 214 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 215 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 216 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
	goto OldaleSharpyCameliaOutDLCCutscene_15


OldaleCamelia::
# 295 "data/maps/OldaleTown/scripts.pory"
	lockall
# 296 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 297 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleOutsideHikerGuy_Movement_0
# 298 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 299 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 300 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 303 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 304 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 305 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 306 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 308 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 309 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 310 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 311 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
# 313 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 314 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleDevonGrunts::
# 319 "data/maps/OldaleTown/scripts.pory"
	lockall
# 320 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 321 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_eq OldaleDevonGrunts_2
OldaleDevonGrunts_1:
# 332 "data/maps/OldaleTown/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_eq OldaleDevonGrunts_5
OldaleDevonGrunts_4:
# 349 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleDevonGrunts_2:
# 323 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 324 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_0
# 326 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_0
# 327 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_1
	goto OldaleDevonGrunts_1

OldaleDevonGrunts_5:
# 333 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_0
# 334 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_2
# 337 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleDevonGrunts_Movement_1
# 338 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_3
# 342 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleDevonGrunts_Movement_2
# 343 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleDevonGrunts_Text_4
# 345 "data/maps/OldaleTown/scripts.pory"
	applymovement 15, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 346 "data/maps/OldaleTown/scripts.pory"
	applymovement 16, OldaleSharpyCameliaOutDLCCutscene_Movement_0
	goto OldaleDevonGrunts_4


OldaleWarehouseRebelGuard::
# 359 "data/maps/OldaleTown/scripts.pory"
	lockall
# 360 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 361 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_0
# 362 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 363 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 364 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 366 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 367 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseRebelGuard_2
OldaleWarehouseRebelGuard_1:
# 369 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseRebelGuard_5
OldaleWarehouseRebelGuard_4:
# 372 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_3
# 375 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_OLDALE_GUARD, RebelOldale_Outro
# 377 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_4
# 378 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 379 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_0
# 380 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_5
# 382 "data/maps/OldaleTown/scripts.pory"
	opendoor 36, 7
# 383 "data/maps/OldaleTown/scripts.pory"
	playse SE_SLIDING_DOOR
# 384 "data/maps/OldaleTown/scripts.pory"
	waitdooranim
# 385 "data/maps/OldaleTown/scripts.pory"
	applymovement 19, OldaleWarehouseRebelGuard_Movement_1
# 386 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 387 "data/maps/OldaleTown/scripts.pory"
	removeobject 19
# 388 "data/maps/OldaleTown/scripts.pory"
	setflag oldalerebelguardleaves
# 389 "data/maps/OldaleTown/scripts.pory"
	closedoor 36, 7
# 390 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_RG_LAVENDER, TRUE
# 392 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleWarehouseRebelGuard_2:
# 368 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_1
	goto OldaleWarehouseRebelGuard_1

OldaleWarehouseRebelGuard_5:
# 370 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleWarehouseRebelGuard_Text_2
	goto OldaleWarehouseRebelGuard_4


# 48 "data/maps/OldaleTown/scripts.pory"
OldaleOutsideHikerGuy_Movement_0:
# 48 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 93 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 93 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 93 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 93 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 93 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 93 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 93 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 98 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 101 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 108 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 108 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 146 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 146 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 148 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 148 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 156 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 240 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 240 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 240 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 275 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_5:
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 275 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 276 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_6:
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 276 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 323 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_0:
# 323 "data/maps/OldaleTown/scripts.pory"
	face_player
# 323 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_right
	step_end

# 337 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_1:
# 337 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_up
# 337 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 342 "data/maps/OldaleTown/scripts.pory"
OldaleDevonGrunts_Movement_2:
# 342 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_down
# 342 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 379 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_0:
# 379 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 385 "data/maps/OldaleTown/scripts.pory"
OldaleWarehouseRebelGuard_Movement_1:
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

OldaleTownSign_Text_0:
# 27 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 34 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleDLCSign_Text_0:
# 40 "data/maps/OldaleTown/scripts.pory"
	.string "Devon Learning Center.\n"
	.string "“Come learn in a safe environment.”$"

OldaleOutsideHikerGuy_Text_0:
# 49 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 59 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to {COLOR BLUE}Rustboro{COLOR DARK_GRAY} today.$"

OldaleOutsideHikerGuy_Text_2:
# 64 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkGuy_Text_0:
# 74 "data/maps/OldaleTown/scripts.pory"
	.string "It's tough being a trader around here\n"
	.string "lately... tons of competition.\p"
	.string "There's scammers taking advantage of\n"
	.string "war tourists, war victims selling their\l"
	.string "valuables to stay afloat...\p"
	.string "You should be careful where you shop!$"

OldaleOutsideOldGuy_Text_0:
# 83 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The brown of the trees is because they\n"
	.string "are dying... it's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 95 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 111 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy... what did you even signed us up\n"
	.string "for here?$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 116 "data/maps/OldaleTown/scripts.pory"
	.string "I'm pretty sure it was a therapy\n"
	.string "session of sorts.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 121 "data/maps/OldaleTown/scripts.pory"
	.string "W-well, you know... Norman told us he\n"
	.string "wouldn't let us help him, until we learnt\l"
	.string "more about the war and Safemon, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 127 "data/maps/OldaleTown/scripts.pory"
	.string "So I thought we'd get some good info\n"
	.string "here!$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 133 "data/maps/OldaleTown/scripts.pory"
	.string "Riiight...$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 138 "data/maps/OldaleTown/scripts.pory"
	.string "You probably just skimmed through the\n"
	.string "ad, and clicked without thinking,\l"
	.string "right...?$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 144 "data/maps/OldaleTown/scripts.pory"
	.string "W-well...$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 155 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, you there!!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 164 "data/maps/OldaleTown/scripts.pory"
	.string "T-those clothes... and that injury...\n"
	.string "mister, you're a soldier, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 166 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 166 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 174 "data/maps/OldaleTown/scripts.pory"
	.string "I knew it! Camelia, he can tell us all\n"
	.string "about the war!$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 181 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, come on - I know you are, don't be so\n"
	.string "modest now!$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 187 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia, you know what this means!? He\n"
	.string "can tell us all about the war$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 195 "data/maps/OldaleTown/scripts.pory"
	.string "T-those clothes... and that injury...\n"
	.string "miss, you're a soldier, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 204 "data/maps/OldaleTown/scripts.pory"
	.string "I knew it! Camelia, she can tell us all\n"
	.string "about the war!$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 216 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia, you know what this means!? She\n"
	.string "can tell us all about the war$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 225 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sharpy, we've been through this.\n"
	.string "You can't just ask strangers about\l"
	.string "horrible things like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 232 "data/maps/OldaleTown/scripts.pory"
	.string "ESPECIALLY soldiers!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 237 "data/maps/OldaleTown/scripts.pory"
	.string "O-of course...! You're right... why would\n"
	.string "he even tell me, if...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 249 "data/maps/OldaleTown/scripts.pory"
	.string "If I haven't beaten him in a Pokémon\n"
	.string "battle! That's the soldier way!\p"
	.string "You don't spill the beans unless you\n"
	.string "lose!$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 255 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? Are you stupid!?$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 260 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, right! What am I THINKING!?\n"
	.string "Thanks again, Camelia!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 265 "data/maps/OldaleTown/scripts.pory"
	.string "If we battle here, we may scare someone\n"
	.string "like that little girl again...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 270 "data/maps/OldaleTown/scripts.pory"
	.string "Race you to Route 103 - we won't bother\n"
	.string "anyone there. Last one is a Feebas!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 273 "data/maps/OldaleTown/scripts.pory"
	.string "Cor-coooor!$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 282 "data/maps/OldaleTown/scripts.pory"
	.string "This... guy...$"

OldaleCamelia_Text_0:
# 300 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 306 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 311 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "our tutor will be mad if we're not home\l"
	.string "soon...$"

OldaleDevonGrunts_Text_0:
# 324 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry, but there is a dangerous,\n"
	.string "non-safened Pokémon roaming Road 002.\p"
	.string "Devon personnel is currently on the\n"
	.string "field to remove the threat.$"

OldaleDevonGrunts_Text_1:
# 327 "data/maps/OldaleTown/scripts.pory"
	.string "To ensure civilian safety, we can't let\n"
	.string "anyone through right now.\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}We also don't want you more injured\n"
	.string "than you look... {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_2:
# 334 "data/maps/OldaleTown/scripts.pory"
	.string "Damn kids, they were fast... by the time\n"
	.string "I grabbed my Pokéball, they had\l"
	.string "sprinted right past me!$"

OldaleDevonGrunts_Text_3:
# 338 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Dude... you were just checking your\n"
	.string "Devon Nav. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleDevonGrunts_Text_4:
# 343 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... can we not? We're in front of a\n"
	.string "civilian! {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

OldaleWarehouseRebelGuard_Text_0:
# 361 "data/maps/OldaleTown/scripts.pory"
	.string "You lost, kid? Well scram, there's\n"
	.string "nothing here for you t-$"

OldaleWarehouseRebelGuard_Text_1:
# 368 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green hood, crutches...\p"
	.string "You're the guy that beat Rick!$"

OldaleWarehouseRebelGuard_Text_2:
# 370 "data/maps/OldaleTown/scripts.pory"
	.string "Wait a second... green cap, arm on a\n"
	.string "sling,...\p"
	.string "You're the lass that beat Rick!$"

OldaleWarehouseRebelGuard_Text_3:
# 372 "data/maps/OldaleTown/scripts.pory"
	.string "Hahaha, you beat him with THAT thing\n"
	.string "behind you? He's so pathetic!\p"
	.string "I'll teach you, not every Rebel is like\n"
	.string "him!$"

OldaleWarehouseRebelGuard_Text_4:
# 377 "data/maps/OldaleTown/scripts.pory"
	.string "Think you're tough, huh? Well, why don't\n"
	.string "you come inside then?$"

OldaleWarehouseRebelGuard_Text_5:
# 380 "data/maps/OldaleTown/scripts.pory"
	.string "We'll give you a warm welcome... hehe.$"

RebelOldale_Outro::
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "Huh... I guess he was right after all...$"
