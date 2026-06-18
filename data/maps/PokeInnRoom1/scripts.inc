# 1 "data/maps/PokeInnRoom1/scripts.pory"


PokeInnRoom1_MapScripts::
# 7 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightNPC
# 8 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightNPC
	.byte 0


OldaleUsedInnBin::
# 17 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 18 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALEUSEDINNBIN, OldaleUsedInnBin_2
# 23 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_1
OldaleUsedInnBin_1:
# 24 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

OldaleUsedInnBin_2:
# 19 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_0
# 20 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_X_SP_DEF
# 21 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_ITEM_OLDALEUSEDINNBIN
	goto OldaleUsedInnBin_1


OldaleInnRoomOldLady::
# 29 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 30 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 31 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, OldaleInnRoomOldLady_Movement_0
# 32 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldLady_Text_0
# 34 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


OldaleInnRoomOldMan::
# 38 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 39 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 40 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, OldaleInnRoomOldLady_Movement_0
# 41 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_0
# 44 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_1
# 45 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


PokeInnRoom1Girl::
# 49 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 50 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, OldaleInnRoomOldLady_Movement_0
# 51 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 53 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset showedoldaleinngirldoll, PokeInnRoom1Girl_2
PokeInnRoom1Girl_1:
# 123 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_6
PokeInnRoom1Girl_4:
# 126 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_13
PokeInnRoom1Girl_11:
# 132 "data/maps/PokeInnRoom1/scripts.pory"
endoldalepokeinnroom1girl:
# 133 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

PokeInnRoom1Girl_2:
# 55 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_0
# 58 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_9
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_5:
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_11
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_6:
# 123 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset anneandfamilygone, PokeInnRoom1Girl_5
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_9:
# 59 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 60 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_1
# 62 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_PIKACHU_SAFE, NO_PARTY_SCREEN
# 63 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1Girl_16
# 117 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_12:
# 127 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_12
	goto PokeInnRoom1Girl_11

PokeInnRoom1Girl_13:
# 126 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set anneandfamilygone, PokeInnRoom1Girl_12
	goto PokeInnRoom1Girl_11

PokeInnRoom1Girl_16:
# 65 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_1
# 66 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 67 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_2
# 68 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_3, PokeInnRoom1Girl_Text_4
# 69 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1Girl_20
PokeInnRoom1Girl_19:
# 111 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1Girl_22
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_20:
# 70 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 71 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 72 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 74 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_2
# 76 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 2, 9
# 77 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_3
# 82 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 1, 10
# 83 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 85 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_5
# 86 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_PIKACHU_SAFE, CRY_MODE_NORMAL
# 87 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_6
# 89 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_7
# 90 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 91 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 93 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 96 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 0, 0
# 97 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_4
# 98 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 102 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_8
# 103 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 104 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_9
# 106 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 107 "data/maps/PokeInnRoom1/scripts.pory"
	setflag showedoldaleinngirldoll
# 108 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_19

PokeInnRoom1Girl_22:
# 112 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_10
# 113 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1


PokeInnRoom1WheelchairBoy::
# 137 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 138 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 139 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 141 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_2
PokeInnRoom1WheelchairBoy_1:
# 164 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_5
PokeInnRoom1WheelchairBoy_4:
# 175 "data/maps/PokeInnRoom1/scripts.pory"
didyoubringanyfighttypes:
# 176 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 178 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_11
PokeInnRoom1WheelchairBoy_10:
# 180 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_17
PokeInnRoom1WheelchairBoy_16:
# 182 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 184 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_20
PokeInnRoom1WheelchairBoy_19:
# 186 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_23
PokeInnRoom1WheelchairBoy_22:
# 189 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 191 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_26
PokeInnRoom1WheelchairBoy_25:
# 193 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_29
PokeInnRoom1WheelchairBoy_28:
# 198 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_4
# 199 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_5, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9
# 201 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_32
PokeInnRoom1WheelchairBoy_31:
# 211 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_35
PokeInnRoom1WheelchairBoy_34:
# 221 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_41
PokeInnRoom1WheelchairBoy_40:
# 231 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_49
PokeInnRoom1WheelchairBoy_48:
# 233 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_57
PokeInnRoom1WheelchairBoy_56:
# 371 "data/maps/PokeInnRoom1/scripts.pory"
donthaveanyfightingtotrade:
# 372 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_19
# 373 "data/maps/PokeInnRoom1/scripts.pory"
endofwheelchairinnkidscript:
# 374 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

PokeInnRoom1WheelchairBoy_2:
# 143 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_0
# 145 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_3, PokeInnRoom1Girl_Text_4
# 147 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_8
PokeInnRoom1WheelchairBoy_7:
# 151 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_14
PokeInnRoom1WheelchairBoy_13:
# 154 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_3
# 161 "data/maps/PokeInnRoom1/scripts.pory"
	setflag wheelchairboyaskedpokemon
# 162 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairinnkidscript
	goto PokeInnRoom1WheelchairBoy_1

PokeInnRoom1WheelchairBoy_5:
# 165 "data/maps/PokeInnRoom1/scripts.pory"
	goto didyoubringanyfighttypes
	goto PokeInnRoom1WheelchairBoy_4

PokeInnRoom1WheelchairBoy_8:
# 148 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_1
	goto PokeInnRoom1WheelchairBoy_7

PokeInnRoom1WheelchairBoy_11:
# 179 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POOCHAIN
	goto PokeInnRoom1WheelchairBoy_10

PokeInnRoom1WheelchairBoy_14:
# 152 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_2
	goto PokeInnRoom1WheelchairBoy_13

PokeInnRoom1WheelchairBoy_17:
# 181 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_16

PokeInnRoom1WheelchairBoy_20:
# 185 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MAKUHITA
	goto PokeInnRoom1WheelchairBoy_19

PokeInnRoom1WheelchairBoy_23:
# 187 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_22

PokeInnRoom1WheelchairBoy_26:
# 192 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_SCRAGGY
	goto PokeInnRoom1WheelchairBoy_25

PokeInnRoom1WheelchairBoy_29:
# 194 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_28

PokeInnRoom1WheelchairBoy_32:
# 202 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_POOCHAIN
# 203 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_38
PokeInnRoom1WheelchairBoy_37:
# 207 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_46
	goto PokeInnRoom1WheelchairBoy_31

PokeInnRoom1WheelchairBoy_35:
# 212 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 213 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_44
PokeInnRoom1WheelchairBoy_43:
# 217 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_54
	goto PokeInnRoom1WheelchairBoy_34

PokeInnRoom1WheelchairBoy_38:
# 205 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_10
	goto PokeInnRoom1WheelchairBoy_37

PokeInnRoom1WheelchairBoy_41:
# 222 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 223 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_52
PokeInnRoom1WheelchairBoy_51:
# 227 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_59
	goto PokeInnRoom1WheelchairBoy_40

PokeInnRoom1WheelchairBoy_44:
# 215 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_11
	goto PokeInnRoom1WheelchairBoy_43

PokeInnRoom1WheelchairBoy_46:
# 208 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_31

PokeInnRoom1WheelchairBoy_49:
# 231 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_48

PokeInnRoom1WheelchairBoy_52:
# 225 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
	goto PokeInnRoom1WheelchairBoy_51

PokeInnRoom1WheelchairBoy_54:
# 218 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_34

PokeInnRoom1WheelchairBoy_57:
# 237 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 239 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_62
PokeInnRoom1WheelchairBoy_61:
# 241 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_65
PokeInnRoom1WheelchairBoy_64:
# 244 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 246 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_68
PokeInnRoom1WheelchairBoy_67:
# 248 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_71
PokeInnRoom1WheelchairBoy_70:
# 251 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 253 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_74
PokeInnRoom1WheelchairBoy_73:
# 255 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_77
PokeInnRoom1WheelchairBoy_76:
# 260 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_4
# 261 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_5, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9
# 264 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_80
PokeInnRoom1WheelchairBoy_79:
# 274 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_83
PokeInnRoom1WheelchairBoy_82:
# 284 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_89
PokeInnRoom1WheelchairBoy_88:
# 294 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_97
PokeInnRoom1WheelchairBoy_96:
# 296 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_104
	goto PokeInnRoom1WheelchairBoy_56

PokeInnRoom1WheelchairBoy_59:
# 228 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_40

PokeInnRoom1WheelchairBoy_62:
# 240 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CROAGUNK
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_65:
# 242 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_64

PokeInnRoom1WheelchairBoy_68:
# 247 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MEDITITE
	goto PokeInnRoom1WheelchairBoy_67

PokeInnRoom1WheelchairBoy_71:
# 249 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_70

PokeInnRoom1WheelchairBoy_74:
# 254 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_KAMOKEN
	goto PokeInnRoom1WheelchairBoy_73

PokeInnRoom1WheelchairBoy_77:
# 256 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_76

PokeInnRoom1WheelchairBoy_80:
# 265 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 266 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_86
PokeInnRoom1WheelchairBoy_85:
# 270 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_94
	goto PokeInnRoom1WheelchairBoy_79

PokeInnRoom1WheelchairBoy_83:
# 275 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 276 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_92
PokeInnRoom1WheelchairBoy_91:
# 280 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_102
	goto PokeInnRoom1WheelchairBoy_82

PokeInnRoom1WheelchairBoy_86:
# 268 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_13
	goto PokeInnRoom1WheelchairBoy_85

PokeInnRoom1WheelchairBoy_89:
# 285 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 286 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_100
PokeInnRoom1WheelchairBoy_99:
# 290 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_106
	goto PokeInnRoom1WheelchairBoy_88

PokeInnRoom1WheelchairBoy_92:
# 278 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_14
	goto PokeInnRoom1WheelchairBoy_91

PokeInnRoom1WheelchairBoy_94:
# 271 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_79

PokeInnRoom1WheelchairBoy_97:
# 294 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_96

PokeInnRoom1WheelchairBoy_100:
# 288 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_15
	goto PokeInnRoom1WheelchairBoy_99

PokeInnRoom1WheelchairBoy_102:
# 281 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_82

PokeInnRoom1WheelchairBoy_104:
# 300 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 302 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_109
PokeInnRoom1WheelchairBoy_108:
# 304 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_112
PokeInnRoom1WheelchairBoy_111:
# 307 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 309 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_115
PokeInnRoom1WheelchairBoy_114:
# 311 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_118
PokeInnRoom1WheelchairBoy_117:
# 314 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 316 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_121
PokeInnRoom1WheelchairBoy_120:
# 318 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_124
PokeInnRoom1WheelchairBoy_123:
# 323 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_4
# 324 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_5, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_9
# 327 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_127
PokeInnRoom1WheelchairBoy_126:
# 337 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_130
PokeInnRoom1WheelchairBoy_129:
# 347 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_136
PokeInnRoom1WheelchairBoy_135:
# 357 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_143
	goto PokeInnRoom1WheelchairBoy_56

PokeInnRoom1WheelchairBoy_106:
# 291 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_88

PokeInnRoom1WheelchairBoy_109:
# 303 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
	goto PokeInnRoom1WheelchairBoy_108

PokeInnRoom1WheelchairBoy_112:
# 305 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_111

PokeInnRoom1WheelchairBoy_115:
# 310 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_RIOLU
	goto PokeInnRoom1WheelchairBoy_114

PokeInnRoom1WheelchairBoy_118:
# 312 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_117

PokeInnRoom1WheelchairBoy_121:
# 317 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_PANCHAM
	goto PokeInnRoom1WheelchairBoy_120

PokeInnRoom1WheelchairBoy_124:
# 319 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_123

PokeInnRoom1WheelchairBoy_127:
# 328 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 329 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_133
PokeInnRoom1WheelchairBoy_132:
# 333 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_141
	goto PokeInnRoom1WheelchairBoy_126

PokeInnRoom1WheelchairBoy_130:
# 338 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 339 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_139
PokeInnRoom1WheelchairBoy_138:
# 343 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_148
	goto PokeInnRoom1WheelchairBoy_129

PokeInnRoom1WheelchairBoy_133:
# 331 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_16
	goto PokeInnRoom1WheelchairBoy_132

PokeInnRoom1WheelchairBoy_136:
# 348 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 349 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_146
PokeInnRoom1WheelchairBoy_145:
# 353 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_150
	goto PokeInnRoom1WheelchairBoy_135

PokeInnRoom1WheelchairBoy_139:
# 341 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_17
	goto PokeInnRoom1WheelchairBoy_138

PokeInnRoom1WheelchairBoy_141:
# 334 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_126

PokeInnRoom1WheelchairBoy_143:
# 357 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_56

PokeInnRoom1WheelchairBoy_146:
# 351 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_18
	goto PokeInnRoom1WheelchairBoy_145

PokeInnRoom1WheelchairBoy_148:
# 344 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_129

PokeInnRoom1WheelchairBoy_150:
# 354 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_HELP_ERROR
	goto PokeInnRoom1WheelchairBoy_135


# 31 "data/maps/PokeInnRoom1/scripts.pory"
OldaleInnRoomOldLady_Movement_0:
# 31 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 59 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_0:
# 59 "data/maps/PokeInnRoom1/scripts.pory"
	face_up
	step_end

# 65 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_1:
# 65 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
# 65 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 74 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_2:
# 74 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 77 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_3:
# 77 "data/maps/PokeInnRoom1/scripts.pory"
	face_left
	step_end

# 97 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_4:
# 97 "data/maps/PokeInnRoom1/scripts.pory"
	face_right
	step_end

OldaleUsedInnBin_Text_0:
# 19 "data/maps/PokeInnRoom1/scripts.pory"
	.string "There's something on the trash can...$"

OldaleUsedInnBin_Text_1:
# 23 "data/maps/PokeInnRoom1/scripts.pory"
	.string "The trash can is empty.$"

OldaleInnRoomOldLady_Text_0:
# 32 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Our grandson pushes himself too hard.\n"
	.string "You look like you do as well.\p"
	.string "It's okay to accept help, you know?$"

OldaleInnRoomOldMan_Text_0:
# 41 "data/maps/PokeInnRoom1/scripts.pory"
	.string "My grandson was injured during the war,\n"
	.string "but if it wasn't for one of the\l"
	.string "Littleroot's Heroes, he wouldn't be here\l"
	.string "at all...$"

OldaleInnRoomOldMan_Text_1:
# 44 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... you have an odd resemblance to\n"
	.string "him.$"

PokeInnRoom1Girl_Text_0:
# 55 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, you're the one who arrived late at\n"
	.string "therapy.\p"
	.string "I'm sorry for yelling in class. I hope\n"
	.string "the teacher did't get mad.\p"
	.string "I saw my brother get hurt by a\n"
	.string "Blastoise during the war, and I'm a bit\l"
	.string "scared of them.$"

PokeInnRoom1Girl_Text_1:
# 60 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Purachu doll! Isn't it cute?\p"
	.string "I want to see a real Purachu one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_2:
# 67 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Purachu you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_3:
# 68 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Yes$"

PokeInnRoom1Girl_Text_4:
# 68 "data/maps/PokeInnRoom1/scripts.pory"
	.string "No$"

PokeInnRoom1Girl_Text_5:
# 85 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wow... it's so plumpy! I'll try petting it!$"

PokeInnRoom1Girl_Text_6:
# 87 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Puuu...$"

PokeInnRoom1Girl_Text_7:
# 89 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hehe... it liked it. I guess Pokémon\n"
	.string "aren't so scary after all.$"

PokeInnRoom1Girl_Text_8:
# 102 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for showing me. Here, I want\n"
	.string "you to have this as thanks.$"

PokeInnRoom1Girl_Text_9:
# 104 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I use my doll as pillow, so I don't need\n"
	.string "this. But someday, perhaps I'll get a\l"
	.string "real Pokémon!$"

PokeInnRoom1Girl_Text_10:
# 112 "data/maps/PokeInnRoom1/scripts.pory"
	.string "O-oh, okay... I guess it must be\n"
	.string "dangerous to take it out. Sorry for\l"
	.string "asking.$"

PokeInnRoom1Girl_Text_11:
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I can't wait to tell Anne about me\n"
	.string "petting a real Pokémon!$"

PokeInnRoom1Girl_Text_12:
# 127 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I went to tell Anne about me petting a\n"
	.string "real Pokémon, but she and her family are\l"
	.string "gone.\p"
	.string "She was the only girl my age in town...\p"
	.string "I'm sad, but Joel must be sadder. They\n"
	.string "were so close!.$"

PokeInnRoom1WheelchairBoy_Text_0:
# 143 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hey… does it hurt?$"

PokeInnRoom1WheelchairBoy_Text_1:
# 148 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… I envy you.$"

PokeInnRoom1WheelchairBoy_Text_2:
# 152 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… mine don't hurt either.$"

PokeInnRoom1WheelchairBoy_Text_3:
# 154 "data/maps/PokeInnRoom1/scripts.pory"
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

PokeInnRoom1WheelchairBoy_Text_4:
# 198 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Did you bring any Fighting type\n"
	.string "Pokémon? Which one?$"

PokeInnRoom1WheelchairBoy_Text_5:
# 199 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_1}$"

PokeInnRoom1WheelchairBoy_Text_6:
# 199 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_2}$"

PokeInnRoom1WheelchairBoy_Text_7:
# 199 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_3}$"

PokeInnRoom1WheelchairBoy_Text_8:
# 199 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A different Pokémon$"

PokeInnRoom1WheelchairBoy_Text_9:
# 199 "data/maps/PokeInnRoom1/scripts.pory"
	.string "None$"

PokeInnRoom1WheelchairBoy_Text_10:
# 205 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, a Manchine! I saw one of those by\n"
	.string "the Warehouse, but I never managed to\l"
	.string "catch one.$"

PokeInnRoom1WheelchairBoy_Text_11:
# 215 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Makuhita? Wow, they are my favourites\n"
	.string "- they're always full of energy!$"

PokeInnRoom1WheelchairBoy_Text_12:
# 225 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Scraggy!? Wow, they're so cool! I\n"
	.string "didn't know there were Scraggy in Hoenn\l"
	.string "now.$"

PokeInnRoom1WheelchairBoy_Text_13:
# 268 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Croagunk? Hmm… its arm is not\n"
	.string "poisonous, is it?$"

PokeInnRoom1WheelchairBoy_Text_14:
# 278 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Meditite? Oh, those are both strong\n"
	.string "and smart…$"

PokeInnRoom1WheelchairBoy_Text_15:
# 288 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Kamoken? They look just like\n"
	.string "Far'fetch... but they are Fightying\l"
	.string "type, right?$"

PokeInnRoom1WheelchairBoy_Text_16:
# 331 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Tyrogue!? Wow, that's a rare Pokémon!\n"
	.string "It must have been hard to find it.$"

PokeInnRoom1WheelchairBoy_Text_17:
# 341 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Riolu? Ah, it's both strong and cute -\n"
	.string "I think my sister will spoil it, hehe.$"

PokeInnRoom1WheelchairBoy_Text_18:
# 351 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Pancham? Wow, its gaze is so\n"
	.string "determined. I like that.$"

PokeInnRoom1WheelchairBoy_Text_19:
# 372 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Don't have any to trade? Well, that's\n"
	.string "okay... come back when you do!$"
