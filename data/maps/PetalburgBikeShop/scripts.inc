PetalburgBikeShop_MapScripts::
# 2 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgBikeShopMapscriptBundle
# 3 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgBikeShopMapscriptBundle
# 4 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgBikeShopMapscriptBundle
	.byte 0


PetalburgBikeShopMapscriptBundle::
# 9 "data/maps/PetalburgBikeShop/scripts.pory"
	gettimeofday
# 10 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgBikeShopMapscriptBundle_2
PetalburgBikeShopMapscriptBundle_1:
# 13 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgBikeShopMapscriptBundle_5
PetalburgBikeShopMapscriptBundle_4:
# 16 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgBikeShopMapscriptBundle_8
PetalburgBikeShopMapscriptBundle_7:
# 19 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgBikeShopMapscriptBundle_11
PetalburgBikeShopMapscriptBundle_10:
# 23 "data/maps/PetalburgBikeShop/scripts.pory"
enddaynighthardwareworkshop:
# 27 "data/maps/PetalburgBikeShop/scripts.pory"
	gettimeofday
# 28 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq PetalburgBikeShopMapscriptBundle_14
PetalburgBikeShopMapscriptBundle_13:
# 31 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq PetalburgBikeShopMapscriptBundle_17
PetalburgBikeShopMapscriptBundle_16:
# 34 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq PetalburgBikeShopMapscriptBundle_20
PetalburgBikeShopMapscriptBundle_19:
# 37 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq PetalburgBikeShopMapscriptBundle_22
	return

PetalburgBikeShopMapscriptBundle_2:
# 11 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto PetalburgBikeShopMapscriptBundle_1

PetalburgBikeShopMapscriptBundle_5:
# 14 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto PetalburgBikeShopMapscriptBundle_4

PetalburgBikeShopMapscriptBundle_8:
# 17 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto PetalburgBikeShopMapscriptBundle_7

PetalburgBikeShopMapscriptBundle_11:
# 20 "data/maps/PetalburgBikeShop/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 21 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto PetalburgBikeShopMapscriptBundle_10

PetalburgBikeShopMapscriptBundle_14:
# 29 "data/maps/PetalburgBikeShop/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgBikeShopMapscriptBundle_13

PetalburgBikeShopMapscriptBundle_17:
# 32 "data/maps/PetalburgBikeShop/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgBikeShopMapscriptBundle_16

PetalburgBikeShopMapscriptBundle_20:
# 35 "data/maps/PetalburgBikeShop/scripts.pory"
	setweather WEATHER_NONE
	goto PetalburgBikeShopMapscriptBundle_19

PetalburgBikeShopMapscriptBundle_22:
# 38 "data/maps/PetalburgBikeShop/scripts.pory"
	setweather WEATHER_SHADE
	return


PetalburgHardwareStoreCustomer::
# 43 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 44 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 3, PetalburgHardwareStoreCustomer_Movement_0
# 45 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreCustomer_Text_0
# 48 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 3, PetalburgHardwareStoreCustomer_Movement_1
# 49 "data/maps/PetalburgBikeShop/scripts.pory"
	waitmovement 3
# 50 "data/maps/PetalburgBikeShop/scripts.pory"
	releaseall
	return


PetalburgHardwareStoreGasCylinder::
# 54 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 55 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreGasCylinder_Text_0
# 56 "data/maps/PetalburgBikeShop/scripts.pory"
	releaseall
	return


PetalburgHardwareSidneyCar::
# 60 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 61 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareSidneyCar_Text_0
# 62 "data/maps/PetalburgBikeShop/scripts.pory"
	releaseall
	return


PetalburgHardwareSidneyCarMechanic::
# 66 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 67 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 2, PetalburgHardwareStoreCustomer_Movement_0
# 68 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareSidneyCarMechanic_Text_0
# 70 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 2, PetalburgHardwareStoreCustomer_Movement_1
# 71 "data/maps/PetalburgBikeShop/scripts.pory"
	waitmovement 2
# 72 "data/maps/PetalburgBikeShop/scripts.pory"
	releaseall
	return


PetalburgHardwareStoreClerk::
# 76 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 77 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 1, PetalburgHardwareStoreCustomer_Movement_0
# 79 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set hardwarestoregaveintro, PetalburgHardwareStoreClerk_2
# 84 "data/maps/PetalburgBikeShop/scripts.pory"
	setflag hardwarestoregaveintro
# 85 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_unset foughtwarehousescavenger2, PetalburgHardwareStoreClerk_10
PetalburgHardwareStoreClerk_8:
# 92 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set foughtwarehousescavenger2, PetalburgHardwareStoreClerk_18
PetalburgHardwareStoreClerk_16:
# 102 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set foughtwarehousescavenger2, PetalburgHardwareStoreClerk_25
PetalburgHardwareStoreClerk_1:
# 119 "data/maps/PetalburgBikeShop/scripts.pory"
hardwarestoreclerknormalintro:
# 120 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_5
# 121 "data/maps/PetalburgBikeShop/scripts.pory"
hardwarestoreclerkoffer:
# 123 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 0
	goto_if_eq PetalburgHardwareStoreClerk_6
PetalburgHardwareStoreClerk_5:
# 126 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 1
	goto_if_eq PetalburgHardwareStoreClerk_14
PetalburgHardwareStoreClerk_13:
# 129 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 2
	goto_if_eq PetalburgHardwareStoreClerk_22
PetalburgHardwareStoreClerk_21:
# 132 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 3
	goto_if_eq PetalburgHardwareStoreClerk_29
PetalburgHardwareStoreClerk_28:
# 135 "data/maps/PetalburgBikeShop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHardwareStoreClerk_Text_10, PetalburgHardwareStoreClerk_Text_11, PetalburgHardwareStoreClerk_Text_12, PetalburgHardwareStoreClerk_Text_13
# 136 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHardwareStoreClerk_35
PetalburgHardwareStoreClerk_34:
# 140 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHardwareStoreClerk_41
PetalburgHardwareStoreClerk_40:
# 144 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgHardwareStoreClerk_44
PetalburgHardwareStoreClerk_43:
# 319 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PetalburgHardwareStoreClerk_47
PetalburgHardwareStoreClerk_46:
# 324 "data/maps/PetalburgBikeShop/scripts.pory"
endofhardwarestoreclerk:
# 326 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_37
# 327 "data/maps/PetalburgBikeShop/scripts.pory"
releaseendofhardwarestoreclerk:
# 329 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 1, PetalburgHardwareStoreClerk_Movement_0
# 330 "data/maps/PetalburgBikeShop/scripts.pory"
	waitmovement 1
# 332 "data/maps/PetalburgBikeShop/scripts.pory"
	release
	return

PetalburgHardwareStoreClerk_2:
# 81 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwarestoreclerknormalintro
	goto PetalburgHardwareStoreClerk_1

PetalburgHardwareStoreClerk_6:
# 124 "data/maps/PetalburgBikeShop/scripts.pory"
	bufferstring STR_VAR_1, PetalburgHardwareStoreClerk_Text_6
	goto PetalburgHardwareStoreClerk_5

PetalburgHardwareStoreClerk_9:
# 87 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_0
# 88 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwarestoreclerkoffer
	goto PetalburgHardwareStoreClerk_8

PetalburgHardwareStoreClerk_10:
# 85 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, PetalburgHardwareStoreClerk_9
	goto PetalburgHardwareStoreClerk_8

PetalburgHardwareStoreClerk_14:
# 127 "data/maps/PetalburgBikeShop/scripts.pory"
	bufferstring STR_VAR_1, PetalburgHardwareStoreClerk_Text_7
	goto PetalburgHardwareStoreClerk_13

PetalburgHardwareStoreClerk_17:
# 95 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_1
# 98 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwarestoreclerkoffer
	goto PetalburgHardwareStoreClerk_16

PetalburgHardwareStoreClerk_18:
# 92 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, PetalburgHardwareStoreClerk_17
	goto PetalburgHardwareStoreClerk_16

PetalburgHardwareStoreClerk_22:
# 130 "data/maps/PetalburgBikeShop/scripts.pory"
	bufferstring STR_VAR_1, PetalburgHardwareStoreClerk_Text_8
	goto PetalburgHardwareStoreClerk_21

PetalburgHardwareStoreClerk_24:
# 104 "data/maps/PetalburgBikeShop/scripts.pory"
	checkplayergender
# 105 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHardwareStoreClerk_32
PetalburgHardwareStoreClerk_31:
# 109 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHardwareStoreClerk_38
PetalburgHardwareStoreClerk_37:
# 113 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_4
# 115 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwarestoreclerkoffer
	goto PetalburgHardwareStoreClerk_1

PetalburgHardwareStoreClerk_25:
# 102 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set scavengergivesobjectspotter, PetalburgHardwareStoreClerk_24
	goto PetalburgHardwareStoreClerk_1

PetalburgHardwareStoreClerk_29:
# 133 "data/maps/PetalburgBikeShop/scripts.pory"
	bufferstring STR_VAR_1, PetalburgHardwareStoreClerk_Text_9
	goto PetalburgHardwareStoreClerk_28

PetalburgHardwareStoreClerk_32:
# 106 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_2
	goto PetalburgHardwareStoreClerk_31

PetalburgHardwareStoreClerk_35:
# 137 "data/maps/PetalburgBikeShop/scripts.pory"
	pokemart PetalburgHardwareStoreItemOffer
	goto PetalburgHardwareStoreClerk_34

PetalburgHardwareStoreClerk_38:
# 110 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_3
	goto PetalburgHardwareStoreClerk_37

PetalburgHardwareStoreClerk_41:
# 141 "data/maps/PetalburgBikeShop/scripts.pory"
	pokemart PetalburgHardwareStoreFurnitureOffer
	goto PetalburgHardwareStoreClerk_40

PetalburgHardwareStoreClerk_44:
# 146 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 0
	goto_if_eq PetalburgHardwareStoreClerk_50
PetalburgHardwareStoreClerk_49:
# 229 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 1
	goto_if_eq PetalburgHardwareStoreClerk_53
PetalburgHardwareStoreClerk_52:
# 277 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 2
	goto_if_eq PetalburgHardwareStoreClerk_58
	goto PetalburgHardwareStoreClerk_43

PetalburgHardwareStoreClerk_47:
# 320 "data/maps/PetalburgBikeShop/scripts.pory"
	goto endofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_46

PetalburgHardwareStoreClerk_50:
# 148 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_14
# 151 "data/maps/PetalburgBikeShop/scripts.pory"
	showmoneybox 18, 0
# 152 "data/maps/PetalburgBikeShop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHardwareStoreClerk_Text_15, PetalburgHardwareStoreClerk_Text_16, PetalburgHardwareStoreClerk_Text_17
# 154 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHardwareStoreClerk_56
PetalburgHardwareStoreClerk_55:
# 181 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHardwareStoreClerk_64
PetalburgHardwareStoreClerk_63:
# 188 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgHardwareStoreClerk_75
	goto PetalburgHardwareStoreClerk_49

PetalburgHardwareStoreClerk_53:
# 231 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_27
# 232 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 0
	goto_if_eq PetalburgHardwareStoreClerk_61
PetalburgHardwareStoreClerk_60:
# 240 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 1
	goto_if_eq PetalburgHardwareStoreClerk_73
PetalburgHardwareStoreClerk_72:
# 248 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 2
	goto_if_eq PetalburgHardwareStoreClerk_83
PetalburgHardwareStoreClerk_82:
# 253 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 3
	goto_if_eq PetalburgHardwareStoreClerk_89
PetalburgHardwareStoreClerk_88:
# 260 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 4
	goto_if_eq PetalburgHardwareStoreClerk_94
PetalburgHardwareStoreClerk_93:
# 274 "data/maps/PetalburgBikeShop/scripts.pory"
	goto endofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_52

PetalburgHardwareStoreClerk_56:
# 155 "data/maps/PetalburgBikeShop/scripts.pory"
	checkmoney 500000
# 156 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgHardwareStoreClerk_67
PetalburgHardwareStoreClerk_66:
# 173 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgHardwareStoreClerk_77
	goto PetalburgHardwareStoreClerk_55

PetalburgHardwareStoreClerk_58:
	checkitem ITEM_ACRO_BIKE
# 0 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgHardwareStoreClerk_70
PetalburgHardwareStoreClerk_69:
	checkitem ITEM_MACH_BIKE
# 0 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgHardwareStoreClerk_80
PetalburgHardwareStoreClerk_79:
# 314 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_43

PetalburgHardwareStoreClerk_61:
# 234 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_28
	goto PetalburgHardwareStoreClerk_60

PetalburgHardwareStoreClerk_64:
# 183 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_21
# 184 "data/maps/PetalburgBikeShop/scripts.pory"
	hidemoneybox
# 185 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_63

PetalburgHardwareStoreClerk_67:
# 157 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_18
# 158 "data/maps/PetalburgBikeShop/scripts.pory"
	removemoney 500000
# 159 "data/maps/PetalburgBikeShop/scripts.pory"
	updatemoneybox
# 160 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_SHOP
# 161 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 162 "data/maps/PetalburgBikeShop/scripts.pory"
	hidemoneybox
# 163 "data/maps/PetalburgBikeShop/scripts.pory"
	setvar VAR_BIKEQUEST, 2
# 164 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 165 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_19
# 170 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_66

PetalburgHardwareStoreClerk_70:
# 281 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_33
# 283 "data/maps/PetalburgBikeShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 284 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_ELEVATOR
# 285 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 286 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_FU_ZAKU
# 287 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 288 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_FU_ZAKU
# 289 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 290 "data/maps/PetalburgBikeShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 291 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_34
# 292 "data/maps/PetalburgBikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 293 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 294 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_35
	goto PetalburgHardwareStoreClerk_69

PetalburgHardwareStoreClerk_73:
# 242 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_29
	goto PetalburgHardwareStoreClerk_72

PetalburgHardwareStoreClerk_75:
# 190 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_22
# 192 "data/maps/PetalburgBikeShop/scripts.pory"
	hidemoneybox
# 193 "data/maps/PetalburgBikeShop/scripts.pory"
hardwareclerkoffersbikedeal:
# 194 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_23
# 197 "data/maps/PetalburgBikeShop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHardwareStoreClerk_Text_24, PetalburgHardwareStoreClerk_Text_16
# 199 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHardwareStoreClerk_86
PetalburgHardwareStoreClerk_85:
# 220 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHardwareStoreClerk_91
	goto PetalburgHardwareStoreClerk_49

PetalburgHardwareStoreClerk_77:
# 174 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_20
# 175 "data/maps/PetalburgBikeShop/scripts.pory"
	hidemoneybox
# 176 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwareclerkoffersbikedeal
	goto PetalburgHardwareStoreClerk_55

PetalburgHardwareStoreClerk_80:
# 299 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_36
# 301 "data/maps/PetalburgBikeShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 302 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_ELEVATOR
# 303 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 304 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_FU_ZAKU
# 305 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 306 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_FU_ZAKU
# 307 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 308 "data/maps/PetalburgBikeShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 309 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_34
# 310 "data/maps/PetalburgBikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 311 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 312 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_35
	goto PetalburgHardwareStoreClerk_79

PetalburgHardwareStoreClerk_83:
# 250 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_30
	goto PetalburgHardwareStoreClerk_82

PetalburgHardwareStoreClerk_86:
# 200 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_25
# 207 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_SCIZORITE
# 209 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_26
# 215 "data/maps/PetalburgBikeShop/scripts.pory"
	setvar VAR_BIKEQUEST, 1
# 216 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_85

PetalburgHardwareStoreClerk_89:
# 255 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_31
	goto PetalburgHardwareStoreClerk_88

PetalburgHardwareStoreClerk_91:
# 221 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_21
# 222 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_49

PetalburgHardwareStoreClerk_94:
# 262 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_32
# 265 "data/maps/PetalburgBikeShop/scripts.pory"
	setvar VAR_BIKEQUEST, 2
# 266 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 267 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_19
	goto PetalburgHardwareStoreClerk_93


	.align 2
# 337 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreItemOffer:
# 338 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_CHARCOAL
# 339 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 340 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_MAGNET
# 341 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_METAL_COAT
# 342 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 343 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 344 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 345 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 346 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_DOWSING_MACHINE
	.2byte ITEM_NONE

	.align 2
# 348 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreFurnitureOffer:
# 349 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte DECOR_TIRE
# 350 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte DECOR_TV
# 351 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte DECOR_CUTE_POSTER
# 352 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte DECOR_FREEZER
# 353 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 354 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte DECOR_HEAVY_DESK
# 355 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte DECOR_SOLID_BOARD
	.2byte ITEM_NONE

# 44 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreCustomer_Movement_0:
# 44 "data/maps/PetalburgBikeShop/scripts.pory"
	face_player
	step_end

# 48 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreCustomer_Movement_1:
# 48 "data/maps/PetalburgBikeShop/scripts.pory"
	face_up
	step_end

# 329 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreClerk_Movement_0:
# 329 "data/maps/PetalburgBikeShop/scripts.pory"
	face_down
	step_end

PetalburgHardwareStoreCustomer_Text_0:
# 45 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "During the war, there used to be\n"
	.string "Grenade Balls that dealt damage to\l"
	.string "Pokémon, but Devon has removed all of\l"
	.string "those from circulation.\p"
	.string "It's one of the few good things Devon\n"
	.string "has done. Those were brutal, even for\l"
	.string "Rebel standards.$"

PetalburgHardwareStoreGasCylinder_Text_0:
# 55 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "It's a gas cylinder. The label reads\n"
	.string "“Pacifidlog Oil Rig”.$"

PetalburgHardwareSidneyCar_Text_0:
# 61 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "It's a sparkly, brand-new sports car.$"

PetalburgHardwareSidneyCarMechanic_Text_0:
# 68 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Sometimes I wonder why Sidney keeps a\n"
	.string "car he never uses.\p"
	.string "Some say it's to give this store some\n"
	.string "work, but I don't think he's that nice.$"

PetalburgHardwareStoreClerk_Text_0:
# 87 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Welcome to Petalburg's Hardware Store!\n"
	.string "First time, right? What will it be?$"

PetalburgHardwareStoreClerk_Text_1:
# 95 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Well well... if it isn't the twerp who\n"
	.string "tried to get our loot at Oldale\l"
	.string "Warehouse.\p"
	.string "No bad feelings, okay? One has to make\n"
	.string "a living in these parts.\p"
	.string "So... can I interest you in anything?$"

PetalburgHardwareStoreClerk_Text_2:
# 106 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Oh hey, you're that guy from Oldale\n"
	.string "Warehouse!$"

PetalburgHardwareStoreClerk_Text_3:
# 110 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Oh hey, you're that gal from Oldale\n"
	.string "Warehouse!$"

PetalburgHardwareStoreClerk_Text_4:
# 113 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "How is that Object Spotter treating\n"
	.string "you - getting good mileage out of it?\p"
	.string "If you're interested in more\n"
	.string "top-quality tech, you've come to the\l"
	.string "right place!$"

PetalburgHardwareStoreClerk_Text_5:
# 120 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Welcome to Petalburg's Hardware Store!\n"
	.string "What will it be?$"

PetalburgHardwareStoreClerk_Text_6:
# 124 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "About bikes...$"

PetalburgHardwareStoreClerk_Text_7:
# 127 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "About the fuel$"

PetalburgHardwareStoreClerk_Text_8:
# 130 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "I got the fuel$"

PetalburgHardwareStoreClerk_Text_9:
# 133 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Switch engine$"

PetalburgHardwareStoreClerk_Text_10:
# 135 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Buy items$"

PetalburgHardwareStoreClerk_Text_11:
# 135 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Buy furniture$"

PetalburgHardwareStoreClerk_Text_12:
# 135 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "{STR_VAR_1}$"

PetalburgHardwareStoreClerk_Text_13:
# 135 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Leave$"

PetalburgHardwareStoreClerk_Text_14:
# 148 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Ah, interested in the big toys, aren't\n"
	.string "you? Well, you're in luck!\p"
	.string "We have exactly one Motorbike left in\n"
	.string "stock.\p"
	.string "It's a special girl too - a solar model!\p"
	.string "That means zero fuel costs. We're\n"
	.string "selling it for the low price of 500.000¥!$"

PetalburgHardwareStoreClerk_Text_15:
# 152 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "I'll buy$"

PetalburgHardwareStoreClerk_Text_16:
# 152 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "No thanks$"

PetalburgHardwareStoreClerk_Text_17:
# 152 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "That's too expensive!$"

PetalburgHardwareStoreClerk_Text_18:
# 157 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Woah, I didn't expect you to have that\n"
	.string "much cash! Well, here you go!$"

PetalburgHardwareStoreClerk_Text_19:
# 165 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Oh, I almost forgot - you can fit two\n"
	.string "different kinds of engines on this\l"
	.string "beauty!\p"
	.string "I fitted it with the Cross Engine, which\n"
	.string "gives the bike more agility.\p"
	.string "But if you want some more horsepower,\n"
	.string "just drop by and I'll swap that with the\l"
	.string "Race Engine, at no extra cost!\p"
	.string "Thanks for your help, and drive\n"
	.string "responsibly!$"

PetalburgHardwareStoreClerk_Text_20:
# 174 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Oops... seems you don't have enough on\n"
	.string "you. And we don't do instalments, sorry!$"

PetalburgHardwareStoreClerk_Text_21:
# 183 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Too bad. Come back if you change your\n"
	.string "mind.$"

PetalburgHardwareStoreClerk_Text_22:
# 190 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Too expensive? Buddy, they sell regular\n"
	.string "bikes in Kanto for like, a million\l"
	.string "pokeyen!\p"
	.string "And this here is a motorbike, at half\n"
	.string "that price!$"

PetalburgHardwareStoreClerk_Text_23:
# 194 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Hey, I get it. It's hard to get cash here\n"
	.string "in the Rebel Zone.\p"
	.string "Which is why we're offering another deal\n"
	.string "for this motorbike. Interested?$"

PetalburgHardwareStoreClerk_Text_24:
# 197 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Sure$"

PetalburgHardwareStoreClerk_Text_25:
# 200 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Great - well, it's very simple. We're the\n"
	.string "only supplier of fuel in the Rebel\l"
	.string "Zone... and we're running out of it!\p"
	.string "Devon is hoarding all of the oil from the\n"
	.string "Pacifidlog Rig. It's been getting harder\l"
	.string "and harder to get.\p"
	.string "If we don't get fuel to sell, may as well\n"
	.string "close the store. To help us prevent\l"
	.string "that... take this!$"

PetalburgHardwareStoreClerk_Text_26:
# 209 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "That's a Fuel Scooper. With it, you can\n"
	.string "extract fuel from different sources,\l"
	.string "such as barrels or vehicles.\p"
	.string "Now, depending on where you extract\n"
	.string "the fuel from, it might be considered\l"
	.string "stealing...\p"
	.string "But this is the Rebel Zone. You can only\n"
	.string "get so far by being moral.\p"
	.string "So we won't argue with the methods you\n"
	.string "choose.\p"
	.string "Just be careful, and come back once the\n"
	.string "tank attached to the scooper is full!$"

PetalburgHardwareStoreClerk_Text_27:
# 231 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "How's the fuel scooping going? Let me\n"
	.string "see the scooper's tank...$"

PetalburgHardwareStoreClerk_Text_28:
# 234 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Why, you still haven't scooped\n"
	.string "anything! Bah!\p"
	.string "You better get it moving, or I'll give\n"
	.string "that scooper to someone who wants in\l"
	.string "on the deal.\p"
	.string "If this were a videogame, you'd just\n"
	.string "have to like, get close to a vehicle, and\l"
	.string "interact with it. It's that simple.$"

PetalburgHardwareStoreClerk_Text_29:
# 242 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Hmm, you haven't scooped much. You'd\n"
	.string "need four times this amount before it's\l"
	.string "a fair deal for the bike.\p"
	.string "Have you checked the abandoned\n"
	.string "vehicles in Road 002? They might have\l"
	.string "some fuel left in their tanks.$"

PetalburgHardwareStoreClerk_Text_30:
# 250 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Hey, not bad - it's about half full. Keep\n"
	.string "at it!$"

PetalburgHardwareStoreClerk_Text_31:
# 255 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Well, you're almost there - it's about\n"
	.string "three quarters full!\p"
	.string "I think one more scoop ought to do it.\n"
	.string "I'll have that solar bike ready for you!$"

PetalburgHardwareStoreClerk_Text_32:
# 262 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Wow, look at that - you did it! That's a\n"
	.string "good full tank!\p"
	.string "If we ever need an extra hand in the\n"
	.string "shop, perhaps we can count on you? Now,\l"
	.string "I'll have that and the scooper back. And\l"
	.string "this is for you!$"

PetalburgHardwareStoreClerk_Text_33:
# 281 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Sure! You have the Cross Motor on your\n"
	.string "Solar Bike, don't you?\p"
	.string "Let me swap that with the Race Motor.\n"
	.string "I'll be a moment!$"

PetalburgHardwareStoreClerk_Text_34:
# 291 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Alright, here you go!$"

PetalburgHardwareStoreClerk_Text_35:
# 294 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Drive safely now!$"

PetalburgHardwareStoreClerk_Text_36:
# 299 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Sure! You have the Race Motor on your\n"
	.string "Solar Bike, don't you?\p"
	.string "Let me swap that with the Cross Motor.\n"
	.string "I'll be a moment!$"

PetalburgHardwareStoreClerk_Text_37:
# 326 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Alright. Come back soon!$"
