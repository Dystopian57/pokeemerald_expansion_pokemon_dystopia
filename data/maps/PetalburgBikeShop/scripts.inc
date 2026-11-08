PetalburgBikeShop_MapScripts::
# 2 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicHardwareWorkshop
# 3 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightMusicHardwareWorkshop
# 4 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightMusicHardwareWorkshop
# 5 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 6 "data/maps/PetalburgBikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
	.byte 0


DayNightMusicHardwareWorkshop::
# 11 "data/maps/PetalburgBikeShop/scripts.pory"
	gettimeofday
# 12 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicHardwareWorkshop_2
DayNightMusicHardwareWorkshop_1:
# 15 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicHardwareWorkshop_5
DayNightMusicHardwareWorkshop_4:
# 18 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicHardwareWorkshop_8
DayNightMusicHardwareWorkshop_7:
# 21 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicHardwareWorkshop_11
DayNightMusicHardwareWorkshop_10:
# 25 "data/maps/PetalburgBikeShop/scripts.pory"
enddaynighthardwareworkshop:
	return

DayNightMusicHardwareWorkshop_2:
# 13 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_1

DayNightMusicHardwareWorkshop_5:
# 16 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_4

DayNightMusicHardwareWorkshop_8:
# 19 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_7

DayNightMusicHardwareWorkshop_11:
# 22 "data/maps/PetalburgBikeShop/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 23 "data/maps/PetalburgBikeShop/scripts.pory"
	goto enddaynighthardwareworkshop
	goto DayNightMusicHardwareWorkshop_10


PetalburgHardwareStoreCustomer::
# 29 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 30 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 3, PetalburgHardwareStoreCustomer_Movement_0
# 31 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreCustomer_Text_0
# 34 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 3, PetalburgHardwareStoreCustomer_Movement_1
# 35 "data/maps/PetalburgBikeShop/scripts.pory"
	waitmovement 3
# 36 "data/maps/PetalburgBikeShop/scripts.pory"
	releaseall
	return


PetalburgHardwareStoreGasCylinder::
# 40 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 41 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreGasCylinder_Text_0
# 42 "data/maps/PetalburgBikeShop/scripts.pory"
	releaseall
	return


PetalburgHardwareSidneyCar::
# 46 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 47 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareSidneyCar_Text_0
# 48 "data/maps/PetalburgBikeShop/scripts.pory"
	releaseall
	return


PetalburgHardwareSidneyCarMechanic::
# 52 "data/maps/PetalburgBikeShop/scripts.pory"
	lock
# 53 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 2, PetalburgHardwareStoreCustomer_Movement_0
# 54 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareSidneyCarMechanic_Text_0
# 56 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 2, PetalburgHardwareStoreCustomer_Movement_1
# 57 "data/maps/PetalburgBikeShop/scripts.pory"
	waitmovement 2
# 58 "data/maps/PetalburgBikeShop/scripts.pory"
	releaseall
	return


PetalburgHardwareStoreClerk::
# 63 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 1, PetalburgHardwareStoreCustomer_Movement_0
# 65 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set hardwarestoregaveintro, PetalburgHardwareStoreClerk_2
# 70 "data/maps/PetalburgBikeShop/scripts.pory"
	setflag hardwarestoregaveintro
# 71 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_unset foughtwarehousescavenger2, PetalburgHardwareStoreClerk_10
PetalburgHardwareStoreClerk_8:
# 78 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set foughtwarehousescavenger2, PetalburgHardwareStoreClerk_18
PetalburgHardwareStoreClerk_16:
# 88 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set foughtwarehousescavenger2, PetalburgHardwareStoreClerk_25
PetalburgHardwareStoreClerk_1:
# 105 "data/maps/PetalburgBikeShop/scripts.pory"
hardwarestoreclerknormalintro:
# 106 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_5
# 107 "data/maps/PetalburgBikeShop/scripts.pory"
hardwarestoreclerkoffer:
# 109 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 0
	goto_if_eq PetalburgHardwareStoreClerk_6
PetalburgHardwareStoreClerk_5:
# 112 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 1
	goto_if_eq PetalburgHardwareStoreClerk_14
PetalburgHardwareStoreClerk_13:
# 115 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 2
	goto_if_eq PetalburgHardwareStoreClerk_22
PetalburgHardwareStoreClerk_21:
# 118 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 3
	goto_if_eq PetalburgHardwareStoreClerk_29
PetalburgHardwareStoreClerk_28:
# 121 "data/maps/PetalburgBikeShop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHardwareStoreClerk_Text_10, PetalburgHardwareStoreClerk_Text_11, PetalburgHardwareStoreClerk_Text_12, PetalburgHardwareStoreClerk_Text_13
# 122 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHardwareStoreClerk_35
PetalburgHardwareStoreClerk_34:
# 126 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHardwareStoreClerk_41
PetalburgHardwareStoreClerk_40:
# 130 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgHardwareStoreClerk_44
PetalburgHardwareStoreClerk_43:
# 302 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PetalburgHardwareStoreClerk_47
PetalburgHardwareStoreClerk_46:
# 307 "data/maps/PetalburgBikeShop/scripts.pory"
endofhardwarestoreclerk:
# 309 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_37
# 310 "data/maps/PetalburgBikeShop/scripts.pory"
releaseendofhardwarestoreclerk:
# 312 "data/maps/PetalburgBikeShop/scripts.pory"
	applymovement 1, PetalburgHardwareStoreClerk_Movement_0
# 313 "data/maps/PetalburgBikeShop/scripts.pory"
	waitmovement 1
# 315 "data/maps/PetalburgBikeShop/scripts.pory"
	release
	return

PetalburgHardwareStoreClerk_2:
# 67 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwarestoreclerknormalintro
	goto PetalburgHardwareStoreClerk_1

PetalburgHardwareStoreClerk_6:
# 110 "data/maps/PetalburgBikeShop/scripts.pory"
	bufferstring STR_VAR_1, PetalburgHardwareStoreClerk_Text_6
	goto PetalburgHardwareStoreClerk_5

PetalburgHardwareStoreClerk_9:
# 73 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_0
# 74 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwarestoreclerkoffer
	goto PetalburgHardwareStoreClerk_8

PetalburgHardwareStoreClerk_10:
# 71 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, PetalburgHardwareStoreClerk_9
	goto PetalburgHardwareStoreClerk_8

PetalburgHardwareStoreClerk_14:
# 113 "data/maps/PetalburgBikeShop/scripts.pory"
	bufferstring STR_VAR_1, PetalburgHardwareStoreClerk_Text_7
	goto PetalburgHardwareStoreClerk_13

PetalburgHardwareStoreClerk_17:
# 81 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_1
# 84 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwarestoreclerkoffer
	goto PetalburgHardwareStoreClerk_16

PetalburgHardwareStoreClerk_18:
# 78 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_unset scavengergivesobjectspotter, PetalburgHardwareStoreClerk_17
	goto PetalburgHardwareStoreClerk_16

PetalburgHardwareStoreClerk_22:
# 116 "data/maps/PetalburgBikeShop/scripts.pory"
	bufferstring STR_VAR_1, PetalburgHardwareStoreClerk_Text_8
	goto PetalburgHardwareStoreClerk_21

PetalburgHardwareStoreClerk_24:
# 90 "data/maps/PetalburgBikeShop/scripts.pory"
	checkplayergender
# 91 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgHardwareStoreClerk_32
PetalburgHardwareStoreClerk_31:
# 95 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgHardwareStoreClerk_38
PetalburgHardwareStoreClerk_37:
# 99 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_4
# 101 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwarestoreclerkoffer
	goto PetalburgHardwareStoreClerk_1

PetalburgHardwareStoreClerk_25:
# 88 "data/maps/PetalburgBikeShop/scripts.pory"
	goto_if_set scavengergivesobjectspotter, PetalburgHardwareStoreClerk_24
	goto PetalburgHardwareStoreClerk_1

PetalburgHardwareStoreClerk_29:
# 119 "data/maps/PetalburgBikeShop/scripts.pory"
	bufferstring STR_VAR_1, PetalburgHardwareStoreClerk_Text_9
	goto PetalburgHardwareStoreClerk_28

PetalburgHardwareStoreClerk_32:
# 92 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_2
	goto PetalburgHardwareStoreClerk_31

PetalburgHardwareStoreClerk_35:
# 123 "data/maps/PetalburgBikeShop/scripts.pory"
	pokemart PetalburgHardwareStoreItemOffer
	goto PetalburgHardwareStoreClerk_34

PetalburgHardwareStoreClerk_38:
# 96 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_3
	goto PetalburgHardwareStoreClerk_37

PetalburgHardwareStoreClerk_41:
# 127 "data/maps/PetalburgBikeShop/scripts.pory"
	pokemart PetalburgHardwareStoreFurnitureOffer
	goto PetalburgHardwareStoreClerk_40

PetalburgHardwareStoreClerk_44:
# 132 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_14
# 135 "data/maps/PetalburgBikeShop/scripts.pory"
	showmoneybox 18, 0
# 136 "data/maps/PetalburgBikeShop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHardwareStoreClerk_Text_15, PetalburgHardwareStoreClerk_Text_16, PetalburgHardwareStoreClerk_Text_17
# 138 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHardwareStoreClerk_50
PetalburgHardwareStoreClerk_49:
# 165 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgHardwareStoreClerk_53
PetalburgHardwareStoreClerk_52:
# 172 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgHardwareStoreClerk_59
PetalburgHardwareStoreClerk_58:
# 214 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 1
	goto_if_eq PetalburgHardwareStoreClerk_64
PetalburgHardwareStoreClerk_63:
# 260 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_BIKEQUEST, 2
	goto_if_eq PetalburgHardwareStoreClerk_69
	goto PetalburgHardwareStoreClerk_43

PetalburgHardwareStoreClerk_47:
# 303 "data/maps/PetalburgBikeShop/scripts.pory"
	goto endofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_46

PetalburgHardwareStoreClerk_50:
# 139 "data/maps/PetalburgBikeShop/scripts.pory"
	checkmoney 500000
# 140 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgHardwareStoreClerk_56
PetalburgHardwareStoreClerk_55:
# 157 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgHardwareStoreClerk_61
	goto PetalburgHardwareStoreClerk_49

PetalburgHardwareStoreClerk_53:
# 167 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_21
# 168 "data/maps/PetalburgBikeShop/scripts.pory"
	hidemoneybox
# 169 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_52

PetalburgHardwareStoreClerk_56:
# 141 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_18
# 142 "data/maps/PetalburgBikeShop/scripts.pory"
	removemoney 500000
# 143 "data/maps/PetalburgBikeShop/scripts.pory"
	updatemoneybox
# 144 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_SHOP
# 145 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 146 "data/maps/PetalburgBikeShop/scripts.pory"
	hidemoneybox
# 147 "data/maps/PetalburgBikeShop/scripts.pory"
	setvar VAR_BIKEQUEST, 2
# 148 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 149 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_19
# 154 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_55

PetalburgHardwareStoreClerk_59:
# 174 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_22
# 176 "data/maps/PetalburgBikeShop/scripts.pory"
	hidemoneybox
# 177 "data/maps/PetalburgBikeShop/scripts.pory"
hardwareclerkoffersbikedeal:
# 178 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_23
# 182 "data/maps/PetalburgBikeShop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgHardwareStoreClerk_Text_24, PetalburgHardwareStoreClerk_Text_16
# 184 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHardwareStoreClerk_67
PetalburgHardwareStoreClerk_66:
# 205 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgHardwareStoreClerk_74
	goto PetalburgHardwareStoreClerk_58

PetalburgHardwareStoreClerk_61:
# 158 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_20
# 159 "data/maps/PetalburgBikeShop/scripts.pory"
	hidemoneybox
# 160 "data/maps/PetalburgBikeShop/scripts.pory"
	goto hardwareclerkoffersbikedeal
	goto PetalburgHardwareStoreClerk_49

PetalburgHardwareStoreClerk_64:
# 216 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_27
# 217 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 0
	goto_if_eq PetalburgHardwareStoreClerk_72
PetalburgHardwareStoreClerk_71:
# 223 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 1
	goto_if_eq PetalburgHardwareStoreClerk_80
PetalburgHardwareStoreClerk_79:
# 231 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 2
	goto_if_eq PetalburgHardwareStoreClerk_86
PetalburgHardwareStoreClerk_85:
# 236 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 3
	goto_if_eq PetalburgHardwareStoreClerk_89
PetalburgHardwareStoreClerk_88:
# 243 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_FUELSCOOPERLEVEL, 3
	goto_if_eq PetalburgHardwareStoreClerk_92
PetalburgHardwareStoreClerk_91:
# 257 "data/maps/PetalburgBikeShop/scripts.pory"
	goto endofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_63

PetalburgHardwareStoreClerk_67:
# 185 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_25
# 192 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_SCIZORITE
# 194 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_26
# 200 "data/maps/PetalburgBikeShop/scripts.pory"
	setvar VAR_BIKEQUEST, 1
# 201 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_66

PetalburgHardwareStoreClerk_69:
	checkitem ITEM_ACRO_BIKE
# 0 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgHardwareStoreClerk_77
PetalburgHardwareStoreClerk_76:
	checkitem ITEM_MACH_BIKE
# 0 "data/maps/PetalburgBikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgHardwareStoreClerk_83
PetalburgHardwareStoreClerk_82:
# 297 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_43

PetalburgHardwareStoreClerk_72:
# 219 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_28
	goto PetalburgHardwareStoreClerk_71

PetalburgHardwareStoreClerk_74:
# 206 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_21
# 207 "data/maps/PetalburgBikeShop/scripts.pory"
	goto releaseendofhardwarestoreclerk
	goto PetalburgHardwareStoreClerk_58

PetalburgHardwareStoreClerk_77:
# 264 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_33
# 266 "data/maps/PetalburgBikeShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 267 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_ELEVATOR
# 268 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 269 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_FU_ZAKU
# 270 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 271 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_FU_ZAKU
# 272 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 273 "data/maps/PetalburgBikeShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 274 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_34
# 275 "data/maps/PetalburgBikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 276 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 277 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_35
	goto PetalburgHardwareStoreClerk_76

PetalburgHardwareStoreClerk_80:
# 225 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_29
	goto PetalburgHardwareStoreClerk_79

PetalburgHardwareStoreClerk_83:
# 282 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_36
# 284 "data/maps/PetalburgBikeShop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 285 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_ELEVATOR
# 286 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 287 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_FU_ZAKU
# 288 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 289 "data/maps/PetalburgBikeShop/scripts.pory"
	playse SE_FU_ZAKU
# 290 "data/maps/PetalburgBikeShop/scripts.pory"
	waitse
# 291 "data/maps/PetalburgBikeShop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 292 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_34
# 293 "data/maps/PetalburgBikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 294 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 295 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_35
	goto PetalburgHardwareStoreClerk_82

PetalburgHardwareStoreClerk_86:
# 233 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_30
	goto PetalburgHardwareStoreClerk_85

PetalburgHardwareStoreClerk_89:
# 238 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_31
	goto PetalburgHardwareStoreClerk_88

PetalburgHardwareStoreClerk_92:
# 245 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_32
# 248 "data/maps/PetalburgBikeShop/scripts.pory"
	setvar VAR_BIKEQUEST, 2
# 249 "data/maps/PetalburgBikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 250 "data/maps/PetalburgBikeShop/scripts.pory"
	msgbox PetalburgHardwareStoreClerk_Text_19
	goto PetalburgHardwareStoreClerk_91


	.align 2
# 320 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreItemOffer:
# 321 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_POKE_BALL
# 322 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_POTION
# 323 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 324 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_REMEDY
# 325 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 326 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_HONEY
# 327 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_POKE_TOY
# 328 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 329 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_AERODACTYLITE
	.2byte ITEM_NONE

	.align 2
# 331 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreFurnitureOffer:
# 332 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_POKE_BALL
# 333 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_POTION
# 334 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 335 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_REMEDY
# 336 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 337 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_HONEY
# 338 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_POKE_TOY
# 339 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 340 "data/maps/PetalburgBikeShop/scripts.pory"
	.2byte ITEM_AERODACTYLITE
	.2byte ITEM_NONE

# 30 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreCustomer_Movement_0:
# 30 "data/maps/PetalburgBikeShop/scripts.pory"
	face_player
	step_end

# 34 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreCustomer_Movement_1:
# 34 "data/maps/PetalburgBikeShop/scripts.pory"
	face_up
	step_end

# 312 "data/maps/PetalburgBikeShop/scripts.pory"
PetalburgHardwareStoreClerk_Movement_0:
# 312 "data/maps/PetalburgBikeShop/scripts.pory"
	face_down
	step_end

PetalburgHardwareStoreCustomer_Text_0:
# 31 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "During the war, there used to be\n"
	.string "Grenade Balls that dealt damage to\l"
	.string "Pokémon, but Devon has removed all of\l"
	.string "those from circulation.\p"
	.string "It's one of the few good things Devon\n"
	.string "has done. Those were brutal, even for\l"
	.string "Rebel standards.$"

PetalburgHardwareStoreGasCylinder_Text_0:
# 41 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "It's a gas cylinder. The label reads\n"
	.string "“Pacifidlog Oil Rig”.$"

PetalburgHardwareSidneyCar_Text_0:
# 47 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "It's a sparkly, brand-new sports car.$"

PetalburgHardwareSidneyCarMechanic_Text_0:
# 54 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Sometimes I wonder why Sidney keeps a\n"
	.string "car he never uses.\p"
	.string "Some say it's to give this store some\n"
	.string "work, but I don't think he's that nice.$"

PetalburgHardwareStoreClerk_Text_0:
# 73 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Welcome to Petalburg's Hardware Store!\n"
	.string "First time, right? What will it be?$"

PetalburgHardwareStoreClerk_Text_1:
# 81 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Well well... if it isn't the twerp who\n"
	.string "tried to get our loot at Oldale\l"
	.string "Warehouse.\p"
	.string "No bad feelings, okay? One has to make\n"
	.string "a living in these parts.\p"
	.string "So... can I interest you in anything?$"

PetalburgHardwareStoreClerk_Text_2:
# 92 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Oh hey, you're that guy from Oldale\n"
	.string "Warehouse!$"

PetalburgHardwareStoreClerk_Text_3:
# 96 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Oh hey, you're that gal from Oldale\n"
	.string "Warehouse!$"

PetalburgHardwareStoreClerk_Text_4:
# 99 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "How is that Object Spotter treating\n"
	.string "you - getting good mileage out of it?\p"
	.string "If you're interested in more\n"
	.string "top-quality tech, you've come to the\l"
	.string "right place!$"

PetalburgHardwareStoreClerk_Text_5:
# 106 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Welcome to Petalburg's Hardware Store!\n"
	.string "What will it be?$"

PetalburgHardwareStoreClerk_Text_6:
# 110 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "About bikes...$"

PetalburgHardwareStoreClerk_Text_7:
# 113 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "About the fuel.$"

PetalburgHardwareStoreClerk_Text_8:
# 116 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "I got the fuel.$"

PetalburgHardwareStoreClerk_Text_9:
# 119 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Switch engine.$"

PetalburgHardwareStoreClerk_Text_10:
# 121 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Buy items$"

PetalburgHardwareStoreClerk_Text_11:
# 121 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Buy furniture$"

PetalburgHardwareStoreClerk_Text_12:
# 121 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "{STR_VAR_1}$"

PetalburgHardwareStoreClerk_Text_13:
# 121 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Leave$"

PetalburgHardwareStoreClerk_Text_14:
# 132 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Ah, interested in the big toys, aren't\n"
	.string "you? Well, you're in luck!\p"
	.string "We have exactly one Motorbike left in\n"
	.string "stock. It's a special girl too - a solar\l"
	.string "model!\p"
	.string "That means zero fuel costs. We're\n"
	.string "selling it for the low price of 500.000¥!$"

PetalburgHardwareStoreClerk_Text_15:
# 136 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "I'll buy$"

PetalburgHardwareStoreClerk_Text_16:
# 136 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "No thanks$"

PetalburgHardwareStoreClerk_Text_17:
# 136 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "That's too expensive!$"

PetalburgHardwareStoreClerk_Text_18:
# 141 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Woah, I didn't expect you to have that\n"
	.string "much cash! Well, here you go!$"

PetalburgHardwareStoreClerk_Text_19:
# 149 "data/maps/PetalburgBikeShop/scripts.pory"
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
# 158 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Oops... seems you don't have enough on\n"
	.string "you. And we don't do instalments, sorry!$"

PetalburgHardwareStoreClerk_Text_21:
# 167 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Too bad. Come back if you change your\n"
	.string "mind.$"

PetalburgHardwareStoreClerk_Text_22:
# 174 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Too expensive? Buddy, they sell regular\n"
	.string "bikes in Kanto for like, a million\l"
	.string "pokeyen!\p"
	.string "And this here is a motorbike, at half\n"
	.string "that price!$"

PetalburgHardwareStoreClerk_Text_23:
# 178 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "\p"
	.string "Hey, I get it. it's hard to get cash here\n"
	.string "in the Rebel Zone.\p"
	.string "Which is why we're offering another deal\n"
	.string "for this motorbike. Interested?$"

PetalburgHardwareStoreClerk_Text_24:
# 182 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Sure$"

PetalburgHardwareStoreClerk_Text_25:
# 185 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Great - well, it's very simple. We're the\n"
	.string "only supplier of fuel in the Rebel\l"
	.string "Zone... and we're running out of it!\p"
	.string "\p"
	.string "Devon is hoarding all of the oil from the\n"
	.string "Pacifidlog Rig. It's been getting harder\l"
	.string "and harder to get.\p"
	.string "If we don't get fuel to sell, our\n"
	.string "business will crash. To help us with\l"
	.string "that... take this!$"

PetalburgHardwareStoreClerk_Text_26:
# 194 "data/maps/PetalburgBikeShop/scripts.pory"
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
# 216 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "How's the fuel scooping going? Let me\n"
	.string "see the scooper's tank...$"

PetalburgHardwareStoreClerk_Text_28:
# 219 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Why, you still haven't scooped\n"
	.string "anything! Bah!\p"
	.string "You better get it moving, or I'll give\n"
	.string "that scooper to someone who wants in\l"
	.string "on the deal.$"

PetalburgHardwareStoreClerk_Text_29:
# 225 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Hmm, you haven't scooped much. You'd\n"
	.string "need four times this amount before it's\l"
	.string "a fair deal for the bike.\p"
	.string "Have you checked the abandoned\n"
	.string "vehicles in Road 002? They might have\l"
	.string "some fuel left in their tanks.$"

PetalburgHardwareStoreClerk_Text_30:
# 233 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Hey, not bad - it's about half full. Keep\n"
	.string "at it!$"

PetalburgHardwareStoreClerk_Text_31:
# 238 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Well, you're almost there - it's about\n"
	.string "three quarters full!\p"
	.string "I think one more scoop ought to do it.\n"
	.string "I'll have that solar bike ready for you!$"

PetalburgHardwareStoreClerk_Text_32:
# 245 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Wow, look at that - you did it! That's a\n"
	.string "good full tank!\p"
	.string "If we ever need an extra hand in the\n"
	.string "shop, perhaps we can count on you? Now,\l"
	.string "I'll have that and the scooper back. And\l"
	.string "this is for you!$"

PetalburgHardwareStoreClerk_Text_33:
# 264 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Sure! You have the Cross Motor on your\n"
	.string "Solar Bike, don't you?\p"
	.string "Let me swap that with the Race Motor.\n"
	.string "I'll be a moment!$"

PetalburgHardwareStoreClerk_Text_34:
# 274 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Alright, here you go!$"

PetalburgHardwareStoreClerk_Text_35:
# 277 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Drive safely now!$"

PetalburgHardwareStoreClerk_Text_36:
# 282 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Sure! You have the Race Motor on your\n"
	.string "Solar Bike, don't you?\p"
	.string "Let me swap that with the Cross Motor.\n"
	.string "I'll be a moment!$"

PetalburgHardwareStoreClerk_Text_37:
# 309 "data/maps/PetalburgBikeShop/scripts.pory"
	.string "Alright. Come back soon!$"
