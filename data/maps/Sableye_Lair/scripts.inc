# 1 "data/maps/Sableye_Lair/scripts.pory"


Sableye_Lair_MapScripts::
# 9 "data/maps/Sableye_Lair/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SableyeLairBossCheck
# 10 "data/maps/Sableye_Lair/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicExTunnel
# 11 "data/maps/Sableye_Lair/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicExTunnel
	.byte 0


SableyeLairBossCheck::
# 20 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_SABLEYELAIRANGER, 3
	goto_if_gt SableyeLairBossCheck_2
# 35 "data/maps/Sableye_Lair/scripts.pory"
	release
SableyeLairBossCheck_1:
# 36 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairBossCheck_2:
# 21 "data/maps/Sableye_Lair/scripts.pory"
	setflag canspawnsableyelairboss
# 22 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_SABLEYELAIRANGER, 4
# 23 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 24 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 25 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 26 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 27 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 28 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 29 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 30 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 32 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto SableyeLairBossCheck_1


SableyeLairBossSequence::
# 43 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset canspawnsableyelairboss, SableyeLairBossSequence_2
# 47 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 48 "data/maps/Sableye_Lair/scripts.pory"
	hidefollower
# 49 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset spawnsableyelairboss, SableyeLairBossSequence_5
# 55 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 56 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_0
# 57 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 59 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye1gone
# 60 "data/maps/Sableye_Lair/scripts.pory"
	addobject 1
# 61 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 1, 4, 6
# 62 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 63 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 65 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye2gone
# 66 "data/maps/Sableye_Lair/scripts.pory"
	addobject 2
# 67 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 2, 5, 6
# 68 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_0
# 69 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 71 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye3gone
# 72 "data/maps/Sableye_Lair/scripts.pory"
	addobject 3
# 73 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 3, 6, 6
# 74 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_0
# 75 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 77 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye4gone
# 78 "data/maps/Sableye_Lair/scripts.pory"
	addobject 4
# 79 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 4, 5, 8
# 80 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeLairBossSequence_Movement_1
# 81 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 84 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 85 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_1
# 86 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_2
# 87 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 88 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 89 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_3
# 90 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 91 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 92 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableyelairplayerbag
# 93 "data/maps/Sableye_Lair/scripts.pory"
	addobject 6
# 94 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 95 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_0
# 97 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_2
# 98 "data/maps/Sableye_Lair/scripts.pory"
	checkplayergender
# 99 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SableyeLairBossSequence_9
SableyeLairBossSequence_8:
# 100 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SableyeLairBossSequence_12
SableyeLairBossSequence_11:
# 101 "data/maps/Sableye_Lair/scripts.pory"
	setvar nobag, 2
# 102 "data/maps/Sableye_Lair/scripts.pory"
	setflag norun
# 103 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 104 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_4
# 105 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_4
# 106 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_5
# 109 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 110 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt SableyeLairBossSequence_15
# 115 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5, ITEM_NONE, SPECIES_NONE, 0, ITEM_NONE
SableyeLairBossSequence_14:
# 117 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 118 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 119 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 120 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 128 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeLairBossSequence_18
SableyeLairBossSequence_1:
# 250 "data/maps/Sableye_Lair/scripts.pory"
endsableyelairbossscript:
# 251 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairBossSequence_2:
# 44 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableyelairbossscript
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_5:
# 51 "data/maps/Sableye_Lair/scripts.pory"
	goto fightsableyelairboss
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_9:
# 99 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_3
	goto SableyeLairBossSequence_8

SableyeLairBossSequence_12:
# 100 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_4
	goto SableyeLairBossSequence_11

SableyeLairBossSequence_15:
# 111 "data/maps/Sableye_Lair/scripts.pory"
	setwilddoubleflag
# 112 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5, ITEM_NONE, SPECIES_SABLEYE, 5, ITEM_NONE
	goto SableyeLairBossSequence_14

SableyeLairBossSequence_18:
# 129 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableyelairplayerbag
# 130 "data/maps/Sableye_Lair/scripts.pory"
	addobject 6
# 131 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_5
# 132 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_PIN
# 133 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 134 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_5
# 135 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_PIN
# 136 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 137 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 138 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_6
# 140 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 141 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 142 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 144 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 145 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 146 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 148 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 149 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_7
# 150 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_6
# 151 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 152 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 153 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 6, SableyeLairBossSequence_Movement_7
# 154 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 155 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 156 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 157 "data/maps/Sableye_Lair/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 158 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_8
# 159 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 160 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 161 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 163 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 164 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 165 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 166 "data/maps/Sableye_Lair/scripts.pory"
	setvar nobag, 0
# 169 "data/maps/Sableye_Lair/scripts.pory"
	fadeoutbgm 1
# 170 "data/maps/Sableye_Lair/scripts.pory"
	fadenewbgm MUS_NONE
# 172 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 174 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 176 "data/maps/Sableye_Lair/scripts.pory"
	clearflag spawnsableyelairboss
# 177 "data/maps/Sableye_Lair/scripts.pory"
	addobject 5
# 178 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 179 "data/maps/Sableye_Lair/scripts.pory"
fightsableyelairboss:
# 180 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 181 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 184 "data/maps/Sableye_Lair/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 2, 2
# 185 "data/maps/Sableye_Lair/scripts.pory"
	setflag forceshiny
# 187 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 188 "data/maps/Sableye_Lair/scripts.pory"
	clearflag forceshiny
# 189 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 191 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 192 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeLairBossSequence_21
SableyeLairBossSequence_20:
# 199 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeLairBossSequence_24
SableyeLairBossSequence_23:
# 237 "data/maps/Sableye_Lair/scripts.pory"
playerwinssableyeskirmish:
# 238 "data/maps/Sableye_Lair/scripts.pory"
	fadeoutbgm 1
# 239 "data/maps/Sableye_Lair/scripts.pory"
	fadenewbgm MUS_RG_MT_MOON
# 240 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_RG_MT_MOON, TRUE
# 241 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_SABLEYELAIRANGER, 0
# 242 "data/maps/Sableye_Lair/scripts.pory"
	clearflag forceshiny
# 243 "data/maps/Sableye_Lair/scripts.pory"
	clearflag norun
# 246 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableyelairbossscript
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_21:
# 193 "data/maps/Sableye_Lair/scripts.pory"
	setflag caughtsableyelairboss
# 194 "data/maps/Sableye_Lair/scripts.pory"
	setflag spawnsableyelairboss
# 195 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 5
# 196 "data/maps/Sableye_Lair/scripts.pory"
	goto playerwinssableyeskirmish
	goto SableyeLairBossSequence_20

SableyeLairBossSequence_24:
# 200 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 201 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 202 "data/maps/Sableye_Lair/scripts.pory"
	closemessage
# 203 "data/maps/Sableye_Lair/scripts.pory"
	setflag spawnsableyelairboss
# 204 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 5
# 205 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 206 "data/maps/Sableye_Lair/scripts.pory"
	goto playerwinssableyeskirmish
	goto SableyeLairBossSequence_23


SableyeShake::
# 256 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 257 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8004, 2
# 258 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8005, 6
# 259 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8006, 4
# 260 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8007, 4
# 261 "data/maps/Sableye_Lair/scripts.pory"
	special ShakeCamera
# 262 "data/maps/Sableye_Lair/scripts.pory"
	waitse
	return


SableyeLairGem1::
# 268 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 269 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem1, SableyeLairGem1_1
# 276 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem1_5
# 295 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem1_4:
# 297 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 298 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 299 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem1
# 300 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 302 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem1_1:
# 270 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 272 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem1_5:
# 279 "data/maps/Sableye_Lair/scripts.pory"
	random 10
# 280 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 281 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 282 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem1_9
# 283 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem1_10
# 284 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem1_11
# 285 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem1_12
# 286 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem1_13
# 287 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem1_14
# 288 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem1_15
# 289 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem1_16
# 290 "data/maps/Sableye_Lair/scripts.pory"
	case 8, SableyeLairGem1_17
# 291 "data/maps/Sableye_Lair/scripts.pory"
	case 9, SableyeLairGem1_18
	goto SableyeLairGem1_4

SableyeLairGem1_9:
# 282 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FIRE_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_10:
# 283 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_WATER_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_11:
# 284 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_12:
# 285 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_GRASS_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_13:
# 286 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NORMAL_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_14:
# 287 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_15:
# 288 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_16:
# 289 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_17:
# 290 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_18:
# 291 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4


SableyeLairGem2::
# 309 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 310 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem2, SableyeLairGem2_1
# 317 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem2_5
# 334 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem2_4:
# 337 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 2, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 338 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 339 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem2
# 340 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 342 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem2_1:
# 311 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 313 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem2_5:
# 320 "data/maps/Sableye_Lair/scripts.pory"
	random 8
# 321 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 322 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 323 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem2_9
# 324 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem2_10
# 325 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem2_11
# 326 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem2_12
# 327 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem2_13
# 328 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem2_14
# 329 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem2_15
# 330 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem2_16
	goto SableyeLairGem2_4

SableyeLairGem2_9:
# 323 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_ICE_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_10:
# 324 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FIGHTING_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_11:
# 325 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_POISON_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_12:
# 326 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_GROUND_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_13:
# 327 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4

SableyeLairGem2_14:
# 328 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4

SableyeLairGem2_15:
# 329 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4

SableyeLairGem2_16:
# 330 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4


SableyeLairGem3::
# 349 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 350 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem3, SableyeLairGem3_1
# 357 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem3_5
# 374 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem3_4:
# 377 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 1, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 378 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 379 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem3
# 380 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 382 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem3_1:
# 351 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 353 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem3_5:
# 360 "data/maps/Sableye_Lair/scripts.pory"
	random 8
# 361 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 362 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 363 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem3_9
# 364 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem3_10
# 365 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem3_11
# 366 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem3_12
# 367 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem3_13
# 368 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem3_14
# 369 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem3_15
# 370 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem3_16
	goto SableyeLairGem3_4

SableyeLairGem3_9:
# 363 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FLYING_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_10:
# 364 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_11:
# 365 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_BUG_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_12:
# 366 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_ROCK_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_13:
# 367 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4

SableyeLairGem3_14:
# 368 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4

SableyeLairGem3_15:
# 369 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4

SableyeLairGem3_16:
# 370 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4


SableyeLairGem4::
# 390 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 391 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem4, SableyeLairGem4_1
# 399 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem4_5
# 419 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem4_4:
# 422 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 423 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 424 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 425 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 427 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem4_1:
# 392 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 394 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem4_5:
# 402 "data/maps/Sableye_Lair/scripts.pory"
	random 10
# 403 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 404 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 405 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem4_9
# 406 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem4_10
# 407 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem4_11
# 408 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem4_12
# 409 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem4_13
# 410 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem4_14
# 411 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem4_15
# 412 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem4_16
# 413 "data/maps/Sableye_Lair/scripts.pory"
	case 8, SableyeLairGem4_17
# 414 "data/maps/Sableye_Lair/scripts.pory"
	case 9, SableyeLairGem4_18
	goto SableyeLairGem4_4

SableyeLairGem4_9:
# 405 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_GHOST_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_10:
# 406 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_DRAGON_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_11:
# 407 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_DARK_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_12:
# 408 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_STEEL_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_13:
# 409 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FAIRY_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_14:
# 410 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_15:
# 411 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_16:
# 412 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_17:
# 413 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_18:
# 414 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4


SableyeGem1::
# 434 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 435 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 438 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 439 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 441 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem1_2
SableyeGem1_1:
# 510 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem1_5
SableyeGem1_4:
# 514 "data/maps/Sableye_Lair/scripts.pory"
endsableye1script:
# 515 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 516 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem1_2:
# 442 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_0
# 444 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem1_8
SableyeGem1_7:
# 468 "data/maps/Sableye_Lair/scripts.pory"
sableye1wantstofight:
# 469 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 470 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 471 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 473 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 474 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 475 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 476 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem1_10
# 481 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem1_11
# 498 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem1_12
# 502 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem1_13
	goto SableyeGem1_1

SableyeGem1_5:
# 511 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_4

SableyeGem1_8:
# 447 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 448 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 449 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 450 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem1_20
# 451 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem1_21
SableyeGem1_18:
# 453 "data/maps/Sableye_Lair/scripts.pory"
sableye1givesgem:
# 454 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 455 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 456 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 457 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 4
# 458 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_0
# 459 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 4
# 460 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 461 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 462 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 463 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 464 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem1
# 465 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1leaves
	goto SableyeGem1_7

SableyeGem1_10:
# 477 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 478 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 479 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_11:
# 482 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 483 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 485 "data/maps/Sableye_Lair/scripts.pory"
sableye1leaves:
# 486 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_2
# 487 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 488 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 489 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 490 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 492 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem1_23
SableyeGem1_22:
# 495 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_12:
# 499 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 500 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_13:
# 503 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 504 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_20:
# 450 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1givesgem
	goto SableyeGem1_18

SableyeGem1_21:
# 451 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1wantstofight
	goto SableyeGem1_18

SableyeGem1_23:
# 493 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem1_22


SableyeGem2::
# 521 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 522 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 525 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 526 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 528 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem2_2
SableyeGem2_1:
# 598 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem2_5
SableyeGem2_4:
# 602 "data/maps/Sableye_Lair/scripts.pory"
endsableye2script:
# 603 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 604 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem2_2:
# 529 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 531 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem2_8
SableyeGem2_7:
# 555 "data/maps/Sableye_Lair/scripts.pory"
sableye2wantstofight:
# 556 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 557 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 558 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 559 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 561 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 562 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 563 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 564 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem2_10
# 569 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem2_11
# 586 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem2_12
# 590 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem2_13
	goto SableyeGem2_1

SableyeGem2_5:
# 599 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_4

SableyeGem2_8:
# 534 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 535 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 536 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 537 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem2_20
# 538 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem2_21
SableyeGem2_18:
# 540 "data/maps/Sableye_Lair/scripts.pory"
sableye2givesgem:
# 541 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 542 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 543 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 544 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 545 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 546 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 547 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 548 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 549 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 2, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 550 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 551 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem2
# 552 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2leaves
	goto SableyeGem2_7

SableyeGem2_10:
# 565 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 566 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 567 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_11:
# 570 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 571 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 573 "data/maps/Sableye_Lair/scripts.pory"
sableye2leaves:
# 574 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem2_Movement_0
# 575 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 576 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 577 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 578 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 580 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem2_23
SableyeGem2_22:
# 583 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_12:
# 587 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 588 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_13:
# 591 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 592 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_20:
# 537 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2givesgem
	goto SableyeGem2_18

SableyeGem2_21:
# 538 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2wantstofight
	goto SableyeGem2_18

SableyeGem2_23:
# 581 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem2_22


SableyeGem3::
# 609 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 610 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 613 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 614 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 616 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem3_2
SableyeGem3_1:
# 685 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem3_5
SableyeGem3_4:
# 689 "data/maps/Sableye_Lair/scripts.pory"
endsableye3script:
# 690 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 691 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem3_2:
# 617 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem1_Movement_0
# 619 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem3_8
SableyeGem3_7:
# 643 "data/maps/Sableye_Lair/scripts.pory"
sableye3wantstofight:
# 644 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 645 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 646 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 648 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 649 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 650 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 651 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem3_10
# 656 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem3_11
# 673 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem3_12
# 677 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem3_13
	goto SableyeGem3_1

SableyeGem3_5:
# 686 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_4

SableyeGem3_8:
# 622 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 623 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 624 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 625 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem3_20
# 626 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem3_21
SableyeGem3_18:
# 628 "data/maps/Sableye_Lair/scripts.pory"
sableye3givesgem:
# 629 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 630 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 631 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 632 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 3
# 633 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem1_Movement_0
# 634 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 3
# 635 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 636 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 637 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 1, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 638 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 639 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem3
# 640 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3leaves
	goto SableyeGem3_7

SableyeGem3_10:
# 652 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 653 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 654 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_11:
# 657 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 658 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 660 "data/maps/Sableye_Lair/scripts.pory"
sableye3leaves:
# 661 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem2_Movement_0
# 662 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 663 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 664 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 665 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 667 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem3_23
SableyeGem3_22:
# 670 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_12:
# 674 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 675 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_13:
# 678 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 679 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_20:
# 625 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3givesgem
	goto SableyeGem3_18

SableyeGem3_21:
# 626 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3wantstofight
	goto SableyeGem3_18

SableyeGem3_23:
# 668 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem3_22


SableyeGem4::
# 697 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 698 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 701 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 702 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 704 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem4_2
SableyeGem4_1:
# 789 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem4_5
SableyeGem4_4:
# 793 "data/maps/Sableye_Lair/scripts.pory"
endsableye4script:
# 794 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 795 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem4_2:
# 705 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 707 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem4_8
SableyeGem4_7:
# 747 "data/maps/Sableye_Lair/scripts.pory"
sableyewantstofight:
# 748 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 749 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 750 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 752 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 753 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 754 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 755 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem4_10
# 760 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem4_11
# 777 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem4_12
# 781 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem4_13
	goto SableyeGem4_1

SableyeGem4_5:
# 790 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_4

SableyeGem4_8:
# 710 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 711 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 712 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 713 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem4_20
# 714 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem4_21
SableyeGem4_18:
# 716 "data/maps/Sableye_Lair/scripts.pory"
sableyegivesgem:
# 717 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 718 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 719 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 720 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 721 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 722 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 723 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 725 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem4_26
# 738 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeGem4_25:
# 741 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 742 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 743 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 744 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye4leaves
	goto SableyeGem4_7

SableyeGem4_10:
# 756 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 757 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 758 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_11:
# 761 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 762 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 764 "data/maps/Sableye_Lair/scripts.pory"
sableye4leaves:
# 765 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem4_Movement_0
# 766 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 767 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 768 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 769 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 771 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem4_23
SableyeGem4_22:
# 774 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_12:
# 778 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 779 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_13:
# 782 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 783 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_20:
# 713 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyegivesgem
	goto SableyeGem4_18

SableyeGem4_21:
# 714 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyewantstofight
	goto SableyeGem4_18

SableyeGem4_23:
# 772 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem4_22

SableyeGem4_26:
# 728 "data/maps/Sableye_Lair/scripts.pory"
	random 4
# 729 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 730 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 731 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem4_30
# 732 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem4_31
# 733 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeGem4_32
# 734 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeGem4_33
	goto SableyeGem4_25

SableyeGem4_30:
# 731 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25

SableyeGem4_31:
# 732 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25

SableyeGem4_32:
# 733 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25

SableyeGem4_33:
# 734 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25


# 62 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_0:
# 62 "data/maps/Sableye_Lair/scripts.pory"
	face_down
	step_end

# 80 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_1:
# 80 "data/maps/Sableye_Lair/scripts.pory"
	face_up
	step_end

# 86 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_2:
# 86 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
	step_end

# 89 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_3:
# 89 "data/maps/Sableye_Lair/scripts.pory"
	jump_up
	step_end

# 104 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_4:
# 104 "data/maps/Sableye_Lair/scripts.pory"
	walk_down
# 104 "data/maps/Sableye_Lair/scripts.pory"
	face_player
	step_end

# 131 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_5:
# 131 "data/maps/Sableye_Lair/scripts.pory"
	emote_exclamation_mark
	step_end

# 150 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_6:
# 150 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
# 150 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
# 150 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
# 150 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_right
# 150 "data/maps/Sableye_Lair/scripts.pory"
	face_down
	step_end

# 153 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_7:
# 153 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
# 153 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
	step_end

# 442 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_0:
# 442 "data/maps/Sableye_Lair/scripts.pory"
	face_player
	step_end

# 456 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_1:
# 456 "data/maps/Sableye_Lair/scripts.pory"
	face_right
	step_end

# 486 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_2:
# 486 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
	step_end

# 574 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem2_Movement_0:
# 574 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_down
	step_end

# 631 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem3_Movement_0:
# 631 "data/maps/Sableye_Lair/scripts.pory"
	face_left
	step_end

# 765 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem4_Movement_0:
# 765 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
# 765 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
	step_end

SableyeLairBossSequence_Text_0:
# 56 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaaa-saaaaaa!$"

SableyeLairBossSequence_Text_1:
# 85 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaaaaa!$"

SableyeLairBossSequence_Text_2:
# 97 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye has stolen {PLAYER}'s\n"
	.string "bag!$"

SableyeLairBossSequence_Text_3:
# 99 "data/maps/Sableye_Lair/scripts.pory"
	.string "{PLAYER} is surrounded - he can't run\n"
	.string "away!$"

SableyeLairBossSequence_Text_4:
# 100 "data/maps/Sableye_Lair/scripts.pory"
	.string "{PLAYER} is surrounded - she can't\n"
	.string "run away!$"

SableyeLairBossSequence_Text_5:
# 106 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaaa!$"

SableyeLairBossSequence_Text_6:
# 138 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaa...$"

SableyeLairBossSequence_Text_7:
# 149 "data/maps/Sableye_Lair/scripts.pory"
	.string "Sa-saaa!?$"

SableyeLairBossSequence_Text_8:
# 158 "data/maps/Sableye_Lair/scripts.pory"
	.string "The remaining Sableye returns\n"
	.string "{PLAYER}'s bag out of fear!$"

SableyeLairBossSequence_Text_9:
# 181 "data/maps/Sableye_Lair/scripts.pory"
	.string "SaAaAaAaA...$"

SableyeLairBossSequence_Text_10:
# 201 "data/maps/Sableye_Lair/scripts.pory"
	.string "S-saaa...$"

SableyeLairGem1_Text_0:
# 270 "data/maps/Sableye_Lair/scripts.pory"
	.string "For some unexplicable reason, the gem's\n"
	.string "remains begin to grow back...\p"
	.string "There may be another gem here tomorrow.$"

SableyeGem1_Text_0:
# 438 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye is zealously admiring its\n"
	.string "gems. Try to get them?$"

SableyeGem1_Text_1:
# 439 "data/maps/Sableye_Lair/scripts.pory"
	.string "Yes$"

SableyeGem1_Text_2:
# 439 "data/maps/Sableye_Lair/scripts.pory"
	.string "No$"

SableyeGem1_Text_3:
# 460 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye seems scared of you, and\n"
	.string "hands you the gem willingly.$"

SableyeGem1_Text_4:
# 470 "data/maps/Sableye_Lair/scripts.pory"
	.string "SAAAAA!$"
