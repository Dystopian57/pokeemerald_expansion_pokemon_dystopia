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
	.2byte ITEM_PROTEIN
# 95 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_IRON
# 96 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CALCIUM
# 97 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ZINC
# 98 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CARBOS
# 99 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_PP_UP
# 100 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 101 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 102 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 103 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CALM_MINT
# 104 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 105 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 106 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 107 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 108 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 109 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_LAX_MINT
# 110 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 111 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MILD_MINT
# 112 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 113 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 114 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 115 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 116 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_RASH_MINT
# 117 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 118 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE

AideCasettePlayer::
# 122 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 123 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_0
# 125 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideCasettePlayer_Text_1, AideCasettePlayer_Text_2
# 126 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideCasettePlayer_2
AideCasettePlayer_1:
# 155 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideCasettePlayer_5
AideCasettePlayer_4:
# 156 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

AideCasettePlayer_2:
# 127 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_RENBOUPARTY, TRUE
# 128 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_set Aideearrivestobasement, AideCasettePlayer_8
AideCasettePlayer_7:
# 152 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideCasettePlayer_1

AideCasettePlayer_5:
# 155 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideCasettePlayer_4

AideCasettePlayer_8:
# 129 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_0
# 130 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_PIN
# 131 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 132 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 133 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_3
# 134 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_1
# 136 "data/maps/LittlerootLabBasement/scripts.pory"
	call BalsamYellShake
# 137 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 138 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 139 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_4
# 141 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 142 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 143 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_5
# 145 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 146 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 147 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 148 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_6
# 149 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_3
# 150 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
	goto AideCasettePlayer_7


BalsamYellShake::
# 161 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8004, 2
# 162 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8005, 6
# 163 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8006, 4
# 164 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8007, 4
# 165 "data/maps/LittlerootLabBasement/scripts.pory"
	special ShakeCamera
	return


AideeBasementUnfollow1::
# 170 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 171 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 172 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 173 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 174 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow1_Movement_0
# 175 "data/maps/LittlerootLabBasement/scripts.pory"
Aidebymachine:
# 176 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 177 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 178 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 179 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_1
# 180 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 181 "data/maps/LittlerootLabBasement/scripts.pory"
	destroyfollowernpc
# 182 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject LOCALID_AIDEEBASEMENT
# 183 "data/maps/LittlerootLabBasement/scripts.pory"
	clearflag Aideearrivestobasement
# 184 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 7
# 185 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


AideeBasementUnfollow2::
# 189 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 190 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 191 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 192 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 193 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AideeBasementUnfollow2_Movement_0
# 194 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 195 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow1_Movement_0
# 196 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 197 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AideeBasementUnfollow2_Movement_1
# 198 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementUnfollow3::
# 203 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 204 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 205 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 206 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 207 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 208 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementUnfollow4::
# 212 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 213 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 214 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 215 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 216 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 217 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementIdleTalk::
# 221 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 222 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, AideeBasementIdleTalk_2
AideeBasementIdleTalk_1:
# 442 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_set Unsafeningtutodone, AideeBasementIdleTalk_4
	return

AideeBasementIdleTalk_2:
# 223 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 225 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 226 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_0
# 228 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 229 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 230 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 231 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_1
# 234 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 235 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 236 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 237 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_2
# 240 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 241 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 242 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 243 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_3
# 245 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 246 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 247 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 248 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_4
# 251 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 253 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 254 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_5
# 255 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 256 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 257 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 4, AideeBasementIdleTalk_Movement_1
# 258 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 260 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 4
# 261 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 262 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 263 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementUnfollow2_Movement_1
# 264 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 265 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 266 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_7
# 268 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 2
# 269 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 2, 10, 4
# 270 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_BAG_POCKET
# 271 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 272 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 273 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_8
# 274 "data/maps/LittlerootLabBasement/scripts.pory"
	closemessage
# 275 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 276 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_POKENAV_ON
# 277 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 278 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeoutbgm 2
# 279 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_ELEVATOR
# 280 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_TO_WHITE
# 281 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 282 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_SAVE
# 283 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 284 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 285 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 286 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_9
# 287 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 288 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 289 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeinbgm 2
# 290 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 291 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 292 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 2
# 294 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 295 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_10
# 296 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 297 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 299 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 5
# 300 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 5, 11, 6
# 301 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 302 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 303 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_NORMAL
# 304 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideeBasementIdleTalk_Movement_1
# 305 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_11
# 307 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_3
# 308 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 309 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 310 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_12
# 312 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 313 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 314 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 315 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_13
# 317 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 318 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 319 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 320 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_14
# 322 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 323 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_15
# 324 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideCasettePlayer_Text_1, AideCasettePlayer_Text_2
# 325 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmessage
# 327 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_7
AideeBasementIdleTalk_6:
# 357 "data/maps/LittlerootLabBasement/scripts.pory"
dontwantvoltorb:
# 358 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_13
AideeBasementIdleTalk_12:
# 379 "data/maps/LittlerootLabBasement/scripts.pory"
nicknamedvoltorb:
# 380 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 381 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 382 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 383 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 384 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_22
# 388 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 389 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 390 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 391 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_23
# 394 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 395 "data/maps/LittlerootLabBasement/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 396 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 397 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_24
# 398 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 400 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 401 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 402 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_25
# 405 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_BULBASYNTH
# 406 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_SMOTHQUIL
# 407 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_PIKACHU_SAFE
# 408 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_MIMIYURUI
# 410 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 411 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 412 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 413 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_26
# 416 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 417 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 418 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_27
# 420 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 421 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_REGISTER_MATCH_CALL, TRUE
# 422 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_28
# 426 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 427 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 428 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 429 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 430 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 431 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 432 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_29
# 434 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 435 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 436 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_30
# 437 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 438 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag Unsafeningtutodone
# 439 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishunsafentutorial
	goto AideeBasementIdleTalk_1

AideeBasementIdleTalk_4:
# 443 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 444 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 445 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_31
# 446 "data/maps/LittlerootLabBasement/scripts.pory"
aidechoices:
# 447 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_32, AideeBasementIdleTalk_Text_33, AideeBasementIdleTalk_Text_34, AideeBasementIdleTalk_Text_35, AideeBasementIdleTalk_Text_36
# 452 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_10
AideeBasementIdleTalk_9:
# 491 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_19
AideeBasementIdleTalk_18:
# 536 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_29
AideeBasementIdleTalk_28:
# 552 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_38
AideeBasementIdleTalk_37:
# 559 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_46
	return

AideeBasementIdleTalk_7:
# 328 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 329 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 330 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideeBasementIdleTalk_Movement_2
# 331 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 332 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 333 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_HIGH_PITCH
# 334 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_16
# 336 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 337 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 338 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_17
# 339 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 340 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 341 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
# 342 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 345 "data/maps/LittlerootLabBasement/scripts.pory"
	givemon SPECIES_VOLTORB, 3
# 346 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AideeBasementIdleTalk_16
AideeBasementIdleTalk_15:
# 354 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AideeBasementIdleTalk_24
	goto AideeBasementIdleTalk_6

AideeBasementIdleTalk_10:
# 453 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 454 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 455 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafenmaterialtutodone, AideeBasementIdleTalk_21
# 470 "data/maps/LittlerootLabBasement/scripts.pory"
afterunsafenmaterialtuto:
# 471 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 472 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 473 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_39
# 475 "data/maps/LittlerootLabBasement/scripts.pory"
	GetGameStat GAME_STAT_RODE_CABLE_CAR
# 476 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 477 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_gt AideeBasementIdleTalk_35
AideeBasementIdleTalk_34:
# 480 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt AideeBasementIdleTalk_44
AideeBasementIdleTalk_43:
# 484 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 485 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 486 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_40
# 487 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_9

AideeBasementIdleTalk_13:
# 359 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 360 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 361 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 362 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 363 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_WEAK
# 364 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_19
# 366 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 367 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 368 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 369 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_20
# 370 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 371 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 372 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 373 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 374 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_21
# 375 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 376 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
	goto AideeBasementIdleTalk_12

AideeBasementIdleTalk_16:
# 347 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 348 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 349 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_18, MSGBOX_YESNO
# 350 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AideeBasementIdleTalk_26
	goto AideeBasementIdleTalk_15

AideeBasementIdleTalk_19:
# 494 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 495 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 496 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_41
# 498 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_42, AideeBasementIdleTalk_Text_43, AideeBasementIdleTalk_Text_44
# 501 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_32
AideeBasementIdleTalk_31:
# 512 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_41
AideeBasementIdleTalk_40:
# 522 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_49
AideeBasementIdleTalk_48:
# 532 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_48
# 533 "data/maps/LittlerootLabBasement/scripts.pory"
	goto aidechoices
	goto AideeBasementIdleTalk_18

AideeBasementIdleTalk_21:
# 456 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_37
# 463 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 464 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 465 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_38
# 466 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag Unsafenmaterialtutodone
# 467 "data/maps/LittlerootLabBasement/scripts.pory"
	goto afterunsafenmaterialtuto
	goto AideeBasementIdleTalk_9

AideeBasementIdleTalk_24:
# 355 "data/maps/LittlerootLabBasement/scripts.pory"
	goto dontwantvoltorb
	goto AideeBasementIdleTalk_6

AideeBasementIdleTalk_26:
# 351 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 352 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 353 "data/maps/LittlerootLabBasement/scripts.pory"
	goto nicknamedvoltorb
	goto AideeBasementIdleTalk_15

AideeBasementIdleTalk_29:
# 537 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_49
# 547 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_48
# 548 "data/maps/LittlerootLabBasement/scripts.pory"
	goto aidechoices
	goto AideeBasementIdleTalk_28

AideeBasementIdleTalk_32:
# 502 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 503 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 504 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_45
	goto AideeBasementIdleTalk_31

AideeBasementIdleTalk_35:
# 478 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials0
	goto AideeBasementIdleTalk_34

AideeBasementIdleTalk_38:
# 553 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_37

AideeBasementIdleTalk_41:
# 513 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 514 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 515 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_46
	goto AideeBasementIdleTalk_40

AideeBasementIdleTalk_44:
# 481 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials1
	goto AideeBasementIdleTalk_43

AideeBasementIdleTalk_46:
# 560 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 561 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 562 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_50
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_51, AideeBasementIdleTalk_Text_52, AideeBasementIdleTalk_Text_53, AideeBasementIdleTalk_Text_54, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 566 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_52
AideeBasementIdleTalk_51:
# 608 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_55
AideeBasementIdleTalk_54:
# 649 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_61
AideeBasementIdleTalk_60:
# 690 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_67
AideeBasementIdleTalk_66:
# 729 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq AideeBasementIdleTalk_73
AideeBasementIdleTalk_72:
# 737 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_79
AideeBasementIdleTalk_78:
# 2461 "data/maps/LittlerootLabBasement/scripts.pory"
finishunsafentutorial:
# 2462 "data/maps/LittlerootLabBasement/scripts.pory"
finishsafemontradescript:
# 2463 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 2464 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

AideeBasementIdleTalk_49:
# 523 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 524 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 525 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_47
	goto AideeBasementIdleTalk_48

AideeBasementIdleTalk_52:
# 567 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 568 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 569 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_57
	checkitem ITEM_COMET_SHARD
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_57
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 600 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_60
	goto AideeBasementIdleTalk_51

AideeBasementIdleTalk_55:
# 609 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 610 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 611 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_61
	checkitem ITEM_MAGNET
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_63
# 640 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 641 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
	goto AideeBasementIdleTalk_54

AideeBasementIdleTalk_57:
# 573 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_58
# 575 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_VOLTORB
# 578 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 579 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 580 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 581 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 582 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 583 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 584 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 585 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 586 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 587 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 588 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 589 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 590 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 591 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 592 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 593 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_59
# 595 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_COMET_SHARD, 1
	goto AideeBasementIdleTalk_51

AideeBasementIdleTalk_61:
# 650 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 651 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 652 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_65
	checkitem ITEM_MAGNET
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_69
# 681 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 682 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
	goto AideeBasementIdleTalk_60

AideeBasementIdleTalk_63:
# 615 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_62
# 617 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BULBASAUR
# 618 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 619 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 620 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 621 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 622 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 623 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 624 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 625 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 626 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 627 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 628 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 629 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 630 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 631 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 632 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 634 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_63
# 636 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MAGNET, 1
# 637 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_54

AideeBasementIdleTalk_67:
# 691 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 692 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 693 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
	checkitem ITEM_MAGNET
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_75
# 722 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 723 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
	goto AideeBasementIdleTalk_66

AideeBasementIdleTalk_69:
# 656 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_66
# 658 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_CYNDAQUIL
# 659 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 660 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 661 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 662 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 663 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 664 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 665 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 666 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 667 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 668 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 669 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 670 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 671 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 672 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 673 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 675 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_67
# 677 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MAGNET, 1
# 678 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_60

AideeBasementIdleTalk_73:
# 730 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 731 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_71
# 732 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_72

AideeBasementIdleTalk_75:
# 697 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_69
# 699 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PIKACHU
# 700 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 701 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 702 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 703 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 704 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 705 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 706 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 707 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 708 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 709 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 710 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 711 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 712 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 713 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 714 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 716 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_70
# 718 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MAGNET, 1
# 719 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_66

AideeBasementIdleTalk_79:
# 738 "data/maps/LittlerootLabBasement/scripts.pory"
secondsafemonlistreturn:
# 739 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NINKABURI
# 740 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_82
AideeBasementIdleTalk_81:
# 742 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_85
AideeBasementIdleTalk_84:
# 745 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_SHIITAKO
# 746 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_88
AideeBasementIdleTalk_87:
# 748 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_91
AideeBasementIdleTalk_90:
# 751 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 752 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_94
AideeBasementIdleTalk_93:
# 754 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_97
AideeBasementIdleTalk_96:
# 758 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_72
# 759 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 762 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_100
AideeBasementIdleTalk_99:
# 814 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_103
AideeBasementIdleTalk_102:
# 870 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_109
AideeBasementIdleTalk_108:
# 924 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_120
AideeBasementIdleTalk_119:
# 932 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_131
AideeBasementIdleTalk_130:
# 953 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 954 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 956 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_139
AideeBasementIdleTalk_138:
# 1011 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_145
AideeBasementIdleTalk_144:
# 1067 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_154
AideeBasementIdleTalk_153:
# 1128 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_168
AideeBasementIdleTalk_167:
# 1137 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_182
AideeBasementIdleTalk_181:
# 1158 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1159 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1161 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_193
AideeBasementIdleTalk_192:
# 1217 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_205
AideeBasementIdleTalk_204:
# 1273 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_214
AideeBasementIdleTalk_213:
# 1330 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_228
AideeBasementIdleTalk_227:
# 1351 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1352 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1354 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_242
AideeBasementIdleTalk_241:
# 1410 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_256
AideeBasementIdleTalk_255:
# 1466 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_267
AideeBasementIdleTalk_266:
# 1523 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_281
AideeBasementIdleTalk_280:
# 1544 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1545 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1547 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_295
AideeBasementIdleTalk_294:
# 1603 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_309
AideeBasementIdleTalk_308:
# 1659 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_320
AideeBasementIdleTalk_319:
# 1716 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_334
AideeBasementIdleTalk_333:
# 1737 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1738 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1740 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_348
AideeBasementIdleTalk_347:
# 1796 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_362
AideeBasementIdleTalk_361:
# 1852 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_373
AideeBasementIdleTalk_372:
# 1911 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_387
AideeBasementIdleTalk_386:
# 1932 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 1933 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 1935 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_401
AideeBasementIdleTalk_400:
# 1991 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_415
AideeBasementIdleTalk_414:
# 2047 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_426
AideeBasementIdleTalk_425:
# 2104 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_440
AideeBasementIdleTalk_439:
# 2125 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 2126 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 2128 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_454
AideeBasementIdleTalk_453:
# 2184 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_468
AideeBasementIdleTalk_467:
# 2240 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_479
AideeBasementIdleTalk_478:
# 2297 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_493
AideeBasementIdleTalk_492:
# 2318 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 2319 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_73, AideeBasementIdleTalk_Text_74, AideeBasementIdleTalk_Text_75, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56
# 2321 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_507
AideeBasementIdleTalk_506:
# 2377 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_521
AideeBasementIdleTalk_520:
# 2433 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_531
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_82:
# 741 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NINKABURI
	goto AideeBasementIdleTalk_81

AideeBasementIdleTalk_85:
# 743 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_84

AideeBasementIdleTalk_88:
# 747 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SHIITAKO
	goto AideeBasementIdleTalk_87

AideeBasementIdleTalk_91:
# 749 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_90

AideeBasementIdleTalk_94:
# 753 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_POOCHAIN
	goto AideeBasementIdleTalk_93

AideeBasementIdleTalk_97:
# 755 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_96

AideeBasementIdleTalk_100:
# 763 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NINKABURI
# 764 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_106
AideeBasementIdleTalk_105:
# 804 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_114
	goto AideeBasementIdleTalk_99

AideeBasementIdleTalk_103:
# 815 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_SHIITAKO
# 816 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_112
AideeBasementIdleTalk_111:
# 859 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_125
	goto AideeBasementIdleTalk_102

AideeBasementIdleTalk_106:
# 766 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 767 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 768 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_76
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_116
# 797 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 798 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 801 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_105

AideeBasementIdleTalk_109:
# 871 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 872 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_123
AideeBasementIdleTalk_122:
# 914 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_133
	goto AideeBasementIdleTalk_108

AideeBasementIdleTalk_112:
# 819 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 820 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 821 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_80
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_127
# 850 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 851 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 854 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_111

AideeBasementIdleTalk_114:
# 805 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 806 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 807 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 810 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_99

AideeBasementIdleTalk_116:
# 772 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_77
# 774 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NINCADA
# 775 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 776 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 777 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 778 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 779 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 780 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 781 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 782 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 783 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 784 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 785 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 786 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 787 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 788 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 789 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 791 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_78
# 793 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 794 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_105

AideeBasementIdleTalk_120:
# 925 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 926 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_71
# 927 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_119

AideeBasementIdleTalk_123:
# 874 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 875 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 876 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_135
# 905 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 906 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 909 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_122

AideeBasementIdleTalk_125:
# 860 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 861 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 862 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 865 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_102

AideeBasementIdleTalk_127:
# 825 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_81
# 827 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SHROOMISH
# 828 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 829 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 830 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 831 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 832 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 833 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 834 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 835 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 836 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 837 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 838 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 839 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 840 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 841 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 842 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 844 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_82
# 846 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 847 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_111

AideeBasementIdleTalk_131:
# 933 "data/maps/LittlerootLabBasement/scripts.pory"
thirdsafemonlistreturn:
# 934 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_FOOMING
# 935 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_142
AideeBasementIdleTalk_141:
# 937 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_151
AideeBasementIdleTalk_150:
# 940 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GEOSLUG
# 941 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_165
AideeBasementIdleTalk_164:
# 943 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_179
AideeBasementIdleTalk_178:
# 946 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NIDORAN_I
# 947 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_190
AideeBasementIdleTalk_189:
# 949 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_202
	goto AideeBasementIdleTalk_130

AideeBasementIdleTalk_133:
# 915 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 916 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 917 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 920 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_108

AideeBasementIdleTalk_135:
# 880 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_84
# 882 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_POOCHYENA
# 883 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 884 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 885 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 886 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 887 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 888 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 889 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 890 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 891 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 892 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 893 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 894 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 895 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 896 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 897 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 899 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_85
# 901 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 902 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_122

AideeBasementIdleTalk_139:
# 957 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_FOOMING
# 958 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_148
AideeBasementIdleTalk_147:
# 1001 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_159
	goto AideeBasementIdleTalk_138

AideeBasementIdleTalk_142:
# 936 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FOOMING
	goto AideeBasementIdleTalk_141

AideeBasementIdleTalk_145:
# 1012 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GEOSLUG
# 1013 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_157
AideeBasementIdleTalk_156:
# 1056 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_173
	goto AideeBasementIdleTalk_144

AideeBasementIdleTalk_148:
# 961 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 962 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 963 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_87
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_161
# 992 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 993 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 996 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_147

AideeBasementIdleTalk_151:
# 938 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_150

AideeBasementIdleTalk_154:
# 1068 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NIDORAN_I
# 1069 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_171
AideeBasementIdleTalk_170:
# 1118 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_184
	goto AideeBasementIdleTalk_153

AideeBasementIdleTalk_157:
# 1016 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1017 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1018 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_175
# 1047 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1048 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1051 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_156

AideeBasementIdleTalk_159:
# 1002 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1003 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1004 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1007 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_138

AideeBasementIdleTalk_161:
# 967 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_88
# 969 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_KOFFING
# 970 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 971 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 972 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 973 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 974 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 975 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 976 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 977 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 978 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 979 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 980 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 981 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 982 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 983 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 984 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 986 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_89
# 988 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 989 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_147

AideeBasementIdleTalk_165:
# 942 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GEOSLUG
	goto AideeBasementIdleTalk_164

AideeBasementIdleTalk_168:
# 1129 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1130 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_71
# 1131 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_167

AideeBasementIdleTalk_171:
# 1072 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1073 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1074 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_93
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_186
# 1109 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1110 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1113 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_170

AideeBasementIdleTalk_173:
# 1057 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1058 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1059 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1062 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_144

AideeBasementIdleTalk_175:
# 1022 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_91
# 1024 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SLUGMA
# 1025 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1026 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1027 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1028 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1029 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1030 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1031 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1032 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1033 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1034 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1035 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1036 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1037 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1038 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1039 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1041 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_92
# 1043 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1044 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_156

AideeBasementIdleTalk_179:
# 944 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_178

AideeBasementIdleTalk_182:
# 1138 "data/maps/LittlerootLabBasement/scripts.pory"
fourthsafemonlistreturn:
# 1139 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MUDDER
# 1140 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_196
AideeBasementIdleTalk_195:
# 1142 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_211
AideeBasementIdleTalk_210:
# 1145 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_LOADTAD
# 1146 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_225
AideeBasementIdleTalk_224:
# 1148 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_239
AideeBasementIdleTalk_238:
# 1151 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1152 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_253
AideeBasementIdleTalk_252:
# 1154 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_264
	goto AideeBasementIdleTalk_181

AideeBasementIdleTalk_184:
# 1119 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1120 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1121 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1124 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_153

AideeBasementIdleTalk_186:
# 1078 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_94
# 1081 "data/maps/LittlerootLabBasement/scripts.pory"
	random 1
# 1082 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 1083 "data/maps/LittlerootLabBasement/scripts.pory"
	switch VAR_RESULT
# 1084 "data/maps/LittlerootLabBasement/scripts.pory"
	case 0, AideeBasementIdleTalk_200
# 1085 "data/maps/LittlerootLabBasement/scripts.pory"
	case 1, AideeBasementIdleTalk_201
AideeBasementIdleTalk_198:
# 1087 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1088 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1089 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1090 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1091 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1092 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1093 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1094 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1095 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1096 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1097 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1098 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1099 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1100 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1101 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1103 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_95
# 1105 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1106 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_170

AideeBasementIdleTalk_190:
# 948 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NIDORAN_I
	goto AideeBasementIdleTalk_189

AideeBasementIdleTalk_193:
# 1162 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MUDDER
# 1163 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_208
AideeBasementIdleTalk_207:
# 1206 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_219
	goto AideeBasementIdleTalk_192

AideeBasementIdleTalk_196:
# 1141 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDDER
	goto AideeBasementIdleTalk_195

AideeBasementIdleTalk_200:
# 1084 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN_M
	goto AideeBasementIdleTalk_198

AideeBasementIdleTalk_201:
# 1085 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN_F
	goto AideeBasementIdleTalk_198

AideeBasementIdleTalk_202:
# 950 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_130

AideeBasementIdleTalk_205:
# 1218 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_LOADTAD
# 1219 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_217
AideeBasementIdleTalk_216:
# 1260 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_233
	goto AideeBasementIdleTalk_204

AideeBasementIdleTalk_208:
# 1166 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1167 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1168 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_96
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_221
# 1197 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1198 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1201 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_207

AideeBasementIdleTalk_211:
# 1143 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_210

AideeBasementIdleTalk_214:
# 1274 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1275 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_231
AideeBasementIdleTalk_230:
# 1317 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_247
	goto AideeBasementIdleTalk_213

AideeBasementIdleTalk_217:
# 1222 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1223 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1224 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_99
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_235
# 1253 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1254 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1257 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_216

AideeBasementIdleTalk_219:
# 1207 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1208 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1209 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1212 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_192

AideeBasementIdleTalk_221:
# 1172 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_97
# 1174 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GRIMER
# 1175 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1176 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1177 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1178 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1179 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1180 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1181 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1182 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1183 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1184 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1185 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1186 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1187 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1188 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1189 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1191 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_98
# 1193 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1194 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_207

AideeBasementIdleTalk_225:
# 1147 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LOADTAD
	goto AideeBasementIdleTalk_224

AideeBasementIdleTalk_228:
# 1331 "data/maps/LittlerootLabBasement/scripts.pory"
fifthsafemonlistreturn:
# 1332 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 1333 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_245
AideeBasementIdleTalk_244:
# 1335 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_262
AideeBasementIdleTalk_261:
# 1338 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERDOOM
# 1339 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_278
AideeBasementIdleTalk_277:
# 1341 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_292
AideeBasementIdleTalk_291:
# 1344 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TUMBELA
# 1345 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_306
AideeBasementIdleTalk_305:
# 1347 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_317
	goto AideeBasementIdleTalk_227

AideeBasementIdleTalk_231:
# 1278 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1279 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1280 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_102
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_249
# 1309 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1310 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1313 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_230

AideeBasementIdleTalk_233:
# 1261 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1262 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1263 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1266 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_204

AideeBasementIdleTalk_235:
# 1228 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_100
# 1230 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_LOTAD
# 1231 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1232 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1233 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1234 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1235 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1236 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1237 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1238 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1239 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1240 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1241 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1242 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1243 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1244 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1245 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1247 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_101
# 1249 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1250 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_216

AideeBasementIdleTalk_239:
# 1149 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_238

AideeBasementIdleTalk_242:
# 1355 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 1356 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_259
AideeBasementIdleTalk_258:
# 1399 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_272
	goto AideeBasementIdleTalk_241

AideeBasementIdleTalk_245:
# 1334 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MANCHINE
	goto AideeBasementIdleTalk_244

AideeBasementIdleTalk_247:
# 1318 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1319 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1320 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1323 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_213

AideeBasementIdleTalk_249:
# 1284 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_100
# 1286 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HOPPIP
# 1287 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1288 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1289 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1290 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1291 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1292 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1293 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1294 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1295 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1296 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1297 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1298 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1299 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1300 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1301 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1303 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_103
# 1305 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1306 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_230

AideeBasementIdleTalk_253:
# 1153 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_HELIPIP
	goto AideeBasementIdleTalk_252

AideeBasementIdleTalk_256:
# 1411 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERDOOM
# 1412 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_270
AideeBasementIdleTalk_269:
# 1453 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_286
	goto AideeBasementIdleTalk_255

AideeBasementIdleTalk_259:
# 1359 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1360 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1361 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_104
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_274
# 1390 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1391 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1394 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_258

AideeBasementIdleTalk_262:
# 1336 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_261

AideeBasementIdleTalk_264:
# 1155 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_181

AideeBasementIdleTalk_267:
# 1467 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1468 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_284
AideeBasementIdleTalk_283:
# 1510 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_300
	goto AideeBasementIdleTalk_266

AideeBasementIdleTalk_270:
# 1415 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1416 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1417 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_106
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_288
# 1446 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1447 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1450 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_269

AideeBasementIdleTalk_272:
# 1400 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1401 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1402 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1405 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_241

AideeBasementIdleTalk_274:
# 1365 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_97
# 1367 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MACHOP
# 1368 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1369 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1370 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1371 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1372 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1373 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1374 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1375 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1376 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1377 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1378 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1379 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1380 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1381 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1382 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1384 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_105
# 1386 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1387 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_258

AideeBasementIdleTalk_278:
# 1340 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_VERDOOM
	goto AideeBasementIdleTalk_277

AideeBasementIdleTalk_281:
# 1524 "data/maps/LittlerootLabBasement/scripts.pory"
sixthsafemonlistreturn:
# 1525 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ARYSTAL
# 1526 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_298
AideeBasementIdleTalk_297:
# 1528 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_315
AideeBasementIdleTalk_314:
# 1531 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARTZ
# 1532 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_331
AideeBasementIdleTalk_330:
# 1534 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_345
AideeBasementIdleTalk_344:
# 1537 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERIWOODO
# 1538 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_359
AideeBasementIdleTalk_358:
# 1540 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_370
	goto AideeBasementIdleTalk_280

AideeBasementIdleTalk_284:
# 1471 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1472 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1473 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_109
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_302
# 1502 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1503 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1506 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_283

AideeBasementIdleTalk_286:
# 1454 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1455 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1456 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1459 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_255

AideeBasementIdleTalk_288:
# 1421 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_107
# 1423 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BELDUM
# 1424 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1425 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1426 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1427 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1428 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1429 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1430 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1431 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1432 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1433 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1434 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1435 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1436 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1437 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1438 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1440 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_108
# 1442 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1443 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_269

AideeBasementIdleTalk_292:
# 1342 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_291

AideeBasementIdleTalk_295:
# 1548 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ARYSTAL
# 1549 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_312
AideeBasementIdleTalk_311:
# 1592 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_325
	goto AideeBasementIdleTalk_294

AideeBasementIdleTalk_298:
# 1527 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARYSTAL
	goto AideeBasementIdleTalk_297

AideeBasementIdleTalk_300:
# 1511 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1512 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1513 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1516 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_266

AideeBasementIdleTalk_302:
# 1477 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_110
# 1479 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 1480 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1481 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1482 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1483 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1484 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1485 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1486 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1487 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1488 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1489 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1490 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1491 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1492 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1493 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1494 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1496 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_111
# 1498 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1499 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_283

AideeBasementIdleTalk_306:
# 1346 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TUMBELA
	goto AideeBasementIdleTalk_305

AideeBasementIdleTalk_309:
# 1604 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARTZ
# 1605 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_323
AideeBasementIdleTalk_322:
# 1646 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_339
	goto AideeBasementIdleTalk_308

AideeBasementIdleTalk_312:
# 1552 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1553 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1554 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_112
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_327
# 1583 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1584 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1587 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_311

AideeBasementIdleTalk_315:
# 1529 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_314

AideeBasementIdleTalk_317:
# 1348 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_227

AideeBasementIdleTalk_320:
# 1660 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1661 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_337
AideeBasementIdleTalk_336:
# 1703 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_353
	goto AideeBasementIdleTalk_319

AideeBasementIdleTalk_323:
# 1608 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1609 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1610 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_114
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_341
# 1639 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1640 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1643 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_322

AideeBasementIdleTalk_325:
# 1593 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1594 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1595 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1598 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_294

AideeBasementIdleTalk_327:
# 1558 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_97
# 1560 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ARON
# 1561 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1562 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1563 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1564 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1565 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1566 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1567 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1568 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1569 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1570 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1571 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1572 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1573 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1574 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1575 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1577 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_113
# 1579 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1580 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_311

AideeBasementIdleTalk_331:
# 1533 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_WARTZ
	goto AideeBasementIdleTalk_330

AideeBasementIdleTalk_334:
# 1717 "data/maps/LittlerootLabBasement/scripts.pory"
seventhsafemonlistreturn:
# 1718 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GUMMIN
# 1719 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_351
AideeBasementIdleTalk_350:
# 1721 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_368
AideeBasementIdleTalk_367:
# 1724 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROLLOON
# 1725 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_384
AideeBasementIdleTalk_383:
# 1727 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_398
AideeBasementIdleTalk_397:
# 1730 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TRASHEAL
# 1731 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_412
AideeBasementIdleTalk_411:
# 1733 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_423
	goto AideeBasementIdleTalk_333

AideeBasementIdleTalk_337:
# 1664 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1665 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1666 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_117
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_355
# 1695 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1696 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1699 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_336

AideeBasementIdleTalk_339:
# 1647 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1648 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1649 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1652 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_308

AideeBasementIdleTalk_341:
# 1614 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_115
# 1616 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_RALTS
# 1617 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1618 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1619 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1620 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1621 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1622 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1623 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1624 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1625 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1626 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1627 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1628 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1629 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1630 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1631 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1633 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_116
# 1635 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1636 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_322

AideeBasementIdleTalk_345:
# 1535 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_344

AideeBasementIdleTalk_348:
# 1741 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GUMMIN
# 1742 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_365
AideeBasementIdleTalk_364:
# 1785 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_378
	goto AideeBasementIdleTalk_347

AideeBasementIdleTalk_351:
# 1720 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GUMMIN
	goto AideeBasementIdleTalk_350

AideeBasementIdleTalk_353:
# 1704 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1705 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1706 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1709 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_319

AideeBasementIdleTalk_355:
# 1670 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_118
# 1672 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SUDOWOODO
# 1673 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1674 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1675 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1676 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1677 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1678 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1679 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1680 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1681 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1682 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1683 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1684 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1685 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1686 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1687 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1689 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_119
# 1691 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1692 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_336

AideeBasementIdleTalk_359:
# 1539 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_VERIWOODO
	goto AideeBasementIdleTalk_358

AideeBasementIdleTalk_362:
# 1797 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROLLOON
# 1798 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_376
AideeBasementIdleTalk_375:
# 1839 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_392
	goto AideeBasementIdleTalk_361

AideeBasementIdleTalk_365:
# 1745 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1746 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1747 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_120
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_380
# 1776 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1777 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1780 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_364

AideeBasementIdleTalk_368:
# 1722 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_367

AideeBasementIdleTalk_370:
# 1541 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_280

AideeBasementIdleTalk_373:
# 1853 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TRASHEAL
# 1854 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_390
AideeBasementIdleTalk_389:
# 1896 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_406
	goto AideeBasementIdleTalk_372

AideeBasementIdleTalk_376:
# 1801 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1802 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1803 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_123
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_394
# 1832 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1833 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1836 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_375

AideeBasementIdleTalk_378:
# 1786 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1787 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1788 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1791 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_347

AideeBasementIdleTalk_380:
# 1751 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_121
# 1753 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GULPIN
# 1754 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1755 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1756 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1757 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1758 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1759 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1760 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1761 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1762 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1763 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1764 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1765 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1766 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1767 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1768 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1770 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_122
# 1772 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1773 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_364

AideeBasementIdleTalk_384:
# 1726 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ROLLOON
	goto AideeBasementIdleTalk_383

AideeBasementIdleTalk_387:
# 1912 "data/maps/LittlerootLabBasement/scripts.pory"
eighthsafemonlistreturn:
# 1913 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 1914 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_404
AideeBasementIdleTalk_403:
# 1916 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_421
AideeBasementIdleTalk_420:
# 1919 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DELIBIN
# 1920 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_437
AideeBasementIdleTalk_436:
# 1922 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_451
AideeBasementIdleTalk_450:
# 1925 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DOUNO
# 1926 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_465
AideeBasementIdleTalk_464:
# 1928 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_476
	goto AideeBasementIdleTalk_386

AideeBasementIdleTalk_390:
# 1857 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1858 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1859 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_126
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_408
# 1888 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1889 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1892 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_389

AideeBasementIdleTalk_392:
# 1840 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1841 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1842 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1845 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_361

AideeBasementIdleTalk_394:
# 1807 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_124
# 1809 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DRIFLOON
# 1810 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1811 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1812 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1813 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1814 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1815 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1816 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1817 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1818 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1819 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1820 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1821 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1822 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1823 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1824 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1826 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_125
# 1828 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1829 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_375

AideeBasementIdleTalk_398:
# 1728 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_397

AideeBasementIdleTalk_401:
# 1936 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 1937 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_418
AideeBasementIdleTalk_417:
# 1980 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_431
	goto AideeBasementIdleTalk_400

AideeBasementIdleTalk_404:
# 1915 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KAMOKEN
	goto AideeBasementIdleTalk_403

AideeBasementIdleTalk_406:
# 1897 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1898 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1899 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1902 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_372

AideeBasementIdleTalk_408:
# 1863 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_127
# 1865 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TRUBBISH
# 1866 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1867 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1868 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1869 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1870 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1871 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1872 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1873 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1874 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1875 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1876 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1877 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1878 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1879 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1880 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1882 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_128
# 1884 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1885 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_389

AideeBasementIdleTalk_412:
# 1732 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TRASHEAL
	goto AideeBasementIdleTalk_411

AideeBasementIdleTalk_415:
# 1992 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DELIBIN
# 1993 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_429
AideeBasementIdleTalk_428:
# 2034 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_445
	goto AideeBasementIdleTalk_414

AideeBasementIdleTalk_418:
# 1940 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1941 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1942 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_129
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_433
# 1971 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1972 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 1975 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_417

AideeBasementIdleTalk_421:
# 1917 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_420

AideeBasementIdleTalk_423:
# 1734 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_333

AideeBasementIdleTalk_426:
# 2048 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DOUNO
# 2049 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_443
AideeBasementIdleTalk_442:
# 2091 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_459
	goto AideeBasementIdleTalk_425

AideeBasementIdleTalk_429:
# 1996 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1997 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1998 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_132
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_447
# 2027 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2028 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2031 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_428

AideeBasementIdleTalk_431:
# 1981 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1982 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1983 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 1986 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_400

AideeBasementIdleTalk_433:
# 1946 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_130
# 1948 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 1949 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1950 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1951 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1952 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1953 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1954 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1955 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1956 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1957 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1958 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1959 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1960 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1961 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1962 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1963 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1965 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_131
# 1967 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1968 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_417

AideeBasementIdleTalk_437:
# 1921 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DELIBIN
	goto AideeBasementIdleTalk_436

AideeBasementIdleTalk_440:
# 2105 "data/maps/LittlerootLabBasement/scripts.pory"
ninthsafemonlistreturn:
# 2106 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KANGASKID
# 2107 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_457
AideeBasementIdleTalk_456:
# 2109 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_474
AideeBasementIdleTalk_473:
# 2112 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GACHAPOD
# 2113 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_490
AideeBasementIdleTalk_489:
# 2115 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_504
AideeBasementIdleTalk_503:
# 2118 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TAMARAKKU
# 2119 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_518
AideeBasementIdleTalk_517:
# 2121 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_529
	goto AideeBasementIdleTalk_439

AideeBasementIdleTalk_443:
# 2052 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2053 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2054 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_135
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_461
# 2083 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2084 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2087 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_442

AideeBasementIdleTalk_445:
# 2035 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2036 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2037 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2040 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_414

AideeBasementIdleTalk_447:
# 2002 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_133
# 2004 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DELIBIRD
# 2005 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2006 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2007 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2008 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2009 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2010 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2011 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2012 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2013 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2014 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2015 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2016 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2017 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2018 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2019 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2021 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_134
# 2023 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2024 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_428

AideeBasementIdleTalk_451:
# 1923 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_450

AideeBasementIdleTalk_454:
# 2129 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KANGASKHAN
# 2130 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_471
AideeBasementIdleTalk_470:
# 2173 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_484
	goto AideeBasementIdleTalk_453

AideeBasementIdleTalk_457:
# 2108 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KANGASKID
	goto AideeBasementIdleTalk_456

AideeBasementIdleTalk_459:
# 2092 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2093 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2094 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2097 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_425

AideeBasementIdleTalk_461:
# 2058 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_136
# 2060 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DODUO
# 2061 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2062 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2063 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2064 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2065 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2066 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2067 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2068 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2069 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2070 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2071 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2072 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2073 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2074 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2075 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2077 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_137
# 2079 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2080 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_442

AideeBasementIdleTalk_465:
# 1927 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DOUNO
	goto AideeBasementIdleTalk_464

AideeBasementIdleTalk_468:
# 2185 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GACHAPOD
# 2186 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_482
AideeBasementIdleTalk_481:
# 2227 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_498
	goto AideeBasementIdleTalk_467

AideeBasementIdleTalk_471:
# 2133 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2134 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2135 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_138
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_486
# 2164 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2165 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2168 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_470

AideeBasementIdleTalk_474:
# 2110 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_473

AideeBasementIdleTalk_476:
# 1929 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_386

AideeBasementIdleTalk_479:
# 2241 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TAMARAKKU
# 2242 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_496
AideeBasementIdleTalk_495:
# 2284 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_512
	goto AideeBasementIdleTalk_478

AideeBasementIdleTalk_482:
# 2189 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2190 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2191 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_141
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_500
# 2220 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2221 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2224 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_481

AideeBasementIdleTalk_484:
# 2174 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2175 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2176 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2179 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_453

AideeBasementIdleTalk_486:
# 2139 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_139
# 2141 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_KANGASKHAN
# 2142 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2143 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2144 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2145 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2146 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2147 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2148 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2149 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2150 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2151 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2152 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2153 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2154 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2155 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2156 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2158 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_140
# 2160 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2161 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_470

AideeBasementIdleTalk_490:
# 2114 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GACHAPOD
	goto AideeBasementIdleTalk_489

AideeBasementIdleTalk_493:
# 2298 "data/maps/LittlerootLabBasement/scripts.pory"
tenthsafemonlistreturn:
# 2299 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROTOM_MONITOR
# 2300 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_510
AideeBasementIdleTalk_509:
# 2302 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_527
AideeBasementIdleTalk_526:
# 2305 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MIMIYURUI
# 2306 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_542
AideeBasementIdleTalk_541:
# 2308 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_553
AideeBasementIdleTalk_552:
# 2311 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARABBIT
# 2312 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_558
AideeBasementIdleTalk_557:
# 2314 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_560
	goto AideeBasementIdleTalk_492

AideeBasementIdleTalk_496:
# 2245 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2246 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2247 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_144
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_514
# 2276 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2277 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2280 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_495

AideeBasementIdleTalk_498:
# 2228 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2229 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2230 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2233 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_467

AideeBasementIdleTalk_500:
# 2195 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_142
# 2197 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DITTO
# 2198 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2199 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2200 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2201 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2202 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2203 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2204 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2205 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2206 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2207 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2208 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2209 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2210 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2211 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2212 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2214 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_143
# 2216 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2217 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_481

AideeBasementIdleTalk_504:
# 2116 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_503

AideeBasementIdleTalk_507:
# 2322 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROTOM_MONITOR
# 2323 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_524
AideeBasementIdleTalk_523:
# 2366 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_536
	goto AideeBasementIdleTalk_506

AideeBasementIdleTalk_510:
# 2301 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM_MONITOR
	goto AideeBasementIdleTalk_509

AideeBasementIdleTalk_512:
# 2285 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2286 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2287 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2290 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_478

AideeBasementIdleTalk_514:
# 2251 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_145
# 2253 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TOGEPI
# 2254 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2255 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2256 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2257 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2258 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2259 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2260 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2261 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2262 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2263 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2264 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2265 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2266 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2267 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2268 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2270 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_146
# 2272 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2273 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_495

AideeBasementIdleTalk_518:
# 2120 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TAMARAKKU
	goto AideeBasementIdleTalk_517

AideeBasementIdleTalk_521:
# 2378 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MIMIYURUI
# 2379 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_534
AideeBasementIdleTalk_533:
# 2420 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_547
	goto AideeBasementIdleTalk_520

AideeBasementIdleTalk_524:
# 2326 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2327 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2328 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_147
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_538
# 2357 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2358 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2361 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_523

AideeBasementIdleTalk_527:
# 2303 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_526

AideeBasementIdleTalk_529:
# 2122 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_439

AideeBasementIdleTalk_531:
# 2434 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARABBIT
# 2435 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_545
AideeBasementIdleTalk_544:
# 2444 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_555
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_534:
# 2382 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2383 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2384 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_150
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_549
# 2413 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2414 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
# 2417 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_533

AideeBasementIdleTalk_536:
# 2367 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2368 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2369 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2372 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_506

AideeBasementIdleTalk_538:
# 2332 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_148
# 2334 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ROTOM
# 2335 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2336 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2337 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2338 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2339 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2340 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2341 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2342 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2343 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2344 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2345 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2346 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2347 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2348 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2349 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2351 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_149
# 2353 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2354 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_523

AideeBasementIdleTalk_542:
# 2307 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MIMIYURUI
	goto AideeBasementIdleTalk_541

AideeBasementIdleTalk_545:
# 2437 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_153
# 2441 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_544

AideeBasementIdleTalk_547:
# 2421 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2422 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2423 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2426 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_520

AideeBasementIdleTalk_549:
# 2388 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_151
# 2390 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MIMIKYU
# 2391 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2392 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2393 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2394 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2395 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2396 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2397 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2398 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2399 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2400 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2401 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2402 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2403 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2404 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2405 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2407 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_152
# 2409 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 2410 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_533

AideeBasementIdleTalk_553:
# 2309 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_552

AideeBasementIdleTalk_555:
# 2445 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2446 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2447 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_79
# 2450 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_558:
# 2313 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_WARABBIT
	goto AideeBasementIdleTalk_557

AideeBasementIdleTalk_560:
# 2315 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_492


	.align 2
# 2467 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials0:
# 2468 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
	.2byte ITEM_NONE

	.align 2
# 2472 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials1:
# 2473 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2474 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
	.2byte ITEM_NONE

TradeSafemonCode::
	return


CancelTradeSafemonSelection::
# 2487 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 2488 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2489 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox CancelTradeSafemonSelection_Text_0
# 2491 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


SelectedIncorrectTradeSafemon::
# 2495 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 2496 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2497 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2498 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox SelectedIncorrectTradeSafemon_Text_0
# 2500 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 2501 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


CheerorbBasementIdleTalk::
# 2505 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 2506 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 2507 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 2508 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


# 129 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_0:
# 129 "data/maps/LittlerootLabBasement/scripts.pory"
	face_right
# 129 "data/maps/LittlerootLabBasement/scripts.pory"
	emote_exclamation_mark
	step_end

# 134 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_1:
# 134 "data/maps/LittlerootLabBasement/scripts.pory"
	jump_down
	step_end

# 147 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_2:
# 147 "data/maps/LittlerootLabBasement/scripts.pory"
	face_right
	step_end

# 149 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_3:
# 149 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

# 174 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow1_Movement_0:
# 174 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 174 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 174 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 174 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

# 193 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow2_Movement_0:
# 193 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 193 "data/maps/LittlerootLabBasement/scripts.pory"
	face_right
	step_end

# 197 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow2_Movement_1:
# 197 "data/maps/LittlerootLabBasement/scripts.pory"
	face_up
	step_end

# 207 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow3_Movement_0:
# 207 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 207 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

# 223 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_0:
# 223 "data/maps/LittlerootLabBasement/scripts.pory"
	face_player
	step_end

# 257 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_1:
# 257 "data/maps/LittlerootLabBasement/scripts.pory"
	face_left
	step_end

# 330 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_2:
# 330 "data/maps/LittlerootLabBasement/scripts.pory"
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
# 123 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's a radio with a casette inside.$"

AideCasettePlayer_Text_1:
# 125 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Adopt$"

AideCasettePlayer_Text_2:
# 125 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't adopt$"

AideCasettePlayer_Text_3:
# 133 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{PLAYER} - I didn't take you for a\n"
	.string "music fan! I LOVE that so-$"

AideCasettePlayer_Text_4:
# 139 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Jim, are you playing that stupid song\n"
	.string "AGAIN!?$"

AideCasettePlayer_Text_5:
# 143 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ahaha - I'm sorry Professor! It's just\n"
	.string "for a little while!$"

AideCasettePlayer_Text_6:
# 148 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Haah... some people don't have taste for\n"
	.string "music, am I right?$"

AideeBasementUnfollow1_Text_0:
# 173 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ah, here we are!$"

AideeBasementUnfollow1_Text_1:
# 179 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come, {PLAYER}! I'll show you\n"
	.string "something really cool!$"

AideeBasementIdleTalk_Text_0:
# 226 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Behold, the culmination of Professor\n"
	.string "Balsam's and my research...$"

AideeBasementIdleTalk_Text_1:
# 231 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The {COLOR BLUE}UNSAFENER{COLOR DARK_GRAY}! {COLOR LIGHT_GRAY}{SHADOW WHITE}Name in the works...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

AideeBasementIdleTalk_Text_2:
# 237 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Now, I could spend several hours\n"
	.string "elucidating the intricacies of this\l"
	.string "invention...$"

AideeBasementIdleTalk_Text_3:
# 243 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But I think it would be lost on you, so\n"
	.string "I'll just show you instead.$"

AideeBasementIdleTalk_Text_4:
# 248 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "First, we take the appropriate\n"
	.string "{COLOR BLUE}Unsafening Material{COLOR DARK_GRAY} - in this case, the\l"
	.string "{COLOR RED}Voltorb Shard{COLOR DARK_GRAY} you brought...$"

AideeBasementIdleTalk_Text_5:
# 254 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Second, we take the appropriate\n"
	.string "Safemon - in this case, this Cheerorb...$"

AideeBasementIdleTalk_Text_6:
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Chee-cheeeer!$"

AideeBasementIdleTalk_Text_7:
# 266 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Third, we get them both in the same\n"
	.string "Pokéball, and place it over the tray...$"

AideeBasementIdleTalk_Text_8:
# 273 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And last but not least... we press this\n"
	.string "button!$"

AideeBasementIdleTalk_Text_9:
# 286 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Aah... it WORKED! IT FINALLY WORKED!$"

AideeBasementIdleTalk_Text_10:
# 295 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Look, {PLAYER}!$"

AideeBasementIdleTalk_Text_11:
# 305 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vol-voooolt!$"

AideeBasementIdleTalk_Text_12:
# 310 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "We have reverted a Safemon back into a\n"
	.string "regular Pokémon! Isn't it fascinating!?\p"
	.string "Take that, Devon Co. - what you can do,\n"
	.string "we can undo! Bwahaha!$"

AideeBasementIdleTalk_Text_13:
# 315 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So... I don't know how fond are you of\n"
	.string "Voltorbs, after serving in the army...$"

AideeBasementIdleTalk_Text_14:
# 320 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But if you want to adopt this one, I'd\n"
	.string "be happy to obligue. It's thanks to you\l"
	.string "it's a Voltorb again, after all.$"

AideeBasementIdleTalk_Text_15:
# 323 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "What do you say?$"

AideeBasementIdleTalk_Text_16:
# 334 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Volt-Voooolt!$"

AideeBasementIdleTalk_Text_17:
# 338 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey, I think it's happy!$"

AideeBasementIdleTalk_Text_18:
# 349 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Give Voltorb a nickname...?$"

AideeBasementIdleTalk_Text_19:
# 364 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vooolt...$"

AideeBasementIdleTalk_Text_20:
# 369 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Haha... hey, I get it. Voltorbs are\n"
	.string "dangerous!$"

AideeBasementIdleTalk_Text_21:
# 374 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't worry - I'll take good care of it.$"

AideeBasementIdleTalk_Text_22:
# 384 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "At any rate {PLAYER} - if you bring me\n"
	.string "Safemon, and the appropriate\l"
	.string "{COLOR BLUE}Unsafening Materials{COLOR DARK_GRAY}, I can turn them\l"
	.string "back into Pokémon for you.$"

AideeBasementIdleTalk_Text_23:
# 391 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, I almost forgot - here's your ACTUAL\n"
	.string "reward! Should come in handy, if you\l"
	.string "decide to help us!$"

AideeBasementIdleTalk_Text_24:
# 397 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Obtained the DEVONDEX!$"

AideeBasementIdleTalk_Text_25:
# 402 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "This is the Devondex. It will store\n"
	.string "information about Pokémon and Safemon\l"
	.string "native to Hoenn.\p"
	.string "Mind you, it will not register any data\n"
	.string "on the unsafened Pokémon you get\l"
	.string "here... since they're not supposed to be\l"
	.string "found in the wild anymore.$"

AideeBasementIdleTalk_Text_26:
# 413 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "However, if you bring me enough Safemon\n"
	.string "to unsafen, perhaps I can study them\l"
	.string "and hack... I mean, upgrade the\l"
	.string "Devondex with their data later on!$"

AideeBasementIdleTalk_Text_27:
# 418 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, one last thing - here's my Devon Nav\n"
	.string "number!$"

AideeBasementIdleTalk_Text_28:
# 422 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Balsam's Aide's number is registered in\n"
	.string "the Devon Nav!$"

AideeBasementIdleTalk_Text_29:
# 432 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Feel free to call if you want to discuss\n"
	.string "your Devon Dex progress. I'll even throw\l"
	.string "a tip or two while we're at it!$"

AideeBasementIdleTalk_Text_30:
# 436 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But that's enough talk from me. Get out\n"
	.string "there, and start catching!$"

AideeBasementIdleTalk_Text_31:
# 445 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey there, {PLAYER}! What brings you\n"
	.string "here?$"

AideeBasementIdleTalk_Text_32:
# 447 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Unsafen Safemon$"

AideeBasementIdleTalk_Text_33:
# 448 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Unsafening Materials$"

AideeBasementIdleTalk_Text_34:
# 448 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Small talk$"

AideeBasementIdleTalk_Text_35:
# 448 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Secondary effects$"

AideeBasementIdleTalk_Text_36:
# 448 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Nothing$"

AideeBasementIdleTalk_Text_37:
# 456 "data/maps/LittlerootLabBasement/scripts.pory"
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
# 465 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So, with that in mind...$"

AideeBasementIdleTalk_Text_39:
# 473 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Need some Unsafening Materials?$"

AideeBasementIdleTalk_Text_40:
# 486 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come back for more!$"

AideeBasementIdleTalk_Text_41:
# 496 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So, {PLAYER}... what's your stance on\n"
	.string "Devon Corp. and Safemon?$"

AideeBasementIdleTalk_Text_42:
# 498 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I like them$"

AideeBasementIdleTalk_Text_43:
# 498 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I don't like them$"

AideeBasementIdleTalk_Text_44:
# 499 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I'm different$"

AideeBasementIdleTalk_Text_45:
# 504 "data/maps/LittlerootLabBasement/scripts.pory"
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
# 515 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I guess that makes sense, considering\n"
	.string "you're helping us with the Unsafenings!\p"
	.string "It's also a common sentiment, here in\n"
	.string "the so-called 'Rebel Zone'.\p"
	.string "But if you even venture further north,\n"
	.string "closer to Neo Rustboro, now that's a\l"
	.string "different picture!$"

AideeBasementIdleTalk_Text_47:
# 525 "data/maps/LittlerootLabBasement/scripts.pory"
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
# 532 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Anything else?$"

AideeBasementIdleTalk_Text_49:
# 537 "data/maps/LittlerootLabBasement/scripts.pory"
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
# 562 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which Safemon would you like to\n"
	.string "unsafen?$"

AideeBasementIdleTalk_Text_51:
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb$"

AideeBasementIdleTalk_Text_52:
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Bulbasynth$"

AideeBasementIdleTalk_Text_53:
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Smothquil$"

AideeBasementIdleTalk_Text_54:
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Purachu$"

AideeBasementIdleTalk_Text_55:
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A different Safemon$"

AideeBasementIdleTalk_Text_56:
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "None$"

AideeBasementIdleTalk_Text_57:
# 569 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Voltorb Shard{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_58:
# 573 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Cheerorb!$"

AideeBasementIdleTalk_Text_59:
# 593 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Voltorb!$"

AideeBasementIdleTalk_Text_60:
# 600 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Of which you don't have any!\p"
	.string "Luckily for you, I have some in supply\n"
	.string "you can buy!$"

AideeBasementIdleTalk_Text_61:
# 611 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Bulbasynth, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT MATERIAL{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_62:
# 615 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Bulbasynth!$"

AideeBasementIdleTalk_Text_63:
# 634 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Bulbasaur!$"

AideeBasementIdleTalk_Text_64:
# 641 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Of which you don't have any!\p"
	.string "Well, check my stock of Unsafening\n"
	.string "Materials - I might just have it!$"

AideeBasementIdleTalk_Text_65:
# 652 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Smothquil, huh? Well, to unsafen this\n"
	.string "one we'd need some {COLOR RED}Fuel{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_66:
# 656 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Smothquil!$"

AideeBasementIdleTalk_Text_67:
# 675 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Cyndaquil!$"

AideeBasementIdleTalk_Text_68:
# 693 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Purachu, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}LR20 Battery{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_69:
# 697 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Purachu!$"

AideeBasementIdleTalk_Text_70:
# 716 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Pikachu!$"

AideeBasementIdleTalk_Text_71:
# 731 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh please - don't play with my feelings\n"
	.string "like that!$"

AideeBasementIdleTalk_Text_72:
# 758 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Maybe one of these?$"

AideeBasementIdleTalk_Text_73:
# 759 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_1}$"

AideeBasementIdleTalk_Text_74:
# 759 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_2}$"

AideeBasementIdleTalk_Text_75:
# 759 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_3}$"

AideeBasementIdleTalk_Text_76:
# 768 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ninkaburi, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_77:
# 772 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Ninkaburi!$"

AideeBasementIdleTalk_Text_78:
# 791 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Nincada!$"

AideeBasementIdleTalk_Text_79:
# 807 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{PLAYER}, you haven't registered the\n"
	.string "data for this Safemon on your Devon\l"
	.string "Dex!\p"
	.string "I need that data to figure out how to\n"
	.string "Unsafen it - sorry!$"

AideeBasementIdleTalk_Text_80:
# 821 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Shiitako, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_81:
# 825 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Shiitako!$"

AideeBasementIdleTalk_Text_82:
# 844 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Shroomish!$"

AideeBasementIdleTalk_Text_83:
# 876 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Poochain, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_84:
# 880 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Poochain!$"

AideeBasementIdleTalk_Text_85:
# 899 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Poochyena!$"

AideeBasementIdleTalk_Text_86:
# 953 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "What about one of these?$"

AideeBasementIdleTalk_Text_87:
# 963 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Fooming, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_88:
# 967 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Fooming!$"

AideeBasementIdleTalk_Text_89:
# 986 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Koffing!$"

AideeBasementIdleTalk_Text_90:
# 1018 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Geoslug, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_91:
# 1022 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Geoslug!$"

AideeBasementIdleTalk_Text_92:
# 1041 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Slugma!$"

AideeBasementIdleTalk_Text_93:
# 1074 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Nidoran Intersex, huh? Well, to unsafen\n"
	.string "this one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_94:
# 1078 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Nidoran!$"

AideeBasementIdleTalk_Text_95:
# 1103 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Nidoran!$"

AideeBasementIdleTalk_Text_96:
# 1168 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Mudder, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_97:
# 1172 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Mudder!$"

AideeBasementIdleTalk_Text_98:
# 1191 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Grimer!$"

AideeBasementIdleTalk_Text_99:
# 1224 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Loadtad, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_100:
# 1228 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Loadtad!$"

AideeBasementIdleTalk_Text_101:
# 1247 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Lotad!$"

AideeBasementIdleTalk_Text_102:
# 1280 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Helipip, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_103:
# 1303 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Hoppip!$"

AideeBasementIdleTalk_Text_104:
# 1361 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Manchine, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_105:
# 1384 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Machop!$"

AideeBasementIdleTalk_Text_106:
# 1417 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Verdoom, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_107:
# 1421 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Verdoom!$"

AideeBasementIdleTalk_Text_108:
# 1440 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Beldum!$"

AideeBasementIdleTalk_Text_109:
# 1473 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Tumbela, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_110:
# 1477 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Tumbela!$"

AideeBasementIdleTalk_Text_111:
# 1496 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Tangela!$"

AideeBasementIdleTalk_Text_112:
# 1554 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Arystal, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_113:
# 1577 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Aron!$"

AideeBasementIdleTalk_Text_114:
# 1610 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Wartz, huh? Well, to unsafen this one we\n"
	.string "need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_115:
# 1614 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Wartz!$"

AideeBasementIdleTalk_Text_116:
# 1633 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Ralts!$"

AideeBasementIdleTalk_Text_117:
# 1666 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Veriwoodo, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_118:
# 1670 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Veriwoodo!$"

AideeBasementIdleTalk_Text_119:
# 1689 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Sudowoodo!$"

AideeBasementIdleTalk_Text_120:
# 1747 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Gummin, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_121:
# 1751 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Gummin!$"

AideeBasementIdleTalk_Text_122:
# 1770 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Gulpin!$"

AideeBasementIdleTalk_Text_123:
# 1803 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Rolloon, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_124:
# 1807 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Rolloon!$"

AideeBasementIdleTalk_Text_125:
# 1826 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Drifloon!$"

AideeBasementIdleTalk_Text_126:
# 1859 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Trashealed, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_127:
# 1863 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Trashealed!$"

AideeBasementIdleTalk_Text_128:
# 1882 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Trubbish!$"

AideeBasementIdleTalk_Text_129:
# 1942 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Kamoken, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_130:
# 1946 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Kamoken!$"

AideeBasementIdleTalk_Text_131:
# 1965 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Farfetch'd!!$"

AideeBasementIdleTalk_Text_132:
# 1998 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Delibin, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_133:
# 2002 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Delibin!$"

AideeBasementIdleTalk_Text_134:
# 2021 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Delibird!$"

AideeBasementIdleTalk_Text_135:
# 2054 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Douno, huh? Well, to unsafen this one we\n"
	.string "need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_136:
# 2058 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Douno!$"

AideeBasementIdleTalk_Text_137:
# 2077 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Doduo!$"

AideeBasementIdleTalk_Text_138:
# 2135 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Kangaskid, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_139:
# 2139 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Kangaskid!$"

AideeBasementIdleTalk_Text_140:
# 2158 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Kangaskhan!$"

AideeBasementIdleTalk_Text_141:
# 2191 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Gachapod, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_142:
# 2195 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Gachapod!$"

AideeBasementIdleTalk_Text_143:
# 2214 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Ditto!$"

AideeBasementIdleTalk_Text_144:
# 2247 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Tamarakku, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_145:
# 2251 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Tamarakku!$"

AideeBasementIdleTalk_Text_146:
# 2270 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Togepi!$"

AideeBasementIdleTalk_Text_147:
# 2328 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Rotom Monitor, huh? Well, to unsafen\n"
	.string "this one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_148:
# 2332 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Rotom Monitor!$"

AideeBasementIdleTalk_Text_149:
# 2351 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Rotom!$"

AideeBasementIdleTalk_Text_150:
# 2384 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Mimiyurui, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_151:
# 2388 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Mimiyurui!$"

AideeBasementIdleTalk_Text_152:
# 2407 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Mimikyu!$"

AideeBasementIdleTalk_Text_153:
# 2437 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Uuhm, {PLAYER}...? The Unsafener is\n"
	.string "not detecting this one as a Safemon...\p"
	.string "But I've also never seen or heard of a\n"
	.string "Pokémon like this before...\p"
	.string "I think you might just have discovered\n"
	.string "a new species!$"

CancelTradeSafemonSelection_Text_0:
# 2489 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, changed your mind? I guess some\n"
	.string "Safemon have their charm after all.$"

SelectedIncorrectTradeSafemon_Text_0:
# 2498 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, that's not a {STR_VAR_1},\n"
	.string "{PLAYER}! You should do some\l"
	.string "reviewing with that Devondex I gave\l"
	.string "you, haha!$"
