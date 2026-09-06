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
# 107 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DevonInnSink_5
DevonInnSink_4:
# 161 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

DevonInnSink_2:
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, DevonInnSink_Text_1, DevonInnSink_Text_2, DevonInnSink_Text_3, DevonInnSink_Text_4, DevonInnSink_Text_5
# 48 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnSink_8
DevonInnSink_7:
# 59 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnSink_14
DevonInnSink_13:
# 74 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnSink_20
DevonInnSink_19:
# 89 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DevonInnSink_26
DevonInnSink_25:
# 103 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq DevonInnSink_31
	goto DevonInnSink_1

DevonInnSink_5:
# 107 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, DevonInnSink_Text_1, DevonInnSink_Text_2, DevonInnSink_Text_3, DevonInnSink_Text_10, DevonInnSink_Text_5
# 110 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnSink_11
DevonInnSink_10:
# 121 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnSink_17
DevonInnSink_16:
# 135 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnSink_23
DevonInnSink_22:
# 149 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DevonInnSink_29
DevonInnSink_28:
# 159 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq DevonInnSink_33
	goto DevonInnSink_4

DevonInnSink_8:
# 49 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 50 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 51 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 52 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 53 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 54 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ABSORB_2
# 55 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_6
	goto DevonInnSink_7

DevonInnSink_11:
# 111 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 112 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 113 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 114 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 115 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 116 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ABSORB_2
# 117 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_6
	goto DevonInnSink_10

DevonInnSink_14:
# 60 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 61 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 62 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 63 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 64 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DIVE
# 65 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 66 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 67 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 68 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 69 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_STAT_INCREASE
# 70 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_7
	goto DevonInnSink_13

DevonInnSink_17:
# 122 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 123 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 124 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 125 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 126 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DIVE
# 127 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 128 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ENCORE
# 129 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 130 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_STAT_INCREASE
# 131 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_7
	goto DevonInnSink_16

DevonInnSink_20:
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
	msgbox DevonInnSink_Text_8
	goto DevonInnSink_19

DevonInnSink_23:
# 136 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 137 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 138 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 139 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 140 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE3
# 141 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 142 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_A
# 143 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 144 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_BALLOON_BLUE
# 145 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 146 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_8
	goto DevonInnSink_22

DevonInnSink_26:
# 90 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_REPEL
# 91 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 92 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SCRATCH
# 93 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 94 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SCRATCH
# 95 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 96 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SCRATCH
# 97 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 98 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 99 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_9
	goto DevonInnSink_25

DevonInnSink_29:
# 150 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_REPEL
# 151 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 152 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_MIST
# 153 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 154 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_MIST
# 155 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 156 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_11
	goto DevonInnSink_28

DevonInnSink_31:
# 103 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonInnSink_1

DevonInnSink_33:
# 159 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonInnSink_4


DevonInnFreezer::
# 167 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 168 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset claimedinnfreedrink, DevonInnFreezer_2
# 182 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnFreezer_Text_1
DevonInnFreezer_1:
# 183 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

DevonInnFreezer_2:
# 169 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnFreezer_Text_0
# 170 "data/maps/PokeInnRoom2/scripts.pory"
	random 3
# 171 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 173 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 174 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, DevonInnFreezer_7
# 175 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, DevonInnFreezer_8
# 176 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, DevonInnFreezer_9
# 177 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, DevonInnFreezer_10
DevonInnFreezer_5:
# 179 "data/maps/PokeInnRoom2/scripts.pory"
	setflag claimedinnfreedrink
	goto DevonInnFreezer_1

DevonInnFreezer_7:
# 174 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_FRESH_WATER
	goto DevonInnFreezer_5

DevonInnFreezer_8:
# 175 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_SODA_POP
	goto DevonInnFreezer_5

DevonInnFreezer_9:
# 176 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_TEA
	goto DevonInnFreezer_5

DevonInnFreezer_10:
# 177 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_HEAL_POWDER
	goto DevonInnFreezer_5


WallClock::
# 187 "data/maps/PokeInnRoom2/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 188 "data/maps/PokeInnRoom2/scripts.pory"
	gettime
# 189 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 190 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8001
# 191 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8002
# 192 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox WallClock_Text_0
# 193 "data/maps/PokeInnRoom2/scripts.pory"
	release
	end


DevonShowFreetrial::
# 207 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_set watcheddevoninnshow, DevonShowFreetrial_1
# 211 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_1
# 214 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, DevonShowFreetrial_Text_2, DevonShowFreetrial_Text_3, DevonShowFreetrial_Text_4, DevonShowFreetrial_Text_5
# 216 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DevonShowFreetrial_5
DevonShowFreetrial_4:
# 218 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonShowFreetrial_8
DevonShowFreetrial_7:
# 269 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonShowFreetrial_11
DevonShowFreetrial_10:
# 339 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonShowFreetrial_13
	return

DevonShowFreetrial_1:
# 208 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_0
	return

DevonShowFreetrial_5:
# 216 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_4

DevonShowFreetrial_8:
# 219 "data/maps/PokeInnRoom2/scripts.pory"
	setflag watcheddevoninnshow
# 220 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_6
# 221 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 222 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_7
# 225 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 226 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR, 10, 3
# 228 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_8
# 229 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 230 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 231 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_9
# 233 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 234 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MACHAMP, 10, 3
# 235 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 236 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_10
# 237 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 238 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 239 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_11
# 240 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ATTRACT
# 241 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR_MEGA, 10, 3
# 242 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 243 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_12
# 245 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 246 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_13
# 248 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 249 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_14
# 250 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ATTRACT2
# 251 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 252 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_15
# 253 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_FLEE
# 254 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 255 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_16
# 257 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 258 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_17
# 260 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 261 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_FLEE
# 262 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 263 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_18
# 266 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_7

DevonShowFreetrial_11:
# 270 "data/maps/PokeInnRoom2/scripts.pory"
	setflag watcheddevoninnshow
# 271 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 272 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 274 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_19
# 278 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_SCRAFTY, CRY_MODE_NORMAL
# 279 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_20
# 280 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 281 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 282 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 283 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_21
# 285 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8004, 2
# 286 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8005, 6
# 287 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8006, 4
# 288 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8007, 4
# 289 "data/maps/PokeInnRoom2/scripts.pory"
	special ShakeCamera
# 290 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 291 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_COMET_PUNCH
# 292 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_ALCREMIE_CLOVER, 10, 3
# 293 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_22
# 294 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 295 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 296 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 297 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_SCRAFTY, CRY_MODE_WEAK
# 298 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_23
# 299 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 300 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 301 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 302 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_24
# 303 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 304 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 305 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 306 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_25
# 308 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 309 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 310 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 311 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_PIN
# 312 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_26
# 314 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 315 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, DevonShowFreetrial_Text_27, DevonShowFreetrial_Text_28
# 317 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonShowFreetrial_16
DevonShowFreetrial_15:
# 332 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonShowFreetrial_18
	goto DevonShowFreetrial_10

DevonShowFreetrial_13:
# 340 "data/maps/PokeInnRoom2/scripts.pory"
	setflag watcheddevoninnshow
# 341 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 342 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_33
# 346 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 347 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_34
# 349 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 350 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_35
# 353 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 354 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_36
# 357 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 358 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_37
# 361 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 362 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_38
# 365 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GLALIE_MEGA, 10, 3
# 366 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 367 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_39
# 371 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 372 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 373 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_40
	return

DevonShowFreetrial_16:
# 318 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 319 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_29
# 320 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 321 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DevonShowFreetrial_21
DevonShowFreetrial_20:
# 325 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DevonShowFreetrial_24
DevonShowFreetrial_23:
# 328 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 329 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_15

DevonShowFreetrial_18:
# 333 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_32
# 334 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_10

DevonShowFreetrial_21:
# 322 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_30
	goto DevonShowFreetrial_20

DevonShowFreetrial_24:
# 326 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_31
	goto DevonShowFreetrial_23


OldalePokeCenterInnPrograms::
# 380 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 381 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldalePokeCenterInnPrograms_Text_0, OldalePokeCenterInnPrograms_Text_1, OldalePokeCenterInnPrograms_Text_2, OldalePokeCenterInnPrograms_Text_3
# 384 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldalePokeCenterInnPrograms_2
OldalePokeCenterInnPrograms_1:
# 391 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldalePokeCenterInnPrograms_5
OldalePokeCenterInnPrograms_4:
# 408 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldalePokeCenterInnPrograms_11
OldalePokeCenterInnPrograms_10:
# 426 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldalePokeCenterInnPrograms_24
OldalePokeCenterInnPrograms_23:
# 431 "data/maps/PokeInnRoom2/scripts.pory"
	releaseall
	return

OldalePokeCenterInnPrograms_2:
# 385 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenshowatinnvisit, OldalePokeCenterInnPrograms_7
# 387 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_4
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_5:
# 392 "data/maps/PokeInnRoom2/scripts.pory"
	random 8
# 393 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 395 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 396 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_14
# 397 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_15
# 398 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, OldalePokeCenterInnPrograms_16
# 399 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, OldalePokeCenterInnPrograms_17
# 400 "data/maps/PokeInnRoom2/scripts.pory"
	case 4, OldalePokeCenterInnPrograms_18
# 401 "data/maps/PokeInnRoom2/scripts.pory"
	case 5, OldalePokeCenterInnPrograms_19
# 402 "data/maps/PokeInnRoom2/scripts.pory"
	case 6, OldalePokeCenterInnPrograms_20
# 403 "data/maps/PokeInnRoom2/scripts.pory"
	case 7, OldalePokeCenterInnPrograms_21
# 404 "data/maps/PokeInnRoom2/scripts.pory"
	case 8, OldalePokeCenterInnPrograms_22
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_7:
# 386 "data/maps/PokeInnRoom2/scripts.pory"
	goto DevonShowFreetrial
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_11:
# 409 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenweatheratinnvisit, OldalePokeCenterInnPrograms_26
# 423 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_5
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_14:
# 396 "data/maps/PokeInnRoom2/scripts.pory"
	goto OldaleWarehouseNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_15:
# 397 "data/maps/PokeInnRoom2/scripts.pory"
	goto JimmyNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_16:
# 398 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_17:
# 399 "data/maps/PokeInnRoom2/scripts.pory"
	goto PetalburgRiotNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_18:
# 400 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_19:
# 401 "data/maps/PokeInnRoom2/scripts.pory"
	goto DevonSpaceNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_20:
# 402 "data/maps/PokeInnRoom2/scripts.pory"
	goto MauvillePlantNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_21:
# 403 "data/maps/PokeInnRoom2/scripts.pory"
	goto RebelHarbourNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_22:
# 404 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route104LabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_24:
# 427 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto OldalePokeCenterInnPrograms_23

OldalePokeCenterInnPrograms_26:
# 410 "data/maps/PokeInnRoom2/scripts.pory"
	random 3
# 411 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 412 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 413 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_30
# 414 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_31
# 415 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, OldalePokeCenterInnPrograms_32
# 416 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, OldalePokeCenterInnPrograms_33
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_30:
# 413 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route103WeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_31:
# 414 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route102WeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_32:
# 415 "data/maps/PokeInnRoom2/scripts.pory"
	goto GreatCraterWeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_33:
# 416 "data/maps/PokeInnRoom2/scripts.pory"
	goto LandfillWeatherNews
	goto OldalePokeCenterInnPrograms_10


JimmyNews::
# 438 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 440 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyNews_2
JimmyNews_1:
# 450 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq JimmyNews_5
JimmyNews_4:
# 472 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

JimmyNews_2:
# 442 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_0
	goto JimmyNews_1

JimmyNews_5:
# 452 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, JimmyNews_7
# 462 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_2
	goto JimmyNews_4

JimmyNews_7:
# 453 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_1
	goto JimmyNews_4


OldaleWarehouseNews::
# 476 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 478 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq OldaleWarehouseNews_2
OldaleWarehouseNews_1:
# 486 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_gt OldaleWarehouseNews_5
OldaleWarehouseNews_4:
# 512 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

OldaleWarehouseNews_2:
# 480 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_0
	goto OldaleWarehouseNews_1

OldaleWarehouseNews_5:
# 489 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_1
# 493 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 495 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseNews_8
OldaleWarehouseNews_7:
# 503 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseNews_10
	goto OldaleWarehouseNews_4

OldaleWarehouseNews_8:
# 497 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_2
	goto OldaleWarehouseNews_7

OldaleWarehouseNews_10:
# 505 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_3
	goto OldaleWarehouseNews_4


PetalburgRiotNews::
# 519 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 520 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, PetalburgRiotNews_2
# 530 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_1
PetalburgRiotNews_1:
# 538 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

PetalburgRiotNews_2:
# 523 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_0
	goto PetalburgRiotNews_1


LittlerootLabNews::
# 544 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 545 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, LittlerootLabNews_2
# 559 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_1
LittlerootLabNews_1:
# 560 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

LittlerootLabNews_2:
# 548 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_0
	goto LittlerootLabNews_1


DevonSpaceNews::
# 565 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 566 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonSpaceNews_Text_0
# 573 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


MauvillePlantNews::
# 579 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 580 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox MauvillePlantNews_Text_0
# 588 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


RebelHarbourNews::
# 594 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 595 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq RebelHarbourNews_2
RebelHarbourNews_1:
# 607 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq RebelHarbourNews_5
RebelHarbourNews_4:
# 612 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

RebelHarbourNews_2:
# 598 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_0
	goto RebelHarbourNews_1

RebelHarbourNews_5:
# 610 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_1
	goto RebelHarbourNews_4


Route104LabNews::
# 619 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 620 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq Route104LabNews_2
Route104LabNews_1:
# 632 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq Route104LabNews_5
Route104LabNews_4:
# 645 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

Route104LabNews_2:
# 623 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_0
	goto Route104LabNews_1

Route104LabNews_5:
# 635 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_1
	goto Route104LabNews_4


Route103WeatherNews::
# 652 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_RAIN_DANCE
# 653 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route103WeatherNews_Text_0
# 656 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 1
# 658 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 659 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


Route102WeatherNews::
# 663 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SANDSTORM
# 664 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route102WeatherNews_Text_0
# 668 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 1
# 669 "data/maps/PokeInnRoom2/scripts.pory"
	clearflag route102weathermon
# 670 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 671 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


GreatCraterWeatherNews::
# 676 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox GreatCraterWeatherNews_Text_0
# 681 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 1
# 683 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 684 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


LandfillWeatherNews::
# 689 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LandfillWeatherNews_Text_0
# 693 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 1
# 695 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 696 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DLCInnBedTime::
# 700 "data/maps/PokeInnRoom2/scripts.pory"
	lockall
# 701 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DLCInnBedTime_Text_0, MSGBOX_YESNO
# 702 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DLCInnBedTime_2
DLCInnBedTime_1:
# 732 "data/maps/PokeInnRoom2/scripts.pory"
	releaseall
	return

DLCInnBedTime_2:
# 703 "data/maps/PokeInnRoom2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 704 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DLCInnBedTime_Text_1
# 705 "data/maps/PokeInnRoom2/scripts.pory"
	special StartWallClock
# 706 "data/maps/PokeInnRoom2/scripts.pory"
	waitstate
# 707 "data/maps/PokeInnRoom2/scripts.pory"
	fadeoutbgm 1
# 708 "data/maps/PokeInnRoom2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 709 "data/maps/PokeInnRoom2/scripts.pory"
	playse MUS_HEAL
# 710 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 711 "data/maps/PokeInnRoom2/scripts.pory"
	random 4
# 712 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 714 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 715 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, DLCInnBedTime_6
# 716 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, DLCInnBedTime_7
# 717 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, DLCInnBedTime_8
# 718 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, DLCInnBedTime_9
DLCInnBedTime_4:
# 720 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUCCESS
# 721 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 722 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUCCESS
# 723 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 724 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUCCESS
# 725 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 726 "data/maps/PokeInnRoom2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 727 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DLCInnBedTime_Text_2
# 728 "data/maps/PokeInnRoom2/scripts.pory"
	fadeinbgm 1
# 729 "data/maps/PokeInnRoom2/scripts.pory"
	playbgm MUS_GAMEOVER, TRUE
	goto DLCInnBedTime_1

DLCInnBedTime_6:
# 715 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
	goto DLCInnBedTime_4

DLCInnBedTime_7:
# 716 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 3
	goto DLCInnBedTime_4

DLCInnBedTime_8:
# 717 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 3
	goto DLCInnBedTime_4

DLCInnBedTime_9:
# 718 "data/maps/PokeInnRoom2/scripts.pory"
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
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Drink water$"

DevonInnSink_Text_2:
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Wash face$"

DevonInnSink_Text_3:
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Brush teeth$"

DevonInnSink_Text_4:
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Shave$"

DevonInnSink_Text_5:
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Nothing$"

DevonInnSink_Text_6:
# 55 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Haaa...$"

DevonInnSink_Text_7:
# 70 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Feeling refreshed now.$"

DevonInnSink_Text_8:
# 85 "data/maps/PokeInnRoom2/scripts.pory"
	.string "They're clean like a Clamperl.$"

DevonInnSink_Text_9:
# 99 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Smooth like a Mudkip's belly.$"

DevonInnSink_Text_10:
# 107 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Brush hair$"

DevonInnSink_Text_11:
# 156 "data/maps/PokeInnRoom2/scripts.pory"
	.string "... slightly more presentable.$"

DevonInnFreezer_Text_0:
# 169 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There's a single drink in the freezer,\n"
	.string "behind a huge 'FOR FREE' note...$"

DevonInnFreezer_Text_1:
# 182 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There's no more drinks in the freezer.$"

WallClock_Text_0:
# 192 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The time is\n"
	.string "{STR_VAR_1}:{STR_VAR_2}.$"

DevonShowFreetrial_Text_0:
# 208 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Your Devon Show Free Trial has timed\n"
	.string "out. Please come back later.$"

DevonShowFreetrial_Text_1:
# 211 "data/maps/PokeInnRoom2/scripts.pory"
	.string "This is a Devon Show's Free Trial! You\n"
	.string "may watch one of these episodes from\l"
	.string "Devon Shows for free!\p"
	.string "Which one would you like to watch?$"

DevonShowFreetrial_Text_2:
# 214 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Love is Danger, Episode 8$"

DevonShowFreetrial_Text_3:
# 214 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Super Sub Adventures, Episode 34$"

DevonShowFreetrial_Text_4:
# 214 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Gabby's Talk Show, Episode 18$"

DevonShowFreetrial_Text_5:
# 214 "data/maps/PokeInnRoom2/scripts.pory"
	.string "None$"

DevonShowFreetrial_Text_6:
# 220 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Love is Danger, Episode 8: Till Pokémon\n"
	.string "do us part.$"

DevonShowFreetrial_Text_7:
# 222 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Dear, I've reached my limit!\p"
	.string "Our marriage is falling apart, and I'm\n"
	.string "tired of pretending otherwise!\p"
	.string "We don't talk like we used to since…\n"
	.string "since…{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_8:
# 228 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Since your Kirlia evolved into\n"
	.string "Gardevoir!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_9:
# 231 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Huh!? Don't blame this on her! This all\n"
	.string "started when you- you...!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_10:
# 236 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}When you received that Machamp from a\n"
	.string "trade!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_11:
# 239 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}That's rich - you are such a…! Huh?\n"
	.string "W-wait… what's happening…? {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_12:
# 243 "data/maps/PokeInnRoom2/scripts.pory"
	.string "...!$"

DevonShowFreetrial_Text_13:
# 246 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}G-Gardette, why are you looking at him\n"
	.string "like that!?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_14:
# 249 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Machote, you too - you've never held me\n"
	.string "like that before…! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_15:
# 252 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}O-oh, oh no... what are they doing!? I-I\n"
	.string "can't watch this anymore!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_16:
# 255 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}UWAAAAH!!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_17:
# 258 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Devon was right… Pokémon… they can't\n"
	.string "be trusted! Darling, wait!! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_18:
# 263 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Will this steamy incident increase the\n"
	.string "gap between our protanist couple…?\p"
	.string "Or will it serve as the patch needed to\n"
	.string "repair their relationship!?\p"
	.string "Find out more in the next episode of\n"
	.string "'Love is Danger!' Only on Devon Shows!$"

DevonShowFreetrial_Text_19:
# 274 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}It's the end of the line, Super\n"
	.string "Substitute! We have the Super Stones!\p"
	.string "With them, we will be able to Super\n"
	.string "Evolve, and become the most powerful\l"
	.string "and DANGEROUS Pokémon in all the world!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_20:
# 279 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}BWAA-HA-HA-HA!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_21:
# 283 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Not if I can help it, Swaggy the\n"
	.string "Scrafty! Special Technique...{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_22:
# 293 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}SELF-DEFENSE STRIKE!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_23:
# 298 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}W-WAAH! Wait, how is that\n"
	.string "self-defense!? We didn't even attack\l"
	.string "you yet!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_24:
# 302 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}You silly Swaggy! Striking evil foes is\n"
	.string "always in self-defense!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_25:
# 306 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Grr… if only I had taken a course on a\n"
	.string "Devon Learning Center... {COLOR LIGHT_GRAY}{SHADOW WHITE}applications\l"
	.string "open now...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "{COLOR RED}I would be smart enough to know that!\p"
	.string "But it doesn't matter - gang, let's\n"
	.string "SUPER EVOLVE! ORYAAAH…!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_26:
# 312 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Oh no! People at home, we must stop\n"
	.string "Swaggy and his gang from Super\l"
	.string "Evolving!\p"
	.string "You know what to do - cheer me up! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_27:
# 315 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Go, Super Substitute!$"

DevonShowFreetrial_Text_28:
# 315 "data/maps/PokeInnRoom2/scripts.pory"
	.string "...$"

DevonShowFreetrial_Text_29:
# 319 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{PLAYER} yells at the TV…!$"

DevonShowFreetrial_Text_30:
# 322 "data/maps/PokeInnRoom2/scripts.pory"
	.string "He feels so embarrased, he switches it\n"
	.string "off instantly.$"

DevonShowFreetrial_Text_31:
# 326 "data/maps/PokeInnRoom2/scripts.pory"
	.string "She feels so embarrased, she switches\n"
	.string "it off instantly.$"

DevonShowFreetrial_Text_32:
# 333 "data/maps/PokeInnRoom2/scripts.pory"
	.string "... that's enough cartoons for today.$"

DevonShowFreetrial_Text_33:
# 342 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Welcome to Gabby's Talk Show! We are\n"
	.string "here tonight with miss Glacia, former\l"
	.string "Hoenn Elite Four, and now one of the\l"
	.string "most accomplished Admins of Devon Co.\p"
	.string "It's a pleasure to have you, miss Glacia.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_34:
# 347 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}The pleasure is mine, Gabby. Glacia will\n"
	.string "do.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_35:
# 350 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Thank you, Glacia! Now, I believe\n"
	.string "everyone at home must be wondering…\p"
	.string "What's your secret for looking JUST like\n"
	.string "you looked 30 years ago!?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_36:
# 354 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Hm, I never thought about that…\n"
	.string "perhaps it's being around ice Pokémon.\p"
	.string "They say cold conserves, doesn't it?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_37:
# 358 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Hehe - that's so true!\p"
	.string "And that remark is the perfect segway\n"
	.string "for our first commercial break!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_38:
# 362 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}... already?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_39:
# 367 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Glalie's. The only skincare product\n"
	.string "you'll ever need.\p"
	.string "This soothing cream will leave your face\n"
	.string "smooth like a Spheal's - or pokeyen\l"
	.string "returned! Glalie's. Let time slide you by\l"
	.string "like fresh ice.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_40:
# 373 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Looks like this is the firt of many ads\n"
	.string "to come... better get going.$"

OldalePokeCenterInnPrograms_Text_0:
# 381 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon News$"

OldalePokeCenterInnPrograms_Text_1:
# 381 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Channel$"

OldalePokeCenterInnPrograms_Text_2:
# 381 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon Shows$"

OldalePokeCenterInnPrograms_Text_3:
# 381 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Don't watch TV$"

OldalePokeCenterInnPrograms_Text_4:
# 387 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The Devon Shows' Free Trial has been\n"
	.string "claimed on this inn visit.$"

OldalePokeCenterInnPrograms_Text_5:
# 423 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The weather broadcast has ended...$"

JimmyNews_Text_0:
# 442 "data/maps/PokeInnRoom2/scripts.pory"
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
# 453 "data/maps/PokeInnRoom2/scripts.pory"
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
# 462 "data/maps/PokeInnRoom2/scripts.pory"
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
# 480 "data/maps/PokeInnRoom2/scripts.pory"
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
# 489 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking News: our Verdooms have\n"
	.string "recently caught this footage of the\l"
	.string "Devon Warehouse of Oldale Town, where\l"
	.string "rebels can be seen leaving the facility\l"
	.string "in droves.$"

OldaleWarehouseNews_Text_2:
# 497 "data/maps/PokeInnRoom2/scripts.pory"
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
# 505 "data/maps/PokeInnRoom2/scripts.pory"
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
# 523 "data/maps/PokeInnRoom2/scripts.pory"
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
# 530 "data/maps/PokeInnRoom2/scripts.pory"
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
# 548 "data/maps/PokeInnRoom2/scripts.pory"
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
# 559 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after raid to the lab, another news!$"

DevonSpaceNews_Text_0:
# 566 "data/maps/PokeInnRoom2/scripts.pory"
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
# 580 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Next up, we bring you some unfortunate\n"
	.string "news.\p"
	.string "An accident in Mauville's Nuclear Plant\n"
	.string "has claimed the lifes of 7 dozen Devon\l"
	.string "workers and 5 Safemon.\p"
	.string "Many others have been injured, and some\n"
	.string "are in critical condition.\p"
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
# 598 "data/maps/PokeInnRoom2/scripts.pory"
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
# 610 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after foreign missions, INFORM ABOUT\n"
	.string "THEM!$"

Route104LabNews_Text_0:
# 623 "data/maps/PokeInnRoom2/scripts.pory"
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
# 635 "data/maps/PokeInnRoom2/scripts.pory"
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
# 653 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Alert: We would like to inform\n"
	.string "of a heavy rainstorm now pouring over\l"
	.string "Route 103.\p"
	.string "The Weather Institute advises to keep\n"
	.string "clear of the river in that route, and\l"
	.string "travel through there only if it's\l"
	.string "absolutely necessary.$"

Route102WeatherNews_Text_0:
# 664 "data/maps/PokeInnRoom2/scripts.pory"
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
# 676 "data/maps/PokeInnRoom2/scripts.pory"
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
# 689 "data/maps/PokeInnRoom2/scripts.pory"
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
# 701 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Rest for a bit?$"

DLCInnBedTime_Text_1:
# 704 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Set the wristwatch's alarm to which\n"
	.string "time?$"

DLCInnBedTime_Text_2:
# 727 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{PLAYER} wakes up.$"
