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
# 241 "data/maps/BalsamOffice/scripts.pory"
finishcript:
# 242 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 243 "data/maps/BalsamOffice/scripts.pory"
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
# 126 "data/maps/BalsamOffice/scripts.pory"
	goto_if_set balsamgavebedwarning, BalsamBed_12
BalsamBed_11:
# 232 "data/maps/BalsamOffice/scripts.pory"
	goto givenpermissiontosleep
BalsamBed_9:
# 235 "data/maps/BalsamOffice/scripts.pory"
givenpermissiontosleep:
# 236 "data/maps/BalsamOffice/scripts.pory"
	waitse
# 237 "data/maps/BalsamOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 238 "data/maps/BalsamOffice/scripts.pory"
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
	applymovement 1, BalsamBed_Movement_2
# 91 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 92 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 93 "data/maps/BalsamOffice/scripts.pory"
	playse SE_M_SWAGGER2
# 94 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_2
# 96 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_LITTLEROOT_PHASE, 5
	goto_if_le BalsamBed_16
BalsamBed_15:
# 102 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 103 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 104 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_4
# 106 "data/maps/BalsamOffice/scripts.pory"
	closemessage
# 107 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 108 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_3
# 109 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 110 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 111 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_MENACING
# 112 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_4
# 113 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_5
# 114 "data/maps/BalsamOffice/scripts.pory"
	closemessage
# 115 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 117 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_5
# 118 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 119 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 120 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 121 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 122 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamgavebedwarning
# 123 "data/maps/BalsamOffice/scripts.pory"
	goto finishcript
	goto BalsamBed_4

BalsamBed_6:
# 72 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedpermission, BalsamBed_5
	goto BalsamBed_4

BalsamBed_10:
# 129 "data/maps/BalsamOffice/scripts.pory"
	closemessage
# 130 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 131 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 132 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 5, 3
# 133 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_1
# 134 "data/maps/BalsamOffice/scripts.pory"
	waitse
# 135 "data/maps/BalsamOffice/scripts.pory"
	fadeinbgm 1
# 136 "data/maps/BalsamOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 137 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 138 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 139 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_6
# 142 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 143 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 144 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_7
# 145 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 146 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 147 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_8
# 148 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_NO_ESCAPE
# 149 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 150 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 151 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset GOTSTARTER3, BalsamBed_19
# 158 "data/maps/BalsamOffice/scripts.pory"
	trainerbattle_no_intro TRAINER_BALSAM_NOPURACHU, Balsam_Outro
BalsamBed_18:
# 161 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 162 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 163 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 164 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 165 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_9
# 167 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 168 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 169 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_10
# 171 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 172 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 173 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_11
# 175 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 176 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_MENACING
# 177 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_12
# 178 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, BalsamBed_Text_13, BalsamBed_Text_14
# 180 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BalsamBed_23
BalsamBed_22:
# 199 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BalsamBed_26
BalsamBed_25:
# 213 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 214 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 215 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_21
# 216 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 217 "data/maps/BalsamOffice/scripts.pory"
	closemessage
# 220 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_8
# 221 "data/maps/BalsamOffice/scripts.pory"
	waitmovement
# 222 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 223 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 224 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamgavebedpermission
# 225 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 226 "data/maps/BalsamOffice/scripts.pory"
	goto finishcript
	goto BalsamBed_9

BalsamBed_12:
# 126 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamgavebedpermission, BalsamBed_10
	goto BalsamBed_11

BalsamBed_16:
# 97 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 98 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 99 "data/maps/BalsamOffice/scripts.pory"
	playse SE_M_METRONOME
# 100 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_3
	goto BalsamBed_15

BalsamBed_19:
# 153 "data/maps/BalsamOffice/scripts.pory"
	trainerbattle_no_intro TRAINER_BALSAM_PURACHU, Balsam_Outro
	goto BalsamBed_18

BalsamBed_23:
# 182 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 183 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 184 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_15
# 187 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 188 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 189 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_16
# 190 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_6
# 191 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 192 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_17
# 193 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_7
# 194 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 195 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_18
	goto BalsamBed_22

BalsamBed_26:
# 201 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 202 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 203 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_19
# 206 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 207 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 208 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBed_Text_20
	goto BalsamBed_25


BalsamOfficeRotom::
# 253 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 254 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 256 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_0, MSGBOX_YESNO
# 258 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BalsamOfficeRotom_2
BalsamOfficeRotom_1:
# 288 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamOfficeRotom_2:
# 259 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_1
# 261 "data/maps/BalsamOffice/scripts.pory"
	playse SE_M_THUNDERBOLT
# 262 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8004, 2
# 263 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8005, 6
# 264 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8006, 4
# 265 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8007, 4
# 266 "data/maps/BalsamOffice/scripts.pory"
	special ShakeCamera
# 267 "data/maps/BalsamOffice/scripts.pory"
	waitse
# 268 "data/maps/BalsamOffice/scripts.pory"
	playmoncry SPECIES_ROTOM_MONITOR, CRY_MODE_NORMAL
# 269 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRotom_Text_2
# 270 "data/maps/BalsamOffice/scripts.pory"
	setwildbattle SPECIES_ROTOM_MONITOR, 5
# 271 "data/maps/BalsamOffice/scripts.pory"
	dowildbattle
# 272 "data/maps/BalsamOffice/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 274 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BalsamOfficeRotom_4
# 277 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BalsamOfficeRotom_5
# 280 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BalsamOfficeRotom_6
# 283 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BalsamOfficeRotom_7
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_4:
# 275 "data/maps/BalsamOffice/scripts.pory"
	call WonRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_5:
# 278 "data/maps/BalsamOffice/scripts.pory"
	call CaughtRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_6:
# 281 "data/maps/BalsamOffice/scripts.pory"
	call RanRotom
	goto BalsamOfficeRotom_1

BalsamOfficeRotom_7:
# 284 "data/maps/BalsamOffice/scripts.pory"
	call RanRotom
	goto BalsamOfficeRotom_1


WonRotom::
# 292 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 293 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamofficerotom
# 294 "data/maps/BalsamOffice/scripts.pory"
	addobject 3
# 295 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsamofficeemptytv
	return


CaughtRotom::
# 299 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 300 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamofficerotom
	return


RanRotom::
# 304 "data/maps/BalsamOffice/scripts.pory"
	removeobject 2
# 305 "data/maps/BalsamOffice/scripts.pory"
	addobject 3
# 306 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsamofficeemptytv
# 307 "data/maps/BalsamOffice/scripts.pory"
	msgbox RanRotom_Text_0
	return


EmptyRotomTV::
# 311 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 312 "data/maps/BalsamOffice/scripts.pory"
	msgbox EmptyRotomTV_Text_0
# 313 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


KantonianWarHistoryVol2BalsamOffice::
# 317 "data/maps/BalsamOffice/scripts.pory"
	lock
# 318 "data/maps/BalsamOffice/scripts.pory"
	msgbox KantonianWarHistoryVol2BalsamOffice_Text_0
# 320 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, KantonianWarHistoryVol2BalsamOffice_Text_1, KantonianWarHistoryVol2BalsamOffice_Text_2
# 322 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KantonianWarHistoryVol2BalsamOffice_2
KantonianWarHistoryVol2BalsamOffice_1:
# 331 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KantonianWarHistoryVol2BalsamOffice_5
KantonianWarHistoryVol2BalsamOffice_4:
# 334 "data/maps/BalsamOffice/scripts.pory"
endkantonianwar2:
# 335 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

KantonianWarHistoryVol2BalsamOffice_2:
# 323 "data/maps/BalsamOffice/scripts.pory"
	showmonpic SPECIES_AUDINO_MEGA, 10, 3
# 324 "data/maps/BalsamOffice/scripts.pory"
	msgbox KantonianWarHistoryVol2BalsamOffice_Text_3
# 326 "data/maps/BalsamOffice/scripts.pory"
	hidemonpic
# 327 "data/maps/BalsamOffice/scripts.pory"
	showmonpic SPECIES_AUDINO_MEGA, 10, 3
# 328 "data/maps/BalsamOffice/scripts.pory"
	msgbox KantonianWarHistoryVol2BalsamOffice_Text_4
# 329 "data/maps/BalsamOffice/scripts.pory"
	hidemonpic
# 330 "data/maps/BalsamOffice/scripts.pory"
	goto endkantonianwar2
	goto KantonianWarHistoryVol2BalsamOffice_1

KantonianWarHistoryVol2BalsamOffice_5:
# 332 "data/maps/BalsamOffice/scripts.pory"
	goto endkantonianwar2
	goto KantonianWarHistoryVol2BalsamOffice_4


BalsamOfficeBooks::
# 339 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 340 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeBooks_Text_0
# 341 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamOfficeBox::
# 345 "data/maps/BalsamOffice/scripts.pory"
	lock
# 346 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeBox_Text_0
# 347 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamOfficeRadioStation::
# 351 "data/maps/BalsamOffice/scripts.pory"
	lock
# 352 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeRadioStation_Text_0
# 353 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamOfficeVideoPlayer::
# 357 "data/maps/BalsamOffice/scripts.pory"
	lock
# 358 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeVideoPlayer_Text_0
# 359 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamOfficeTrashCan::
# 363 "data/maps/BalsamOffice/scripts.pory"
	lock
# 364 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset FLAG_ITEM_BALSAM_OFFICE_TRASH, BalsamOfficeTrashCan_2
# 369 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeTrashCan_Text_1
BalsamOfficeTrashCan_1:
# 370 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

BalsamOfficeTrashCan_2:
# 365 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamOfficeTrashCan_Text_0
# 366 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_STRANGE_SOUVENIR
# 367 "data/maps/BalsamOffice/scripts.pory"
	setflag FLAG_ITEM_BALSAM_OFFICE_TRASH
	goto BalsamOfficeTrashCan_1


BalsamWalkman::
# 375 "data/maps/BalsamOffice/scripts.pory"
	lock
# 377 "data/maps/BalsamOffice/scripts.pory"
	goto_if_unset balsamwalkmancasette, BalsamWalkman_2
# 383 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_1
BalsamWalkman_1:
# 384 "data/maps/BalsamOffice/scripts.pory"
	release
	return

BalsamWalkman_2:
# 379 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamWalkman_Text_0
# 380 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 381 "data/maps/BalsamOffice/scripts.pory"
	setflag balsamwalkmancasette
	goto BalsamWalkman_1


GasLamp::
# 388 "data/maps/BalsamOffice/scripts.pory"
	msgbox GasLamp_Text_0
# 389 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GasLamp_Text_1, GasLamp_Text_2, GasLamp_Text_3
# 391 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GasLamp_2
GasLamp_1:
# 394 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GasLamp_5
GasLamp_4:
# 398 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GasLamp_8
GasLamp_7:
# 401 "data/maps/BalsamOffice/scripts.pory"
	doweather
# 402 "data/maps/BalsamOffice/scripts.pory"
	release
	return

GasLamp_2:
# 392 "data/maps/BalsamOffice/scripts.pory"
	setweather WEATHER_NONE
	goto GasLamp_1

GasLamp_5:
# 395 "data/maps/BalsamOffice/scripts.pory"
	setweather WEATHER_SHADE
	goto GasLamp_4

GasLamp_8:
# 399 "data/maps/BalsamOffice/scripts.pory"
	release
	goto GasLamp_7


OldBalsamWalkman::
# 406 "data/maps/BalsamOffice/scripts.pory"
	lock
# 407 "data/maps/BalsamOffice/scripts.pory"
	msgbox OldBalsamWalkman_Text_0
# 408 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldBalsamWalkman_Text_1, OldBalsamWalkman_Text_2, OldBalsamWalkman_Text_3, GasLamp_Text_3
# 409 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldBalsamWalkman_2
OldBalsamWalkman_1:
# 415 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldBalsamWalkman_5
OldBalsamWalkman_4:
# 421 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldBalsamWalkman_8
OldBalsamWalkman_7:
# 427 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldBalsamWalkman_11
OldBalsamWalkman_10:
# 429 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

OldBalsamWalkman_2:
# 410 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_GYMNOPEDIE
# 411 "data/maps/BalsamOffice/scripts.pory"
	msgbox OldBalsamWalkman_Text_4
	goto OldBalsamWalkman_1

OldBalsamWalkman_5:
# 416 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_AIRONG
# 417 "data/maps/BalsamOffice/scripts.pory"
	msgbox OldBalsamWalkman_Text_5
	goto OldBalsamWalkman_4

OldBalsamWalkman_8:
# 422 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_FARTHESTLAND
# 423 "data/maps/BalsamOffice/scripts.pory"
	msgbox OldBalsamWalkman_Text_6
	goto OldBalsamWalkman_7

OldBalsamWalkman_11:
# 427 "data/maps/BalsamOffice/scripts.pory"
	release
	goto OldBalsamWalkman_10


CasetteGiveTest::
# 437 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_EON_TICKET
# 438 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 439 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 440 "data/maps/BalsamOffice/scripts.pory"
	giveitem ITEM_DNA_SPLICERS
# 441 "data/maps/BalsamOffice/scripts.pory"
	release
	return


CasetteRadio::
# 445 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 447 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_EON_TICKET
# 448 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_2
CasetteRadio_1:
# 450 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_5
CasetteRadio_4:
# 453 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 454 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_8
CasetteRadio_7:
# 456 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_11
CasetteRadio_10:
# 459 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 460 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_14
CasetteRadio_13:
# 462 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_17
CasetteRadio_16:
# 466 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_4
# 467 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, CasetteRadio_Text_5, CasetteRadio_Text_6, CasetteRadio_Text_7, CasetteRadio_Text_8, GasLamp_Text_3
# 474 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CasetteRadio_20
CasetteRadio_19:
# 486 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CasetteRadio_23
CasetteRadio_22:
# 498 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CasetteRadio_30
CasetteRadio_29:
# 510 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq CasetteRadio_37
CasetteRadio_36:
# 575 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq CasetteRadio_44
CasetteRadio_43:
# 577 "data/maps/BalsamOffice/scripts.pory"
endofradioscript:
# 578 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return

CasetteRadio_2:
# 449 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_1, CasetteRadio_Text_0
	goto CasetteRadio_1

CasetteRadio_5:
# 451 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_1, CasetteRadio_Text_1
	goto CasetteRadio_4

CasetteRadio_8:
# 455 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_2, CasetteRadio_Text_2
	goto CasetteRadio_7

CasetteRadio_11:
# 457 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_2, CasetteRadio_Text_1
	goto CasetteRadio_10

CasetteRadio_14:
# 461 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_3, CasetteRadio_Text_3
	goto CasetteRadio_13

CasetteRadio_17:
# 463 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_3, CasetteRadio_Text_1
	goto CasetteRadio_16

CasetteRadio_20:
# 475 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_EON_TICKET
# 476 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_26
# 482 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_25:
# 483 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_19

CasetteRadio_23:
# 487 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 488 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_33
# 494 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_32:
# 495 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_22

CasetteRadio_26:
# 479 "data/maps/BalsamOffice/scripts.pory"
	playbgm MUS_GYMNOPEDIE, FALSE
# 480 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_9
	goto CasetteRadio_25

CasetteRadio_30:
# 499 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 500 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_40
# 506 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_39:
# 507 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_29

CasetteRadio_33:
# 491 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_FARTHESTLAND
# 492 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_10
	goto CasetteRadio_32

CasetteRadio_37:
# 512 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_DNA_SPLICERS
# 513 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_47
CasetteRadio_46:
# 515 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_50
CasetteRadio_49:
# 518 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_ZYGARDE_CUBE
# 519 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_53
CasetteRadio_52:
# 521 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_56
CasetteRadio_55:
# 524 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_PIKASHUNIUM_Z
# 525 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_59
CasetteRadio_58:
# 527 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CasetteRadio_62
CasetteRadio_61:
# 530 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_15
# 531 "data/maps/BalsamOffice/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, CasetteRadio_Text_5, CasetteRadio_Text_6, CasetteRadio_Text_1, GasLamp_Text_3
# 537 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CasetteRadio_65
CasetteRadio_64:
# 549 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CasetteRadio_68
CasetteRadio_67:
# 561 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CasetteRadio_74
	goto CasetteRadio_36

CasetteRadio_40:
# 503 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_AIRONG
# 504 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_11
	goto CasetteRadio_39

CasetteRadio_44:
# 575 "data/maps/BalsamOffice/scripts.pory"
	release
	goto CasetteRadio_43

CasetteRadio_47:
# 514 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_1, CasetteRadio_Text_12
	goto CasetteRadio_46

CasetteRadio_50:
# 516 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_1, CasetteRadio_Text_1
	goto CasetteRadio_49

CasetteRadio_53:
# 520 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_2, CasetteRadio_Text_13
	goto CasetteRadio_52

CasetteRadio_56:
# 522 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_2, CasetteRadio_Text_1
	goto CasetteRadio_55

CasetteRadio_59:
# 526 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_2, CasetteRadio_Text_14
	goto CasetteRadio_58

CasetteRadio_62:
# 528 "data/maps/BalsamOffice/scripts.pory"
	bufferstring STR_VAR_2, CasetteRadio_Text_1
	goto CasetteRadio_61

CasetteRadio_65:
# 538 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_DNA_SPLICERS
# 539 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_71
# 545 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_70:
# 546 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_64

CasetteRadio_68:
# 550 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_ZYGARDE_CUBE
# 551 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_77
# 557 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_76:
# 558 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_67

CasetteRadio_71:
# 541 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 542 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_RENBOUPARTY
# 543 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_16
	goto CasetteRadio_70

CasetteRadio_74:
# 562 "data/maps/BalsamOffice/scripts.pory"
	checkitem ITEM_PIKASHUNIUM_Z
# 563 "data/maps/BalsamOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CasetteRadio_81
# 569 "data/maps/BalsamOffice/scripts.pory"
	playse SE_FAILURE
CasetteRadio_80:
# 570 "data/maps/BalsamOffice/scripts.pory"
	goto endofradioscript
	goto CasetteRadio_36

CasetteRadio_77:
# 553 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 554 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_SEVENTHSYMPHONY
# 555 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_17
	goto CasetteRadio_76

CasetteRadio_81:
# 565 "data/maps/BalsamOffice/scripts.pory"
	fadeoutbgm 1
# 566 "data/maps/BalsamOffice/scripts.pory"
	fadenewbgm MUS_NOZOMI
# 567 "data/maps/BalsamOffice/scripts.pory"
	msgbox CasetteRadio_Text_18
	goto CasetteRadio_80


BalsamBookshelf::
# 582 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 583 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamBookshelf_Text_0
# 585 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


BalsamDegree::
# 590 "data/maps/BalsamOffice/scripts.pory"
	lockall
# 591 "data/maps/BalsamOffice/scripts.pory"
	msgbox BalsamDegree_Text_0
# 593 "data/maps/BalsamOffice/scripts.pory"
	releaseall
	return


DemoGoodbye::
# 598 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 599 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 600 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_0
# 604 "data/maps/BalsamOffice/scripts.pory"
	playbgm MUS_NONE, TRUE
# 605 "data/maps/BalsamOffice/scripts.pory"
	clearflag balsaminherbedroom
# 607 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 3, 7
# 608 "data/maps/BalsamOffice/scripts.pory"
	addobject 1
# 609 "data/maps/BalsamOffice/scripts.pory"
	setobjectxy 1, 3, 7
# 610 "data/maps/BalsamOffice/scripts.pory"
	playse SE_DOOR
# 611 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, DemoGoodbye_Movement_0
# 612 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_0
# 613 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 614 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 615 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_1
# 616 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 617 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_NORMAL
# 618 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_4
# 619 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_2
# 620 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 621 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_CONFUSED
# 622 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_1
# 623 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_3
# 625 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 626 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 627 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBed_Movement_4
# 628 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_4
# 629 "data/maps/BalsamOffice/scripts.pory"
	applymovement 1, BalsamBedUp_Movement_0
# 630 "data/maps/BalsamOffice/scripts.pory"
	waitmovement 1
# 631 "data/maps/BalsamOffice/scripts.pory"
	removeobject 1
# 632 "data/maps/BalsamOffice/scripts.pory"
	setflag balsaminherbedroom
# 634 "data/maps/BalsamOffice/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 636 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8004, 2
# 637 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8005, 6
# 638 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8006, 4
# 639 "data/maps/BalsamOffice/scripts.pory"
	setvar VAR_0x8007, 4
# 640 "data/maps/BalsamOffice/scripts.pory"
	special ShakeCamera
# 642 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 643 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 644 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_5
# 645 "data/maps/BalsamOffice/scripts.pory"
	removefieldmugshot
# 646 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ NULL ]
# 647 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, BalsamBed_Movement_1
# 648 "data/maps/BalsamOffice/scripts.pory"
	playfirstmoncry
# 649 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_6
# 650 "data/maps/BalsamOffice/scripts.pory"
	playbgm MUS_RENBOUPARTY, TRUE
# 651 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BalsamBed_Movement_4
# 652 "data/maps/BalsamOffice/scripts.pory"
	setspeaker [ SP_NAME_DYSTOPIAN ]
# 653 "data/maps/BalsamOffice/scripts.pory"
	createfieldmugshot MUGSHOT_MPLAYER, EMOTE_NORMAL
# 654 "data/maps/BalsamOffice/scripts.pory"
	msgbox DemoGoodbye_Text_7
# 655 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 656 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 657 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 658 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 659 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 660 "data/maps/BalsamOffice/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 661 "data/maps/BalsamOffice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DemoGoodbye_Movement_1
# 662 "data/maps/BalsamOffice/scripts.pory"
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

# 90 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_2:
# 90 "data/maps/BalsamOffice/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 108 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_3:
# 108 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 108 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 108 "data/maps/BalsamOffice/scripts.pory"
	face_up
	step_end

# 112 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_4:
# 112 "data/maps/BalsamOffice/scripts.pory"
	face_down
	step_end

# 117 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_5:
# 117 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 117 "data/maps/BalsamOffice/scripts.pory"
	walk_down
	step_end

# 190 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_6:
# 190 "data/maps/BalsamOffice/scripts.pory"
	walk_in_place_up
	step_end

# 193 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_7:
# 193 "data/maps/BalsamOffice/scripts.pory"
	walk_in_place_right
	step_end

# 220 "data/maps/BalsamOffice/scripts.pory"
BalsamBed_Movement_8:
# 220 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 220 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 220 "data/maps/BalsamOffice/scripts.pory"
	walk_down
# 220 "data/maps/BalsamOffice/scripts.pory"
	walk_down
	step_end

# 611 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_0:
# 611 "data/maps/BalsamOffice/scripts.pory"
	walk_up
# 611 "data/maps/BalsamOffice/scripts.pory"
	face_left
	step_end

# 655 "data/maps/BalsamOffice/scripts.pory"
DemoGoodbye_Movement_1:
# 655 "data/maps/BalsamOffice/scripts.pory"
	face_left
# 655 "data/maps/BalsamOffice/scripts.pory"
	face_up
# 655 "data/maps/BalsamOffice/scripts.pory"
	face_right
# 655 "data/maps/BalsamOffice/scripts.pory"
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
# 94 "data/maps/BalsamOffice/scripts.pory"
	.string "This is MY room.$"

BalsamBed_Text_3:
# 100 "data/maps/BalsamOffice/scripts.pory"
	.string "Besides, how did you even get here!?$"

BalsamBed_Text_4:
# 104 "data/maps/BalsamOffice/scripts.pory"
	.string "If you're tired, your house is literally\n"
	.string "behind the lab.\p"
	.string "Now leave. This is my one place to relax,\n"
	.string "and I don't want squatters around.$"

BalsamBed_Text_5:
# 113 "data/maps/BalsamOffice/scripts.pory"
	.string "Don't do this ever again… or ELSE.$"

BalsamBed_Text_6:
# 139 "data/maps/BalsamOffice/scripts.pory"
	.string "Well, well...$"

BalsamBed_Text_7:
# 144 "data/maps/BalsamOffice/scripts.pory"
	.string "{PLAYER}... don't say I didn't warn\n"
	.string "you.$"

BalsamBed_Text_8:
# 147 "data/maps/BalsamOffice/scripts.pory"
	.string "If words don't work with you, perhaps a\n"
	.string "good old beating will!$"

BalsamBed_Text_9:
# 165 "data/maps/BalsamOffice/scripts.pory"
	.string "You're making me regret helping you out,\n"
	.string "{PLAYER}.$"

BalsamBed_Text_10:
# 169 "data/maps/BalsamOffice/scripts.pory"
	.string "I lent you a hand when you were at your\n"
	.string "lowest, and this is how you thank me?$"

BalsamBed_Text_11:
# 173 "data/maps/BalsamOffice/scripts.pory"
	.string "Why are you even sleeping here? Just to\n"
	.string "see my reaction?\p"
	.string "You think this is just one of your…$"

BalsamBed_Text_12:
# 177 "data/maps/BalsamOffice/scripts.pory"
	.string "Videogames?$"

BalsamBed_Text_13:
# 178 "data/maps/BalsamOffice/scripts.pory"
	.string "Yes!$"

BalsamBed_Text_14:
# 178 "data/maps/BalsamOffice/scripts.pory"
	.string "No. I'm sorry.$"

BalsamBed_Text_15:
# 184 "data/maps/BalsamOffice/scripts.pory"
	.string "… right. I should have signed you up for\n"
	.string "more therapy sessions. You have a few\l"
	.string "screws lose, don't you?$"

BalsamBed_Text_16:
# 189 "data/maps/BalsamOffice/scripts.pory"
	.string "...\p"
	.string "Sorry. That was a bit too much. I know\n"
	.string "you've had it rough.$"

BalsamBed_Text_17:
# 192 "data/maps/BalsamOffice/scripts.pory"
	.string "I understand if you don't want to sleep\n"
	.string "at home. It brings you painful memories,\l"
	.string "doesn't it?$"

BalsamBed_Text_18:
# 195 "data/maps/BalsamOffice/scripts.pory"
	.string "You can sleep here if that's the case.\p"
	.string "I mostly just doze on my chair these\n"
	.string "days anyway.$"

BalsamBed_Text_19:
# 203 "data/maps/BalsamOffice/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Apology accepted. Perhaps I have\n"
	.string "overreacted a bit too.$"

BalsamBed_Text_20:
# 208 "data/maps/BalsamOffice/scripts.pory"
	.string "I understand if you don't want to sleep\n"
	.string "at home. It brings you painful memories,\l"
	.string "right?\p"
	.string "You can sleep here if that's the case. I\n"
	.string "mostly just doze on my chair these days\l"
	.string "anyway.$"

BalsamBed_Text_21:
# 215 "data/maps/BalsamOffice/scripts.pory"
	.string "Just don't make a mess of the place,\n"
	.string "alright?$"

BalsamOfficeRotom_Text_0:
# 256 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is emitting a weird static.\nShould I turn it off?$"

BalsamOfficeRotom_Text_1:
# 259 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV begins to shake, then it\n"
	.string "attacks!$"

BalsamOfficeRotom_Text_2:
# 269 "data/maps/BalsamOffice/scripts.pory"
	.string "Roooom!$"

RanRotom_Text_0:
# 307 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is left alone for now...$"

EmptyRotomTV_Text_0:
# 312 "data/maps/BalsamOffice/scripts.pory"
	.string "The TV is turned off. If there's\n"
	.string "anything inside, it's quiet for now.$"

KantonianWarHistoryVol2BalsamOffice_Text_0:
# 318 "data/maps/BalsamOffice/scripts.pory"
	.string "The book's cover reads 'History of the\n"
	.string "Kantonian War, Volume 2.\p"
	.string "Read it?$"

KantonianWarHistoryVol2BalsamOffice_Text_1:
# 320 "data/maps/BalsamOffice/scripts.pory"
	.string "Yes$"

KantonianWarHistoryVol2BalsamOffice_Text_2:
# 320 "data/maps/BalsamOffice/scripts.pory"
	.string "No$"

KantonianWarHistoryVol2BalsamOffice_Text_3:
# 324 "data/maps/BalsamOffice/scripts.pory"
	.string "September, 2004: Team Aqua and Team\n"
	.string "Magma, two radical enviromentalist\l"
	.string "groups, attempt to control Hoenn's\l"
	.string "climate by awakening two ancient\l"
	.string "Pokémon - Kyogre and Groudon.$"

KantonianWarHistoryVol2BalsamOffice_Text_4:
# 328 "data/maps/BalsamOffice/scripts.pory"
	.string "However, thanks to the brave actions\n"
	.string "of two young trainers from Littleroot,\l"
	.string "their plans are foiled.$"

BalsamOfficeBooks_Text_0:
# 340 "data/maps/BalsamOffice/scripts.pory"
	.string "“Safemon Schedule - 2030” - Devon Co.,\n"
	.string "Internal Use Only.$"

BalsamOfficeBox_Text_0:
# 346 "data/maps/BalsamOffice/scripts.pory"
	.string "The box contains clothes suited for a\n"
	.string "warm, almost tropical environment.$"

BalsamOfficeRadioStation_Text_0:
# 352 "data/maps/BalsamOffice/scripts.pory"
	.string "It's an amateur radio station.$"

BalsamOfficeVideoPlayer_Text_0:
# 358 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a video player and some video\n"
	.string "tapes. Most of them are documentaries.$"

BalsamOfficeTrashCan_Text_0:
# 365 "data/maps/BalsamOffice/scripts.pory"
	.string "The trash can contains the remains of\n"
	.string "ripped postcards - and something else...$"

BalsamOfficeTrashCan_Text_1:
# 369 "data/maps/BalsamOffice/scripts.pory"
	.string "There's only the remains of postcards\n"
	.string "in the trash.$"

BalsamWalkman_Text_0:
# 379 "data/maps/BalsamOffice/scripts.pory"
	.string "There's two copies of the same casette.\n"
	.string "Should be fine if I take one…$"

BalsamWalkman_Text_1:
# 383 "data/maps/BalsamOffice/scripts.pory"
	.string "It's Balsam's portable music player.\n"
	.string "Let's leave it here.$"

GasLamp_Text_0:
# 388 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a gas lamp.$"

GasLamp_Text_1:
# 389 "data/maps/BalsamOffice/scripts.pory"
	.string "Turn On$"

GasLamp_Text_2:
# 389 "data/maps/BalsamOffice/scripts.pory"
	.string "Turn Off$"

GasLamp_Text_3:
# 389 "data/maps/BalsamOffice/scripts.pory"
	.string "Leave$"

OldBalsamWalkman_Text_0:
# 407 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a casette player. The casette\n"
	.string "contains several songs.$"

OldBalsamWalkman_Text_1:
# 408 "data/maps/BalsamOffice/scripts.pory"
	.string "Gymnopédie No. 1$"

OldBalsamWalkman_Text_2:
# 408 "data/maps/BalsamOffice/scripts.pory"
	.string "Air on the G String$"

OldBalsamWalkman_Text_3:
# 408 "data/maps/BalsamOffice/scripts.pory"
	.string "The Farthest Land$"

OldBalsamWalkman_Text_4:
# 411 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - Gymnopédie No. 1.$"

OldBalsamWalkman_Text_5:
# 417 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - Air on the G String.$"

OldBalsamWalkman_Text_6:
# 423 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - the Farthest Land.$"

CasetteRadio_Text_0:
# 449 "data/maps/BalsamOffice/scripts.pory"
	.string "“Gymnopédie No. 1”$"

CasetteRadio_Text_1:
# 451 "data/maps/BalsamOffice/scripts.pory"
	.string "???$"

CasetteRadio_Text_2:
# 455 "data/maps/BalsamOffice/scripts.pory"
	.string "“The Farthest Land”$"

CasetteRadio_Text_3:
# 461 "data/maps/BalsamOffice/scripts.pory"
	.string "“Air on the G String”$"

CasetteRadio_Text_4:
# 466 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a casette player. Which tape to\n"
	.string "insert?$"

CasetteRadio_Text_5:
# 468 "data/maps/BalsamOffice/scripts.pory"
	.string "{STR_VAR_1}$"

CasetteRadio_Text_6:
# 469 "data/maps/BalsamOffice/scripts.pory"
	.string "{STR_VAR_2}$"

CasetteRadio_Text_7:
# 470 "data/maps/BalsamOffice/scripts.pory"
	.string "{STR_VAR_3}$"

CasetteRadio_Text_8:
# 471 "data/maps/BalsamOffice/scripts.pory"
	.string "Another song$"

CasetteRadio_Text_9:
# 480 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “Gymnopédie No. 1”.$"

CasetteRadio_Text_10:
# 492 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “The Farthest Land”.$"

CasetteRadio_Text_11:
# 504 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “Air on the G String”.$"

CasetteRadio_Text_12:
# 514 "data/maps/BalsamOffice/scripts.pory"
	.string "“Party!”$"

CasetteRadio_Text_13:
# 520 "data/maps/BalsamOffice/scripts.pory"
	.string "“Seventh Symphony”$"

CasetteRadio_Text_14:
# 526 "data/maps/BalsamOffice/scripts.pory"
	.string "“The Wish”$"

CasetteRadio_Text_15:
# 530 "data/maps/BalsamOffice/scripts.pory"
	.string "Which tape to insert?$"

CasetteRadio_Text_16:
# 543 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “Party!”.$"

CasetteRadio_Text_17:
# 555 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “Seventh Symphony”.$"

CasetteRadio_Text_18:
# 567 "data/maps/BalsamOffice/scripts.pory"
	.string "Now playing - “The Wish”.$"

BalsamBookshelf_Text_0:
# 583 "data/maps/BalsamOffice/scripts.pory"
	.string "Among the many books on Pokémon\n"
	.string "science, there's a photo album...\p"
	.string "The cover features a photo of a couple\n"
	.string "of kids, building a sand castle on a\l"
	.string "clean beach.$"

BalsamDegree_Text_0:
# 591 "data/maps/BalsamOffice/scripts.pory"
	.string "It's a framed degree of higher\n"
	.string "education. It reads as follows:\p"
	.string "'University of Alola, Degree in Pokémon\n"
	.string "Genetics: Miss Balsam ¥?¿¥i.\p"
	.string "The surname has been crossed out.$"

DemoGoodbye_Text_0:
# 600 "data/maps/BalsamOffice/scripts.pory"
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
# 615 "data/maps/BalsamOffice/scripts.pory"
	.string "Stop the sentimental crap. Nobody\n"
	.string "cares. This clip is already too long.$"

DemoGoodbye_Text_2:
# 619 "data/maps/BalsamOffice/scripts.pory"
	.string "And you, whoever loser is reading this.\n"
	.string "Don't hold your breath for this hack's\l"
	.string "release.$"

DemoGoodbye_Text_3:
# 623 "data/maps/BalsamOffice/scripts.pory"
	.string "This nutjob is putting sign scripts in\n"
	.string "half of damn tiles and setting phone\l"
	.string "calls for random NPCs, as if people are\l"
	.string "going to read them.$"

DemoGoodbye_Text_4:
# 628 "data/maps/BalsamOffice/scripts.pory"
	.string "You'll live in an actual corporate\n"
	.string "dystopia by the time this is done.\l"
	.string "Later.$"

DemoGoodbye_Text_5:
# 644 "data/maps/BalsamOffice/scripts.pory"
	.string "...$"

DemoGoodbye_Text_6:
# 649 "data/maps/BalsamOffice/scripts.pory"
	.string "Pura...?$"

DemoGoodbye_Text_7:
# 654 "data/maps/BalsamOffice/scripts.pory"
	.string "HAHAHA - SHE'S RIGHT! SEE YOU IN MANY\n"
	.string "MONTHS!$"

Balsam_Outro::
# 247 "data/maps/BalsamOffice/scripts.pory"
	.string "...$"
