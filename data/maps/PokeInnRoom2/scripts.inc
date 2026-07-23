# 1 "data/maps/PokeInnRoom2/scripts.pory"


PokeInnRoom2_MapScripts::
# 9 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DisableInnFollowers
	.byte 0


DisableInnFollowers::
# 12 "data/maps/PokeInnRoom2/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


DevonInnSignAboutFreezer::
# 19 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 20 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSignAboutFreezer_Text_0
# 21 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


WallClock::
# 25 "data/maps/PokeInnRoom2/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 26 "data/maps/PokeInnRoom2/scripts.pory"
	gettime
# 27 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 28 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8001
# 29 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8002
# 30 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox WallClock_Text_0
	end


DevonShowFreetrial::
# 44 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_0
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, DevonShowFreetrial_Text_1, DevonShowFreetrial_Text_2, DevonShowFreetrial_Text_3, DevonShowFreetrial_Text_4
# 49 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DevonShowFreetrial_2
DevonShowFreetrial_1:
# 51 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonShowFreetrial_5
DevonShowFreetrial_4:
# 98 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonShowFreetrial_8
DevonShowFreetrial_7:
# 166 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonShowFreetrial_10
	return

DevonShowFreetrial_2:
# 49 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_1

DevonShowFreetrial_5:
# 53 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_5
# 54 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 55 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_6
# 58 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 59 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR, 10, 3
# 61 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_7
# 62 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 63 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 64 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_8
# 66 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 67 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MACHAMP, 10, 3
# 68 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_9
# 69 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 70 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 71 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_10
# 72 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ATTRACT
# 73 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR_MEGA, 10, 3
# 74 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 75 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_11
# 77 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 78 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_12
# 80 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 81 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_13
# 83 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_14
# 84 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_FLEE
# 85 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_15
# 87 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 88 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_16
# 90 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 91 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_FLEE
# 92 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 93 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_17
	goto DevonShowFreetrial_4

DevonShowFreetrial_8:
# 100 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 101 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 102 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_18
# 106 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_SCRAFTY, CRY_MODE_NORMAL
# 107 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_19
# 109 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 110 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 111 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_20
# 113 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8004, 2
# 114 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8005, 6
# 115 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8006, 4
# 116 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8007, 4
# 117 "data/maps/PokeInnRoom2/scripts.pory"
	special ShakeCamera
# 118 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 119 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_COMET_PUNCH
# 120 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_ALCREMIE_CLOVER, 10, 3
# 121 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_21
# 123 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 124 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 125 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_SCRAFTY, CRY_MODE_WEAK
# 126 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_22
# 128 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 129 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 130 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_23
# 132 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 133 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 134 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_24
# 137 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 138 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 139 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_25
# 142 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, DevonShowFreetrial_Text_26, DevonShowFreetrial_Text_27
# 144 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonShowFreetrial_13
DevonShowFreetrial_12:
# 159 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonShowFreetrial_15
	goto DevonShowFreetrial_7

DevonShowFreetrial_10:
# 168 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 169 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_32
# 173 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 174 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_33
# 176 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 177 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_34
# 180 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 181 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_35
# 184 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 185 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_36
# 188 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 189 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_37
# 192 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GLALIE_MEGA, 10, 3
# 193 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 194 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_38
# 198 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 199 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 200 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_39
	return

DevonShowFreetrial_13:
# 145 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 146 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_28
# 147 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 148 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DevonShowFreetrial_18
DevonShowFreetrial_17:
# 152 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DevonShowFreetrial_21
DevonShowFreetrial_20:
# 155 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 156 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_12

DevonShowFreetrial_15:
# 160 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_31
# 161 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_7

DevonShowFreetrial_18:
# 149 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_29
	goto DevonShowFreetrial_17

DevonShowFreetrial_21:
# 153 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_30
	goto DevonShowFreetrial_20


OldalePokeCenterInnPrograms::
# 207 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 208 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldalePokeCenterInnPrograms_Text_0, OldalePokeCenterInnPrograms_Text_1, OldalePokeCenterInnPrograms_Text_2, OldalePokeCenterInnPrograms_Text_3
# 211 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldalePokeCenterInnPrograms_2
OldalePokeCenterInnPrograms_1:
# 218 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldalePokeCenterInnPrograms_5
OldalePokeCenterInnPrograms_4:
# 235 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldalePokeCenterInnPrograms_11
OldalePokeCenterInnPrograms_10:
# 253 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldalePokeCenterInnPrograms_24
OldalePokeCenterInnPrograms_23:
# 258 "data/maps/PokeInnRoom2/scripts.pory"
	releaseall
	return

OldalePokeCenterInnPrograms_2:
# 212 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenshowatinnvisit, OldalePokeCenterInnPrograms_7
# 214 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_4
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_5:
# 219 "data/maps/PokeInnRoom2/scripts.pory"
	random 8
# 220 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 222 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 223 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_14
# 224 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_15
# 225 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, OldalePokeCenterInnPrograms_16
# 226 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, OldalePokeCenterInnPrograms_17
# 227 "data/maps/PokeInnRoom2/scripts.pory"
	case 4, OldalePokeCenterInnPrograms_18
# 228 "data/maps/PokeInnRoom2/scripts.pory"
	case 5, OldalePokeCenterInnPrograms_19
# 229 "data/maps/PokeInnRoom2/scripts.pory"
	case 6, OldalePokeCenterInnPrograms_20
# 230 "data/maps/PokeInnRoom2/scripts.pory"
	case 7, OldalePokeCenterInnPrograms_21
# 231 "data/maps/PokeInnRoom2/scripts.pory"
	case 8, OldalePokeCenterInnPrograms_22
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_7:
# 213 "data/maps/PokeInnRoom2/scripts.pory"
	goto DevonShowFreetrial
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_11:
# 236 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenweatheratinnvisit, OldalePokeCenterInnPrograms_26
# 250 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_5
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_14:
# 223 "data/maps/PokeInnRoom2/scripts.pory"
	goto OldaleWarehouseNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_15:
# 224 "data/maps/PokeInnRoom2/scripts.pory"
	goto JimmyNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_16:
# 225 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_17:
# 226 "data/maps/PokeInnRoom2/scripts.pory"
	goto PetalburgRiotNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_18:
# 227 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_19:
# 228 "data/maps/PokeInnRoom2/scripts.pory"
	goto DevonSpaceNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_20:
# 229 "data/maps/PokeInnRoom2/scripts.pory"
	goto MauvillePlantNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_21:
# 230 "data/maps/PokeInnRoom2/scripts.pory"
	goto RebelHarbourNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_22:
# 231 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route104LabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_24:
# 254 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto OldalePokeCenterInnPrograms_23

OldalePokeCenterInnPrograms_26:
# 237 "data/maps/PokeInnRoom2/scripts.pory"
	random 3
# 238 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 239 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 240 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_30
# 241 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_31
# 242 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, OldalePokeCenterInnPrograms_32
# 243 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, OldalePokeCenterInnPrograms_33
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_30:
# 240 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route103WeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_31:
# 241 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route102WeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_32:
# 242 "data/maps/PokeInnRoom2/scripts.pory"
	goto GreatCraterWeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_33:
# 243 "data/maps/PokeInnRoom2/scripts.pory"
	goto LandfillWeatherNews
	goto OldalePokeCenterInnPrograms_10


JimmyNews::
# 265 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 267 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyNews_2
JimmyNews_1:
# 277 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq JimmyNews_5
JimmyNews_4:
# 299 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

JimmyNews_2:
# 269 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_0
	goto JimmyNews_1

JimmyNews_5:
# 279 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, JimmyNews_7
# 289 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_2
	goto JimmyNews_4

JimmyNews_7:
# 280 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_1
	goto JimmyNews_4


OldaleWarehouseNews::
# 303 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 305 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWarehouseNews_2
OldaleWarehouseNews_1:
# 313 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_gt OldaleWarehouseNews_5
OldaleWarehouseNews_4:
# 339 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

OldaleWarehouseNews_2:
# 307 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_0
	goto OldaleWarehouseNews_1

OldaleWarehouseNews_5:
# 316 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_1
# 320 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 322 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseNews_8
OldaleWarehouseNews_7:
# 330 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseNews_10
	goto OldaleWarehouseNews_4

OldaleWarehouseNews_8:
# 324 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_2
	goto OldaleWarehouseNews_7

OldaleWarehouseNews_10:
# 332 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_3
	goto OldaleWarehouseNews_4


PetalburgRiotNews::
# 346 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 347 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, PetalburgRiotNews_2
# 357 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_1
PetalburgRiotNews_1:
# 365 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

PetalburgRiotNews_2:
# 350 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_0
	goto PetalburgRiotNews_1


LittlerootLabNews::
# 371 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 372 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, LittlerootLabNews_2
# 386 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_1
LittlerootLabNews_1:
# 387 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

LittlerootLabNews_2:
# 375 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_0
	goto LittlerootLabNews_1


DevonSpaceNews::
# 392 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 393 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonSpaceNews_Text_0
# 400 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


MauvillePlantNews::
# 406 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 407 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox MauvillePlantNews_Text_0
# 415 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


RebelHarbourNews::
# 421 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 422 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq RebelHarbourNews_2
RebelHarbourNews_1:
# 434 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq RebelHarbourNews_5
RebelHarbourNews_4:
# 439 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

RebelHarbourNews_2:
# 425 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_0
	goto RebelHarbourNews_1

RebelHarbourNews_5:
# 437 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_1
	goto RebelHarbourNews_4


Route104LabNews::
# 446 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 447 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq Route104LabNews_2
Route104LabNews_1:
# 459 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq Route104LabNews_5
Route104LabNews_4:
# 472 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

Route104LabNews_2:
# 450 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_0
	goto Route104LabNews_1

Route104LabNews_5:
# 462 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_1
	goto Route104LabNews_4


Route103WeatherNews::
# 479 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_RAIN_DANCE
# 480 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route103WeatherNews_Text_0
# 483 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 1
# 485 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 486 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


Route102WeatherNews::
# 490 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SANDSTORM
# 491 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route102WeatherNews_Text_0
# 495 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 1
# 496 "data/maps/PokeInnRoom2/scripts.pory"
	clearflag route102weathermon
# 497 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 498 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


GreatCraterWeatherNews::
# 503 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox GreatCraterWeatherNews_Text_0
# 508 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 1
# 510 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 511 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


LandfillWeatherNews::
# 516 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LandfillWeatherNews_Text_0
# 520 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 1
# 522 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 523 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnSignAboutFreezer_Text_0:
# 20 "data/maps/PokeInnRoom2/scripts.pory"
	.string "With each visit, remember to check the\n"
	.string "freezer for a free drink!$"

WallClock_Text_0:
# 30 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The time is {STR_VAR_1},\n"
	.string "{STR_VAR_3}, {STR_VAR_3}.$"

DevonShowFreetrial_Text_0:
# 44 "data/maps/PokeInnRoom2/scripts.pory"
	.string "This is a Devon Show's Free Trial! You\n"
	.string "may watch these episodes from Devon\l"
	.string "Shows for free!\p"
	.string "Which one would you like to watch?$"

DevonShowFreetrial_Text_1:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Love is Danger, Episode 8$"

DevonShowFreetrial_Text_2:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The Adventures of Super Substitute, Episode 34$"

DevonShowFreetrial_Text_3:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Gabby's Talk Show, Episode 18$"

DevonShowFreetrial_Text_4:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	.string "None$"

DevonShowFreetrial_Text_5:
# 53 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Love is Danger, Episode 8: Till Pokémon\n"
	.string "do us part$"

DevonShowFreetrial_Text_6:
# 55 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Dear, I've reached my limit!\p"
	.string "Our marriage is falling apart, and I'm\n"
	.string "tired of pretending otherwise!\p"
	.string "We don't talk like we used to since…\n"
	.string "since…{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_7:
# 61 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Since your Kirlia evolved into\n"
	.string "Gardevoir!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_8:
# 64 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Huh!? Don't blame this on her! This all\n"
	.string "started when you- you...!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_9:
# 68 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}When you received that Machamp from a\n"
	.string "trade!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_10:
# 71 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}That's rich - you are such a…! Huh?\n"
	.string "W-wait… what's happening…? {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_11:
# 75 "data/maps/PokeInnRoom2/scripts.pory"
	.string "...!$"

DevonShowFreetrial_Text_12:
# 78 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}G-Gardette, why are you looking at him\n"
	.string "like that!?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_13:
# 81 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Machote, you too - you've never held me\n"
	.string "like that before…! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_14:
# 83 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}O-oh, oh no... what are they doing!? I-I\n"
	.string "can't watch this anymore!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_15:
# 85 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}UWAAAAH!!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_16:
# 88 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Devon was right… Pokémon… they can't\n"
	.string "be trusted! Darling, wait!!” {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_17:
# 93 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Will this steamy incident increase the\n"
	.string "gap between our protanist couple…?\p"
	.string "Or will it serve as the patch needed to\n"
	.string "repair their relationship!?\p"
	.string "Find out more in the next episode of\n"
	.string "'Love is Danger!' Only under Devon Shows\l"
	.string "subscription!$"

DevonShowFreetrial_Text_18:
# 102 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}It's the end of the line, Super\n"
	.string "Substitute! We have the Super Stones\p"
	.string "With them, we will be able to Super\n"
	.string "Evolve, and become the most powerful\l"
	.string "and DANGEROUS Pokémon in all the world!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_19:
# 107 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}BWAA-HA-HA-HA!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_20:
# 111 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Not if I can help it, Swaggy the\n"
	.string "Scrafty! Special Technique...{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_21:
# 121 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}SELF-DEFENSE STRIKE!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_22:
# 126 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}W-WAAH! Wait, how is that\n"
	.string "self-defense!? We didn't even attack\l"
	.string "you yet!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_23:
# 130 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}You silly Swaggy! Striking evil foes is\n"
	.string "always in self-defense!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_24:
# 134 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Grr… if only I had taken a course on a\n"
	.string "Devon Learning Center... {COLOR LIGHT_GRAY}{SHADOW WHITE}applications\l"
	.string "open now...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "{COLOR RED}I would be smart enough to know that!\p"
	.string "But it doesn't matter - gang, let's\n"
	.string "SUPER EVOLVE! ORYAAAH…!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_25:
# 139 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Oh no! People at home, we must stop\n"
	.string "Swaggy and his gang from Super\l"
	.string "Evolving!\p"
	.string "You know what to do - cheer me up! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_26:
# 142 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Go, Super Substitute!$"

DevonShowFreetrial_Text_27:
# 142 "data/maps/PokeInnRoom2/scripts.pory"
	.string "...$"

DevonShowFreetrial_Text_28:
# 146 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{PLAYER} yells at the TV…!$"

DevonShowFreetrial_Text_29:
# 149 "data/maps/PokeInnRoom2/scripts.pory"
	.string "He feels so embarrased, he switches it\n"
	.string "off instantly.$"

DevonShowFreetrial_Text_30:
# 153 "data/maps/PokeInnRoom2/scripts.pory"
	.string "She feels so embarrased, she switches\n"
	.string "it off instantly.$"

DevonShowFreetrial_Text_31:
# 160 "data/maps/PokeInnRoom2/scripts.pory"
	.string "... that's enough cartoons for today.$"

DevonShowFreetrial_Text_32:
# 169 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Welcome to Gabby's Talk Show! We are\n"
	.string "here tonight with miss Glacia, former\l"
	.string "Hoenn Elite Four, and now one of the\l"
	.string "most accomplished Admins of Devon Co.\p"
	.string "It's a pleasure to have you, miss Glacia.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_33:
# 174 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}The pleasure is mine, Gabby. Glacia will\n"
	.string "do.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_34:
# 177 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Thank you, Glacia! Now, I believe\n"
	.string "everyone at home must be wondering…\p"
	.string "What's your secret for looking JUST like\n"
	.string "you looked 30 years ago!?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_35:
# 181 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Hm, I never thought about that…\n"
	.string "perhaps it's being around ice Pokémon.\p"
	.string "They say cold conserves, doesn't it?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_36:
# 185 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Hehe - that's so true!\p"
	.string "And that remark is the perfect segway\n"
	.string "for our first commercial break!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_37:
# 189 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}... already?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_38:
# 194 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Glalie's. The only skincare product\n"
	.string "you'll ever need.\p"
	.string "This soothing cream will leave your face\n"
	.string "smooth like a Spheal's - or pokeyen\l"
	.string "returned! Glalie's. Let time slide you by\l"
	.string "like fresh ice.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_39:
# 200 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Looks like this is the firt of many ads\n"
	.string "to come... better get going.$"

OldalePokeCenterInnPrograms_Text_0:
# 208 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon News$"

OldalePokeCenterInnPrograms_Text_1:
# 208 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Channel$"

OldalePokeCenterInnPrograms_Text_2:
# 208 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon Shows$"

OldalePokeCenterInnPrograms_Text_3:
# 208 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Don't watch TV$"

OldalePokeCenterInnPrograms_Text_4:
# 214 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The Devon Shows' Free Trial has been\n"
	.string "claimed on this inn visit.$"

OldalePokeCenterInnPrograms_Text_5:
# 250 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The weather broadcast has ended...$"

JimmyNews_Text_0:
# 269 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news on the chase for Jimmy\n"
	.string "McGligar, the infamous Pokémon egg\l"
	.string "smuggler - he has been seen in Route\l"
	.string "110.\p"
	.string "We urge our viewers to extreme caution,\n"
	.string "and inform authorities if they see him.\l"
	.string "An image of him is now onscreen.\p"
	.string "We take this chance to remind our\n"
	.string "viewers that only official Devon\l"
	.string "Breeders are authorized to match\l"
	.string "Pokémon and handle their offspring.\p"
	.string "This is part of the efforts to prevent\n"
	.string "dangerous practices such as genetic\l"
	.string "enhancing, also referred to as 'IV\l"
	.string "breeding'.$"

JimmyNews_Text_1:
# 280 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We have news on egg smuggler Jimmy\n"
	.string "McGligar's whereabouts.\p"
	.string "Civilians have reported sighting him in\n"
	.string "Petalburg City, and there's speculation\l"
	.string "he recently crossed the checkpoint at\l"
	.string "Concord Bridge unnoticed.\p"
	.string "Due to the high rebel activity in\n"
	.string "Petalburg, an arrest will prove\l"
	.string "difficult, and efforts are focused on\l"
	.string "preventing him from leaving the Rebel\l"
	.string "Zone once more.\p"
	.string "Security checks are thus being\n"
	.string "reinforced in the checkpoints of\l"
	.string "Petalburg Park, Concord Bridge and\l"
	.string "Rustboro Road.\p"
	.string "Please carry your Devon Visa when\n"
	.string "travelling.$"

JimmyNews_Text_2:
# 289 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We have news on egg smuggler Jimmy\n"
	.string "McGligar's whereabouts.\p"
	.string "After a close encounter with Devon\n"
	.string "Guards and a brave civilian at Concord\l"
	.string "Bridge, he's been reported to have\l"
	.string "moved to Petalburg City.\p"
	.string "Due to the high rebel activity in the\n"
	.string "area, an arrest will prove difficult, and\l"
	.string "efforts are focused on preventing him\l"
	.string "from leaving the Rebel Zone once more.\p"
	.string "Security checks are thus being\n"
	.string "reinforced in the checkpoints of\l"
	.string "Petalburg Park, Concord Bridge and\l"
	.string "Rustboro Road.\p"
	.string "Please carry your Devon Visa when\n"
	.string "travelling.$"

OldaleWarehouseNews_Text_0:
# 307 "data/maps/PokeInnRoom2/scripts.pory"
	.string "In other unfortunate piece of news,\n"
	.string "the Devon Warehouse of Oldale town is\l"
	.string "still under rebel control.\p"
	.string "Devon Co. has promised to send a\n"
	.string "taskforce to the facility as soon as\l"
	.string "Devon Guards can be freed from the\l"
	.string "evacuation efforts of Mauville City,\l"
	.string "whose Nuclear Plant has suffered a\l"
	.string "great accident.\p"
	.string "We will continue to apprise you of the\n"
	.string "situation.$"

OldaleWarehouseNews_Text_1:
# 316 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking News: our Verdooms have\n"
	.string "recently caught this footage of the\l"
	.string "Devon Warehouse of Oldale Town, where\l"
	.string "rebels can be seen leaving the facility\l"
	.string "in droves.$"

OldaleWarehouseNews_Text_2:
# 324 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Not soon after, a young man in\n"
	.string "soldier-like clothes was seen leaving\l"
	.string "the warehouse. Some early hypothesis\l"
	.string "see him as a prisoner who freed himself\l"
	.string "after the rebels were called out, while\l"
	.string "others point at this person being a\l"
	.string "mercenary sent to defeat said rebels\l"
	.string "for yet unknown reasons.\p"
	.string "We will provide more information as soon\n"
	.string "as we have it.$"

OldaleWarehouseNews_Text_3:
# 332 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Not soon after, a young woman in\n"
	.string "soldier-like clothes was seen leaving\l"
	.string "the warehouse. Some early hypothesis\l"
	.string "see her as a prisoner who freed himself\l"
	.string "after the rebels were called out, while\l"
	.string "others point at this person being a\l"
	.string "mercenary sent to defeat said rebels\l"
	.string "for yet unknown reasons.\p"
	.string "We will provide more information as soon\n"
	.string "as we have it.$"

PetalburgRiotNews_Text_0:
# 350 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news: a violent, rebel-led riot\n"
	.string "has broken out in the vicinity of\l"
	.string "Petalburg City's Devon Center.\p"
	.string "Devon Guards have already been\n"
	.string "dispatched to put an end to the\l"
	.string "violence, and we advise residents of\l"
	.string "the city to steer clear off the Devon\l"
	.string "facility until the situation is under\l"
	.string "control.$"

PetalburgRiotNews_Text_1:
# 357 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news: rebels have been\n"
	.string "vacated from a violent riot mounted\l"
	.string "around Petalburg City's Devon Center.\l"
	.string "The property damage is great, but no\l"
	.string "human or Pokémon injury has ensued.\p"
	.string "The situation was apparently defused\n"
	.string "by a young person garbed in camouflage\l"
	.string "clothes, who some believe to be the\l"
	.string "same that appears in the footage of\l"
	.string "Rebels leaving Oldale's Devon\l"
	.string "Warehouse.\p"
	.string "Could this be the rise of a bold\n"
	.string "vigilante in the Rebel Zone, or perhaps\l"
	.string "that of an enforcer acting for a\l"
	.string "nefarious faction?\p"
	.string "We will keep you informed of these\n"
	.string "developments.$"

LittlerootLabNews_Text_0:
# 375 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Now, for some more analysis on the\n"
	.string "latest issue of Devon Co's 'Safemon\l"
	.string "Progress Report'.\p"
	.string "For the third consecutive month,\n"
	.string "Littleroot's Lab has been at the bottom\l"
	.string "of contributions to the Safemon\l"
	.string "project, with only 2 Pokémon species\l"
	.string "successfully turned into Safemon.\p"
	.string "In spite of its decades-long history of\n"
	.string "academic brilliance, the laboratory\l"
	.string "took a turn for the worse when the\l"
	.string "illustrious Professor Birch retired, and\l"
	.string "the torch was passed to the Alolan\l"
	.string "Professor Balsam.\p"
	.string "After continuous downsizing of the\n"
	.string "laboratory, she is now one of the only\l"
	.string "two scientists working in Littleroot,\l"
	.string "and the closure of the institution\l"
	.string "seems all but imminent.\p"
	.string "It would be a sad farewell to a once\n"
	.string "iconic landmark in Hoenn's history.$"

LittlerootLabNews_Text_1:
# 386 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after raid to the lab, another news!$"

DevonSpaceNews_Text_0:
# 393 "data/maps/PokeInnRoom2/scripts.pory"
	.string "“Space is no longer the limit” was\n"
	.string "claimed in unison by the new\l"
	.string "administrators of Mossdeep's Devon\l"
	.string "Space Center - former gym leaders Tate\l"
	.string "and Liza - during the announcement of\l"
	.string "the new MDSS program.\p"
	.string "Last year, the space agency sent\n"
	.string "several Lunatellites into orbit, which\l"
	.string "made the popular Devon Net possible.\p"
	.string "This year, with the help of business\n"
	.string "partner Silph Co., the 'Gemini Mission'\l"
	.string "has started, with goals to build the\l"
	.string "Devon Space Station - the first\l"
	.string "man-made, long-term habitat to exist\l"
	.string "outside the planet.\p"
	.string "Everyone in Hoenn looks forward to the\n"
	.string "exciting discoveries that this new era\l"
	.string "of space flight might bring. Stay tuned!$"

MauvillePlantNews_Text_0:
# 407 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Next up, we bring you some unfortunate\n"
	.string "news.\p"
	.string "An accident in Mauville's Nuclear Plant\n"
	.string "has claimed the lifes of 7 dozen Devon\l"
	.string "workers and 5 Safemon. Many others\l"
	.string "have been injured, and some are in\l"
	.string "critical condition.\p"
	.string "In a recent press conference, Plant\n"
	.string "Manager Wattson has sent his\l"
	.string "condolences to the affected families,\l"
	.string "and has assured an investigation into\l"
	.string "the incident is underway.\p"
	.string "Meanwhile, voices are being raised\n"
	.string "advocating for the phasing out of\l"
	.string "nuclear technology, in favour of the\l"
	.string "safer, cleaner energy provided by the\l"
	.string "thermal plant of Lavaridge City.\p"
	.string "Mister Stone has promised to look into\n"
	.string "the matter, and to assess whether\l"
	.string "Lavaridge can keep up with the energy\l"
	.string "demands of our rapidly developing\l"
	.string "region.$"

RebelHarbourNews_Text_0:
# 425 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We have received news about Rebels\n"
	.string "building an illegal harbour on the coast\l"
	.string "south of Petalburg City.\p"
	.string "Although available information rules\n"
	.string "out any war-equipped vessels being\l"
	.string "built or acquired by anti-Devon\l"
	.string "radicals, the place sees regular traffic\l"
	.string "of small foreign boats.\p"
	.string "If conjectures are to be believed, this\n"
	.string "could point to a collaboration between\l"
	.string "the Rebels and foreign crime\l"
	.string "organizations, and the establishment\l"
	.string "of a supply chain.\p"
	.string "Devon Co. continues to monitor the\n"
	.string "situation, and Mister Stone has\l"
	.string "promised to deal with any threats to\l"
	.string "the region's safety that dare arise\l"
	.string "from southern Hoenn in a 'swift, stern,\l"
	.string "and safe manner'$"

RebelHarbourNews_Text_1:
# 437 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after foreign missions, INFORM ABOUT\n"
	.string "THEM!$"

Route104LabNews_Text_0:
# 450 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We continue with more insight into the\n"
	.string "latest issue of the Safemon Progress\l"
	.string "Report that Devon Co. recently\l"
	.string "published.\p"
	.string "The metrics place the Devon Lab in\n"
	.string "Route 104 as one of the lead\l"
	.string "contributors to Safemon Research this\l"
	.string "past month, with 4 species successfully\l"
	.string "safened only this past week.\p"
	.string "In a recent interview, Lab Director X\n"
	.string "shared that 'Although the Rebel Zone\l"
	.string "can be a hazardous work environment,\l"
	.string "the abundance of regular Pokémon here\l"
	.string "has provided us with a satisfactory\l"
	.string "number of samples, which has\l"
	.string "contributed to our pace of research'.\p"
	.string "We wish our valiant and hard-working\n"
	.string "scientists the best of lucks in their\l"
	.string "noble endeavor of making Hoenn a safer\l"
	.string "place.$"

Route104LabNews_Text_1:
# 462 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news. We have just received\n"
	.string "reports of an assault on the Devon Lab\l"
	.string "of Route 104, presumably perpetrated\l"
	.string "by a band of rebels led by former gym\l"
	.string "leader of the neighbouring Petalburg\l"
	.string "City - Norman.\p"
	.string "While there is no footage of the\n"
	.string "incident, witnesses claim he was\l"
	.string "accompanied by 4 young trainers, with\l"
	.string "whom he seized control of the facility\l"
	.string "by use of violent, unsafened Pokémon.\p"
	.string "Fortunately, Devon Admin Roxanne was\n"
	.string "swiftly dispatched to the location, and\l"
	.string "ensured the safe retreat of the\l"
	.string "laboratory's personnel. Norman and his\l"
	.string "acolytes' goals are unknown, but\l"
	.string "speculated to be of lucrative nature,\l"
	.string "similar to those of the rebels that\l"
	.string "recently stripped the Devon Warehouse\l"
	.string "of Oldale Town of all its valuable\l"
	.string "assets.\p"
	.string "The lab will remain unmanned until it can\n"
	.string "be safely reclaimed. That is all we have\l"
	.string "for the moment.$"

Route103WeatherNews_Text_0:
# 480 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Alert: We would like to inform\n"
	.string "of a heavy rainstorm now pouring over\l"
	.string "Route 103.\p"
	.string "The Weather Institute advises to keep\n"
	.string "clear of the river in that route, and\l"
	.string "travel through there only if it's\l"
	.string "absolutely necessary.$"

Route102WeatherNews_Text_0:
# 491 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Alert: We would like to inform\n"
	.string "of a sandstorm taking place in Road\l"
	.string "002.\p"
	.string "Strong winds are carrying the\n"
	.string "construction sand now left abandoned\l"
	.string "after the construction of Road 002 was\l"
	.string "discontinued.\p"
	.string "We advise citizens to avoid the area\n"
	.string "until winds have subdued.$"

GreatCraterWeatherNews_Text_0:
# 503 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Alert: We would like to inform\n"
	.string "of mysterious dust falling upon the\l"
	.string "area around the Great Crater, south of\l"
	.string "Road 002.\p"
	.string "Climate activists claim that this is\n"
	.string "nuclear fallout, created by the\l"
	.string "singular Electrode explosion that took\l"
	.string "place there during the war.\p"
	.string "The Weather Institute however has\n"
	.string "labelled these claims as alarmist, and\l"
	.string "reassures citizens and tourists that\l"
	.string "radiation levels within the Rebel Zone\l"
	.string "are perfectly within safe margins.$"

LandfillWeatherNews_Text_0:
# 516 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Alert: We would like to inform\n"
	.string "of toxic fumes rising from Petalburg\l"
	.string "Scrapyard.\p"
	.string "The Weather Institute claims this is\n"
	.string "the result of certain waste materials\l"
	.string "being heated by the sun.\p"
	.string "We advise steering clear of the area\n"
	.string "for the time being, and use the safer\l"
	.string "Petalburg Park route for those\l"
	.string "travelling between Petalburg City and\l"
	.string "Neo Rustboro.$"
