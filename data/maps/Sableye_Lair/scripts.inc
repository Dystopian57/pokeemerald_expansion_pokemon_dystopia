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
	gettimeofday
# 21 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq SableyeLairBossCheck_2
SableyeLairBossCheck_1:
# 24 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_SABLEYELAIRANGER, 3
	goto_if_gt SableyeLairBossCheck_5
# 39 "data/maps/Sableye_Lair/scripts.pory"
	release
SableyeLairBossCheck_4:
# 40 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairBossCheck_2:
# 22 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_RELAXING, TRUE
	goto SableyeLairBossCheck_1

SableyeLairBossCheck_5:
# 25 "data/maps/Sableye_Lair/scripts.pory"
	setflag canspawnsableyelairboss
# 26 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_SABLEYELAIRANGER, 4
# 27 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 28 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 29 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 30 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 31 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 32 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 33 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 34 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 36 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto SableyeLairBossCheck_4


SableyeLairBossSequence::
# 47 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset canspawnsableyelairboss, SableyeLairBossSequence_2
# 51 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 52 "data/maps/Sableye_Lair/scripts.pory"
	hidefollower
# 53 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset spawnsableyelairboss, SableyeLairBossSequence_5
# 59 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 60 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_0
# 61 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 63 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye1gone
# 64 "data/maps/Sableye_Lair/scripts.pory"
	addobject 1
# 65 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 1, 4, 6
# 66 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 67 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 69 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye2gone
# 70 "data/maps/Sableye_Lair/scripts.pory"
	addobject 2
# 71 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 2, 5, 6
# 72 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_0
# 73 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 75 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye3gone
# 76 "data/maps/Sableye_Lair/scripts.pory"
	addobject 3
# 77 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 3, 6, 6
# 78 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_0
# 79 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 81 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye4gone
# 82 "data/maps/Sableye_Lair/scripts.pory"
	addobject 4
# 83 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 4, 5, 8
# 84 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeLairBossSequence_Movement_1
# 85 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 88 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 89 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_1
# 90 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_2
# 91 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 92 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 93 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_3
# 94 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 95 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 96 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableyelairplayerbag
# 97 "data/maps/Sableye_Lair/scripts.pory"
	addobject 6
# 98 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 99 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_0
# 101 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_2
# 102 "data/maps/Sableye_Lair/scripts.pory"
	checkplayergender
# 103 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SableyeLairBossSequence_9
SableyeLairBossSequence_8:
# 104 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SableyeLairBossSequence_12
SableyeLairBossSequence_11:
# 105 "data/maps/Sableye_Lair/scripts.pory"
	setvar nobag, 2
# 106 "data/maps/Sableye_Lair/scripts.pory"
	setflag norun
# 107 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 108 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_4
# 109 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_4
# 110 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_5
# 113 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 114 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt SableyeLairBossSequence_15
# 119 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5, ITEM_NONE, SPECIES_NONE, 0, ITEM_NONE
SableyeLairBossSequence_14:
# 121 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 122 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 123 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 124 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 132 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeLairBossSequence_18
SableyeLairBossSequence_1:
# 254 "data/maps/Sableye_Lair/scripts.pory"
endsableyelairbossscript:
# 255 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairBossSequence_2:
# 48 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableyelairbossscript
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_5:
# 55 "data/maps/Sableye_Lair/scripts.pory"
	goto fightsableyelairboss
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_9:
# 103 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_3
	goto SableyeLairBossSequence_8

SableyeLairBossSequence_12:
# 104 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_4
	goto SableyeLairBossSequence_11

SableyeLairBossSequence_15:
# 115 "data/maps/Sableye_Lair/scripts.pory"
	setwilddoubleflag
# 116 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5, ITEM_NONE, SPECIES_SABLEYE, 5, ITEM_NONE
	goto SableyeLairBossSequence_14

SableyeLairBossSequence_18:
# 133 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableyelairplayerbag
# 134 "data/maps/Sableye_Lair/scripts.pory"
	addobject 6
# 135 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_5
# 136 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_PIN
# 137 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 138 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_5
# 139 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_PIN
# 140 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 141 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 142 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_6
# 144 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 145 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 146 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 148 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 149 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 150 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 152 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 153 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_7
# 154 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_6
# 155 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 156 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 157 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 6, SableyeLairBossSequence_Movement_7
# 158 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 159 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 160 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 161 "data/maps/Sableye_Lair/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_8
# 163 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 164 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 165 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 167 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 168 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 169 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 170 "data/maps/Sableye_Lair/scripts.pory"
	setvar nobag, 0
# 173 "data/maps/Sableye_Lair/scripts.pory"
	fadeoutbgm 1
# 174 "data/maps/Sableye_Lair/scripts.pory"
	fadenewbgm MUS_NONE
# 176 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 178 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 180 "data/maps/Sableye_Lair/scripts.pory"
	clearflag spawnsableyelairboss
# 181 "data/maps/Sableye_Lair/scripts.pory"
	addobject 5
# 182 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 183 "data/maps/Sableye_Lair/scripts.pory"
fightsableyelairboss:
# 184 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 185 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 188 "data/maps/Sableye_Lair/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 2, 2
# 189 "data/maps/Sableye_Lair/scripts.pory"
	setflag forceshiny
# 191 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 192 "data/maps/Sableye_Lair/scripts.pory"
	clearflag forceshiny
# 193 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 195 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 196 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeLairBossSequence_21
SableyeLairBossSequence_20:
# 203 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeLairBossSequence_24
SableyeLairBossSequence_23:
# 241 "data/maps/Sableye_Lair/scripts.pory"
playerwinssableyeskirmish:
# 242 "data/maps/Sableye_Lair/scripts.pory"
	fadeoutbgm 1
# 243 "data/maps/Sableye_Lair/scripts.pory"
	fadenewbgm MUS_RG_MT_MOON
# 244 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_RG_MT_MOON, TRUE
# 245 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_SABLEYELAIRANGER, 0
# 246 "data/maps/Sableye_Lair/scripts.pory"
	clearflag forceshiny
# 247 "data/maps/Sableye_Lair/scripts.pory"
	clearflag norun
# 250 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableyelairbossscript
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_21:
# 197 "data/maps/Sableye_Lair/scripts.pory"
	setflag caughtsableyelairboss
# 198 "data/maps/Sableye_Lair/scripts.pory"
	setflag spawnsableyelairboss
# 199 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 5
# 200 "data/maps/Sableye_Lair/scripts.pory"
	goto playerwinssableyeskirmish
	goto SableyeLairBossSequence_20

SableyeLairBossSequence_24:
# 204 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 205 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 206 "data/maps/Sableye_Lair/scripts.pory"
	closemessage
# 207 "data/maps/Sableye_Lair/scripts.pory"
	setflag spawnsableyelairboss
# 208 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 5
# 209 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 210 "data/maps/Sableye_Lair/scripts.pory"
	goto playerwinssableyeskirmish
	goto SableyeLairBossSequence_23


SableyeShake::
# 260 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 261 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8004, 2
# 262 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8005, 6
# 263 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8006, 4
# 264 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8007, 4
# 265 "data/maps/Sableye_Lair/scripts.pory"
	special ShakeCamera
# 266 "data/maps/Sableye_Lair/scripts.pory"
	waitse
	return


SableyeLairGem1::
# 272 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 273 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem1, SableyeLairGem1_1
# 280 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem1_5
# 299 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem1_4:
# 301 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 302 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 303 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem1
# 304 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 306 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem1_1:
# 274 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 276 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem1_5:
# 283 "data/maps/Sableye_Lair/scripts.pory"
	random 10
# 284 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 285 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem1_9
# 287 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem1_10
# 288 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem1_11
# 289 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem1_12
# 290 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem1_13
# 291 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem1_14
# 292 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem1_15
# 293 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem1_16
# 294 "data/maps/Sableye_Lair/scripts.pory"
	case 8, SableyeLairGem1_17
# 295 "data/maps/Sableye_Lair/scripts.pory"
	case 9, SableyeLairGem1_18
	goto SableyeLairGem1_4

SableyeLairGem1_9:
# 286 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FIRE_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_10:
# 287 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_WATER_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_11:
# 288 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_12:
# 289 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_GRASS_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_13:
# 290 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NORMAL_GEM
	goto SableyeLairGem1_4

SableyeLairGem1_14:
# 291 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_15:
# 292 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_16:
# 293 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_17:
# 294 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4

SableyeLairGem1_18:
# 295 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem1_4


SableyeLairGem2::
# 313 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 314 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem2, SableyeLairGem2_1
# 321 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem2_5
# 338 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem2_4:
# 341 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 2, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 342 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 343 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem2
# 344 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 346 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem2_1:
# 315 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 317 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem2_5:
# 324 "data/maps/Sableye_Lair/scripts.pory"
	random 8
# 325 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 326 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 327 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem2_9
# 328 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem2_10
# 329 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem2_11
# 330 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem2_12
# 331 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem2_13
# 332 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem2_14
# 333 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem2_15
# 334 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem2_16
	goto SableyeLairGem2_4

SableyeLairGem2_9:
# 327 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_ICE_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_10:
# 328 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FIGHTING_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_11:
# 329 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_POISON_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_12:
# 330 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_GROUND_GEM
	goto SableyeLairGem2_4

SableyeLairGem2_13:
# 331 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4

SableyeLairGem2_14:
# 332 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4

SableyeLairGem2_15:
# 333 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4

SableyeLairGem2_16:
# 334 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem2_4


SableyeLairGem3::
# 353 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 354 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem3, SableyeLairGem3_1
# 361 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem3_5
# 378 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem3_4:
# 381 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 1, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 382 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 383 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem3
# 384 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 386 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem3_1:
# 355 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 357 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem3_5:
# 364 "data/maps/Sableye_Lair/scripts.pory"
	random 8
# 365 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 366 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 367 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem3_9
# 368 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem3_10
# 369 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem3_11
# 370 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem3_12
# 371 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem3_13
# 372 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem3_14
# 373 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem3_15
# 374 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem3_16
	goto SableyeLairGem3_4

SableyeLairGem3_9:
# 367 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FLYING_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_10:
# 368 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_11:
# 369 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_BUG_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_12:
# 370 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_ROCK_GEM
	goto SableyeLairGem3_4

SableyeLairGem3_13:
# 371 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4

SableyeLairGem3_14:
# 372 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4

SableyeLairGem3_15:
# 373 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4

SableyeLairGem3_16:
# 374 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem3_4


SableyeLairGem4::
# 394 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 395 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem4, SableyeLairGem4_1
# 403 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeLairGem4_5
# 423 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeLairGem4_4:
# 426 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 427 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 428 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 429 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 431 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem4_1:
# 396 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 398 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairGem4_5:
# 406 "data/maps/Sableye_Lair/scripts.pory"
	random 10
# 407 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 408 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 409 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeLairGem4_9
# 410 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeLairGem4_10
# 411 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeLairGem4_11
# 412 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeLairGem4_12
# 413 "data/maps/Sableye_Lair/scripts.pory"
	case 4, SableyeLairGem4_13
# 414 "data/maps/Sableye_Lair/scripts.pory"
	case 5, SableyeLairGem4_14
# 415 "data/maps/Sableye_Lair/scripts.pory"
	case 6, SableyeLairGem4_15
# 416 "data/maps/Sableye_Lair/scripts.pory"
	case 7, SableyeLairGem4_16
# 417 "data/maps/Sableye_Lair/scripts.pory"
	case 8, SableyeLairGem4_17
# 418 "data/maps/Sableye_Lair/scripts.pory"
	case 9, SableyeLairGem4_18
	goto SableyeLairGem4_4

SableyeLairGem4_9:
# 409 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_GHOST_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_10:
# 410 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_DRAGON_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_11:
# 411 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_DARK_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_12:
# 412 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_STEEL_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_13:
# 413 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_FAIRY_GEM
	goto SableyeLairGem4_4

SableyeLairGem4_14:
# 414 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_15:
# 415 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_16:
# 416 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_17:
# 417 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4

SableyeLairGem4_18:
# 418 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
	goto SableyeLairGem4_4


SableyeGem1::
# 438 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 439 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 442 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 443 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 445 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem1_2
SableyeGem1_1:
# 514 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem1_5
SableyeGem1_4:
# 518 "data/maps/Sableye_Lair/scripts.pory"
endsableye1script:
# 519 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 520 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem1_2:
# 446 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_0
# 448 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem1_8
SableyeGem1_7:
# 472 "data/maps/Sableye_Lair/scripts.pory"
sableye1wantstofight:
# 473 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 474 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 475 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 477 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 478 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 479 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 480 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem1_10
# 485 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem1_11
# 502 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem1_12
# 506 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem1_13
	goto SableyeGem1_1

SableyeGem1_5:
# 515 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_4

SableyeGem1_8:
# 451 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 452 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 453 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 454 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem1_20
# 455 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem1_21
SableyeGem1_18:
# 457 "data/maps/Sableye_Lair/scripts.pory"
sableye1givesgem:
# 458 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 459 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 460 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 461 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 4
# 462 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_0
# 463 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 4
# 464 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 465 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 466 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 467 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 468 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem1
# 469 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1leaves
	goto SableyeGem1_7

SableyeGem1_10:
# 481 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 482 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 483 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_11:
# 486 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 487 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 489 "data/maps/Sableye_Lair/scripts.pory"
sableye1leaves:
# 490 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_2
# 491 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 492 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 493 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 494 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 496 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem1_23
SableyeGem1_22:
# 499 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_12:
# 503 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 504 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_13:
# 507 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 508 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_20:
# 454 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1givesgem
	goto SableyeGem1_18

SableyeGem1_21:
# 455 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1wantstofight
	goto SableyeGem1_18

SableyeGem1_23:
# 497 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem1_22


SableyeGem2::
# 525 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 526 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 529 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 530 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 532 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem2_2
SableyeGem2_1:
# 602 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem2_5
SableyeGem2_4:
# 606 "data/maps/Sableye_Lair/scripts.pory"
endsableye2script:
# 607 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 608 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem2_2:
# 533 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 535 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem2_8
SableyeGem2_7:
# 559 "data/maps/Sableye_Lair/scripts.pory"
sableye2wantstofight:
# 560 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 561 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 562 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 563 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 565 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 566 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 567 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 568 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem2_10
# 573 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem2_11
# 590 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem2_12
# 594 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem2_13
	goto SableyeGem2_1

SableyeGem2_5:
# 603 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_4

SableyeGem2_8:
# 538 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 539 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 540 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 541 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem2_20
# 542 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem2_21
SableyeGem2_18:
# 544 "data/maps/Sableye_Lair/scripts.pory"
sableye2givesgem:
# 545 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 546 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 547 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 548 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 549 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 550 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 551 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 552 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 553 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 2, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 554 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 555 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem2
# 556 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2leaves
	goto SableyeGem2_7

SableyeGem2_10:
# 569 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 570 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 571 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_11:
# 574 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 575 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 577 "data/maps/Sableye_Lair/scripts.pory"
sableye2leaves:
# 578 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem2_Movement_0
# 579 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 580 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 581 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 582 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 584 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem2_23
SableyeGem2_22:
# 587 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_12:
# 591 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 592 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_13:
# 595 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 596 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_20:
# 541 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2givesgem
	goto SableyeGem2_18

SableyeGem2_21:
# 542 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2wantstofight
	goto SableyeGem2_18

SableyeGem2_23:
# 585 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem2_22


SableyeGem3::
# 613 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 614 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 617 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 618 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 620 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem3_2
SableyeGem3_1:
# 689 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem3_5
SableyeGem3_4:
# 693 "data/maps/Sableye_Lair/scripts.pory"
endsableye3script:
# 694 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 695 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem3_2:
# 621 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem1_Movement_0
# 623 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem3_8
SableyeGem3_7:
# 647 "data/maps/Sableye_Lair/scripts.pory"
sableye3wantstofight:
# 648 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 649 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 650 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 652 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 653 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 654 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 655 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem3_10
# 660 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem3_11
# 677 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem3_12
# 681 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem3_13
	goto SableyeGem3_1

SableyeGem3_5:
# 690 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_4

SableyeGem3_8:
# 626 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 627 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 628 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 629 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem3_20
# 630 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem3_21
SableyeGem3_18:
# 632 "data/maps/Sableye_Lair/scripts.pory"
sableye3givesgem:
# 633 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 634 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 635 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 636 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 3
# 637 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem1_Movement_0
# 638 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 3
# 639 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 640 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 641 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 1, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 642 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 643 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem3
# 644 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3leaves
	goto SableyeGem3_7

SableyeGem3_10:
# 656 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 657 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 658 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_11:
# 661 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 662 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 664 "data/maps/Sableye_Lair/scripts.pory"
sableye3leaves:
# 665 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem2_Movement_0
# 666 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 667 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 668 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 669 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 671 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem3_23
SableyeGem3_22:
# 674 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_12:
# 678 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 679 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_13:
# 682 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 683 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_20:
# 629 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3givesgem
	goto SableyeGem3_18

SableyeGem3_21:
# 630 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3wantstofight
	goto SableyeGem3_18

SableyeGem3_23:
# 672 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem3_22


SableyeGem4::
# 701 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 702 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 705 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 706 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 708 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem4_2
SableyeGem4_1:
# 793 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem4_5
SableyeGem4_4:
# 797 "data/maps/Sableye_Lair/scripts.pory"
endsableye4script:
# 798 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 799 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem4_2:
# 709 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 711 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem4_8
SableyeGem4_7:
# 751 "data/maps/Sableye_Lair/scripts.pory"
sableyewantstofight:
# 752 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 753 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 754 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 756 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 757 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 758 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 759 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem4_10
# 764 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem4_11
# 781 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem4_12
# 785 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem4_13
	goto SableyeGem4_1

SableyeGem4_5:
# 794 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_4

SableyeGem4_8:
# 714 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 715 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 716 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 717 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem4_20
# 718 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem4_21
SableyeGem4_18:
# 720 "data/maps/Sableye_Lair/scripts.pory"
sableyegivesgem:
# 721 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 722 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 723 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 724 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 725 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 726 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 727 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 729 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem4_26
# 742 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
SableyeGem4_25:
# 745 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 746 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 747 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 748 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye4leaves
	goto SableyeGem4_7

SableyeGem4_10:
# 760 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 761 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 762 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_11:
# 765 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 766 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 768 "data/maps/Sableye_Lair/scripts.pory"
sableye4leaves:
# 769 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem4_Movement_0
# 770 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 771 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 772 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 773 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 775 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem4_23
SableyeGem4_22:
# 778 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_12:
# 782 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 783 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_13:
# 786 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 787 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_20:
# 717 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyegivesgem
	goto SableyeGem4_18

SableyeGem4_21:
# 718 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyewantstofight
	goto SableyeGem4_18

SableyeGem4_23:
# 776 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem4_22

SableyeGem4_26:
# 732 "data/maps/Sableye_Lair/scripts.pory"
	random 4
# 733 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 734 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 735 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem4_30
# 736 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem4_31
# 737 "data/maps/Sableye_Lair/scripts.pory"
	case 2, SableyeGem4_32
# 738 "data/maps/Sableye_Lair/scripts.pory"
	case 3, SableyeGem4_33
	goto SableyeGem4_25

SableyeGem4_30:
# 735 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25

SableyeGem4_31:
# 736 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25

SableyeGem4_32:
# 737 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25

SableyeGem4_33:
# 738 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_NONE
	goto SableyeGem4_25


# 66 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_0:
# 66 "data/maps/Sableye_Lair/scripts.pory"
	face_down
	step_end

# 84 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_1:
# 84 "data/maps/Sableye_Lair/scripts.pory"
	face_up
	step_end

# 90 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_2:
# 90 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
	step_end

# 93 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_3:
# 93 "data/maps/Sableye_Lair/scripts.pory"
	jump_up
	step_end

# 108 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_4:
# 108 "data/maps/Sableye_Lair/scripts.pory"
	walk_down
# 108 "data/maps/Sableye_Lair/scripts.pory"
	face_player
	step_end

# 135 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_5:
# 135 "data/maps/Sableye_Lair/scripts.pory"
	emote_exclamation_mark
	step_end

# 154 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_6:
# 154 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
# 154 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
# 154 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
# 154 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_right
# 154 "data/maps/Sableye_Lair/scripts.pory"
	face_down
	step_end

# 157 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_7:
# 157 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
# 157 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
	step_end

# 446 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_0:
# 446 "data/maps/Sableye_Lair/scripts.pory"
	face_player
	step_end

# 460 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_1:
# 460 "data/maps/Sableye_Lair/scripts.pory"
	face_right
	step_end

# 490 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_2:
# 490 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
	step_end

# 578 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem2_Movement_0:
# 578 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_down
	step_end

# 635 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem3_Movement_0:
# 635 "data/maps/Sableye_Lair/scripts.pory"
	face_left
	step_end

# 769 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem4_Movement_0:
# 769 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
# 769 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
	step_end

SableyeLairBossSequence_Text_0:
# 60 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaaa-saaaaaa!$"

SableyeLairBossSequence_Text_1:
# 89 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaaaaa!$"

SableyeLairBossSequence_Text_2:
# 101 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye has stolen {PLAYER}'s\n"
	.string "bag!$"

SableyeLairBossSequence_Text_3:
# 103 "data/maps/Sableye_Lair/scripts.pory"
	.string "{PLAYER} is surrounded - he can't run\n"
	.string "away!$"

SableyeLairBossSequence_Text_4:
# 104 "data/maps/Sableye_Lair/scripts.pory"
	.string "{PLAYER} is surrounded - she can't\n"
	.string "run away!$"

SableyeLairBossSequence_Text_5:
# 110 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaaa!$"

SableyeLairBossSequence_Text_6:
# 142 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaa...$"

SableyeLairBossSequence_Text_7:
# 153 "data/maps/Sableye_Lair/scripts.pory"
	.string "Sa-saaa!?$"

SableyeLairBossSequence_Text_8:
# 162 "data/maps/Sableye_Lair/scripts.pory"
	.string "The remaining Sableye returns\n"
	.string "{PLAYER}'s bag out of fear!$"

SableyeLairBossSequence_Text_9:
# 185 "data/maps/Sableye_Lair/scripts.pory"
	.string "SaAaAaAaA...$"

SableyeLairBossSequence_Text_10:
# 205 "data/maps/Sableye_Lair/scripts.pory"
	.string "S-saaa...$"

SableyeLairGem1_Text_0:
# 274 "data/maps/Sableye_Lair/scripts.pory"
	.string "For some unexplicable reason, the gem's\n"
	.string "remains begin to grow back...\p"
	.string "There may be another gem here tomorrow.$"

SableyeGem1_Text_0:
# 442 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye is zealously admiring its\n"
	.string "gems. Try to get them?$"

SableyeGem1_Text_1:
# 443 "data/maps/Sableye_Lair/scripts.pory"
	.string "Yes$"

SableyeGem1_Text_2:
# 443 "data/maps/Sableye_Lair/scripts.pory"
	.string "No$"

SableyeGem1_Text_3:
# 464 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye seems scared of you, and\n"
	.string "hands you the gem willingly.$"

SableyeGem1_Text_4:
# 474 "data/maps/Sableye_Lair/scripts.pory"
	.string "SAAAAA!$"
