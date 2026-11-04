# 1 "data/maps/GreatCrater/scripts.pory"


GreatCrater_MapScripts::
# 8 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GreatCraterMapscriptBundle
# 11 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RedoTouristWarning
	.byte 0


GreatCraterMapscriptBundle::
# 17 "data/maps/GreatCrater/scripts.pory"
	gettimeofday
# 18 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq GreatCraterMapscriptBundle_2
GreatCraterMapscriptBundle_1:
# 21 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq GreatCraterMapscriptBundle_5
GreatCraterMapscriptBundle_4:
# 24 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq GreatCraterMapscriptBundle_8
GreatCraterMapscriptBundle_7:
# 27 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq GreatCraterMapscriptBundle_11
GreatCraterMapscriptBundle_10:
# 31 "data/maps/GreatCrater/scripts.pory"
enddaynightmusicgreatcrater:
# 34 "data/maps/GreatCrater/scripts.pory"
	random 10
# 35 "data/maps/GreatCrater/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 36 "data/maps/GreatCrater/scripts.pory"
	switch VAR_RESULT
# 37 "data/maps/GreatCrater/scripts.pory"
	case 0, GreatCraterMapscriptBundle_14
# 41 "data/maps/GreatCrater/scripts.pory"
	case 1, GreatCraterMapscriptBundle_15
# 45 "data/maps/GreatCrater/scripts.pory"
	case 2, GreatCraterMapscriptBundle_16
# 49 "data/maps/GreatCrater/scripts.pory"
	case 3, GreatCraterMapscriptBundle_17
# 53 "data/maps/GreatCrater/scripts.pory"
	case 4, GreatCraterMapscriptBundle_18
# 56 "data/maps/GreatCrater/scripts.pory"
	case 5, GreatCraterMapscriptBundle_19
# 59 "data/maps/GreatCrater/scripts.pory"
	case 6, GreatCraterMapscriptBundle_20
# 62 "data/maps/GreatCrater/scripts.pory"
	case 7, GreatCraterMapscriptBundle_21
# 65 "data/maps/GreatCrater/scripts.pory"
	case 8, GreatCraterMapscriptBundle_22
# 68 "data/maps/GreatCrater/scripts.pory"
	case 9, GreatCraterMapscriptBundle_23
# 71 "data/maps/GreatCrater/scripts.pory"
	case 10, GreatCraterMapscriptBundle_24
	return

GreatCraterMapscriptBundle_2:
# 19 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	goto GreatCraterMapscriptBundle_1

GreatCraterMapscriptBundle_5:
# 22 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	goto GreatCraterMapscriptBundle_4

GreatCraterMapscriptBundle_8:
# 25 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	goto GreatCraterMapscriptBundle_7

GreatCraterMapscriptBundle_11:
# 28 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
# 29 "data/maps/GreatCrater/scripts.pory"
	goto enddaynightmusicgreatcrater
	goto GreatCraterMapscriptBundle_10

GreatCraterMapscriptBundle_14:
# 38 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 39 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 40 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

GreatCraterMapscriptBundle_15:
# 42 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 43 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 44 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

GreatCraterMapscriptBundle_16:
# 46 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 47 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 48 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

GreatCraterMapscriptBundle_17:
# 50 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 51 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 52 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

GreatCraterMapscriptBundle_18:
# 54 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 55 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

GreatCraterMapscriptBundle_19:
# 57 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 58 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

GreatCraterMapscriptBundle_20:
# 60 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 61 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

GreatCraterMapscriptBundle_21:
# 63 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 64 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

GreatCraterMapscriptBundle_22:
# 66 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 67 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

GreatCraterMapscriptBundle_23:
# 69 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 70 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

GreatCraterMapscriptBundle_24:
# 72 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 73 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return


RedoTouristWarning::
# 81 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq RedoTouristWarning_1
	return

RedoTouristWarning_1:
# 82 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 0
	return


DynamicWeatherCrater::
# 89 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATER_WEATHER, 0
	goto_if_gt DynamicWeatherCrater_2
DynamicWeatherCrater_1:
# 92 "data/maps/GreatCrater/scripts.pory"
	random 10
# 93 "data/maps/GreatCrater/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 94 "data/maps/GreatCrater/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/GreatCrater/scripts.pory"
	case 0, DynamicWeatherCrater_5
# 99 "data/maps/GreatCrater/scripts.pory"
	case 1, DynamicWeatherCrater_6
# 103 "data/maps/GreatCrater/scripts.pory"
	case 2, DynamicWeatherCrater_7
# 107 "data/maps/GreatCrater/scripts.pory"
	case 3, DynamicWeatherCrater_8
# 111 "data/maps/GreatCrater/scripts.pory"
	case 4, DynamicWeatherCrater_9
# 114 "data/maps/GreatCrater/scripts.pory"
	case 5, DynamicWeatherCrater_10
# 117 "data/maps/GreatCrater/scripts.pory"
	case 6, DynamicWeatherCrater_11
# 120 "data/maps/GreatCrater/scripts.pory"
	case 7, DynamicWeatherCrater_12
# 123 "data/maps/GreatCrater/scripts.pory"
	case 8, DynamicWeatherCrater_13
# 126 "data/maps/GreatCrater/scripts.pory"
	case 9, DynamicWeatherCrater_14
# 129 "data/maps/GreatCrater/scripts.pory"
	case 10, DynamicWeatherCrater_15
	return

DynamicWeatherCrater_2:
# 90 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterTVWeather
	goto DynamicWeatherCrater_1

DynamicWeatherCrater_5:
# 96 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 97 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 98 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

DynamicWeatherCrater_6:
# 100 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 101 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 102 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

DynamicWeatherCrater_7:
# 104 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 105 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 106 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

DynamicWeatherCrater_8:
# 108 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 109 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 110 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

DynamicWeatherCrater_9:
# 112 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 113 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_10:
# 115 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 116 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_11:
# 118 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 119 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_12:
# 121 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 122 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_13:
# 124 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 125 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_14:
# 127 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 128 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_15:
# 130 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 131 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return


GreatCraterTVWeather::
# 138 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 0, GreatCraterShade
# 139 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 1, GreatCraterAsh1
# 140 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 2, GreatCraterAsh2
# 141 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 3, GreatCraterEndAsh
# 143 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterShade::
# 147 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return


GreatCraterAsh1::
# 151 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 152 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 2
# 153 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterAsh2::
# 157 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 158 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 3
# 159 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterEndAsh::
# 164 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 165 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
# 166 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCrater_EventScript_TrendyPhraseBoy::
# 172 "data/maps/GreatCrater/scripts.pory"
	lock
# 173 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 174 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 175 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 176 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, YES, GreatCrater_EventScript_ConfirmTrendyPhrase
# 177 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GreatCrater_EventScript_RejectTrendyPhrase
	end


GreatCrater_EventScript_ConfirmTrendyPhrase::
# 184 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 185 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_RejectTrendyPhrase::
# 189 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 190 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 191 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 192 "data/maps/GreatCrater/scripts.pory"
	lock
# 193 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 194 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, GreatCrater_EventScript_GiveNewTrendyPhrase
# 195 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, GreatCrater_EventScript_CancelNewTrendyPhrase
	end


ReportersGreatCrater::
# 203 "data/maps/GreatCrater/scripts.pory"
	lockall
# 204 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 205 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 206 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, ReportersGreatCrater_2
ReportersGreatCrater_1:
# 364 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, ReportersGreatCrater_5
ReportersGreatCrater_4:
# 383 "data/maps/GreatCrater/scripts.pory"
finishreporterscript:
# 384 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 1
# 385 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 387 "data/maps/GreatCrater/scripts.pory"
	gettimeofday
# 388 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq ReportersGreatCrater_11
ReportersGreatCrater_10:
# 391 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq ReportersGreatCrater_20
ReportersGreatCrater_19:
# 394 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq ReportersGreatCrater_28
ReportersGreatCrater_27:
# 397 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ReportersGreatCrater_34
ReportersGreatCrater_33:
# 399 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

ReportersGreatCrater_2:
# 210 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 212 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_0
# 215 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 216 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 217 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_1
# 218 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 219 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 220 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_2
# 221 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 222 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 223 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_3
# 225 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 226 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 227 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 228 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 229 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_8
ReportersGreatCrater_7:
# 230 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_17
ReportersGreatCrater_16:
# 232 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 233 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 234 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 235 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_25
ReportersGreatCrater_24:
# 236 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_31
ReportersGreatCrater_30:
# 238 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 239 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 240 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_8
# 243 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_9, ReportersGreatCrater_Text_10, ReportersGreatCrater_Text_11
# 245 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_37
ReportersGreatCrater_36:
# 326 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_40
ReportersGreatCrater_39:
# 340 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ReportersGreatCrater_45
	goto ReportersGreatCrater_1

ReportersGreatCrater_5:
# 365 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 366 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 367 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 368 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_29
# 369 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 370 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_14
ReportersGreatCrater_13:
# 373 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_22
	goto ReportersGreatCrater_4

ReportersGreatCrater_8:
# 229 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_4
	goto ReportersGreatCrater_7

ReportersGreatCrater_11:
# 389 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	goto ReportersGreatCrater_10

ReportersGreatCrater_14:
# 371 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_13

ReportersGreatCrater_17:
# 230 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_5
	goto ReportersGreatCrater_16

ReportersGreatCrater_20:
# 392 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	goto ReportersGreatCrater_19

ReportersGreatCrater_22:
# 374 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 375 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_32
# 376 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 377 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 378 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 379 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 380 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
	goto ReportersGreatCrater_4

ReportersGreatCrater_25:
# 235 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_6
	goto ReportersGreatCrater_24

ReportersGreatCrater_28:
# 395 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	goto ReportersGreatCrater_27

ReportersGreatCrater_31:
# 236 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_7
	goto ReportersGreatCrater_30

ReportersGreatCrater_34:
# 398 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	goto ReportersGreatCrater_33

ReportersGreatCrater_37:
# 246 "data/maps/GreatCrater/scripts.pory"
acceptedtoplayrebel:
# 247 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 248 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_12
# 254 "data/maps/GreatCrater/scripts.pory"
retrytrendyphrase:
# 255 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 256 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 258 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ReportersGreatCrater_43
ReportersGreatCrater_42:
# 308 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReportersGreatCrater_47
	goto ReportersGreatCrater_36

ReportersGreatCrater_40:
# 327 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 328 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_23
# 330 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 331 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 332 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 333 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 334 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 336 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 337 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_39

ReportersGreatCrater_43:
# 259 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 261 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq ReportersGreatCrater_50
ReportersGreatCrater_49:
# 275 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 276 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_16
# 277 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 278 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 279 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_17
# 280 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 281 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 282 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 283 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 284 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_18
# 287 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 288 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 289 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 290 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_19
# 291 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 292 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 293 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 294 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 295 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 296 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 297 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 299 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 300 "data/maps/GreatCrater/scripts.pory"
	removeobject 2
# 301 "data/maps/GreatCrater/scripts.pory"
	removeobject 3
# 302 "data/maps/GreatCrater/scripts.pory"
	setflag reportersleavecrater
# 303 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 305 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_42

ReportersGreatCrater_45:
# 341 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 342 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_24
# 343 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 344 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 345 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_25
# 346 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_26, ReportersGreatCrater_Text_27
# 347 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_53
ReportersGreatCrater_52:
# 350 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_55
	goto ReportersGreatCrater_1

ReportersGreatCrater_47:
# 309 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 310 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_22
# 312 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 313 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_5
# 314 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 315 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_36

ReportersGreatCrater_50:
# 262 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 263 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_13
# 266 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 267 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 268 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_14
# 269 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 270 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 271 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_15
# 272 "data/maps/GreatCrater/scripts.pory"
	goto retrytrendyphrase
	goto ReportersGreatCrater_49

ReportersGreatCrater_53:
# 348 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_52

ReportersGreatCrater_55:
# 351 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 352 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 353 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_28
# 354 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 355 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 356 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 357 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 358 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 359 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_1


TrendyPhaseTest::
# 411 "data/maps/GreatCrater/scripts.pory"
	lockall
# 412 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 413 "data/maps/GreatCrater/scripts.pory"
	msgbox TrendyPhaseTest_Text_0
# 414 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCrater_EventScript_GiveNewTrendyPhrase::
# 419 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 420 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, GreatCrater_EventScript_PhraseNotTrendyEnough
# 422 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 426 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0
# 429 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 430 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1
# 432 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2
# 434 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 436 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 1
# 437 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 438 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 439 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_CancelNewTrendyPhrase::
# 444 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0
# 446 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 447 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 448 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 449 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 450 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 451 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 452 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_PhraseNotTrendyEnough::
# 456 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0
# 460 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 461 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


CameramanGreatCrater::
# 500 "data/maps/GreatCrater/scripts.pory"
	lockall
# 501 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 502 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, CameramanGreatCrater_2
CameramanGreatCrater_1:
# 506 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, CameramanGreatCrater_5
CameramanGreatCrater_4:
# 513 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

CameramanGreatCrater_2:
# 504 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_0
	goto CameramanGreatCrater_1

CameramanGreatCrater_5:
# 507 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 508 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 509 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_1
# 510 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 511 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_2
	goto CameramanGreatCrater_4


TouristGreatCraterApproach0::
# 521 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset TRAINER_TOURIST_GREATCRATER, TouristGreatCraterApproach0_1
# 535 "data/maps/GreatCrater/scripts.pory"
	release
	return

TouristGreatCraterApproach0_1:
# 522 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 523 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_DOLCEISLAND, FALSE
# 524 "data/maps/GreatCrater/scripts.pory"
	applymovement 6, TouristGreatCraterApproach0_Movement_0
# 525 "data/maps/GreatCrater/scripts.pory"
	waitmovement 6
# 526 "data/maps/GreatCrater/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_HIGH_PITCH
# 527 "data/maps/GreatCrater/scripts.pory"
	applymovement 13, TouristGreatCraterApproach0_Movement_1
# 528 "data/maps/GreatCrater/scripts.pory"
	waitmovement 13
# 530 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TouristGreatCraterApproach0_Movement_2
# 531 "data/maps/GreatCrater/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 533 "data/maps/GreatCrater/scripts.pory"
	call TouristGreatCraterBattle
	return


TouristGreatCraterApproach1::
# 539 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset TRAINER_TOURIST_GREATCRATER, TouristGreatCraterApproach1_1
# 555 "data/maps/GreatCrater/scripts.pory"
	release
	return

TouristGreatCraterApproach1_1:
# 540 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 541 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_DOLCEISLAND, FALSE
# 542 "data/maps/GreatCrater/scripts.pory"
	applymovement 6, TouristGreatCraterApproach0_Movement_0
# 543 "data/maps/GreatCrater/scripts.pory"
	waitmovement 6
# 544 "data/maps/GreatCrater/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_HIGH_PITCH
# 545 "data/maps/GreatCrater/scripts.pory"
	applymovement 13, TouristGreatCraterApproach0_Movement_1
# 546 "data/maps/GreatCrater/scripts.pory"
	waitmovement 13
# 547 "data/maps/GreatCrater/scripts.pory"
	applymovement 6, TouristGreatCraterApproach1_Movement_0
# 548 "data/maps/GreatCrater/scripts.pory"
	applymovement 13, TouristGreatCraterApproach1_Movement_0
# 550 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TouristGreatCraterApproach0_Movement_2
# 551 "data/maps/GreatCrater/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 553 "data/maps/GreatCrater/scripts.pory"
	call TouristGreatCraterBattle
	return


TouristGreatCraterApproach2::
# 559 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset TRAINER_TOURIST_GREATCRATER, TouristGreatCraterApproach2_1
# 575 "data/maps/GreatCrater/scripts.pory"
	release
	return

TouristGreatCraterApproach2_1:
# 560 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 561 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_DOLCEISLAND, FALSE
# 562 "data/maps/GreatCrater/scripts.pory"
	applymovement 6, TouristGreatCraterApproach0_Movement_0
# 563 "data/maps/GreatCrater/scripts.pory"
	waitmovement 6
# 564 "data/maps/GreatCrater/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_HIGH_PITCH
# 565 "data/maps/GreatCrater/scripts.pory"
	applymovement 13, TouristGreatCraterApproach0_Movement_1
# 566 "data/maps/GreatCrater/scripts.pory"
	waitmovement 13
# 567 "data/maps/GreatCrater/scripts.pory"
	applymovement 6, TouristGreatCraterApproach2_Movement_0
# 568 "data/maps/GreatCrater/scripts.pory"
	applymovement 13, TouristGreatCraterApproach2_Movement_0
# 570 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TouristGreatCraterApproach0_Movement_2
# 571 "data/maps/GreatCrater/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 573 "data/maps/GreatCrater/scripts.pory"
	call TouristGreatCraterBattle
	return


TouristGreatCraterBattle::
# 579 "data/maps/GreatCrater/scripts.pory"
	vsseeker_rematchid TRAINER_TOURIST_GREATCRATER
# 580 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro, TouristGreatCraterRegister
# 581 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 582 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TouristGreatCraterRematch
# 583 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
# 585 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRegister::
# 590 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 591 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 592 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRegister_Text_0
# 593 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_TOURIST_GREATCRATER
# 594 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_CRATERTOURISTFAPPROACH, 1
# 595 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRematch::
# 600 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro
# 601 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
	end


ConspiracySableye::
# 617 "data/maps/GreatCrater/scripts.pory"
	lock
# 618 "data/maps/GreatCrater/scripts.pory"
	applymovement 14, ReportersGreatCrater_Movement_0
# 619 "data/maps/GreatCrater/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_NORMAL
# 620 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracySableye_Text_0
# 621 "data/maps/GreatCrater/scripts.pory"
	release
	return


ConspiracyGreatCraterBattle::
# 625 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro, ConspiracyGreatCraterRegister
# 626 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 627 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ConspiracyGreatCraterRematch
# 628 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterBattle_Text_0
# 630 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRegister::
# 635 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 636 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 637 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_0
# 639 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_CONSPIRACY_GREATCRATER
# 640 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_1
# 642 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRematch::
# 647 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro2, ConspiracyGreatCrater_Outro2
# 648 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRematch_Text_0
	end


GreatCraterSouvenirShop::
# 671 "data/maps/GreatCrater/scripts.pory"
	lockall
# 672 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 673 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 674 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 0
# 675 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_BUYSOMETHINGWILLYA, FALSE
# 676 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShop_Text_0
# 677 "data/maps/GreatCrater/scripts.pory"
	pokemart ShopSouvenirs
# 678 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 1
# 679 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 681 "data/maps/GreatCrater/scripts.pory"
	gettimeofday
# 682 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq GreatCraterSouvenirShop_2
GreatCraterSouvenirShop_1:
# 685 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq GreatCraterSouvenirShop_5
GreatCraterSouvenirShop_4:
# 688 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq GreatCraterSouvenirShop_8
GreatCraterSouvenirShop_7:
# 691 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq GreatCraterSouvenirShop_11
GreatCraterSouvenirShop_10:
# 696 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

GreatCraterSouvenirShop_2:
# 683 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	goto GreatCraterSouvenirShop_1

GreatCraterSouvenirShop_5:
# 686 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	goto GreatCraterSouvenirShop_4

GreatCraterSouvenirShop_8:
# 689 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	goto GreatCraterSouvenirShop_7

GreatCraterSouvenirShop_11:
# 692 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	goto GreatCraterSouvenirShop_10


	.align 2
# 700 "data/maps/GreatCrater/scripts.pory"
ShopSouvenirs:
# 701 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 702 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 703 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 704 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

GreatCraterSouvenirShopkeeper::
# 709 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 710 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 711 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShopkeeper_Text_0
# 713 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 714 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_4
# 715 "data/maps/GreatCrater/scripts.pory"
	waitmovement 1
# 716 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirBox::
# 719 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirBox_Text_0
# 720 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSign::
# 723 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSign_Text_0
# 724 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirSupplies::
# 727 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirSupplies_Text_0
# 728 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterVoid::
# 731 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterVoid_Text_0
# 733 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


Cratertouristasksforhelp::
# 739 "data/maps/GreatCrater/scripts.pory"
	lock
# 740 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 741 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, TouristGreatCraterApproach0_Movement_0
# 742 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 743 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 744 "data/maps/GreatCrater/scripts.pory"
	msgbox Cratertouristasksforhelp_Text_0
# 745 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 749 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 1
# 750 "data/maps/GreatCrater/scripts.pory"
	dofieldeffectsparkle 11, 15, 9
# 751 "data/maps/GreatCrater/scripts.pory"
	release
	return


CraterTrappedTouristandRope::
# 755 "data/maps/GreatCrater/scripts.pory"
	lock
# 756 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 757 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq CraterTrappedTouristandRope_2
CraterTrappedTouristandRope_1:
# 838 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 2
	goto_if_eq CraterTrappedTouristandRope_5
CraterTrappedTouristandRope_4:
# 851 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 3
	goto_if_eq CraterTrappedTouristandRope_11
CraterTrappedTouristandRope_10:
# 857 "data/maps/GreatCrater/scripts.pory"
endcraterbottomtouristscript:
# 858 "data/maps/GreatCrater/scripts.pory"
	release
	return

CraterTrappedTouristandRope_2:
# 758 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_0
# 764 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 2
	checkitem ITEM_BINDING_BAND
# 0 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CraterTrappedTouristandRope_7
# 833 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_1

CraterTrappedTouristandRope_5:
	checkitem ITEM_BINDING_BAND
# 0 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CraterTrappedTouristandRope_14
CraterTrappedTouristandRope_13:
	checkitem ITEM_BINDING_BAND
# 0 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CraterTrappedTouristandRope_19
	goto CraterTrappedTouristandRope_4

CraterTrappedTouristandRope_7:
# 768 "data/maps/GreatCrater/scripts.pory"
helpcratertourist:
# 769 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_1
# 770 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 772 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CraterTrappedTouristandRope_17
CraterTrappedTouristandRope_16:
# 822 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterTrappedTouristandRope_21
	goto CraterTrappedTouristandRope_1

CraterTrappedTouristandRope_11:
# 853 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_11
# 854 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 855 "data/maps/GreatCrater/scripts.pory"
	warp MAP_GREAT_CRATER_BOTTOM, 0
	goto CraterTrappedTouristandRope_10

CraterTrappedTouristandRope_14:
# 840 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_9
# 843 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_13

CraterTrappedTouristandRope_17:
# 773 "data/maps/GreatCrater/scripts.pory"
	clearflag greatcraterrope
# 774 "data/maps/GreatCrater/scripts.pory"
	addobject 11
# 775 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 11, 15
# 776 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 11, 11, 15
# 777 "data/maps/GreatCrater/scripts.pory"
	showobjectat 11, MAP_GREAT_CRATER
# 779 "data/maps/GreatCrater/scripts.pory"
	playse SE_BALL_THROW
# 780 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_2
# 781 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 782 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, TouristGreatCraterApproach0_Movement_0
# 783 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_3
# 784 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 785 "data/maps/GreatCrater/scripts.pory"
	playse SE_M_BIND
# 786 "data/maps/GreatCrater/scripts.pory"
	waitse
# 787 "data/maps/GreatCrater/scripts.pory"
	playse SE_M_BIND
# 788 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_3
# 789 "data/maps/GreatCrater/scripts.pory"
	showobjectat 10, MAP_GREAT_CRATER
# 791 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CraterTrappedTouristandRope_Movement_0
# 792 "data/maps/GreatCrater/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 793 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_1
# 794 "data/maps/GreatCrater/scripts.pory"
	playse SE_LEDGE
# 795 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 798 "data/maps/GreatCrater/scripts.pory"
	waitse
# 800 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_2
# 801 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_4
# 803 "data/maps/GreatCrater/scripts.pory"
	giveitem ITEM_EVIOLITE
# 804 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_5
# 806 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_4
# 807 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_6
# 808 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_2
# 809 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_7
# 812 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_2
# 813 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 814 "data/maps/GreatCrater/scripts.pory"
	removeobject 10
# 815 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 0, 0
# 816 "data/maps/GreatCrater/scripts.pory"
	hideobjectat 10, MAP_GREAT_CRATER
# 817 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 3
# 818 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 819 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_16

CraterTrappedTouristandRope_19:
# 846 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_10
# 848 "data/maps/GreatCrater/scripts.pory"
	goto helpcratertourist
	goto CraterTrappedTouristandRope_4

CraterTrappedTouristandRope_21:
# 823 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_8
# 829 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_1


GreatCraterDevonGruntFemale::
# 865 "data/maps/GreatCrater/scripts.pory"
	lock
# 866 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 867 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_0
# 868 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_0
# 870 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_3
# 871 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_1
# 873 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_4
# 874 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_2
# 875 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 876 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 877 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_5
# 878 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 879 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterDevonGruntMale::
# 883 "data/maps/GreatCrater/scripts.pory"
	lock
# 884 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 885 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_0
# 886 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntMale_Text_0
# 888 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_5
# 889 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 890 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterTouristMaleIdle::
# 894 "data/maps/GreatCrater/scripts.pory"
	lock
# 895 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 896 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, ReportersGreatCrater_Movement_0
# 897 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterTouristMaleIdle_Text_0
# 899 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, GreatCraterTouristMaleIdle_Movement_0
# 900 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 901 "data/maps/GreatCrater/scripts.pory"
	release
	return


# 210 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_0:
# 210 "data/maps/GreatCrater/scripts.pory"
	face_player
	step_end

# 215 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_1:
# 215 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 218 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_2:
# 218 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_right
	step_end

# 221 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_3:
# 221 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_up
	step_end

# 266 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_4:
# 266 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_down
	step_end

# 312 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_5:
# 312 "data/maps/GreatCrater/scripts.pory"
	face_down
	step_end

# 524 "data/maps/GreatCrater/scripts.pory"
TouristGreatCraterApproach0_Movement_0:
# 524 "data/maps/GreatCrater/scripts.pory"
	emote_exclamation_mark
	step_end

# 527 "data/maps/GreatCrater/scripts.pory"
TouristGreatCraterApproach0_Movement_1:
# 527 "data/maps/GreatCrater/scripts.pory"
	jump_in_place_down
	step_end

# 530 "data/maps/GreatCrater/scripts.pory"
TouristGreatCraterApproach0_Movement_2:
# 530 "data/maps/GreatCrater/scripts.pory"
	face_up
	step_end

# 547 "data/maps/GreatCrater/scripts.pory"
TouristGreatCraterApproach1_Movement_0:
# 547 "data/maps/GreatCrater/scripts.pory"
	walk_down
	step_end

# 567 "data/maps/GreatCrater/scripts.pory"
TouristGreatCraterApproach2_Movement_0:
# 567 "data/maps/GreatCrater/scripts.pory"
	walk_down
# 567 "data/maps/GreatCrater/scripts.pory"
	walk_down
	step_end

# 791 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_0:
# 791 "data/maps/GreatCrater/scripts.pory"
	walk_right
# 791 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 793 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_1:
# 793 "data/maps/GreatCrater/scripts.pory"
	jump_up
	step_end

# 812 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_2:
# 812 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 812 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 812 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 812 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 812 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 812 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 812 "data/maps/GreatCrater/scripts.pory"
	walk_up
	step_end

# 899 "data/maps/GreatCrater/scripts.pory"
GreatCraterTouristMaleIdle_Movement_0:
# 899 "data/maps/GreatCrater/scripts.pory"
	face_left
	step_end

ReportersGreatCrater_Text_0:
# 212 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, look, Dan - an interesting-looking\n"
	.string "local just approached us!\p"
	.string "We're from Devon TV, and we're filming a\n"
	.string "documentary about the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}!\p"
	.string "However, our footage right now is\n"
	.string "lacking a bit of... flair.$"

ReportersGreatCrater_Text_1:
# 217 "data/maps/GreatCrater/scripts.pory"
	.string "Don't sugarcoat it, Kira. It's boring.$"

ReportersGreatCrater_Text_2:
# 220 "data/maps/GreatCrater/scripts.pory"
	.string "... a bit, perhaps. Which is why we were\n"
	.string "thinking about staging a battle!$"

ReportersGreatCrater_Text_3:
# 223 "data/maps/GreatCrater/scripts.pory"
	.string "We will pretend one of those dangerous\n"
	.string "{COLOR RED}Rebels{COLOR DARK_GRAY} have assailed us, and that we\l"
	.string "escaped by the skin of our teeth.$"

ReportersGreatCrater_Text_4:
# 229 "data/maps/GreatCrater/scripts.pory"
	.string "He looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_5:
# 230 "data/maps/GreatCrater/scripts.pory"
	.string "She looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_6:
# 235 "data/maps/GreatCrater/scripts.pory"
	.string "Right? Which makes him perfect to play\n"
	.string "the role of {COLOR RED}Rebel{COLOR DARK_GRAY}!$"

ReportersGreatCrater_Text_7:
# 236 "data/maps/GreatCrater/scripts.pory"
	.string "Right? Which makes her perfect to play\n"
	.string "the role of {COLOR RED}Rebel{COLOR DARK_GRAY}!$"

ReportersGreatCrater_Text_8:
# 240 "data/maps/GreatCrater/scripts.pory"
	.string "We need you to win, of course - it would\n"
	.string "not be very exciting if we just beat a\l"
	.string "dangerous {COLOR RED}Rebel{COLOR DARK_GRAY} like nothing!\p"
	.string "So, will you help us? We will pay you\n"
	.string "handsomely for your time!$"

ReportersGreatCrater_Text_9:
# 243 "data/maps/GreatCrater/scripts.pory"
	.string "Sure$"

ReportersGreatCrater_Text_10:
# 243 "data/maps/GreatCrater/scripts.pory"
	.string "No chance$"

ReportersGreatCrater_Text_11:
# 243 "data/maps/GreatCrater/scripts.pory"
	.string "That's lying$"

ReportersGreatCrater_Text_12:
# 248 "data/maps/GreatCrater/scripts.pory"
	.string "Excellent - let's begin right away!\p"
	.string "At the count of three, please yell your\n"
	.string "most heinous insult, warcry, or similar\l"
	.string "to the camera.\p"
	.string "Then we take out our Pokémon, and have\n"
	.string "at it!\p"
	.string "Ready? Three, two, one... action!$"

ReportersGreatCrater_Text_13:
# 263 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, uhm... I'm sorry. I don't think we can\n"
	.string "have you saying “{STR_VAR_2},” in\l"
	.string "the documentary.\p"
	.string "That term has some implications I can't\n"
	.string "go over right now. Let's say some would\l"
	.string "get offended!$"

ReportersGreatCrater_Text_14:
# 268 "data/maps/GreatCrater/scripts.pory"
	.string "She means it's censored. So come up with\n"
	.string "something else, will you?$"

ReportersGreatCrater_Text_15:
# 271 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}As eloquent as ever, Dan...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_16:
# 276 "data/maps/GreatCrater/scripts.pory"
	.string "KYAAA! Someone help!! I am being\n"
	.string "ASSAILED!$"

ReportersGreatCrater_Text_17:
# 279 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}'Kyaa'? Really...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_18:
# 284 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.$"

ReportersGreatCrater_Text_19:
# 290 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is a great warcry.\p"
	.string "With the right editing, it may even get\n"
	.string "viral.$"

ReportersGreatCrater_Text_20:
# 293 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record some more in\l"
	.string "other locations.$"

ReportersGreatCrater_Text_21:
# 296 "data/maps/GreatCrater/scripts.pory"
	.string "Thanks for your help again - stay safe!$"

ReportersGreatCrater_Text_22:
# 310 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fright,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

ReportersGreatCrater_Text_23:
# 328 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, that's so unfortunate! Are you\n"
	.string "certain?\p"
	.string "We'll be here a while if you reconsider -\n"
	.string "which we beg you to do!$"

ReportersGreatCrater_Text_24:
# 342 "data/maps/GreatCrater/scripts.pory"
	.string "Lying? I wouldn't call it that. It's just\n"
	.string "a bit of showmanship!$"

ReportersGreatCrater_Text_25:
# 345 "data/maps/GreatCrater/scripts.pory"
	.string "If you won't help us, someone will. Why\n"
	.string "not take the pokeyen for yourself?$"

ReportersGreatCrater_Text_26:
# 346 "data/maps/GreatCrater/scripts.pory"
	.string "Okay, I'm in$"

ReportersGreatCrater_Text_27:
# 346 "data/maps/GreatCrater/scripts.pory"
	.string "Leave me out of this$"

ReportersGreatCrater_Text_28:
# 353 "data/maps/GreatCrater/scripts.pory"
	.string "Well, suit yourself. We'll be here a while\n"
	.string "if you change your mind.$"

ReportersGreatCrater_Text_29:
# 368 "data/maps/GreatCrater/scripts.pory"
	.string "Have you changed your mind? Will you\n"
	.string "help us stage a battle?$"

ReportersGreatCrater_Text_30:
# 369 "data/maps/GreatCrater/scripts.pory"
	.string "Yes$"

ReportersGreatCrater_Text_31:
# 369 "data/maps/GreatCrater/scripts.pory"
	.string "No$"

ReportersGreatCrater_Text_32:
# 375 "data/maps/GreatCrater/scripts.pory"
	.string "That's too bad... I think you'd be such a\n"
	.string "star!$"

TrendyPhaseTest_Text_0:
# 413 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is awesome.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0:
# 426 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.\p"
	.string "... that's an amazing warcry$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1:
# 430 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_2} is a great warcry. With\n"
	.string "the right editing, it may even get viral.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2:
# 432 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record in other\l"
	.string "places.$"

GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0:
# 444 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fear,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0:
# 456 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, uhm... I'm sorry. I don't think we can\n"
	.string "have you saying “{STR_VAR_2},” in\l"
	.string "the documentary.\p"
	.string "It's got some implications I can't go\n"
	.string "over right now. Let's say many people\l"
	.string "would get offended.\p"
	.string "Would you mind coming up with a\n"
	.string "different warcry? We'll reshoot when\l"
	.string "you do!$"

CameramanGreatCrater_Text_0:
# 504 "data/maps/GreatCrater/scripts.pory"
	.string "The cameraman seems to disregard\n"
	.string "{PLAYER} entirely.$"

CameramanGreatCrater_Text_1:
# 509 "data/maps/GreatCrater/scripts.pory"
	.string "It's easy money. You won't get far in\n"
	.string "the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY} by being moral.$"

CameramanGreatCrater_Text_2:
# 511 "data/maps/GreatCrater/scripts.pory"
	.string "I know from experience...$"

TouristGreatCraterBattle_Text_0:
# 583 "data/maps/GreatCrater/scripts.pory"
	.string "Pictures are great and all, but there's\n"
	.string "nothing like an exciting moment to\l"
	.string "imprint a memory.$"

TouristGreatCraterRegister_Text_0:
# 592 "data/maps/GreatCrater/scripts.pory"
	.string "That was exciting! Let's do this again -\n"
	.string "here's my Devonav profile!$"

ConspiracySableye_Text_0:
# 620 "data/maps/GreatCrater/scripts.pory"
	.string "Saaa...$"

ConspiracyGreatCraterBattle_Text_0:
# 628 "data/maps/GreatCrater/scripts.pory"
	.string "Sorry, but my device has been\n"
	.string "compromised.\p"
	.string "You'll have to learn the truth about\n"
	.string "Safemon elsewhere!$"

ConspiracyGreatCraterRegister_Text_0:
# 637 "data/maps/GreatCrater/scripts.pory"
	.string "Before I tell you, let's put our\n"
	.string "Devonnavs in airplane mode.\p"
	.string "Where was the option now...?$"

ConspiracyGreatCraterRegister_Text_1:
# 640 "data/maps/GreatCrater/scripts.pory"
	.string "Oops, wrong button. Wait, no... I'm\n"
	.string "pretty sure I pressed the right one.\p"
	.string "That's it, I've been HACKED BY DEVON!$"

ConspiracyGreatCraterRematch_Text_0:
# 648 "data/maps/GreatCrater/scripts.pory"
	.string "The truth is... I don't know any of\n"
	.string "Devon's secrets.\p"
	.string "I just like to make things up to look\n"
	.string "interesting. It's a problem I have.$"

GreatCraterSouvenirShop_Text_0:
# 676 "data/maps/GreatCrater/scripts.pory"
	.string "Welcome to the Great Crater's Souvenir\n"
	.string "Shop!$"

GreatCraterSouvenirShopkeeper_Text_0:
# 711 "data/maps/GreatCrater/scripts.pory"
	.string "I know this is not {COLOR BLUE}New Rustboro Mall{COLOR DARK_GRAY},\n"
	.string "but let's be civil hey?\p"
	.string "If you want to buy, go around the\n"
	.string "counter.$"

GreatCraterSouvenirBox_Text_0:
# 719 "data/maps/GreatCrater/scripts.pory"
	.string "The box is full of questionably\n"
	.string "preserved donuts.$"

GreatCraterSign_Text_0:
# 723 "data/maps/GreatCrater/scripts.pory"
	.string "{UP_ARROW} North - Road 002\n"
	.string "{RIGHT_ARROW} East - Route 101$"

GreatCraterSouvenirSupplies_Text_0:
# 727 "data/maps/GreatCrater/scripts.pory"
	.string "The articles are covered by the same\n"
	.string "dust that's everywhere.$"

GreatCraterVoid_Text_0:
# 731 "data/maps/GreatCrater/scripts.pory"
	.string "The pitch-black bottom of the crater is\n"
	.string "too deep beneath to see.\p"
	.string "With the right equipment, one could\n"
	.string "climb down and explore it...$"

Cratertouristasksforhelp_Text_0:
# 744 "data/maps/GreatCrater/scripts.pory"
	.string "O-oh, hey! HEEEY! Is there anyone up\n"
	.string "there? Somebody HELP ME!$"

CraterTrappedTouristandRope_Text_0:
# 758 "data/maps/GreatCrater/scripts.pory"
	.string "Aah, thank the heavens! You may not be\n"
	.string "able to see me, but I'm down here!\p"
	.string "I wanted to take a good picture of the\n"
	.string "crater, so I leaned in and...\p"
	.string "I slipped with the sand and fell!\p"
	.string "I'm okay, the sand cushioned my fall...\n"
	.string "but I can't get out!\p"
	.string "Can you go get some rope? Something\n"
	.string "like a strong {COLOR RED}Sailor Knot{COLOR DARK_GRAY} would do.\p"
	.string "Please, hurry up... there's a suspicious\n"
	.string "old man down here, and I want nothing to\l"
	.string "do with him!$"

CraterTrappedTouristandRope_Text_1:
# 769 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to help the person?$"

CraterTrappedTouristandRope_Text_2:
# 780 "data/maps/GreatCrater/scripts.pory"
	.string "{PLAYER} ties the knot firmly to a\n"
	.string "rock and lets the rest fall down.$"

CraterTrappedTouristandRope_Text_3:
# 783 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, you're a life-saver!$"

CraterTrappedTouristandRope_Text_4:
# 801 "data/maps/GreatCrater/scripts.pory"
	.string "My hero! I don't know what I would have\n"
	.string "done without you!\p"
	.string "But I know what I'll do now. Reward you\n"
	.string "for your generosity!$"

CraterTrappedTouristandRope_Text_5:
# 804 "data/maps/GreatCrater/scripts.pory"
	.string "A friend gifted me this before my trip,\n"
	.string "saying it'll keep me safe...\p"
	.string "Well, it clearly doesn't work, so you can\n"
	.string "have it!$"

CraterTrappedTouristandRope_Text_6:
# 807 "data/maps/GreatCrater/scripts.pory"
	.string "Wait... maybe it's thanks to it that you\n"
	.string "found me?$"

CraterTrappedTouristandRope_Text_7:
# 809 "data/maps/GreatCrater/scripts.pory"
	.string "Well, nevermind. I don't plan to leave\n"
	.string "{COLOR BLUE}New Rustboro{COLOR DARK_GRAY} ever again, so I won't\l"
	.string "need it.\p"
	.string "Goodbye now, and watch your footing!$"

CraterTrappedTouristandRope_Text_8:
# 823 "data/maps/GreatCrater/scripts.pory"
	.string "Hey... HEY! What are you waiting for!?\n"
	.string "Why are you HESITATING!?\p"
	.string "Do you think it'd be FUNNY to leave me\n"
	.string "here a while longer, you...\p"
	.string "YOU CRIPPLED PSYCHOPATH!\p"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}... oh no. {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh no no no. I'm so sorry. I\n"
	.string "didn't mean that! It was the panic!\p"
	.string "Please, you need to help me. I'm turning\n"
	.string "crazy down here. Just use the rope, I'm\l"
	.string "begging you!$"

CraterTrappedTouristandRope_Text_9:
# 840 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! But... I don't see that\n"
	.string "{COLOR RED}Sailor Knot{COLOR DARK_GRAY} on you!\p"
	.string "I appreciate you checking on me, but I'd\n"
	.string "appreciate it even more if you focused\l"
	.string "on helping me get out!\p"
	.string "I'm begging you here!$"

CraterTrappedTouristandRope_Text_10:
# 846 "data/maps/GreatCrater/scripts.pory"
	.string "There you are! And I see you've brought\n"
	.string "the {COLOR RED}Sailor Knot{COLOR DARK_GRAY}!\p"
	.string "Quick, tie it to something and let it\n"
	.string "fall!$"

CraterTrappedTouristandRope_Text_11:
# 853 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to climb down?$"

GreatCraterDevonGruntFemale_Text_0:
# 868 "data/maps/GreatCrater/scripts.pory"
	.string "I'm sorry, but one of our scientists is\n"
	.string "currently searching for a dangerous\l"
	.string "Pokémon in {COLOR GREEN}Road 002{COLOR DARK_GRAY}.$"

GreatCraterDevonGruntFemale_Text_1:
# 871 "data/maps/GreatCrater/scripts.pory"
	.string "The creature in question is next on the\n"
	.string "list of Pokémon to be safened, and we\l"
	.string "can't risk civilians interfering with his\l"
	.string "work.$"

GreatCraterDevonGruntFemale_Text_2:
# 874 "data/maps/GreatCrater/scripts.pory"
	.string "You have been hurt by a Pokémon, do\n"
	.string "you? Surely you understand.$"

GreatCraterDevonGruntMale_Text_0:
# 886 "data/maps/GreatCrater/scripts.pory"
	.string "By regulation of Devon Co.'s Wildlife\n"
	.string "Protocol, section 75, titled “Route\l"
	.string "Enclosures for the purpose of Safemon\l"
	.string "Research...”\p"
	.string "This area is closed off to civilians\n"
	.string "until further notice.$"

GreatCraterTouristMaleIdle_Text_0:
# 897 "data/maps/GreatCrater/scripts.pory"
	.string "I once ordered a donut in Pewter City,\n"
	.string "and they gave me a riceball instead!\p"
	.string "At least you know what donuts are here\n"
	.string "in Hoenn.$"

ReportersGreatCrater_Outro::
# 404 "data/maps/GreatCrater/scripts.pory"
	.string "That was cinema! Here - this is for\nyour trouble!$"

GreatCrater_Text_XIsTheBiggestHappeningThingRight::
# 466 "data/maps/GreatCrater/scripts.pory"
	.string "In New Rustboro, {STR_VAR_1} is trendy.$"

GreatCrater_Text_TellMeWhatsNewAndIn::
# 470 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} Not trendy? Tell me what's trendy then.$"

GreatCrater_Text_OfCourseIKnowAboutThat::
# 475 "data/maps/GreatCrater/scripts.pory"
	.string "You're right. “{STR_VAR_1}” is old news, {STR_VAR_2} is the shit now.$"

GreatCrater_Text_XHuhIThinkYIsCool::
# 481 "data/maps/GreatCrater/scripts.pory"
	.string "Nah, {STR_VAR_2} is lame, {STR_VAR_1} is the cool thing.$"

GreatCrater_Text_HearOfAnyTrendsComeShareWithMe::
# 487 "data/maps/GreatCrater/scripts.pory"
	.string "Well, share with me later.$"

GreatCrater_Text_YeahDefinitionOfInRightNow::
# 492 "data/maps/GreatCrater/scripts.pory"
	.string "Yeah, {STR_VAR_1} is what's in.$"

TouristGreatCrater_Intro::
# 607 "data/maps/GreatCrater/scripts.pory"
	.string "This crater is a breathtaking sight...\pBut it would be even more memorable\nafter a battle!$"

TouristGreatCrater_Outro::
# 610 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, yes... I'll never forget this!$"

ConspiracyGreatCrater_Intro::
# 654 "data/maps/GreatCrater/scripts.pory"
	.string "Hehe... do you know the real reason why\nDevon is making Safemon?\pI'll tell you if you beat me!$"

ConspiracyGreatCrater_Outro::
# 657 "data/maps/GreatCrater/scripts.pory"
	.string "Alright, listen closely...$"

ConspiracyGreatCrater_Intro2::
# 660 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! This time, I'll really tell\n you the truth behind Safemon...\p But only if you beat me!$"

ConspiracyGreatCrater_Outro2::
# 664 "data/maps/GreatCrater/scripts.pory"
	.string "You've earned the right to the truth. Listen...$"
