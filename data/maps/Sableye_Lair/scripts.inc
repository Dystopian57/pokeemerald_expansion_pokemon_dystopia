# 1 "data/maps/Sableye_Lair/scripts.pory"


Sableye_Lair_MapScripts::
# 9 "data/maps/Sableye_Lair/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SableyeLairBossCheck
	.byte 0


SableyeLairBossCheck::
# 14 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_SABLEYELAIRANGER, 0
	goto_if_ne SableyeLairBossCheck_2
# 35 "data/maps/Sableye_Lair/scripts.pory"
	release
SableyeLairBossCheck_1:
# 38 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairBossCheck_2:
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
# 42 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 43 "data/maps/Sableye_Lair/scripts.pory"
	hidefollower
# 47 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset spawnsableyelairboss, SableyeLairBossSequence_2
# 53 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 54 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_0
# 55 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 57 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye1gone
# 58 "data/maps/Sableye_Lair/scripts.pory"
	addobject 1
# 59 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 1, 4, 6
# 60 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 61 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 63 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye2gone
# 64 "data/maps/Sableye_Lair/scripts.pory"
	addobject 2
# 65 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 2, 5, 6
# 66 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_0
# 67 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 69 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye3gone
# 70 "data/maps/Sableye_Lair/scripts.pory"
	addobject 3
# 71 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 3, 6, 6
# 72 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_0
# 73 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 75 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableye4gone
# 76 "data/maps/Sableye_Lair/scripts.pory"
	addobject 4
# 77 "data/maps/Sableye_Lair/scripts.pory"
	setobjectxy 4, 5, 8
# 78 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 4, SableyeLairBossSequence_Movement_1
# 79 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 82 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 83 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_1
# 84 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_2
# 85 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 86 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 87 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_3
# 88 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 89 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 90 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableyelairplayerbag
# 91 "data/maps/Sableye_Lair/scripts.pory"
	addobject 6
# 92 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 2
# 93 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_0
# 95 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_2
# 96 "data/maps/Sableye_Lair/scripts.pory"
	checkplayergender
# 97 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SableyeLairBossSequence_6
SableyeLairBossSequence_5:
# 98 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SableyeLairBossSequence_9
SableyeLairBossSequence_8:
# 99 "data/maps/Sableye_Lair/scripts.pory"
	setvar nobag, 2
# 100 "data/maps/Sableye_Lair/scripts.pory"
	setflag norun
# 101 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 102 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_4
# 103 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_4
# 104 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_4
# 107 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 108 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt SableyeLairBossSequence_12
# 113 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5, ITEM_NONE, SPECIES_NONE, 0, ITEM_NONE
SableyeLairBossSequence_11:
# 115 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 116 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 117 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 118 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 120 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq SableyeLairBossSequence_16
SableyeLairBossSequence_15:
# 126 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeLairBossSequence_18
SableyeLairBossSequence_1:
# 254 "data/maps/Sableye_Lair/scripts.pory"
endsableyelairbossscript:
# 255 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeLairBossSequence_2:
# 49 "data/maps/Sableye_Lair/scripts.pory"
	goto fightsableyelairboss
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_6:
# 97 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_3
	goto SableyeLairBossSequence_5

SableyeLairBossSequence_9:
# 98 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_3
	goto SableyeLairBossSequence_8

SableyeLairBossSequence_12:
# 109 "data/maps/Sableye_Lair/scripts.pory"
	setwilddoubleflag
# 110 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5, ITEM_NONE, SPECIES_SABLEYE, 5, ITEM_NONE
	goto SableyeLairBossSequence_11

SableyeLairBossSequence_16:
# 121 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 122 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 123 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyesbeatplayer
	goto SableyeLairBossSequence_15

SableyeLairBossSequence_18:
# 127 "data/maps/Sableye_Lair/scripts.pory"
	clearflag sableyelairplayerbag
# 128 "data/maps/Sableye_Lair/scripts.pory"
	addobject 6
# 129 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_5
# 130 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_PIN
# 131 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 132 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 3, SableyeLairBossSequence_Movement_5
# 133 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_PIN
# 134 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 135 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 136 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_5
# 138 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye1gone
# 139 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 140 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 142 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye3gone
# 143 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 3
# 144 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 146 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 147 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_6
# 148 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 2, SableyeLairBossSequence_Movement_6
# 149 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 150 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_LEDGE
# 151 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 6, SableyeLairBossSequence_Movement_7
# 152 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 153 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 154 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 155 "data/maps/Sableye_Lair/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_7
# 157 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye2gone
# 158 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 2
# 159 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 161 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 162 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 4
# 163 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 164 "data/maps/Sableye_Lair/scripts.pory"
	setvar nobag, 0
# 166 "data/maps/Sableye_Lair/scripts.pory"
	clearflag norun
# 168 "data/maps/Sableye_Lair/scripts.pory"
	fadeoutbgm 1
# 169 "data/maps/Sableye_Lair/scripts.pory"
	fadenewbgm MUS_NONE
# 171 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 173 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 175 "data/maps/Sableye_Lair/scripts.pory"
	clearflag spawnsableyelairboss
# 176 "data/maps/Sableye_Lair/scripts.pory"
	addobject 5
# 177 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 178 "data/maps/Sableye_Lair/scripts.pory"
fightsableyelairboss:
# 179 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 180 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_8
# 181 "data/maps/Sableye_Lair/scripts.pory"
	setflag norun
# 183 "data/maps/Sableye_Lair/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 2, 2, 2
# 184 "data/maps/Sableye_Lair/scripts.pory"
	setflag forceshiny
# 186 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 187 "data/maps/Sableye_Lair/scripts.pory"
	clearflag forceshiny
# 188 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 190 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 191 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeLairBossSequence_21
SableyeLairBossSequence_20:
# 198 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeLairBossSequence_24
SableyeLairBossSequence_23:
# 207 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq SableyeLairBossSequence_27
SableyeLairBossSequence_26:
# 235 "data/maps/Sableye_Lair/scripts.pory"
playerwinssableyeskirmish:
# 240 "data/maps/Sableye_Lair/scripts.pory"
	fadeoutbgm 1
# 242 "data/maps/Sableye_Lair/scripts.pory"
	fadenewbgm MUS_RG_MT_MOON
# 243 "data/maps/Sableye_Lair/scripts.pory"
	playbgm MUS_RG_MT_MOON, TRUE
# 245 "data/maps/Sableye_Lair/scripts.pory"
	setvar VAR_SABLEYELAIRANGER, 0
# 247 "data/maps/Sableye_Lair/scripts.pory"
	clearflag forceshiny
# 250 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableyelairbossscript
	goto SableyeLairBossSequence_1

SableyeLairBossSequence_21:
# 192 "data/maps/Sableye_Lair/scripts.pory"
	setflag caughtsableyelairboss
# 193 "data/maps/Sableye_Lair/scripts.pory"
	setflag spawnsableyelairboss
# 194 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 5
# 195 "data/maps/Sableye_Lair/scripts.pory"
	goto playerwinssableyeskirmish
	goto SableyeLairBossSequence_20

SableyeLairBossSequence_24:
# 199 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 200 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 201 "data/maps/Sableye_Lair/scripts.pory"
	setflag spawnsableyelairboss
# 202 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 5
# 203 "data/maps/Sableye_Lair/scripts.pory"
	call SableyeShake
# 204 "data/maps/Sableye_Lair/scripts.pory"
	goto playerwinssableyeskirmish
	goto SableyeLairBossSequence_23

SableyeLairBossSequence_27:
# 209 "data/maps/Sableye_Lair/scripts.pory"
sableyesbeatplayer:
# 210 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 211 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_10
# 212 "data/maps/Sableye_Lair/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 213 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_SCRATCH
# 214 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 215 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_SCRATCH
# 216 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 217 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_M_SCRATCH
# 218 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 219 "data/maps/Sableye_Lair/scripts.pory"
	playse SE_FLEE
# 220 "data/maps/Sableye_Lair/scripts.pory"
	waitse
# 221 "data/maps/Sableye_Lair/scripts.pory"
	checkplayergender
# 222 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SableyeLairBossSequence_30
SableyeLairBossSequence_29:
# 225 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SableyeLairBossSequence_33
SableyeLairBossSequence_32:
# 228 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 6
# 229 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyelairplayerbag
# 230 "data/maps/Sableye_Lair/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 231 "data/maps/Sableye_Lair/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 2, 6
# 232 "data/maps/Sableye_Lair/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto SableyeLairBossSequence_26

SableyeLairBossSequence_30:
# 223 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_11
	goto SableyeLairBossSequence_29

SableyeLairBossSequence_33:
# 226 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_12
	goto SableyeLairBossSequence_32


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


SableyeLairGem4::
# 271 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 272 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set sableyegem4, SableyeLairGem4_1
# 276 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 277 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 278 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 279 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 280 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem4_Text_0
# 282 "data/maps/Sableye_Lair/scripts.pory"
	releaseall
	end

SableyeLairGem4_1:
# 273 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairGem4_Text_0
	return


SableyeGem4::
# 291 "data/maps/Sableye_Lair/scripts.pory"
	lock
# 292 "data/maps/Sableye_Lair/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 298 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem4_Text_0
# 299 "data/maps/Sableye_Lair/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, SableyeGem4_Text_1, SableyeGem4_Text_2
# 301 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SableyeGem4_2
SableyeGem4_1:
# 369 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SableyeGem4_5
SableyeGem4_4:
# 373 "data/maps/Sableye_Lair/scripts.pory"
endsableye1script:
# 374 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 375 "data/maps/Sableye_Lair/scripts.pory"
	release
	return

SableyeGem4_2:
# 302 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem4_Movement_0
# 304 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_set caughtsableyelairboss, SableyeGem4_8
SableyeGem4_7:
# 328 "data/maps/Sableye_Lair/scripts.pory"
sableyewantstofight:
# 329 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_HIGH_PITCH
# 330 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem4_Text_4
# 331 "data/maps/Sableye_Lair/scripts.pory"
	waitmessage
# 333 "data/maps/Sableye_Lair/scripts.pory"
	setwildbattle SPECIES_SABLEYE, 5
# 334 "data/maps/Sableye_Lair/scripts.pory"
	dowildbattle
# 335 "data/maps/Sableye_Lair/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 336 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SableyeGem4_10
# 341 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SableyeGem4_11
# 357 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SableyeGem4_12
# 361 "data/maps/Sableye_Lair/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SableyeGem4_13
	goto SableyeGem4_1

SableyeGem4_5:
# 370 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem4_4

SableyeGem4_8:
# 307 "data/maps/Sableye_Lair/scripts.pory"
	random 2
# 308 "data/maps/Sableye_Lair/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 309 "data/maps/Sableye_Lair/scripts.pory"
	switch VAR_RESULT
# 310 "data/maps/Sableye_Lair/scripts.pory"
	case 0, SableyeGem4_20
# 311 "data/maps/Sableye_Lair/scripts.pory"
	case 1, SableyeGem4_21
SableyeGem4_18:
# 313 "data/maps/Sableye_Lair/scripts.pory"
sableyegivesgem:
# 314 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 315 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 316 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 317 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 318 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem4_Movement_0
# 319 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement 1
# 320 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeGem4_Text_3
# 321 "data/maps/Sableye_Lair/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 322 "data/maps/Sableye_Lair/scripts.pory"
	setmetatile 9, 5, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
# 323 "data/maps/Sableye_Lair/scripts.pory"
	special DrawWholeMapView
# 324 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableyegem4
# 325 "data/maps/Sableye_Lair/scripts.pory"
	goto sableye4leaves
	goto SableyeGem4_7

SableyeGem4_10:
# 337 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 338 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 339 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem4_1

SableyeGem4_11:
# 342 "data/maps/Sableye_Lair/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_WEAK
# 343 "data/maps/Sableye_Lair/scripts.pory"
	msgbox SableyeLairBossSequence_Text_9
# 345 "data/maps/Sableye_Lair/scripts.pory"
sableye4leaves:
# 346 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeGem4_Movement_1
# 347 "data/maps/Sableye_Lair/scripts.pory"
	waitmovement
# 348 "data/maps/Sableye_Lair/scripts.pory"
	setflag sableye4gone
# 349 "data/maps/Sableye_Lair/scripts.pory"
	removeobject 1
# 351 "data/maps/Sableye_Lair/scripts.pory"
	goto_if_unset caughtsableyelairboss, SableyeGem4_23
SableyeGem4_22:
# 354 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem4_1

SableyeGem4_12:
# 358 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 359 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem4_1

SableyeGem4_13:
# 362 "data/maps/Sableye_Lair/scripts.pory"
	applymovement 1, SableyeLairBossSequence_Movement_0
# 363 "data/maps/Sableye_Lair/scripts.pory"
	goto endsableye1script
	goto SableyeGem4_1

SableyeGem4_20:
# 310 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyegivesgem
	goto SableyeGem4_18

SableyeGem4_21:
# 311 "data/maps/Sableye_Lair/scripts.pory"
	goto sableyewantstofight
	goto SableyeGem4_18

SableyeGem4_23:
# 352 "data/maps/Sableye_Lair/scripts.pory"
	addvar VAR_SABLEYELAIRANGER, + 1
	goto SableyeGem4_22


# 60 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_0:
# 60 "data/maps/Sableye_Lair/scripts.pory"
	face_down
	step_end

# 78 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_1:
# 78 "data/maps/Sableye_Lair/scripts.pory"
	face_up
	step_end

# 84 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_2:
# 84 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
	step_end

# 87 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_3:
# 87 "data/maps/Sableye_Lair/scripts.pory"
	jump_up
	step_end

# 102 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_4:
# 102 "data/maps/Sableye_Lair/scripts.pory"
	walk_down
# 102 "data/maps/Sableye_Lair/scripts.pory"
	face_player
	step_end

# 129 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_5:
# 129 "data/maps/Sableye_Lair/scripts.pory"
	emote_exclamation_mark
	step_end

# 148 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_6:
# 148 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
# 148 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
# 148 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
# 148 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_right
# 148 "data/maps/Sableye_Lair/scripts.pory"
	face_down
	step_end

# 151 "data/maps/Sableye_Lair/scripts.pory"
SableyeLairBossSequence_Movement_7:
# 151 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
# 151 "data/maps/Sableye_Lair/scripts.pory"
	jump_down
	step_end

# 302 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem4_Movement_0:
# 302 "data/maps/Sableye_Lair/scripts.pory"
	face_player
	step_end

# 346 "data/maps/Sableye_Lair/scripts.pory"
SableyeGem4_Movement_1:
# 346 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_left
# 346 "data/maps/Sableye_Lair/scripts.pory"
	walk_fast_up
	step_end

SableyeLairBossSequence_Text_0:
# 54 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaaa-saaaaaa!$"

SableyeLairBossSequence_Text_1:
# 83 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaaaaa!$"

SableyeLairBossSequence_Text_2:
# 95 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye has stolen {PLAYER}'s\n"
	.string "bag!$"

SableyeLairBossSequence_Text_3:
# 97 "data/maps/Sableye_Lair/scripts.pory"
	.string "{PLAYER} is surrounded - he can't run\n"
	.string "away!$"

SableyeLairBossSequence_Text_4:
# 104 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaaa!$"

SableyeLairBossSequence_Text_5:
# 136 "data/maps/Sableye_Lair/scripts.pory"
	.string "Saaa-saaaa...$"

SableyeLairBossSequence_Text_6:
# 147 "data/maps/Sableye_Lair/scripts.pory"
	.string "Sa-saaa!?$"

SableyeLairBossSequence_Text_7:
# 156 "data/maps/Sableye_Lair/scripts.pory"
	.string "The remaining Sableye returns\n"
	.string "{PLAYER}'s bag out of fear!$"

SableyeLairBossSequence_Text_8:
# 180 "data/maps/Sableye_Lair/scripts.pory"
	.string "SaAaAaAaA...$"

SableyeLairBossSequence_Text_9:
# 200 "data/maps/Sableye_Lair/scripts.pory"
	.string "S-saaa...$"

SableyeLairBossSequence_Text_10:
# 211 "data/maps/Sableye_Lair/scripts.pory"
	.string "SAAAA!$"

SableyeLairBossSequence_Text_11:
# 223 "data/maps/Sableye_Lair/scripts.pory"
	.string "{PLAYER} manages to recover his bag,\n"
	.string "but is forced to retreat home to nurse\l"
	.string "his wounds and his Pokémon...$"

SableyeLairBossSequence_Text_12:
# 226 "data/maps/Sableye_Lair/scripts.pory"
	.string "{PLAYER} manages to recover her bag,\n"
	.string "but is forced to retreat home to nurse\l"
	.string "her wounds and her Pokémon...$"

SableyeLairGem4_Text_0:
# 273 "data/maps/Sableye_Lair/scripts.pory"
	.string "For some unexplicable reason, the gem's\n"
	.string "remains begin to grow back...\p"
	.string "There may be another gem here tomorrow.$"

SableyeGem4_Text_0:
# 298 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye is zealously admiring its\n"
	.string "gems. Battle it for them?$"

SableyeGem4_Text_1:
# 299 "data/maps/Sableye_Lair/scripts.pory"
	.string "Yes$"

SableyeGem4_Text_2:
# 299 "data/maps/Sableye_Lair/scripts.pory"
	.string "No$"

SableyeGem4_Text_3:
# 320 "data/maps/Sableye_Lair/scripts.pory"
	.string "The Sableye seems scared of you, and\n"
	.string "hands you the gem willingly.$"

SableyeGem4_Text_4:
# 330 "data/maps/Sableye_Lair/scripts.pory"
	.string "SAAAAA!$"
