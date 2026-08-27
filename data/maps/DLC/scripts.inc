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
	playse SE_M_DIZZY_PUNCH
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
	waitse
# 169 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 170 "data/maps/DLC/scripts.pory"
	waitse
# 171 "data/maps/DLC/scripts.pory"
	playse SE_M_METRONOME
# 172 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_14
# 173 "data/maps/DLC/scripts.pory"
	waitmovement
# 174 "data/maps/DLC/scripts.pory"
	waitse
# 175 "data/maps/DLC/scripts.pory"
	removeobject 1
# 176 "data/maps/DLC/scripts.pory"
	waitmovement
# 177 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_3
# 178 "data/maps/DLC/scripts.pory"
	waitmovement
# 179 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 180 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 181 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 182 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 183 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_25
# 187 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_15
# 188 "data/maps/DLC/scripts.pory"
	waitmovement
# 189 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_16
# 190 "data/maps/DLC/scripts.pory"
	waitmovement
# 191 "data/maps/DLC/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 192 "data/maps/DLC/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 193 "data/maps/DLC/scripts.pory"
	msgbox OldaleTown_DLC_TherapyCutscene_Text_26
# 194 "data/maps/DLC/scripts.pory"
	closemessage
# 195 "data/maps/DLC/scripts.pory"
	removefieldmugshot
# 196 "data/maps/DLC/scripts.pory"
	applymovement 2, OldaleTown_DLC_TherapyCutscene_Movement_17
# 197 "data/maps/DLC/scripts.pory"
	waitmovement
# 198 "data/maps/DLC/scripts.pory"
	removeobject 2
# 199 "data/maps/DLC/scripts.pory"
	applymovement 3, OldaleTown_DLC_TherapyCutscene_Movement_18
# 200 "data/maps/DLC/scripts.pory"
	waitmovement 3
# 201 "data/maps/DLC/scripts.pory"
	removeobject 3
# 202 "data/maps/DLC/scripts.pory"
	playse SE_DOOR
# 203 "data/maps/DLC/scripts.pory"
	waitse
# 207 "data/maps/DLC/scripts.pory"
	special SpawnCameraObject
# 208 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_DLC_TherapyCutscene_Movement_19
# 209 "data/maps/DLC/scripts.pory"
	waitmovement 0
# 210 "data/maps/DLC/scripts.pory"
	clearflag sharpynotoutsideDLC
# 211 "data/maps/DLC/scripts.pory"
	clearflag camelianotoutsideDLC
# 212 "data/maps/DLC/scripts.pory"
	setflag sharpynotinsideDLC
# 213 "data/maps/DLC/scripts.pory"
	setflag camelianotinsideDLC
# 214 "data/maps/DLC/scripts.pory"
	setflag finishedtherapy
# 215 "data/maps/DLC/scripts.pory"
	setflag sharpycameliaDLCcs
# 216 "data/maps/DLC/scripts.pory"
	special RemoveCameraObject
# 217 "data/maps/DLC/scripts.pory"
	waitmovement
# 219 "data/maps/DLC/scripts.pory"
	setvar VAR_OLDALE_PHASE, 1
# 220 "data/maps/DLC/scripts.pory"
	playbgm MUS_UNKNOWN5, TRUE
# 221 "data/maps/DLC/scripts.pory"
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
# 226 "data/maps/DLC/scripts.pory"
	lockall
# 227 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 228 "data/maps/DLC/scripts.pory"
	applymovement 5, LittleKidDLC_Movement_0
# 231 "data/maps/DLC/scripts.pory"
	checkplayergender
# 232 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittleKidDLC_2
LittleKidDLC_1:
# 235 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittleKidDLC_5
LittleKidDLC_4:
# 238 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3
# 239 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LittleKidDLC_8
LittleKidDLC_7:
# 247 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LittleKidDLC_11
LittleKidDLC_10:
# 250 "data/maps/DLC/scripts.pory"
	applymovement 5, OldaleTown_DLC_TherapyCutscene_Movement_6
# 251 "data/maps/DLC/scripts.pory"
	waitmovement 5
# 252 "data/maps/DLC/scripts.pory"
	releaseall
	return

LittleKidDLC_2:
# 233 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_0
	goto LittleKidDLC_1

LittleKidDLC_5:
# 236 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_1
	goto LittleKidDLC_4

LittleKidDLC_8:
# 240 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 241 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_4
# 245 "data/maps/DLC/scripts.pory"
	hidemonpic
	goto LittleKidDLC_7

LittleKidDLC_11:
# 248 "data/maps/DLC/scripts.pory"
	msgbox LittleKidDLC_Text_5
	goto LittleKidDLC_10


FatManDLCAfterClass::
# 256 "data/maps/DLC/scripts.pory"
	lock
# 257 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 258 "data/maps/DLC/scripts.pory"
	applymovement 15, LittleKidDLC_Movement_0
# 259 "data/maps/DLC/scripts.pory"
	msgbox FatManDLCAfterClass_Text_0
# 261 "data/maps/DLC/scripts.pory"
	applymovement 15, OldaleTown_DLC_TherapyCutscene_Movement_15
# 262 "data/maps/DLC/scripts.pory"
	waitmovement 15
# 263 "data/maps/DLC/scripts.pory"
	releaseall
	return


FatManDLC::
# 267 "data/maps/DLC/scripts.pory"
	lock
# 268 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 269 "data/maps/DLC/scripts.pory"
	applymovement 7, LittleKidDLC_Movement_0
# 270 "data/maps/DLC/scripts.pory"
	msgbox FatManDLC_Text_0
# 272 "data/maps/DLC/scripts.pory"
	applymovement 7, OldaleTown_DLC_TherapyCutscene_Movement_6
# 273 "data/maps/DLC/scripts.pory"
	releaseall
	return


ObsessedGirlDLC::
# 279 "data/maps/DLC/scripts.pory"
	lock
# 280 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 281 "data/maps/DLC/scripts.pory"
	applymovement 12, LittleKidDLC_Movement_0
# 282 "data/maps/DLC/scripts.pory"
	msgbox ObsessedGirlDLC_Text_0
# 286 "data/maps/DLC/scripts.pory"
	applymovement 12, OldaleTown_DLC_TherapyCutscene_Movement_15
# 287 "data/maps/DLC/scripts.pory"
	waitmovement 12
# 288 "data/maps/DLC/scripts.pory"
	playfirstmoncry
# 289 "data/maps/DLC/scripts.pory"
	msgbox ObsessedGirlDLC_Text_1
# 290 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLCAfterClass::
# 294 "data/maps/DLC/scripts.pory"
	lock
# 295 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 296 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 297 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLCAfterClass_Text_0
# 298 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 299 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 300 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingKidDLC::
# 304 "data/maps/DLC/scripts.pory"
	lock
# 305 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 306 "data/maps/DLC/scripts.pory"
	applymovement 4, LittleKidDLC_Movement_0
# 307 "data/maps/DLC/scripts.pory"
	msgbox SleepingKidDLC_Text_0
# 308 "data/maps/DLC/scripts.pory"
	applymovement 4, OldaleTown_DLC_TherapyCutscene_Movement_6
# 309 "data/maps/DLC/scripts.pory"
	waitmovement 4
# 310 "data/maps/DLC/scripts.pory"
	releaseall
	return


GirlNotebookDLC::
# 314 "data/maps/DLC/scripts.pory"
	lock
# 315 "data/maps/DLC/scripts.pory"
	msgbox GirlNotebookDLC_Text_0
# 317 "data/maps/DLC/scripts.pory"
	releaseall
	return


SleepingBoyNotebookDLC::
# 321 "data/maps/DLC/scripts.pory"
	lock
# 322 "data/maps/DLC/scripts.pory"
	msgbox SleepingBoyNotebookDLC_Text_0
# 323 "data/maps/DLC/scripts.pory"
	releaseall
	return


OldManDLC::
# 327 "data/maps/DLC/scripts.pory"
	lock
# 328 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 329 "data/maps/DLC/scripts.pory"
	applymovement 8, LittleKidDLC_Movement_0
# 330 "data/maps/DLC/scripts.pory"
	msgbox OldManDLC_Text_0
# 333 "data/maps/DLC/scripts.pory"
	applymovement 8, OldaleTown_DLC_TherapyCutscene_Movement_6
# 334 "data/maps/DLC/scripts.pory"
	waitmovement 8
# 335 "data/maps/DLC/scripts.pory"
	releaseall
	return


SnorlaxKidNotebookDLC::
# 340 "data/maps/DLC/scripts.pory"
	lock
# 341 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_PIKACHU_BELLE, 10, 3
# 342 "data/maps/DLC/scripts.pory"
	msgbox SnorlaxKidNotebookDLC_Text_0
# 344 "data/maps/DLC/scripts.pory"
	hidemonpic
# 345 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherDLC::
# 350 "data/maps/DLC/scripts.pory"
	lockall
# 351 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 352 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 353 "data/maps/DLC/scripts.pory"
	msgbox TeacherDLC_Text_0
# 355 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 356 "data/maps/DLC/scripts.pory"
	releaseall
	return


LibraryGuyDLC::
# 361 "data/maps/DLC/scripts.pory"
	lockall
# 362 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 363 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 364 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_0
# 365 "data/maps/DLC/scripts.pory"
loantypechoicewithtext:
# 366 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_1
# 367 "data/maps/DLC/scripts.pory"
loantypechoice:
# 368 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_2, LibraryGuyDLC_Text_3, LibraryGuyDLC_Text_4, LibraryGuyDLC_Text_5
# 371 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_2
LibraryGuyDLC_1:
# 562 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_5
LibraryGuyDLC_4:
# 744 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_11
LibraryGuyDLC_10:
# 753 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_23
LibraryGuyDLC_22:
# 756 "data/maps/DLC/scripts.pory"
finishloanscript:
# 757 "data/maps/DLC/scripts.pory"
	closemessage
# 758 "data/maps/DLC/scripts.pory"
	releaseall
	return

LibraryGuyDLC_2:
# 376 "data/maps/DLC/scripts.pory"
	goto_if_set loanedfirebook, LibraryGuyDLC_8
LibraryGuyDLC_7:
# 423 "data/maps/DLC/scripts.pory"
	goto_if_set loanedgrassbook, LibraryGuyDLC_17
LibraryGuyDLC_16:
# 471 "data/maps/DLC/scripts.pory"
	goto_if_set loanedelectricbook, LibraryGuyDLC_32
LibraryGuyDLC_31:
# 517 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedfirebook, LibraryGuyDLC_50
# 517 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedgrassbook, LibraryGuyDLC_50
# 517 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedelectricbook, LibraryGuyDLC_50
LibraryGuyDLC_49:
# 536 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_79
LibraryGuyDLC_78:
# 545 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_103
LibraryGuyDLC_102:
# 554 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_128
	goto LibraryGuyDLC_1

LibraryGuyDLC_5:
# 567 "data/maps/DLC/scripts.pory"
	goto_if_set loanedprotectTM, LibraryGuyDLC_14
LibraryGuyDLC_13:
# 613 "data/maps/DLC/scripts.pory"
	goto_if_set loanedsafeguardTM, LibraryGuyDLC_26
LibraryGuyDLC_25:
# 660 "data/maps/DLC/scripts.pory"
	goto_if_set loanedreflectTM, LibraryGuyDLC_41
LibraryGuyDLC_40:
# 707 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedprotectTM, LibraryGuyDLC_64
# 707 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedsafeguardTM, LibraryGuyDLC_64
# 707 "data/maps/DLC/scripts.pory"
	goto_if_unset loanedreflectTM, LibraryGuyDLC_64
	goto LibraryGuyDLC_4

LibraryGuyDLC_8:
# 377 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_6
# 379 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 381 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_20
LibraryGuyDLC_19:
# 388 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_38
LibraryGuyDLC_37:
# 393 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_62
	goto LibraryGuyDLC_7

LibraryGuyDLC_11:
# 745 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_38
# 750 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_10

LibraryGuyDLC_14:
# 568 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_28
# 570 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 572 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_29
LibraryGuyDLC_28:
# 579 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_47
LibraryGuyDLC_46:
# 584 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_76
	goto LibraryGuyDLC_13

LibraryGuyDLC_17:
# 424 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_16
# 426 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 428 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_35
LibraryGuyDLC_34:
# 435 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_60
LibraryGuyDLC_59:
# 440 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_86
	goto LibraryGuyDLC_16

LibraryGuyDLC_20:
# 382 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 383 "data/maps/DLC/scripts.pory"
	removeitem ITEM_FLAME_PLATE
# 384 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 385 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_19

LibraryGuyDLC_23:
# 754 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_39
	goto LibraryGuyDLC_22

LibraryGuyDLC_26:
# 614 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_31
# 616 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 618 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_44
LibraryGuyDLC_43:
# 625 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_74
LibraryGuyDLC_73:
# 630 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_97
	goto LibraryGuyDLC_25

LibraryGuyDLC_29:
# 573 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 574 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_PROTECT
# 575 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 576 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_28

LibraryGuyDLC_32:
# 472 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_17
# 474 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 476 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_57
LibraryGuyDLC_56:
# 483 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_84
LibraryGuyDLC_83:
# 488 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_105
	goto LibraryGuyDLC_31

LibraryGuyDLC_35:
# 429 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 430 "data/maps/DLC/scripts.pory"
	removeitem ITEM_MEADOW_PLATE
# 431 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 432 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_34

LibraryGuyDLC_38:
# 389 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 390 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_37

LibraryGuyDLC_41:
# 661 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_32
# 663 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittleKidDLC_Text_2, LittleKidDLC_Text_3, LibraryGuyDLC_Text_7
# 665 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_71
LibraryGuyDLC_70:
# 672 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_95
LibraryGuyDLC_94:
# 677 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_118
	goto LibraryGuyDLC_40

LibraryGuyDLC_44:
# 619 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 620 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_SAFEGUARD
# 621 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 622 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_43

LibraryGuyDLC_47:
# 580 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 581 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_46

LibraryGuyDLC_50:
# 520 "data/maps/DLC/scripts.pory"
loanbookoffer:
# 521 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_18
# 523 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_19, LibraryGuyDLC_Text_20, LibraryGuyDLC_Text_21, LibraryGuyDLC_Text_22
# 525 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_81
	goto LibraryGuyDLC_49

LibraryGuyDLC_57:
# 477 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_8
# 478 "data/maps/DLC/scripts.pory"
	removeitem ITEM_ZAP_PLATE
# 479 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 480 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_56

LibraryGuyDLC_60:
# 436 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 437 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_59

LibraryGuyDLC_62:
# 394 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 397 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 398 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_89
LibraryGuyDLC_88:
# 414 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_110
	goto LibraryGuyDLC_7

LibraryGuyDLC_64:
# 709 "data/maps/DLC/scripts.pory"
loantmoffer:
# 710 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_33
# 711 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_34, LibraryGuyDLC_Text_35, LibraryGuyDLC_Text_36, LibraryGuyDLC_Text_22
# 712 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_92
LibraryGuyDLC_91:
# 721 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_116
LibraryGuyDLC_115:
# 730 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq LibraryGuyDLC_141
LibraryGuyDLC_140:
# 739 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq LibraryGuyDLC_160
	goto LibraryGuyDLC_4

LibraryGuyDLC_71:
# 666 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_29
# 667 "data/maps/DLC/scripts.pory"
	removeitem ITEM_TM_REFLECT
# 668 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 669 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_70

LibraryGuyDLC_74:
# 626 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 627 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_73

LibraryGuyDLC_76:
# 585 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 588 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 589 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_100
LibraryGuyDLC_99:
# 605 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_123
	goto LibraryGuyDLC_13

LibraryGuyDLC_79:
# 537 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_25
# 538 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 539 "data/maps/DLC/scripts.pory"
	giveitem ITEM_MEADOW_PLATE
# 540 "data/maps/DLC/scripts.pory"
	setflag loanedgrassbook
# 541 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 542 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_78

LibraryGuyDLC_81:
# 526 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_23
# 527 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_16
# 528 "data/maps/DLC/scripts.pory"
	waitmovement
# 529 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 530 "data/maps/DLC/scripts.pory"
	giveitem ITEM_FLAME_PLATE
# 531 "data/maps/DLC/scripts.pory"
	setflag loanedfirebook
# 532 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 533 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_49

LibraryGuyDLC_84:
# 484 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 485 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_83

LibraryGuyDLC_86:
# 441 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 444 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 445 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_108
LibraryGuyDLC_107:
# 461 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_133
	goto LibraryGuyDLC_16

LibraryGuyDLC_89:
# 399 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 400 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_113
LibraryGuyDLC_112:
# 408 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_138
	goto LibraryGuyDLC_88

LibraryGuyDLC_92:
# 713 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 714 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 715 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_PROTECT
# 716 "data/maps/DLC/scripts.pory"
	setflag loanedprotectTM
# 717 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 718 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_91

LibraryGuyDLC_95:
# 673 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_9
# 674 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_94

LibraryGuyDLC_97:
# 631 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 634 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 635 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_121
LibraryGuyDLC_120:
# 651 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_146
	goto LibraryGuyDLC_25

LibraryGuyDLC_100:
# 590 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 591 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_126
LibraryGuyDLC_125:
# 599 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_151
	goto LibraryGuyDLC_99

LibraryGuyDLC_103:
# 546 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_26
# 547 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 548 "data/maps/DLC/scripts.pory"
	giveitem ITEM_ZAP_PLATE
# 549 "data/maps/DLC/scripts.pory"
	setflag loanedelectricbook
# 550 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 551 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_102

LibraryGuyDLC_105:
# 489 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 492 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 493 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_131
LibraryGuyDLC_130:
# 509 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_153
	goto LibraryGuyDLC_31

LibraryGuyDLC_108:
# 446 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 447 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_136
LibraryGuyDLC_135:
# 455 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_158
	goto LibraryGuyDLC_107

LibraryGuyDLC_110:
# 415 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 416 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_7

LibraryGuyDLC_113:
# 401 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 402 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 404 "data/maps/DLC/scripts.pory"
	clearflag loanedfirebook
# 405 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_112

LibraryGuyDLC_116:
# 722 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 723 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 724 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_SAFEGUARD
# 725 "data/maps/DLC/scripts.pory"
	setflag loanedsafeguardTM
# 726 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 727 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_115

LibraryGuyDLC_118:
# 678 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_10
# 681 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, LibraryGuyDLC_Text_11, LibraryGuyDLC_Text_12
# 682 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LibraryGuyDLC_144
LibraryGuyDLC_143:
# 698 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LibraryGuyDLC_162
	goto LibraryGuyDLC_40

LibraryGuyDLC_121:
# 636 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 637 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_149
LibraryGuyDLC_148:
# 645 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_167
	goto LibraryGuyDLC_120

LibraryGuyDLC_123:
# 606 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 607 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_13

LibraryGuyDLC_126:
# 592 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 593 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 595 "data/maps/DLC/scripts.pory"
	clearflag loanedprotectTM
# 596 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_125

LibraryGuyDLC_128:
# 555 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 556 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_1

LibraryGuyDLC_131:
# 494 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 495 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_156
LibraryGuyDLC_155:
# 503 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_169
	goto LibraryGuyDLC_130

LibraryGuyDLC_133:
# 462 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 463 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_16

LibraryGuyDLC_136:
# 448 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 449 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 451 "data/maps/DLC/scripts.pory"
	clearflag loanedgrassbook
# 452 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_135

LibraryGuyDLC_138:
# 409 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 411 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_88

LibraryGuyDLC_141:
# 731 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_37
# 732 "data/maps/DLC/scripts.pory"
	applymovement 9, LibraryGuyDLC_Movement_0
# 733 "data/maps/DLC/scripts.pory"
	giveitem ITEM_TM_REFLECT
# 734 "data/maps/DLC/scripts.pory"
	setflag loanedreflectTM
# 735 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_24
# 736 "data/maps/DLC/scripts.pory"
	goto finishloanscript
	goto LibraryGuyDLC_140

LibraryGuyDLC_144:
# 683 "data/maps/DLC/scripts.pory"
	checkmoney 100
# 684 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LibraryGuyDLC_165
LibraryGuyDLC_164:
# 692 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LibraryGuyDLC_171
	goto LibraryGuyDLC_143

LibraryGuyDLC_146:
# 652 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 653 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_25

LibraryGuyDLC_149:
# 638 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 639 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 641 "data/maps/DLC/scripts.pory"
	clearflag loanedsafeguardTM
# 642 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_148

LibraryGuyDLC_151:
# 600 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 602 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_99

LibraryGuyDLC_153:
# 510 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 511 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_31

LibraryGuyDLC_156:
# 496 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 497 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_13
# 499 "data/maps/DLC/scripts.pory"
	clearflag loanedelectricbook
# 500 "data/maps/DLC/scripts.pory"
	goto loanbookoffer
	goto LibraryGuyDLC_155

LibraryGuyDLC_158:
# 456 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 458 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_107

LibraryGuyDLC_160:
# 740 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_27
# 741 "data/maps/DLC/scripts.pory"
	goto loantypechoice
	goto LibraryGuyDLC_4

LibraryGuyDLC_162:
# 699 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_15
# 700 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_40

LibraryGuyDLC_165:
# 685 "data/maps/DLC/scripts.pory"
	removemoney 5000
# 686 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_30
# 688 "data/maps/DLC/scripts.pory"
	clearflag loanedreflectTM
# 689 "data/maps/DLC/scripts.pory"
	goto loantmoffer
	goto LibraryGuyDLC_164

LibraryGuyDLC_167:
# 646 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 648 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_120

LibraryGuyDLC_169:
# 504 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 506 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_130

LibraryGuyDLC_171:
# 693 "data/maps/DLC/scripts.pory"
	msgbox LibraryGuyDLC_Text_14
# 695 "data/maps/DLC/scripts.pory"
	goto loantypechoicewithtext
	goto LibraryGuyDLC_143


OLDLibraryGuyDLC::
# 763 "data/maps/DLC/scripts.pory"
	lockall
# 764 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 765 "data/maps/DLC/scripts.pory"
	applymovement 9, LittleKidDLC_Movement_0
# 766 "data/maps/DLC/scripts.pory"
	msgbox OLDLibraryGuyDLC_Text_0
# 768 "data/maps/DLC/scripts.pory"
	applymovement 9, OldaleTown_DLC_TherapyCutscene_Movement_6
# 769 "data/maps/DLC/scripts.pory"
	releaseall
	return


TeacherdeskDLC::
# 773 "data/maps/DLC/scripts.pory"
	lockall
# 774 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BURMY_TRASH, 10, 3
# 775 "data/maps/DLC/scripts.pory"
	msgbox TeacherdeskDLC_Text_0
# 777 "data/maps/DLC/scripts.pory"
	hidemonpic
# 778 "data/maps/DLC/scripts.pory"
	releaseall
	return


BlackBoardDLC::
# 782 "data/maps/DLC/scripts.pory"
	lockall
# 783 "data/maps/DLC/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 784 "data/maps/DLC/scripts.pory"
	goto_if_set DLCmathresolved, BlackBoardDLC_2
BlackBoardDLC_1:
# 789 "data/maps/DLC/scripts.pory"
	goto_if_unset DLCmathresolved, BlackBoardDLC_4
	return

BlackBoardDLC_2:
# 785 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_0
# 786 "data/maps/DLC/scripts.pory"
	goto endofDLCteacherscript
# 787 "data/maps/DLC/scripts.pory"
	release
	goto BlackBoardDLC_1

BlackBoardDLC_4:
# 790 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_1
# 792 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_2
# 793 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, BlackBoardDLC_Text_3, BlackBoardDLC_Text_4, BlackBoardDLC_Text_5, OldaleTown_DLC_TherapyCutscene_Text_5
# 794 "data/maps/DLC/scripts.pory"
	waitmessage
# 796 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackBoardDLC_7
BlackBoardDLC_6:
# 810 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackBoardDLC_10
BlackBoardDLC_9:
# 828 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_13
BlackBoardDLC_12:
# 840 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackBoardDLC_16
BlackBoardDLC_15:
# 843 "data/maps/DLC/scripts.pory"
endofDLCteacherscript:
# 844 "data/maps/DLC/scripts.pory"
	releaseall
	return

BlackBoardDLC_7:
# 797 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_6
# 798 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 799 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 800 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 801 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 803 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 804 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 805 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 806 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 807 "data/maps/DLC/scripts.pory"
	goto endofDLCteacherscript
	goto BlackBoardDLC_6

BlackBoardDLC_10:
# 811 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_8
# 812 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 813 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 814 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 815 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_9
# 816 "data/maps/DLC/scripts.pory"
	applymovement 6, OldaleTown_DLC_TherapyCutscene_Movement_6
# 817 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 818 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_6
# 819 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_10
# 821 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 822 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 823 "data/maps/DLC/scripts.pory"
	waitmovement 6
# 824 "data/maps/DLC/scripts.pory"
	waitmovement 14
# 825 "data/maps/DLC/scripts.pory"
	setflag DLCmathresolved
	goto BlackBoardDLC_9

BlackBoardDLC_13:
# 829 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_11
# 830 "data/maps/DLC/scripts.pory"
	applymovement 6, LittleKidDLC_Movement_0
# 831 "data/maps/DLC/scripts.pory"
	applymovement 14, LittleKidDLC_Movement_0
# 832 "data/maps/DLC/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_DLC_TherapyCutscene_Movement_16
# 833 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_7
# 835 "data/maps/DLC/scripts.pory"
	applymovement 6, TeacherDLC_Movement_0
# 836 "data/maps/DLC/scripts.pory"
	applymovement 14, OldaleTown_DLC_TherapyCutscene_Movement_6
# 837 "data/maps/DLC/scripts.pory"
	waitmovement 14
	goto BlackBoardDLC_12

BlackBoardDLC_16:
# 841 "data/maps/DLC/scripts.pory"
	msgbox BlackBoardDLC_Text_12
	goto BlackBoardDLC_15


OpenBoxDLC::
# 848 "data/maps/DLC/scripts.pory"
	lock
# 849 "data/maps/DLC/scripts.pory"
	msgbox OpenBoxDLC_Text_0
# 852 "data/maps/DLC/scripts.pory"
	releaseall
	return


PosterDLC::
# 856 "data/maps/DLC/scripts.pory"
	lock
# 857 "data/maps/DLC/scripts.pory"
	msgbox PosterDLC_Text_0
# 859 "data/maps/DLC/scripts.pory"
	releaseall
	return


RulesDLC::
# 863 "data/maps/DLC/scripts.pory"
	lock
# 864 "data/maps/DLC/scripts.pory"
	msgbox RulesDLC_Text_0
# 867 "data/maps/DLC/scripts.pory"
	releaseall
	return


BoardDLC::
# 871 "data/maps/DLC/scripts.pory"
	lock
# 872 "data/maps/DLC/scripts.pory"
	msgbox BoardDLC_Text_0
# 874 "data/maps/DLC/scripts.pory"
	releaseall
	return


PCDLC::
# 878 "data/maps/DLC/scripts.pory"
	lock
# 879 "data/maps/DLC/scripts.pory"
	msgbox PCDLC_Text_0
# 880 "data/maps/DLC/scripts.pory"
	releaseall
	return


BookshelfDLC::
# 884 "data/maps/DLC/scripts.pory"
	lock
# 885 "data/maps/DLC/scripts.pory"
	msgbox BookshelfDLC_Text_0
# 886 "data/maps/DLC/scripts.pory"
	releaseall
	return


MauvillePosterDLC::
# 890 "data/maps/DLC/scripts.pory"
	lock
# 891 "data/maps/DLC/scripts.pory"
	msgbox MauvillePosterDLC_Text_0
# 893 "data/maps/DLC/scripts.pory"
	releaseall
	return


TVDLC::
# 897 "data/maps/DLC/scripts.pory"
	lock
# 898 "data/maps/DLC/scripts.pory"
	msgbox TVDLC_Text_0
# 902 "data/maps/DLC/scripts.pory"
	releaseall
	return


DLCSealedBox::
# 906 "data/maps/DLC/scripts.pory"
	lockall
# 907 "data/maps/DLC/scripts.pory"
	msgbox DLCSealedBox_Text_0
# 908 "data/maps/DLC/scripts.pory"
	releaseall
	return


MoneyTipBook::
# 913 "data/maps/DLC/scripts.pory"
	lock
# 914 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BASCULIN_BLUE_STRIPED, 10, 3
# 915 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_0
# 916 "data/maps/DLC/scripts.pory"
moneychapterselection:
# 917 "data/maps/DLC/scripts.pory"
	showmonpic SPECIES_BASCULIN_BLUE_STRIPED, 10, 3
# 919 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_1
# 920 "data/maps/DLC/scripts.pory"
	hidemonpic
# 921 "data/maps/DLC/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, MoneyTipBook_Text_2, MoneyTipBook_Text_3, MoneyTipBook_Text_4, MoneyTipBook_Text_5, MoneyTipBook_Text_6, MoneyTipBook_Text_7
# 924 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoneyTipBook_2
MoneyTipBook_1:
# 934 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MoneyTipBook_5
MoneyTipBook_4:
# 946 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MoneyTipBook_8
MoneyTipBook_7:
# 957 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MoneyTipBook_11
MoneyTipBook_10:
# 967 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MoneyTipBook_14
MoneyTipBook_13:
# 979 "data/maps/DLC/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MoneyTipBook_17
MoneyTipBook_16:
# 981 "data/maps/DLC/scripts.pory"
	hidemonpic
# 982 "data/maps/DLC/scripts.pory"
	releaseall
	return

MoneyTipBook_2:
# 925 "data/maps/DLC/scripts.pory"
	hidemonpic
# 926 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_8
# 931 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_1

MoneyTipBook_5:
# 935 "data/maps/DLC/scripts.pory"
	hidemonpic
# 936 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_9
# 943 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_4

MoneyTipBook_8:
# 947 "data/maps/DLC/scripts.pory"
	hidemonpic
# 948 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_10
# 954 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_7

MoneyTipBook_11:
# 958 "data/maps/DLC/scripts.pory"
	hidemonpic
# 959 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_11
# 964 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_10

MoneyTipBook_14:
# 968 "data/maps/DLC/scripts.pory"
	hidemonpic
# 969 "data/maps/DLC/scripts.pory"
	msgbox MoneyTipBook_Text_12
# 976 "data/maps/DLC/scripts.pory"
	goto moneychapterselection
	goto MoneyTipBook_13

MoneyTipBook_17:
	goto MoneyTipBook_16


DLCTrashBin::
# 987 "data/maps/DLC/scripts.pory"
	lock
# 988 "data/maps/DLC/scripts.pory"
	goto_if_unset FLAG_ITEM_DLC_TRASHBIN, DLCTrashBin_2
# 993 "data/maps/DLC/scripts.pory"
	msgbox DLCTrashBin_Text_1
DLCTrashBin_1:
# 994 "data/maps/DLC/scripts.pory"
	releaseall
	return

DLCTrashBin_2:
# 989 "data/maps/DLC/scripts.pory"
	msgbox DLCTrashBin_Text_0
# 990 "data/maps/DLC/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
# 991 "data/maps/DLC/scripts.pory"
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

# 172 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_14:
# 172 "data/maps/DLC/scripts.pory"
	emote_question_mark
# 172 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 187 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_15:
# 187 "data/maps/DLC/scripts.pory"
	face_right
	step_end

# 189 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_16:
# 189 "data/maps/DLC/scripts.pory"
	face_left
	step_end

# 196 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_17:
# 196 "data/maps/DLC/scripts.pory"
	walk_right
# 196 "data/maps/DLC/scripts.pory"
	walk_down
# 196 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 199 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_18:
# 199 "data/maps/DLC/scripts.pory"
	walk_right
# 199 "data/maps/DLC/scripts.pory"
	walk_right
# 199 "data/maps/DLC/scripts.pory"
	walk_down
# 199 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 208 "data/maps/DLC/scripts.pory"
OldaleTown_DLC_TherapyCutscene_Movement_19:
# 208 "data/maps/DLC/scripts.pory"
	walk_down
# 208 "data/maps/DLC/scripts.pory"
	walk_down
	step_end

# 228 "data/maps/DLC/scripts.pory"
LittleKidDLC_Movement_0:
# 228 "data/maps/DLC/scripts.pory"
	face_player
	step_end

# 355 "data/maps/DLC/scripts.pory"
TeacherDLC_Movement_0:
# 355 "data/maps/DLC/scripts.pory"
	face_down
	step_end

# 538 "data/maps/DLC/scripts.pory"
LibraryGuyDLC_Movement_0:
# 538 "data/maps/DLC/scripts.pory"
	face_left
# 538 "data/maps/DLC/scripts.pory"
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
# 183 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I think we will finish this\n"
	.string "session early.\p"
	.string "Next time, everyone please be mindful\n"
	.string "of others' feelings.$"

OldaleTown_DLC_TherapyCutscene_Text_26:
# 193 "data/maps/DLC/scripts.pory"
	.string "Let's go, Sharpy... this was a waste of\n"
	.string "time.$"

LittleKidDLC_Text_0:
# 233 "data/maps/DLC/scripts.pory"
	.string "Hello mister! Want to see my drawing?$"

LittleKidDLC_Text_1:
# 236 "data/maps/DLC/scripts.pory"
	.string "Hello miss! Want to see my drawing?$"

LittleKidDLC_Text_2:
# 238 "data/maps/DLC/scripts.pory"
	.string "Yes$"

LittleKidDLC_Text_3:
# 238 "data/maps/DLC/scripts.pory"
	.string "No$"

LittleKidDLC_Text_4:
# 241 "data/maps/DLC/scripts.pory"
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
# 248 "data/maps/DLC/scripts.pory"
	.string "Hehe - okay! Your loss!$"

FatManDLCAfterClass_Text_0:
# 259 "data/maps/DLC/scripts.pory"
	.string "Devon Browser has a function to\n"
	.string "automatically hide all distressing\l"
	.string "content on the web.\p"
	.string "But to cover the cost for it, it also\n"
	.string "replaces said content with ads for\l"
	.string "Devon products.\p"
	.string "It's kind of annoying...$"

FatManDLC_Text_0:
# 270 "data/maps/DLC/scripts.pory"
	.string "I lived in Rustboro, and some fire\n"
	.string "Pokémon burned the apartment building\l"
	.string "I lived in.\p"
	.string "I had to come back here with my\n"
	.string "parents. I miss the city.$"

ObsessedGirlDLC_Text_0:
# 282 "data/maps/DLC/scripts.pory"
	.string "I searched for the origin of the word\n"
	.string "'Pokémon'... and would you know it?\p"
	.string "It comes from the old term 'Pocket\n"
	.string "Monsters'. They are 'monsters'.\p"
	.string "Who thought it was a good idea to live\n"
	.string "with them?\p"
	.string "Please, get that one away from me. I\n"
	.string "don't want to get hurt.$"

ObsessedGirlDLC_Text_1:
# 289 "data/maps/DLC/scripts.pory"
	.string "...$"

SleepingKidDLCAfterClass_Text_0:
# 297 "data/maps/DLC/scripts.pory"
	.string "Since I slept through class, I'm trying\n"
	.string "to catch up...$"

SleepingKidDLC_Text_0:
# 307 "data/maps/DLC/scripts.pory"
	.string "ZZZZ...\n"
	.string "... Huh? Is class over? I think I slept\l"
	.string "through it...$"

GirlNotebookDLC_Text_0:
# 315 "data/maps/DLC/scripts.pory"
	.string "It's the notebook the scared girl left\n"
	.string "behind.\p"
	.string "Next to some classroom notes, there's a\n"
	.string "drawing of a man with a white hat,\l"
	.string "rescuing a little girl from drowning.$"

SleepingBoyNotebookDLC_Text_0:
# 322 "data/maps/DLC/scripts.pory"
	.string "The notebook has barely any notes, and\n"
	.string "is covered in drool.$"

OldManDLC_Text_0:
# 330 "data/maps/DLC/scripts.pory"
	.string "My daugther's health has never been\n"
	.string "the same since she breathed that\l"
	.string "Venusaur's Poison Powder.\p"
	.string "She's been surfing the web as a way to\n"
	.string "deal with it... I wish she went out a bit\l"
	.string "more.$"

SnorlaxKidNotebookDLC_Text_0:
# 342 "data/maps/DLC/scripts.pory"
	.string "It's a drawing of a Snorlax, sleeping\n"
	.string "soundly... while blocking a bridge.$"

TeacherDLC_Text_0:
# 353 "data/maps/DLC/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I shouldn't have come to teach\n"
	.string "to this backwater town.\p"
	.string "But the bonus is so juicy...$"

LibraryGuyDLC_Text_0:
# 364 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.$"

LibraryGuyDLC_Text_1:
# 366 "data/maps/DLC/scripts.pory"
	.string "Would you like to loan anything?$"

LibraryGuyDLC_Text_2:
# 368 "data/maps/DLC/scripts.pory"
	.string "Loan a book$"

LibraryGuyDLC_Text_3:
# 368 "data/maps/DLC/scripts.pory"
	.string "Loan a TM$"

LibraryGuyDLC_Text_4:
# 368 "data/maps/DLC/scripts.pory"
	.string "How do loans work?$"

LibraryGuyDLC_Text_5:
# 368 "data/maps/DLC/scripts.pory"
	.string "No, thank you$"

LibraryGuyDLC_Text_6:
# 377 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'The History of Mt. Chimney'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_7:
# 379 "data/maps/DLC/scripts.pory"
	.string "I lost it...$"

LibraryGuyDLC_Text_8:
# 382 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new book now!$"

LibraryGuyDLC_Text_9:
# 389 "data/maps/DLC/scripts.pory"
	.string "Understandable! You can return it when\n"
	.string "you've finished with it.$"

LibraryGuyDLC_Text_10:
# 394 "data/maps/DLC/scripts.pory"
	.string "Oh, that's unfortunate...\p"
	.string "If you want to continue loaning, you'll\n"
	.string "need to refund the loss - that would be\l"
	.string "5000¥.$"

LibraryGuyDLC_Text_11:
# 397 "data/maps/DLC/scripts.pory"
	.string "I will pay$"

LibraryGuyDLC_Text_12:
# 397 "data/maps/DLC/scripts.pory"
	.string "Not right now$"

LibraryGuyDLC_Text_13:
# 402 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new book.$"

LibraryGuyDLC_Text_14:
# 409 "data/maps/DLC/scripts.pory"
	.string "You don't seem to have enough funds...\n"
	.string "please return when you procure them!$"

LibraryGuyDLC_Text_15:
# 415 "data/maps/DLC/scripts.pory"
	.string "Very well... we'll eagerly await for your\n"
	.string "refunding.$"

LibraryGuyDLC_Text_16:
# 424 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned On Fortree's Deforestation.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_17:
# 472 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned 'New Mauville - What Went Wrong'.\p"
	.string "You need to return it before loaning\n"
	.string "any more books. Is that okay?$"

LibraryGuyDLC_Text_18:
# 521 "data/maps/DLC/scripts.pory"
	.string "These are the books we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_19:
# 523 "data/maps/DLC/scripts.pory"
	.string "'The History of Mt. Chimney'$"

LibraryGuyDLC_Text_20:
# 523 "data/maps/DLC/scripts.pory"
	.string "'On Fortree's Deforestation'$"

LibraryGuyDLC_Text_21:
# 523 "data/maps/DLC/scripts.pory"
	.string "'New Mauville - What Went Wrong?'$"

LibraryGuyDLC_Text_22:
# 523 "data/maps/DLC/scripts.pory"
	.string "I changed my mind$"

LibraryGuyDLC_Text_23:
# 526 "data/maps/DLC/scripts.pory"
	.string "Interested in geology? Then this is a\n"
	.string "great pick. Here you go!$"

LibraryGuyDLC_Text_24:
# 532 "data/maps/DLC/scripts.pory"
	.string "Hope you enjoy it! Please return it when\n"
	.string "you're finished with it.$"

LibraryGuyDLC_Text_25:
# 537 "data/maps/DLC/scripts.pory"
	.string "A concerning ecological study - but I\n"
	.string "am sure Devon has plans to avoid the\l"
	.string "worst.$"

LibraryGuyDLC_Text_26:
# 546 "data/maps/DLC/scripts.pory"
	.string "One should learn from the past to avoid\n"
	.string "repeating it... here!$"

LibraryGuyDLC_Text_27:
# 555 "data/maps/DLC/scripts.pory"
	.string "Fair enough. Perhaps you'd like to loan\n"
	.string "something else?$"

LibraryGuyDLC_Text_28:
# 568 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 17 - Protect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_29:
# 573 "data/maps/DLC/scripts.pory"
	.string "Very well, I'll take that off your hands\n"
	.string "then. You can loan a new TM now!$"

LibraryGuyDLC_Text_30:
# 593 "data/maps/DLC/scripts.pory"
	.string "Thank you. Please take better care of\n"
	.string "loans from now on. You may now loan a\l"
	.string "new TM.$"

LibraryGuyDLC_Text_31:
# 614 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 20 - Safeguard.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_32:
# 661 "data/maps/DLC/scripts.pory"
	.string "Oh, my record shows you have already\n"
	.string "loaned TM 33 - Reflect.\p"
	.string "You need to return it before loaning\n"
	.string "any more TMs. Is that okay?$"

LibraryGuyDLC_Text_33:
# 710 "data/maps/DLC/scripts.pory"
	.string "These are the TMs we have currently\n"
	.string "available for loans.$"

LibraryGuyDLC_Text_34:
# 711 "data/maps/DLC/scripts.pory"
	.string "'TM 17 - Protect'$"

LibraryGuyDLC_Text_35:
# 711 "data/maps/DLC/scripts.pory"
	.string "'TM 20 - Safeguard'$"

LibraryGuyDLC_Text_36:
# 711 "data/maps/DLC/scripts.pory"
	.string "'TM 33 - Reflect'$"

LibraryGuyDLC_Text_37:
# 713 "data/maps/DLC/scripts.pory"
	.string "Of course - I have a copy right here!$"

LibraryGuyDLC_Text_38:
# 745 "data/maps/DLC/scripts.pory"
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
# 754 "data/maps/DLC/scripts.pory"
	.string "I'll be here if you change your mind!$"

OLDLibraryGuyDLC_Text_0:
# 766 "data/maps/DLC/scripts.pory"
	.string "Welcome! This is the Devon Learning\n"
	.string "Center's library.\p"
	.string "You can read any of the books here, but\n"
	.string "you need to be enrolled to take them on\l"
	.string "a loan - sorry!$"

TeacherdeskDLC_Text_0:
# 775 "data/maps/DLC/scripts.pory"
	.string "The book on top features a Psyduck on\n"
	.string "its cover, and is titled 'Therapy for\l"
	.string "Beginners.'$"

BlackBoardDLC_Text_0:
# 785 "data/maps/DLC/scripts.pory"
	.string "The math problem is solved.$"

BlackBoardDLC_Text_1:
# 790 "data/maps/DLC/scripts.pory"
	.string "The board contains an unanswered math\n"
	.string "problem from a previous lesson...$"

BlackBoardDLC_Text_2:
# 792 "data/maps/DLC/scripts.pory"
	.string "I have ¥2404, and I buy two Devon Balls\n"
	.string "for ¥210 each. How much do I have left?$"

BlackBoardDLC_Text_3:
# 793 "data/maps/DLC/scripts.pory"
	.string "¥2194$"

BlackBoardDLC_Text_4:
# 793 "data/maps/DLC/scripts.pory"
	.string "¥1984$"

BlackBoardDLC_Text_5:
# 793 "data/maps/DLC/scripts.pory"
	.string "¥2025$"

BlackBoardDLC_Text_6:
# 797 "data/maps/DLC/scripts.pory"
	.string "You write ¥2194 on the blackboard.$"

BlackBoardDLC_Text_7:
# 801 "data/maps/DLC/scripts.pory"
	.string "Uhm... that's not correct. Would you mind\n"
	.string "not writing wrong answers on the board?\n"
	.string "Thank you.$"

BlackBoardDLC_Text_8:
# 811 "data/maps/DLC/scripts.pory"
	.string "You write ¥1984 on the blackboard.$"

BlackBoardDLC_Text_9:
# 815 "data/maps/DLC/scripts.pory"
	.string "Oh, that's correct! You're good with\n"
	.string "numbers.$"

BlackBoardDLC_Text_10:
# 819 "data/maps/DLC/scripts.pory"
	.string "I like math problems... they always have\n"
	.string "a single right answer.\p"
	.string "If only the world worked like that.$"

BlackBoardDLC_Text_11:
# 829 "data/maps/DLC/scripts.pory"
	.string "You write ¥2025 on the blackboard.$"

BlackBoardDLC_Text_12:
# 841 "data/maps/DLC/scripts.pory"
	.string "Better not to write anything...$"

OpenBoxDLC_Text_0:
# 849 "data/maps/DLC/scripts.pory"
	.string "A label on the open box reads 'To be\n"
	.string "discarded'.\p"
	.string "Through the open gap, you glimpse a\n"
	.string "paper whose title reads:\p"
	.string "'The grim truth behind Safemon, by\n"
	.string "{COLOR BLUE}Professor Balsam{COLOR DARK_GRAY}.'$"

PosterDLC_Text_0:
# 857 "data/maps/DLC/scripts.pory"
	.string "Next month's planned excursion:\n"
	.string "Petalburg Park!\p"
	.string "Sign ups open on DLC's website.\n"
	.string "Minors require parental consent.$"

RulesDLC_Text_0:
# 864 "data/maps/DLC/scripts.pory"
	.string "The hanged notes contain many\n"
	.string "classroom rules.\p"
	.string "1) No yelling\n"
	.string "2) No running\p"
	.string "3) No Pokémon allowed at school\n"
	.string "4) Raise your hand for questions.\p"
	.string "The list goes on and on.$"

BoardDLC_Text_0:
# 872 "data/maps/DLC/scripts.pory"
	.string "The board contains many Devon-related\n"
	.string "news, event posters, and most of all\l"
	.string "product ads.$"

PCDLC_Text_0:
# 879 "data/maps/DLC/scripts.pory"
	.string "The computer asks for a DLC username\n"
	.string "and password. Don't have any.$"

BookshelfDLC_Text_0:
# 885 "data/maps/DLC/scripts.pory"
	.string "It's full of books and magazines\n"
	.string "published by Devon Co.$"

MauvillePosterDLC_Text_0:
# 891 "data/maps/DLC/scripts.pory"
	.string "Finished using the PC? Turn it off, and\n"
	.string "save electricity!\p"
	.string "Let's take care of Hoenn together.\n"
	.string "{COLOR BLUE}Mauville Nuclear Plant.{COLOR DARK_GRAY}$"

TVDLC_Text_0:
# 898 "data/maps/DLC/scripts.pory"
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
# 907 "data/maps/DLC/scripts.pory"
	.string "It's a sealed box. Better not to open it.$"

MoneyTipBook_Text_0:
# 915 "data/maps/DLC/scripts.pory"
	.string "'The book cover reads: 'Money in\n"
	.string "post-war Hoenn - how to THRIVE.'$"

MoneyTipBook_Text_1:
# 919 "data/maps/DLC/scripts.pory"
	.string "Which chapter to read?$"

MoneyTipBook_Text_2:
# 921 "data/maps/DLC/scripts.pory"
	.string "1) Devon Relief$"

MoneyTipBook_Text_3:
# 921 "data/maps/DLC/scripts.pory"
	.string "2) Foraging$"

MoneyTipBook_Text_4:
# 921 "data/maps/DLC/scripts.pory"
	.string "3) Object Spotter$"

MoneyTipBook_Text_5:
# 921 "data/maps/DLC/scripts.pory"
	.string "4) Thief and You$"

MoneyTipBook_Text_6:
# 921 "data/maps/DLC/scripts.pory"
	.string "5) Pawning and Gambling$"

MoneyTipBook_Text_7:
# 921 "data/maps/DLC/scripts.pory"
	.string "None$"

MoneyTipBook_Text_8:
# 926 "data/maps/DLC/scripts.pory"
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
# 936 "data/maps/DLC/scripts.pory"
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
# 948 "data/maps/DLC/scripts.pory"
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
# 959 "data/maps/DLC/scripts.pory"
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
# 969 "data/maps/DLC/scripts.pory"
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
# 989 "data/maps/DLC/scripts.pory"
	.string "Seems like a picky eater has hidden\n"
	.string "something in the trash...$"

DLCTrashBin_Text_1:
# 993 "data/maps/DLC/scripts.pory"
	.string "The trash can is empty.$"
