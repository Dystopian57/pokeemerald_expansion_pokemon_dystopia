# 1 "data/maps/DLC/scripts.pory"


DLC_MapScripts::
# 8 "data/maps/DLC/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DLC_TVOn
	.byte 0


DLC_TVOn::
# 11 "data/maps/DLC/scripts.pory"
	special TurnOnTVScreen
	return


OldaleDLC_GoToSeatForTherapyLeft::
# 15 "data/maps/DLC/scripts.pory"
	lockall
# 16 "data/maps/DLC/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 17 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 18 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 19 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 20 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 21 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 23 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyLeft_Movement_1
# 24 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleDLC_GoToSeatForTherapyRight::
# 28 "data/maps/DLC/scripts.pory"
	lockall
# 29 "data/maps/DLC/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 30 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 31 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 32 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 33 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 34 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 36 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyRight_Movement_0
# 37 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleTown_DLC_TherapyCutscene::
# 41 "data/maps/DLC/scripts.pory"
starttherapycutscene:
# 42 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_0
# 44 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_VENUSAUR, 10, 3
# 45 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_NORMAL
# 46 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_1
# 47 "data/maps/DLC/scripts.pory"
	hidemonpic
# 48 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_2
# 49 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_DLC_TherapyCutscene_Text_3, OldaleTown_DLC_TherapyCutscene_Text_4, OldaleTown_DLC_TherapyCutscene_Text_5
# 50 "data/maps/DLC/scripts.pory"
	hidemonpic
# 51 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 52 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_0
# 53 "data/maps/DLC/scripts.pory"
	waitmovement
# 55 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_DLC_TherapyCutscene_2
OldaleTown_DLC_TherapyCutscene_1:
# 59 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_DLC_TherapyCutscene_5
OldaleTown_DLC_TherapyCutscene_4:
# 63 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleTown_DLC_TherapyCutscene_8
OldaleTown_DLC_TherapyCutscene_7:
# 67 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 68 "data/maps/DLC/scripts.pory"
	waitmovement
# 69 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_9
# 71 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_2
# 72 "data/maps/DLC/scripts.pory"
	waitmovement
# 73 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_10
# 75 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 76 "data/maps/DLC/scripts.pory"
	waitmovement
# 77 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_CHARIZARD, 10, 3
# 78 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
# 79 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_11
# 80 "data/maps/DLC/scripts.pory"
	hidemonpic
# 81 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 82 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_0
# 83 "data/maps/DLC/scripts.pory"
	waitmovement
# 84 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_12
# 86 "data/maps/DLC/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 87 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_4
# 88 "data/maps/DLC/scripts.pory"
	waitmovement
# 89 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 90 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 91 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_13
# 93 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 94 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_5
# 95 "data/maps/DLC/scripts.pory"
	waitmovement
# 96 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 97 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_14
# 99 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 100 "data/maps/DLC/scripts.pory"
	waitmovement
# 101 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_15
# 102 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BLASTOISE, 10, 3
# 103 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_NORMAL
# 104 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 105 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_16
# 106 "data/maps/DLC/scripts.pory"
	hidemonpic
# 108 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 109 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_7
# 110 "data/maps/DLC/scripts.pory"
	waitmovement
# 111 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_17
# 113 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 114 "data/maps/DLC/scripts.pory"
	waitmovement
# 115 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_18
# 119 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 120 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_0
# 121 "data/maps/DLC/scripts.pory"
	waitmovement
# 122 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 123 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 124 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 125 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_19
# 127 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 129 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 130 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 131 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 132 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_8
# 133 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_20
# 135 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 136 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_9
# 137 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 138 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_21
# 140 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 141 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 142 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 143 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_22
# 144 "data/maps/DLC/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 146 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 147 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 148 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 149 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_10
# 150 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_23
# 151 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 152 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 153 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_11
# 154 "data/maps/DLC/scripts.pory"
	playse SE_FLEE
# 155 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_24
# 156 "data/maps/DLC/scripts.pory"
	waitse
# 157 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_12
# 158 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_13
# 159 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_12
# 160 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_13
# 161 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 162 "data/maps/DLC/scripts.pory"
	waitse
# 163 "data/maps/DLC/scripts.pory"
	playse SE_M_METRONOME
# 164 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_14
# 165 "data/maps/DLC/scripts.pory"
	waitmovement
# 166 "data/maps/DLC/scripts.pory"
	waitse
# 167 "data/maps/DLC/scripts.pory"
	removeobject 1
# 168 "data/maps/DLC/scripts.pory"
	waitmovement
# 169 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 170 "data/maps/DLC/scripts.pory"
	waitmovement
# 171 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 172 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 173 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 174 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 175 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_25
# 179 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_15
# 180 "data/maps/DLC/scripts.pory"
	waitmovement
# 181 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_16
# 182 "data/maps/DLC/scripts.pory"
	waitmovement
# 183 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 184 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 185 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_26
# 186 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 187 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_17
# 188 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_18
# 189 "data/maps/DLC/scripts.pory"
	waitmovement
# 190 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 191 "data/maps/DLC/scripts.pory"
	waitse
# 192 "data/maps/DLC/scripts.pory"
	removeobject 2
# 193 "data/maps/DLC/scripts.pory"
	removeobject 3
# 195 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 196 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_DLC_TherapyCutscene_Movement_19
# 197 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 198 "data/maps/DLC/scripts.pory"
	clearflag sharpynotoutsideDLC
# 199 "data/maps/DLC/scripts.pory"
	clearflag camelianotoutsideDLC
# 200 "data/maps/DLC/scripts.pory"
	setflag sharpynotinsideDLC
# 201 "data/maps/DLC/scripts.pory"
	setflag camelianotinsideDLC
# 202 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 203 "data/maps/DLC/scripts.pory"
	waitmovement
# 205 "data/maps/DLC/scripts.pory"
	setvar VAR_OLDALE_PHASE, 1
# 206 "data/maps/DLC/scripts.pory"
	releaseall
	return

OldaleTown_DLC_TherapyCutscene_2:
# 56 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_6
	goto OldaleTown_DLC_TherapyCutscene_1

OldaleTown_DLC_TherapyCutscene_5:
# 60 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_7
	goto OldaleTown_DLC_TherapyCutscene_4

OldaleTown_DLC_TherapyCutscene_8:
# 64 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_8
	goto OldaleTown_DLC_TherapyCutscene_7


LittleKidDLC::
# 211 "data/maps/DLC/scripts.pory"
	lockall
# 212 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 213 "data/maps/DLC/scripts.pory"
	applymovement 5, LittleKidDLC_Movement_0
# 216 "data/maps/DLC/scripts.pory"
	checkplayergender
# 217 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittleKidDLC_2
LittleKidDLC_1:
# 220 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittleKidDLC_5
LittleKidDLC_4:
# 223 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3
# 224 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittleKidDLC_8
LittleKidDLC_7:
# 231 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittleKidDLC_11
LittleKidDLC_10:
# 234 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 235 "data/maps/DLC/scripts.pory"
	releaseall
	return

LittleKidDLC_2:
# 218 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_0
	goto LittleKidDLC_1

LittleKidDLC_5:
# 221 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_1
	goto LittleKidDLC_4

LittleKidDLC_8:
# 225 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 226 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_4
	goto LittleKidDLC_7

LittleKidDLC_11:
# 232 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_5
	goto LittleKidDLC_10


FatManDLC::
# 240 "data/maps/DLC/scripts.pory"
	lockall
# 241 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 242 "data/maps/DLC/scripts.pory"
	applymovement 7, LittleKidDLC_Movement_0
# 243 "data/maps/DLC/scripts.pory"
	msgbox FatManDLC_Text_0
# 245 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 246 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLC::
# 252 "data/maps/DLC/scripts.pory"
	lock
# 253 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 254 "data/maps/DLC/scripts.pory"
	applymovement 4, LittleKidDLC_Movement_0
# 255 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLC_Text_0
# 256 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 257 "data/maps/DLC/scripts.pory"
	releaseall
	return


GirlNotebookDLC::
# 261 "data/maps/DLC/scripts.pory"
	lock
# 262 "data/maps/DLC/scripts.pory"
	msgbox GirlNotebookDLC_Text_0
# 264 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingBoyNotebookDLC::
# 268 "data/maps/DLC/scripts.pory"
	lock
# 269 "data/maps/DLC/scripts.pory"
	msgbox SleepingBoyNotebookDLC_Text_0
# 270 "data/maps/DLC/scripts.pory"
	releaseall
	return


SnorlaxKidNotebookDLC::
# 274 "data/maps/DLC/scripts.pory"
	lock
# 275 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 276 "data/maps/DLC/scripts.pory"
	msgbox SnorlaxKidNotebookDLC_Text_0
# 278 "data/maps/DLC/scripts.pory"
	hidemonpic
# 279 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherDLC::
# 284 "data/maps/DLC/scripts.pory"
	lockall
# 285 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 286 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 287 "data/maps/DLC/scripts.pory"
	msgbox TeacherDLC_Text_0
# 289 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 290 "data/maps/DLC/scripts.pory"
	releaseall
	return


LibraryGuyDLC::
# 295 "data/maps/DLC/scripts.pory"
	lockall
# 296 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 297 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 298 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_0
# 299 "data/maps/DLC/scripts.pory"
loantypechoicewithtext:
# 300 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_1
# 301 "data/maps/DLC/scripts.pory"
loantypechoice:
# 302 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_2, LibraryGuyDLC_Text_3, LibraryGuyDLC_Text_4, LibraryGuyDLC_Text_5
# 305 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_2
LibraryGuyDLC_1:
# 496 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_5
LibraryGuyDLC_4:
# 678 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_11
LibraryGuyDLC_10:
# 687 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_23
LibraryGuyDLC_22:
# 690 "data/maps/DLC/scripts.pory"
finishloanscript:
# 691 "data/maps/DLC/scripts.pory"
	closemessage
# 692 "data/maps/DLC/scripts.pory"
	releaseall
	return

LibraryGuyDLC_2:
# 310 "data/maps/DLC/scripts.pory"
	goto_if_set loanedfirebook, LibraryGuyDLC_8
LibraryGuyDLC_7:
# 357 "data/maps/DLC/scripts.pory"
	goto_if_set loanedgrassbook, LibraryGuyDLC_17
LibraryGuyDLC_16:
# 405 "data/maps/DLC/scripts.pory"
	goto_if_set loanedelectricbook, LibraryGuyDLC_32
LibraryGuyDLC_31:
# 451 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedfirebook, LibraryGuyDLC_50
# 451 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedgrassbook, LibraryGuyDLC_50
# 451 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedelectricbook, LibraryGuyDLC_50
LibraryGuyDLC_49:
# 470 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_79
LibraryGuyDLC_78:
# 479 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_103
LibraryGuyDLC_102:
# 488 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_128
	goto LibraryGuyDLC_1

LibraryGuyDLC_5:
# 501 "data/maps/DLC/scripts.pory"
	goto_if_set loanedprotectTM, LibraryGuyDLC_14
LibraryGuyDLC_13:
# 547 "data/maps/DLC/scripts.pory"
	goto_if_set loanedsafeguardTM, LibraryGuyDLC_26
LibraryGuyDLC_25:
# 594 "data/maps/DLC/scripts.pory"
	goto_if_set loanedreflectTM, LibraryGuyDLC_41
LibraryGuyDLC_40:
# 641 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedprotectTM, LibraryGuyDLC_64
# 641 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedsafeguardTM, LibraryGuyDLC_64
# 641 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedreflectTM, LibraryGuyDLC_64
	goto LibraryGuyDLC_4

LibraryGuyDLC_8:
# 311 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_6
# 313 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 315 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_20
LibraryGuyDLC_19:
# 322 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_38
LibraryGuyDLC_37:
# 327 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_62
	goto LibraryGuyDLC_7

LibraryGuyDLC_11:
# 679 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_38
# 684 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_10

LibraryGuyDLC_14:
# 502 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_28
# 504 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 506 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_29
LibraryGuyDLC_28:
# 513 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_47
LibraryGuyDLC_46:
# 518 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_76
	goto LibraryGuyDLC_13

LibraryGuyDLC_17:
# 358 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 360 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 362 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_35
LibraryGuyDLC_34:
# 369 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_60
LibraryGuyDLC_59:
# 374 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_86
	goto LibraryGuyDLC_16

LibraryGuyDLC_20:
# 316 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 317 "data/maps/DLC/scripts.pory"
	removeitem ITEM_FLAME_PLATE
# 318 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 319 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_19

LibraryGuyDLC_23:
# 688 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_39
	goto LibraryGuyDLC_22

LibraryGuyDLC_26:
# 548 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_31
# 550 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 552 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_44
LibraryGuyDLC_43:
# 559 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_74
LibraryGuyDLC_73:
# 564 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_97
	goto LibraryGuyDLC_25

LibraryGuyDLC_29:
# 507 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 508 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_PROTECT
# 509 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 510 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_28

LibraryGuyDLC_32:
# 406 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 408 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 410 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_57
LibraryGuyDLC_56:
# 417 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_84
LibraryGuyDLC_83:
# 422 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_105
	goto LibraryGuyDLC_31

LibraryGuyDLC_35:
# 363 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 364 "data/maps/DLC/scripts.pory"
	removeitem ITEM_MEADOW_PLATE
# 365 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 366 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_34

LibraryGuyDLC_38:
# 323 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 324 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_37

LibraryGuyDLC_41:
# 595 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_32
# 597 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 599 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_71
LibraryGuyDLC_70:
# 606 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_95
LibraryGuyDLC_94:
# 611 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_118
	goto LibraryGuyDLC_40

LibraryGuyDLC_44:
# 553 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 554 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_SAFEGUARD
# 555 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 556 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_43

LibraryGuyDLC_47:
# 514 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 515 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_46

LibraryGuyDLC_50:
# 454 "data/maps/DLC/scripts.pory"
loanbookoffer:
# 455 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_18
# 457 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_19, LibraryGuyDLC_Text_20, LibraryGuyDLC_Text_21, LibraryGuyDLC_Text_22
# 459 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_81
	goto LibraryGuyDLC_49

LibraryGuyDLC_57:
# 411 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 412 "data/maps/DLC/scripts.pory"
	removeitem ITEM_ZAP_PLATE
# 413 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 414 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_56

LibraryGuyDLC_60:
# 370 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 371 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_59

LibraryGuyDLC_62:
# 328 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 331 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 332 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_89
LibraryGuyDLC_88:
# 348 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_110
	goto LibraryGuyDLC_7

LibraryGuyDLC_64:
# 643 "data/maps/DLC/scripts.pory"
loantmoffer:
# 644 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_33
# 645 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_34, LibraryGuyDLC_Text_35, LibraryGuyDLC_Text_36, LibraryGuyDLC_Text_22
# 646 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_92
LibraryGuyDLC_91:
# 655 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_116
LibraryGuyDLC_115:
# 664 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_141
LibraryGuyDLC_140:
# 673 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_160
	goto LibraryGuyDLC_4

LibraryGuyDLC_71:
# 600 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 601 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_REFLECT
# 602 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 603 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_70

LibraryGuyDLC_74:
# 560 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 561 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_73

LibraryGuyDLC_76:
# 519 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 522 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 523 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_100
LibraryGuyDLC_99:
# 539 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_123
	goto LibraryGuyDLC_13

LibraryGuyDLC_79:
# 471 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_25
# 472 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 473 "data/maps/DLC/scripts.pory"
	giveitem ITEM_MEADOW_PLATE
# 474 "data/maps/DLC/scripts.pory"
	setflag loanedgrassbook
# 475 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 476 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_78

LibraryGuyDLC_81:
# 460 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_23
# 461 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_16
# 462 "data/maps/DLC/scripts.pory"
	waitmovement
# 463 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 464 "data/maps/DLC/scripts.pory"
	giveitem ITEM_FLAME_PLATE
# 465 "data/maps/DLC/scripts.pory"
	setflag loanedfirebook
# 466 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 467 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_49

LibraryGuyDLC_84:
# 418 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 419 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_83

LibraryGuyDLC_86:
# 375 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 378 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 379 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_108
LibraryGuyDLC_107:
# 395 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_133
	goto LibraryGuyDLC_16

LibraryGuyDLC_89:
# 333 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 334 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_113
LibraryGuyDLC_112:
# 342 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_138
	goto LibraryGuyDLC_88

LibraryGuyDLC_92:
# 647 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 648 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 649 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_PROTECT
# 650 "data/maps/DLC/scripts.pory"
	setflag loanedprotectTM
# 651 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 652 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_91

LibraryGuyDLC_95:
# 607 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 608 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_94

LibraryGuyDLC_97:
# 565 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 568 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 569 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_121
LibraryGuyDLC_120:
# 585 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_146
	goto LibraryGuyDLC_25

LibraryGuyDLC_100:
# 524 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 525 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_126
LibraryGuyDLC_125:
# 533 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_151
	goto LibraryGuyDLC_99

LibraryGuyDLC_103:
# 480 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 481 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 482 "data/maps/DLC/scripts.pory"
	giveitem ITEM_ZAP_PLATE
# 483 "data/maps/DLC/scripts.pory"
	setflag loanedgrassbook
# 484 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 485 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_102

LibraryGuyDLC_105:
# 423 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 426 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 427 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_131
LibraryGuyDLC_130:
# 443 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_153
	goto LibraryGuyDLC_31

LibraryGuyDLC_108:
# 380 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 381 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_136
LibraryGuyDLC_135:
# 389 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_158
	goto LibraryGuyDLC_107

LibraryGuyDLC_110:
# 349 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 350 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_7

LibraryGuyDLC_113:
# 335 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 336 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 338 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 339 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_112

LibraryGuyDLC_116:
# 656 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 657 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 658 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_SAFEGUARD
# 659 "data/maps/DLC/scripts.pory"
	setflag loanedsafeguardTM
# 660 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 661 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_115

LibraryGuyDLC_118:
# 612 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 615 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 616 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_144
LibraryGuyDLC_143:
# 632 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_162
	goto LibraryGuyDLC_40

LibraryGuyDLC_121:
# 570 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 571 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_149
LibraryGuyDLC_148:
# 579 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_167
	goto LibraryGuyDLC_120

LibraryGuyDLC_123:
# 540 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 541 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_13

LibraryGuyDLC_126:
# 526 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 527 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 529 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 530 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_125

LibraryGuyDLC_128:
# 489 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 490 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_1

LibraryGuyDLC_131:
# 428 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 429 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_156
LibraryGuyDLC_155:
# 437 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_169
	goto LibraryGuyDLC_130

LibraryGuyDLC_133:
# 396 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 397 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_16

LibraryGuyDLC_136:
# 382 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 383 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 385 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 386 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_135

LibraryGuyDLC_138:
# 343 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 345 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_88

LibraryGuyDLC_141:
# 665 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 666 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 667 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_REFLECT
# 668 "data/maps/DLC/scripts.pory"
	setflag loanedreflectTM
# 669 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 670 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_140

LibraryGuyDLC_144:
# 617 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 618 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_165
LibraryGuyDLC_164:
# 626 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_171
	goto LibraryGuyDLC_143

LibraryGuyDLC_146:
# 586 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 587 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_25

LibraryGuyDLC_149:
# 572 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 573 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 575 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 576 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_148

LibraryGuyDLC_151:
# 534 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 536 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_99

LibraryGuyDLC_153:
# 444 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 445 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_31

LibraryGuyDLC_156:
# 430 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 431 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 433 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 434 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_155

LibraryGuyDLC_158:
# 390 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 392 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_107

LibraryGuyDLC_160:
# 674 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 675 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_4

LibraryGuyDLC_162:
# 633 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 634 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_40

LibraryGuyDLC_165:
# 619 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 620 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 622 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 623 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_164

LibraryGuyDLC_167:
# 580 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 582 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_120

LibraryGuyDLC_169:
# 438 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 440 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_130

LibraryGuyDLC_171:
# 627 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 629 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_143


OLDLibraryGuyDLC::
# 697 "data/maps/DLC/scripts.pory"
	lockall
# 698 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 699 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 700 "data/maps/DLC/scripts.pory"
	msgbox OLDLibraryGuyDLC_Text_0
# 702 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 703 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherdeskDLC::
# 707 "data/maps/DLC/scripts.pory"
	lockall
# 708 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BURMY_TRASH, 10, 3
# 709 "data/maps/DLC/scripts.pory"
	msgbox TeacherdeskDLC_Text_0
# 711 "data/maps/DLC/scripts.pory"
	hidemonpic
# 712 "data/maps/DLC/scripts.pory"
	releaseall
	return


BlackBoardDLC::
# 716 "data/maps/DLC/scripts.pory"
	lockall
# 717 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 718 "data/maps/DLC/scripts.pory"
	goto_if_set DLCmathresolved, BlackBoardDLC_2
BlackBoardDLC_1:
# 721 "data/maps/DLC/scripts.pory"
	goto_if_unset DLCmathresolved, BlackBoardDLC_4
	return

BlackBoardDLC_2:
# 719 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_0
	goto BlackBoardDLC_1

BlackBoardDLC_4:
# 722 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_1
# 724 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_2
# 725 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BlackBoardDLC_Text_3, BlackBoardDLC_Text_4, BlackBoardDLC_Text_5, OldaleTown_DLC_TherapyCutscene_Text_5
# 726 "data/maps/DLC/scripts.pory"
	waitmessage
# 728 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackBoardDLC_7
BlackBoardDLC_6:
# 737 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackBoardDLC_10
BlackBoardDLC_9:
# 751 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_13
BlackBoardDLC_12:
# 760 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_16
BlackBoardDLC_15:
# 763 "data/maps/DLC/scripts.pory"
	releaseall
	return

BlackBoardDLC_7:
# 729 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_6
# 730 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 731 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 732 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 734 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
	goto BlackBoardDLC_6

BlackBoardDLC_10:
# 738 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_8
# 739 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 740 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 741 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_9
# 742 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 743 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_6
# 744 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_10
# 746 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 747 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 748 "data/maps/DLC/scripts.pory"
	setflag DLCmathresolved
	goto BlackBoardDLC_9

BlackBoardDLC_13:
# 752 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_11
# 753 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 754 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 755 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 757 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
	goto BlackBoardDLC_12

BlackBoardDLC_16:
# 761 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_12
	goto BlackBoardDLC_15


OpenBoxDLC::
# 767 "data/maps/DLC/scripts.pory"
	lock
# 768 "data/maps/DLC/scripts.pory"
	msgbox OpenBoxDLC_Text_0
# 771 "data/maps/DLC/scripts.pory"
	releaseall
	return


PosterDLC::
# 775 "data/maps/DLC/scripts.pory"
	lock
# 776 "data/maps/DLC/scripts.pory"
	msgbox PosterDLC_Text_0
# 778 "data/maps/DLC/scripts.pory"
	releaseall
	return


RulesDLC::
# 782 "data/maps/DLC/scripts.pory"
	lock
# 783 "data/maps/DLC/scripts.pory"
	msgbox RulesDLC_Text_0
# 786 "data/maps/DLC/scripts.pory"
	releaseall
	return


BoardDLC::
# 790 "data/maps/DLC/scripts.pory"
	lock
# 791 "data/maps/DLC/scripts.pory"
	msgbox BoardDLC_Text_0
# 793 "data/maps/DLC/scripts.pory"
	releaseall
	return


PCDLC::
# 797 "data/maps/DLC/scripts.pory"
	lock
# 798 "data/maps/DLC/scripts.pory"
	msgbox PCDLC_Text_0
# 799 "data/maps/DLC/scripts.pory"
	releaseall
	return


BookshelfDLC::
# 803 "data/maps/DLC/scripts.pory"
	lock
# 804 "data/maps/DLC/scripts.pory"
	msgbox BookshelfDLC_Text_0
# 805 "data/maps/DLC/scripts.pory"
	releaseall
	return


MauvillePosterDLC::
# 809 "data/maps/DLC/scripts.pory"
	lock
# 810 "data/maps/DLC/scripts.pory"
	msgbox MauvillePosterDLC_Text_0
# 812 "data/maps/DLC/scripts.pory"
	releaseall
	return


TVDLC::
# 816 "data/maps/DLC/scripts.pory"
	lock
# 817 "data/maps/DLC/scripts.pory"
	msgbox TVDLC_Text_0
# 821 "data/maps/DLC/scripts.pory"
	releaseall
	return


DLCSealedBox::
# 825 "data/maps/DLC/scripts.pory"
	lockall
# 826 "data/maps/DLC/scripts.pory"
	msgbox DLCSealedBox_Text_0
# 827 "data/maps/DLC/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol1DLC::
# 831 "data/maps/DLC/scripts.pory"
	lock
# 832 "data/maps/DLC/scripts.pory"
	msgbox KantonianWarHistoryVol1DLC_Text_0
# 834 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3
# 836 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol1DLC_2
KantonianWarHistoryVol1DLC_1:
# 847 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol1DLC_5
KantonianWarHistoryVol1DLC_4:
# 850 "data/maps/DLC/scripts.pory"
endkantonianwar:
# 851 "data/maps/DLC/scripts.pory"
	releaseall
	return

KantonianWarHistoryVol1DLC_2:
# 837 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_HOENN, 10, 3
# 838 "data/maps/DLC/scripts.pory"
	msgbox KantonianWarHistoryVol1DLC_Text_1
# 841 "data/maps/DLC/scripts.pory"
	hidemonpic
# 842 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_KALOS, 10, 3
# 843 "data/maps/DLC/scripts.pory"
	msgbox KantonianWarHistoryVol1DLC_Text_2
# 845 "data/maps/DLC/scripts.pory"
	hidemonpic
# 846 "data/maps/DLC/scripts.pory"
	goto endkantonianwar
	goto KantonianWarHistoryVol1DLC_1

KantonianWarHistoryVol1DLC_5:
# 848 "data/maps/DLC/scripts.pory"
	goto endkantonianwar
	goto KantonianWarHistoryVol1DLC_4


# 18 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_0:
# 18 "data/maps/DLC/scripts.pory"
	walk_up
# 18 "data/maps/DLC/scripts.pory"
	walk_up
	step_end

# 23 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_1:
# 23 "data/maps/DLC/scripts.pory"
	walk_up
# 23 "data/maps/DLC/scripts.pory"
	walk_right
# 23 "data/maps/DLC/scripts.pory"
	walk_right
# 23 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 36 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyRight_Movement_0:
# 36 "data/maps/DLC/scripts.pory"
	walk_up
# 36 "data/maps/DLC/scripts.pory"
	walk_right
# 36 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 52 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_0:
# 52 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 52 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 52 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 67 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_1:
# 67 "data/maps/DLC/scripts.pory"
	walk_in_place_down
# 67 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 71 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_2:
# 71 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 71 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 75 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_3:
# 75 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 87 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_4:
# 87 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 87 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 87 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 94 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_5:
# 94 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 94 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 104 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_6:
# 104 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 109 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_7:
# 109 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 109 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 132 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_8:
# 132 "data/maps/DLC/scripts.pory"
	face_left
# 132 "data/maps/DLC/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 136 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_9:
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 136 "data/maps/DLC/scripts.pory"
	walk_in_place_left
	step_end

# 149 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_10:
# 149 "data/maps/DLC/scripts.pory"
	jump_in_place_up
# 149 "data/maps/DLC/scripts.pory"
	jump_in_place_up
	step_end

# 153 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_11:
# 153 "data/maps/DLC/scripts.pory"
	walk_fast_left
# 153 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 153 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 153 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 153 "data/maps/DLC/scripts.pory"
	walk_fast_down
	step_end

# 157 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_12:
# 157 "data/maps/DLC/scripts.pory"
	face_left
# 157 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 158 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_13:
# 158 "data/maps/DLC/scripts.pory"
	face_right
# 158 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 164 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_14:
# 164 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 164 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 179 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_15:
# 179 "data/maps/DLC/scripts.pory"
	face_right
	step_end

# 181 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_16:
# 181 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 187 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_17:
# 187 "data/maps/DLC/scripts.pory"
	walk_right
# 187 "data/maps/DLC/scripts.pory"
	walk_down
# 187 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 188 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_18:
# 188 "data/maps/DLC/scripts.pory"
	walk_right
# 188 "data/maps/DLC/scripts.pory"
	walk_right
# 188 "data/maps/DLC/scripts.pory"
	walk_down
# 188 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 196 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_19:
# 196 "data/maps/DLC/scripts.pory"
	walk_down
# 196 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 213 "data/maps/DLC/scripts.pory"
LittleKidDLC_Movement_0:
# 213 "data/maps/DLC/scripts.pory"
	face_player
	step_end

# 289 "data/maps/DLC/scripts.pory"
TeacherDLC_Movement_0:
# 289 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 472 "data/maps/DLC/scripts.pory"
LibraryGuyDLC_Movement_0:
# 472 "data/maps/DLC/scripts.pory"
	face_left
# 472 "data/maps/DLC/scripts.pory"
	face_up
	step_end

OldaleDLC_GoToSeatForTherapyLeft_Text_0:
# 21 "data/maps/DLC/scripts.pory"
	.string "Ah, there you are... {PLAYER}, is it?\p"
	.string "Please sit down - the session is about\n"
	.string "to start.$"

OldaleTown_DLC_TherapyCutscene_Text_0:
# 42 "data/maps/DLC/scripts.pory"
	.string "As I was saying, we are going to start\n"
	.string "by watching some pictures of Kantonian\l"
	.string "Pokémon, and sharing what feelings\l"
	.string "they evoke in us.$"

OldaleTown_DLC_TherapyCutscene_Text_1:
# 46 "data/maps/DLC/scripts.pory"
	.string "Let's begin with you, {PLAYER}. Take a\n"
	.string "look at this picture.$"

OldaleTown_DLC_TherapyCutscene_Text_2:
# 48 "data/maps/DLC/scripts.pory"
	.string "What do you think about the Pokémon in\n"
	.string "it?$"

OldaleTown_DLC_TherapyCutscene_Text_3:
# 49 "data/maps/DLC/scripts.pory"
	.string "It's cool$"

OldaleTown_DLC_TherapyCutscene_Text_4:
# 49 "data/maps/DLC/scripts.pory"
	.string "Looks dangerous$"

OldaleTown_DLC_TherapyCutscene_Text_5:
# 49 "data/maps/DLC/scripts.pory"
	.string "I don't know$"

OldaleTown_DLC_TherapyCutscene_Text_6:
# 56 "data/maps/DLC/scripts.pory"
	.string "Cool!? That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_7:
# 60 "data/maps/DLC/scripts.pory"
	.string "I agree! That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_8:
# 64 "data/maps/DLC/scripts.pory"
	.string "Well, I do know! That Pokémon poisoned\n"
	.string "my daugther during the war! It's\l"
	.string "horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_9:
# 69 "data/maps/DLC/scripts.pory"
	.string "You are correct, sir... Venusaurs are\n"
	.string "very dangerous.\p"
	.string "Thankfully, Devon Co. has safened all\n"
	.string "Bulbasaurs in Hoenn to Bulbasynths, so\l"
	.string "that they hurt no more people.$"

OldaleTown_DLC_TherapyCutscene_Text_10:
# 73 "data/maps/DLC/scripts.pory"
	.string "Ah, thank goodness...$"

OldaleTown_DLC_TherapyCutscene_Text_11:
# 79 "data/maps/DLC/scripts.pory"
	.string "Let's continue... who wants to share\n"
	.string "their thoughts about this one?$"

OldaleTown_DLC_TherapyCutscene_Text_12:
# 84 "data/maps/DLC/scripts.pory"
	.string "O-oh, that one... t-that one burned my\n"
	.string "house...! Aaah, it's scary...$"

OldaleTown_DLC_TherapyCutscene_Text_13:
# 91 "data/maps/DLC/scripts.pory"
	.string "Huh? Nonsense, that's a splendid Fire\n"
	.string "type.$"

OldaleTown_DLC_TherapyCutscene_Text_14:
# 97 "data/maps/DLC/scripts.pory"
	.string "W-what?$"

OldaleTown_DLC_TherapyCutscene_Text_15:
# 101 "data/maps/DLC/scripts.pory"
	.string "Now now, let us be tolerant with...\n"
	.string "differences of opinion.$"

OldaleTown_DLC_TherapyCutscene_Text_16:
# 105 "data/maps/DLC/scripts.pory"
	.string "Let's see about the last one - the\n"
	.string "water CANNON Pokémon, Blastoise.$"

OldaleTown_DLC_TherapyCutscene_Text_17:
# 111 "data/maps/DLC/scripts.pory"
	.string "U-uwaah, nooo... t-those are the bad\n"
	.string "turtles...!$"

OldaleTown_DLC_TherapyCutscene_Text_18:
# 115 "data/maps/DLC/scripts.pory"
	.string "Precisely. The Kantonians used many\n"
	.string "Blastoise on the Assault on Route 103,\l"
	.string "and they almost flooded Oldale Town.\p"
	.string "Once more, it was thanks to Devon Co.'s\n"
	.string "swift action, that a flood gate was\l"
	.string "built and...$"

OldaleTown_DLC_TherapyCutscene_Text_19:
# 125 "data/maps/DLC/scripts.pory"
	.string "Hey, I know that one! That's a cool as\n"
	.string "heck Blastoise!\p"
	.string "I love how their Hydropumps sound...$"

OldaleTown_DLC_TherapyCutscene_Text_20:
# 133 "data/maps/DLC/scripts.pory"
	.string "BANG BANG!$"

OldaleTown_DLC_TherapyCutscene_Text_21:
# 138 "data/maps/DLC/scripts.pory"
	.string "N-nooo...!!$"

OldaleTown_DLC_TherapyCutscene_Text_22:
# 143 "data/maps/DLC/scripts.pory"
	.string "No? Hmm, you're right... it's not a 'bang'\n"
	.string "it's more like a...$"

OldaleTown_DLC_TherapyCutscene_Text_23:
# 150 "data/maps/DLC/scripts.pory"
	.string "BWAHM BWAHM!$"

OldaleTown_DLC_TherapyCutscene_Text_24:
# 155 "data/maps/DLC/scripts.pory"
	.string "AAAAAHH...!!$"

OldaleTown_DLC_TherapyCutscene_Text_25:
# 175 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I think we will finish this\n"
	.string "session early.\p"
	.string "Next time, everyone please be mindful\n"
	.string "of others' feelings.$"

OldaleTown_DLC_TherapyCutscene_Text_26:
# 185 "data/maps/DLC/scripts.pory"
	.string "Let's go, Sharpy... this was a waste of\n"
	.string "time.$"

LittleKidDLC_Text_0:
# 218 "data/maps/DLC/scripts.pory"
	.string "Hello mister! Want to see my drawing?$"

LittleKidDLC_Text_1:
# 221 "data/maps/DLC/scripts.pory"
	.string "Hello miss! Want to see my drawing?$"

LittleKidDLC_Text_2:
# 223 "data/maps/DLC/scripts.pory"
	.string "Yes$"

LittleKidDLC_Text_3:
# 223 "data/maps/DLC/scripts.pory"
	.string "No$"

LittleKidDLC_Text_4:
# 226 "data/maps/DLC/scripts.pory"
	.string "Look - I drew Munchies! It's my Snorlax!\n"
	.string "Well... it was my Snorlax.\p"
	.string "Munchie used to be small, but then it\n"
	.string "EVOLVED! And mom got scared of it.\p"
	.string "So we said goodbye to Munchy - we\n"
	.string "released him. Munchy and I were very\l"
	.string "sad...\p"
	.string "When I become a trainer, I'll go find him,\n"
	.string "and give him tons of yummy things to\l"
	.string "eat!”$"

LittleKidDLC_Text_5:
# 232 "data/maps/DLC/scripts.pory"
	.string "Hehe - okay! Your loss!$"

FatManDLC_Text_0:
# 243 "data/maps/DLC/scripts.pory"
	.string "It's true! I lived in Rustboro, and some\n"
	.string "fire Pokémon burned the apartment\l"
	.string "building I lived in.\p"
	.string "I had to come back here with my\n"
	.string "parents. I miss the city.$"

SleepingKidDLC_Text_0:
# 255 "data/maps/DLC/scripts.pory"
	.string "ZZZZ...\n"
	.string "... Huh? Is Math class over? I think I\l"
	.string "overslept...$"

GirlNotebookDLC_Text_0:
# 262 "data/maps/DLC/scripts.pory"
	.string "It's the notebook the scared girl left\n"
	.string "behind.\p"
	.string "Next to some classroom notes, there's a\n"
	.string "drawing of a man with a white hat,\l"
	.string "rescuing a little girl from drowning.$"

SleepingBoyNotebookDLC_Text_0:
# 269 "data/maps/DLC/scripts.pory"
	.string "The notebook has barely any notes, and\n"
	.string "is covered in drool.$"

SnorlaxKidNotebookDLC_Text_0:
# 276 "data/maps/DLC/scripts.pory"
	.string "It's a drawing of a Snorlax, sleeping\n"
	.string "soundly..$"

TeacherDLC_Text_0:
# 287 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I shouldn't have come to teach\n"
	.string "to this backwater town.\p"
	.string "But the bonus is so juicy...$"

LibraryGuyDLC_Text_0:
# 298 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.$"

LibraryGuyDLC_Text_1:
# 300 "data/maps/DLC/scripts.pory"
	.string "Would you like to loan anything?$"

LibraryGuyDLC_Text_2:
# 302 "data/maps/DLC/scripts.pory"
	.string "Loan a book$"

LibraryGuyDLC_Text_3:
# 302 "data/maps/DLC/scripts.pory"
	.string "Loan a TM$"

LibraryGuyDLC_Text_4:
# 302 "data/maps/DLC/scripts.pory"
	.string "How do loans work?$"

LibraryGuyDLC_Text_5:
# 302 "data/maps/DLC/scripts.pory"
	.string "No, thank you$"

LibraryGuyDLC_Text_6:
# 311 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'The History of Mt. Chimney'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_7:
# 313 "data/maps/DLC/scripts.pory"
	.string "I lost it...$"

LibraryGuyDLC_Text_8:
# 316 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new book now!$"

LibraryGuyDLC_Text_9:
# 323 "data/maps/DLC/scripts.pory"
	.string "Understandable! You can return it when\n"
	.string "you've finished with it.$"

LibraryGuyDLC_Text_10:
# 328 "data/maps/DLC/scripts.pory"
	.string "Oh, that's unfortunate...\p"
	.string "If you want to continue loaning, you'll\n"
	.string "need to refund the loss - which is\l"
	.string "5000¥$"

LibraryGuyDLC_Text_11:
# 331 "data/maps/DLC/scripts.pory"
	.string "I will pay$"

LibraryGuyDLC_Text_12:
# 331 "data/maps/DLC/scripts.pory"
	.string "Not right now$"

LibraryGuyDLC_Text_13:
# 336 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new book.$"

LibraryGuyDLC_Text_14:
# 343 "data/maps/DLC/scripts.pory"
	.string "You don't seem to have enough funds...\n"
	.string "please return when you procure them!$"

LibraryGuyDLC_Text_15:
# 349 "data/maps/DLC/scripts.pory"
	.string "Very well... we'll eagerly await for your\n"
	.string "refunding.$"

LibraryGuyDLC_Text_16:
# 358 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned On Fortree's Deforestation.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_17:
# 406 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'New Mauville - What Went Wrong'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_18:
# 455 "data/maps/DLC/scripts.pory"
	.string "These are the books we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_19:
# 457 "data/maps/DLC/scripts.pory"
	.string "'The History of Mt. Chimney'$"

LibraryGuyDLC_Text_20:
# 457 "data/maps/DLC/scripts.pory"
	.string "'On Fortree's Deforestation'$"

LibraryGuyDLC_Text_21:
# 457 "data/maps/DLC/scripts.pory"
	.string "'New Mauville - What Went Wrong?'$"

LibraryGuyDLC_Text_22:
# 457 "data/maps/DLC/scripts.pory"
	.string "I changed my mind$"

LibraryGuyDLC_Text_23:
# 460 "data/maps/DLC/scripts.pory"
	.string "Interested in geology? Then this is a\n"
	.string "great pick. Here you go!$"

LibraryGuyDLC_Text_24:
# 466 "data/maps/DLC/scripts.pory"
	.string "Hope you enjoy it! Please return it when\n"
	.string "you're finished with it.$"

LibraryGuyDLC_Text_25:
# 471 "data/maps/DLC/scripts.pory"
	.string "A concerning ecological study - but I\n"
	.string "am sure Devon has plans to avoid the\l"
	.string "worst.$"

LibraryGuyDLC_Text_26:
# 480 "data/maps/DLC/scripts.pory"
	.string "One should learn from the past to avoid\n"
	.string "repeating it... here!$"

LibraryGuyDLC_Text_27:
# 489 "data/maps/DLC/scripts.pory"
	.string "Fair enough. Perhaps you'd like to loan\n"
	.string "something else?$"

LibraryGuyDLC_Text_28:
# 502 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 17 - Protect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_29:
# 507 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new TM now!$"

LibraryGuyDLC_Text_30:
# 527 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new TM.$"

LibraryGuyDLC_Text_31:
# 548 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 20 - Safeguard.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_32:
# 595 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 33 - Reflect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_33:
# 644 "data/maps/DLC/scripts.pory"
	.string "These are the TMs we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_34:
# 645 "data/maps/DLC/scripts.pory"
	.string "'TM 17 - Protect'$"

LibraryGuyDLC_Text_35:
# 645 "data/maps/DLC/scripts.pory"
	.string "'TM 20 - Safeguard'$"

LibraryGuyDLC_Text_36:
# 645 "data/maps/DLC/scripts.pory"
	.string "'TM 33 - Reflect'$"

LibraryGuyDLC_Text_37:
# 647 "data/maps/DLC/scripts.pory"
	.string "Of course - I have a copy right here!$"

LibraryGuyDLC_Text_38:
# 679 "data/maps/DLC/scripts.pory"
	.string "It's easy! You can loan one book and\n"
	.string "one TM at any given time, at no cost.\p"
	.string "If you have loaned a book, you'll need\n"
	.string "to return it before loaning a new one.\l"
	.string "Same goes for TMs.\p"
	.string "Should you lose the loaned item, you will\n"
	.string "need to pay a fine before loaning\l"
	.string "anything else. So we encourage you to\l"
	.string "take good care of loans.\p"
	.string "We are constantly updating our loan\n"
	.string "collection, so you should come check it\l"
	.string "out often.\p"
	.string "So, now that you know how it works...$"

LibraryGuyDLC_Text_39:
# 688 "data/maps/DLC/scripts.pory"
	.string "I'll be here if you change your mind!$"

OLDLibraryGuyDLC_Text_0:
# 700 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.\p"
	.string "You can read any of the books here, but\n"
	.string "you need to be enrolled to take them on\l"
	.string "a loan - sorry!$"

TeacherdeskDLC_Text_0:
# 709 "data/maps/DLC/scripts.pory"
	.string "The book on top features a Psyduck on\n"
	.string "its cover, and is titled 'Therapy for\l"
	.string "Beginners.'$"

BlackBoardDLC_Text_0:
# 719 "data/maps/DLC/scripts.pory"
	.string "The math problem is solved.$"

BlackBoardDLC_Text_1:
# 722 "data/maps/DLC/scripts.pory"
	.string "The board contains an unanswered math\n"
	.string "problem from a previous lesson...$"

BlackBoardDLC_Text_2:
# 724 "data/maps/DLC/scripts.pory"
	.string "I have ¥2404, and I buy two Devon Balls\n"
	.string "for ¥210 each. How much do I have left?$"

BlackBoardDLC_Text_3:
# 725 "data/maps/DLC/scripts.pory"
	.string "¥2194$"

BlackBoardDLC_Text_4:
# 725 "data/maps/DLC/scripts.pory"
	.string "¥1984$"

BlackBoardDLC_Text_5:
# 725 "data/maps/DLC/scripts.pory"
	.string "¥2025$"

BlackBoardDLC_Text_6:
# 729 "data/maps/DLC/scripts.pory"
	.string "You write ¥2194 on the blackboard.$"

BlackBoardDLC_Text_7:
# 732 "data/maps/DLC/scripts.pory"
	.string "Uhm... that's not correct. Would you mind\n"
	.string "not writing wrong answers on the board?\n"
	.string "Thank you.$"

BlackBoardDLC_Text_8:
# 738 "data/maps/DLC/scripts.pory"
	.string "You write ¥1984 on the blackboard.$"

BlackBoardDLC_Text_9:
# 741 "data/maps/DLC/scripts.pory"
	.string "Oh, that's correct! You're good with\n"
	.string "numbers.$"

BlackBoardDLC_Text_10:
# 744 "data/maps/DLC/scripts.pory"
	.string "I like math problems... they always have\n"
	.string "a single right answer.\p"
	.string "If only the world worked like that.$"

BlackBoardDLC_Text_11:
# 752 "data/maps/DLC/scripts.pory"
	.string "You write ¥2025 on the blackboard.$"

BlackBoardDLC_Text_12:
# 761 "data/maps/DLC/scripts.pory"
	.string "Better not to write anything...$"

OpenBoxDLC_Text_0:
# 768 "data/maps/DLC/scripts.pory"
	.string "A label on the open box reads 'To be\n"
	.string "discarded'.\p"
	.string "Through the open gap, you glimpse a\n"
	.string "paper whose title reads:\p"
	.string "'The grim truth behind Safemon, by\n"
	.string "{COLOR BLUE}Professor Balsam{COLOR DARK_GRAY}.'$"

PosterDLC_Text_0:
# 776 "data/maps/DLC/scripts.pory"
	.string "Next month's planned excursion:\n"
	.string "Petalburg Park!\p"
	.string "Sign ups open on DLC's website.\n"
	.string "Minors require parental consent.$"

RulesDLC_Text_0:
# 783 "data/maps/DLC/scripts.pory"
	.string "The hanged notes contain many\n"
	.string "classroom rules.\p"
	.string "1) No yelling\n"
	.string "2) No running\p"
	.string "3) No Pokémon allowed at school\n"
	.string "4) Raise your hand for questions.\p"
	.string "The list goes on and on.$"

BoardDLC_Text_0:
# 791 "data/maps/DLC/scripts.pory"
	.string "The board contains many Devon-related\n"
	.string "news, event posters, and most of all\l"
	.string "product ads.$"

PCDLC_Text_0:
# 798 "data/maps/DLC/scripts.pory"
	.string "The computer asks for a DLC username\n"
	.string "and password. I don't have any.$"

BookshelfDLC_Text_0:
# 804 "data/maps/DLC/scripts.pory"
	.string "It's full of books and magazines\n"
	.string "published by Devon Co.$"

MauvillePosterDLC_Text_0:
# 810 "data/maps/DLC/scripts.pory"
	.string "Finished using the PC? Turn it off, and\n"
	.string "save electricity!\p"
	.string "Let's take care of Hoenn together.\n"
	.string "{COLOR BLUE}Mauville Nuclear Plant.{COLOR DARK_GRAY}$"

TVDLC_Text_0:
# 817 "data/maps/DLC/scripts.pory"
	.string "The TV is playing a documentary on\n"
	.string "Safemon on a loop.\p"
	.string "'Before leaving Devon laboratories, all\n"
	.string "Safemon are injected with the\l"
	.string "Everserum, which prevents them from\l"
	.string "evolving through natural means'.\p"
	.string "'This means no unplanned mutations will\n"
	.string "ever take place on a Safemon. Change\l"
	.string "can be dangerous!'$"

DLCSealedBox_Text_0:
# 826 "data/maps/DLC/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

KantonianWarHistoryVol1DLC_Text_0:
# 832 "data/maps/DLC/scripts.pory"
	.string "A book stands out in the shelf. It's\n"
	.string "called 'History of the Kantonian War,\l"
	.string "Volume 1.\p"
	.string "Read it?$"

KantonianWarHistoryVol1DLC_Text_1:
# 838 "data/maps/DLC/scripts.pory"
	.string "February, 1996. Team Rocket, a criminal\n"
	.string "organization with a strong presence in\l"
	.string "the Kanto region, invades the\l"
	.string "headquarters of Silph Co., a\l"
	.string "technological company in Saffron City.$"

KantonianWarHistoryVol1DLC_Text_2:
# 843 "data/maps/DLC/scripts.pory"
	.string "They defeat all opposition, and the\n"
	.string "leader of Team Rocket, Giovanni,\l"
	.string "assumes control of the company.$"
