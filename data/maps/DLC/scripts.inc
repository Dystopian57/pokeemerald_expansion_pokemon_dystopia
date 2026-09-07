# 1 "data/maps/DLC/scripts.pory"


DLC_MapScripts::
# 8 "data/maps/DLC/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DLC_TVOn
# 9 "data/maps/DLC/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LessonMusic
# 10 "data/maps/DLC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LessonMusic
	.byte 0


DLC_TVOn::
# 13 "data/maps/DLC/scripts.pory"
	special TurnOnTVScreen
	return


LessonMusic::
# 17 "data/maps/DLC/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq LessonMusic_1
# 19 "data/maps/DLC/scripts.pory"
	release
	return

LessonMusic_1:
# 18 "data/maps/DLC/scripts.pory"
	playbgm MUS_SCHOOL, TRUE
	return


OldaleDLC_GoToSeatForTherapyLeft::
# 24 "data/maps/DLC/scripts.pory"
	lockall
# 25 "data/maps/DLC/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 26 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 27 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 28 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 29 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 30 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 31 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyLeft_Movement_1
# 32 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleDLC_GoToSeatForTherapyRight::
# 36 "data/maps/DLC/scripts.pory"
	lockall
# 37 "data/maps/DLC/scripts.pory"
	playbgm MUS_SCHOOL, TRUE
# 38 "data/maps/DLC/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 39 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 40 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 41 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 42 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 43 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 44 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyRight_Movement_0
# 45 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleTown_DLC_TherapyCutscene::
# 49 "data/maps/DLC/scripts.pory"
starttherapycutscene:
# 50 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_0
# 52 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_VENUSAUR, 10, 3
# 53 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_NORMAL
# 54 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_1
# 55 "data/maps/DLC/scripts.pory"
	hidemonpic
# 56 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_2
# 57 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_DLC_TherapyCutscene_Text_3, OldaleTown_DLC_TherapyCutscene_Text_4, OldaleTown_DLC_TherapyCutscene_Text_5
# 58 "data/maps/DLC/scripts.pory"
	hidemonpic
# 59 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 60 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_0
# 61 "data/maps/DLC/scripts.pory"
	waitmovement
# 63 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_DLC_TherapyCutscene_2
OldaleTown_DLC_TherapyCutscene_1:
# 67 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_DLC_TherapyCutscene_5
OldaleTown_DLC_TherapyCutscene_4:
# 71 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleTown_DLC_TherapyCutscene_8
OldaleTown_DLC_TherapyCutscene_7:
# 75 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 76 "data/maps/DLC/scripts.pory"
	waitmovement
# 77 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_9
# 79 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_2
# 80 "data/maps/DLC/scripts.pory"
	waitmovement
# 81 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_10
# 83 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 84 "data/maps/DLC/scripts.pory"
	waitmovement
# 85 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_CHARIZARD, 10, 3
# 86 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
# 87 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_11
# 88 "data/maps/DLC/scripts.pory"
	hidemonpic
# 89 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 90 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_0
# 91 "data/maps/DLC/scripts.pory"
	waitmovement
# 92 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_12
# 94 "data/maps/DLC/scripts.pory"
	playse SE_M_METRONOME
# 95 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_4
# 96 "data/maps/DLC/scripts.pory"
	waitmovement
# 97 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 98 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 99 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_13
# 101 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 102 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_5
# 103 "data/maps/DLC/scripts.pory"
	waitmovement
# 104 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 105 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_14
# 107 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 108 "data/maps/DLC/scripts.pory"
	waitmovement
# 109 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_15
# 110 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BLASTOISE, 10, 3
# 111 "data/maps/DLC/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_NORMAL
# 112 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 113 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_16
# 114 "data/maps/DLC/scripts.pory"
	hidemonpic
# 116 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 117 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_7
# 118 "data/maps/DLC/scripts.pory"
	waitmovement
# 119 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_17
# 121 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 122 "data/maps/DLC/scripts.pory"
	waitmovement
# 123 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_18
# 127 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 128 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_0
# 129 "data/maps/DLC/scripts.pory"
	waitmovement
# 130 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 131 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 132 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 133 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_19
# 135 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 137 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 138 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 139 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 140 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_8
# 141 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_20
# 143 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 144 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_9
# 145 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 146 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_21
# 148 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 149 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 150 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 151 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_22
# 152 "data/maps/DLC/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 154 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 155 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 156 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 157 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_10
# 158 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_23
# 159 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 160 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 161 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_11
# 162 "data/maps/DLC/scripts.pory"
	playse SE_FLEE
# 163 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_24
# 164 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_12
# 165 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_13
# 166 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_12
# 167 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_13
# 168 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 169 "data/maps/DLC/scripts.pory"
	waitse
# 170 "data/maps/DLC/scripts.pory"
	playse SE_M_METRONOME
# 171 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_14
# 172 "data/maps/DLC/scripts.pory"
	waitmovement
# 173 "data/maps/DLC/scripts.pory"
	waitse
# 174 "data/maps/DLC/scripts.pory"
	removeobject 1
# 175 "data/maps/DLC/scripts.pory"
	waitmovement
# 176 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 177 "data/maps/DLC/scripts.pory"
	waitmovement
# 178 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 179 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 180 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 181 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 182 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_25
# 186 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_15
# 187 "data/maps/DLC/scripts.pory"
	waitmovement
# 188 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_16
# 189 "data/maps/DLC/scripts.pory"
	waitmovement
# 190 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 191 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 192 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_26
# 193 "data/maps/DLC/scripts.pory"
	closemessage
# 194 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 195 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_17
# 196 "data/maps/DLC/scripts.pory"
	waitmovement
# 197 "data/maps/DLC/scripts.pory"
	removeobject 2
# 198 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_18
# 199 "data/maps/DLC/scripts.pory"
	waitmovement 3
# 200 "data/maps/DLC/scripts.pory"
	removeobject 3
# 201 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 202 "data/maps/DLC/scripts.pory"
	waitse
# 206 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 207 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_DLC_TherapyCutscene_Movement_19
# 208 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 209 "data/maps/DLC/scripts.pory"
	clearflag sharpynotoutsideDLC
# 210 "data/maps/DLC/scripts.pory"
	clearflag camelianotoutsideDLC
# 211 "data/maps/DLC/scripts.pory"
	setflag sharpynotinsideDLC
# 212 "data/maps/DLC/scripts.pory"
	setflag camelianotinsideDLC
# 213 "data/maps/DLC/scripts.pory"
	setflag finishedtherapy
# 214 "data/maps/DLC/scripts.pory"
	setflag sharpycameliaDLCcs
# 215 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 216 "data/maps/DLC/scripts.pory"
	waitmovement
# 218 "data/maps/DLC/scripts.pory"
	setvar VAR_OLDALE_PHASE, 1
# 219 "data/maps/DLC/scripts.pory"
	playbgm MUS_UNKNOWN5, TRUE
# 220 "data/maps/DLC/scripts.pory"
	releaseall
	return

OldaleTown_DLC_TherapyCutscene_2:
# 64 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_6
	goto OldaleTown_DLC_TherapyCutscene_1

OldaleTown_DLC_TherapyCutscene_5:
# 68 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_7
	goto OldaleTown_DLC_TherapyCutscene_4

OldaleTown_DLC_TherapyCutscene_8:
# 72 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_8
	goto OldaleTown_DLC_TherapyCutscene_7


LittleKidDLC::
# 225 "data/maps/DLC/scripts.pory"
	lockall
# 226 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 227 "data/maps/DLC/scripts.pory"
	applymovement 5, LittleKidDLC_Movement_0
# 230 "data/maps/DLC/scripts.pory"
	checkplayergender
# 231 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittleKidDLC_2
LittleKidDLC_1:
# 234 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittleKidDLC_5
LittleKidDLC_4:
# 237 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3
# 238 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittleKidDLC_8
LittleKidDLC_7:
# 246 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittleKidDLC_11
LittleKidDLC_10:
# 249 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 250 "data/maps/DLC/scripts.pory"
	waitmovement 5
# 251 "data/maps/DLC/scripts.pory"
	releaseall
	return

LittleKidDLC_2:
# 232 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_0
	goto LittleKidDLC_1

LittleKidDLC_5:
# 235 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_1
	goto LittleKidDLC_4

LittleKidDLC_8:
# 239 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 240 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_4
# 244 "data/maps/DLC/scripts.pory"
	hidemonpic
	goto LittleKidDLC_7

LittleKidDLC_11:
# 247 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_5
	goto LittleKidDLC_10


FatManDLCAfterClass::
# 255 "data/maps/DLC/scripts.pory"
	lock
# 256 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 257 "data/maps/DLC/scripts.pory"
	applymovement 15, LittleKidDLC_Movement_0
# 258 "data/maps/DLC/scripts.pory"
	msgbox FatManDLCAfterClass_Text_0
# 260 "data/maps/DLC/scripts.pory"
	applymovement 15, OldaleTown_DLC_TherapyCutscene_Movement_15
# 261 "data/maps/DLC/scripts.pory"
	waitmovement 15
# 262 "data/maps/DLC/scripts.pory"
	releaseall
	return


FatManDLC::
# 266 "data/maps/DLC/scripts.pory"
	lock
# 267 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 268 "data/maps/DLC/scripts.pory"
	applymovement 7, LittleKidDLC_Movement_0
# 269 "data/maps/DLC/scripts.pory"
	msgbox FatManDLC_Text_0
# 271 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 272 "data/maps/DLC/scripts.pory"
	releaseall
	return


ObsessedGirlDLC::
# 278 "data/maps/DLC/scripts.pory"
	lock
# 279 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 280 "data/maps/DLC/scripts.pory"
	applymovement 12, LittleKidDLC_Movement_0
# 281 "data/maps/DLC/scripts.pory"
	msgbox ObsessedGirlDLC_Text_0
# 285 "data/maps/DLC/scripts.pory"
	applymovement 12, OldaleTown_DLC_TherapyCutscene_Movement_15
# 286 "data/maps/DLC/scripts.pory"
	waitmovement 12
# 287 "data/maps/DLC/scripts.pory"
	playfirstmoncry
# 288 "data/maps/DLC/scripts.pory"
	msgbox ObsessedGirlDLC_Text_1
# 289 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLCAfterClass::
# 293 "data/maps/DLC/scripts.pory"
	lock
# 294 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 295 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 296 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLCAfterClass_Text_0
# 297 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 298 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 299 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLC::
# 303 "data/maps/DLC/scripts.pory"
	lock
# 304 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 305 "data/maps/DLC/scripts.pory"
	applymovement 4, LittleKidDLC_Movement_0
# 306 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLC_Text_0
# 307 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 308 "data/maps/DLC/scripts.pory"
	waitmovement 4
# 309 "data/maps/DLC/scripts.pory"
	releaseall
	return


GirlNotebookDLC::
# 313 "data/maps/DLC/scripts.pory"
	lock
# 314 "data/maps/DLC/scripts.pory"
	msgbox GirlNotebookDLC_Text_0
# 316 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingBoyNotebookDLC::
# 320 "data/maps/DLC/scripts.pory"
	lock
# 321 "data/maps/DLC/scripts.pory"
	msgbox SleepingBoyNotebookDLC_Text_0
# 322 "data/maps/DLC/scripts.pory"
	releaseall
	return


OldManDLC::
# 326 "data/maps/DLC/scripts.pory"
	lock
# 327 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 328 "data/maps/DLC/scripts.pory"
	applymovement 8, LittleKidDLC_Movement_0
# 329 "data/maps/DLC/scripts.pory"
	msgbox OldManDLC_Text_0
# 332 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 333 "data/maps/DLC/scripts.pory"
	waitmovement 8
# 334 "data/maps/DLC/scripts.pory"
	releaseall
	return


SnorlaxKidNotebookDLC::
# 339 "data/maps/DLC/scripts.pory"
	lock
# 340 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 341 "data/maps/DLC/scripts.pory"
	msgbox SnorlaxKidNotebookDLC_Text_0
# 343 "data/maps/DLC/scripts.pory"
	hidemonpic
# 344 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherDLC::
# 349 "data/maps/DLC/scripts.pory"
	lockall
# 350 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 351 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 352 "data/maps/DLC/scripts.pory"
	msgbox TeacherDLC_Text_0
# 354 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 355 "data/maps/DLC/scripts.pory"
	releaseall
	return


LibraryGuyDLC::
# 360 "data/maps/DLC/scripts.pory"
	lockall
# 361 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 362 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 363 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_0
# 364 "data/maps/DLC/scripts.pory"
loantypechoicewithtext:
# 365 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_1
# 366 "data/maps/DLC/scripts.pory"
loantypechoice:
# 367 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_2, LibraryGuyDLC_Text_3, LibraryGuyDLC_Text_4, LibraryGuyDLC_Text_5
# 370 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_2
LibraryGuyDLC_1:
# 561 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_5
LibraryGuyDLC_4:
# 743 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_11
LibraryGuyDLC_10:
# 752 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_23
LibraryGuyDLC_22:
# 755 "data/maps/DLC/scripts.pory"
finishloanscript:
# 756 "data/maps/DLC/scripts.pory"
	closemessage
# 757 "data/maps/DLC/scripts.pory"
	releaseall
	return

LibraryGuyDLC_2:
# 375 "data/maps/DLC/scripts.pory"
	goto_if_set loanedfirebook, LibraryGuyDLC_8
LibraryGuyDLC_7:
# 422 "data/maps/DLC/scripts.pory"
	goto_if_set loanedgrassbook, LibraryGuyDLC_17
LibraryGuyDLC_16:
# 470 "data/maps/DLC/scripts.pory"
	goto_if_set loanedelectricbook, LibraryGuyDLC_32
LibraryGuyDLC_31:
# 516 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedfirebook, LibraryGuyDLC_50
# 516 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedgrassbook, LibraryGuyDLC_50
# 516 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedelectricbook, LibraryGuyDLC_50
LibraryGuyDLC_49:
# 535 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_79
LibraryGuyDLC_78:
# 544 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_103
LibraryGuyDLC_102:
# 553 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_128
	goto LibraryGuyDLC_1

LibraryGuyDLC_5:
# 566 "data/maps/DLC/scripts.pory"
	goto_if_set loanedprotectTM, LibraryGuyDLC_14
LibraryGuyDLC_13:
# 612 "data/maps/DLC/scripts.pory"
	goto_if_set loanedsafeguardTM, LibraryGuyDLC_26
LibraryGuyDLC_25:
# 659 "data/maps/DLC/scripts.pory"
	goto_if_set loanedreflectTM, LibraryGuyDLC_41
LibraryGuyDLC_40:
# 706 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedprotectTM, LibraryGuyDLC_64
# 706 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedsafeguardTM, LibraryGuyDLC_64
# 706 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedreflectTM, LibraryGuyDLC_64
	goto LibraryGuyDLC_4

LibraryGuyDLC_8:
# 376 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_6
# 378 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 380 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_20
LibraryGuyDLC_19:
# 387 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_38
LibraryGuyDLC_37:
# 392 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_62
	goto LibraryGuyDLC_7

LibraryGuyDLC_11:
# 744 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_38
# 749 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_10

LibraryGuyDLC_14:
# 567 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_28
# 569 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 571 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_29
LibraryGuyDLC_28:
# 578 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_47
LibraryGuyDLC_46:
# 583 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_76
	goto LibraryGuyDLC_13

LibraryGuyDLC_17:
# 423 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 425 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 427 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_35
LibraryGuyDLC_34:
# 434 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_60
LibraryGuyDLC_59:
# 439 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_86
	goto LibraryGuyDLC_16

LibraryGuyDLC_20:
# 381 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 382 "data/maps/DLC/scripts.pory"
	removeitem ITEM_FLAME_PLATE
# 383 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 384 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_19

LibraryGuyDLC_23:
# 753 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_39
	goto LibraryGuyDLC_22

LibraryGuyDLC_26:
# 613 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_31
# 615 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 617 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_44
LibraryGuyDLC_43:
# 624 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_74
LibraryGuyDLC_73:
# 629 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_97
	goto LibraryGuyDLC_25

LibraryGuyDLC_29:
# 572 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 573 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_PROTECT
# 574 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 575 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_28

LibraryGuyDLC_32:
# 471 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 473 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 475 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_57
LibraryGuyDLC_56:
# 482 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_84
LibraryGuyDLC_83:
# 487 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_105
	goto LibraryGuyDLC_31

LibraryGuyDLC_35:
# 428 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 429 "data/maps/DLC/scripts.pory"
	removeitem ITEM_MEADOW_PLATE
# 430 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 431 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_34

LibraryGuyDLC_38:
# 388 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 389 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_37

LibraryGuyDLC_41:
# 660 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_32
# 662 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 664 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_71
LibraryGuyDLC_70:
# 671 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_95
LibraryGuyDLC_94:
# 676 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_118
	goto LibraryGuyDLC_40

LibraryGuyDLC_44:
# 618 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 619 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_SAFEGUARD
# 620 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 621 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_43

LibraryGuyDLC_47:
# 579 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 580 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_46

LibraryGuyDLC_50:
# 519 "data/maps/DLC/scripts.pory"
loanbookoffer:
# 520 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_18
# 522 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_19, LibraryGuyDLC_Text_20, LibraryGuyDLC_Text_21, LibraryGuyDLC_Text_22
# 524 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_81
	goto LibraryGuyDLC_49

LibraryGuyDLC_57:
# 476 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 477 "data/maps/DLC/scripts.pory"
	removeitem ITEM_ZAP_PLATE
# 478 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 479 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_56

LibraryGuyDLC_60:
# 435 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 436 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_59

LibraryGuyDLC_62:
# 393 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 396 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 397 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_89
LibraryGuyDLC_88:
# 413 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_110
	goto LibraryGuyDLC_7

LibraryGuyDLC_64:
# 708 "data/maps/DLC/scripts.pory"
loantmoffer:
# 709 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_33
# 710 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_34, LibraryGuyDLC_Text_35, LibraryGuyDLC_Text_36, LibraryGuyDLC_Text_22
# 711 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_92
LibraryGuyDLC_91:
# 720 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_116
LibraryGuyDLC_115:
# 729 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_141
LibraryGuyDLC_140:
# 738 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_160
	goto LibraryGuyDLC_4

LibraryGuyDLC_71:
# 665 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 666 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_REFLECT
# 667 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 668 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_70

LibraryGuyDLC_74:
# 625 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 626 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_73

LibraryGuyDLC_76:
# 584 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 587 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 588 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_100
LibraryGuyDLC_99:
# 604 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_123
	goto LibraryGuyDLC_13

LibraryGuyDLC_79:
# 536 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_25
# 537 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 538 "data/maps/DLC/scripts.pory"
	giveitem ITEM_MEADOW_PLATE
# 539 "data/maps/DLC/scripts.pory"
	setflag loanedgrassbook
# 540 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 541 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_78

LibraryGuyDLC_81:
# 525 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_23
# 526 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_16
# 527 "data/maps/DLC/scripts.pory"
	waitmovement
# 528 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 529 "data/maps/DLC/scripts.pory"
	giveitem ITEM_FLAME_PLATE
# 530 "data/maps/DLC/scripts.pory"
	setflag loanedfirebook
# 531 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 532 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_49

LibraryGuyDLC_84:
# 483 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 484 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_83

LibraryGuyDLC_86:
# 440 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 443 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 444 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_108
LibraryGuyDLC_107:
# 460 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_133
	goto LibraryGuyDLC_16

LibraryGuyDLC_89:
# 398 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 399 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_113
LibraryGuyDLC_112:
# 407 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_138
	goto LibraryGuyDLC_88

LibraryGuyDLC_92:
# 712 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 713 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 714 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_PROTECT
# 715 "data/maps/DLC/scripts.pory"
	setflag loanedprotectTM
# 716 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 717 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_91

LibraryGuyDLC_95:
# 672 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 673 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_94

LibraryGuyDLC_97:
# 630 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 633 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 634 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_121
LibraryGuyDLC_120:
# 650 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_146
	goto LibraryGuyDLC_25

LibraryGuyDLC_100:
# 589 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 590 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_126
LibraryGuyDLC_125:
# 598 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_151
	goto LibraryGuyDLC_99

LibraryGuyDLC_103:
# 545 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 546 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 547 "data/maps/DLC/scripts.pory"
	giveitem ITEM_ZAP_PLATE
# 548 "data/maps/DLC/scripts.pory"
	setflag loanedelectricbook
# 549 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 550 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_102

LibraryGuyDLC_105:
# 488 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 491 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 492 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_131
LibraryGuyDLC_130:
# 508 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_153
	goto LibraryGuyDLC_31

LibraryGuyDLC_108:
# 445 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 446 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_136
LibraryGuyDLC_135:
# 454 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_158
	goto LibraryGuyDLC_107

LibraryGuyDLC_110:
# 414 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 415 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_7

LibraryGuyDLC_113:
# 400 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 401 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 403 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 404 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_112

LibraryGuyDLC_116:
# 721 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 722 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 723 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_SAFEGUARD
# 724 "data/maps/DLC/scripts.pory"
	setflag loanedsafeguardTM
# 725 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 726 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_115

LibraryGuyDLC_118:
# 677 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 680 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 681 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_144
LibraryGuyDLC_143:
# 697 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_162
	goto LibraryGuyDLC_40

LibraryGuyDLC_121:
# 635 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 636 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_149
LibraryGuyDLC_148:
# 644 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_167
	goto LibraryGuyDLC_120

LibraryGuyDLC_123:
# 605 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 606 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_13

LibraryGuyDLC_126:
# 591 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 592 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 594 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 595 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_125

LibraryGuyDLC_128:
# 554 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 555 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_1

LibraryGuyDLC_131:
# 493 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 494 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_156
LibraryGuyDLC_155:
# 502 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_169
	goto LibraryGuyDLC_130

LibraryGuyDLC_133:
# 461 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 462 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_16

LibraryGuyDLC_136:
# 447 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 448 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 450 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 451 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_135

LibraryGuyDLC_138:
# 408 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 410 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_88

LibraryGuyDLC_141:
# 730 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 731 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 732 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_REFLECT
# 733 "data/maps/DLC/scripts.pory"
	setflag loanedreflectTM
# 734 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 735 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_140

LibraryGuyDLC_144:
# 682 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 683 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_165
LibraryGuyDLC_164:
# 691 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_171
	goto LibraryGuyDLC_143

LibraryGuyDLC_146:
# 651 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 652 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_25

LibraryGuyDLC_149:
# 637 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 638 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 640 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 641 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_148

LibraryGuyDLC_151:
# 599 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 601 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_99

LibraryGuyDLC_153:
# 509 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 510 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_31

LibraryGuyDLC_156:
# 495 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 496 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 498 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 499 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_155

LibraryGuyDLC_158:
# 455 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 457 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_107

LibraryGuyDLC_160:
# 739 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 740 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_4

LibraryGuyDLC_162:
# 698 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 699 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_40

LibraryGuyDLC_165:
# 684 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 685 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 687 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 688 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_164

LibraryGuyDLC_167:
# 645 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 647 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_120

LibraryGuyDLC_169:
# 503 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 505 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_130

LibraryGuyDLC_171:
# 692 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 694 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_143


OLDLibraryGuyDLC::
# 762 "data/maps/DLC/scripts.pory"
	lockall
# 763 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 764 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 765 "data/maps/DLC/scripts.pory"
	msgbox OLDLibraryGuyDLC_Text_0
# 767 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 768 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherdeskDLC::
# 772 "data/maps/DLC/scripts.pory"
	lockall
# 773 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BURMY_TRASH, 10, 3
# 774 "data/maps/DLC/scripts.pory"
	msgbox TeacherdeskDLC_Text_0
# 776 "data/maps/DLC/scripts.pory"
	hidemonpic
# 777 "data/maps/DLC/scripts.pory"
	releaseall
	return


BlackBoardDLC::
# 781 "data/maps/DLC/scripts.pory"
	lockall
# 782 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 783 "data/maps/DLC/scripts.pory"
	goto_if_set DLCmathresolved, BlackBoardDLC_2
BlackBoardDLC_1:
# 788 "data/maps/DLC/scripts.pory"
	goto_if_unset DLCmathresolved, BlackBoardDLC_4
	return

BlackBoardDLC_2:
# 784 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_0
# 785 "data/maps/DLC/scripts.pory"
	goto endofDLCteacherscript
# 786 "data/maps/DLC/scripts.pory"
	release
	goto BlackBoardDLC_1

BlackBoardDLC_4:
# 789 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_1
# 791 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_2
# 792 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, BlackBoardDLC_Text_3, BlackBoardDLC_Text_4, BlackBoardDLC_Text_5, OldaleTown_DLC_TherapyCutscene_Text_5
# 793 "data/maps/DLC/scripts.pory"
	waitmessage
# 795 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackBoardDLC_7
BlackBoardDLC_6:
# 809 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackBoardDLC_10
BlackBoardDLC_9:
# 827 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_13
BlackBoardDLC_12:
# 839 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_16
BlackBoardDLC_15:
# 842 "data/maps/DLC/scripts.pory"
endofDLCteacherscript:
# 843 "data/maps/DLC/scripts.pory"
	releaseall
	return

BlackBoardDLC_7:
# 796 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_6
# 797 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 798 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 799 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 800 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 802 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 803 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 804 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 805 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 806 "data/maps/DLC/scripts.pory"
	goto endofDLCteacherscript
	goto BlackBoardDLC_6

BlackBoardDLC_10:
# 810 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_8
# 811 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 812 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 813 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 814 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_9
# 815 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 816 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 817 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_6
# 818 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_10
# 820 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 821 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 822 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 823 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 824 "data/maps/DLC/scripts.pory"
	setflag DLCmathresolved
	goto BlackBoardDLC_9

BlackBoardDLC_13:
# 828 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_11
# 829 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 830 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 831 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 832 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 834 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 835 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 836 "data/maps/DLC/scripts.pory"
	waitmovement 14
	goto BlackBoardDLC_12

BlackBoardDLC_16:
# 840 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_12
	goto BlackBoardDLC_15


OpenBoxDLC::
# 847 "data/maps/DLC/scripts.pory"
	lock
# 848 "data/maps/DLC/scripts.pory"
	msgbox OpenBoxDLC_Text_0
# 851 "data/maps/DLC/scripts.pory"
	releaseall
	return


PosterDLC::
# 855 "data/maps/DLC/scripts.pory"
	lock
# 856 "data/maps/DLC/scripts.pory"
	msgbox PosterDLC_Text_0
# 858 "data/maps/DLC/scripts.pory"
	releaseall
	return


RulesDLC::
# 862 "data/maps/DLC/scripts.pory"
	lock
# 863 "data/maps/DLC/scripts.pory"
	msgbox RulesDLC_Text_0
# 866 "data/maps/DLC/scripts.pory"
	releaseall
	return


BoardDLC::
# 870 "data/maps/DLC/scripts.pory"
	lock
# 871 "data/maps/DLC/scripts.pory"
	msgbox BoardDLC_Text_0
# 873 "data/maps/DLC/scripts.pory"
	releaseall
	return


PCDLC::
# 877 "data/maps/DLC/scripts.pory"
	lock
# 878 "data/maps/DLC/scripts.pory"
	msgbox PCDLC_Text_0
# 879 "data/maps/DLC/scripts.pory"
	releaseall
	return


BookshelfDLC::
# 883 "data/maps/DLC/scripts.pory"
	lock
# 884 "data/maps/DLC/scripts.pory"
	msgbox BookshelfDLC_Text_0
# 885 "data/maps/DLC/scripts.pory"
	releaseall
	return


MauvillePosterDLC::
# 889 "data/maps/DLC/scripts.pory"
	lock
# 890 "data/maps/DLC/scripts.pory"
	msgbox MauvillePosterDLC_Text_0
# 892 "data/maps/DLC/scripts.pory"
	releaseall
	return


TVDLC::
# 896 "data/maps/DLC/scripts.pory"
	lock
# 897 "data/maps/DLC/scripts.pory"
	msgbox TVDLC_Text_0
# 901 "data/maps/DLC/scripts.pory"
	releaseall
	return


DLCSealedBox::
# 905 "data/maps/DLC/scripts.pory"
	lockall
# 906 "data/maps/DLC/scripts.pory"
	msgbox DLCSealedBox_Text_0
# 907 "data/maps/DLC/scripts.pory"
	releaseall
	return


MoneyTipBook::
# 912 "data/maps/DLC/scripts.pory"
	lock
# 913 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BASCULIN_BLUE_STRIPED, 10, 3
# 914 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_0
# 915 "data/maps/DLC/scripts.pory"
moneychapterselection:
# 916 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BASCULIN_BLUE_STRIPED, 10, 3
# 918 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_1
# 919 "data/maps/DLC/scripts.pory"
	hidemonpic
# 920 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, MoneyTipBook_Text_2, MoneyTipBook_Text_3, MoneyTipBook_Text_4, MoneyTipBook_Text_5, MoneyTipBook_Text_6, MoneyTipBook_Text_7
# 923 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoneyTipBook_2
MoneyTipBook_1:
# 933 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoneyTipBook_5
MoneyTipBook_4:
# 945 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoneyTipBook_8
MoneyTipBook_7:
# 956 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MoneyTipBook_11
MoneyTipBook_10:
# 966 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoneyTipBook_14
MoneyTipBook_13:
# 978 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MoneyTipBook_17
MoneyTipBook_16:
# 980 "data/maps/DLC/scripts.pory"
	hidemonpic
# 981 "data/maps/DLC/scripts.pory"
	releaseall
	return

MoneyTipBook_2:
# 924 "data/maps/DLC/scripts.pory"
	hidemonpic
# 925 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_8
# 930 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_1

MoneyTipBook_5:
# 934 "data/maps/DLC/scripts.pory"
	hidemonpic
# 935 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_9
# 942 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_4

MoneyTipBook_8:
# 946 "data/maps/DLC/scripts.pory"
	hidemonpic
# 947 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_10
# 953 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_7

MoneyTipBook_11:
# 957 "data/maps/DLC/scripts.pory"
	hidemonpic
# 958 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_11
# 963 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_10

MoneyTipBook_14:
# 967 "data/maps/DLC/scripts.pory"
	hidemonpic
# 968 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_12
# 975 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_13

MoneyTipBook_17:
	goto MoneyTipBook_16


DLCTrashBin::
# 986 "data/maps/DLC/scripts.pory"
	lock
# 987 "data/maps/DLC/scripts.pory"
	goto_if_unset FLAG_ITEM_DLC_TRASHBIN, DLCTrashBin_2
# 992 "data/maps/DLC/scripts.pory"
	msgbox DLCTrashBin_Text_1
DLCTrashBin_1:
# 993 "data/maps/DLC/scripts.pory"
	releaseall
	return

DLCTrashBin_2:
# 988 "data/maps/DLC/scripts.pory"
	msgbox DLCTrashBin_Text_0
# 989 "data/maps/DLC/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
# 990 "data/maps/DLC/scripts.pory"
	setflag FLAG_ITEM_DLC_TRASHBIN
	goto DLCTrashBin_1


# 27 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_0:
# 27 "data/maps/DLC/scripts.pory"
	walk_up
# 27 "data/maps/DLC/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyLeft_Movement_1:
# 31 "data/maps/DLC/scripts.pory"
	walk_up
# 31 "data/maps/DLC/scripts.pory"
	walk_right
# 31 "data/maps/DLC/scripts.pory"
	walk_right
# 31 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 44 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyRight_Movement_0:
# 44 "data/maps/DLC/scripts.pory"
	walk_up
# 44 "data/maps/DLC/scripts.pory"
	walk_right
# 44 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 60 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_0:
# 60 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 60 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 60 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 75 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_1:
# 75 "data/maps/DLC/scripts.pory"
	walk_in_place_down
# 75 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 79 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_2:
# 79 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 79 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 83 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_3:
# 83 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 95 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_4:
# 95 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 95 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 95 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 102 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_5:
# 102 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 102 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 112 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_6:
# 112 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 117 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_7:
# 117 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 117 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 140 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_8:
# 140 "data/maps/DLC/scripts.pory"
	face_left
# 140 "data/maps/DLC/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 144 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_9:
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 144 "data/maps/DLC/scripts.pory"
	walk_in_place_left
	step_end

# 157 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_10:
# 157 "data/maps/DLC/scripts.pory"
	jump_in_place_up
# 157 "data/maps/DLC/scripts.pory"
	jump_in_place_up
	step_end

# 161 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_11:
# 161 "data/maps/DLC/scripts.pory"
	walk_fast_left
# 161 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 161 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 161 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 161 "data/maps/DLC/scripts.pory"
	walk_fast_down
	step_end

# 164 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_12:
# 164 "data/maps/DLC/scripts.pory"
	face_left
# 164 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 165 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_13:
# 165 "data/maps/DLC/scripts.pory"
	face_right
# 165 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 171 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_14:
# 171 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 171 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 186 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_15:
# 186 "data/maps/DLC/scripts.pory"
	face_right
	step_end

# 188 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_16:
# 188 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 195 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_17:
# 195 "data/maps/DLC/scripts.pory"
	walk_right
# 195 "data/maps/DLC/scripts.pory"
	walk_down
# 195 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 198 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_18:
# 198 "data/maps/DLC/scripts.pory"
	walk_right
# 198 "data/maps/DLC/scripts.pory"
	walk_right
# 198 "data/maps/DLC/scripts.pory"
	walk_down
# 198 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 207 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_19:
# 207 "data/maps/DLC/scripts.pory"
	walk_down
# 207 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 227 "data/maps/DLC/scripts.pory"
LittleKidDLC_Movement_0:
# 227 "data/maps/DLC/scripts.pory"
	face_player
	step_end

# 354 "data/maps/DLC/scripts.pory"
TeacherDLC_Movement_0:
# 354 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 537 "data/maps/DLC/scripts.pory"
LibraryGuyDLC_Movement_0:
# 537 "data/maps/DLC/scripts.pory"
	face_left
# 537 "data/maps/DLC/scripts.pory"
	face_up
	step_end

OldaleDLC_GoToSeatForTherapyLeft_Text_0:
# 30 "data/maps/DLC/scripts.pory"
	.string "Ah, there you are... {PLAYER}, is it?\p"
	.string "Please sit down - we were just starting.$"

OldaleTown_DLC_TherapyCutscene_Text_0:
# 50 "data/maps/DLC/scripts.pory"
	.string "As I was saying, we are going to start\n"
	.string "by watching some pictures of Kantonian\l"
	.string "Pokémon, and sharing what feelings\l"
	.string "they evoke in us.$"

OldaleTown_DLC_TherapyCutscene_Text_1:
# 54 "data/maps/DLC/scripts.pory"
	.string "Let's begin with you, {PLAYER}. Take a\n"
	.string "look at this picture.$"

OldaleTown_DLC_TherapyCutscene_Text_2:
# 56 "data/maps/DLC/scripts.pory"
	.string "What do you think about the Pokémon in\n"
	.string "it?$"

OldaleTown_DLC_TherapyCutscene_Text_3:
# 57 "data/maps/DLC/scripts.pory"
	.string "It's cool$"

OldaleTown_DLC_TherapyCutscene_Text_4:
# 57 "data/maps/DLC/scripts.pory"
	.string "Looks dangerous$"

OldaleTown_DLC_TherapyCutscene_Text_5:
# 57 "data/maps/DLC/scripts.pory"
	.string "I don't know$"

OldaleTown_DLC_TherapyCutscene_Text_6:
# 64 "data/maps/DLC/scripts.pory"
	.string "Cool!? That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_7:
# 68 "data/maps/DLC/scripts.pory"
	.string "I agree! That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_8:
# 72 "data/maps/DLC/scripts.pory"
	.string "Well, I do know! That Pokémon poisoned\n"
	.string "my daugther during the war! It's\l"
	.string "horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_9:
# 77 "data/maps/DLC/scripts.pory"
	.string "You are correct, sir... Venusaurs are\n"
	.string "very dangerous.\p"
	.string "Thankfully, Devon Co. has safened all\n"
	.string "Bulbasaurs in Hoenn to Bulbasynths, so\l"
	.string "that they hurt no more people.$"

OldaleTown_DLC_TherapyCutscene_Text_10:
# 81 "data/maps/DLC/scripts.pory"
	.string "Ah, thank goodness...$"

OldaleTown_DLC_TherapyCutscene_Text_11:
# 87 "data/maps/DLC/scripts.pory"
	.string "Let's continue... who wants to share\n"
	.string "their thoughts about this one?$"

OldaleTown_DLC_TherapyCutscene_Text_12:
# 92 "data/maps/DLC/scripts.pory"
	.string "O-oh, that one... t-that one burned my\n"
	.string "house...! Aaah, it's scary...$"

OldaleTown_DLC_TherapyCutscene_Text_13:
# 99 "data/maps/DLC/scripts.pory"
	.string "Huh? Nonsense, that's a splendid Fire\n"
	.string "type.$"

OldaleTown_DLC_TherapyCutscene_Text_14:
# 105 "data/maps/DLC/scripts.pory"
	.string "W-what?$"

OldaleTown_DLC_TherapyCutscene_Text_15:
# 109 "data/maps/DLC/scripts.pory"
	.string "Now now, let us be tolerant with...\n"
	.string "differences of opinion.$"

OldaleTown_DLC_TherapyCutscene_Text_16:
# 113 "data/maps/DLC/scripts.pory"
	.string "Let's see about the last one - the\n"
	.string "water CANNON Pokémon, Blastoise.$"

OldaleTown_DLC_TherapyCutscene_Text_17:
# 119 "data/maps/DLC/scripts.pory"
	.string "U-uwaah, nooo... t-those are the bad\n"
	.string "turtles...!$"

OldaleTown_DLC_TherapyCutscene_Text_18:
# 123 "data/maps/DLC/scripts.pory"
	.string "Precisely. The Kantonians used many\n"
	.string "Blastoise on the Assault on Route 103,\l"
	.string "and they almost flooded Oldale Town.\p"
	.string "Once more, it was thanks to Devon Co.'s\n"
	.string "swift action, that a flood gate was\l"
	.string "built and...$"

OldaleTown_DLC_TherapyCutscene_Text_19:
# 133 "data/maps/DLC/scripts.pory"
	.string "Hey, I know that one! That's a cool as\n"
	.string "heck Blastoise!\p"
	.string "I love how their Hydropumps sound...$"

OldaleTown_DLC_TherapyCutscene_Text_20:
# 141 "data/maps/DLC/scripts.pory"
	.string "BANG BANG!$"

OldaleTown_DLC_TherapyCutscene_Text_21:
# 146 "data/maps/DLC/scripts.pory"
	.string "N-nooo...!!$"

OldaleTown_DLC_TherapyCutscene_Text_22:
# 151 "data/maps/DLC/scripts.pory"
	.string "No? Hmm, you're right... it's not a 'bang'\n"
	.string "it's more like a...$"

OldaleTown_DLC_TherapyCutscene_Text_23:
# 158 "data/maps/DLC/scripts.pory"
	.string "BWAHM BWAHM!$"

OldaleTown_DLC_TherapyCutscene_Text_24:
# 163 "data/maps/DLC/scripts.pory"
	.string "AAAAAHH...!!$"

OldaleTown_DLC_TherapyCutscene_Text_25:
# 182 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I think we will finish this\n"
	.string "session early.\p"
	.string "Next time, everyone please be mindful\n"
	.string "of others' feelings.$"

OldaleTown_DLC_TherapyCutscene_Text_26:
# 192 "data/maps/DLC/scripts.pory"
	.string "Let's go, Sharpy... this was a waste of\n"
	.string "time.$"

LittleKidDLC_Text_0:
# 232 "data/maps/DLC/scripts.pory"
	.string "Hello mister! Want to see my drawing?$"

LittleKidDLC_Text_1:
# 235 "data/maps/DLC/scripts.pory"
	.string "Hello miss! Want to see my drawing?$"

LittleKidDLC_Text_2:
# 237 "data/maps/DLC/scripts.pory"
	.string "Yes$"

LittleKidDLC_Text_3:
# 237 "data/maps/DLC/scripts.pory"
	.string "No$"

LittleKidDLC_Text_4:
# 240 "data/maps/DLC/scripts.pory"
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
# 247 "data/maps/DLC/scripts.pory"
	.string "Hehe - okay! Your loss!$"

FatManDLCAfterClass_Text_0:
# 258 "data/maps/DLC/scripts.pory"
	.string "Devon Browser has a function to\n"
	.string "automatically hide all distressing\l"
	.string "content on the web.\p"
	.string "But to cover the cost for it, it also\n"
	.string "replaces said content with ads for\l"
	.string "Devon products.\p"
	.string "It's kind of annoying...$"

FatManDLC_Text_0:
# 269 "data/maps/DLC/scripts.pory"
	.string "I lived in Rustboro, and some fire\n"
	.string "Pokémon burned the apartment building\l"
	.string "I lived in.\p"
	.string "I had to come back here with my\n"
	.string "parents. I miss the city.$"

ObsessedGirlDLC_Text_0:
# 281 "data/maps/DLC/scripts.pory"
	.string "I searched for the origin of the word\n"
	.string "'Pokémon'... and would you know it?\p"
	.string "It comes from the old term 'Pocket\n"
	.string "Monsters'. They are 'monsters'.\p"
	.string "Who thought it was a good idea to live\n"
	.string "with them?\p"
	.string "Please, get that one away from me. I\n"
	.string "don't want to get hurt.$"

ObsessedGirlDLC_Text_1:
# 288 "data/maps/DLC/scripts.pory"
	.string "...$"

SleepingKidDLCAfterClass_Text_0:
# 296 "data/maps/DLC/scripts.pory"
	.string "Since I slept through class, I'm trying\n"
	.string "to catch up...$"

SleepingKidDLC_Text_0:
# 306 "data/maps/DLC/scripts.pory"
	.string "ZZZZ...\n"
	.string "... Huh? Is class over? I think I slept\l"
	.string "through it...$"

GirlNotebookDLC_Text_0:
# 314 "data/maps/DLC/scripts.pory"
	.string "It's the notebook the scared girl left\n"
	.string "behind.\p"
	.string "Next to some classroom notes, there's a\n"
	.string "drawing of a man with a white hat,\l"
	.string "rescuing a little girl from drowning.$"

SleepingBoyNotebookDLC_Text_0:
# 321 "data/maps/DLC/scripts.pory"
	.string "The notebook has barely any notes, and\n"
	.string "is covered in drool.$"

OldManDLC_Text_0:
# 329 "data/maps/DLC/scripts.pory"
	.string "My daugther's health has never been\n"
	.string "the same since she breathed that\l"
	.string "Venusaur's Poison Powder.\p"
	.string "She's been surfing the web as a way to\n"
	.string "deal with it... I wish she went out a bit\l"
	.string "more.$"

SnorlaxKidNotebookDLC_Text_0:
# 341 "data/maps/DLC/scripts.pory"
	.string "It's a drawing of a Snorlax, sleeping\n"
	.string "soundly... while blocking a bridge.$"

TeacherDLC_Text_0:
# 352 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I shouldn't have come to teach\n"
	.string "to this backwater town.\p"
	.string "But the bonus is so juicy...$"

LibraryGuyDLC_Text_0:
# 363 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.$"

LibraryGuyDLC_Text_1:
# 365 "data/maps/DLC/scripts.pory"
	.string "Would you like to loan anything?$"

LibraryGuyDLC_Text_2:
# 367 "data/maps/DLC/scripts.pory"
	.string "Loan a book$"

LibraryGuyDLC_Text_3:
# 367 "data/maps/DLC/scripts.pory"
	.string "Loan a TM$"

LibraryGuyDLC_Text_4:
# 367 "data/maps/DLC/scripts.pory"
	.string "How do loans work?$"

LibraryGuyDLC_Text_5:
# 367 "data/maps/DLC/scripts.pory"
	.string "No, thank you$"

LibraryGuyDLC_Text_6:
# 376 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'The History of Mt. Chimney'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_7:
# 378 "data/maps/DLC/scripts.pory"
	.string "I lost it...$"

LibraryGuyDLC_Text_8:
# 381 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new book now!$"

LibraryGuyDLC_Text_9:
# 388 "data/maps/DLC/scripts.pory"
	.string "Understandable! You can return it when\n"
	.string "you've finished with it.$"

LibraryGuyDLC_Text_10:
# 393 "data/maps/DLC/scripts.pory"
	.string "Oh, that's unfortunate...\p"
	.string "If you want to continue loaning, you'll\n"
	.string "need to refund the loss - that would be\l"
	.string "5000¥.$"

LibraryGuyDLC_Text_11:
# 396 "data/maps/DLC/scripts.pory"
	.string "I will pay$"

LibraryGuyDLC_Text_12:
# 396 "data/maps/DLC/scripts.pory"
	.string "Not right now$"

LibraryGuyDLC_Text_13:
# 401 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new book.$"

LibraryGuyDLC_Text_14:
# 408 "data/maps/DLC/scripts.pory"
	.string "You don't seem to have enough funds...\n"
	.string "please return when you procure them!$"

LibraryGuyDLC_Text_15:
# 414 "data/maps/DLC/scripts.pory"
	.string "Very well... we'll eagerly await for your\n"
	.string "refunding.$"

LibraryGuyDLC_Text_16:
# 423 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned On Fortree's Deforestation.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_17:
# 471 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'New Mauville - What Went Wrong'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_18:
# 520 "data/maps/DLC/scripts.pory"
	.string "These are the books we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_19:
# 522 "data/maps/DLC/scripts.pory"
	.string "'The History of Mt. Chimney'$"

LibraryGuyDLC_Text_20:
# 522 "data/maps/DLC/scripts.pory"
	.string "'On Fortree's Deforestation'$"

LibraryGuyDLC_Text_21:
# 522 "data/maps/DLC/scripts.pory"
	.string "'New Mauville - What Went Wrong?'$"

LibraryGuyDLC_Text_22:
# 522 "data/maps/DLC/scripts.pory"
	.string "I changed my mind$"

LibraryGuyDLC_Text_23:
# 525 "data/maps/DLC/scripts.pory"
	.string "Interested in geology? Then this is a\n"
	.string "great pick. Here you go!$"

LibraryGuyDLC_Text_24:
# 531 "data/maps/DLC/scripts.pory"
	.string "Hope you enjoy it! Please return it when\n"
	.string "you're finished with it.$"

LibraryGuyDLC_Text_25:
# 536 "data/maps/DLC/scripts.pory"
	.string "A concerning ecological study - but I\n"
	.string "am sure Devon has plans to avoid the\l"
	.string "worst.$"

LibraryGuyDLC_Text_26:
# 545 "data/maps/DLC/scripts.pory"
	.string "One should learn from the past to avoid\n"
	.string "repeating it... here!$"

LibraryGuyDLC_Text_27:
# 554 "data/maps/DLC/scripts.pory"
	.string "Fair enough. Perhaps you'd like to loan\n"
	.string "something else?$"

LibraryGuyDLC_Text_28:
# 567 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 17 - Protect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_29:
# 572 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new TM now!$"

LibraryGuyDLC_Text_30:
# 592 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new TM.$"

LibraryGuyDLC_Text_31:
# 613 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 20 - Safeguard.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_32:
# 660 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 33 - Reflect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_33:
# 709 "data/maps/DLC/scripts.pory"
	.string "These are the TMs we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_34:
# 710 "data/maps/DLC/scripts.pory"
	.string "'TM 17 - Protect'$"

LibraryGuyDLC_Text_35:
# 710 "data/maps/DLC/scripts.pory"
	.string "'TM 20 - Safeguard'$"

LibraryGuyDLC_Text_36:
# 710 "data/maps/DLC/scripts.pory"
	.string "'TM 33 - Reflect'$"

LibraryGuyDLC_Text_37:
# 712 "data/maps/DLC/scripts.pory"
	.string "Of course - I have a copy right here!$"

LibraryGuyDLC_Text_38:
# 744 "data/maps/DLC/scripts.pory"
	.string "It's easy! You can loan one book and\n"
	.string "one TM at any given time, at no cost.\p"
	.string "If you have loaned a book, you'll need\n"
	.string "to return it before loaning a new one.\l"
	.string "Same goes for TMs.\p"
	.string "Should you lose the loaned item, you will\n"
	.string "need to pay a fine before loaning\l"
	.string "anything else.\p"
	.string "So we encourage you to take good care\n"
	.string "of loans.\p"
	.string "We are constantly updating our loan\n"
	.string "collection, so you should come check it\l"
	.string "out often.\p"
	.string "So, now that you know how it works...$"

LibraryGuyDLC_Text_39:
# 753 "data/maps/DLC/scripts.pory"
	.string "I'll be here if you change your mind!$"

OLDLibraryGuyDLC_Text_0:
# 765 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.\p"
	.string "You can read any of the books here, but\n"
	.string "you need to be enrolled to take them on\l"
	.string "a loan - sorry!$"

TeacherdeskDLC_Text_0:
# 774 "data/maps/DLC/scripts.pory"
	.string "The book on top features a Psyduck on\n"
	.string "its cover, and is titled 'Therapy for\l"
	.string "Beginners.'$"

BlackBoardDLC_Text_0:
# 784 "data/maps/DLC/scripts.pory"
	.string "The math problem is solved.$"

BlackBoardDLC_Text_1:
# 789 "data/maps/DLC/scripts.pory"
	.string "The board contains an unanswered math\n"
	.string "problem from a previous lesson...$"

BlackBoardDLC_Text_2:
# 791 "data/maps/DLC/scripts.pory"
	.string "I have ¥2404, and I buy two Devon Balls\n"
	.string "for ¥210 each. How much do I have left?$"

BlackBoardDLC_Text_3:
# 792 "data/maps/DLC/scripts.pory"
	.string "¥2194$"

BlackBoardDLC_Text_4:
# 792 "data/maps/DLC/scripts.pory"
	.string "¥1984$"

BlackBoardDLC_Text_5:
# 792 "data/maps/DLC/scripts.pory"
	.string "¥2025$"

BlackBoardDLC_Text_6:
# 796 "data/maps/DLC/scripts.pory"
	.string "You write ¥2194 on the blackboard.$"

BlackBoardDLC_Text_7:
# 800 "data/maps/DLC/scripts.pory"
	.string "Uhm... that's not correct. Would you mind\n"
	.string "not writing wrong answers on the board?\n"
	.string "Thank you.$"

BlackBoardDLC_Text_8:
# 810 "data/maps/DLC/scripts.pory"
	.string "You write ¥1984 on the blackboard.$"

BlackBoardDLC_Text_9:
# 814 "data/maps/DLC/scripts.pory"
	.string "Oh, that's correct! You're good with\n"
	.string "numbers.$"

BlackBoardDLC_Text_10:
# 818 "data/maps/DLC/scripts.pory"
	.string "I like math problems... they always have\n"
	.string "a single right answer.\p"
	.string "If only the world worked like that.$"

BlackBoardDLC_Text_11:
# 828 "data/maps/DLC/scripts.pory"
	.string "You write ¥2025 on the blackboard.$"

BlackBoardDLC_Text_12:
# 840 "data/maps/DLC/scripts.pory"
	.string "Better not to write anything...$"

OpenBoxDLC_Text_0:
# 848 "data/maps/DLC/scripts.pory"
	.string "A label on the open box reads 'To be\n"
	.string "discarded'.\p"
	.string "Through the open gap, you glimpse a\n"
	.string "paper whose title reads:\p"
	.string "'The grim truth behind Safemon, by\n"
	.string "{COLOR BLUE}Professor Balsam{COLOR DARK_GRAY}.'$"

PosterDLC_Text_0:
# 856 "data/maps/DLC/scripts.pory"
	.string "Next month's planned excursion:\n"
	.string "Petalburg Park!\p"
	.string "Sign ups open on DLC's website.\n"
	.string "Minors require parental consent.$"

RulesDLC_Text_0:
# 863 "data/maps/DLC/scripts.pory"
	.string "The hanged notes contain many\n"
	.string "classroom rules.\p"
	.string "1) No yelling\n"
	.string "2) No running\p"
	.string "3) No Pokémon allowed at school\n"
	.string "4) Raise your hand for questions.\p"
	.string "The list goes on and on.$"

BoardDLC_Text_0:
# 871 "data/maps/DLC/scripts.pory"
	.string "The board contains many Devon-related\n"
	.string "news, event posters, and most of all\l"
	.string "product ads.$"

PCDLC_Text_0:
# 878 "data/maps/DLC/scripts.pory"
	.string "The computer asks for a DLC username\n"
	.string "and password. Don't have any.$"

BookshelfDLC_Text_0:
# 884 "data/maps/DLC/scripts.pory"
	.string "It's full of books and magazines\n"
	.string "published by Devon Co.$"

MauvillePosterDLC_Text_0:
# 890 "data/maps/DLC/scripts.pory"
	.string "Finished using the PC? Turn it off, and\n"
	.string "save electricity!\p"
	.string "Let's take care of Hoenn together.\n"
	.string "{COLOR BLUE}Mauville Nuclear Plant.{COLOR DARK_GRAY}$"

TVDLC_Text_0:
# 897 "data/maps/DLC/scripts.pory"
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
# 906 "data/maps/DLC/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoneyTipBook_Text_0:
# 914 "data/maps/DLC/scripts.pory"
	.string "'The book cover reads: 'Money in\n"
	.string "post-war Hoenn - how to THRIVE.'$"

MoneyTipBook_Text_1:
# 918 "data/maps/DLC/scripts.pory"
	.string "Which chapter to read?$"

MoneyTipBook_Text_2:
# 920 "data/maps/DLC/scripts.pory"
	.string "1) Devon Relief$"

MoneyTipBook_Text_3:
# 920 "data/maps/DLC/scripts.pory"
	.string "2) Foraging$"

MoneyTipBook_Text_4:
# 920 "data/maps/DLC/scripts.pory"
	.string "3) Object Spotter$"

MoneyTipBook_Text_5:
# 920 "data/maps/DLC/scripts.pory"
	.string "4) Thief and You$"

MoneyTipBook_Text_6:
# 920 "data/maps/DLC/scripts.pory"
	.string "5) Pawning and Gambling$"

MoneyTipBook_Text_7:
# 920 "data/maps/DLC/scripts.pory"
	.string "None$"

MoneyTipBook_Text_8:
# 925 "data/maps/DLC/scripts.pory"
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
# 935 "data/maps/DLC/scripts.pory"
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
# 947 "data/maps/DLC/scripts.pory"
	.string "Now this is where the real money flows\n"
	.string "in!\p"
	.string "It's only been a year since the war, and\n"
	.string "Hoenn is still full of stuff people\l"
	.string "dropped during the chaos.\p"
	.string "Now, you can comb the ground of Hoenn\n"
	.string "till your hair turns grey, or you can get\l"
	.string "your hands on an {COLOR BLUE}Object Spotter{COLOR DARK_GRAY}.\p"
	.string "It's an ugly pair of goggles that does\n"
	.string "the spotting for you!\p"
	.string "They are expensive, and due to some\n"
	.string "nonsense anti-theft feature, they\l"
	.string "don't work indoors...\p"
	.string "But if you want not only to survive, but\n"
	.string "THRIVE... it's a pretty worthy\l"
	.string "investment!$"

MoneyTipBook_Text_11:
# 958 "data/maps/DLC/scripts.pory"
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
# 968 "data/maps/DLC/scripts.pory"
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

DLCTrashBin_Text_0:
# 988 "data/maps/DLC/scripts.pory"
	.string "Seems like a picky eater has hidden\n"
	.string "something in the trash...$"

DLCTrashBin_Text_1:
# 992 "data/maps/DLC/scripts.pory"
	.string "The trash can is empty.$"
