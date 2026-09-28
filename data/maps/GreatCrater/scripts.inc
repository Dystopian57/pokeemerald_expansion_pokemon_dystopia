# 1 "data/maps/GreatCrater/scripts.pory"


GreatCrater_MapScripts::
# 8 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GreatCraterWeather
# 11 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RedoTouristWarning
# 13 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GreatCraterWeather
# 14 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DynamicWeatherCrater
	.byte 0


RedoTouristWarning::
# 21 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq RedoTouristWarning_1
	return

RedoTouristWarning_1:
# 22 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 0
	return


DynamicWeatherCrater::
# 28 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 4
# 29 "data/maps/GreatCrater/scripts.pory"
	random 10
# 30 "data/maps/GreatCrater/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 31 "data/maps/GreatCrater/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/GreatCrater/scripts.pory"
	case 0, DynamicWeatherCrater_2
# 35 "data/maps/GreatCrater/scripts.pory"
	case 1, DynamicWeatherCrater_3
# 38 "data/maps/GreatCrater/scripts.pory"
	case 2, DynamicWeatherCrater_4
# 41 "data/maps/GreatCrater/scripts.pory"
	case 3, DynamicWeatherCrater_5
# 44 "data/maps/GreatCrater/scripts.pory"
	case 4, DynamicWeatherCrater_6
# 45 "data/maps/GreatCrater/scripts.pory"
	case 5, DynamicWeatherCrater_7
# 46 "data/maps/GreatCrater/scripts.pory"
	case 6, DynamicWeatherCrater_8
# 47 "data/maps/GreatCrater/scripts.pory"
	case 7, DynamicWeatherCrater_9
# 48 "data/maps/GreatCrater/scripts.pory"
	case 8, DynamicWeatherCrater_10
# 49 "data/maps/GreatCrater/scripts.pory"
	case 9, DynamicWeatherCrater_11
	return

DynamicWeatherCrater_2:
# 33 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 34 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return

DynamicWeatherCrater_3:
# 36 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 37 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return

DynamicWeatherCrater_4:
# 39 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 40 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return

DynamicWeatherCrater_5:
# 42 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 43 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return

DynamicWeatherCrater_6:
# 44 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return

DynamicWeatherCrater_7:
# 45 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return

DynamicWeatherCrater_8:
# 46 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return

DynamicWeatherCrater_9:
# 47 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return

DynamicWeatherCrater_10:
# 48 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return

DynamicWeatherCrater_11:
# 49 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return


GreatCraterWeather::
# 56 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 0, GreatCraterShade
# 57 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 1, GreatCraterAsh1
# 58 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 2, GreatCraterAsh2
# 59 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 3, GreatCraterEndAsh
# 61 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterShade::
# 65 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return


GreatCraterAsh1::
# 69 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 70 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 2
# 71 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterAsh2::
# 75 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 76 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 3
# 77 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterEndAsh::
# 82 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 83 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
# 84 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCrater_EventScript_TrendyPhraseBoy::
# 90 "data/maps/GreatCrater/scripts.pory"
	lock
# 91 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 92 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 93 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 94 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, YES, GreatCrater_EventScript_ConfirmTrendyPhrase
# 95 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GreatCrater_EventScript_RejectTrendyPhrase
	end


GreatCrater_EventScript_ConfirmTrendyPhrase::
# 102 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 103 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_RejectTrendyPhrase::
# 107 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 108 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 109 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 110 "data/maps/GreatCrater/scripts.pory"
	lock
# 111 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 112 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, GreatCrater_EventScript_GiveNewTrendyPhrase
# 113 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, GreatCrater_EventScript_CancelNewTrendyPhrase
	end


ReportersGreatCrater::
# 121 "data/maps/GreatCrater/scripts.pory"
	lockall
# 122 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 123 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 124 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, ReportersGreatCrater_2
ReportersGreatCrater_1:
# 282 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, ReportersGreatCrater_5
ReportersGreatCrater_4:
# 301 "data/maps/GreatCrater/scripts.pory"
finishreporterscript:
# 302 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 1
# 303 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 304 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 305 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

ReportersGreatCrater_2:
# 128 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 130 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_0
# 133 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 134 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 135 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_1
# 136 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 137 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 138 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_2
# 139 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 140 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 141 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_3
# 143 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 144 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 145 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 146 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 147 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_8
ReportersGreatCrater_7:
# 148 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_14
ReportersGreatCrater_13:
# 150 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 151 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 152 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 153 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_19
ReportersGreatCrater_18:
# 154 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_22
ReportersGreatCrater_21:
# 156 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 157 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 158 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_8
# 161 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_9, ReportersGreatCrater_Text_10, ReportersGreatCrater_Text_11
# 163 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_25
ReportersGreatCrater_24:
# 244 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_28
ReportersGreatCrater_27:
# 258 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ReportersGreatCrater_33
	goto ReportersGreatCrater_1

ReportersGreatCrater_5:
# 283 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 284 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 285 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 286 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_29
# 287 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 288 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_11
ReportersGreatCrater_10:
# 291 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_16
	goto ReportersGreatCrater_4

ReportersGreatCrater_8:
# 147 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_4
	goto ReportersGreatCrater_7

ReportersGreatCrater_11:
# 289 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_10

ReportersGreatCrater_14:
# 148 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_5
	goto ReportersGreatCrater_13

ReportersGreatCrater_16:
# 292 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 293 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_32
# 294 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 295 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 296 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 297 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 298 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
	goto ReportersGreatCrater_4

ReportersGreatCrater_19:
# 153 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_6
	goto ReportersGreatCrater_18

ReportersGreatCrater_22:
# 154 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_7
	goto ReportersGreatCrater_21

ReportersGreatCrater_25:
# 164 "data/maps/GreatCrater/scripts.pory"
acceptedtoplayrebel:
# 165 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 166 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_12
# 172 "data/maps/GreatCrater/scripts.pory"
retrytrendyphrase:
# 173 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 174 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 176 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ReportersGreatCrater_31
ReportersGreatCrater_30:
# 226 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReportersGreatCrater_35
	goto ReportersGreatCrater_24

ReportersGreatCrater_28:
# 245 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 246 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_23
# 248 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 249 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 250 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 251 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 252 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 254 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 255 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_27

ReportersGreatCrater_31:
# 177 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 179 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq ReportersGreatCrater_38
ReportersGreatCrater_37:
# 193 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 194 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_16
# 195 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 196 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 197 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_17
# 198 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 199 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 200 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 201 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 202 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_18
# 205 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 206 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 207 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 208 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_19
# 209 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 210 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 211 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 212 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 213 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 214 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 215 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 217 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 218 "data/maps/GreatCrater/scripts.pory"
	removeobject 2
# 219 "data/maps/GreatCrater/scripts.pory"
	removeobject 3
# 220 "data/maps/GreatCrater/scripts.pory"
	setflag reportersleavecrater
# 221 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 223 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_30

ReportersGreatCrater_33:
# 259 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 260 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_24
# 261 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 262 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 263 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_25
# 264 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_26, ReportersGreatCrater_Text_27
# 265 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_41
ReportersGreatCrater_40:
# 268 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_43
	goto ReportersGreatCrater_1

ReportersGreatCrater_35:
# 227 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 228 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_22
# 230 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 231 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_5
# 232 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 233 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_24

ReportersGreatCrater_38:
# 180 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 181 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_13
# 184 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 185 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 186 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_14
# 187 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 188 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 189 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_15
# 190 "data/maps/GreatCrater/scripts.pory"
	goto retrytrendyphrase
	goto ReportersGreatCrater_37

ReportersGreatCrater_41:
# 266 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_40

ReportersGreatCrater_43:
# 269 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 270 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 271 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_28
# 272 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 273 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 274 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 275 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 276 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 277 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_1


TrendyPhaseTest::
# 317 "data/maps/GreatCrater/scripts.pory"
	lockall
# 318 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 319 "data/maps/GreatCrater/scripts.pory"
	msgbox TrendyPhaseTest_Text_0
# 320 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCrater_EventScript_GiveNewTrendyPhrase::
# 325 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 326 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, GreatCrater_EventScript_PhraseNotTrendyEnough
# 328 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 332 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0
# 335 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 336 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1
# 338 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2
# 340 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 342 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 1
# 343 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 344 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 345 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_CancelNewTrendyPhrase::
# 350 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0
# 352 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 353 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 354 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 355 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 356 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 357 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 358 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_PhraseNotTrendyEnough::
# 362 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0
# 366 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 367 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


CameramanGreatCrater::
# 406 "data/maps/GreatCrater/scripts.pory"
	lockall
# 407 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 408 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, CameramanGreatCrater_2
CameramanGreatCrater_1:
# 412 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, CameramanGreatCrater_5
CameramanGreatCrater_4:
# 419 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

CameramanGreatCrater_2:
# 410 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_0
	goto CameramanGreatCrater_1

CameramanGreatCrater_5:
# 413 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 414 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 415 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_1
# 416 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 417 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_2
	goto CameramanGreatCrater_4


TouristGreatCraterBattle::
# 425 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro, TouristGreatCraterRegister
# 426 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 427 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TouristGreatCraterRematch
# 428 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
# 430 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRegister::
# 435 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 436 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 437 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRegister_Text_0
# 438 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_TOURIST_GREATCRATER
# 439 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRematch::
# 444 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro
# 445 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
	end


ConspiracyGreatCraterBattle::
# 461 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro, ConspiracyGreatCraterRegister
# 462 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 463 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ConspiracyGreatCraterRematch
# 464 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterBattle_Text_0
# 466 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRegister::
# 471 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 472 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 473 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_0
# 475 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_CONSPIRACY_GREATCRATER
# 476 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_1
# 478 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRematch::
# 483 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro2, ConspiracyGreatCrater_Outro2
# 484 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRematch_Text_0
	end


GreatCraterSouvenirShop::
# 507 "data/maps/GreatCrater/scripts.pory"
	lockall
# 508 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 509 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 510 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 0
# 511 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_BUYSOMETHINGWILLYA, FALSE
# 512 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShop_Text_0
# 513 "data/maps/GreatCrater/scripts.pory"
	pokemart ShopSouvenirs
# 514 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 1
# 515 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 516 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 517 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


	.align 2
# 521 "data/maps/GreatCrater/scripts.pory"
ShopSouvenirs:
# 522 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 523 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 524 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 525 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

GreatCraterSouvenirShopkeeper::
# 530 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 531 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 532 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShopkeeper_Text_0
# 534 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 535 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_4
# 536 "data/maps/GreatCrater/scripts.pory"
	waitmovement 1
# 537 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirBox::
# 540 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirBox_Text_0
# 541 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSign::
# 544 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSign_Text_0
# 545 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirSupplies::
# 548 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirSupplies_Text_0
# 549 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterVoid::
# 552 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterVoid_Text_0
# 554 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


Cratertouristasksforhelp::
# 560 "data/maps/GreatCrater/scripts.pory"
	lock
# 561 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 562 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 563 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 564 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 565 "data/maps/GreatCrater/scripts.pory"
	msgbox Cratertouristasksforhelp_Text_0
# 566 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 570 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 1
# 571 "data/maps/GreatCrater/scripts.pory"
	dofieldeffectsparkle 11, 15, 9
# 572 "data/maps/GreatCrater/scripts.pory"
	release
	return


CraterTrappedTouristandRope::
# 576 "data/maps/GreatCrater/scripts.pory"
	lock
# 577 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 578 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq CraterTrappedTouristandRope_2
CraterTrappedTouristandRope_1:
# 659 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 2
	goto_if_eq CraterTrappedTouristandRope_5
CraterTrappedTouristandRope_4:
# 672 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 3
	goto_if_eq CraterTrappedTouristandRope_11
CraterTrappedTouristandRope_10:
# 678 "data/maps/GreatCrater/scripts.pory"
endcraterbottomtouristscript:
# 679 "data/maps/GreatCrater/scripts.pory"
	release
	return

CraterTrappedTouristandRope_2:
# 579 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_0
# 585 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 2
	checkitem ITEM_BINDING_BAND
# 0 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CraterTrappedTouristandRope_7
# 654 "data/maps/GreatCrater/scripts.pory"
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
# 589 "data/maps/GreatCrater/scripts.pory"
helpcratertourist:
# 590 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_1
# 591 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 593 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CraterTrappedTouristandRope_17
CraterTrappedTouristandRope_16:
# 643 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterTrappedTouristandRope_21
	goto CraterTrappedTouristandRope_1

CraterTrappedTouristandRope_11:
# 674 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_11
# 675 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 676 "data/maps/GreatCrater/scripts.pory"
	warp MAP_GREAT_CRATER_BOTTOM, 0
	goto CraterTrappedTouristandRope_10

CraterTrappedTouristandRope_14:
# 661 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_9
# 664 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_13

CraterTrappedTouristandRope_17:
# 594 "data/maps/GreatCrater/scripts.pory"
	clearflag greatcraterrope
# 595 "data/maps/GreatCrater/scripts.pory"
	addobject 11
# 596 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 11, 15
# 597 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 11, 11, 15
# 598 "data/maps/GreatCrater/scripts.pory"
	showobjectat 11, MAP_GREAT_CRATER
# 600 "data/maps/GreatCrater/scripts.pory"
	playse SE_BALL_THROW
# 601 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_2
# 602 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 603 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 604 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_3
# 605 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 606 "data/maps/GreatCrater/scripts.pory"
	playse SE_M_BIND
# 607 "data/maps/GreatCrater/scripts.pory"
	waitse
# 608 "data/maps/GreatCrater/scripts.pory"
	playse SE_M_BIND
# 609 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_3
# 610 "data/maps/GreatCrater/scripts.pory"
	showobjectat 10, MAP_GREAT_CRATER
# 612 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CraterTrappedTouristandRope_Movement_0
# 613 "data/maps/GreatCrater/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 614 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_1
# 615 "data/maps/GreatCrater/scripts.pory"
	playse SE_LEDGE
# 616 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 619 "data/maps/GreatCrater/scripts.pory"
	waitse
# 621 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_2
# 622 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_4
# 624 "data/maps/GreatCrater/scripts.pory"
	giveitem ITEM_EVIOLITE
# 625 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_5
# 627 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_4
# 628 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_6
# 629 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_2
# 630 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_7
# 633 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_2
# 634 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 635 "data/maps/GreatCrater/scripts.pory"
	removeobject 10
# 636 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 0, 0
# 637 "data/maps/GreatCrater/scripts.pory"
	hideobjectat 10, MAP_GREAT_CRATER
# 638 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 3
# 639 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 640 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_16

CraterTrappedTouristandRope_19:
# 667 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_10
# 669 "data/maps/GreatCrater/scripts.pory"
	goto helpcratertourist
	goto CraterTrappedTouristandRope_4

CraterTrappedTouristandRope_21:
# 644 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_8
# 650 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_1


GreatCraterDevonGruntFemale::
# 686 "data/maps/GreatCrater/scripts.pory"
	lock
# 687 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 688 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_0
# 689 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_0
# 691 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_3
# 692 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_1
# 694 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_4
# 695 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_2
# 696 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 697 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 698 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_5
# 699 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 700 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterDevonGruntMale::
# 704 "data/maps/GreatCrater/scripts.pory"
	lock
# 705 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 706 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_0
# 707 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntMale_Text_0
# 709 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_5
# 710 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 711 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterTouristMaleIdle::
# 715 "data/maps/GreatCrater/scripts.pory"
	lock
# 716 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 717 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, ReportersGreatCrater_Movement_0
# 718 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterTouristMaleIdle_Text_0
# 720 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, GreatCraterTouristMaleIdle_Movement_0
# 721 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 722 "data/maps/GreatCrater/scripts.pory"
	release
	return


# 128 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_0:
# 128 "data/maps/GreatCrater/scripts.pory"
	face_player
	step_end

# 133 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_1:
# 133 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 136 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_2:
# 136 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_right
	step_end

# 139 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_3:
# 139 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_up
	step_end

# 184 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_4:
# 184 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_down
	step_end

# 230 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_5:
# 230 "data/maps/GreatCrater/scripts.pory"
	face_down
	step_end

# 562 "data/maps/GreatCrater/scripts.pory"
Cratertouristasksforhelp_Movement_0:
# 562 "data/maps/GreatCrater/scripts.pory"
	emote_exclamation_mark
	step_end

# 612 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_0:
# 612 "data/maps/GreatCrater/scripts.pory"
	walk_right
# 612 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 614 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_1:
# 614 "data/maps/GreatCrater/scripts.pory"
	jump_up
	step_end

# 633 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_2:
# 633 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 633 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 633 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 633 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 633 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 633 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 633 "data/maps/GreatCrater/scripts.pory"
	walk_up
	step_end

# 720 "data/maps/GreatCrater/scripts.pory"
GreatCraterTouristMaleIdle_Movement_0:
# 720 "data/maps/GreatCrater/scripts.pory"
	face_left
	step_end

ReportersGreatCrater_Text_0:
# 130 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, look, Dan - an interesting-looking\n"
	.string "local just approached us!\p"
	.string "We're from Devon TV, and we're filming a\n"
	.string "documentary about the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY}!\p"
	.string "However, our footage right now is\n"
	.string "lacking a bit of... flair.$"

ReportersGreatCrater_Text_1:
# 135 "data/maps/GreatCrater/scripts.pory"
	.string "Don't sugarcoat it, Kira. It's boring.$"

ReportersGreatCrater_Text_2:
# 138 "data/maps/GreatCrater/scripts.pory"
	.string "... a bit, perhaps. Which is why we were\n"
	.string "thinking about staging a battle!$"

ReportersGreatCrater_Text_3:
# 141 "data/maps/GreatCrater/scripts.pory"
	.string "We will pretend one of those dangerous\n"
	.string "{COLOR RED}Rebels{COLOR DARK_GRAY} have assailed us, and that we\l"
	.string "escaped by the skin of our teeth.$"

ReportersGreatCrater_Text_4:
# 147 "data/maps/GreatCrater/scripts.pory"
	.string "He looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_5:
# 148 "data/maps/GreatCrater/scripts.pory"
	.string "She looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_6:
# 153 "data/maps/GreatCrater/scripts.pory"
	.string "Right? Which makes him perfect to play\n"
	.string "the role of {COLOR RED}Rebel{COLOR DARK_GRAY}!$"

ReportersGreatCrater_Text_7:
# 154 "data/maps/GreatCrater/scripts.pory"
	.string "Right? Which makes her perfect to play\n"
	.string "the role of {COLOR RED}Rebel{COLOR DARK_GRAY}!$"

ReportersGreatCrater_Text_8:
# 158 "data/maps/GreatCrater/scripts.pory"
	.string "We need you to win, of course - it would\n"
	.string "not be very exciting if we just beat a\l"
	.string "dangerous {COLOR RED}Rebel{COLOR DARK_GRAY} like nothing!\p"
	.string "So, will you help us? We will pay you\n"
	.string "handsomely for your time!$"

ReportersGreatCrater_Text_9:
# 161 "data/maps/GreatCrater/scripts.pory"
	.string "Sure$"

ReportersGreatCrater_Text_10:
# 161 "data/maps/GreatCrater/scripts.pory"
	.string "No chance$"

ReportersGreatCrater_Text_11:
# 161 "data/maps/GreatCrater/scripts.pory"
	.string "That's lying$"

ReportersGreatCrater_Text_12:
# 166 "data/maps/GreatCrater/scripts.pory"
	.string "Excellent - let's begin right away!\p"
	.string "At the count of three, please yell your\n"
	.string "most heinous insult, warcry, or similar\l"
	.string "to the camera.\p"
	.string "Then we take out our Pokémon, and have\n"
	.string "at it!\p"
	.string "Ready? Three, two, one... action!$"

ReportersGreatCrater_Text_13:
# 181 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, uhm... I'm sorry. I don't think we can\n"
	.string "have you saying “{STR_VAR_2},” in\l"
	.string "the documentary.\p"
	.string "That term has some implications I can't\n"
	.string "go over right now. Let's say some would\l"
	.string "get offended!$"

ReportersGreatCrater_Text_14:
# 186 "data/maps/GreatCrater/scripts.pory"
	.string "She means it's censored. So come up with\n"
	.string "something else, will you?$"

ReportersGreatCrater_Text_15:
# 189 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}As eloquent as ever, Dan...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_16:
# 194 "data/maps/GreatCrater/scripts.pory"
	.string "KYAAA! Someone help!! I am being\n"
	.string "ASSAILED!$"

ReportersGreatCrater_Text_17:
# 197 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}'Kyaa'? Really...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_18:
# 202 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.$"

ReportersGreatCrater_Text_19:
# 208 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is a great warcry.\p"
	.string "With the right editing, it may even get\n"
	.string "viral.$"

ReportersGreatCrater_Text_20:
# 211 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record some more in\l"
	.string "other locations.$"

ReportersGreatCrater_Text_21:
# 214 "data/maps/GreatCrater/scripts.pory"
	.string "Thanks for your help again - stay safe!$"

ReportersGreatCrater_Text_22:
# 228 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fright,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

ReportersGreatCrater_Text_23:
# 246 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, that's so unfortunate! Are you\n"
	.string "certain?\p"
	.string "We'll be here a while if you reconsider -\n"
	.string "which we beg you to do!$"

ReportersGreatCrater_Text_24:
# 260 "data/maps/GreatCrater/scripts.pory"
	.string "Lying? I wouldn't call it that. It's just\n"
	.string "a bit of showmanship!$"

ReportersGreatCrater_Text_25:
# 263 "data/maps/GreatCrater/scripts.pory"
	.string "If you won't help us, someone will. Why\n"
	.string "not take the pokeyen for yourself?$"

ReportersGreatCrater_Text_26:
# 264 "data/maps/GreatCrater/scripts.pory"
	.string "Okay, I'm in$"

ReportersGreatCrater_Text_27:
# 264 "data/maps/GreatCrater/scripts.pory"
	.string "Leave me out of this$"

ReportersGreatCrater_Text_28:
# 271 "data/maps/GreatCrater/scripts.pory"
	.string "Well, suit yourself. We'll be here a while\n"
	.string "if you change your mind.$"

ReportersGreatCrater_Text_29:
# 286 "data/maps/GreatCrater/scripts.pory"
	.string "Have you changed your mind? Will you\n"
	.string "help us stage a battle?$"

ReportersGreatCrater_Text_30:
# 287 "data/maps/GreatCrater/scripts.pory"
	.string "Yes$"

ReportersGreatCrater_Text_31:
# 287 "data/maps/GreatCrater/scripts.pory"
	.string "No$"

ReportersGreatCrater_Text_32:
# 293 "data/maps/GreatCrater/scripts.pory"
	.string "That's too bad... I think you'd be such a\n"
	.string "star!$"

TrendyPhaseTest_Text_0:
# 319 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is awesome.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0:
# 332 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.\p"
	.string "... that's an amazing warcry$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1:
# 336 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_2} is a great warcry. With\n"
	.string "the right editing, it may even get viral.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2:
# 338 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record in other\l"
	.string "places.$"

GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0:
# 350 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fear,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0:
# 362 "data/maps/GreatCrater/scripts.pory"
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
# 410 "data/maps/GreatCrater/scripts.pory"
	.string "The cameraman seems to disregard\n"
	.string "{PLAYER} entirely.$"

CameramanGreatCrater_Text_1:
# 415 "data/maps/GreatCrater/scripts.pory"
	.string "It's easy money. You won't get far in\n"
	.string "the {COLOR GREEN}Rebel Zone{COLOR DARK_GRAY} by being moral.$"

CameramanGreatCrater_Text_2:
# 417 "data/maps/GreatCrater/scripts.pory"
	.string "I know from experience...$"

TouristGreatCraterBattle_Text_0:
# 428 "data/maps/GreatCrater/scripts.pory"
	.string "Pictures are great and all, but there's\n"
	.string "nothing like an exciting moment to\l"
	.string "imprint a memory.$"

TouristGreatCraterRegister_Text_0:
# 437 "data/maps/GreatCrater/scripts.pory"
	.string "That was exciting! Let's do this again -\n"
	.string "here's my Devonav profile!$"

ConspiracyGreatCraterBattle_Text_0:
# 464 "data/maps/GreatCrater/scripts.pory"
	.string "Sorry, but my device has been\n"
	.string "compromised.\p"
	.string "You'll have to learn the truth about\n"
	.string "Safemon elsewhere!$"

ConspiracyGreatCraterRegister_Text_0:
# 473 "data/maps/GreatCrater/scripts.pory"
	.string "Before I tell you, let's put our\n"
	.string "Devonnavs in airplane mode.\p"
	.string "Where was the option now...?$"

ConspiracyGreatCraterRegister_Text_1:
# 476 "data/maps/GreatCrater/scripts.pory"
	.string "Oops, wrong button. Wait, no... I'm\n"
	.string "pretty sure I pressed the right one.\p"
	.string "That's it, I've been HACKED BY DEVON!$"

ConspiracyGreatCraterRematch_Text_0:
# 484 "data/maps/GreatCrater/scripts.pory"
	.string "The truth is... I don't know any of\n"
	.string "Devon's secrets.\p"
	.string "I just like to make things up to look\n"
	.string "interesting. It's a problem I have.$"

GreatCraterSouvenirShop_Text_0:
# 512 "data/maps/GreatCrater/scripts.pory"
	.string "Welcome to the Great Crater's Souvenir\n"
	.string "Shop!$"

GreatCraterSouvenirShopkeeper_Text_0:
# 532 "data/maps/GreatCrater/scripts.pory"
	.string "I know this is not {COLOR BLUE}New Rustboro Mall{COLOR DARK_GRAY},\n"
	.string "but let's be civil hey?\p"
	.string "If you want to buy, go around the\n"
	.string "counter.$"

GreatCraterSouvenirBox_Text_0:
# 540 "data/maps/GreatCrater/scripts.pory"
	.string "The box is full of questionably\n"
	.string "preserved donuts.$"

GreatCraterSign_Text_0:
# 544 "data/maps/GreatCrater/scripts.pory"
	.string "North - Road 002\n"
	.string "East - Route 101$"

GreatCraterSouvenirSupplies_Text_0:
# 548 "data/maps/GreatCrater/scripts.pory"
	.string "The articles are covered by the same\n"
	.string "dust that's everywhere.$"

GreatCraterVoid_Text_0:
# 552 "data/maps/GreatCrater/scripts.pory"
	.string "The pitch-black bottom of the crater is\n"
	.string "too deep beneath to see.\p"
	.string "With the right equipment, one could\n"
	.string "climb down and explore it...$"

Cratertouristasksforhelp_Text_0:
# 565 "data/maps/GreatCrater/scripts.pory"
	.string "O-oh, hey! HEEEY! Is there anyone up\n"
	.string "there? Somebody HELP ME!$"

CraterTrappedTouristandRope_Text_0:
# 579 "data/maps/GreatCrater/scripts.pory"
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
# 590 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to help the person?$"

CraterTrappedTouristandRope_Text_2:
# 601 "data/maps/GreatCrater/scripts.pory"
	.string "{PLAYER} ties the knot firmly to a\n"
	.string "rock and lets the rest fall down.$"

CraterTrappedTouristandRope_Text_3:
# 604 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, you're a life-saver!$"

CraterTrappedTouristandRope_Text_4:
# 622 "data/maps/GreatCrater/scripts.pory"
	.string "My hero! I don't know what I would have\n"
	.string "done without you!\p"
	.string "But I know what I'll do now. Reward you\n"
	.string "for your generosity!$"

CraterTrappedTouristandRope_Text_5:
# 625 "data/maps/GreatCrater/scripts.pory"
	.string "A friend gifted me this before my trip,\n"
	.string "saying it'll keep me safe...\p"
	.string "Well, it clearly doesn't work, so you can\n"
	.string "have it!$"

CraterTrappedTouristandRope_Text_6:
# 628 "data/maps/GreatCrater/scripts.pory"
	.string "Wait... maybe it's thanks to it that you\n"
	.string "found me?$"

CraterTrappedTouristandRope_Text_7:
# 630 "data/maps/GreatCrater/scripts.pory"
	.string "Well, nevermind. I don't plan to leave\n"
	.string "{COLOR BLUE}New Rustboro{COLOR DARK_GRAY} ever again, so I won't\l"
	.string "need it.\p"
	.string "Goodbye now, and watch your footing!$"

CraterTrappedTouristandRope_Text_8:
# 644 "data/maps/GreatCrater/scripts.pory"
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
# 661 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! But... I don't see that\n"
	.string "{COLOR RED}Sailor Knot{COLOR DARK_GRAY} on you!\p"
	.string "I appreciate you checking on me, but I'd\n"
	.string "appreciate it even more if you focused\l"
	.string "on helping me get out!\p"
	.string "I'm begging you here!$"

CraterTrappedTouristandRope_Text_10:
# 667 "data/maps/GreatCrater/scripts.pory"
	.string "There you are! And I see you've brought\n"
	.string "the {COLOR RED}Sailor Knot{COLOR DARK_GRAY}!\p"
	.string "Quick, tie it to something and let it\n"
	.string "fall!$"

CraterTrappedTouristandRope_Text_11:
# 674 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to climb down?$"

GreatCraterDevonGruntFemale_Text_0:
# 689 "data/maps/GreatCrater/scripts.pory"
	.string "I'm sorry, but one of our scientists is\n"
	.string "currently searching for a dangerous\l"
	.string "Pokémon in {COLOR GREEN}Road 002{COLOR DARK_GRAY}.$"

GreatCraterDevonGruntFemale_Text_1:
# 692 "data/maps/GreatCrater/scripts.pory"
	.string "The creature in question is next on the\n"
	.string "list of Pokémon to be safened, and we\l"
	.string "can't risk civilians interfering with his\l"
	.string "work.$"

GreatCraterDevonGruntFemale_Text_2:
# 695 "data/maps/GreatCrater/scripts.pory"
	.string "You have been hurt by a Pokémon, do\n"
	.string "you? Surely you understand.$"

GreatCraterDevonGruntMale_Text_0:
# 707 "data/maps/GreatCrater/scripts.pory"
	.string "By regulation of Devon Co.'s Wildlife\n"
	.string "Protocol, section 75, titled “Route\l"
	.string "Enclosures for the purpose of Safemon\l"
	.string "Research...”\p"
	.string "This area is closed off to civilians\n"
	.string "until further notice.$"

GreatCraterTouristMaleIdle_Text_0:
# 718 "data/maps/GreatCrater/scripts.pory"
	.string "I once ordered a donut in Pewter City,\n"
	.string "and they gave me a riceball instead!\p"
	.string "At least you know what donuts are here\n"
	.string "in Hoenn.$"

ReportersGreatCrater_Outro::
# 310 "data/maps/GreatCrater/scripts.pory"
	.string "That was perfect. Here - this is for\nyour trouble!$"

GreatCrater_Text_XIsTheBiggestHappeningThingRight::
# 372 "data/maps/GreatCrater/scripts.pory"
	.string "In New Rustboro, {STR_VAR_1} is trendy.$"

GreatCrater_Text_TellMeWhatsNewAndIn::
# 376 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} Not trendy? Tell me what's trendy then.$"

GreatCrater_Text_OfCourseIKnowAboutThat::
# 381 "data/maps/GreatCrater/scripts.pory"
	.string "You're right. “{STR_VAR_1}” is old news, {STR_VAR_2} is the shit now.$"

GreatCrater_Text_XHuhIThinkYIsCool::
# 387 "data/maps/GreatCrater/scripts.pory"
	.string "Nah, {STR_VAR_2} is lame, {STR_VAR_1} is the cool thing.$"

GreatCrater_Text_HearOfAnyTrendsComeShareWithMe::
# 393 "data/maps/GreatCrater/scripts.pory"
	.string "Well, share with me later.$"

GreatCrater_Text_YeahDefinitionOfInRightNow::
# 398 "data/maps/GreatCrater/scripts.pory"
	.string "Yeah, {STR_VAR_1} is what's in.$"

TouristGreatCrater_Intro::
# 451 "data/maps/GreatCrater/scripts.pory"
	.string "This crater is a breathtaking sight...\pBut it would be even more memorable\nafter a battle!$"

TouristGreatCrater_Outro::
# 454 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, yes... I'll never forget this!$"

ConspiracyGreatCrater_Intro::
# 490 "data/maps/GreatCrater/scripts.pory"
	.string "Hehe... do you know the real reason why\nDevon is making Safemon?\pI'll tell you if you beat me!$"

ConspiracyGreatCrater_Outro::
# 493 "data/maps/GreatCrater/scripts.pory"
	.string "Alright, listen closely...$"

ConspiracyGreatCrater_Intro2::
# 496 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! This time, I'll really tell\n you the truth behind Safemon...\p But only if you beat me!$"

ConspiracyGreatCrater_Outro2::
# 500 "data/maps/GreatCrater/scripts.pory"
	.string "You've earned the right to the truth. Listen...$"
