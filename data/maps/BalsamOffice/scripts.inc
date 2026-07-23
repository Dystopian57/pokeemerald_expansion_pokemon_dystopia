# 1 "data/maps/BalsamOffice/scripts.pory"


BalsamOffice_MapScripts::
# 6 "data/maps/BalsamOffice/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TurnOnRotom
	.byte 0


TurnOnRotom::
# 11 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamofficeemptytv, TurnOnRotom_1
	return

TurnOnRotom_1:
# 13 "data/maps/BalsamOffice/scripts.pory"
	addobject 2
# 14 "data/maps/BalsamOffice/scripts.pory"
	removeobject 3
# 15 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamofficeemptytv
# 16 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsamofficerotom
	return


BalsamBedUp::
# 23 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 24 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBedUp_Text_0, MSGBOX_YESNO
# 25 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BalsamBedUp_2
BalsamBedUp_1:
# 36 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamBedUp_2:
# 26 "data/maps/BalsamOffice/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/BalsamOffice/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/BalsamOffice/scripts.pory"
	playse MUS_HEAL
# 29 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBedUp_Text_1
# 30 "data/maps/BalsamOffice/scripts.pory"
	special SpawnCameraObject
# 31 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BalsamBedUp_Movement_0
# 32 "data/maps/BalsamOffice/scripts.pory"
	special RemoveCameraObject
# 33 "data/maps/BalsamOffice/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 34 "data/maps/BalsamOffice/scripts.pory"
	goto startBalsamBedScript
	goto BalsamBedUp_1


BalsamBedRight::
# 41 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 42 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBedUp_Text_0, MSGBOX_YESNO
# 43 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BalsamBedRight_2
BalsamBedRight_1:
# 54 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamBedRight_2:
# 44 "data/maps/BalsamOffice/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/BalsamOffice/scripts.pory"
	special HealPlayerParty
# 46 "data/maps/BalsamOffice/scripts.pory"
	playse MUS_HEAL
# 47 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBedUp_Text_1
# 48 "data/maps/BalsamOffice/scripts.pory"
	special SpawnCameraObject
# 49 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BalsamBedRight_Movement_0
# 50 "data/maps/BalsamOffice/scripts.pory"
	special RemoveCameraObject
# 51 "data/maps/BalsamOffice/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 52 "data/maps/BalsamOffice/scripts.pory"
	goto startBalsamBedScript
	goto BalsamBedRight_1


BalsamBed::
# 59 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 60 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBedUp_Text_0, MSGBOX_YESNO
# 61 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BalsamBed_2
BalsamBed_1:
# 210 "data/maps/BalsamOffice/scripts.pory"
finishcript:
# 211 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 212 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamBed_2:
# 62 "data/maps/BalsamOffice/scripts.pory"
	fadescreen FADE_TO_BLACK
# 63 "data/maps/BalsamOffice/scripts.pory"
	special HealPlayerParty
# 64 "data/maps/BalsamOffice/scripts.pory"
	playse MUS_HEAL
# 65 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBedUp_Text_1
# 68 "data/maps/BalsamOffice/scripts.pory"
startBalsamBedScript:
# 69 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedwarning, BalsamBed_6
BalsamBed_4:
# 109 "data/maps/BalsamOffice/scripts.pory"
	goto_if_set balsamgavebedwarning, BalsamBed_12
BalsamBed_11:
# 202 "data/maps/BalsamOffice/scripts.pory"
	waitbuttonpress
# 203 "data/maps/BalsamOffice/scripts.pory"
	goto givenpermissiontosleep
BalsamBed_9:
# 206 "data/maps/BalsamOffice/scripts.pory"
givenpermissiontosleep:
# 207 "data/maps/BalsamOffice/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BalsamBed_1

BalsamBed_5:
# 70 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 71 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 72 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 4, 3
# 73 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_0
# 74 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 5, 3
# 75 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_1
# 76 "data/maps/BalsamOffice/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 77 "data/maps/BalsamOffice/scripts.pory"
	waitbuttonpress
# 78 "data/maps/BalsamOffice/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 80 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 81 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 82 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_0
# 84 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 85 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 86 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_1
# 88 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 89 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 90 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_2
# 92 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_2
# 93 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 94 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 95 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_MENACING
# 97 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_3
# 98 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 100 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_3
# 101 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 102 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 103 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 104 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 105 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamgavebedwarning
# 106 "data/maps/BalsamOffice/scripts.pory"
	goto finishcript
	goto BalsamBed_4

BalsamBed_6:
# 69 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedpermission, BalsamBed_5
	goto BalsamBed_4

BalsamBed_10:
# 112 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 113 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 114 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 5, 3
# 115 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_1
# 116 "data/maps/BalsamOffice/scripts.pory"
	waitbuttonpress
# 117 "data/maps/BalsamOffice/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 119 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 120 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 121 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_4
# 123 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_5
# 124 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_NO_ESCAPE
# 125 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 127 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset GOTSTARTER3, BalsamBed_16
# 134 "data/maps/BalsamOffice/scripts.pory"
	trainerbattle_no_intro TRAINER_BALSAM_NOPURACHU, Balsam_Outro
BalsamBed_15:
# 138 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 139 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 140 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_6
# 142 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 143 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 144 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_7
# 146 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 147 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 148 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_8
# 150 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 151 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_MENACING
# 152 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_9
# 153 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BalsamBed_Text_10, BalsamBed_Text_11
# 155 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BalsamBed_20
BalsamBed_19:
# 171 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BalsamBed_23
BalsamBed_22:
# 185 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 186 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 187 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_16
# 190 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_4
# 191 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 192 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 193 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 194 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamgavebedpermission
# 195 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 196 "data/maps/BalsamOffice/scripts.pory"
	goto finishcript
	goto BalsamBed_9

BalsamBed_12:
# 109 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedpermission, BalsamBed_10
	goto BalsamBed_11

BalsamBed_16:
# 129 "data/maps/BalsamOffice/scripts.pory"
	trainerbattle_no_intro TRAINER_BALSAM_PURACHU, Balsam_Outro
	goto BalsamBed_15

BalsamBed_20:
# 157 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 158 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 159 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_12
# 162 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 163 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 164 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_13
	goto BalsamBed_19

BalsamBed_23:
# 173 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 174 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 175 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_14
# 178 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 179 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 180 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_15
	goto BalsamBed_22


BalsamOfficeRotom::
# 222 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 223 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 225 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_0, MSGBOX_YESNO
# 227 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BalsamOfficeRotom_2
BalsamOfficeRotom_1:
# 257 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamOfficeRotom_2:
# 228 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_1
# 230 "data/maps/BalsamOffice/scripts.pory"
	playse SE_M_THUNDERBOLT
# 231 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8004, 2
# 232 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8005, 6
# 233 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8006, 4
# 234 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8007, 4
# 235 "data/maps/BalsamOffice/scripts.pory"
	special ShakeCamera
# 236 "data/maps/BalsamOffice/scripts.pory"
	waitse
# 237 "data/maps/BalsamOffice/scripts.pory"
	playmoncry SPECIES_ROTOM_MONITOR, CRY_MODE_NORMAL
# 238 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_2
# 239 "data/maps/BalsamOffice/scripts.pory"
	setwildbattle SPECIES_ROTOM_MONITOR, 2
# 240 "data/maps/BalsamOffice/scripts.pory"
	dowildbattle
# 241 "data/maps/BalsamOffice/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 243 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BalsamOfficeRotom_4
# 246 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BalsamOfficeRotom_5
# 249 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BalsamOfficeRotom_6
# 252 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BalsamOfficeRotom_7
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_4:
# 244 "data/maps/BalsamOffice/scripts.pory"
	call WonRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_5:
# 247 "data/maps/BalsamOffice/scripts.pory"
	call CaughtRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_6:
# 250 "data/maps/BalsamOffice/scripts.pory"
	call RanRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_7:
# 253 "data/maps/BalsamOffice/scripts.pory"
	call RanRotom
	goto BalsamOfficeRotom_1


EmptyRotomTV::
# 261 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 262 "data/maps/BalsamOffice/scripts.pory"
	msgbox EmptyRotomTV_Text_0
# 263 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


WonRotom::
# 267 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 268 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamofficerotom
# 269 "data/maps/BalsamOffice/scripts.pory"
	addobject 3
# 270 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsamofficeemptytv
	return


CaughtRotom::
# 274 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 275 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamofficerotom
	return


RanRotom::
# 279 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 280 "data/maps/BalsamOffice/scripts.pory"
	addobject 3
# 281 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsamofficeemptytv
# 282 "data/maps/BalsamOffice/scripts.pory"
	msgbox RanRotom_Text_0
	return


BalsamWalkman::
# 287 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 288 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_0
# 289 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BalsamWalkman_Text_1, BalsamWalkman_Text_2
# 290 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BalsamWalkman_2
BalsamWalkman_1:
# 296 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BalsamWalkman_5
BalsamWalkman_4:
# 298 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamWalkman_2:
# 291 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_FARTHESTLAND
# 292 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_3
	goto BalsamWalkman_1

BalsamWalkman_5:
# 296 "data/maps/BalsamOffice/scripts.pory"
	release
	goto BalsamWalkman_4


DemoGoodbye::
# 303 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 304 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 305 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_0
# 309 "data/maps/BalsamOffice/scripts.pory"
	playbgm MUS_NONE, TRUE
# 310 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 312 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 3, 7
# 313 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 314 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 3, 7
# 315 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 316 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, DemoGoodbye_Movement_0
# 317 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_0
# 318 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 319 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 320 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_1
# 321 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 322 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 323 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, DemoGoodbye_Movement_1
# 324 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_2
# 325 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 326 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 327 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_1
# 328 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_3
# 330 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 331 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 332 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, DemoGoodbye_Movement_1
# 333 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_4
# 334 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBedUp_Movement_0
# 335 "data/maps/BalsamOffice/scripts.pory"
	waitmovement 1
# 336 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 337 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 339 "data/maps/BalsamOffice/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 341 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8004, 2
# 342 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8005, 6
# 343 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8006, 4
# 344 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8007, 4
# 345 "data/maps/BalsamOffice/scripts.pory"
	special ShakeCamera
# 347 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 348 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 349 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_5
# 350 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 351 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ NULL ]
# 352 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BalsamBed_Movement_1
# 353 "data/maps/BalsamOffice/scripts.pory"
	playfirstmoncry
# 354 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_6
# 355 "data/maps/BalsamOffice/scripts.pory"
	playbgm MUS_RENBOUPARTY, TRUE
# 356 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 357 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 358 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 359 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_7
# 360 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_2
# 361 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 362 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_2
# 363 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 364 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_2
# 365 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 366 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_2
# 367 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


DemoJumpDown::
# 374 "data/maps/BalsamOffice/scripts.pory"
	playse SE_LEDGE
# 375 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoJumpDown_Movement_0
	return


DemoJumpUp::
# 379 "data/maps/BalsamOffice/scripts.pory"
	playse SE_LEDGE
# 380 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoJumpUp_Movement_0
	return


DemoJumpLeft::
# 384 "data/maps/BalsamOffice/scripts.pory"
	playse SE_LEDGE
# 385 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoJumpLeft_Movement_0
	return


BalsamBookshelf::
# 389 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 390 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBookshelf_Text_0
# 392 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamDegree::
# 397 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 398 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamDegree_Text_0
# 400 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


# 31 "data/maps/BalsamOffice/scripts.pory"
BalsamBedUp_Movement_0:
# 31 "data/maps/BalsamOffice/scripts.pory"
	walk_down
	step_end

# 49 "data/maps/BalsamOffice/scripts.pory"
BalsamBedRight_Movement_0:
# 49 "data/maps/BalsamOffice/scripts.pory"
	walk_up
# 49 "data/maps/BalsamOffice/scripts.pory"
	walk_left
	step_end

# 73 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_0:
# 73 "data/maps/BalsamOffice/scripts.pory"
	face_right
	step_end

# 75 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_1:
# 75 "data/maps/BalsamOffice/scripts.pory"
	face_left
	step_end

# 92 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_2:
# 92 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 92 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 92 "data/maps/BalsamOffice/scripts.pory"
	face_up
	step_end

# 100 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_3:
# 100 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 100 "data/maps/BalsamOffice/scripts.pory"
	walk_down
	step_end

# 190 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_4:
# 190 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 190 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 190 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 190 "data/maps/BalsamOffice/scripts.pory"
	walk_down
	step_end

# 316 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_0:
# 316 "data/maps/BalsamOffice/scripts.pory"
	walk_up
# 316 "data/maps/BalsamOffice/scripts.pory"
	face_left
	step_end

# 323 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_1:
# 323 "data/maps/BalsamOffice/scripts.pory"
	face_down
	step_end

# 360 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_2:
# 360 "data/maps/BalsamOffice/scripts.pory"
	face_left
# 360 "data/maps/BalsamOffice/scripts.pory"
	face_up
# 360 "data/maps/BalsamOffice/scripts.pory"
	face_right
# 360 "data/maps/BalsamOffice/scripts.pory"
	face_down
	step_end

# 375 "data/maps/BalsamOffice/scripts.pory"
DemoJumpDown_Movement_0:
# 375 "data/maps/BalsamOffice/scripts.pory"
	jump_down
	step_end

# 380 "data/maps/BalsamOffice/scripts.pory"
DemoJumpUp_Movement_0:
# 380 "data/maps/BalsamOffice/scripts.pory"
	jump_up
	step_end

# 385 "data/maps/BalsamOffice/scripts.pory"
DemoJumpLeft_Movement_0:
# 385 "data/maps/BalsamOffice/scripts.pory"
	jump_left
	step_end

BalsamBedUp_Text_0:
# 24 "data/maps/BalsamOffice/scripts.pory"
	.string "Rest for a bit?$"

BalsamBedUp_Text_1:
# 29 "data/maps/BalsamOffice/scripts.pory"
	.string "You rest for a while.$"

BalsamBed_Text_0:
# 82 "data/maps/BalsamOffice/scripts.pory"
	.string "{PLAYER}... what do you think you're\n"
	.string "doing? This is not a guest room.$"

BalsamBed_Text_1:
# 86 "data/maps/BalsamOffice/scripts.pory"
	.string "This is MY room.$"

BalsamBed_Text_2:
# 90 "data/maps/BalsamOffice/scripts.pory"
	.string "If you're tired, your house is literally\n"
	.string "behind the lab.\p"
	.string "Now leave. This is my one place to relax,\n"
	.string "and I don't want squatters around.$"

BalsamBed_Text_3:
# 97 "data/maps/BalsamOffice/scripts.pory"
	.string "Don't do this ever again… or ELSE.$"

BalsamBed_Text_4:
# 121 "data/maps/BalsamOffice/scripts.pory"
	.string "{PLAYER}... don't say I didn't warn\n"
	.string "you.$"

BalsamBed_Text_5:
# 123 "data/maps/BalsamOffice/scripts.pory"
	.string "If words don't work with you, perhaps a\n"
	.string "good old beating will!$"

BalsamBed_Text_6:
# 140 "data/maps/BalsamOffice/scripts.pory"
	.string "You're making me regret helping you out,\n"
	.string "{PLAYER}.$"

BalsamBed_Text_7:
# 144 "data/maps/BalsamOffice/scripts.pory"
	.string "I lent you a hand when you were at your\n"
	.string "lowest, and this is how you thank me?$"

BalsamBed_Text_8:
# 148 "data/maps/BalsamOffice/scripts.pory"
	.string "Why are you even sleeping here? Just to\n"
	.string "see my reaction?\p"
	.string "You think this is just one of your…$"

BalsamBed_Text_9:
# 152 "data/maps/BalsamOffice/scripts.pory"
	.string "Videogames?$"

BalsamBed_Text_10:
# 153 "data/maps/BalsamOffice/scripts.pory"
	.string "Yes!$"

BalsamBed_Text_11:
# 153 "data/maps/BalsamOffice/scripts.pory"
	.string "No. I'm sorry.$"

BalsamBed_Text_12:
# 159 "data/maps/BalsamOffice/scripts.pory"
	.string "… right. I should have signed you up for\n"
	.string "more therapy sessions. You have a few\l"
	.string "screws lose, don't you?$"

BalsamBed_Text_13:
# 164 "data/maps/BalsamOffice/scripts.pory"
	.string "...\p"
	.string "Sorry. That was a bit too much. I know\n"
	.string "you've had it rough.\p"
	.string "I understand if you don't want to sleep\n"
	.string "at home. It brings you painful memories,\l"
	.string "doesn't it?\p"
	.string "You can sleep here if that's the case.\p"
	.string "I mostly just doze on my chair these\n"
	.string "days anyway.$"

BalsamBed_Text_14:
# 175 "data/maps/BalsamOffice/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Apology accepted. Perhaps I have\n"
	.string "overreacted a bit too.$"

BalsamBed_Text_15:
# 180 "data/maps/BalsamOffice/scripts.pory"
	.string "I understand if you don't want to sleep\n"
	.string "at home. It brings you painful memories,\l"
	.string "right?\p"
	.string "You can sleep here if that's the case. I\n"
	.string "mostly just doze on my chair these days\l"
	.string "anyway.$"

BalsamBed_Text_16:
# 187 "data/maps/BalsamOffice/scripts.pory"
	.string "Just don't make a mess of the place,\n"
	.string "alright?$"

BalsamOfficeRotom_Text_0:
# 225 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is emitting a weird static.\nShould I turn it off?$"

BalsamOfficeRotom_Text_1:
# 228 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV begins to shake, then it\n"
	.string "attacks!$"

BalsamOfficeRotom_Text_2:
# 238 "data/maps/BalsamOffice/scripts.pory"
	.string "Roooom!$"

EmptyRotomTV_Text_0:
# 262 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is turned off. If there's\n"
	.string "anything inside, it's quiet for now.$"

RanRotom_Text_0:
# 282 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is left alone for now...$"

BalsamWalkman_Text_0:
# 288 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a portable music player.$"

BalsamWalkman_Text_1:
# 289 "data/maps/BalsamOffice/scripts.pory"
	.string "Listen to it$"

BalsamWalkman_Text_2:
# 289 "data/maps/BalsamOffice/scripts.pory"
	.string "Don't listen$"

BalsamWalkman_Text_3:
# 292 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - the Farthest Land.$"

DemoGoodbye_Text_0:
# 305 "data/maps/BalsamOffice/scripts.pory"
	.string "This is the end of the update!\n"
	.string "Congratulations on making it this far.\p"
	.string "This is the third update I post, and I'm\n"
	.string "always happy to see the warm reaction\l"
	.string "to the clips.\p"
	.string "This hack's development, like its player\n"
	.string "characters, moves slowly...\p"
	.string "But it does so with intention in each\n"
	.string "step.\p"
	.string "I hope that you, wherever you're\n"
	.string "reading this, can also...$"

DemoGoodbye_Text_1:
# 320 "data/maps/BalsamOffice/scripts.pory"
	.string "Stop the sentimental crap. Nobody\n"
	.string "cares. This clip is already too long.$"

DemoGoodbye_Text_2:
# 324 "data/maps/BalsamOffice/scripts.pory"
	.string "And you, whoever loser is reading this.\n"
	.string "Don't hold your breath for this hack's\l"
	.string "release.$"

DemoGoodbye_Text_3:
# 328 "data/maps/BalsamOffice/scripts.pory"
	.string "This nutjob is putting sign scripts in\n"
	.string "half of damn tiles and setting phone\l"
	.string "calls for random NPCs, as if people are\l"
	.string "going to read them.$"

DemoGoodbye_Text_4:
# 333 "data/maps/BalsamOffice/scripts.pory"
	.string "You'll live in an actual corporate\n"
	.string "dystopia by the time this is done.\l"
	.string "Later.$"

DemoGoodbye_Text_5:
# 349 "data/maps/BalsamOffice/scripts.pory"
	.string "...$"

DemoGoodbye_Text_6:
# 354 "data/maps/BalsamOffice/scripts.pory"
	.string "Pura...?$"

DemoGoodbye_Text_7:
# 359 "data/maps/BalsamOffice/scripts.pory"
	.string "HAHAHA - SHE'S RIGHT! SEE YOU IN MANY\n"
	.string "MONTHS!$"

BalsamBookshelf_Text_0:
# 390 "data/maps/BalsamOffice/scripts.pory"
	.string "Among the many books on Pokémon\n"
	.string "science, there's a photo album...\p"
	.string "The cover features a photo of a couple\n"
	.string "of kids, building a sand castle on a\l"
	.string "clean beach.$"

BalsamDegree_Text_0:
# 398 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a framed degree of higher\n"
	.string "education. It reads as follows:\p"
	.string "'University of Alola, Degree in Pokémon\n"
	.string "Genetics: Miss Balsam ¥?¿¥i.\p"
	.string "The surname has been crossed out.$"

Balsam_Outro::
# 216 "data/maps/BalsamOffice/scripts.pory"
	.string "...$"
