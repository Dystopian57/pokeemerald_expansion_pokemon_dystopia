# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 3 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 4 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 7 "data/maps/OldaleTown/scripts.pory"

# 8 "data/maps/OldaleTown/scripts.pory"

# 9 "data/maps/OldaleTown/scripts.pory"

# 10 "data/maps/OldaleTown/scripts.pory"

# 11 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 12 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 13 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleOutsideHikerGuy::
# 19 "data/maps/OldaleTown/scripts.pory"
	lockall
# 20 "data/maps/OldaleTown/scripts.pory"
	applymovement 14, OldaleOutsideHikerGuy_Movement_0
# 21 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideHikerGuy_Text_0
# 24 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideParkGuy::
# 28 "data/maps/OldaleTown/scripts.pory"
	lockall
# 29 "data/maps/OldaleTown/scripts.pory"
	applymovement 11, OldaleOutsideHikerGuy_Movement_0
# 30 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideParkGuy_Text_0
# 34 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleOutsideOldGuy::
# 38 "data/maps/OldaleTown/scripts.pory"
	lockall
# 39 "data/maps/OldaleTown/scripts.pory"
	applymovement 13, OldaleOutsideHikerGuy_Movement_0
# 40 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleOutsideOldGuy_Text_0
# 44 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_GotoTherapy::
# 48 "data/maps/OldaleTown/scripts.pory"
	lockall
# 49 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 50 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_0
# 51 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_GotoTherapy_Text_0
# 53 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 54 "data/maps/OldaleTown/scripts.pory"
	special SpawnCameraObject
# 55 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_GotoTherapy_Movement_1
# 56 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/OldaleTown/scripts.pory"
	special RemoveCameraObject
# 58 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_GotoTherapy_Movement_2
# 59 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 60 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleSharpyCameliaOutDLCCutscene::
# 64 "data/maps/OldaleTown/scripts.pory"
	lockall
# 65 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 66 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 67 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_0
# 69 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 70 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 71 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 72 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_1
# 74 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 75 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 76 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 77 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_2
# 80 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 81 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 82 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_3
# 85 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 86 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 87 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_4
# 91 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 92 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 93 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 94 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_5
# 97 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 98 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 99 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 100 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_6
# 102 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 103 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_1
# 104 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_0
# 105 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 106 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 107 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 108 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 109 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_7
# 111 "data/maps/OldaleTown/scripts.pory"
	applymovement 17, OldaleSharpyCameliaOutDLCCutscene_Movement_2
# 112 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_3
# 113 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 115 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 116 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_2
OldaleSharpyCameliaOutDLCCutscene_1:
# 147 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_5
OldaleSharpyCameliaOutDLCCutscene_4:
# 177 "data/maps/OldaleTown/scripts.pory"
answeredsoldierquestion:
# 178 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 179 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 180 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 181 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_17
# 185 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 186 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 187 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 188 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_18
# 190 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 191 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 192 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 193 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_19
# 194 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 196 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_5
# 197 "data/maps/OldaleTown/scripts.pory"
	addobject 20
# 198 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 15, 18
# 199 "data/maps/OldaleTown/scripts.pory"
	playse SE_BALL_OPEN
# 200 "data/maps/OldaleTown/scripts.pory"
	waitse
# 201 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 202 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 203 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 204 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 205 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_20
# 208 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 209 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 210 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 211 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_21
# 213 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 214 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 215 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 216 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_22
# 218 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 219 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 220 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 221 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_23
# 223 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 224 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 225 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 226 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_24
# 228 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 229 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_25
# 231 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_6
# 232 "data/maps/OldaleTown/scripts.pory"
	applymovement 20, OldaleSharpyCameliaOutDLCCutscene_Movement_7
# 233 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 235 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 236 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 237 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 238 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_26
# 239 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 240 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_PHASE, 2
# 241 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 18, 0, 0
# 242 "data/maps/OldaleTown/scripts.pory"
	setobjectxy 20, 0, 0
# 243 "data/maps/OldaleTown/scripts.pory"
	setflag sharpynotoutsideDLC
# 244 "data/maps/OldaleTown/scripts.pory"
	clearflag sharpynotinroute103
# 245 "data/maps/OldaleTown/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 246 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return

OldaleSharpyCameliaOutDLCCutscene_2:
# 117 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 118 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 119 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 120 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_8
# 122 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_9, OldaleSharpyCameliaOutDLCCutscene_Text_10
# 123 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 125 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_8
OldaleSharpyCameliaOutDLCCutscene_7:
# 133 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_13
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_5:
# 148 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 149 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 150 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 151 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_14
# 153 "data/maps/OldaleTown/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleSharpyCameliaOutDLCCutscene_Text_9, OldaleSharpyCameliaOutDLCCutscene_Text_10
# 154 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 156 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_11
OldaleSharpyCameliaOutDLCCutscene_10:
# 163 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleSharpyCameliaOutDLCCutscene_16
OldaleSharpyCameliaOutDLCCutscene_15:
# 174 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_4

OldaleSharpyCameliaOutDLCCutscene_8:
# 126 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 127 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 128 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 129 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 130 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_11
# 131 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_7

OldaleSharpyCameliaOutDLCCutscene_11:
# 157 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 158 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 159 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 160 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_15
# 161 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_10

OldaleSharpyCameliaOutDLCCutscene_13:
# 134 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 135 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 136 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 137 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 139 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 140 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 141 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 142 "data/maps/OldaleTown/scripts.pory"
	applymovement 18, OldaleSharpyCameliaOutDLCCutscene_Movement_4
# 143 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_13
# 144 "data/maps/OldaleTown/scripts.pory"
	goto answeredsoldierquestion
	goto OldaleSharpyCameliaOutDLCCutscene_1

OldaleSharpyCameliaOutDLCCutscene_16:
# 164 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 165 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 166 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 167 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_12
# 169 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 170 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 171 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 172 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleSharpyCameliaOutDLCCutscene_Text_16
	goto OldaleSharpyCameliaOutDLCCutscene_15


OldaleCamelia::
# 251 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 252 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 253 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_0
# 256 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 257 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 258 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 259 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_1
# 261 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 262 "data/maps/OldaleTown/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 263 "data/maps/OldaleTown/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 264 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleCamelia_Text_2
# 266 "data/maps/OldaleTown/scripts.pory"
	removefieldmugshot
# 267 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


# 20 "data/maps/OldaleTown/scripts.pory"
OldaleOutsideHikerGuy_Movement_0:
# 20 "data/maps/OldaleTown/scripts.pory"
	face_player
	step_end

# 50 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_0:
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 55 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_1:
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 58 "data/maps/OldaleTown/scripts.pory"
OldaleTown_GotoTherapy_Movement_2:
# 58 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 102 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_0:
# 102 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 103 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_1:
# 103 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 111 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_2:
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 111 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 112 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_3:
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 113 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_4:
# 113 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 196 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_5:
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 196 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 231 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_6:
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_down
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

# 232 "data/maps/OldaleTown/scripts.pory"
OldaleSharpyCameliaOutDLCCutscene_Movement_7:
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
	step_end

OldaleOutsideHikerGuy_Text_0:
# 21 "data/maps/OldaleTown/scripts.pory"
	.string "They say those Rebels are all about\n"
	.string "fighting Devon, and things like the\l"
	.string "Safemon project...\p"
	.string "But most of them are old Team Aqua and\n"
	.string "Team Magma members.\p"
	.string "If you ask me, they're the same\n"
	.string "hoodlums, with a different name!$"

OldaleOutsideParkGuy_Text_0:
# 30 "data/maps/OldaleTown/scripts.pory"
	.string "It's tough being a trader around here\n"
	.string "lately... tons of competition.\p"
	.string "There's scammers taking advantage of\n"
	.string "war tourists, war victims selling their\l"
	.string "valuables to meet their needs...\p"
	.string "You be careful where you shop now.$"

OldaleOutsideOldGuy_Text_0:
# 40 "data/maps/OldaleTown/scripts.pory"
	.string "If you were wondering... it should be way\n"
	.string "past autumn now.\p"
	.string "The brown of the trees is because they\n"
	.string "are dying... it's the Koffing poison the\l"
	.string "Kantonians doused during the war.\p"
	.string "Before long, we may not be able to live\n"
	.string "here anymore...$"

OldaleTown_GotoTherapy_Text_0:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "That's the Devon Learning Center... I\n"
	.string "should attend the therapy session.$"

OldaleSharpyCameliaOutDLCCutscene_Text_0:
# 67 "data/maps/OldaleTown/scripts.pory"
	.string "Sharpy... what did you even signed us up\n"
	.string "for here?$"

OldaleSharpyCameliaOutDLCCutscene_Text_1:
# 72 "data/maps/OldaleTown/scripts.pory"
	.string "I'm pretty sure it was a therapy\n"
	.string "session of sorts.$"

OldaleSharpyCameliaOutDLCCutscene_Text_2:
# 77 "data/maps/OldaleTown/scripts.pory"
	.string "W-well, you know... Norman told us he\n"
	.string "wouldn't let us help him, until we learnt\l"
	.string "more about the war and Safemon, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_3:
# 83 "data/maps/OldaleTown/scripts.pory"
	.string "So I thought we'd get some good info\n"
	.string "here!$"

OldaleSharpyCameliaOutDLCCutscene_Text_4:
# 89 "data/maps/OldaleTown/scripts.pory"
	.string "Riiight...$"

OldaleSharpyCameliaOutDLCCutscene_Text_5:
# 94 "data/maps/OldaleTown/scripts.pory"
	.string "You probably just skimmed through the\n"
	.string "ad, and clicked without thinking,\l"
	.string "right...?$"

OldaleSharpyCameliaOutDLCCutscene_Text_6:
# 100 "data/maps/OldaleTown/scripts.pory"
	.string "W-well...$"

OldaleSharpyCameliaOutDLCCutscene_Text_7:
# 109 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, look - behind you!$"

OldaleSharpyCameliaOutDLCCutscene_Text_8:
# 120 "data/maps/OldaleTown/scripts.pory"
	.string "T-those clothes... and that injury...\n"
	.string "mister, you're a soldier, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_9:
# 122 "data/maps/OldaleTown/scripts.pory"
	.string "Yes$"

OldaleSharpyCameliaOutDLCCutscene_Text_10:
# 122 "data/maps/OldaleTown/scripts.pory"
	.string "No$"

OldaleSharpyCameliaOutDLCCutscene_Text_11:
# 130 "data/maps/OldaleTown/scripts.pory"
	.string "I knew it! Camelia, he can tell us all\n"
	.string "about the war!$"

OldaleSharpyCameliaOutDLCCutscene_Text_12:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "Oh, come on - I know you are, don't be so\n"
	.string "modest now!$"

OldaleSharpyCameliaOutDLCCutscene_Text_13:
# 143 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia, you know what this means!? He\n"
	.string "can tell us all about the war$"

OldaleSharpyCameliaOutDLCCutscene_Text_14:
# 151 "data/maps/OldaleTown/scripts.pory"
	.string "T-those clothes... and that injury...\n"
	.string "miss, you're a soldier, right?$"

OldaleSharpyCameliaOutDLCCutscene_Text_15:
# 160 "data/maps/OldaleTown/scripts.pory"
	.string "I knew it! Camelia, she can tell us all\n"
	.string "about the war!$"

OldaleSharpyCameliaOutDLCCutscene_Text_16:
# 172 "data/maps/OldaleTown/scripts.pory"
	.string "Camelia, you know what this means!? She\n"
	.string "can tell us all about the war$"

OldaleSharpyCameliaOutDLCCutscene_Text_17:
# 181 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sharpy, we've been through this.\n"
	.string "You can't just ask strangers about\l"
	.string "horrible things like that!$"

OldaleSharpyCameliaOutDLCCutscene_Text_18:
# 188 "data/maps/OldaleTown/scripts.pory"
	.string "ESPECIALLY soldiers!$"

OldaleSharpyCameliaOutDLCCutscene_Text_19:
# 193 "data/maps/OldaleTown/scripts.pory"
	.string "O-of course...! You're right... why would\n"
	.string "he even tell me, if...$"

OldaleSharpyCameliaOutDLCCutscene_Text_20:
# 205 "data/maps/OldaleTown/scripts.pory"
	.string "If I haven't beaten him in a Pokémon\n"
	.string "battle! That's the soldier way!\p"
	.string "You don't spill the beans unless you\n"
	.string "lose!$"

OldaleSharpyCameliaOutDLCCutscene_Text_21:
# 211 "data/maps/OldaleTown/scripts.pory"
	.string "W-what!? Are you stupid!?$"

OldaleSharpyCameliaOutDLCCutscene_Text_22:
# 216 "data/maps/OldaleTown/scripts.pory"
	.string "O-oh, right! What am I THINKING!?\n"
	.string "Thanks again, Camelia!$"

OldaleSharpyCameliaOutDLCCutscene_Text_23:
# 221 "data/maps/OldaleTown/scripts.pory"
	.string "If we battle here, we may scare someone\n"
	.string "like that little girl again...$"

OldaleSharpyCameliaOutDLCCutscene_Text_24:
# 226 "data/maps/OldaleTown/scripts.pory"
	.string "Race you to Route 103 - we won't bother\n"
	.string "anyone there. Last one is a Feebas!$"

OldaleSharpyCameliaOutDLCCutscene_Text_25:
# 229 "data/maps/OldaleTown/scripts.pory"
	.string "Cor-coooor!$"

OldaleSharpyCameliaOutDLCCutscene_Text_26:
# 238 "data/maps/OldaleTown/scripts.pory"
	.string "This... guy...$"

OldaleCamelia_Text_0:
# 253 "data/maps/OldaleTown/scripts.pory"
	.string "I'm sorry about him... I know this is a\n"
	.string "lot to ask, but can you go kick that\l"
	.string "idiot's ass real quick?$"

OldaleCamelia_Text_1:
# 259 "data/maps/OldaleTown/scripts.pory"
	.string "You fought in the war, so it should be\n"
	.string "easy right?$"

OldaleCamelia_Text_2:
# 264 "data/maps/OldaleTown/scripts.pory"
	.string "He won't leave until you battle him, and\n"
	.string "our tutor will be mad if we're not home\l"
	.string "soon...$"
