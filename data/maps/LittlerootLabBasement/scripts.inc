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
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideMedicineDispenserScript_Text_1, AideMedicineDispenserScript_Text_2, AideMedicineDispenserScript_Text_3
# 41 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideMedicineDispenserScript_2
AideMedicineDispenserScript_1:
# 42 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideMedicineDispenserScript_5
AideMedicineDispenserScript_4:
# 100 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideMedicineDispenserScript_8
AideMedicineDispenserScript_7:
# 102 "data/maps/LittlerootLabBasement/scripts.pory"
endofmedicinedispenser:
# 103 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

AideMedicineDispenserScript_2:
# 41 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMedicineDispenser
	goto AideMedicineDispenserScript_1

AideMedicineDispenserScript_5:
# 44 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_NORMAL
# 45 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideMedicineDispenserScript_Text_4
# 46 "data/maps/LittlerootLabBasement/scripts.pory"
	showmoneybox 18, 0
# 47 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, AideMedicineDispenserScript_Text_5, AideMedicineDispenserScript_Text_3
# 49 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideMedicineDispenserScript_11
AideMedicineDispenserScript_10:
# 71 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideMedicineDispenserScript_14
AideMedicineDispenserScript_13:
# 74 "data/maps/LittlerootLabBasement/scripts.pory"
proceedtohypertrain:
# 75 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideMedicineDispenserScript_Text_7
# 76 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, AideMedicineDispenserScript_Text_8, AideMedicineDispenserScript_Text_9, AideMedicineDispenserScript_Text_10, AideMedicineDispenserScript_Text_11, AideMedicineDispenserScript_Text_12, AideMedicineDispenserScript_Text_13
# 83 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideMedicineDispenserScript_20
AideMedicineDispenserScript_19:
# 84 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideMedicineDispenserScript_25
AideMedicineDispenserScript_24:
# 85 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideMedicineDispenserScript_28
AideMedicineDispenserScript_27:
# 86 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideMedicineDispenserScript_31
AideMedicineDispenserScript_30:
# 87 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideMedicineDispenserScript_34
AideMedicineDispenserScript_33:
# 88 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq AideMedicineDispenserScript_37
AideMedicineDispenserScript_36:
# 89 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq AideMedicineDispenserScript_40
AideMedicineDispenserScript_39:
# 92 "data/maps/LittlerootLabBasement/scripts.pory"
	closemessage
# 93 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_USE_ITEM
# 94 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 95 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 2
# 96 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_NORMAL
# 97 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideMedicineDispenserScript_Text_14
	goto AideMedicineDispenserScript_4

AideMedicineDispenserScript_8:
# 100 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideMedicineDispenserScript_7

AideMedicineDispenserScript_11:
# 50 "data/maps/LittlerootLabBasement/scripts.pory"
	checkmoney 500
# 51 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideMedicineDispenserScript_17
AideMedicineDispenserScript_16:
# 63 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideMedicineDispenserScript_22
	goto AideMedicineDispenserScript_10

AideMedicineDispenserScript_14:
# 71 "data/maps/LittlerootLabBasement/scripts.pory"
	release
# 72 "data/maps/LittlerootLabBasement/scripts.pory"
	goto endofmedicinedispenser
	goto AideMedicineDispenserScript_13

AideMedicineDispenserScript_17:
# 52 "data/maps/LittlerootLabBasement/scripts.pory"
	removemoney 500
# 53 "data/maps/LittlerootLabBasement/scripts.pory"
	updatemoneybox
# 54 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_SHOP
# 55 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 56 "data/maps/LittlerootLabBasement/scripts.pory"
	hidemoneybox
# 57 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 2, 7, 4
# 58 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 2, AideMedicineDispenserScript_Movement_0
# 59 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_BAG_POCKET
# 60 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 61 "data/maps/LittlerootLabBasement/scripts.pory"
	goto proceedtohypertrain
	goto AideMedicineDispenserScript_16

AideMedicineDispenserScript_20:
# 83 "data/maps/LittlerootLabBasement/scripts.pory"
	hypertrain 0, 0
	goto AideMedicineDispenserScript_19

AideMedicineDispenserScript_22:
# 64 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_NORMAL
# 65 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideMedicineDispenserScript_Text_6
# 66 "data/maps/LittlerootLabBasement/scripts.pory"
	goto endofmedicinedispenser
	goto AideMedicineDispenserScript_10

AideMedicineDispenserScript_25:
# 84 "data/maps/LittlerootLabBasement/scripts.pory"
	hypertrain 1, 0
	goto AideMedicineDispenserScript_24

AideMedicineDispenserScript_28:
# 85 "data/maps/LittlerootLabBasement/scripts.pory"
	hypertrain 2, 0
	goto AideMedicineDispenserScript_27

AideMedicineDispenserScript_31:
# 86 "data/maps/LittlerootLabBasement/scripts.pory"
	hypertrain 3, 0
	goto AideMedicineDispenserScript_30

AideMedicineDispenserScript_34:
# 87 "data/maps/LittlerootLabBasement/scripts.pory"
	hypertrain 4, 0
	goto AideMedicineDispenserScript_33

AideMedicineDispenserScript_37:
# 88 "data/maps/LittlerootLabBasement/scripts.pory"
	hypertrain 5, 0
	goto AideMedicineDispenserScript_36

AideMedicineDispenserScript_40:
# 89 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideMedicineDispenserScript_39


LabBasementUnsafener::
# 109 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 120 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementUnsafener_Text_0
# 122 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


LabBasementBlueprints::
# 126 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 127 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementBlueprints_2
# 132 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBlueprints_Text_1
LabBasementBlueprints_1:
# 134 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBlueprints_Text_2
# 139 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementBlueprints_2:
# 129 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementBlueprints_Text_0
	goto LabBasementBlueprints_1


LabBasementFaceWallCabinet::
# 143 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 144 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementFaceWallCabinet_Text_0
# 145 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return


LabBasementCavity::
# 149 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 150 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementCavity_2
# 156 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCavity_Text_1
LabBasementCavity_1:
# 157 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementCavity_2:
# 153 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCavity_Text_0
	goto LabBasementCavity_1


LabBasementCoolingTerminal::
# 161 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 162 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, LabBasementCoolingTerminal_2
# 168 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCoolingTerminal_Text_1
LabBasementCoolingTerminal_1:
# 169 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	return

LabBasementCoolingTerminal_2:
# 165 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox LabBasementCoolingTerminal_Text_0
	goto LabBasementCoolingTerminal_1


	.align 2
# 172 "data/maps/LittlerootLabBasement/scripts.pory"
AideMedicineDispenser:
# 173 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 174 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 175 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_PROTEIN
# 176 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_IRON
# 177 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CALCIUM
# 178 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ZINC
# 179 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CARBOS
# 180 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_PP_UP
# 181 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 182 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 183 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 184 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CALM_MINT
# 185 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 186 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 187 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 188 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 189 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 190 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_LAX_MINT
# 191 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 192 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MILD_MINT
# 193 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 194 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 195 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 196 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 197 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_RASH_MINT
# 198 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 199 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE

AideCasettePlayer::
# 203 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 204 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_0
# 206 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, AideCasettePlayer_Text_1, AideCasettePlayer_Text_2
# 207 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideCasettePlayer_2
AideCasettePlayer_1:
# 239 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideCasettePlayer_5
AideCasettePlayer_4:
# 240 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

AideCasettePlayer_2:
# 208 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_RENBOUPARTY, TRUE
# 209 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Aideearrivestobasement, AideCasettePlayer_8
AideCasettePlayer_7:
# 236 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideCasettePlayer_1

AideCasettePlayer_5:
# 239 "data/maps/LittlerootLabBasement/scripts.pory"
	release
	goto AideCasettePlayer_4

AideCasettePlayer_8:
# 210 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_0
# 211 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_PIN
# 212 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 213 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 214 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_3
# 215 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_1
# 217 "data/maps/LittlerootLabBasement/scripts.pory"
	call BalsamYellShake
# 218 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_BALSAM, EMOTE_ANGRY
# 219 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_BALSAM ]
# 220 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_4
# 222 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 223 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_5
# 226 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 227 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 228 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 229 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideCasettePlayer_Text_6
# 230 "data/maps/LittlerootLabBasement/scripts.pory"
	closemessage
# 231 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 232 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_3
# 233 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement 1
	goto AideCasettePlayer_7


BalsamYellShake::
# 245 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8004, 2
# 246 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8005, 6
# 247 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8006, 4
# 248 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8007, 4
# 249 "data/maps/LittlerootLabBasement/scripts.pory"
	special ShakeCamera
	return


AideeBasementUnfollow1::
# 254 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 255 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 256 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 257 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 258 "data/maps/LittlerootLabBasement/scripts.pory"
	closemessage
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow1_Movement_0
# 260 "data/maps/LittlerootLabBasement/scripts.pory"
Aidebymachine:
# 261 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 262 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AideeBasementUnfollow1_Movement_1
# 263 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 264 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 265 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_1
# 266 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 267 "data/maps/LittlerootLabBasement/scripts.pory"
	destroyfollowernpc
# 268 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject LOCALID_AIDEEBASEMENT
# 269 "data/maps/LittlerootLabBasement/scripts.pory"
	clearflag Aideearrivestobasement
# 270 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_LITTLEROOT_PHASE, 7
# 271 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


AideeBasementUnfollow2::
# 275 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 276 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 277 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 278 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 279 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AideeBasementUnfollow2_Movement_0
# 280 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 281 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow1_Movement_0
# 282 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 283 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AideeBasementUnfollow2_Movement_1
# 284 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementUnfollow3::
# 289 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 290 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 291 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 292 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 294 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementUnfollow4::
# 298 "data/maps/LittlerootLabBasement/scripts.pory"
	lockall
# 299 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 300 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 301 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementUnfollow1_Text_0
# 302 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AideeBasementUnfollow3_Movement_0
# 303 "data/maps/LittlerootLabBasement/scripts.pory"
	goto Aidebymachine
	return


AideeBasementIdleTalk::
# 307 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 308 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 309 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafeningtutodone, AideeBasementIdleTalk_2
AideeBasementIdleTalk_1:
# 533 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_set Unsafeningtutodone, AideeBasementIdleTalk_4
	return

AideeBasementIdleTalk_2:
# 310 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 311 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 312 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 313 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_0
# 315 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 316 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 317 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 318 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_1
# 321 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 322 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 323 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 324 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_2
# 327 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 328 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 329 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 330 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_3
# 332 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 333 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 334 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 335 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_4
# 338 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 340 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 341 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_5
# 342 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 343 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 344 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 4, AideeBasementIdleTalk_Movement_1
# 345 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 346 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 347 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 4
# 348 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 349 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 350 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementUnfollow2_Movement_1
# 351 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 352 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 353 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_7
# 355 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 2
# 356 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 2, 10, 4
# 357 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_BAG_POCKET
# 358 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 359 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 360 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_8
# 361 "data/maps/LittlerootLabBasement/scripts.pory"
	closemessage
# 362 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 363 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_POKENAV_ON
# 364 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 365 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeoutbgm 2
# 366 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_ELEVATOR
# 367 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_TO_WHITE
# 368 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 369 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_SAVE
# 370 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 371 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 372 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 373 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_9
# 375 "data/maps/LittlerootLabBasement/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 376 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeinbgm 2
# 377 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 378 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 379 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 380 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 2
# 381 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 382 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_10
# 383 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 384 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 386 "data/maps/LittlerootLabBasement/scripts.pory"
	addobject 5
# 387 "data/maps/LittlerootLabBasement/scripts.pory"
	setobjectxy 5, 11, 6
# 388 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 389 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 390 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_NORMAL
# 391 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideeBasementIdleTalk_Movement_1
# 392 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_11
# 394 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 395 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 396 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 397 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_12
# 399 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 400 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 401 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 403 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_13
# 405 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 406 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 407 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 408 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_14
# 410 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 411 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_15
# 412 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_16, AideeBasementIdleTalk_Text_17
# 413 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmessage
# 415 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_7
AideeBasementIdleTalk_6:
# 445 "data/maps/LittlerootLabBasement/scripts.pory"
dontwantvoltorb:
# 446 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_13
AideeBasementIdleTalk_12:
# 467 "data/maps/LittlerootLabBasement/scripts.pory"
nicknamedvoltorb:
# 468 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 469 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 470 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 471 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 472 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_24
# 476 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 477 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 478 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 479 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_25
# 482 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 483 "data/maps/LittlerootLabBasement/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 484 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 485 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_26
# 486 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 488 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 489 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 490 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_27
# 493 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_BULBASYNTH
# 494 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_SMOTHQUIL
# 495 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_PIKACHU_SAFE
# 496 "data/maps/LittlerootLabBasement/scripts.pory"
	setseenmon SPECIES_MIMIYURUI
# 498 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 499 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 500 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 501 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_28
# 504 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 505 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 506 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_29
# 507 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 509 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 510 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_REGISTER_MATCH_CALL, TRUE
# 511 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_30
# 516 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 517 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 518 "data/maps/LittlerootLabBasement/scripts.pory"
	fadeoutbgm 1
# 519 "data/maps/LittlerootLabBasement/scripts.pory"
	fadenewbgm 1
# 520 "data/maps/LittlerootLabBasement/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 521 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 522 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 523 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_31
# 525 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 526 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 527 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_32
# 528 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 529 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag Unsafeningtutodone
# 530 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishunsafentutorial
	goto AideeBasementIdleTalk_1

AideeBasementIdleTalk_4:
# 534 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 535 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 536 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_33
# 537 "data/maps/LittlerootLabBasement/scripts.pory"
aidechoices:
# 538 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_34, AideeBasementIdleTalk_Text_35, AideeBasementIdleTalk_Text_36, AideeBasementIdleTalk_Text_37, AideeBasementIdleTalk_Text_38
# 543 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_10
AideeBasementIdleTalk_9:
# 594 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_19
AideeBasementIdleTalk_18:
# 640 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_29
AideeBasementIdleTalk_28:
# 663 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_38
AideeBasementIdleTalk_37:
# 670 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_46
	return

AideeBasementIdleTalk_7:
# 416 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 417 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 418 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 5, AideCasettePlayer_Movement_1
# 419 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 420 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 421 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_HIGH_PITCH
# 422 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_18
# 424 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 425 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 426 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_19
# 427 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 428 "data/maps/LittlerootLabBasement/scripts.pory"
	waitse
# 429 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
# 430 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 433 "data/maps/LittlerootLabBasement/scripts.pory"
	givemon SPECIES_VOLTORB, 3
# 434 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AideeBasementIdleTalk_16
AideeBasementIdleTalk_15:
# 442 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AideeBasementIdleTalk_24
	goto AideeBasementIdleTalk_6

AideeBasementIdleTalk_10:
# 544 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 545 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 546 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_unset Unsafenmaterialtutodone, AideeBasementIdleTalk_21
# 561 "data/maps/LittlerootLabBasement/scripts.pory"
afterunsafenmaterialtuto:
# 562 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 563 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 564 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_41
# 566 "data/maps/LittlerootLabBasement/scripts.pory"
	GetGameStat GAME_STAT_RODE_CABLE_CAR
# 567 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 568 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_35
AideeBasementIdleTalk_34:
# 571 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ge AideeBasementIdleTalk_44
AideeBasementIdleTalk_43:
# 574 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_ge AideeBasementIdleTalk_52
AideeBasementIdleTalk_51:
# 577 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_ge AideeBasementIdleTalk_58
AideeBasementIdleTalk_57:
# 580 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_ge AideeBasementIdleTalk_67
AideeBasementIdleTalk_66:
# 583 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_ge AideeBasementIdleTalk_76
AideeBasementIdleTalk_75:
# 587 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 588 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 589 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_42
# 590 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_9

AideeBasementIdleTalk_13:
# 447 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 448 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 449 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 450 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement
# 451 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_WEAK
# 452 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_21
# 454 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 455 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 456 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 457 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_22
# 458 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 459 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 460 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 461 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideCasettePlayer_Movement_2
# 462 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_23
# 463 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_BALL_OPEN
# 464 "data/maps/LittlerootLabBasement/scripts.pory"
	removeobject 5
	goto AideeBasementIdleTalk_12

AideeBasementIdleTalk_16:
# 435 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker NULL
# 436 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 437 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_20, MSGBOX_YESNO
# 438 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AideeBasementIdleTalk_26
	goto AideeBasementIdleTalk_15

AideeBasementIdleTalk_19:
# 597 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 598 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_43
# 601 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_44, AideeBasementIdleTalk_Text_45, AideeBasementIdleTalk_Text_46
# 604 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_32
AideeBasementIdleTalk_31:
# 615 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_41
AideeBasementIdleTalk_40:
# 626 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_49
AideeBasementIdleTalk_48:
# 635 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 636 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_50
# 637 "data/maps/LittlerootLabBasement/scripts.pory"
	goto aidechoices
	goto AideeBasementIdleTalk_18

AideeBasementIdleTalk_21:
# 547 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_39
# 554 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_NORMAL
# 555 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 556 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_40
# 557 "data/maps/LittlerootLabBasement/scripts.pory"
	setflag Unsafenmaterialtutodone
# 558 "data/maps/LittlerootLabBasement/scripts.pory"
	goto afterunsafenmaterialtuto
	goto AideeBasementIdleTalk_9

AideeBasementIdleTalk_24:
# 443 "data/maps/LittlerootLabBasement/scripts.pory"
	goto dontwantvoltorb
	goto AideeBasementIdleTalk_6

AideeBasementIdleTalk_26:
# 439 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 440 "data/maps/LittlerootLabBasement/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 441 "data/maps/LittlerootLabBasement/scripts.pory"
	goto nicknamedvoltorb
	goto AideeBasementIdleTalk_15

AideeBasementIdleTalk_29:
# 641 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 642 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_51
# 648 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_1
# 649 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 650 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_52
# 651 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideeBasementIdleTalk_Movement_0
# 652 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 653 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_53
# 658 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_50
# 659 "data/maps/LittlerootLabBasement/scripts.pory"
	goto aidechoices
	goto AideeBasementIdleTalk_28

AideeBasementIdleTalk_32:
# 605 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 606 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 607 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_47
	goto AideeBasementIdleTalk_31

AideeBasementIdleTalk_35:
# 569 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials0
	goto AideeBasementIdleTalk_34

AideeBasementIdleTalk_38:
# 664 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_37

AideeBasementIdleTalk_41:
# 616 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 617 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 618 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_48
	goto AideeBasementIdleTalk_40

AideeBasementIdleTalk_44:
# 572 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials1
	goto AideeBasementIdleTalk_43

AideeBasementIdleTalk_46:
# 671 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 672 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 673 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_54
# 674 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_55, AideeBasementIdleTalk_Text_56, AideeBasementIdleTalk_Text_57, AideeBasementIdleTalk_Text_58, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 677 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_55
AideeBasementIdleTalk_54:
# 719 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_61
AideeBasementIdleTalk_60:
# 760 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_70
AideeBasementIdleTalk_69:
# 801 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_79
AideeBasementIdleTalk_78:
# 840 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq AideeBasementIdleTalk_85
AideeBasementIdleTalk_84:
# 848 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_91
AideeBasementIdleTalk_90:
# 2586 "data/maps/LittlerootLabBasement/scripts.pory"
finishunsafentutorial:
# 2587 "data/maps/LittlerootLabBasement/scripts.pory"
finishsafemontradescript:
# 2588 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 1, AideMedicineDispenserScript_Movement_0
# 2589 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 2590 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return

AideeBasementIdleTalk_49:
# 627 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 628 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 629 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_49
	goto AideeBasementIdleTalk_48

AideeBasementIdleTalk_52:
# 575 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials2
	goto AideeBasementIdleTalk_51

AideeBasementIdleTalk_55:
# 678 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 679 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 680 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_61
	checkitem ITEM_COMET_SHARD
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_63
# 710 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 711 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_64
	goto AideeBasementIdleTalk_54

AideeBasementIdleTalk_58:
# 578 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials3
	goto AideeBasementIdleTalk_57

AideeBasementIdleTalk_61:
# 720 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 721 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 722 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_65
	checkitem ITEM_MIRACLE_SEED
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_72
# 751 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 752 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
	goto AideeBasementIdleTalk_60

AideeBasementIdleTalk_63:
# 684 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_62
# 686 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_VOLTORB
# 689 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 690 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 691 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 692 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 693 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 694 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 695 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 696 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 697 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 698 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 699 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 700 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 701 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 702 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 703 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 704 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_63
# 706 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_COMET_SHARD, 1
# 707 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_54

AideeBasementIdleTalk_67:
# 581 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials4
	goto AideeBasementIdleTalk_66

AideeBasementIdleTalk_70:
# 761 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 762 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 763 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_69
	checkitem ITEM_FLAME_ORB
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_81
# 792 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 793 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
	goto AideeBasementIdleTalk_69

AideeBasementIdleTalk_72:
# 726 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_66
# 728 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BULBASAUR
# 729 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 730 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 731 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 732 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 733 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 734 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 735 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 736 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 737 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 738 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 739 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 740 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 741 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 742 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 743 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 745 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_67
# 747 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MIRACLE_SEED, 1
# 748 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_60

AideeBasementIdleTalk_76:
# 584 "data/maps/LittlerootLabBasement/scripts.pory"
	pokemart AideMaterials5
	goto AideeBasementIdleTalk_75

AideeBasementIdleTalk_79:
# 802 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 803 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 804 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_72
	checkitem ITEM_MAGNET
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_87
# 833 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 834 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_81:
# 767 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_70
# 769 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_CYNDAQUIL
# 770 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 771 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 772 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 773 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 774 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 775 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 776 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 777 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 778 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 779 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 780 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 781 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 782 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 783 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 784 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 786 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_71
# 788 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_FLAME_ORB, 1
# 789 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_69

AideeBasementIdleTalk_85:
# 841 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 842 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_75
# 843 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_84

AideeBasementIdleTalk_87:
# 808 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_73
# 810 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PIKACHU
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
	msgbox AideeBasementIdleTalk_Text_74
# 829 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MAGNET, 1
# 830 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_78

AideeBasementIdleTalk_91:
# 849 "data/maps/LittlerootLabBasement/scripts.pory"
secondsafemonlistreturn:
# 850 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NINKABURI
# 851 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_94
AideeBasementIdleTalk_93:
# 853 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_97
AideeBasementIdleTalk_96:
# 856 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_SHIITAKO
# 857 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_100
AideeBasementIdleTalk_99:
# 859 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_103
AideeBasementIdleTalk_102:
# 862 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 863 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_106
AideeBasementIdleTalk_105:
# 865 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_109
AideeBasementIdleTalk_108:
# 869 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_76
# 870 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 873 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_112
AideeBasementIdleTalk_111:
# 925 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_115
AideeBasementIdleTalk_114:
# 981 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_121
AideeBasementIdleTalk_120:
# 1036 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_132
AideeBasementIdleTalk_131:
# 1044 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_143
AideeBasementIdleTalk_142:
# 1065 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1066 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1068 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_151
AideeBasementIdleTalk_150:
# 1123 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_157
AideeBasementIdleTalk_156:
# 1179 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_166
AideeBasementIdleTalk_165:
# 1240 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AideeBasementIdleTalk_180
AideeBasementIdleTalk_179:
# 1249 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_194
AideeBasementIdleTalk_193:
# 1270 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1271 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1273 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_205
AideeBasementIdleTalk_204:
# 1329 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_217
AideeBasementIdleTalk_216:
# 1385 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_226
AideeBasementIdleTalk_225:
# 1442 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_240
AideeBasementIdleTalk_239:
# 1463 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1464 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1466 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_254
AideeBasementIdleTalk_253:
# 1522 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_268
AideeBasementIdleTalk_267:
# 1578 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_279
AideeBasementIdleTalk_278:
# 1635 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_293
AideeBasementIdleTalk_292:
# 1656 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1657 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1659 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_307
AideeBasementIdleTalk_306:
# 1715 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_321
AideeBasementIdleTalk_320:
# 1772 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_332
AideeBasementIdleTalk_331:
# 1829 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_346
AideeBasementIdleTalk_345:
# 1850 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 1851 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 1853 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_360
AideeBasementIdleTalk_359:
# 1909 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_374
AideeBasementIdleTalk_373:
# 1965 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_385
AideeBasementIdleTalk_384:
# 2024 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_399
AideeBasementIdleTalk_398:
# 2045 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 2046 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 2048 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_413
AideeBasementIdleTalk_412:
# 2100 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_427
AideeBasementIdleTalk_426:
# 2156 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_438
AideeBasementIdleTalk_437:
# 2213 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_449
AideeBasementIdleTalk_448:
# 2234 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 2235 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 2237 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_463
AideeBasementIdleTalk_462:
# 2293 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_477
AideeBasementIdleTalk_476:
# 2349 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_488
AideeBasementIdleTalk_487:
# 2406 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AideeBasementIdleTalk_502
AideeBasementIdleTalk_501:
# 2427 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_90
# 2428 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_77, AideeBasementIdleTalk_Text_78, AideeBasementIdleTalk_Text_79, AideeBasementIdleTalk_Text_59, AideeBasementIdleTalk_Text_60
# 2430 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_516
AideeBasementIdleTalk_515:
# 2486 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_530
AideeBasementIdleTalk_529:
# 2543 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AideeBasementIdleTalk_540
	goto AideeBasementIdleTalk_90

AideeBasementIdleTalk_94:
# 852 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NINKABURI
	goto AideeBasementIdleTalk_93

AideeBasementIdleTalk_97:
# 854 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_96

AideeBasementIdleTalk_100:
# 858 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SHIITAKO
	goto AideeBasementIdleTalk_99

AideeBasementIdleTalk_103:
# 860 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_102

AideeBasementIdleTalk_106:
# 864 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_POOCHAIN
	goto AideeBasementIdleTalk_105

AideeBasementIdleTalk_109:
# 866 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_108

AideeBasementIdleTalk_112:
# 874 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NINKABURI
# 875 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_118
AideeBasementIdleTalk_117:
# 915 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_126
	goto AideeBasementIdleTalk_111

AideeBasementIdleTalk_115:
# 926 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_SHIITAKO
# 927 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_124
AideeBasementIdleTalk_123:
# 970 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_137
	goto AideeBasementIdleTalk_114

AideeBasementIdleTalk_118:
# 877 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 878 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 879 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_80
	checkitem ITEM_HONEY
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_128
# 908 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 909 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 912 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_117

AideeBasementIdleTalk_121:
# 982 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 983 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_135
AideeBasementIdleTalk_134:
# 1026 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_145
	goto AideeBasementIdleTalk_120

AideeBasementIdleTalk_124:
# 930 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 931 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 932 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_84
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_139
# 961 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 962 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 965 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_123

AideeBasementIdleTalk_126:
# 916 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 917 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 918 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 921 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_111

AideeBasementIdleTalk_128:
# 883 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_81
# 885 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NINCADA
# 886 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 887 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 888 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 889 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 890 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 891 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 892 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 893 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 894 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 895 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 896 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 897 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 898 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 899 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 900 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 902 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_82
# 904 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_HONEY, 1
# 905 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_117

AideeBasementIdleTalk_132:
# 1037 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1038 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_75
# 1039 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_131

AideeBasementIdleTalk_135:
# 985 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 986 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 987 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_87
	checkitem ITEM_CHOICE_BAND
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_147
# 1017 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1018 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1021 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_134

AideeBasementIdleTalk_137:
# 971 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 972 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 973 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 976 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_114

AideeBasementIdleTalk_139:
# 936 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_85
# 938 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SHROOMISH
# 939 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 940 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 941 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 942 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 943 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 944 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 945 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 946 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 947 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 948 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 949 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 950 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 951 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 952 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 953 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 955 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_86
# 957 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 958 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_123

AideeBasementIdleTalk_143:
# 1045 "data/maps/LittlerootLabBasement/scripts.pory"
thirdsafemonlistreturn:
# 1046 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_FOOMING
# 1047 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_154
AideeBasementIdleTalk_153:
# 1049 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_163
AideeBasementIdleTalk_162:
# 1052 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GEOSLUG
# 1053 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_177
AideeBasementIdleTalk_176:
# 1055 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_191
AideeBasementIdleTalk_190:
# 1058 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NIDORAN_I
# 1059 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_202
AideeBasementIdleTalk_201:
# 1061 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_214
	goto AideeBasementIdleTalk_142

AideeBasementIdleTalk_145:
# 1027 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1028 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1029 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1032 "data/maps/LittlerootLabBasement/scripts.pory"
	goto secondsafemonlistreturn
	goto AideeBasementIdleTalk_120

AideeBasementIdleTalk_147:
# 992 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_88
# 994 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_POOCHYENA
# 995 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 996 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 997 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 998 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 999 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1000 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1001 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1002 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1003 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1004 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1005 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1006 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1007 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1008 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1009 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1011 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_89
# 1013 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_CHOICE_BAND, 1
# 1014 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_134

AideeBasementIdleTalk_151:
# 1069 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_FOOMING
# 1070 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_160
AideeBasementIdleTalk_159:
# 1113 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_171
	goto AideeBasementIdleTalk_150

AideeBasementIdleTalk_154:
# 1048 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FOOMING
	goto AideeBasementIdleTalk_153

AideeBasementIdleTalk_157:
# 1124 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GEOSLUG
# 1125 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_169
AideeBasementIdleTalk_168:
# 1168 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_185
	goto AideeBasementIdleTalk_156

AideeBasementIdleTalk_160:
# 1073 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1074 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1075 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_91
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_173
# 1104 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1105 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1108 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_159

AideeBasementIdleTalk_163:
# 1050 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_162

AideeBasementIdleTalk_166:
# 1180 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_NIDORAN_I
# 1181 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_183
AideeBasementIdleTalk_182:
# 1230 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_196
	goto AideeBasementIdleTalk_165

AideeBasementIdleTalk_169:
# 1128 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1129 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1130 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_94
	checkitem ITEM_CHARCOAL
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_187
# 1159 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1160 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1163 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_168

AideeBasementIdleTalk_171:
# 1114 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1115 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1116 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1119 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_150

AideeBasementIdleTalk_173:
# 1079 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_92
# 1081 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_KOFFING
# 1082 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1083 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1084 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1085 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1086 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1087 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1088 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1089 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1090 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1091 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1092 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1093 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1094 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1095 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1096 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1098 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_93
# 1100 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1101 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_159

AideeBasementIdleTalk_177:
# 1054 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GEOSLUG
	goto AideeBasementIdleTalk_176

AideeBasementIdleTalk_180:
# 1241 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1242 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_75
# 1243 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_179

AideeBasementIdleTalk_183:
# 1184 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1185 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1186 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_97
	checkitem ITEM_OVAL_CHARM
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_198
# 1221 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1222 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1225 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_182

AideeBasementIdleTalk_185:
# 1169 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1170 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1171 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1174 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_156

AideeBasementIdleTalk_187:
# 1134 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_95
# 1136 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SLUGMA
# 1137 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1138 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1139 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1140 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1141 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1142 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1143 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1144 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1145 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1146 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1147 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1148 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1149 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1150 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1151 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1153 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_96
# 1155 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_CHARCOAL, 1
# 1156 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_168

AideeBasementIdleTalk_191:
# 1056 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_190

AideeBasementIdleTalk_194:
# 1250 "data/maps/LittlerootLabBasement/scripts.pory"
fourthsafemonlistreturn:
# 1251 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MUDDER
# 1252 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_208
AideeBasementIdleTalk_207:
# 1254 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_223
AideeBasementIdleTalk_222:
# 1257 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_LOADTAD
# 1258 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_237
AideeBasementIdleTalk_236:
# 1260 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_251
AideeBasementIdleTalk_250:
# 1263 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1264 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_265
AideeBasementIdleTalk_264:
# 1266 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_276
	goto AideeBasementIdleTalk_193

AideeBasementIdleTalk_196:
# 1231 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1232 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1233 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1236 "data/maps/LittlerootLabBasement/scripts.pory"
	goto thirdsafemonlistreturn
	goto AideeBasementIdleTalk_165

AideeBasementIdleTalk_198:
# 1190 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_98
# 1193 "data/maps/LittlerootLabBasement/scripts.pory"
	random 1
# 1194 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 1195 "data/maps/LittlerootLabBasement/scripts.pory"
	switch VAR_RESULT
# 1196 "data/maps/LittlerootLabBasement/scripts.pory"
	case 0, AideeBasementIdleTalk_212
# 1197 "data/maps/LittlerootLabBasement/scripts.pory"
	case 1, AideeBasementIdleTalk_213
AideeBasementIdleTalk_210:
# 1199 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1200 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1201 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1202 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1203 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1204 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1205 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1206 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1207 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1208 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1209 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1210 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1211 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1212 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1213 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1215 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_99
# 1217 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_OVAL_CHARM, 1
# 1218 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_182

AideeBasementIdleTalk_202:
# 1060 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NIDORAN_I
	goto AideeBasementIdleTalk_201

AideeBasementIdleTalk_205:
# 1274 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MUDDER
# 1275 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_220
AideeBasementIdleTalk_219:
# 1318 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_231
	goto AideeBasementIdleTalk_204

AideeBasementIdleTalk_208:
# 1253 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDDER
	goto AideeBasementIdleTalk_207

AideeBasementIdleTalk_212:
# 1196 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN_M
	goto AideeBasementIdleTalk_210

AideeBasementIdleTalk_213:
# 1197 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN_F
	goto AideeBasementIdleTalk_210

AideeBasementIdleTalk_214:
# 1062 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_142

AideeBasementIdleTalk_217:
# 1330 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_LOADTAD
# 1331 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_229
AideeBasementIdleTalk_228:
# 1372 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_245
	goto AideeBasementIdleTalk_216

AideeBasementIdleTalk_220:
# 1278 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1279 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1280 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_100
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_233
# 1309 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1310 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1313 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_219

AideeBasementIdleTalk_223:
# 1255 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_222

AideeBasementIdleTalk_226:
# 1386 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1387 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_243
AideeBasementIdleTalk_242:
# 1429 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_259
	goto AideeBasementIdleTalk_225

AideeBasementIdleTalk_229:
# 1334 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1335 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1336 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_103
	checkitem ITEM_MIRACLE_SEED
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_247
# 1365 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1366 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1369 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_228

AideeBasementIdleTalk_231:
# 1319 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1320 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1321 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1324 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_204

AideeBasementIdleTalk_233:
# 1284 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_101
# 1286 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GRIMER
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
	msgbox AideeBasementIdleTalk_Text_102
# 1305 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1306 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_219

AideeBasementIdleTalk_237:
# 1259 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LOADTAD
	goto AideeBasementIdleTalk_236

AideeBasementIdleTalk_240:
# 1443 "data/maps/LittlerootLabBasement/scripts.pory"
fifthsafemonlistreturn:
# 1444 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 1445 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_257
AideeBasementIdleTalk_256:
# 1447 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_274
AideeBasementIdleTalk_273:
# 1450 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERDOOM
# 1451 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_290
AideeBasementIdleTalk_289:
# 1453 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_304
AideeBasementIdleTalk_303:
# 1456 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TUMBELA
# 1457 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_318
AideeBasementIdleTalk_317:
# 1459 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_329
	goto AideeBasementIdleTalk_239

AideeBasementIdleTalk_243:
# 1390 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1391 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1392 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_106
	checkitem ITEM_MIRACLE_SEED
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_261
# 1421 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1422 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1425 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_242

AideeBasementIdleTalk_245:
# 1373 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1374 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1375 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1378 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_216

AideeBasementIdleTalk_247:
# 1340 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_104
# 1342 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_LOTAD
# 1343 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1344 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1345 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1346 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1347 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1348 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1349 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1350 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1351 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1352 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1353 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1354 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1355 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1356 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1357 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1359 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_105
# 1361 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MIRACLE_SEED, 1
# 1362 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_228

AideeBasementIdleTalk_251:
# 1261 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_250

AideeBasementIdleTalk_254:
# 1467 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 1468 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_271
AideeBasementIdleTalk_270:
# 1511 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_284
	goto AideeBasementIdleTalk_253

AideeBasementIdleTalk_257:
# 1446 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MANCHINE
	goto AideeBasementIdleTalk_256

AideeBasementIdleTalk_259:
# 1430 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1431 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1432 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1435 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fourthsafemonlistreturn
	goto AideeBasementIdleTalk_225

AideeBasementIdleTalk_261:
# 1396 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_104
# 1398 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HOPPIP
# 1399 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1400 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1401 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1402 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1403 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1404 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1405 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1406 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1407 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1408 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1409 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1410 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1411 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1412 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1413 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1415 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_107
# 1417 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MIRACLE_SEED, 1
# 1418 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_242

AideeBasementIdleTalk_265:
# 1265 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_HELIPIP
	goto AideeBasementIdleTalk_264

AideeBasementIdleTalk_268:
# 1523 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERDOOM
# 1524 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_282
AideeBasementIdleTalk_281:
# 1565 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_298
	goto AideeBasementIdleTalk_267

AideeBasementIdleTalk_271:
# 1471 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1472 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1473 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_108
	checkitem ITEM_METAL_COAT
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_286
# 1502 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1503 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1506 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_270

AideeBasementIdleTalk_274:
# 1448 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_273

AideeBasementIdleTalk_276:
# 1267 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_193

AideeBasementIdleTalk_279:
# 1579 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1580 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_296
AideeBasementIdleTalk_295:
# 1622 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_312
	goto AideeBasementIdleTalk_278

AideeBasementIdleTalk_282:
# 1527 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1528 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1529 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_110
	checkitem ITEM_METAL_COAT
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_300
# 1558 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1559 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1562 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_281

AideeBasementIdleTalk_284:
# 1512 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1513 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1514 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1517 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_253

AideeBasementIdleTalk_286:
# 1477 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_101
# 1479 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MACHOP
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
	msgbox AideeBasementIdleTalk_Text_109
# 1498 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_METAL_COAT, 1
# 1499 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_270

AideeBasementIdleTalk_290:
# 1452 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_VERDOOM
	goto AideeBasementIdleTalk_289

AideeBasementIdleTalk_293:
# 1636 "data/maps/LittlerootLabBasement/scripts.pory"
sixthsafemonlistreturn:
# 1637 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ARYSTAL
# 1638 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_310
AideeBasementIdleTalk_309:
# 1640 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_327
AideeBasementIdleTalk_326:
# 1643 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARTZ
# 1644 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_343
AideeBasementIdleTalk_342:
# 1646 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_357
AideeBasementIdleTalk_356:
# 1649 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_VERIWOODO
# 1650 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_371
AideeBasementIdleTalk_370:
# 1652 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_382
	goto AideeBasementIdleTalk_292

AideeBasementIdleTalk_296:
# 1583 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1584 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1585 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_113
	checkitem ITEM_MYSTIC_WATER
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_314
# 1614 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1615 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1618 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_295

AideeBasementIdleTalk_298:
# 1566 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1567 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1568 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1571 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_267

AideeBasementIdleTalk_300:
# 1533 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_111
# 1535 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BELDUM
# 1536 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1537 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1538 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1539 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1540 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1541 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1542 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1543 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1544 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1545 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1546 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1547 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1548 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1549 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1550 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1552 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_112
# 1554 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_METAL_COAT, 1
# 1555 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_281

AideeBasementIdleTalk_304:
# 1454 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_303

AideeBasementIdleTalk_307:
# 1660 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ARYSTAL
# 1661 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_324
AideeBasementIdleTalk_323:
# 1704 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_337
	goto AideeBasementIdleTalk_306

AideeBasementIdleTalk_310:
# 1639 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARYSTAL
	goto AideeBasementIdleTalk_309

AideeBasementIdleTalk_312:
# 1623 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1624 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1625 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1628 "data/maps/LittlerootLabBasement/scripts.pory"
	goto fifthsafemonlistreturn
	goto AideeBasementIdleTalk_278

AideeBasementIdleTalk_314:
# 1589 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_114
# 1591 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 1592 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1593 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1594 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1595 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1596 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1597 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1598 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1599 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1600 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1601 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1602 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1603 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1604 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1605 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1606 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1608 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_115
# 1610 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_MYSTIC_WATER, 1
# 1611 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_295

AideeBasementIdleTalk_318:
# 1458 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TUMBELA
	goto AideeBasementIdleTalk_317

AideeBasementIdleTalk_321:
# 1716 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARTZ
# 1717 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_335
AideeBasementIdleTalk_334:
# 1759 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_351
	goto AideeBasementIdleTalk_320

AideeBasementIdleTalk_324:
# 1664 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1665 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1666 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_116
	checkitem ITEM_HARD_STONE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_339
# 1695 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1696 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1699 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_323

AideeBasementIdleTalk_327:
# 1641 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_326

AideeBasementIdleTalk_329:
# 1460 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_239

AideeBasementIdleTalk_332:
# 1773 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_HELIPIP
# 1774 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_349
AideeBasementIdleTalk_348:
# 1816 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_365
	goto AideeBasementIdleTalk_331

AideeBasementIdleTalk_335:
# 1720 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1721 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1722 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_118
	checkitem ITEM_TWISTED_SPOON
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_353
# 1752 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1753 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1756 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_334

AideeBasementIdleTalk_337:
# 1705 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1706 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1707 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1710 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_306

AideeBasementIdleTalk_339:
# 1670 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_101
# 1672 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ARON
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
	msgbox AideeBasementIdleTalk_Text_117
# 1691 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_HARD_STONE, 1
# 1692 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_323

AideeBasementIdleTalk_343:
# 1645 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_WARTZ
	goto AideeBasementIdleTalk_342

AideeBasementIdleTalk_346:
# 1830 "data/maps/LittlerootLabBasement/scripts.pory"
seventhsafemonlistreturn:
# 1831 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GUMMIN
# 1832 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_363
AideeBasementIdleTalk_362:
# 1834 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_380
AideeBasementIdleTalk_379:
# 1837 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROLLOON
# 1838 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_396
AideeBasementIdleTalk_395:
# 1840 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_410
AideeBasementIdleTalk_409:
# 1843 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TRASHEAL
# 1844 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_424
AideeBasementIdleTalk_423:
# 1846 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_435
	goto AideeBasementIdleTalk_345

AideeBasementIdleTalk_349:
# 1777 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1778 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1779 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_121
	checkitem ITEM_HARD_STONE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_367
# 1808 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1809 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1812 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_348

AideeBasementIdleTalk_351:
# 1760 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1761 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1762 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1765 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_320

AideeBasementIdleTalk_353:
# 1727 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_119
# 1729 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_RALTS
# 1730 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1731 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1732 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1733 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1734 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1735 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1736 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1737 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1738 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1739 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1740 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1741 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1742 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1743 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1744 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1746 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_120
# 1748 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_TWISTED_SPOON, 1
# 1749 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_334

AideeBasementIdleTalk_357:
# 1647 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_356

AideeBasementIdleTalk_360:
# 1854 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GUMMIN
# 1855 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_377
AideeBasementIdleTalk_376:
# 1898 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_390
	goto AideeBasementIdleTalk_359

AideeBasementIdleTalk_363:
# 1833 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GUMMIN
	goto AideeBasementIdleTalk_362

AideeBasementIdleTalk_365:
# 1817 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1818 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1819 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1822 "data/maps/LittlerootLabBasement/scripts.pory"
	goto sixthsafemonlistreturn
	goto AideeBasementIdleTalk_331

AideeBasementIdleTalk_367:
# 1783 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_122
# 1785 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SUDOWOODO
# 1786 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1787 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1788 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1789 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1790 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1791 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1792 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1793 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1794 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1795 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1796 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1797 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1798 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1799 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1800 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1802 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_123
# 1804 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_HARD_STONE, 1
# 1805 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_348

AideeBasementIdleTalk_371:
# 1651 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_VERIWOODO
	goto AideeBasementIdleTalk_370

AideeBasementIdleTalk_374:
# 1910 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROLLOON
# 1911 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_388
AideeBasementIdleTalk_387:
# 1952 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_404
	goto AideeBasementIdleTalk_373

AideeBasementIdleTalk_377:
# 1858 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1859 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1860 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_124
	checkitem ITEM_BLACK_SLUDGE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_392
# 1889 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1890 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1893 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_376

AideeBasementIdleTalk_380:
# 1835 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_379

AideeBasementIdleTalk_382:
# 1653 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_292

AideeBasementIdleTalk_385:
# 1966 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TRASHEAL
# 1967 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_402
AideeBasementIdleTalk_401:
# 2009 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_418
	goto AideeBasementIdleTalk_384

AideeBasementIdleTalk_388:
# 1914 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1915 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1916 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_127
	checkitem ITEM_AIR_BALLOON
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_406
# 1945 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1946 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 1949 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_387

AideeBasementIdleTalk_390:
# 1899 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1900 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1901 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1904 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_359

AideeBasementIdleTalk_392:
# 1864 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_125
# 1866 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GULPIN
# 1867 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1868 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1869 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1870 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1871 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1872 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1873 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1874 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1875 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1876 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1877 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1878 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1879 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1880 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1881 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1883 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_126
# 1885 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_BLACK_SLUDGE, 1
# 1886 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_376

AideeBasementIdleTalk_396:
# 1839 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ROLLOON
	goto AideeBasementIdleTalk_395

AideeBasementIdleTalk_399:
# 2025 "data/maps/LittlerootLabBasement/scripts.pory"
eighthsafemonlistreturn:
# 2026 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 2027 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_416
AideeBasementIdleTalk_415:
# 2029 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_433
AideeBasementIdleTalk_432:
# 2032 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DELIBIN
# 2033 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_446
AideeBasementIdleTalk_445:
# 2035 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_460
AideeBasementIdleTalk_459:
# 2038 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DOUNO
# 2039 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_474
AideeBasementIdleTalk_473:
# 2041 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_485
	goto AideeBasementIdleTalk_398

AideeBasementIdleTalk_402:
# 1970 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 1971 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1972 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_130
	checkitem ITEM_CHOICE_BAND
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_420
# 2001 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2002 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2005 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_401

AideeBasementIdleTalk_404:
# 1953 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 1954 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1955 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 1958 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_373

AideeBasementIdleTalk_406:
# 1920 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_128
# 1922 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DRIFLOON
# 1923 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1924 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1925 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1926 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1927 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1928 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1929 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1930 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1931 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1932 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1933 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1934 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1935 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1936 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1937 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1939 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_129
# 1941 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_AIR_BALLOON, 1
# 1942 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_387

AideeBasementIdleTalk_410:
# 1841 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_409

AideeBasementIdleTalk_413:
# 2049 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 2050 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_430
AideeBasementIdleTalk_429:
# 2089 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_443
	goto AideeBasementIdleTalk_412

AideeBasementIdleTalk_416:
# 2028 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KAMOKEN
	goto AideeBasementIdleTalk_415

AideeBasementIdleTalk_418:
# 2010 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2011 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2012 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2015 "data/maps/LittlerootLabBasement/scripts.pory"
	goto seventhsafemonlistreturn
	goto AideeBasementIdleTalk_384

AideeBasementIdleTalk_420:
# 1976 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_131
# 1978 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TRUBBISH
# 1979 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1980 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1981 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 1982 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1983 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 1984 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1985 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 1986 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 1987 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1988 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 1989 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 1990 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 1991 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 1992 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 1993 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 1995 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_132
# 1997 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_CHOICE_BAND, 1
# 1998 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_401

AideeBasementIdleTalk_424:
# 1845 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TRASHEAL
	goto AideeBasementIdleTalk_423

AideeBasementIdleTalk_427:
# 2101 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DELIBIN
# 2102 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_441
AideeBasementIdleTalk_440:
# 2143 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_454
	goto AideeBasementIdleTalk_426

AideeBasementIdleTalk_430:
# 2053 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2054 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2055 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_133
# 2057 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2058 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2059 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_134
# 2061 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 2062 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2063 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_135
# 2065 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 2066 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2067 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2068 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2069 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2070 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2071 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2072 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2073 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2074 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2075 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2076 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2077 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2078 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2079 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2080 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2082 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_136
# 2084 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_429

AideeBasementIdleTalk_433:
# 2030 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_432

AideeBasementIdleTalk_435:
# 1847 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_345

AideeBasementIdleTalk_438:
# 2157 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_DOUNO
# 2158 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_452
AideeBasementIdleTalk_451:
# 2200 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_468
	goto AideeBasementIdleTalk_437

AideeBasementIdleTalk_441:
# 2105 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2106 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2107 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_137
	checkitem ITEM_NEVER_MELT_ICE
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_456
# 2136 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2137 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2140 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_440

AideeBasementIdleTalk_443:
# 2090 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2091 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2092 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2095 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_412

AideeBasementIdleTalk_446:
# 2034 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DELIBIN
	goto AideeBasementIdleTalk_445

AideeBasementIdleTalk_449:
# 2214 "data/maps/LittlerootLabBasement/scripts.pory"
ninthsafemonlistreturn:
# 2215 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KANGASKID
# 2216 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_466
AideeBasementIdleTalk_465:
# 2218 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_483
AideeBasementIdleTalk_482:
# 2221 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GACHAPOD
# 2222 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_499
AideeBasementIdleTalk_498:
# 2224 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_513
AideeBasementIdleTalk_512:
# 2227 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TAMARAKKU
# 2228 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_527
AideeBasementIdleTalk_526:
# 2230 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_538
	goto AideeBasementIdleTalk_448

AideeBasementIdleTalk_452:
# 2161 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2162 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2163 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_140
	checkitem ITEM_RARE_CANDY
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_470
# 2192 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2193 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2196 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_451

AideeBasementIdleTalk_454:
# 2144 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2145 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2146 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2149 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_426

AideeBasementIdleTalk_456:
# 2111 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_138
# 2113 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DELIBIRD
# 2114 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2115 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2116 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2117 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2118 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2119 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2120 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2121 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2122 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2123 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2124 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2125 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2126 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2127 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2128 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2130 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_139
# 2132 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_NEVER_MELT_ICE, 1
# 2133 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_440

AideeBasementIdleTalk_460:
# 2036 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_459

AideeBasementIdleTalk_463:
# 2238 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_KANGASKHAN
# 2239 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_480
AideeBasementIdleTalk_479:
# 2282 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_493
	goto AideeBasementIdleTalk_462

AideeBasementIdleTalk_466:
# 2217 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KANGASKID
	goto AideeBasementIdleTalk_465

AideeBasementIdleTalk_468:
# 2201 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2202 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2203 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2206 "data/maps/LittlerootLabBasement/scripts.pory"
	goto eighthsafemonlistreturn
	goto AideeBasementIdleTalk_437

AideeBasementIdleTalk_470:
# 2167 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_141
# 2169 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DODUO
# 2170 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2171 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2172 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2173 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2174 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2175 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2176 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2177 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2178 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2179 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2180 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2181 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2182 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2183 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2184 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2186 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_142
# 2188 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_RARE_CANDY, 1
# 2189 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_451

AideeBasementIdleTalk_474:
# 2040 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_DOUNO
	goto AideeBasementIdleTalk_473

AideeBasementIdleTalk_477:
# 2294 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_GACHAPOD
# 2295 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_491
AideeBasementIdleTalk_490:
# 2336 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_507
	goto AideeBasementIdleTalk_476

AideeBasementIdleTalk_480:
# 2242 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2243 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2244 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_143
	checkitem ITEM_RARE_CANDY
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_495
# 2273 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2274 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2277 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_479

AideeBasementIdleTalk_483:
# 2219 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_482

AideeBasementIdleTalk_485:
# 2042 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_398

AideeBasementIdleTalk_488:
# 2350 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_TAMARAKKU
# 2351 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_505
AideeBasementIdleTalk_504:
# 2393 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_521
	goto AideeBasementIdleTalk_487

AideeBasementIdleTalk_491:
# 2298 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2299 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2300 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_146
	checkitem ITEM_RAZOR_FANG
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_509
# 2329 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2330 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2333 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_490

AideeBasementIdleTalk_493:
# 2283 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2284 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2285 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2288 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_462

AideeBasementIdleTalk_495:
# 2248 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_144
# 2250 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_KANGASKHAN
# 2251 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2252 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2253 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2254 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2255 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2256 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2257 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2258 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2259 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2260 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2261 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2262 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2263 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2264 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2265 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2267 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_145
# 2269 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_RARE_CANDY, 1
# 2270 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_479

AideeBasementIdleTalk_499:
# 2223 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_GACHAPOD
	goto AideeBasementIdleTalk_498

AideeBasementIdleTalk_502:
# 2407 "data/maps/LittlerootLabBasement/scripts.pory"
tenthsafemonlistreturn:
# 2408 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROTOM_MONITOR
# 2409 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_519
AideeBasementIdleTalk_518:
# 2411 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_536
AideeBasementIdleTalk_535:
# 2414 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MIMIYURUI
# 2415 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_551
AideeBasementIdleTalk_550:
# 2417 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_562
AideeBasementIdleTalk_561:
# 2420 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARABBIT
# 2421 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_570
AideeBasementIdleTalk_569:
# 2423 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_575
	goto AideeBasementIdleTalk_501

AideeBasementIdleTalk_505:
# 2354 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2355 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2356 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_149
	checkitem ITEM_RARE_CANDY
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_523
# 2385 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2386 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2389 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_504

AideeBasementIdleTalk_507:
# 2337 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2338 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2339 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2342 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_476

AideeBasementIdleTalk_509:
# 2304 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_147
# 2306 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DITTO
# 2307 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2308 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2309 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2310 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2311 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2312 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2313 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2314 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2315 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2316 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2317 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2318 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2319 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2320 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2321 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2323 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_148
# 2325 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_RAZOR_FANG, 1
# 2326 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_490

AideeBasementIdleTalk_513:
# 2225 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_512

AideeBasementIdleTalk_516:
# 2431 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_ROTOM_MONITOR
# 2432 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_533
AideeBasementIdleTalk_532:
# 2475 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_545
	goto AideeBasementIdleTalk_515

AideeBasementIdleTalk_519:
# 2410 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM_MONITOR
	goto AideeBasementIdleTalk_518

AideeBasementIdleTalk_521:
# 2394 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2395 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2396 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2399 "data/maps/LittlerootLabBasement/scripts.pory"
	goto ninthsafemonlistreturn
	goto AideeBasementIdleTalk_487

AideeBasementIdleTalk_523:
# 2360 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_150
# 2362 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TOGEPI
# 2363 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2364 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2365 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2366 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2367 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2368 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2369 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2370 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2371 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2372 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2373 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2374 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2375 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2376 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2377 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2379 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_151
# 2381 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_RARE_CANDY, 1
# 2382 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_504

AideeBasementIdleTalk_527:
# 2229 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_TAMARAKKU
	goto AideeBasementIdleTalk_526

AideeBasementIdleTalk_530:
# 2487 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_MIMIYURUI
# 2488 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_543
AideeBasementIdleTalk_542:
# 2530 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_556
	goto AideeBasementIdleTalk_529

AideeBasementIdleTalk_533:
# 2435 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2436 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2437 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_152
	checkitem ITEM_METAL_COAT
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_547
# 2466 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2467 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2470 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_532

AideeBasementIdleTalk_536:
# 2412 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto AideeBasementIdleTalk_535

AideeBasementIdleTalk_538:
# 2231 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_448

AideeBasementIdleTalk_540:
# 2544 "data/maps/LittlerootLabBasement/scripts.pory"
	getseenmon SPECIES_WARABBIT
# 2545 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_554
AideeBasementIdleTalk_553:
# 2569 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AideeBasementIdleTalk_564
	goto AideeBasementIdleTalk_90

AideeBasementIdleTalk_543:
# 2491 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_POKEBALL
# 2492 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2493 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_155
	checkdecor DECOR_PURACHU_DOLL
# 0 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AideeBasementIdleTalk_558
# 2523 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2524 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_68
# 2527 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_542

AideeBasementIdleTalk_545:
# 2476 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2477 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2478 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2481 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_515

AideeBasementIdleTalk_547:
# 2441 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_153
# 2443 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ROTOM
# 2444 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2445 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2446 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2447 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2448 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2449 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2450 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2451 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2452 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2453 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2454 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2455 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2456 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2457 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2458 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2460 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_154
# 2462 "data/maps/LittlerootLabBasement/scripts.pory"
	removeitem ITEM_METAL_COAT, 1
# 2463 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_532

AideeBasementIdleTalk_551:
# 2416 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MIMIYURUI
	goto AideeBasementIdleTalk_550

AideeBasementIdleTalk_554:
# 2547 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_158
# 2550 "data/maps/LittlerootLabBasement/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, AideeBasementIdleTalk_Text_159, AideeBasementIdleTalk_Text_160
# 2552 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AideeBasementIdleTalk_567
AideeBasementIdleTalk_566:
# 2563 "data/maps/LittlerootLabBasement/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AideeBasementIdleTalk_573
AideeBasementIdleTalk_572:
# 2566 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_553

AideeBasementIdleTalk_556:
# 2531 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2532 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2533 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2536 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_529

AideeBasementIdleTalk_558:
# 2498 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_156
# 2500 "data/maps/LittlerootLabBasement/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MIMIKYU
# 2501 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2502 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 2503 "data/maps/LittlerootLabBasement/scripts.pory"
	special ChoosePartyMon
# 2504 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2505 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTradeSafemonSelection
# 2506 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 2507 "data/maps/LittlerootLabBasement/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 2508 "data/maps/LittlerootLabBasement/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SelectedIncorrectTradeSafemon
# 2509 "data/maps/LittlerootLabBasement/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 2510 "data/maps/LittlerootLabBasement/scripts.pory"
	special CreateInGameTradePokemon
# 2511 "data/maps/LittlerootLabBasement/scripts.pory"
	special DoInGameTradeScene
# 2512 "data/maps/LittlerootLabBasement/scripts.pory"
	waitstate
# 2513 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2514 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2515 "data/maps/LittlerootLabBasement/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 2517 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_157
# 2519 "data/maps/LittlerootLabBasement/scripts.pory"
	removedecoration DECOR_PURACHU_DOLL
# 2520 "data/maps/LittlerootLabBasement/scripts.pory"
	goto finishsafemontradescript
	goto AideeBasementIdleTalk_542

AideeBasementIdleTalk_562:
# 2418 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto AideeBasementIdleTalk_561

AideeBasementIdleTalk_564:
# 2570 "data/maps/LittlerootLabBasement/scripts.pory"
	playse SE_RG_HELP_ERROR
# 2571 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2572 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_83
# 2575 "data/maps/LittlerootLabBasement/scripts.pory"
	goto tenthsafemonlistreturn
	goto AideeBasementIdleTalk_90

AideeBasementIdleTalk_567:
# 2552 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_161
	goto AideeBasementIdleTalk_566

AideeBasementIdleTalk_570:
# 2422 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_WARABBIT
	goto AideeBasementIdleTalk_569

AideeBasementIdleTalk_573:
# 2564 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_162
	goto AideeBasementIdleTalk_572

AideeBasementIdleTalk_575:
# 2424 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto AideeBasementIdleTalk_501


	.align 2
# 2593 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials0:
# 2594 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2595 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
	.2byte ITEM_NONE

	.align 2
# 2599 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials1:
# 2600 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2601 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2602 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2603 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2604 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_NONE

	.align 2
# 2607 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials2:
# 2608 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2609 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2610 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2611 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2612 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 2613 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHARCOAL
# 2614 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 2615 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_NONE

	.align 2
# 2618 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials3:
# 2619 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2620 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2621 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2622 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2623 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 2624 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHARCOAL
# 2625 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 2626 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 2627 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_METAL_COAT
# 2628 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 2629 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HARD_STONE
	.2byte ITEM_NONE

	.align 2
# 2632 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials4:
# 2633 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2634 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2635 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2636 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2637 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 2638 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHARCOAL
# 2639 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 2640 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 2641 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_METAL_COAT
# 2642 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 2643 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HARD_STONE
# 2644 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 2645 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 2646 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_NONE

	.align 2
# 2649 "data/maps/LittlerootLabBasement/scripts.pory"
AideMaterials5:
# 2650 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 2651 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MAGNET
# 2652 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HONEY
# 2653 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 2654 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 2655 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_CHARCOAL
# 2656 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 2657 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 2658 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_METAL_COAT
# 2659 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 2660 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_HARD_STONE
# 2661 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 2662 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 2663 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 2664 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 2665 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 2666 "data/maps/LittlerootLabBasement/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

CancelTradeSafemonSelection::
# 2672 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_TALK
# 2673 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2674 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox CancelTradeSafemonSelection_Text_0
# 2676 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


SelectedIncorrectTradeSafemon::
# 2680 "data/maps/LittlerootLabBasement/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 2681 "data/maps/LittlerootLabBasement/scripts.pory"
	createfieldmugshot MUGSHOT_AIDEE, EMOTE_HAPPY
# 2682 "data/maps/LittlerootLabBasement/scripts.pory"
	setspeaker [ SP_NAME_AIDEE ]
# 2683 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox SelectedIncorrectTradeSafemon_Text_0
# 2685 "data/maps/LittlerootLabBasement/scripts.pory"
	removefieldmugshot
# 2686 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


CheerorbBasementIdleTalk::
# 2690 "data/maps/LittlerootLabBasement/scripts.pory"
	lock
# 2691 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 4, AideeBasementIdleTalk_Movement_0
# 2692 "data/maps/LittlerootLabBasement/scripts.pory"
	playmoncry SPECIES_CHEERORB, CRY_MODE_NORMAL
# 2693 "data/maps/LittlerootLabBasement/scripts.pory"
	msgbox AideeBasementIdleTalk_Text_6
# 2694 "data/maps/LittlerootLabBasement/scripts.pory"
	applymovement 4, AideCasettePlayer_Movement_3
# 2695 "data/maps/LittlerootLabBasement/scripts.pory"
	waitmovement 4
# 2696 "data/maps/LittlerootLabBasement/scripts.pory"
	releaseall
	return


# 58 "data/maps/LittlerootLabBasement/scripts.pory"
AideMedicineDispenserScript_Movement_0:
# 58 "data/maps/LittlerootLabBasement/scripts.pory"
	face_down
	step_end

# 210 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_0:
# 210 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_right
# 210 "data/maps/LittlerootLabBasement/scripts.pory"
	emote_exclamation_mark
	step_end

# 215 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_1:
# 215 "data/maps/LittlerootLabBasement/scripts.pory"
	jump_in_place_down
	step_end

# 228 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_2:
# 228 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_right
	step_end

# 232 "data/maps/LittlerootLabBasement/scripts.pory"
AideCasettePlayer_Movement_3:
# 232 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_down
	step_end

# 259 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow1_Movement_0:
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 259 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_down
	step_end

# 262 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow1_Movement_1:
# 262 "data/maps/LittlerootLabBasement/scripts.pory"
	face_up
	step_end

# 279 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow2_Movement_0:
# 279 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 279 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_right
	step_end

# 283 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow2_Movement_1:
# 283 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_up
	step_end

# 293 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementUnfollow3_Movement_0:
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_left
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_up
# 293 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_down
	step_end

# 308 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_0:
# 308 "data/maps/LittlerootLabBasement/scripts.pory"
	face_player
	step_end

# 344 "data/maps/LittlerootLabBasement/scripts.pory"
AideeBasementIdleTalk_Movement_1:
# 344 "data/maps/LittlerootLabBasement/scripts.pory"
	walk_in_place_left
	step_end

LabBasementTrashBin_Text_0:
# 10 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Under some discarded motherboards and\n"
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

AideMedicineDispenserScript_Text_1:
# 38 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Buy medicine$"

AideMedicineDispenserScript_Text_2:
# 38 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "IV Enhancer$"

AideMedicineDispenserScript_Text_3:
# 39 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Leave$"

AideMedicineDispenserScript_Text_4:
# 45 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "BZZT... insert 500¥, and leave your lead\n"
	.string "Pokémon on the machine.$"

AideMedicineDispenserScript_Text_5:
# 47 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Follow instructions$"

AideMedicineDispenserScript_Text_6:
# 65 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "BZZT... not enough pokeyen. Cancelling\n"
	.string "operation!$"

AideMedicineDispenserScript_Text_7:
# 75 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "BZZT... Your party lead will now have an\n"
	.string "IV maxed. Select which.$"

AideMedicineDispenserScript_Text_8:
# 77 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "HP$"

AideMedicineDispenserScript_Text_9:
# 78 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Attack$"

AideMedicineDispenserScript_Text_10:
# 79 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Defense$"

AideMedicineDispenserScript_Text_11:
# 80 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Special Attack$"

AideMedicineDispenserScript_Text_12:
# 81 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Special Defense$"

AideMedicineDispenserScript_Text_13:
# 82 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Speed$"

AideMedicineDispenserScript_Text_14:
# 97 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "BZZT... Success! The selected gene has\n"
	.string "been successfully optimized.$"

LabBasementUnsafener_Text_0:
# 120 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's the Unsafener. For some reason, its\n"
	.string "control panel is a Game Boy Advance...$"

LabBasementBlueprints_Text_0:
# 129 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's a very complicated blueprint.$"

LabBasementBlueprints_Text_1:
# 132 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A complicated blueprint for what seems\n"
	.string "like a portable version of the\l"
	.string "Unsafener.$"

LabBasementBlueprints_Text_2:
# 134 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "There's also some notes scribbled on\n"
	.string "the paper...\p"
	.string "EVACUATION PROTOCOL\p"
	.string "1) Code White: Devon in Lab = Car\n"
	.string "Ladder.\p"
	.string "2) Code Brown: Lab surrounded = Tunnel\n"
	.string "exit.\p"
	.string "3) {COLOR RED}Code Red:{COLOR DARK_GRAY} All exits blocked =\n"
	.string "Destroy evidence.$"

LabBasementFaceWallCabinet_Text_0:
# 144 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The cabinet is facing the wall. There's\n"
	.string "no way to open it.$"

LabBasementCavity_Text_0:
# 153 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "There's a cavity under the machine, with\n"
	.string "hundreds of wires going in all\l"
	.string "directions.$"

LabBasementCavity_Text_1:
# 156 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "There's a cavity under the Unsafener,\n"
	.string "with hundreds of wires going in all\l"
	.string "directions.$"

LabBasementCoolingTerminal_Text_0:
# 165 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It seems like a terminal for the\n"
	.string "machine's cooling system.$"

LabBasementCoolingTerminal_Text_1:
# 168 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It seems like a terminal for the\n"
	.string "Unsafener's cooling system.$"

AideCasettePlayer_Text_0:
# 204 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's a radio with a casette inside.$"

AideCasettePlayer_Text_1:
# 206 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Play$"

AideCasettePlayer_Text_2:
# 206 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't play$"

AideCasettePlayer_Text_3:
# 214 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{PLAYER} - I didn't take you for a\n"
	.string "music fan! I LOVE that so-$"

AideCasettePlayer_Text_4:
# 220 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Jim, are you playing that stupid song\n"
	.string "AGAIN!?$"

AideCasettePlayer_Text_5:
# 224 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ahaha - I'm sorry Professor! It's just\n"
	.string "for a little while!$"

AideCasettePlayer_Text_6:
# 229 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Aah... some people don't have taste for\n"
	.string "music, am I right?$"

AideeBasementUnfollow1_Text_0:
# 257 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ah, here we are!$"

AideeBasementUnfollow1_Text_1:
# 265 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come, {PLAYER}! I'll show you\n"
	.string "something really cool!$"

AideeBasementIdleTalk_Text_0:
# 313 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Behold, the culmination of Professor\n"
	.string "Balsam's and my research...$"

AideeBasementIdleTalk_Text_1:
# 318 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "The {COLOR BLUE}UNSAFENER{COLOR DARK_GRAY}! {COLOR LIGHT_GRAY}{SHADOW WHITE}Name in the works...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

AideeBasementIdleTalk_Text_2:
# 324 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Now, I could spend several hours\n"
	.string "elucidating the intricacies of this\l"
	.string "invention...$"

AideeBasementIdleTalk_Text_3:
# 330 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But I think it would be lost on you, so\n"
	.string "I'll just show you instead.$"

AideeBasementIdleTalk_Text_4:
# 335 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "First, we take the appropriate\n"
	.string "{COLOR BLUE}Unsafening Material{COLOR DARK_GRAY} - in this case, the\l"
	.string "{COLOR RED}Voltorb Shard{COLOR DARK_GRAY} you brought...$"

AideeBasementIdleTalk_Text_5:
# 341 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Second, we take the appropriate\n"
	.string "Safemon - in this case, this Cheerorb...$"

AideeBasementIdleTalk_Text_6:
# 346 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Chee-cheeeer!$"

AideeBasementIdleTalk_Text_7:
# 353 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Third, we get them both in the same\n"
	.string "Pokéball, and place it over the tray...$"

AideeBasementIdleTalk_Text_8:
# 360 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And last but not least... we press this\n"
	.string "button!$"

AideeBasementIdleTalk_Text_9:
# 373 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Aah... it WORKED! IT FINALLY WORKED!$"

AideeBasementIdleTalk_Text_10:
# 382 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Look, {PLAYER}!$"

AideeBasementIdleTalk_Text_11:
# 392 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vol-voooolt!$"

AideeBasementIdleTalk_Text_12:
# 397 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "We have reverted a Safemon back into a\n"
	.string "regular Pokémon! Isn't it fascinating!?\p"
	.string "Take that, Devon Co. - what you can do,\n"
	.string "we can undo! Bwahaha!$"

AideeBasementIdleTalk_Text_13:
# 403 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So... I don't know how fond are you of\n"
	.string "Voltorbs, after serving in the army...$"

AideeBasementIdleTalk_Text_14:
# 408 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But if you want to adopt this one, I'd\n"
	.string "be happy to obligue.\p"
	.string "It's thanks to you it's a Voltorb again,\n"
	.string "after all.$"

AideeBasementIdleTalk_Text_15:
# 411 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "What do you say?$"

AideeBasementIdleTalk_Text_16:
# 412 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Adopt$"

AideeBasementIdleTalk_Text_17:
# 412 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't adopt$"

AideeBasementIdleTalk_Text_18:
# 422 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Volt-voooolt!$"

AideeBasementIdleTalk_Text_19:
# 426 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey, I think it's happy!$"

AideeBasementIdleTalk_Text_20:
# 437 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Give Voltorb a nickname...?$"

AideeBasementIdleTalk_Text_21:
# 452 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Vooolt...$"

AideeBasementIdleTalk_Text_22:
# 457 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Haha... hey, I get it. Voltorbs are\n"
	.string "dangerous!$"

AideeBasementIdleTalk_Text_23:
# 462 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Don't worry - I'll take good care of it.$"

AideeBasementIdleTalk_Text_24:
# 472 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "At any rate {PLAYER} - if you bring me\n"
	.string "Safemon, and the appropriate\l"
	.string "{COLOR BLUE}Unsafening Materials{COLOR DARK_GRAY}, I can turn them\l"
	.string "back into Pokémon for you.$"

AideeBasementIdleTalk_Text_25:
# 479 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, I almost forgot - here's your ACTUAL\n"
	.string "reward! Should come in handy, if you\l"
	.string "decide to help us!$"

AideeBasementIdleTalk_Text_26:
# 485 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Obtained the DEVONDEX!$"

AideeBasementIdleTalk_Text_27:
# 490 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "This is the Devondex. It will store\n"
	.string "information about Pokémon and Safemon\l"
	.string "native to Hoenn.\p"
	.string "Mind you, it will not register any data\n"
	.string "on the unsafened Pokémon you get\l"
	.string "here...\p"
	.string "Since they're not supposed to be found\n"
	.string "anywhere anymore.$"

AideeBasementIdleTalk_Text_28:
# 501 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "However, if you bring me enough Safemon\n"
	.string "to unsafen, perhaps I can study them\l"
	.string "and hack... I mean, upgrade the\l"
	.string "Devondex with their data later on!$"

AideeBasementIdleTalk_Text_29:
# 506 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, one last thing - here's my Devonav\n"
	.string "number!$"

AideeBasementIdleTalk_Text_30:
# 511 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Balsam's Aide's number is registered in\n"
	.string "the Devonav!$"

AideeBasementIdleTalk_Text_31:
# 523 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Feel free to call if you want to discuss\n"
	.string "your Devon Dex progress. I'll even throw\l"
	.string "a catching tip or two while we're at it!$"

AideeBasementIdleTalk_Text_32:
# 527 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "But that's enough talk from me. Get out\n"
	.string "there, and start catching!$"

AideeBasementIdleTalk_Text_33:
# 536 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Hey there, {PLAYER}! What brings you\n"
	.string "here?$"

AideeBasementIdleTalk_Text_34:
# 538 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Unsafen Safemon$"

AideeBasementIdleTalk_Text_35:
# 539 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Unsafening Materials$"

AideeBasementIdleTalk_Text_36:
# 539 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Small talk$"

AideeBasementIdleTalk_Text_37:
# 539 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Secondary effects$"

AideeBasementIdleTalk_Text_38:
# 539 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Nothing$"

AideeBasementIdleTalk_Text_39:
# 547 "data/maps/LittlerootLabBasement/scripts.pory"
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
# 556 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So, with that in mind...$"

AideeBasementIdleTalk_Text_41:
# 564 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Need some Unsafening Materials?$"

AideeBasementIdleTalk_Text_42:
# 589 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Come back for more!$"

AideeBasementIdleTalk_Text_43:
# 599 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So, {PLAYER}... what's your stance on\n"
	.string "Devon Co. and Safemon?$"

AideeBasementIdleTalk_Text_44:
# 601 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I like them$"

AideeBasementIdleTalk_Text_45:
# 601 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I don't like them$"

AideeBasementIdleTalk_Text_46:
# 602 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I'm indifferent$"

AideeBasementIdleTalk_Text_47:
# 607 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Really? Well, you don't need to force\n"
	.string "yourself to help us with the\l"
	.string "Unsafenings then!\p"
	.string "Don't feel like you owe us for helping\n"
	.string "you out.\p"
	.string "It's our own way of thanking Professor\n"
	.string "Birch, who helped us set up here.\p"
	.string "He worries a lot about you. Even Balsam\n"
	.string "seems to like you, even if she doesn't\l"
	.string "show it!\p"
	.string "Me? Well, I'll like you better if you keep\n"
	.string "bringing Safemon - ahaha!$"

AideeBasementIdleTalk_Text_48:
# 618 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "I guess that makes sense, considering\n"
	.string "you're helping us with the Unsafenings!\p"
	.string "It's also a common sentiment, here in\n"
	.string "the so-called “{COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}”.\p"
	.string "But if you even travel further north,\n"
	.string "closer to {COLOR BLUE}New Rustboro{COLOR DARK_GRAY}... you may hear\l"
	.string "different opinions!$"

AideeBasementIdleTalk_Text_49:
# 629 "data/maps/LittlerootLabBasement/scripts.pory"
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
# 636 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Anything else?$"

AideeBasementIdleTalk_Text_51:
# 642 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A-ah, I suppose you've noticed some\n"
	.string "already...? You're observant!\p"
	.string "You see, right now Unsafening is a very\n"
	.string "novel procedure...\p"
	.string "Of course, it changes the appearance,\n"
	.string "typing and ability of a specimen back\l"
	.string "to what they used to be - that works as\l"
	.string "intended!\p"
	.string "However, it may also alter their moves,\n"
	.string "individual values, nature... even their\l"
	.string "gender!\p"
	.string "For what is worth, it does keep their\n"
	.string "level and effort values, but...\p"
	.string "I know having your companions change\n"
	.string "so much at once may be distressing.$"

AideeBasementIdleTalk_Text_52:
# 650 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "To help alleviate that, I've set up a\n"
	.string "Medicine Dispenser over there.$"

AideeBasementIdleTalk_Text_53:
# 653 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "For token prices, you may get pills with\n"
	.string "which to help get your Pokémon back to\l"
	.string "how they used to be - or to change them\l"
	.string "even more!\p"
	.string "And don't worry - there's no risk of\n"
	.string "overdose with any of the pills! {COLOR LIGHT_GRAY}{SHADOW WHITE}I\l"
	.string "think...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

AideeBasementIdleTalk_Text_54:
# 673 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which Safemon would you like to\n"
	.string "unsafen?$"

AideeBasementIdleTalk_Text_55:
# 674 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb$"

AideeBasementIdleTalk_Text_56:
# 674 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Bulbasynth$"

AideeBasementIdleTalk_Text_57:
# 674 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Smothquil$"

AideeBasementIdleTalk_Text_58:
# 674 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Purachu$"

AideeBasementIdleTalk_Text_59:
# 674 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "A different Safemon$"

AideeBasementIdleTalk_Text_60:
# 674 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "None$"

AideeBasementIdleTalk_Text_61:
# 680 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Cheerorb, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Voltorb Shard{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_62:
# 684 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Cheerorb!$"

AideeBasementIdleTalk_Text_63:
# 704 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Voltorb!$"

AideeBasementIdleTalk_Text_64:
# 711 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Of which you don't have any!\p"
	.string "Luckily for you, I have some in supply\n"
	.string "you can buy!$"

AideeBasementIdleTalk_Text_65:
# 722 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Bulbasynth, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Green Leaf{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_66:
# 726 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Bulbasynth!$"

AideeBasementIdleTalk_Text_67:
# 745 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Bulbasaur!$"

AideeBasementIdleTalk_Text_68:
# 752 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Of which you don't have any!\p"
	.string "Well, check my stock of Unsafening\n"
	.string "Materials - I might just have it!$"

AideeBasementIdleTalk_Text_69:
# 763 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Smothquil, huh? Well, to unsafen this\n"
	.string "one we'd need a {COLOR RED}Leaky Ligther{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_70:
# 767 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Smothquil!$"

AideeBasementIdleTalk_Text_71:
# 786 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Cyndaquil!$"

AideeBasementIdleTalk_Text_72:
# 804 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Purachu, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}LR20 Battery{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_73:
# 808 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Purachu!$"

AideeBasementIdleTalk_Text_74:
# 827 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Pikachu!$"

AideeBasementIdleTalk_Text_75:
# 842 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh please - don't play with my feelings\n"
	.string "like that!$"

AideeBasementIdleTalk_Text_76:
# 869 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Maybe one of these?$"

AideeBasementIdleTalk_Text_77:
# 870 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_1}$"

AideeBasementIdleTalk_Text_78:
# 870 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_2}$"

AideeBasementIdleTalk_Text_79:
# 870 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{STR_VAR_3}$"

AideeBasementIdleTalk_Text_80:
# 879 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ninkaburi, huh? Well, to unsafen this\n"
	.string "one we need some {COLOR RED}Pokéfeed{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_81:
# 883 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Ninkaburi!$"

AideeBasementIdleTalk_Text_82:
# 902 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Nincada!$"

AideeBasementIdleTalk_Text_83:
# 918 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "{PLAYER}, you haven't registered the\n"
	.string "data for this Safemon on your Devon\l"
	.string "Dex!\p"
	.string "I need that data to figure out how to\n"
	.string "Unsafen it - sorry!$"

AideeBasementIdleTalk_Text_84:
# 932 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Shiitako, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_85:
# 936 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Shiitako!$"

AideeBasementIdleTalk_Text_86:
# 955 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Shroomish!$"

AideeBasementIdleTalk_Text_87:
# 987 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Poochain, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Choice Knife{COLOR DARK_GRAY}, to cut all those\l"
	.string "chains and shackles...$"

AideeBasementIdleTalk_Text_88:
# 992 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Poochain!$"

AideeBasementIdleTalk_Text_89:
# 1011 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Poochyena!$"

AideeBasementIdleTalk_Text_90:
# 1065 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "What about one of these?$"

AideeBasementIdleTalk_Text_91:
# 1075 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Fooming, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_92:
# 1079 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Fooming!$"

AideeBasementIdleTalk_Text_93:
# 1098 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Koffing!$"

AideeBasementIdleTalk_Text_94:
# 1130 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Geoslug, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Fuel{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_95:
# 1134 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Geoslug!$"

AideeBasementIdleTalk_Text_96:
# 1153 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Slugma!$"

AideeBasementIdleTalk_Text_97:
# 1186 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Nidoran Intersex, huh? Well, to unsafen\n"
	.string "this one we need some {COLOR RED}Pheromone Gas{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_98:
# 1190 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Nidoran!$"

AideeBasementIdleTalk_Text_99:
# 1215 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Nidoran!$"

AideeBasementIdleTalk_Text_100:
# 1280 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Mudder, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_101:
# 1284 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Mudder!$"

AideeBasementIdleTalk_Text_102:
# 1303 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Grimer!$"

AideeBasementIdleTalk_Text_103:
# 1336 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Loadtad, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Green Leaf{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_104:
# 1340 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Loadtad!$"

AideeBasementIdleTalk_Text_105:
# 1359 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Lotad!$"

AideeBasementIdleTalk_Text_106:
# 1392 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Helipip, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Green Leaf{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_107:
# 1415 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Hoppip!$"

AideeBasementIdleTalk_Text_108:
# 1473 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Manchine, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Good Wrench{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_109:
# 1496 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Machop!$"

AideeBasementIdleTalk_Text_110:
# 1529 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Verdoom, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Good Wrench{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_111:
# 1533 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Verdoom!$"

AideeBasementIdleTalk_Text_112:
# 1552 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Beldum!$"

AideeBasementIdleTalk_Text_113:
# 1585 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Tumbela, huh? Well, to unsafen this one\n"
	.string "we need an {COLOR RED}Old Canteen{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_114:
# 1589 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Tumbela!$"

AideeBasementIdleTalk_Text_115:
# 1608 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Tangela!$"

AideeBasementIdleTalk_Text_116:
# 1666 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Arystal, huh? Well, to unsafen this one\n"
	.string "we need an {COLOR RED}Asphalt Chunk{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_117:
# 1689 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Aron!$"

AideeBasementIdleTalk_Text_118:
# 1722 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Wartz, huh? Well, this one is technically\n"
	.string "not a Safemon...\p"
	.string "That said, if you had a certain special\n"
	.string "{COLOR RED}special ring...{COLOR DARK_GRAY}, we may be able to revert\l"
	.string "it back to a Ralts.$"

AideeBasementIdleTalk_Text_119:
# 1727 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And it seems you have one such ring -\n"
	.string "excellent! Now, let's see that Wartz!$"

AideeBasementIdleTalk_Text_120:
# 1746 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Ralts!$"

AideeBasementIdleTalk_Text_121:
# 1779 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Veriwoodo, huh? Well, to unsafen this\n"
	.string "one we need an {COLOR RED}Asphalt Chunk{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_122:
# 1783 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Veriwoodo!$"

AideeBasementIdleTalk_Text_123:
# 1802 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Sudowoodo!$"

AideeBasementIdleTalk_Text_124:
# 1860 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Gummin, huh? Well, to unsafen this one\n"
	.string "we need some {COLOR RED}Strange Grime{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_125:
# 1864 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Gummin!$"

AideeBasementIdleTalk_Text_126:
# 1883 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Gulpin!$"

AideeBasementIdleTalk_Text_127:
# 1916 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Rolloon, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Drifting Parachute{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_128:
# 1920 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Rolloon!$"

AideeBasementIdleTalk_Text_129:
# 1939 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Drifloon!$"

AideeBasementIdleTalk_Text_130:
# 1972 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Trashealed, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Choice Knife{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_131:
# 1976 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Trashealed!$"

AideeBasementIdleTalk_Text_132:
# 1995 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Trubbish!$"

AideeBasementIdleTalk_Text_133:
# 2055 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Kamoken, huh? Well, to unsafen this one\n"
	.string "we need a {COLOR RED}Leek{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_134:
# 2059 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "And you know what? It's something so\n"
	.string "mundane, I have one right here!$"

AideeBasementIdleTalk_Text_135:
# 2063 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "So this time, the Unsafening Material is\n"
	.string "on me. Now, let's see that Kamoken!$"

AideeBasementIdleTalk_Text_136:
# 2082 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Farfetch'd!!$"

AideeBasementIdleTalk_Text_137:
# 2107 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Delibin, huh? Well, to unsafen this one\n"
	.string "we need an {COLOR RED}Ice Bag{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_138:
# 2111 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Delibin!$"

AideeBasementIdleTalk_Text_139:
# 2130 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Delibird!$"

AideeBasementIdleTalk_Text_140:
# 2163 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Douno, huh? Well, to unsafen this one we\n"
	.string "need a {COLOR RED}Growth Injection{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_141:
# 2167 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Douno!$"

AideeBasementIdleTalk_Text_142:
# 2186 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Doduo!$"

AideeBasementIdleTalk_Text_143:
# 2244 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Kangaskid, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Growth Injection{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_144:
# 2248 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Kangaskid!$"

AideeBasementIdleTalk_Text_145:
# 2267 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Kangaskhan!$"

AideeBasementIdleTalk_Text_146:
# 2300 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Gachapod, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Pry Bar{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_147:
# 2304 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Gachapod!$"

AideeBasementIdleTalk_Text_148:
# 2323 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Ditto!$"

AideeBasementIdleTalk_Text_149:
# 2356 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Tamarakku, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}Growth Injection{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_150:
# 2360 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Tamarakku!$"

AideeBasementIdleTalk_Text_151:
# 2379 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Togepi!$"

AideeBasementIdleTalk_Text_152:
# 2437 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Rotom Monitor, huh? Well, to unsafen\n"
	.string "this one we need a {COLOR RED}Good Wrench{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_153:
# 2441 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Rotom Monitor!$"

AideeBasementIdleTalk_Text_154:
# 2460 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Rotom!$"

AideeBasementIdleTalk_Text_155:
# 2493 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Mimiyurui, huh? Well, to unsafen this\n"
	.string "one we need a {COLOR RED}INSERT ITEM{COLOR DARK_GRAY}...$"

AideeBasementIdleTalk_Text_156:
# 2498 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Which you have - excellent! Now, let's\n"
	.string "see that Mimiyurui!$"

AideeBasementIdleTalk_Text_157:
# 2517 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "It's done! Another Unsafening success\n"
	.string "- take good care of that Mimikyu!$"

AideeBasementIdleTalk_Text_158:
# 2547 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Wait a moment... {PLAYER}, this is not\n"
	.string "a Safemon!\p"
	.string "This is a Pokémon with a very\n"
	.string "interesting story... would you like to\l"
	.string "hear it?$"

AideeBasementIdleTalk_Text_159:
# 2550 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Sure$"

AideeBasementIdleTalk_Text_160:
# 2550 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Not now$"

AideeBasementIdleTalk_Text_161:
# 2552 "data/maps/LittlerootLabBasement/scripts.pory"
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
# 2564 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Ah, shame... well, just now you've got a\n"
	.string "very rare Pokémon, and that you should\l"
	.string "take care of it!$"

CancelTradeSafemonSelection_Text_0:
# 2674 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, changed your mind? I guess some\n"
	.string "Safemon have their charm after all.$"

SelectedIncorrectTradeSafemon_Text_0:
# 2683 "data/maps/LittlerootLabBasement/scripts.pory"
	.string "Oh, that's not a {STR_VAR_1},\n"
	.string "{PLAYER}! You should do some\l"
	.string "reviewing with that Devondex I gave\l"
	.string "you, haha!$"
