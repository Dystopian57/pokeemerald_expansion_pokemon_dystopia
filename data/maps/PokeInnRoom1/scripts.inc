# 1 "data/maps/PokeInnRoom1/scripts.pory"


PokeInnRoom1_MapScripts::
# 7 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokeInnRoom1MapScriptBundle
# 8 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoadTradedFightingTypeOW
# 9 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokeInnRoom1MapScriptBundle
# 10 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LoadTradedFightingTypeOW
# 11 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 12 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 13 "data/maps/PokeInnRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


PokeInnRoom1MapScriptBundle::
# 25 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq PokeInnRoom1MapScriptBundle_2
PokeInnRoom1MapScriptBundle_1:
# 32 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq PokeInnRoom1MapScriptBundle_5
PokeInnRoom1MapScriptBundle_4:
# 68 "data/maps/PokeInnRoom1/scripts.pory"
	goto DayNightAmbientLight
# 71 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

PokeInnRoom1MapScriptBundle_2:
# 26 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 11
# 27 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 11, 5, 11
# 28 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 11, PokeInnRoom1MapScriptBundle_Movement_0
	goto PokeInnRoom1MapScriptBundle_1

PokeInnRoom1MapScriptBundle_5:
# 33 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 12
# 34 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 12, 5, 11
# 35 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 12, PokeInnRoom1MapScriptBundle_Movement_0
# 39 "data/maps/PokeInnRoom1/scripts.pory"
	gettimeofday
# 40 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PokeInnRoom1MapScriptBundle_8
PokeInnRoom1MapScriptBundle_7:
# 45 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PokeInnRoom1MapScriptBundle_11
PokeInnRoom1MapScriptBundle_10:
# 50 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PokeInnRoom1MapScriptBundle_14
PokeInnRoom1MapScriptBundle_13:
# 55 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PokeInnRoom1MapScriptBundle_17
PokeInnRoom1MapScriptBundle_16:
# 60 "data/maps/PokeInnRoom1/scripts.pory"
endofdaynightnpcinn:
	goto PokeInnRoom1MapScriptBundle_4

PokeInnRoom1MapScriptBundle_8:
# 41 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag daynpc
# 42 "data/maps/PokeInnRoom1/scripts.pory"
	setflag nightnpc
# 43 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto PokeInnRoom1MapScriptBundle_7

PokeInnRoom1MapScriptBundle_11:
# 46 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag daynpc
# 47 "data/maps/PokeInnRoom1/scripts.pory"
	setflag nightnpc
# 48 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto PokeInnRoom1MapScriptBundle_10

PokeInnRoom1MapScriptBundle_14:
# 51 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag nightnpc
# 52 "data/maps/PokeInnRoom1/scripts.pory"
	setflag daynpc
# 53 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto PokeInnRoom1MapScriptBundle_13

PokeInnRoom1MapScriptBundle_17:
# 56 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag nightnpc
# 57 "data/maps/PokeInnRoom1/scripts.pory"
	setflag daynpc
# 58 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofdaynightnpcinn
	goto PokeInnRoom1MapScriptBundle_16


LoadTradedFightingTypeOW::
# 76 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq LoadTradedFightingTypeOW_2
LoadTradedFightingTypeOW_1:
# 83 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq LoadTradedFightingTypeOW_5
LoadTradedFightingTypeOW_4:
# 89 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

LoadTradedFightingTypeOW_2:
# 77 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 11
# 78 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 11, 5, 11
# 79 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 11, PokeInnRoom1MapScriptBundle_Movement_0
	goto LoadTradedFightingTypeOW_1

LoadTradedFightingTypeOW_5:
# 84 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 12
# 85 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 12, 5, 11
# 86 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 12, PokeInnRoom1MapScriptBundle_Movement_0
	goto LoadTradedFightingTypeOW_4


OldaleUsedInnBin::
# 93 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 94 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset FLAG_ITEM_OLDALEUSEDINNBIN, OldaleUsedInnBin_2
# 99 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_1
OldaleUsedInnBin_1:
# 100 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

OldaleUsedInnBin_2:
# 95 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleUsedInnBin_Text_0
# 96 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 97 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_ITEM_OLDALEUSEDINNBIN
	goto OldaleUsedInnBin_1


OldaleInnRoomOldLady::
# 105 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 106 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 107 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, OldaleInnRoomOldLady_Movement_0
# 108 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldLady_Text_0
# 110 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return


OldaleInnRoomOldMan::
# 114 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 115 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 116 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, OldaleInnRoomOldLady_Movement_0
# 118 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairtradequestdone, OldaleInnRoomOldMan_2
# 130 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_3
OldaleInnRoomOldMan_1:
# 133 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

OldaleInnRoomOldMan_2:
# 120 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_0
# 123 "data/maps/PokeInnRoom1/scripts.pory"
	checkplayergender
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleInnRoomOldMan_6
OldaleInnRoomOldMan_5:
# 126 "data/maps/PokeInnRoom1/scripts.pory"
	checkplayergender
# 127 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleInnRoomOldMan_8
	goto OldaleInnRoomOldMan_1

OldaleInnRoomOldMan_6:
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_1
	goto OldaleInnRoomOldMan_5

OldaleInnRoomOldMan_8:
# 127 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox OldaleInnRoomOldMan_Text_2
	goto OldaleInnRoomOldMan_1


PokeInnRoom1Girl::
# 137 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 138 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, OldaleInnRoomOldLady_Movement_0
# 139 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 141 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset showedoldaleinngirldoll, PokeInnRoom1Girl_2
PokeInnRoom1Girl_1:
# 261 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_6
PokeInnRoom1Girl_4:
# 264 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set showedoldaleinngirldoll, PokeInnRoom1Girl_15
PokeInnRoom1Girl_14:
# 269 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
PokeInnRoom1Girl_12:
# 271 "data/maps/PokeInnRoom1/scripts.pory"
endoldalepokeinnroom1girl:
# 272 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 273 "data/maps/PokeInnRoom1/scripts.pory"
	waitmovement 3
# 274 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

PokeInnRoom1Girl_2:
# 143 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_0
# 146 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 148 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER1, PokeInnRoom1Girl_10
PokeInnRoom1Girl_9:
# 153 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER2, PokeInnRoom1Girl_19
PokeInnRoom1Girl_18:
# 158 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_22
PokeInnRoom1Girl_21:
# 164 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1Girl_24
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_5:
# 262 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_17
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_6:
# 261 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset anneandfamilygone, PokeInnRoom1Girl_5
	goto PokeInnRoom1Girl_4

PokeInnRoom1Girl_10:
# 149 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_1
# 151 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_BULBASYNTH, NO_PARTY_SCREEN
	goto PokeInnRoom1Girl_9

PokeInnRoom1Girl_13:
# 265 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_18
	goto PokeInnRoom1Girl_12

PokeInnRoom1Girl_15:
# 264 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set anneandfamilygone, PokeInnRoom1Girl_13
	goto PokeInnRoom1Girl_14

PokeInnRoom1Girl_19:
# 154 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_2
# 156 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_SMOTHQUIL, NO_PARTY_SCREEN
	goto PokeInnRoom1Girl_18

PokeInnRoom1Girl_22:
# 159 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_3
# 161 "data/maps/PokeInnRoom1/scripts.pory"
	checkspecies SPECIES_PIKACHU_SAFE, NO_PARTY_SCREEN
	goto PokeInnRoom1Girl_21

PokeInnRoom1Girl_24:
# 166 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_1
# 167 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 169 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER1, PokeInnRoom1Girl_27
PokeInnRoom1Girl_26:
# 172 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER2, PokeInnRoom1Girl_30
PokeInnRoom1Girl_29:
# 175 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_33
PokeInnRoom1Girl_32:
# 179 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_7, PokeInnRoom1Girl_Text_8
# 180 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1Girl_36
PokeInnRoom1Girl_35:
# 248 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1Girl_38
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_27:
# 170 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_4
	goto PokeInnRoom1Girl_26

PokeInnRoom1Girl_30:
# 173 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_5
	goto PokeInnRoom1Girl_29

PokeInnRoom1Girl_33:
# 176 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_6
	goto PokeInnRoom1Girl_32

PokeInnRoom1Girl_36:
# 181 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 183 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 184 "data/maps/PokeInnRoom1/scripts.pory"
	hidefollower
# 186 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_2
# 188 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 2, 9
# 189 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1MapScriptBundle_Movement_0
# 194 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER1, PokeInnRoom1Girl_41
PokeInnRoom1Girl_40:
# 199 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER2, PokeInnRoom1Girl_44
PokeInnRoom1Girl_43:
# 204 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_47
PokeInnRoom1Girl_46:
# 210 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 212 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_9
# 214 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER1, PokeInnRoom1Girl_50
PokeInnRoom1Girl_49:
# 218 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER2, PokeInnRoom1Girl_53
PokeInnRoom1Girl_52:
# 222 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set GOTSTARTER3, PokeInnRoom1Girl_56
PokeInnRoom1Girl_55:
# 226 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_13
# 227 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 228 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 230 "data/maps/PokeInnRoom1/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 232 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 0, 0
# 233 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 6, 0, 0
# 234 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 7, 0, 0
# 236 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_4
# 237 "data/maps/PokeInnRoom1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 239 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_14
# 240 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 241 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_15
# 243 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 3, PokeInnRoom1Girl_Movement_0
# 244 "data/maps/PokeInnRoom1/scripts.pory"
	setflag showedoldaleinngirldoll
# 245 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_35

PokeInnRoom1Girl_38:
# 249 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_16
# 250 "data/maps/PokeInnRoom1/scripts.pory"
	goto endoldalepokeinnroom1girl
	goto PokeInnRoom1Girl_1

PokeInnRoom1Girl_41:
# 195 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 6
# 196 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 6, 1, 10
# 197 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 6, PokeInnRoom1Girl_Movement_3
	goto PokeInnRoom1Girl_40

PokeInnRoom1Girl_44:
# 200 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 7
# 201 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 7, 1, 10
# 202 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 7, PokeInnRoom1Girl_Movement_3
	goto PokeInnRoom1Girl_43

PokeInnRoom1Girl_47:
# 205 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 5
# 206 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 5, 1, 10
# 207 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 5, PokeInnRoom1Girl_Movement_3
	goto PokeInnRoom1Girl_46

PokeInnRoom1Girl_50:
# 215 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_BULBASYNTH, CRY_MODE_NORMAL
# 216 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_10
	goto PokeInnRoom1Girl_49

PokeInnRoom1Girl_53:
# 219 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_SMOTHQUIL, CRY_MODE_NORMAL
# 220 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_11
	goto PokeInnRoom1Girl_52

PokeInnRoom1Girl_56:
# 223 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_PIKACHU_SAFE, CRY_MODE_NORMAL
# 224 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1Girl_Text_12
	goto PokeInnRoom1Girl_55


PokeInnRoom1WheelchairBoy::
# 278 "data/maps/PokeInnRoom1/scripts.pory"
	lock
# 279 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 280 "data/maps/PokeInnRoom1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 283 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set wheelchairtradequestdone, PokeInnRoom1WheelchairBoy_2
PokeInnRoom1WheelchairBoy_1:
# 291 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairtradequestdone, PokeInnRoom1WheelchairBoy_4
	return

PokeInnRoom1WheelchairBoy_2:
# 285 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_0
# 289 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_1

PokeInnRoom1WheelchairBoy_4:
# 294 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_unset wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_7
PokeInnRoom1WheelchairBoy_6:
# 317 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_set wheelchairboyaskedpokemon, PokeInnRoom1WheelchairBoy_10
PokeInnRoom1WheelchairBoy_9:
# 328 "data/maps/PokeInnRoom1/scripts.pory"
didyoubringanyfighttypes:
# 329 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 330 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_16
PokeInnRoom1WheelchairBoy_15:
# 332 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_22
PokeInnRoom1WheelchairBoy_21:
# 335 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 336 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_25
PokeInnRoom1WheelchairBoy_24:
# 338 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_28
PokeInnRoom1WheelchairBoy_27:
# 341 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 342 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_31
PokeInnRoom1WheelchairBoy_30:
# 344 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_34
PokeInnRoom1WheelchairBoy_33:
# 349 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 350 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9, PokeInnRoom1WheelchairBoy_Text_10
# 352 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_37
PokeInnRoom1WheelchairBoy_36:
# 368 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_40
PokeInnRoom1WheelchairBoy_39:
# 383 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_46
PokeInnRoom1WheelchairBoy_45:
# 397 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_54
PokeInnRoom1WheelchairBoy_53:
# 399 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_62
PokeInnRoom1WheelchairBoy_61:
# 587 "data/maps/PokeInnRoom1/scripts.pory"
backtowheelchairkidaftertrade:
# 588 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_23
# 589 "data/maps/PokeInnRoom1/scripts.pory"
	call ArmWrestleShake
# 590 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_24
# 591 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_SWAGGER2
# 592 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 593 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_SWAGGER2
# 594 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_25
# 595 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_YAWN
# 596 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_26
# 597 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 598 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_27
# 602 "data/maps/PokeInnRoom1/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 604 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_0
# 605 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_0
# 606 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_0
# 607 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_28
# 608 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 609 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 610 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_4
# 611 "data/maps/PokeInnRoom1/scripts.pory"
	setflag wheelchairtradequestdone
# 612 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
# 614 "data/maps/PokeInnRoom1/scripts.pory"
donthaveanyfightingtotrade:
# 615 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_29
# 616 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 0
# 617 "data/maps/PokeInnRoom1/scripts.pory"
endofwheelchairkidscript:
# 618 "data/maps/PokeInnRoom1/scripts.pory"
	release
	return

PokeInnRoom1WheelchairBoy_7:
# 296 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_1
# 298 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1Girl_Text_7, PokeInnRoom1Girl_Text_8
# 300 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_13
PokeInnRoom1WheelchairBoy_12:
# 304 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_19
PokeInnRoom1WheelchairBoy_18:
# 307 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_4
# 314 "data/maps/PokeInnRoom1/scripts.pory"
	setflag wheelchairboyaskedpokemon
# 315 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_6

PokeInnRoom1WheelchairBoy_10:
# 318 "data/maps/PokeInnRoom1/scripts.pory"
	goto didyoubringanyfighttypes
	goto PokeInnRoom1WheelchairBoy_9

PokeInnRoom1WheelchairBoy_13:
# 301 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_2
	goto PokeInnRoom1WheelchairBoy_12

PokeInnRoom1WheelchairBoy_16:
# 331 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MANCHINE
	goto PokeInnRoom1WheelchairBoy_15

PokeInnRoom1WheelchairBoy_19:
# 305 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_3
	goto PokeInnRoom1WheelchairBoy_18

PokeInnRoom1WheelchairBoy_22:
# 333 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_21

PokeInnRoom1WheelchairBoy_25:
# 337 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MAKUHITA
	goto PokeInnRoom1WheelchairBoy_24

PokeInnRoom1WheelchairBoy_28:
# 339 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_27

PokeInnRoom1WheelchairBoy_31:
# 343 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_SCRAGGY
	goto PokeInnRoom1WheelchairBoy_30

PokeInnRoom1WheelchairBoy_34:
# 345 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_33

PokeInnRoom1WheelchairBoy_37:
# 353 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MANCHINE
# 354 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_43
PokeInnRoom1WheelchairBoy_42:
# 361 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_51
	goto PokeInnRoom1WheelchairBoy_36

PokeInnRoom1WheelchairBoy_40:
# 369 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MAKUHITA
# 370 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_49
PokeInnRoom1WheelchairBoy_48:
# 376 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_59
	goto PokeInnRoom1WheelchairBoy_39

PokeInnRoom1WheelchairBoy_43:
# 356 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_11
# 357 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 1
# 358 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_42

PokeInnRoom1WheelchairBoy_46:
# 384 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_SCRAGGY
# 385 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_57
PokeInnRoom1WheelchairBoy_56:
# 390 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_64
	goto PokeInnRoom1WheelchairBoy_45

PokeInnRoom1WheelchairBoy_49:
# 372 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_13
# 373 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 2
# 374 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_48

PokeInnRoom1WheelchairBoy_51:
# 362 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 363 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 365 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_36

PokeInnRoom1WheelchairBoy_54:
# 397 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_53

PokeInnRoom1WheelchairBoy_57:
# 387 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_14
# 388 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 3
# 389 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_56

PokeInnRoom1WheelchairBoy_59:
# 377 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 378 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 380 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_39

PokeInnRoom1WheelchairBoy_62:
# 403 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 405 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_67
PokeInnRoom1WheelchairBoy_66:
# 407 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_70
PokeInnRoom1WheelchairBoy_69:
# 410 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 412 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_73
PokeInnRoom1WheelchairBoy_72:
# 414 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_76
PokeInnRoom1WheelchairBoy_75:
# 417 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 419 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_79
PokeInnRoom1WheelchairBoy_78:
# 421 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_82
PokeInnRoom1WheelchairBoy_81:
# 426 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 427 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_9, PokeInnRoom1WheelchairBoy_Text_10
# 430 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_85
PokeInnRoom1WheelchairBoy_84:
# 444 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_88
PokeInnRoom1WheelchairBoy_87:
# 458 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_94
PokeInnRoom1WheelchairBoy_93:
# 472 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_102
PokeInnRoom1WheelchairBoy_101:
# 474 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_109
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_64:
# 391 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 392 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 394 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_45

PokeInnRoom1WheelchairBoy_67:
# 406 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CROAGUNK
	goto PokeInnRoom1WheelchairBoy_66

PokeInnRoom1WheelchairBoy_70:
# 408 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_69

PokeInnRoom1WheelchairBoy_73:
# 413 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MEDITITE
	goto PokeInnRoom1WheelchairBoy_72

PokeInnRoom1WheelchairBoy_76:
# 415 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_75

PokeInnRoom1WheelchairBoy_79:
# 420 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_KAMOKEN
	goto PokeInnRoom1WheelchairBoy_78

PokeInnRoom1WheelchairBoy_82:
# 422 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_81

PokeInnRoom1WheelchairBoy_85:
# 431 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_CROAGUNK
# 432 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_91
PokeInnRoom1WheelchairBoy_90:
# 437 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_99
	goto PokeInnRoom1WheelchairBoy_84

PokeInnRoom1WheelchairBoy_88:
# 445 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MEDITITE
# 446 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_97
PokeInnRoom1WheelchairBoy_96:
# 451 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_107
	goto PokeInnRoom1WheelchairBoy_87

PokeInnRoom1WheelchairBoy_91:
# 434 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_15
# 435 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 4
# 436 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_90

PokeInnRoom1WheelchairBoy_94:
# 459 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_KAMOKEN
# 460 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_105
PokeInnRoom1WheelchairBoy_104:
# 465 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_111
	goto PokeInnRoom1WheelchairBoy_93

PokeInnRoom1WheelchairBoy_97:
# 448 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_16
# 449 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 5
# 450 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_96

PokeInnRoom1WheelchairBoy_99:
# 438 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 439 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 441 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_84

PokeInnRoom1WheelchairBoy_102:
# 472 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_101

PokeInnRoom1WheelchairBoy_105:
# 462 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_17
# 463 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 6
# 464 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_104

PokeInnRoom1WheelchairBoy_107:
# 452 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 453 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 455 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_87

PokeInnRoom1WheelchairBoy_109:
# 478 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 480 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_114
PokeInnRoom1WheelchairBoy_113:
# 482 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_117
PokeInnRoom1WheelchairBoy_116:
# 485 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 487 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_120
PokeInnRoom1WheelchairBoy_119:
# 489 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_123
PokeInnRoom1WheelchairBoy_122:
# 492 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 494 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_126
PokeInnRoom1WheelchairBoy_125:
# 496 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_129
PokeInnRoom1WheelchairBoy_128:
# 501 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 502 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_7, PokeInnRoom1WheelchairBoy_Text_8, PokeInnRoom1WheelchairBoy_Text_18, PokeInnRoom1WheelchairBoy_Text_10
# 505 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_132
PokeInnRoom1WheelchairBoy_131:
# 519 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_135
PokeInnRoom1WheelchairBoy_134:
# 533 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PokeInnRoom1WheelchairBoy_141
PokeInnRoom1WheelchairBoy_140:
# 547 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq PokeInnRoom1WheelchairBoy_149
PokeInnRoom1WheelchairBoy_148:
# 549 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokeInnRoom1WheelchairBoy_156
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_111:
# 466 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 467 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 469 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_93

PokeInnRoom1WheelchairBoy_114:
# 481 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYROGUE
	goto PokeInnRoom1WheelchairBoy_113

PokeInnRoom1WheelchairBoy_117:
# 483 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_116

PokeInnRoom1WheelchairBoy_120:
# 488 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_RIOLU
	goto PokeInnRoom1WheelchairBoy_119

PokeInnRoom1WheelchairBoy_123:
# 490 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_122

PokeInnRoom1WheelchairBoy_126:
# 495 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_PANCHAM
	goto PokeInnRoom1WheelchairBoy_125

PokeInnRoom1WheelchairBoy_129:
# 497 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_128

PokeInnRoom1WheelchairBoy_132:
# 506 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_TYROGUE
# 507 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_138
PokeInnRoom1WheelchairBoy_137:
# 512 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_146
	goto PokeInnRoom1WheelchairBoy_131

PokeInnRoom1WheelchairBoy_135:
# 520 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_RIOLU
# 521 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_144
PokeInnRoom1WheelchairBoy_143:
# 526 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_154
	goto PokeInnRoom1WheelchairBoy_134

PokeInnRoom1WheelchairBoy_138:
# 509 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_19
# 510 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 7
# 511 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_137

PokeInnRoom1WheelchairBoy_141:
# 534 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_PANCHAM
# 535 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_152
PokeInnRoom1WheelchairBoy_151:
# 540 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_158
	goto PokeInnRoom1WheelchairBoy_140

PokeInnRoom1WheelchairBoy_144:
# 523 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_20
# 524 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 8
# 525 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_143

PokeInnRoom1WheelchairBoy_146:
# 513 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 514 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 516 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_131

PokeInnRoom1WheelchairBoy_149:
# 547 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_148

PokeInnRoom1WheelchairBoy_152:
# 537 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_21
# 538 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 9
# 539 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_151

PokeInnRoom1WheelchairBoy_154:
# 527 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 528 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 530 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_134

PokeInnRoom1WheelchairBoy_156:
# 554 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MACHOP
# 556 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_161
PokeInnRoom1WheelchairBoy_160:
# 558 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_164
PokeInnRoom1WheelchairBoy_163:
# 562 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_5
# 563 "data/maps/PokeInnRoom1/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PokeInnRoom1WheelchairBoy_Text_6, PokeInnRoom1WheelchairBoy_Text_10
# 566 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokeInnRoom1WheelchairBoy_167
PokeInnRoom1WheelchairBoy_166:
# 580 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokeInnRoom1WheelchairBoy_169
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_158:
# 541 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 542 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 544 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_140

PokeInnRoom1WheelchairBoy_161:
# 557 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MACHOP
	goto PokeInnRoom1WheelchairBoy_160

PokeInnRoom1WheelchairBoy_164:
# 559 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NONE
	goto PokeInnRoom1WheelchairBoy_163

PokeInnRoom1WheelchairBoy_167:
# 567 "data/maps/PokeInnRoom1/scripts.pory"
	getseenmon SPECIES_MACHOP
# 568 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokeInnRoom1WheelchairBoy_172
PokeInnRoom1WheelchairBoy_171:
# 573 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokeInnRoom1WheelchairBoy_174
	goto PokeInnRoom1WheelchairBoy_166

PokeInnRoom1WheelchairBoy_169:
# 580 "data/maps/PokeInnRoom1/scripts.pory"
	goto donthaveanyfightingtotrade
	goto PokeInnRoom1WheelchairBoy_61

PokeInnRoom1WheelchairBoy_172:
# 570 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_22
# 571 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_FIGHTINGTRADECHOICE, 10
# 572 "data/maps/PokeInnRoom1/scripts.pory"
	goto fightingtypetradescript
	goto PokeInnRoom1WheelchairBoy_171

PokeInnRoom1WheelchairBoy_174:
# 574 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_RG_POKE_JUMP_FAILURE
# 575 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox PokeInnRoom1WheelchairBoy_Text_12
# 577 "data/maps/PokeInnRoom1/scripts.pory"
	goto endofwheelchairkidscript
	goto PokeInnRoom1WheelchairBoy_166


fightingtypetradescript::
# 623 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_PIN
# 624 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, fightingtypetradescript_Movement_0
# 625 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, fightingtypetradescript_Movement_0
# 626 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_0
# 627 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_0
# 628 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_0
# 629 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, fightingtypetradescript_Movement_1
# 630 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, fightingtypetradescript_Movement_1
# 631 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_1
# 636 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq fightingtypetradescript_2
fightingtypetradescript_1:
# 639 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq fightingtypetradescript_5
fightingtypetradescript_4:
# 642 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 3
	goto_if_eq fightingtypetradescript_8
fightingtypetradescript_7:
# 645 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 4
	goto_if_eq fightingtypetradescript_11
fightingtypetradescript_10:
# 648 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 5
	goto_if_eq fightingtypetradescript_14
fightingtypetradescript_13:
# 651 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 6
	goto_if_eq fightingtypetradescript_17
fightingtypetradescript_16:
# 654 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 7
	goto_if_eq fightingtypetradescript_20
fightingtypetradescript_19:
# 657 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 8
	goto_if_eq fightingtypetradescript_23
fightingtypetradescript_22:
# 660 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 9
	goto_if_eq fightingtypetradescript_26
fightingtypetradescript_25:
# 663 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 10
	goto_if_eq fightingtypetradescript_29
fightingtypetradescript_28:
# 668 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 669 "data/maps/PokeInnRoom1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 670 "data/maps/PokeInnRoom1/scripts.pory"
	special ChoosePartyMon
# 671 "data/maps/PokeInnRoom1/scripts.pory"
	waitstate
# 672 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CancelTaillowTrade
# 673 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 674 "data/maps/PokeInnRoom1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 675 "data/maps/PokeInnRoom1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, IncorrectFightingType
# 676 "data/maps/PokeInnRoom1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 677 "data/maps/PokeInnRoom1/scripts.pory"
	special CreateInGameTradePokemon
# 678 "data/maps/PokeInnRoom1/scripts.pory"
	special DoInGameTradeScene
# 679 "data/maps/PokeInnRoom1/scripts.pory"
	waitstate
# 680 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_BALL_OPEN
# 681 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_4
# 682 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, PokeInnRoom1Girl_Movement_4
# 683 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 1
	goto_if_eq fightingtypetradescript_32
fightingtypetradescript_31:
# 694 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 2
	goto_if_eq fightingtypetradescript_35
fightingtypetradescript_34:
# 703 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 3
	goto_if_eq fightingtypetradescript_38
fightingtypetradescript_37:
# 713 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 4
	goto_if_eq fightingtypetradescript_41
fightingtypetradescript_40:
# 722 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 5
	goto_if_eq fightingtypetradescript_44
fightingtypetradescript_43:
# 731 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 6
	goto_if_eq fightingtypetradescript_47
fightingtypetradescript_46:
# 740 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 7
	goto_if_eq fightingtypetradescript_50
fightingtypetradescript_49:
# 749 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 8
	goto_if_eq fightingtypetradescript_53
fightingtypetradescript_52:
# 758 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 9
	goto_if_eq fightingtypetradescript_56
fightingtypetradescript_55:
# 767 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_FIGHTINGTRADECHOICE, 10
	goto_if_eq fightingtypetradescript_59
fightingtypetradescript_58:
# 776 "data/maps/PokeInnRoom1/scripts.pory"
	goto backtowheelchairkidaftertrade
	return

fightingtypetradescript_2:
# 637 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW1
	goto fightingtypetradescript_1

fightingtypetradescript_5:
# 640 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW2
	goto fightingtypetradescript_4

fightingtypetradescript_8:
# 643 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW3
	goto fightingtypetradescript_7

fightingtypetradescript_11:
# 646 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW4
	goto fightingtypetradescript_10

fightingtypetradescript_14:
# 649 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW5
	goto fightingtypetradescript_13

fightingtypetradescript_17:
# 652 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW6
	goto fightingtypetradescript_16

fightingtypetradescript_20:
# 655 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW7
	goto fightingtypetradescript_19

fightingtypetradescript_23:
# 658 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW8
	goto fightingtypetradescript_22

fightingtypetradescript_26:
# 661 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW10
	goto fightingtypetradescript_25

fightingtypetradescript_29:
# 664 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TAILLOW10
	goto fightingtypetradescript_28

fightingtypetradescript_32:
# 685 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 11
# 686 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 11, 5, 11
# 688 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 690 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MANCHINE, CRY_MODE_NORMAL
# 691 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_2
	goto fightingtypetradescript_31

fightingtypetradescript_35:
# 695 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 12
# 696 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 12, 5, 11
# 698 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 699 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 700 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_3
	goto fightingtypetradescript_34

fightingtypetradescript_38:
# 704 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 13
# 705 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 13, 5, 11
# 707 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 708 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_SCRAGGY, CRY_MODE_NORMAL
# 709 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_4
	goto fightingtypetradescript_37

fightingtypetradescript_41:
# 714 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 14
# 715 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 14, 5, 11
# 717 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 718 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_CROAGUNK, CRY_MODE_NORMAL
# 719 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_5
	goto fightingtypetradescript_40

fightingtypetradescript_44:
# 723 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 15
# 724 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 15, 5, 11
# 726 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 727 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_CROAGUNK, CRY_MODE_NORMAL
# 728 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_6
	goto fightingtypetradescript_43

fightingtypetradescript_47:
# 732 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 16
# 733 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 16, 5, 11
# 735 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 736 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_KAMOKEN, CRY_MODE_NORMAL
# 737 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_7
	goto fightingtypetradescript_46

fightingtypetradescript_50:
# 741 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 17
# 742 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 17, 5, 11
# 744 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 745 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_TYROGUE, CRY_MODE_NORMAL
# 746 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_8
	goto fightingtypetradescript_49

fightingtypetradescript_53:
# 750 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 18
# 751 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 18, 5, 11
# 753 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 754 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_RIOLU, CRY_MODE_NORMAL
# 755 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_9
	goto fightingtypetradescript_52

fightingtypetradescript_56:
# 759 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 19
# 760 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 19, 5, 11
# 762 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 763 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_PANCHAM, CRY_MODE_NORMAL
# 764 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_10
	goto fightingtypetradescript_55

fightingtypetradescript_59:
# 768 "data/maps/PokeInnRoom1/scripts.pory"
	addobject 20
# 769 "data/maps/PokeInnRoom1/scripts.pory"
	setobjectxy 20, 5, 11
# 771 "data/maps/PokeInnRoom1/scripts.pory"
	waitse
# 772 "data/maps/PokeInnRoom1/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 773 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox fightingtypetradescript_Text_11
	goto fightingtypetradescript_58


ArmWrestleShake::
# 781 "data/maps/PokeInnRoom1/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 782 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8004, 2
# 783 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8005, 6
# 784 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8006, 4
# 785 "data/maps/PokeInnRoom1/scripts.pory"
	setvar VAR_0x8007, 4
# 786 "data/maps/PokeInnRoom1/scripts.pory"
	special ShakeCamera
	return


CancelTaillowTrade::
# 790 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_0
# 792 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 793 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 794 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 795 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_4
# 796 "data/maps/PokeInnRoom1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 797 "data/maps/PokeInnRoom1/scripts.pory"
	gettimeofday
# 798 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq CancelTaillowTrade_2
# 801 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_2
CancelTaillowTrade_1:
# 802 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

CancelTaillowTrade_2:
# 799 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_1
	goto CancelTaillowTrade_1


IncorrectFightingType::
# 806 "data/maps/PokeInnRoom1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 807 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox IncorrectFightingType_Text_0
# 809 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 1, PokeInnRoom1WheelchairBoy_Movement_1
# 810 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 10, PokeInnRoom1WheelchairBoy_Movement_1
# 811 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement 2, OldaleInnRoomOldLady_Movement_0
# 812 "data/maps/PokeInnRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokeInnRoom1Girl_Movement_4
# 813 "data/maps/PokeInnRoom1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 814 "data/maps/PokeInnRoom1/scripts.pory"
	gettimeofday
# 815 "data/maps/PokeInnRoom1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq IncorrectFightingType_2
# 818 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_2
IncorrectFightingType_1:
# 819 "data/maps/PokeInnRoom1/scripts.pory"
	releaseall
	return

IncorrectFightingType_2:
# 816 "data/maps/PokeInnRoom1/scripts.pory"
	msgbox CancelTaillowTrade_Text_1
	goto IncorrectFightingType_1


# 28 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1MapScriptBundle_Movement_0:
# 28 "data/maps/PokeInnRoom1/scripts.pory"
	face_left
	step_end

# 107 "data/maps/PokeInnRoom1/scripts.pory"
OldaleInnRoomOldLady_Movement_0:
# 107 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 146 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_0:
# 146 "data/maps/PokeInnRoom1/scripts.pory"
	face_up
	step_end

# 166 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_1:
# 166 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
# 166 "data/maps/PokeInnRoom1/scripts.pory"
	face_player
	step_end

# 186 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_2:
# 186 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 197 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_3:
# 197 "data/maps/PokeInnRoom1/scripts.pory"
	walk_in_place_up
	step_end

# 236 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1Girl_Movement_4:
# 236 "data/maps/PokeInnRoom1/scripts.pory"
	face_right
	step_end

# 604 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1WheelchairBoy_Movement_0:
# 604 "data/maps/PokeInnRoom1/scripts.pory"
	walk_in_place_down
	step_end

# 608 "data/maps/PokeInnRoom1/scripts.pory"
PokeInnRoom1WheelchairBoy_Movement_1:
# 608 "data/maps/PokeInnRoom1/scripts.pory"
	walk_up
# 608 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
	step_end

# 624 "data/maps/PokeInnRoom1/scripts.pory"
fightingtypetradescript_Movement_0:
# 624 "data/maps/PokeInnRoom1/scripts.pory"
	face_down
# 624 "data/maps/PokeInnRoom1/scripts.pory"
	emote_exclamation_mark
	step_end

# 629 "data/maps/PokeInnRoom1/scripts.pory"
fightingtypetradescript_Movement_1:
# 629 "data/maps/PokeInnRoom1/scripts.pory"
	walk_down
	step_end

OldaleUsedInnBin_Text_0:
# 95 "data/maps/PokeInnRoom1/scripts.pory"
	.string "There's something on the trash can...$"

OldaleUsedInnBin_Text_1:
# 99 "data/maps/PokeInnRoom1/scripts.pory"
	.string "The trash can is empty.$"

OldaleInnRoomOldLady_Text_0:
# 108 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Our grandson pushes himself too hard.\n"
	.string "You look like you do as well.\p"
	.string "It's okay to accept help, you know?$"

OldaleInnRoomOldMan_Text_0:
# 120 "data/maps/PokeInnRoom1/scripts.pory"
	.string "My grandson was injured during the war,\n"
	.string "but if it wasn't for one of the\l"
	.string "Littleroot Heroes, he wouldn't be here\l"
	.string "at all...$"

OldaleInnRoomOldMan_Text_1:
# 124 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... you have an odd resemblance to\n"
	.string "him.$"

OldaleInnRoomOldMan_Text_2:
# 127 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... you have an odd resemblance to\n"
	.string "her.$"

OldaleInnRoomOldMan_Text_3:
# 130 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for agreeing to the trade. I'm\n"
	.string "sure Taillow will do right by you.$"

PokeInnRoom1Girl_Text_0:
# 143 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, you're the one who arrived late at\n"
	.string "therapy.\p"
	.string "I'm sorry for yelling in class. I hope\n"
	.string "the teacher did't get mad.\p"
	.string "I saw my brother get hurt by a\n"
	.string "Blastoise during the war, and I'm a bit\l"
	.string "scared of them.$"

PokeInnRoom1Girl_Text_1:
# 149 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Bulbasynth doll! Isn't it cute?\p"
	.string "I want to see a real Bulbasynth one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_2:
# 154 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Smothquil doll! Isn't it cute?\p"
	.string "I want to see a real Smothquil one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_3:
# 159 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I prefer dolls over Pokémon now. Like\n"
	.string "this Purachu doll! Isn't it cute?\p"
	.string "I want to see a real Purachu one day.\n"
	.string "But only from afar...$"

PokeInnRoom1Girl_Text_4:
# 170 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Bulbasynth you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_5:
# 173 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Smothquil you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_6:
# 176 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... is that a Purachu you have\n"
	.string "there? Ca-... can I see it?$"

PokeInnRoom1Girl_Text_7:
# 179 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Yes$"

PokeInnRoom1Girl_Text_8:
# 179 "data/maps/PokeInnRoom1/scripts.pory"
	.string "No$"

PokeInnRoom1Girl_Text_9:
# 212 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wow... it's so plumpy! I'll try petting it!$"

PokeInnRoom1Girl_Text_10:
# 216 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Buuuu...$"

PokeInnRoom1Girl_Text_11:
# 220 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Quiiiil...$"

PokeInnRoom1Girl_Text_12:
# 224 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Puuu...$"

PokeInnRoom1Girl_Text_13:
# 226 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh... I think it liked it. I guess Pokémon\n"
	.string "aren't so scary after all.$"

PokeInnRoom1Girl_Text_14:
# 239 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for showing me. Here, I want\n"
	.string "you to have this as thanks.$"

PokeInnRoom1Girl_Text_15:
# 241 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I use my doll as pillow, so I don't need\n"
	.string "this. But someday, perhaps I'll get a\l"
	.string "real Pokémon to cuddle with!$"

PokeInnRoom1Girl_Text_16:
# 249 "data/maps/PokeInnRoom1/scripts.pory"
	.string "O-oh, okay... I guess it must be\n"
	.string "dangerous to take it out.\p"
	.string "Sorry for asking.$"

PokeInnRoom1Girl_Text_17:
# 262 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I can't wait to tell Anne about me\n"
	.string "petting a real Pokémon!$"

PokeInnRoom1Girl_Text_18:
# 265 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I went to tell Anne about me petting a\n"
	.string "real Pokémon, but she and her family are\l"
	.string "gone.\p"
	.string "She was the only girl my age in town...\p"
	.string "I'm sad, but Joel must be sadder. Those\n"
	.string "two were like Plusle and Minun!$"

PokeInnRoom1WheelchairBoy_Text_0:
# 285 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I won't let my injury get in the way of\n"
	.string "being awesome. Just like you!$"

PokeInnRoom1WheelchairBoy_Text_1:
# 296 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hey… does it hurt?$"

PokeInnRoom1WheelchairBoy_Text_2:
# 301 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… I envy you.$"

PokeInnRoom1WheelchairBoy_Text_3:
# 305 "data/maps/PokeInnRoom1/scripts.pory"
	.string "I see… mine don't hurt either.$"

PokeInnRoom1WheelchairBoy_Text_4:
# 307 "data/maps/PokeInnRoom1/scripts.pory"
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
# 349 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Did you bring any Fighting type\n"
	.string "Pokémon? Which one?$"

PokeInnRoom1WheelchairBoy_Text_6:
# 350 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_1}$"

PokeInnRoom1WheelchairBoy_Text_7:
# 350 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_2}$"

PokeInnRoom1WheelchairBoy_Text_8:
# 350 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{STR_VAR_3}$"

PokeInnRoom1WheelchairBoy_Text_9:
# 350 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A different Pokémon$"

PokeInnRoom1WheelchairBoy_Text_10:
# 350 "data/maps/PokeInnRoom1/scripts.pory"
	.string "None$"

PokeInnRoom1WheelchairBoy_Text_11:
# 356 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, a Manchine! I saw one of those by\n"
	.string "the Warehouse, but I never managed to\l"
	.string "catch one.$"

PokeInnRoom1WheelchairBoy_Text_12:
# 363 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... if you don't have its data on your\n"
	.string "Devondex, I rather not risk it.\p"
	.string "It might not even be a Fighting type!$"

PokeInnRoom1WheelchairBoy_Text_13:
# 372 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Makuhita? Wow, they are my favourites\n"
	.string "- they're always full of energy!$"

PokeInnRoom1WheelchairBoy_Text_14:
# 387 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Scraggy!? Wow, they're so cool! I\n"
	.string "didn't know there were Scraggy in Hoenn\l"
	.string "now.$"

PokeInnRoom1WheelchairBoy_Text_15:
# 434 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Croagunk? Hmm… its arm is not\n"
	.string "poisonous, is it?$"

PokeInnRoom1WheelchairBoy_Text_16:
# 448 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Meditite? Oh, those are both strong\n"
	.string "and smart…$"

PokeInnRoom1WheelchairBoy_Text_17:
# 462 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Kamoken? They look just like\n"
	.string "Far'fetch... but they are Fighting type,\l"
	.string "right?$"

PokeInnRoom1WheelchairBoy_Text_18:
# 502 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A different one$"

PokeInnRoom1WheelchairBoy_Text_19:
# 509 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Tyrogue!? Wow, that's a rare Pokémon!\n"
	.string "It must have been hard to find it.$"

PokeInnRoom1WheelchairBoy_Text_20:
# 523 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Riolu? Ah, it's both strong and cute -\n"
	.string "I think my sister will spoil it, hehe.$"

PokeInnRoom1WheelchairBoy_Text_21:
# 537 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Pancham? Wow, its gaze is so\n"
	.string "determined. I like that.$"

PokeInnRoom1WheelchairBoy_Text_22:
# 570 "data/maps/PokeInnRoom1/scripts.pory"
	.string "A Machop!? I thought Devon Co. had\n"
	.string "turned them all into Manchines...$"

PokeInnRoom1WheelchairBoy_Text_23:
# 588 "data/maps/PokeInnRoom1/scripts.pory"
	.string "It's so cooool! Alright - time to test\n"
	.string "this. Three, two, one...$"

PokeInnRoom1WheelchairBoy_Text_24:
# 590 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Arm Wrestle!$"

PokeInnRoom1WheelchairBoy_Text_25:
# 594 "data/maps/PokeInnRoom1/scripts.pory"
	.string "GRRRR...$"

PokeInnRoom1WheelchairBoy_Text_26:
# 596 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Gah... I lost! But I did better than I\n"
	.string "thought I would!$"

PokeInnRoom1WheelchairBoy_Text_27:
# 598 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hm? You look surprised. Why did you\n"
	.string "think I wanted a Fighting Type?\p"
	.string "Well, it wasn't to push my chair - it's to\n"
	.string "get strong enough so I can push it\l"
	.string "myself!\p"
	.string "I was using this till now, but you can\n"
	.string "have it. Getting stronger with Pokémon\l"
	.string "is much more fun!$"

PokeInnRoom1WheelchairBoy_Text_28:
# 607 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Thank you for helping my grandson.\n"
	.string "Please, take good care of Taillow.$"

PokeInnRoom1WheelchairBoy_Text_29:
# 615 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Don't have any to trade? Well, that's\n"
	.string "okay... come back when you do!$"

fightingtypetradescript_Text_0:
# 628 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Wait... did you really bring my grandson\n"
	.string "a Pokémon?$"

fightingtypetradescript_Text_1:
# 631 "data/maps/PokeInnRoom1/scripts.pory"
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
# 691 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Man-maaaan!$"

fightingtypetradescript_Text_3:
# 700 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Ma-kkuuuu!$"

fightingtypetradescript_Text_4:
# 709 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Gy-gyyyy!$"

fightingtypetradescript_Text_5:
# 719 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Crrroak!$"

fightingtypetradescript_Text_6:
# 728 "data/maps/PokeInnRoom1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Meee...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

fightingtypetradescript_Text_7:
# 737 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Ka-kaaaaa!$"

fightingtypetradescript_Text_8:
# 746 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Tyyyaaaa!$"

fightingtypetradescript_Text_9:
# 755 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Rio-rio!$"

fightingtypetradescript_Text_10:
# 764 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Cha-chaaaam!$"

fightingtypetradescript_Text_11:
# 773 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Choooop-chop!$"

CancelTaillowTrade_Text_0:
# 790 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Oh, changed your mind? That is well...\p"
	.string "Pokémon should not be traded away\n"
	.string "lightly.$"

CancelTaillowTrade_Text_1:
# 799 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Aw, I guess grandpa is right... but if you\n"
	.string "change your mind again, come back\l"
	.string "please!$"

CancelTaillowTrade_Text_2:
# 801 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Aw, I guess grandma is right... but if you\n"
	.string "change your mind again, come back\l"
	.string "please!$"

IncorrectFightingType_Text_0:
# 807 "data/maps/PokeInnRoom1/scripts.pory"
	.string "Hmm... that's not the Pokémon you\n"
	.string "promised my grandson, is it?\p"
	.string "If you have changed your mind... that is\n"
	.string "well.$"
