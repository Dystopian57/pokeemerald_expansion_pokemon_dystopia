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
	setflag touristonbike
# 203 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 204 "data/maps/DLC/scripts.pory"
	waitmovement
# 206 "data/maps/DLC/scripts.pory"
	setvar VAR_OLDALE_PHASE, 1
# 207 "data/maps/DLC/scripts.pory"
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
# 212 "data/maps/DLC/scripts.pory"
	lockall
# 213 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 214 "data/maps/DLC/scripts.pory"
	applymovement 5, LittleKidDLC_Movement_0
# 215 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_0
# 217 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 218 "data/maps/DLC/scripts.pory"
	releaseall
	return


FatManDLC::
# 222 "data/maps/DLC/scripts.pory"
	lockall
# 223 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 224 "data/maps/DLC/scripts.pory"
	applymovement 7, LittleKidDLC_Movement_0
# 225 "data/maps/DLC/scripts.pory"
	msgbox FatManDLC_Text_0
# 227 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 228 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLC::
# 232 "data/maps/DLC/scripts.pory"
	lockall
# 233 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 234 "data/maps/DLC/scripts.pory"
	applymovement 4, LittleKidDLC_Movement_0
# 235 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLC_Text_0
# 236 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 237 "data/maps/DLC/scripts.pory"
	releaseall
	return


GirlNotebookDLC::
# 241 "data/maps/DLC/scripts.pory"
	lockall
# 242 "data/maps/DLC/scripts.pory"
	msgbox GirlNotebookDLC_Text_0
# 244 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingBoyNotebookDLC::
# 248 "data/maps/DLC/scripts.pory"
	lockall
# 249 "data/maps/DLC/scripts.pory"
	msgbox SleepingBoyNotebookDLC_Text_0
# 250 "data/maps/DLC/scripts.pory"
	releaseall
	return


DyslexicKidNotebookDLC::
# 254 "data/maps/DLC/scripts.pory"
	lockall
# 255 "data/maps/DLC/scripts.pory"
	msgbox DyslexicKidNotebookDLC_Text_0
# 256 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherDLC::
# 261 "data/maps/DLC/scripts.pory"
	lockall
# 262 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 263 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 264 "data/maps/DLC/scripts.pory"
	msgbox TeacherDLC_Text_0
# 266 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 267 "data/maps/DLC/scripts.pory"
	releaseall
	return


LibraryGuyDLC::
# 272 "data/maps/DLC/scripts.pory"
	lockall
# 273 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 274 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 275 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_0
# 276 "data/maps/DLC/scripts.pory"
loantypechoicewithtext:
# 277 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_1
# 278 "data/maps/DLC/scripts.pory"
loantypechoice:
# 279 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_2, LibraryGuyDLC_Text_3, LibraryGuyDLC_Text_4, LibraryGuyDLC_Text_5
# 282 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_2
LibraryGuyDLC_1:
# 473 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_5
LibraryGuyDLC_4:
# 655 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_11
LibraryGuyDLC_10:
# 664 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_23
LibraryGuyDLC_22:
# 667 "data/maps/DLC/scripts.pory"
finishloanscript:
# 668 "data/maps/DLC/scripts.pory"
	closemessage
# 669 "data/maps/DLC/scripts.pory"
	releaseall
	return

LibraryGuyDLC_2:
# 287 "data/maps/DLC/scripts.pory"
	goto_if_set loanedfirebook, LibraryGuyDLC_8
LibraryGuyDLC_7:
# 334 "data/maps/DLC/scripts.pory"
	goto_if_set loanedgrassbook, LibraryGuyDLC_17
LibraryGuyDLC_16:
# 382 "data/maps/DLC/scripts.pory"
	goto_if_set loanedelectricbook, LibraryGuyDLC_32
LibraryGuyDLC_31:
# 428 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedfirebook, LibraryGuyDLC_50
# 428 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedgrassbook, LibraryGuyDLC_50
# 428 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedelectricbook, LibraryGuyDLC_50
LibraryGuyDLC_49:
# 447 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_79
LibraryGuyDLC_78:
# 456 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_103
LibraryGuyDLC_102:
# 465 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_128
	goto LibraryGuyDLC_1

LibraryGuyDLC_5:
# 478 "data/maps/DLC/scripts.pory"
	goto_if_set loanedprotectTM, LibraryGuyDLC_14
LibraryGuyDLC_13:
# 524 "data/maps/DLC/scripts.pory"
	goto_if_set loanedsafeguardTM, LibraryGuyDLC_26
LibraryGuyDLC_25:
# 571 "data/maps/DLC/scripts.pory"
	goto_if_set loanedreflectTM, LibraryGuyDLC_41
LibraryGuyDLC_40:
# 618 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedprotectTM, LibraryGuyDLC_64
# 618 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedsafeguardTM, LibraryGuyDLC_64
# 618 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedreflectTM, LibraryGuyDLC_64
	goto LibraryGuyDLC_4

LibraryGuyDLC_8:
# 288 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_6
# 290 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_7, LibraryGuyDLC_Text_8, LibraryGuyDLC_Text_9
# 292 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_20
LibraryGuyDLC_19:
# 299 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_38
LibraryGuyDLC_37:
# 304 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_62
	goto LibraryGuyDLC_7

LibraryGuyDLC_11:
# 656 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_40
# 661 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_10

LibraryGuyDLC_14:
# 479 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 481 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_7, LibraryGuyDLC_Text_8, LibraryGuyDLC_Text_9
# 483 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_29
LibraryGuyDLC_28:
# 490 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_47
LibraryGuyDLC_46:
# 495 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_76
	goto LibraryGuyDLC_13

LibraryGuyDLC_17:
# 335 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_18
# 337 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_7, LibraryGuyDLC_Text_8, LibraryGuyDLC_Text_9
# 339 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_35
LibraryGuyDLC_34:
# 346 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_60
LibraryGuyDLC_59:
# 351 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_86
	goto LibraryGuyDLC_16

LibraryGuyDLC_20:
# 293 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 294 "data/maps/DLC/scripts.pory"
	removeitem ITEM_FLAME_PLATE
# 295 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 296 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_19

LibraryGuyDLC_23:
# 665 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_41
	goto LibraryGuyDLC_22

LibraryGuyDLC_26:
# 525 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_33
# 527 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_7, LibraryGuyDLC_Text_8, LibraryGuyDLC_Text_9
# 529 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_44
LibraryGuyDLC_43:
# 536 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_74
LibraryGuyDLC_73:
# 541 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_97
	goto LibraryGuyDLC_25

LibraryGuyDLC_29:
# 484 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_31
# 485 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_PROTECT
# 486 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 487 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_28

LibraryGuyDLC_32:
# 383 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_19
# 385 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_7, LibraryGuyDLC_Text_8, LibraryGuyDLC_Text_9
# 387 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_57
LibraryGuyDLC_56:
# 394 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_84
LibraryGuyDLC_83:
# 399 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_105
	goto LibraryGuyDLC_31

LibraryGuyDLC_35:
# 340 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 341 "data/maps/DLC/scripts.pory"
	removeitem ITEM_MEADOW_PLATE
# 342 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 343 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_34

LibraryGuyDLC_38:
# 300 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_11
# 301 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_37

LibraryGuyDLC_41:
# 572 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_34
# 574 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_7, LibraryGuyDLC_Text_8, LibraryGuyDLC_Text_9
# 576 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_71
LibraryGuyDLC_70:
# 583 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_95
LibraryGuyDLC_94:
# 588 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_118
	goto LibraryGuyDLC_40

LibraryGuyDLC_44:
# 530 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_31
# 531 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_SAFEGUARD
# 532 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 533 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_43

LibraryGuyDLC_47:
# 491 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_11
# 492 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_46

LibraryGuyDLC_50:
# 431 "data/maps/DLC/scripts.pory"
loanbookoffer:
# 432 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_20
# 434 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_21, LibraryGuyDLC_Text_22, LibraryGuyDLC_Text_23, LibraryGuyDLC_Text_24
# 436 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_81
	goto LibraryGuyDLC_49

LibraryGuyDLC_57:
# 388 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 389 "data/maps/DLC/scripts.pory"
	removeitem ITEM_ZAP_PLATE
# 390 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 391 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_56

LibraryGuyDLC_60:
# 347 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_11
# 348 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_59

LibraryGuyDLC_62:
# 305 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_12
# 308 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_13, LibraryGuyDLC_Text_14
# 309 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_89
LibraryGuyDLC_88:
# 325 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_110
	goto LibraryGuyDLC_7

LibraryGuyDLC_64:
# 620 "data/maps/DLC/scripts.pory"
loantmoffer:
# 621 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_35
# 622 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_36, LibraryGuyDLC_Text_37, LibraryGuyDLC_Text_38, LibraryGuyDLC_Text_24
# 623 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_92
LibraryGuyDLC_91:
# 632 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_116
LibraryGuyDLC_115:
# 641 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_141
LibraryGuyDLC_140:
# 650 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_160
	goto LibraryGuyDLC_4

LibraryGuyDLC_71:
# 577 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_31
# 578 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_REFLECT
# 579 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 580 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_70

LibraryGuyDLC_74:
# 537 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_11
# 538 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_73

LibraryGuyDLC_76:
# 496 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_12
# 499 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_13, LibraryGuyDLC_Text_14
# 500 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_100
LibraryGuyDLC_99:
# 516 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_123
	goto LibraryGuyDLC_13

LibraryGuyDLC_79:
# 448 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 449 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 450 "data/maps/DLC/scripts.pory"
	giveitem ITEM_MEADOW_PLATE
# 451 "data/maps/DLC/scripts.pory"
	setflag loanedgrassbook
# 452 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 453 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_78

LibraryGuyDLC_81:
# 437 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_25
# 438 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_16
# 439 "data/maps/DLC/scripts.pory"
	waitmovement
# 440 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 441 "data/maps/DLC/scripts.pory"
	giveitem ITEM_FLAME_PLATE
# 442 "data/maps/DLC/scripts.pory"
	setflag loanedfirebook
# 443 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 444 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_49

LibraryGuyDLC_84:
# 395 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_11
# 396 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_83

LibraryGuyDLC_86:
# 352 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_12
# 355 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_13, LibraryGuyDLC_Text_14
# 356 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_108
LibraryGuyDLC_107:
# 372 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_133
	goto LibraryGuyDLC_16

LibraryGuyDLC_89:
# 310 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 311 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_113
LibraryGuyDLC_112:
# 319 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_138
	goto LibraryGuyDLC_88

LibraryGuyDLC_92:
# 624 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_39
# 625 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 626 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_PROTECT
# 627 "data/maps/DLC/scripts.pory"
	setflag loanedprotectTM
# 628 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 629 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_91

LibraryGuyDLC_95:
# 584 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_11
# 585 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_94

LibraryGuyDLC_97:
# 542 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_12
# 545 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_13, LibraryGuyDLC_Text_14
# 546 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_121
LibraryGuyDLC_120:
# 562 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_146
	goto LibraryGuyDLC_25

LibraryGuyDLC_100:
# 501 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 502 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_126
LibraryGuyDLC_125:
# 510 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_151
	goto LibraryGuyDLC_99

LibraryGuyDLC_103:
# 457 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_28
# 458 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 459 "data/maps/DLC/scripts.pory"
	giveitem ITEM_ZAP_PLATE
# 460 "data/maps/DLC/scripts.pory"
	setflag loanedgrassbook
# 461 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 462 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_102

LibraryGuyDLC_105:
# 400 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_12
# 403 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_13, LibraryGuyDLC_Text_14
# 404 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_131
LibraryGuyDLC_130:
# 420 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_153
	goto LibraryGuyDLC_31

LibraryGuyDLC_108:
# 357 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 358 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_136
LibraryGuyDLC_135:
# 366 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_158
	goto LibraryGuyDLC_107

LibraryGuyDLC_110:
# 326 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 327 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_7

LibraryGuyDLC_113:
# 312 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 313 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 315 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 316 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_112

LibraryGuyDLC_116:
# 633 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_39
# 634 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 635 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_SAFEGUARD
# 636 "data/maps/DLC/scripts.pory"
	setflag loanedsafeguardTM
# 637 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 638 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_115

LibraryGuyDLC_118:
# 589 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_12
# 592 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_13, LibraryGuyDLC_Text_14
# 593 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_144
LibraryGuyDLC_143:
# 609 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_162
	goto LibraryGuyDLC_40

LibraryGuyDLC_121:
# 547 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 548 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_149
LibraryGuyDLC_148:
# 556 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_167
	goto LibraryGuyDLC_120

LibraryGuyDLC_123:
# 517 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 518 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_13

LibraryGuyDLC_126:
# 503 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 504 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_32
# 506 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 507 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_125

LibraryGuyDLC_128:
# 466 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 467 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_1

LibraryGuyDLC_131:
# 405 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 406 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_156
LibraryGuyDLC_155:
# 414 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_169
	goto LibraryGuyDLC_130

LibraryGuyDLC_133:
# 373 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 374 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_16

LibraryGuyDLC_136:
# 359 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 360 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 362 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 363 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_135

LibraryGuyDLC_138:
# 320 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 322 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_88

LibraryGuyDLC_141:
# 642 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_39
# 643 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 644 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_REFLECT
# 645 "data/maps/DLC/scripts.pory"
	setflag loanedreflectTM
# 646 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 647 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_140

LibraryGuyDLC_144:
# 594 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 595 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_165
LibraryGuyDLC_164:
# 603 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_171
	goto LibraryGuyDLC_143

LibraryGuyDLC_146:
# 563 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 564 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_25

LibraryGuyDLC_149:
# 549 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 550 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_32
# 552 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 553 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_148

LibraryGuyDLC_151:
# 511 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 513 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_99

LibraryGuyDLC_153:
# 421 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 422 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_31

LibraryGuyDLC_156:
# 407 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 408 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 410 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 411 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_155

LibraryGuyDLC_158:
# 367 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 369 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_107

LibraryGuyDLC_160:
# 651 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 652 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_4

LibraryGuyDLC_162:
# 610 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 611 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_40

LibraryGuyDLC_165:
# 596 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 597 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_32
# 599 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 600 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_164

LibraryGuyDLC_167:
# 557 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 559 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_120

LibraryGuyDLC_169:
# 415 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 417 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_130

LibraryGuyDLC_171:
# 604 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 606 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_143


OLDLibraryGuyDLC::
# 674 "data/maps/DLC/scripts.pory"
	lockall
# 675 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 676 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 677 "data/maps/DLC/scripts.pory"
	msgbox OLDLibraryGuyDLC_Text_0
# 679 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 680 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherdeskDLC::
# 684 "data/maps/DLC/scripts.pory"
	lockall
# 685 "data/maps/DLC/scripts.pory"
	msgbox TeacherdeskDLC_Text_0
# 687 "data/maps/DLC/scripts.pory"
	releaseall
	return


BlackBoardDLC::
# 691 "data/maps/DLC/scripts.pory"
	lockall
# 692 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 693 "data/maps/DLC/scripts.pory"
	goto_if_set DLCmathresolved, BlackBoardDLC_2
BlackBoardDLC_1:
# 696 "data/maps/DLC/scripts.pory"
	goto_if_unset DLCmathresolved, BlackBoardDLC_4
	return

BlackBoardDLC_2:
# 694 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_0
	goto BlackBoardDLC_1

BlackBoardDLC_4:
# 697 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_1
# 699 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_2
# 700 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BlackBoardDLC_Text_3, BlackBoardDLC_Text_4, BlackBoardDLC_Text_5, OldaleTown_DLC_TherapyCutscene_Text_5
# 701 "data/maps/DLC/scripts.pory"
	waitmessage
# 703 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackBoardDLC_7
BlackBoardDLC_6:
# 712 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackBoardDLC_10
BlackBoardDLC_9:
# 726 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_13
BlackBoardDLC_12:
# 735 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_16
BlackBoardDLC_15:
# 738 "data/maps/DLC/scripts.pory"
	releaseall
	return

BlackBoardDLC_7:
# 704 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_6
# 705 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 706 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 707 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 709 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
	goto BlackBoardDLC_6

BlackBoardDLC_10:
# 713 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_8
# 714 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 715 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 716 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_9
# 717 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 718 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_6
# 719 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_10
# 721 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 722 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 723 "data/maps/DLC/scripts.pory"
	setflag DLCmathresolved
	goto BlackBoardDLC_9

BlackBoardDLC_13:
# 727 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_11
# 728 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 729 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 730 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 732 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
	goto BlackBoardDLC_12

BlackBoardDLC_16:
# 736 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_12
	goto BlackBoardDLC_15


OpenBoxDLC::
# 742 "data/maps/DLC/scripts.pory"
	lockall
# 743 "data/maps/DLC/scripts.pory"
	msgbox OpenBoxDLC_Text_0
# 746 "data/maps/DLC/scripts.pory"
	releaseall
	return


PosterDLC::
# 750 "data/maps/DLC/scripts.pory"
	lockall
# 751 "data/maps/DLC/scripts.pory"
	msgbox PosterDLC_Text_0
# 753 "data/maps/DLC/scripts.pory"
	releaseall
	return


RulesDLC::
# 757 "data/maps/DLC/scripts.pory"
	lockall
# 758 "data/maps/DLC/scripts.pory"
	msgbox RulesDLC_Text_0
# 761 "data/maps/DLC/scripts.pory"
	releaseall
	return


BoardDLC::
# 765 "data/maps/DLC/scripts.pory"
	lockall
# 766 "data/maps/DLC/scripts.pory"
	msgbox BoardDLC_Text_0
# 768 "data/maps/DLC/scripts.pory"
	releaseall
	return


PCDLC::
# 772 "data/maps/DLC/scripts.pory"
	lockall
# 773 "data/maps/DLC/scripts.pory"
	msgbox PCDLC_Text_0
# 774 "data/maps/DLC/scripts.pory"
	releaseall
	return


BookshelfDLC::
# 778 "data/maps/DLC/scripts.pory"
	lockall
# 779 "data/maps/DLC/scripts.pory"
	msgbox BookshelfDLC_Text_0
# 780 "data/maps/DLC/scripts.pory"
	releaseall
	return


MauvillePosterDLC::
# 784 "data/maps/DLC/scripts.pory"
	lockall
# 785 "data/maps/DLC/scripts.pory"
	msgbox MauvillePosterDLC_Text_0
# 787 "data/maps/DLC/scripts.pory"
	releaseall
	return


TVDLC::
# 791 "data/maps/DLC/scripts.pory"
	lockall
# 792 "data/maps/DLC/scripts.pory"
	msgbox TVDLC_Text_0
# 796 "data/maps/DLC/scripts.pory"
	releaseall
	return


DLCSealedBox::
# 800 "data/maps/DLC/scripts.pory"
	lockall
# 801 "data/maps/DLC/scripts.pory"
	msgbox DLCSealedBox_Text_0
# 802 "data/maps/DLC/scripts.pory"
	releaseall
	return


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

# 214 "data/maps/DLC/scripts.pory"
LittleKidDLC_Movement_0:
# 214 "data/maps/DLC/scripts.pory"
	face_player
	step_end

# 266 "data/maps/DLC/scripts.pory"
TeacherDLC_Movement_0:
# 266 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 449 "data/maps/DLC/scripts.pory"
LibraryGuyDLC_Movement_0:
# 449 "data/maps/DLC/scripts.pory"
	face_left
# 449 "data/maps/DLC/scripts.pory"
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
# 215 "data/maps/DLC/scripts.pory"
	.string "I don't like Vinesors... Vensuros...?\n"
	.string "I don't know... but I think Pokémon are\l"
	.string "scary.$"

FatManDLC_Text_0:
# 225 "data/maps/DLC/scripts.pory"
	.string "It's true! I lived in Rustboro, and some\n"
	.string "fire Pokémon burned the apartment\l"
	.string "building I lived in.\p"
	.string "I had to come back here with my\n"
	.string "parents. I miss the city.$"

SleepingKidDLC_Text_0:
# 235 "data/maps/DLC/scripts.pory"
	.string "ZZZZ...\n"
	.string "... Huh? Is Math class over? I think I\l"
	.string "overslept...$"

GirlNotebookDLC_Text_0:
# 242 "data/maps/DLC/scripts.pory"
	.string "It's the notebook the scared girl left\n"
	.string "behind.\p"
	.string "Next to some classroom notes, there's a\n"
	.string "drawing of a man with a white hat,\l"
	.string "rescuing a little girl from drowning.$"

SleepingBoyNotebookDLC_Text_0:
# 249 "data/maps/DLC/scripts.pory"
	.string "The notebook has barely any notes, and\n"
	.string "is covered in drool.$"

DyslexicKidNotebookDLC_Text_0:
# 255 "data/maps/DLC/scripts.pory"
	.string "The notebook contains many Pokémon\n"
	.string "names, most of them typed wrong.$"

TeacherDLC_Text_0:
# 264 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I shouldn't have come to teach\n"
	.string "to this backwater town.\p"
	.string "But the bonus is so juicy...$"

LibraryGuyDLC_Text_0:
# 275 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.$"

LibraryGuyDLC_Text_1:
# 277 "data/maps/DLC/scripts.pory"
	.string "Would you like to loan anything?$"

LibraryGuyDLC_Text_2:
# 279 "data/maps/DLC/scripts.pory"
	.string "Loan a book$"

LibraryGuyDLC_Text_3:
# 279 "data/maps/DLC/scripts.pory"
	.string "Loan a TM$"

LibraryGuyDLC_Text_4:
# 279 "data/maps/DLC/scripts.pory"
	.string "How do loans work?$"

LibraryGuyDLC_Text_5:
# 279 "data/maps/DLC/scripts.pory"
	.string "No, thank you$"

LibraryGuyDLC_Text_6:
# 288 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'The History of Mt. Chimney'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_7:
# 290 "data/maps/DLC/scripts.pory"
	.string "Yes$"

LibraryGuyDLC_Text_8:
# 290 "data/maps/DLC/scripts.pory"
	.string "No$"

LibraryGuyDLC_Text_9:
# 290 "data/maps/DLC/scripts.pory"
	.string "I lost it...$"

LibraryGuyDLC_Text_10:
# 293 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new book now!$"

LibraryGuyDLC_Text_11:
# 300 "data/maps/DLC/scripts.pory"
	.string "Understandable! You can return it when\n"
	.string "you've finished with it.$"

LibraryGuyDLC_Text_12:
# 305 "data/maps/DLC/scripts.pory"
	.string "Oh, that's unfortunate...\p"
	.string "If you want to continue loaning, you'll\n"
	.string "need to refund the loss - which is\l"
	.string "5000¥$"

LibraryGuyDLC_Text_13:
# 308 "data/maps/DLC/scripts.pory"
	.string "I will pay$"

LibraryGuyDLC_Text_14:
# 308 "data/maps/DLC/scripts.pory"
	.string "Not right now$"

LibraryGuyDLC_Text_15:
# 313 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new book.$"

LibraryGuyDLC_Text_16:
# 320 "data/maps/DLC/scripts.pory"
	.string "You don't seem to have enough funds...\n"
	.string "please return when you procure them!$"

LibraryGuyDLC_Text_17:
# 326 "data/maps/DLC/scripts.pory"
	.string "Very well... we'll eagerly await for your\n"
	.string "refunding.$"

LibraryGuyDLC_Text_18:
# 335 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned On Fortree's Deforestation.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_19:
# 383 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'New Mauville - What Went Wrong'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_20:
# 432 "data/maps/DLC/scripts.pory"
	.string "These are the books we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_21:
# 434 "data/maps/DLC/scripts.pory"
	.string "'The History of Mt. Chimney'$"

LibraryGuyDLC_Text_22:
# 434 "data/maps/DLC/scripts.pory"
	.string "'On Fortree's Deforestation'$"

LibraryGuyDLC_Text_23:
# 434 "data/maps/DLC/scripts.pory"
	.string "'New Mauville - What Went Wrong?'$"

LibraryGuyDLC_Text_24:
# 434 "data/maps/DLC/scripts.pory"
	.string "I changed my mind$"

LibraryGuyDLC_Text_25:
# 437 "data/maps/DLC/scripts.pory"
	.string "Interested in geology? Then this is a\n"
	.string "great pick. Here you go!$"

LibraryGuyDLC_Text_26:
# 443 "data/maps/DLC/scripts.pory"
	.string "Hope you enjoy it! Please return it when\n"
	.string "you're finished with it.$"

LibraryGuyDLC_Text_27:
# 448 "data/maps/DLC/scripts.pory"
	.string "A concerning ecological study - but I\n"
	.string "am sure Devon has plans to avoid the\l"
	.string "worst.$"

LibraryGuyDLC_Text_28:
# 457 "data/maps/DLC/scripts.pory"
	.string "One should learn from the past to avoid\n"
	.string "repeating it... here!$"

LibraryGuyDLC_Text_29:
# 466 "data/maps/DLC/scripts.pory"
	.string "Fair enough. Perhaps you'd like to loan\n"
	.string "something else?$"

LibraryGuyDLC_Text_30:
# 479 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 17 - Protect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_31:
# 484 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new TM now!$"

LibraryGuyDLC_Text_32:
# 504 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new TM.$"

LibraryGuyDLC_Text_33:
# 525 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 20 - Safeguard.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_34:
# 572 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 33 - Reflect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_35:
# 621 "data/maps/DLC/scripts.pory"
	.string "These are the TMs we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_36:
# 622 "data/maps/DLC/scripts.pory"
	.string "'TM 17 - Protect'$"

LibraryGuyDLC_Text_37:
# 622 "data/maps/DLC/scripts.pory"
	.string "'TM 20 - Safeguard'$"

LibraryGuyDLC_Text_38:
# 622 "data/maps/DLC/scripts.pory"
	.string "'TM 33 - Reflect'$"

LibraryGuyDLC_Text_39:
# 624 "data/maps/DLC/scripts.pory"
	.string "Of course - I have a copy right here!$"

LibraryGuyDLC_Text_40:
# 656 "data/maps/DLC/scripts.pory"
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
	.string "out often. So, now that you know how it\l"
	.string "works...$"

LibraryGuyDLC_Text_41:
# 665 "data/maps/DLC/scripts.pory"
	.string "I'll be here if you change your mind!$"

OLDLibraryGuyDLC_Text_0:
# 677 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.\p"
	.string "You can read any of the books here, but\n"
	.string "you need to be enrolled to take them on\l"
	.string "a loan - sorry!$"

TeacherdeskDLC_Text_0:
# 685 "data/maps/DLC/scripts.pory"
	.string "The book on top features a Psyduck on\n"
	.string "its cover, and is titled 'Therapy for\l"
	.string "Beginners.'$"

BlackBoardDLC_Text_0:
# 694 "data/maps/DLC/scripts.pory"
	.string "The math problem is resolved$"

BlackBoardDLC_Text_1:
# 697 "data/maps/DLC/scripts.pory"
	.string "The board contains an unanswered math\n"
	.string "problem from a previous lesson...$"

BlackBoardDLC_Text_2:
# 699 "data/maps/DLC/scripts.pory"
	.string "I have ¥2404, and I buy two Devon Balls\n"
	.string "for ¥210 each. How much do I have left?$"

BlackBoardDLC_Text_3:
# 700 "data/maps/DLC/scripts.pory"
	.string "¥2194$"

BlackBoardDLC_Text_4:
# 700 "data/maps/DLC/scripts.pory"
	.string "¥1984$"

BlackBoardDLC_Text_5:
# 700 "data/maps/DLC/scripts.pory"
	.string "¥2025$"

BlackBoardDLC_Text_6:
# 704 "data/maps/DLC/scripts.pory"
	.string "You write ¥2194 on the blackboard.$"

BlackBoardDLC_Text_7:
# 707 "data/maps/DLC/scripts.pory"
	.string "Uhm... that's not correct. Would you mind\n"
	.string "not writing wrong answers on the board?\n"
	.string "Thank you.$"

BlackBoardDLC_Text_8:
# 713 "data/maps/DLC/scripts.pory"
	.string "You write ¥1984 on the blackboard.$"

BlackBoardDLC_Text_9:
# 716 "data/maps/DLC/scripts.pory"
	.string "Oh, that's correct! You're good with\n"
	.string "numbers.$"

BlackBoardDLC_Text_10:
# 719 "data/maps/DLC/scripts.pory"
	.string "I like math problems... they always have\n"
	.string "a single right answer.\p"
	.string "If only the world worked like that.$"

BlackBoardDLC_Text_11:
# 727 "data/maps/DLC/scripts.pory"
	.string "You write ¥2025 on the blackboard.$"

BlackBoardDLC_Text_12:
# 736 "data/maps/DLC/scripts.pory"
	.string "Better not to write anything...$"

OpenBoxDLC_Text_0:
# 743 "data/maps/DLC/scripts.pory"
	.string "A label on the open box reads 'To be\n"
	.string "discarded'.\p"
	.string "Through the open gap, you glimpse a\n"
	.string "paper whose title reads:\p"
	.string "'The grim truth behind Safemon, by\n"
	.string "{COLOR BLUE}Professor Balsam{COLOR DARK_GRAY}.'$"

PosterDLC_Text_0:
# 751 "data/maps/DLC/scripts.pory"
	.string "Next month's planned excursion:\n"
	.string "Petalburg Park!\p"
	.string "Sign ups open on DLC's website.\n"
	.string "Minors require parental consent.$"

RulesDLC_Text_0:
# 758 "data/maps/DLC/scripts.pory"
	.string "The hanged notes contain many\n"
	.string "classroom rules.\p"
	.string "1) No yelling\n"
	.string "2) No running\p"
	.string "3) No Pokémon allowed at school\n"
	.string "4) Raise your hand for questions.\p"
	.string "The list goes on and on.$"

BoardDLC_Text_0:
# 766 "data/maps/DLC/scripts.pory"
	.string "The board contains many Devon-related\n"
	.string "news, event posters, and most of all\l"
	.string "product ads.$"

PCDLC_Text_0:
# 773 "data/maps/DLC/scripts.pory"
	.string "The computer asks for a DLC username\n"
	.string "and password. I don't have any.$"

BookshelfDLC_Text_0:
# 779 "data/maps/DLC/scripts.pory"
	.string "It's full of books and magazines\n"
	.string "published by Devon Co.$"

MauvillePosterDLC_Text_0:
# 785 "data/maps/DLC/scripts.pory"
	.string "Finished using the PC? Turn it off, and\n"
	.string "save electricity!\p"
	.string "Let's take care of Hoenn together.\n"
	.string "{COLOR BLUE}Mauville Nuclear Plant.{COLOR DARK_GRAY}$"

TVDLC_Text_0:
# 792 "data/maps/DLC/scripts.pory"
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
# 801 "data/maps/DLC/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"
