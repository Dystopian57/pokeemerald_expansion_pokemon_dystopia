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
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 38 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 39 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleDLC_GoToSeatForTherapyLeft_Movement_0
# 40 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 41 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 42 "data/maps/DLC/scripts.pory"
	msgbox OldaleDLC_GoToSeatForTherapyLeft_Text_0
# 43 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleDLC_GoToSeatForTherapyRight_Movement_0
# 44 "data/maps/DLC/scripts.pory"
	goto starttherapycutscene
	return


OldaleTown_DLC_TherapyCutscene::
# 48 "data/maps/DLC/scripts.pory"
starttherapycutscene:
# 49 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_0
# 51 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_VENUSAUR, 10, 3
# 53 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_1
# 54 "data/maps/DLC/scripts.pory"
	hidemonpic
# 55 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_2
# 56 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_DLC_TherapyCutscene_Text_3, OldaleTown_DLC_TherapyCutscene_Text_4, OldaleTown_DLC_TherapyCutscene_Text_5
# 57 "data/maps/DLC/scripts.pory"
	hidemonpic
# 58 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 59 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_0
# 60 "data/maps/DLC/scripts.pory"
	waitmovement
# 62 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_DLC_TherapyCutscene_2
OldaleTown_DLC_TherapyCutscene_1:
# 66 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_DLC_TherapyCutscene_5
OldaleTown_DLC_TherapyCutscene_4:
# 70 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldaleTown_DLC_TherapyCutscene_8
OldaleTown_DLC_TherapyCutscene_7:
# 74 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 75 "data/maps/DLC/scripts.pory"
	waitmovement
# 76 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_9
# 78 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_2
# 79 "data/maps/DLC/scripts.pory"
	waitmovement
# 80 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_10
# 82 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 83 "data/maps/DLC/scripts.pory"
	waitmovement
# 84 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_CHARIZARD, 10, 3
# 86 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_11
# 87 "data/maps/DLC/scripts.pory"
	hidemonpic
# 88 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 89 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_0
# 90 "data/maps/DLC/scripts.pory"
	waitmovement
# 91 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_12
# 93 "data/maps/DLC/scripts.pory"
	playse SE_M_METRONOME
# 94 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_4
# 95 "data/maps/DLC/scripts.pory"
	waitmovement
# 96 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 97 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 98 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_13
# 100 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 101 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_5
# 102 "data/maps/DLC/scripts.pory"
	waitmovement
# 103 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 104 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_14
# 106 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 107 "data/maps/DLC/scripts.pory"
	waitmovement
# 108 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_15
# 109 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BLASTOISE, 10, 3
# 111 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 112 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_16
# 113 "data/maps/DLC/scripts.pory"
	hidemonpic
# 115 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 116 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_7
# 117 "data/maps/DLC/scripts.pory"
	waitmovement
# 118 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_17
# 120 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_1
# 121 "data/maps/DLC/scripts.pory"
	waitmovement
# 122 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_18
# 126 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 127 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_0
# 128 "data/maps/DLC/scripts.pory"
	waitmovement
# 129 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 130 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 131 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 132 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_19
# 134 "data/maps/DLC/scripts.pory"
	playse SE_PIN
# 136 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 137 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 138 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 139 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_8
# 140 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_20
# 142 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 143 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_9
# 144 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 145 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_21
# 147 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 148 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 149 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 150 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_22
# 151 "data/maps/DLC/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 153 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 154 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 155 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 156 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_10
# 157 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_23
# 158 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 159 "data/maps/DLC/scripts.pory"
	setspeaker NULL
# 160 "data/maps/DLC/scripts.pory"
	applymovement 1, OldaleTown_DLC_TherapyCutscene_Movement_11
# 161 "data/maps/DLC/scripts.pory"
	playse SE_FLEE
# 162 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_24
# 163 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_12
# 164 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_13
# 165 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_12
# 166 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_13
# 167 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 168 "data/maps/DLC/scripts.pory"
	waitse
# 169 "data/maps/DLC/scripts.pory"
	playse SE_M_METRONOME
# 170 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_14
# 171 "data/maps/DLC/scripts.pory"
	waitmovement
# 172 "data/maps/DLC/scripts.pory"
	waitse
# 173 "data/maps/DLC/scripts.pory"
	removeobject 1
# 174 "data/maps/DLC/scripts.pory"
	waitmovement
# 175 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 176 "data/maps/DLC/scripts.pory"
	waitmovement
# 177 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 178 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 179 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 180 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 181 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_25
# 185 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_15
# 186 "data/maps/DLC/scripts.pory"
	waitmovement
# 187 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_16
# 188 "data/maps/DLC/scripts.pory"
	waitmovement
# 189 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 190 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 191 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_26
# 192 "data/maps/DLC/scripts.pory"
	closemessage
# 193 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 194 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_17
# 195 "data/maps/DLC/scripts.pory"
	waitmovement 2
# 196 "data/maps/DLC/scripts.pory"
	removeobject 2
# 197 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
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
	fadeoutbgm 1
# 220 "data/maps/DLC/scripts.pory"
	fadeinbgm 1
# 221 "data/maps/DLC/scripts.pory"
	playbgm MUS_UNKNOWN5, TRUE
# 222 "data/maps/DLC/scripts.pory"
	releaseall
	return

OldaleTown_DLC_TherapyCutscene_2:
# 63 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_6
	goto OldaleTown_DLC_TherapyCutscene_1

OldaleTown_DLC_TherapyCutscene_5:
# 67 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_7
	goto OldaleTown_DLC_TherapyCutscene_4

OldaleTown_DLC_TherapyCutscene_8:
# 71 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_8
	goto OldaleTown_DLC_TherapyCutscene_7


LittleKidDLC::
# 227 "data/maps/DLC/scripts.pory"
	lockall
# 228 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 229 "data/maps/DLC/scripts.pory"
	applymovement 5, LittleKidDLC_Movement_0
# 232 "data/maps/DLC/scripts.pory"
	checkplayergender
# 233 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittleKidDLC_2
LittleKidDLC_1:
# 236 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittleKidDLC_5
LittleKidDLC_4:
# 239 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3
# 240 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittleKidDLC_8
LittleKidDLC_7:
# 249 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittleKidDLC_11
LittleKidDLC_10:
# 252 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 253 "data/maps/DLC/scripts.pory"
	waitmovement 5
# 254 "data/maps/DLC/scripts.pory"
	releaseall
	return

LittleKidDLC_2:
# 234 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_0
	goto LittleKidDLC_1

LittleKidDLC_5:
# 237 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_1
	goto LittleKidDLC_4

LittleKidDLC_8:
# 241 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 242 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_4
# 245 "data/maps/DLC/scripts.pory"
	hidemonpic
# 246 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_5
	goto LittleKidDLC_7

LittleKidDLC_11:
# 250 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_6
	goto LittleKidDLC_10


FatManDLCAfterClass::
# 258 "data/maps/DLC/scripts.pory"
	lock
# 259 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 260 "data/maps/DLC/scripts.pory"
	applymovement 15, LittleKidDLC_Movement_0
# 261 "data/maps/DLC/scripts.pory"
	msgbox FatManDLCAfterClass_Text_0
# 263 "data/maps/DLC/scripts.pory"
	applymovement 15, OldaleTown_DLC_TherapyCutscene_Movement_15
# 264 "data/maps/DLC/scripts.pory"
	waitmovement 15
# 265 "data/maps/DLC/scripts.pory"
	releaseall
	return


FatManDLC::
# 269 "data/maps/DLC/scripts.pory"
	lock
# 270 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 271 "data/maps/DLC/scripts.pory"
	applymovement 7, LittleKidDLC_Movement_0
# 272 "data/maps/DLC/scripts.pory"
	msgbox FatManDLC_Text_0
# 274 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 275 "data/maps/DLC/scripts.pory"
	waitmovement 7
# 276 "data/maps/DLC/scripts.pory"
	releaseall
	return


ObsessedGirlDLC::
# 282 "data/maps/DLC/scripts.pory"
	lock
# 283 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 284 "data/maps/DLC/scripts.pory"
	applymovement 12, LittleKidDLC_Movement_0
# 285 "data/maps/DLC/scripts.pory"
	msgbox ObsessedGirlDLC_Text_0
# 289 "data/maps/DLC/scripts.pory"
	applymovement 12, OldaleTown_DLC_TherapyCutscene_Movement_15
# 290 "data/maps/DLC/scripts.pory"
	waitmovement 12
# 291 "data/maps/DLC/scripts.pory"
	playfirstmoncry
# 292 "data/maps/DLC/scripts.pory"
	msgbox ObsessedGirlDLC_Text_1
# 293 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLCAfterClass::
# 297 "data/maps/DLC/scripts.pory"
	lock
# 298 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 299 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 300 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLCAfterClass_Text_0
# 301 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 302 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 303 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLC::
# 307 "data/maps/DLC/scripts.pory"
	lock
# 308 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 309 "data/maps/DLC/scripts.pory"
	applymovement 4, LittleKidDLC_Movement_0
# 310 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLC_Text_0
# 311 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 312 "data/maps/DLC/scripts.pory"
	waitmovement 4
# 313 "data/maps/DLC/scripts.pory"
	releaseall
	return


GirlNotebookDLC::
# 317 "data/maps/DLC/scripts.pory"
	lock
# 318 "data/maps/DLC/scripts.pory"
	msgbox GirlNotebookDLC_Text_0
# 320 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingBoyNotebookDLC::
# 324 "data/maps/DLC/scripts.pory"
	lock
# 325 "data/maps/DLC/scripts.pory"
	msgbox SleepingBoyNotebookDLC_Text_0
# 326 "data/maps/DLC/scripts.pory"
	releaseall
	return


OldManDLC::
# 330 "data/maps/DLC/scripts.pory"
	lock
# 331 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 332 "data/maps/DLC/scripts.pory"
	applymovement 8, LittleKidDLC_Movement_0
# 333 "data/maps/DLC/scripts.pory"
	msgbox OldManDLC_Text_0
# 336 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 337 "data/maps/DLC/scripts.pory"
	waitmovement 8
# 338 "data/maps/DLC/scripts.pory"
	releaseall
	return


SnorlaxKidNotebookDLC::
# 343 "data/maps/DLC/scripts.pory"
	lock
# 344 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 345 "data/maps/DLC/scripts.pory"
	msgbox SnorlaxKidNotebookDLC_Text_0
# 347 "data/maps/DLC/scripts.pory"
	hidemonpic
# 348 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherDLC::
# 353 "data/maps/DLC/scripts.pory"
	lockall
# 354 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 355 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 356 "data/maps/DLC/scripts.pory"
	msgbox TeacherDLC_Text_0
# 358 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 359 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 360 "data/maps/DLC/scripts.pory"
	releaseall
	return


LibraryGuyDLC::
# 365 "data/maps/DLC/scripts.pory"
	lockall
# 366 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 367 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 368 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_0
# 369 "data/maps/DLC/scripts.pory"
loantypechoicewithtext:
# 370 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_1
# 371 "data/maps/DLC/scripts.pory"
loantypechoice:
# 372 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_2, LibraryGuyDLC_Text_3, LibraryGuyDLC_Text_4, LibraryGuyDLC_Text_5
# 375 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_2
LibraryGuyDLC_1:
# 566 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_5
LibraryGuyDLC_4:
# 748 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_11
LibraryGuyDLC_10:
# 757 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_23
LibraryGuyDLC_22:
# 760 "data/maps/DLC/scripts.pory"
finishloanscript:
# 761 "data/maps/DLC/scripts.pory"
	closemessage
# 762 "data/maps/DLC/scripts.pory"
	releaseall
	return

LibraryGuyDLC_2:
# 380 "data/maps/DLC/scripts.pory"
	goto_if_set loanedfirebook, LibraryGuyDLC_8
LibraryGuyDLC_7:
# 427 "data/maps/DLC/scripts.pory"
	goto_if_set loanedgrassbook, LibraryGuyDLC_17
LibraryGuyDLC_16:
# 475 "data/maps/DLC/scripts.pory"
	goto_if_set loanedelectricbook, LibraryGuyDLC_32
LibraryGuyDLC_31:
# 521 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedfirebook, LibraryGuyDLC_50
# 521 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedgrassbook, LibraryGuyDLC_50
# 521 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedelectricbook, LibraryGuyDLC_50
LibraryGuyDLC_49:
# 540 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_79
LibraryGuyDLC_78:
# 549 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_103
LibraryGuyDLC_102:
# 558 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_128
	goto LibraryGuyDLC_1

LibraryGuyDLC_5:
# 571 "data/maps/DLC/scripts.pory"
	goto_if_set loanedprotectTM, LibraryGuyDLC_14
LibraryGuyDLC_13:
# 617 "data/maps/DLC/scripts.pory"
	goto_if_set loanedsafeguardTM, LibraryGuyDLC_26
LibraryGuyDLC_25:
# 664 "data/maps/DLC/scripts.pory"
	goto_if_set loanedreflectTM, LibraryGuyDLC_41
LibraryGuyDLC_40:
# 711 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedprotectTM, LibraryGuyDLC_64
# 711 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedsafeguardTM, LibraryGuyDLC_64
# 711 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedreflectTM, LibraryGuyDLC_64
	goto LibraryGuyDLC_4

LibraryGuyDLC_8:
# 381 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_6
# 383 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 385 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_20
LibraryGuyDLC_19:
# 392 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_38
LibraryGuyDLC_37:
# 397 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_62
	goto LibraryGuyDLC_7

LibraryGuyDLC_11:
# 749 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_38
# 754 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_10

LibraryGuyDLC_14:
# 572 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_28
# 574 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 576 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_29
LibraryGuyDLC_28:
# 583 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_47
LibraryGuyDLC_46:
# 588 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_76
	goto LibraryGuyDLC_13

LibraryGuyDLC_17:
# 428 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 430 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 432 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_35
LibraryGuyDLC_34:
# 439 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_60
LibraryGuyDLC_59:
# 444 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_86
	goto LibraryGuyDLC_16

LibraryGuyDLC_20:
# 386 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 387 "data/maps/DLC/scripts.pory"
	removeitem ITEM_FLAME_PLATE
# 388 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 389 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_19

LibraryGuyDLC_23:
# 758 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_39
	goto LibraryGuyDLC_22

LibraryGuyDLC_26:
# 618 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_31
# 620 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 622 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_44
LibraryGuyDLC_43:
# 629 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_74
LibraryGuyDLC_73:
# 634 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_97
	goto LibraryGuyDLC_25

LibraryGuyDLC_29:
# 577 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 578 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_PROTECT
# 579 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 580 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_28

LibraryGuyDLC_32:
# 476 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 478 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 480 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_57
LibraryGuyDLC_56:
# 487 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_84
LibraryGuyDLC_83:
# 492 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_105
	goto LibraryGuyDLC_31

LibraryGuyDLC_35:
# 433 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 434 "data/maps/DLC/scripts.pory"
	removeitem ITEM_MEADOW_PLATE
# 435 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 436 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_34

LibraryGuyDLC_38:
# 393 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 394 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_37

LibraryGuyDLC_41:
# 665 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_32
# 667 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 669 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_71
LibraryGuyDLC_70:
# 676 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_95
LibraryGuyDLC_94:
# 681 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_118
	goto LibraryGuyDLC_40

LibraryGuyDLC_44:
# 623 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 624 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_SAFEGUARD
# 625 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 626 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_43

LibraryGuyDLC_47:
# 584 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 585 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_46

LibraryGuyDLC_50:
# 524 "data/maps/DLC/scripts.pory"
loanbookoffer:
# 525 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_18
# 527 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_19, LibraryGuyDLC_Text_20, LibraryGuyDLC_Text_21, LibraryGuyDLC_Text_22
# 529 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_81
	goto LibraryGuyDLC_49

LibraryGuyDLC_57:
# 481 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 482 "data/maps/DLC/scripts.pory"
	removeitem ITEM_ZAP_PLATE
# 483 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 484 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_56

LibraryGuyDLC_60:
# 440 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 441 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_59

LibraryGuyDLC_62:
# 398 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 401 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 402 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_89
LibraryGuyDLC_88:
# 418 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_110
	goto LibraryGuyDLC_7

LibraryGuyDLC_64:
# 713 "data/maps/DLC/scripts.pory"
loantmoffer:
# 714 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_33
# 715 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_34, LibraryGuyDLC_Text_35, LibraryGuyDLC_Text_36, LibraryGuyDLC_Text_22
# 716 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_92
LibraryGuyDLC_91:
# 725 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_116
LibraryGuyDLC_115:
# 734 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_141
LibraryGuyDLC_140:
# 743 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_160
	goto LibraryGuyDLC_4

LibraryGuyDLC_71:
# 670 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 671 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_REFLECT
# 672 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 673 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_70

LibraryGuyDLC_74:
# 630 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 631 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_73

LibraryGuyDLC_76:
# 589 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 592 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 593 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_100
LibraryGuyDLC_99:
# 609 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_123
	goto LibraryGuyDLC_13

LibraryGuyDLC_79:
# 541 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_25
# 542 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 543 "data/maps/DLC/scripts.pory"
	giveitem ITEM_MEADOW_PLATE
# 544 "data/maps/DLC/scripts.pory"
	setflag loanedgrassbook
# 545 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 546 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_78

LibraryGuyDLC_81:
# 530 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_23
# 531 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_16
# 532 "data/maps/DLC/scripts.pory"
	waitmovement
# 533 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 534 "data/maps/DLC/scripts.pory"
	giveitem ITEM_FLAME_PLATE
# 535 "data/maps/DLC/scripts.pory"
	setflag loanedfirebook
# 536 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 537 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_49

LibraryGuyDLC_84:
# 488 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 489 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_83

LibraryGuyDLC_86:
# 445 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 448 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 449 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_108
LibraryGuyDLC_107:
# 465 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_133
	goto LibraryGuyDLC_16

LibraryGuyDLC_89:
# 403 "data/maps/DLC/scripts.pory"
	checkmoney 5000
# 404 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_113
LibraryGuyDLC_112:
# 412 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_138
	goto LibraryGuyDLC_88

LibraryGuyDLC_92:
# 717 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 718 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 719 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_PROTECT
# 720 "data/maps/DLC/scripts.pory"
	setflag loanedprotectTM
# 721 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 722 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_91

LibraryGuyDLC_95:
# 677 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 678 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_94

LibraryGuyDLC_97:
# 635 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 638 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 639 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_121
LibraryGuyDLC_120:
# 655 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_146
	goto LibraryGuyDLC_25

LibraryGuyDLC_100:
# 594 "data/maps/DLC/scripts.pory"
	checkmoney 5000
# 595 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_126
LibraryGuyDLC_125:
# 603 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_151
	goto LibraryGuyDLC_99

LibraryGuyDLC_103:
# 550 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 551 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 552 "data/maps/DLC/scripts.pory"
	giveitem ITEM_ZAP_PLATE
# 553 "data/maps/DLC/scripts.pory"
	setflag loanedelectricbook
# 554 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 555 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_102

LibraryGuyDLC_105:
# 493 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 496 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 497 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_131
LibraryGuyDLC_130:
# 513 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_153
	goto LibraryGuyDLC_31

LibraryGuyDLC_108:
# 450 "data/maps/DLC/scripts.pory"
	checkmoney 5000
# 451 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_136
LibraryGuyDLC_135:
# 459 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_158
	goto LibraryGuyDLC_107

LibraryGuyDLC_110:
# 419 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 420 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_7

LibraryGuyDLC_113:
# 405 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 406 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 408 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 409 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_112

LibraryGuyDLC_116:
# 726 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 727 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 728 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_SAFEGUARD
# 729 "data/maps/DLC/scripts.pory"
	setflag loanedsafeguardTM
# 730 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 731 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_115

LibraryGuyDLC_118:
# 682 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 685 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 686 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_144
LibraryGuyDLC_143:
# 702 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_162
	goto LibraryGuyDLC_40

LibraryGuyDLC_121:
# 640 "data/maps/DLC/scripts.pory"
	checkmoney 5000
# 641 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_149
LibraryGuyDLC_148:
# 649 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_167
	goto LibraryGuyDLC_120

LibraryGuyDLC_123:
# 610 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 611 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_13

LibraryGuyDLC_126:
# 596 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 597 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 599 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 600 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_125

LibraryGuyDLC_128:
# 559 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 560 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_1

LibraryGuyDLC_131:
# 498 "data/maps/DLC/scripts.pory"
	checkmoney 5000
# 499 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_156
LibraryGuyDLC_155:
# 507 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_169
	goto LibraryGuyDLC_130

LibraryGuyDLC_133:
# 466 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 467 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_16

LibraryGuyDLC_136:
# 452 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 453 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 455 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 456 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_135

LibraryGuyDLC_138:
# 413 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 415 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_88

LibraryGuyDLC_141:
# 735 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 736 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 737 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_REFLECT
# 738 "data/maps/DLC/scripts.pory"
	setflag loanedreflectTM
# 739 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 740 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_140

LibraryGuyDLC_144:
# 687 "data/maps/DLC/scripts.pory"
	checkmoney 5000
# 688 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_165
LibraryGuyDLC_164:
# 696 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_171
	goto LibraryGuyDLC_143

LibraryGuyDLC_146:
# 656 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 657 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_25

LibraryGuyDLC_149:
# 642 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 643 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 645 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 646 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_148

LibraryGuyDLC_151:
# 604 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 606 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_99

LibraryGuyDLC_153:
# 514 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 515 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_31

LibraryGuyDLC_156:
# 500 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 501 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 503 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 504 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_155

LibraryGuyDLC_158:
# 460 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 462 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_107

LibraryGuyDLC_160:
# 744 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 745 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_4

LibraryGuyDLC_162:
# 703 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 704 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_40

LibraryGuyDLC_165:
# 689 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 690 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 692 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 693 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_164

LibraryGuyDLC_167:
# 650 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 652 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_120

LibraryGuyDLC_169:
# 508 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 510 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_130

LibraryGuyDLC_171:
# 697 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 699 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_143


OLDLibraryGuyDLC::
# 767 "data/maps/DLC/scripts.pory"
	lockall
# 768 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 769 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 770 "data/maps/DLC/scripts.pory"
	msgbox OLDLibraryGuyDLC_Text_0
# 772 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 773 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherdeskDLC::
# 777 "data/maps/DLC/scripts.pory"
	lockall
# 778 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BURMY_TRASH, 10, 3
# 779 "data/maps/DLC/scripts.pory"
	msgbox TeacherdeskDLC_Text_0
# 781 "data/maps/DLC/scripts.pory"
	hidemonpic
# 782 "data/maps/DLC/scripts.pory"
	releaseall
	return


BlackBoardDLC::
# 786 "data/maps/DLC/scripts.pory"
	lockall
# 787 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 788 "data/maps/DLC/scripts.pory"
	goto_if_set DLCmathresolved, BlackBoardDLC_2
BlackBoardDLC_1:
# 793 "data/maps/DLC/scripts.pory"
	goto_if_unset DLCmathresolved, BlackBoardDLC_4
	return

BlackBoardDLC_2:
# 789 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_0
# 790 "data/maps/DLC/scripts.pory"
	goto endofDLCteacherscript
# 791 "data/maps/DLC/scripts.pory"
	release
	goto BlackBoardDLC_1

BlackBoardDLC_4:
# 794 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_1
# 796 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_2
# 797 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, BlackBoardDLC_Text_3, BlackBoardDLC_Text_4, BlackBoardDLC_Text_5, OldaleTown_DLC_TherapyCutscene_Text_5
# 798 "data/maps/DLC/scripts.pory"
	waitmessage
# 800 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackBoardDLC_7
BlackBoardDLC_6:
# 814 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackBoardDLC_10
BlackBoardDLC_9:
# 832 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_13
BlackBoardDLC_12:
# 844 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_16
BlackBoardDLC_15:
# 847 "data/maps/DLC/scripts.pory"
endofDLCteacherscript:
# 848 "data/maps/DLC/scripts.pory"
	releaseall
	return

BlackBoardDLC_7:
# 801 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_6
# 802 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 803 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 804 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 805 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 807 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 808 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 809 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 810 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 811 "data/maps/DLC/scripts.pory"
	goto endofDLCteacherscript
	goto BlackBoardDLC_6

BlackBoardDLC_10:
# 815 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_8
# 816 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 817 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 819 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_9
# 820 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 821 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 822 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_6
# 823 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_10
# 825 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 826 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 827 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 828 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 829 "data/maps/DLC/scripts.pory"
	setflag DLCmathresolved
	goto BlackBoardDLC_9

BlackBoardDLC_13:
# 833 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_11
# 834 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 835 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 836 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 837 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 839 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 840 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 841 "data/maps/DLC/scripts.pory"
	waitmovement 14
	goto BlackBoardDLC_12

BlackBoardDLC_16:
# 845 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_12
	goto BlackBoardDLC_15


OpenBoxDLC::
# 852 "data/maps/DLC/scripts.pory"
	lock
# 853 "data/maps/DLC/scripts.pory"
	msgbox OpenBoxDLC_Text_0
# 856 "data/maps/DLC/scripts.pory"
	releaseall
	return


PosterDLC::
# 861 "data/maps/DLC/scripts.pory"
	lock
# 862 "data/maps/DLC/scripts.pory"
	msgbox PosterDLC_Text_0
# 864 "data/maps/DLC/scripts.pory"
	releaseall
	return


RulesDLC::
# 868 "data/maps/DLC/scripts.pory"
	lock
# 869 "data/maps/DLC/scripts.pory"
	msgbox RulesDLC_Text_0
# 872 "data/maps/DLC/scripts.pory"
	releaseall
	return


BoardDLC::
# 876 "data/maps/DLC/scripts.pory"
	lock
# 877 "data/maps/DLC/scripts.pory"
	msgbox BoardDLC_Text_0
# 879 "data/maps/DLC/scripts.pory"
	releaseall
	return


PCDLC::
# 883 "data/maps/DLC/scripts.pory"
	lock
# 884 "data/maps/DLC/scripts.pory"
	msgbox PCDLC_Text_0
# 885 "data/maps/DLC/scripts.pory"
	releaseall
	return


BookshelfDLC::
# 889 "data/maps/DLC/scripts.pory"
	lock
# 890 "data/maps/DLC/scripts.pory"
	msgbox BookshelfDLC_Text_0
# 891 "data/maps/DLC/scripts.pory"
	releaseall
	return


HangerDLC::
# 895 "data/maps/DLC/scripts.pory"
	lock
# 896 "data/maps/DLC/scripts.pory"
	msgbox HangerDLC_Text_0
# 897 "data/maps/DLC/scripts.pory"
	releaseall
	return


BookPileDLC::
# 902 "data/maps/DLC/scripts.pory"
	lock
# 903 "data/maps/DLC/scripts.pory"
	msgbox BookPileDLC_Text_0
# 904 "data/maps/DLC/scripts.pory"
	releaseall
	return


MauvillePosterDLC::
# 908 "data/maps/DLC/scripts.pory"
	lock
# 909 "data/maps/DLC/scripts.pory"
	msgbox MauvillePosterDLC_Text_0
# 911 "data/maps/DLC/scripts.pory"
	releaseall
	return


TVDLC::
# 915 "data/maps/DLC/scripts.pory"
	lock
# 916 "data/maps/DLC/scripts.pory"
	msgbox TVDLC_Text_0
# 920 "data/maps/DLC/scripts.pory"
	releaseall
	return


DLCSealedBox::
# 924 "data/maps/DLC/scripts.pory"
	lockall
# 925 "data/maps/DLC/scripts.pory"
	msgbox DLCSealedBox_Text_0
# 926 "data/maps/DLC/scripts.pory"
	releaseall
	return


MoneyTipBook::
# 931 "data/maps/DLC/scripts.pory"
	lock
# 932 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BASCULIN_BLUE_STRIPED, 10, 3
# 933 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_0
# 934 "data/maps/DLC/scripts.pory"
moneychapterselection:
# 935 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BASCULIN_BLUE_STRIPED, 10, 3
# 937 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_1
# 938 "data/maps/DLC/scripts.pory"
	hidemonpic
# 939 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, MoneyTipBook_Text_2, MoneyTipBook_Text_3, MoneyTipBook_Text_4, MoneyTipBook_Text_5, MoneyTipBook_Text_6, MoneyTipBook_Text_7
# 942 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoneyTipBook_2
MoneyTipBook_1:
# 952 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoneyTipBook_5
MoneyTipBook_4:
# 964 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoneyTipBook_8
MoneyTipBook_7:
# 975 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MoneyTipBook_11
MoneyTipBook_10:
# 985 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoneyTipBook_14
MoneyTipBook_13:
# 997 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MoneyTipBook_17
MoneyTipBook_16:
# 999 "data/maps/DLC/scripts.pory"
	hidemonpic
# 1000 "data/maps/DLC/scripts.pory"
	releaseall
	return

MoneyTipBook_2:
# 943 "data/maps/DLC/scripts.pory"
	hidemonpic
# 944 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_8
# 949 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_1

MoneyTipBook_5:
# 953 "data/maps/DLC/scripts.pory"
	hidemonpic
# 954 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_9
# 961 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_4

MoneyTipBook_8:
# 965 "data/maps/DLC/scripts.pory"
	hidemonpic
# 966 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_10
# 972 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_7

MoneyTipBook_11:
# 976 "data/maps/DLC/scripts.pory"
	hidemonpic
# 977 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_11
# 982 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_10

MoneyTipBook_14:
# 986 "data/maps/DLC/scripts.pory"
	hidemonpic
# 987 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_12
# 994 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_13

MoneyTipBook_17:
	goto MoneyTipBook_16


DLCTrashBin::
# 1005 "data/maps/DLC/scripts.pory"
	lock
# 1006 "data/maps/DLC/scripts.pory"
	goto_if_unset FLAG_ITEM_DLC_TRASHBIN, DLCTrashBin_2
# 1011 "data/maps/DLC/scripts.pory"
	msgbox DLCTrashBin_Text_1
DLCTrashBin_1:
# 1012 "data/maps/DLC/scripts.pory"
	releaseall
	return

DLCTrashBin_2:
# 1007 "data/maps/DLC/scripts.pory"
	msgbox DLCTrashBin_Text_0
# 1008 "data/maps/DLC/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
# 1009 "data/maps/DLC/scripts.pory"
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

# 43 "data/maps/DLC/scripts.pory"
OldaleDLC_GoToSeatForTherapyRight_Movement_0:
# 43 "data/maps/DLC/scripts.pory"
	walk_up
# 43 "data/maps/DLC/scripts.pory"
	walk_right
# 43 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 59 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_0:
# 59 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 59 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 59 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 74 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_1:
# 74 "data/maps/DLC/scripts.pory"
	walk_in_place_down
# 74 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 78 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_2:
# 78 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 78 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 82 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_3:
# 82 "data/maps/DLC/scripts.pory"
	walk_in_place_down
	step_end

# 94 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_4:
# 94 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 94 "data/maps/DLC/scripts.pory"
	walk_in_place_up
# 94 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 101 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_5:
# 101 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 101 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 111 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_6:
# 111 "data/maps/DLC/scripts.pory"
	face_up
	step_end

# 116 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_7:
# 116 "data/maps/DLC/scripts.pory"
	emote_exclamation_mark
# 116 "data/maps/DLC/scripts.pory"
	walk_in_place_up
	step_end

# 139 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_8:
# 139 "data/maps/DLC/scripts.pory"
	face_left
# 139 "data/maps/DLC/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 143 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_9:
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
# 143 "data/maps/DLC/scripts.pory"
	walk_in_place_left
	step_end

# 156 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_10:
# 156 "data/maps/DLC/scripts.pory"
	jump_in_place_up
# 156 "data/maps/DLC/scripts.pory"
	jump_in_place_up
	step_end

# 160 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_11:
# 160 "data/maps/DLC/scripts.pory"
	walk_fast_left
# 160 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 160 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 160 "data/maps/DLC/scripts.pory"
	walk_fast_down
# 160 "data/maps/DLC/scripts.pory"
	walk_fast_down
	step_end

# 163 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_12:
# 163 "data/maps/DLC/scripts.pory"
	face_left
# 163 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 164 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_13:
# 164 "data/maps/DLC/scripts.pory"
	face_right
# 164 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 170 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_14:
# 170 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 170 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 185 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_15:
# 185 "data/maps/DLC/scripts.pory"
	face_right
	step_end

# 187 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_16:
# 187 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 194 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_17:
# 194 "data/maps/DLC/scripts.pory"
	walk_right
# 194 "data/maps/DLC/scripts.pory"
	walk_down
# 194 "data/maps/DLC/scripts.pory"
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

# 229 "data/maps/DLC/scripts.pory"
LittleKidDLC_Movement_0:
# 229 "data/maps/DLC/scripts.pory"
	face_player
	step_end

# 358 "data/maps/DLC/scripts.pory"
TeacherDLC_Movement_0:
# 358 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 542 "data/maps/DLC/scripts.pory"
LibraryGuyDLC_Movement_0:
# 542 "data/maps/DLC/scripts.pory"
	face_left
# 542 "data/maps/DLC/scripts.pory"
	face_up
	step_end

OldaleDLC_GoToSeatForTherapyLeft_Text_0:
# 30 "data/maps/DLC/scripts.pory"
	.string "Ah, there you are... {PLAYER}, is it?\p"
	.string "Please sit down - we were just starting.$"

OldaleTown_DLC_TherapyCutscene_Text_0:
# 49 "data/maps/DLC/scripts.pory"
	.string "As I was saying, we are going to start\n"
	.string "by watching some pictures of Kantonian\l"
	.string "Pokémon, and sharing what feelings\l"
	.string "they evoke in us.$"

OldaleTown_DLC_TherapyCutscene_Text_1:
# 53 "data/maps/DLC/scripts.pory"
	.string "Let's begin with you, {PLAYER}. Take a\n"
	.string "look at this picture.$"

OldaleTown_DLC_TherapyCutscene_Text_2:
# 55 "data/maps/DLC/scripts.pory"
	.string "What do you think about the Pokémon in\n"
	.string "it?$"

OldaleTown_DLC_TherapyCutscene_Text_3:
# 56 "data/maps/DLC/scripts.pory"
	.string "It's cool$"

OldaleTown_DLC_TherapyCutscene_Text_4:
# 56 "data/maps/DLC/scripts.pory"
	.string "Looks dangerous$"

OldaleTown_DLC_TherapyCutscene_Text_5:
# 56 "data/maps/DLC/scripts.pory"
	.string "I don't know$"

OldaleTown_DLC_TherapyCutscene_Text_6:
# 63 "data/maps/DLC/scripts.pory"
	.string "Cool!? That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_7:
# 67 "data/maps/DLC/scripts.pory"
	.string "I agree! That Pokémon poisoned my\n"
	.string "daugther during the war! It's horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_8:
# 71 "data/maps/DLC/scripts.pory"
	.string "Well, I do know! That Pokémon poisoned\n"
	.string "my daugther during the war! It's\l"
	.string "horrible!$"

OldaleTown_DLC_TherapyCutscene_Text_9:
# 76 "data/maps/DLC/scripts.pory"
	.string "You are correct, sir... Venusaurs are\n"
	.string "very dangerous.\p"
	.string "Thankfully, Devon Co. has safened all\n"
	.string "Bulbasaurs in Hoenn to Bulbasynths, so\l"
	.string "that they hurt no more people.$"

OldaleTown_DLC_TherapyCutscene_Text_10:
# 80 "data/maps/DLC/scripts.pory"
	.string "Ah, thank goodness...$"

OldaleTown_DLC_TherapyCutscene_Text_11:
# 86 "data/maps/DLC/scripts.pory"
	.string "Let's continue... who wants to share\n"
	.string "their thoughts about this one?$"

OldaleTown_DLC_TherapyCutscene_Text_12:
# 91 "data/maps/DLC/scripts.pory"
	.string "O-oh, that one... one of those burned my\n"
	.string "house! It's awful...$"

OldaleTown_DLC_TherapyCutscene_Text_13:
# 98 "data/maps/DLC/scripts.pory"
	.string "Awful? That's a Charizard, a splendid\n"
	.string "Fire type.$"

OldaleTown_DLC_TherapyCutscene_Text_14:
# 104 "data/maps/DLC/scripts.pory"
	.string "S-splendid?$"

OldaleTown_DLC_TherapyCutscene_Text_15:
# 108 "data/maps/DLC/scripts.pory"
	.string "Now now, let us be tolerant with...\n"
	.string "differences of opinion.$"

OldaleTown_DLC_TherapyCutscene_Text_16:
# 112 "data/maps/DLC/scripts.pory"
	.string "Let's see about the last one - the\n"
	.string "water CANNON Pokémon, Blastoise.$"

OldaleTown_DLC_TherapyCutscene_Text_17:
# 118 "data/maps/DLC/scripts.pory"
	.string "U-uwaah, nooo... t-those are the bad\n"
	.string "turtles...!$"

OldaleTown_DLC_TherapyCutscene_Text_18:
# 122 "data/maps/DLC/scripts.pory"
	.string "Precisely. The Kantonians used many\n"
	.string "Blastoise on the Assault on Route 103,\l"
	.string "and they almost flooded {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}.\p"
	.string "Once more, it was thanks to Devon Co.'s\n"
	.string "swift action, that a flood gate was\l"
	.string "built and...$"

OldaleTown_DLC_TherapyCutscene_Text_19:
# 132 "data/maps/DLC/scripts.pory"
	.string "Did you say Blastoise!? Those are cool\n"
	.string "as heck!\p"
	.string "I love how their Hydro Pumps sound...$"

OldaleTown_DLC_TherapyCutscene_Text_20:
# 140 "data/maps/DLC/scripts.pory"
	.string "BANG BANG!$"

OldaleTown_DLC_TherapyCutscene_Text_21:
# 145 "data/maps/DLC/scripts.pory"
	.string "N-nooo...!!$"

OldaleTown_DLC_TherapyCutscene_Text_22:
# 150 "data/maps/DLC/scripts.pory"
	.string "No? Hmm, you're right... it's not a “bang”\n"
	.string "it's more like a...$"

OldaleTown_DLC_TherapyCutscene_Text_23:
# 157 "data/maps/DLC/scripts.pory"
	.string "BWAHM BWAHM!$"

OldaleTown_DLC_TherapyCutscene_Text_24:
# 162 "data/maps/DLC/scripts.pory"
	.string "AAAAAHH...!!$"

OldaleTown_DLC_TherapyCutscene_Text_25:
# 181 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I think we will finish this\n"
	.string "session early.\p"
	.string "Next time, everyone, please be mindful\n"
	.string "of others' feelings.$"

OldaleTown_DLC_TherapyCutscene_Text_26:
# 191 "data/maps/DLC/scripts.pory"
	.string "Let's go, Sharpy... this was a waste of\n"
	.string "time.$"

LittleKidDLC_Text_0:
# 234 "data/maps/DLC/scripts.pory"
	.string "Hello mister! Want to see my drawing?$"

LittleKidDLC_Text_1:
# 237 "data/maps/DLC/scripts.pory"
	.string "Hello miss! Want to see my drawing?$"

LittleKidDLC_Text_2:
# 239 "data/maps/DLC/scripts.pory"
	.string "Yes$"

LittleKidDLC_Text_3:
# 239 "data/maps/DLC/scripts.pory"
	.string "No$"

LittleKidDLC_Text_4:
# 242 "data/maps/DLC/scripts.pory"
	.string "Look - I drew Munchies! It's my Snorlax!\n"
	.string "Well... it was my Snorlax.\p"
	.string "Munchie used to be small, but then it\n"
	.string "EVOLVED! And mom got scared of it.\p"
	.string "So we said goodbye to Munchy - we\n"
	.string "released him. Munchy and I were very\l"
	.string "sad...$"

LittleKidDLC_Text_5:
# 246 "data/maps/DLC/scripts.pory"
	.string "When I become a trainer, I'll go find him,\n"
	.string "and give him tons of yummy things to\l"
	.string "eat!$"

LittleKidDLC_Text_6:
# 250 "data/maps/DLC/scripts.pory"
	.string "Hehe - okay! Your loss!$"

FatManDLCAfterClass_Text_0:
# 261 "data/maps/DLC/scripts.pory"
	.string "Devon Browser has a function to\n"
	.string "automatically hide all distressing\l"
	.string "content on the web.\p"
	.string "But to cover the cost for it, it also\n"
	.string "replaces said content with ads for\l"
	.string "Devon products.\p"
	.string "It's kind of annoying...$"

FatManDLC_Text_0:
# 272 "data/maps/DLC/scripts.pory"
	.string "I lived in Rustboro, and some fire\n"
	.string "Pokémon burned the apartment building\l"
	.string "I lived in.\p"
	.string "I had to come back here with my\n"
	.string "parents. I miss the city.$"

ObsessedGirlDLC_Text_0:
# 285 "data/maps/DLC/scripts.pory"
	.string "I searched for the origin of the word\n"
	.string "“Pokémon”... and guess what?\p"
	.string "It comes from the old term “Pocket\n"
	.string "Monsters”. They are “monsters”.\p"
	.string "Who thought it was a good idea to live\n"
	.string "with them?\p"
	.string "Please, get that one away from me. I\n"
	.string "don't want to get hurt.$"

ObsessedGirlDLC_Text_1:
# 292 "data/maps/DLC/scripts.pory"
	.string "...$"

SleepingKidDLCAfterClass_Text_0:
# 300 "data/maps/DLC/scripts.pory"
	.string "Since I slept through class, I'm trying\n"
	.string "to catch up...$"

SleepingKidDLC_Text_0:
# 310 "data/maps/DLC/scripts.pory"
	.string "ZZZZ...\n"
	.string "... Huh? Is class over? I think I slept\l"
	.string "through it...$"

GirlNotebookDLC_Text_0:
# 318 "data/maps/DLC/scripts.pory"
	.string "It's the notebook the scared girl left\n"
	.string "behind.\p"
	.string "Next to some classroom notes, there's a\n"
	.string "drawing of a man with a white hat,\l"
	.string "rescuing a little girl from drowning.$"

SleepingBoyNotebookDLC_Text_0:
# 325 "data/maps/DLC/scripts.pory"
	.string "The notebook has barely any notes, and\n"
	.string "is covered in drool.$"

OldManDLC_Text_0:
# 333 "data/maps/DLC/scripts.pory"
	.string "My daugther's health has never been\n"
	.string "the same since she breathed that\l"
	.string "Venusaur's Poison Powder.\p"
	.string "She's been surfing the web as a way to\n"
	.string "distract herself...\p"
	.string "I wish she went out a bit more.$"

SnorlaxKidNotebookDLC_Text_0:
# 345 "data/maps/DLC/scripts.pory"
	.string "It's a drawing of a Snorlax, sleeping\n"
	.string "soundly... while blocking a bridge.$"

TeacherDLC_Text_0:
# 356 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I shouldn't have come to teach\n"
	.string "to this backwater town.\p"
	.string "But the bonus is so juicy...$"

LibraryGuyDLC_Text_0:
# 368 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.$"

LibraryGuyDLC_Text_1:
# 370 "data/maps/DLC/scripts.pory"
	.string "Would you like to loan anything?$"

LibraryGuyDLC_Text_2:
# 372 "data/maps/DLC/scripts.pory"
	.string "Loan a book$"

LibraryGuyDLC_Text_3:
# 372 "data/maps/DLC/scripts.pory"
	.string "Loan a TM$"

LibraryGuyDLC_Text_4:
# 372 "data/maps/DLC/scripts.pory"
	.string "How do loans work?$"

LibraryGuyDLC_Text_5:
# 372 "data/maps/DLC/scripts.pory"
	.string "No, thank you$"

LibraryGuyDLC_Text_6:
# 381 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned “The History of Mt. Chimney”.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_7:
# 383 "data/maps/DLC/scripts.pory"
	.string "I lost it...$"

LibraryGuyDLC_Text_8:
# 386 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new book now!$"

LibraryGuyDLC_Text_9:
# 393 "data/maps/DLC/scripts.pory"
	.string "Understandable! You can return it when\n"
	.string "you've finished with it.$"

LibraryGuyDLC_Text_10:
# 398 "data/maps/DLC/scripts.pory"
	.string "Oh, that's unfortunate...\p"
	.string "If you want to continue loaning, you'll\n"
	.string "need to refund the loss - that would be\l"
	.string "5000¥.$"

LibraryGuyDLC_Text_11:
# 401 "data/maps/DLC/scripts.pory"
	.string "I will pay$"

LibraryGuyDLC_Text_12:
# 401 "data/maps/DLC/scripts.pory"
	.string "Not right now$"

LibraryGuyDLC_Text_13:
# 406 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new book.$"

LibraryGuyDLC_Text_14:
# 413 "data/maps/DLC/scripts.pory"
	.string "You don't seem to have enough funds...\n"
	.string "please return when you procure them!$"

LibraryGuyDLC_Text_15:
# 419 "data/maps/DLC/scripts.pory"
	.string "Very well... we'll eagerly await for your\n"
	.string "refunding.$"

LibraryGuyDLC_Text_16:
# 428 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned “On Fortree's Deforestation”.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_17:
# 476 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned “New Mauville - What Went\l"
	.string "Wrong”.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_18:
# 525 "data/maps/DLC/scripts.pory"
	.string "These are the books we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_19:
# 527 "data/maps/DLC/scripts.pory"
	.string "“The History of Mt. Chimney”$"

LibraryGuyDLC_Text_20:
# 527 "data/maps/DLC/scripts.pory"
	.string "“On Fortree's Deforestation”$"

LibraryGuyDLC_Text_21:
# 527 "data/maps/DLC/scripts.pory"
	.string "“New Mauville - What Went Wrong?”$"

LibraryGuyDLC_Text_22:
# 527 "data/maps/DLC/scripts.pory"
	.string "I changed my mind$"

LibraryGuyDLC_Text_23:
# 530 "data/maps/DLC/scripts.pory"
	.string "Interested in geology? Then this is a\n"
	.string "great pick. Here you go!$"

LibraryGuyDLC_Text_24:
# 536 "data/maps/DLC/scripts.pory"
	.string "Hope you enjoy it! Please return it when\n"
	.string "you're finished with it.$"

LibraryGuyDLC_Text_25:
# 541 "data/maps/DLC/scripts.pory"
	.string "A concerning ecological study - but I\n"
	.string "am sure Devon has plans to avoid the\l"
	.string "worst.$"

LibraryGuyDLC_Text_26:
# 550 "data/maps/DLC/scripts.pory"
	.string "One should learn from the past to avoid\n"
	.string "repeating it... here!$"

LibraryGuyDLC_Text_27:
# 559 "data/maps/DLC/scripts.pory"
	.string "Fair enough. Perhaps you'd like to loan\n"
	.string "something else?$"

LibraryGuyDLC_Text_28:
# 572 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 17 - Protect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_29:
# 577 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new TM now!$"

LibraryGuyDLC_Text_30:
# 597 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new TM.$"

LibraryGuyDLC_Text_31:
# 618 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 20 - Safeguard.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_32:
# 665 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 33 - Reflect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_33:
# 714 "data/maps/DLC/scripts.pory"
	.string "These are the TMs we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_34:
# 715 "data/maps/DLC/scripts.pory"
	.string "'TM 17 - Protect'$"

LibraryGuyDLC_Text_35:
# 715 "data/maps/DLC/scripts.pory"
	.string "'TM 20 - Safeguard'$"

LibraryGuyDLC_Text_36:
# 715 "data/maps/DLC/scripts.pory"
	.string "'TM 33 - Reflect'$"

LibraryGuyDLC_Text_37:
# 717 "data/maps/DLC/scripts.pory"
	.string "Of course - I have a copy right here!$"

LibraryGuyDLC_Text_38:
# 749 "data/maps/DLC/scripts.pory"
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
# 758 "data/maps/DLC/scripts.pory"
	.string "I'll be here if you change your mind!$"

OLDLibraryGuyDLC_Text_0:
# 770 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.\p"
	.string "You can read any of the books here, but\n"
	.string "you need to be enrolled to take them on\l"
	.string "a loan - sorry!$"

TeacherdeskDLC_Text_0:
# 779 "data/maps/DLC/scripts.pory"
	.string "The book on top features a Psyduck on\n"
	.string "its cover, and is titled 'Therapy for\l"
	.string "Beginners.'$"

BlackBoardDLC_Text_0:
# 789 "data/maps/DLC/scripts.pory"
	.string "The math problem is solved.$"

BlackBoardDLC_Text_1:
# 794 "data/maps/DLC/scripts.pory"
	.string "The board contains an unanswered math\n"
	.string "problem from a previous lesson...$"

BlackBoardDLC_Text_2:
# 796 "data/maps/DLC/scripts.pory"
	.string "I have ¥2404, and I buy two Devon Balls\n"
	.string "for ¥210 each. How much do I have left?$"

BlackBoardDLC_Text_3:
# 797 "data/maps/DLC/scripts.pory"
	.string "¥2194$"

BlackBoardDLC_Text_4:
# 797 "data/maps/DLC/scripts.pory"
	.string "¥1984$"

BlackBoardDLC_Text_5:
# 797 "data/maps/DLC/scripts.pory"
	.string "¥2025$"

BlackBoardDLC_Text_6:
# 801 "data/maps/DLC/scripts.pory"
	.string "{PLAYER} writes ¥2194 on the\n"
	.string "blackboard.$"

BlackBoardDLC_Text_7:
# 805 "data/maps/DLC/scripts.pory"
	.string "Uhm... that's not correct. Would you mind\n"
	.string "not writing wrong answers on the board?\n"
	.string "Thank you.$"

BlackBoardDLC_Text_8:
# 815 "data/maps/DLC/scripts.pory"
	.string "{PLAYER} writes ¥1984 on the\n"
	.string "blackboard.$"

BlackBoardDLC_Text_9:
# 819 "data/maps/DLC/scripts.pory"
	.string "Oh, that's correct! You're good with\n"
	.string "numbers.$"

BlackBoardDLC_Text_10:
# 823 "data/maps/DLC/scripts.pory"
	.string "I like math problems... they always have\n"
	.string "a single right answer.\p"
	.string "If only the world worked like that.$"

BlackBoardDLC_Text_11:
# 833 "data/maps/DLC/scripts.pory"
	.string "{PLAYER} writes ¥2025 on the\n"
	.string "blackboard.$"

BlackBoardDLC_Text_12:
# 845 "data/maps/DLC/scripts.pory"
	.string "Better not to write anything...$"

OpenBoxDLC_Text_0:
# 853 "data/maps/DLC/scripts.pory"
	.string "A label on the open box reads “To be\n"
	.string "discarded”.\p"
	.string "Through the open gap, you glimpse a\n"
	.string "paper whose title reads:\p"
	.string "“The grim truth behind Safemon, by\n"
	.string "{COLOR BLUE}Professor Birch{COLOR DARK_GRAY}.”$"

PosterDLC_Text_0:
# 862 "data/maps/DLC/scripts.pory"
	.string "Next month's planned excursion:\n"
	.string "Petal Park!\p"
	.string "Sign ups open on DLC's website.\n"
	.string "Minors require parental consent.$"

RulesDLC_Text_0:
# 869 "data/maps/DLC/scripts.pory"
	.string "The hanged notes contain many\n"
	.string "classroom rules.\p"
	.string "1) No yelling\n"
	.string "2) No running\p"
	.string "3) No Pokémon allowed at school\n"
	.string "4) Raise your hand for questions.\p"
	.string "The list goes on and on.$"

BoardDLC_Text_0:
# 877 "data/maps/DLC/scripts.pory"
	.string "The board contains many Devon-related\n"
	.string "news, event posters, and most of all\l"
	.string "product ads.$"

PCDLC_Text_0:
# 884 "data/maps/DLC/scripts.pory"
	.string "The computer asks for a DLC username\n"
	.string "and password. Don't have any.$"

BookshelfDLC_Text_0:
# 890 "data/maps/DLC/scripts.pory"
	.string "It's full of books and magazines\n"
	.string "published by Devon Co.$"

HangerDLC_Text_0:
# 896 "data/maps/DLC/scripts.pory"
	.string "It's just a bunch of hanged clothes.$"

BookPileDLC_Text_0:
# 903 "data/maps/DLC/scripts.pory"
	.string "A pile of textbooks about Safemon.$"

MauvillePosterDLC_Text_0:
# 909 "data/maps/DLC/scripts.pory"
	.string "Finished using the PC? Turn it off, and\n"
	.string "save electricity!\p"
	.string "Let's take care of Hoenn together.\n"
	.string "{COLOR BLUE}New Mauville Nuclear Plant.{COLOR DARK_GRAY}$"

TVDLC_Text_0:
# 916 "data/maps/DLC/scripts.pory"
	.string "The TV is playing a documentary on\n"
	.string "Safemon on a loop.\p"
	.string "'Before leaving Devon laboratories, all\n"
	.string "Safemon are injected with the\l"
	.string "Everserum, which prevents them from\l"
	.string "evolving through natural means'.\p"
	.string "'This means no unplanned mutations will\n"
	.string "ever take place on a Safemon.'\p"
	.string "'Change can be dangerous!'$"

DLCSealedBox_Text_0:
# 925 "data/maps/DLC/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoneyTipBook_Text_0:
# 933 "data/maps/DLC/scripts.pory"
	.string "The book cover reads: “Money, post-war\n"
	.string "Hoenn and you.”$"

MoneyTipBook_Text_1:
# 937 "data/maps/DLC/scripts.pory"
	.string "Which chapter to read?$"

MoneyTipBook_Text_2:
# 939 "data/maps/DLC/scripts.pory"
	.string "1) Devon Relief$"

MoneyTipBook_Text_3:
# 939 "data/maps/DLC/scripts.pory"
	.string "2) Foraging$"

MoneyTipBook_Text_4:
# 939 "data/maps/DLC/scripts.pory"
	.string "3) Object Spotter$"

MoneyTipBook_Text_5:
# 939 "data/maps/DLC/scripts.pory"
	.string "4) Borrowing?$"

MoneyTipBook_Text_6:
# 939 "data/maps/DLC/scripts.pory"
	.string "5) Pawning and Gambling$"

MoneyTipBook_Text_7:
# 939 "data/maps/DLC/scripts.pory"
	.string "None$"

MoneyTipBook_Text_8:
# 944 "data/maps/DLC/scripts.pory"
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
# 954 "data/maps/DLC/scripts.pory"
	.string "Mother nature does not provide as much\n"
	.string "as it used to, but with some luck, it\l"
	.string "won't be drained dry by the time you\l"
	.string "read this.\p"
	.string "Take Route 101 for example - Shiitako\n"
	.string "mushrooms grow in that area.\p"
	.string "Even if you pick them up once, they\n"
	.string "regrow on the daily, so that's steady\l"
	.string "income!\p"
	.string "Too lazy to forage yourself? Get a\n"
	.string "Pokémon with the Pickup ability, and\l"
	.string "have it do it for you.\p"
	.string "Now that's steady AND passive income!\p"
	.string "Lastly, if you're lucky enough to find a\n"
	.string "berry field in this day and age, well...\p"
	.string "You better exploit it, and sell those\n"
	.string "bad girls for a fortune!$"

MoneyTipBook_Text_10:
# 966 "data/maps/DLC/scripts.pory"
	.string "Now this is where the real money flows\n"
	.string "in!\p"
	.string "It's only been a year since the war, and\n"
	.string "the region is still full of stuff people\l"
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
# 977 "data/maps/DLC/scripts.pory"
	.string "If you're reading this far, you must be\n"
	.string "a greedy bastard. And I like that.\p"
	.string "Sadly, you can only get so far playing\n"
	.string "by “the book” so to speak...\p"
	.string "However, imagine you were bold enough\n"
	.string "to use the move Thief against wild\l"
	.string "Pokémon... or even trainer Pokémon.\p"
	.string "Of course, the latter would fall under\n"
	.string "the realm of criminality, and this\l"
	.string "humble writer would never encourage\l"
	.string "such behaviour.\p"
	.string "So whatever you do, do NOT... {COLOR LIGHT_GRAY}{SHADOW WHITE}not{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} do it...!$"

MoneyTipBook_Text_12:
# 987 "data/maps/DLC/scripts.pory"
	.string "Be warned - this last money-making\n"
	.string "method is only for the boldest of the\l"
	.string "bold.\p"
	.string "I can't tell you exactly where, but\n"
	.string "there's this cool shop near {COLOR GREEN}Petalburg\l"
	.string "City{COLOR DARK_GRAY} where you can pawn your most\l"
	.string "valuable items.\p"
	.string "I'm talking Devon Dexes, Devonavs,\n"
	.string "motorcycles - that sort of stuff.\p"
	.string "Of course, it's very inconvenient to do\n"
	.string "without these things, but you will get a\l"
	.string "small fortune for pawning them, and you\l"
	.string "can get them back by returning the\l"
	.string "amount you were given.\p"
	.string "So what's the point, you may be asking?\n"
	.string "Well...\p"
	.string "The point is gambling it all in Petalburg\n"
	.string "Arcade, what else!?\p"
	.string "Rake in those tokens, buy expensive\n"
	.string "stuff with them, and sell it for huge\l"
	.string "profit!\p"
	.string "Risky? Perhaps. You may lose it all. But\n"
	.string "that's a loser's mentality.$"

DLCTrashBin_Text_0:
# 1007 "data/maps/DLC/scripts.pory"
	.string "Seems like a picky eater has hidden\n"
	.string "something in the trash...$"

DLCTrashBin_Text_1:
# 1011 "data/maps/DLC/scripts.pory"
	.string "The trash can is empty.$"
