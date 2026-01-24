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
	compare VAR_LITTLEROOT_PHASE, 1
	goto_if_eq OldaleWeather_5
OldaleWeather_4:
# 21 "data/maps/OldaleTown/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 2
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
# 22 "data/maps/OldaleTown/scripts.pory"
	setweather WEATHER_SHADE
	return


OldaleTownSign::
# 27 "data/maps/OldaleTown/scripts.pory"
	lockall
# 28 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTownSign_Text_0
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


OldaleOutsideHikerGuy::
# 39 "data/maps/OldaleTown/scripts.pory"
	lockall
# 40 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 41 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq OldaleOutsideHikerGuy_2
OldaleOutsideHikerGuy_1:
# 46 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq OldaleOutsideHikerGuy_5
OldaleOutsideHikerGuy_4:
# 51 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq OldaleOutsideHikerGuy_8
OldaleOutsideHikerGuy_7:
# 56 "data/maps/OldaleTown/scripts.pory"
	compare VAR_JOELQUESTS, 3
	goto_if_eq OldaleOutsideHikerGuy_11
OldaleOutsideHikerGuy_10:
# 61 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleOutsideHikerGuy_2:
# 42 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 43 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_1

OldaleOutsideHikerGuy_5:
# 47 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 48 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
	goto OldaleOutsideHikerGuy_4

OldaleOutsideHikerGuy_8:
# 52 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 53 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_1
	goto OldaleOutsideHikerGuy_7

OldaleOutsideHikerGuy_11:
# 57 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 58 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_2
	goto OldaleOutsideHikerGuy_10


OldaleOutsideParkGuy::
# 65 "data/maps/OldaleTown/scripts.pory"
	lockall
# 66 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 67 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, OldaleOutsideHikerGuy_Movement_0
# 68 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkGuy_Text_0
# 71 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldGuy::
# 75 "data/maps/OldaleTown/scripts.pory"
	lockall
# 76 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, OldaleOutsideHikerGuy_Movement_0
# 77 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 81 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 85 "data/maps/OldaleTown/scripts.pory"
	lockall
# 86 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 87 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 88 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 90 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 91 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 92 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 93 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 94 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 95 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 96 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 97 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 101 "data/maps/OldaleTown/scripts.pory"
	lockall
# 102 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 103 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 104 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 106 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 107 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 108 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 109 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 111 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 112 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 113 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 114 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
# 117 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 118 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 119 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 120 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
# 122 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 123 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 124 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 126 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
# 128 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 129 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 130 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 131 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
# 134 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 135 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 136 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 137 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 139 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 140 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 141 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 142 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 143 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 144 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 145 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 146 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 147 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 148 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 149 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 151 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 152 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 183 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 213 "data/maps/OldaleTown/scripts.pory"
answeredsoldierquestion:
# 214 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 215 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 216 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 217 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 221 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 222 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 223 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 224 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 226 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 227 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 228 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 229 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 230 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 232 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 233 "data/maps/OldaleTown/scripts.pory"
	addobject 20
# 234 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 15, 18
# 235 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_OPEN
# 236 "data/maps/OldaleTown/scripts.pory"
	waitse
# 237 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 238 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 239 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 240 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 241 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 244 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 245 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 246 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 247 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 249 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 250 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 251 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 252 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 254 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 255 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 256 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 257 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 259 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 260 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 261 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 262 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 264 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 265 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 267 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 268 "data/maps/OldaleTown/scripts.pory"
	applymovement 20, OldaleSharpyCameliaOutDLCCutscene_Movement_6
# 269 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 271 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 272 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 273 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 274 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 275 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 276 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 277 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 278 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 279 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 280 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 281 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 282 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 283 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 153 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 154 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 155 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 156 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 158 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_9, OldaleSharpyCameliaOutDLCCutscene_Text_10
# 159 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 161 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 169 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_13
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 184 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 185 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 186 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 187 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
# 189 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_9, OldaleSharpyCameliaOutDLCCutscene_Text_10
# 190 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 192 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 199 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_16
OldaleSharpyCameliaOutDLCCutscene_15:
# 210 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 162 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 163 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 164 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 165 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 166 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 167 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 193 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 194 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 195 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 196 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 197 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_13:
# 170 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 171 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 172 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 173 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 175 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 176 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 177 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 178 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 179 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 180 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_16:
# 200 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 201 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 202 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 203 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 205 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 206 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 207 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 208 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
	goto OldaleSharpyCameliaOutDLCCutscene_15


OldaleCamelia::
# 287 "data/maps/OldaleTown/scripts.pory"
	lockall
# 288 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 289 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleOutsideHikerGuy_Movement_0
# 290 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 291 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 292 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 295 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 296 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 297 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 298 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 300 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 301 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 302 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 303 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
# 305 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 306 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


# 42 "data/maps/OldaleTown/scripts.pory"
OldaleOutsideHikerGuy_Movement_0:
# 42 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 87 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 87 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 87 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 87 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 87 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 87 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 87 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 92 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 95 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 139 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 140 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 140 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 148 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 149 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 149 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 232 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 232 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 267 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_5:
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 267 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 268 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_6:
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

OldaleTownSign_Text_0:
# 28 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town.\n"
	.string "“Where things start off scarce.”$"

Oldale103Sign_Text_0:
# 34 "data/maps/OldaleTown/scripts.pory"
	.string "Route 103 ahead.\p"
	.string "In case of flood, retreat behind the\n"
	.string "flood gates.$"

OldaleOutsideHikerGuy_Text_0:
# 43 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know? My son is top of the class\n"
	.string "at the DLC!\p"
	.string "He's as sharp as his father. He'll make\n"
	.string "it big in Rustboro one day, I'm sure.$"

OldaleOutsideHikerGuy_Text_1:
# 53 "data/maps/OldaleTown/scripts.pory"
	.string "Arf, arf... I tried catching up to my\n"
	.string "daugther, but she's so fast...!\p"
	.string "I hope she doesn't go too far. We are\n"
	.string "moving to Rustboro today.$"

OldaleOutsideHikerGuy_Text_2:
# 58 "data/maps/OldaleTown/scripts.pory"
	.string "My daugther is finally back... I can't\n"
	.string "wait to get out of this place.\p"
	.string "I assure you, it's not what it used to\n"
	.string "be...$"

OldaleOutsideParkGuy_Text_0:
# 68 "data/maps/OldaleTown/scripts.pory"
	.string "It's tough being a trader around here\n"
	.string "lately... tons of competition.\p"
	.string "There's scammers taking advantage of\n"
	.string "war tourists, war victims selling their\l"
	.string "valuables to stay afloat...\p"
	.string "You should be careful where you shop!$"

OldaleOutsideOldGuy_Text_0:
# 77 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The brown of the trees is because they\n"
	.string "are dying... it's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 89 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 104 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy... what did you even signed us up\n"
	.string "for here?$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 109 "data/maps/OldaleTown/scripts.pory"
	.string "I'm pretty sure it was a therapy\n"
	.string "session of sorts.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 114 "data/maps/OldaleTown/scripts.pory"
	.string "W-well, you know... Norman told us he\n"
	.string "wouldn't let us help him, until we learnt\l"
	.string "more about the war and Safemon, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 120 "data/maps/OldaleTown/scripts.pory"
	.string "So I thought we'd get some good info\n"
	.string "here!$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 126 "data/maps/OldaleTown/scripts.pory"
	.string "Riiight...$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 131 "data/maps/OldaleTown/scripts.pory"
	.string "You probably just skimmed through the\n"
	.string "ad, and clicked without thinking,\l"
	.string "right...?$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "W-well...$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 147 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, you there!!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 156 "data/maps/OldaleTown/scripts.pory"
	.string "T-those clothes... and that injury...\n"
	.string "mister, you're a soldier, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 158 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 158 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 166 "data/maps/OldaleTown/scripts.pory"
	.string "I knew it! Camelia, he can tell us all\n"
	.string "about the war!$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 173 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, come on - I know you are, don't be so\n"
	.string "modest now!$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 179 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia, you know what this means!? He\n"
	.string "can tell us all about the war$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 187 "data/maps/OldaleTown/scripts.pory"
	.string "T-those clothes... and that injury...\n"
	.string "miss, you're a soldier, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 196 "data/maps/OldaleTown/scripts.pory"
	.string "I knew it! Camelia, she can tell us all\n"
	.string "about the war!$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 208 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia, you know what this means!? She\n"
	.string "can tell us all about the war$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 217 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sharpy, we've been through this.\n"
	.string "You can't just ask strangers about\l"
	.string "horrible things like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 224 "data/maps/OldaleTown/scripts.pory"
	.string "ESPECIALLY soldiers!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 229 "data/maps/OldaleTown/scripts.pory"
	.string "O-of course...! You're right... why would\n"
	.string "he even tell me, if...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 241 "data/maps/OldaleTown/scripts.pory"
	.string "If I haven't beaten him in a Pokémon\n"
	.string "battle! That's the soldier way!\p"
	.string "You don't spill the beans unless you\n"
	.string "lose!$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 247 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? Are you stupid!?$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 252 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, right! What am I THINKING!?\n"
	.string "Thanks again, Camelia!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 257 "data/maps/OldaleTown/scripts.pory"
	.string "If we battle here, we may scare someone\n"
	.string "like that little girl again...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 262 "data/maps/OldaleTown/scripts.pory"
	.string "Race you to Route 103 - we won't bother\n"
	.string "anyone there. Last one is a Feebas!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 265 "data/maps/OldaleTown/scripts.pory"
	.string "Cor-coooor!$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 274 "data/maps/OldaleTown/scripts.pory"
	.string "This... guy...$"

OldaleCamelia_Text_0:
# 292 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 298 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 303 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "our tutor will be mad if we're not home\l"
	.string "soon...$"
