# 1 "data/maps/GreatCrater/scripts.pory"


GreatCrater_MapScripts::
# 8 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GreatCraterWeather
# 11 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RedoTouristWarning
# 13 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GreatCraterWeather
# 14 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DayNightMusicGreatCrater
	.byte 0


DayNightMusicGreatCrater::
# 18 "data/maps/GreatCrater/scripts.pory"
	gettimeofday
# 19 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_MORNING
	goto_if_eq DayNightMusicGreatCrater_2
DayNightMusicGreatCrater_1:
# 22 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_DAY
	goto_if_eq DayNightMusicGreatCrater_5
DayNightMusicGreatCrater_4:
# 25 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_EVENING
	goto_if_eq DayNightMusicGreatCrater_8
DayNightMusicGreatCrater_7:
# 28 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq DayNightMusicGreatCrater_11
DayNightMusicGreatCrater_10:
# 32 "data/maps/GreatCrater/scripts.pory"
enddaynightmusicgreatcrater:
	return

DayNightMusicGreatCrater_2:
# 20 "data/maps/GreatCrater/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicGreatCrater_1

DayNightMusicGreatCrater_5:
# 23 "data/maps/GreatCrater/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicGreatCrater_4

DayNightMusicGreatCrater_8:
# 26 "data/maps/GreatCrater/scripts.pory"
	goto enddaynightmusiccemetery
	goto DayNightMusicGreatCrater_7

DayNightMusicGreatCrater_11:
# 29 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
# 30 "data/maps/GreatCrater/scripts.pory"
	goto enddaynightmusicgreatcrater
	goto DayNightMusicGreatCrater_10


RedoTouristWarning::
# 37 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq RedoTouristWarning_1
	return

RedoTouristWarning_1:
# 38 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 0
	return


DynamicWeatherCrater::
# 44 "data/maps/GreatCrater/scripts.pory"
	random 10
# 45 "data/maps/GreatCrater/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 46 "data/maps/GreatCrater/scripts.pory"
	switch VAR_RESULT
# 47 "data/maps/GreatCrater/scripts.pory"
	case 0, DynamicWeatherCrater_2
# 51 "data/maps/GreatCrater/scripts.pory"
	case 1, DynamicWeatherCrater_3
# 55 "data/maps/GreatCrater/scripts.pory"
	case 2, DynamicWeatherCrater_4
# 59 "data/maps/GreatCrater/scripts.pory"
	case 3, DynamicWeatherCrater_5
# 63 "data/maps/GreatCrater/scripts.pory"
	case 4, DynamicWeatherCrater_6
# 66 "data/maps/GreatCrater/scripts.pory"
	case 5, DynamicWeatherCrater_7
# 69 "data/maps/GreatCrater/scripts.pory"
	case 6, DynamicWeatherCrater_8
# 72 "data/maps/GreatCrater/scripts.pory"
	case 7, DynamicWeatherCrater_9
# 75 "data/maps/GreatCrater/scripts.pory"
	case 8, DynamicWeatherCrater_10
# 78 "data/maps/GreatCrater/scripts.pory"
	case 9, DynamicWeatherCrater_11
# 81 "data/maps/GreatCrater/scripts.pory"
	case 10, DynamicWeatherCrater_12
	return

DynamicWeatherCrater_2:
# 48 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 49 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 50 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

DynamicWeatherCrater_3:
# 52 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 53 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 54 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

DynamicWeatherCrater_4:
# 56 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 57 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 58 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

DynamicWeatherCrater_5:
# 60 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 61 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_STORM, TRUE
# 62 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
	return

DynamicWeatherCrater_6:
# 64 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 65 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_7:
# 67 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 68 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_8:
# 70 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 71 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_9:
# 73 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 74 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_10:
# 76 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 77 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_11:
# 79 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 80 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return

DynamicWeatherCrater_12:
# 82 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
# 83 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
	return


GreatCraterWeather::
# 90 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 0, GreatCraterShade
# 91 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 1, GreatCraterAsh1
# 92 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 2, GreatCraterAsh2
# 93 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 3, GreatCraterEndAsh
# 95 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterShade::
# 99 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return


GreatCraterAsh1::
# 103 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 104 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 2
# 105 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterAsh2::
# 109 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 110 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 3
# 111 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterEndAsh::
# 116 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 117 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
# 118 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCrater_EventScript_TrendyPhraseBoy::
# 124 "data/maps/GreatCrater/scripts.pory"
	lock
# 125 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 126 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 127 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 128 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, YES, GreatCrater_EventScript_ConfirmTrendyPhrase
# 129 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GreatCrater_EventScript_RejectTrendyPhrase
	end


GreatCrater_EventScript_ConfirmTrendyPhrase::
# 136 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 137 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_RejectTrendyPhrase::
# 141 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 142 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 143 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 144 "data/maps/GreatCrater/scripts.pory"
	lock
# 145 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 146 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, GreatCrater_EventScript_GiveNewTrendyPhrase
# 147 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, GreatCrater_EventScript_CancelNewTrendyPhrase
	end


ReportersGreatCrater::
# 155 "data/maps/GreatCrater/scripts.pory"
	lockall
# 156 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 157 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 158 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, ReportersGreatCrater_2
ReportersGreatCrater_1:
# 316 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, ReportersGreatCrater_5
ReportersGreatCrater_4:
# 335 "data/maps/GreatCrater/scripts.pory"
finishreporterscript:
# 336 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 1
# 337 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 338 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 339 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

ReportersGreatCrater_2:
# 162 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 164 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_0
# 167 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 168 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 169 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_1
# 170 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 171 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 172 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_2
# 173 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 174 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 175 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_3
# 177 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 178 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 179 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 180 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 181 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_8
ReportersGreatCrater_7:
# 182 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_14
ReportersGreatCrater_13:
# 184 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 185 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 186 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 187 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_19
ReportersGreatCrater_18:
# 188 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_22
ReportersGreatCrater_21:
# 190 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 191 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 192 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_8
# 195 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_9, ReportersGreatCrater_Text_10, ReportersGreatCrater_Text_11
# 197 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_25
ReportersGreatCrater_24:
# 278 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_28
ReportersGreatCrater_27:
# 292 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ReportersGreatCrater_33
	goto ReportersGreatCrater_1

ReportersGreatCrater_5:
# 317 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 318 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 319 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 320 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_29
# 321 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 322 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_11
ReportersGreatCrater_10:
# 325 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_16
	goto ReportersGreatCrater_4

ReportersGreatCrater_8:
# 181 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_4
	goto ReportersGreatCrater_7

ReportersGreatCrater_11:
# 323 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_10

ReportersGreatCrater_14:
# 182 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_5
	goto ReportersGreatCrater_13

ReportersGreatCrater_16:
# 326 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 327 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_32
# 328 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 329 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 330 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 331 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 332 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
	goto ReportersGreatCrater_4

ReportersGreatCrater_19:
# 187 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_6
	goto ReportersGreatCrater_18

ReportersGreatCrater_22:
# 188 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_7
	goto ReportersGreatCrater_21

ReportersGreatCrater_25:
# 198 "data/maps/GreatCrater/scripts.pory"
acceptedtoplayrebel:
# 199 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 200 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_12
# 206 "data/maps/GreatCrater/scripts.pory"
retrytrendyphrase:
# 207 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 208 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 210 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ReportersGreatCrater_31
ReportersGreatCrater_30:
# 260 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReportersGreatCrater_35
	goto ReportersGreatCrater_24

ReportersGreatCrater_28:
# 279 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 280 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_23
# 282 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 283 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 284 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 285 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 286 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 288 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 289 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_27

ReportersGreatCrater_31:
# 211 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 213 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq ReportersGreatCrater_38
ReportersGreatCrater_37:
# 227 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 228 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_16
# 229 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 230 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 231 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_17
# 232 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 233 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 234 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 235 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 236 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_18
# 239 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 240 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 241 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 242 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_19
# 243 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 244 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 245 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 246 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 247 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 248 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 249 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 251 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 252 "data/maps/GreatCrater/scripts.pory"
	removeobject 2
# 253 "data/maps/GreatCrater/scripts.pory"
	removeobject 3
# 254 "data/maps/GreatCrater/scripts.pory"
	setflag reportersleavecrater
# 255 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 257 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_30

ReportersGreatCrater_33:
# 293 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 294 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_24
# 295 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 296 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 297 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_25
# 298 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_26, ReportersGreatCrater_Text_27
# 299 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_41
ReportersGreatCrater_40:
# 302 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_43
	goto ReportersGreatCrater_1

ReportersGreatCrater_35:
# 261 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 262 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_22
# 264 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 265 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_5
# 266 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 267 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_24

ReportersGreatCrater_38:
# 214 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 215 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_13
# 218 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 219 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 220 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_14
# 221 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 222 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 223 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_15
# 224 "data/maps/GreatCrater/scripts.pory"
	goto retrytrendyphrase
	goto ReportersGreatCrater_37

ReportersGreatCrater_41:
# 300 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_40

ReportersGreatCrater_43:
# 303 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 304 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 305 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_28
# 306 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 307 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 308 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 309 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 310 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 311 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_1


TrendyPhaseTest::
# 351 "data/maps/GreatCrater/scripts.pory"
	lockall
# 352 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 353 "data/maps/GreatCrater/scripts.pory"
	msgbox TrendyPhaseTest_Text_0
# 354 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCrater_EventScript_GiveNewTrendyPhrase::
# 359 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 360 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, GreatCrater_EventScript_PhraseNotTrendyEnough
# 362 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 366 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0
# 369 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 370 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1
# 372 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2
# 374 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 376 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 1
# 377 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 378 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 379 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_CancelNewTrendyPhrase::
# 384 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0
# 386 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 387 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 388 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 389 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 390 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 391 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 392 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_PhraseNotTrendyEnough::
# 396 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0
# 400 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 401 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


CameramanGreatCrater::
# 440 "data/maps/GreatCrater/scripts.pory"
	lockall
# 441 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 442 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, CameramanGreatCrater_2
CameramanGreatCrater_1:
# 446 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, CameramanGreatCrater_5
CameramanGreatCrater_4:
# 453 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

CameramanGreatCrater_2:
# 444 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_0
	goto CameramanGreatCrater_1

CameramanGreatCrater_5:
# 447 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 448 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 449 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_1
# 450 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 451 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_2
	goto CameramanGreatCrater_4


TouristGreatCraterBattle::
# 459 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro, TouristGreatCraterRegister
# 460 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 461 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TouristGreatCraterRematch
# 462 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
# 464 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRegister::
# 469 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 470 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 471 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRegister_Text_0
# 472 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_TOURIST_GREATCRATER
# 473 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRematch::
# 478 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro
# 479 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
	end


ConspiracyGreatCraterBattle::
# 495 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro, ConspiracyGreatCraterRegister
# 496 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 497 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ConspiracyGreatCraterRematch
# 498 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterBattle_Text_0
# 500 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRegister::
# 505 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 506 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 507 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_0
# 509 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_CONSPIRACY_GREATCRATER
# 510 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_1
# 512 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRematch::
# 517 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro2, ConspiracyGreatCrater_Outro2
# 518 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRematch_Text_0
	end


GreatCraterSouvenirShop::
# 541 "data/maps/GreatCrater/scripts.pory"
	lockall
# 542 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 543 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 544 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 0
# 545 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_BUYSOMETHINGWILLYA, FALSE
# 546 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShop_Text_0
# 547 "data/maps/GreatCrater/scripts.pory"
	pokemart ShopSouvenirs
# 548 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 1
# 549 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 550 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 551 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


	.align 2
# 555 "data/maps/GreatCrater/scripts.pory"
ShopSouvenirs:
# 556 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 557 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 558 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 559 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

GreatCraterSouvenirShopkeeper::
# 564 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 565 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 566 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShopkeeper_Text_0
# 568 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 569 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_4
# 570 "data/maps/GreatCrater/scripts.pory"
	waitmovement 1
# 571 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirBox::
# 574 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirBox_Text_0
# 575 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSign::
# 578 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSign_Text_0
# 579 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirSupplies::
# 582 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirSupplies_Text_0
# 583 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterVoid::
# 586 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterVoid_Text_0
# 588 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


Cratertouristasksforhelp::
# 594 "data/maps/GreatCrater/scripts.pory"
	lock
# 595 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 596 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 597 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 598 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 599 "data/maps/GreatCrater/scripts.pory"
	msgbox Cratertouristasksforhelp_Text_0
# 600 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 604 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 1
# 605 "data/maps/GreatCrater/scripts.pory"
	dofieldeffectsparkle 11, 15, 9
# 606 "data/maps/GreatCrater/scripts.pory"
	release
	return


CraterTrappedTouristandRope::
# 610 "data/maps/GreatCrater/scripts.pory"
	lock
# 611 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 612 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq CraterTrappedTouristandRope_2
CraterTrappedTouristandRope_1:
# 693 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 2
	goto_if_eq CraterTrappedTouristandRope_5
CraterTrappedTouristandRope_4:
# 706 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 3
	goto_if_eq CraterTrappedTouristandRope_11
CraterTrappedTouristandRope_10:
# 712 "data/maps/GreatCrater/scripts.pory"
endcraterbottomtouristscript:
# 713 "data/maps/GreatCrater/scripts.pory"
	release
	return

CraterTrappedTouristandRope_2:
# 613 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_0
# 619 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 2
	checkitem ITEM_BINDING_BAND
# 0 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CraterTrappedTouristandRope_7
# 688 "data/maps/GreatCrater/scripts.pory"
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
# 623 "data/maps/GreatCrater/scripts.pory"
helpcratertourist:
# 624 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_1
# 625 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 627 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CraterTrappedTouristandRope_17
CraterTrappedTouristandRope_16:
# 677 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterTrappedTouristandRope_21
	goto CraterTrappedTouristandRope_1

CraterTrappedTouristandRope_11:
# 708 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_11
# 709 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 710 "data/maps/GreatCrater/scripts.pory"
	warp MAP_GREAT_CRATER_BOTTOM, 0
	goto CraterTrappedTouristandRope_10

CraterTrappedTouristandRope_14:
# 695 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_9
# 698 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_13

CraterTrappedTouristandRope_17:
# 628 "data/maps/GreatCrater/scripts.pory"
	clearflag greatcraterrope
# 629 "data/maps/GreatCrater/scripts.pory"
	addobject 11
# 630 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 11, 15
# 631 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 11, 11, 15
# 632 "data/maps/GreatCrater/scripts.pory"
	showobjectat 11, MAP_GREAT_CRATER
# 634 "data/maps/GreatCrater/scripts.pory"
	playse SE_BALL_THROW
# 635 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_2
# 636 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 637 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 638 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_3
# 639 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 640 "data/maps/GreatCrater/scripts.pory"
	playse SE_M_BIND
# 641 "data/maps/GreatCrater/scripts.pory"
	waitse
# 642 "data/maps/GreatCrater/scripts.pory"
	playse SE_M_BIND
# 643 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_3
# 644 "data/maps/GreatCrater/scripts.pory"
	showobjectat 10, MAP_GREAT_CRATER
# 646 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CraterTrappedTouristandRope_Movement_0
# 647 "data/maps/GreatCrater/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 648 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_1
# 649 "data/maps/GreatCrater/scripts.pory"
	playse SE_LEDGE
# 650 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 653 "data/maps/GreatCrater/scripts.pory"
	waitse
# 655 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_2
# 656 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_4
# 658 "data/maps/GreatCrater/scripts.pory"
	giveitem ITEM_EVIOLITE
# 659 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_5
# 661 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_4
# 662 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_6
# 663 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_2
# 664 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_7
# 667 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_2
# 668 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 669 "data/maps/GreatCrater/scripts.pory"
	removeobject 10
# 670 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 0, 0
# 671 "data/maps/GreatCrater/scripts.pory"
	hideobjectat 10, MAP_GREAT_CRATER
# 672 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 3
# 673 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 674 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_16

CraterTrappedTouristandRope_19:
# 701 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_10
# 703 "data/maps/GreatCrater/scripts.pory"
	goto helpcratertourist
	goto CraterTrappedTouristandRope_4

CraterTrappedTouristandRope_21:
# 678 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_8
# 684 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_1


GreatCraterDevonGruntFemale::
# 720 "data/maps/GreatCrater/scripts.pory"
	lock
# 721 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 722 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_0
# 723 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_0
# 725 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_3
# 726 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_1
# 728 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_4
# 729 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_2
# 730 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 731 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 732 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_5
# 733 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 734 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterDevonGruntMale::
# 738 "data/maps/GreatCrater/scripts.pory"
	lock
# 739 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 740 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_0
# 741 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntMale_Text_0
# 743 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_5
# 744 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 745 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterTouristMaleIdle::
# 749 "data/maps/GreatCrater/scripts.pory"
	lock
# 750 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 751 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, ReportersGreatCrater_Movement_0
# 752 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterTouristMaleIdle_Text_0
# 754 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, GreatCraterTouristMaleIdle_Movement_0
# 755 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 756 "data/maps/GreatCrater/scripts.pory"
	release
	return


# 162 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_0:
# 162 "data/maps/GreatCrater/scripts.pory"
	face_player
	step_end

# 167 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_1:
# 167 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 170 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_2:
# 170 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_right
	step_end

# 173 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_3:
# 173 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_up
	step_end

# 218 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_4:
# 218 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_down
	step_end

# 264 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_5:
# 264 "data/maps/GreatCrater/scripts.pory"
	face_down
	step_end

# 596 "data/maps/GreatCrater/scripts.pory"
Cratertouristasksforhelp_Movement_0:
# 596 "data/maps/GreatCrater/scripts.pory"
	emote_exclamation_mark
	step_end

# 646 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_0:
# 646 "data/maps/GreatCrater/scripts.pory"
	walk_right
# 646 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 648 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_1:
# 648 "data/maps/GreatCrater/scripts.pory"
	jump_up
	step_end

# 667 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_2:
# 667 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 667 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 667 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 667 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 667 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 667 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 667 "data/maps/GreatCrater/scripts.pory"
	walk_up
	step_end

# 754 "data/maps/GreatCrater/scripts.pory"
GreatCraterTouristMaleIdle_Movement_0:
# 754 "data/maps/GreatCrater/scripts.pory"
	face_left
	step_end

ReportersGreatCrater_Text_0:
# 164 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, look, Dan - an interesting-looking\n"
	.string "local just approached us!\p"
	.string "We're from Devon TV, and we're filming a\n"
	.string "documentary about the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}!\p"
	.string "However, our footage right now is\n"
	.string "lacking a bit of... flair.$"

ReportersGreatCrater_Text_1:
# 169 "data/maps/GreatCrater/scripts.pory"
	.string "Don't sugarcoat it, Kira. It's boring.$"

ReportersGreatCrater_Text_2:
# 172 "data/maps/GreatCrater/scripts.pory"
	.string "... a bit, perhaps. Which is why we were\n"
	.string "thinking about staging a battle!$"

ReportersGreatCrater_Text_3:
# 175 "data/maps/GreatCrater/scripts.pory"
	.string "We will pretend one of those dangerous\n"
	.string "{COLOR RED}Rebels{COLOR DARK_GRAY} have assailed us, and that we\l"
	.string "escaped by the skin of our teeth.$"

ReportersGreatCrater_Text_4:
# 181 "data/maps/GreatCrater/scripts.pory"
	.string "He looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_5:
# 182 "data/maps/GreatCrater/scripts.pory"
	.string "She looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_6:
# 187 "data/maps/GreatCrater/scripts.pory"
	.string "Right? Which makes him perfect to play\n"
	.string "the role of {COLOR RED}Rebel{COLOR DARK_GRAY}!$"

ReportersGreatCrater_Text_7:
# 188 "data/maps/GreatCrater/scripts.pory"
	.string "Right? Which makes her perfect to play\n"
	.string "the role of {COLOR RED}Rebel{COLOR DARK_GRAY}!$"

ReportersGreatCrater_Text_8:
# 192 "data/maps/GreatCrater/scripts.pory"
	.string "We need you to win, of course - it would\n"
	.string "not be very exciting if we just beat a\l"
	.string "dangerous {COLOR RED}Rebel{COLOR DARK_GRAY} like nothing!\p"
	.string "So, will you help us? We will pay you\n"
	.string "handsomely for your time!$"

ReportersGreatCrater_Text_9:
# 195 "data/maps/GreatCrater/scripts.pory"
	.string "Sure$"

ReportersGreatCrater_Text_10:
# 195 "data/maps/GreatCrater/scripts.pory"
	.string "No chance$"

ReportersGreatCrater_Text_11:
# 195 "data/maps/GreatCrater/scripts.pory"
	.string "That's lying$"

ReportersGreatCrater_Text_12:
# 200 "data/maps/GreatCrater/scripts.pory"
	.string "Excellent - let's begin right away!\p"
	.string "At the count of three, please yell your\n"
	.string "most heinous insult, warcry, or similar\l"
	.string "to the camera.\p"
	.string "Then we take out our Pokémon, and have\n"
	.string "at it!\p"
	.string "Ready? Three, two, one... action!$"

ReportersGreatCrater_Text_13:
# 215 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, uhm... I'm sorry. I don't think we can\n"
	.string "have you saying “{STR_VAR_2},” in\l"
	.string "the documentary.\p"
	.string "That term has some implications I can't\n"
	.string "go over right now. Let's say some would\l"
	.string "get offended!$"

ReportersGreatCrater_Text_14:
# 220 "data/maps/GreatCrater/scripts.pory"
	.string "She means it's censored. So come up with\n"
	.string "something else, will you?$"

ReportersGreatCrater_Text_15:
# 223 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}As eloquent as ever, Dan...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_16:
# 228 "data/maps/GreatCrater/scripts.pory"
	.string "KYAAA! Someone help!! I am being\n"
	.string "ASSAILED!$"

ReportersGreatCrater_Text_17:
# 231 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}'Kyaa'? Really...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_18:
# 236 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.$"

ReportersGreatCrater_Text_19:
# 242 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is a great warcry.\p"
	.string "With the right editing, it may even get\n"
	.string "viral.$"

ReportersGreatCrater_Text_20:
# 245 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record some more in\l"
	.string "other locations.$"

ReportersGreatCrater_Text_21:
# 248 "data/maps/GreatCrater/scripts.pory"
	.string "Thanks for your help again - stay safe!$"

ReportersGreatCrater_Text_22:
# 262 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fright,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

ReportersGreatCrater_Text_23:
# 280 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, that's so unfortunate! Are you\n"
	.string "certain?\p"
	.string "We'll be here a while if you reconsider -\n"
	.string "which we beg you to do!$"

ReportersGreatCrater_Text_24:
# 294 "data/maps/GreatCrater/scripts.pory"
	.string "Lying? I wouldn't call it that. It's just\n"
	.string "a bit of showmanship!$"

ReportersGreatCrater_Text_25:
# 297 "data/maps/GreatCrater/scripts.pory"
	.string "If you won't help us, someone will. Why\n"
	.string "not take the pokeyen for yourself?$"

ReportersGreatCrater_Text_26:
# 298 "data/maps/GreatCrater/scripts.pory"
	.string "Okay, I'm in$"

ReportersGreatCrater_Text_27:
# 298 "data/maps/GreatCrater/scripts.pory"
	.string "Leave me out of this$"

ReportersGreatCrater_Text_28:
# 305 "data/maps/GreatCrater/scripts.pory"
	.string "Well, suit yourself. We'll be here a while\n"
	.string "if you change your mind.$"

ReportersGreatCrater_Text_29:
# 320 "data/maps/GreatCrater/scripts.pory"
	.string "Have you changed your mind? Will you\n"
	.string "help us stage a battle?$"

ReportersGreatCrater_Text_30:
# 321 "data/maps/GreatCrater/scripts.pory"
	.string "Yes$"

ReportersGreatCrater_Text_31:
# 321 "data/maps/GreatCrater/scripts.pory"
	.string "No$"

ReportersGreatCrater_Text_32:
# 327 "data/maps/GreatCrater/scripts.pory"
	.string "That's too bad... I think you'd be such a\n"
	.string "star!$"

TrendyPhaseTest_Text_0:
# 353 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is awesome.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0:
# 366 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.\p"
	.string "... that's an amazing warcry$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1:
# 370 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_2} is a great warcry. With\n"
	.string "the right editing, it may even get viral.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2:
# 372 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record in other\l"
	.string "places.$"

GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0:
# 384 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fear,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0:
# 396 "data/maps/GreatCrater/scripts.pory"
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
# 444 "data/maps/GreatCrater/scripts.pory"
	.string "The cameraman seems to disregard\n"
	.string "{PLAYER} entirely.$"

CameramanGreatCrater_Text_1:
# 449 "data/maps/GreatCrater/scripts.pory"
	.string "It's easy money. You won't get far in\n"
	.string "the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY} by being moral.$"

CameramanGreatCrater_Text_2:
# 451 "data/maps/GreatCrater/scripts.pory"
	.string "I know from experience...$"

TouristGreatCraterBattle_Text_0:
# 462 "data/maps/GreatCrater/scripts.pory"
	.string "Pictures are great and all, but there's\n"
	.string "nothing like an exciting moment to\l"
	.string "imprint a memory.$"

TouristGreatCraterRegister_Text_0:
# 471 "data/maps/GreatCrater/scripts.pory"
	.string "That was exciting! Let's do this again -\n"
	.string "here's my Devonav profile!$"

ConspiracyGreatCraterBattle_Text_0:
# 498 "data/maps/GreatCrater/scripts.pory"
	.string "Sorry, but my device has been\n"
	.string "compromised.\p"
	.string "You'll have to learn the truth about\n"
	.string "Safemon elsewhere!$"

ConspiracyGreatCraterRegister_Text_0:
# 507 "data/maps/GreatCrater/scripts.pory"
	.string "Before I tell you, let's put our\n"
	.string "Devonnavs in airplane mode.\p"
	.string "Where was the option now...?$"

ConspiracyGreatCraterRegister_Text_1:
# 510 "data/maps/GreatCrater/scripts.pory"
	.string "Oops, wrong button. Wait, no... I'm\n"
	.string "pretty sure I pressed the right one.\p"
	.string "That's it, I've been HACKED BY DEVON!$"

ConspiracyGreatCraterRematch_Text_0:
# 518 "data/maps/GreatCrater/scripts.pory"
	.string "The truth is... I don't know any of\n"
	.string "Devon's secrets.\p"
	.string "I just like to make things up to look\n"
	.string "interesting. It's a problem I have.$"

GreatCraterSouvenirShop_Text_0:
# 546 "data/maps/GreatCrater/scripts.pory"
	.string "Welcome to the Great Crater's Souvenir\n"
	.string "Shop!$"

GreatCraterSouvenirShopkeeper_Text_0:
# 566 "data/maps/GreatCrater/scripts.pory"
	.string "I know this is not {COLOR BLUE}New Rustboro Mall{COLOR DARK_GRAY},\n"
	.string "but let's be civil hey?\p"
	.string "If you want to buy, go around the\n"
	.string "counter.$"

GreatCraterSouvenirBox_Text_0:
# 574 "data/maps/GreatCrater/scripts.pory"
	.string "The box is full of questionably\n"
	.string "preserved donuts.$"

GreatCraterSign_Text_0:
# 578 "data/maps/GreatCrater/scripts.pory"
	.string "North - Road 002\n"
	.string "East - Route 101$"

GreatCraterSouvenirSupplies_Text_0:
# 582 "data/maps/GreatCrater/scripts.pory"
	.string "The articles are covered by the same\n"
	.string "dust that's everywhere.$"

GreatCraterVoid_Text_0:
# 586 "data/maps/GreatCrater/scripts.pory"
	.string "The pitch-black bottom of the crater is\n"
	.string "too deep beneath to see.\p"
	.string "With the right equipment, one could\n"
	.string "climb down and explore it...$"

Cratertouristasksforhelp_Text_0:
# 599 "data/maps/GreatCrater/scripts.pory"
	.string "O-oh, hey! HEEEY! Is there anyone up\n"
	.string "there? Somebody HELP ME!$"

CraterTrappedTouristandRope_Text_0:
# 613 "data/maps/GreatCrater/scripts.pory"
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
# 624 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to help the person?$"

CraterTrappedTouristandRope_Text_2:
# 635 "data/maps/GreatCrater/scripts.pory"
	.string "{PLAYER} ties the knot firmly to a\n"
	.string "rock and lets the rest fall down.$"

CraterTrappedTouristandRope_Text_3:
# 638 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, you're a life-saver!$"

CraterTrappedTouristandRope_Text_4:
# 656 "data/maps/GreatCrater/scripts.pory"
	.string "My hero! I don't know what I would have\n"
	.string "done without you!\p"
	.string "But I know what I'll do now. Reward you\n"
	.string "for your generosity!$"

CraterTrappedTouristandRope_Text_5:
# 659 "data/maps/GreatCrater/scripts.pory"
	.string "A friend gifted me this before my trip,\n"
	.string "saying it'll keep me safe...\p"
	.string "Well, it clearly doesn't work, so you can\n"
	.string "have it!$"

CraterTrappedTouristandRope_Text_6:
# 662 "data/maps/GreatCrater/scripts.pory"
	.string "Wait... maybe it's thanks to it that you\n"
	.string "found me?$"

CraterTrappedTouristandRope_Text_7:
# 664 "data/maps/GreatCrater/scripts.pory"
	.string "Well, nevermind. I don't plan to leave\n"
	.string "{COLOR BLUE}New Rustboro{COLOR DARK_GRAY} ever again, so I won't\l"
	.string "need it.\p"
	.string "Goodbye now, and watch your footing!$"

CraterTrappedTouristandRope_Text_8:
# 678 "data/maps/GreatCrater/scripts.pory"
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
# 695 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! But... I don't see that\n"
	.string "{COLOR RED}Sailor Knot{COLOR DARK_GRAY} on you!\p"
	.string "I appreciate you checking on me, but I'd\n"
	.string "appreciate it even more if you focused\l"
	.string "on helping me get out!\p"
	.string "I'm begging you here!$"

CraterTrappedTouristandRope_Text_10:
# 701 "data/maps/GreatCrater/scripts.pory"
	.string "There you are! And I see you've brought\n"
	.string "the {COLOR RED}Sailor Knot{COLOR DARK_GRAY}!\p"
	.string "Quick, tie it to something and let it\n"
	.string "fall!$"

CraterTrappedTouristandRope_Text_11:
# 708 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to climb down?$"

GreatCraterDevonGruntFemale_Text_0:
# 723 "data/maps/GreatCrater/scripts.pory"
	.string "I'm sorry, but one of our scientists is\n"
	.string "currently searching for a dangerous\l"
	.string "Pokémon in {COLOR GREEN}Road 002{COLOR DARK_GRAY}.$"

GreatCraterDevonGruntFemale_Text_1:
# 726 "data/maps/GreatCrater/scripts.pory"
	.string "The creature in question is next on the\n"
	.string "list of Pokémon to be safened, and we\l"
	.string "can't risk civilians interfering with his\l"
	.string "work.$"

GreatCraterDevonGruntFemale_Text_2:
# 729 "data/maps/GreatCrater/scripts.pory"
	.string "You have been hurt by a Pokémon, do\n"
	.string "you? Surely you understand.$"

GreatCraterDevonGruntMale_Text_0:
# 741 "data/maps/GreatCrater/scripts.pory"
	.string "By regulation of Devon Co.'s Wildlife\n"
	.string "Protocol, section 75, titled “Route\l"
	.string "Enclosures for the purpose of Safemon\l"
	.string "Research...”\p"
	.string "This area is closed off to civilians\n"
	.string "until further notice.$"

GreatCraterTouristMaleIdle_Text_0:
# 752 "data/maps/GreatCrater/scripts.pory"
	.string "I once ordered a donut in Pewter City,\n"
	.string "and they gave me a riceball instead!\p"
	.string "At least you know what donuts are here\n"
	.string "in Hoenn.$"

ReportersGreatCrater_Outro::
# 344 "data/maps/GreatCrater/scripts.pory"
	.string "That was perfect. Here - this is for\nyour trouble!$"

GreatCrater_Text_XIsTheBiggestHappeningThingRight::
# 406 "data/maps/GreatCrater/scripts.pory"
	.string "In New Rustboro, {STR_VAR_1} is trendy.$"

GreatCrater_Text_TellMeWhatsNewAndIn::
# 410 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} Not trendy? Tell me what's trendy then.$"

GreatCrater_Text_OfCourseIKnowAboutThat::
# 415 "data/maps/GreatCrater/scripts.pory"
	.string "You're right. “{STR_VAR_1}” is old news, {STR_VAR_2} is the shit now.$"

GreatCrater_Text_XHuhIThinkYIsCool::
# 421 "data/maps/GreatCrater/scripts.pory"
	.string "Nah, {STR_VAR_2} is lame, {STR_VAR_1} is the cool thing.$"

GreatCrater_Text_HearOfAnyTrendsComeShareWithMe::
# 427 "data/maps/GreatCrater/scripts.pory"
	.string "Well, share with me later.$"

GreatCrater_Text_YeahDefinitionOfInRightNow::
# 432 "data/maps/GreatCrater/scripts.pory"
	.string "Yeah, {STR_VAR_1} is what's in.$"

TouristGreatCrater_Intro::
# 485 "data/maps/GreatCrater/scripts.pory"
	.string "This crater is a breathtaking sight...\pBut it would be even more memorable\nafter a battle!$"

TouristGreatCrater_Outro::
# 488 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, yes... I'll never forget this!$"

ConspiracyGreatCrater_Intro::
# 524 "data/maps/GreatCrater/scripts.pory"
	.string "Hehe... do you know the real reason why\nDevon is making Safemon?\pI'll tell you if you beat me!$"

ConspiracyGreatCrater_Outro::
# 527 "data/maps/GreatCrater/scripts.pory"
	.string "Alright, listen closely...$"

ConspiracyGreatCrater_Intro2::
# 530 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! This time, I'll really tell\n you the truth behind Safemon...\p But only if you beat me!$"

ConspiracyGreatCrater_Outro2::
# 534 "data/maps/GreatCrater/scripts.pory"
	.string "You've earned the right to the truth. Listen...$"
