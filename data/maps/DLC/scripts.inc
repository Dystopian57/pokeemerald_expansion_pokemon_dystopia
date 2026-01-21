# 1 "data/maps/DLC/scripts.pory"

# 2 "data/maps/DLC/scripts.pory"
DLC_MapScripts::
# 3 "data/maps/DLC/scripts.pory"
	.byte 0

OldaleDLC_GoToSeatForTherapyLeft::
# 8 "data/maps/DLC/scripts.pory"
	lockall
# 9 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 10 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 11 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 12 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 13 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 15 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyLeft_Movement_1
# 16 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleDLC_GoToSeatForTherapyRight::
# 20 "data/maps/DLC/scripts.pory"
	lockall
# 21 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 22 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 23 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 24 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 25 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 27 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyRight_Movement_0
# 28 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleTown_DLC_TherapyCutscene::
# 32 "data/maps/DLC/scripts.pory"
starttherapycutscene:
# 33 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_0
# 35 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_VENUSAUR, 10, 3
# 36 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_NORMAL
# 37 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_1
# 38 "data/maps/DLC/scripts.pory"
	hidemonpic
# 39 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_2
# 40 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_DLC_TherapyCutscene_Text_3, OldaleTown_DLC_TherapyCutscene_Text_4, OldaleTown_DLC_TherapyCutscene_Text_5
# 41 "data/maps/DLC/scripts.pory"
	hidemonpic
# 42 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 43 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_0
# 44 "data/maps/DLC/scripts.pory"
	waitmovement
# 46 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_DLC_TherapyCutscene_2
OldaleTown_DLC_TherapyCutscene_1:
# 50 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_DLC_TherapyCutscene_5
OldaleTown_DLC_TherapyCutscene_4:
# 54 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleTown_DLC_TherapyCutscene_8
OldaleTown_DLC_TherapyCutscene_7:
# 58 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 59 "data/maps/DLC/scripts.pory"
	waitmovement
# 60 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_9
# 62 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_2
# 63 "data/maps/DLC/scripts.pory"
	waitmovement
# 64 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_10
# 66 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 67 "data/maps/DLC/scripts.pory"
	waitmovement
# 68 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_CHARIZARD, 10, 3
# 69 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
# 70 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_11
# 71 "data/maps/DLC/scripts.pory"
	hidemonpic
# 72 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 73 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_0
# 74 "data/maps/DLC/scripts.pory"
	waitmovement
# 75 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_12
# 77 "data/maps/DLC/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 78 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_4
# 79 "data/maps/DLC/scripts.pory"
	waitmovement
# 80 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 81 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 82 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_13
# 84 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 85 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_5
# 86 "data/maps/DLC/scripts.pory"
	waitmovement
# 87 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 88 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_14
# 90 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 91 "data/maps/DLC/scripts.pory"
	waitmovement
# 92 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_15
# 93 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BLASTOISE, 10, 3
# 94 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_NORMAL
# 95 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 96 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_16
# 97 "data/maps/DLC/scripts.pory"
	hidemonpic
# 99 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 100 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_7
# 101 "data/maps/DLC/scripts.pory"
	waitmovement
# 102 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_17
# 104 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 105 "data/maps/DLC/scripts.pory"
	waitmovement
# 106 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_18
# 110 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 111 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_0
# 112 "data/maps/DLC/scripts.pory"
	waitmovement
# 113 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 114 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 115 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 116 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_19
# 118 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 120 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 121 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 122 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 123 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_8
# 124 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_20
# 126 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 127 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_9
# 128 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 129 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_21
# 131 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 132 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 133 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 134 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_22
# 135 "data/maps/DLC/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 137 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 138 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 139 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 140 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_2
# 141 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_23
# 142 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 143 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 144 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_24
# 145 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_10
# 146 "data/maps/DLC/scripts.pory"
	playse SE_FLEE
# 147 "data/maps/DLC/scripts.pory"
	waitse
# 148 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_11
# 149 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_12
# 150 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_11
# 151 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_12
# 152 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 153 "data/maps/DLC/scripts.pory"
	waitse
# 154 "data/maps/DLC/scripts.pory"
	playse SE_M_METRONOME
# 155 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_13
# 156 "data/maps/DLC/scripts.pory"
	waitmovement
# 157 "data/maps/DLC/scripts.pory"
	waitse
# 158 "data/maps/DLC/scripts.pory"
	removeobject 1
# 159 "data/maps/DLC/scripts.pory"
	waitmovement
# 160 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 161 "data/maps/DLC/scripts.pory"
	waitmovement
# 162 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 163 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 164 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 165 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 166 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_25
# 170 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_14
# 171 "data/maps/DLC/scripts.pory"
	waitmovement
# 172 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_15
# 173 "data/maps/DLC/scripts.pory"
	waitmovement
# 174 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 175 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 176 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_26
# 177 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 178 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_16
# 179 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_17
# 180 "data/maps/DLC/scripts.pory"
	waitmovement
# 181 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 182 "data/maps/DLC/scripts.pory"
	waitse
# 183 "data/maps/DLC/scripts.pory"
	removeobject 2
# 184 "data/maps/DLC/scripts.pory"
	removeobject 3
# 186 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 187 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_DLC_TherapyCutscene_Movement_18
# 188 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 189 "data/maps/DLC/scripts.pory"
	clearflag sharpynotoutsideDLC
# 190 "data/maps/DLC/scripts.pory"
	clearflag camelianotoutsideDLC
# 191 "data/maps/DLC/scripts.pory"
	setflag sharpynotinsideDLC
# 192 "data/maps/DLC/scripts.pory"
	setflag camelianotinsideDLC
# 193 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 194 "data/maps/DLC/scripts.pory"
	waitmovement
# 196 "data/maps/DLC/scripts.pory"
	setvar VAR_OLDALE_PHASE, 1
# 197 "data/maps/DLC/scripts.pory"
	releaseall
	return

OldaleTown_DLC_TherapyCutscene_2:
# 47 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_6
	goto OldaleTown_DLC_TherapyCutscene_1

OldaleTown_DLC_TherapyCutscene_5:
# 51 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_7
	goto OldaleTown_DLC_TherapyCutscene_4

OldaleTown_DLC_TherapyCutscene_8:
# 55 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_8
	goto OldaleTown_DLC_TherapyCutscene_7


LittleKidDLC::
# 202 "data/maps/DLC/scripts.pory"
	lockall
# 203 "data/maps/DLC/scripts.pory"
	applymovement 5, LittleKidDLC_Movement_0
# 204 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_0
# 206 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 207 "data/maps/DLC/scripts.pory"
	releaseall
	return


FatManDLC::
# 211 "data/maps/DLC/scripts.pory"
	lockall
# 212 "data/maps/DLC/scripts.pory"
	applymovement 7, LittleKidDLC_Movement_0
# 213 "data/maps/DLC/scripts.pory"
	msgbox FatManDLC_Text_0
# 215 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 216 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLC::
# 220 "data/maps/DLC/scripts.pory"
	lockall
# 221 "data/maps/DLC/scripts.pory"
	applymovement 4, LittleKidDLC_Movement_0
# 222 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLC_Text_0
# 223 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 224 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherDLC::
# 228 "data/maps/DLC/scripts.pory"
	lockall
# 229 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 230 "data/maps/DLC/scripts.pory"
	msgbox TeacherDLC_Text_0
# 232 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 233 "data/maps/DLC/scripts.pory"
	releaseall
	return


LibraryGuyDLC::
# 238 "data/maps/DLC/scripts.pory"
	lockall
# 239 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 240 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_0
# 242 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 243 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherdeskDLC::
# 247 "data/maps/DLC/scripts.pory"
	lockall
# 248 "data/maps/DLC/scripts.pory"
	msgbox TeacherdeskDLC_Text_0
# 249 "data/maps/DLC/scripts.pory"
	releaseall
	return


BlackBoardDLC::
# 253 "data/maps/DLC/scripts.pory"
	lockall
# 254 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 255 "data/maps/DLC/scripts.pory"
	goto_if_set DLCmathresolved, BlackBoardDLC_2
BlackBoardDLC_1:
# 258 "data/maps/DLC/scripts.pory"
	goto_if_unset DLCmathresolved, BlackBoardDLC_4
	return

BlackBoardDLC_2:
# 256 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_0
	goto BlackBoardDLC_1

BlackBoardDLC_4:
# 259 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_1
# 261 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_2
# 262 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BlackBoardDLC_Text_3, BlackBoardDLC_Text_4, BlackBoardDLC_Text_5, OldaleTown_DLC_TherapyCutscene_Text_5
# 263 "data/maps/DLC/scripts.pory"
	waitmessage
# 265 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackBoardDLC_7
BlackBoardDLC_6:
# 274 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackBoardDLC_10
BlackBoardDLC_9:
# 287 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_13
BlackBoardDLC_12:
# 296 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_16
BlackBoardDLC_15:
# 299 "data/maps/DLC/scripts.pory"
	releaseall
	return

BlackBoardDLC_7:
# 266 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_6
# 267 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 268 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_15
# 269 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 271 "data/maps/DLC/scripts.pory"
	applymovement 6, BlackBoardDLC_Movement_0
	goto BlackBoardDLC_6

BlackBoardDLC_10:
# 275 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_8
# 276 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 277 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_15
# 278 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_9
# 279 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 280 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_6
# 281 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_10
# 283 "data/maps/DLC/scripts.pory"
	applymovement 6, BlackBoardDLC_Movement_0
# 284 "data/maps/DLC/scripts.pory"
	setflag DLCmathresolved
	goto BlackBoardDLC_9

BlackBoardDLC_13:
# 288 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_11
# 289 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 290 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_15
# 291 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 293 "data/maps/DLC/scripts.pory"
	applymovement 6, BlackBoardDLC_Movement_0
	goto BlackBoardDLC_12

BlackBoardDLC_16:
# 297 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_12
	goto BlackBoardDLC_15


OpenBoxDLC::
# 303 "data/maps/DLC/scripts.pory"
	lockall
# 304 "data/maps/DLC/scripts.pory"
	msgbox OpenBoxDLC_Text_0
# 306 "data/maps/DLC/scripts.pory"
	releaseall
	return


PosterDLC::
# 310 "data/maps/DLC/scripts.pory"
	lockall
# 311 "data/maps/DLC/scripts.pory"
	msgbox PosterDLC_Text_0
# 313 "data/maps/DLC/scripts.pory"
	releaseall
	return


RulesDLC::
# 317 "data/maps/DLC/scripts.pory"
	lockall
# 318 "data/maps/DLC/scripts.pory"
	msgbox RulesDLC_Text_0
# 321 "data/maps/DLC/scripts.pory"
	releaseall
	return


BoardDLC::
# 325 "data/maps/DLC/scripts.pory"
	lockall
# 326 "data/maps/DLC/scripts.pory"
	msgbox BoardDLC_Text_0
# 328 "data/maps/DLC/scripts.pory"
	releaseall
	return


PCDLC::
# 332 "data/maps/DLC/scripts.pory"
	lockall
# 333 "data/maps/DLC/scripts.pory"
	msgbox PCDLC_Text_0
# 334 "data/maps/DLC/scripts.pory"
	releaseall
	return


BookshelfDLC::
# 338 "data/maps/DLC/scripts.pory"
	lockall
# 339 "data/maps/DLC/scripts.pory"
	msgbox BookshelfDLC_Text_0
# 340 "data/maps/DLC/scripts.pory"
	releaseall
	return


MauvillePosterDLC::
# 344 "data/maps/DLC/scripts.pory"
	lockall
# 345 "data/maps/DLC/scripts.pory"
	msgbox MauvillePosterDLC_Text_0
# 347 "data/maps/DLC/scripts.pory"
	releaseall
	return


TVDLC::
# 351 "data/maps/DLC/scripts.pory"
	lockall
# 352 "data/maps/DLC/scripts.pory"
	msgbox TVDLC_Text_0
# 353 "data/maps/DLC/scripts.pory"
	releaseall
	return


# 10 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_0:
# 10 "data/maps/DLC/scripts.pory"
	walk_up
# 10 "data/maps/DLC/scripts.pory"
	walk_up
	step_end

# 15 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_1:
# 15 "data/maps/DLC/scripts.pory"
	walk_up
# 15 "data/maps/DLC/scripts.pory"
	walk_right
# 15 "data/maps/DLC/scripts.pory"
	walk_right
# 15 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 27 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyRight_Movement_0:
# 27 "data/maps/DLC/scripts.pory"
	walk_up
# 27 "data/maps/DLC/scripts.pory"
	walk_right
# 27 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 43 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_0:
# 43 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 43 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 43 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 58 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_1:
# 58 "data/maps/DLC/scripts.pory"
	walk_in_place_down
# 58 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 62 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_2:
# 62 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 62 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 66 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_3:
# 66 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 78 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_4:
# 78 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 78 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 78 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 85 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_5:
# 85 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 85 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 95 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_6:
# 95 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 100 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_7:
# 100 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 100 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 123 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_8:
# 123 "data/maps/DLC/scripts.pory"
	face_left
# 123 "data/maps/DLC/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 127 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_9:
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 127 "data/maps/DLC/scripts.pory"
	walk_in_place_left
	step_end

# 145 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_10:
# 145 "data/maps/DLC/scripts.pory"
	walk_fast_left
# 145 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 145 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 145 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 145 "data/maps/DLC/scripts.pory"
	walk_fast_down
	step_end

# 148 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_11:
# 148 "data/maps/DLC/scripts.pory"
	face_left
# 148 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 149 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_12:
# 149 "data/maps/DLC/scripts.pory"
	face_right
# 149 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 155 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_13:
# 155 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 155 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 170 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_14:
# 170 "data/maps/DLC/scripts.pory"
	face_right
	step_end

# 172 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_15:
# 172 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 178 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_16:
# 178 "data/maps/DLC/scripts.pory"
	walk_right
# 178 "data/maps/DLC/scripts.pory"
	walk_down
# 178 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 179 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_17:
# 179 "data/maps/DLC/scripts.pory"
	walk_right
# 179 "data/maps/DLC/scripts.pory"
	walk_right
# 179 "data/maps/DLC/scripts.pory"
	walk_down
# 179 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 187 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_18:
# 187 "data/maps/DLC/scripts.pory"
	walk_down
# 187 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 203 "data/maps/DLC/scripts.pory"
LittleKidDLC_Movement_0:
# 203 "data/maps/DLC/scripts.pory"
	face_player
	step_end

# 271 "data/maps/DLC/scripts.pory"
BlackBoardDLC_Movement_0:
# 271 "data/maps/DLC/scripts.pory"
	face_down
	step_end

OldaleDLC_GoToSeatForTherapyLeft_Text_0:
# 13 "data/maps/DLC/scripts.pory"
	.string "Ah, there you are... {PLAYER}, is it?\p"
	.string "Please sit down - the session is about\n"
	.string "to start.$"

OldaleTown_DLC_TherapyCutscene_Text_0:
# 33 "data/maps/DLC/scripts.pory"
	.string "As I was saying, we are going to start\n"
	.string "by watching some pictures of Kantonian\l"
	.string "Pokémon, and sharing what feelings\l"
	.string "they evoke in us.$"

OldaleTown_DLC_TherapyCutscene_Text_1:
# 37 "data/maps/DLC/scripts.pory"
	.string "Let's begin with you, {PLAYER}. Take a\n"
	.string "look at this picture.$"

OldaleTown_DLC_TherapyCutscene_Text_2:
# 39 "data/maps/DLC/scripts.pory"
	.string "What do you think about the Pokémon in\n"
	.string "it?$"

OldaleTown_DLC_TherapyCutscene_Text_3:
# 40 "data/maps/DLC/scripts.pory"
	.string "It's cool$"

OldaleTown_DLC_TherapyCutscene_Text_4:
# 40 "data/maps/DLC/scripts.pory"
	.string "Looks dangerous$"

OldaleTown_DLC_TherapyCutscene_Text_5:
# 40 "data/maps/DLC/scripts.pory"
	.string "I don't know$"

OldaleTown_DLC_TherapyCutscene_Text_6:
# 47 "data/maps/DLC/scripts.pory"
	.string "Cool!? That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_7:
# 51 "data/maps/DLC/scripts.pory"
	.string "I agree! That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_8:
# 55 "data/maps/DLC/scripts.pory"
	.string "Well, I do know! That Pokémon poisoned\n"
	.string "my daugther during the war! It's\l"
	.string "horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_9:
# 60 "data/maps/DLC/scripts.pory"
	.string "You are correct, sir... Venusaurs are\n"
	.string "very dangerous.\p"
	.string "Thankfully, Devon Corp. has safened all\n"
	.string "Bulbasaurs in Hoenn to Bulbasynths, so\l"
	.string "that they hurt no more people.$"

OldaleTown_DLC_TherapyCutscene_Text_10:
# 64 "data/maps/DLC/scripts.pory"
	.string "Ah, thank goodness...$"

OldaleTown_DLC_TherapyCutscene_Text_11:
# 70 "data/maps/DLC/scripts.pory"
	.string "Let's continue... who wants to share\n"
	.string "their thoughts about this one?$"

OldaleTown_DLC_TherapyCutscene_Text_12:
# 75 "data/maps/DLC/scripts.pory"
	.string "O-oh, that one... t-that one burned my\n"
	.string "house...! Aaah, it's scary...$"

OldaleTown_DLC_TherapyCutscene_Text_13:
# 82 "data/maps/DLC/scripts.pory"
	.string "Huh? Nonsense, that's a splendid Fire\n"
	.string "type.$"

OldaleTown_DLC_TherapyCutscene_Text_14:
# 88 "data/maps/DLC/scripts.pory"
	.string "W-what?$"

OldaleTown_DLC_TherapyCutscene_Text_15:
# 92 "data/maps/DLC/scripts.pory"
	.string "Now now, let us be tolerant with...\n"
	.string "differences of opinion.$"

OldaleTown_DLC_TherapyCutscene_Text_16:
# 96 "data/maps/DLC/scripts.pory"
	.string "Let's see about the last one - the\n"
	.string "water CANNON Pokémon, Blastoise.$"

OldaleTown_DLC_TherapyCutscene_Text_17:
# 102 "data/maps/DLC/scripts.pory"
	.string "U-uwaah, nooo... t-those are the bad\n"
	.string "turtles...!$"

OldaleTown_DLC_TherapyCutscene_Text_18:
# 106 "data/maps/DLC/scripts.pory"
	.string "Precisely. These Pokémon were\n"
	.string "responsible for the Assault on Route\l"
	.string "103, and they almost flooded Oldale\l"
	.string "Town.\p"
	.string "Once more, it was thanks to Devon\n"
	.string "Corp's swift action, that a flood gate\l"
	.string "was built and...$"

OldaleTown_DLC_TherapyCutscene_Text_19:
# 116 "data/maps/DLC/scripts.pory"
	.string "Hey, I know that one! That's a cool as\n"
	.string "heck Blastoise!\p"
	.string "I love how their Hydropumps sound...$"

OldaleTown_DLC_TherapyCutscene_Text_20:
# 124 "data/maps/DLC/scripts.pory"
	.string "BANG BANG!$"

OldaleTown_DLC_TherapyCutscene_Text_21:
# 129 "data/maps/DLC/scripts.pory"
	.string "N-nooo...!!$"

OldaleTown_DLC_TherapyCutscene_Text_22:
# 134 "data/maps/DLC/scripts.pory"
	.string "No? Hmm, you're right... it's not a 'bang'\n"
	.string "it's more like a...$"

OldaleTown_DLC_TherapyCutscene_Text_23:
# 141 "data/maps/DLC/scripts.pory"
	.string "BWAHM BWAHM!$"

OldaleTown_DLC_TherapyCutscene_Text_24:
# 144 "data/maps/DLC/scripts.pory"
	.string "AAAAAHH...!!$"

OldaleTown_DLC_TherapyCutscene_Text_25:
# 166 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I think we will finish this\n"
	.string "session early.\p"
	.string "Next time, everyone please be mindful\n"
	.string "of others' feelings.$"

OldaleTown_DLC_TherapyCutscene_Text_26:
# 176 "data/maps/DLC/scripts.pory"
	.string "Let's go, Sharpy... this was a waste of\n"
	.string "time.$"

LittleKidDLC_Text_0:
# 204 "data/maps/DLC/scripts.pory"
	.string "I don't like Vinesors... Vensuros...?\n"
	.string "I don't know... but I think Pokémon are\l"
	.string "scary.$"

FatManDLC_Text_0:
# 213 "data/maps/DLC/scripts.pory"
	.string "It's true! I lived in Rustboro, and some\n"
	.string "fire Pokémon burned the apartment\l"
	.string "building I lived in.\n"
	.string "I had to come back here with my\l"
	.string "parents. I miss the city.$"

SleepingKidDLC_Text_0:
# 222 "data/maps/DLC/scripts.pory"
	.string "ZZZZ...\n"
	.string "... Huh? Is Math class over? I think I\l"
	.string "overslept...$"

TeacherDLC_Text_0:
# 230 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I shouldn't have come to teach\n"
	.string "to this backwater place.\p"
	.string "But the bonus is so juicy...$"

LibraryGuyDLC_Text_0:
# 240 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.\n"
	.string "You can read any of the books here, but\l"
	.string "you need to be enrolled to take them on\l"
	.string "a loan - sorry!$"

TeacherdeskDLC_Text_0:
# 248 "data/maps/DLC/scripts.pory"
	.string "The book on top of the desk reads\n"
	.string "'Therapy for Beginners.'$"

BlackBoardDLC_Text_0:
# 256 "data/maps/DLC/scripts.pory"
	.string "The math problem is resolved$"

BlackBoardDLC_Text_1:
# 259 "data/maps/DLC/scripts.pory"
	.string "The board contains an unanswered math\n"
	.string "problem from a previous lesson...$"

BlackBoardDLC_Text_2:
# 261 "data/maps/DLC/scripts.pory"
	.string "I have ¥2404, and I buy two Devon Balls\n"
	.string "for ¥210 each. How much do I have left?$"

BlackBoardDLC_Text_3:
# 262 "data/maps/DLC/scripts.pory"
	.string "¥2194$"

BlackBoardDLC_Text_4:
# 262 "data/maps/DLC/scripts.pory"
	.string "¥1984$"

BlackBoardDLC_Text_5:
# 262 "data/maps/DLC/scripts.pory"
	.string "¥2025$"

BlackBoardDLC_Text_6:
# 266 "data/maps/DLC/scripts.pory"
	.string "You write ¥2194 on the blackboard.$"

BlackBoardDLC_Text_7:
# 269 "data/maps/DLC/scripts.pory"
	.string "Uhm... that's not correct. Would you mind\n"
	.string "not writing wrong answers on the board?\n"
	.string "Thank you.$"

BlackBoardDLC_Text_8:
# 275 "data/maps/DLC/scripts.pory"
	.string "You write ¥1984 on the blackboard.$"

BlackBoardDLC_Text_9:
# 278 "data/maps/DLC/scripts.pory"
	.string "Oh, that's correct! You're good with\n"
	.string "numbers.$"

BlackBoardDLC_Text_10:
# 281 "data/maps/DLC/scripts.pory"
	.string "I like math problems... they always have\n"
	.string "a single right answer.\p"
	.string "If only the world worked like that.$"

BlackBoardDLC_Text_11:
# 288 "data/maps/DLC/scripts.pory"
	.string "You write ¥2025 on the blackboard.$"

BlackBoardDLC_Text_12:
# 297 "data/maps/DLC/scripts.pory"
	.string "Better not to write anything...$"

OpenBoxDLC_Text_0:
# 304 "data/maps/DLC/scripts.pory"
	.string "A label on the open box reads 'To be\n"
	.string "discarded'.\p"
	.string "Through the open gap, you glimpse a\n"
	.string "paper whose title reads: 'The grim truth\l"
	.string "behind Safemon, by Professor Balsam.'$"

PosterDLC_Text_0:
# 311 "data/maps/DLC/scripts.pory"
	.string "Next month's planned excursion:\n"
	.string "Petalburg Park! Sign up open on DLC's\l"
	.string "website.\p"
	.string "Minors require written parental\n"
	.string "consent.$"

RulesDLC_Text_0:
# 318 "data/maps/DLC/scripts.pory"
	.string "The hanged notes contain many\n"
	.string "classroom rules.\p"
	.string "1) No yelling\n"
	.string "2) No running\p"
	.string "3) No Pokémon allowed at school\n"
	.string "4) Raise your hand for questions.\p"
	.string "The list goes on and on.$"

BoardDLC_Text_0:
# 326 "data/maps/DLC/scripts.pory"
	.string "The board contains many Devon-related\n"
	.string "news, event posters, and most of all\l"
	.string "product ads.$"

PCDLC_Text_0:
# 333 "data/maps/DLC/scripts.pory"
	.string "The computer asks for a DLC username\n"
	.string "and password. I don't have any.$"

BookshelfDLC_Text_0:
# 339 "data/maps/DLC/scripts.pory"
	.string "It's full of books and magazines\n"
	.string "published by Devon Inc.$"

MauvillePosterDLC_Text_0:
# 345 "data/maps/DLC/scripts.pory"
	.string "Finished using the PC? Turn it off, and\n"
	.string "save electricity!\p"
	.string "Let's take care of Hoenn together.\n"
	.string "{COLOR BLUE}Mauville Nuclear Plant.{COLOR DARK_GRAY}$"

TVDLC_Text_0:
# 352 "data/maps/DLC/scripts.pory"
	.string "The TV is playing a documentary on\n"
	.string "Safemon on a loop.$"
