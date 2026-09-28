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
# 92 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairtradequestdone, OldaleInnRoomOldMan_2
# 104 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_3
OldaleInnRoomOldMan_1:
# 107 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

OldaleInnRoomOldMan_2:
# 94 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_0
# 97 "data/maps/PokeInnRoom1/scripts.pory"
	checkplayergender
# 98 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleInnRoomOldMan_6
OldaleInnRoomOldMan_5:
# 100 "data/maps/PokeInnRoom1/scripts.pory"
	checkplayergender
# 101 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleInnRoomOldMan_8
	goto OldaleInnRoomOldMan_1

OldaleInnRoomOldMan_6:
# 98 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_1
	goto OldaleInnRoomOldMan_5

OldaleInnRoomOldMan_8:
# 101 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_2
	goto OldaleInnRoomOldMan_1


PokeInnRoom1Girl::
# 111 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 112 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, OldaleInnRoomOldLady_Movement_0
# 113 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 115 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset showedoldaleinngirldoll, PokeInnRoom1Girl_2
PokeInnRoom1Girl_1:
# 235 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_6
PokeInnRoom1Girl_4:
# 238 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_15
PokeInnRoom1Girl_14:
# 243 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
PokeInnRoom1Girl_12:
# 245 "data/maps/PokeInnRoom1/scripts.pory"
endoldalepokeinnroom1girl:
# 246 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 247 "data/maps/PokeInnRoom1/scripts.pory"
	waitmovement 3
# 248 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

PokeInnRoom1Girl_2:
# 117 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_0
# 120 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 122 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER1, PokeInnRoom1Girl_10
PokeInnRoom1Girl_9:
# 127 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER2, PokeInnRoom1Girl_19
PokeInnRoom1Girl_18:
# 132 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_22
PokeInnRoom1Girl_21:
# 138 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1Girl_24
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_5:
# 236 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_17
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_6:
# 235 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset anneandfamilygone, PokeInnRoom1Girl_5
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_10:
# 123 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_1
# 125 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_BULBASYNTH, NO_PARTY_SCREEN
	goto PokeInnRoom1Girl_9

PokeInnRoom1Girl_13:
# 239 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_18
	goto PokeInnRoom1Girl_12

PokeInnRoom1Girl_15:
# 238 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set anneandfamilygone, PokeInnRoom1Girl_13
	goto PokeInnRoom1Girl_14

PokeInnRoom1Girl_19:
# 128 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_2
# 130 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_SMOTHQUIL, NO_PARTY_SCREEN
	goto PokeInnRoom1Girl_18

PokeInnRoom1Girl_22:
# 133 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_3
# 135 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_PIKACHU_SAFE, NO_PARTY_SCREEN
	goto PokeInnRoom1Girl_21

PokeInnRoom1Girl_24:
# 140 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_1
# 141 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 143 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER1, PokeInnRoom1Girl_27
PokeInnRoom1Girl_26:
# 146 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER2, PokeInnRoom1Girl_30
PokeInnRoom1Girl_29:
# 149 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_33
PokeInnRoom1Girl_32:
# 153 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_7, PokeInnRoom1Girl_Text_8
# 154 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1Girl_36
PokeInnRoom1Girl_35:
# 222 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1Girl_38
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_27:
# 144 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_4
	goto PokeInnRoom1Girl_26

PokeInnRoom1Girl_30:
# 147 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_5
	goto PokeInnRoom1Girl_29

PokeInnRoom1Girl_33:
# 150 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_6
	goto PokeInnRoom1Girl_32

PokeInnRoom1Girl_36:
# 155 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 157 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 158 "data/maps/PokeInnRoom1/scripts.pory"
	hidefollower
# 160 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_2
# 162 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 2, 9
# 163 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoadTradedFightingTypeOW_Movement_0
# 168 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER1, PokeInnRoom1Girl_41
PokeInnRoom1Girl_40:
# 173 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER2, PokeInnRoom1Girl_44
PokeInnRoom1Girl_43:
# 178 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_47
PokeInnRoom1Girl_46:
# 184 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 186 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_9
# 188 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER1, PokeInnRoom1Girl_50
PokeInnRoom1Girl_49:
# 192 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER2, PokeInnRoom1Girl_53
PokeInnRoom1Girl_52:
# 196 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_56
PokeInnRoom1Girl_55:
# 200 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_13
# 201 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 202 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 204 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 206 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 0, 0
# 207 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 6, 0, 0
# 208 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 7, 0, 0
# 210 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_4
# 211 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 213 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_14
# 214 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 215 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_15
# 217 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 218 "data/maps/PokeInnRoom1/scripts.pory"
	setflag showedoldaleinngirldoll
# 219 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_35

PokeInnRoom1Girl_38:
# 223 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_16
# 224 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_41:
# 169 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 6
# 170 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 6, 1, 10
# 171 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 6, PokeInnRoom1Girl_Movement_3
	goto PokeInnRoom1Girl_40

PokeInnRoom1Girl_44:
# 174 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 7
# 175 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 7, 1, 10
# 176 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 7, PokeInnRoom1Girl_Movement_3
	goto PokeInnRoom1Girl_43

PokeInnRoom1Girl_47:
# 179 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 5
# 180 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 1, 10
# 181 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 5, PokeInnRoom1Girl_Movement_3
	goto PokeInnRoom1Girl_46

PokeInnRoom1Girl_50:
# 189 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_BULBASYNTH, CRY_MODE_NORMAL
# 190 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_10
	goto PokeInnRoom1Girl_49

PokeInnRoom1Girl_53:
# 193 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_SMOTHQUIL, CRY_MODE_NORMAL
# 194 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_11
	goto PokeInnRoom1Girl_52

PokeInnRoom1Girl_56:
# 197 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_PIKACHU_SAFE, CRY_MODE_NORMAL
# 198 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_12
	goto PokeInnRoom1Girl_55


PokeInnRoom1WheelchairBoy::
# 252 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 253 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 254 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 257 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set wheelchairtradequestdone, PokeInnRoom1WheelchairBoy_2
PokeInnRoom1WheelchairBoy_1:
# 265 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairtradequestdone, PokeInnRoom1WheelchairBoy_4
	return

PokeInnRoom1WheelchairBoy_2:
# 259 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_0
# 263 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_1

PokeInnRoom1WheelchairBoy_4:
# 268 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_7
PokeInnRoom1WheelchairBoy_6:
# 291 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_10
PokeInnRoom1WheelchairBoy_9:
# 302 "data/maps/PokeInnRoom1/scripts.pory"
didyoubringanyfighttypes:
# 303 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 304 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_16
PokeInnRoom1WheelchairBoy_15:
# 306 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_22
PokeInnRoom1WheelchairBoy_21:
# 309 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 310 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_25
PokeInnRoom1WheelchairBoy_24:
# 312 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_28
PokeInnRoom1WheelchairBoy_27:
# 315 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 316 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_31
PokeInnRoom1WheelchairBoy_30:
# 318 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_34
PokeInnRoom1WheelchairBoy_33:
# 323 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 324 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9, PokeInnRoom1WheelchairBoy_Text_10
# 326 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_37
PokeInnRoom1WheelchairBoy_36:
# 342 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_40
PokeInnRoom1WheelchairBoy_39:
# 357 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_46
PokeInnRoom1WheelchairBoy_45:
# 371 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_54
PokeInnRoom1WheelchairBoy_53:
# 373 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_62
PokeInnRoom1WheelchairBoy_61:
# 561 "data/maps/PokeInnRoom1/scripts.pory"
backtowheelchairkidaftertrade:
# 562 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_23
# 563 "data/maps/PokeInnRoom1/scripts.pory"
	call ArmWrestleShake
# 564 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_24
# 565 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_SWAGGER2
# 566 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 567 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_SWAGGER2
# 568 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_25
# 569 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_YAWN
# 570 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_26
# 571 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 572 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_27
# 576 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 578 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_0
# 579 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_0
# 580 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_0
# 581 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_28
# 582 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 583 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 584 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_4
# 585 "data/maps/PokeInnRoom1/scripts.pory"
	setflag wheelchairtradequestdone
# 586 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
# 588 "data/maps/PokeInnRoom1/scripts.pory"
donthaveanyfightingtotrade:
# 589 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_29
# 590 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 0
# 591 "data/maps/PokeInnRoom1/scripts.pory"
endofwheelchairkidscript:
# 592 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

PokeInnRoom1WheelchairBoy_7:
# 270 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_1
# 272 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_7, PokeInnRoom1Girl_Text_8
# 274 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_13
PokeInnRoom1WheelchairBoy_12:
# 278 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_19
PokeInnRoom1WheelchairBoy_18:
# 281 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_4
# 288 "data/maps/PokeInnRoom1/scripts.pory"
	setflag wheelchairboyaskedpokemon
# 289 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_6

PokeInnRoom1WheelchairBoy_10:
# 292 "data/maps/PokeInnRoom1/scripts.pory"
	goto didyoubringanyfighttypes
	goto PokeInnRoom1WheelchairBoy_9

PokeInnRoom1WheelchairBoy_13:
# 275 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_2
	goto PokeInnRoom1WheelchairBoy_12

PokeInnRoom1WheelchairBoy_16:
# 305 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MANCHINE
	goto PokeInnRoom1WheelchairBoy_15

PokeInnRoom1WheelchairBoy_19:
# 279 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_3
	goto PokeInnRoom1WheelchairBoy_18

PokeInnRoom1WheelchairBoy_22:
# 307 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_21

PokeInnRoom1WheelchairBoy_25:
# 311 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MAKUHITA
	goto PokeInnRoom1WheelchairBoy_24

PokeInnRoom1WheelchairBoy_28:
# 313 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_27

PokeInnRoom1WheelchairBoy_31:
# 317 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_SCRAGGY
	goto PokeInnRoom1WheelchairBoy_30

PokeInnRoom1WheelchairBoy_34:
# 319 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_33

PokeInnRoom1WheelchairBoy_37:
# 327 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 328 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_43
PokeInnRoom1WheelchairBoy_42:
# 335 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_51
	goto PokeInnRoom1WheelchairBoy_36

PokeInnRoom1WheelchairBoy_40:
# 343 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 344 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_49
PokeInnRoom1WheelchairBoy_48:
# 350 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_59
	goto PokeInnRoom1WheelchairBoy_39

PokeInnRoom1WheelchairBoy_43:
# 330 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_11
# 331 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 1
# 332 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_42

PokeInnRoom1WheelchairBoy_46:
# 358 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 359 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_57
PokeInnRoom1WheelchairBoy_56:
# 364 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_64
	goto PokeInnRoom1WheelchairBoy_45

PokeInnRoom1WheelchairBoy_49:
# 346 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_13
# 347 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 2
# 348 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_48

PokeInnRoom1WheelchairBoy_51:
# 336 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 337 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 339 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_36

PokeInnRoom1WheelchairBoy_54:
# 371 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_53

PokeInnRoom1WheelchairBoy_57:
# 361 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_14
# 362 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 3
# 363 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_56

PokeInnRoom1WheelchairBoy_59:
# 351 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 352 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 354 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_39

PokeInnRoom1WheelchairBoy_62:
# 377 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 379 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_67
PokeInnRoom1WheelchairBoy_66:
# 381 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_70
PokeInnRoom1WheelchairBoy_69:
# 384 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 386 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_73
PokeInnRoom1WheelchairBoy_72:
# 388 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_76
PokeInnRoom1WheelchairBoy_75:
# 391 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 393 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_79
PokeInnRoom1WheelchairBoy_78:
# 395 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_82
PokeInnRoom1WheelchairBoy_81:
# 400 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 401 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9, PokeInnRoom1WheelchairBoy_Text_10
# 404 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_85
PokeInnRoom1WheelchairBoy_84:
# 418 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_88
PokeInnRoom1WheelchairBoy_87:
# 432 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_94
PokeInnRoom1WheelchairBoy_93:
# 446 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_102
PokeInnRoom1WheelchairBoy_101:
# 448 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_109
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_64:
# 365 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 366 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 368 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_45

PokeInnRoom1WheelchairBoy_67:
# 380 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CROAGUNK
	goto PokeInnRoom1WheelchairBoy_66

PokeInnRoom1WheelchairBoy_70:
# 382 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_69

PokeInnRoom1WheelchairBoy_73:
# 387 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MEDITITE
	goto PokeInnRoom1WheelchairBoy_72

PokeInnRoom1WheelchairBoy_76:
# 389 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_75

PokeInnRoom1WheelchairBoy_79:
# 394 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_KAMOKEN
	goto PokeInnRoom1WheelchairBoy_78

PokeInnRoom1WheelchairBoy_82:
# 396 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_81

PokeInnRoom1WheelchairBoy_85:
# 405 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 406 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_91
PokeInnRoom1WheelchairBoy_90:
# 411 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_99
	goto PokeInnRoom1WheelchairBoy_84

PokeInnRoom1WheelchairBoy_88:
# 419 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 420 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_97
PokeInnRoom1WheelchairBoy_96:
# 425 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_107
	goto PokeInnRoom1WheelchairBoy_87

PokeInnRoom1WheelchairBoy_91:
# 408 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_15
# 409 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 4
# 410 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_90

PokeInnRoom1WheelchairBoy_94:
# 433 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 434 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_105
PokeInnRoom1WheelchairBoy_104:
# 439 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_111
	goto PokeInnRoom1WheelchairBoy_93

PokeInnRoom1WheelchairBoy_97:
# 422 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_16
# 423 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 5
# 424 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_96

PokeInnRoom1WheelchairBoy_99:
# 412 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 413 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 415 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_84

PokeInnRoom1WheelchairBoy_102:
# 446 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_101

PokeInnRoom1WheelchairBoy_105:
# 436 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_17
# 437 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 6
# 438 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_104

PokeInnRoom1WheelchairBoy_107:
# 426 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 427 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 429 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_87

PokeInnRoom1WheelchairBoy_109:
# 452 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 454 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_114
PokeInnRoom1WheelchairBoy_113:
# 456 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_117
PokeInnRoom1WheelchairBoy_116:
# 459 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 461 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_120
PokeInnRoom1WheelchairBoy_119:
# 463 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_123
PokeInnRoom1WheelchairBoy_122:
# 466 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 468 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_126
PokeInnRoom1WheelchairBoy_125:
# 470 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_129
PokeInnRoom1WheelchairBoy_128:
# 475 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 476 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_18, PokeInnRoom1WheelchairBoy_Text_10
# 479 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_132
PokeInnRoom1WheelchairBoy_131:
# 493 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_135
PokeInnRoom1WheelchairBoy_134:
# 507 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_141
PokeInnRoom1WheelchairBoy_140:
# 521 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_149
PokeInnRoom1WheelchairBoy_148:
# 523 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_156
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_111:
# 440 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 441 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 443 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_93

PokeInnRoom1WheelchairBoy_114:
# 455 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
	goto PokeInnRoom1WheelchairBoy_113

PokeInnRoom1WheelchairBoy_117:
# 457 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_116

PokeInnRoom1WheelchairBoy_120:
# 462 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_RIOLU
	goto PokeInnRoom1WheelchairBoy_119

PokeInnRoom1WheelchairBoy_123:
# 464 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_122

PokeInnRoom1WheelchairBoy_126:
# 469 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_PANCHAM
	goto PokeInnRoom1WheelchairBoy_125

PokeInnRoom1WheelchairBoy_129:
# 471 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_128

PokeInnRoom1WheelchairBoy_132:
# 480 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 481 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_138
PokeInnRoom1WheelchairBoy_137:
# 486 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_146
	goto PokeInnRoom1WheelchairBoy_131

PokeInnRoom1WheelchairBoy_135:
# 494 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 495 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_144
PokeInnRoom1WheelchairBoy_143:
# 500 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_154
	goto PokeInnRoom1WheelchairBoy_134

PokeInnRoom1WheelchairBoy_138:
# 483 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_19
# 484 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 7
# 485 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_137

PokeInnRoom1WheelchairBoy_141:
# 508 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 509 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_152
PokeInnRoom1WheelchairBoy_151:
# 514 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_158
	goto PokeInnRoom1WheelchairBoy_140

PokeInnRoom1WheelchairBoy_144:
# 497 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_20
# 498 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 8
# 499 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_143

PokeInnRoom1WheelchairBoy_146:
# 487 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 488 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 490 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_131

PokeInnRoom1WheelchairBoy_149:
# 521 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_148

PokeInnRoom1WheelchairBoy_152:
# 511 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_21
# 512 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 9
# 513 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_151

PokeInnRoom1WheelchairBoy_154:
# 501 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 502 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 504 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_134

PokeInnRoom1WheelchairBoy_156:
# 528 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MACHOP
# 530 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_161
PokeInnRoom1WheelchairBoy_160:
# 532 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_164
PokeInnRoom1WheelchairBoy_163:
# 536 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 537 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_10
# 540 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_167
PokeInnRoom1WheelchairBoy_166:
# 554 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_169
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_158:
# 515 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 516 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 518 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_140

PokeInnRoom1WheelchairBoy_161:
# 531 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MACHOP
	goto PokeInnRoom1WheelchairBoy_160

PokeInnRoom1WheelchairBoy_164:
# 533 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_163

PokeInnRoom1WheelchairBoy_167:
# 541 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MACHOP
# 542 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_172
PokeInnRoom1WheelchairBoy_171:
# 547 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_174
	goto PokeInnRoom1WheelchairBoy_166

PokeInnRoom1WheelchairBoy_169:
# 554 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_172:
# 544 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_22
# 545 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 10
# 546 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_171

PokeInnRoom1WheelchairBoy_174:
# 548 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 549 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 551 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_166


fightingtypetradescript::
# 597 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 598 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, fightingtypetradescript_Movement_0
# 599 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, fightingtypetradescript_Movement_0
# 600 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_0
# 601 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_0
# 602 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_0
# 603 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, fightingtypetradescript_Movement_1
# 604 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, fightingtypetradescript_Movement_1
# 605 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_1
# 610 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq fightingtypetradescript_2
fightingtypetradescript_1:
# 613 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq fightingtypetradescript_5
fightingtypetradescript_4:
# 616 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 3
	goto_if_eq fightingtypetradescript_8
fightingtypetradescript_7:
# 619 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 4
	goto_if_eq fightingtypetradescript_11
fightingtypetradescript_10:
# 622 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 5
	goto_if_eq fightingtypetradescript_14
fightingtypetradescript_13:
# 625 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 6
	goto_if_eq fightingtypetradescript_17
fightingtypetradescript_16:
# 628 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 7
	goto_if_eq fightingtypetradescript_20
fightingtypetradescript_19:
# 631 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 8
	goto_if_eq fightingtypetradescript_23
fightingtypetradescript_22:
# 634 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 9
	goto_if_eq fightingtypetradescript_26
fightingtypetradescript_25:
# 637 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 10
	goto_if_eq fightingtypetradescript_29
fightingtypetradescript_28:
# 642 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 643 "data/maps/PokeInnRoom1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 644 "data/maps/PokeInnRoom1/scripts.pory"
	special ChoosePartyMon
# 645 "data/maps/PokeInnRoom1/scripts.pory"
	waitstate
# 646 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTaillowTrade
# 647 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 648 "data/maps/PokeInnRoom1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 649 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, IncorrectFightingType
# 650 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 651 "data/maps/PokeInnRoom1/scripts.pory"
	special CreateInGameTradePokemon
# 652 "data/maps/PokeInnRoom1/scripts.pory"
	special DoInGameTradeScene
# 653 "data/maps/PokeInnRoom1/scripts.pory"
	waitstate
# 654 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 655 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_4
# 656 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_4
# 657 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq fightingtypetradescript_32
fightingtypetradescript_31:
# 668 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq fightingtypetradescript_35
fightingtypetradescript_34:
# 677 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 3
	goto_if_eq fightingtypetradescript_38
fightingtypetradescript_37:
# 687 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 4
	goto_if_eq fightingtypetradescript_41
fightingtypetradescript_40:
# 696 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 5
	goto_if_eq fightingtypetradescript_44
fightingtypetradescript_43:
# 705 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 6
	goto_if_eq fightingtypetradescript_47
fightingtypetradescript_46:
# 714 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 7
	goto_if_eq fightingtypetradescript_50
fightingtypetradescript_49:
# 723 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 8
	goto_if_eq fightingtypetradescript_53
fightingtypetradescript_52:
# 732 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 9
	goto_if_eq fightingtypetradescript_56
fightingtypetradescript_55:
# 741 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 10
	goto_if_eq fightingtypetradescript_59
fightingtypetradescript_58:
# 750 "data/maps/PokeInnRoom1/scripts.pory"
	goto backtowheelchairkidaftertrade
	return

fightingtypetradescript_2:
# 611 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW1
	goto fightingtypetradescript_1

fightingtypetradescript_5:
# 614 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW2
	goto fightingtypetradescript_4

fightingtypetradescript_8:
# 617 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW3
	goto fightingtypetradescript_7

fightingtypetradescript_11:
# 620 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW4
	goto fightingtypetradescript_10

fightingtypetradescript_14:
# 623 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW5
	goto fightingtypetradescript_13

fightingtypetradescript_17:
# 626 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW6
	goto fightingtypetradescript_16

fightingtypetradescript_20:
# 629 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW7
	goto fightingtypetradescript_19

fightingtypetradescript_23:
# 632 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW8
	goto fightingtypetradescript_22

fightingtypetradescript_26:
# 635 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW10
	goto fightingtypetradescript_25

fightingtypetradescript_29:
# 638 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW10
	goto fightingtypetradescript_28

fightingtypetradescript_32:
# 659 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 11
# 660 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 11, 5, 11
# 662 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 664 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MANCHINE, CRY_MODE_NORMAL
# 665 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_2
	goto fightingtypetradescript_31

fightingtypetradescript_35:
# 669 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 12
# 670 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 12, 5, 11
# 672 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 673 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 674 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_3
	goto fightingtypetradescript_34

fightingtypetradescript_38:
# 678 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 13
# 679 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 13, 5, 11
# 681 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 682 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_SCRAGGY, CRY_MODE_NORMAL
# 683 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_4
	goto fightingtypetradescript_37

fightingtypetradescript_41:
# 688 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 14
# 689 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 14, 5, 11
# 691 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 692 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_CROAGUNK, CRY_MODE_NORMAL
# 693 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_5
	goto fightingtypetradescript_40

fightingtypetradescript_44:
# 697 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 15
# 698 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 15, 5, 11
# 700 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 701 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_CROAGUNK, CRY_MODE_NORMAL
# 702 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_6
	goto fightingtypetradescript_43

fightingtypetradescript_47:
# 706 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 16
# 707 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 16, 5, 11
# 709 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 710 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_KAMOKEN, CRY_MODE_NORMAL
# 711 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_7
	goto fightingtypetradescript_46

fightingtypetradescript_50:
# 715 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 17
# 716 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 17, 5, 11
# 718 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 719 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_TYROGUE, CRY_MODE_NORMAL
# 720 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_8
	goto fightingtypetradescript_49

fightingtypetradescript_53:
# 724 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 18
# 725 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 18, 5, 11
# 727 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 728 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_RIOLU, CRY_MODE_NORMAL
# 729 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_9
	goto fightingtypetradescript_52

fightingtypetradescript_56:
# 733 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 19
# 734 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 19, 5, 11
# 736 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 737 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_PANCHAM, CRY_MODE_NORMAL
# 738 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_10
	goto fightingtypetradescript_55

fightingtypetradescript_59:
# 742 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 20
# 743 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 20, 5, 11
# 745 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 746 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 747 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_11
	goto fightingtypetradescript_58


ArmWrestleShake::
# 755 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 756 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8004, 2
# 757 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8005, 6
# 758 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8006, 4
# 759 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8007, 4
# 760 "data/maps/PokeInnRoom1/scripts.pory"
	special ShakeCamera
	return


CancelTaillowTrade::
# 764 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_0
# 766 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 767 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 768 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 769 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_4
# 770 "data/maps/PokeInnRoom1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 771 "data/maps/PokeInnRoom1/scripts.pory"
	gettimeofday
# 772 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq CancelTaillowTrade_2
# 775 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_2
CancelTaillowTrade_1:
# 776 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

CancelTaillowTrade_2:
# 773 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_1
	goto CancelTaillowTrade_1


IncorrectFightingType::
# 780 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 781 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox IncorrectFightingType_Text_0
# 783 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 784 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 785 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 786 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_4
# 787 "data/maps/PokeInnRoom1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 788 "data/maps/PokeInnRoom1/scripts.pory"
	gettimeofday
# 789 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq IncorrectFightingType_2
# 792 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_2
IncorrectFightingType_1:
# 793 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

IncorrectFightingType_2:
# 790 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_1
	goto IncorrectFightingType_1


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

# 120 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_0:
# 120 "data/maps/PokeInnRoom1/scripts.pory"
	face_up
	step_end

# 140 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_1:
# 140 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
# 140 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 160 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_2:
# 160 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 171 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_3:
# 171 "data/maps/PokeInnRoom1/scripts.pory"
	walk_in_place_up
	step_end

# 210 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_4:
# 210 "data/maps/PokeInnRoom1/scripts.pory"
	face_right
	step_end

# 578 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1WheelchairBoy_Movement_0:
# 578 "data/maps/PokeInnRoom1/scripts.pory"
	walk_in_place_down
	step_end

# 582 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1WheelchairBoy_Movement_1:
# 582 "data/maps/PokeInnRoom1/scripts.pory"
	walk_up
# 582 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 598 "data/maps/PokeInnRoom1/scripts.pory"
fightingtypetradescript_Movement_0:
# 598 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
# 598 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
	step_end

# 603 "data/maps/PokeInnRoom1/scripts.pory"
fightingtypetradescript_Movement_1:
# 603 "data/maps/PokeInnRoom1/scripts.pory"
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
# 94 "data/maps/PokeInnRoom1/scripts.pory"
	.string "My grandson was injured during the war,\n"
	.string "but if it wasn't for one of the\l"
	.string "Littleroot Heroes, he wouldn't be here\l"
	.string "at all...$"

OldaleInnRoomOldMan_Text_1:
# 98 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... you have an odd resemblance to\n"
	.string "him.$"

OldaleInnRoomOldMan_Text_2:
# 101 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... you have an odd resemblance to\n"
	.string "her.$"

OldaleInnRoomOldMan_Text_3:
# 104 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for agreeing to the trade. I'm\n"
	.string "sure Taillow will do right by you.$"

PokeInnRoom1Girl_Text_0:
# 117 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, you're the one who arrived late at\n"
	.string "therapy.\p"
	.string "I'm sorry for yelling in class. I hope\n"
	.string "the teacher did't get mad.\p"
	.string "I saw my brother get hurt by a\n"
	.string "Blastoise during the war, and I'm a bit\l"
	.string "scared of them.$"

PokeInnRoom1Girl_Text_1:
# 123 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Bulbasynth doll! Isn't it cute?\p"
	.string "I want to see a real Bulbasynth one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_2:
# 128 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Smothquil doll! Isn't it cute?\p"
	.string "I want to see a real Smothquil one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_3:
# 133 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Purachu doll! Isn't it cute?\p"
	.string "I want to see a real Purachu one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_4:
# 144 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Bulbasynth you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_5:
# 147 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Smothquil you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_6:
# 150 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Purachu you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_7:
# 153 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Yes$"

PokeInnRoom1Girl_Text_8:
# 153 "data/maps/PokeInnRoom1/scripts.pory"
	.string "No$"

PokeInnRoom1Girl_Text_9:
# 186 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wow... it's so plumpy! I'll try petting it!$"

PokeInnRoom1Girl_Text_10:
# 190 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Buuuu...$"

PokeInnRoom1Girl_Text_11:
# 194 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Quiiiil...$"

PokeInnRoom1Girl_Text_12:
# 198 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Puuu...$"

PokeInnRoom1Girl_Text_13:
# 200 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh... I think it liked it. I guess Pokémon\n"
	.string "aren't so scary after all.$"

PokeInnRoom1Girl_Text_14:
# 213 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for showing me. Here, I want\n"
	.string "you to have this as thanks.$"

PokeInnRoom1Girl_Text_15:
# 215 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I use my doll as pillow, so I don't need\n"
	.string "this. But someday, perhaps I'll get a\l"
	.string "real Pokémon to cuddle with!$"

PokeInnRoom1Girl_Text_16:
# 223 "data/maps/PokeInnRoom1/scripts.pory"
	.string "O-oh, okay... I guess it must be\n"
	.string "dangerous to take it out.\p"
	.string "Sorry for asking.$"

PokeInnRoom1Girl_Text_17:
# 236 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I can't wait to tell Anne about me\n"
	.string "petting a real Pokémon!$"

PokeInnRoom1Girl_Text_18:
# 239 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I went to tell Anne about me petting a\n"
	.string "real Pokémon, but she and her family are\l"
	.string "gone.\p"
	.string "She was the only girl my age in town...\p"
	.string "I'm sad, but Joel must be sadder. They\n"
	.string "were so close!.$"

PokeInnRoom1WheelchairBoy_Text_0:
# 259 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I won't let my injury get in the way of\n"
	.string "being awesome. Just like you!$"

PokeInnRoom1WheelchairBoy_Text_1:
# 270 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hey… does it hurt?$"

PokeInnRoom1WheelchairBoy_Text_2:
# 275 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… I envy you.$"

PokeInnRoom1WheelchairBoy_Text_3:
# 279 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… mine don't hurt either.$"

PokeInnRoom1WheelchairBoy_Text_4:
# 281 "data/maps/PokeInnRoom1/scripts.pory"
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
# 323 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Did you bring any Fighting type\n"
	.string "Pokémon? Which one?$"

PokeInnRoom1WheelchairBoy_Text_6:
# 324 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_1}$"

PokeInnRoom1WheelchairBoy_Text_7:
# 324 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_2}$"

PokeInnRoom1WheelchairBoy_Text_8:
# 324 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_3}$"

PokeInnRoom1WheelchairBoy_Text_9:
# 324 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A different Pokémon$"

PokeInnRoom1WheelchairBoy_Text_10:
# 324 "data/maps/PokeInnRoom1/scripts.pory"
	.string "None$"

PokeInnRoom1WheelchairBoy_Text_11:
# 330 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, a Manchine! I saw one of those by\n"
	.string "the Warehouse, but I never managed to\l"
	.string "catch one.$"

PokeInnRoom1WheelchairBoy_Text_12:
# 337 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... if you don't have its data on your\n"
	.string "Devondex, I rather not risk it.\p"
	.string "It might not even be a Fighting type!$"

PokeInnRoom1WheelchairBoy_Text_13:
# 346 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Makuhita? Wow, they are my favourites\n"
	.string "- they're always full of energy!$"

PokeInnRoom1WheelchairBoy_Text_14:
# 361 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Scraggy!? Wow, they're so cool! I\n"
	.string "didn't know there were Scraggy in Hoenn\l"
	.string "now.$"

PokeInnRoom1WheelchairBoy_Text_15:
# 408 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Croagunk? Hmm… its arm is not\n"
	.string "poisonous, is it?$"

PokeInnRoom1WheelchairBoy_Text_16:
# 422 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Meditite? Oh, those are both strong\n"
	.string "and smart…$"

PokeInnRoom1WheelchairBoy_Text_17:
# 436 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Kamoken? They look just like\n"
	.string "Far'fetch... but they are Fighting type,\l"
	.string "right?$"

PokeInnRoom1WheelchairBoy_Text_18:
# 476 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A different one$"

PokeInnRoom1WheelchairBoy_Text_19:
# 483 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Tyrogue!? Wow, that's a rare Pokémon!\n"
	.string "It must have been hard to find it.$"

PokeInnRoom1WheelchairBoy_Text_20:
# 497 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Riolu? Ah, it's both strong and cute -\n"
	.string "I think my sister will spoil it, hehe.$"

PokeInnRoom1WheelchairBoy_Text_21:
# 511 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Pancham? Wow, its gaze is so\n"
	.string "determined. I like that.$"

PokeInnRoom1WheelchairBoy_Text_22:
# 544 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Machop!? I thought Devon Co. had\n"
	.string "turned them all into Manchines...$"

PokeInnRoom1WheelchairBoy_Text_23:
# 562 "data/maps/PokeInnRoom1/scripts.pory"
	.string "It's so cooool! Alright - time to test\n"
	.string "this. Three, two, one...$"

PokeInnRoom1WheelchairBoy_Text_24:
# 564 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Arm Wrestle!$"

PokeInnRoom1WheelchairBoy_Text_25:
# 568 "data/maps/PokeInnRoom1/scripts.pory"
	.string "GRRRR...$"

PokeInnRoom1WheelchairBoy_Text_26:
# 570 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Gah... I lost! But I did better than I\n"
	.string "thought I would!$"

PokeInnRoom1WheelchairBoy_Text_27:
# 572 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hm? You look surprised. Why did you\n"
	.string "think I wanted a Fighting Type?\p"
	.string "Well, it wasn't to push my chair - it's to\n"
	.string "get strong enough so I can push it\l"
	.string "myself!\p"
	.string "I was using this till now, but you can\n"
	.string "have it. Getting stronger with Pokémon\l"
	.string "is much more fun!$"

PokeInnRoom1WheelchairBoy_Text_28:
# 581 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for helping my grandson.\n"
	.string "Please, take good care of Taillow.$"

PokeInnRoom1WheelchairBoy_Text_29:
# 589 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Don't have any to trade? Well, that's\n"
	.string "okay... come back when you do!$"

fightingtypetradescript_Text_0:
# 602 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... did you really bring my grandson\n"
	.string "a Pokémon?$"

fightingtypetradescript_Text_1:
# 605 "data/maps/PokeInnRoom1/scripts.pory"
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
# 665 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Man-maaaan!$"

fightingtypetradescript_Text_3:
# 674 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Ma-kkuuuu!$"

fightingtypetradescript_Text_4:
# 683 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Gy-gyyyy!$"

fightingtypetradescript_Text_5:
# 693 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Crrroak!$"

fightingtypetradescript_Text_6:
# 702 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Meee...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

fightingtypetradescript_Text_7:
# 711 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Ka-kaaaaa!$"

fightingtypetradescript_Text_8:
# 720 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Tyyyaaaa!$"

fightingtypetradescript_Text_9:
# 729 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Rio-rio!$"

fightingtypetradescript_Text_10:
# 738 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Cha-chaaaam!$"

fightingtypetradescript_Text_11:
# 747 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Choooop-chop!$"

CancelTaillowTrade_Text_0:
# 764 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, changed your mind? That is well...\p"
	.string "Pokémon should not be traded away\n"
	.string "lightly.$"

CancelTaillowTrade_Text_1:
# 773 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Aw, I guess grandpa is right... but if you\n"
	.string "change your mind again, come back\l"
	.string "please!$"

CancelTaillowTrade_Text_2:
# 775 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Aw, I guess grandma is right... but if you\n"
	.string "change your mind again, come back\l"
	.string "please!$"

IncorrectFightingType_Text_0:
# 781 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... that's not the Pokémon you\n"
	.string "promised my grandson, is it?\p"
	.string "If you have changed your mind... that is\n"
	.string "well.$"
