# 1 "data/maps/LittlerootLabBasement/scripts.pory"

# 2 "data/maps/LittlerootLabBasement/scripts.pory"
LittlerootLabBasement_MapScripts::
# 3 "data/maps/LittlerootLabBasement/scripts.pory"
	.byte 0

AideeBasementUnfollow3::
# 6 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 7 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 8 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 9 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow3_Text_0
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 11 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 12 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 13 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 14 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow3_Text_1
# 15 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 16 "data/maps/LittlerootLabBasement/scripts.pory"
	destroyfollowernpc
# 17 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject LOCALID_AIDEEBASEMENT
# 18 "data/maps/LittlerootLabBasement/scripts.pory"
	clearflag Aideearrivestobasement
# 19 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 7
# 20 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


AideeBasementIdleTalk::
# 24 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 25 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, AideeBasementIdleTalk_2
AideeBasementIdleTalk_1:
# 223 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_set Unsafeningtutodone, AideeBasementIdleTalk_5
AideeBasementIdleTalk_4:
# 301 "data/maps/LittlerootLabBasement/scripts.pory"
finishunsafentutorial:
# 302 "data/maps/LittlerootLabBasement/scripts.pory"
finishsafemontradescript:
# 303 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

AideeBasementIdleTalk_2:
# 26 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 27 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 28 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 29 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_0
# 31 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 32 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 33 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 34 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_1
# 37 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 38 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 39 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 40 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_2
# 43 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 44 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 45 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 46 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_3
# 49 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 50 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 51 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 52 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_4
# 54 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_1
# 56 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 57 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_5
# 58 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 59 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 60 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 4, AideeBasementIdleTalk_Movement_2
# 61 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 62 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 63 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 4
# 64 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 65 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 66 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_3
# 67 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 68 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 69 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_7
# 71 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 2
# 72 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 2, 10, 4
# 73 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 74 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 75 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 76 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_8
# 77 "data/maps/LittlerootLabBasement/scripts.pory"
	closemessage
# 78 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 79 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_POKENAV_ON
# 80 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 81 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeoutbgm 2
# 82 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_ELEVATOR
# 83 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_TO_WHITE
# 84 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 85 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_SAVE
# 86 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 87 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 88 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 89 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_9
# 90 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 91 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeinbgm 2
# 92 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 93 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 94 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 95 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 2
# 96 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_1
# 97 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_10
# 98 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 99 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 101 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 5
# 102 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 5, 11, 6
# 103 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 104 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 105 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_NORMAL
# 106 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideeBasementIdleTalk_Movement_2
# 107 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_11
# 109 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_4
# 110 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 111 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 112 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_12
# 115 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 116 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 117 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 118 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_13
# 121 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 122 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 123 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 124 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_14
# 126 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 127 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_15
# 128 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_16, AideeBasementIdleTalk_Text_17
# 129 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmessage
# 131 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_8
AideeBasementIdleTalk_7:
# 160 "data/maps/LittlerootLabBasement/scripts.pory"
dontwantvoltorb:
# 161 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_14
AideeBasementIdleTalk_13:
# 182 "data/maps/LittlerootLabBasement/scripts.pory"
nicknamedvoltorb:
# 183 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 184 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 185 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 186 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 187 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_24
# 190 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 191 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 192 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 193 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_25
# 196 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 197 "data/maps/LittlerootLabBasement/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 198 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 199 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_26
# 200 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 202 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 203 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 204 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_27
# 208 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 209 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 210 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 211 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_28
# 214 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 215 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 216 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 217 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_29
# 218 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 219 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag Unsafeningtutodone
# 220 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishunsafentutorial
	goto AideeBasementIdleTalk_1

AideeBasementIdleTalk_5:
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 225 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 226 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_30
# 227 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_31, AideeBasementIdleTalk_Text_32, AideeBasementIdleTalk_Text_33
# 230 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_11
AideeBasementIdleTalk_10:
# 282 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_19
	goto AideeBasementIdleTalk_4

AideeBasementIdleTalk_8:
# 132 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 133 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 134 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideeBasementIdleTalk_Movement_5
# 135 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_1
# 136 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 137 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_HIGH_PITCH
# 138 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_18
# 140 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 141 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 142 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_19
# 143 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 144 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 145 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
# 146 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 148 "data/maps/LittlerootLabBasement/scripts.pory"
	givemon SPECIES_VOLTORB, 3
# 149 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AideeBasementIdleTalk_17
AideeBasementIdleTalk_16:
# 157 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AideeBasementIdleTalk_24
	goto AideeBasementIdleTalk_7

AideeBasementIdleTalk_11:
# 231 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 232 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 233 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_34
# 234 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_35, AideeBasementIdleTalk_Text_36
# 236 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_22
AideeBasementIdleTalk_21:
# 269 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_31
	goto AideeBasementIdleTalk_10

AideeBasementIdleTalk_14:
# 162 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 163 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 164 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_1
# 165 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 166 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_WEAK
# 167 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_21
# 169 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 170 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 171 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 172 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_22
# 173 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 174 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 175 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 176 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_1
# 177 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_23
# 178 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 179 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
	goto AideeBasementIdleTalk_13

AideeBasementIdleTalk_17:
# 150 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 151 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 152 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_20, MSGBOX_YESNO
# 153 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AideeBasementIdleTalk_26
	goto AideeBasementIdleTalk_16

AideeBasementIdleTalk_19:
# 283 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 284 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 285 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_43
# 287 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_44, AideeBasementIdleTalk_Text_45
# 289 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_29
AideeBasementIdleTalk_28:
# 297 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_36
	goto AideeBasementIdleTalk_4

AideeBasementIdleTalk_22:
# 237 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 238 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 239 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_37
	checkitem ITEM_COMET_SHARD
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_33
# 264 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_40
	goto AideeBasementIdleTalk_21

AideeBasementIdleTalk_24:
# 158 "data/maps/LittlerootLabBasement/scripts.pory"
	goto dontwantvoltorb
	goto AideeBasementIdleTalk_7

AideeBasementIdleTalk_26:
# 154 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 155 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 156 "data/maps/LittlerootLabBasement/scripts.pory"
	goto nicknamedvoltorb
	goto AideeBasementIdleTalk_16

AideeBasementIdleTalk_29:
# 290 "data/maps/LittlerootLabBasement/scripts.pory"
Aideopinion:
# 291 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 292 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_46
	goto AideeBasementIdleTalk_28

AideeBasementIdleTalk_31:
# 270 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 271 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 272 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_41
# 273 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials
# 274 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_42
# 275 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_10

AideeBasementIdleTalk_33:
# 243 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_38
# 245 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_VOLTORB
# 246 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 247 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 248 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 249 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 250 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 251 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 252 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 253 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 254 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 255 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 256 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 257 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 258 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 260 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_39
# 262 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_21

AideeBasementIdleTalk_36:
# 298 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aideopinion
	goto AideeBasementIdleTalk_4


	.align 2
# 306 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials:
# 307 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
	.2byte ITEM_NONE

CancelTradeSafemonSelection::
# 311 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 312 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 313 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox CancelTradeSafemonSelection_Text_0
# 315 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


SelectedIncorrectTradeSafemon::
# 319 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 320 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 321 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 322 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox SelectedIncorrectTradeSafemon_Text_0
# 324 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


CheerorbBasementIdleTalk::
# 328 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 329 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 330 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 331 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


# 10 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow3_Movement_0:
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

# 26 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_0:
# 26 "data/maps/LittlerootLabBasement/scripts.pory"
	face_player
	step_end

# 54 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_1:
# 54 "data/maps/LittlerootLabBasement/scripts.pory"
	face_right
	step_end

# 60 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_2:
# 60 "data/maps/LittlerootLabBasement/scripts.pory"
	face_left
	step_end

# 66 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_3:
# 66 "data/maps/LittlerootLabBasement/scripts.pory"
	face_up
	step_end

# 109 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_4:
# 109 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

# 134 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_5:
# 134 "data/maps/LittlerootLabBasement/scripts.pory"
	jump_in_place_down
	step_end

AideeBasementUnfollow3_Text_0:
# 9 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ah, here we are!$"

AideeBasementUnfollow3_Text_1:
# 14 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come, {PLAYER}! I'll show you\n"
	.string "something really cool!$"

AideeBasementIdleTalk_Text_0:
# 29 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Behold, the culmination of Professor\n"
	.string "Balsam's and my research...$"

AideeBasementIdleTalk_Text_1:
# 34 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The {COLOR BLUE}UNSAFENING MACHINE{COLOR DARK_GRAY}! {COLOR LIGHT_GRAY}{SHADOW WHITE}Name in the\n"
	.string "works...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

AideeBasementIdleTalk_Text_2:
# 40 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Now, I could spend several hours\n"
	.string "elucidating the intricacies of this\l"
	.string "invention...$"

AideeBasementIdleTalk_Text_3:
# 46 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But I believe it would be lost on you, so\n"
	.string "allow me to perform a demonstration\l"
	.string "instead.$"

AideeBasementIdleTalk_Text_4:
# 52 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "First, we take the appropriate material\n"
	.string "- in this case, the {COLOR RED}Voltorb Shard{COLOR DARK_GRAY} you\l"
	.string "brought...$"

AideeBasementIdleTalk_Text_5:
# 57 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Second, we take the appropriate\n"
	.string "Safemon - in this case, this Cheerorb...$"

AideeBasementIdleTalk_Text_6:
# 62 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Chee-cheeeer!$"

AideeBasementIdleTalk_Text_7:
# 69 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Third, we get them both in the same\n"
	.string "Pokéball, and place it over the tray...$"

AideeBasementIdleTalk_Text_8:
# 76 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And last but not least... we press this\n"
	.string "button!$"

AideeBasementIdleTalk_Text_9:
# 89 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Aah... it WORKED! IT FINALLY WORKED!$"

AideeBasementIdleTalk_Text_10:
# 97 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Look, {PLAYER}!$"

AideeBasementIdleTalk_Text_11:
# 107 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vol-voooolt!$"

AideeBasementIdleTalk_Text_12:
# 112 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "We have reverted a Safemon back into a\n"
	.string "regular Pokémon! Isn't it fascinating!?\p"
	.string "Take that, Devon Corp. - what you can\n"
	.string "do, we can undo! Bwahaha!$"

AideeBasementIdleTalk_Text_13:
# 118 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So... I don't know how fond are you of\n"
	.string "Voltorbs, after serving in the army and\l"
	.string "all...$"

AideeBasementIdleTalk_Text_14:
# 124 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But if you want to adopt this one, I'd\n"
	.string "be happy to obligue. It's thanks to you\l"
	.string "it's a Voltorb again, after all.$"

AideeBasementIdleTalk_Text_15:
# 127 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "What do you say?$"

AideeBasementIdleTalk_Text_16:
# 128 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Adopt$"

AideeBasementIdleTalk_Text_17:
# 128 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't adopt$"

AideeBasementIdleTalk_Text_18:
# 138 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Volt-Voooolt!$"

AideeBasementIdleTalk_Text_19:
# 142 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey, I think it's happy!$"

AideeBasementIdleTalk_Text_20:
# 152 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Give Voltorb a nickname...?$"

AideeBasementIdleTalk_Text_21:
# 167 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vooolt...$"

AideeBasementIdleTalk_Text_22:
# 172 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Haha... hey, I get it. Voltorbs are\n"
	.string "dangerous!$"

AideeBasementIdleTalk_Text_23:
# 177 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't worry - I'll take good care of it.$"

AideeBasementIdleTalk_Text_24:
# 187 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "At any rate {PLAYER} - if you bring me\n"
	.string "Safemon, and the appropriate materials,\l"
	.string "I can turn them back into Pokémon for\l"
	.string "you.$"

AideeBasementIdleTalk_Text_25:
# 193 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, I almost forgot - here's your ACTUAL\n"
	.string "reward! Should come in handy, if you\l"
	.string "decide to help us!$"

AideeBasementIdleTalk_Text_26:
# 199 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Obtained the DEVONDEX!$"

AideeBasementIdleTalk_Text_27:
# 204 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "This is the latest model of the\n"
	.string "Devondex. It will store information\l"
	.string "about Pokémon and Safemon native to\l"
	.string "Hoenn.\p"
	.string "Mind you, it will not register any data\n"
	.string "on the unsafened Pokémon you get\l"
	.string "here... since they're not supposed to be\l"
	.string "found in the wild anymore.$"

AideeBasementIdleTalk_Text_28:
# 211 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "However, if you bring me enough Safemon\n"
	.string "to unsafen, perhaps I can study them\l"
	.string "and hack... I mean, upgrade the Pokédex\l"
	.string "later on!$"

AideeBasementIdleTalk_Text_29:
# 217 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But that's enough talk from me. Go out\n"
	.string "there, and bring me tons of specimens!$"

AideeBasementIdleTalk_Text_30:
# 226 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey there, {PLAYER}! What brings you\n"
	.string "here?$"

AideeBasementIdleTalk_Text_31:
# 227 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Unsafen Safemon$"

AideeBasementIdleTalk_Text_32:
# 228 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Materials$"

AideeBasementIdleTalk_Text_33:
# 228 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Chit-chat$"

AideeBasementIdleTalk_Text_34:
# 233 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which Safemon would you like to\n"
	.string "unsafen?$"

AideeBasementIdleTalk_Text_35:
# 234 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb$"

AideeBasementIdleTalk_Text_36:
# 234 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "None$"

AideeBasementIdleTalk_Text_37:
# 239 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb, huh? Well, for this one we\n"
	.string "need a {COLOR RED}Voltorb Shard{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_38:
# 243 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Cheerorb!$"

AideeBasementIdleTalk_Text_39:
# 260 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success.\p"
	.string "Take good care of that Pokémon!$"

AideeBasementIdleTalk_Text_40:
# 264 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Of which you don't have any of! Luckily\n"
	.string "for you, I have some in supply you can\l"
	.string "buy!$"

AideeBasementIdleTalk_Text_41:
# 272 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Shop goes here$"

AideeBasementIdleTalk_Text_42:
# 274 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Pleasure doing business!$"

AideeBasementIdleTalk_Text_43:
# 285 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So, {PLAYER}... What's your stance on\n"
	.string "Devon Corp. and Safemon?$"

AideeBasementIdleTalk_Text_44:
# 287 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I like them$"

AideeBasementIdleTalk_Text_45:
# 287 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I don't like them$"

AideeBasementIdleTalk_Text_46:
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hah, that's fair enough. Me, I'm\n"
	.string "indifferent - I just like the science\l"
	.string "behind it all!$"

CancelTradeSafemonSelection_Text_0:
# 313 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, changed your mind? Well, I guess\n"
	.string "some Safemon have their charm after\l"
	.string "all.$"

SelectedIncorrectTradeSafemon_Text_0:
# 322 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, that's not a {STR_VAR_1},\n"
	.string "{PLAYER}! You should do some\l"
	.string "reviewing with that Devondex I gave\l"
	.string "you, haha!$"
