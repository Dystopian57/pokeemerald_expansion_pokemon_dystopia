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
# 11 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 12 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 13 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


LoadTradedFightingTypeOW::
# 22 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq LoadTradedFightingTypeOW_2
LoadTradedFightingTypeOW_1:
# 29 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq LoadTradedFightingTypeOW_5
LoadTradedFightingTypeOW_4:
# 35 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

LoadTradedFightingTypeOW_2:
# 23 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 11
# 24 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 11, 5, 11
# 25 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 11, LoadTradedFightingTypeOW_Movement_0
	goto LoadTradedFightingTypeOW_1

LoadTradedFightingTypeOW_5:
# 30 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 12
# 31 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 12, 5, 11
# 32 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 12, LoadTradedFightingTypeOW_Movement_0
	goto LoadTradedFightingTypeOW_4


DayNightNPCInn::
# 41 "data/maps/PokeInnRoom1/scripts.pory"
	gettimeofday
# 42 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightNPCInn_2
DayNightNPCInn_1:
# 47 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightNPCInn_5
DayNightNPCInn_4:
# 52 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightNPCInn_8
DayNightNPCInn_7:
# 57 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightNPCInn_11
DayNightNPCInn_10:
# 62 "data/maps/PokeInnRoom1/scripts.pory"
endofdaynightnpcinn:
# 63 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

DayNightNPCInn_2:
# 43 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag daynpc
# 44 "data/maps/PokeInnRoom1/scripts.pory"
	setflag nightnpc
# 45 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto DayNightNPCInn_1

DayNightNPCInn_5:
# 48 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag daynpc
# 49 "data/maps/PokeInnRoom1/scripts.pory"
	setflag nightnpc
# 50 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto DayNightNPCInn_4

DayNightNPCInn_8:
# 53 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag nightnpc
# 54 "data/maps/PokeInnRoom1/scripts.pory"
	setflag daynpc
# 55 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto DayNightNPCInn_7

DayNightNPCInn_11:
# 58 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag nightnpc
# 59 "data/maps/PokeInnRoom1/scripts.pory"
	setflag daynpc
# 60 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto DayNightNPCInn_10


OldaleUsedInnBin::
# 67 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 68 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALEUSEDINNBIN, OldaleUsedInnBin_2
# 73 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_1
OldaleUsedInnBin_1:
# 74 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

OldaleUsedInnBin_2:
# 69 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_0
# 70 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_X_SP_DEF
# 71 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_ITEM_OLDALEUSEDINNBIN
	goto OldaleUsedInnBin_1


OldaleInnRoomOldLady::
# 79 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 80 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 81 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, OldaleInnRoomOldLady_Movement_0
# 82 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldLady_Text_0
# 84 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


OldaleInnRoomOldMan::
# 88 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 89 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 90 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, OldaleInnRoomOldLady_Movement_0
# 91 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_0
# 94 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_1
# 95 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


PokeInnRoom1Girl::
# 99 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 100 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, OldaleInnRoomOldLady_Movement_0
# 101 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 103 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset showedoldaleinngirldoll, PokeInnRoom1Girl_2
PokeInnRoom1Girl_1:
# 173 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_6
PokeInnRoom1Girl_4:
# 176 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_13
PokeInnRoom1Girl_11:
# 182 "data/maps/PokeInnRoom1/scripts.pory"
endoldalepokeinnroom1girl:
# 183 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

PokeInnRoom1Girl_2:
# 105 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_0
# 108 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_9
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_5:
# 174 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_11
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_6:
# 173 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset anneandfamilygone, PokeInnRoom1Girl_5
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_9:
# 109 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 110 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_1
# 112 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_PIKACHU_SAFE, NO_PARTY_SCREEN
# 113 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1Girl_16
# 167 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_12:
# 177 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_12
	goto PokeInnRoom1Girl_11

PokeInnRoom1Girl_13:
# 176 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set anneandfamilygone, PokeInnRoom1Girl_12
	goto PokeInnRoom1Girl_11

PokeInnRoom1Girl_16:
# 115 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_1
# 116 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 117 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_2
# 118 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_3, PokeInnRoom1Girl_Text_4
# 119 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1Girl_20
PokeInnRoom1Girl_19:
# 161 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1Girl_22
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_20:
# 120 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 121 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 122 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_2
# 126 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 2, 9
# 127 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoadTradedFightingTypeOW_Movement_0
# 132 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 1, 10
# 133 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 135 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_5
# 136 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_PIKACHU_SAFE, CRY_MODE_NORMAL
# 137 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_6
# 139 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_7
# 140 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 141 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 143 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 146 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 0, 0
# 147 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_3
# 148 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 152 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_8
# 153 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 154 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_9
# 156 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 157 "data/maps/PokeInnRoom1/scripts.pory"
	setflag showedoldaleinngirldoll
# 158 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_19

PokeInnRoom1Girl_22:
# 162 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_10
# 163 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1


PokeInnRoom1WheelchairBoy::
# 187 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 188 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 189 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 192 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set wheelchairtradequestdone, PokeInnRoom1WheelchairBoy_2
PokeInnRoom1WheelchairBoy_1:
# 200 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairtradequestdone, PokeInnRoom1WheelchairBoy_4
	return

PokeInnRoom1WheelchairBoy_2:
# 194 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_0
# 198 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_1

PokeInnRoom1WheelchairBoy_4:
# 203 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_7
PokeInnRoom1WheelchairBoy_6:
# 226 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_10
PokeInnRoom1WheelchairBoy_9:
# 237 "data/maps/PokeInnRoom1/scripts.pory"
didyoubringanyfighttypes:
# 238 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 239 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_16
PokeInnRoom1WheelchairBoy_15:
# 241 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_22
PokeInnRoom1WheelchairBoy_21:
# 244 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 245 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_25
PokeInnRoom1WheelchairBoy_24:
# 247 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_28
PokeInnRoom1WheelchairBoy_27:
# 250 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 251 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_31
PokeInnRoom1WheelchairBoy_30:
# 253 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_34
PokeInnRoom1WheelchairBoy_33:
# 258 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 259 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9, PokeInnRoom1WheelchairBoy_Text_10
# 261 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_37
PokeInnRoom1WheelchairBoy_36:
# 274 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_40
PokeInnRoom1WheelchairBoy_39:
# 286 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_46
PokeInnRoom1WheelchairBoy_45:
# 296 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_54
PokeInnRoom1WheelchairBoy_53:
# 298 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_62
PokeInnRoom1WheelchairBoy_61:
# 458 "data/maps/PokeInnRoom1/scripts.pory"
backtowheelchairkidaftertrade:
# 459 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_22
# 460 "data/maps/PokeInnRoom1/scripts.pory"
	call ArmWrestleShake
# 461 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_23
# 462 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_SWAGGER2
# 463 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 464 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_SWAGGER2
# 465 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_24
# 466 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_YAWN
# 467 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_25
# 468 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 469 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_26
# 473 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 475 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_0
# 476 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_0
# 477 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_27
# 478 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 479 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 480 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_3
# 481 "data/maps/PokeInnRoom1/scripts.pory"
	setflag wheelchairtradequestdone
# 482 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
# 484 "data/maps/PokeInnRoom1/scripts.pory"
donthaveanyfightingtotrade:
# 485 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_28
# 486 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 0
# 487 "data/maps/PokeInnRoom1/scripts.pory"
endofwheelchairkidscript:
# 488 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

PokeInnRoom1WheelchairBoy_7:
# 205 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_1
# 207 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_3, PokeInnRoom1Girl_Text_4
# 209 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_13
PokeInnRoom1WheelchairBoy_12:
# 213 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_19
PokeInnRoom1WheelchairBoy_18:
# 216 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_4
# 223 "data/maps/PokeInnRoom1/scripts.pory"
	setflag wheelchairboyaskedpokemon
# 224 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_6

PokeInnRoom1WheelchairBoy_10:
# 227 "data/maps/PokeInnRoom1/scripts.pory"
	goto didyoubringanyfighttypes
	goto PokeInnRoom1WheelchairBoy_9

PokeInnRoom1WheelchairBoy_13:
# 210 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_2
	goto PokeInnRoom1WheelchairBoy_12

PokeInnRoom1WheelchairBoy_16:
# 240 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MANCHINE
	goto PokeInnRoom1WheelchairBoy_15

PokeInnRoom1WheelchairBoy_19:
# 214 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_3
	goto PokeInnRoom1WheelchairBoy_18

PokeInnRoom1WheelchairBoy_22:
# 242 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_21

PokeInnRoom1WheelchairBoy_25:
# 246 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MAKUHITA
	goto PokeInnRoom1WheelchairBoy_24

PokeInnRoom1WheelchairBoy_28:
# 248 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_27

PokeInnRoom1WheelchairBoy_31:
# 252 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_SCRAGGY
	goto PokeInnRoom1WheelchairBoy_30

PokeInnRoom1WheelchairBoy_34:
# 254 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_33

PokeInnRoom1WheelchairBoy_37:
# 262 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 263 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_43
PokeInnRoom1WheelchairBoy_42:
# 270 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_51
	goto PokeInnRoom1WheelchairBoy_36

PokeInnRoom1WheelchairBoy_40:
# 275 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 276 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_49
PokeInnRoom1WheelchairBoy_48:
# 282 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_59
	goto PokeInnRoom1WheelchairBoy_39

PokeInnRoom1WheelchairBoy_43:
# 265 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_11
# 266 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 1
# 267 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_42

PokeInnRoom1WheelchairBoy_46:
# 287 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 288 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_57
PokeInnRoom1WheelchairBoy_56:
# 292 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_64
	goto PokeInnRoom1WheelchairBoy_45

PokeInnRoom1WheelchairBoy_49:
# 278 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 279 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 2
# 280 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_48

PokeInnRoom1WheelchairBoy_51:
# 271 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_36

PokeInnRoom1WheelchairBoy_54:
# 296 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_53

PokeInnRoom1WheelchairBoy_57:
# 290 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_13
	goto PokeInnRoom1WheelchairBoy_56

PokeInnRoom1WheelchairBoy_59:
# 283 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_39

PokeInnRoom1WheelchairBoy_62:
# 302 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 304 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_67
PokeInnRoom1WheelchairBoy_66:
# 306 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_70
PokeInnRoom1WheelchairBoy_69:
# 309 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 311 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_73
PokeInnRoom1WheelchairBoy_72:
# 313 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_76
PokeInnRoom1WheelchairBoy_75:
# 316 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 318 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_79
PokeInnRoom1WheelchairBoy_78:
# 320 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_82
PokeInnRoom1WheelchairBoy_81:
# 325 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 326 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9, PokeInnRoom1WheelchairBoy_Text_10
# 329 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_85
PokeInnRoom1WheelchairBoy_84:
# 339 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_88
PokeInnRoom1WheelchairBoy_87:
# 349 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_94
PokeInnRoom1WheelchairBoy_93:
# 359 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_102
PokeInnRoom1WheelchairBoy_101:
# 361 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_109
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_64:
# 293 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_45

PokeInnRoom1WheelchairBoy_67:
# 305 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CROAGUNK
	goto PokeInnRoom1WheelchairBoy_66

PokeInnRoom1WheelchairBoy_70:
# 307 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_69

PokeInnRoom1WheelchairBoy_73:
# 312 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MEDITITE
	goto PokeInnRoom1WheelchairBoy_72

PokeInnRoom1WheelchairBoy_76:
# 314 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_75

PokeInnRoom1WheelchairBoy_79:
# 319 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_KAMOKEN
	goto PokeInnRoom1WheelchairBoy_78

PokeInnRoom1WheelchairBoy_82:
# 321 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_81

PokeInnRoom1WheelchairBoy_85:
# 330 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 331 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_91
PokeInnRoom1WheelchairBoy_90:
# 335 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_99
	goto PokeInnRoom1WheelchairBoy_84

PokeInnRoom1WheelchairBoy_88:
# 340 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 341 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_97
PokeInnRoom1WheelchairBoy_96:
# 345 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_107
	goto PokeInnRoom1WheelchairBoy_87

PokeInnRoom1WheelchairBoy_91:
# 333 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_14
	goto PokeInnRoom1WheelchairBoy_90

PokeInnRoom1WheelchairBoy_94:
# 350 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 351 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_105
PokeInnRoom1WheelchairBoy_104:
# 355 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_111
	goto PokeInnRoom1WheelchairBoy_93

PokeInnRoom1WheelchairBoy_97:
# 343 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_15
	goto PokeInnRoom1WheelchairBoy_96

PokeInnRoom1WheelchairBoy_99:
# 336 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_84

PokeInnRoom1WheelchairBoy_102:
# 359 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_101

PokeInnRoom1WheelchairBoy_105:
# 353 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_16
	goto PokeInnRoom1WheelchairBoy_104

PokeInnRoom1WheelchairBoy_107:
# 346 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_87

PokeInnRoom1WheelchairBoy_109:
# 365 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 367 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_114
PokeInnRoom1WheelchairBoy_113:
# 369 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_117
PokeInnRoom1WheelchairBoy_116:
# 372 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 374 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_120
PokeInnRoom1WheelchairBoy_119:
# 376 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_123
PokeInnRoom1WheelchairBoy_122:
# 379 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 381 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_126
PokeInnRoom1WheelchairBoy_125:
# 383 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_129
PokeInnRoom1WheelchairBoy_128:
# 388 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 389 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_17, PokeInnRoom1WheelchairBoy_Text_10
# 392 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_132
PokeInnRoom1WheelchairBoy_131:
# 402 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_135
PokeInnRoom1WheelchairBoy_134:
# 412 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_141
PokeInnRoom1WheelchairBoy_140:
# 422 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_149
PokeInnRoom1WheelchairBoy_148:
# 424 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_156
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_111:
# 356 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_93

PokeInnRoom1WheelchairBoy_114:
# 368 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
	goto PokeInnRoom1WheelchairBoy_113

PokeInnRoom1WheelchairBoy_117:
# 370 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_116

PokeInnRoom1WheelchairBoy_120:
# 375 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_RIOLU
	goto PokeInnRoom1WheelchairBoy_119

PokeInnRoom1WheelchairBoy_123:
# 377 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_122

PokeInnRoom1WheelchairBoy_126:
# 382 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_PANCHAM
	goto PokeInnRoom1WheelchairBoy_125

PokeInnRoom1WheelchairBoy_129:
# 384 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_128

PokeInnRoom1WheelchairBoy_132:
# 393 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 394 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_138
PokeInnRoom1WheelchairBoy_137:
# 398 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_146
	goto PokeInnRoom1WheelchairBoy_131

PokeInnRoom1WheelchairBoy_135:
# 403 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 404 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_144
PokeInnRoom1WheelchairBoy_143:
# 408 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_154
	goto PokeInnRoom1WheelchairBoy_134

PokeInnRoom1WheelchairBoy_138:
# 396 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_18
	goto PokeInnRoom1WheelchairBoy_137

PokeInnRoom1WheelchairBoy_141:
# 413 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 414 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_152
PokeInnRoom1WheelchairBoy_151:
# 418 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_158
	goto PokeInnRoom1WheelchairBoy_140

PokeInnRoom1WheelchairBoy_144:
# 406 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_19
	goto PokeInnRoom1WheelchairBoy_143

PokeInnRoom1WheelchairBoy_146:
# 399 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_131

PokeInnRoom1WheelchairBoy_149:
# 422 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_148

PokeInnRoom1WheelchairBoy_152:
# 416 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_20
	goto PokeInnRoom1WheelchairBoy_151

PokeInnRoom1WheelchairBoy_154:
# 409 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_134

PokeInnRoom1WheelchairBoy_156:
# 429 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MACHOP
# 431 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_161
PokeInnRoom1WheelchairBoy_160:
# 433 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_164
PokeInnRoom1WheelchairBoy_163:
# 437 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 438 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_10
# 441 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_167
PokeInnRoom1WheelchairBoy_166:
# 451 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_169
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_158:
# 419 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_140

PokeInnRoom1WheelchairBoy_161:
# 432 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MACHOP
	goto PokeInnRoom1WheelchairBoy_160

PokeInnRoom1WheelchairBoy_164:
# 434 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_163

PokeInnRoom1WheelchairBoy_167:
# 442 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MACHOP
# 443 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_172
PokeInnRoom1WheelchairBoy_171:
# 447 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_174
	goto PokeInnRoom1WheelchairBoy_166

PokeInnRoom1WheelchairBoy_169:
# 451 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_172:
# 445 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_21
	goto PokeInnRoom1WheelchairBoy_171

PokeInnRoom1WheelchairBoy_174:
# 448 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_166


fightingtypetradescript::
# 493 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 494 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, fightingtypetradescript_Movement_0
# 495 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, fightingtypetradescript_Movement_0
# 496 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_0
# 497 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_0
# 498 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_0
# 499 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, fightingtypetradescript_Movement_1
# 500 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, fightingtypetradescript_Movement_1
# 501 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_1
# 506 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq fightingtypetradescript_2
fightingtypetradescript_1:
# 509 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq fightingtypetradescript_5
fightingtypetradescript_4:
# 512 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 3
	goto_if_eq fightingtypetradescript_8
fightingtypetradescript_7:
# 515 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 4
	goto_if_eq fightingtypetradescript_11
fightingtypetradescript_10:
# 518 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 5
	goto_if_eq fightingtypetradescript_14
fightingtypetradescript_13:
# 521 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 6
	goto_if_eq fightingtypetradescript_17
fightingtypetradescript_16:
# 524 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 7
	goto_if_eq fightingtypetradescript_20
fightingtypetradescript_19:
# 527 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 8
	goto_if_eq fightingtypetradescript_23
fightingtypetradescript_22:
# 530 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 9
	goto_if_eq fightingtypetradescript_26
fightingtypetradescript_25:
# 533 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 10
	goto_if_eq fightingtypetradescript_29
fightingtypetradescript_28:
# 538 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 539 "data/maps/PokeInnRoom1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 540 "data/maps/PokeInnRoom1/scripts.pory"
	special ChoosePartyMon
# 541 "data/maps/PokeInnRoom1/scripts.pory"
	waitstate
# 542 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTaillowTrade
# 543 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 544 "data/maps/PokeInnRoom1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 545 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, IncorrectFightingType
# 546 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 547 "data/maps/PokeInnRoom1/scripts.pory"
	special CreateInGameTradePokemon
# 548 "data/maps/PokeInnRoom1/scripts.pory"
	special DoInGameTradeScene
# 549 "data/maps/PokeInnRoom1/scripts.pory"
	waitstate
# 550 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 551 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_3
# 553 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq fightingtypetradescript_32
fightingtypetradescript_31:
# 565 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq fightingtypetradescript_34
	return

fightingtypetradescript_2:
# 507 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW1
	goto fightingtypetradescript_1

fightingtypetradescript_5:
# 510 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW2
	goto fightingtypetradescript_4

fightingtypetradescript_8:
# 513 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW3
	goto fightingtypetradescript_7

fightingtypetradescript_11:
# 516 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW4
	goto fightingtypetradescript_10

fightingtypetradescript_14:
# 519 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW5
	goto fightingtypetradescript_13

fightingtypetradescript_17:
# 522 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW6
	goto fightingtypetradescript_16

fightingtypetradescript_20:
# 525 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW7
	goto fightingtypetradescript_19

fightingtypetradescript_23:
# 528 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW8
	goto fightingtypetradescript_22

fightingtypetradescript_26:
# 531 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW10
	goto fightingtypetradescript_25

fightingtypetradescript_29:
# 534 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW10
	goto fightingtypetradescript_28

fightingtypetradescript_32:
# 554 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_3
# 556 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 11
# 557 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 11, 5, 11
# 559 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 561 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MANCHINE, CRY_MODE_NORMAL
# 562 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_2
	goto fightingtypetradescript_31

fightingtypetradescript_34:
# 566 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_3
# 567 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 12
# 568 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 12, 5, 11
# 570 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 571 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MANCHINE, CRY_MODE_NORMAL
# 572 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_3
	return


ArmWrestleShake::
# 582 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 583 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8004, 2
# 584 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8005, 6
# 585 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8006, 4
# 586 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8007, 4
# 587 "data/maps/PokeInnRoom1/scripts.pory"
	special ShakeCamera
	return


CancelTaillowTrade::
# 591 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_0
# 593 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 594 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 595 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 596 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleInnRoomOldLady_Movement_0
# 597 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_1
# 598 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


IncorrectFightingType::
# 602 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 603 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox IncorrectFightingType_Text_0
# 605 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 606 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 607 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 608 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox IncorrectFightingType_Text_1
# 609 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


# 25 "data/maps/PokeInnRoom1/scripts.pory"
LoadTradedFightingTypeOW_Movement_0:
# 25 "data/maps/PokeInnRoom1/scripts.pory"
	face_left
	step_end

# 81 "data/maps/PokeInnRoom1/scripts.pory"
OldaleInnRoomOldLady_Movement_0:
# 81 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 109 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_0:
# 109 "data/maps/PokeInnRoom1/scripts.pory"
	face_up
	step_end

# 115 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_1:
# 115 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
# 115 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 124 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_2:
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 147 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_3:
# 147 "data/maps/PokeInnRoom1/scripts.pory"
	face_right
	step_end

# 475 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1WheelchairBoy_Movement_0:
# 475 "data/maps/PokeInnRoom1/scripts.pory"
	walk_in_place_down
	step_end

# 478 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1WheelchairBoy_Movement_1:
# 478 "data/maps/PokeInnRoom1/scripts.pory"
	walk_up
# 478 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 494 "data/maps/PokeInnRoom1/scripts.pory"
fightingtypetradescript_Movement_0:
# 494 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
# 494 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
	step_end

# 499 "data/maps/PokeInnRoom1/scripts.pory"
fightingtypetradescript_Movement_1:
# 499 "data/maps/PokeInnRoom1/scripts.pory"
	walk_down
	step_end

OldaleUsedInnBin_Text_0:
# 69 "data/maps/PokeInnRoom1/scripts.pory"
	.string "There's something on the trash can...$"

OldaleUsedInnBin_Text_1:
# 73 "data/maps/PokeInnRoom1/scripts.pory"
	.string "The trash can is empty.$"

OldaleInnRoomOldLady_Text_0:
# 82 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Our grandson pushes himself too hard.\n"
	.string "You look like you do as well.\p"
	.string "It's okay to accept help, you know?$"

OldaleInnRoomOldMan_Text_0:
# 91 "data/maps/PokeInnRoom1/scripts.pory"
	.string "My grandson was injured during the war,\n"
	.string "but if it wasn't for one of the\l"
	.string "Littleroot's Heroes, he wouldn't be here\l"
	.string "at all...$"

OldaleInnRoomOldMan_Text_1:
# 94 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... you have an odd resemblance to\n"
	.string "him.$"

PokeInnRoom1Girl_Text_0:
# 105 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, you're the one who arrived late at\n"
	.string "therapy.\p"
	.string "I'm sorry for yelling in class. I hope\n"
	.string "the teacher did't get mad.\p"
	.string "I saw my brother get hurt by a\n"
	.string "Blastoise during the war, and I'm a bit\l"
	.string "scared of them.$"

PokeInnRoom1Girl_Text_1:
# 110 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Purachu doll! Isn't it cute?\p"
	.string "I want to see a real Purachu one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_2:
# 117 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Purachu you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_3:
# 118 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Yes$"

PokeInnRoom1Girl_Text_4:
# 118 "data/maps/PokeInnRoom1/scripts.pory"
	.string "No$"

PokeInnRoom1Girl_Text_5:
# 135 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wow... it's so plumpy! I'll try petting it!$"

PokeInnRoom1Girl_Text_6:
# 137 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Puuu...$"

PokeInnRoom1Girl_Text_7:
# 139 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hehe... it liked it. I guess Pokémon\n"
	.string "aren't so scary after all.$"

PokeInnRoom1Girl_Text_8:
# 152 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for showing me. Here, I want\n"
	.string "you to have this as thanks.$"

PokeInnRoom1Girl_Text_9:
# 154 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I use my doll as pillow, so I don't need\n"
	.string "this. But someday, perhaps I'll get a\l"
	.string "real Pokémon!$"

PokeInnRoom1Girl_Text_10:
# 162 "data/maps/PokeInnRoom1/scripts.pory"
	.string "O-oh, okay... I guess it must be\n"
	.string "dangerous to take it out. Sorry for\l"
	.string "asking.$"

PokeInnRoom1Girl_Text_11:
# 174 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I can't wait to tell Anne about me\n"
	.string "petting a real Pokémon!$"

PokeInnRoom1Girl_Text_12:
# 177 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I went to tell Anne about me petting a\n"
	.string "real Pokémon, but she and her family are\l"
	.string "gone.\p"
	.string "She was the only girl my age in town...\p"
	.string "I'm sad, but Joel must be sadder. They\n"
	.string "were so close!.$"

PokeInnRoom1WheelchairBoy_Text_0:
# 194 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I won't let my injury get in the way of\n"
	.string "being awesome. Just like you!$"

PokeInnRoom1WheelchairBoy_Text_1:
# 205 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hey… does it hurt?$"

PokeInnRoom1WheelchairBoy_Text_2:
# 210 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… I envy you.$"

PokeInnRoom1WheelchairBoy_Text_3:
# 214 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… mine don't hurt either.$"

PokeInnRoom1WheelchairBoy_Text_4:
# 216 "data/maps/PokeInnRoom1/scripts.pory"
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
# 258 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Did you bring any Fighting type\n"
	.string "Pokémon? Which one?$"

PokeInnRoom1WheelchairBoy_Text_6:
# 259 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_1}$"

PokeInnRoom1WheelchairBoy_Text_7:
# 259 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_2}$"

PokeInnRoom1WheelchairBoy_Text_8:
# 259 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_3}$"

PokeInnRoom1WheelchairBoy_Text_9:
# 259 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A different Pokémon$"

PokeInnRoom1WheelchairBoy_Text_10:
# 259 "data/maps/PokeInnRoom1/scripts.pory"
	.string "None$"

PokeInnRoom1WheelchairBoy_Text_11:
# 265 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, a Manchine! I saw one of those by\n"
	.string "the Warehouse, but I never managed to\l"
	.string "catch one.$"

PokeInnRoom1WheelchairBoy_Text_12:
# 278 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Makuhita? Wow, they are my favourites\n"
	.string "- they're always full of energy!$"

PokeInnRoom1WheelchairBoy_Text_13:
# 290 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Scraggy!? Wow, they're so cool! I\n"
	.string "didn't know there were Scraggy in Hoenn\l"
	.string "now.$"

PokeInnRoom1WheelchairBoy_Text_14:
# 333 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Croagunk? Hmm… its arm is not\n"
	.string "poisonous, is it?$"

PokeInnRoom1WheelchairBoy_Text_15:
# 343 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Meditite? Oh, those are both strong\n"
	.string "and smart…$"

PokeInnRoom1WheelchairBoy_Text_16:
# 353 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Kamoken? They look just like\n"
	.string "Far'fetch... but they are Fightying\l"
	.string "type, right?$"

PokeInnRoom1WheelchairBoy_Text_17:
# 389 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A different one$"

PokeInnRoom1WheelchairBoy_Text_18:
# 396 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Tyrogue!? Wow, that's a rare Pokémon!\n"
	.string "It must have been hard to find it.$"

PokeInnRoom1WheelchairBoy_Text_19:
# 406 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Riolu? Ah, it's both strong and cute -\n"
	.string "I think my sister will spoil it, hehe.$"

PokeInnRoom1WheelchairBoy_Text_20:
# 416 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Pancham? Wow, its gaze is so\n"
	.string "determined. I like that.$"

PokeInnRoom1WheelchairBoy_Text_21:
# 445 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Machop!? I thought Devon Co. had\n"
	.string "turned them all into Manchines...$"

PokeInnRoom1WheelchairBoy_Text_22:
# 459 "data/maps/PokeInnRoom1/scripts.pory"
	.string "It's so cooool! Alright - time to test\n"
	.string "this. Three, two, one...$"

PokeInnRoom1WheelchairBoy_Text_23:
# 461 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Arm Wrestle!$"

PokeInnRoom1WheelchairBoy_Text_24:
# 465 "data/maps/PokeInnRoom1/scripts.pory"
	.string "GRRRR...$"

PokeInnRoom1WheelchairBoy_Text_25:
# 467 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Gah... I lost! But I did better than I\n"
	.string "thought$"

PokeInnRoom1WheelchairBoy_Text_26:
# 469 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hm? You look surprised. Why did you\n"
	.string "think I wanted a Fighting Type?\p"
	.string "Well, it wasn't to push my chair - it's to\n"
	.string "get strong enough so I can push it\l"
	.string "myself!\p"
	.string "I was using this till now, but you can\n"
	.string "have it. Getting stronger with Pokémon\l"
	.string "is much more fun!$"

PokeInnRoom1WheelchairBoy_Text_27:
# 477 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for helping my grandson.\n"
	.string "Please, take good care of Taillow.$"

PokeInnRoom1WheelchairBoy_Text_28:
# 485 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Don't have any to trade? Well, that's\n"
	.string "okay... come back when you do!$"

fightingtypetradescript_Text_0:
# 498 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... did you really bring my grandson\n"
	.string "a Pokémon?$"

fightingtypetradescript_Text_1:
# 501 "data/maps/PokeInnRoom1/scripts.pory"
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
# 562 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Man-maaaan!$"

fightingtypetradescript_Text_3:
# 572 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Ma-kkuuuu!$"

CancelTaillowTrade_Text_0:
# 591 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, changed your mind? That is well...\p"
	.string "Pokémon should not be traded away\n"
	.string "lightly.$"

CancelTaillowTrade_Text_1:
# 597 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Aw, I guess grandpa is right... but if you\n"
	.string "want to trade, come back please!$"

IncorrectFightingType_Text_0:
# 603 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... that's not the Pokémon you\n"
	.string "promised my grandson, is it?\p"
	.string "If you have changed your mind... that is\n"
	.string "well.$"

IncorrectFightingType_Text_1:
# 608 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Aw, I guess grandpa is right... but if you\n"
	.string "change it again, come back please!$"
