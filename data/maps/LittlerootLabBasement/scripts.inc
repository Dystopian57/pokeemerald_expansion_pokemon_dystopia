# 1 "data/maps/LittlerootLabBasement/scripts.pory"

# 2 "data/maps/LittlerootLabBasement/scripts.pory"
LittlerootLabBasement_MapScripts::
# 3 "data/maps/LittlerootLabBasement/scripts.pory"
	.byte 0

LabBasementTrashBin::
# 8 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 9 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset FLAG_ITEM_LAB_BASEMENT_TRASH, LabBasementTrashBin_2
# 14 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementTrashBin_Text_1
LabBasementTrashBin_1:
# 15 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

LabBasementTrashBin_2:
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementTrashBin_Text_0
# 11 "data/maps/LittlerootLabBasement/scripts.pory"
	giveitem ITEM_PARK_BALL
# 12 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_ITEM_LAB_BASEMENT_TRASH
	goto LabBasementTrashBin_1


LabBasementTunnelSign::
# 19 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 20 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementTunnelSign_Text_0
# 21 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


LabBasementBalsamRoomSign::
# 24 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 25 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBalsamRoomSign_Text_0
# 26 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


AideLaptop::
# 30 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 31 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideLaptop_Text_0
# 33 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


AideMedicineDispenserScript::
# 36 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 37 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideMedicineDispenserScript_Text_0
# 38 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMedicineDispenser
# 39 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


LabBasementUnsafener::
# 45 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 56 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementUnsafener_Text_0
# 58 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


LabBasementBlueprints::
# 62 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 63 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementBlueprints_2
# 68 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBlueprints_Text_1
LabBasementBlueprints_1:
# 70 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBlueprints_Text_2
# 75 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementBlueprints_2:
# 65 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBlueprints_Text_0
	goto LabBasementBlueprints_1


LabBasementFaceWallCabinet::
# 79 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 80 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementFaceWallCabinet_Text_0
# 81 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


LabBasementCavity::
# 85 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 86 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementCavity_2
# 92 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCavity_Text_1
LabBasementCavity_1:
# 93 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementCavity_2:
# 89 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCavity_Text_0
	goto LabBasementCavity_1


LabBasementCoolingTerminal::
# 97 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 98 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementCoolingTerminal_2
# 104 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCoolingTerminal_Text_1
LabBasementCoolingTerminal_1:
# 105 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementCoolingTerminal_2:
# 101 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCoolingTerminal_Text_0
	goto LabBasementCoolingTerminal_1


	.align 2
# 108 "data/maps/LittlerootLabBasement/scripts.pory"
AideMedicineDispenser:
# 109 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 110 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 111 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_PROTEIN
# 112 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_IRON
# 113 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CALCIUM
# 114 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ZINC
# 115 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CARBOS
# 116 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_PP_UP
# 117 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 118 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 119 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 120 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CALM_MINT
# 121 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 122 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 123 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 124 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 125 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 126 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_LAX_MINT
# 127 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 128 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MILD_MINT
# 129 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 130 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 131 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 132 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 133 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_RASH_MINT
# 134 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 135 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE

AideCasettePlayer::
# 139 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 140 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_0
# 142 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, AideCasettePlayer_Text_1, AideCasettePlayer_Text_2
# 143 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideCasettePlayer_2
AideCasettePlayer_1:
# 172 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideCasettePlayer_5
AideCasettePlayer_4:
# 173 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

AideCasettePlayer_2:
# 144 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_RENBOUPARTY, TRUE
# 145 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Aideearrivestobasement, AideCasettePlayer_8
AideCasettePlayer_7:
# 169 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideCasettePlayer_1

AideCasettePlayer_5:
# 172 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideCasettePlayer_4

AideCasettePlayer_8:
# 146 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_0
# 147 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_PIN
# 148 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 149 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 150 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_3
# 151 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_1
# 153 "data/maps/LittlerootLabBasement/scripts.pory"
	call BalsamYellShake
# 154 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 155 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 156 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_4
# 158 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 159 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 160 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_5
# 162 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 163 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 164 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 165 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_6
# 166 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_3
# 167 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
	goto AideCasettePlayer_7


BalsamYellShake::
# 178 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8004, 2
# 179 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8005, 6
# 180 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8006, 4
# 181 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8007, 4
# 182 "data/maps/LittlerootLabBasement/scripts.pory"
	special ShakeCamera
	return


AideeBasementUnfollow1::
# 187 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 188 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 189 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 190 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 191 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow1_Movement_0
# 192 "data/maps/LittlerootLabBasement/scripts.pory"
Aidebymachine:
# 193 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 194 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 195 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 196 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_1
# 197 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 198 "data/maps/LittlerootLabBasement/scripts.pory"
	destroyfollowernpc
# 199 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject LOCALID_AIDEEBASEMENT
# 200 "data/maps/LittlerootLabBasement/scripts.pory"
	clearflag Aideearrivestobasement
# 201 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 7
# 202 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


AideeBasementUnfollow2::
# 206 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 207 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 208 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 209 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 210 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AideeBasementUnfollow2_Movement_0
# 211 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 212 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow1_Movement_0
# 213 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 214 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AideeBasementUnfollow2_Movement_1
# 215 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementUnfollow3::
# 220 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 221 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 222 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 223 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 225 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementUnfollow4::
# 229 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 230 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 231 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 232 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 233 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 234 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementIdleTalk::
# 238 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 239 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, AideeBasementIdleTalk_2
AideeBasementIdleTalk_1:
# 461 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_set Unsafeningtutodone, AideeBasementIdleTalk_4
	return

AideeBasementIdleTalk_2:
# 240 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 241 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 242 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 243 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_0
# 245 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 246 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 247 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 248 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_1
# 251 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 252 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 253 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 254 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_2
# 257 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 258 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 260 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_3
# 262 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 263 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 264 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 265 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_4
# 268 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 270 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 271 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_5
# 272 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 273 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 274 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 4, AideeBasementIdleTalk_Movement_1
# 275 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 276 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 277 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 4
# 278 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 279 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 280 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementUnfollow2_Movement_1
# 281 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 282 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 283 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_7
# 285 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 2
# 286 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 2, 10, 4
# 287 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_BAG_POCKET
# 288 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 289 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 290 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_8
# 291 "data/maps/LittlerootLabBasement/scripts.pory"
	closemessage
# 292 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_POKENAV_ON
# 294 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 295 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeoutbgm 2
# 296 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_ELEVATOR
# 297 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_TO_WHITE
# 298 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 299 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_SAVE
# 300 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 301 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 302 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 303 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_9
# 305 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 306 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeinbgm 2
# 307 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 308 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 309 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 310 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 2
# 311 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 312 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_10
# 313 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 314 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 316 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 5
# 317 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 5, 11, 6
# 318 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 319 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 320 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_NORMAL
# 321 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideeBasementIdleTalk_Movement_1
# 322 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_11
# 324 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_3
# 325 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 326 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 327 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_12
# 329 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 330 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 331 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 332 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_13
# 334 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 335 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 336 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 337 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_14
# 339 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 340 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_15
# 341 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_16, AideeBasementIdleTalk_Text_17
# 342 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmessage
# 344 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_7
AideeBasementIdleTalk_6:
# 374 "data/maps/LittlerootLabBasement/scripts.pory"
dontwantvoltorb:
# 375 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_13
AideeBasementIdleTalk_12:
# 396 "data/maps/LittlerootLabBasement/scripts.pory"
nicknamedvoltorb:
# 397 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 398 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 399 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 400 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 401 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_24
# 405 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 406 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 407 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 408 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_25
# 411 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 412 "data/maps/LittlerootLabBasement/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 413 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 414 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_26
# 415 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 417 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 418 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 419 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_27
# 422 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_BULBASYNTH
# 423 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_SMOTHQUIL
# 424 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_PIKACHU_SAFE
# 425 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_MIMIYURUI
# 427 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 428 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 429 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 430 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_28
# 433 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 434 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 435 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_29
# 437 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 438 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_REGISTER_MATCH_CALL, TRUE
# 439 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_30
# 443 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 444 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 445 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 446 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeoutbgm 1
# 447 "data/maps/LittlerootLabBasement/scripts.pory"
	fadenewbgm 1
# 448 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 449 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 450 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 451 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_31
# 453 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 454 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 455 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_32
# 456 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 457 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag Unsafeningtutodone
# 458 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishunsafentutorial
	goto AideeBasementIdleTalk_1

AideeBasementIdleTalk_4:
# 462 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 463 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 464 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_33
# 465 "data/maps/LittlerootLabBasement/scripts.pory"
aidechoices:
# 466 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_34, AideeBasementIdleTalk_Text_35, AideeBasementIdleTalk_Text_36, AideeBasementIdleTalk_Text_37, AideeBasementIdleTalk_Text_38
# 471 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_10
AideeBasementIdleTalk_9:
# 522 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_19
AideeBasementIdleTalk_18:
# 567 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_29
AideeBasementIdleTalk_28:
# 588 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_38
AideeBasementIdleTalk_37:
# 595 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_46
	return

AideeBasementIdleTalk_7:
# 345 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 346 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 347 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideCasettePlayer_Movement_1
# 348 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 349 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 350 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_HIGH_PITCH
# 351 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_18
# 353 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 354 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 355 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_19
# 356 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 357 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 358 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
# 359 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 362 "data/maps/LittlerootLabBasement/scripts.pory"
	givemon SPECIES_VOLTORB, 3
# 363 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AideeBasementIdleTalk_16
AideeBasementIdleTalk_15:
# 371 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AideeBasementIdleTalk_24
	goto AideeBasementIdleTalk_6

AideeBasementIdleTalk_10:
# 472 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 473 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 474 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafenmaterialtutodone, AideeBasementIdleTalk_21
# 489 "data/maps/LittlerootLabBasement/scripts.pory"
afterunsafenmaterialtuto:
# 490 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 491 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 492 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_41
# 494 "data/maps/LittlerootLabBasement/scripts.pory"
	GetGameStat GAME_STAT_RODE_CABLE_CAR
# 495 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 496 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_35
AideeBasementIdleTalk_34:
# 499 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge AideeBasementIdleTalk_44
AideeBasementIdleTalk_43:
# 502 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_ge AideeBasementIdleTalk_52
AideeBasementIdleTalk_51:
# 505 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_ge AideeBasementIdleTalk_58
AideeBasementIdleTalk_57:
# 508 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_ge AideeBasementIdleTalk_67
AideeBasementIdleTalk_66:
# 511 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge AideeBasementIdleTalk_76
AideeBasementIdleTalk_75:
# 515 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 516 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 517 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_42
# 518 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_9

AideeBasementIdleTalk_13:
# 376 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 377 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 378 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 379 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 380 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_WEAK
# 381 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_21
# 383 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 384 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 385 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 386 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_22
# 387 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 388 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 389 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 390 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 391 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_23
# 392 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 393 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
	goto AideeBasementIdleTalk_12

AideeBasementIdleTalk_16:
# 364 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 365 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 366 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_20, MSGBOX_YESNO
# 367 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AideeBasementIdleTalk_26
	goto AideeBasementIdleTalk_15

AideeBasementIdleTalk_19:
# 525 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 526 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 527 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_43
# 529 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_44, AideeBasementIdleTalk_Text_45, AideeBasementIdleTalk_Text_46
# 532 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_32
AideeBasementIdleTalk_31:
# 543 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_41
AideeBasementIdleTalk_40:
# 553 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_49
AideeBasementIdleTalk_48:
# 562 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_50
# 564 "data/maps/LittlerootLabBasement/scripts.pory"
	goto aidechoices
	goto AideeBasementIdleTalk_18

AideeBasementIdleTalk_21:
# 475 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_39
# 482 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 483 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 484 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_40
# 485 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag Unsafenmaterialtutodone
# 486 "data/maps/LittlerootLabBasement/scripts.pory"
	goto afterunsafenmaterialtuto
	goto AideeBasementIdleTalk_9

AideeBasementIdleTalk_24:
# 372 "data/maps/LittlerootLabBasement/scripts.pory"
	goto dontwantvoltorb
	goto AideeBasementIdleTalk_6

AideeBasementIdleTalk_26:
# 368 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 369 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 370 "data/maps/LittlerootLabBasement/scripts.pory"
	goto nicknamedvoltorb
	goto AideeBasementIdleTalk_15

AideeBasementIdleTalk_29:
# 568 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_51
# 574 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_1
# 575 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_52
# 577 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 578 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_53
# 583 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_50
# 584 "data/maps/LittlerootLabBasement/scripts.pory"
	goto aidechoices
	goto AideeBasementIdleTalk_28

AideeBasementIdleTalk_32:
# 533 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 534 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 535 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_47
	goto AideeBasementIdleTalk_31

AideeBasementIdleTalk_35:
# 497 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials0
	goto AideeBasementIdleTalk_34

AideeBasementIdleTalk_38:
# 589 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_37

AideeBasementIdleTalk_41:
# 544 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 545 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 546 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_48
	goto AideeBasementIdleTalk_40

AideeBasementIdleTalk_44:
# 500 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials1
	goto AideeBasementIdleTalk_43

AideeBasementIdleTalk_46:
# 596 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 597 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 598 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_54
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56, AideeBasementIdleTalk_Text_57, AideeBasementIdleTalk_Text_58, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 602 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_55
AideeBasementIdleTalk_54:
# 644 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_61
AideeBasementIdleTalk_60:
# 685 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_70
AideeBasementIdleTalk_69:
# 726 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_79
AideeBasementIdleTalk_78:
# 765 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq AideeBasementIdleTalk_85
AideeBasementIdleTalk_84:
# 773 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_91
AideeBasementIdleTalk_90:
# 2511 "data/maps/LittlerootLabBasement/scripts.pory"
finishunsafentutorial:
# 2512 "data/maps/LittlerootLabBasement/scripts.pory"
finishsafemontradescript:
# 2513 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 2514 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

AideeBasementIdleTalk_49:
# 554 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 555 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 556 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_49
	goto AideeBasementIdleTalk_48

AideeBasementIdleTalk_52:
# 503 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials2
	goto AideeBasementIdleTalk_51

AideeBasementIdleTalk_55:
# 603 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 604 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 605 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_61
	checkitem ITEM_COMET_SHARD
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_63
# 635 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 636 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
	goto AideeBasementIdleTalk_54

AideeBasementIdleTalk_58:
# 506 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials3
	goto AideeBasementIdleTalk_57

AideeBasementIdleTalk_61:
# 645 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 646 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 647 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_65
	checkitem ITEM_MIRACLE_SEED
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_72
# 676 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 677 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
	goto AideeBasementIdleTalk_60

AideeBasementIdleTalk_63:
# 609 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_62
# 611 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_VOLTORB
# 614 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 615 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 616 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 617 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 618 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 619 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 620 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 621 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 622 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 623 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 624 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 625 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 626 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 627 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 628 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 629 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_63
# 631 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_COMET_SHARD, 1
	goto AideeBasementIdleTalk_54

AideeBasementIdleTalk_67:
# 509 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials4
	goto AideeBasementIdleTalk_66

AideeBasementIdleTalk_70:
# 686 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 687 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 688 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_69
	checkitem ITEM_FLAME_ORB
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_81
# 717 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 718 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
	goto AideeBasementIdleTalk_69

AideeBasementIdleTalk_72:
# 651 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_66
# 653 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BULBASAUR
# 654 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 655 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 656 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 657 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 658 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 659 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 660 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 661 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 662 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 663 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 664 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 665 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 666 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 667 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 668 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 670 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_67
# 672 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MIRACLE_SEED, 1
# 673 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_60

AideeBasementIdleTalk_76:
# 512 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials5
	goto AideeBasementIdleTalk_75

AideeBasementIdleTalk_79:
# 727 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 728 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 729 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_72
	checkitem ITEM_MAGNET
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_87
# 758 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 759 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_81:
# 692 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_70
# 694 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_CYNDAQUIL
# 695 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 696 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 697 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 698 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 699 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 700 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 701 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 702 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 703 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 704 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 705 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 706 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 707 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 708 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 709 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 711 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_71
# 713 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_FLAME_ORB, 1
# 714 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_69

AideeBasementIdleTalk_85:
# 766 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 767 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_75
# 768 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_84

AideeBasementIdleTalk_87:
# 733 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_73
# 735 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PIKACHU
# 736 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 737 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 738 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 739 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 740 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 741 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 742 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 743 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 744 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 745 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 746 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 747 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 748 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 749 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 750 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 752 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_74
# 754 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MAGNET, 1
# 755 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_91:
# 774 "data/maps/LittlerootLabBasement/scripts.pory"
secondsafemonlistreturn:
# 775 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NINKABURI
# 776 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_94
AideeBasementIdleTalk_93:
# 778 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_97
AideeBasementIdleTalk_96:
# 781 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_SHIITAKO
# 782 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_100
AideeBasementIdleTalk_99:
# 784 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_103
AideeBasementIdleTalk_102:
# 787 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 788 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_106
AideeBasementIdleTalk_105:
# 790 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_109
AideeBasementIdleTalk_108:
# 794 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_76
# 795 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 798 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_112
AideeBasementIdleTalk_111:
# 850 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_115
AideeBasementIdleTalk_114:
# 906 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_121
AideeBasementIdleTalk_120:
# 961 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_132
AideeBasementIdleTalk_131:
# 969 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_143
AideeBasementIdleTalk_142:
# 990 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 991 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 993 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_151
AideeBasementIdleTalk_150:
# 1048 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_157
AideeBasementIdleTalk_156:
# 1104 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_166
AideeBasementIdleTalk_165:
# 1165 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_180
AideeBasementIdleTalk_179:
# 1174 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_194
AideeBasementIdleTalk_193:
# 1195 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1196 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1198 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_205
AideeBasementIdleTalk_204:
# 1254 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_217
AideeBasementIdleTalk_216:
# 1310 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_226
AideeBasementIdleTalk_225:
# 1367 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_240
AideeBasementIdleTalk_239:
# 1388 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1389 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1391 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_254
AideeBasementIdleTalk_253:
# 1447 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_268
AideeBasementIdleTalk_267:
# 1503 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_279
AideeBasementIdleTalk_278:
# 1560 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_293
AideeBasementIdleTalk_292:
# 1581 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1582 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1584 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_307
AideeBasementIdleTalk_306:
# 1640 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_321
AideeBasementIdleTalk_320:
# 1697 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_332
AideeBasementIdleTalk_331:
# 1754 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_346
AideeBasementIdleTalk_345:
# 1775 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1776 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1778 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_360
AideeBasementIdleTalk_359:
# 1834 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_374
AideeBasementIdleTalk_373:
# 1890 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_385
AideeBasementIdleTalk_384:
# 1949 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_399
AideeBasementIdleTalk_398:
# 1970 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1971 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1973 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_413
AideeBasementIdleTalk_412:
# 2025 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_427
AideeBasementIdleTalk_426:
# 2081 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_438
AideeBasementIdleTalk_437:
# 2138 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_449
AideeBasementIdleTalk_448:
# 2159 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 2160 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 2162 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_463
AideeBasementIdleTalk_462:
# 2218 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_477
AideeBasementIdleTalk_476:
# 2274 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_488
AideeBasementIdleTalk_487:
# 2331 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_502
AideeBasementIdleTalk_501:
# 2352 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 2353 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 2355 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_516
AideeBasementIdleTalk_515:
# 2411 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_530
AideeBasementIdleTalk_529:
# 2468 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_540
	goto AideeBasementIdleTalk_90

AideeBasementIdleTalk_94:
# 777 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NINKABURI
	goto AideeBasementIdleTalk_93

AideeBasementIdleTalk_97:
# 779 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_96

AideeBasementIdleTalk_100:
# 783 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SHIITAKO
	goto AideeBasementIdleTalk_99

AideeBasementIdleTalk_103:
# 785 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_102

AideeBasementIdleTalk_106:
# 789 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_POOCHAIN
	goto AideeBasementIdleTalk_105

AideeBasementIdleTalk_109:
# 791 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_108

AideeBasementIdleTalk_112:
# 799 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NINKABURI
# 800 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_118
AideeBasementIdleTalk_117:
# 840 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_126
	goto AideeBasementIdleTalk_111

AideeBasementIdleTalk_115:
# 851 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_SHIITAKO
# 852 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_124
AideeBasementIdleTalk_123:
# 895 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_137
	goto AideeBasementIdleTalk_114

AideeBasementIdleTalk_118:
# 802 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 803 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 804 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_80
	checkitem ITEM_HONEY
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_128
# 833 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 834 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 837 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_117

AideeBasementIdleTalk_121:
# 907 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 908 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_135
AideeBasementIdleTalk_134:
# 951 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_145
	goto AideeBasementIdleTalk_120

AideeBasementIdleTalk_124:
# 855 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 856 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 857 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_84
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_139
# 886 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 887 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 890 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_123

AideeBasementIdleTalk_126:
# 841 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 842 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 843 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 846 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_111

AideeBasementIdleTalk_128:
# 808 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_81
# 810 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NINCADA
# 811 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 812 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 813 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 814 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 815 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 816 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 817 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 818 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 819 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 820 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 821 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 822 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 823 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 824 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 825 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 827 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_82
# 829 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_HONEY, 1
# 830 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_117

AideeBasementIdleTalk_132:
# 962 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 963 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_75
# 964 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_131

AideeBasementIdleTalk_135:
# 910 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 911 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 912 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_87
	checkitem ITEM_CHOICE_BAND
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_147
# 942 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 943 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 946 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_134

AideeBasementIdleTalk_137:
# 896 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 897 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 898 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 901 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_114

AideeBasementIdleTalk_139:
# 861 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_85
# 863 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SHROOMISH
# 864 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 865 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 866 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 867 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 868 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 869 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 870 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 871 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 872 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 873 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 874 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 875 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 876 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 877 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 878 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 880 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 882 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 883 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_123

AideeBasementIdleTalk_143:
# 970 "data/maps/LittlerootLabBasement/scripts.pory"
thirdsafemonlistreturn:
# 971 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_FOOMING
# 972 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_154
AideeBasementIdleTalk_153:
# 974 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_163
AideeBasementIdleTalk_162:
# 977 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GEOSLUG
# 978 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_177
AideeBasementIdleTalk_176:
# 980 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_191
AideeBasementIdleTalk_190:
# 983 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NIDORAN_I
# 984 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_202
AideeBasementIdleTalk_201:
# 986 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_214
	goto AideeBasementIdleTalk_142

AideeBasementIdleTalk_145:
# 952 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 953 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 954 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 957 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_120

AideeBasementIdleTalk_147:
# 917 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_88
# 919 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_POOCHYENA
# 920 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 921 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 922 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 923 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 924 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 925 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 926 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 927 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 928 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 929 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 930 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 931 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 932 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 933 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 934 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 936 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_89
# 938 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_CHOICE_BAND, 1
# 939 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_134

AideeBasementIdleTalk_151:
# 994 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_FOOMING
# 995 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_160
AideeBasementIdleTalk_159:
# 1038 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_171
	goto AideeBasementIdleTalk_150

AideeBasementIdleTalk_154:
# 973 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FOOMING
	goto AideeBasementIdleTalk_153

AideeBasementIdleTalk_157:
# 1049 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GEOSLUG
# 1050 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_169
AideeBasementIdleTalk_168:
# 1093 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_185
	goto AideeBasementIdleTalk_156

AideeBasementIdleTalk_160:
# 998 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 999 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1000 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_91
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_173
# 1029 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1030 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1033 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_159

AideeBasementIdleTalk_163:
# 975 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_162

AideeBasementIdleTalk_166:
# 1105 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NIDORAN_I
# 1106 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_183
AideeBasementIdleTalk_182:
# 1155 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_196
	goto AideeBasementIdleTalk_165

AideeBasementIdleTalk_169:
# 1053 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1054 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1055 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_94
	checkitem ITEM_CHARCOAL
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_187
# 1084 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1085 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1088 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_168

AideeBasementIdleTalk_171:
# 1039 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1040 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1041 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1044 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_150

AideeBasementIdleTalk_173:
# 1004 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_92
# 1006 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_KOFFING
# 1007 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1008 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1009 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1010 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1011 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1012 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1013 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1014 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1015 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1016 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1017 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1018 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1019 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1020 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1021 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1023 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_93
# 1025 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1026 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_159

AideeBasementIdleTalk_177:
# 979 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GEOSLUG
	goto AideeBasementIdleTalk_176

AideeBasementIdleTalk_180:
# 1166 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1167 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_75
# 1168 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_179

AideeBasementIdleTalk_183:
# 1109 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1110 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1111 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_97
	checkitem ITEM_OVAL_CHARM
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_198
# 1146 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1147 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1150 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_182

AideeBasementIdleTalk_185:
# 1094 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1095 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1096 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1099 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_156

AideeBasementIdleTalk_187:
# 1059 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_95
# 1061 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SLUGMA
# 1062 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1063 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1064 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1065 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1066 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1067 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1068 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1069 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1070 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1071 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1072 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1073 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1074 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1075 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1076 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1078 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_96
# 1080 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_CHARCOAL, 1
# 1081 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_168

AideeBasementIdleTalk_191:
# 981 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_190

AideeBasementIdleTalk_194:
# 1175 "data/maps/LittlerootLabBasement/scripts.pory"
fourthsafemonlistreturn:
# 1176 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MUDDER
# 1177 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_208
AideeBasementIdleTalk_207:
# 1179 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_223
AideeBasementIdleTalk_222:
# 1182 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_LOADTAD
# 1183 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_237
AideeBasementIdleTalk_236:
# 1185 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_251
AideeBasementIdleTalk_250:
# 1188 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1189 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_265
AideeBasementIdleTalk_264:
# 1191 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_276
	goto AideeBasementIdleTalk_193

AideeBasementIdleTalk_196:
# 1156 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1157 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1158 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1161 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_165

AideeBasementIdleTalk_198:
# 1115 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_98
# 1118 "data/maps/LittlerootLabBasement/scripts.pory"
	random 1
# 1119 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 1120 "data/maps/LittlerootLabBasement/scripts.pory"
	switch VAR_RESULT
# 1121 "data/maps/LittlerootLabBasement/scripts.pory"
	case 0, AideeBasementIdleTalk_212
# 1122 "data/maps/LittlerootLabBasement/scripts.pory"
	case 1, AideeBasementIdleTalk_213
AideeBasementIdleTalk_210:
# 1124 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1125 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1126 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1127 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1128 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1129 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1130 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1131 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1132 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1133 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1134 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1135 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1136 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1137 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1138 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1140 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_99
# 1142 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_OVAL_CHARM, 1
# 1143 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_182

AideeBasementIdleTalk_202:
# 985 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NIDORAN_I
	goto AideeBasementIdleTalk_201

AideeBasementIdleTalk_205:
# 1199 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MUDDER
# 1200 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_220
AideeBasementIdleTalk_219:
# 1243 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_231
	goto AideeBasementIdleTalk_204

AideeBasementIdleTalk_208:
# 1178 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDDER
	goto AideeBasementIdleTalk_207

AideeBasementIdleTalk_212:
# 1121 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN_M
	goto AideeBasementIdleTalk_210

AideeBasementIdleTalk_213:
# 1122 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN_F
	goto AideeBasementIdleTalk_210

AideeBasementIdleTalk_214:
# 987 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_142

AideeBasementIdleTalk_217:
# 1255 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_LOADTAD
# 1256 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_229
AideeBasementIdleTalk_228:
# 1297 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_245
	goto AideeBasementIdleTalk_216

AideeBasementIdleTalk_220:
# 1203 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1204 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1205 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_100
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_233
# 1234 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1235 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1238 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_219

AideeBasementIdleTalk_223:
# 1180 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_222

AideeBasementIdleTalk_226:
# 1311 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1312 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_243
AideeBasementIdleTalk_242:
# 1354 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_259
	goto AideeBasementIdleTalk_225

AideeBasementIdleTalk_229:
# 1259 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1260 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1261 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_103
	checkitem ITEM_MIRACLE_SEED
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_247
# 1290 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1291 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1294 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_228

AideeBasementIdleTalk_231:
# 1244 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1245 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1246 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1249 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_204

AideeBasementIdleTalk_233:
# 1209 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_101
# 1211 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GRIMER
# 1212 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1213 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1214 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1215 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1216 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1217 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1218 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1219 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1220 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1221 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1222 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1223 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1224 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1225 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1226 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1228 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_102
# 1230 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1231 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_219

AideeBasementIdleTalk_237:
# 1184 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LOADTAD
	goto AideeBasementIdleTalk_236

AideeBasementIdleTalk_240:
# 1368 "data/maps/LittlerootLabBasement/scripts.pory"
fifthsafemonlistreturn:
# 1369 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 1370 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_257
AideeBasementIdleTalk_256:
# 1372 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_274
AideeBasementIdleTalk_273:
# 1375 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERDOOM
# 1376 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_290
AideeBasementIdleTalk_289:
# 1378 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_304
AideeBasementIdleTalk_303:
# 1381 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TUMBELA
# 1382 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_318
AideeBasementIdleTalk_317:
# 1384 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_329
	goto AideeBasementIdleTalk_239

AideeBasementIdleTalk_243:
# 1315 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1316 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1317 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_106
	checkitem ITEM_MIRACLE_SEED
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_261
# 1346 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1347 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1350 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_242

AideeBasementIdleTalk_245:
# 1298 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1299 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1300 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1303 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_216

AideeBasementIdleTalk_247:
# 1265 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_104
# 1267 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_LOTAD
# 1268 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1269 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1270 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1271 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1272 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1273 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1274 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1275 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1276 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1277 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1278 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1279 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1280 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1281 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1282 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1284 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_105
# 1286 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MIRACLE_SEED, 1
# 1287 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_228

AideeBasementIdleTalk_251:
# 1186 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_250

AideeBasementIdleTalk_254:
# 1392 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 1393 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_271
AideeBasementIdleTalk_270:
# 1436 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_284
	goto AideeBasementIdleTalk_253

AideeBasementIdleTalk_257:
# 1371 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MANCHINE
	goto AideeBasementIdleTalk_256

AideeBasementIdleTalk_259:
# 1355 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1356 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1357 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1360 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_225

AideeBasementIdleTalk_261:
# 1321 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_104
# 1323 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HOPPIP
# 1324 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1325 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1326 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1327 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1328 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1329 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1330 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1331 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1332 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1333 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1334 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1335 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1336 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1337 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1338 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1340 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_107
# 1342 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MIRACLE_SEED, 1
# 1343 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_242

AideeBasementIdleTalk_265:
# 1190 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_HELIPIP
	goto AideeBasementIdleTalk_264

AideeBasementIdleTalk_268:
# 1448 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERDOOM
# 1449 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_282
AideeBasementIdleTalk_281:
# 1490 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_298
	goto AideeBasementIdleTalk_267

AideeBasementIdleTalk_271:
# 1396 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1397 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1398 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_108
	checkitem ITEM_METAL_COAT
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_286
# 1427 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1428 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1431 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_270

AideeBasementIdleTalk_274:
# 1373 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_273

AideeBasementIdleTalk_276:
# 1192 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_193

AideeBasementIdleTalk_279:
# 1504 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1505 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_296
AideeBasementIdleTalk_295:
# 1547 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_312
	goto AideeBasementIdleTalk_278

AideeBasementIdleTalk_282:
# 1452 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1453 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1454 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_110
	checkitem ITEM_METAL_COAT
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_300
# 1483 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1484 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1487 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_281

AideeBasementIdleTalk_284:
# 1437 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1438 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1439 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1442 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_253

AideeBasementIdleTalk_286:
# 1402 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_101
# 1404 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MACHOP
# 1405 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1406 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1407 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1408 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1409 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1410 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1411 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1412 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1413 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1414 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1415 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1416 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1417 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1418 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1419 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1421 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_109
# 1423 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_METAL_COAT, 1
# 1424 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_270

AideeBasementIdleTalk_290:
# 1377 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_VERDOOM
	goto AideeBasementIdleTalk_289

AideeBasementIdleTalk_293:
# 1561 "data/maps/LittlerootLabBasement/scripts.pory"
sixthsafemonlistreturn:
# 1562 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ARYSTAL
# 1563 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_310
AideeBasementIdleTalk_309:
# 1565 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_327
AideeBasementIdleTalk_326:
# 1568 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARTZ
# 1569 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_343
AideeBasementIdleTalk_342:
# 1571 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_357
AideeBasementIdleTalk_356:
# 1574 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERIWOODO
# 1575 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_371
AideeBasementIdleTalk_370:
# 1577 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_382
	goto AideeBasementIdleTalk_292

AideeBasementIdleTalk_296:
# 1508 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1509 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1510 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_113
	checkitem ITEM_MYSTIC_WATER
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_314
# 1539 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1540 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1543 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_295

AideeBasementIdleTalk_298:
# 1491 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1492 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1493 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1496 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_267

AideeBasementIdleTalk_300:
# 1458 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_111
# 1460 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BELDUM
# 1461 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1462 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1463 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1464 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1465 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1466 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1467 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1468 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1469 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1470 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1471 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1472 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1473 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1474 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1475 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1477 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_112
# 1479 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_METAL_COAT, 1
# 1480 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_281

AideeBasementIdleTalk_304:
# 1379 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_303

AideeBasementIdleTalk_307:
# 1585 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ARYSTAL
# 1586 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_324
AideeBasementIdleTalk_323:
# 1629 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_337
	goto AideeBasementIdleTalk_306

AideeBasementIdleTalk_310:
# 1564 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARYSTAL
	goto AideeBasementIdleTalk_309

AideeBasementIdleTalk_312:
# 1548 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1549 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1550 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1553 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_278

AideeBasementIdleTalk_314:
# 1514 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_114
# 1516 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 1517 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1518 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1519 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1520 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1521 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1522 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1523 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1524 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1525 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1526 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1527 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1528 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1529 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1530 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1531 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1533 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_115
# 1535 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MYSTIC_WATER, 1
# 1536 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_295

AideeBasementIdleTalk_318:
# 1383 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TUMBELA
	goto AideeBasementIdleTalk_317

AideeBasementIdleTalk_321:
# 1641 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARTZ
# 1642 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_335
AideeBasementIdleTalk_334:
# 1684 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_351
	goto AideeBasementIdleTalk_320

AideeBasementIdleTalk_324:
# 1589 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1590 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1591 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_116
	checkitem ITEM_HARD_STONE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_339
# 1620 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1621 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1624 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_323

AideeBasementIdleTalk_327:
# 1566 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_326

AideeBasementIdleTalk_329:
# 1385 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_239

AideeBasementIdleTalk_332:
# 1698 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1699 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_349
AideeBasementIdleTalk_348:
# 1741 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_365
	goto AideeBasementIdleTalk_331

AideeBasementIdleTalk_335:
# 1645 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1646 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1647 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_118
	checkitem ITEM_TWISTED_SPOON
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_353
# 1677 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1678 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1681 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_334

AideeBasementIdleTalk_337:
# 1630 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1631 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1632 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1635 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_306

AideeBasementIdleTalk_339:
# 1595 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_101
# 1597 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ARON
# 1598 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1599 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1600 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1601 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1602 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1603 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1604 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1605 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1606 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1607 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1608 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1609 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1610 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1611 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1612 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1614 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_117
# 1616 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_HARD_STONE, 1
# 1617 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_323

AideeBasementIdleTalk_343:
# 1570 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_WARTZ
	goto AideeBasementIdleTalk_342

AideeBasementIdleTalk_346:
# 1755 "data/maps/LittlerootLabBasement/scripts.pory"
seventhsafemonlistreturn:
# 1756 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GUMMIN
# 1757 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_363
AideeBasementIdleTalk_362:
# 1759 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_380
AideeBasementIdleTalk_379:
# 1762 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROLLOON
# 1763 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_396
AideeBasementIdleTalk_395:
# 1765 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_410
AideeBasementIdleTalk_409:
# 1768 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TRASHEAL
# 1769 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_424
AideeBasementIdleTalk_423:
# 1771 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_435
	goto AideeBasementIdleTalk_345

AideeBasementIdleTalk_349:
# 1702 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1703 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1704 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_121
	checkitem ITEM_HARD_STONE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_367
# 1733 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1734 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1737 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_348

AideeBasementIdleTalk_351:
# 1685 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1686 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1687 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1690 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_320

AideeBasementIdleTalk_353:
# 1652 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_119
# 1654 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_RALTS
# 1655 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1656 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1657 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1658 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1659 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1660 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1661 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1662 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1663 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1664 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1665 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1666 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1667 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1668 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1669 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1671 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_120
# 1673 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_TWISTED_SPOON, 1
# 1674 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_334

AideeBasementIdleTalk_357:
# 1572 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_356

AideeBasementIdleTalk_360:
# 1779 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GUMMIN
# 1780 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_377
AideeBasementIdleTalk_376:
# 1823 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_390
	goto AideeBasementIdleTalk_359

AideeBasementIdleTalk_363:
# 1758 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GUMMIN
	goto AideeBasementIdleTalk_362

AideeBasementIdleTalk_365:
# 1742 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1743 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1744 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1747 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_331

AideeBasementIdleTalk_367:
# 1708 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_122
# 1710 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SUDOWOODO
# 1711 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1712 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1713 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1714 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1715 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1716 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1717 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1718 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1719 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1720 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1721 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1722 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1723 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1724 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1725 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1727 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_123
# 1729 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_HARD_STONE, 1
# 1730 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_348

AideeBasementIdleTalk_371:
# 1576 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_VERIWOODO
	goto AideeBasementIdleTalk_370

AideeBasementIdleTalk_374:
# 1835 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROLLOON
# 1836 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_388
AideeBasementIdleTalk_387:
# 1877 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_404
	goto AideeBasementIdleTalk_373

AideeBasementIdleTalk_377:
# 1783 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1784 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1785 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_124
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_392
# 1814 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1815 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1818 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_376

AideeBasementIdleTalk_380:
# 1760 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_379

AideeBasementIdleTalk_382:
# 1578 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_292

AideeBasementIdleTalk_385:
# 1891 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TRASHEAL
# 1892 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_402
AideeBasementIdleTalk_401:
# 1934 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_418
	goto AideeBasementIdleTalk_384

AideeBasementIdleTalk_388:
# 1839 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1840 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1841 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_127
	checkitem ITEM_AIR_BALLOON
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_406
# 1870 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1871 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1874 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_387

AideeBasementIdleTalk_390:
# 1824 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1825 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1826 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1829 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_359

AideeBasementIdleTalk_392:
# 1789 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_125
# 1791 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GULPIN
# 1792 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1793 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1794 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1795 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1796 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1797 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1798 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1799 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1800 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1801 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1802 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1803 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1804 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1805 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1806 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1808 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_126
# 1810 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1811 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_376

AideeBasementIdleTalk_396:
# 1764 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ROLLOON
	goto AideeBasementIdleTalk_395

AideeBasementIdleTalk_399:
# 1950 "data/maps/LittlerootLabBasement/scripts.pory"
eighthsafemonlistreturn:
# 1951 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 1952 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_416
AideeBasementIdleTalk_415:
# 1954 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_433
AideeBasementIdleTalk_432:
# 1957 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DELIBIN
# 1958 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_446
AideeBasementIdleTalk_445:
# 1960 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_460
AideeBasementIdleTalk_459:
# 1963 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DOUNO
# 1964 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_474
AideeBasementIdleTalk_473:
# 1966 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_485
	goto AideeBasementIdleTalk_398

AideeBasementIdleTalk_402:
# 1895 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1896 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1897 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_130
	checkitem ITEM_CHOICE_BAND
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_420
# 1926 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1927 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1930 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_401

AideeBasementIdleTalk_404:
# 1878 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1879 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1880 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1883 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_373

AideeBasementIdleTalk_406:
# 1845 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_128
# 1847 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DRIFLOON
# 1848 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1849 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1850 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1851 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1852 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1853 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1854 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1855 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1856 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1857 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1858 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1859 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1860 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1861 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1862 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1864 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_129
# 1866 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_AIR_BALLOON, 1
# 1867 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_387

AideeBasementIdleTalk_410:
# 1766 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_409

AideeBasementIdleTalk_413:
# 1974 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 1975 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_430
AideeBasementIdleTalk_429:
# 2014 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_443
	goto AideeBasementIdleTalk_412

AideeBasementIdleTalk_416:
# 1953 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KAMOKEN
	goto AideeBasementIdleTalk_415

AideeBasementIdleTalk_418:
# 1935 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1936 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1937 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1940 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_384

AideeBasementIdleTalk_420:
# 1901 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_131
# 1903 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TRUBBISH
# 1904 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1905 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1906 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1907 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1908 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1909 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1910 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1911 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1912 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1913 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1914 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1915 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1916 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1917 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1918 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1920 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_132
# 1922 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_CHOICE_BAND, 1
# 1923 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_401

AideeBasementIdleTalk_424:
# 1770 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TRASHEAL
	goto AideeBasementIdleTalk_423

AideeBasementIdleTalk_427:
# 2026 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DELIBIN
# 2027 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_441
AideeBasementIdleTalk_440:
# 2068 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_454
	goto AideeBasementIdleTalk_426

AideeBasementIdleTalk_430:
# 1978 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1979 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1980 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_133
# 1982 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1983 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1984 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_134
# 1986 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1987 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1988 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_135
# 1990 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 1991 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1992 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1993 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1994 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1995 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1996 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1997 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1998 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1999 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2000 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2001 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2002 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2003 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2004 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2005 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2007 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_136
# 2009 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_429

AideeBasementIdleTalk_433:
# 1955 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_432

AideeBasementIdleTalk_435:
# 1772 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_345

AideeBasementIdleTalk_438:
# 2082 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DOUNO
# 2083 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_452
AideeBasementIdleTalk_451:
# 2125 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_468
	goto AideeBasementIdleTalk_437

AideeBasementIdleTalk_441:
# 2030 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2031 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2032 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_137
	checkitem ITEM_NEVER_MELT_ICE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_456
# 2061 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2062 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2065 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_440

AideeBasementIdleTalk_443:
# 2015 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2016 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2017 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2020 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_412

AideeBasementIdleTalk_446:
# 1959 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DELIBIN
	goto AideeBasementIdleTalk_445

AideeBasementIdleTalk_449:
# 2139 "data/maps/LittlerootLabBasement/scripts.pory"
ninthsafemonlistreturn:
# 2140 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KANGASKID
# 2141 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_466
AideeBasementIdleTalk_465:
# 2143 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_483
AideeBasementIdleTalk_482:
# 2146 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GACHAPOD
# 2147 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_499
AideeBasementIdleTalk_498:
# 2149 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_513
AideeBasementIdleTalk_512:
# 2152 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TAMARAKKU
# 2153 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_527
AideeBasementIdleTalk_526:
# 2155 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_538
	goto AideeBasementIdleTalk_448

AideeBasementIdleTalk_452:
# 2086 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2087 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2088 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_140
	checkitem ITEM_RARE_CANDY
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_470
# 2117 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2118 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2121 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_451

AideeBasementIdleTalk_454:
# 2069 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2070 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2071 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2074 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_426

AideeBasementIdleTalk_456:
# 2036 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_138
# 2038 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DELIBIRD
# 2039 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2040 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2041 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2042 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2043 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2044 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2045 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2046 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2047 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2048 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2049 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2050 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2051 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2052 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2053 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2055 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_139
# 2057 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_NEVER_MELT_ICE, 1
# 2058 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_440

AideeBasementIdleTalk_460:
# 1961 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_459

AideeBasementIdleTalk_463:
# 2163 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KANGASKHAN
# 2164 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_480
AideeBasementIdleTalk_479:
# 2207 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_493
	goto AideeBasementIdleTalk_462

AideeBasementIdleTalk_466:
# 2142 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KANGASKID
	goto AideeBasementIdleTalk_465

AideeBasementIdleTalk_468:
# 2126 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2127 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2128 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2131 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_437

AideeBasementIdleTalk_470:
# 2092 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_141
# 2094 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DODUO
# 2095 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2096 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2097 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2098 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2099 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2100 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2101 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2102 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2103 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2104 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2105 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2106 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2107 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2108 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2109 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2111 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_142
# 2113 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_RARE_CANDY, 1
# 2114 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_451

AideeBasementIdleTalk_474:
# 1965 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DOUNO
	goto AideeBasementIdleTalk_473

AideeBasementIdleTalk_477:
# 2219 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GACHAPOD
# 2220 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_491
AideeBasementIdleTalk_490:
# 2261 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_507
	goto AideeBasementIdleTalk_476

AideeBasementIdleTalk_480:
# 2167 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2168 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2169 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_143
	checkitem ITEM_RARE_CANDY
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_495
# 2198 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2199 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2202 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_479

AideeBasementIdleTalk_483:
# 2144 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_482

AideeBasementIdleTalk_485:
# 1967 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_398

AideeBasementIdleTalk_488:
# 2275 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TAMARAKKU
# 2276 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_505
AideeBasementIdleTalk_504:
# 2318 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_521
	goto AideeBasementIdleTalk_487

AideeBasementIdleTalk_491:
# 2223 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2224 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2225 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_146
	checkitem ITEM_RAZOR_FANG
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_509
# 2254 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2255 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2258 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_490

AideeBasementIdleTalk_493:
# 2208 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2209 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2210 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2213 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_462

AideeBasementIdleTalk_495:
# 2173 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_144
# 2175 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_KANGASKHAN
# 2176 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2177 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2178 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2179 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2180 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2181 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2182 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2183 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2184 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2185 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2186 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2187 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2188 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2189 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2190 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2192 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_145
# 2194 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_RARE_CANDY, 1
# 2195 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_479

AideeBasementIdleTalk_499:
# 2148 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GACHAPOD
	goto AideeBasementIdleTalk_498

AideeBasementIdleTalk_502:
# 2332 "data/maps/LittlerootLabBasement/scripts.pory"
tenthsafemonlistreturn:
# 2333 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROTOM_MONITOR
# 2334 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_519
AideeBasementIdleTalk_518:
# 2336 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_536
AideeBasementIdleTalk_535:
# 2339 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MIMIYURUI
# 2340 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_551
AideeBasementIdleTalk_550:
# 2342 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_562
AideeBasementIdleTalk_561:
# 2345 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARABBIT
# 2346 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_570
AideeBasementIdleTalk_569:
# 2348 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_575
	goto AideeBasementIdleTalk_501

AideeBasementIdleTalk_505:
# 2279 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2280 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2281 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_149
	checkitem ITEM_RARE_CANDY
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_523
# 2310 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2311 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2314 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_504

AideeBasementIdleTalk_507:
# 2262 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2263 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2264 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2267 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_476

AideeBasementIdleTalk_509:
# 2229 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_147
# 2231 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DITTO
# 2232 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2233 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2234 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2235 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2236 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2237 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2238 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2239 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2240 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2241 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2242 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2243 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2244 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2245 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2246 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2248 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_148
# 2250 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_RAZOR_FANG, 1
# 2251 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_490

AideeBasementIdleTalk_513:
# 2150 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_512

AideeBasementIdleTalk_516:
# 2356 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROTOM_MONITOR
# 2357 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_533
AideeBasementIdleTalk_532:
# 2400 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_545
	goto AideeBasementIdleTalk_515

AideeBasementIdleTalk_519:
# 2335 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM_MONITOR
	goto AideeBasementIdleTalk_518

AideeBasementIdleTalk_521:
# 2319 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2320 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2321 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2324 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_487

AideeBasementIdleTalk_523:
# 2285 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_150
# 2287 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TOGEPI
# 2288 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2289 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2290 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2291 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2292 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2293 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2294 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2295 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2296 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2297 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2298 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2299 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2300 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2301 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2302 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2304 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_151
# 2306 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_RARE_CANDY, 1
# 2307 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_504

AideeBasementIdleTalk_527:
# 2154 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TAMARAKKU
	goto AideeBasementIdleTalk_526

AideeBasementIdleTalk_530:
# 2412 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MIMIYURUI
# 2413 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_543
AideeBasementIdleTalk_542:
# 2455 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_556
	goto AideeBasementIdleTalk_529

AideeBasementIdleTalk_533:
# 2360 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2361 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2362 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_152
	checkitem ITEM_METAL_COAT
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_547
# 2391 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2392 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2395 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_532

AideeBasementIdleTalk_536:
# 2337 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_535

AideeBasementIdleTalk_538:
# 2156 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_448

AideeBasementIdleTalk_540:
# 2469 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARABBIT
# 2470 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_554
AideeBasementIdleTalk_553:
# 2494 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_564
	goto AideeBasementIdleTalk_90

AideeBasementIdleTalk_543:
# 2416 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2417 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2418 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_155
	checkdecor DECOR_PURACHU_DOLL
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_558
# 2448 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2449 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2452 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_542

AideeBasementIdleTalk_545:
# 2401 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2402 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2403 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2406 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_515

AideeBasementIdleTalk_547:
# 2366 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_153
# 2368 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ROTOM
# 2369 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2370 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2371 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2372 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2373 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2374 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2375 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2376 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2377 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2378 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2379 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2380 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2381 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2382 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2383 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2385 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_154
# 2387 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_METAL_COAT, 1
# 2388 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_532

AideeBasementIdleTalk_551:
# 2341 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MIMIYURUI
	goto AideeBasementIdleTalk_550

AideeBasementIdleTalk_554:
# 2472 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_158
# 2475 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_159, AideeBasementIdleTalk_Text_160
# 2477 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_567
AideeBasementIdleTalk_566:
# 2488 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_573
AideeBasementIdleTalk_572:
# 2491 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_553

AideeBasementIdleTalk_556:
# 2456 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2457 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2458 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2461 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_529

AideeBasementIdleTalk_558:
# 2423 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_156
# 2425 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MIMIKYU
# 2426 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2427 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2428 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2429 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2430 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2431 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2432 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2433 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2434 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2435 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2436 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2437 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2438 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2439 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2440 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2442 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_157
# 2444 "data/maps/LittlerootLabBasement/scripts.pory"
	removedecoration DECOR_PURACHU_DOLL
# 2445 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_542

AideeBasementIdleTalk_562:
# 2343 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_561

AideeBasementIdleTalk_564:
# 2495 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2496 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2497 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2500 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_90

AideeBasementIdleTalk_567:
# 2477 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_161
	goto AideeBasementIdleTalk_566

AideeBasementIdleTalk_570:
# 2347 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_WARABBIT
	goto AideeBasementIdleTalk_569

AideeBasementIdleTalk_573:
# 2489 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_162
	goto AideeBasementIdleTalk_572

AideeBasementIdleTalk_575:
# 2349 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_501


	.align 2
# 2517 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials0:
# 2518 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2519 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
	.2byte ITEM_NONE

	.align 2
# 2523 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials1:
# 2524 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2525 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2526 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2527 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2528 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_NONE

	.align 2
# 2531 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials2:
# 2532 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2533 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2534 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2535 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2536 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 2537 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHARCOAL
# 2538 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 2539 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_NONE

	.align 2
# 2542 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials3:
# 2543 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2544 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2545 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2546 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2547 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 2548 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHARCOAL
# 2549 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 2550 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 2551 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_METAL_COAT
# 2552 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 2553 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HARD_STONE
	.2byte ITEM_NONE

	.align 2
# 2556 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials4:
# 2557 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2558 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2559 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2560 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2561 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 2562 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHARCOAL
# 2563 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 2564 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 2565 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_METAL_COAT
# 2566 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 2567 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HARD_STONE
# 2568 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 2569 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 2570 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_NONE

	.align 2
# 2573 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials5:
# 2574 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2575 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2576 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2577 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2578 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 2579 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHARCOAL
# 2580 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 2581 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 2582 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_METAL_COAT
# 2583 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 2584 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HARD_STONE
# 2585 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 2586 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 2587 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 2588 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 2589 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 2590 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

CancelTradeSafemonSelection::
# 2596 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 2597 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2598 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox CancelTradeSafemonSelection_Text_0
# 2600 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


SelectedIncorrectTradeSafemon::
# 2604 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 2605 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2606 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2607 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox SelectedIncorrectTradeSafemon_Text_0
# 2609 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 2610 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


CheerorbBasementIdleTalk::
# 2614 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 2615 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 4, AideeBasementIdleTalk_Movement_0
# 2616 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 2617 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 2618 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 4, AideCasettePlayer_Movement_3
# 2619 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement 4
# 2620 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


# 146 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_0:
# 146 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_right
# 146 "data/maps/LittlerootLabBasement/scripts.pory"
	emote_exclamation_mark
	step_end

# 151 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_1:
# 151 "data/maps/LittlerootLabBasement/scripts.pory"
	jump_in_place_down
	step_end

# 164 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_2:
# 164 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_right
	step_end

# 166 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_3:
# 166 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_down
	step_end

# 191 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow1_Movement_0:
# 191 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_down
	step_end

# 210 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow2_Movement_0:
# 210 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 210 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_right
	step_end

# 214 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow2_Movement_1:
# 214 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_up
	step_end

# 224 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow3_Movement_0:
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_down
	step_end

# 240 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_0:
# 240 "data/maps/LittlerootLabBasement/scripts.pory"
	face_player
	step_end

# 274 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_1:
# 274 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_left
	step_end

LabBasementTrashBin_Text_0:
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Amid some discarded motherboards and\n"
	.string "electronics, you find something...$"

LabBasementTrashBin_Text_1:
# 14 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The trash can is empty.$"

LabBasementTunnelSign_Text_0:
# 20 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "To Secret Tunnel$"

LabBasementBalsamRoomSign_Text_0:
# 25 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Balsam's Office$"

AideLaptop_Text_0:
# 31 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "An online forum is open, where a heated\n"
	.string "debate on Safemon biology is taking\l"
	.string "place.\p"
	.string "Can't understand any of it...$"

AideMedicineDispenserScript_Text_0:
# 37 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's a Medicine Dispenser.$"

LabBasementUnsafener_Text_0:
# 56 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's the Unsafener. For some reason, its\n"
	.string "control panel is a Game Boy Advance...$"

LabBasementBlueprints_Text_0:
# 65 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's a very complicated blueprint.$"

LabBasementBlueprints_Text_1:
# 68 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A complicated blueprint for what seems\n"
	.string "like a portable version of the\l"
	.string "Unsafener.$"

LabBasementBlueprints_Text_2:
# 70 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "There's also some notes scribbled on\n"
	.string "the paper...\p"
	.string "EVACUATION PROTOCOL\n"
	.string "1) Code White: Devon in Lab = Car\l"
	.string "Ladder.\p"
	.string "2) Code Brown: Lab surrounded = Tunnel\n"
	.string "exit.\p"
	.string "3) {COLOR RED}Code Red:{COLOR DARK_GRAY} All exits blocked =\n"
	.string "Destroy evidence.$"

LabBasementFaceWallCabinet_Text_0:
# 80 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The cabinet is facing the wall. There's\n"
	.string "no way to open it.$"

LabBasementCavity_Text_0:
# 89 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "There's a cavity under the machine, with\n"
	.string "hundreds of wires going in all\l"
	.string "directions.$"

LabBasementCavity_Text_1:
# 92 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "There's a cavity under the Unsafener,\n"
	.string "with hundreds of wires going in all\l"
	.string "directions.$"

LabBasementCoolingTerminal_Text_0:
# 101 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It seems like a terminal for the\n"
	.string "machine's cooling system.$"

LabBasementCoolingTerminal_Text_1:
# 104 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It seems like a terminal for the\n"
	.string "Unsafener's cooling system.$"

AideCasettePlayer_Text_0:
# 140 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's a radio with a casette inside.$"

AideCasettePlayer_Text_1:
# 142 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Play$"

AideCasettePlayer_Text_2:
# 142 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't play$"

AideCasettePlayer_Text_3:
# 150 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{PLAYER} - I didn't take you for a\n"
	.string "music fan! I LOVE that so-$"

AideCasettePlayer_Text_4:
# 156 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Jim, are you playing that stupid song\n"
	.string "AGAIN!?$"

AideCasettePlayer_Text_5:
# 160 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ahaha - I'm sorry Professor! It's just\n"
	.string "for a little while!$"

AideCasettePlayer_Text_6:
# 165 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Haah... some people don't have taste for\n"
	.string "music, am I right?$"

AideeBasementUnfollow1_Text_0:
# 190 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ah, here we are!$"

AideeBasementUnfollow1_Text_1:
# 196 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come, {PLAYER}! I'll show you\n"
	.string "something really cool!$"

AideeBasementIdleTalk_Text_0:
# 243 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Behold, the culmination of Professor\n"
	.string "Balsam's and my research...$"

AideeBasementIdleTalk_Text_1:
# 248 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The {COLOR BLUE}UNSAFENER{COLOR DARK_GRAY}! {COLOR LIGHT_GRAY}{SHADOW WHITE}Name in the works...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

AideeBasementIdleTalk_Text_2:
# 254 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Now, I could spend several hours\n"
	.string "elucidating the intricacies of this\l"
	.string "invention...$"

AideeBasementIdleTalk_Text_3:
# 260 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But I think it would be lost on you, so\n"
	.string "I'll just show you instead.$"

AideeBasementIdleTalk_Text_4:
# 265 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "First, we take the appropriate\n"
	.string "{COLOR BLUE}Unsafening Material{COLOR DARK_GRAY} - in this case, the\l"
	.string "{COLOR RED}Voltorb Shard{COLOR DARK_GRAY} you brought...$"

AideeBasementIdleTalk_Text_5:
# 271 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Second, we take the appropriate\n"
	.string "Safemon - in this case, this Cheerorb...$"

AideeBasementIdleTalk_Text_6:
# 276 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Chee-cheeeer!$"

AideeBasementIdleTalk_Text_7:
# 283 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Third, we get them both in the same\n"
	.string "Pokéball, and place it over the tray...$"

AideeBasementIdleTalk_Text_8:
# 290 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And last but not least... we press this\n"
	.string "button!$"

AideeBasementIdleTalk_Text_9:
# 303 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Aah... it WORKED! IT FINALLY WORKED!$"

AideeBasementIdleTalk_Text_10:
# 312 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Look, {PLAYER}!$"

AideeBasementIdleTalk_Text_11:
# 322 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vol-voooolt!$"

AideeBasementIdleTalk_Text_12:
# 327 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "We have reverted a Safemon back into a\n"
	.string "regular Pokémon! Isn't it fascinating!?\p"
	.string "Take that, Devon Co. - what you can do,\n"
	.string "we can undo! Bwahaha!$"

AideeBasementIdleTalk_Text_13:
# 332 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So... I don't know how fond are you of\n"
	.string "Voltorbs, after serving in the army...$"

AideeBasementIdleTalk_Text_14:
# 337 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But if you want to adopt this one, I'd\n"
	.string "be happy to obligue. It's thanks to you\l"
	.string "it's a Voltorb again, after all.$"

AideeBasementIdleTalk_Text_15:
# 340 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "What do you say?$"

AideeBasementIdleTalk_Text_16:
# 341 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Adopt$"

AideeBasementIdleTalk_Text_17:
# 341 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't adopt$"

AideeBasementIdleTalk_Text_18:
# 351 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Volt-Voooolt!$"

AideeBasementIdleTalk_Text_19:
# 355 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey, I think it's happy!$"

AideeBasementIdleTalk_Text_20:
# 366 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Give Voltorb a nickname...?$"

AideeBasementIdleTalk_Text_21:
# 381 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vooolt...$"

AideeBasementIdleTalk_Text_22:
# 386 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Haha... hey, I get it. Voltorbs are\n"
	.string "dangerous!$"

AideeBasementIdleTalk_Text_23:
# 391 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't worry - I'll take good care of it.$"

AideeBasementIdleTalk_Text_24:
# 401 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "At any rate {PLAYER} - if you bring me\n"
	.string "Safemon, and the appropriate\l"
	.string "{COLOR BLUE}Unsafening Materials{COLOR DARK_GRAY}, I can turn them\l"
	.string "back into Pokémon for you.$"

AideeBasementIdleTalk_Text_25:
# 408 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, I almost forgot - here's your ACTUAL\n"
	.string "reward! Should come in handy, if you\l"
	.string "decide to help us!$"

AideeBasementIdleTalk_Text_26:
# 414 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Obtained the DEVONDEX!$"

AideeBasementIdleTalk_Text_27:
# 419 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "This is the Devondex. It will store\n"
	.string "information about Pokémon and Safemon\l"
	.string "native to Hoenn.\p"
	.string "Mind you, it will not register any data\n"
	.string "on the unsafened Pokémon you get\l"
	.string "here... since they're not supposed to be\l"
	.string "found in the wild anymore.$"

AideeBasementIdleTalk_Text_28:
# 430 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "However, if you bring me enough Safemon\n"
	.string "to unsafen, perhaps I can study them\l"
	.string "and hack... I mean, upgrade the\l"
	.string "Devondex with their data later on!$"

AideeBasementIdleTalk_Text_29:
# 435 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, one last thing - here's my Devon Nav\n"
	.string "number!$"

AideeBasementIdleTalk_Text_30:
# 439 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Balsam's Aide's number is registered in\n"
	.string "the Devon Nav!$"

AideeBasementIdleTalk_Text_31:
# 451 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Feel free to call if you want to discuss\n"
	.string "your Devon Dex progress. I'll even throw\l"
	.string "a catching tip or two while we're at it!$"

AideeBasementIdleTalk_Text_32:
# 455 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But that's enough talk from me. Get out\n"
	.string "there, and start catching!$"

AideeBasementIdleTalk_Text_33:
# 464 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey there, {PLAYER}! What brings you\n"
	.string "here?$"

AideeBasementIdleTalk_Text_34:
# 466 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Unsafen Safemon$"

AideeBasementIdleTalk_Text_35:
# 467 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Unsafening Materials$"

AideeBasementIdleTalk_Text_36:
# 467 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Small talk$"

AideeBasementIdleTalk_Text_37:
# 467 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Secondary effects$"

AideeBasementIdleTalk_Text_38:
# 467 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Nothing$"

AideeBasementIdleTalk_Text_39:
# 475 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, I forgot to mention - as you\n"
	.string "unsafemon Safemon, I'll continue my\l"
	.string "research on finding Unsafening\l"
	.string "Materials.\p"
	.string "Then I can sell said materials to you\n"
	.string "for a fee, just to cover the costs.\p"
	.string "That means, the more Safemon you\n"
	.string "Unsafen, the less hunting for\l"
	.string "{COLOR BLUE}Unsafening Materials{COLOR DARK_GRAY} you'll need to do!\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Haha, that was a tongue-twister...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

AideeBasementIdleTalk_Text_40:
# 484 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So, with that in mind...$"

AideeBasementIdleTalk_Text_41:
# 492 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Need some Unsafening Materials?$"

AideeBasementIdleTalk_Text_42:
# 517 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come back for more!$"

AideeBasementIdleTalk_Text_43:
# 527 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So, {PLAYER}... what's your stance on\n"
	.string "Devon Corp. and Safemon?$"

AideeBasementIdleTalk_Text_44:
# 529 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I like them$"

AideeBasementIdleTalk_Text_45:
# 529 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I don't like them$"

AideeBasementIdleTalk_Text_46:
# 530 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I'm indifferent$"

AideeBasementIdleTalk_Text_47:
# 535 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Really? Well, you don't need to force\n"
	.string "yourself to help us with the\l"
	.string "Unsafenings then!\p"
	.string "Don't feel like you owe us for helping\n"
	.string "you out. It's our own way of thanking\l"
	.string "Professor Birch, who helped us set up\l"
	.string "here.\p"
	.string "He worries a lot about you. Even Balsam\n"
	.string "seems to like you, even if she doesn't\l"
	.string "show it!\p"
	.string "Me? Well, I'll like you better if you keep\n"
	.string "bringing Safemon - ahaha!$"

AideeBasementIdleTalk_Text_48:
# 546 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I guess that makes sense, considering\n"
	.string "you're helping us with the Unsafenings!\p"
	.string "It's also a common sentiment, here in\n"
	.string "the so-called 'Rebel Zone'.\p"
	.string "But if you even venture further north,\n"
	.string "closer to Neo Rustboro, now that's a\l"
	.string "different picture!$"

AideeBasementIdleTalk_Text_49:
# 556 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Really!? You're just like me then! At\n"
	.string "last, someone after my own heart.\p"
	.string "Everyone feels so strongly about them.\n"
	.string "Me, I just like the science behind it all.\p"
	.string "I think all Pokémon are interesting and\n"
	.string "fun to study, regardless of the form\l"
	.string "they take.\p"
	.string "They're just like people, don't you\n"
	.string "think?$"

AideeBasementIdleTalk_Text_50:
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Anything else?$"

AideeBasementIdleTalk_Text_51:
# 568 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A-ah, I suppose you've noticed some\n"
	.string "already...? You're observant!\p"
	.string "You see, right now Unsafening is a very\n"
	.string "novel procedure...\p"
	.string "Of course, it changes the appearance,\n"
	.string "typing and ability of a specimen back\l"
	.string "to what they used to be - that works as\l"
	.string "intended!\p"
	.string "However, it may also alter their level,\n"
	.string "moves, individual and effort values...\l"
	.string "even their gender!\p"
	.string "I know having your companions change\n"
	.string "so much at once may be distressing...$"

AideeBasementIdleTalk_Text_52:
# 575 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "To help alleviate that, I've set up a\n"
	.string "Medicine Dispenser over there.$"

AideeBasementIdleTalk_Text_53:
# 578 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "For token prices, you may get pills with\n"
	.string "which to help get your Pokémon back to\l"
	.string "how it used to be - or to change them\l"
	.string "even more!\p"
	.string "And don't worry - there's no risk of\n"
	.string "overdose with any of the pills! {COLOR LIGHT_GRAY}{SHADOW WHITE}I\l"
	.string "think...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

AideeBasementIdleTalk_Text_54:
# 598 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which Safemon would you like to\n"
	.string "unsafen?$"

AideeBasementIdleTalk_Text_55:
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb$"

AideeBasementIdleTalk_Text_56:
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Bulbasynth$"

AideeBasementIdleTalk_Text_57:
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Smothquil$"

AideeBasementIdleTalk_Text_58:
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Purachu$"

AideeBasementIdleTalk_Text_59:
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A different Safemon$"

AideeBasementIdleTalk_Text_60:
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "None$"

AideeBasementIdleTalk_Text_61:
# 605 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Voltorb Shard{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_62:
# 609 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Cheerorb!$"

AideeBasementIdleTalk_Text_63:
# 629 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Voltorb!$"

AideeBasementIdleTalk_Text_64:
# 636 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Of which you don't have any!\p"
	.string "Luckily for you, I have some in supply\n"
	.string "you can buy!$"

AideeBasementIdleTalk_Text_65:
# 647 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Bulbasynth, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Green Leaf{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_66:
# 651 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Bulbasynth!$"

AideeBasementIdleTalk_Text_67:
# 670 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Bulbasaur!$"

AideeBasementIdleTalk_Text_68:
# 677 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Of which you don't have any!\p"
	.string "Well, check my stock of Unsafening\n"
	.string "Materials - I might just have it!$"

AideeBasementIdleTalk_Text_69:
# 688 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Smothquil, huh? Well, to unsafen this\n"
	.string "one we'd need a {COLOR RED}Leaky Ligther{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_70:
# 692 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Smothquil!$"

AideeBasementIdleTalk_Text_71:
# 711 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Cyndaquil!$"

AideeBasementIdleTalk_Text_72:
# 729 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Purachu, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}LR20 Battery{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_73:
# 733 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Purachu!$"

AideeBasementIdleTalk_Text_74:
# 752 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Pikachu!$"

AideeBasementIdleTalk_Text_75:
# 767 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh please - don't play with my feelings\n"
	.string "like that!$"

AideeBasementIdleTalk_Text_76:
# 794 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Maybe one of these?$"

AideeBasementIdleTalk_Text_77:
# 795 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_1}$"

AideeBasementIdleTalk_Text_78:
# 795 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_2}$"

AideeBasementIdleTalk_Text_79:
# 795 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_3}$"

AideeBasementIdleTalk_Text_80:
# 804 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ninkaburi, huh? Well, to unsafen this\n"
	.string "one we need some {COLOR RED}Pokéfeed{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_81:
# 808 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Ninkaburi!$"

AideeBasementIdleTalk_Text_82:
# 827 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Nincada!$"

AideeBasementIdleTalk_Text_83:
# 843 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{PLAYER}, you haven't registered the\n"
	.string "data for this Safemon on your Devon\l"
	.string "Dex!\p"
	.string "I need that data to figure out how to\n"
	.string "Unsafen it - sorry!$"

AideeBasementIdleTalk_Text_84:
# 857 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Shiitako, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_85:
# 861 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Shiitako!$"

AideeBasementIdleTalk_Text_86:
# 880 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Shroomish!$"

AideeBasementIdleTalk_Text_87:
# 912 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Poochain, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Choice Knife{COLOR DARK_GRAY}, to cut all those\l"
	.string "chains and shackles...$"

AideeBasementIdleTalk_Text_88:
# 917 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Poochain!$"

AideeBasementIdleTalk_Text_89:
# 936 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Poochyena!$"

AideeBasementIdleTalk_Text_90:
# 990 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "What about one of these?$"

AideeBasementIdleTalk_Text_91:
# 1000 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Fooming, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_92:
# 1004 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Fooming!$"

AideeBasementIdleTalk_Text_93:
# 1023 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Koffing!$"

AideeBasementIdleTalk_Text_94:
# 1055 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Geoslug, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Fuel{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_95:
# 1059 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Geoslug!$"

AideeBasementIdleTalk_Text_96:
# 1078 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Slugma!$"

AideeBasementIdleTalk_Text_97:
# 1111 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Nidoran Intersex, huh? Well, to unsafen\n"
	.string "this one we need some {COLOR RED}Pheromone Gas{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_98:
# 1115 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Nidoran!$"

AideeBasementIdleTalk_Text_99:
# 1140 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Nidoran!$"

AideeBasementIdleTalk_Text_100:
# 1205 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Mudder, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_101:
# 1209 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Mudder!$"

AideeBasementIdleTalk_Text_102:
# 1228 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Grimer!$"

AideeBasementIdleTalk_Text_103:
# 1261 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Loadtad, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Green Leaf{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_104:
# 1265 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Loadtad!$"

AideeBasementIdleTalk_Text_105:
# 1284 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Lotad!$"

AideeBasementIdleTalk_Text_106:
# 1317 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Helipip, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Green Leaf{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_107:
# 1340 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Hoppip!$"

AideeBasementIdleTalk_Text_108:
# 1398 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Manchine, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Good Wrench{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_109:
# 1421 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Machop!$"

AideeBasementIdleTalk_Text_110:
# 1454 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Verdoom, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Good Wrench{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_111:
# 1458 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Verdoom!$"

AideeBasementIdleTalk_Text_112:
# 1477 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Beldum!$"

AideeBasementIdleTalk_Text_113:
# 1510 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Tumbela, huh? Well, to unsafen this one\n"
	.string "we need an {COLOR RED}Old Canteen{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_114:
# 1514 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Tumbela!$"

AideeBasementIdleTalk_Text_115:
# 1533 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Tangela!$"

AideeBasementIdleTalk_Text_116:
# 1591 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Arystal, huh? Well, to unsafen this one\n"
	.string "we need an {COLOR RED}Asphalt Chunk{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_117:
# 1614 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Aron!$"

AideeBasementIdleTalk_Text_118:
# 1647 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Wartz, huh? Well, this one is technically\n"
	.string "not a Safemon...\p"
	.string "That said, if you had a certain special\n"
	.string "{COLOR RED}special ring...{COLOR DARK_GRAY}, we may be able to revert\l"
	.string "it back to a Ralts.$"

AideeBasementIdleTalk_Text_119:
# 1652 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And it seems you have one such ring -\n"
	.string "excellent! Now, let's see that Wartz!$"

AideeBasementIdleTalk_Text_120:
# 1671 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Ralts!$"

AideeBasementIdleTalk_Text_121:
# 1704 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Veriwoodo, huh? Well, to unsafen this\n"
	.string "one we need an {COLOR RED}Asphalt Chunk{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_122:
# 1708 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Veriwoodo!$"

AideeBasementIdleTalk_Text_123:
# 1727 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Sudowoodo!$"

AideeBasementIdleTalk_Text_124:
# 1785 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Gummin, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_125:
# 1789 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Gummin!$"

AideeBasementIdleTalk_Text_126:
# 1808 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Gulpin!$"

AideeBasementIdleTalk_Text_127:
# 1841 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Rolloon, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Drifting Parachute{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_128:
# 1845 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Rolloon!$"

AideeBasementIdleTalk_Text_129:
# 1864 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Drifloon!$"

AideeBasementIdleTalk_Text_130:
# 1897 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Trashealed, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Choice Knife{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_131:
# 1901 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Trashealed!$"

AideeBasementIdleTalk_Text_132:
# 1920 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Trubbish!$"

AideeBasementIdleTalk_Text_133:
# 1980 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Kamoken, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Leek{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_134:
# 1984 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And you know what? It's something so\n"
	.string "mundane, I have one right here!$"

AideeBasementIdleTalk_Text_135:
# 1988 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So this time, the Unsafening Material is\n"
	.string "on me. Now, let's see that Kamoken!$"

AideeBasementIdleTalk_Text_136:
# 2007 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Farfetch'd!!$"

AideeBasementIdleTalk_Text_137:
# 2032 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Delibin, huh? Well, to unsafen this one\n"
	.string "we need an {COLOR RED}Ice Bag{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_138:
# 2036 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Delibin!$"

AideeBasementIdleTalk_Text_139:
# 2055 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Delibird!$"

AideeBasementIdleTalk_Text_140:
# 2088 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Douno, huh? Well, to unsafen this one we\n"
	.string "need a {COLOR RED}Growth Injection{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_141:
# 2092 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Douno!$"

AideeBasementIdleTalk_Text_142:
# 2111 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Doduo!$"

AideeBasementIdleTalk_Text_143:
# 2169 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Kangaskid, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Growth Injection{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_144:
# 2173 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Kangaskid!$"

AideeBasementIdleTalk_Text_145:
# 2192 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Kangaskhan!$"

AideeBasementIdleTalk_Text_146:
# 2225 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Gachapod, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Pry Bar{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_147:
# 2229 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Gachapod!$"

AideeBasementIdleTalk_Text_148:
# 2248 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Ditto!$"

AideeBasementIdleTalk_Text_149:
# 2281 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Tamarakku, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Growth Injection{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_150:
# 2285 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Tamarakku!$"

AideeBasementIdleTalk_Text_151:
# 2304 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Togepi!$"

AideeBasementIdleTalk_Text_152:
# 2362 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Rotom Monitor, huh? Well, to unsafen\n"
	.string "this one we need a {COLOR RED}Good Wrench{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_153:
# 2366 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Rotom Monitor!$"

AideeBasementIdleTalk_Text_154:
# 2385 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Rotom!$"

AideeBasementIdleTalk_Text_155:
# 2418 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Mimiyurui, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_156:
# 2423 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Mimiyurui!$"

AideeBasementIdleTalk_Text_157:
# 2442 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Mimikyu!$"

AideeBasementIdleTalk_Text_158:
# 2472 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Wait a moment... {PLAYER}, this is not\n"
	.string "a Safemon!\p"
	.string "This is a Pokémon with a very\n"
	.string "interesting story... would you like to\l"
	.string "hear it?$"

AideeBasementIdleTalk_Text_159:
# 2475 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Sure$"

AideeBasementIdleTalk_Text_160:
# 2475 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Not now$"

AideeBasementIdleTalk_Text_161:
# 2477 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Great! Well, this is a Warabbit - it used\n"
	.string "to be a popular 'Safemon', and Devon's\l"
	.string "mascot during the first months after\l"
	.string "the war.\p"
	.string "However, it was soon found out it wasn't\n"
	.string "a Safemon at all!\p"
	.string "A Devon geneticist had simply found a\n"
	.string "new species, bred it, and tried to pass\l"
	.string "it as a Safemon in order to get a raise.\p"
	.string "The façade was discovered when\n"
	.string "Warabbit began to evolve, which\l"
	.string "Safemon aren't supposed to do.\p"
	.string "So what did Devon do? It tried to\n"
	.string "remove every Warabbit from the wild, in\l"
	.string "an effort to make people forget about\l"
	.string "the whole fiasco.\p"
	.string "Fortunately, it seems at least one\n"
	.string "escape the company's grasp - perhaps\l"
	.string "more!\p"
	.string "Please, take good care of it!$"

AideeBasementIdleTalk_Text_162:
# 2489 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ah, shame... well, just now you've got a\n"
	.string "very rare Pokémon, and that you should\l"
	.string "take care of it!$"

CancelTradeSafemonSelection_Text_0:
# 2598 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, changed your mind? I guess some\n"
	.string "Safemon have their charm after all.$"

SelectedIncorrectTradeSafemon_Text_0:
# 2607 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, that's not a {STR_VAR_1},\n"
	.string "{PLAYER}! You should do some\l"
	.string "reviewing with that Devondex I gave\l"
	.string "you, haha!$"
