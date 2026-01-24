# 1 "data/maps/DLC/scripts.pory"

# 2 "data/maps/DLC/scripts.pory"
DLC_MapScripts::
# 3 "data/maps/DLC/scripts.pory"
	.byte 0

OldaleDLC_GoToSeatForTherapyLeft::
# 8 "data/maps/DLC/scripts.pory"
	lockall
# 9 "data/maps/DLC/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 10 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 11 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 12 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 13 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 14 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 16 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyLeft_Movement_1
# 17 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleDLC_GoToSeatForTherapyRight::
# 21 "data/maps/DLC/scripts.pory"
	lockall
# 22 "data/maps/DLC/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 23 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 24 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 25 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 26 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 27 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 29 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyRight_Movement_0
# 30 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleTown_DLC_TherapyCutscene::
# 34 "data/maps/DLC/scripts.pory"
starttherapycutscene:
# 35 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_0
# 37 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_VENUSAUR, 10, 3
# 38 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_NORMAL
# 39 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_1
# 40 "data/maps/DLC/scripts.pory"
	hidemonpic
# 41 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_2
# 42 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_DLC_TherapyCutscene_Text_3, OldaleTown_DLC_TherapyCutscene_Text_4, OldaleTown_DLC_TherapyCutscene_Text_5
# 43 "data/maps/DLC/scripts.pory"
	hidemonpic
# 44 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 45 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_0
# 46 "data/maps/DLC/scripts.pory"
	waitmovement
# 48 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_DLC_TherapyCutscene_2
OldaleTown_DLC_TherapyCutscene_1:
# 52 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_DLC_TherapyCutscene_5
OldaleTown_DLC_TherapyCutscene_4:
# 56 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleTown_DLC_TherapyCutscene_8
OldaleTown_DLC_TherapyCutscene_7:
# 60 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 61 "data/maps/DLC/scripts.pory"
	waitmovement
# 62 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_9
# 64 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_2
# 65 "data/maps/DLC/scripts.pory"
	waitmovement
# 66 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_10
# 68 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 69 "data/maps/DLC/scripts.pory"
	waitmovement
# 70 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_CHARIZARD, 10, 3
# 71 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
# 72 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_11
# 73 "data/maps/DLC/scripts.pory"
	hidemonpic
# 74 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 75 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_0
# 76 "data/maps/DLC/scripts.pory"
	waitmovement
# 77 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_12
# 79 "data/maps/DLC/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 80 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_4
# 81 "data/maps/DLC/scripts.pory"
	waitmovement
# 82 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 83 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 84 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_13
# 86 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 87 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_5
# 88 "data/maps/DLC/scripts.pory"
	waitmovement
# 89 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 90 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_14
# 92 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 93 "data/maps/DLC/scripts.pory"
	waitmovement
# 94 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_15
# 95 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BLASTOISE, 10, 3
# 96 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_NORMAL
# 97 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 98 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_16
# 99 "data/maps/DLC/scripts.pory"
	hidemonpic
# 101 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 102 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_7
# 103 "data/maps/DLC/scripts.pory"
	waitmovement
# 104 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_17
# 106 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 107 "data/maps/DLC/scripts.pory"
	waitmovement
# 108 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_18
# 112 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 113 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_0
# 114 "data/maps/DLC/scripts.pory"
	waitmovement
# 115 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 116 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 117 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 118 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_19
# 120 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 122 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 123 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 124 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 125 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_8
# 126 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_20
# 128 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 129 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_9
# 130 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 131 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_21
# 133 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 134 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 135 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 136 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_22
# 137 "data/maps/DLC/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 139 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 140 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 141 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 142 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_2
# 143 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_23
# 144 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 145 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 146 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_24
# 147 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_10
# 148 "data/maps/DLC/scripts.pory"
	playse SE_FLEE
# 149 "data/maps/DLC/scripts.pory"
	waitse
# 150 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_11
# 151 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_12
# 152 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_11
# 153 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_12
# 154 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 155 "data/maps/DLC/scripts.pory"
	waitse
# 156 "data/maps/DLC/scripts.pory"
	playse SE_M_METRONOME
# 157 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_13
# 158 "data/maps/DLC/scripts.pory"
	waitmovement
# 159 "data/maps/DLC/scripts.pory"
	waitse
# 160 "data/maps/DLC/scripts.pory"
	removeobject 1
# 161 "data/maps/DLC/scripts.pory"
	waitmovement
# 162 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 163 "data/maps/DLC/scripts.pory"
	waitmovement
# 164 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 165 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 166 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 167 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 168 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_25
# 172 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_14
# 173 "data/maps/DLC/scripts.pory"
	waitmovement
# 174 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_15
# 175 "data/maps/DLC/scripts.pory"
	waitmovement
# 176 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 177 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 178 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_26
# 179 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 180 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_16
# 181 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_17
# 182 "data/maps/DLC/scripts.pory"
	waitmovement
# 183 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 184 "data/maps/DLC/scripts.pory"
	waitse
# 185 "data/maps/DLC/scripts.pory"
	removeobject 2
# 186 "data/maps/DLC/scripts.pory"
	removeobject 3
# 188 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 189 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_DLC_TherapyCutscene_Movement_18
# 190 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 191 "data/maps/DLC/scripts.pory"
	clearflag sharpynotoutsideDLC
# 192 "data/maps/DLC/scripts.pory"
	clearflag camelianotoutsideDLC
# 193 "data/maps/DLC/scripts.pory"
	setflag sharpynotinsideDLC
# 194 "data/maps/DLC/scripts.pory"
	setflag camelianotinsideDLC
# 195 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 196 "data/maps/DLC/scripts.pory"
	waitmovement
# 198 "data/maps/DLC/scripts.pory"
	setvar VAR_OLDALE_PHASE, 1
# 199 "data/maps/DLC/scripts.pory"
	releaseall
	return

OldaleTown_DLC_TherapyCutscene_2:
# 49 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_6
	goto OldaleTown_DLC_TherapyCutscene_1

OldaleTown_DLC_TherapyCutscene_5:
# 53 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_7
	goto OldaleTown_DLC_TherapyCutscene_4

OldaleTown_DLC_TherapyCutscene_8:
# 57 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_8
	goto OldaleTown_DLC_TherapyCutscene_7


LittleKidDLC::
# 204 "data/maps/DLC/scripts.pory"
	lockall
# 205 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 206 "data/maps/DLC/scripts.pory"
	applymovement 5, LittleKidDLC_Movement_0
# 207 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_0
# 209 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 210 "data/maps/DLC/scripts.pory"
	releaseall
	return


FatManDLC::
# 214 "data/maps/DLC/scripts.pory"
	lockall
# 215 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 216 "data/maps/DLC/scripts.pory"
	applymovement 7, LittleKidDLC_Movement_0
# 217 "data/maps/DLC/scripts.pory"
	msgbox FatManDLC_Text_0
# 219 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 220 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLC::
# 224 "data/maps/DLC/scripts.pory"
	lockall
# 225 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 226 "data/maps/DLC/scripts.pory"
	applymovement 4, LittleKidDLC_Movement_0
# 227 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLC_Text_0
# 228 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 229 "data/maps/DLC/scripts.pory"
	releaseall
	return


GirlNotebookDLC::
# 233 "data/maps/DLC/scripts.pory"
	lockall
# 234 "data/maps/DLC/scripts.pory"
	msgbox GirlNotebookDLC_Text_0
# 236 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingBoyNotebookDLC::
# 240 "data/maps/DLC/scripts.pory"
	lockall
# 241 "data/maps/DLC/scripts.pory"
	msgbox SleepingBoyNotebookDLC_Text_0
# 242 "data/maps/DLC/scripts.pory"
	releaseall
	return


DyslexicKidNotebookDLC::
# 246 "data/maps/DLC/scripts.pory"
	lockall
# 247 "data/maps/DLC/scripts.pory"
	msgbox DyslexicKidNotebookDLC_Text_0
# 248 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherDLC::
# 253 "data/maps/DLC/scripts.pory"
	lockall
# 254 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 255 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 256 "data/maps/DLC/scripts.pory"
	msgbox TeacherDLC_Text_0
# 258 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 259 "data/maps/DLC/scripts.pory"
	releaseall
	return


LibraryGuyDLC::
# 264 "data/maps/DLC/scripts.pory"
	lockall
# 265 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 266 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 267 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_0
# 269 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 270 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherdeskDLC::
# 274 "data/maps/DLC/scripts.pory"
	lockall
# 275 "data/maps/DLC/scripts.pory"
	msgbox TeacherdeskDLC_Text_0
# 277 "data/maps/DLC/scripts.pory"
	releaseall
	return


BlackBoardDLC::
# 281 "data/maps/DLC/scripts.pory"
	lockall
# 282 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 283 "data/maps/DLC/scripts.pory"
	goto_if_set DLCmathresolved, BlackBoardDLC_2
BlackBoardDLC_1:
# 286 "data/maps/DLC/scripts.pory"
	goto_if_unset DLCmathresolved, BlackBoardDLC_4
	return

BlackBoardDLC_2:
# 284 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_0
	goto BlackBoardDLC_1

BlackBoardDLC_4:
# 287 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_1
# 289 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_2
# 290 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BlackBoardDLC_Text_3, BlackBoardDLC_Text_4, BlackBoardDLC_Text_5, OldaleTown_DLC_TherapyCutscene_Text_5
# 291 "data/maps/DLC/scripts.pory"
	waitmessage
# 293 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackBoardDLC_7
BlackBoardDLC_6:
# 302 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackBoardDLC_10
BlackBoardDLC_9:
# 316 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_13
BlackBoardDLC_12:
# 325 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_16
BlackBoardDLC_15:
# 328 "data/maps/DLC/scripts.pory"
	releaseall
	return

BlackBoardDLC_7:
# 294 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_6
# 295 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 296 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_15
# 297 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 299 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
	goto BlackBoardDLC_6

BlackBoardDLC_10:
# 303 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_8
# 304 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 305 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_15
# 306 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_9
# 307 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 308 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_6
# 309 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_10
# 311 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 312 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 313 "data/maps/DLC/scripts.pory"
	setflag DLCmathresolved
	goto BlackBoardDLC_9

BlackBoardDLC_13:
# 317 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_11
# 318 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 319 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_15
# 320 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 322 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
	goto BlackBoardDLC_12

BlackBoardDLC_16:
# 326 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_12
	goto BlackBoardDLC_15


OpenBoxDLC::
# 332 "data/maps/DLC/scripts.pory"
	lockall
# 333 "data/maps/DLC/scripts.pory"
	msgbox OpenBoxDLC_Text_0
# 336 "data/maps/DLC/scripts.pory"
	releaseall
	return


PosterDLC::
# 340 "data/maps/DLC/scripts.pory"
	lockall
# 341 "data/maps/DLC/scripts.pory"
	msgbox PosterDLC_Text_0
# 343 "data/maps/DLC/scripts.pory"
	releaseall
	return


RulesDLC::
# 347 "data/maps/DLC/scripts.pory"
	lockall
# 348 "data/maps/DLC/scripts.pory"
	msgbox RulesDLC_Text_0
# 351 "data/maps/DLC/scripts.pory"
	releaseall
	return


BoardDLC::
# 355 "data/maps/DLC/scripts.pory"
	lockall
# 356 "data/maps/DLC/scripts.pory"
	msgbox BoardDLC_Text_0
# 358 "data/maps/DLC/scripts.pory"
	releaseall
	return


PCDLC::
# 362 "data/maps/DLC/scripts.pory"
	lockall
# 363 "data/maps/DLC/scripts.pory"
	msgbox PCDLC_Text_0
# 364 "data/maps/DLC/scripts.pory"
	releaseall
	return


BookshelfDLC::
# 368 "data/maps/DLC/scripts.pory"
	lockall
# 369 "data/maps/DLC/scripts.pory"
	msgbox BookshelfDLC_Text_0
# 370 "data/maps/DLC/scripts.pory"
	releaseall
	return


MauvillePosterDLC::
# 374 "data/maps/DLC/scripts.pory"
	lockall
# 375 "data/maps/DLC/scripts.pory"
	msgbox MauvillePosterDLC_Text_0
# 377 "data/maps/DLC/scripts.pory"
	releaseall
	return


TVDLC::
# 381 "data/maps/DLC/scripts.pory"
	lockall
# 382 "data/maps/DLC/scripts.pory"
	msgbox TVDLC_Text_0
# 383 "data/maps/DLC/scripts.pory"
	releaseall
	return


DLCSealedBox::
# 387 "data/maps/DLC/scripts.pory"
	lockall
# 388 "data/maps/DLC/scripts.pory"
	msgbox DLCSealedBox_Text_0
# 389 "data/maps/DLC/scripts.pory"
	releaseall
	return


# 11 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_0:
# 11 "data/maps/DLC/scripts.pory"
	walk_up
# 11 "data/maps/DLC/scripts.pory"
	walk_up
	step_end

# 16 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_1:
# 16 "data/maps/DLC/scripts.pory"
	walk_up
# 16 "data/maps/DLC/scripts.pory"
	walk_right
# 16 "data/maps/DLC/scripts.pory"
	walk_right
# 16 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 29 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyRight_Movement_0:
# 29 "data/maps/DLC/scripts.pory"
	walk_up
# 29 "data/maps/DLC/scripts.pory"
	walk_right
# 29 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 45 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_0:
# 45 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 45 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 45 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 60 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_1:
# 60 "data/maps/DLC/scripts.pory"
	walk_in_place_down
# 60 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 64 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_2:
# 64 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 64 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 68 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_3:
# 68 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 80 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_4:
# 80 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 80 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 80 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 87 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_5:
# 87 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 87 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 97 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_6:
# 97 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 102 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_7:
# 102 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 102 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 125 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_8:
# 125 "data/maps/DLC/scripts.pory"
	face_left
# 125 "data/maps/DLC/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 129 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_9:
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 129 "data/maps/DLC/scripts.pory"
	walk_in_place_left
	step_end

# 147 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_10:
# 147 "data/maps/DLC/scripts.pory"
	walk_fast_left
# 147 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 147 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 147 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 147 "data/maps/DLC/scripts.pory"
	walk_fast_down
	step_end

# 150 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_11:
# 150 "data/maps/DLC/scripts.pory"
	face_left
# 150 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 151 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_12:
# 151 "data/maps/DLC/scripts.pory"
	face_right
# 151 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 157 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_13:
# 157 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 157 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 172 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_14:
# 172 "data/maps/DLC/scripts.pory"
	face_right
	step_end

# 174 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_15:
# 174 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 180 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_16:
# 180 "data/maps/DLC/scripts.pory"
	walk_right
# 180 "data/maps/DLC/scripts.pory"
	walk_down
# 180 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 181 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_17:
# 181 "data/maps/DLC/scripts.pory"
	walk_right
# 181 "data/maps/DLC/scripts.pory"
	walk_right
# 181 "data/maps/DLC/scripts.pory"
	walk_down
# 181 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 189 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_18:
# 189 "data/maps/DLC/scripts.pory"
	walk_down
# 189 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 206 "data/maps/DLC/scripts.pory"
LittleKidDLC_Movement_0:
# 206 "data/maps/DLC/scripts.pory"
	face_player
	step_end

# 258 "data/maps/DLC/scripts.pory"
TeacherDLC_Movement_0:
# 258 "data/maps/DLC/scripts.pory"
	face_down
	step_end

OldaleDLC_GoToSeatForTherapyLeft_Text_0:
# 14 "data/maps/DLC/scripts.pory"
	.string "Ah, there you are... {PLAYER}, is it?\p"
	.string "Please sit down - the session is about\n"
	.string "to start.$"

OldaleTown_DLC_TherapyCutscene_Text_0:
# 35 "data/maps/DLC/scripts.pory"
	.string "As I was saying, we are going to start\n"
	.string "by watching some pictures of Kantonian\l"
	.string "Pokémon, and sharing what feelings\l"
	.string "they evoke in us.$"

OldaleTown_DLC_TherapyCutscene_Text_1:
# 39 "data/maps/DLC/scripts.pory"
	.string "Let's begin with you, {PLAYER}. Take a\n"
	.string "look at this picture.$"

OldaleTown_DLC_TherapyCutscene_Text_2:
# 41 "data/maps/DLC/scripts.pory"
	.string "What do you think about the Pokémon in\n"
	.string "it?$"

OldaleTown_DLC_TherapyCutscene_Text_3:
# 42 "data/maps/DLC/scripts.pory"
	.string "It's cool$"

OldaleTown_DLC_TherapyCutscene_Text_4:
# 42 "data/maps/DLC/scripts.pory"
	.string "Looks dangerous$"

OldaleTown_DLC_TherapyCutscene_Text_5:
# 42 "data/maps/DLC/scripts.pory"
	.string "I don't know$"

OldaleTown_DLC_TherapyCutscene_Text_6:
# 49 "data/maps/DLC/scripts.pory"
	.string "Cool!? That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_7:
# 53 "data/maps/DLC/scripts.pory"
	.string "I agree! That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_8:
# 57 "data/maps/DLC/scripts.pory"
	.string "Well, I do know! That Pokémon poisoned\n"
	.string "my daugther during the war! It's\l"
	.string "horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_9:
# 62 "data/maps/DLC/scripts.pory"
	.string "You are correct, sir... Venusaurs are\n"
	.string "very dangerous.\p"
	.string "Thankfully, Devon Corp. has safened all\n"
	.string "Bulbasaurs in Hoenn to Bulbasynths, so\l"
	.string "that they hurt no more people.$"

OldaleTown_DLC_TherapyCutscene_Text_10:
# 66 "data/maps/DLC/scripts.pory"
	.string "Ah, thank goodness...$"

OldaleTown_DLC_TherapyCutscene_Text_11:
# 72 "data/maps/DLC/scripts.pory"
	.string "Let's continue... who wants to share\n"
	.string "their thoughts about this one?$"

OldaleTown_DLC_TherapyCutscene_Text_12:
# 77 "data/maps/DLC/scripts.pory"
	.string "O-oh, that one... t-that one burned my\n"
	.string "house...! Aaah, it's scary...$"

OldaleTown_DLC_TherapyCutscene_Text_13:
# 84 "data/maps/DLC/scripts.pory"
	.string "Huh? Nonsense, that's a splendid Fire\n"
	.string "type.$"

OldaleTown_DLC_TherapyCutscene_Text_14:
# 90 "data/maps/DLC/scripts.pory"
	.string "W-what?$"

OldaleTown_DLC_TherapyCutscene_Text_15:
# 94 "data/maps/DLC/scripts.pory"
	.string "Now now, let us be tolerant with...\n"
	.string "differences of opinion.$"

OldaleTown_DLC_TherapyCutscene_Text_16:
# 98 "data/maps/DLC/scripts.pory"
	.string "Let's see about the last one - the\n"
	.string "water CANNON Pokémon, Blastoise.$"

OldaleTown_DLC_TherapyCutscene_Text_17:
# 104 "data/maps/DLC/scripts.pory"
	.string "U-uwaah, nooo... t-those are the bad\n"
	.string "turtles...!$"

OldaleTown_DLC_TherapyCutscene_Text_18:
# 108 "data/maps/DLC/scripts.pory"
	.string "Precisely. These Pokémon were\n"
	.string "responsible for the Assault on Route\l"
	.string "103, and they almost flooded Oldale\l"
	.string "Town.\p"
	.string "Once more, it was thanks to Devon\n"
	.string "Corp's swift action, that a flood gate\l"
	.string "was built and...$"

OldaleTown_DLC_TherapyCutscene_Text_19:
# 118 "data/maps/DLC/scripts.pory"
	.string "Hey, I know that one! That's a cool as\n"
	.string "heck Blastoise!\p"
	.string "I love how their Hydropumps sound...$"

OldaleTown_DLC_TherapyCutscene_Text_20:
# 126 "data/maps/DLC/scripts.pory"
	.string "BANG BANG!$"

OldaleTown_DLC_TherapyCutscene_Text_21:
# 131 "data/maps/DLC/scripts.pory"
	.string "N-nooo...!!$"

OldaleTown_DLC_TherapyCutscene_Text_22:
# 136 "data/maps/DLC/scripts.pory"
	.string "No? Hmm, you're right... it's not a 'bang'\n"
	.string "it's more like a...$"

OldaleTown_DLC_TherapyCutscene_Text_23:
# 143 "data/maps/DLC/scripts.pory"
	.string "BWAHM BWAHM!$"

OldaleTown_DLC_TherapyCutscene_Text_24:
# 146 "data/maps/DLC/scripts.pory"
	.string "AAAAAHH...!!$"

OldaleTown_DLC_TherapyCutscene_Text_25:
# 168 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I think we will finish this\n"
	.string "session early.\p"
	.string "Next time, everyone please be mindful\n"
	.string "of others' feelings.$"

OldaleTown_DLC_TherapyCutscene_Text_26:
# 178 "data/maps/DLC/scripts.pory"
	.string "Let's go, Sharpy... this was a waste of\n"
	.string "time.$"

LittleKidDLC_Text_0:
# 207 "data/maps/DLC/scripts.pory"
	.string "I don't like Vinesors... Vensuros...?\n"
	.string "I don't know... but I think Pokémon are\l"
	.string "scary.$"

FatManDLC_Text_0:
# 217 "data/maps/DLC/scripts.pory"
	.string "It's true! I lived in Rustboro, and some\n"
	.string "fire Pokémon burned the apartment\l"
	.string "building I lived in.\p"
	.string "I had to come back here with my\n"
	.string "parents. I miss the city.$"

SleepingKidDLC_Text_0:
# 227 "data/maps/DLC/scripts.pory"
	.string "ZZZZ...\n"
	.string "... Huh? Is Math class over? I think I\l"
	.string "overslept...$"

GirlNotebookDLC_Text_0:
# 234 "data/maps/DLC/scripts.pory"
	.string "It's the notebook the scared girl left\n"
	.string "behind.\p"
	.string "Next to some classroom notes, there's a\n"
	.string "drawing of a man with a white hat,\l"
	.string "rescuing a little girl from drowning.$"

SleepingBoyNotebookDLC_Text_0:
# 241 "data/maps/DLC/scripts.pory"
	.string "The notebook has barely any notes, and\n"
	.string "is covered in drool.$"

DyslexicKidNotebookDLC_Text_0:
# 247 "data/maps/DLC/scripts.pory"
	.string "The notebook contains many Pokémon\n"
	.string "names, most of them crossed out.$"

TeacherDLC_Text_0:
# 256 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I shouldn't have come to teach\n"
	.string "to this backwater town.\p"
	.string "But the bonus is so juicy...$"

LibraryGuyDLC_Text_0:
# 267 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.\p"
	.string "You can read any of the books here, but\n"
	.string "you need to be enrolled to take them on\l"
	.string "a loan - sorry!$"

TeacherdeskDLC_Text_0:
# 275 "data/maps/DLC/scripts.pory"
	.string "The book on top features a Psyduck on\n"
	.string "its cover, and is titled 'Therapy for\l"
	.string "Beginners.'$"

BlackBoardDLC_Text_0:
# 284 "data/maps/DLC/scripts.pory"
	.string "The math problem is resolved$"

BlackBoardDLC_Text_1:
# 287 "data/maps/DLC/scripts.pory"
	.string "The board contains an unanswered math\n"
	.string "problem from a previous lesson...$"

BlackBoardDLC_Text_2:
# 289 "data/maps/DLC/scripts.pory"
	.string "I have ¥2404, and I buy two Devon Balls\n"
	.string "for ¥210 each. How much do I have left?$"

BlackBoardDLC_Text_3:
# 290 "data/maps/DLC/scripts.pory"
	.string "¥2194$"

BlackBoardDLC_Text_4:
# 290 "data/maps/DLC/scripts.pory"
	.string "¥1984$"

BlackBoardDLC_Text_5:
# 290 "data/maps/DLC/scripts.pory"
	.string "¥2025$"

BlackBoardDLC_Text_6:
# 294 "data/maps/DLC/scripts.pory"
	.string "You write ¥2194 on the blackboard.$"

BlackBoardDLC_Text_7:
# 297 "data/maps/DLC/scripts.pory"
	.string "Uhm... that's not correct. Would you mind\n"
	.string "not writing wrong answers on the board?\n"
	.string "Thank you.$"

BlackBoardDLC_Text_8:
# 303 "data/maps/DLC/scripts.pory"
	.string "You write ¥1984 on the blackboard.$"

BlackBoardDLC_Text_9:
# 306 "data/maps/DLC/scripts.pory"
	.string "Oh, that's correct! You're good with\n"
	.string "numbers.$"

BlackBoardDLC_Text_10:
# 309 "data/maps/DLC/scripts.pory"
	.string "I like math problems... they always have\n"
	.string "a single right answer.\p"
	.string "If only the world worked like that.$"

BlackBoardDLC_Text_11:
# 317 "data/maps/DLC/scripts.pory"
	.string "You write ¥2025 on the blackboard.$"

BlackBoardDLC_Text_12:
# 326 "data/maps/DLC/scripts.pory"
	.string "Better not to write anything...$"

OpenBoxDLC_Text_0:
# 333 "data/maps/DLC/scripts.pory"
	.string "A label on the open box reads 'To be\n"
	.string "discarded'.\p"
	.string "Through the open gap, you glimpse a\n"
	.string "paper whose title reads:\p"
	.string "'The grim truth behind Safemon, by\n"
	.string "{COLOR BLUE}Professor Balsam{COLOR DARK_GRAY}.'$"

PosterDLC_Text_0:
# 341 "data/maps/DLC/scripts.pory"
	.string "Next month's planned excursion:\n"
	.string "Petalburg Park!\p"
	.string "Sign ups open on DLC's website.\n"
	.string "Minors require parental consent.$"

RulesDLC_Text_0:
# 348 "data/maps/DLC/scripts.pory"
	.string "The hanged notes contain many\n"
	.string "classroom rules.\p"
	.string "1) No yelling\n"
	.string "2) No running\p"
	.string "3) No Pokémon allowed at school\n"
	.string "4) Raise your hand for questions.\p"
	.string "The list goes on and on.$"

BoardDLC_Text_0:
# 356 "data/maps/DLC/scripts.pory"
	.string "The board contains many Devon-related\n"
	.string "news, event posters, and most of all\l"
	.string "product ads.$"

PCDLC_Text_0:
# 363 "data/maps/DLC/scripts.pory"
	.string "The computer asks for a DLC username\n"
	.string "and password. I don't have any.$"

BookshelfDLC_Text_0:
# 369 "data/maps/DLC/scripts.pory"
	.string "It's full of books and magazines\n"
	.string "published by Devon Inc.$"

MauvillePosterDLC_Text_0:
# 375 "data/maps/DLC/scripts.pory"
	.string "Finished using the PC? Turn it off, and\n"
	.string "save electricity!\p"
	.string "Let's take care of Hoenn together.\n"
	.string "{COLOR BLUE}Mauville Nuclear Plant.{COLOR DARK_GRAY}$"

TVDLC_Text_0:
# 382 "data/maps/DLC/scripts.pory"
	.string "The TV is playing a documentary on\n"
	.string "Safemon on a loop.$"

DLCSealedBox_Text_0:
# 388 "data/maps/DLC/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"
