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
# 213 "data/maps/BalsamOffice/scripts.pory"
finishcript:
# 214 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 215 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamBed_2:
# 62 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 63 "data/maps/BalsamOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 64 "data/maps/BalsamOffice/scripts.pory"
	special HealPlayerParty
# 65 "data/maps/BalsamOffice/scripts.pory"
	playse MUS_HEAL
# 66 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBedUp_Text_1
# 69 "data/maps/BalsamOffice/scripts.pory"
startBalsamBedScript:
# 70 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedwarning, BalsamBed_6
BalsamBed_4:
# 112 "data/maps/BalsamOffice/scripts.pory"
	goto_if_set balsamgavebedwarning, BalsamBed_12
BalsamBed_11:
# 205 "data/maps/BalsamOffice/scripts.pory"
	waitbuttonpress
# 206 "data/maps/BalsamOffice/scripts.pory"
	goto givenpermissiontosleep
BalsamBed_9:
# 209 "data/maps/BalsamOffice/scripts.pory"
givenpermissiontosleep:
# 210 "data/maps/BalsamOffice/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto BalsamBed_1

BalsamBed_5:
# 71 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 72 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 73 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 4, 3
# 74 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_0
# 75 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 5, 3
# 76 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_1
# 77 "data/maps/BalsamOffice/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 78 "data/maps/BalsamOffice/scripts.pory"
	waitbuttonpress
# 79 "data/maps/BalsamOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 81 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 82 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 83 "data/maps/BalsamOffice/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_0
# 86 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 87 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 88 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_1
# 90 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 91 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 92 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_2
# 94 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_2
# 95 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 96 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 97 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_MENACING
# 99 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_3
# 100 "data/maps/BalsamOffice/scripts.pory"
	closemessage
# 101 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 103 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_3
# 104 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 105 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 106 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 107 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 108 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamgavebedwarning
# 109 "data/maps/BalsamOffice/scripts.pory"
	goto finishcript
	goto BalsamBed_4

BalsamBed_6:
# 70 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedpermission, BalsamBed_5
	goto BalsamBed_4

BalsamBed_10:
# 115 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 116 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 117 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 5, 3
# 118 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_1
# 119 "data/maps/BalsamOffice/scripts.pory"
	waitbuttonpress
# 120 "data/maps/BalsamOffice/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 122 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 123 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 124 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_4
# 126 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_5
# 127 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_NO_ESCAPE
# 128 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 130 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset GOTSTARTER3, BalsamBed_16
# 137 "data/maps/BalsamOffice/scripts.pory"
	trainerbattle_no_intro TRAINER_BALSAM_NOPURACHU, Balsam_Outro
BalsamBed_15:
# 141 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 142 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 143 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_6
# 145 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 146 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 147 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_7
# 149 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 150 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 151 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_8
# 153 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 154 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_MENACING
# 155 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_9
# 156 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BalsamBed_Text_10, BalsamBed_Text_11
# 158 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BalsamBed_20
BalsamBed_19:
# 174 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BalsamBed_23
BalsamBed_22:
# 188 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 189 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 190 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_16
# 193 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_4
# 194 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 195 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 196 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 197 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamgavebedpermission
# 198 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 199 "data/maps/BalsamOffice/scripts.pory"
	goto finishcript
	goto BalsamBed_9

BalsamBed_12:
# 112 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedpermission, BalsamBed_10
	goto BalsamBed_11

BalsamBed_16:
# 132 "data/maps/BalsamOffice/scripts.pory"
	trainerbattle_no_intro TRAINER_BALSAM_PURACHU, Balsam_Outro
	goto BalsamBed_15

BalsamBed_20:
# 160 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 161 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 162 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_12
# 165 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 166 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 167 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_13
	goto BalsamBed_19

BalsamBed_23:
# 176 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 177 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 178 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_14
# 181 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 182 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 183 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_15
	goto BalsamBed_22


BalsamOfficeRotom::
# 225 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 226 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 228 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_0, MSGBOX_YESNO
# 230 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BalsamOfficeRotom_2
BalsamOfficeRotom_1:
# 260 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamOfficeRotom_2:
# 231 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_1
# 233 "data/maps/BalsamOffice/scripts.pory"
	playse SE_M_THUNDERBOLT
# 234 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8004, 2
# 235 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8005, 6
# 236 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8006, 4
# 237 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8007, 4
# 238 "data/maps/BalsamOffice/scripts.pory"
	special ShakeCamera
# 239 "data/maps/BalsamOffice/scripts.pory"
	waitse
# 240 "data/maps/BalsamOffice/scripts.pory"
	playmoncry SPECIES_ROTOM_MONITOR, CRY_MODE_NORMAL
# 241 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_2
# 242 "data/maps/BalsamOffice/scripts.pory"
	setwildbattle SPECIES_ROTOM_MONITOR, 2
# 243 "data/maps/BalsamOffice/scripts.pory"
	dowildbattle
# 244 "data/maps/BalsamOffice/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 246 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BalsamOfficeRotom_4
# 249 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BalsamOfficeRotom_5
# 252 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BalsamOfficeRotom_6
# 255 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BalsamOfficeRotom_7
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_4:
# 247 "data/maps/BalsamOffice/scripts.pory"
	call WonRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_5:
# 250 "data/maps/BalsamOffice/scripts.pory"
	call CaughtRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_6:
# 253 "data/maps/BalsamOffice/scripts.pory"
	call RanRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_7:
# 256 "data/maps/BalsamOffice/scripts.pory"
	call RanRotom
	goto BalsamOfficeRotom_1


EmptyRotomTV::
# 264 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 265 "data/maps/BalsamOffice/scripts.pory"
	msgbox EmptyRotomTV_Text_0
# 266 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


WonRotom::
# 270 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 271 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamofficerotom
# 272 "data/maps/BalsamOffice/scripts.pory"
	addobject 3
# 273 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsamofficeemptytv
	return


CaughtRotom::
# 277 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 278 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamofficerotom
	return


RanRotom::
# 282 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 283 "data/maps/BalsamOffice/scripts.pory"
	addobject 3
# 284 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsamofficeemptytv
# 285 "data/maps/BalsamOffice/scripts.pory"
	msgbox RanRotom_Text_0
	return


BalsamWalkman::
# 290 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 291 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_0
# 292 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BalsamWalkman_Text_1, BalsamWalkman_Text_2, BalsamWalkman_Text_3, BalsamWalkman_Text_4
# 293 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BalsamWalkman_2
BalsamWalkman_1:
# 299 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BalsamWalkman_5
BalsamWalkman_4:
# 305 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BalsamWalkman_8
BalsamWalkman_7:
# 311 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq BalsamWalkman_11
BalsamWalkman_10:
# 313 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamWalkman_2:
# 294 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_GYMNOPEDIE
# 295 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_5
	goto BalsamWalkman_1

BalsamWalkman_5:
# 300 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_AIRONG
# 301 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_6
	goto BalsamWalkman_4

BalsamWalkman_8:
# 306 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_FARTHESTLAND
# 307 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_7
	goto BalsamWalkman_7

BalsamWalkman_11:
# 311 "data/maps/BalsamOffice/scripts.pory"
	release
	goto BalsamWalkman_10


DemoGoodbye::
# 318 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 319 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 320 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_0
# 324 "data/maps/BalsamOffice/scripts.pory"
	playbgm MUS_NONE, TRUE
# 325 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 327 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 3, 7
# 328 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 329 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 3, 7
# 330 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 331 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, DemoGoodbye_Movement_0
# 332 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_0
# 333 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 334 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 335 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_1
# 336 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 337 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 338 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, DemoGoodbye_Movement_1
# 339 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_2
# 340 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 341 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 342 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_1
# 343 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_3
# 345 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 346 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 347 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, DemoGoodbye_Movement_1
# 348 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_4
# 349 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBedUp_Movement_0
# 350 "data/maps/BalsamOffice/scripts.pory"
	waitmovement 1
# 351 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 352 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 354 "data/maps/BalsamOffice/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 356 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8004, 2
# 357 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8005, 6
# 358 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8006, 4
# 359 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8007, 4
# 360 "data/maps/BalsamOffice/scripts.pory"
	special ShakeCamera
# 362 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 363 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 364 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_5
# 365 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 366 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ NULL ]
# 367 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BalsamBed_Movement_1
# 368 "data/maps/BalsamOffice/scripts.pory"
	playfirstmoncry
# 369 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_6
# 370 "data/maps/BalsamOffice/scripts.pory"
	playbgm MUS_RENBOUPARTY, TRUE
# 371 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 372 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 373 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 374 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_7
# 375 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_2
# 376 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 377 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_2
# 378 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 379 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_2
# 380 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 381 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_2
# 382 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


DemoJumpDown::
# 389 "data/maps/BalsamOffice/scripts.pory"
	playse SE_LEDGE
# 390 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoJumpDown_Movement_0
	return


DemoJumpUp::
# 394 "data/maps/BalsamOffice/scripts.pory"
	playse SE_LEDGE
# 395 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoJumpUp_Movement_0
	return


DemoJumpLeft::
# 399 "data/maps/BalsamOffice/scripts.pory"
	playse SE_LEDGE
# 400 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoJumpLeft_Movement_0
	return


BalsamBookshelf::
# 404 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 405 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBookshelf_Text_0
# 407 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamDegree::
# 412 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 413 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamDegree_Text_0
# 415 "data/maps/BalsamOffice/scripts.pory"
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

# 74 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_0:
# 74 "data/maps/BalsamOffice/scripts.pory"
	face_right
	step_end

# 76 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_1:
# 76 "data/maps/BalsamOffice/scripts.pory"
	face_left
	step_end

# 94 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_2:
# 94 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 94 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 94 "data/maps/BalsamOffice/scripts.pory"
	face_up
	step_end

# 103 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_3:
# 103 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 103 "data/maps/BalsamOffice/scripts.pory"
	walk_down
	step_end

# 193 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_4:
# 193 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 193 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 193 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 193 "data/maps/BalsamOffice/scripts.pory"
	walk_down
	step_end

# 331 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_0:
# 331 "data/maps/BalsamOffice/scripts.pory"
	walk_up
# 331 "data/maps/BalsamOffice/scripts.pory"
	face_left
	step_end

# 338 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_1:
# 338 "data/maps/BalsamOffice/scripts.pory"
	face_down
	step_end

# 375 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_2:
# 375 "data/maps/BalsamOffice/scripts.pory"
	face_left
# 375 "data/maps/BalsamOffice/scripts.pory"
	face_up
# 375 "data/maps/BalsamOffice/scripts.pory"
	face_right
# 375 "data/maps/BalsamOffice/scripts.pory"
	face_down
	step_end

# 390 "data/maps/BalsamOffice/scripts.pory"
DemoJumpDown_Movement_0:
# 390 "data/maps/BalsamOffice/scripts.pory"
	jump_down
	step_end

# 395 "data/maps/BalsamOffice/scripts.pory"
DemoJumpUp_Movement_0:
# 395 "data/maps/BalsamOffice/scripts.pory"
	jump_up
	step_end

# 400 "data/maps/BalsamOffice/scripts.pory"
DemoJumpLeft_Movement_0:
# 400 "data/maps/BalsamOffice/scripts.pory"
	jump_left
	step_end

BalsamBedUp_Text_0:
# 24 "data/maps/BalsamOffice/scripts.pory"
	.string "Rest for a bit?$"

BalsamBedUp_Text_1:
# 29 "data/maps/BalsamOffice/scripts.pory"
	.string "You rest for a while.$"

BalsamBed_Text_0:
# 84 "data/maps/BalsamOffice/scripts.pory"
	.string "{PLAYER}... what do you think you're\n"
	.string "doing? This is not a guest room.$"

BalsamBed_Text_1:
# 88 "data/maps/BalsamOffice/scripts.pory"
	.string "This is MY room.$"

BalsamBed_Text_2:
# 92 "data/maps/BalsamOffice/scripts.pory"
	.string "If you're tired, your house is literally\n"
	.string "behind the lab.\p"
	.string "Now leave. This is my one place to relax,\n"
	.string "and I don't want squatters around.$"

BalsamBed_Text_3:
# 99 "data/maps/BalsamOffice/scripts.pory"
	.string "Don't do this ever again… or ELSE.$"

BalsamBed_Text_4:
# 124 "data/maps/BalsamOffice/scripts.pory"
	.string "{PLAYER}... don't say I didn't warn\n"
	.string "you.$"

BalsamBed_Text_5:
# 126 "data/maps/BalsamOffice/scripts.pory"
	.string "If words don't work with you, perhaps a\n"
	.string "good old beating will!$"

BalsamBed_Text_6:
# 143 "data/maps/BalsamOffice/scripts.pory"
	.string "You're making me regret helping you out,\n"
	.string "{PLAYER}.$"

BalsamBed_Text_7:
# 147 "data/maps/BalsamOffice/scripts.pory"
	.string "I lent you a hand when you were at your\n"
	.string "lowest, and this is how you thank me?$"

BalsamBed_Text_8:
# 151 "data/maps/BalsamOffice/scripts.pory"
	.string "Why are you even sleeping here? Just to\n"
	.string "see my reaction?\p"
	.string "You think this is just one of your…$"

BalsamBed_Text_9:
# 155 "data/maps/BalsamOffice/scripts.pory"
	.string "Videogames?$"

BalsamBed_Text_10:
# 156 "data/maps/BalsamOffice/scripts.pory"
	.string "Yes!$"

BalsamBed_Text_11:
# 156 "data/maps/BalsamOffice/scripts.pory"
	.string "No. I'm sorry.$"

BalsamBed_Text_12:
# 162 "data/maps/BalsamOffice/scripts.pory"
	.string "… right. I should have signed you up for\n"
	.string "more therapy sessions. You have a few\l"
	.string "screws lose, don't you?$"

BalsamBed_Text_13:
# 167 "data/maps/BalsamOffice/scripts.pory"
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
# 178 "data/maps/BalsamOffice/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Apology accepted. Perhaps I have\n"
	.string "overreacted a bit too.$"

BalsamBed_Text_15:
# 183 "data/maps/BalsamOffice/scripts.pory"
	.string "I understand if you don't want to sleep\n"
	.string "at home. It brings you painful memories,\l"
	.string "right?\p"
	.string "You can sleep here if that's the case. I\n"
	.string "mostly just doze on my chair these days\l"
	.string "anyway.$"

BalsamBed_Text_16:
# 190 "data/maps/BalsamOffice/scripts.pory"
	.string "Just don't make a mess of the place,\n"
	.string "alright?$"

BalsamOfficeRotom_Text_0:
# 228 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is emitting a weird static.\nShould I turn it off?$"

BalsamOfficeRotom_Text_1:
# 231 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV begins to shake, then it\n"
	.string "attacks!$"

BalsamOfficeRotom_Text_2:
# 241 "data/maps/BalsamOffice/scripts.pory"
	.string "Roooom!$"

EmptyRotomTV_Text_0:
# 265 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is turned off. If there's\n"
	.string "anything inside, it's quiet for now.$"

RanRotom_Text_0:
# 285 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is left alone for now...$"

BalsamWalkman_Text_0:
# 291 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a casette player. The casette\n"
	.string "contains several songs.$"

BalsamWalkman_Text_1:
# 292 "data/maps/BalsamOffice/scripts.pory"
	.string "Gymnopédie No. 1$"

BalsamWalkman_Text_2:
# 292 "data/maps/BalsamOffice/scripts.pory"
	.string "Air on the G String$"

BalsamWalkman_Text_3:
# 292 "data/maps/BalsamOffice/scripts.pory"
	.string "The Farthest Land$"

BalsamWalkman_Text_4:
# 292 "data/maps/BalsamOffice/scripts.pory"
	.string "Leave$"

BalsamWalkman_Text_5:
# 295 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - Gymnopédie No. 1.$"

BalsamWalkman_Text_6:
# 301 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - Air on the G String.$"

BalsamWalkman_Text_7:
# 307 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - the Farthest Land.$"

DemoGoodbye_Text_0:
# 320 "data/maps/BalsamOffice/scripts.pory"
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
# 335 "data/maps/BalsamOffice/scripts.pory"
	.string "Stop the sentimental crap. Nobody\n"
	.string "cares. This clip is already too long.$"

DemoGoodbye_Text_2:
# 339 "data/maps/BalsamOffice/scripts.pory"
	.string "And you, whoever loser is reading this.\n"
	.string "Don't hold your breath for this hack's\l"
	.string "release.$"

DemoGoodbye_Text_3:
# 343 "data/maps/BalsamOffice/scripts.pory"
	.string "This nutjob is putting sign scripts in\n"
	.string "half of damn tiles and setting phone\l"
	.string "calls for random NPCs, as if people are\l"
	.string "going to read them.$"

DemoGoodbye_Text_4:
# 348 "data/maps/BalsamOffice/scripts.pory"
	.string "You'll live in an actual corporate\n"
	.string "dystopia by the time this is done.\l"
	.string "Later.$"

DemoGoodbye_Text_5:
# 364 "data/maps/BalsamOffice/scripts.pory"
	.string "...$"

DemoGoodbye_Text_6:
# 369 "data/maps/BalsamOffice/scripts.pory"
	.string "Pura...?$"

DemoGoodbye_Text_7:
# 374 "data/maps/BalsamOffice/scripts.pory"
	.string "HAHAHA - SHE'S RIGHT! SEE YOU IN MANY\n"
	.string "MONTHS!$"

BalsamBookshelf_Text_0:
# 405 "data/maps/BalsamOffice/scripts.pory"
	.string "Among the many books on Pokémon\n"
	.string "science, there's a photo album...\p"
	.string "The cover features a photo of a couple\n"
	.string "of kids, building a sand castle on a\l"
	.string "clean beach.$"

BalsamDegree_Text_0:
# 413 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a framed degree of higher\n"
	.string "education. It reads as follows:\p"
	.string "'University of Alola, Degree in Pokémon\n"
	.string "Genetics: Miss Balsam ¥?¿¥i.\p"
	.string "The surname has been crossed out.$"

Balsam_Outro::
# 219 "data/maps/BalsamOffice/scripts.pory"
	.string "...$"
