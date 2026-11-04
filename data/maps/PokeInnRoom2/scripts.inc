# 1 "data/maps/PokeInnRoom2/scripts.pory"


PokeInnRoom2_MapScripts::
# 9 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokeInnRoom2MapScriptBundle
# 10 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokeInnRoom2MapScriptBundle
# 11 "data/maps/PokeInnRoom2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokeInnRoom2MapScriptBundle
	.byte 0


PokeInnRoom2MapScriptBundle::
# 14 "data/maps/PokeInnRoom2/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 18 "data/maps/PokeInnRoom2/scripts.pory"
	goto DayNightAmbientLight
	return


DevonInnSignAboutFreezer::
# 24 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 25 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSignAboutFreezer_Text_0
# 26 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnLamp::
# 30 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 31 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnLamp_Text_0
# 32 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnTrashCan::
# 36 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 37 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnTrashCan_Text_0
# 38 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DevonInnSink::
# 42 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 43 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_0
# 45 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 46 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DevonInnSink_2
DevonInnSink_1:
# 109 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DevonInnSink_5
DevonInnSink_4:
# 163 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

DevonInnSink_2:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, DevonInnSink_Text_1, DevonInnSink_Text_2, DevonInnSink_Text_3, DevonInnSink_Text_4, DevonInnSink_Text_5
# 50 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnSink_8
DevonInnSink_7:
# 61 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnSink_14
DevonInnSink_13:
# 76 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnSink_20
DevonInnSink_19:
# 91 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DevonInnSink_26
DevonInnSink_25:
# 105 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq DevonInnSink_31
	goto DevonInnSink_1

DevonInnSink_5:
# 109 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, DevonInnSink_Text_1, DevonInnSink_Text_2, DevonInnSink_Text_3, DevonInnSink_Text_10, DevonInnSink_Text_5
# 112 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonInnSink_11
DevonInnSink_10:
# 123 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonInnSink_17
DevonInnSink_16:
# 137 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonInnSink_23
DevonInnSink_22:
# 151 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DevonInnSink_29
DevonInnSink_28:
# 161 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq DevonInnSink_33
	goto DevonInnSink_4

DevonInnSink_8:
# 51 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 52 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 53 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 54 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 55 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 56 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ABSORB_2
# 57 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_6
	goto DevonInnSink_7

DevonInnSink_11:
# 113 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 114 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 115 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 116 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 117 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_TOXIC
# 118 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ABSORB_2
# 119 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_6
	goto DevonInnSink_10

DevonInnSink_14:
# 62 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 63 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 64 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 65 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 66 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DIVE
# 67 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 68 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 69 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 70 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 71 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_STAT_INCREASE
# 72 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_7
	goto DevonInnSink_13

DevonInnSink_17:
# 124 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 125 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 126 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE
# 127 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 128 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DIVE
# 129 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 130 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ENCORE
# 131 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 132 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_STAT_INCREASE
# 133 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_7
	goto DevonInnSink_16

DevonInnSink_20:
# 77 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 78 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 79 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 80 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 81 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE3
# 82 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 83 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_A
# 84 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 85 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_BALLOON_BLUE
# 86 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 87 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_8
	goto DevonInnSink_19

DevonInnSink_23:
# 138 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 139 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 140 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 141 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 142 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_BUBBLE3
# 143 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 144 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_A
# 145 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 146 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_BALLOON_BLUE
# 147 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 148 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_8
	goto DevonInnSink_22

DevonInnSink_26:
# 92 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_REPEL
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
	playse SE_M_SCRATCH
# 99 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 100 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_DOUBLE_SLAP
# 101 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_9
	goto DevonInnSink_25

DevonInnSink_29:
# 152 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_REPEL
# 153 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 154 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_MIST
# 155 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 156 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_MIST
# 157 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 158 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnSink_Text_11
	goto DevonInnSink_28

DevonInnSink_31:
# 105 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonInnSink_1

DevonInnSink_33:
# 161 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonInnSink_4


DevonInnFreezer::
# 169 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 170 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset claimedinnfreedrink, DevonInnFreezer_2
# 184 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnFreezer_Text_1
DevonInnFreezer_1:
# 185 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

DevonInnFreezer_2:
# 171 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonInnFreezer_Text_0
# 172 "data/maps/PokeInnRoom2/scripts.pory"
	random 3
# 173 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 175 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, DevonInnFreezer_7
# 177 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, DevonInnFreezer_8
# 178 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, DevonInnFreezer_9
# 179 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, DevonInnFreezer_10
DevonInnFreezer_5:
# 181 "data/maps/PokeInnRoom2/scripts.pory"
	setflag claimedinnfreedrink
	goto DevonInnFreezer_1

DevonInnFreezer_7:
# 176 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_FRESH_WATER
	goto DevonInnFreezer_5

DevonInnFreezer_8:
# 177 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_SODA_POP
	goto DevonInnFreezer_5

DevonInnFreezer_9:
# 178 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_TEA
	goto DevonInnFreezer_5

DevonInnFreezer_10:
# 179 "data/maps/PokeInnRoom2/scripts.pory"
	giveitem ITEM_HEAL_POWDER
	goto DevonInnFreezer_5


WallClock::
# 189 "data/maps/PokeInnRoom2/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 190 "data/maps/PokeInnRoom2/scripts.pory"
	gettime
# 191 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 192 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8001
# 193 "data/maps/PokeInnRoom2/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8002
# 194 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox WallClock_Text_0
# 195 "data/maps/PokeInnRoom2/scripts.pory"
	release
	end


DevonShowFreetrial::
# 209 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_set watcheddevoninnshow, DevonShowFreetrial_1
# 215 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_1
# 218 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, DevonShowFreetrial_Text_2, DevonShowFreetrial_Text_3, DevonShowFreetrial_Text_4, DevonShowFreetrial_Text_5
# 220 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq DevonShowFreetrial_5
DevonShowFreetrial_4:
# 222 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonShowFreetrial_8
DevonShowFreetrial_7:
# 277 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonShowFreetrial_11
DevonShowFreetrial_10:
# 347 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq DevonShowFreetrial_14
DevonShowFreetrial_13:
# 383 "data/maps/PokeInnRoom2/scripts.pory"
endofdevonshowtrial:
# 384 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

DevonShowFreetrial_1:
# 210 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_0
# 211 "data/maps/PokeInnRoom2/scripts.pory"
	goto endofdevonshowtrial
	return

DevonShowFreetrial_5:
# 220 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_4

DevonShowFreetrial_8:
# 223 "data/maps/PokeInnRoom2/scripts.pory"
	setflag watcheddevoninnshow
# 224 "data/maps/PokeInnRoom2/scripts.pory"
	fadeinbgm 1
# 225 "data/maps/PokeInnRoom2/scripts.pory"
	playbgm MUS_UNWAVERINGEMOTIONS, FALSE
# 226 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_6
# 227 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 228 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_7
# 231 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 232 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR, 10, 3
# 234 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_8
# 235 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 236 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 237 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_9
# 239 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
# 240 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MACHAMP, 10, 3
# 241 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 242 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_10
# 243 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 244 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 245 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_11
# 246 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ATTRACT
# 247 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GARDEVOIR_MEGA, 10, 3
# 248 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 249 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_12
# 251 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 252 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_13
# 254 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 255 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_14
# 256 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_ATTRACT2
# 257 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 258 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_15
# 259 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_FLEE
# 260 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTRESS ]
# 261 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_16
# 263 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_DRAMAACTOR ]
# 264 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_17
# 266 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 267 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_FLEE
# 268 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 269 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_18
# 272 "data/maps/PokeInnRoom2/scripts.pory"
	fadeoutbgm 1
# 273 "data/maps/PokeInnRoom2/scripts.pory"
	playbgm MUS_GAMEOVER, FALSE
# 274 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_7

DevonShowFreetrial_11:
# 278 "data/maps/PokeInnRoom2/scripts.pory"
	setflag watcheddevoninnshow
# 279 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 280 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 282 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_19
# 286 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_SCRAFTY, CRY_MODE_NORMAL
# 287 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_20
# 288 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 289 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 290 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 291 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_21
# 293 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8004, 2
# 294 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8005, 6
# 295 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8006, 4
# 296 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_0x8007, 4
# 297 "data/maps/PokeInnRoom2/scripts.pory"
	special ShakeCamera
# 298 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 299 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_COMET_PUNCH
# 300 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_ALCREMIE_CLOVER, 10, 3
# 301 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_22
# 302 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 303 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 304 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 305 "data/maps/PokeInnRoom2/scripts.pory"
	playmoncry SPECIES_SCRAFTY, CRY_MODE_WEAK
# 306 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_23
# 307 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 308 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 309 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 310 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_24
# 311 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 312 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_SCRAFTY, 10, 3
# 313 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SWAGGY ]
# 314 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_25
# 316 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 317 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_MELOETTA, 10, 3
# 318 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_SUPERSUBSTITUTE ]
# 319 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_PIN
# 320 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_26
# 322 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 323 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, DevonShowFreetrial_Text_27, DevonShowFreetrial_Text_28
# 325 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DevonShowFreetrial_17
DevonShowFreetrial_16:
# 340 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DevonShowFreetrial_19
	goto DevonShowFreetrial_10

DevonShowFreetrial_14:
# 348 "data/maps/PokeInnRoom2/scripts.pory"
	setflag watcheddevoninnshow
# 349 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 350 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_33
# 354 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 355 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_34
# 357 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 358 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_35
# 361 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 362 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_36
# 365 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 366 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_37
# 369 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GLACIA ]
# 370 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_38
# 373 "data/maps/PokeInnRoom2/scripts.pory"
	showmonpic SPECIES_GLALIE_MEGA, 10, 3
# 374 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker [ SP_NAME_GABBY ]
# 375 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_39
# 379 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 380 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 381 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_40
	goto DevonShowFreetrial_13

DevonShowFreetrial_17:
# 326 "data/maps/PokeInnRoom2/scripts.pory"
	setspeaker NULL
# 327 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_29
# 328 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 329 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq DevonShowFreetrial_22
DevonShowFreetrial_21:
# 333 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq DevonShowFreetrial_25
DevonShowFreetrial_24:
# 336 "data/maps/PokeInnRoom2/scripts.pory"
	hidemonpic
# 337 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_16

DevonShowFreetrial_19:
# 341 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_32
# 342 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto DevonShowFreetrial_10

DevonShowFreetrial_22:
# 330 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_30
	goto DevonShowFreetrial_21

DevonShowFreetrial_25:
# 334 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonShowFreetrial_Text_31
	goto DevonShowFreetrial_24


OldalePokeCenterInnPrograms::
# 390 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 391 "data/maps/PokeInnRoom2/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, OldalePokeCenterInnPrograms_Text_0, OldalePokeCenterInnPrograms_Text_1, OldalePokeCenterInnPrograms_Text_2, OldalePokeCenterInnPrograms_Text_3
# 394 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldalePokeCenterInnPrograms_2
OldalePokeCenterInnPrograms_1:
# 401 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldalePokeCenterInnPrograms_5
OldalePokeCenterInnPrograms_4:
# 418 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldalePokeCenterInnPrograms_11
OldalePokeCenterInnPrograms_10:
# 436 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldalePokeCenterInnPrograms_24
OldalePokeCenterInnPrograms_23:
# 441 "data/maps/PokeInnRoom2/scripts.pory"
	releaseall
	return

OldalePokeCenterInnPrograms_2:
# 395 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenshowatinnvisit, OldalePokeCenterInnPrograms_7
# 397 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_4
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_5:
# 402 "data/maps/PokeInnRoom2/scripts.pory"
	random 8
# 403 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 405 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 406 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_14
# 407 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_15
# 408 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, OldalePokeCenterInnPrograms_16
# 409 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, OldalePokeCenterInnPrograms_17
# 410 "data/maps/PokeInnRoom2/scripts.pory"
	case 4, OldalePokeCenterInnPrograms_18
# 411 "data/maps/PokeInnRoom2/scripts.pory"
	case 5, OldalePokeCenterInnPrograms_19
# 412 "data/maps/PokeInnRoom2/scripts.pory"
	case 6, OldalePokeCenterInnPrograms_20
# 413 "data/maps/PokeInnRoom2/scripts.pory"
	case 7, OldalePokeCenterInnPrograms_21
# 414 "data/maps/PokeInnRoom2/scripts.pory"
	case 8, OldalePokeCenterInnPrograms_22
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_7:
# 396 "data/maps/PokeInnRoom2/scripts.pory"
	goto DevonShowFreetrial
	goto OldalePokeCenterInnPrograms_1

OldalePokeCenterInnPrograms_11:
# 419 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset seenweatheratinnvisit, OldalePokeCenterInnPrograms_26
# 433 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldalePokeCenterInnPrograms_Text_5
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_14:
# 406 "data/maps/PokeInnRoom2/scripts.pory"
	goto OldaleWarehouseNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_15:
# 407 "data/maps/PokeInnRoom2/scripts.pory"
	goto JimmyNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_16:
# 408 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_17:
# 409 "data/maps/PokeInnRoom2/scripts.pory"
	goto PetalburgRiotNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_18:
# 410 "data/maps/PokeInnRoom2/scripts.pory"
	goto LittlerootLabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_19:
# 411 "data/maps/PokeInnRoom2/scripts.pory"
	goto DevonSpaceNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_20:
# 412 "data/maps/PokeInnRoom2/scripts.pory"
	goto MauvillePlantNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_21:
# 413 "data/maps/PokeInnRoom2/scripts.pory"
	goto RebelHarbourNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_22:
# 414 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route104LabNews
	goto OldalePokeCenterInnPrograms_4

OldalePokeCenterInnPrograms_24:
# 437 "data/maps/PokeInnRoom2/scripts.pory"
	release
	goto OldalePokeCenterInnPrograms_23

OldalePokeCenterInnPrograms_26:
# 420 "data/maps/PokeInnRoom2/scripts.pory"
	random 3
# 421 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 422 "data/maps/PokeInnRoom2/scripts.pory"
	switch VAR_RESULT
# 423 "data/maps/PokeInnRoom2/scripts.pory"
	case 0, OldalePokeCenterInnPrograms_30
# 424 "data/maps/PokeInnRoom2/scripts.pory"
	case 1, OldalePokeCenterInnPrograms_31
# 425 "data/maps/PokeInnRoom2/scripts.pory"
	case 2, OldalePokeCenterInnPrograms_32
# 426 "data/maps/PokeInnRoom2/scripts.pory"
	case 3, OldalePokeCenterInnPrograms_33
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_30:
# 423 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route103WeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_31:
# 424 "data/maps/PokeInnRoom2/scripts.pory"
	goto Route102WeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_32:
# 425 "data/maps/PokeInnRoom2/scripts.pory"
	goto GreatCraterWeatherNews
	goto OldalePokeCenterInnPrograms_10

OldalePokeCenterInnPrograms_33:
# 426 "data/maps/PokeInnRoom2/scripts.pory"
	goto LandfillWeatherNews
	goto OldalePokeCenterInnPrograms_10


JimmyNews::
# 448 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 450 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq JimmyNews_2
JimmyNews_1:
# 460 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq JimmyNews_5
JimmyNews_4:
# 482 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

JimmyNews_2:
# 452 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_0
	goto JimmyNews_1

JimmyNews_5:
# 462 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, JimmyNews_7
# 472 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_2
	goto JimmyNews_4

JimmyNews_7:
# 463 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox JimmyNews_Text_1
	goto JimmyNews_4


OldaleWarehouseNews::
# 486 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 488 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_le OldaleWarehouseNews_2
OldaleWarehouseNews_1:
# 496 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 3
	goto_if_ge OldaleWarehouseNews_5
OldaleWarehouseNews_4:
# 523 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 4
	goto_if_ge OldaleWarehouseNews_8
OldaleWarehouseNews_7:
# 527 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

OldaleWarehouseNews_2:
# 490 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_0
	goto OldaleWarehouseNews_1

OldaleWarehouseNews_5:
# 499 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_1
# 503 "data/maps/PokeInnRoom2/scripts.pory"
	checkplayergender
# 505 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleWarehouseNews_11
OldaleWarehouseNews_10:
# 513 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq OldaleWarehouseNews_13
	goto OldaleWarehouseNews_4

OldaleWarehouseNews_8:
# 524 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_4
	goto OldaleWarehouseNews_7

OldaleWarehouseNews_11:
# 507 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_2
	goto OldaleWarehouseNews_10

OldaleWarehouseNews_13:
# 515 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox OldaleWarehouseNews_Text_3
	goto OldaleWarehouseNews_4


PetalburgRiotNews::
# 534 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 535 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, PetalburgRiotNews_2
# 545 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_1
PetalburgRiotNews_1:
# 553 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

PetalburgRiotNews_2:
# 538 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox PetalburgRiotNews_Text_0
	goto PetalburgRiotNews_1


LittlerootLabNews::
# 559 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 560 "data/maps/PokeInnRoom2/scripts.pory"
	goto_if_unset helpedconcordconartist, LittlerootLabNews_2
# 574 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_1
LittlerootLabNews_1:
# 575 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

LittlerootLabNews_2:
# 563 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LittlerootLabNews_Text_0
	goto LittlerootLabNews_1


DevonSpaceNews::
# 580 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 581 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DevonSpaceNews_Text_0
# 588 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


MauvillePlantNews::
# 594 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 595 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox MauvillePlantNews_Text_0
# 603 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


RebelHarbourNews::
# 609 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 610 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq RebelHarbourNews_2
RebelHarbourNews_1:
# 622 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq RebelHarbourNews_5
RebelHarbourNews_4:
# 627 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

RebelHarbourNews_2:
# 613 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_0
	goto RebelHarbourNews_1

RebelHarbourNews_5:
# 625 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox RebelHarbourNews_Text_1
	goto RebelHarbourNews_4


Route104LabNews::
# 634 "data/maps/PokeInnRoom2/scripts.pory"
	lock
# 635 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 0
	goto_if_eq Route104LabNews_2
Route104LabNews_1:
# 647 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_JIMMYQUESTPROGRESS, 1
	goto_if_eq Route104LabNews_5
Route104LabNews_4:
# 660 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return

Route104LabNews_2:
# 638 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_0
	goto Route104LabNews_1

Route104LabNews_5:
# 650 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route104LabNews_Text_1
	goto Route104LabNews_4


Route103WeatherNews::
# 667 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_RAIN_DANCE
# 668 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route103WeatherNews_Text_0
# 671 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 1
# 673 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 674 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


Route102WeatherNews::
# 678 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_M_SANDSTORM
# 679 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox Route102WeatherNews_Text_0
# 683 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 1
# 684 "data/maps/PokeInnRoom2/scripts.pory"
	clearflag route102weathermon
# 685 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 686 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


GreatCraterWeatherNews::
# 691 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox GreatCraterWeatherNews_Text_0
# 696 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 1
# 698 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 699 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


LandfillWeatherNews::
# 704 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox LandfillWeatherNews_Text_0
# 708 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_PETALBURGLANDFILL_WEATHER, 1
# 710 "data/maps/PokeInnRoom2/scripts.pory"
	setflag seenweatheratinnvisit
# 711 "data/maps/PokeInnRoom2/scripts.pory"
	release
	return


DLCInnBedTime::
# 715 "data/maps/PokeInnRoom2/scripts.pory"
	lockall
# 716 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DLCInnBedTime_Text_0, MSGBOX_YESNO
# 717 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DLCInnBedTime_2
DLCInnBedTime_1:
# 756 "data/maps/PokeInnRoom2/scripts.pory"
endofsleep:
# 757 "data/maps/PokeInnRoom2/scripts.pory"
	releaseall
	return

DLCInnBedTime_2:
# 718 "data/maps/PokeInnRoom2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 719 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DLCInnBedTime_Text_1
# 720 "data/maps/PokeInnRoom2/scripts.pory"
	special StartWallClock
# 721 "data/maps/PokeInnRoom2/scripts.pory"
	waitstate
# 722 "data/maps/PokeInnRoom2/scripts.pory"
	fadeoutbgm 1
# 723 "data/maps/PokeInnRoom2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 724 "data/maps/PokeInnRoom2/scripts.pory"
	playse MUS_HEAL
# 725 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 726 "data/maps/PokeInnRoom2/scripts.pory"
	random 4
# 727 "data/maps/PokeInnRoom2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 735 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUCCESS
# 736 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 737 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUCCESS
# 738 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 739 "data/maps/PokeInnRoom2/scripts.pory"
	playse SE_SUCCESS
# 740 "data/maps/PokeInnRoom2/scripts.pory"
	waitse
# 742 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_OLDALE_PHASE, 1
	goto_if_ge DLCInnBedTime_6
DLCInnBedTime_4:
# 747 "data/maps/PokeInnRoom2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 751 "data/maps/PokeInnRoom2/scripts.pory"
	msgbox DLCInnBedTime_Text_2
# 752 "data/maps/PokeInnRoom2/scripts.pory"
	fadeinbgm 1
# 753 "data/maps/PokeInnRoom2/scripts.pory"
	playbgm MUS_GAMEOVER, TRUE
	goto DLCInnBedTime_1

DLCInnBedTime_5:
# 743 "data/maps/PokeInnRoom2/scripts.pory"
	setvar VAR_FLASHBACK_WAKEUPLOCATION, 2
# 744 "data/maps/PokeInnRoom2/scripts.pory"
	fadeoutbgm 1
# 745 "data/maps/PokeInnRoom2/scripts.pory"
	warpsilent MAP_PAST_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 0
	goto DLCInnBedTime_4

DLCInnBedTime_6:
# 742 "data/maps/PokeInnRoom2/scripts.pory"
	compare VAR_FLASHBACK_DREAM, 0
	goto_if_eq DLCInnBedTime_5
	goto DLCInnBedTime_4


DevonInnSignAboutFreezer_Text_0:
# 25 "data/maps/PokeInnRoom2/scripts.pory"
	.string "With each visit, remember to check the\n"
	.string "freezer for a free drink!$"

DevonInnLamp_Text_0:
# 31 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The drawers are empty.$"

DevonInnTrashCan_Text_0:
# 37 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The trash can is empty.$"

DevonInnSink_Text_0:
# 43 "data/maps/PokeInnRoom2/scripts.pory"
	.string "A simple and clean sink, equipped with\n"
	.string "some toiletries.$"

DevonInnSink_Text_1:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Drink water$"

DevonInnSink_Text_2:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Wash face$"

DevonInnSink_Text_3:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Brush teeth$"

DevonInnSink_Text_4:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Shave$"

DevonInnSink_Text_5:
# 47 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Nothing$"

DevonInnSink_Text_6:
# 57 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Haaa...$"

DevonInnSink_Text_7:
# 72 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Feeling refreshed now.$"

DevonInnSink_Text_8:
# 87 "data/maps/PokeInnRoom2/scripts.pory"
	.string "They're clean like a Clamperl.$"

DevonInnSink_Text_9:
# 101 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Smooth like a Mudkip's belly.$"

DevonInnSink_Text_10:
# 109 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Brush hair$"

DevonInnSink_Text_11:
# 158 "data/maps/PokeInnRoom2/scripts.pory"
	.string "... slightly more presentable.$"

DevonInnFreezer_Text_0:
# 171 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There's a single drink in the freezer,\n"
	.string "behind a huge “FOR FREE” note...$"

DevonInnFreezer_Text_1:
# 184 "data/maps/PokeInnRoom2/scripts.pory"
	.string "There's no more drinks in the freezer.$"

WallClock_Text_0:
# 194 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The time is\n"
	.string "{STR_VAR_1}:{STR_VAR_2}.$"

DevonShowFreetrial_Text_0:
# 210 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Your Devon Show Free Trial has timed\n"
	.string "out. Please come back later.$"

DevonShowFreetrial_Text_1:
# 215 "data/maps/PokeInnRoom2/scripts.pory"
	.string "This is a Devon Show's Free Trial! You\n"
	.string "may watch one of these episodes from\l"
	.string "Devon Shows for free!\p"
	.string "Which one would you like to watch?$"

DevonShowFreetrial_Text_2:
# 218 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Love is Danger, Episode 8$"

DevonShowFreetrial_Text_3:
# 218 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Super Sub Adventures, Episode 34$"

DevonShowFreetrial_Text_4:
# 218 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Gabby's Talk Show, Episode 18$"

DevonShowFreetrial_Text_5:
# 218 "data/maps/PokeInnRoom2/scripts.pory"
	.string "None$"

DevonShowFreetrial_Text_6:
# 226 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Love is Danger, Episode 8: Till Pokémon\n"
	.string "do us part.$"

DevonShowFreetrial_Text_7:
# 228 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Dear, I've reached my limit!\p"
	.string "Our marriage is falling apart, and I'm\n"
	.string "tired of pretending otherwise!\p"
	.string "We don't talk like we used to since…\n"
	.string "since…{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_8:
# 234 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Since your Kirlia evolved into\n"
	.string "Gardevoir!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_9:
# 237 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Huh!? Don't blame this on her! This all\n"
	.string "started when you- you...!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_10:
# 242 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}When you received that Machamp from a\n"
	.string "trade!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_11:
# 245 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}That's rich - you are such a…! Huh?\n"
	.string "W-wait… what's happening…? {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_12:
# 249 "data/maps/PokeInnRoom2/scripts.pory"
	.string "...!$"

DevonShowFreetrial_Text_13:
# 252 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}G-Gardette, why are you looking at him\n"
	.string "like that!?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_14:
# 255 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Machote, you too - you've never held me\n"
	.string "like that before…! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_15:
# 258 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}O-oh, oh no... what are they doing!? I-I\n"
	.string "can't watch this anymore!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_16:
# 261 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}UWAAAAH!!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_17:
# 264 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Devon was right… Pokémon… they can't\n"
	.string "be trusted! Darling, wait!! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_18:
# 269 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Will this steamy incident widen the gap\n"
	.string "between our protagonist couple…?\p"
	.string "Or will it serve as the patch needed to\n"
	.string "repair their relationship!?\p"
	.string "Find out more in the next episode of\n"
	.string "“Love is Danger!” Only on Devon Shows!$"

DevonShowFreetrial_Text_19:
# 282 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}It's the end of the line, Super\n"
	.string "Substitute! We have the Super Stones!\p"
	.string "With them, we will be able to Super\n"
	.string "Evolve, and become the most powerful\l"
	.string "and DANGEROUS Pokémon in all the world!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_20:
# 287 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}BWAA-HA-HA-HA!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_21:
# 291 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Not if I can help it, Swaggy the\n"
	.string "Scrafty! Special Technique...{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_22:
# 301 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}SELF-DEFENSE STRIKE!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_23:
# 306 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}W-WAAH! Wait, how is that\n"
	.string "self-defense!? We didn't even attack\l"
	.string "you yet!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_24:
# 310 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}You silly Swaggy! Striking evil foes is\n"
	.string "always in self-defense!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_25:
# 314 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Grr… if only I had taken a course on a\n"
	.string "Devon Learning Center... {COLOR LIGHT_GRAY}{SHADOW WHITE}applications\l"
	.string "open now...!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "{COLOR RED}I would be smart enough to know that!\p"
	.string "But it doesn't matter - gang, let's\n"
	.string "SUPER EVOLVE! ORYAAAH…!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_26:
# 320 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Oh no! People at home, we must stop\n"
	.string "Swaggy and his gang from Super\l"
	.string "Evolving!\p"
	.string "You know what to do - cheer me up! {COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_27:
# 323 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Go, Super Substitute!$"

DevonShowFreetrial_Text_28:
# 323 "data/maps/PokeInnRoom2/scripts.pory"
	.string "...$"

DevonShowFreetrial_Text_29:
# 327 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{PLAYER} yells at the TV…!$"

DevonShowFreetrial_Text_30:
# 330 "data/maps/PokeInnRoom2/scripts.pory"
	.string "He feels so embarrased, he switches it\n"
	.string "off instantly.$"

DevonShowFreetrial_Text_31:
# 334 "data/maps/PokeInnRoom2/scripts.pory"
	.string "She feels so embarrased, she switches\n"
	.string "it off instantly.$"

DevonShowFreetrial_Text_32:
# 341 "data/maps/PokeInnRoom2/scripts.pory"
	.string "... that's enough cartoons for today.$"

DevonShowFreetrial_Text_33:
# 350 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Welcome to Gabby's Talk Show! We are\n"
	.string "here tonight with miss Glacia, former\l"
	.string "Hoenn Elite Four, and now one of the\l"
	.string "most accomplished Admins of Devon Co.\p"
	.string "It's a pleasure to have you, miss Glacia.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_34:
# 355 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}The pleasure is mine, Gabby. Glacia will\n"
	.string "do.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_35:
# 358 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Thank you, Glacia! Now, I believe\n"
	.string "everyone at home must be wondering…\p"
	.string "What's your secret for looking JUST like\n"
	.string "you looked 30 years ago!?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_36:
# 362 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}Hm, I never thought about that…\n"
	.string "perhaps it's being around ice Pokémon.\p"
	.string "They say cold conserves, doesn't it?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_37:
# 366 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Hehe - that's so true!\p"
	.string "And that remark is the perfect segway\n"
	.string "for our first commercial break!{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_38:
# 370 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR BLUE}... already?{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_39:
# 375 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{COLOR RED}Glalie's. The only skincare product\n"
	.string "you'll ever need.\p"
	.string "This soothing cream will leave your face\n"
	.string "smooth like a Spheal's - or pokeyen\l"
	.string "returned!\p"
	.string "Glalie's. Let time slide you by like fresh\n"
	.string "ice.{COLOR DARK_GRAY}$"

DevonShowFreetrial_Text_40:
# 381 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Looks like this is the firt of many ads\n"
	.string "to come... better get going.$"

OldalePokeCenterInnPrograms_Text_0:
# 391 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon News$"

OldalePokeCenterInnPrograms_Text_1:
# 391 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Channel$"

OldalePokeCenterInnPrograms_Text_2:
# 391 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Devon Shows$"

OldalePokeCenterInnPrograms_Text_3:
# 391 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Don't watch TV$"

OldalePokeCenterInnPrograms_Text_4:
# 397 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The Devon Shows' Free Trial has been\n"
	.string "claimed on this inn visit.$"

OldalePokeCenterInnPrograms_Text_5:
# 433 "data/maps/PokeInnRoom2/scripts.pory"
	.string "The weather broadcast has ended...$"

JimmyNews_Text_0:
# 452 "data/maps/PokeInnRoom2/scripts.pory"
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
	.string "enhancing, also referred to as “IV\l"
	.string "breeding”.$"

JimmyNews_Text_1:
# 463 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We have news on egg smuggler Jimmy\n"
	.string "McGligar's whereabouts.\p"
	.string "Civilians have reported sighting him in\n"
	.string "{COLOR GREEN}Petalburg City{COLOR DARK_GRAY}, and there's speculation\l"
	.string "he recently crossed the checkpoint at\l"
	.string "Concord Bridge unnoticed.\p"
	.string "Due to the high rebel activity in\n"
	.string "Petalburg, an arrest will prove\l"
	.string "difficult, and efforts are focused on\l"
	.string "preventing him from leaving the {COLOR GREEN}Rebel\l"
	.string "Zone{COLOR DARK_GRAY} once more.\p"
	.string "Security checks are thus being\n"
	.string "reinforced in the checkpoints of\l"
	.string "Petalburg Park, Concord Bridge and\l"
	.string "Rustboro Road.\p"
	.string "Please carry your Devon Visa when\n"
	.string "travelling.$"

JimmyNews_Text_2:
# 472 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We have news on egg smuggler Jimmy\n"
	.string "McGligar's whereabouts.\p"
	.string "After a close encounter with Devon\n"
	.string "Guards and a brave civilian at Concord\l"
	.string "Bridge, he's been reported to have\l"
	.string "moved to {COLOR GREEN}Petalburg City{COLOR DARK_GRAY}.\p"
	.string "Due to the high rebel activity in the\n"
	.string "area, an arrest will prove difficult, and\l"
	.string "efforts are focused on preventing him\l"
	.string "from leaving the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY} once more.\p"
	.string "Security checks are thus being\n"
	.string "reinforced in the checkpoints of\l"
	.string "Petalburg Park, Concord Bridge and\l"
	.string "Rustboro Road.\p"
	.string "Please carry your Devon Visa when\n"
	.string "travelling.$"

OldaleWarehouseNews_Text_0:
# 490 "data/maps/PokeInnRoom2/scripts.pory"
	.string "In other unfortunate piece of news,\n"
	.string "the Devon Warehouse of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY} is\l"
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
# 499 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking News: our Verdooms have\n"
	.string "recently caught this footage of the\l"
	.string "Devon Warehouse of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}, where\l"
	.string "rebels can be seen leaving the facility\l"
	.string "in droves.$"

OldaleWarehouseNews_Text_2:
# 507 "data/maps/PokeInnRoom2/scripts.pory"
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
# 515 "data/maps/PokeInnRoom2/scripts.pory"
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

OldaleWarehouseNews_Text_4:
# 524 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Workers return.$"

PetalburgRiotNews_Text_0:
# 538 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news: a violent, rebel-led riot\n"
	.string "has broken out in the vicinity of\l"
	.string "{COLOR GREEN}Petalburg City{COLOR DARK_GRAY}'s Devon Center.\p"
	.string "Devon Guards have already been\n"
	.string "dispatched to put an end to the\l"
	.string "violence.\p"
	.string "We advise residents of the city to\n"
	.string "steer clear off the Devon facility until\l"
	.string "the situation is under control.$"

PetalburgRiotNews_Text_1:
# 545 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news: {COLOR RED}Rebels{COLOR DARK_GRAY} have been\n"
	.string "vacated from a violent riot mounted\l"
	.string "around {COLOR GREEN}Petalburg City{COLOR DARK_GRAY}'s Devon Center.\l"
	.string "The property damage is great, but no\l"
	.string "human or Pokémon injury has ensued.\p"
	.string "The situation was apparently defused\n"
	.string "by a young person garbed in camouflage\l"
	.string "clothes, who some believe to be the\l"
	.string "same that appears in the footage of\l"
	.string "{COLOR RED}Rebels{COLOR DARK_GRAY} leaving Oldale's Devon\l"
	.string "Warehouse.\p"
	.string "Could this be the rise of a bold\n"
	.string "vigilante in the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}, or perhaps\l"
	.string "that of an enforcer acting for a\l"
	.string "nefarious faction?\p"
	.string "We will keep you informed of these\n"
	.string "developments.$"

LittlerootLabNews_Text_0:
# 563 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Now, for some more analysis on the\n"
	.string "latest issue of Devon Co.'s “Safemon\l"
	.string "Progress Report”.\p"
	.string "For the third consecutive month,\n"
	.string "Littleroot's Lab has been at the bottom\l"
	.string "of contributions to the Safemon\l"
	.string "project, with only 2 Pokémon species\l"
	.string "successfully turned into Safemon.\p"
	.string "In spite of its decades-long history of\n"
	.string "academic brilliance, the laboratory\l"
	.string "took a turn for the worse when the\l"
	.string "illustrious Professor Birch retired, and\l"
	.string "the torch was passed to the Professor\l"
	.string "Balsam.\p"
	.string "After continuous downsizing of the\n"
	.string "laboratory, she is now one of the only\l"
	.string "two scientists working in Littleroot,\l"
	.string "and the closure of the institution\l"
	.string "seems all but imminent.\p"
	.string "It would be a sad farewell to a once\n"
	.string "iconic landmark in Hoenn's history.$"

LittlerootLabNews_Text_1:
# 574 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after raid to the lab, another news!$"

DevonSpaceNews_Text_0:
# 581 "data/maps/PokeInnRoom2/scripts.pory"
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
	.string "partner Silph Co., the “Gemini Mission”\l"
	.string "has started, with goals to build the\l"
	.string "Devon Space Station - the first\l"
	.string "man-made, long-term habitat to exist\l"
	.string "outside the planet.\p"
	.string "Everyone in Hoenn looks forward to the\n"
	.string "exciting discoveries that this new era\l"
	.string "of space flight might bring. Stay tuned!$"

MauvillePlantNews_Text_0:
# 595 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Next up, we bring you some unfortunate\n"
	.string "news.\p"
	.string "An accident in Mauville's Nuclear Plant\n"
	.string "has claimed the lifes of 7 Devon\l"
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
	.string "nuclear energy, in favour of the safer,\l"
	.string "cleaner energy provided by the thermal\l"
	.string "plant of Lavaridge Town.\p"
	.string "Mister Stone has promised to look into\n"
	.string "the matter, and to assess whether\l"
	.string "Lavaridge can keep up with the energy\l"
	.string "demands of our rapidly developing\l"
	.string "region.$"

RebelHarbourNews_Text_0:
# 613 "data/maps/PokeInnRoom2/scripts.pory"
	.string "We have received news about {COLOR RED}Rebels{COLOR DARK_GRAY}\n"
	.string "building an illegal harbour on the coast\l"
	.string "south of {COLOR GREEN}Petalburg City{COLOR DARK_GRAY}.\p"
	.string "Although available information rules\n"
	.string "out any war-equipped vessels being\l"
	.string "built or acquired by anti-Devon\l"
	.string "radicals, the place sees regular traffic\l"
	.string "of small foreign boats.\p"
	.string "If conjectures are to be believed, this\n"
	.string "could point to a collaboration between\l"
	.string "the {COLOR RED}Rebels{COLOR DARK_GRAY} and foreign crime\l"
	.string "organizations, and the establishment\l"
	.string "of a supply chain.\p"
	.string "Devon Co. continues to monitor the\n"
	.string "situation, and Mister Stone has\l"
	.string "promised to deal with any threats to\l"
	.string "the region's safety that dare arise\l"
	.string "from southern Hoenn in a “swift, stern,\l"
	.string "and safe manner.”$"

RebelHarbourNews_Text_1:
# 625 "data/maps/PokeInnRoom2/scripts.pory"
	.string "after foreign missions, INFORM ABOUT\n"
	.string "THEM!$"

Route104LabNews_Text_0:
# 638 "data/maps/PokeInnRoom2/scripts.pory"
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
	.string "{COLOR GREEN}Rebel Zone{COLOR DARK_GRAY} can be a hazardous work\l"
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
# 650 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Breaking news. We have just received\n"
	.string "reports of an assault on the Devon Lab\l"
	.string "of Route 104, presumably perpetrated\l"
	.string "by a band of rebels led by former gym\l"
	.string "leader of the neighbouring {COLOR GREEN}Petalburg\l"
	.string "City{COLOR DARK_GRAY} - Norman.\p"
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
	.string "of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY} of all its valuable\l"
	.string "assets.\p"
	.string "The lab will remain unmanned until it can\n"
	.string "be safely reclaimed. That is all we have\l"
	.string "for the moment.$"

Route103WeatherNews_Text_0:
# 668 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Alert: We would like to inform\n"
	.string "of a heavy rainstorm now pouring over\l"
	.string "Route 103.\p"
	.string "The Weather Institute advises to keep\n"
	.string "clear of the river in that route, and\l"
	.string "travel through there only if it's\l"
	.string "absolutely necessary.$"

Route102WeatherNews_Text_0:
# 679 "data/maps/PokeInnRoom2/scripts.pory"
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
# 691 "data/maps/PokeInnRoom2/scripts.pory"
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
	.string "radiation levels within the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}\l"
	.string "are perfectly within safe margins.$"

LandfillWeatherNews_Text_0:
# 704 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Weather Alert: We would like to inform\n"
	.string "of toxic fumes rising from Petalburg\l"
	.string "Scrapyard.\p"
	.string "The Weather Institute claims this is\n"
	.string "the result of certain waste materials\l"
	.string "being heated by the sun.\p"
	.string "We advise steering clear of the area\n"
	.string "for the time being, and use the safer\l"
	.string "Petalburg Park route for those\l"
	.string "travelling between {COLOR GREEN}Petalburg City{COLOR DARK_GRAY} and\l"
	.string "{COLOR BLUE}New Rustboro{COLOR DARK_GRAY}.$"

DLCInnBedTime_Text_0:
# 716 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Rest for a bit?$"

DLCInnBedTime_Text_1:
# 719 "data/maps/PokeInnRoom2/scripts.pory"
	.string "Set the wristwatch's alarm to which\n"
	.string "time?$"

DLCInnBedTime_Text_2:
# 751 "data/maps/PokeInnRoom2/scripts.pory"
	.string "{PLAYER} wakes up.$"
