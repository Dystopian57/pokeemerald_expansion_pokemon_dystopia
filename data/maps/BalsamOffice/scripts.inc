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
# 232 "data/maps/BalsamOffice/scripts.pory"
finishcript:
# 233 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 234 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamBed_2:
# 62 "data/maps/BalsamOffice/scripts.pory"
	closemessage
# 63 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 64 "data/maps/BalsamOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 65 "data/maps/BalsamOffice/scripts.pory"
	special HealPlayerParty
# 66 "data/maps/BalsamOffice/scripts.pory"
	playse MUS_HEAL
# 67 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 68 "data/maps/BalsamOffice/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 71 "data/maps/BalsamOffice/scripts.pory"
startBalsamBedScript:
# 72 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedwarning, BalsamBed_6
BalsamBed_4:
# 117 "data/maps/BalsamOffice/scripts.pory"
	goto_if_set balsamgavebedwarning, BalsamBed_12
BalsamBed_11:
# 223 "data/maps/BalsamOffice/scripts.pory"
	goto givenpermissiontosleep
BalsamBed_9:
# 226 "data/maps/BalsamOffice/scripts.pory"
givenpermissiontosleep:
# 227 "data/maps/BalsamOffice/scripts.pory"
	waitse
# 228 "data/maps/BalsamOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 229 "data/maps/BalsamOffice/scripts.pory"
	fadeinbgm 1
	goto BalsamBed_1

BalsamBed_5:
# 73 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 74 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 75 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 4, 3
# 76 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_0
# 77 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 5, 3
# 78 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_1
# 79 "data/maps/BalsamOffice/scripts.pory"
	waitse
# 80 "data/maps/BalsamOffice/scripts.pory"
	fadeinbgm 1
# 81 "data/maps/BalsamOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 82 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 83 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 84 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_0
# 85 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 86 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 87 "data/maps/BalsamOffice/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_1
# 90 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 91 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 92 "data/maps/BalsamOffice/scripts.pory"
	playse SE_M_SWAGGER2
# 93 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_2
# 95 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 96 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 97 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_3
# 99 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_2
# 100 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 101 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 102 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_MENACING
# 103 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_3
# 104 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_4
# 105 "data/maps/BalsamOffice/scripts.pory"
	closemessage
# 106 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 108 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_4
# 109 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 110 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 111 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 112 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 113 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamgavebedwarning
# 114 "data/maps/BalsamOffice/scripts.pory"
	goto finishcript
	goto BalsamBed_4

BalsamBed_6:
# 72 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedpermission, BalsamBed_5
	goto BalsamBed_4

BalsamBed_10:
# 120 "data/maps/BalsamOffice/scripts.pory"
	closemessage
# 121 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 122 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 123 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 5, 3
# 124 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_1
# 125 "data/maps/BalsamOffice/scripts.pory"
	waitse
# 126 "data/maps/BalsamOffice/scripts.pory"
	fadeinbgm 1
# 127 "data/maps/BalsamOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 128 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 129 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 130 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_5
# 133 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 134 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 135 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_6
# 136 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 137 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 138 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_7
# 139 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_NO_ESCAPE
# 140 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 141 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 142 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset GOTSTARTER3, BalsamBed_16
# 149 "data/maps/BalsamOffice/scripts.pory"
	trainerbattle_no_intro TRAINER_BALSAM_NOPURACHU, Balsam_Outro
BalsamBed_15:
# 152 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 153 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 154 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 155 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 156 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_8
# 158 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 159 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 160 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_9
# 162 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 163 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 164 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_10
# 166 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 167 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_MENACING
# 168 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_11
# 169 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BalsamBed_Text_12, BalsamBed_Text_13
# 171 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BalsamBed_20
BalsamBed_19:
# 190 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BalsamBed_23
BalsamBed_22:
# 204 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 205 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 206 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_20
# 207 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 208 "data/maps/BalsamOffice/scripts.pory"
	closemessage
# 211 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_7
# 212 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 213 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 214 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 215 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamgavebedpermission
# 216 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 217 "data/maps/BalsamOffice/scripts.pory"
	goto finishcript
	goto BalsamBed_9

BalsamBed_12:
# 117 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedpermission, BalsamBed_10
	goto BalsamBed_11

BalsamBed_16:
# 144 "data/maps/BalsamOffice/scripts.pory"
	trainerbattle_no_intro TRAINER_BALSAM_PURACHU, Balsam_Outro
	goto BalsamBed_15

BalsamBed_20:
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
# 181 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_5
# 182 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 183 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_16
# 184 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_6
# 185 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 186 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_17
	goto BalsamBed_19

BalsamBed_23:
# 192 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 193 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 194 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_18
# 197 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 198 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 199 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_19
	goto BalsamBed_22


BalsamOfficeRotom::
# 244 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 245 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 247 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_0, MSGBOX_YESNO
# 249 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BalsamOfficeRotom_2
BalsamOfficeRotom_1:
# 279 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamOfficeRotom_2:
# 250 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_1
# 252 "data/maps/BalsamOffice/scripts.pory"
	playse SE_M_THUNDERBOLT
# 253 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8004, 2
# 254 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8005, 6
# 255 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8006, 4
# 256 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8007, 4
# 257 "data/maps/BalsamOffice/scripts.pory"
	special ShakeCamera
# 258 "data/maps/BalsamOffice/scripts.pory"
	waitse
# 259 "data/maps/BalsamOffice/scripts.pory"
	playmoncry SPECIES_ROTOM_MONITOR, CRY_MODE_NORMAL
# 260 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_2
# 261 "data/maps/BalsamOffice/scripts.pory"
	setwildbattle SPECIES_ROTOM_MONITOR, 5
# 262 "data/maps/BalsamOffice/scripts.pory"
	dowildbattle
# 263 "data/maps/BalsamOffice/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 265 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BalsamOfficeRotom_4
# 268 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BalsamOfficeRotom_5
# 271 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BalsamOfficeRotom_6
# 274 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BalsamOfficeRotom_7
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_4:
# 266 "data/maps/BalsamOffice/scripts.pory"
	call WonRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_5:
# 269 "data/maps/BalsamOffice/scripts.pory"
	call CaughtRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_6:
# 272 "data/maps/BalsamOffice/scripts.pory"
	call RanRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_7:
# 275 "data/maps/BalsamOffice/scripts.pory"
	call RanRotom
	goto BalsamOfficeRotom_1


WonRotom::
# 283 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 284 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamofficerotom
# 285 "data/maps/BalsamOffice/scripts.pory"
	addobject 3
# 286 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsamofficeemptytv
	return


CaughtRotom::
# 290 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 291 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamofficerotom
	return


RanRotom::
# 295 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 296 "data/maps/BalsamOffice/scripts.pory"
	addobject 3
# 297 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsamofficeemptytv
# 298 "data/maps/BalsamOffice/scripts.pory"
	msgbox RanRotom_Text_0
	return


EmptyRotomTV::
# 302 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 303 "data/maps/BalsamOffice/scripts.pory"
	msgbox EmptyRotomTV_Text_0
# 304 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol2BalsamOffice::
# 308 "data/maps/BalsamOffice/scripts.pory"
	lock
# 309 "data/maps/BalsamOffice/scripts.pory"
	msgbox KantonianWarHistoryVol2BalsamOffice_Text_0
# 311 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, KantonianWarHistoryVol2BalsamOffice_Text_1, KantonianWarHistoryVol2BalsamOffice_Text_2
# 313 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol2BalsamOffice_2
KantonianWarHistoryVol2BalsamOffice_1:
# 322 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol2BalsamOffice_5
KantonianWarHistoryVol2BalsamOffice_4:
# 325 "data/maps/BalsamOffice/scripts.pory"
endkantonianwar2:
# 326 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

KantonianWarHistoryVol2BalsamOffice_2:
# 314 "data/maps/BalsamOffice/scripts.pory"
	showmonpic SPECIES_AUDINO_MEGA, 10, 3
# 315 "data/maps/BalsamOffice/scripts.pory"
	msgbox KantonianWarHistoryVol2BalsamOffice_Text_3
# 317 "data/maps/BalsamOffice/scripts.pory"
	hidemonpic
# 318 "data/maps/BalsamOffice/scripts.pory"
	showmonpic SPECIES_AUDINO_MEGA, 10, 3
# 319 "data/maps/BalsamOffice/scripts.pory"
	msgbox KantonianWarHistoryVol2BalsamOffice_Text_4
# 320 "data/maps/BalsamOffice/scripts.pory"
	hidemonpic
# 321 "data/maps/BalsamOffice/scripts.pory"
	goto endkantonianwar2
	goto KantonianWarHistoryVol2BalsamOffice_1

KantonianWarHistoryVol2BalsamOffice_5:
# 323 "data/maps/BalsamOffice/scripts.pory"
	goto endkantonianwar2
	goto KantonianWarHistoryVol2BalsamOffice_4


BalsamOfficeBooks::
# 330 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 331 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeBooks_Text_0
# 332 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamOfficeBox::
# 336 "data/maps/BalsamOffice/scripts.pory"
	lock
# 337 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeBox_Text_0
# 338 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamOfficeRadioStation::
# 342 "data/maps/BalsamOffice/scripts.pory"
	lock
# 343 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRadioStation_Text_0
# 344 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamOfficeVideoPlayer::
# 348 "data/maps/BalsamOffice/scripts.pory"
	lock
# 349 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeVideoPlayer_Text_0
# 350 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamOfficeTrashCan::
# 354 "data/maps/BalsamOffice/scripts.pory"
	lock
# 355 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset FLAG_ITEM_BALSAM_OFFICE_TRASH, BalsamOfficeTrashCan_2
# 360 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeTrashCan_Text_1
BalsamOfficeTrashCan_1:
# 361 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamOfficeTrashCan_2:
# 356 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeTrashCan_Text_0
# 357 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_STRANGE_SOUVENIR
# 358 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_ITEM_BALSAM_OFFICE_TRASH
	goto BalsamOfficeTrashCan_1


BalsamWalkman::
# 366 "data/maps/BalsamOffice/scripts.pory"
	lock
# 368 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamwalkmancasette, BalsamWalkman_2
# 374 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_1
BalsamWalkman_1:
# 375 "data/maps/BalsamOffice/scripts.pory"
	release
	return

BalsamWalkman_2:
# 370 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_0
# 371 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 372 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamwalkmancasette
	goto BalsamWalkman_1


GasLamp::
# 379 "data/maps/BalsamOffice/scripts.pory"
	msgbox GasLamp_Text_0
# 380 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GasLamp_Text_1, GasLamp_Text_2, GasLamp_Text_3
# 382 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GasLamp_2
GasLamp_1:
# 385 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GasLamp_5
GasLamp_4:
# 388 "data/maps/BalsamOffice/scripts.pory"
	doweather
# 389 "data/maps/BalsamOffice/scripts.pory"
	release
	return

GasLamp_2:
# 383 "data/maps/BalsamOffice/scripts.pory"
	setweather WEATHER_SHADE
	goto GasLamp_1

GasLamp_5:
# 386 "data/maps/BalsamOffice/scripts.pory"
	setweather WEATHER_NONE
	goto GasLamp_4


OldBalsamWalkman::
# 393 "data/maps/BalsamOffice/scripts.pory"
	lock
# 394 "data/maps/BalsamOffice/scripts.pory"
	msgbox OldBalsamWalkman_Text_0
# 395 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldBalsamWalkman_Text_1, OldBalsamWalkman_Text_2, OldBalsamWalkman_Text_3, GasLamp_Text_3
# 396 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldBalsamWalkman_2
OldBalsamWalkman_1:
# 402 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldBalsamWalkman_5
OldBalsamWalkman_4:
# 408 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldBalsamWalkman_8
OldBalsamWalkman_7:
# 414 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldBalsamWalkman_11
OldBalsamWalkman_10:
# 416 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

OldBalsamWalkman_2:
# 397 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_GYMNOPEDIE
# 398 "data/maps/BalsamOffice/scripts.pory"
	msgbox OldBalsamWalkman_Text_4
	goto OldBalsamWalkman_1

OldBalsamWalkman_5:
# 403 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_AIRONG
# 404 "data/maps/BalsamOffice/scripts.pory"
	msgbox OldBalsamWalkman_Text_5
	goto OldBalsamWalkman_4

OldBalsamWalkman_8:
# 409 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_FARTHESTLAND
# 410 "data/maps/BalsamOffice/scripts.pory"
	msgbox OldBalsamWalkman_Text_6
	goto OldBalsamWalkman_7

OldBalsamWalkman_11:
# 414 "data/maps/BalsamOffice/scripts.pory"
	release
	goto OldBalsamWalkman_10


CasetteGiveTest::
# 424 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_EON_TICKET
# 425 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 426 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 427 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_DNA_SPLICERS
# 428 "data/maps/BalsamOffice/scripts.pory"
	release
	return


CasetteRadio::
# 432 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 434 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_EON_TICKET
# 435 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_2
CasetteRadio_1:
# 437 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_5
CasetteRadio_4:
# 440 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 441 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_8
CasetteRadio_7:
# 443 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_11
CasetteRadio_10:
# 446 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 447 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_14
CasetteRadio_13:
# 449 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_17
CasetteRadio_16:
# 453 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_4
# 454 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, CasetteRadio_Text_5, CasetteRadio_Text_6, CasetteRadio_Text_7, CasetteRadio_Text_8, GasLamp_Text_3
# 461 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CasetteRadio_20
CasetteRadio_19:
# 473 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CasetteRadio_23
CasetteRadio_22:
# 485 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CasetteRadio_30
CasetteRadio_29:
# 497 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq CasetteRadio_37
CasetteRadio_36:
# 563 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq CasetteRadio_44
CasetteRadio_43:
# 565 "data/maps/BalsamOffice/scripts.pory"
endofradioscript:
# 566 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

CasetteRadio_2:
# 436 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_1, CasetteRadio_Text_0
	goto CasetteRadio_1

CasetteRadio_5:
# 438 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_1, CasetteRadio_Text_1
	goto CasetteRadio_4

CasetteRadio_8:
# 442 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_2, CasetteRadio_Text_2
	goto CasetteRadio_7

CasetteRadio_11:
# 444 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_2, CasetteRadio_Text_1
	goto CasetteRadio_10

CasetteRadio_14:
# 448 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_3, CasetteRadio_Text_3
	goto CasetteRadio_13

CasetteRadio_17:
# 450 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_3, CasetteRadio_Text_1
	goto CasetteRadio_16

CasetteRadio_20:
# 462 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_EON_TICKET
# 463 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_26
# 469 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_25:
# 470 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_19

CasetteRadio_23:
# 474 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 475 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_33
# 481 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_32:
# 482 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_22

CasetteRadio_26:
# 465 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 466 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_GYMNOPEDIE
# 467 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_9
	goto CasetteRadio_25

CasetteRadio_30:
# 486 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 487 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_40
# 493 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_39:
# 494 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_29

CasetteRadio_33:
# 477 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 478 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_FARTHESTLAND
# 479 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_10
	goto CasetteRadio_32

CasetteRadio_37:
# 499 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_DNA_SPLICERS
# 500 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_47
CasetteRadio_46:
# 502 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_50
CasetteRadio_49:
# 505 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_13
# 506 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, CasetteRadio_Text_5, CasetteRadio_Text_14, CasetteRadio_Text_15, CasetteRadio_Text_8, GasLamp_Text_3
# 513 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CasetteRadio_53
CasetteRadio_52:
# 525 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CasetteRadio_56
CasetteRadio_55:
# 537 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CasetteRadio_63
CasetteRadio_62:
# 549 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq CasetteRadio_69
	goto CasetteRadio_36

CasetteRadio_40:
# 489 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 490 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_AIRONG
# 491 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_11
	goto CasetteRadio_39

CasetteRadio_44:
# 563 "data/maps/BalsamOffice/scripts.pory"
	release
	goto CasetteRadio_43

CasetteRadio_47:
# 501 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_1, CasetteRadio_Text_12
	goto CasetteRadio_46

CasetteRadio_50:
# 503 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_1, CasetteRadio_Text_1
	goto CasetteRadio_49

CasetteRadio_53:
# 514 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_DNA_SPLICERS
# 515 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_59
# 521 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_58:
# 522 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_52

CasetteRadio_56:
# 526 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_DNA_SPLICERS
# 527 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_66
# 533 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_65:
# 534 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_55

CasetteRadio_59:
# 517 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 518 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_RENBOUPARTY
# 519 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_16
	goto CasetteRadio_58

CasetteRadio_63:
# 538 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_DNA_SPLICERS
# 539 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_72
# 545 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_71:
# 546 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_62

CasetteRadio_66:
# 529 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 530 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_RENBOUPARTY
# 531 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_16
	goto CasetteRadio_65

CasetteRadio_69:
# 550 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_DNA_SPLICERS
# 551 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_76
# 557 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_75:
# 558 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_36

CasetteRadio_72:
# 541 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 542 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_RENBOUPARTY
# 543 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_16
	goto CasetteRadio_71

CasetteRadio_76:
# 553 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 554 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_RENBOUPARTY
# 555 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_16
	goto CasetteRadio_75


BalsamBookshelf::
# 570 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 571 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBookshelf_Text_0
# 573 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamDegree::
# 578 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 579 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamDegree_Text_0
# 581 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


DemoGoodbye::
# 586 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 587 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 588 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_0
# 592 "data/maps/BalsamOffice/scripts.pory"
	playbgm MUS_NONE, TRUE
# 593 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 595 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 3, 7
# 596 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 597 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 3, 7
# 598 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 599 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, DemoGoodbye_Movement_0
# 600 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_0
# 601 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 602 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 603 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_1
# 604 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 605 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 606 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_3
# 607 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_2
# 608 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 609 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 610 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_1
# 611 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_3
# 613 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 614 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 615 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_3
# 616 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_4
# 617 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBedUp_Movement_0
# 618 "data/maps/BalsamOffice/scripts.pory"
	waitmovement 1
# 619 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 620 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 622 "data/maps/BalsamOffice/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 624 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8004, 2
# 625 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8005, 6
# 626 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8006, 4
# 627 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8007, 4
# 628 "data/maps/BalsamOffice/scripts.pory"
	special ShakeCamera
# 630 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 631 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 632 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_5
# 633 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 634 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ NULL ]
# 635 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BalsamBed_Movement_1
# 636 "data/maps/BalsamOffice/scripts.pory"
	playfirstmoncry
# 637 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_6
# 638 "data/maps/BalsamOffice/scripts.pory"
	playbgm MUS_RENBOUPARTY, TRUE
# 639 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_3
# 640 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 641 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 642 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_7
# 643 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 644 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 645 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 646 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 647 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 648 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 649 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 650 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
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

# 76 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_0:
# 76 "data/maps/BalsamOffice/scripts.pory"
	face_right
	step_end

# 78 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_1:
# 78 "data/maps/BalsamOffice/scripts.pory"
	face_left
	step_end

# 99 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_2:
# 99 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 99 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 99 "data/maps/BalsamOffice/scripts.pory"
	face_up
	step_end

# 103 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_3:
# 103 "data/maps/BalsamOffice/scripts.pory"
	face_down
	step_end

# 108 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_4:
# 108 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 108 "data/maps/BalsamOffice/scripts.pory"
	walk_down
	step_end

# 181 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_5:
# 181 "data/maps/BalsamOffice/scripts.pory"
	walk_in_place_up
	step_end

# 184 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_6:
# 184 "data/maps/BalsamOffice/scripts.pory"
	walk_in_place_right
	step_end

# 211 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_7:
# 211 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 211 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 211 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 211 "data/maps/BalsamOffice/scripts.pory"
	walk_down
	step_end

# 599 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_0:
# 599 "data/maps/BalsamOffice/scripts.pory"
	walk_up
# 599 "data/maps/BalsamOffice/scripts.pory"
	face_left
	step_end

# 643 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_1:
# 643 "data/maps/BalsamOffice/scripts.pory"
	face_left
# 643 "data/maps/BalsamOffice/scripts.pory"
	face_up
# 643 "data/maps/BalsamOffice/scripts.pory"
	face_right
# 643 "data/maps/BalsamOffice/scripts.pory"
	face_down
	step_end

BalsamBedUp_Text_0:
# 24 "data/maps/BalsamOffice/scripts.pory"
	.string "Rest for a bit?$"

BalsamBedUp_Text_1:
# 29 "data/maps/BalsamOffice/scripts.pory"
	.string "You rest for a while.$"

BalsamBed_Text_0:
# 84 "data/maps/BalsamOffice/scripts.pory"
	.string "... ahem.$"

BalsamBed_Text_1:
# 88 "data/maps/BalsamOffice/scripts.pory"
	.string "{PLAYER}... what do you think you're\n"
	.string "doing? This is not a guest room.$"

BalsamBed_Text_2:
# 93 "data/maps/BalsamOffice/scripts.pory"
	.string "This is MY room.$"

BalsamBed_Text_3:
# 97 "data/maps/BalsamOffice/scripts.pory"
	.string "If you're tired, your house is literally\n"
	.string "behind the lab.\p"
	.string "Now leave. This is my one place to relax,\n"
	.string "and I don't want squatters around.$"

BalsamBed_Text_4:
# 104 "data/maps/BalsamOffice/scripts.pory"
	.string "Don't do this ever again… or ELSE.$"

BalsamBed_Text_5:
# 130 "data/maps/BalsamOffice/scripts.pory"
	.string "Well, well...$"

BalsamBed_Text_6:
# 135 "data/maps/BalsamOffice/scripts.pory"
	.string "{PLAYER}... don't say I didn't warn\n"
	.string "you.$"

BalsamBed_Text_7:
# 138 "data/maps/BalsamOffice/scripts.pory"
	.string "If words don't work with you, perhaps a\n"
	.string "good old beating will!$"

BalsamBed_Text_8:
# 156 "data/maps/BalsamOffice/scripts.pory"
	.string "You're making me regret helping you out,\n"
	.string "{PLAYER}.$"

BalsamBed_Text_9:
# 160 "data/maps/BalsamOffice/scripts.pory"
	.string "I lent you a hand when you were at your\n"
	.string "lowest, and this is how you thank me?$"

BalsamBed_Text_10:
# 164 "data/maps/BalsamOffice/scripts.pory"
	.string "Why are you even sleeping here? Just to\n"
	.string "see my reaction?\p"
	.string "You think this is just one of your…$"

BalsamBed_Text_11:
# 168 "data/maps/BalsamOffice/scripts.pory"
	.string "Videogames?$"

BalsamBed_Text_12:
# 169 "data/maps/BalsamOffice/scripts.pory"
	.string "Yes!$"

BalsamBed_Text_13:
# 169 "data/maps/BalsamOffice/scripts.pory"
	.string "No. I'm sorry.$"

BalsamBed_Text_14:
# 175 "data/maps/BalsamOffice/scripts.pory"
	.string "… right. I should have signed you up for\n"
	.string "more therapy sessions. You have a few\l"
	.string "screws lose, don't you?$"

BalsamBed_Text_15:
# 180 "data/maps/BalsamOffice/scripts.pory"
	.string "...\p"
	.string "Sorry. That was a bit too much. I know\n"
	.string "you've had it rough.$"

BalsamBed_Text_16:
# 183 "data/maps/BalsamOffice/scripts.pory"
	.string "I understand if you don't want to sleep\n"
	.string "at home. It brings you painful memories,\l"
	.string "doesn't it?$"

BalsamBed_Text_17:
# 186 "data/maps/BalsamOffice/scripts.pory"
	.string "You can sleep here if that's the case.\p"
	.string "I mostly just doze on my chair these\n"
	.string "days anyway.$"

BalsamBed_Text_18:
# 194 "data/maps/BalsamOffice/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Apology accepted. Perhaps I have\n"
	.string "overreacted a bit too.$"

BalsamBed_Text_19:
# 199 "data/maps/BalsamOffice/scripts.pory"
	.string "I understand if you don't want to sleep\n"
	.string "at home. It brings you painful memories,\l"
	.string "right?\p"
	.string "You can sleep here if that's the case. I\n"
	.string "mostly just doze on my chair these days\l"
	.string "anyway.$"

BalsamBed_Text_20:
# 206 "data/maps/BalsamOffice/scripts.pory"
	.string "Just don't make a mess of the place,\n"
	.string "alright?$"

BalsamOfficeRotom_Text_0:
# 247 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is emitting a weird static.\nShould I turn it off?$"

BalsamOfficeRotom_Text_1:
# 250 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV begins to shake, then it\n"
	.string "attacks!$"

BalsamOfficeRotom_Text_2:
# 260 "data/maps/BalsamOffice/scripts.pory"
	.string "Roooom!$"

RanRotom_Text_0:
# 298 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is left alone for now...$"

EmptyRotomTV_Text_0:
# 303 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is turned off. If there's\n"
	.string "anything inside, it's quiet for now.$"

KantonianWarHistoryVol2BalsamOffice_Text_0:
# 309 "data/maps/BalsamOffice/scripts.pory"
	.string "The book's cover reads 'History of the\n"
	.string "Kantonian War, Volume 2.\p"
	.string "Read it?$"

KantonianWarHistoryVol2BalsamOffice_Text_1:
# 311 "data/maps/BalsamOffice/scripts.pory"
	.string "Yes$"

KantonianWarHistoryVol2BalsamOffice_Text_2:
# 311 "data/maps/BalsamOffice/scripts.pory"
	.string "No$"

KantonianWarHistoryVol2BalsamOffice_Text_3:
# 315 "data/maps/BalsamOffice/scripts.pory"
	.string "September, 2004: Team Aqua and Team\n"
	.string "Magma, two radical enviromentalist\l"
	.string "groups, attempt to control Hoenn's\l"
	.string "climate by awakening two ancient\l"
	.string "Pokémon - Kyogre and Groudon.$"

KantonianWarHistoryVol2BalsamOffice_Text_4:
# 319 "data/maps/BalsamOffice/scripts.pory"
	.string "However, thanks to the brave actions\n"
	.string "of two young trainers from Littleroot,\l"
	.string "their plans are foiled.$"

BalsamOfficeBooks_Text_0:
# 331 "data/maps/BalsamOffice/scripts.pory"
	.string "“Safemon Schedule - 2030” - Devon Co.,\n"
	.string "Internal Use Only.$"

BalsamOfficeBox_Text_0:
# 337 "data/maps/BalsamOffice/scripts.pory"
	.string "The box contains clothes suited for a\n"
	.string "warm, almost tropical environment.$"

BalsamOfficeRadioStation_Text_0:
# 343 "data/maps/BalsamOffice/scripts.pory"
	.string "It's an amateur radio station.$"

BalsamOfficeVideoPlayer_Text_0:
# 349 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a video player and some video\n"
	.string "tapes. Most of them are documentaries.$"

BalsamOfficeTrashCan_Text_0:
# 356 "data/maps/BalsamOffice/scripts.pory"
	.string "The trash can contains the remains of\n"
	.string "ripped postcards - and something else...$"

BalsamOfficeTrashCan_Text_1:
# 360 "data/maps/BalsamOffice/scripts.pory"
	.string "There's only the remains of postcards\n"
	.string "in the trash.$"

BalsamWalkman_Text_0:
# 370 "data/maps/BalsamOffice/scripts.pory"
	.string "There's two copies of the same casette.\n"
	.string "Should be fine if I take one…$"

BalsamWalkman_Text_1:
# 374 "data/maps/BalsamOffice/scripts.pory"
	.string "It's Balsam's portable music player.\n"
	.string "Let's leave it here.$"

GasLamp_Text_0:
# 379 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a gas lamp.$"

GasLamp_Text_1:
# 380 "data/maps/BalsamOffice/scripts.pory"
	.string "Turn On$"

GasLamp_Text_2:
# 380 "data/maps/BalsamOffice/scripts.pory"
	.string "Turn Off$"

GasLamp_Text_3:
# 380 "data/maps/BalsamOffice/scripts.pory"
	.string "Leave$"

OldBalsamWalkman_Text_0:
# 394 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a casette player. The casette\n"
	.string "contains several songs.$"

OldBalsamWalkman_Text_1:
# 395 "data/maps/BalsamOffice/scripts.pory"
	.string "Gymnopédie No. 1$"

OldBalsamWalkman_Text_2:
# 395 "data/maps/BalsamOffice/scripts.pory"
	.string "Air on the G String$"

OldBalsamWalkman_Text_3:
# 395 "data/maps/BalsamOffice/scripts.pory"
	.string "The Farthest Land$"

OldBalsamWalkman_Text_4:
# 398 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - Gymnopédie No. 1.$"

OldBalsamWalkman_Text_5:
# 404 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - Air on the G String.$"

OldBalsamWalkman_Text_6:
# 410 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - the Farthest Land.$"

CasetteRadio_Text_0:
# 436 "data/maps/BalsamOffice/scripts.pory"
	.string "“Gymnopédie No. 1”$"

CasetteRadio_Text_1:
# 438 "data/maps/BalsamOffice/scripts.pory"
	.string "???$"

CasetteRadio_Text_2:
# 442 "data/maps/BalsamOffice/scripts.pory"
	.string "“The Farthest Land”$"

CasetteRadio_Text_3:
# 448 "data/maps/BalsamOffice/scripts.pory"
	.string "“Air on the G String”$"

CasetteRadio_Text_4:
# 453 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a casette player. Which tape to\n"
	.string "insert?$"

CasetteRadio_Text_5:
# 455 "data/maps/BalsamOffice/scripts.pory"
	.string "{STR_VAR_1}$"

CasetteRadio_Text_6:
# 456 "data/maps/BalsamOffice/scripts.pory"
	.string "{STR_VAR_2}$"

CasetteRadio_Text_7:
# 457 "data/maps/BalsamOffice/scripts.pory"
	.string "{STR_VAR_3}$"

CasetteRadio_Text_8:
# 458 "data/maps/BalsamOffice/scripts.pory"
	.string "Another song$"

CasetteRadio_Text_9:
# 467 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “Gymnopédie No. 1”.$"

CasetteRadio_Text_10:
# 479 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “The Farthest Land”.$"

CasetteRadio_Text_11:
# 491 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “Air on the G String”.$"

CasetteRadio_Text_12:
# 501 "data/maps/BalsamOffice/scripts.pory"
	.string "“Party!”$"

CasetteRadio_Text_13:
# 505 "data/maps/BalsamOffice/scripts.pory"
	.string "Which tape to insert?$"

CasetteRadio_Text_14:
# 508 "data/maps/BalsamOffice/scripts.pory"
	.string "Y$"

CasetteRadio_Text_15:
# 509 "data/maps/BalsamOffice/scripts.pory"
	.string "Z$"

CasetteRadio_Text_16:
# 519 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “Party!”.$"

BalsamBookshelf_Text_0:
# 571 "data/maps/BalsamOffice/scripts.pory"
	.string "Among the many books on Pokémon\n"
	.string "science, there's a photo album...\p"
	.string "The cover features a photo of a couple\n"
	.string "of kids, building a sand castle on a\l"
	.string "clean beach.$"

BalsamDegree_Text_0:
# 579 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a framed degree of higher\n"
	.string "education. It reads as follows:\p"
	.string "'University of Alola, Degree in Pokémon\n"
	.string "Genetics: Miss Balsam ¥?¿¥i.\p"
	.string "The surname has been crossed out.$"

DemoGoodbye_Text_0:
# 588 "data/maps/BalsamOffice/scripts.pory"
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
# 603 "data/maps/BalsamOffice/scripts.pory"
	.string "Stop the sentimental crap. Nobody\n"
	.string "cares. This clip is already too long.$"

DemoGoodbye_Text_2:
# 607 "data/maps/BalsamOffice/scripts.pory"
	.string "And you, whoever loser is reading this.\n"
	.string "Don't hold your breath for this hack's\l"
	.string "release.$"

DemoGoodbye_Text_3:
# 611 "data/maps/BalsamOffice/scripts.pory"
	.string "This nutjob is putting sign scripts in\n"
	.string "half of damn tiles and setting phone\l"
	.string "calls for random NPCs, as if people are\l"
	.string "going to read them.$"

DemoGoodbye_Text_4:
# 616 "data/maps/BalsamOffice/scripts.pory"
	.string "You'll live in an actual corporate\n"
	.string "dystopia by the time this is done.\l"
	.string "Later.$"

DemoGoodbye_Text_5:
# 632 "data/maps/BalsamOffice/scripts.pory"
	.string "...$"

DemoGoodbye_Text_6:
# 637 "data/maps/BalsamOffice/scripts.pory"
	.string "Pura...?$"

DemoGoodbye_Text_7:
# 642 "data/maps/BalsamOffice/scripts.pory"
	.string "HAHAHA - SHE'S RIGHT! SEE YOU IN MANY\n"
	.string "MONTHS!$"

Balsam_Outro::
# 238 "data/maps/BalsamOffice/scripts.pory"
	.string "...$"
