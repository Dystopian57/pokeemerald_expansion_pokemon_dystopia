# 1 "data/maps/Sableye_Lair/scripts.pory"


Sableye_Lair_MapScripts::
# 9 "data/maps/Sableye_Lair/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SableyeLairBossCheck
	.byte 0


SableyeLairBossCheck::
# 14 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_SABLEYELAIRANGER, 3
	goto_if_gt SableyeLairBossCheck_2
# 29 "data/maps/Sableye_Lair/scripts.pory"
	release
SableyeLairBossCheck_1:
# 30 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairBossCheck_2:
# 15 "data/maps/Sableye_Lair/scripts.pory"
	setflag canspawnsableyelairboss
# 16 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_SABLEYELAIRANGER, 4
# 17 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 18 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 19 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 20 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 21 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 22 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 23 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 24 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 26 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto SableyeLairBossCheck_1


SableyeLairBossSequence::
# 37 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset canspawnsableyelairboss, SableyeLairBossSequence_2
# 41 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 42 "data/maps/Sableye_Lair/scripts.pory"
	hidefollower
# 43 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset spawnsableyelairboss, SableyeLairBossSequence_5
# 49 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 50 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_0
# 51 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 53 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye1gone
# 54 "data/maps/Sableye_Lair/scripts.pory"
	addobject 1
# 55 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 1, 4, 6
# 56 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 57 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 59 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye2gone
# 60 "data/maps/Sableye_Lair/scripts.pory"
	addobject 2
# 61 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 2, 5, 6
# 62 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_0
# 63 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 65 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye3gone
# 66 "data/maps/Sableye_Lair/scripts.pory"
	addobject 3
# 67 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 3, 6, 6
# 68 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_0
# 69 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 71 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye4gone
# 72 "data/maps/Sableye_Lair/scripts.pory"
	addobject 4
# 73 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 4, 5, 8
# 74 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeLairBossSequence_Movement_1
# 75 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 78 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 79 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_1
# 80 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_2
# 81 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 82 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 83 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_3
# 84 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 85 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 86 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableyelairplayerbag
# 87 "data/maps/Sableye_Lair/scripts.pory"
	addobject 6
# 88 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 89 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_0
# 91 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_2
# 92 "data/maps/Sableye_Lair/scripts.pory"
	checkplayergender
# 93 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SableyeLairBossSequence_9
SableyeLairBossSequence_8:
# 94 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SableyeLairBossSequence_12
SableyeLairBossSequence_11:
# 95 "data/maps/Sableye_Lair/scripts.pory"
	setvar nobag, 2
# 96 "data/maps/Sableye_Lair/scripts.pory"
	setflag norun
# 97 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 98 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_4
# 99 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_4
# 100 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_4
# 103 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 104 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt SableyeLairBossSequence_15
# 109 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5, ITEM_NONE, SPECIES_NONE, 0, ITEM_NONE
SableyeLairBossSequence_14:
# 111 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 112 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 113 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 114 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 122 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeLairBossSequence_18
SableyeLairBossSequence_1:
# 243 "data/maps/Sableye_Lair/scripts.pory"
endsableyelairbossscript:
# 244 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairBossSequence_2:
# 38 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableyelairbossscript
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_5:
# 45 "data/maps/Sableye_Lair/scripts.pory"
	goto fightsableyelairboss
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_9:
# 93 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_3
	goto SableyeLairBossSequence_8

SableyeLairBossSequence_12:
# 94 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_3
	goto SableyeLairBossSequence_11

SableyeLairBossSequence_15:
# 105 "data/maps/Sableye_Lair/scripts.pory"
	setwilddoubleflag
# 106 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5, ITEM_NONE, SPECIES_SABLEYE, 5, ITEM_NONE
	goto SableyeLairBossSequence_14

SableyeLairBossSequence_18:
# 123 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableyelairplayerbag
# 124 "data/maps/Sableye_Lair/scripts.pory"
	addobject 6
# 125 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_5
# 126 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_PIN
# 127 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 128 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_5
# 129 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_PIN
# 130 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 131 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 132 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_5
# 134 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 135 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 136 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 138 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 139 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 140 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 142 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 143 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_6
# 144 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_6
# 145 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 146 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 147 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 6, SableyeLairBossSequence_Movement_7
# 148 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 149 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 150 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 151 "data/maps/Sableye_Lair/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_7
# 153 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 154 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 155 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 157 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 158 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 159 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 160 "data/maps/Sableye_Lair/scripts.pory"
	setvar nobag, 0
# 163 "data/maps/Sableye_Lair/scripts.pory"
	fadeoutbgm 1
# 164 "data/maps/Sableye_Lair/scripts.pory"
	fadenewbgm MUS_NONE
# 166 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 168 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 170 "data/maps/Sableye_Lair/scripts.pory"
	clearflag spawnsableyelairboss
# 171 "data/maps/Sableye_Lair/scripts.pory"
	addobject 5
# 172 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 173 "data/maps/Sableye_Lair/scripts.pory"
fightsableyelairboss:
# 174 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 175 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_8
# 178 "data/maps/Sableye_Lair/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 2, 2
# 179 "data/maps/Sableye_Lair/scripts.pory"
	setflag forceshiny
# 181 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 182 "data/maps/Sableye_Lair/scripts.pory"
	clearflag forceshiny
# 183 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 185 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 186 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeLairBossSequence_21
SableyeLairBossSequence_20:
# 193 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeLairBossSequence_24
SableyeLairBossSequence_23:
# 230 "data/maps/Sableye_Lair/scripts.pory"
playerwinssableyeskirmish:
# 231 "data/maps/Sableye_Lair/scripts.pory"
	fadeoutbgm 1
# 232 "data/maps/Sableye_Lair/scripts.pory"
	fadenewbgm MUS_RG_MT_MOON
# 233 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_RG_MT_MOON, TRUE
# 234 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_SABLEYELAIRANGER, 0
# 235 "data/maps/Sableye_Lair/scripts.pory"
	clearflag forceshiny
# 236 "data/maps/Sableye_Lair/scripts.pory"
	clearflag norun
# 239 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableyelairbossscript
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_21:
# 187 "data/maps/Sableye_Lair/scripts.pory"
	setflag caughtsableyelairboss
# 188 "data/maps/Sableye_Lair/scripts.pory"
	setflag spawnsableyelairboss
# 189 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 5
# 190 "data/maps/Sableye_Lair/scripts.pory"
	goto playerwinssableyeskirmish
	goto SableyeLairBossSequence_20

SableyeLairBossSequence_24:
# 194 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 195 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 196 "data/maps/Sableye_Lair/scripts.pory"
	setflag spawnsableyelairboss
# 197 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 5
# 198 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 199 "data/maps/Sableye_Lair/scripts.pory"
	goto playerwinssableyeskirmish
	goto SableyeLairBossSequence_23


SableyeShake::
# 249 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 250 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8004, 2
# 251 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8005, 6
# 252 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8006, 4
# 253 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_0x8007, 4
# 254 "data/maps/Sableye_Lair/scripts.pory"
	special ShakeCamera
# 255 "data/maps/Sableye_Lair/scripts.pory"
	waitse
	return


SableyeLairGem1::
# 261 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 262 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem1, SableyeLairGem1_1
# 267 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 268 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 269 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 270 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem1
# 271 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 273 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem1_1:
# 263 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 265 "data/maps/Sableye_Lair/scripts.pory"
	release
	return


SableyeLairGem2::
# 280 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 281 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem2, SableyeLairGem2_1
# 286 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 287 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 2, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 288 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 289 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem2
# 290 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 292 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem2_1:
# 282 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 284 "data/maps/Sableye_Lair/scripts.pory"
	release
	return


SableyeLairGem3::
# 299 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 300 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem3, SableyeLairGem3_1
# 305 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 306 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 1, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 307 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 308 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem3
# 309 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 311 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem3_1:
# 301 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 303 "data/maps/Sableye_Lair/scripts.pory"
	release
	return


SableyeLairGem4::
# 319 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 320 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem4, SableyeLairGem4_1
# 325 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 326 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 327 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 328 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 329 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 331 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem4_1:
# 321 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem1_Text_0
# 323 "data/maps/Sableye_Lair/scripts.pory"
	release
	return


SableyeGem1::
# 338 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 339 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 342 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 343 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 345 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem1_2
SableyeGem1_1:
# 414 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem1_5
SableyeGem1_4:
# 418 "data/maps/Sableye_Lair/scripts.pory"
endsableye1script:
# 419 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 420 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem1_2:
# 346 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_0
# 348 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem1_8
SableyeGem1_7:
# 372 "data/maps/Sableye_Lair/scripts.pory"
sableye1wantstofight:
# 373 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 374 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 375 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 377 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 378 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 379 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 380 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem1_10
# 385 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem1_11
# 402 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem1_12
# 406 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem1_13
	goto SableyeGem1_1

SableyeGem1_5:
# 415 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_4

SableyeGem1_8:
# 351 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 352 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 353 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 354 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem1_20
# 355 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem1_21
SableyeGem1_18:
# 357 "data/maps/Sableye_Lair/scripts.pory"
sableye1givesgem:
# 358 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 359 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 360 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 361 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 4
# 362 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_0
# 363 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 4
# 364 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 365 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 366 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 8, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 367 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 368 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem1
# 369 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1leaves
	goto SableyeGem1_7

SableyeGem1_10:
# 381 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 382 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 383 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_11:
# 386 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 387 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 389 "data/maps/Sableye_Lair/scripts.pory"
sableye1leaves:
# 390 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_2
# 391 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 392 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 393 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 394 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 396 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem1_23
SableyeGem1_22:
# 399 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_12:
# 403 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 404 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_13:
# 407 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeGem1_Movement_1
# 408 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem1_1

SableyeGem1_20:
# 354 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1givesgem
	goto SableyeGem1_18

SableyeGem1_21:
# 355 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye1wantstofight
	goto SableyeGem1_18

SableyeGem1_23:
# 397 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem1_22


SableyeGem2::
# 425 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 426 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 429 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 430 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 432 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem2_2
SableyeGem2_1:
# 502 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem2_5
SableyeGem2_4:
# 506 "data/maps/Sableye_Lair/scripts.pory"
endsableye2script:
# 507 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 508 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem2_2:
# 433 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 435 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem2_8
SableyeGem2_7:
# 459 "data/maps/Sableye_Lair/scripts.pory"
sableye2wantstofight:
# 460 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 461 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 462 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 463 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 465 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 466 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 467 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 468 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem2_10
# 473 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem2_11
# 490 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem2_12
# 494 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem2_13
	goto SableyeGem2_1

SableyeGem2_5:
# 503 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_4

SableyeGem2_8:
# 438 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 439 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 440 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 441 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem2_20
# 442 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem2_21
SableyeGem2_18:
# 444 "data/maps/Sableye_Lair/scripts.pory"
sableye2givesgem:
# 445 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 446 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 447 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 448 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 449 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem1_Movement_0
# 450 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 451 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 452 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 453 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 2, 2, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 454 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 455 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem2
# 456 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2leaves
	goto SableyeGem2_7

SableyeGem2_10:
# 469 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 470 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 471 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_11:
# 474 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 475 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 477 "data/maps/Sableye_Lair/scripts.pory"
sableye2leaves:
# 478 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeGem2_Movement_0
# 479 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 480 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 481 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 482 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 484 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem2_23
SableyeGem2_22:
# 487 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_12:
# 491 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 492 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_13:
# 495 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_1
# 496 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye2script
	goto SableyeGem2_1

SableyeGem2_20:
# 441 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2givesgem
	goto SableyeGem2_18

SableyeGem2_21:
# 442 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye2wantstofight
	goto SableyeGem2_18

SableyeGem2_23:
# 485 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem2_22


SableyeGem3::
# 513 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 514 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 517 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 518 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 520 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem3_2
SableyeGem3_1:
# 589 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem3_5
SableyeGem3_4:
# 593 "data/maps/Sableye_Lair/scripts.pory"
endsableye3script:
# 594 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 595 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem3_2:
# 521 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem1_Movement_0
# 523 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem3_8
SableyeGem3_7:
# 547 "data/maps/Sableye_Lair/scripts.pory"
sableye3wantstofight:
# 548 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 549 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 550 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 552 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 553 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 554 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 555 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem3_10
# 560 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem3_11
# 577 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem3_12
# 581 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem3_13
	goto SableyeGem3_1

SableyeGem3_5:
# 590 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_4

SableyeGem3_8:
# 526 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 527 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 528 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 529 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem3_20
# 530 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem3_21
SableyeGem3_18:
# 532 "data/maps/Sableye_Lair/scripts.pory"
sableye3givesgem:
# 533 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 534 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 535 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 536 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 3
# 537 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem1_Movement_0
# 538 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 3
# 539 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 540 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 541 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 1, 6, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 542 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 543 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem3
# 544 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3leaves
	goto SableyeGem3_7

SableyeGem3_10:
# 556 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 557 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 558 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_11:
# 561 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 562 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 564 "data/maps/Sableye_Lair/scripts.pory"
sableye3leaves:
# 565 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem2_Movement_0
# 566 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 567 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 568 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 569 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 571 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem3_23
SableyeGem3_22:
# 574 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_12:
# 578 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 579 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_13:
# 582 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeGem3_Movement_0
# 583 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye3script
	goto SableyeGem3_1

SableyeGem3_20:
# 529 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3givesgem
	goto SableyeGem3_18

SableyeGem3_21:
# 530 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye3wantstofight
	goto SableyeGem3_18

SableyeGem3_23:
# 572 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem3_22


SableyeGem4::
# 601 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 602 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 605 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_0
# 606 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem1_Text_1, SableyeGem1_Text_2
# 608 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem4_2
SableyeGem4_1:
# 677 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem4_5
SableyeGem4_4:
# 681 "data/maps/Sableye_Lair/scripts.pory"
endsableye4script:
# 682 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 683 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem4_2:
# 609 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 611 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem4_8
SableyeGem4_7:
# 635 "data/maps/Sableye_Lair/scripts.pory"
sableyewantstofight:
# 636 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 637 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_4
# 638 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 640 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 641 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 642 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 643 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem4_10
# 648 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem4_11
# 665 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem4_12
# 669 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem4_13
	goto SableyeGem4_1

SableyeGem4_5:
# 678 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_4

SableyeGem4_8:
# 614 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 615 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 616 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 617 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem4_20
# 618 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem4_21
SableyeGem4_18:
# 620 "data/maps/Sableye_Lair/scripts.pory"
sableyegivesgem:
# 621 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 622 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 623 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 624 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 625 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem1_Movement_0
# 626 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 627 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem1_Text_3
# 628 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 629 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 630 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 631 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 632 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye4leaves
	goto SableyeGem4_7

SableyeGem4_10:
# 644 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 645 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 646 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_11:
# 649 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 650 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 652 "data/maps/Sableye_Lair/scripts.pory"
sableye4leaves:
# 653 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem4_Movement_0
# 654 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 655 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_DIG
# 656 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 657 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 659 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem4_23
SableyeGem4_22:
# 662 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_12:
# 666 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 667 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_13:
# 670 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 671 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye4script
	goto SableyeGem4_1

SableyeGem4_20:
# 617 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyegivesgem
	goto SableyeGem4_18

SableyeGem4_21:
# 618 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyewantstofight
	goto SableyeGem4_18

SableyeGem4_23:
# 660 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem4_22


# 56 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_0:
# 56 "data/maps/Sableye_Lair/scripts.pory"
	face_down
	step_end

# 74 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_1:
# 74 "data/maps/Sableye_Lair/scripts.pory"
	face_up
	step_end

# 80 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_2:
# 80 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
	step_end

# 83 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_3:
# 83 "data/maps/Sableye_Lair/scripts.pory"
	jump_up
	step_end

# 98 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_4:
# 98 "data/maps/Sableye_Lair/scripts.pory"
	walk_down
# 98 "data/maps/Sableye_Lair/scripts.pory"
	face_player
	step_end

# 125 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_5:
# 125 "data/maps/Sableye_Lair/scripts.pory"
	emote_exclamation_mark
	step_end

# 144 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_6:
# 144 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
# 144 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
# 144 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
# 144 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_right
# 144 "data/maps/Sableye_Lair/scripts.pory"
	face_down
	step_end

# 147 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_7:
# 147 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
# 147 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
	step_end

# 346 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_0:
# 346 "data/maps/Sableye_Lair/scripts.pory"
	face_player
	step_end

# 360 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_1:
# 360 "data/maps/Sableye_Lair/scripts.pory"
	face_right
	step_end

# 390 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem1_Movement_2:
# 390 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
	step_end

# 478 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem2_Movement_0:
# 478 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_down
	step_end

# 535 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem3_Movement_0:
# 535 "data/maps/Sableye_Lair/scripts.pory"
	face_left
	step_end

# 653 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem4_Movement_0:
# 653 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
# 653 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
	step_end

SableyeLairBossSequence_Text_0:
# 50 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaaa-saaaaaa!$"

SableyeLairBossSequence_Text_1:
# 79 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaaaaa!$"

SableyeLairBossSequence_Text_2:
# 91 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye has stolen {PLAYER}'s\n"
	.string "bag!$"

SableyeLairBossSequence_Text_3:
# 93 "data/maps/Sableye_Lair/scripts.pory"
	.string "{PLAYER} is surrounded - he can't run\n"
	.string "away!$"

SableyeLairBossSequence_Text_4:
# 100 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaaa!$"

SableyeLairBossSequence_Text_5:
# 132 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaa...$"

SableyeLairBossSequence_Text_6:
# 143 "data/maps/Sableye_Lair/scripts.pory"
	.string "Sa-saaa!?$"

SableyeLairBossSequence_Text_7:
# 152 "data/maps/Sableye_Lair/scripts.pory"
	.string "The remaining Sableye returns\n"
	.string "{PLAYER}'s bag out of fear!$"

SableyeLairBossSequence_Text_8:
# 175 "data/maps/Sableye_Lair/scripts.pory"
	.string "SaAaAaAaA...$"

SableyeLairBossSequence_Text_9:
# 195 "data/maps/Sableye_Lair/scripts.pory"
	.string "S-saaa...$"

SableyeLairGem1_Text_0:
# 263 "data/maps/Sableye_Lair/scripts.pory"
	.string "For some unexplicable reason, the gem's\n"
	.string "remains begin to grow back...\p"
	.string "There may be another gem here tomorrow.$"

SableyeGem1_Text_0:
# 342 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye is zealously admiring its\n"
	.string "gems. Battle it for them?$"

SableyeGem1_Text_1:
# 343 "data/maps/Sableye_Lair/scripts.pory"
	.string "Yes$"

SableyeGem1_Text_2:
# 343 "data/maps/Sableye_Lair/scripts.pory"
	.string "No$"

SableyeGem1_Text_3:
# 364 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye seems scared of you, and\n"
	.string "hands you the gem willingly.$"

SableyeGem1_Text_4:
# 374 "data/maps/Sableye_Lair/scripts.pory"
	.string "SAAAAA!$"
