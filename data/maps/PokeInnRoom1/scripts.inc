# 1 "data/maps/PokeInnRoom1/scripts.pory"


PokeInnRoom1_MapScripts::
# 7 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPCInn
# 8 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoadTradedFightingTypeOW
# 9 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightNPCInn
# 10 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LoadTradedFightingTypeOW
	.byte 0


LoadTradedFightingTypeOW::
# 20 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq LoadTradedFightingTypeOW_2
LoadTradedFightingTypeOW_1:
# 27 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq LoadTradedFightingTypeOW_5
LoadTradedFightingTypeOW_4:
# 33 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

LoadTradedFightingTypeOW_2:
# 21 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 11
# 22 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 11, 5, 11
# 23 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 11, LoadTradedFightingTypeOW_Movement_0
	goto LoadTradedFightingTypeOW_1

LoadTradedFightingTypeOW_5:
# 28 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 12
# 29 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 12, 5, 11
# 30 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 12, LoadTradedFightingTypeOW_Movement_0
	goto LoadTradedFightingTypeOW_4


DayNightNPCInn::
# 39 "data/maps/PokeInnRoom1/scripts.pory"
	gettimeofday
# 40 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightNPCInn_2
DayNightNPCInn_1:
# 45 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightNPCInn_5
DayNightNPCInn_4:
# 50 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightNPCInn_8
DayNightNPCInn_7:
# 55 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightNPCInn_11
DayNightNPCInn_10:
# 60 "data/maps/PokeInnRoom1/scripts.pory"
endofdaynightnpcinn:
# 61 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

DayNightNPCInn_2:
# 41 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag daynpc
# 42 "data/maps/PokeInnRoom1/scripts.pory"
	setflag nightnpc
# 43 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto DayNightNPCInn_1

DayNightNPCInn_5:
# 46 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag daynpc
# 47 "data/maps/PokeInnRoom1/scripts.pory"
	setflag nightnpc
# 48 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto DayNightNPCInn_4

DayNightNPCInn_8:
# 51 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag nightnpc
# 52 "data/maps/PokeInnRoom1/scripts.pory"
	setflag daynpc
# 53 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto DayNightNPCInn_7

DayNightNPCInn_11:
# 56 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag nightnpc
# 57 "data/maps/PokeInnRoom1/scripts.pory"
	setflag daynpc
# 58 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto DayNightNPCInn_10


OldaleUsedInnBin::
# 65 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 66 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALEUSEDINNBIN, OldaleUsedInnBin_2
# 71 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_1
OldaleUsedInnBin_1:
# 72 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

OldaleUsedInnBin_2:
# 67 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_0
# 68 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_X_SP_DEF
# 69 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_ITEM_OLDALEUSEDINNBIN
	goto OldaleUsedInnBin_1


OldaleInnRoomOldLady::
# 77 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 78 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 79 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, OldaleInnRoomOldLady_Movement_0
# 80 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldLady_Text_0
# 82 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


OldaleInnRoomOldMan::
# 86 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 87 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 88 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, OldaleInnRoomOldLady_Movement_0
# 89 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_0
# 92 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_1
# 93 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


PokeInnRoom1Girl::
# 97 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 98 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, OldaleInnRoomOldLady_Movement_0
# 99 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 101 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset showedoldaleinngirldoll, PokeInnRoom1Girl_2
PokeInnRoom1Girl_1:
# 171 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_6
PokeInnRoom1Girl_4:
# 174 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_13
PokeInnRoom1Girl_11:
# 180 "data/maps/PokeInnRoom1/scripts.pory"
endoldalepokeinnroom1girl:
# 181 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

PokeInnRoom1Girl_2:
# 103 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_0
# 106 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_9
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_5:
# 172 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_11
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_6:
# 171 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset anneandfamilygone, PokeInnRoom1Girl_5
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_9:
# 107 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 108 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_1
# 110 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_PIKACHU_SAFE, NO_PARTY_SCREEN
# 111 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1Girl_16
# 165 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_12:
# 175 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_12
	goto PokeInnRoom1Girl_11

PokeInnRoom1Girl_13:
# 174 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set anneandfamilygone, PokeInnRoom1Girl_12
	goto PokeInnRoom1Girl_11

PokeInnRoom1Girl_16:
# 113 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_1
# 114 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 115 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_2
# 116 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_3, PokeInnRoom1Girl_Text_4
# 117 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1Girl_20
PokeInnRoom1Girl_19:
# 159 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1Girl_22
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_20:
# 118 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 119 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 120 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 122 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_2
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 2, 9
# 125 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoadTradedFightingTypeOW_Movement_0
# 130 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 1, 10
# 131 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 133 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_5
# 134 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_PIKACHU_SAFE, CRY_MODE_NORMAL
# 135 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_6
# 137 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_7
# 138 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 139 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 141 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 144 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 0, 0
# 145 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_3
# 146 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 150 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_8
# 151 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 152 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_9
# 154 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 155 "data/maps/PokeInnRoom1/scripts.pory"
	setflag showedoldaleinngirldoll
# 156 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_19

PokeInnRoom1Girl_22:
# 160 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_10
# 161 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1


PokeInnRoom1WheelchairBoy::
# 185 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 186 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 187 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 190 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set wheelchairtradequestdone, PokeInnRoom1WheelchairBoy_2
PokeInnRoom1WheelchairBoy_1:
# 198 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairtradequestdone, PokeInnRoom1WheelchairBoy_4
	return

PokeInnRoom1WheelchairBoy_2:
# 192 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_0
# 196 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_1

PokeInnRoom1WheelchairBoy_4:
# 201 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_7
PokeInnRoom1WheelchairBoy_6:
# 224 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_10
PokeInnRoom1WheelchairBoy_9:
# 235 "data/maps/PokeInnRoom1/scripts.pory"
didyoubringanyfighttypes:
# 236 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 237 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_16
PokeInnRoom1WheelchairBoy_15:
# 239 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_22
PokeInnRoom1WheelchairBoy_21:
# 242 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 243 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_25
PokeInnRoom1WheelchairBoy_24:
# 245 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_28
PokeInnRoom1WheelchairBoy_27:
# 248 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 249 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_31
PokeInnRoom1WheelchairBoy_30:
# 251 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_34
PokeInnRoom1WheelchairBoy_33:
# 256 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 257 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9, PokeInnRoom1WheelchairBoy_Text_10
# 259 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_37
PokeInnRoom1WheelchairBoy_36:
# 272 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_40
PokeInnRoom1WheelchairBoy_39:
# 284 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_46
PokeInnRoom1WheelchairBoy_45:
# 294 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_54
PokeInnRoom1WheelchairBoy_53:
# 296 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_62
PokeInnRoom1WheelchairBoy_61:
# 456 "data/maps/PokeInnRoom1/scripts.pory"
backtowheelchairkidaftertrade:
# 457 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_22
# 458 "data/maps/PokeInnRoom1/scripts.pory"
	call ArmWrestleShake
# 459 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_23
# 460 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_SWAGGER2
# 461 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 462 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_SWAGGER2
# 463 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_24
# 464 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_YAWN
# 465 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_25
# 466 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 467 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_26
# 471 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 473 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_0
# 474 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_0
# 475 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_27
# 476 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 477 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 478 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_3
# 479 "data/maps/PokeInnRoom1/scripts.pory"
	setflag wheelchairtradequestdone
# 480 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
# 482 "data/maps/PokeInnRoom1/scripts.pory"
donthaveanyfightingtotrade:
# 483 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_28
# 484 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 0
# 485 "data/maps/PokeInnRoom1/scripts.pory"
endofwheelchairkidscript:
# 486 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

PokeInnRoom1WheelchairBoy_7:
# 203 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_1
# 205 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_3, PokeInnRoom1Girl_Text_4
# 207 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_13
PokeInnRoom1WheelchairBoy_12:
# 211 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_19
PokeInnRoom1WheelchairBoy_18:
# 214 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_4
# 221 "data/maps/PokeInnRoom1/scripts.pory"
	setflag wheelchairboyaskedpokemon
# 222 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_6

PokeInnRoom1WheelchairBoy_10:
# 225 "data/maps/PokeInnRoom1/scripts.pory"
	goto didyoubringanyfighttypes
	goto PokeInnRoom1WheelchairBoy_9

PokeInnRoom1WheelchairBoy_13:
# 208 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_2
	goto PokeInnRoom1WheelchairBoy_12

PokeInnRoom1WheelchairBoy_16:
# 238 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MANCHINE
	goto PokeInnRoom1WheelchairBoy_15

PokeInnRoom1WheelchairBoy_19:
# 212 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_3
	goto PokeInnRoom1WheelchairBoy_18

PokeInnRoom1WheelchairBoy_22:
# 240 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_21

PokeInnRoom1WheelchairBoy_25:
# 244 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MAKUHITA
	goto PokeInnRoom1WheelchairBoy_24

PokeInnRoom1WheelchairBoy_28:
# 246 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_27

PokeInnRoom1WheelchairBoy_31:
# 250 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_SCRAGGY
	goto PokeInnRoom1WheelchairBoy_30

PokeInnRoom1WheelchairBoy_34:
# 252 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_33

PokeInnRoom1WheelchairBoy_37:
# 260 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 261 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_43
PokeInnRoom1WheelchairBoy_42:
# 268 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_51
	goto PokeInnRoom1WheelchairBoy_36

PokeInnRoom1WheelchairBoy_40:
# 273 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 274 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_49
PokeInnRoom1WheelchairBoy_48:
# 280 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_59
	goto PokeInnRoom1WheelchairBoy_39

PokeInnRoom1WheelchairBoy_43:
# 263 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_11
# 264 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 1
# 265 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_42

PokeInnRoom1WheelchairBoy_46:
# 285 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 286 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_57
PokeInnRoom1WheelchairBoy_56:
# 290 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_64
	goto PokeInnRoom1WheelchairBoy_45

PokeInnRoom1WheelchairBoy_49:
# 276 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 277 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 2
# 278 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_48

PokeInnRoom1WheelchairBoy_51:
# 269 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_36

PokeInnRoom1WheelchairBoy_54:
# 294 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_53

PokeInnRoom1WheelchairBoy_57:
# 288 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_13
	goto PokeInnRoom1WheelchairBoy_56

PokeInnRoom1WheelchairBoy_59:
# 281 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_39

PokeInnRoom1WheelchairBoy_62:
# 300 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 302 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_67
PokeInnRoom1WheelchairBoy_66:
# 304 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_70
PokeInnRoom1WheelchairBoy_69:
# 307 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 309 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_73
PokeInnRoom1WheelchairBoy_72:
# 311 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_76
PokeInnRoom1WheelchairBoy_75:
# 314 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 316 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_79
PokeInnRoom1WheelchairBoy_78:
# 318 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_82
PokeInnRoom1WheelchairBoy_81:
# 323 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 324 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9, PokeInnRoom1WheelchairBoy_Text_10
# 327 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_85
PokeInnRoom1WheelchairBoy_84:
# 337 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_88
PokeInnRoom1WheelchairBoy_87:
# 347 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_94
PokeInnRoom1WheelchairBoy_93:
# 357 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_102
PokeInnRoom1WheelchairBoy_101:
# 359 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_109
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_64:
# 291 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_45

PokeInnRoom1WheelchairBoy_67:
# 303 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CROAGUNK
	goto PokeInnRoom1WheelchairBoy_66

PokeInnRoom1WheelchairBoy_70:
# 305 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_69

PokeInnRoom1WheelchairBoy_73:
# 310 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MEDITITE
	goto PokeInnRoom1WheelchairBoy_72

PokeInnRoom1WheelchairBoy_76:
# 312 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_75

PokeInnRoom1WheelchairBoy_79:
# 317 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_KAMOKEN
	goto PokeInnRoom1WheelchairBoy_78

PokeInnRoom1WheelchairBoy_82:
# 319 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_81

PokeInnRoom1WheelchairBoy_85:
# 328 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 329 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_91
PokeInnRoom1WheelchairBoy_90:
# 333 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_99
	goto PokeInnRoom1WheelchairBoy_84

PokeInnRoom1WheelchairBoy_88:
# 338 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 339 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_97
PokeInnRoom1WheelchairBoy_96:
# 343 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_107
	goto PokeInnRoom1WheelchairBoy_87

PokeInnRoom1WheelchairBoy_91:
# 331 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_14
	goto PokeInnRoom1WheelchairBoy_90

PokeInnRoom1WheelchairBoy_94:
# 348 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 349 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_105
PokeInnRoom1WheelchairBoy_104:
# 353 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_111
	goto PokeInnRoom1WheelchairBoy_93

PokeInnRoom1WheelchairBoy_97:
# 341 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_15
	goto PokeInnRoom1WheelchairBoy_96

PokeInnRoom1WheelchairBoy_99:
# 334 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_84

PokeInnRoom1WheelchairBoy_102:
# 357 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_101

PokeInnRoom1WheelchairBoy_105:
# 351 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_16
	goto PokeInnRoom1WheelchairBoy_104

PokeInnRoom1WheelchairBoy_107:
# 344 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_87

PokeInnRoom1WheelchairBoy_109:
# 363 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 365 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_114
PokeInnRoom1WheelchairBoy_113:
# 367 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_117
PokeInnRoom1WheelchairBoy_116:
# 370 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 372 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_120
PokeInnRoom1WheelchairBoy_119:
# 374 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_123
PokeInnRoom1WheelchairBoy_122:
# 377 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 379 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_126
PokeInnRoom1WheelchairBoy_125:
# 381 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_129
PokeInnRoom1WheelchairBoy_128:
# 386 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 387 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_17, PokeInnRoom1WheelchairBoy_Text_10
# 390 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_132
PokeInnRoom1WheelchairBoy_131:
# 400 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_135
PokeInnRoom1WheelchairBoy_134:
# 410 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_141
PokeInnRoom1WheelchairBoy_140:
# 420 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_149
PokeInnRoom1WheelchairBoy_148:
# 422 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_156
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_111:
# 354 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_93

PokeInnRoom1WheelchairBoy_114:
# 366 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
	goto PokeInnRoom1WheelchairBoy_113

PokeInnRoom1WheelchairBoy_117:
# 368 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_116

PokeInnRoom1WheelchairBoy_120:
# 373 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_RIOLU
	goto PokeInnRoom1WheelchairBoy_119

PokeInnRoom1WheelchairBoy_123:
# 375 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_122

PokeInnRoom1WheelchairBoy_126:
# 380 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_PANCHAM
	goto PokeInnRoom1WheelchairBoy_125

PokeInnRoom1WheelchairBoy_129:
# 382 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_128

PokeInnRoom1WheelchairBoy_132:
# 391 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 392 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_138
PokeInnRoom1WheelchairBoy_137:
# 396 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_146
	goto PokeInnRoom1WheelchairBoy_131

PokeInnRoom1WheelchairBoy_135:
# 401 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 402 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_144
PokeInnRoom1WheelchairBoy_143:
# 406 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_154
	goto PokeInnRoom1WheelchairBoy_134

PokeInnRoom1WheelchairBoy_138:
# 394 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_18
	goto PokeInnRoom1WheelchairBoy_137

PokeInnRoom1WheelchairBoy_141:
# 411 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 412 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_152
PokeInnRoom1WheelchairBoy_151:
# 416 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_158
	goto PokeInnRoom1WheelchairBoy_140

PokeInnRoom1WheelchairBoy_144:
# 404 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_19
	goto PokeInnRoom1WheelchairBoy_143

PokeInnRoom1WheelchairBoy_146:
# 397 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_131

PokeInnRoom1WheelchairBoy_149:
# 420 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_148

PokeInnRoom1WheelchairBoy_152:
# 414 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_20
	goto PokeInnRoom1WheelchairBoy_151

PokeInnRoom1WheelchairBoy_154:
# 407 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_134

PokeInnRoom1WheelchairBoy_156:
# 427 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MACHOP
# 429 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_161
PokeInnRoom1WheelchairBoy_160:
# 431 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_164
PokeInnRoom1WheelchairBoy_163:
# 435 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 436 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_10
# 439 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_167
PokeInnRoom1WheelchairBoy_166:
# 449 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_169
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_158:
# 417 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_140

PokeInnRoom1WheelchairBoy_161:
# 430 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MACHOP
	goto PokeInnRoom1WheelchairBoy_160

PokeInnRoom1WheelchairBoy_164:
# 432 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_163

PokeInnRoom1WheelchairBoy_167:
# 440 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MACHOP
# 441 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_172
PokeInnRoom1WheelchairBoy_171:
# 445 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_174
	goto PokeInnRoom1WheelchairBoy_166

PokeInnRoom1WheelchairBoy_169:
# 449 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_172:
# 443 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_21
	goto PokeInnRoom1WheelchairBoy_171

PokeInnRoom1WheelchairBoy_174:
# 446 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_166


fightingtypetradescript::
# 491 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 492 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, fightingtypetradescript_Movement_0
# 493 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, fightingtypetradescript_Movement_0
# 494 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_0
# 495 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_0
# 496 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_0
# 497 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, fightingtypetradescript_Movement_1
# 498 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, fightingtypetradescript_Movement_1
# 499 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_1
# 504 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq fightingtypetradescript_2
fightingtypetradescript_1:
# 507 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq fightingtypetradescript_5
fightingtypetradescript_4:
# 511 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 512 "data/maps/PokeInnRoom1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 513 "data/maps/PokeInnRoom1/scripts.pory"
	special ChoosePartyMon
# 514 "data/maps/PokeInnRoom1/scripts.pory"
	waitstate
# 515 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTaillowTrade
# 516 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 517 "data/maps/PokeInnRoom1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 518 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, IncorrectFightingType
# 519 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 520 "data/maps/PokeInnRoom1/scripts.pory"
	special CreateInGameTradePokemon
# 521 "data/maps/PokeInnRoom1/scripts.pory"
	special DoInGameTradeScene
# 522 "data/maps/PokeInnRoom1/scripts.pory"
	waitstate
# 523 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 524 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_3
# 526 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq fightingtypetradescript_8
fightingtypetradescript_7:
# 538 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq fightingtypetradescript_10
	return

fightingtypetradescript_2:
# 505 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW1
	goto fightingtypetradescript_1

fightingtypetradescript_5:
# 508 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW2
	goto fightingtypetradescript_4

fightingtypetradescript_8:
# 527 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_3
# 529 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 11
# 530 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 11, 5, 11
# 532 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 534 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MANCHINE, CRY_MODE_NORMAL
# 535 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_2
	goto fightingtypetradescript_7

fightingtypetradescript_10:
# 539 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_3
# 540 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 12
# 541 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 12, 5, 11
# 543 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 544 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MANCHINE, CRY_MODE_NORMAL
# 545 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_3
	return


ArmWrestleShake::
# 555 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 556 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8004, 2
# 557 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8005, 6
# 558 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8006, 4
# 559 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8007, 4
# 560 "data/maps/PokeInnRoom1/scripts.pory"
	special ShakeCamera
	return


CancelTaillowTrade::
# 564 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_0
# 566 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 567 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 568 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 569 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleInnRoomOldLady_Movement_0
# 570 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_1
# 571 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


IncorrectFightingType::
# 575 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 576 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox IncorrectFightingType_Text_0
# 578 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 579 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 580 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 581 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox IncorrectFightingType_Text_1
# 582 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


# 23 "data/maps/PokeInnRoom1/scripts.pory"
LoadTradedFightingTypeOW_Movement_0:
# 23 "data/maps/PokeInnRoom1/scripts.pory"
	face_left
	step_end

# 79 "data/maps/PokeInnRoom1/scripts.pory"
OldaleInnRoomOldLady_Movement_0:
# 79 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 107 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_0:
# 107 "data/maps/PokeInnRoom1/scripts.pory"
	face_up
	step_end

# 113 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_1:
# 113 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
# 113 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 122 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_2:
# 122 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 145 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_3:
# 145 "data/maps/PokeInnRoom1/scripts.pory"
	face_right
	step_end

# 473 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1WheelchairBoy_Movement_0:
# 473 "data/maps/PokeInnRoom1/scripts.pory"
	walk_in_place_down
	step_end

# 476 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1WheelchairBoy_Movement_1:
# 476 "data/maps/PokeInnRoom1/scripts.pory"
	walk_up
# 476 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 492 "data/maps/PokeInnRoom1/scripts.pory"
fightingtypetradescript_Movement_0:
# 492 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
# 492 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
	step_end

# 497 "data/maps/PokeInnRoom1/scripts.pory"
fightingtypetradescript_Movement_1:
# 497 "data/maps/PokeInnRoom1/scripts.pory"
	walk_down
	step_end

OldaleUsedInnBin_Text_0:
# 67 "data/maps/PokeInnRoom1/scripts.pory"
	.string "There's something on the trash can...$"

OldaleUsedInnBin_Text_1:
# 71 "data/maps/PokeInnRoom1/scripts.pory"
	.string "The trash can is empty.$"

OldaleInnRoomOldLady_Text_0:
# 80 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Our grandson pushes himself too hard.\n"
	.string "You look like you do as well.\p"
	.string "It's okay to accept help, you know?$"

OldaleInnRoomOldMan_Text_0:
# 89 "data/maps/PokeInnRoom1/scripts.pory"
	.string "My grandson was injured during the war,\n"
	.string "but if it wasn't for one of the\l"
	.string "Littleroot's Heroes, he wouldn't be here\l"
	.string "at all...$"

OldaleInnRoomOldMan_Text_1:
# 92 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... you have an odd resemblance to\n"
	.string "him.$"

PokeInnRoom1Girl_Text_0:
# 103 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, you're the one who arrived late at\n"
	.string "therapy.\p"
	.string "I'm sorry for yelling in class. I hope\n"
	.string "the teacher did't get mad.\p"
	.string "I saw my brother get hurt by a\n"
	.string "Blastoise during the war, and I'm a bit\l"
	.string "scared of them.$"

PokeInnRoom1Girl_Text_1:
# 108 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Purachu doll! Isn't it cute?\p"
	.string "I want to see a real Purachu one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_2:
# 115 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Purachu you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_3:
# 116 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Yes$"

PokeInnRoom1Girl_Text_4:
# 116 "data/maps/PokeInnRoom1/scripts.pory"
	.string "No$"

PokeInnRoom1Girl_Text_5:
# 133 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wow... it's so plumpy! I'll try petting it!$"

PokeInnRoom1Girl_Text_6:
# 135 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Puuu...$"

PokeInnRoom1Girl_Text_7:
# 137 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hehe... it liked it. I guess Pokémon\n"
	.string "aren't so scary after all.$"

PokeInnRoom1Girl_Text_8:
# 150 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for showing me. Here, I want\n"
	.string "you to have this as thanks.$"

PokeInnRoom1Girl_Text_9:
# 152 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I use my doll as pillow, so I don't need\n"
	.string "this. But someday, perhaps I'll get a\l"
	.string "real Pokémon!$"

PokeInnRoom1Girl_Text_10:
# 160 "data/maps/PokeInnRoom1/scripts.pory"
	.string "O-oh, okay... I guess it must be\n"
	.string "dangerous to take it out. Sorry for\l"
	.string "asking.$"

PokeInnRoom1Girl_Text_11:
# 172 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I can't wait to tell Anne about me\n"
	.string "petting a real Pokémon!$"

PokeInnRoom1Girl_Text_12:
# 175 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I went to tell Anne about me petting a\n"
	.string "real Pokémon, but she and her family are\l"
	.string "gone.\p"
	.string "She was the only girl my age in town...\p"
	.string "I'm sad, but Joel must be sadder. They\n"
	.string "were so close!.$"

PokeInnRoom1WheelchairBoy_Text_0:
# 192 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I won't let my injury get in the way of\n"
	.string "being awesome. Just like you!$"

PokeInnRoom1WheelchairBoy_Text_1:
# 203 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hey… does it hurt?$"

PokeInnRoom1WheelchairBoy_Text_2:
# 208 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… I envy you.$"

PokeInnRoom1WheelchairBoy_Text_3:
# 212 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… mine don't hurt either.$"

PokeInnRoom1WheelchairBoy_Text_4:
# 214 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Say, can you do me a favour? My\n"
	.string "grandparents are caring for me, but\l"
	.string "they struggle to push my chair.\p"
	.string "So I do it myself, but my arms get tired\n"
	.string "after a while...\p"
	.string "Do you think you can find a Fighting\n"
	.string "Pokémon for me?\p"
	.string "One that is not evolved, since I'm a\n"
	.string "novice trainer.\p"
	.string "Please, I'll give you something in\n"
	.string "return.$"

PokeInnRoom1WheelchairBoy_Text_5:
# 256 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Did you bring any Fighting type\n"
	.string "Pokémon? Which one?$"

PokeInnRoom1WheelchairBoy_Text_6:
# 257 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_1}$"

PokeInnRoom1WheelchairBoy_Text_7:
# 257 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_2}$"

PokeInnRoom1WheelchairBoy_Text_8:
# 257 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_3}$"

PokeInnRoom1WheelchairBoy_Text_9:
# 257 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A different Pokémon$"

PokeInnRoom1WheelchairBoy_Text_10:
# 257 "data/maps/PokeInnRoom1/scripts.pory"
	.string "None$"

PokeInnRoom1WheelchairBoy_Text_11:
# 263 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, a Manchine! I saw one of those by\n"
	.string "the Warehouse, but I never managed to\l"
	.string "catch one.$"

PokeInnRoom1WheelchairBoy_Text_12:
# 276 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Makuhita? Wow, they are my favourites\n"
	.string "- they're always full of energy!$"

PokeInnRoom1WheelchairBoy_Text_13:
# 288 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Scraggy!? Wow, they're so cool! I\n"
	.string "didn't know there were Scraggy in Hoenn\l"
	.string "now.$"

PokeInnRoom1WheelchairBoy_Text_14:
# 331 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Croagunk? Hmm… its arm is not\n"
	.string "poisonous, is it?$"

PokeInnRoom1WheelchairBoy_Text_15:
# 341 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Meditite? Oh, those are both strong\n"
	.string "and smart…$"

PokeInnRoom1WheelchairBoy_Text_16:
# 351 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Kamoken? They look just like\n"
	.string "Far'fetch... but they are Fightying\l"
	.string "type, right?$"

PokeInnRoom1WheelchairBoy_Text_17:
# 387 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A different one$"

PokeInnRoom1WheelchairBoy_Text_18:
# 394 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Tyrogue!? Wow, that's a rare Pokémon!\n"
	.string "It must have been hard to find it.$"

PokeInnRoom1WheelchairBoy_Text_19:
# 404 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Riolu? Ah, it's both strong and cute -\n"
	.string "I think my sister will spoil it, hehe.$"

PokeInnRoom1WheelchairBoy_Text_20:
# 414 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Pancham? Wow, its gaze is so\n"
	.string "determined. I like that.$"

PokeInnRoom1WheelchairBoy_Text_21:
# 443 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Machop!? I thought Devon Co. had\n"
	.string "turned them all into Manchines...$"

PokeInnRoom1WheelchairBoy_Text_22:
# 457 "data/maps/PokeInnRoom1/scripts.pory"
	.string "It's so cooool! Alright - time to test\n"
	.string "this. Three, two, one...$"

PokeInnRoom1WheelchairBoy_Text_23:
# 459 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Arm Wrestle!$"

PokeInnRoom1WheelchairBoy_Text_24:
# 463 "data/maps/PokeInnRoom1/scripts.pory"
	.string "GRRRR...$"

PokeInnRoom1WheelchairBoy_Text_25:
# 465 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Gah... I lost! But I did better than I\n"
	.string "thought$"

PokeInnRoom1WheelchairBoy_Text_26:
# 467 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hm? You look surprised. Why did you\n"
	.string "think I wanted a Fighting Type?\p"
	.string "Well, it wasn't to push my chair - it's to\n"
	.string "get strong enough so I can push it\l"
	.string "myself!\p"
	.string "I was using this till now, but you can\n"
	.string "have it. Getting stronger with Pokémon\l"
	.string "is much more fun!$"

PokeInnRoom1WheelchairBoy_Text_27:
# 475 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for helping my grandson.\n"
	.string "Please, take good care of Taillow.$"

PokeInnRoom1WheelchairBoy_Text_28:
# 483 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Don't have any to trade? Well, that's\n"
	.string "okay... come back when you do!$"

fightingtypetradescript_Text_0:
# 496 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... did you really bring my grandson\n"
	.string "a Pokémon?$"

fightingtypetradescript_Text_1:
# 499 "data/maps/PokeInnRoom1/scripts.pory"
	.string "It is good to see there are still good\n"
	.string "people left in Hoenn.\p"
	.string "And you must be a good trainer too, if\n"
	.string "you caught that Pokémon...\p"
	.string "You see, I have this Taillow that needs\n"
	.string "care. It's my late son's.\p"
	.string "Would you like to set up a trade? The\n"
	.string "Fighting type you'll give to my\l"
	.string "grandson, for this Taillow.$"

fightingtypetradescript_Text_2:
# 535 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Man-maaaan!$"

fightingtypetradescript_Text_3:
# 545 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Ma-kkuuuu!$"

CancelTaillowTrade_Text_0:
# 564 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, changed your mind? That is well...\p"
	.string "Pokémon should not be traded away\n"
	.string "lightly.$"

CancelTaillowTrade_Text_1:
# 570 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Aw, I guess grandpa is right... but if you\n"
	.string "want to trade, come back please!$"

IncorrectFightingType_Text_0:
# 576 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... that's not the Pokémon you\n"
	.string "promised my grandson, is it?\p"
	.string "If you have changed your mind... that is\n"
	.string "well.$"

IncorrectFightingType_Text_1:
# 581 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Aw, I guess grandpa is right... but if you\n"
	.string "change it again, come back please!$"
