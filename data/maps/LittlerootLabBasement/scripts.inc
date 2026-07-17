# 1 "data/maps/LittlerootLabBasement/scripts.pory"

# 2 "data/maps/LittlerootLabBasement/scripts.pory"
LittlerootLabBasement_MapScripts::
# 3 "data/maps/LittlerootLabBasement/scripts.pory"
	.byte 0

LabBasementTrashBin::
# 8 "data/maps/LittlerootLabBasement/scripts.pory"
	finditem ITEM_RED_SHARD
	return


LabBasementTunnelSign::
# 12 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 13 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementTunnelSign_Text_0
# 14 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


LabBasementBalsamRoomSign::
# 17 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 18 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBalsamRoomSign_Text_0
# 19 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


AideLaptop::
# 23 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 24 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideLaptop_Text_0
# 26 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


AideMedicineDispenserScript::
# 29 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 30 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideMedicineDispenserScript_Text_0
# 31 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMedicineDispenser
# 32 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


LabBasementUnsafener::
# 37 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 38 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementUnsafener_2
# 47 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementUnsafener_Text_1
LabBasementUnsafener_1:
# 48 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementUnsafener_2:
# 40 "data/maps/LittlerootLabBasement/scripts.pory"
	GetGameStat GAME_STAT_RODE_CABLE_CAR
# 41 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 42 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferstring STR_VAR_1, VAR_0x8000
# 43 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementUnsafener_Text_0
	goto LabBasementUnsafener_1


LabBasementBlueprints::
# 52 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 53 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementBlueprints_2
# 59 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBlueprints_Text_1
LabBasementBlueprints_1:
# 60 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementBlueprints_2:
# 56 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBlueprints_Text_0
	goto LabBasementBlueprints_1


LabBasementFaceWallCabinet::
# 64 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 65 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementFaceWallCabinet_Text_0
# 66 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


LabBasementCavity::
# 70 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 71 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementCavity_2
# 77 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCavity_Text_1
LabBasementCavity_1:
# 78 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementCavity_2:
# 74 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCavity_Text_0
	goto LabBasementCavity_1


LabBasementCoolingTerminal::
# 82 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 83 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementCoolingTerminal_2
# 89 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCoolingTerminal_Text_1
LabBasementCoolingTerminal_1:
# 90 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementCoolingTerminal_2:
# 86 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCoolingTerminal_Text_0
	goto LabBasementCoolingTerminal_1


	.align 2
# 93 "data/maps/LittlerootLabBasement/scripts.pory"
AideMedicineDispenser:
# 94 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 95 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 96 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_PROTEIN
# 97 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_IRON
# 98 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CALCIUM
# 99 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ZINC
# 100 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CARBOS
# 101 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_PP_UP
# 102 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 103 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 104 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 105 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CALM_MINT
# 106 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 107 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 108 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 109 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 110 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 111 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_LAX_MINT
# 112 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 113 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MILD_MINT
# 114 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 115 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 116 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 117 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 118 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_RASH_MINT
# 119 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 120 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE

AideCasettePlayer::
# 124 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 125 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_0
# 127 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideCasettePlayer_Text_1, AideCasettePlayer_Text_2
# 128 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideCasettePlayer_2
AideCasettePlayer_1:
# 157 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideCasettePlayer_5
AideCasettePlayer_4:
# 158 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

AideCasettePlayer_2:
# 129 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_RENBOUPARTY, TRUE
# 130 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_set Aideearrivestobasement, AideCasettePlayer_8
AideCasettePlayer_7:
# 154 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideCasettePlayer_1

AideCasettePlayer_5:
# 157 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideCasettePlayer_4

AideCasettePlayer_8:
# 131 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_0
# 132 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_PIN
# 133 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 134 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 135 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_3
# 136 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_1
# 138 "data/maps/LittlerootLabBasement/scripts.pory"
	call BalsamYellShake
# 139 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 140 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 141 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_4
# 143 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 144 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 145 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_5
# 147 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 148 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 149 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 150 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_6
# 151 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_3
# 152 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
	goto AideCasettePlayer_7


BalsamYellShake::
# 163 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8004, 2
# 164 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8005, 6
# 165 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8006, 4
# 166 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8007, 4
# 167 "data/maps/LittlerootLabBasement/scripts.pory"
	special ShakeCamera
	return


AideeBasementUnfollow1::
# 172 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 173 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 174 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 175 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 176 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow1_Movement_0
# 177 "data/maps/LittlerootLabBasement/scripts.pory"
Aidebymachine:
# 178 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 179 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 180 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 181 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_1
# 182 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 183 "data/maps/LittlerootLabBasement/scripts.pory"
	destroyfollowernpc
# 184 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject LOCALID_AIDEEBASEMENT
# 185 "data/maps/LittlerootLabBasement/scripts.pory"
	clearflag Aideearrivestobasement
# 186 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 7
# 187 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


AideeBasementUnfollow2::
# 191 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 192 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 193 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 194 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 195 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AideeBasementUnfollow2_Movement_0
# 196 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 197 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow1_Movement_0
# 198 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 199 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AideeBasementUnfollow2_Movement_1
# 200 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementUnfollow3::
# 205 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 206 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 207 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 208 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 209 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 210 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementUnfollow4::
# 214 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 215 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 216 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 217 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 218 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 219 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementIdleTalk::
# 223 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, AideeBasementIdleTalk_2
AideeBasementIdleTalk_1:
# 444 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_set Unsafeningtutodone, AideeBasementIdleTalk_4
	return

AideeBasementIdleTalk_2:
# 225 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 226 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 227 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 228 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_0
# 230 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 231 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 232 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 233 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_1
# 236 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 237 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 238 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 239 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_2
# 242 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 243 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 244 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 245 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_3
# 247 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 248 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 249 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 250 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_4
# 253 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 255 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 256 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_5
# 257 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 258 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 4, AideeBasementIdleTalk_Movement_1
# 260 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 261 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 262 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 4
# 263 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 264 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 265 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementUnfollow2_Movement_1
# 266 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 267 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 268 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_7
# 270 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 2
# 271 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 2, 10, 4
# 272 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_BAG_POCKET
# 273 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 274 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 275 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_8
# 276 "data/maps/LittlerootLabBasement/scripts.pory"
	closemessage
# 277 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 278 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_POKENAV_ON
# 279 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 280 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeoutbgm 2
# 281 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_ELEVATOR
# 282 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_TO_WHITE
# 283 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 284 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_SAVE
# 285 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 286 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 287 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 288 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_9
# 289 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 290 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 291 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeinbgm 2
# 292 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 294 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 295 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 2
# 296 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 297 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_10
# 298 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 299 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 301 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 5
# 302 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 5, 11, 6
# 303 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 304 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 305 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_NORMAL
# 306 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideeBasementIdleTalk_Movement_1
# 307 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_11
# 309 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_3
# 310 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 311 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 312 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_12
# 314 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 315 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 316 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 317 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_13
# 319 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 320 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 321 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 322 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_14
# 324 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 325 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_15
# 326 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideCasettePlayer_Text_1, AideCasettePlayer_Text_2
# 327 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmessage
# 329 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_7
AideeBasementIdleTalk_6:
# 359 "data/maps/LittlerootLabBasement/scripts.pory"
dontwantvoltorb:
# 360 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_13
AideeBasementIdleTalk_12:
# 381 "data/maps/LittlerootLabBasement/scripts.pory"
nicknamedvoltorb:
# 382 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 383 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 384 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 385 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 386 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_22
# 390 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 391 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 392 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 393 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_23
# 396 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 397 "data/maps/LittlerootLabBasement/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 398 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 399 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_24
# 400 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 402 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 403 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 404 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_25
# 407 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_BULBASYNTH
# 408 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_SMOTHQUIL
# 409 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_PIKACHU_SAFE
# 410 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_MIMIYURUI
# 412 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 413 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 414 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 415 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_26
# 418 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 419 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 420 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_27
# 422 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 423 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_REGISTER_MATCH_CALL, TRUE
# 424 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_28
# 428 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 429 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 430 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 431 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 432 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 433 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 434 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_29
# 436 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 437 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 438 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_30
# 439 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 440 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag Unsafeningtutodone
# 441 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishunsafentutorial
	goto AideeBasementIdleTalk_1

AideeBasementIdleTalk_4:
# 445 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 446 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 447 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_31
# 448 "data/maps/LittlerootLabBasement/scripts.pory"
aidechoices:
# 449 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_32, AideeBasementIdleTalk_Text_33, AideeBasementIdleTalk_Text_34, AideeBasementIdleTalk_Text_35, AideeBasementIdleTalk_Text_36
# 454 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_10
AideeBasementIdleTalk_9:
# 493 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_19
AideeBasementIdleTalk_18:
# 538 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_29
AideeBasementIdleTalk_28:
# 554 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_38
AideeBasementIdleTalk_37:
# 561 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_46
	return

AideeBasementIdleTalk_7:
# 330 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 331 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 332 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideeBasementIdleTalk_Movement_2
# 333 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 334 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 335 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_HIGH_PITCH
# 336 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_16
# 338 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 339 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 340 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_17
# 341 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 342 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 343 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
# 344 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 347 "data/maps/LittlerootLabBasement/scripts.pory"
	givemon SPECIES_VOLTORB, 3
# 348 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AideeBasementIdleTalk_16
AideeBasementIdleTalk_15:
# 356 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AideeBasementIdleTalk_24
	goto AideeBasementIdleTalk_6

AideeBasementIdleTalk_10:
# 455 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 456 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 457 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafenmaterialtutodone, AideeBasementIdleTalk_21
# 472 "data/maps/LittlerootLabBasement/scripts.pory"
afterunsafenmaterialtuto:
# 473 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 474 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 475 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_39
# 477 "data/maps/LittlerootLabBasement/scripts.pory"
	GetGameStat GAME_STAT_RODE_CABLE_CAR
# 478 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 479 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt AideeBasementIdleTalk_35
AideeBasementIdleTalk_34:
# 482 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt AideeBasementIdleTalk_44
AideeBasementIdleTalk_43:
# 486 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 487 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 488 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_40
# 489 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_9

AideeBasementIdleTalk_13:
# 361 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 362 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 363 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 364 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 365 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_WEAK
# 366 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_19
# 368 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 369 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 370 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 371 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_20
# 372 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 373 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 374 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 375 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 376 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_21
# 377 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 378 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
	goto AideeBasementIdleTalk_12

AideeBasementIdleTalk_16:
# 349 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 350 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 351 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_18, MSGBOX_YESNO
# 352 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AideeBasementIdleTalk_26
	goto AideeBasementIdleTalk_15

AideeBasementIdleTalk_19:
# 496 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 497 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 498 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_41
# 500 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_42, AideeBasementIdleTalk_Text_43, AideeBasementIdleTalk_Text_44
# 503 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_32
AideeBasementIdleTalk_31:
# 514 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_41
AideeBasementIdleTalk_40:
# 524 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_49
AideeBasementIdleTalk_48:
# 534 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_48
# 535 "data/maps/LittlerootLabBasement/scripts.pory"
	goto aidechoices
	goto AideeBasementIdleTalk_18

AideeBasementIdleTalk_21:
# 458 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_37
# 465 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 466 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 467 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_38
# 468 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag Unsafenmaterialtutodone
# 469 "data/maps/LittlerootLabBasement/scripts.pory"
	goto afterunsafenmaterialtuto
	goto AideeBasementIdleTalk_9

AideeBasementIdleTalk_24:
# 357 "data/maps/LittlerootLabBasement/scripts.pory"
	goto dontwantvoltorb
	goto AideeBasementIdleTalk_6

AideeBasementIdleTalk_26:
# 353 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 354 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 355 "data/maps/LittlerootLabBasement/scripts.pory"
	goto nicknamedvoltorb
	goto AideeBasementIdleTalk_15

AideeBasementIdleTalk_29:
# 539 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_49
# 549 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_48
# 550 "data/maps/LittlerootLabBasement/scripts.pory"
	goto aidechoices
	goto AideeBasementIdleTalk_28

AideeBasementIdleTalk_32:
# 504 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 505 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 506 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_45
	goto AideeBasementIdleTalk_31

AideeBasementIdleTalk_35:
# 480 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials0
	goto AideeBasementIdleTalk_34

AideeBasementIdleTalk_38:
# 555 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_37

AideeBasementIdleTalk_41:
# 515 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 516 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 517 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_46
	goto AideeBasementIdleTalk_40

AideeBasementIdleTalk_44:
# 483 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials1
	goto AideeBasementIdleTalk_43

AideeBasementIdleTalk_46:
# 562 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 564 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_50
# 565 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_51, AideeBasementIdleTalk_Text_52, AideeBasementIdleTalk_Text_53, AideeBasementIdleTalk_Text_54, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 568 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_52
AideeBasementIdleTalk_51:
# 610 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_55
AideeBasementIdleTalk_54:
# 651 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_61
AideeBasementIdleTalk_60:
# 692 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_67
AideeBasementIdleTalk_66:
# 731 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq AideeBasementIdleTalk_73
AideeBasementIdleTalk_72:
# 739 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_79
AideeBasementIdleTalk_78:
# 2459 "data/maps/LittlerootLabBasement/scripts.pory"
finishunsafentutorial:
# 2460 "data/maps/LittlerootLabBasement/scripts.pory"
finishsafemontradescript:
# 2461 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 2462 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

AideeBasementIdleTalk_49:
# 525 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 526 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 527 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_47
	goto AideeBasementIdleTalk_48

AideeBasementIdleTalk_52:
# 569 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 570 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 571 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_57
	checkitem ITEM_COMET_SHARD
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_57
# 601 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 602 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_60
	goto AideeBasementIdleTalk_51

AideeBasementIdleTalk_55:
# 611 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 612 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 613 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_61
	checkitem ITEM_MAGNET
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_63
# 642 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 643 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
	goto AideeBasementIdleTalk_54

AideeBasementIdleTalk_57:
# 575 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_58
# 577 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_VOLTORB
# 580 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 581 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 582 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 583 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 584 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 585 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 586 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 587 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 588 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 589 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 590 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 591 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 592 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 593 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 594 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 595 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_59
# 597 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_COMET_SHARD, 1
	goto AideeBasementIdleTalk_51

AideeBasementIdleTalk_61:
# 652 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 653 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 654 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_65
	checkitem ITEM_MAGNET
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_69
# 683 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 684 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
	goto AideeBasementIdleTalk_60

AideeBasementIdleTalk_63:
# 617 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_62
# 619 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BULBASAUR
# 620 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 621 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 622 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 623 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 624 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 625 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 626 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 627 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 628 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 629 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 630 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 631 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 632 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 633 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 634 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 636 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_63
# 638 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MAGNET, 1
# 639 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_54

AideeBasementIdleTalk_67:
# 693 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 694 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 695 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
	checkitem ITEM_MAGNET
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_75
# 724 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 725 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
	goto AideeBasementIdleTalk_66

AideeBasementIdleTalk_69:
# 658 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_66
# 660 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_CYNDAQUIL
# 661 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 662 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 663 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 664 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 665 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 666 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 667 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 668 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 669 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 670 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 671 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 672 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 673 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 674 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 675 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 677 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_67
# 679 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MAGNET, 1
# 680 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_60

AideeBasementIdleTalk_73:
# 732 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 733 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_71
# 734 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_72

AideeBasementIdleTalk_75:
# 699 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_69
# 701 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PIKACHU
# 702 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 703 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 704 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 705 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 706 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 707 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 708 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 709 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 710 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 711 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 712 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 713 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 714 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 715 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 716 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 718 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_70
# 720 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MAGNET, 1
# 721 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_66

AideeBasementIdleTalk_79:
# 740 "data/maps/LittlerootLabBasement/scripts.pory"
secondsafemonlistreturn:
# 741 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NINKABURI
# 742 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_82
AideeBasementIdleTalk_81:
# 744 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_85
AideeBasementIdleTalk_84:
# 747 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_SHIITAKO
# 748 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_88
AideeBasementIdleTalk_87:
# 750 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_91
AideeBasementIdleTalk_90:
# 753 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 754 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_94
AideeBasementIdleTalk_93:
# 756 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_97
AideeBasementIdleTalk_96:
# 760 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_72
# 761 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 764 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_100
AideeBasementIdleTalk_99:
# 816 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_103
AideeBasementIdleTalk_102:
# 872 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_109
AideeBasementIdleTalk_108:
# 926 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_120
AideeBasementIdleTalk_119:
# 934 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_131
AideeBasementIdleTalk_130:
# 955 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 956 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 958 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_139
AideeBasementIdleTalk_138:
# 1013 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_145
AideeBasementIdleTalk_144:
# 1069 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_154
AideeBasementIdleTalk_153:
# 1130 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_168
AideeBasementIdleTalk_167:
# 1139 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_182
AideeBasementIdleTalk_181:
# 1160 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1161 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1163 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_193
AideeBasementIdleTalk_192:
# 1219 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_205
AideeBasementIdleTalk_204:
# 1275 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_214
AideeBasementIdleTalk_213:
# 1332 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_228
AideeBasementIdleTalk_227:
# 1353 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1354 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1356 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_242
AideeBasementIdleTalk_241:
# 1412 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_256
AideeBasementIdleTalk_255:
# 1468 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_267
AideeBasementIdleTalk_266:
# 1525 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_281
AideeBasementIdleTalk_280:
# 1546 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1547 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1549 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_295
AideeBasementIdleTalk_294:
# 1605 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_309
AideeBasementIdleTalk_308:
# 1661 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_320
AideeBasementIdleTalk_319:
# 1718 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_334
AideeBasementIdleTalk_333:
# 1739 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1740 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1742 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_348
AideeBasementIdleTalk_347:
# 1798 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_362
AideeBasementIdleTalk_361:
# 1854 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_373
AideeBasementIdleTalk_372:
# 1913 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_387
AideeBasementIdleTalk_386:
# 1934 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1935 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1937 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_401
AideeBasementIdleTalk_400:
# 1989 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_415
AideeBasementIdleTalk_414:
# 2045 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_426
AideeBasementIdleTalk_425:
# 2102 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_437
AideeBasementIdleTalk_436:
# 2123 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 2124 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 2126 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_451
AideeBasementIdleTalk_450:
# 2182 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_465
AideeBasementIdleTalk_464:
# 2238 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_476
AideeBasementIdleTalk_475:
# 2295 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_490
AideeBasementIdleTalk_489:
# 2316 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 2317 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 2319 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_504
AideeBasementIdleTalk_503:
# 2375 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_518
AideeBasementIdleTalk_517:
# 2431 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_528
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_82:
# 743 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NINKABURI
	goto AideeBasementIdleTalk_81

AideeBasementIdleTalk_85:
# 745 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_84

AideeBasementIdleTalk_88:
# 749 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SHIITAKO
	goto AideeBasementIdleTalk_87

AideeBasementIdleTalk_91:
# 751 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_90

AideeBasementIdleTalk_94:
# 755 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_POOCHAIN
	goto AideeBasementIdleTalk_93

AideeBasementIdleTalk_97:
# 757 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_96

AideeBasementIdleTalk_100:
# 765 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NINKABURI
# 766 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_106
AideeBasementIdleTalk_105:
# 806 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_114
	goto AideeBasementIdleTalk_99

AideeBasementIdleTalk_103:
# 817 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_SHIITAKO
# 818 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_112
AideeBasementIdleTalk_111:
# 861 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_125
	goto AideeBasementIdleTalk_102

AideeBasementIdleTalk_106:
# 768 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 769 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 770 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_76
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_116
# 799 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 800 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 803 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_105

AideeBasementIdleTalk_109:
# 873 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 874 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_123
AideeBasementIdleTalk_122:
# 916 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_133
	goto AideeBasementIdleTalk_108

AideeBasementIdleTalk_112:
# 821 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 822 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 823 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_80
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_127
# 852 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 853 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 856 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_111

AideeBasementIdleTalk_114:
# 807 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 808 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 809 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 812 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_99

AideeBasementIdleTalk_116:
# 774 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_77
# 776 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NINCADA
# 777 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 778 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 779 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 780 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 781 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 782 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 783 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 784 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 785 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 786 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 787 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 788 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 789 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 790 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 791 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 793 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_78
# 795 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 796 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_105

AideeBasementIdleTalk_120:
# 927 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 928 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_71
# 929 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_119

AideeBasementIdleTalk_123:
# 876 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 877 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 878 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_135
# 907 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 908 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 911 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_122

AideeBasementIdleTalk_125:
# 862 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 863 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 864 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 867 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_102

AideeBasementIdleTalk_127:
# 827 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_81
# 829 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SHROOMISH
# 830 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 831 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 832 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 833 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 834 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 835 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 836 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 837 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 838 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 839 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 840 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 841 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 842 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 843 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 844 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 846 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_82
# 848 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 849 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_111

AideeBasementIdleTalk_131:
# 935 "data/maps/LittlerootLabBasement/scripts.pory"
thirdsafemonlistreturn:
# 936 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_FOOMING
# 937 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_142
AideeBasementIdleTalk_141:
# 939 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_151
AideeBasementIdleTalk_150:
# 942 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GEOSLUG
# 943 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_165
AideeBasementIdleTalk_164:
# 945 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_179
AideeBasementIdleTalk_178:
# 948 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NIDORAN_I
# 949 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_190
AideeBasementIdleTalk_189:
# 951 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_202
	goto AideeBasementIdleTalk_130

AideeBasementIdleTalk_133:
# 917 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 918 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 919 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 922 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_108

AideeBasementIdleTalk_135:
# 882 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_84
# 884 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_POOCHYENA
# 885 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 886 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 887 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 888 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 889 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 890 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 891 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 892 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 893 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 894 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 895 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 896 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 897 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 898 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 899 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 901 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_85
# 903 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 904 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_122

AideeBasementIdleTalk_139:
# 959 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_FOOMING
# 960 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_148
AideeBasementIdleTalk_147:
# 1003 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_159
	goto AideeBasementIdleTalk_138

AideeBasementIdleTalk_142:
# 938 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FOOMING
	goto AideeBasementIdleTalk_141

AideeBasementIdleTalk_145:
# 1014 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GEOSLUG
# 1015 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_157
AideeBasementIdleTalk_156:
# 1058 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_173
	goto AideeBasementIdleTalk_144

AideeBasementIdleTalk_148:
# 963 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 964 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 965 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_87
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_161
# 994 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 995 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 998 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_147

AideeBasementIdleTalk_151:
# 940 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_150

AideeBasementIdleTalk_154:
# 1070 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NIDORAN_I
# 1071 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_171
AideeBasementIdleTalk_170:
# 1120 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_184
	goto AideeBasementIdleTalk_153

AideeBasementIdleTalk_157:
# 1018 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1019 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1020 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_175
# 1049 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1050 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1053 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_156

AideeBasementIdleTalk_159:
# 1004 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1005 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1006 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1009 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_138

AideeBasementIdleTalk_161:
# 969 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_88
# 971 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_KOFFING
# 972 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 973 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 974 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 975 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 976 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 977 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 978 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 979 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 980 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 981 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 982 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 983 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 984 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 985 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 986 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 988 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_89
# 990 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 991 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_147

AideeBasementIdleTalk_165:
# 944 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GEOSLUG
	goto AideeBasementIdleTalk_164

AideeBasementIdleTalk_168:
# 1131 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1132 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_71
# 1133 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_167

AideeBasementIdleTalk_171:
# 1074 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1075 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1076 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_93
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_186
# 1111 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1112 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1115 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_170

AideeBasementIdleTalk_173:
# 1059 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1060 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1061 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1064 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_144

AideeBasementIdleTalk_175:
# 1024 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_91
# 1026 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SLUGMA
# 1027 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1028 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1029 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1030 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1031 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1032 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1033 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1034 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1035 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1036 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1037 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1038 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1039 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1040 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1041 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1043 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_92
# 1045 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1046 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_156

AideeBasementIdleTalk_179:
# 946 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_178

AideeBasementIdleTalk_182:
# 1140 "data/maps/LittlerootLabBasement/scripts.pory"
fourthsafemonlistreturn:
# 1141 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MUDDER
# 1142 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_196
AideeBasementIdleTalk_195:
# 1144 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_211
AideeBasementIdleTalk_210:
# 1147 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_LOADTAD
# 1148 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_225
AideeBasementIdleTalk_224:
# 1150 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_239
AideeBasementIdleTalk_238:
# 1153 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1154 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_253
AideeBasementIdleTalk_252:
# 1156 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_264
	goto AideeBasementIdleTalk_181

AideeBasementIdleTalk_184:
# 1121 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1122 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1123 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1126 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_153

AideeBasementIdleTalk_186:
# 1080 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_94
# 1083 "data/maps/LittlerootLabBasement/scripts.pory"
	random 1
# 1084 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 1085 "data/maps/LittlerootLabBasement/scripts.pory"
	switch VAR_RESULT
# 1086 "data/maps/LittlerootLabBasement/scripts.pory"
	case 0, AideeBasementIdleTalk_200
# 1087 "data/maps/LittlerootLabBasement/scripts.pory"
	case 1, AideeBasementIdleTalk_201
AideeBasementIdleTalk_198:
# 1089 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1090 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1091 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1092 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1093 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1094 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1095 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1096 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1097 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1098 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1099 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1100 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1101 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1102 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1103 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1105 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_95
# 1107 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1108 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_170

AideeBasementIdleTalk_190:
# 950 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NIDORAN_I
	goto AideeBasementIdleTalk_189

AideeBasementIdleTalk_193:
# 1164 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MUDDER
# 1165 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_208
AideeBasementIdleTalk_207:
# 1208 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_219
	goto AideeBasementIdleTalk_192

AideeBasementIdleTalk_196:
# 1143 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDDER
	goto AideeBasementIdleTalk_195

AideeBasementIdleTalk_200:
# 1086 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN_M
	goto AideeBasementIdleTalk_198

AideeBasementIdleTalk_201:
# 1087 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN_F
	goto AideeBasementIdleTalk_198

AideeBasementIdleTalk_202:
# 952 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_130

AideeBasementIdleTalk_205:
# 1220 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_LOADTAD
# 1221 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_217
AideeBasementIdleTalk_216:
# 1262 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_233
	goto AideeBasementIdleTalk_204

AideeBasementIdleTalk_208:
# 1168 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1169 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1170 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_96
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_221
# 1199 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1200 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1203 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_207

AideeBasementIdleTalk_211:
# 1145 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_210

AideeBasementIdleTalk_214:
# 1276 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1277 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_231
AideeBasementIdleTalk_230:
# 1319 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_247
	goto AideeBasementIdleTalk_213

AideeBasementIdleTalk_217:
# 1224 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1225 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1226 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_99
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_235
# 1255 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1256 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1259 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_216

AideeBasementIdleTalk_219:
# 1209 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1210 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1211 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1214 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_192

AideeBasementIdleTalk_221:
# 1174 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_97
# 1176 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GRIMER
# 1177 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1178 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1179 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1180 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1181 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1182 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1183 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1184 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1185 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1186 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1187 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1188 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1189 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1190 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1191 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1193 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_98
# 1195 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1196 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_207

AideeBasementIdleTalk_225:
# 1149 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LOADTAD
	goto AideeBasementIdleTalk_224

AideeBasementIdleTalk_228:
# 1333 "data/maps/LittlerootLabBasement/scripts.pory"
fifthsafemonlistreturn:
# 1334 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 1335 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_245
AideeBasementIdleTalk_244:
# 1337 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_262
AideeBasementIdleTalk_261:
# 1340 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERDOOM
# 1341 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_278
AideeBasementIdleTalk_277:
# 1343 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_292
AideeBasementIdleTalk_291:
# 1346 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TUMBELA
# 1347 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_306
AideeBasementIdleTalk_305:
# 1349 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_317
	goto AideeBasementIdleTalk_227

AideeBasementIdleTalk_231:
# 1280 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1281 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1282 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_102
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_249
# 1311 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1312 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1315 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_230

AideeBasementIdleTalk_233:
# 1263 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1264 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1265 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1268 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_204

AideeBasementIdleTalk_235:
# 1230 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_100
# 1232 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_LOTAD
# 1233 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1234 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1235 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1236 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1237 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1238 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1239 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1240 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1241 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1242 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1243 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1244 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1245 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1246 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1247 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1249 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_101
# 1251 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1252 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_216

AideeBasementIdleTalk_239:
# 1151 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_238

AideeBasementIdleTalk_242:
# 1357 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 1358 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_259
AideeBasementIdleTalk_258:
# 1401 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_272
	goto AideeBasementIdleTalk_241

AideeBasementIdleTalk_245:
# 1336 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MANCHINE
	goto AideeBasementIdleTalk_244

AideeBasementIdleTalk_247:
# 1320 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1321 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1322 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1325 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_213

AideeBasementIdleTalk_249:
# 1286 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_100
# 1288 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HOPPIP
# 1289 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1290 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1291 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1292 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1293 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1294 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1295 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1296 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1297 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1298 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1299 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1300 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1301 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1302 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1303 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1305 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_103
# 1307 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1308 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_230

AideeBasementIdleTalk_253:
# 1155 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_HELIPIP
	goto AideeBasementIdleTalk_252

AideeBasementIdleTalk_256:
# 1413 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERDOOM
# 1414 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_270
AideeBasementIdleTalk_269:
# 1455 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_286
	goto AideeBasementIdleTalk_255

AideeBasementIdleTalk_259:
# 1361 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1362 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1363 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_104
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_274
# 1392 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1393 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1396 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_258

AideeBasementIdleTalk_262:
# 1338 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_261

AideeBasementIdleTalk_264:
# 1157 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_181

AideeBasementIdleTalk_267:
# 1469 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1470 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_284
AideeBasementIdleTalk_283:
# 1512 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_300
	goto AideeBasementIdleTalk_266

AideeBasementIdleTalk_270:
# 1417 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1418 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1419 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_106
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_288
# 1448 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1449 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1452 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_269

AideeBasementIdleTalk_272:
# 1402 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1403 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1404 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1407 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_241

AideeBasementIdleTalk_274:
# 1367 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_97
# 1369 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MACHOP
# 1370 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1371 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1372 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1373 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1374 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1375 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1376 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1377 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1378 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1379 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1380 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1381 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1382 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1383 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1384 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1386 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_105
# 1388 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1389 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_258

AideeBasementIdleTalk_278:
# 1342 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_VERDOOM
	goto AideeBasementIdleTalk_277

AideeBasementIdleTalk_281:
# 1526 "data/maps/LittlerootLabBasement/scripts.pory"
sixthsafemonlistreturn:
# 1527 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ARYSTAL
# 1528 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_298
AideeBasementIdleTalk_297:
# 1530 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_315
AideeBasementIdleTalk_314:
# 1533 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARTZ
# 1534 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_331
AideeBasementIdleTalk_330:
# 1536 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_345
AideeBasementIdleTalk_344:
# 1539 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERIWOODO
# 1540 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_359
AideeBasementIdleTalk_358:
# 1542 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_370
	goto AideeBasementIdleTalk_280

AideeBasementIdleTalk_284:
# 1473 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1474 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1475 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_109
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_302
# 1504 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1505 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1508 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_283

AideeBasementIdleTalk_286:
# 1456 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1457 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1458 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1461 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_255

AideeBasementIdleTalk_288:
# 1423 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_107
# 1425 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BELDUM
# 1426 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1427 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1428 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1429 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1430 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1431 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1432 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1433 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1434 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1435 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1436 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1437 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1438 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1439 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1440 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1442 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_108
# 1444 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1445 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_269

AideeBasementIdleTalk_292:
# 1344 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_291

AideeBasementIdleTalk_295:
# 1550 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ARYSTAL
# 1551 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_312
AideeBasementIdleTalk_311:
# 1594 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_325
	goto AideeBasementIdleTalk_294

AideeBasementIdleTalk_298:
# 1529 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARYSTAL
	goto AideeBasementIdleTalk_297

AideeBasementIdleTalk_300:
# 1513 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1514 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1515 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1518 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_266

AideeBasementIdleTalk_302:
# 1479 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_110
# 1481 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 1482 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1483 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1484 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1485 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1486 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1487 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1488 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1489 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1490 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1491 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1492 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1493 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1494 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1495 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1496 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1498 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_111
# 1500 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1501 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_283

AideeBasementIdleTalk_306:
# 1348 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TUMBELA
	goto AideeBasementIdleTalk_305

AideeBasementIdleTalk_309:
# 1606 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARTZ
# 1607 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_323
AideeBasementIdleTalk_322:
# 1648 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_339
	goto AideeBasementIdleTalk_308

AideeBasementIdleTalk_312:
# 1554 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1555 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1556 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_112
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_327
# 1585 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1586 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1589 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_311

AideeBasementIdleTalk_315:
# 1531 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_314

AideeBasementIdleTalk_317:
# 1350 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_227

AideeBasementIdleTalk_320:
# 1662 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1663 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_337
AideeBasementIdleTalk_336:
# 1705 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_353
	goto AideeBasementIdleTalk_319

AideeBasementIdleTalk_323:
# 1610 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1611 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1612 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_114
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_341
# 1641 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1642 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1645 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_322

AideeBasementIdleTalk_325:
# 1595 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1596 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1597 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1600 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_294

AideeBasementIdleTalk_327:
# 1560 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_97
# 1562 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ARON
# 1563 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1564 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1565 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1566 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1567 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1568 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1569 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1570 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1571 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1572 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1573 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1574 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1575 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1576 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1577 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1579 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_113
# 1581 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1582 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_311

AideeBasementIdleTalk_331:
# 1535 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_WARTZ
	goto AideeBasementIdleTalk_330

AideeBasementIdleTalk_334:
# 1719 "data/maps/LittlerootLabBasement/scripts.pory"
seventhsafemonlistreturn:
# 1720 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GUMMIN
# 1721 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_351
AideeBasementIdleTalk_350:
# 1723 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_368
AideeBasementIdleTalk_367:
# 1726 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROLLOON
# 1727 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_384
AideeBasementIdleTalk_383:
# 1729 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_398
AideeBasementIdleTalk_397:
# 1732 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TRASHEAL
# 1733 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_412
AideeBasementIdleTalk_411:
# 1735 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_423
	goto AideeBasementIdleTalk_333

AideeBasementIdleTalk_337:
# 1666 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1667 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1668 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_117
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_355
# 1697 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1698 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1701 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_336

AideeBasementIdleTalk_339:
# 1649 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1650 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1651 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1654 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_308

AideeBasementIdleTalk_341:
# 1616 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_115
# 1618 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_RALTS
# 1619 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1620 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1621 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1622 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1623 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1624 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1625 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1626 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1627 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1628 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1629 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1630 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1631 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1632 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1633 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1635 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_116
# 1637 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1638 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_322

AideeBasementIdleTalk_345:
# 1537 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_344

AideeBasementIdleTalk_348:
# 1743 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GUMMIN
# 1744 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_365
AideeBasementIdleTalk_364:
# 1787 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_378
	goto AideeBasementIdleTalk_347

AideeBasementIdleTalk_351:
# 1722 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GUMMIN
	goto AideeBasementIdleTalk_350

AideeBasementIdleTalk_353:
# 1706 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1707 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1708 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1711 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_319

AideeBasementIdleTalk_355:
# 1672 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_118
# 1674 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SUDOWOODO
# 1675 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1676 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1677 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1678 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1679 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1680 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1681 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1682 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1683 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1684 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1685 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1686 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1687 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1688 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1689 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1691 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_119
# 1693 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1694 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_336

AideeBasementIdleTalk_359:
# 1541 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_VERIWOODO
	goto AideeBasementIdleTalk_358

AideeBasementIdleTalk_362:
# 1799 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROLLOON
# 1800 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_376
AideeBasementIdleTalk_375:
# 1841 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_392
	goto AideeBasementIdleTalk_361

AideeBasementIdleTalk_365:
# 1747 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1748 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1749 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_120
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_380
# 1778 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1779 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1782 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_364

AideeBasementIdleTalk_368:
# 1724 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_367

AideeBasementIdleTalk_370:
# 1543 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_280

AideeBasementIdleTalk_373:
# 1855 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TRASHEAL
# 1856 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_390
AideeBasementIdleTalk_389:
# 1898 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_406
	goto AideeBasementIdleTalk_372

AideeBasementIdleTalk_376:
# 1803 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1804 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1805 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_123
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_394
# 1834 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1835 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1838 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_375

AideeBasementIdleTalk_378:
# 1788 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1789 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1790 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1793 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_347

AideeBasementIdleTalk_380:
# 1753 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_121
# 1755 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GULPIN
# 1756 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1757 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1758 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1759 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1760 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1761 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1762 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1763 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1764 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1765 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1766 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1767 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1768 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1769 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1770 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1772 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_122
# 1774 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1775 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_364

AideeBasementIdleTalk_384:
# 1728 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ROLLOON
	goto AideeBasementIdleTalk_383

AideeBasementIdleTalk_387:
# 1914 "data/maps/LittlerootLabBasement/scripts.pory"
eighthsafemonlistreturn:
# 1915 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 1916 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_404
AideeBasementIdleTalk_403:
# 1918 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_421
AideeBasementIdleTalk_420:
# 1921 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DELIBIN
# 1922 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_434
AideeBasementIdleTalk_433:
# 1924 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_448
AideeBasementIdleTalk_447:
# 1927 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DOUNO
# 1928 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_462
AideeBasementIdleTalk_461:
# 1930 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_473
	goto AideeBasementIdleTalk_386

AideeBasementIdleTalk_390:
# 1859 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1860 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1861 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_126
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_408
# 1890 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1891 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1894 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_389

AideeBasementIdleTalk_392:
# 1842 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1843 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1844 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1847 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_361

AideeBasementIdleTalk_394:
# 1809 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_124
# 1811 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DRIFLOON
# 1812 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1813 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1814 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1815 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1816 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1817 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1818 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1819 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1820 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1821 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1822 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1823 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1824 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1825 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1826 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1828 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_125
# 1830 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1831 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_375

AideeBasementIdleTalk_398:
# 1730 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_397

AideeBasementIdleTalk_401:
# 1938 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 1939 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_418
AideeBasementIdleTalk_417:
# 1978 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_431
	goto AideeBasementIdleTalk_400

AideeBasementIdleTalk_404:
# 1917 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KAMOKEN
	goto AideeBasementIdleTalk_403

AideeBasementIdleTalk_406:
# 1899 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1900 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1901 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1904 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_372

AideeBasementIdleTalk_408:
# 1865 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_127
# 1867 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TRUBBISH
# 1868 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1869 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1870 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1871 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1872 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1873 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1874 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1875 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1876 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1877 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1878 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1879 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1880 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1881 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1882 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1884 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_128
# 1886 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1887 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_389

AideeBasementIdleTalk_412:
# 1734 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TRASHEAL
	goto AideeBasementIdleTalk_411

AideeBasementIdleTalk_415:
# 1990 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DELIBIN
# 1991 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_429
AideeBasementIdleTalk_428:
# 2032 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_442
	goto AideeBasementIdleTalk_414

AideeBasementIdleTalk_418:
# 1942 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1943 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1944 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_129
# 1946 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1947 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1948 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_130
# 1950 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 1951 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1952 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_131
# 1954 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 1955 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1956 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1957 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1958 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1959 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1960 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1961 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1962 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1963 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1964 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1965 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1966 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1967 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1968 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1969 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1971 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_132
# 1973 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_417

AideeBasementIdleTalk_421:
# 1919 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_420

AideeBasementIdleTalk_423:
# 1736 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_333

AideeBasementIdleTalk_426:
# 2046 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DOUNO
# 2047 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_440
AideeBasementIdleTalk_439:
# 2089 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_456
	goto AideeBasementIdleTalk_425

AideeBasementIdleTalk_429:
# 1994 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1995 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1996 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_133
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_444
# 2025 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2026 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2029 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_428

AideeBasementIdleTalk_431:
# 1979 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1980 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1981 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1984 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_400

AideeBasementIdleTalk_434:
# 1923 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DELIBIN
	goto AideeBasementIdleTalk_433

AideeBasementIdleTalk_437:
# 2103 "data/maps/LittlerootLabBasement/scripts.pory"
ninthsafemonlistreturn:
# 2104 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KANGASKID
# 2105 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_454
AideeBasementIdleTalk_453:
# 2107 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_471
AideeBasementIdleTalk_470:
# 2110 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GACHAPOD
# 2111 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_487
AideeBasementIdleTalk_486:
# 2113 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_501
AideeBasementIdleTalk_500:
# 2116 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TAMARAKKU
# 2117 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_515
AideeBasementIdleTalk_514:
# 2119 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_526
	goto AideeBasementIdleTalk_436

AideeBasementIdleTalk_440:
# 2050 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2051 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2052 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_136
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_458
# 2081 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2082 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2085 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_439

AideeBasementIdleTalk_442:
# 2033 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2034 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2035 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2038 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_414

AideeBasementIdleTalk_444:
# 2000 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_134
# 2002 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DELIBIRD
# 2003 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2004 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2005 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2006 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2007 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2008 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2009 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2010 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2011 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2012 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2013 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2014 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2015 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2016 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2017 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2019 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_135
# 2021 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2022 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_428

AideeBasementIdleTalk_448:
# 1925 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_447

AideeBasementIdleTalk_451:
# 2127 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KANGASKHAN
# 2128 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_468
AideeBasementIdleTalk_467:
# 2171 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_481
	goto AideeBasementIdleTalk_450

AideeBasementIdleTalk_454:
# 2106 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KANGASKID
	goto AideeBasementIdleTalk_453

AideeBasementIdleTalk_456:
# 2090 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2091 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2092 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2095 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_425

AideeBasementIdleTalk_458:
# 2056 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_137
# 2058 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DODUO
# 2059 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2060 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2061 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2062 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2063 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2064 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2065 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2066 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2067 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2068 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2069 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2070 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2071 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2072 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2073 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2075 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_138
# 2077 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2078 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_439

AideeBasementIdleTalk_462:
# 1929 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DOUNO
	goto AideeBasementIdleTalk_461

AideeBasementIdleTalk_465:
# 2183 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GACHAPOD
# 2184 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_479
AideeBasementIdleTalk_478:
# 2225 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_495
	goto AideeBasementIdleTalk_464

AideeBasementIdleTalk_468:
# 2131 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2132 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2133 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_139
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_483
# 2162 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2163 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2166 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_467

AideeBasementIdleTalk_471:
# 2108 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_470

AideeBasementIdleTalk_473:
# 1931 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_386

AideeBasementIdleTalk_476:
# 2239 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TAMARAKKU
# 2240 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_493
AideeBasementIdleTalk_492:
# 2282 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_509
	goto AideeBasementIdleTalk_475

AideeBasementIdleTalk_479:
# 2187 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2188 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2189 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_142
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_497
# 2218 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2219 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2222 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_478

AideeBasementIdleTalk_481:
# 2172 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2173 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2174 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2177 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_450

AideeBasementIdleTalk_483:
# 2137 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_140
# 2139 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_KANGASKHAN
# 2140 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2141 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2142 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2143 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2144 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2145 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2146 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2147 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2148 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2149 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2150 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2151 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2152 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2153 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2154 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2156 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_141
# 2158 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2159 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_467

AideeBasementIdleTalk_487:
# 2112 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GACHAPOD
	goto AideeBasementIdleTalk_486

AideeBasementIdleTalk_490:
# 2296 "data/maps/LittlerootLabBasement/scripts.pory"
tenthsafemonlistreturn:
# 2297 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROTOM_MONITOR
# 2298 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_507
AideeBasementIdleTalk_506:
# 2300 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_524
AideeBasementIdleTalk_523:
# 2303 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MIMIYURUI
# 2304 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_539
AideeBasementIdleTalk_538:
# 2306 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_550
AideeBasementIdleTalk_549:
# 2309 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARABBIT
# 2310 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_555
AideeBasementIdleTalk_554:
# 2312 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_557
	goto AideeBasementIdleTalk_489

AideeBasementIdleTalk_493:
# 2243 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2244 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2245 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_145
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_511
# 2274 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2275 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2278 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_492

AideeBasementIdleTalk_495:
# 2226 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2227 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2228 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2231 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_464

AideeBasementIdleTalk_497:
# 2193 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_143
# 2195 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DITTO
# 2196 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2197 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2198 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2199 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2200 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2201 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2202 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2203 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2204 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2205 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2206 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2207 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2208 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2209 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2210 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2212 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_144
# 2214 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2215 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_478

AideeBasementIdleTalk_501:
# 2114 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_500

AideeBasementIdleTalk_504:
# 2320 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROTOM_MONITOR
# 2321 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_521
AideeBasementIdleTalk_520:
# 2364 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_533
	goto AideeBasementIdleTalk_503

AideeBasementIdleTalk_507:
# 2299 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM_MONITOR
	goto AideeBasementIdleTalk_506

AideeBasementIdleTalk_509:
# 2283 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2284 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2285 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2288 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_475

AideeBasementIdleTalk_511:
# 2249 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_146
# 2251 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TOGEPI
# 2252 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2253 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2254 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2255 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2256 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2257 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2258 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2259 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2260 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2261 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2262 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2263 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2264 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2265 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2266 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2268 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_147
# 2270 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2271 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_492

AideeBasementIdleTalk_515:
# 2118 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TAMARAKKU
	goto AideeBasementIdleTalk_514

AideeBasementIdleTalk_518:
# 2376 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MIMIYURUI
# 2377 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_531
AideeBasementIdleTalk_530:
# 2418 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_544
	goto AideeBasementIdleTalk_517

AideeBasementIdleTalk_521:
# 2324 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2325 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2326 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_148
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_535
# 2355 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2356 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2359 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_520

AideeBasementIdleTalk_524:
# 2301 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_523

AideeBasementIdleTalk_526:
# 2120 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_436

AideeBasementIdleTalk_528:
# 2432 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARABBIT
# 2433 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_542
AideeBasementIdleTalk_541:
# 2442 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_552
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_531:
# 2380 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2381 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2382 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_151
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_546
# 2411 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2412 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2415 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_530

AideeBasementIdleTalk_533:
# 2365 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2366 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2367 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2370 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_503

AideeBasementIdleTalk_535:
# 2330 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_149
# 2332 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ROTOM
# 2333 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2334 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2335 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2336 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2337 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2338 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2339 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2340 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2341 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2342 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2343 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2344 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2345 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2346 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2347 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2349 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_150
# 2351 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2352 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_520

AideeBasementIdleTalk_539:
# 2305 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MIMIYURUI
	goto AideeBasementIdleTalk_538

AideeBasementIdleTalk_542:
# 2435 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_154
# 2439 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_541

AideeBasementIdleTalk_544:
# 2419 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2420 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2421 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2424 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_517

AideeBasementIdleTalk_546:
# 2386 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_152
# 2388 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MIMIKYU
# 2389 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2390 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2391 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2392 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2393 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2394 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2395 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2396 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2397 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2398 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2399 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2400 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2401 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2402 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2403 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2405 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_153
# 2407 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2408 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_530

AideeBasementIdleTalk_550:
# 2307 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_549

AideeBasementIdleTalk_552:
# 2443 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2444 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2445 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2448 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_555:
# 2311 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_WARABBIT
	goto AideeBasementIdleTalk_554

AideeBasementIdleTalk_557:
# 2313 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_489


	.align 2
# 2465 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials0:
# 2466 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
	.2byte ITEM_NONE

	.align 2
# 2470 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials1:
# 2471 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2472 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
	.2byte ITEM_NONE

TradeSafemonCode::
	return


CancelTradeSafemonSelection::
# 2485 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 2486 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2487 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox CancelTradeSafemonSelection_Text_0
# 2489 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


SelectedIncorrectTradeSafemon::
# 2493 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 2494 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2495 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2496 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox SelectedIncorrectTradeSafemon_Text_0
# 2498 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 2499 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


CheerorbBasementIdleTalk::
# 2503 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 2504 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 2505 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 2506 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


# 131 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_0:
# 131 "data/maps/LittlerootLabBasement/scripts.pory"
	face_right
# 131 "data/maps/LittlerootLabBasement/scripts.pory"
	emote_exclamation_mark
	step_end

# 136 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_1:
# 136 "data/maps/LittlerootLabBasement/scripts.pory"
	jump_down
	step_end

# 149 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_2:
# 149 "data/maps/LittlerootLabBasement/scripts.pory"
	face_right
	step_end

# 151 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_3:
# 151 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

# 176 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow1_Movement_0:
# 176 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 176 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 176 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 176 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

# 195 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow2_Movement_0:
# 195 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 195 "data/maps/LittlerootLabBasement/scripts.pory"
	face_right
	step_end

# 199 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow2_Movement_1:
# 199 "data/maps/LittlerootLabBasement/scripts.pory"
	face_up
	step_end

# 209 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow3_Movement_0:
# 209 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 209 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 209 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 209 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 209 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

# 225 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_0:
# 225 "data/maps/LittlerootLabBasement/scripts.pory"
	face_player
	step_end

# 259 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_1:
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	face_left
	step_end

# 332 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_2:
# 332 "data/maps/LittlerootLabBasement/scripts.pory"
	jump_in_place_down
	step_end

LabBasementTunnelSign_Text_0:
# 13 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "To Exclusion Tunnel$"

LabBasementBalsamRoomSign_Text_0:
# 18 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Balsam's Office$"

AideLaptop_Text_0:
# 24 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "An online forum is open, where a heated\n"
	.string "debate on Safemon biology is taking\l"
	.string "place.\p"
	.string "Can't understand any of it...$"

AideMedicineDispenserScript_Text_0:
# 30 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's a Medicine Dispenser.$"

LabBasementUnsafener_Text_0:
# 43 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's the Unsafener. A digital counter\n"
	.string "says:\l"
	.string "Unsafened Species: {STR_VAR_1}$"

LabBasementUnsafener_Text_1:
# 47 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The machine looks incredibly complex.\n"
	.string "Better not to touch it.$"

LabBasementBlueprints_Text_0:
# 56 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's a very complicated blueprint$"

LabBasementBlueprints_Text_1:
# 59 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A complicated blueprint for what seems\n"
	.string "like a portable version of the\l"
	.string "Unsafener.$"

LabBasementFaceWallCabinet_Text_0:
# 65 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The cabinet is facing the wall. There's\n"
	.string "no way to open it.$"

LabBasementCavity_Text_0:
# 74 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "There's a cavity under the machine, with\n"
	.string "hundreds of wires going in all\l"
	.string "directions.$"

LabBasementCavity_Text_1:
# 77 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "There's a cavity under the Unsafener,\n"
	.string "with hundreds of wires going in all\l"
	.string "directions.$"

LabBasementCoolingTerminal_Text_0:
# 86 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It seems like a terminal for the\n"
	.string "machine's cooling system.$"

LabBasementCoolingTerminal_Text_1:
# 89 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It seems like a terminal for the\n"
	.string "Unsafener's cooling system.$"

AideCasettePlayer_Text_0:
# 125 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's a radio with a casette inside.$"

AideCasettePlayer_Text_1:
# 127 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Adopt$"

AideCasettePlayer_Text_2:
# 127 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't adopt$"

AideCasettePlayer_Text_3:
# 135 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{PLAYER} - I didn't take you for a\n"
	.string "music fan! I LOVE that so-$"

AideCasettePlayer_Text_4:
# 141 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Jim, are you playing that stupid song\n"
	.string "AGAIN!?$"

AideCasettePlayer_Text_5:
# 145 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ahaha - I'm sorry Professor! It's just\n"
	.string "for a little while!$"

AideCasettePlayer_Text_6:
# 150 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Haah... some people don't have taste for\n"
	.string "music, am I right?$"

AideeBasementUnfollow1_Text_0:
# 175 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ah, here we are!$"

AideeBasementUnfollow1_Text_1:
# 181 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come, {PLAYER}! I'll show you\n"
	.string "something really cool!$"

AideeBasementIdleTalk_Text_0:
# 228 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Behold, the culmination of Professor\n"
	.string "Balsam's and my research...$"

AideeBasementIdleTalk_Text_1:
# 233 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The {COLOR BLUE}UNSAFENER{COLOR DARK_GRAY}! {COLOR LIGHT_GRAY}{SHADOW WHITE}Name in the works...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

AideeBasementIdleTalk_Text_2:
# 239 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Now, I could spend several hours\n"
	.string "elucidating the intricacies of this\l"
	.string "invention...$"

AideeBasementIdleTalk_Text_3:
# 245 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But I think it would be lost on you, so\n"
	.string "I'll just show you instead.$"

AideeBasementIdleTalk_Text_4:
# 250 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "First, we take the appropriate\n"
	.string "{COLOR BLUE}Unsafening Material{COLOR DARK_GRAY} - in this case, the\l"
	.string "{COLOR RED}Voltorb Shard{COLOR DARK_GRAY} you brought...$"

AideeBasementIdleTalk_Text_5:
# 256 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Second, we take the appropriate\n"
	.string "Safemon - in this case, this Cheerorb...$"

AideeBasementIdleTalk_Text_6:
# 261 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Chee-cheeeer!$"

AideeBasementIdleTalk_Text_7:
# 268 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Third, we get them both in the same\n"
	.string "Pokéball, and place it over the tray...$"

AideeBasementIdleTalk_Text_8:
# 275 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And last but not least... we press this\n"
	.string "button!$"

AideeBasementIdleTalk_Text_9:
# 288 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Aah... it WORKED! IT FINALLY WORKED!$"

AideeBasementIdleTalk_Text_10:
# 297 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Look, {PLAYER}!$"

AideeBasementIdleTalk_Text_11:
# 307 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vol-voooolt!$"

AideeBasementIdleTalk_Text_12:
# 312 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "We have reverted a Safemon back into a\n"
	.string "regular Pokémon! Isn't it fascinating!?\p"
	.string "Take that, Devon Co. - what you can do,\n"
	.string "we can undo! Bwahaha!$"

AideeBasementIdleTalk_Text_13:
# 317 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So... I don't know how fond are you of\n"
	.string "Voltorbs, after serving in the army...$"

AideeBasementIdleTalk_Text_14:
# 322 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But if you want to adopt this one, I'd\n"
	.string "be happy to obligue. It's thanks to you\l"
	.string "it's a Voltorb again, after all.$"

AideeBasementIdleTalk_Text_15:
# 325 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "What do you say?$"

AideeBasementIdleTalk_Text_16:
# 336 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Volt-Voooolt!$"

AideeBasementIdleTalk_Text_17:
# 340 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey, I think it's happy!$"

AideeBasementIdleTalk_Text_18:
# 351 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Give Voltorb a nickname...?$"

AideeBasementIdleTalk_Text_19:
# 366 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vooolt...$"

AideeBasementIdleTalk_Text_20:
# 371 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Haha... hey, I get it. Voltorbs are\n"
	.string "dangerous!$"

AideeBasementIdleTalk_Text_21:
# 376 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't worry - I'll take good care of it.$"

AideeBasementIdleTalk_Text_22:
# 386 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "At any rate {PLAYER} - if you bring me\n"
	.string "Safemon, and the appropriate\l"
	.string "{COLOR BLUE}Unsafening Materials{COLOR DARK_GRAY}, I can turn them\l"
	.string "back into Pokémon for you.$"

AideeBasementIdleTalk_Text_23:
# 393 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, I almost forgot - here's your ACTUAL\n"
	.string "reward! Should come in handy, if you\l"
	.string "decide to help us!$"

AideeBasementIdleTalk_Text_24:
# 399 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Obtained the DEVONDEX!$"

AideeBasementIdleTalk_Text_25:
# 404 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "This is the Devondex. It will store\n"
	.string "information about Pokémon and Safemon\l"
	.string "native to Hoenn.\p"
	.string "Mind you, it will not register any data\n"
	.string "on the unsafened Pokémon you get\l"
	.string "here... since they're not supposed to be\l"
	.string "found in the wild anymore.$"

AideeBasementIdleTalk_Text_26:
# 415 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "However, if you bring me enough Safemon\n"
	.string "to unsafen, perhaps I can study them\l"
	.string "and hack... I mean, upgrade the\l"
	.string "Devondex with their data later on!$"

AideeBasementIdleTalk_Text_27:
# 420 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, one last thing - here's my Devon Nav\n"
	.string "number!$"

AideeBasementIdleTalk_Text_28:
# 424 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Balsam's Aide's number is registered in\n"
	.string "the Devon Nav!$"

AideeBasementIdleTalk_Text_29:
# 434 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Feel free to call if you want to discuss\n"
	.string "your Devon Dex progress. I'll even throw\l"
	.string "a tip or two while we're at it!$"

AideeBasementIdleTalk_Text_30:
# 438 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But that's enough talk from me. Get out\n"
	.string "there, and start catching!$"

AideeBasementIdleTalk_Text_31:
# 447 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey there, {PLAYER}! What brings you\n"
	.string "here?$"

AideeBasementIdleTalk_Text_32:
# 449 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Unsafen Safemon$"

AideeBasementIdleTalk_Text_33:
# 450 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Unsafening Materials$"

AideeBasementIdleTalk_Text_34:
# 450 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Small talk$"

AideeBasementIdleTalk_Text_35:
# 450 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Secondary effects$"

AideeBasementIdleTalk_Text_36:
# 450 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Nothing$"

AideeBasementIdleTalk_Text_37:
# 458 "data/maps/LittlerootLabBasement/scripts.pory"
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

AideeBasementIdleTalk_Text_38:
# 467 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So, with that in mind...$"

AideeBasementIdleTalk_Text_39:
# 475 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Need some Unsafening Materials?$"

AideeBasementIdleTalk_Text_40:
# 488 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come back for more!$"

AideeBasementIdleTalk_Text_41:
# 498 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So, {PLAYER}... what's your stance on\n"
	.string "Devon Corp. and Safemon?$"

AideeBasementIdleTalk_Text_42:
# 500 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I like them$"

AideeBasementIdleTalk_Text_43:
# 500 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I don't like them$"

AideeBasementIdleTalk_Text_44:
# 501 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I'm different$"

AideeBasementIdleTalk_Text_45:
# 506 "data/maps/LittlerootLabBasement/scripts.pory"
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
	.string "Me? Well, I'll like you better the more\n"
	.string "Safemon you bring - ahaha!$"

AideeBasementIdleTalk_Text_46:
# 517 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I guess that makes sense, considering\n"
	.string "you're helping us with the Unsafenings!\p"
	.string "It's also a common sentiment, here in\n"
	.string "the so-called 'Rebel Zone'.\p"
	.string "But if you even venture further north,\n"
	.string "closer to Neo Rustboro, now that's a\l"
	.string "different picture!$"

AideeBasementIdleTalk_Text_47:
# 527 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Really!? You're just like me then! At\n"
	.string "last, someone after my own heart.\p"
	.string "Everyone feels so strongly about them.\n"
	.string "Me, I just like the science behind it all.\p"
	.string "I think all Pokémon are interesting and\n"
	.string "fun to study, regardless of the form\l"
	.string "they take.\p"
	.string "They're just like people, don't you\n"
	.string "think?$"

AideeBasementIdleTalk_Text_48:
# 534 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Anything else?$"

AideeBasementIdleTalk_Text_49:
# 539 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A-ah, I suppose you've noticed some\n"
	.string "already...? You're observant!\p"
	.string "You see, right now Unsafening is a very\n"
	.string "novel procedure...\p"
	.string "Of course, it changes the appearance,\n"
	.string "typing and ability of a specimen back\l"
	.string "to what they used to be - that works as\l"
	.string "intended!\p"
	.string "However, it may also alter their level,\n"
	.string "moves, effort values... even their\l"
	.string "gender!\p"
	.string "I know having your companions change\n"
	.string "so much at once may be distressing...\p"
	.string "To help alleviate that, I've set up a\n"
	.string "Medicine Dispenser over there.\p"
	.string "For token prices, you may get pills with\n"
	.string "which to help get your Pokémon back to\l"
	.string "how it used to be - or to change them\l"
	.string "even more!\p"
	.string "And don't worry - there's no risk of\n"
	.string "overdose with any of the pills! {COLOR LIGHT_GRAY}{SHADOW WHITE}I\l"
	.string "think...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

AideeBasementIdleTalk_Text_50:
# 564 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which Safemon would you like to\n"
	.string "unsafen?$"

AideeBasementIdleTalk_Text_51:
# 565 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb$"

AideeBasementIdleTalk_Text_52:
# 565 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Bulbasynth$"

AideeBasementIdleTalk_Text_53:
# 565 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Smothquil$"

AideeBasementIdleTalk_Text_54:
# 565 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Purachu$"

AideeBasementIdleTalk_Text_55:
# 565 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A different Safemon$"

AideeBasementIdleTalk_Text_56:
# 565 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "None$"

AideeBasementIdleTalk_Text_57:
# 571 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Voltorb Shard{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_58:
# 575 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Cheerorb!$"

AideeBasementIdleTalk_Text_59:
# 595 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Voltorb!$"

AideeBasementIdleTalk_Text_60:
# 602 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Of which you don't have any!\p"
	.string "Luckily for you, I have some in supply\n"
	.string "you can buy!$"

AideeBasementIdleTalk_Text_61:
# 613 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Bulbasynth, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT MATERIAL{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_62:
# 617 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Bulbasynth!$"

AideeBasementIdleTalk_Text_63:
# 636 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Bulbasaur!$"

AideeBasementIdleTalk_Text_64:
# 643 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Of which you don't have any!\p"
	.string "Well, check my stock of Unsafening\n"
	.string "Materials - I might just have it!$"

AideeBasementIdleTalk_Text_65:
# 654 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Smothquil, huh? Well, to unsafen this\n"
	.string "one we'd need some {COLOR RED}Fuel{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_66:
# 658 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Smothquil!$"

AideeBasementIdleTalk_Text_67:
# 677 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Cyndaquil!$"

AideeBasementIdleTalk_Text_68:
# 695 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Purachu, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}LR20 Battery{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_69:
# 699 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Purachu!$"

AideeBasementIdleTalk_Text_70:
# 718 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Pikachu!$"

AideeBasementIdleTalk_Text_71:
# 733 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh please - don't play with my feelings\n"
	.string "like that!$"

AideeBasementIdleTalk_Text_72:
# 760 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Maybe one of these?$"

AideeBasementIdleTalk_Text_73:
# 761 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_1}$"

AideeBasementIdleTalk_Text_74:
# 761 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_2}$"

AideeBasementIdleTalk_Text_75:
# 761 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_3}$"

AideeBasementIdleTalk_Text_76:
# 770 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ninkaburi, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_77:
# 774 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Ninkaburi!$"

AideeBasementIdleTalk_Text_78:
# 793 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Nincada!$"

AideeBasementIdleTalk_Text_79:
# 809 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{PLAYER}, you haven't registered the\n"
	.string "data for this Safemon on your Devon\l"
	.string "Dex!\p"
	.string "I need that data to figure out how to\n"
	.string "Unsafen it - sorry!$"

AideeBasementIdleTalk_Text_80:
# 823 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Shiitako, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_81:
# 827 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Shiitako!$"

AideeBasementIdleTalk_Text_82:
# 846 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Shroomish!$"

AideeBasementIdleTalk_Text_83:
# 878 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Poochain, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_84:
# 882 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Poochain!$"

AideeBasementIdleTalk_Text_85:
# 901 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Poochyena!$"

AideeBasementIdleTalk_Text_86:
# 955 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "What about one of these?$"

AideeBasementIdleTalk_Text_87:
# 965 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Fooming, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_88:
# 969 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Fooming!$"

AideeBasementIdleTalk_Text_89:
# 988 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Koffing!$"

AideeBasementIdleTalk_Text_90:
# 1020 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Geoslug, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_91:
# 1024 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Geoslug!$"

AideeBasementIdleTalk_Text_92:
# 1043 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Slugma!$"

AideeBasementIdleTalk_Text_93:
# 1076 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Nidoran Intersex, huh? Well, to unsafen\n"
	.string "this one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_94:
# 1080 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Nidoran!$"

AideeBasementIdleTalk_Text_95:
# 1105 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Nidoran!$"

AideeBasementIdleTalk_Text_96:
# 1170 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Mudder, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_97:
# 1174 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Mudder!$"

AideeBasementIdleTalk_Text_98:
# 1193 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Grimer!$"

AideeBasementIdleTalk_Text_99:
# 1226 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Loadtad, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_100:
# 1230 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Loadtad!$"

AideeBasementIdleTalk_Text_101:
# 1249 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Lotad!$"

AideeBasementIdleTalk_Text_102:
# 1282 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Helipip, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_103:
# 1305 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Hoppip!$"

AideeBasementIdleTalk_Text_104:
# 1363 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Manchine, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_105:
# 1386 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Machop!$"

AideeBasementIdleTalk_Text_106:
# 1419 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Verdoom, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_107:
# 1423 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Verdoom!$"

AideeBasementIdleTalk_Text_108:
# 1442 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Beldum!$"

AideeBasementIdleTalk_Text_109:
# 1475 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Tumbela, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_110:
# 1479 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Tumbela!$"

AideeBasementIdleTalk_Text_111:
# 1498 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Tangela!$"

AideeBasementIdleTalk_Text_112:
# 1556 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Arystal, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_113:
# 1579 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Aron!$"

AideeBasementIdleTalk_Text_114:
# 1612 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Wartz, huh? Well, to unsafen this one we\n"
	.string "need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_115:
# 1616 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Wartz!$"

AideeBasementIdleTalk_Text_116:
# 1635 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Ralts!$"

AideeBasementIdleTalk_Text_117:
# 1668 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Veriwoodo, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_118:
# 1672 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Veriwoodo!$"

AideeBasementIdleTalk_Text_119:
# 1691 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Sudowoodo!$"

AideeBasementIdleTalk_Text_120:
# 1749 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Gummin, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_121:
# 1753 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Gummin!$"

AideeBasementIdleTalk_Text_122:
# 1772 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Gulpin!$"

AideeBasementIdleTalk_Text_123:
# 1805 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Rolloon, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_124:
# 1809 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Rolloon!$"

AideeBasementIdleTalk_Text_125:
# 1828 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Drifloon!$"

AideeBasementIdleTalk_Text_126:
# 1861 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Trashealed, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_127:
# 1865 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Trashealed!$"

AideeBasementIdleTalk_Text_128:
# 1884 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Trubbish!$"

AideeBasementIdleTalk_Text_129:
# 1944 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Kamoken, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Leek{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_130:
# 1948 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And you know what? It's something so\n"
	.string "mundane, I have one right here!$"

AideeBasementIdleTalk_Text_131:
# 1952 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So this time, the Unsafening Material is\n"
	.string "on me. Now, let's see that Kamoken!$"

AideeBasementIdleTalk_Text_132:
# 1971 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Farfetch'd!!$"

AideeBasementIdleTalk_Text_133:
# 1996 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Delibin, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_134:
# 2000 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Delibin!$"

AideeBasementIdleTalk_Text_135:
# 2019 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Delibird!$"

AideeBasementIdleTalk_Text_136:
# 2052 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Douno, huh? Well, to unsafen this one we\n"
	.string "need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_137:
# 2056 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Douno!$"

AideeBasementIdleTalk_Text_138:
# 2075 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Doduo!$"

AideeBasementIdleTalk_Text_139:
# 2133 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Kangaskid, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_140:
# 2137 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Kangaskid!$"

AideeBasementIdleTalk_Text_141:
# 2156 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Kangaskhan!$"

AideeBasementIdleTalk_Text_142:
# 2189 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Gachapod, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_143:
# 2193 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Gachapod!$"

AideeBasementIdleTalk_Text_144:
# 2212 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Ditto!$"

AideeBasementIdleTalk_Text_145:
# 2245 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Tamarakku, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_146:
# 2249 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Tamarakku!$"

AideeBasementIdleTalk_Text_147:
# 2268 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Togepi!$"

AideeBasementIdleTalk_Text_148:
# 2326 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Rotom Monitor, huh? Well, to unsafen\n"
	.string "this one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_149:
# 2330 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Rotom Monitor!$"

AideeBasementIdleTalk_Text_150:
# 2349 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Rotom!$"

AideeBasementIdleTalk_Text_151:
# 2382 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Mimiyurui, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_152:
# 2386 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Mimiyurui!$"

AideeBasementIdleTalk_Text_153:
# 2405 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Mimikyu!$"

AideeBasementIdleTalk_Text_154:
# 2435 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Uuhm, {PLAYER}...? The Unsafener is\n"
	.string "not detecting this one as a Safemon...\p"
	.string "But I've also never seen or heard of a\n"
	.string "Pokémon like this before...\p"
	.string "I think you might just have discovered\n"
	.string "a new species!$"

CancelTradeSafemonSelection_Text_0:
# 2487 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, changed your mind? I guess some\n"
	.string "Safemon have their charm after all.$"

SelectedIncorrectTradeSafemon_Text_0:
# 2496 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, that's not a {STR_VAR_1},\n"
	.string "{PLAYER}! You should do some\l"
	.string "reviewing with that Devondex I gave\l"
	.string "you, haha!$"
