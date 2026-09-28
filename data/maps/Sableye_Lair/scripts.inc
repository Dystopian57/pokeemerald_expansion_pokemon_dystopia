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
	msgbox SableyeLairBossSequence_Text_4
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
# 249 "data/maps/Sableye_Lair/scripts.pory"
endsableyelairbossscript:
# 250 "data/maps/Sableye_Lair/scripts.pory"
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
	msgbox SableyeLairBossSequence_Text_3
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
	msgbox SableyeLairBossSequence_Text_5
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
	msgbox SableyeLairBossSequence_Text_6
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
	msgbox SableyeLairBossSequence_Text_7
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
	msgbox SableyeLairBossSequence_Text_8
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
# 236 "data/maps/Sableye_Lair/scripts.pory"
playerwinssableyeskirmish:
# 237 "data/maps/Sableye_Lair/scripts.pory"
	fadeoutbgm 1
# 238 "data/maps/Sableye_Lair/scripts.pory"
	fadenewbgm MUS_RG_MT_MOON
# 239 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_RG_MT_MOON, TRUE
# 240 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_SABLEYELAIRANGER, 0
# 241 "data/maps/Sableye_Lair/scripts.pory"
	clearflag forceshiny
# 242 "data/maps/Sableye_Lair/scripts.pory"
	clearflag norun
# 245 "data/maps/Sableye_Lair/scripts.pory"
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
	msgbox SableyeLairBossSequence_Text_9
# 202 "data/maps/Sableye_Lair/scripts.pory"
	setflag spawnsableyelairboss
# 203 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 5
# 204 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 205 "data/maps/Sableye_Lair/scripts.pory"
	goto playerwinssableyeskirmish
	goto SableyeLairBossSequence_23


SableyeShake::
# 255 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 256 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8004, 2
# 257 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8005, 6
# 258 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8006, 4
# 259 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8007, 4
# 260 "data/maps/Sableye_Lair/scripts.pory"
	special ShakeCamera
# 261 "data/maps/Sableye_Lair/scripts.pory"
	waitse
	return


SableyeLairGem1::
# 267 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 268 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem1, SableyeLairGem1_1
# 275 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem1_5
# 294 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem1_4:
# 296 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 297 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 298 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem1
# 299 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 301 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem1_1:
# 269 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 271 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem1_5:
# 278 "data/maps/Sableye_Lair/scripts.pory"
	random 10
# 279 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 280 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 281 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem1_9
# 282 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem1_10
# 283 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem1_11
# 284 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem1_12
# 285 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem1_13
# 286 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem1_14
# 287 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem1_15
# 288 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem1_16
# 289 "data/maps/Sableye_Lair/scripts.pory"
	case 8, SableyeLairGem1_17
# 290 "data/maps/Sableye_Lair/scripts.pory"
	case 9, SableyeLairGem1_18
	goto SableyeLairGem1_4

SableyeLairGem1_9:
# 281 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FIRE_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_10:
# 282 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_WATER_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_11:
# 283 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_12:
# 284 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_GRASS_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_13:
# 285 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NORMAL_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_14:
# 286 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_15:
# 287 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_16:
# 288 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_17:
# 289 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_18:
# 290 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4


SableyeLairGem2::
# 308 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 309 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem2, SableyeLairGem2_1
# 316 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem2_5
# 333 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem2_4:
# 336 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 2, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 337 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 338 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem2
# 339 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 341 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem2_1:
# 310 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 312 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem2_5:
# 319 "data/maps/Sableye_Lair/scripts.pory"
	random 8
# 320 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 321 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 322 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem2_9
# 323 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem2_10
# 324 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem2_11
# 325 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem2_12
# 326 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem2_13
# 327 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem2_14
# 328 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem2_15
# 329 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem2_16
	goto SableyeLairGem2_4

SableyeLairGem2_9:
# 322 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_ICE_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_10:
# 323 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FIGHTING_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_11:
# 324 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_POISON_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_12:
# 325 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_GROUND_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_13:
# 326 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4

SableyeLairGem2_14:
# 327 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4

SableyeLairGem2_15:
# 328 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4

SableyeLairGem2_16:
# 329 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4


SableyeLairGem3::
# 348 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 349 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem3, SableyeLairGem3_1
# 356 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem3_5
# 373 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem3_4:
# 376 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 1, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 377 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 378 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem3
# 379 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 381 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem3_1:
# 350 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 352 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem3_5:
# 359 "data/maps/Sableye_Lair/scripts.pory"
	random 8
# 360 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 361 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 362 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem3_9
# 363 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem3_10
# 364 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem3_11
# 365 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem3_12
# 366 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem3_13
# 367 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem3_14
# 368 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem3_15
# 369 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem3_16
	goto SableyeLairGem3_4

SableyeLairGem3_9:
# 362 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FLYING_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_10:
# 363 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_11:
# 364 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_BUG_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_12:
# 365 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_ROCK_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_13:
# 366 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4

SableyeLairGem3_14:
# 367 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4

SableyeLairGem3_15:
# 368 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4

SableyeLairGem3_16:
# 369 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4


SableyeLairGem4::
# 389 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 390 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem4, SableyeLairGem4_1
# 398 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem4_5
# 418 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem4_4:
# 421 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 422 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 423 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 424 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 426 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem4_1:
# 391 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 393 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem4_5:
# 401 "data/maps/Sableye_Lair/scripts.pory"
	random 10
# 402 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 403 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 404 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem4_9
# 405 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem4_10
# 406 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem4_11
# 407 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem4_12
# 408 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem4_13
# 409 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem4_14
# 410 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem4_15
# 411 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem4_16
# 412 "data/maps/Sableye_Lair/scripts.pory"
	case 8, SableyeLairGem4_17
# 413 "data/maps/Sableye_Lair/scripts.pory"
	case 9, SableyeLairGem4_18
	goto SableyeLairGem4_4

SableyeLairGem4_9:
# 404 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_GHOST_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_10:
# 405 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_DRAGON_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_11:
# 406 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_DARK_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_12:
# 407 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_STEEL_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_13:
# 408 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FAIRY_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_14:
# 409 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_15:
# 410 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_16:
# 411 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_17:
# 412 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_18:
# 413 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4


SableyeGem1::
# 433 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 434 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 437 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 438 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 440 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem1_2
SableyeGem1_1:
# 509 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem1_5
SableyeGem1_4:
# 513 "data/maps/Sableye_Lair/scripts.pory"
endsableye1script:
# 514 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 515 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem1_2:
# 441 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_0
# 443 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem1_8
SableyeGem1_7:
# 467 "data/maps/Sableye_Lair/scripts.pory"
sableye1wantstofight:
# 468 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 469 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 470 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 472 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 473 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 474 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 475 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem1_10
# 480 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem1_11
# 497 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem1_12
# 501 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem1_13
	goto SableyeGem1_1

SableyeGem1_5:
# 510 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_4

SableyeGem1_8:
# 446 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 447 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 448 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 449 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem1_20
# 450 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem1_21
SableyeGem1_18:
# 452 "data/maps/Sableye_Lair/scripts.pory"
sableye1givesgem:
# 453 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 454 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 455 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 456 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 4
# 457 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_0
# 458 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 4
# 459 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 460 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 461 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 462 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 463 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem1
# 464 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1leaves
	goto SableyeGem1_7

SableyeGem1_10:
# 476 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 477 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 478 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_11:
# 481 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 482 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 484 "data/maps/Sableye_Lair/scripts.pory"
sableye1leaves:
# 485 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_2
# 486 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 487 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 488 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 489 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 491 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem1_23
SableyeGem1_22:
# 494 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_12:
# 498 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 499 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_13:
# 502 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 503 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_20:
# 449 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1givesgem
	goto SableyeGem1_18

SableyeGem1_21:
# 450 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1wantstofight
	goto SableyeGem1_18

SableyeGem1_23:
# 492 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem1_22


SableyeGem2::
# 520 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 521 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 524 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 525 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 527 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem2_2
SableyeGem2_1:
# 597 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem2_5
SableyeGem2_4:
# 601 "data/maps/Sableye_Lair/scripts.pory"
endsableye2script:
# 602 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 603 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem2_2:
# 528 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 530 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem2_8
SableyeGem2_7:
# 554 "data/maps/Sableye_Lair/scripts.pory"
sableye2wantstofight:
# 555 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 556 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 557 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 558 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 560 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 561 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 562 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 563 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem2_10
# 568 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem2_11
# 585 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem2_12
# 589 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem2_13
	goto SableyeGem2_1

SableyeGem2_5:
# 598 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_4

SableyeGem2_8:
# 533 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 534 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 535 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 536 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem2_20
# 537 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem2_21
SableyeGem2_18:
# 539 "data/maps/Sableye_Lair/scripts.pory"
sableye2givesgem:
# 540 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 541 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 542 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 543 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 544 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 545 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 546 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 547 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 548 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 2, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 549 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 550 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem2
# 551 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2leaves
	goto SableyeGem2_7

SableyeGem2_10:
# 564 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 565 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 566 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_11:
# 569 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 570 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 572 "data/maps/Sableye_Lair/scripts.pory"
sableye2leaves:
# 573 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem2_Movement_0
# 574 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 575 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 576 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 577 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 579 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem2_23
SableyeGem2_22:
# 582 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_12:
# 586 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 587 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_13:
# 590 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 591 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_20:
# 536 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2givesgem
	goto SableyeGem2_18

SableyeGem2_21:
# 537 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2wantstofight
	goto SableyeGem2_18

SableyeGem2_23:
# 580 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem2_22


SableyeGem3::
# 608 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 609 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 612 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 613 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 615 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem3_2
SableyeGem3_1:
# 684 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem3_5
SableyeGem3_4:
# 688 "data/maps/Sableye_Lair/scripts.pory"
endsableye3script:
# 689 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 690 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem3_2:
# 616 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem1_Movement_0
# 618 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem3_8
SableyeGem3_7:
# 642 "data/maps/Sableye_Lair/scripts.pory"
sableye3wantstofight:
# 643 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 644 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 645 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 647 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 648 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 649 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 650 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem3_10
# 655 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem3_11
# 672 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem3_12
# 676 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem3_13
	goto SableyeGem3_1

SableyeGem3_5:
# 685 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_4

SableyeGem3_8:
# 621 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 622 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 623 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 624 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem3_20
# 625 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem3_21
SableyeGem3_18:
# 627 "data/maps/Sableye_Lair/scripts.pory"
sableye3givesgem:
# 628 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 629 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 630 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 631 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 3
# 632 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem1_Movement_0
# 633 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 3
# 634 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 635 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 636 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 1, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 637 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 638 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem3
# 639 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3leaves
	goto SableyeGem3_7

SableyeGem3_10:
# 651 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 652 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 653 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_11:
# 656 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 657 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 659 "data/maps/Sableye_Lair/scripts.pory"
sableye3leaves:
# 660 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem2_Movement_0
# 661 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 662 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 663 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 664 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 666 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem3_23
SableyeGem3_22:
# 669 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_12:
# 673 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 674 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_13:
# 677 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 678 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_20:
# 624 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3givesgem
	goto SableyeGem3_18

SableyeGem3_21:
# 625 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3wantstofight
	goto SableyeGem3_18

SableyeGem3_23:
# 667 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem3_22


SableyeGem4::
# 696 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 697 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 700 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 701 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 703 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem4_2
SableyeGem4_1:
# 788 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem4_5
SableyeGem4_4:
# 792 "data/maps/Sableye_Lair/scripts.pory"
endsableye4script:
# 793 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 794 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem4_2:
# 704 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 706 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem4_8
SableyeGem4_7:
# 746 "data/maps/Sableye_Lair/scripts.pory"
sableyewantstofight:
# 747 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 748 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 749 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 751 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 752 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 753 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 754 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem4_10
# 759 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem4_11
# 776 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem4_12
# 780 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem4_13
	goto SableyeGem4_1

SableyeGem4_5:
# 789 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_4

SableyeGem4_8:
# 709 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 710 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 711 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 712 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem4_20
# 713 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem4_21
SableyeGem4_18:
# 715 "data/maps/Sableye_Lair/scripts.pory"
sableyegivesgem:
# 716 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 717 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 718 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 719 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 720 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 721 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 722 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 724 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem4_26
# 737 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeGem4_25:
# 740 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 741 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 742 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 743 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye4leaves
	goto SableyeGem4_7

SableyeGem4_10:
# 755 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 756 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 757 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_11:
# 760 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 761 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 763 "data/maps/Sableye_Lair/scripts.pory"
sableye4leaves:
# 764 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem4_Movement_0
# 765 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 766 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 767 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 768 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 770 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem4_23
SableyeGem4_22:
# 773 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_12:
# 777 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 778 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_13:
# 781 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 782 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_20:
# 712 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyegivesgem
	goto SableyeGem4_18

SableyeGem4_21:
# 713 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyewantstofight
	goto SableyeGem4_18

SableyeGem4_23:
# 771 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem4_22

SableyeGem4_26:
# 727 "data/maps/Sableye_Lair/scripts.pory"
	random 4
# 728 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 729 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 730 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem4_30
# 731 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem4_31
# 732 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeGem4_32
# 733 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeGem4_33
	goto SableyeGem4_25

SableyeGem4_30:
# 730 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25

SableyeGem4_31:
# 731 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25

SableyeGem4_32:
# 732 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25

SableyeGem4_33:
# 733 "data/maps/Sableye_Lair/scripts.pory"
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

# 441 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_0:
# 441 "data/maps/Sableye_Lair/scripts.pory"
	face_player
	step_end

# 455 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_1:
# 455 "data/maps/Sableye_Lair/scripts.pory"
	face_right
	step_end

# 485 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_2:
# 485 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
	step_end

# 573 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem2_Movement_0:
# 573 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_down
	step_end

# 630 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem3_Movement_0:
# 630 "data/maps/Sableye_Lair/scripts.pory"
	face_left
	step_end

# 764 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem4_Movement_0:
# 764 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
# 764 "data/maps/Sableye_Lair/scripts.pory"
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
# 106 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaaa!$"

SableyeLairBossSequence_Text_5:
# 138 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaa...$"

SableyeLairBossSequence_Text_6:
# 149 "data/maps/Sableye_Lair/scripts.pory"
	.string "Sa-saaa!?$"

SableyeLairBossSequence_Text_7:
# 158 "data/maps/Sableye_Lair/scripts.pory"
	.string "The remaining Sableye returns\n"
	.string "{PLAYER}'s bag out of fear!$"

SableyeLairBossSequence_Text_8:
# 181 "data/maps/Sableye_Lair/scripts.pory"
	.string "SaAaAaAaA...$"

SableyeLairBossSequence_Text_9:
# 201 "data/maps/Sableye_Lair/scripts.pory"
	.string "S-saaa...$"

SableyeLairGem1_Text_0:
# 269 "data/maps/Sableye_Lair/scripts.pory"
	.string "For some unexplicable reason, the gem's\n"
	.string "remains begin to grow back...\p"
	.string "There may be another gem here tomorrow.$"

SableyeGem1_Text_0:
# 437 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye is zealously admiring its\n"
	.string "gems. Try to get them?$"

SableyeGem1_Text_1:
# 438 "data/maps/Sableye_Lair/scripts.pory"
	.string "Yes$"

SableyeGem1_Text_2:
# 438 "data/maps/Sableye_Lair/scripts.pory"
	.string "No$"

SableyeGem1_Text_3:
# 459 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye seems scared of you, and\n"
	.string "hands you the gem willingly.$"

SableyeGem1_Text_4:
# 469 "data/maps/Sableye_Lair/scripts.pory"
	.string "SAAAAA!$"
