# 1 "data/maps/CourtneyWorkshop/scripts.pory"


CourtneyWorkshop_MapScripts::
# 6 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CourtneyWorkShopMapscriptBundle
# 7 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CourtneyWorkShopMapscriptBundle
# 8 "data/maps/CourtneyWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CourtneyWorkShopMapscriptBundle
	.byte 0


CourtneyWorkShopMapscriptBundle::
# 13 "data/maps/CourtneyWorkshop/scripts.pory"
	gettimeofday
# 14 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq CourtneyWorkShopMapscriptBundle_2
CourtneyWorkShopMapscriptBundle_1:
# 17 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq CourtneyWorkShopMapscriptBundle_5
CourtneyWorkShopMapscriptBundle_4:
# 20 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq CourtneyWorkShopMapscriptBundle_8
CourtneyWorkShopMapscriptBundle_7:
# 23 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq CourtneyWorkShopMapscriptBundle_11
CourtneyWorkShopMapscriptBundle_10:
# 27 "data/maps/CourtneyWorkshop/scripts.pory"
enddaynightcourtneyworkshop:
# 29 "data/maps/CourtneyWorkshop/scripts.pory"
	gettimeofday
# 30 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq CourtneyWorkShopMapscriptBundle_14
CourtneyWorkShopMapscriptBundle_13:
# 33 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq CourtneyWorkShopMapscriptBundle_17
CourtneyWorkShopMapscriptBundle_16:
# 36 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq CourtneyWorkShopMapscriptBundle_20
CourtneyWorkShopMapscriptBundle_19:
# 39 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq CourtneyWorkShopMapscriptBundle_23
CourtneyWorkShopMapscriptBundle_22:
# 42 "data/maps/CourtneyWorkshop/scripts.pory"
	goto DayNightNPC
	return

CourtneyWorkShopMapscriptBundle_2:
# 15 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto CourtneyWorkShopMapscriptBundle_1

CourtneyWorkShopMapscriptBundle_5:
# 18 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto CourtneyWorkShopMapscriptBundle_4

CourtneyWorkShopMapscriptBundle_8:
# 21 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto CourtneyWorkShopMapscriptBundle_7

CourtneyWorkShopMapscriptBundle_11:
# 24 "data/maps/CourtneyWorkshop/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
# 25 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto CourtneyWorkShopMapscriptBundle_10

CourtneyWorkShopMapscriptBundle_14:
# 31 "data/maps/CourtneyWorkshop/scripts.pory"
	setweather WEATHER_NONE
	goto CourtneyWorkShopMapscriptBundle_13

CourtneyWorkShopMapscriptBundle_17:
# 34 "data/maps/CourtneyWorkshop/scripts.pory"
	setweather WEATHER_NONE
	goto CourtneyWorkShopMapscriptBundle_16

CourtneyWorkShopMapscriptBundle_20:
# 37 "data/maps/CourtneyWorkshop/scripts.pory"
	setweather WEATHER_NONE
	goto CourtneyWorkShopMapscriptBundle_19

CourtneyWorkShopMapscriptBundle_23:
# 40 "data/maps/CourtneyWorkshop/scripts.pory"
	setweather WEATHER_SHADE
	goto CourtneyWorkShopMapscriptBundle_22


DayNightMusicCourtneyWorkshop::
# 48 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicCourtneyWorkshop_2
DayNightMusicCourtneyWorkshop_1:
# 51 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicCourtneyWorkshop_5
DayNightMusicCourtneyWorkshop_4:
# 54 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicCourtneyWorkshop_7
	return

DayNightMusicCourtneyWorkshop_2:
# 49 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_1

DayNightMusicCourtneyWorkshop_5:
# 52 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	goto DayNightMusicCourtneyWorkshop_4

DayNightMusicCourtneyWorkshop_7:
# 55 "data/maps/CourtneyWorkshop/scripts.pory"
	goto enddaynightcourtneyworkshop
	return


PetalburgCourtneyPokeballWorkshopNight::
# 61 "data/maps/CourtneyWorkshop/scripts.pory"
	lock
# 62 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 63 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 2, PetalburgCourtneyPokeballWorkshopNight_Movement_0
# 64 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshopNight_Text_0
# 66 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 2, PetalburgCourtneyPokeballWorkshopNight_Movement_1
# 67 "data/maps/CourtneyWorkshop/scripts.pory"
	release
	return


PetalburgCourtneyPokeballWorkshop::
# 71 "data/maps/CourtneyWorkshop/scripts.pory"
	lock
# 73 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshopNight_Movement_0
# 75 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_0
# 77 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_1, PetalburgCourtneyPokeballWorkshop_Text_2, PetalburgCourtneyPokeballWorkshop_Text_3
# 82 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_2
PetalburgCourtneyPokeballWorkshop_1:
# 217 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_5
PetalburgCourtneyPokeballWorkshop_4:
# 250 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgCourtneyPokeballWorkshop_13
PetalburgCourtneyPokeballWorkshop_12:
# 255 "data/maps/CourtneyWorkshop/scripts.pory"
courtneyfinishedsale:
# 256 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 258 "data/maps/CourtneyWorkshop/scripts.pory"
endofcourtneyscript:
# 260 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshopNight_Movement_1
# 261 "data/maps/CourtneyWorkshop/scripts.pory"
	waitmovement 1
# 262 "data/maps/CourtneyWorkshop/scripts.pory"
	release
	return

PetalburgCourtneyPokeballWorkshop_2:
# 84 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset moonballsale, PetalburgCourtneyPokeballWorkshop_9
PetalburgCourtneyPokeballWorkshop_7:
# 92 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set moonballsale, PetalburgCourtneyPokeballWorkshop_16
PetalburgCourtneyPokeballWorkshop_15:
# 94 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set loveballsale, PetalburgCourtneyPokeballWorkshop_22
PetalburgCourtneyPokeballWorkshop_21:
# 97 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_6
# 99 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_7, PetalburgCourtneyPokeballWorkshop_Text_8, PetalburgCourtneyPokeballWorkshop_Text_9, PetalburgCourtneyPokeballWorkshop_Text_10, PetalburgCourtneyPokeballWorkshop_Text_11, PetalburgCourtneyPokeballWorkshop_Text_12, PetalburgCourtneyPokeballWorkshop_Text_13, PetalburgCourtneyPokeballWorkshop_Text_14, PetalburgCourtneyPokeballWorkshop_Text_15, PetalburgCourtneyPokeballWorkshop_Text_16, PetalburgCourtneyPokeballWorkshop_Text_17, PetalburgCourtneyPokeballWorkshop_Text_18, PetalburgCourtneyPokeballWorkshop_Text_19, PetalburgCourtneyPokeballWorkshop_Text_20, PetalburgCourtneyPokeballWorkshop_Text_21, PetalburgCourtneyPokeballWorkshop_Text_22, PetalburgCourtneyPokeballWorkshop_Text_23, PetalburgCourtneyPokeballWorkshop_Text_24, PetalburgCourtneyPokeballWorkshop_Text_25, PetalburgCourtneyPokeballWorkshop_Text_26, PetalburgCourtneyPokeballWorkshop_Text_27, PetalburgCourtneyPokeballWorkshop_Text_28, PetalburgCourtneyPokeballWorkshop_Text_29, PetalburgCourtneyPokeballWorkshop_Text_30, PetalburgCourtneyPokeballWorkshop_Text_3
# 129 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_25
PetalburgCourtneyPokeballWorkshop_24:
# 157 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_28
PetalburgCourtneyPokeballWorkshop_27:
# 182 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgCourtneyPokeballWorkshop_33
	goto PetalburgCourtneyPokeballWorkshop_1

PetalburgCourtneyPokeballWorkshop_5:
# 219 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_41
# 223 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_M_SWAGGER2
# 224 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshop_Movement_0
# 225 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_42
# 227 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_43
# 228 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_M_SWAGGER2
# 229 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshop_Movement_0
# 230 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_44
# 232 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_45
# 240 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_M_ATTRACT
# 241 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshop_Movement_1
# 242 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_46
# 246 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_4

PetalburgCourtneyPokeballWorkshop_8:
# 85 "data/maps/CourtneyWorkshop/scripts.pory"
	random 2
# 86 "data/maps/CourtneyWorkshop/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 87 "data/maps/CourtneyWorkshop/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/CourtneyWorkshop/scripts.pory"
	case 0, PetalburgCourtneyPokeballWorkshop_19
# 89 "data/maps/CourtneyWorkshop/scripts.pory"
	case 1, PetalburgCourtneyPokeballWorkshop_20
	goto PetalburgCourtneyPokeballWorkshop_7

PetalburgCourtneyPokeballWorkshop_9:
# 84 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset loveballsale, PetalburgCourtneyPokeballWorkshop_8
	goto PetalburgCourtneyPokeballWorkshop_7

PetalburgCourtneyPokeballWorkshop_13:
# 251 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_47
# 252 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_12

PetalburgCourtneyPokeballWorkshop_16:
# 93 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_4
	goto PetalburgCourtneyPokeballWorkshop_15

PetalburgCourtneyPokeballWorkshop_19:
# 88 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag moonballsale
	goto PetalburgCourtneyPokeballWorkshop_7

PetalburgCourtneyPokeballWorkshop_20:
# 89 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag loveballsale
	goto PetalburgCourtneyPokeballWorkshop_7

PetalburgCourtneyPokeballWorkshop_22:
# 95 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_5
	goto PetalburgCourtneyPokeballWorkshop_21

PetalburgCourtneyPokeballWorkshop_25:
# 130 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_31
# 132 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 136 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_31
PetalburgCourtneyPokeballWorkshop_30:
# 144 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_38
	goto PetalburgCourtneyPokeballWorkshop_24

PetalburgCourtneyPokeballWorkshop_28:
# 158 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_35
# 160 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 164 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_36
PetalburgCourtneyPokeballWorkshop_35:
# 171 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_44
PetalburgCourtneyPokeballWorkshop_43:
# 176 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 177 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 178 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_27

PetalburgCourtneyPokeballWorkshop_31:
# 137 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 138 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_BEAST_BALL
# 139 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 140 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_30

PetalburgCourtneyPokeballWorkshop_33:
# 183 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_36
# 185 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_37, PetalburgCourtneyPokeballWorkshop_Text_38
# 189 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_41
PetalburgCourtneyPokeballWorkshop_40:
# 198 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_47
PetalburgCourtneyPokeballWorkshop_46:
# 203 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 204 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_40
# 207 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_1

PetalburgCourtneyPokeballWorkshop_36:
# 165 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 166 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_CHERISH_BALL
# 167 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 168 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_35

PetalburgCourtneyPokeballWorkshop_38:
# 145 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 146 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 147 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_BEAST_BALL, 5
# 148 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 149 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 150 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_24

PetalburgCourtneyPokeballWorkshop_41:
# 190 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_39
# 191 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 192 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_PARK_BALL
# 193 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_40
# 195 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_40

PetalburgCourtneyPokeballWorkshop_44:
# 172 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 173 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 174 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_CHERISH_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_43

PetalburgCourtneyPokeballWorkshop_47:
# 199 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 200 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 201 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_PARK_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_46


CourtneyTradeSequence::
# 281 "data/maps/CourtneyWorkshop/scripts.pory"
	showmoneybox 18, 0
# 282 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset courtneygives5balls, CourtneyTradeSequence_2
# 286 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_1
# 287 "data/maps/CourtneyWorkshop/scripts.pory"
	checkmoney 500
CourtneyTradeSequence_1:
# 290 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CourtneyTradeSequence_6
CourtneyTradeSequence_5:
# 295 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CourtneyTradeSequence_9
CourtneyTradeSequence_8:
# 339 "data/maps/CourtneyWorkshop/scripts.pory"
Courtneyperformsballtrade:
# 341 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_5
# 342 "data/maps/CourtneyWorkshop/scripts.pory"
	closemessage
# 344 "data/maps/CourtneyWorkshop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 346 "data/maps/CourtneyWorkshop/scripts.pory"
	fadeoutbgm 1
# 347 "data/maps/CourtneyWorkshop/scripts.pory"
	fadeinbgm 1
# 349 "data/maps/CourtneyWorkshop/scripts.pory"
	playbgm MUS_NONE, TRUE
# 350 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_SWITCH
# 351 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 352 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_CLICK
# 353 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 354 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_BALL_OPEN
# 355 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 356 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_BALL
# 357 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 358 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_BALL
# 359 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 360 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_RG_BALL_CLICK
# 361 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 363 "data/maps/CourtneyWorkshop/scripts.pory"
	fadeinbgm 1
# 365 "data/maps/CourtneyWorkshop/scripts.pory"
	gettimeofday
# 366 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq CourtneyTradeSequence_12
# 368 "data/maps/CourtneyWorkshop/scripts.pory"
	playbgm MUS_RG_SEVII_45, TRUE
CourtneyTradeSequence_11:
# 370 "data/maps/CourtneyWorkshop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 372 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset courtneygives5balls, CourtneyTradeSequence_19
CourtneyTradeSequence_18:
# 375 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set courtneygives5balls, CourtneyTradeSequence_27
	return

CourtneyTradeSequence_2:
# 283 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_0
# 284 "data/maps/CourtneyWorkshop/scripts.pory"
	checkmoney 100
	goto CourtneyTradeSequence_1

CourtneyTradeSequence_6:
# 291 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_2
# 292 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto CourtneyTradeSequence_5

CourtneyTradeSequence_9:
# 296 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset courtneygives5balls, CourtneyTradeSequence_15
	checkitem ITEM_POKE_BALL, 5
# 0 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CourtneyTradeSequence_25
CourtneyTradeSequence_24:
	checkitem ITEM_POKE_BALL, 5
# 0 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CourtneyTradeSequence_31
	goto CourtneyTradeSequence_8

CourtneyTradeSequence_12:
# 367 "data/maps/CourtneyWorkshop/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
	goto CourtneyTradeSequence_11

CourtneyTradeSequence_15:
	checkitem ITEM_POKE_BALL, 1
# 0 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CourtneyTradeSequence_22
CourtneyTradeSequence_21:
	checkitem ITEM_POKE_BALL, 1
# 0 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CourtneyTradeSequence_29
	goto CourtneyTradeSequence_8

CourtneyTradeSequence_19:
# 373 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_6
	goto CourtneyTradeSequence_18

CourtneyTradeSequence_22:
# 300 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_3
# 301 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto CourtneyTradeSequence_21

CourtneyTradeSequence_25:
# 322 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_4
	goto CourtneyTradeSequence_24

CourtneyTradeSequence_27:
# 376 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_7
	return

CourtneyTradeSequence_29:
# 306 "data/maps/CourtneyWorkshop/scripts.pory"
	removemoney 100
# 307 "data/maps/CourtneyWorkshop/scripts.pory"
	updatemoneybox
# 308 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_RG_SHOP
# 309 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 310 "data/maps/CourtneyWorkshop/scripts.pory"
	hidemoneybox
# 311 "data/maps/CourtneyWorkshop/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 313 "data/maps/CourtneyWorkshop/scripts.pory"
	goto Courtneyperformsballtrade
	goto CourtneyTradeSequence_8

CourtneyTradeSequence_31:
# 327 "data/maps/CourtneyWorkshop/scripts.pory"
	removemoney 500
# 328 "data/maps/CourtneyWorkshop/scripts.pory"
	updatemoneybox
# 329 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_RG_SHOP
# 330 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 331 "data/maps/CourtneyWorkshop/scripts.pory"
	hidemoneybox
# 332 "data/maps/CourtneyWorkshop/scripts.pory"
	removeitem ITEM_POKE_BALL, 5
# 333 "data/maps/CourtneyWorkshop/scripts.pory"
	goto Courtneyperformsballtrade
	goto CourtneyTradeSequence_8


# 63 "data/maps/CourtneyWorkshop/scripts.pory"
PetalburgCourtneyPokeballWorkshopNight_Movement_0:
# 63 "data/maps/CourtneyWorkshop/scripts.pory"
	face_player
	step_end

# 66 "data/maps/CourtneyWorkshop/scripts.pory"
PetalburgCourtneyPokeballWorkshopNight_Movement_1:
# 66 "data/maps/CourtneyWorkshop/scripts.pory"
	face_up
	step_end

# 224 "data/maps/CourtneyWorkshop/scripts.pory"
PetalburgCourtneyPokeballWorkshop_Movement_0:
# 224 "data/maps/CourtneyWorkshop/scripts.pory"
	emote_x
	step_end

# 241 "data/maps/CourtneyWorkshop/scripts.pory"
PetalburgCourtneyPokeballWorkshop_Movement_1:
# 241 "data/maps/CourtneyWorkshop/scripts.pory"
	emote_heart
	step_end

PetalburgCourtneyPokeballWorkshopNight_Text_0:
# 64 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, I'm sorry - I'm preparing for bed!\p"
	.string "Come back tomorrow, and I'll be happy to\n"
	.string "customize your Pokéballs!$"

PetalburgCourtneyPokeballWorkshop_Text_0:
# 75 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Hello - welcome to Courtney's Pokéball\n"
	.string "Workhop!$"

PetalburgCourtneyPokeballWorkshop_Text_1:
# 78 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Convert Pokéballs$"

PetalburgCourtneyPokeballWorkshop_Text_2:
# 79 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Pokéball Workshop?$"

PetalburgCourtneyPokeballWorkshop_Text_3:
# 80 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Leave$"

PetalburgCourtneyPokeballWorkshop_Text_4:
# 93 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, I feel like drawing cute moons today\n"
	.string "- so Moon Balls are discounted!$"

PetalburgCourtneyPokeballWorkshop_Text_5:
# 95 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, I feel like drawing cute hearts\n"
	.string "today - so Love Balls are discounted!$"

PetalburgCourtneyPokeballWorkshop_Text_6:
# 97 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Which Pokéball are you interested in?$"

PetalburgCourtneyPokeballWorkshop_Text_7:
# 101 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Alien Ball$"

PetalburgCourtneyPokeballWorkshop_Text_8:
# 102 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Cherish Ball$"

PetalburgCourtneyPokeballWorkshop_Text_9:
# 103 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Damaged Ball$"

PetalburgCourtneyPokeballWorkshop_Text_10:
# 104 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Dive Ball$"

PetalburgCourtneyPokeballWorkshop_Text_11:
# 105 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Dream Ball$"

PetalburgCourtneyPokeballWorkshop_Text_12:
# 106 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Dusk Ball$"

PetalburgCourtneyPokeballWorkshop_Text_13:
# 107 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Fast Ball$"

PetalburgCourtneyPokeballWorkshop_Text_14:
# 108 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Friend Ball$"

PetalburgCourtneyPokeballWorkshop_Text_15:
# 109 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Heal Ball$"

PetalburgCourtneyPokeballWorkshop_Text_16:
# 110 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Heavy Ball$"

PetalburgCourtneyPokeballWorkshop_Text_17:
# 111 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Level Ball$"

PetalburgCourtneyPokeballWorkshop_Text_18:
# 112 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Love Ball$"

PetalburgCourtneyPokeballWorkshop_Text_19:
# 113 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Lure Ball$"

PetalburgCourtneyPokeballWorkshop_Text_20:
# 114 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Luxury Ball$"

PetalburgCourtneyPokeballWorkshop_Text_21:
# 115 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Moon Ball$"

PetalburgCourtneyPokeballWorkshop_Text_22:
# 116 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Net Ball$"

PetalburgCourtneyPokeballWorkshop_Text_23:
# 117 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Nest Ball$"

PetalburgCourtneyPokeballWorkshop_Text_24:
# 118 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Premier Ball$"

PetalburgCourtneyPokeballWorkshop_Text_25:
# 119 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Quick Ball$"

PetalburgCourtneyPokeballWorkshop_Text_26:
# 120 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Repeat Ball$"

PetalburgCourtneyPokeballWorkshop_Text_27:
# 121 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Safari Ball$"

PetalburgCourtneyPokeballWorkshop_Text_28:
# 122 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Sport Ball$"

PetalburgCourtneyPokeballWorkshop_Text_29:
# 123 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Strange Ball$"

PetalburgCourtneyPokeballWorkshop_Text_30:
# 124 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Timer Ball$"

PetalburgCourtneyPokeballWorkshop_Text_31:
# 130 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Bizarre Ball? Those are funky! And how\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_32:
# 133 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Just one$"

PetalburgCourtneyPokeballWorkshop_Text_33:
# 134 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Five, please$"

PetalburgCourtneyPokeballWorkshop_Text_34:
# 139 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Come back for more!$"

PetalburgCourtneyPokeballWorkshop_Text_35:
# 158 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Cherish Ball? Those are so stylish!\n"
	.string "And how many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_36:
# 183 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Damaged Ball? So you want me to...\n"
	.string "break a Pokéball?$"

PetalburgCourtneyPokeballWorkshop_Text_37:
# 186 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Yes, just one$"

PetalburgCourtneyPokeballWorkshop_Text_38:
# 187 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Break five, please$"

PetalburgCourtneyPokeballWorkshop_Text_39:
# 190 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "... forgive me, grandpa Kurt! I-I mean...!$"

PetalburgCourtneyPokeballWorkshop_Text_40:
# 193 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} As a Pokéball artisan, that was\n"
	.string "painful! Don't ask me for that again!$"

PetalburgCourtneyPokeballWorkshop_Text_41:
# 219 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Yup, here's where I do my favourite\n"
	.string "thing - making special Pokéballs!\p"
	.string "Companies around the world are\n"
	.string "removing Pokéballs from the market...\p"
	.string "And just to push their flagship\n"
	.string "Pokéballs!$"

PetalburgCourtneyPokeballWorkshop_Text_42:
# 225 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "It's all Silph Ball this, and Devon Ball\n"
	.string "that these days - what a bore!$"

PetalburgCourtneyPokeballWorkshop_Text_43:
# 227 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "My grandad and I - he's the best\n"
	.string "Pokéball artisan in Jotho, you see...$"

PetalburgCourtneyPokeballWorkshop_Text_44:
# 230 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "We hate that.$"

PetalburgCourtneyPokeballWorkshop_Text_45:
# 232 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "So we began to convert these boring\n"
	.string "company Pokéballs into special ones!\p"
	.string "If you want me to do that with yours,\n"
	.string "bring them to me!\p"
	.string "It's just 100¥ per Pokéball, to cover\n"
	.string "the material costs.\p"
	.string "Oh, and if you already caught one of\n"
	.string "your partners on one of those boring\l"
	.string "balls...\p"
	.string "Don't worry, it's not too late to swap!\p"
	.string "Just use any Pokéball from your bag,\n"
	.string "and then select the Pokémon whose ball\l"
	.string "you wish to swap with the one you\l"
	.string "chose.$"

PetalburgCourtneyPokeballWorkshop_Text_46:
# 242 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Let's bring self-expression back into\n"
	.string "the Pokéball world, together!$"

PetalburgCourtneyPokeballWorkshop_Text_47:
# 251 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, okay... goodbye!$"

CourtneyTradeSequence_Text_0:
# 283 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Okay! That will be 100¥, and one Devon\n"
	.string "Ball!$"

CourtneyTradeSequence_Text_1:
# 286 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Okay! That will be 500¥, and five Devon\n"
	.string "Ball!$"

CourtneyTradeSequence_Text_2:
# 291 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, you don't have enough pokeyen...\n"
	.string "Maybe some other time?$"

CourtneyTradeSequence_Text_3:
# 300 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, but you don't have a Devon Ball. Go\n"
	.string "buy one, hurry!$"

CourtneyTradeSequence_Text_4:
# 322 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, but you don't have enough Devon\n"
	.string "Balls. Go buy some, hurry!$"

CourtneyTradeSequence_Text_5:
# 341 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Perfect! Just give me a second!$"

CourtneyTradeSequence_Text_6:
# 373 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Thanks for waiting - it's finished!$"

CourtneyTradeSequence_Text_7:
# 376 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Thanks for waiting - they are finished!$"
