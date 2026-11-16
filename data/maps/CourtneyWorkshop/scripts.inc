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
	waitmovement 2
# 68 "data/maps/CourtneyWorkshop/scripts.pory"
	release
	return


PetalburgCourtneyPokeballWorkshop::
# 72 "data/maps/CourtneyWorkshop/scripts.pory"
	lock
# 74 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshopNight_Movement_0
# 76 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_0
# 78 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_1, PetalburgCourtneyPokeballWorkshop_Text_2, PetalburgCourtneyPokeballWorkshop_Text_3
# 83 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_2
PetalburgCourtneyPokeballWorkshop_1:
# 799 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_5
PetalburgCourtneyPokeballWorkshop_4:
# 832 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgCourtneyPokeballWorkshop_13
PetalburgCourtneyPokeballWorkshop_12:
# 837 "data/maps/CourtneyWorkshop/scripts.pory"
courtneyfinishedsale:
# 838 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 840 "data/maps/CourtneyWorkshop/scripts.pory"
endofcourtneyscript:
# 842 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshopNight_Movement_1
# 843 "data/maps/CourtneyWorkshop/scripts.pory"
	waitmovement 1
# 844 "data/maps/CourtneyWorkshop/scripts.pory"
	release
	return

PetalburgCourtneyPokeballWorkshop_2:
# 85 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset moonballsale, PetalburgCourtneyPokeballWorkshop_9
PetalburgCourtneyPokeballWorkshop_7:
# 93 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set moonballsale, PetalburgCourtneyPokeballWorkshop_16
PetalburgCourtneyPokeballWorkshop_15:
# 95 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set loveballsale, PetalburgCourtneyPokeballWorkshop_22
PetalburgCourtneyPokeballWorkshop_21:
# 98 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_6
# 100 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_7, PetalburgCourtneyPokeballWorkshop_Text_8, PetalburgCourtneyPokeballWorkshop_Text_9, PetalburgCourtneyPokeballWorkshop_Text_10, PetalburgCourtneyPokeballWorkshop_Text_11, PetalburgCourtneyPokeballWorkshop_Text_12, PetalburgCourtneyPokeballWorkshop_Text_13, PetalburgCourtneyPokeballWorkshop_Text_14, PetalburgCourtneyPokeballWorkshop_Text_15, PetalburgCourtneyPokeballWorkshop_Text_16, PetalburgCourtneyPokeballWorkshop_Text_17, PetalburgCourtneyPokeballWorkshop_Text_18, PetalburgCourtneyPokeballWorkshop_Text_19, PetalburgCourtneyPokeballWorkshop_Text_20, PetalburgCourtneyPokeballWorkshop_Text_21, PetalburgCourtneyPokeballWorkshop_Text_22, PetalburgCourtneyPokeballWorkshop_Text_23, PetalburgCourtneyPokeballWorkshop_Text_24, PetalburgCourtneyPokeballWorkshop_Text_25, PetalburgCourtneyPokeballWorkshop_Text_26, PetalburgCourtneyPokeballWorkshop_Text_27, PetalburgCourtneyPokeballWorkshop_Text_28, PetalburgCourtneyPokeballWorkshop_Text_29, PetalburgCourtneyPokeballWorkshop_Text_30, PetalburgCourtneyPokeballWorkshop_Text_3
# 130 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_25
PetalburgCourtneyPokeballWorkshop_24:
# 158 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_28
PetalburgCourtneyPokeballWorkshop_27:
# 185 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PetalburgCourtneyPokeballWorkshop_34
PetalburgCourtneyPokeballWorkshop_33:
# 216 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_42
PetalburgCourtneyPokeballWorkshop_41:
# 242 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_51
PetalburgCourtneyPokeballWorkshop_50:
# 268 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_60
PetalburgCourtneyPokeballWorkshop_59:
# 294 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_69
PetalburgCourtneyPokeballWorkshop_68:
# 320 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_78
PetalburgCourtneyPokeballWorkshop_77:
# 346 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_87
PetalburgCourtneyPokeballWorkshop_86:
# 373 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_96
PetalburgCourtneyPokeballWorkshop_95:
# 399 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_105
PetalburgCourtneyPokeballWorkshop_104:
# 425 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_114
PetalburgCourtneyPokeballWorkshop_113:
# 466 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_123
PetalburgCourtneyPokeballWorkshop_122:
# 492 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_132
PetalburgCourtneyPokeballWorkshop_131:
# 519 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_144
PetalburgCourtneyPokeballWorkshop_143:
# 560 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_156
PetalburgCourtneyPokeballWorkshop_155:
# 586 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_165
PetalburgCourtneyPokeballWorkshop_164:
# 612 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_177
PetalburgCourtneyPokeballWorkshop_176:
# 638 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_189
PetalburgCourtneyPokeballWorkshop_188:
# 664 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_198
PetalburgCourtneyPokeballWorkshop_197:
# 690 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_207
PetalburgCourtneyPokeballWorkshop_206:
# 716 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_216
PetalburgCourtneyPokeballWorkshop_215:
# 742 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_225
PetalburgCourtneyPokeballWorkshop_224:
# 768 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_233
	goto PetalburgCourtneyPokeballWorkshop_1

PetalburgCourtneyPokeballWorkshop_5:
# 801 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_62
# 805 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_M_SWAGGER2
# 806 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshop_Movement_0
# 807 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_63
# 809 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_64
# 810 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_M_SWAGGER2
# 811 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshop_Movement_0
# 812 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_65
# 814 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_66
# 822 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_M_ATTRACT
# 823 "data/maps/CourtneyWorkshop/scripts.pory"
	applymovement 1, PetalburgCourtneyPokeballWorkshop_Movement_1
# 824 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_67
# 828 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_4

PetalburgCourtneyPokeballWorkshop_8:
# 86 "data/maps/CourtneyWorkshop/scripts.pory"
	random 2
# 87 "data/maps/CourtneyWorkshop/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 88 "data/maps/CourtneyWorkshop/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/CourtneyWorkshop/scripts.pory"
	case 0, PetalburgCourtneyPokeballWorkshop_19
# 90 "data/maps/CourtneyWorkshop/scripts.pory"
	case 1, PetalburgCourtneyPokeballWorkshop_20
	goto PetalburgCourtneyPokeballWorkshop_7

PetalburgCourtneyPokeballWorkshop_9:
# 85 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset loveballsale, PetalburgCourtneyPokeballWorkshop_8
	goto PetalburgCourtneyPokeballWorkshop_7

PetalburgCourtneyPokeballWorkshop_13:
# 833 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_68
# 834 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_12

PetalburgCourtneyPokeballWorkshop_16:
# 94 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_4
	goto PetalburgCourtneyPokeballWorkshop_15

PetalburgCourtneyPokeballWorkshop_19:
# 89 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag moonballsale
	goto PetalburgCourtneyPokeballWorkshop_7

PetalburgCourtneyPokeballWorkshop_20:
# 90 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag loveballsale
	goto PetalburgCourtneyPokeballWorkshop_7

PetalburgCourtneyPokeballWorkshop_22:
# 96 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_5
	goto PetalburgCourtneyPokeballWorkshop_21

PetalburgCourtneyPokeballWorkshop_25:
# 131 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_31
# 133 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 137 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_31
PetalburgCourtneyPokeballWorkshop_30:
# 145 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_39
	goto PetalburgCourtneyPokeballWorkshop_24

PetalburgCourtneyPokeballWorkshop_28:
# 159 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_35
# 161 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 165 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_37
PetalburgCourtneyPokeballWorkshop_36:
# 172 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_48
PetalburgCourtneyPokeballWorkshop_47:
# 177 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 178 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 179 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_27

PetalburgCourtneyPokeballWorkshop_31:
# 138 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 139 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_BEAST_BALL
# 140 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 141 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_30

PetalburgCourtneyPokeballWorkshop_34:
# 186 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_36
# 188 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_37, PetalburgCourtneyPokeballWorkshop_Text_38
# 192 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_45
PetalburgCourtneyPokeballWorkshop_44:
# 201 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_57
PetalburgCourtneyPokeballWorkshop_56:
# 206 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 207 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_40
# 210 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_33

PetalburgCourtneyPokeballWorkshop_37:
# 166 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 167 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_CHERISH_BALL
# 168 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 169 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_36

PetalburgCourtneyPokeballWorkshop_39:
# 146 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 147 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 148 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_BEAST_BALL, 5
# 149 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 150 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 151 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_24

PetalburgCourtneyPokeballWorkshop_42:
# 217 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_41
# 219 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 223 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_54
PetalburgCourtneyPokeballWorkshop_53:
# 230 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_66
PetalburgCourtneyPokeballWorkshop_65:
# 235 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 236 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 237 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_41

PetalburgCourtneyPokeballWorkshop_45:
# 193 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_39
# 194 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 195 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_PARK_BALL
# 196 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_40
# 198 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_44

PetalburgCourtneyPokeballWorkshop_48:
# 173 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 174 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 175 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_CHERISH_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_47

PetalburgCourtneyPokeballWorkshop_51:
# 243 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_42
# 245 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 249 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_63
PetalburgCourtneyPokeballWorkshop_62:
# 256 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_75
PetalburgCourtneyPokeballWorkshop_74:
# 261 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 262 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 263 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_50

PetalburgCourtneyPokeballWorkshop_54:
# 224 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 225 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_DIVE_BALL
# 226 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 227 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_53

PetalburgCourtneyPokeballWorkshop_57:
# 202 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 203 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 204 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_PARK_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_56

PetalburgCourtneyPokeballWorkshop_60:
# 269 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_43
# 271 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 275 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_72
PetalburgCourtneyPokeballWorkshop_71:
# 282 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_84
PetalburgCourtneyPokeballWorkshop_83:
# 287 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 288 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 289 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_59

PetalburgCourtneyPokeballWorkshop_63:
# 250 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 251 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_DREAM_BALL
# 252 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 253 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_62

PetalburgCourtneyPokeballWorkshop_66:
# 231 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 232 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 233 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_DIVE_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_65

PetalburgCourtneyPokeballWorkshop_69:
# 295 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_44
# 297 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 301 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_81
PetalburgCourtneyPokeballWorkshop_80:
# 308 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_93
PetalburgCourtneyPokeballWorkshop_92:
# 313 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 314 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 315 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_68

PetalburgCourtneyPokeballWorkshop_72:
# 276 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 277 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_DUSK_BALL
# 278 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 279 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_71

PetalburgCourtneyPokeballWorkshop_75:
# 257 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 258 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 259 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_DREAM_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_74

PetalburgCourtneyPokeballWorkshop_78:
# 321 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_45
# 323 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 327 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_90
PetalburgCourtneyPokeballWorkshop_89:
# 334 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_102
PetalburgCourtneyPokeballWorkshop_101:
# 339 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 340 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 341 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_77

PetalburgCourtneyPokeballWorkshop_81:
# 302 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 303 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_FAST_BALL
# 304 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 305 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_80

PetalburgCourtneyPokeballWorkshop_84:
# 283 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 284 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 285 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_DUSK_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_83

PetalburgCourtneyPokeballWorkshop_87:
# 347 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_46
# 349 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 353 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_99
PetalburgCourtneyPokeballWorkshop_98:
# 360 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_111
PetalburgCourtneyPokeballWorkshop_110:
# 365 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 366 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 367 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_86

PetalburgCourtneyPokeballWorkshop_90:
# 328 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 329 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_FRIEND_BALL
# 330 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 331 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_89

PetalburgCourtneyPokeballWorkshop_93:
# 309 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 310 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 311 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_FAST_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_92

PetalburgCourtneyPokeballWorkshop_96:
# 374 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_47
# 376 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 380 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_108
PetalburgCourtneyPokeballWorkshop_107:
# 387 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_120
PetalburgCourtneyPokeballWorkshop_119:
# 392 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 393 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 394 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_95

PetalburgCourtneyPokeballWorkshop_99:
# 354 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 355 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_HEAL_BALL
# 356 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 357 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_98

PetalburgCourtneyPokeballWorkshop_102:
# 335 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 336 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 337 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_FRIEND_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_101

PetalburgCourtneyPokeballWorkshop_105:
# 400 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_48
# 402 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 406 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_117
PetalburgCourtneyPokeballWorkshop_116:
# 413 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_129
PetalburgCourtneyPokeballWorkshop_128:
# 418 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 419 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 420 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_104

PetalburgCourtneyPokeballWorkshop_108:
# 381 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 382 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_HEAVY_BALL
# 383 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 384 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_107

PetalburgCourtneyPokeballWorkshop_111:
# 361 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 362 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 363 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_HEAL_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_110

PetalburgCourtneyPokeballWorkshop_114:
# 427 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_49
# 429 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 433 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_126
PetalburgCourtneyPokeballWorkshop_125:
# 446 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_138
PetalburgCourtneyPokeballWorkshop_137:
# 458 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 459 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 460 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_113

PetalburgCourtneyPokeballWorkshop_117:
# 407 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 408 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_LEVEL_BALL
# 409 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 410 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_116

PetalburgCourtneyPokeballWorkshop_120:
# 388 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 389 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 390 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_HEAVY_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_119

PetalburgCourtneyPokeballWorkshop_123:
# 467 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_50
# 469 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 473 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_135
PetalburgCourtneyPokeballWorkshop_134:
# 480 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_150
PetalburgCourtneyPokeballWorkshop_149:
# 485 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 486 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 487 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_122

PetalburgCourtneyPokeballWorkshop_126:
# 435 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set loveballsale, PetalburgCourtneyPokeballWorkshop_141
PetalburgCourtneyPokeballWorkshop_140:
# 440 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 441 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_LOVE_BALL
# 442 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 443 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_125

PetalburgCourtneyPokeballWorkshop_129:
# 414 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 415 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 416 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_LEVEL_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_128

PetalburgCourtneyPokeballWorkshop_132:
# 493 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_51
# 495 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 499 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_147
PetalburgCourtneyPokeballWorkshop_146:
# 506 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_162
PetalburgCourtneyPokeballWorkshop_161:
# 511 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 512 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 513 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_131

PetalburgCourtneyPokeballWorkshop_135:
# 474 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 475 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_LURE_BALL
# 476 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 477 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_134

PetalburgCourtneyPokeballWorkshop_138:
# 449 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set loveballsale, PetalburgCourtneyPokeballWorkshop_153
PetalburgCourtneyPokeballWorkshop_152:
# 454 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 455 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 456 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_LOVE_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_137

PetalburgCourtneyPokeballWorkshop_141:
# 437 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneydiscountedballs
	goto PetalburgCourtneyPokeballWorkshop_140

PetalburgCourtneyPokeballWorkshop_144:
# 521 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_52
# 523 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 527 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_159
PetalburgCourtneyPokeballWorkshop_158:
# 540 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_171
PetalburgCourtneyPokeballWorkshop_170:
# 552 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 553 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 554 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_143

PetalburgCourtneyPokeballWorkshop_147:
# 500 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 501 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_LUXURY_BALL
# 502 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 503 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_146

PetalburgCourtneyPokeballWorkshop_150:
# 481 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 482 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 483 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_LURE_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_149

PetalburgCourtneyPokeballWorkshop_153:
# 451 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneydiscountedballs
	goto PetalburgCourtneyPokeballWorkshop_152

PetalburgCourtneyPokeballWorkshop_156:
# 561 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_53
# 563 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 567 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_168
PetalburgCourtneyPokeballWorkshop_167:
# 574 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_183
PetalburgCourtneyPokeballWorkshop_182:
# 579 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 580 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 581 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_155

PetalburgCourtneyPokeballWorkshop_159:
# 529 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set moonballsale, PetalburgCourtneyPokeballWorkshop_174
PetalburgCourtneyPokeballWorkshop_173:
# 534 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 535 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_MOON_BALL
# 536 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 537 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_158

PetalburgCourtneyPokeballWorkshop_162:
# 507 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 508 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 509 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_LUXURY_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_161

PetalburgCourtneyPokeballWorkshop_165:
# 587 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_54
# 589 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 593 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_180
PetalburgCourtneyPokeballWorkshop_179:
# 600 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_195
PetalburgCourtneyPokeballWorkshop_194:
# 605 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 606 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 607 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_164

PetalburgCourtneyPokeballWorkshop_168:
# 568 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 569 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_NET_BALL
# 570 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 571 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_167

PetalburgCourtneyPokeballWorkshop_171:
# 543 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set moonballsale, PetalburgCourtneyPokeballWorkshop_186
PetalburgCourtneyPokeballWorkshop_185:
# 548 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 549 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 550 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_MOON_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_170

PetalburgCourtneyPokeballWorkshop_174:
# 531 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneydiscountedballs
	goto PetalburgCourtneyPokeballWorkshop_173

PetalburgCourtneyPokeballWorkshop_177:
# 613 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_55
# 615 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 619 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_192
PetalburgCourtneyPokeballWorkshop_191:
# 626 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_204
PetalburgCourtneyPokeballWorkshop_203:
# 631 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 632 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 633 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_176

PetalburgCourtneyPokeballWorkshop_180:
# 594 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 595 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_NEST_BALL
# 596 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 597 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_179

PetalburgCourtneyPokeballWorkshop_183:
# 575 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 576 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 577 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_NET_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_182

PetalburgCourtneyPokeballWorkshop_186:
# 545 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneydiscountedballs
	goto PetalburgCourtneyPokeballWorkshop_185

PetalburgCourtneyPokeballWorkshop_189:
# 639 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_56
# 641 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 645 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_201
PetalburgCourtneyPokeballWorkshop_200:
# 652 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_213
PetalburgCourtneyPokeballWorkshop_212:
# 657 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 658 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 659 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_188

PetalburgCourtneyPokeballWorkshop_192:
# 620 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 621 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_PREMIER_BALL
# 622 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 623 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_191

PetalburgCourtneyPokeballWorkshop_195:
# 601 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 602 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 603 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_NEST_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_194

PetalburgCourtneyPokeballWorkshop_198:
# 665 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_57
# 667 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 671 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_210
PetalburgCourtneyPokeballWorkshop_209:
# 678 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_222
PetalburgCourtneyPokeballWorkshop_221:
# 683 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 684 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 685 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_197

PetalburgCourtneyPokeballWorkshop_201:
# 646 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 647 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_QUICK_BALL
# 648 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 649 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_200

PetalburgCourtneyPokeballWorkshop_204:
# 627 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 628 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 629 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_PREMIER_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_203

PetalburgCourtneyPokeballWorkshop_207:
# 691 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_58
# 693 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 697 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_219
PetalburgCourtneyPokeballWorkshop_218:
# 704 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_231
PetalburgCourtneyPokeballWorkshop_230:
# 709 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 710 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 711 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_206

PetalburgCourtneyPokeballWorkshop_210:
# 672 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 673 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 674 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 675 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_209

PetalburgCourtneyPokeballWorkshop_213:
# 653 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 654 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 655 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_QUICK_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_212

PetalburgCourtneyPokeballWorkshop_216:
# 717 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_59
# 719 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 723 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_228
PetalburgCourtneyPokeballWorkshop_227:
# 730 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_239
PetalburgCourtneyPokeballWorkshop_238:
# 735 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 736 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 737 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_215

PetalburgCourtneyPokeballWorkshop_219:
# 698 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 699 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_SAFARI_BALL
# 700 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 701 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_218

PetalburgCourtneyPokeballWorkshop_222:
# 679 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 680 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 681 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_REPEAT_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_221

PetalburgCourtneyPokeballWorkshop_225:
# 743 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_60
# 745 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 749 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_236
PetalburgCourtneyPokeballWorkshop_235:
# 756 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_245
PetalburgCourtneyPokeballWorkshop_244:
# 761 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 762 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 763 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_224

PetalburgCourtneyPokeballWorkshop_228:
# 724 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 725 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_SPORT_BALL
# 726 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 727 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_227

PetalburgCourtneyPokeballWorkshop_231:
# 705 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 706 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 707 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_SAFARI_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_230

PetalburgCourtneyPokeballWorkshop_233:
# 769 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_61
# 771 "data/maps/CourtneyWorkshop/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCourtneyPokeballWorkshop_Text_32, PetalburgCourtneyPokeballWorkshop_Text_33
# 775 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCourtneyPokeballWorkshop_242
PetalburgCourtneyPokeballWorkshop_241:
# 782 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCourtneyPokeballWorkshop_248
PetalburgCourtneyPokeballWorkshop_247:
# 787 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneygives5balls
# 788 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 789 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_1

PetalburgCourtneyPokeballWorkshop_236:
# 750 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 751 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_STRANGE_BALL
# 752 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 753 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_235

PetalburgCourtneyPokeballWorkshop_239:
# 731 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 732 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 733 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_SPORT_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_238

PetalburgCourtneyPokeballWorkshop_242:
# 776 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 777 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_TIMER_BALL
# 778 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox PetalburgCourtneyPokeballWorkshop_Text_34
# 779 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto PetalburgCourtneyPokeballWorkshop_241

PetalburgCourtneyPokeballWorkshop_245:
# 757 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 758 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 759 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_STRANGE_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_244

PetalburgCourtneyPokeballWorkshop_248:
# 783 "data/maps/CourtneyWorkshop/scripts.pory"
	setflag courtneygives5balls
# 784 "data/maps/CourtneyWorkshop/scripts.pory"
	call CourtneyTradeSequence
# 785 "data/maps/CourtneyWorkshop/scripts.pory"
	giveitem ITEM_TIMER_BALL, 5
	goto PetalburgCourtneyPokeballWorkshop_247


CourtneyTradeSequence::
# 863 "data/maps/CourtneyWorkshop/scripts.pory"
	showmoneybox 18, 0
# 865 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set courtneydiscountedballs, CourtneyTradeSequence_2
CourtneyTradeSequence_1:
# 880 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset courtneygives5balls, CourtneyTradeSequence_5
# 885 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_1
# 886 "data/maps/CourtneyWorkshop/scripts.pory"
	checkmoney 500
CourtneyTradeSequence_4:
# 889 "data/maps/CourtneyWorkshop/scripts.pory"
courtneytradepostprice:
# 891 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CourtneyTradeSequence_12
CourtneyTradeSequence_11:
# 896 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CourtneyTradeSequence_15
CourtneyTradeSequence_14:
# 941 "data/maps/CourtneyWorkshop/scripts.pory"
Courtneyperformsballtrade:
# 943 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_6
# 944 "data/maps/CourtneyWorkshop/scripts.pory"
	closemessage
# 946 "data/maps/CourtneyWorkshop/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 948 "data/maps/CourtneyWorkshop/scripts.pory"
	fadeoutbgm 1
# 949 "data/maps/CourtneyWorkshop/scripts.pory"
	fadeinbgm 1
# 951 "data/maps/CourtneyWorkshop/scripts.pory"
	playbgm MUS_NONE, TRUE
# 952 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_SWITCH
# 953 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 954 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_CLICK
# 955 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 956 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_BALL_OPEN
# 957 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 958 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_BALL
# 959 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 960 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_BALL
# 961 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 962 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_RG_BALL_CLICK
# 963 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 965 "data/maps/CourtneyWorkshop/scripts.pory"
	fadeinbgm 1
# 967 "data/maps/CourtneyWorkshop/scripts.pory"
	gettimeofday
# 968 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq CourtneyTradeSequence_18
# 970 "data/maps/CourtneyWorkshop/scripts.pory"
	playbgm MUS_RG_SEVII_45, TRUE
CourtneyTradeSequence_17:
# 972 "data/maps/CourtneyWorkshop/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 974 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset courtneygives5balls, CourtneyTradeSequence_25
CourtneyTradeSequence_24:
# 977 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_set courtneygives5balls, CourtneyTradeSequence_33
	return

CourtneyTradeSequence_2:
# 868 "data/maps/CourtneyWorkshop/scripts.pory"
	clearflag courtneydiscountedballs
# 869 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset courtneygives5balls, CourtneyTradeSequence_8
# 874 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_1
# 875 "data/maps/CourtneyWorkshop/scripts.pory"
	checkmoney 250
# 876 "data/maps/CourtneyWorkshop/scripts.pory"
	goto courtneytradepostprice
	goto CourtneyTradeSequence_1

CourtneyTradeSequence_5:
# 882 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_2
# 883 "data/maps/CourtneyWorkshop/scripts.pory"
	checkmoney 100
	goto CourtneyTradeSequence_4

CourtneyTradeSequence_8:
# 871 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_0
# 872 "data/maps/CourtneyWorkshop/scripts.pory"
	checkmoney 50
	goto CourtneyTradeSequence_1

CourtneyTradeSequence_12:
# 892 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_3
# 893 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto CourtneyTradeSequence_11

CourtneyTradeSequence_15:
# 897 "data/maps/CourtneyWorkshop/scripts.pory"
	goto_if_unset courtneygives5balls, CourtneyTradeSequence_21
	checkitem ITEM_POKE_BALL, 5
# 0 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CourtneyTradeSequence_31
CourtneyTradeSequence_30:
	checkitem ITEM_POKE_BALL, 5
# 0 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CourtneyTradeSequence_37
	goto CourtneyTradeSequence_14

CourtneyTradeSequence_18:
# 969 "data/maps/CourtneyWorkshop/scripts.pory"
	playbgm MUS_TAKARASUSHI, TRUE
	goto CourtneyTradeSequence_17

CourtneyTradeSequence_21:
	checkitem ITEM_POKE_BALL, 1
# 0 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CourtneyTradeSequence_28
CourtneyTradeSequence_27:
	checkitem ITEM_POKE_BALL, 1
# 0 "data/maps/CourtneyWorkshop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CourtneyTradeSequence_35
	goto CourtneyTradeSequence_14

CourtneyTradeSequence_25:
# 975 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_7
	goto CourtneyTradeSequence_24

CourtneyTradeSequence_28:
# 901 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_4
# 902 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto CourtneyTradeSequence_27

CourtneyTradeSequence_31:
# 923 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_5
# 924 "data/maps/CourtneyWorkshop/scripts.pory"
	goto endofcourtneyscript
	goto CourtneyTradeSequence_30

CourtneyTradeSequence_33:
# 978 "data/maps/CourtneyWorkshop/scripts.pory"
	msgbox CourtneyTradeSequence_Text_8
	return

CourtneyTradeSequence_35:
# 907 "data/maps/CourtneyWorkshop/scripts.pory"
	removemoney 100
# 908 "data/maps/CourtneyWorkshop/scripts.pory"
	updatemoneybox
# 909 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_RG_SHOP
# 910 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 911 "data/maps/CourtneyWorkshop/scripts.pory"
	hidemoneybox
# 912 "data/maps/CourtneyWorkshop/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 914 "data/maps/CourtneyWorkshop/scripts.pory"
	goto Courtneyperformsballtrade
	goto CourtneyTradeSequence_14

CourtneyTradeSequence_37:
# 929 "data/maps/CourtneyWorkshop/scripts.pory"
	removemoney 500
# 930 "data/maps/CourtneyWorkshop/scripts.pory"
	updatemoneybox
# 931 "data/maps/CourtneyWorkshop/scripts.pory"
	playse SE_RG_SHOP
# 932 "data/maps/CourtneyWorkshop/scripts.pory"
	waitse
# 933 "data/maps/CourtneyWorkshop/scripts.pory"
	hidemoneybox
# 934 "data/maps/CourtneyWorkshop/scripts.pory"
	removeitem ITEM_POKE_BALL, 5
# 935 "data/maps/CourtneyWorkshop/scripts.pory"
	goto Courtneyperformsballtrade
	goto CourtneyTradeSequence_14


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

# 806 "data/maps/CourtneyWorkshop/scripts.pory"
PetalburgCourtneyPokeballWorkshop_Movement_0:
# 806 "data/maps/CourtneyWorkshop/scripts.pory"
	emote_x
	step_end

# 823 "data/maps/CourtneyWorkshop/scripts.pory"
PetalburgCourtneyPokeballWorkshop_Movement_1:
# 823 "data/maps/CourtneyWorkshop/scripts.pory"
	emote_heart
	step_end

PetalburgCourtneyPokeballWorkshopNight_Text_0:
# 64 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, I'm sorry - I'm preparing for bed!\p"
	.string "Come back tomorrow, and I'll be happy to\n"
	.string "customize your Pokéballs!$"

PetalburgCourtneyPokeballWorkshop_Text_0:
# 76 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Hello - welcome to Courtney's Pokéball\n"
	.string "Workhop!$"

PetalburgCourtneyPokeballWorkshop_Text_1:
# 79 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Convert Pokéballs$"

PetalburgCourtneyPokeballWorkshop_Text_2:
# 80 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Pokéball Workshop?$"

PetalburgCourtneyPokeballWorkshop_Text_3:
# 81 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Leave$"

PetalburgCourtneyPokeballWorkshop_Text_4:
# 94 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, I feel like drawing cute moons today\n"
	.string "- so Moon Balls are discounted!$"

PetalburgCourtneyPokeballWorkshop_Text_5:
# 96 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, I feel like drawing cute hearts\n"
	.string "today - so Love Balls are discounted!$"

PetalburgCourtneyPokeballWorkshop_Text_6:
# 98 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Which Pokéball are you interested in?$"

PetalburgCourtneyPokeballWorkshop_Text_7:
# 102 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Alien Ball$"

PetalburgCourtneyPokeballWorkshop_Text_8:
# 103 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Cherish Ball$"

PetalburgCourtneyPokeballWorkshop_Text_9:
# 104 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Damaged Ball$"

PetalburgCourtneyPokeballWorkshop_Text_10:
# 105 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Dive Ball$"

PetalburgCourtneyPokeballWorkshop_Text_11:
# 106 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Dream Ball$"

PetalburgCourtneyPokeballWorkshop_Text_12:
# 107 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Dusk Ball$"

PetalburgCourtneyPokeballWorkshop_Text_13:
# 108 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Fast Ball$"

PetalburgCourtneyPokeballWorkshop_Text_14:
# 109 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Friend Ball$"

PetalburgCourtneyPokeballWorkshop_Text_15:
# 110 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Heal Ball$"

PetalburgCourtneyPokeballWorkshop_Text_16:
# 111 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Heavy Ball$"

PetalburgCourtneyPokeballWorkshop_Text_17:
# 112 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Level Ball$"

PetalburgCourtneyPokeballWorkshop_Text_18:
# 113 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Love Ball$"

PetalburgCourtneyPokeballWorkshop_Text_19:
# 114 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Lure Ball$"

PetalburgCourtneyPokeballWorkshop_Text_20:
# 115 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Luxury Ball$"

PetalburgCourtneyPokeballWorkshop_Text_21:
# 116 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Moon Ball$"

PetalburgCourtneyPokeballWorkshop_Text_22:
# 117 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Net Ball$"

PetalburgCourtneyPokeballWorkshop_Text_23:
# 118 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Nest Ball$"

PetalburgCourtneyPokeballWorkshop_Text_24:
# 119 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Premier Ball$"

PetalburgCourtneyPokeballWorkshop_Text_25:
# 120 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Quick Ball$"

PetalburgCourtneyPokeballWorkshop_Text_26:
# 121 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Repeat Ball$"

PetalburgCourtneyPokeballWorkshop_Text_27:
# 122 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Safari Ball$"

PetalburgCourtneyPokeballWorkshop_Text_28:
# 123 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Sport Ball$"

PetalburgCourtneyPokeballWorkshop_Text_29:
# 124 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Strange Ball$"

PetalburgCourtneyPokeballWorkshop_Text_30:
# 125 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Timer Ball$"

PetalburgCourtneyPokeballWorkshop_Text_31:
# 131 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "An Alien Ball? They're sooo sci-fi! How\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_32:
# 134 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Just one$"

PetalburgCourtneyPokeballWorkshop_Text_33:
# 135 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Five, please$"

PetalburgCourtneyPokeballWorkshop_Text_34:
# 140 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Come back for more!$"

PetalburgCourtneyPokeballWorkshop_Text_35:
# 159 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Cherish Ball? These are so regal! How\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_36:
# 186 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Damaged Ball? So you want me to...\n"
	.string "break a Pokéball?$"

PetalburgCourtneyPokeballWorkshop_Text_37:
# 189 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Yes, just one$"

PetalburgCourtneyPokeballWorkshop_Text_38:
# 190 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Break five, please$"

PetalburgCourtneyPokeballWorkshop_Text_39:
# 193 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "... forgive me, grandpa Kurt! I-I mean...!$"

PetalburgCourtneyPokeballWorkshop_Text_40:
# 196 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} As a Pokéball artisan, that was\n"
	.string "painful! Don't ask me for that again!$"

PetalburgCourtneyPokeballWorkshop_Text_41:
# 217 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Dive Ball? Their design is sooo\n"
	.string "soothing! How many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_42:
# 243 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Dream Ball? This is on my top 3! how\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_43:
# 269 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Dusk Ball? They have so much edge!\n"
	.string "How many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_44:
# 295 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Fast Ball? They're so iconic! And how\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_45:
# 321 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Friend Ball? Simple but charming! How\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_46:
# 347 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Heal Ball? They're so funky! And how\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_47:
# 374 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Heavy Balls are so imposing! How many\n"
	.string "would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_48:
# 400 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Level Ball? A striking design! How\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_49:
# 427 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Love Ball? These are the cutest! How\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_50:
# 467 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Level Ball? They're so original! How\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_51:
# 493 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Luxury Ball? Feeling elegant huh? How\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_52:
# 521 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Moon Ball? So mystical! How many would\n"
	.string "you like?$"

PetalburgCourtneyPokeballWorkshop_Text_53:
# 561 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Net Ball? Love this bold design! How\n"
	.string "many would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_54:
# 587 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Nest Ball? Such a cozy ball! How many\n"
	.string "would you like?$"

PetalburgCourtneyPokeballWorkshop_Text_55:
# 613 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Premier Ball? Didn't know you were so\n"
	.string "posh! How many?$"

PetalburgCourtneyPokeballWorkshop_Text_56:
# 639 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Quick Ball? Such an exciting pattern!\n"
	.string "How many?$"

PetalburgCourtneyPokeballWorkshop_Text_57:
# 665 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Repeat Ball? Not my favourite, but\n"
	.string "useful! How many?$"

PetalburgCourtneyPokeballWorkshop_Text_58:
# 691 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Cammo Ball? This one suits you! How\n"
	.string "many?$"

PetalburgCourtneyPokeballWorkshop_Text_59:
# 717 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Sport Ball? That's a design from my\n"
	.string "region! How many?$"

PetalburgCourtneyPokeballWorkshop_Text_60:
# 743 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Strange Ball? This is a very rare\n"
	.string "design! How many?$"

PetalburgCourtneyPokeballWorkshop_Text_61:
# 769 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "A Timer Ball? They're a bit bizarre,\n"
	.string "aren't they? How many?$"

PetalburgCourtneyPokeballWorkshop_Text_62:
# 801 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Yup, here's where I do my favourite\n"
	.string "thing - making special Pokéballs!\p"
	.string "Companies around the world are\n"
	.string "removing Pokéballs from the market...\p"
	.string "And just to push their flagship\n"
	.string "Pokéballs!$"

PetalburgCourtneyPokeballWorkshop_Text_63:
# 807 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "It's all Silph Ball this, and Devon Ball\n"
	.string "that these days - what a bore!$"

PetalburgCourtneyPokeballWorkshop_Text_64:
# 809 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "My grandad and I - he's the best\n"
	.string "Pokéball artisan in Jotho, you see...$"

PetalburgCourtneyPokeballWorkshop_Text_65:
# 812 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "We hate that.$"

PetalburgCourtneyPokeballWorkshop_Text_66:
# 814 "data/maps/CourtneyWorkshop/scripts.pory"
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

PetalburgCourtneyPokeballWorkshop_Text_67:
# 824 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Let's bring self-expression back into\n"
	.string "the Pokéball world, together!$"

PetalburgCourtneyPokeballWorkshop_Text_68:
# 833 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, okay... goodbye!$"

CourtneyTradeSequence_Text_0:
# 871 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Okay! That will be 50¥, and one Devon\n"
	.string "Ball!$"

CourtneyTradeSequence_Text_1:
# 874 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Okay! That will be 500¥, and five Devon\n"
	.string "Ball!$"

CourtneyTradeSequence_Text_2:
# 882 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Okay! That will be 100¥, and one Devon\n"
	.string "Ball!$"

CourtneyTradeSequence_Text_3:
# 892 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, you don't have enough pokeyen...\n"
	.string "Maybe some other time?$"

CourtneyTradeSequence_Text_4:
# 901 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, but you don't have a Devon Ball. Go\n"
	.string "buy one, hurry!$"

CourtneyTradeSequence_Text_5:
# 923 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Oh, but you don't have enough Devon\n"
	.string "Balls. Go buy some, hurry!$"

CourtneyTradeSequence_Text_6:
# 943 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Perfect! Just give me a second!$"

CourtneyTradeSequence_Text_7:
# 975 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Thanks for waiting - it's finished!$"

CourtneyTradeSequence_Text_8:
# 978 "data/maps/CourtneyWorkshop/scripts.pory"
	.string "Thanks for waiting - they are finished!$"
