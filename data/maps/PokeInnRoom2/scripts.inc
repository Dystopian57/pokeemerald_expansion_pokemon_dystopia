# 1 "data/maps/PokeInnRoom2/scripts.pory"


PokeInnRoom2_MapScripts::
# 9 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DisableInnFollowers
# 10 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DayNightAmbientLight
# 11 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightAmbientLight
# 12 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DayNightAmbientLight
	.byte 0


DisableInnFollowers::
# 15 "data/maps/PokeInnRoom2/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	return


DevonInnSignAboutFreezer::
# 22 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 23 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSignAboutFreezer_Text_0
# 24 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnLamp::
# 28 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 29 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnLamp_Text_0
# 30 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnTrashCan::
# 34 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 35 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnTrashCan_Text_0
# 36 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnSink::
# 40 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 41 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_0
# 43 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 44 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DevonInnSink_2
DevonInnSink_1:
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DevonInnSink_5
DevonInnSink_4:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnSink_8
DevonInnSink_7:
# 58 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnSink_11
DevonInnSink_10:
# 74 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnSink_14
DevonInnSink_13:
# 89 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DevonInnSink_20
DevonInnSink_19:
# 117 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq DevonInnSink_26
DevonInnSink_25:
# 118 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

DevonInnSink_2:
# 44 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, DevonInnSink_Text_1, DevonInnSink_Text_2, DevonInnSink_Text_3, DevonInnSink_Text_4, DevonInnSink_Text_5
	goto DevonInnSink_1

DevonInnSink_5:
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, DevonInnSink_Text_1, DevonInnSink_Text_2, DevonInnSink_Text_3, DevonInnSink_Text_6, DevonInnSink_Text_5
	goto DevonInnSink_4

DevonInnSink_8:
# 48 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 49 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 50 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 51 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 52 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 53 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ABSORB_2
# 54 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_7
	goto DevonInnSink_7

DevonInnSink_11:
# 59 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 60 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 61 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 62 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 63 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DIVE
# 64 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 65 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 66 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DevonInnSink_17
DevonInnSink_16:
# 67 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DevonInnSink_23
DevonInnSink_22:
# 68 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 69 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_STAT_INCREASE
# 70 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_8
	goto DevonInnSink_10

DevonInnSink_14:
# 75 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 76 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 77 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 78 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 79 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE3
# 80 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 81 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_A
# 82 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 83 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_BALLOON_BLUE
# 84 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 85 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_9
	goto DevonInnSink_13

DevonInnSink_17:
# 66 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
	goto DevonInnSink_16

DevonInnSink_20:
# 90 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 91 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DevonInnSink_28
# 107 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_REPEL
# 108 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 109 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_MIST
# 110 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 111 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_MIST
# 112 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 113 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_11
	goto DevonInnSink_19

DevonInnSink_23:
# 67 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ENCORE
	goto DevonInnSink_22

DevonInnSink_26:
# 117 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonInnSink_25

DevonInnSink_28:
# 93 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_REPEL
# 94 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 95 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SCRATCH
# 96 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 97 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SCRATCH
# 98 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 99 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SCRATCH
# 100 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 101 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 102 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_10
	goto DevonInnSink_19


DevonInnFreezer::
# 123 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 124 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset claimedinnfreedrink, DevonInnFreezer_2
# 138 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnFreezer_Text_1
DevonInnFreezer_1:
# 139 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

DevonInnFreezer_2:
# 125 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnFreezer_Text_0
# 126 "data/maps/PokeInnRoom2/scripts.pory"
	random 3
# 127 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 129 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, DevonInnFreezer_7
# 131 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, DevonInnFreezer_8
# 132 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, DevonInnFreezer_9
# 133 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, DevonInnFreezer_10
DevonInnFreezer_5:
# 135 "data/maps/PokeInnRoom2/scripts.pory"
	setflag claimedinnfreedrink
	goto DevonInnFreezer_1

DevonInnFreezer_7:
# 130 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_FRESH_WATER
	goto DevonInnFreezer_5

DevonInnFreezer_8:
# 131 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_SODA_POP
	goto DevonInnFreezer_5

DevonInnFreezer_9:
# 132 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_TEA
	goto DevonInnFreezer_5

DevonInnFreezer_10:
# 133 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_HEAL_POWDER
	goto DevonInnFreezer_5


WallClock::
# 143 "data/maps/PokeInnRoom2/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 144 "data/maps/PokeInnRoom2/scripts.pory"
	gettime
# 145 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 146 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8001
# 147 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8002
# 148 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox WallClock_Text_0
# 149 "data/maps/PokeInnRoom2/scripts.pory"
	release
	end


DevonShowFreetrial::
# 162 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_0
# 165 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, DevonShowFreetrial_Text_1, DevonShowFreetrial_Text_2, DevonShowFreetrial_Text_3, DevonShowFreetrial_Text_4
# 167 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DevonShowFreetrial_2
DevonShowFreetrial_1:
# 169 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonShowFreetrial_5
DevonShowFreetrial_4:
# 216 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonShowFreetrial_8
DevonShowFreetrial_7:
# 284 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonShowFreetrial_10
	return

DevonShowFreetrial_2:
# 167 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_1

DevonShowFreetrial_5:
# 171 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_5
# 172 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 173 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_6
# 176 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 177 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR, 10, 3
# 179 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_7
# 180 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 181 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 182 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_8
# 184 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 185 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MACHAMP, 10, 3
# 186 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_9
# 187 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 188 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 189 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_10
# 190 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ATTRACT
# 191 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR_MEGA, 10, 3
# 192 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 193 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_11
# 195 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 196 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_12
# 198 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 199 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_13
# 201 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_14
# 202 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_FLEE
# 203 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_15
# 205 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 206 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_16
# 208 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 209 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_FLEE
# 210 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 211 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_17
	goto DevonShowFreetrial_4

DevonShowFreetrial_8:
# 218 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 219 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 220 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_18
# 224 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_SCRAFTY, CRY_MODE_NORMAL
# 225 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_19
# 227 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 228 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 229 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_20
# 231 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8004, 2
# 232 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8005, 6
# 233 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8006, 4
# 234 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8007, 4
# 235 "data/maps/PokeInnRoom2/scripts.pory"
	special ShakeCamera
# 236 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 237 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_COMET_PUNCH
# 238 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_ALCREMIE_CLOVER, 10, 3
# 239 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_21
# 241 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 242 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 243 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_SCRAFTY, CRY_MODE_WEAK
# 244 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_22
# 246 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 247 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 248 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_23
# 250 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 251 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 252 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_24
# 255 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 256 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 257 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_25
# 260 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, DevonShowFreetrial_Text_26, DevonShowFreetrial_Text_27
# 262 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonShowFreetrial_13
DevonShowFreetrial_12:
# 277 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonShowFreetrial_15
	goto DevonShowFreetrial_7

DevonShowFreetrial_10:
# 286 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 287 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_32
# 291 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 292 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_33
# 294 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 295 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_34
# 298 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 299 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_35
# 302 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 303 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_36
# 306 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 307 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_37
# 310 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GLALIE_MEGA, 10, 3
# 311 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 312 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_38
# 316 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 317 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 318 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_39
	return

DevonShowFreetrial_13:
# 263 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 264 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_28
# 265 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 266 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DevonShowFreetrial_18
DevonShowFreetrial_17:
# 270 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DevonShowFreetrial_21
DevonShowFreetrial_20:
# 273 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 274 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_12

DevonShowFreetrial_15:
# 278 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_31
# 279 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_7

DevonShowFreetrial_18:
# 267 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_29
	goto DevonShowFreetrial_17

DevonShowFreetrial_21:
# 271 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_30
	goto DevonShowFreetrial_20


OldalePokeCenterInnPrograms::
# 325 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 326 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldalePokeCenterInnPrograms_Text_0, OldalePokeCenterInnPrograms_Text_1, OldalePokeCenterInnPrograms_Text_2, OldalePokeCenterInnPrograms_Text_3
# 329 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldalePokeCenterInnPrograms_2
OldalePokeCenterInnPrograms_1:
# 336 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldalePokeCenterInnPrograms_5
OldalePokeCenterInnPrograms_4:
# 353 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldalePokeCenterInnPrograms_11
OldalePokeCenterInnPrograms_10:
# 371 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldalePokeCenterInnPrograms_24
OldalePokeCenterInnPrograms_23:
# 376 "data/maps/PokeInnRoom2/scripts.pory"
	releaseall
	return

OldalePokeCenterInnPrograms_2:
# 330 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenshowatinnvisit, OldalePokeCenterInnPrograms_7
# 332 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_4
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_5:
# 337 "data/maps/PokeInnRoom2/scripts.pory"
	random 8
# 338 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 340 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 341 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_14
# 342 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_15
# 343 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, OldalePokeCenterInnPrograms_16
# 344 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, OldalePokeCenterInnPrograms_17
# 345 "data/maps/PokeInnRoom2/scripts.pory"
	case 4, OldalePokeCenterInnPrograms_18
# 346 "data/maps/PokeInnRoom2/scripts.pory"
	case 5, OldalePokeCenterInnPrograms_19
# 347 "data/maps/PokeInnRoom2/scripts.pory"
	case 6, OldalePokeCenterInnPrograms_20
# 348 "data/maps/PokeInnRoom2/scripts.pory"
	case 7, OldalePokeCenterInnPrograms_21
# 349 "data/maps/PokeInnRoom2/scripts.pory"
	case 8, OldalePokeCenterInnPrograms_22
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_7:
# 331 "data/maps/PokeInnRoom2/scripts.pory"
	goto DevonShowFreetrial
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_11:
# 354 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenweatheratinnvisit, OldalePokeCenterInnPrograms_26
# 368 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_5
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_14:
# 341 "data/maps/PokeInnRoom2/scripts.pory"
	goto OldaleWarehouseNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_15:
# 342 "data/maps/PokeInnRoom2/scripts.pory"
	goto JimmyNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_16:
# 343 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_17:
# 344 "data/maps/PokeInnRoom2/scripts.pory"
	goto PetalburgRiotNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_18:
# 345 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_19:
# 346 "data/maps/PokeInnRoom2/scripts.pory"
	goto DevonSpaceNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_20:
# 347 "data/maps/PokeInnRoom2/scripts.pory"
	goto MauvillePlantNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_21:
# 348 "data/maps/PokeInnRoom2/scripts.pory"
	goto RebelHarbourNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_22:
# 349 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route104LabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_24:
# 372 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto OldalePokeCenterInnPrograms_23

OldalePokeCenterInnPrograms_26:
# 355 "data/maps/PokeInnRoom2/scripts.pory"
	random 3
# 356 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 357 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 358 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_30
# 359 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_31
# 360 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, OldalePokeCenterInnPrograms_32
# 361 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, OldalePokeCenterInnPrograms_33
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_30:
# 358 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route103WeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_31:
# 359 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route102WeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_32:
# 360 "data/maps/PokeInnRoom2/scripts.pory"
	goto GreatCraterWeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_33:
# 361 "data/maps/PokeInnRoom2/scripts.pory"
	goto LandfillWeatherNews
	goto OldalePokeCenterInnPrograms_10


JimmyNews::
# 383 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 385 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyNews_2
JimmyNews_1:
# 395 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq JimmyNews_5
JimmyNews_4:
# 417 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

JimmyNews_2:
# 387 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_0
	goto JimmyNews_1

JimmyNews_5:
# 397 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, JimmyNews_7
# 407 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_2
	goto JimmyNews_4

JimmyNews_7:
# 398 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_1
	goto JimmyNews_4


OldaleWarehouseNews::
# 421 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 423 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWarehouseNews_2
OldaleWarehouseNews_1:
# 431 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_gt OldaleWarehouseNews_5
OldaleWarehouseNews_4:
# 457 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

OldaleWarehouseNews_2:
# 425 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_0
	goto OldaleWarehouseNews_1

OldaleWarehouseNews_5:
# 434 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_1
# 438 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 440 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseNews_8
OldaleWarehouseNews_7:
# 448 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseNews_10
	goto OldaleWarehouseNews_4

OldaleWarehouseNews_8:
# 442 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_2
	goto OldaleWarehouseNews_7

OldaleWarehouseNews_10:
# 450 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_3
	goto OldaleWarehouseNews_4


PetalburgRiotNews::
# 464 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 465 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, PetalburgRiotNews_2
# 475 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_1
PetalburgRiotNews_1:
# 483 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

PetalburgRiotNews_2:
# 468 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_0
	goto PetalburgRiotNews_1


LittlerootLabNews::
# 489 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 490 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, LittlerootLabNews_2
# 504 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_1
LittlerootLabNews_1:
# 505 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

LittlerootLabNews_2:
# 493 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_0
	goto LittlerootLabNews_1


DevonSpaceNews::
# 510 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 511 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonSpaceNews_Text_0
# 518 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


MauvillePlantNews::
# 524 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 525 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox MauvillePlantNews_Text_0
# 533 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


RebelHarbourNews::
# 539 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 540 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq RebelHarbourNews_2
RebelHarbourNews_1:
# 552 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq RebelHarbourNews_5
RebelHarbourNews_4:
# 557 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

RebelHarbourNews_2:
# 543 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_0
	goto RebelHarbourNews_1

RebelHarbourNews_5:
# 555 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_1
	goto RebelHarbourNews_4


Route104LabNews::
# 564 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 565 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq Route104LabNews_2
Route104LabNews_1:
# 577 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq Route104LabNews_5
Route104LabNews_4:
# 590 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

Route104LabNews_2:
# 568 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_0
	goto Route104LabNews_1

Route104LabNews_5:
# 580 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_1
	goto Route104LabNews_4


Route103WeatherNews::
# 597 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_RAIN_DANCE
# 598 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route103WeatherNews_Text_0
# 601 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 1
# 603 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 604 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


Route102WeatherNews::
# 608 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SANDSTORM
# 609 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route102WeatherNews_Text_0
# 613 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 1
# 614 "data/maps/PokeInnRoom2/scripts.pory"
	clearflag route102weathermon
# 615 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 616 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


GreatCraterWeatherNews::
# 621 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox GreatCraterWeatherNews_Text_0
# 626 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 1
# 628 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 629 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


LandfillWeatherNews::
# 634 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LandfillWeatherNews_Text_0
# 638 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 1
# 640 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 641 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DLCInnBedTime::
# 645 "data/maps/PokeInnRoom2/scripts.pory"
	lockall
# 646 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DLCInnBedTime_Text_0, MSGBOX_YESNO
# 647 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DLCInnBedTime_2
DLCInnBedTime_1:
# 677 "data/maps/PokeInnRoom2/scripts.pory"
	releaseall
	return

DLCInnBedTime_2:
# 648 "data/maps/PokeInnRoom2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 649 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DLCInnBedTime_Text_1
# 650 "data/maps/PokeInnRoom2/scripts.pory"
	special StartWallClock
# 651 "data/maps/PokeInnRoom2/scripts.pory"
	waitstate
# 652 "data/maps/PokeInnRoom2/scripts.pory"
	fadeoutbgm 1
# 653 "data/maps/PokeInnRoom2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 654 "data/maps/PokeInnRoom2/scripts.pory"
	playse MUS_HEAL
# 655 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 656 "data/maps/PokeInnRoom2/scripts.pory"
	random 4
# 657 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 659 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 660 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, DLCInnBedTime_6
# 661 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, DLCInnBedTime_7
# 662 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, DLCInnBedTime_8
# 663 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, DLCInnBedTime_9
DLCInnBedTime_4:
# 665 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUCCESS
# 666 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 667 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUCCESS
# 668 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 669 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUCCESS
# 670 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 671 "data/maps/PokeInnRoom2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 672 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DLCInnBedTime_Text_2
# 673 "data/maps/PokeInnRoom2/scripts.pory"
	fadeinbgm 1
# 674 "data/maps/PokeInnRoom2/scripts.pory"
	playbgm MUS_GAMEOVER, TRUE
	goto DLCInnBedTime_1

DLCInnBedTime_6:
# 660 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
	goto DLCInnBedTime_4

DLCInnBedTime_7:
# 661 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 3
	goto DLCInnBedTime_4

DLCInnBedTime_8:
# 662 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 3
	goto DLCInnBedTime_4

DLCInnBedTime_9:
# 663 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 3
	goto DLCInnBedTime_4


DevonInnSignAboutFreezer_Text_0:
# 23 "data/maps/PokeInnRoom2/scripts.pory"
	.string "With each visit, remember to check the\n"
	.string "freezer for a free drink!$"

DevonInnLamp_Text_0:
# 29 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The drawers are empty.$"

DevonInnTrashCan_Text_0:
# 35 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The trash can is empty.$"

DevonInnSink_Text_0:
# 41 "data/maps/PokeInnRoom2/scripts.pory"
	.string "A simple and clean sink, equipped with\n"
	.string "some toiletries.$"

DevonInnSink_Text_1:
# 44 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Drink water$"

DevonInnSink_Text_2:
# 44 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Wash face$"

DevonInnSink_Text_3:
# 44 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Brush teeth$"

DevonInnSink_Text_4:
# 44 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Shave$"

DevonInnSink_Text_5:
# 44 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Nothing$"

DevonInnSink_Text_6:
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Brush hair$"

DevonInnSink_Text_7:
# 54 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Haaa...$"

DevonInnSink_Text_8:
# 70 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Feeling refreshed now.$"

DevonInnSink_Text_9:
# 85 "data/maps/PokeInnRoom2/scripts.pory"
	.string "They're clean like a Clamperl.$"

DevonInnSink_Text_10:
# 102 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Smooth like a Mudkip's belly.$"

DevonInnSink_Text_11:
# 113 "data/maps/PokeInnRoom2/scripts.pory"
	.string "... slightly more presentable.$"

DevonInnFreezer_Text_0:
# 125 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There's a single drink in the freezer,\n"
	.string "behind a huge 'free' note...$"

DevonInnFreezer_Text_1:
# 138 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There's no more drinks in the freezer.$"

WallClock_Text_0:
# 148 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The time is\n"
	.string "{STR_VAR_1}:{STR_VAR_2}.$"

DevonShowFreetrial_Text_0:
# 162 "data/maps/PokeInnRoom2/scripts.pory"
	.string "This is a Devon Show's Free Trial! You\n"
	.string "may watch these episodes from Devon\l"
	.string "Shows for free!\p"
	.string "Which one would you like to watch?$"

DevonShowFreetrial_Text_1:
# 165 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Love is Danger, Episode 8$"

DevonShowFreetrial_Text_2:
# 165 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The Adventures of Super Substitute, Episode 34$"

DevonShowFreetrial_Text_3:
# 165 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Gabby's Talk Show, Episode 18$"

DevonShowFreetrial_Text_4:
# 165 "data/maps/PokeInnRoom2/scripts.pory"
	.string "None$"

DevonShowFreetrial_Text_5:
# 171 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Love is Danger, Episode 8: Till Pokémon\n"
	.string "do us part$"

DevonShowFreetrial_Text_6:
# 173 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Dear, I've reached my limit!\p"
	.string "Our marriage is falling apart, and I'm\n"
	.string "tired of pretending otherwise!\p"
	.string "We don't talk like we used to since…\n"
	.string "since…{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_7:
# 179 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Since your Kirlia evolved into\n"
	.string "Gardevoir!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_8:
# 182 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Huh!? Don't blame this on her! This all\n"
	.string "started when you- you...!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_9:
# 186 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}When you received that Machamp from a\n"
	.string "trade!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_10:
# 189 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}That's rich - you are such a…! Huh?\n"
	.string "W-wait… what's happening…? {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_11:
# 193 "data/maps/PokeInnRoom2/scripts.pory"
	.string "...!$"

DevonShowFreetrial_Text_12:
# 196 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}G-Gardette, why are you looking at him\n"
	.string "like that!?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_13:
# 199 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Machote, you too - you've never held me\n"
	.string "like that before…! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_14:
# 201 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}O-oh, oh no... what are they doing!? I-I\n"
	.string "can't watch this anymore!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_15:
# 203 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}UWAAAAH!!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_16:
# 206 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Devon was right… Pokémon… they can't\n"
	.string "be trusted! Darling, wait!!” {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_17:
# 211 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Will this steamy incident increase the\n"
	.string "gap between our protanist couple…?\p"
	.string "Or will it serve as the patch needed to\n"
	.string "repair their relationship!?\p"
	.string "Find out more in the next episode of\n"
	.string "'Love is Danger!' Only under Devon Shows\l"
	.string "subscription!$"

DevonShowFreetrial_Text_18:
# 220 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}It's the end of the line, Super\n"
	.string "Substitute! We have the Super Stones\p"
	.string "With them, we will be able to Super\n"
	.string "Evolve, and become the most powerful\l"
	.string "and DANGEROUS Pokémon in all the world!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_19:
# 225 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}BWAA-HA-HA-HA!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_20:
# 229 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Not if I can help it, Swaggy the\n"
	.string "Scrafty! Special Technique...{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_21:
# 239 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}SELF-DEFENSE STRIKE!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_22:
# 244 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}W-WAAH! Wait, how is that\n"
	.string "self-defense!? We didn't even attack\l"
	.string "you yet!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_23:
# 248 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}You silly Swaggy! Striking evil foes is\n"
	.string "always in self-defense!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_24:
# 252 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Grr… if only I had taken a course on a\n"
	.string "Devon Learning Center... {COLOR LIGHT_GRAY}{SHADOW WHITE}applications\l"
	.string "open now...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "{COLOR RED}I would be smart enough to know that!\p"
	.string "But it doesn't matter - gang, let's\n"
	.string "SUPER EVOLVE! ORYAAAH…!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_25:
# 257 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Oh no! People at home, we must stop\n"
	.string "Swaggy and his gang from Super\l"
	.string "Evolving!\p"
	.string "You know what to do - cheer me up! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_26:
# 260 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Go, Super Substitute!$"

DevonShowFreetrial_Text_27:
# 260 "data/maps/PokeInnRoom2/scripts.pory"
	.string "...$"

DevonShowFreetrial_Text_28:
# 264 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{PLAYER} yells at the TV…!$"

DevonShowFreetrial_Text_29:
# 267 "data/maps/PokeInnRoom2/scripts.pory"
	.string "He feels so embarrased, he switches it\n"
	.string "off instantly.$"

DevonShowFreetrial_Text_30:
# 271 "data/maps/PokeInnRoom2/scripts.pory"
	.string "She feels so embarrased, she switches\n"
	.string "it off instantly.$"

DevonShowFreetrial_Text_31:
# 278 "data/maps/PokeInnRoom2/scripts.pory"
	.string "... that's enough cartoons for today.$"

DevonShowFreetrial_Text_32:
# 287 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Welcome to Gabby's Talk Show! We are\n"
	.string "here tonight with miss Glacia, former\l"
	.string "Hoenn Elite Four, and now one of the\l"
	.string "most accomplished Admins of Devon Co.\p"
	.string "It's a pleasure to have you, miss Glacia.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_33:
# 292 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}The pleasure is mine, Gabby. Glacia will\n"
	.string "do.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_34:
# 295 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Thank you, Glacia! Now, I believe\n"
	.string "everyone at home must be wondering…\p"
	.string "What's your secret for looking JUST like\n"
	.string "you looked 30 years ago!?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_35:
# 299 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Hm, I never thought about that…\n"
	.string "perhaps it's being around ice Pokémon.\p"
	.string "They say cold conserves, doesn't it?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_36:
# 303 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Hehe - that's so true!\p"
	.string "And that remark is the perfect segway\n"
	.string "for our first commercial break!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_37:
# 307 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}... already?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_38:
# 312 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Glalie's. The only skincare product\n"
	.string "you'll ever need.\p"
	.string "This soothing cream will leave your face\n"
	.string "smooth like a Spheal's - or pokeyen\l"
	.string "returned! Glalie's. Let time slide you by\l"
	.string "like fresh ice.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_39:
# 318 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Looks like this is the firt of many ads\n"
	.string "to come... better get going.$"

OldalePokeCenterInnPrograms_Text_0:
# 326 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon News$"

OldalePokeCenterInnPrograms_Text_1:
# 326 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Channel$"

OldalePokeCenterInnPrograms_Text_2:
# 326 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon Shows$"

OldalePokeCenterInnPrograms_Text_3:
# 326 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Don't watch TV$"

OldalePokeCenterInnPrograms_Text_4:
# 332 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The Devon Shows' Free Trial has been\n"
	.string "claimed on this inn visit.$"

OldalePokeCenterInnPrograms_Text_5:
# 368 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The weather broadcast has ended...$"

JimmyNews_Text_0:
# 387 "data/maps/PokeInnRoom2/scripts.pory"
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
# 398 "data/maps/PokeInnRoom2/scripts.pory"
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
# 407 "data/maps/PokeInnRoom2/scripts.pory"
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
# 425 "data/maps/PokeInnRoom2/scripts.pory"
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
# 434 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking News: our Verdooms have\n"
	.string "recently caught this footage of the\l"
	.string "Devon Warehouse of Oldale Town, where\l"
	.string "rebels can be seen leaving the facility\l"
	.string "in droves.$"

OldaleWarehouseNews_Text_2:
# 442 "data/maps/PokeInnRoom2/scripts.pory"
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
# 450 "data/maps/PokeInnRoom2/scripts.pory"
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
# 468 "data/maps/PokeInnRoom2/scripts.pory"
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
# 475 "data/maps/PokeInnRoom2/scripts.pory"
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
# 493 "data/maps/PokeInnRoom2/scripts.pory"
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
# 504 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after raid to the lab, another news!$"

DevonSpaceNews_Text_0:
# 511 "data/maps/PokeInnRoom2/scripts.pory"
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
# 525 "data/maps/PokeInnRoom2/scripts.pory"
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
# 543 "data/maps/PokeInnRoom2/scripts.pory"
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
# 555 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after foreign missions, INFORM ABOUT\n"
	.string "THEM!$"

Route104LabNews_Text_0:
# 568 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We continue with more insight into the\n"
	.string "latest issue of the Safemon Progress\l"
	.string "Report that Devon Co. recently\l"
	.string "published.\p"
	.string "The metrics place the Devon Lab in\n"
	.string "Route 104 as one of the lead\l"
	.string "contributors to Safemon Research this\l"
	.string "past month, with 4 species successfully\l"
	.string "safened only this past week.\p"
	.string "In a recent interview, Lab Director\n"
	.string "Winston shared that 'Although the\l"
	.string "Rebel Zone can be a hazardous work\l"
	.string "environment, the abundance of regular\l"
	.string "Pokémon here has provided us with a\l"
	.string "satisfactory number of samples, which\l"
	.string "has contributed to our pace of\l"
	.string "research'.\p"
	.string "We wish our valiant and hard-working\n"
	.string "scientists the best of lucks in their\l"
	.string "noble endeavor of making Hoenn a safer\l"
	.string "place.$"

Route104LabNews_Text_1:
# 580 "data/maps/PokeInnRoom2/scripts.pory"
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
# 598 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Alert: We would like to inform\n"
	.string "of a heavy rainstorm now pouring over\l"
	.string "Route 103.\p"
	.string "The Weather Institute advises to keep\n"
	.string "clear of the river in that route, and\l"
	.string "travel through there only if it's\l"
	.string "absolutely necessary.$"

Route102WeatherNews_Text_0:
# 609 "data/maps/PokeInnRoom2/scripts.pory"
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
# 621 "data/maps/PokeInnRoom2/scripts.pory"
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
# 634 "data/maps/PokeInnRoom2/scripts.pory"
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

DLCInnBedTime_Text_0:
# 646 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Rest for a bit?$"

DLCInnBedTime_Text_1:
# 649 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Set the wristwatch's alarm to which\n"
	.string "time?$"

DLCInnBedTime_Text_2:
# 672 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{PLAYER} wakes up.$"
