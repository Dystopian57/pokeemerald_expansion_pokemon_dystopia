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
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 41 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
# 44 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideParkGuy::
# 48 "data/maps/OldaleTown/scripts.pory"
	lockall
# 49 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, OldaleOutsideHikerGuy_Movement_0
# 50 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkGuy_Text_0
# 54 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldGuy::
# 58 "data/maps/OldaleTown/scripts.pory"
	lockall
# 59 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, OldaleOutsideHikerGuy_Movement_0
# 60 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 64 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 68 "data/maps/OldaleTown/scripts.pory"
	lockall
# 69 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 70 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 71 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 72 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 73 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 74 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 75 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 76 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 77 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 78 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 79 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 80 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 84 "data/maps/OldaleTown/scripts.pory"
	lockall
# 85 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 86 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 87 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 89 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 90 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 91 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 92 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 94 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 95 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 96 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 97 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
# 100 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 101 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 102 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 103 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
# 105 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 106 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 107 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 109 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
# 111 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 112 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 113 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 114 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
# 117 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 118 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 119 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 120 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 122 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 123 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 124 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 125 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 126 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 127 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 128 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 129 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 130 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 131 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 132 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 134 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 135 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 166 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 196 "data/maps/OldaleTown/scripts.pory"
answeredsoldierquestion:
# 197 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 198 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 199 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 200 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 204 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 205 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 206 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 207 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 209 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 210 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 211 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 212 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 213 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 215 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 216 "data/maps/OldaleTown/scripts.pory"
	addobject 20
# 217 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 15, 18
# 218 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_OPEN
# 219 "data/maps/OldaleTown/scripts.pory"
	waitse
# 220 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 221 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 222 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 223 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 224 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 227 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 228 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 229 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 230 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 232 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 233 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 234 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 235 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 237 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 238 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 239 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 240 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 242 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 243 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 244 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 245 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 247 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 248 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 250 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 251 "data/maps/OldaleTown/scripts.pory"
	applymovement 20, OldaleSharpyCameliaOutDLCCutscene_Movement_6
# 252 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 254 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 255 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 256 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 257 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 258 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 259 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 260 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 261 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 262 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 263 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 264 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 265 "data/maps/OldaleTown/scripts.pory"
	setflag camelianotinroute103
# 266 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 136 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 137 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 138 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 139 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 141 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_9, OldaleSharpyCameliaOutDLCCutscene_Text_10
# 142 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 144 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 152 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_13
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 167 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 168 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 169 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 170 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
# 172 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_9, OldaleSharpyCameliaOutDLCCutscene_Text_10
# 173 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 175 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 182 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_16
OldaleSharpyCameliaOutDLCCutscene_15:
# 193 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 145 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 146 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 147 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 148 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 149 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 150 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 176 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 177 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 178 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 179 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 180 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_13:
# 153 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 154 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 155 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 156 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 158 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 159 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 160 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 161 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 162 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 163 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_16:
# 183 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 184 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 185 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 186 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 188 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 189 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 190 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 191 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
	goto OldaleSharpyCameliaOutDLCCutscene_15


OldaleCamelia::
# 270 "data/maps/OldaleTown/scripts.pory"
	lockall
# 271 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleOutsideHikerGuy_Movement_0
# 272 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 273 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 274 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 277 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 278 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 279 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 280 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 282 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 283 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 284 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 285 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
# 287 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 288 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


# 40 "data/maps/OldaleTown/scripts.pory"
OldaleOutsideHikerGuy_Movement_0:
# 40 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 70 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 70 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 70 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 70 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 70 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 70 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 70 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 75 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 78 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 78 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 122 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 122 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 123 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 123 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 131 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 132 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 132 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 215 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 215 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 250 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_5:
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 250 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 251 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_6:
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 251 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 251 "data/maps/OldaleTown/scripts.pory"
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
# 41 "data/maps/OldaleTown/scripts.pory"
	.string "They say those Rebels are all about\n"
	.string "fighting Devon, and things like the\l"
	.string "Safemon project...\p"
	.string "But most of them are old Team Aqua and\n"
	.string "Team Magma members.\p"
	.string "If you ask me, they're the same\n"
	.string "hoodlums, with a different name!$"

OldaleOutsideParkGuy_Text_0:
# 50 "data/maps/OldaleTown/scripts.pory"
	.string "It's tough being a trader around here\n"
	.string "lately... tons of competition.\p"
	.string "There's scammers taking advantage of\n"
	.string "war tourists, war victims selling their\l"
	.string "valuables to meet their needs...\p"
	.string "You be careful where you shop now.$"

OldaleOutsideOldGuy_Text_0:
# 60 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The brown of the trees is because they\n"
	.string "are dying... it's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 72 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 87 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy... what did you even signed us up\n"
	.string "for here?$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 92 "data/maps/OldaleTown/scripts.pory"
	.string "I'm pretty sure it was a therapy\n"
	.string "session of sorts.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 97 "data/maps/OldaleTown/scripts.pory"
	.string "W-well, you know... Norman told us he\n"
	.string "wouldn't let us help him, until we learnt\l"
	.string "more about the war and Safemon, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 103 "data/maps/OldaleTown/scripts.pory"
	.string "So I thought we'd get some good info\n"
	.string "here!$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 109 "data/maps/OldaleTown/scripts.pory"
	.string "Riiight...$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 114 "data/maps/OldaleTown/scripts.pory"
	.string "You probably just skimmed through the\n"
	.string "ad, and clicked without thinking,\l"
	.string "right...?$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 120 "data/maps/OldaleTown/scripts.pory"
	.string "W-well...$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 130 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, you there!!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 139 "data/maps/OldaleTown/scripts.pory"
	.string "T-those clothes... and that injury...\n"
	.string "mister, you're a soldier, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 141 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 141 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "I knew it! Camelia, he can tell us all\n"
	.string "about the war!$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 156 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, come on - I know you are, don't be so\n"
	.string "modest now!$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 162 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia, you know what this means!? He\n"
	.string "can tell us all about the war$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 170 "data/maps/OldaleTown/scripts.pory"
	.string "T-those clothes... and that injury...\n"
	.string "miss, you're a soldier, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 179 "data/maps/OldaleTown/scripts.pory"
	.string "I knew it! Camelia, she can tell us all\n"
	.string "about the war!$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 191 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia, you know what this means!? She\n"
	.string "can tell us all about the war$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 200 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sharpy, we've been through this.\n"
	.string "You can't just ask strangers about\l"
	.string "horrible things like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 207 "data/maps/OldaleTown/scripts.pory"
	.string "ESPECIALLY soldiers!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 212 "data/maps/OldaleTown/scripts.pory"
	.string "O-of course...! You're right... why would\n"
	.string "he even tell me, if...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 224 "data/maps/OldaleTown/scripts.pory"
	.string "If I haven't beaten him in a Pokémon\n"
	.string "battle! That's the soldier way!\p"
	.string "You don't spill the beans unless you\n"
	.string "lose!$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 230 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? Are you stupid!?$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 235 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, right! What am I THINKING!?\n"
	.string "Thanks again, Camelia!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 240 "data/maps/OldaleTown/scripts.pory"
	.string "If we battle here, we may scare someone\n"
	.string "like that little girl again...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 245 "data/maps/OldaleTown/scripts.pory"
	.string "Race you to Route 103 - we won't bother\n"
	.string "anyone there. Last one is a Feebas!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 248 "data/maps/OldaleTown/scripts.pory"
	.string "Cor-coooor!$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 257 "data/maps/OldaleTown/scripts.pory"
	.string "This... guy...$"

OldaleCamelia_Text_0:
# 274 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 280 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 285 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "our tutor will be mad if we're not home\l"
	.string "soon...$"
