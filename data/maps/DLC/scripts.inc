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
	setflag finishedtherapy
# 203 "data/maps/DLC/scripts.pory"
	setflag sharpycameliaDLCcs
# 204 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 205 "data/maps/DLC/scripts.pory"
	waitmovement
# 207 "data/maps/DLC/scripts.pory"
	setvar VAR_OLDALE_PHASE, 1
# 208 "data/maps/DLC/scripts.pory"
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
# 213 "data/maps/DLC/scripts.pory"
	lockall
# 214 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 215 "data/maps/DLC/scripts.pory"
	applymovement 5, LittleKidDLC_Movement_0
# 218 "data/maps/DLC/scripts.pory"
	checkplayergender
# 219 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittleKidDLC_2
LittleKidDLC_1:
# 222 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittleKidDLC_5
LittleKidDLC_4:
# 225 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3
# 226 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittleKidDLC_8
LittleKidDLC_7:
# 234 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittleKidDLC_11
LittleKidDLC_10:
# 237 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 238 "data/maps/DLC/scripts.pory"
	releaseall
	return

LittleKidDLC_2:
# 220 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_0
	goto LittleKidDLC_1

LittleKidDLC_5:
# 223 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_1
	goto LittleKidDLC_4

LittleKidDLC_8:
# 227 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 228 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_4
# 232 "data/maps/DLC/scripts.pory"
	hidemonpic
	goto LittleKidDLC_7

LittleKidDLC_11:
# 235 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_5
	goto LittleKidDLC_10


FatManDLCAfterClass::
# 242 "data/maps/DLC/scripts.pory"
	lock
# 243 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 244 "data/maps/DLC/scripts.pory"
	applymovement 15, LittleKidDLC_Movement_0
# 245 "data/maps/DLC/scripts.pory"
	msgbox FatManDLCAfterClass_Text_0
# 247 "data/maps/DLC/scripts.pory"
	applymovement 15, OldaleTown_DLC_TherapyCutscene_Movement_15
# 248 "data/maps/DLC/scripts.pory"
	waitmovement 15
# 249 "data/maps/DLC/scripts.pory"
	releaseall
	return


FatManDLC::
# 253 "data/maps/DLC/scripts.pory"
	lock
# 254 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 255 "data/maps/DLC/scripts.pory"
	applymovement 7, LittleKidDLC_Movement_0
# 256 "data/maps/DLC/scripts.pory"
	msgbox FatManDLC_Text_0
# 258 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 259 "data/maps/DLC/scripts.pory"
	releaseall
	return


ObsessedGirlDLC::
# 265 "data/maps/DLC/scripts.pory"
	lock
# 266 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 267 "data/maps/DLC/scripts.pory"
	applymovement 12, LittleKidDLC_Movement_0
# 268 "data/maps/DLC/scripts.pory"
	msgbox ObsessedGirlDLC_Text_0
# 272 "data/maps/DLC/scripts.pory"
	applymovement 12, OldaleTown_DLC_TherapyCutscene_Movement_15
# 273 "data/maps/DLC/scripts.pory"
	waitmovement 12
# 274 "data/maps/DLC/scripts.pory"
	playfirstmoncry
# 275 "data/maps/DLC/scripts.pory"
	msgbox ObsessedGirlDLC_Text_1
# 276 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLCAfterClass::
# 280 "data/maps/DLC/scripts.pory"
	lock
# 281 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 282 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 283 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLCAfterClass_Text_0
# 284 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 285 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 286 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLC::
# 290 "data/maps/DLC/scripts.pory"
	lock
# 291 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 292 "data/maps/DLC/scripts.pory"
	applymovement 4, LittleKidDLC_Movement_0
# 293 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLC_Text_0
# 294 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 295 "data/maps/DLC/scripts.pory"
	waitmovement 4
# 296 "data/maps/DLC/scripts.pory"
	releaseall
	return


GirlNotebookDLC::
# 300 "data/maps/DLC/scripts.pory"
	lock
# 301 "data/maps/DLC/scripts.pory"
	msgbox GirlNotebookDLC_Text_0
# 303 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingBoyNotebookDLC::
# 307 "data/maps/DLC/scripts.pory"
	lock
# 308 "data/maps/DLC/scripts.pory"
	msgbox SleepingBoyNotebookDLC_Text_0
# 309 "data/maps/DLC/scripts.pory"
	releaseall
	return


OldManDLC::
# 313 "data/maps/DLC/scripts.pory"
	lock
# 314 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 315 "data/maps/DLC/scripts.pory"
	applymovement 8, LittleKidDLC_Movement_0
# 316 "data/maps/DLC/scripts.pory"
	msgbox OldManDLC_Text_0
# 319 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 320 "data/maps/DLC/scripts.pory"
	releaseall
	return


SnorlaxKidNotebookDLC::
# 325 "data/maps/DLC/scripts.pory"
	lock
# 326 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 327 "data/maps/DLC/scripts.pory"
	msgbox SnorlaxKidNotebookDLC_Text_0
# 329 "data/maps/DLC/scripts.pory"
	hidemonpic
# 330 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherDLC::
# 335 "data/maps/DLC/scripts.pory"
	lockall
# 336 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 337 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 338 "data/maps/DLC/scripts.pory"
	msgbox TeacherDLC_Text_0
# 340 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 341 "data/maps/DLC/scripts.pory"
	releaseall
	return


LibraryGuyDLC::
# 346 "data/maps/DLC/scripts.pory"
	lockall
# 347 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 348 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 349 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_0
# 350 "data/maps/DLC/scripts.pory"
loantypechoicewithtext:
# 351 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_1
# 352 "data/maps/DLC/scripts.pory"
loantypechoice:
# 353 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_2, LibraryGuyDLC_Text_3, LibraryGuyDLC_Text_4, LibraryGuyDLC_Text_5
# 356 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_2
LibraryGuyDLC_1:
# 547 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_5
LibraryGuyDLC_4:
# 729 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_11
LibraryGuyDLC_10:
# 738 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_23
LibraryGuyDLC_22:
# 741 "data/maps/DLC/scripts.pory"
finishloanscript:
# 742 "data/maps/DLC/scripts.pory"
	closemessage
# 743 "data/maps/DLC/scripts.pory"
	releaseall
	return

LibraryGuyDLC_2:
# 361 "data/maps/DLC/scripts.pory"
	goto_if_set loanedfirebook, LibraryGuyDLC_8
LibraryGuyDLC_7:
# 408 "data/maps/DLC/scripts.pory"
	goto_if_set loanedgrassbook, LibraryGuyDLC_17
LibraryGuyDLC_16:
# 456 "data/maps/DLC/scripts.pory"
	goto_if_set loanedelectricbook, LibraryGuyDLC_32
LibraryGuyDLC_31:
# 502 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedfirebook, LibraryGuyDLC_50
# 502 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedgrassbook, LibraryGuyDLC_50
# 502 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedelectricbook, LibraryGuyDLC_50
LibraryGuyDLC_49:
# 521 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_79
LibraryGuyDLC_78:
# 530 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_103
LibraryGuyDLC_102:
# 539 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_128
	goto LibraryGuyDLC_1

LibraryGuyDLC_5:
# 552 "data/maps/DLC/scripts.pory"
	goto_if_set loanedprotectTM, LibraryGuyDLC_14
LibraryGuyDLC_13:
# 598 "data/maps/DLC/scripts.pory"
	goto_if_set loanedsafeguardTM, LibraryGuyDLC_26
LibraryGuyDLC_25:
# 645 "data/maps/DLC/scripts.pory"
	goto_if_set loanedreflectTM, LibraryGuyDLC_41
LibraryGuyDLC_40:
# 692 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedprotectTM, LibraryGuyDLC_64
# 692 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedsafeguardTM, LibraryGuyDLC_64
# 692 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedreflectTM, LibraryGuyDLC_64
	goto LibraryGuyDLC_4

LibraryGuyDLC_8:
# 362 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_6
# 364 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 366 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_20
LibraryGuyDLC_19:
# 373 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_38
LibraryGuyDLC_37:
# 378 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_62
	goto LibraryGuyDLC_7

LibraryGuyDLC_11:
# 730 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_38
# 735 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_10

LibraryGuyDLC_14:
# 553 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_28
# 555 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 557 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_29
LibraryGuyDLC_28:
# 564 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_47
LibraryGuyDLC_46:
# 569 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_76
	goto LibraryGuyDLC_13

LibraryGuyDLC_17:
# 409 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 411 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 413 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_35
LibraryGuyDLC_34:
# 420 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_60
LibraryGuyDLC_59:
# 425 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_86
	goto LibraryGuyDLC_16

LibraryGuyDLC_20:
# 367 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 368 "data/maps/DLC/scripts.pory"
	removeitem ITEM_FLAME_PLATE
# 369 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 370 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_19

LibraryGuyDLC_23:
# 739 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_39
	goto LibraryGuyDLC_22

LibraryGuyDLC_26:
# 599 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_31
# 601 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 603 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_44
LibraryGuyDLC_43:
# 610 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_74
LibraryGuyDLC_73:
# 615 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_97
	goto LibraryGuyDLC_25

LibraryGuyDLC_29:
# 558 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 559 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_PROTECT
# 560 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 561 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_28

LibraryGuyDLC_32:
# 457 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 459 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 461 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_57
LibraryGuyDLC_56:
# 468 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_84
LibraryGuyDLC_83:
# 473 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_105
	goto LibraryGuyDLC_31

LibraryGuyDLC_35:
# 414 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 415 "data/maps/DLC/scripts.pory"
	removeitem ITEM_MEADOW_PLATE
# 416 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 417 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_34

LibraryGuyDLC_38:
# 374 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 375 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_37

LibraryGuyDLC_41:
# 646 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_32
# 648 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 650 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_71
LibraryGuyDLC_70:
# 657 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_95
LibraryGuyDLC_94:
# 662 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_118
	goto LibraryGuyDLC_40

LibraryGuyDLC_44:
# 604 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 605 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_SAFEGUARD
# 606 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 607 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_43

LibraryGuyDLC_47:
# 565 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 566 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_46

LibraryGuyDLC_50:
# 505 "data/maps/DLC/scripts.pory"
loanbookoffer:
# 506 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_18
# 508 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_19, LibraryGuyDLC_Text_20, LibraryGuyDLC_Text_21, LibraryGuyDLC_Text_22
# 510 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_81
	goto LibraryGuyDLC_49

LibraryGuyDLC_57:
# 462 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 463 "data/maps/DLC/scripts.pory"
	removeitem ITEM_ZAP_PLATE
# 464 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 465 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_56

LibraryGuyDLC_60:
# 421 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 422 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_59

LibraryGuyDLC_62:
# 379 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 382 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 383 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_89
LibraryGuyDLC_88:
# 399 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_110
	goto LibraryGuyDLC_7

LibraryGuyDLC_64:
# 694 "data/maps/DLC/scripts.pory"
loantmoffer:
# 695 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_33
# 696 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_34, LibraryGuyDLC_Text_35, LibraryGuyDLC_Text_36, LibraryGuyDLC_Text_22
# 697 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_92
LibraryGuyDLC_91:
# 706 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_116
LibraryGuyDLC_115:
# 715 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_141
LibraryGuyDLC_140:
# 724 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_160
	goto LibraryGuyDLC_4

LibraryGuyDLC_71:
# 651 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 652 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_REFLECT
# 653 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 654 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_70

LibraryGuyDLC_74:
# 611 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 612 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_73

LibraryGuyDLC_76:
# 570 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 573 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 574 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_100
LibraryGuyDLC_99:
# 590 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_123
	goto LibraryGuyDLC_13

LibraryGuyDLC_79:
# 522 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_25
# 523 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 524 "data/maps/DLC/scripts.pory"
	giveitem ITEM_MEADOW_PLATE
# 525 "data/maps/DLC/scripts.pory"
	setflag loanedgrassbook
# 526 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 527 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_78

LibraryGuyDLC_81:
# 511 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_23
# 512 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_16
# 513 "data/maps/DLC/scripts.pory"
	waitmovement
# 514 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 515 "data/maps/DLC/scripts.pory"
	giveitem ITEM_FLAME_PLATE
# 516 "data/maps/DLC/scripts.pory"
	setflag loanedfirebook
# 517 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 518 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_49

LibraryGuyDLC_84:
# 469 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 470 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_83

LibraryGuyDLC_86:
# 426 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 429 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 430 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_108
LibraryGuyDLC_107:
# 446 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_133
	goto LibraryGuyDLC_16

LibraryGuyDLC_89:
# 384 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 385 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_113
LibraryGuyDLC_112:
# 393 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_138
	goto LibraryGuyDLC_88

LibraryGuyDLC_92:
# 698 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 699 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 700 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_PROTECT
# 701 "data/maps/DLC/scripts.pory"
	setflag loanedprotectTM
# 702 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 703 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_91

LibraryGuyDLC_95:
# 658 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 659 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_94

LibraryGuyDLC_97:
# 616 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 619 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 620 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_121
LibraryGuyDLC_120:
# 636 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_146
	goto LibraryGuyDLC_25

LibraryGuyDLC_100:
# 575 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 576 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_126
LibraryGuyDLC_125:
# 584 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_151
	goto LibraryGuyDLC_99

LibraryGuyDLC_103:
# 531 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 532 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 533 "data/maps/DLC/scripts.pory"
	giveitem ITEM_ZAP_PLATE
# 534 "data/maps/DLC/scripts.pory"
	setflag loanedgrassbook
# 535 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 536 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_102

LibraryGuyDLC_105:
# 474 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 477 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 478 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_131
LibraryGuyDLC_130:
# 494 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_153
	goto LibraryGuyDLC_31

LibraryGuyDLC_108:
# 431 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 432 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_136
LibraryGuyDLC_135:
# 440 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_158
	goto LibraryGuyDLC_107

LibraryGuyDLC_110:
# 400 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 401 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_7

LibraryGuyDLC_113:
# 386 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 387 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 389 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 390 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_112

LibraryGuyDLC_116:
# 707 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 708 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 709 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_SAFEGUARD
# 710 "data/maps/DLC/scripts.pory"
	setflag loanedsafeguardTM
# 711 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 712 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_115

LibraryGuyDLC_118:
# 663 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 666 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 667 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_144
LibraryGuyDLC_143:
# 683 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_162
	goto LibraryGuyDLC_40

LibraryGuyDLC_121:
# 621 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 622 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_149
LibraryGuyDLC_148:
# 630 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_167
	goto LibraryGuyDLC_120

LibraryGuyDLC_123:
# 591 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 592 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_13

LibraryGuyDLC_126:
# 577 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 578 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 580 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 581 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_125

LibraryGuyDLC_128:
# 540 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 541 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_1

LibraryGuyDLC_131:
# 479 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 480 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_156
LibraryGuyDLC_155:
# 488 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_169
	goto LibraryGuyDLC_130

LibraryGuyDLC_133:
# 447 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 448 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_16

LibraryGuyDLC_136:
# 433 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 434 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 436 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 437 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_135

LibraryGuyDLC_138:
# 394 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 396 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_88

LibraryGuyDLC_141:
# 716 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 717 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 718 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_REFLECT
# 719 "data/maps/DLC/scripts.pory"
	setflag loanedreflectTM
# 720 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 721 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_140

LibraryGuyDLC_144:
# 668 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 669 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_165
LibraryGuyDLC_164:
# 677 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_171
	goto LibraryGuyDLC_143

LibraryGuyDLC_146:
# 637 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 638 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_25

LibraryGuyDLC_149:
# 623 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 624 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 626 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 627 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_148

LibraryGuyDLC_151:
# 585 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 587 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_99

LibraryGuyDLC_153:
# 495 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 496 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_31

LibraryGuyDLC_156:
# 481 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 482 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 484 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 485 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_155

LibraryGuyDLC_158:
# 441 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 443 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_107

LibraryGuyDLC_160:
# 725 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 726 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_4

LibraryGuyDLC_162:
# 684 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 685 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_40

LibraryGuyDLC_165:
# 670 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 671 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 673 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 674 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_164

LibraryGuyDLC_167:
# 631 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 633 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_120

LibraryGuyDLC_169:
# 489 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 491 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_130

LibraryGuyDLC_171:
# 678 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 680 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_143


OLDLibraryGuyDLC::
# 748 "data/maps/DLC/scripts.pory"
	lockall
# 749 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 750 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 751 "data/maps/DLC/scripts.pory"
	msgbox OLDLibraryGuyDLC_Text_0
# 753 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 754 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherdeskDLC::
# 758 "data/maps/DLC/scripts.pory"
	lockall
# 759 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BURMY_TRASH, 10, 3
# 760 "data/maps/DLC/scripts.pory"
	msgbox TeacherdeskDLC_Text_0
# 762 "data/maps/DLC/scripts.pory"
	hidemonpic
# 763 "data/maps/DLC/scripts.pory"
	releaseall
	return


BlackBoardDLC::
# 767 "data/maps/DLC/scripts.pory"
	lockall
# 768 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 769 "data/maps/DLC/scripts.pory"
	goto_if_set DLCmathresolved, BlackBoardDLC_2
BlackBoardDLC_1:
# 773 "data/maps/DLC/scripts.pory"
	goto_if_unset DLCmathresolved, BlackBoardDLC_4
	return

BlackBoardDLC_2:
# 770 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_0
# 771 "data/maps/DLC/scripts.pory"
	release
	goto BlackBoardDLC_1

BlackBoardDLC_4:
# 774 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_1
# 776 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_2
# 777 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BlackBoardDLC_Text_3, BlackBoardDLC_Text_4, BlackBoardDLC_Text_5, OldaleTown_DLC_TherapyCutscene_Text_5
# 778 "data/maps/DLC/scripts.pory"
	waitmessage
# 780 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackBoardDLC_7
BlackBoardDLC_6:
# 793 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackBoardDLC_10
BlackBoardDLC_9:
# 811 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_13
BlackBoardDLC_12:
# 823 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_16
BlackBoardDLC_15:
# 826 "data/maps/DLC/scripts.pory"
	releaseall
	return

BlackBoardDLC_7:
# 781 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_6
# 782 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 783 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 784 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 785 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 787 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 788 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 789 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 790 "data/maps/DLC/scripts.pory"
	waitmovement 14
	goto BlackBoardDLC_6

BlackBoardDLC_10:
# 794 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_8
# 795 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 796 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 797 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 798 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_9
# 799 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 800 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 801 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_6
# 802 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_10
# 804 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 805 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 806 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 807 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 808 "data/maps/DLC/scripts.pory"
	setflag DLCmathresolved
	goto BlackBoardDLC_9

BlackBoardDLC_13:
# 812 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_11
# 813 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 814 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 815 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 816 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 818 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 819 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 820 "data/maps/DLC/scripts.pory"
	waitmovement 14
	goto BlackBoardDLC_12

BlackBoardDLC_16:
# 824 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_12
	goto BlackBoardDLC_15


OpenBoxDLC::
# 830 "data/maps/DLC/scripts.pory"
	lock
# 831 "data/maps/DLC/scripts.pory"
	msgbox OpenBoxDLC_Text_0
# 834 "data/maps/DLC/scripts.pory"
	releaseall
	return


PosterDLC::
# 838 "data/maps/DLC/scripts.pory"
	lock
# 839 "data/maps/DLC/scripts.pory"
	msgbox PosterDLC_Text_0
# 841 "data/maps/DLC/scripts.pory"
	releaseall
	return


RulesDLC::
# 845 "data/maps/DLC/scripts.pory"
	lock
# 846 "data/maps/DLC/scripts.pory"
	msgbox RulesDLC_Text_0
# 849 "data/maps/DLC/scripts.pory"
	releaseall
	return


BoardDLC::
# 853 "data/maps/DLC/scripts.pory"
	lock
# 854 "data/maps/DLC/scripts.pory"
	msgbox BoardDLC_Text_0
# 856 "data/maps/DLC/scripts.pory"
	releaseall
	return


PCDLC::
# 860 "data/maps/DLC/scripts.pory"
	lock
# 861 "data/maps/DLC/scripts.pory"
	msgbox PCDLC_Text_0
# 862 "data/maps/DLC/scripts.pory"
	releaseall
	return


BookshelfDLC::
# 866 "data/maps/DLC/scripts.pory"
	lock
# 867 "data/maps/DLC/scripts.pory"
	msgbox BookshelfDLC_Text_0
# 868 "data/maps/DLC/scripts.pory"
	releaseall
	return


MauvillePosterDLC::
# 872 "data/maps/DLC/scripts.pory"
	lock
# 873 "data/maps/DLC/scripts.pory"
	msgbox MauvillePosterDLC_Text_0
# 875 "data/maps/DLC/scripts.pory"
	releaseall
	return


TVDLC::
# 879 "data/maps/DLC/scripts.pory"
	lock
# 880 "data/maps/DLC/scripts.pory"
	msgbox TVDLC_Text_0
# 884 "data/maps/DLC/scripts.pory"
	releaseall
	return


DLCSealedBox::
# 888 "data/maps/DLC/scripts.pory"
	lockall
# 889 "data/maps/DLC/scripts.pory"
	msgbox DLCSealedBox_Text_0
# 890 "data/maps/DLC/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol1DLC::
# 894 "data/maps/DLC/scripts.pory"
	lock
# 895 "data/maps/DLC/scripts.pory"
	msgbox KantonianWarHistoryVol1DLC_Text_0
# 897 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3
# 899 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol1DLC_2
KantonianWarHistoryVol1DLC_1:
# 910 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol1DLC_5
KantonianWarHistoryVol1DLC_4:
# 913 "data/maps/DLC/scripts.pory"
endkantonianwar:
# 914 "data/maps/DLC/scripts.pory"
	releaseall
	return

KantonianWarHistoryVol1DLC_2:
# 900 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_HOENN, 10, 3
# 901 "data/maps/DLC/scripts.pory"
	msgbox KantonianWarHistoryVol1DLC_Text_1
# 904 "data/maps/DLC/scripts.pory"
	hidemonpic
# 905 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_KALOS, 10, 3
# 906 "data/maps/DLC/scripts.pory"
	msgbox KantonianWarHistoryVol1DLC_Text_2
# 908 "data/maps/DLC/scripts.pory"
	hidemonpic
# 909 "data/maps/DLC/scripts.pory"
	goto endkantonianwar
	goto KantonianWarHistoryVol1DLC_1

KantonianWarHistoryVol1DLC_5:
# 911 "data/maps/DLC/scripts.pory"
	goto endkantonianwar
	goto KantonianWarHistoryVol1DLC_4


MoneyTipBook::
# 918 "data/maps/DLC/scripts.pory"
	lock
# 919 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BASCULIN_BLUE_STRIPED, 10, 3
# 920 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_0
# 921 "data/maps/DLC/scripts.pory"
moneychapterselection:
# 922 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BASCULIN_BLUE_STRIPED, 10, 3
# 924 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_1
# 925 "data/maps/DLC/scripts.pory"
	hidemonpic
# 926 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, MoneyTipBook_Text_2, MoneyTipBook_Text_3, MoneyTipBook_Text_4, MoneyTipBook_Text_5, MoneyTipBook_Text_6, MoneyTipBook_Text_7
# 929 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoneyTipBook_2
MoneyTipBook_1:
# 939 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoneyTipBook_5
MoneyTipBook_4:
# 951 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoneyTipBook_8
MoneyTipBook_7:
# 962 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MoneyTipBook_11
MoneyTipBook_10:
# 972 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoneyTipBook_14
MoneyTipBook_13:
# 984 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MoneyTipBook_17
MoneyTipBook_16:
# 986 "data/maps/DLC/scripts.pory"
	hidemonpic
# 987 "data/maps/DLC/scripts.pory"
	releaseall
	return

MoneyTipBook_2:
# 930 "data/maps/DLC/scripts.pory"
	hidemonpic
# 931 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_8
# 936 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_1

MoneyTipBook_5:
# 940 "data/maps/DLC/scripts.pory"
	hidemonpic
# 941 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_9
# 948 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_4

MoneyTipBook_8:
# 952 "data/maps/DLC/scripts.pory"
	hidemonpic
# 953 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_10
# 959 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_7

MoneyTipBook_11:
# 963 "data/maps/DLC/scripts.pory"
	hidemonpic
# 964 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_11
# 969 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_10

MoneyTipBook_14:
# 973 "data/maps/DLC/scripts.pory"
	hidemonpic
# 974 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_12
# 981 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_13

MoneyTipBook_17:
	goto MoneyTipBook_16


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

# 215 "data/maps/DLC/scripts.pory"
LittleKidDLC_Movement_0:
# 215 "data/maps/DLC/scripts.pory"
	face_player
	step_end

# 340 "data/maps/DLC/scripts.pory"
TeacherDLC_Movement_0:
# 340 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 523 "data/maps/DLC/scripts.pory"
LibraryGuyDLC_Movement_0:
# 523 "data/maps/DLC/scripts.pory"
	face_left
# 523 "data/maps/DLC/scripts.pory"
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
# 220 "data/maps/DLC/scripts.pory"
	.string "Hello mister! Want to see my drawing?$"

LittleKidDLC_Text_1:
# 223 "data/maps/DLC/scripts.pory"
	.string "Hello miss! Want to see my drawing?$"

LittleKidDLC_Text_2:
# 225 "data/maps/DLC/scripts.pory"
	.string "Yes$"

LittleKidDLC_Text_3:
# 225 "data/maps/DLC/scripts.pory"
	.string "No$"

LittleKidDLC_Text_4:
# 228 "data/maps/DLC/scripts.pory"
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
# 235 "data/maps/DLC/scripts.pory"
	.string "Hehe - okay! Your loss!$"

FatManDLCAfterClass_Text_0:
# 245 "data/maps/DLC/scripts.pory"
	.string "Devon Browser automatically hides all\n"
	.string "distressing content on the web.\p"
	.string "But it also replaces it with Devon ads.\n"
	.string "It's kind of annoying.$"

FatManDLC_Text_0:
# 256 "data/maps/DLC/scripts.pory"
	.string "I lived in Rustboro, and some fire\n"
	.string "Pokémon burned the apartment building\l"
	.string "I lived in.\p"
	.string "I had to come back here with my\n"
	.string "parents. I miss the city.$"

ObsessedGirlDLC_Text_0:
# 268 "data/maps/DLC/scripts.pory"
	.string "I searched for the origin of the word\n"
	.string "'Pokémon'... and would you know it?\p"
	.string "It comes from the old term 'Pocket\n"
	.string "Monsters'. They are 'monsters'.\p"
	.string "Who thought it was a good idea to live\n"
	.string "with them?\p"
	.string "Please, get that one away from me. I\n"
	.string "don't want to get hurt.$"

ObsessedGirlDLC_Text_1:
# 275 "data/maps/DLC/scripts.pory"
	.string "...$"

SleepingKidDLCAfterClass_Text_0:
# 283 "data/maps/DLC/scripts.pory"
	.string "Since I slept through class, I'm trying\n"
	.string "to catch up...$"

SleepingKidDLC_Text_0:
# 293 "data/maps/DLC/scripts.pory"
	.string "ZZZZ...\n"
	.string "... Huh? Is class over? I think I slept\l"
	.string "through it...$"

GirlNotebookDLC_Text_0:
# 301 "data/maps/DLC/scripts.pory"
	.string "It's the notebook the scared girl left\n"
	.string "behind.\p"
	.string "Next to some classroom notes, there's a\n"
	.string "drawing of a man with a white hat,\l"
	.string "rescuing a little girl from drowning.$"

SleepingBoyNotebookDLC_Text_0:
# 308 "data/maps/DLC/scripts.pory"
	.string "The notebook has barely any notes, and\n"
	.string "is covered in drool.$"

OldManDLC_Text_0:
# 316 "data/maps/DLC/scripts.pory"
	.string "My daugther's health has never been\n"
	.string "the same since she breathed that\l"
	.string "Venusaur's Poison Powder.\p"
	.string "She's been surfing the web as a way to\n"
	.string "deal with it... I wish she went out a bit\l"
	.string "more.$"

SnorlaxKidNotebookDLC_Text_0:
# 327 "data/maps/DLC/scripts.pory"
	.string "It's a drawing of a Snorlax, sleeping\n"
	.string "soundly... while blocking a bridge.$"

TeacherDLC_Text_0:
# 338 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I shouldn't have come to teach\n"
	.string "to this backwater town.\p"
	.string "But the bonus is so juicy...$"

LibraryGuyDLC_Text_0:
# 349 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.$"

LibraryGuyDLC_Text_1:
# 351 "data/maps/DLC/scripts.pory"
	.string "Would you like to loan anything?$"

LibraryGuyDLC_Text_2:
# 353 "data/maps/DLC/scripts.pory"
	.string "Loan a book$"

LibraryGuyDLC_Text_3:
# 353 "data/maps/DLC/scripts.pory"
	.string "Loan a TM$"

LibraryGuyDLC_Text_4:
# 353 "data/maps/DLC/scripts.pory"
	.string "How do loans work?$"

LibraryGuyDLC_Text_5:
# 353 "data/maps/DLC/scripts.pory"
	.string "No, thank you$"

LibraryGuyDLC_Text_6:
# 362 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'The History of Mt. Chimney'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_7:
# 364 "data/maps/DLC/scripts.pory"
	.string "I lost it...$"

LibraryGuyDLC_Text_8:
# 367 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new book now!$"

LibraryGuyDLC_Text_9:
# 374 "data/maps/DLC/scripts.pory"
	.string "Understandable! You can return it when\n"
	.string "you've finished with it.$"

LibraryGuyDLC_Text_10:
# 379 "data/maps/DLC/scripts.pory"
	.string "Oh, that's unfortunate...\p"
	.string "If you want to continue loaning, you'll\n"
	.string "need to refund the loss - which is\l"
	.string "5000¥$"

LibraryGuyDLC_Text_11:
# 382 "data/maps/DLC/scripts.pory"
	.string "I will pay$"

LibraryGuyDLC_Text_12:
# 382 "data/maps/DLC/scripts.pory"
	.string "Not right now$"

LibraryGuyDLC_Text_13:
# 387 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new book.$"

LibraryGuyDLC_Text_14:
# 394 "data/maps/DLC/scripts.pory"
	.string "You don't seem to have enough funds...\n"
	.string "please return when you procure them!$"

LibraryGuyDLC_Text_15:
# 400 "data/maps/DLC/scripts.pory"
	.string "Very well... we'll eagerly await for your\n"
	.string "refunding.$"

LibraryGuyDLC_Text_16:
# 409 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned On Fortree's Deforestation.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_17:
# 457 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'New Mauville - What Went Wrong'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_18:
# 506 "data/maps/DLC/scripts.pory"
	.string "These are the books we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_19:
# 508 "data/maps/DLC/scripts.pory"
	.string "'The History of Mt. Chimney'$"

LibraryGuyDLC_Text_20:
# 508 "data/maps/DLC/scripts.pory"
	.string "'On Fortree's Deforestation'$"

LibraryGuyDLC_Text_21:
# 508 "data/maps/DLC/scripts.pory"
	.string "'New Mauville - What Went Wrong?'$"

LibraryGuyDLC_Text_22:
# 508 "data/maps/DLC/scripts.pory"
	.string "I changed my mind$"

LibraryGuyDLC_Text_23:
# 511 "data/maps/DLC/scripts.pory"
	.string "Interested in geology? Then this is a\n"
	.string "great pick. Here you go!$"

LibraryGuyDLC_Text_24:
# 517 "data/maps/DLC/scripts.pory"
	.string "Hope you enjoy it! Please return it when\n"
	.string "you're finished with it.$"

LibraryGuyDLC_Text_25:
# 522 "data/maps/DLC/scripts.pory"
	.string "A concerning ecological study - but I\n"
	.string "am sure Devon has plans to avoid the\l"
	.string "worst.$"

LibraryGuyDLC_Text_26:
# 531 "data/maps/DLC/scripts.pory"
	.string "One should learn from the past to avoid\n"
	.string "repeating it... here!$"

LibraryGuyDLC_Text_27:
# 540 "data/maps/DLC/scripts.pory"
	.string "Fair enough. Perhaps you'd like to loan\n"
	.string "something else?$"

LibraryGuyDLC_Text_28:
# 553 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 17 - Protect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_29:
# 558 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new TM now!$"

LibraryGuyDLC_Text_30:
# 578 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new TM.$"

LibraryGuyDLC_Text_31:
# 599 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 20 - Safeguard.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_32:
# 646 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 33 - Reflect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_33:
# 695 "data/maps/DLC/scripts.pory"
	.string "These are the TMs we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_34:
# 696 "data/maps/DLC/scripts.pory"
	.string "'TM 17 - Protect'$"

LibraryGuyDLC_Text_35:
# 696 "data/maps/DLC/scripts.pory"
	.string "'TM 20 - Safeguard'$"

LibraryGuyDLC_Text_36:
# 696 "data/maps/DLC/scripts.pory"
	.string "'TM 33 - Reflect'$"

LibraryGuyDLC_Text_37:
# 698 "data/maps/DLC/scripts.pory"
	.string "Of course - I have a copy right here!$"

LibraryGuyDLC_Text_38:
# 730 "data/maps/DLC/scripts.pory"
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
# 739 "data/maps/DLC/scripts.pory"
	.string "I'll be here if you change your mind!$"

OLDLibraryGuyDLC_Text_0:
# 751 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.\p"
	.string "You can read any of the books here, but\n"
	.string "you need to be enrolled to take them on\l"
	.string "a loan - sorry!$"

TeacherdeskDLC_Text_0:
# 760 "data/maps/DLC/scripts.pory"
	.string "The book on top features a Psyduck on\n"
	.string "its cover, and is titled 'Therapy for\l"
	.string "Beginners.'$"

BlackBoardDLC_Text_0:
# 770 "data/maps/DLC/scripts.pory"
	.string "The math problem is solved.$"

BlackBoardDLC_Text_1:
# 774 "data/maps/DLC/scripts.pory"
	.string "The board contains an unanswered math\n"
	.string "problem from a previous lesson...$"

BlackBoardDLC_Text_2:
# 776 "data/maps/DLC/scripts.pory"
	.string "I have ¥2404, and I buy two Devon Balls\n"
	.string "for ¥210 each. How much do I have left?$"

BlackBoardDLC_Text_3:
# 777 "data/maps/DLC/scripts.pory"
	.string "¥2194$"

BlackBoardDLC_Text_4:
# 777 "data/maps/DLC/scripts.pory"
	.string "¥1984$"

BlackBoardDLC_Text_5:
# 777 "data/maps/DLC/scripts.pory"
	.string "¥2025$"

BlackBoardDLC_Text_6:
# 781 "data/maps/DLC/scripts.pory"
	.string "You write ¥2194 on the blackboard.$"

BlackBoardDLC_Text_7:
# 785 "data/maps/DLC/scripts.pory"
	.string "Uhm... that's not correct. Would you mind\n"
	.string "not writing wrong answers on the board?\n"
	.string "Thank you.$"

BlackBoardDLC_Text_8:
# 794 "data/maps/DLC/scripts.pory"
	.string "You write ¥1984 on the blackboard.$"

BlackBoardDLC_Text_9:
# 798 "data/maps/DLC/scripts.pory"
	.string "Oh, that's correct! You're good with\n"
	.string "numbers.$"

BlackBoardDLC_Text_10:
# 802 "data/maps/DLC/scripts.pory"
	.string "I like math problems... they always have\n"
	.string "a single right answer.\p"
	.string "If only the world worked like that.$"

BlackBoardDLC_Text_11:
# 812 "data/maps/DLC/scripts.pory"
	.string "You write ¥2025 on the blackboard.$"

BlackBoardDLC_Text_12:
# 824 "data/maps/DLC/scripts.pory"
	.string "Better not to write anything...$"

OpenBoxDLC_Text_0:
# 831 "data/maps/DLC/scripts.pory"
	.string "A label on the open box reads 'To be\n"
	.string "discarded'.\p"
	.string "Through the open gap, you glimpse a\n"
	.string "paper whose title reads:\p"
	.string "'The grim truth behind Safemon, by\n"
	.string "{COLOR BLUE}Professor Balsam{COLOR DARK_GRAY}.'$"

PosterDLC_Text_0:
# 839 "data/maps/DLC/scripts.pory"
	.string "Next month's planned excursion:\n"
	.string "Petalburg Park!\p"
	.string "Sign ups open on DLC's website.\n"
	.string "Minors require parental consent.$"

RulesDLC_Text_0:
# 846 "data/maps/DLC/scripts.pory"
	.string "The hanged notes contain many\n"
	.string "classroom rules.\p"
	.string "1) No yelling\n"
	.string "2) No running\p"
	.string "3) No Pokémon allowed at school\n"
	.string "4) Raise your hand for questions.\p"
	.string "The list goes on and on.$"

BoardDLC_Text_0:
# 854 "data/maps/DLC/scripts.pory"
	.string "The board contains many Devon-related\n"
	.string "news, event posters, and most of all\l"
	.string "product ads.$"

PCDLC_Text_0:
# 861 "data/maps/DLC/scripts.pory"
	.string "The computer asks for a DLC username\n"
	.string "and password. I don't have any.$"

BookshelfDLC_Text_0:
# 867 "data/maps/DLC/scripts.pory"
	.string "It's full of books and magazines\n"
	.string "published by Devon Co.$"

MauvillePosterDLC_Text_0:
# 873 "data/maps/DLC/scripts.pory"
	.string "Finished using the PC? Turn it off, and\n"
	.string "save electricity!\p"
	.string "Let's take care of Hoenn together.\n"
	.string "{COLOR BLUE}Mauville Nuclear Plant.{COLOR DARK_GRAY}$"

TVDLC_Text_0:
# 880 "data/maps/DLC/scripts.pory"
	.string "The TV is playing a documentary on\n"
	.string "Safemon on a loop.\p"
	.string "'Before leaving Devon laboratories, all\n"
	.string "Safemon are injected with the\l"
	.string "Everserum, which prevents them from\l"
	.string "evolving through natural means'.\p"
	.string "'This means no unplanned mutations will\n"
	.string "ever take place on a Safemon.\p"
	.string "Change can be dangerous!'$"

DLCSealedBox_Text_0:
# 889 "data/maps/DLC/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

KantonianWarHistoryVol1DLC_Text_0:
# 895 "data/maps/DLC/scripts.pory"
	.string "A book stands out in the shelf. It's\n"
	.string "called 'History of the Kantonian War,\l"
	.string "Volume 1.\p"
	.string "Read it?$"

KantonianWarHistoryVol1DLC_Text_1:
# 901 "data/maps/DLC/scripts.pory"
	.string "February, 1996. Team Rocket, a criminal\n"
	.string "organization with a strong presence in\l"
	.string "the Kanto region, invades the\l"
	.string "headquarters of Silph Co., a\l"
	.string "technological company in Saffron City.$"

KantonianWarHistoryVol1DLC_Text_2:
# 906 "data/maps/DLC/scripts.pory"
	.string "They defeat all opposition, and the\n"
	.string "leader of Team Rocket, Giovanni,\l"
	.string "assumes control of the company.$"

MoneyTipBook_Text_0:
# 920 "data/maps/DLC/scripts.pory"
	.string "'The book cover reads: 'Money in\n"
	.string "post-war Hoenn - how to THRIVE.'$"

MoneyTipBook_Text_1:
# 924 "data/maps/DLC/scripts.pory"
	.string "Which chapter to read?$"

MoneyTipBook_Text_2:
# 926 "data/maps/DLC/scripts.pory"
	.string "1) Devon Relief$"

MoneyTipBook_Text_3:
# 926 "data/maps/DLC/scripts.pory"
	.string "2) Foraging$"

MoneyTipBook_Text_4:
# 926 "data/maps/DLC/scripts.pory"
	.string "3) Object Spotter$"

MoneyTipBook_Text_5:
# 926 "data/maps/DLC/scripts.pory"
	.string "4) Thief and You$"

MoneyTipBook_Text_6:
# 926 "data/maps/DLC/scripts.pory"
	.string "5) Pawning and Gambling$"

MoneyTipBook_Text_7:
# 926 "data/maps/DLC/scripts.pory"
	.string "None$"

MoneyTipBook_Text_8:
# 931 "data/maps/DLC/scripts.pory"
	.string "If you're reading this, it must be for\n"
	.string "one reason only. You are BROKE.\p"
	.string "Don't worry, I've been there. In the\n"
	.string "absolute bottom. And I'll teach you how\l"
	.string "to climb out of it!\p"
	.string "First step is to check your mailbox. If\n"
	.string "you served during the war, or had some\l"
	.string "sort of insurance, chances are Devon\l"
	.string "has mailed you some money.\p"
	.string "It won't be much, but it's a start.$"

MoneyTipBook_Text_9:
# 941 "data/maps/DLC/scripts.pory"
	.string "Mother nature does not provide as much\n"
	.string "as it used to, but with some luck, it\l"
	.string "won't be drained dry by the time you\l"
	.string "read this.\p"
	.string "Take Route 101 for example - Shiitako\n"
	.string "mushrooms grow in that place.\p"
	.string "Even if you pick them up once, they\n"
	.string "regrow on the daily, so that's steady\l"
	.string "income!\p"
	.string "Too lazy to forage yourself? Get a\n"
	.string "Pokémon with the Pickup ability, and\l"
	.string "have it do it for you.\p"
	.string "Now that's steady AND passive income!\p"
	.string "Lastly, if you're lucky enough to find a\n"
	.string "berry field in this day and age, well...\l"
	.string "you better exploit it, and sell those\l"
	.string "bad girls for a fortune.$"

MoneyTipBook_Text_10:
# 953 "data/maps/DLC/scripts.pory"
	.string "Now this is where the real money flows\n"
	.string "in!\p"
	.string "It's only been a year since the war, and\n"
	.string "Hoenn is still full of stuff people\l"
	.string "dropped during the chaos.\p"
	.string "Now, you can comb the ground of Hoenn\n"
	.string "till your hair turns grey, or you can get\l"
	.string "your hands on an {COLOR BLUE}Object Spotter{COLOR DARK_GRAY}.\l"
	.string "Basically, it's an ugly pair of goggles\l"
	.string "that does the spotting for you.\p"
	.string "They are expensive, and due to some\n"
	.string "anti-theft nonsense, they don't work\l"
	.string "indoors...\p"
	.string "But if you want not only to survive, but\n"
	.string "THRIVE... it's a pretty worthy\l"
	.string "investment!$"

MoneyTipBook_Text_11:
# 964 "data/maps/DLC/scripts.pory"
	.string "If you're reading this far, you must be\n"
	.string "a greedy bastard. And I like that.\p"
	.string "Sadly, you can only get so far playing\n"
	.string "by 'the book' so to speak...\p"
	.string "However, imagine you were bold enough\n"
	.string "to use the move Thief against wild\l"
	.string "Pokémon... or even trainer Pokémon.\p"
	.string "Of course, the latter would fall under\n"
	.string "the realm of criminality, and this\l"
	.string "humble writer would never encourage\l"
	.string "such behaviour.\p"
	.string "So whatever you do, do NOT... {COLOR LIGHT_GRAY}{SHADOW WHITE}not{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} do it...!$"

MoneyTipBook_Text_12:
# 974 "data/maps/DLC/scripts.pory"
	.string "Be warned - this last money-making\n"
	.string "method is only for the boldest of the\l"
	.string "bold.\p"
	.string "I can't tell you exactly where, but\n"
	.string "there's this cool shop near Petalburg\l"
	.string "City where you can pawn your most\l"
	.string "valuable items...\p"
	.string "I'm talking Devon Dexes, Devon Navs,\n"
	.string "motorcycles - that sort of stuff.\p"
	.string "Of course, it's very inconvenient to do\n"
	.string "without these things, but you will get a\l"
	.string "small fortune for pawning them, and you\l"
	.string "can get them back by returning the\l"
	.string "amount you were given.\p"
	.string "So what's the point, you may be asking?\n"
	.string "Well... the point is gambling it all in\l"
	.string "Petalburg Arcade, what else!?\p"
	.string "Rake in those tokens, buy expensive\n"
	.string "stuff with them, and sell it for huge\l"
	.string "profit!\p"
	.string "Risky? Perhaps. You may lose it all. But\n"
	.string "that's a loser's mentality.$"
