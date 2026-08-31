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
# 24 "data/maps/GreatCrater/scripts.pory"
	release
	return

RedoTouristWarning_1:
# 22 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 0
	return


DynamicWeatherCrater::
# 29 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATER_WEATHER, 0
	goto_if_eq DynamicWeatherCrater_1
	return

DynamicWeatherCrater_1:
# 30 "data/maps/GreatCrater/scripts.pory"
	random 10
# 31 "data/maps/GreatCrater/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 33 "data/maps/GreatCrater/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/GreatCrater/scripts.pory"
	case 0, DynamicWeatherCrater_4
# 35 "data/maps/GreatCrater/scripts.pory"
	case 1, DynamicWeatherCrater_5
# 36 "data/maps/GreatCrater/scripts.pory"
	case 2, DynamicWeatherCrater_6
# 37 "data/maps/GreatCrater/scripts.pory"
	case 3, DynamicWeatherCrater_7
# 38 "data/maps/GreatCrater/scripts.pory"
	case 4, DynamicWeatherCrater_8
# 39 "data/maps/GreatCrater/scripts.pory"
	case 5, DynamicWeatherCrater_9
# 40 "data/maps/GreatCrater/scripts.pory"
	case 6, DynamicWeatherCrater_10
# 41 "data/maps/GreatCrater/scripts.pory"
	case 7, DynamicWeatherCrater_11
# 42 "data/maps/GreatCrater/scripts.pory"
	case 8, DynamicWeatherCrater_12
# 43 "data/maps/GreatCrater/scripts.pory"
	case 9, DynamicWeatherCrater_13
# 44 "data/maps/GreatCrater/scripts.pory"
	case 10, DynamicWeatherCrater_14
	return

DynamicWeatherCrater_4:
# 34 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterEndAsh
	return

DynamicWeatherCrater_5:
# 35 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterEndAsh
	return

DynamicWeatherCrater_6:
# 36 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterEndAsh
	return

DynamicWeatherCrater_7:
# 37 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterEndAsh
	return

DynamicWeatherCrater_8:
# 38 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterEndAsh
	return

DynamicWeatherCrater_9:
# 39 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterEndAsh
	return

DynamicWeatherCrater_10:
# 40 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterEndAsh
	return

DynamicWeatherCrater_11:
# 41 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterEndAsh
	return

DynamicWeatherCrater_12:
# 42 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterEndAsh
	return

DynamicWeatherCrater_13:
# 43 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterShade
	return

DynamicWeatherCrater_14:
# 44 "data/maps/GreatCrater/scripts.pory"
	goto GreatCraterShade
	return


GreatCraterWeather::
# 51 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 0, GreatCraterShade
# 52 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 1, GreatCraterAsh1
# 53 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 2, GreatCraterAsh2
# 54 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 3, GreatCraterEndAsh
# 56 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterShade::
# 60 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return


GreatCraterAsh1::
# 64 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 65 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 2
# 66 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterAsh2::
# 70 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 71 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 3
# 72 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterEndAsh::
# 77 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 78 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
# 79 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCrater_EventScript_TrendyPhraseBoy::
# 85 "data/maps/GreatCrater/scripts.pory"
	lock
# 86 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 87 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 88 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 89 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, YES, GreatCrater_EventScript_ConfirmTrendyPhrase
# 90 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GreatCrater_EventScript_RejectTrendyPhrase
	end


GreatCrater_EventScript_ConfirmTrendyPhrase::
# 97 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 98 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_RejectTrendyPhrase::
# 102 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 103 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 104 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 105 "data/maps/GreatCrater/scripts.pory"
	lock
# 106 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 107 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, GreatCrater_EventScript_GiveNewTrendyPhrase
# 108 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, GreatCrater_EventScript_CancelNewTrendyPhrase
	end


ReportersGreatCrater::
# 116 "data/maps/GreatCrater/scripts.pory"
	lockall
# 117 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 118 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 119 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, ReportersGreatCrater_2
ReportersGreatCrater_1:
# 274 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, ReportersGreatCrater_5
ReportersGreatCrater_4:
# 288 "data/maps/GreatCrater/scripts.pory"
finishreporterscript:
# 289 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 290 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

ReportersGreatCrater_2:
# 123 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 125 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_0
# 128 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 129 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 130 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_1
# 131 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 132 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 133 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_2
# 134 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 135 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 136 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_3
# 138 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 139 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 140 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 141 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 142 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_8
ReportersGreatCrater_7:
# 143 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_14
ReportersGreatCrater_13:
# 145 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 146 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 147 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 148 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_19
ReportersGreatCrater_18:
# 149 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_22
ReportersGreatCrater_21:
# 151 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 152 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 153 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_8
# 156 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_9, ReportersGreatCrater_Text_10, ReportersGreatCrater_Text_11
# 158 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_25
ReportersGreatCrater_24:
# 237 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_28
ReportersGreatCrater_27:
# 250 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ReportersGreatCrater_33
	goto ReportersGreatCrater_1

ReportersGreatCrater_5:
# 275 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 276 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_29
# 277 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 278 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_11
ReportersGreatCrater_10:
# 281 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_16
	goto ReportersGreatCrater_4

ReportersGreatCrater_8:
# 142 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_4
	goto ReportersGreatCrater_7

ReportersGreatCrater_11:
# 279 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_10

ReportersGreatCrater_14:
# 143 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_5
	goto ReportersGreatCrater_13

ReportersGreatCrater_16:
# 282 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 283 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_32
# 284 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 285 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_5
	goto ReportersGreatCrater_4

ReportersGreatCrater_19:
# 148 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_6
	goto ReportersGreatCrater_18

ReportersGreatCrater_22:
# 149 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_7
	goto ReportersGreatCrater_21

ReportersGreatCrater_25:
# 159 "data/maps/GreatCrater/scripts.pory"
acceptedtoplayrebel:
# 160 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 161 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_12
# 167 "data/maps/GreatCrater/scripts.pory"
retrytrendyphrase:
# 168 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 169 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 171 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ReportersGreatCrater_31
ReportersGreatCrater_30:
# 222 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReportersGreatCrater_35
	goto ReportersGreatCrater_24

ReportersGreatCrater_28:
# 238 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 239 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_23
# 241 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 242 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 243 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 244 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 246 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 247 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_27

ReportersGreatCrater_31:
# 172 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 174 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq ReportersGreatCrater_38
ReportersGreatCrater_37:
# 188 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 189 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_16
# 190 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 191 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 192 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_17
# 193 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 194 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 195 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 196 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 197 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_18
# 200 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 201 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 202 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 203 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_19
# 204 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 205 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 206 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 207 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 208 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 209 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 210 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 212 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 213 "data/maps/GreatCrater/scripts.pory"
	removeobject 2
# 214 "data/maps/GreatCrater/scripts.pory"
	removeobject 3
# 215 "data/maps/GreatCrater/scripts.pory"
	setflag reportersleavecrater
# 216 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 218 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 219 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_30

ReportersGreatCrater_33:
# 251 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 252 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_24
# 253 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 254 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 255 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_25
# 256 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_26, ReportersGreatCrater_Text_27
# 257 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_41
ReportersGreatCrater_40:
# 260 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_43
	goto ReportersGreatCrater_1

ReportersGreatCrater_35:
# 223 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 224 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_22
# 226 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_24

ReportersGreatCrater_38:
# 175 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 176 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_13
# 179 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 180 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 181 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_14
# 182 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 183 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 184 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_15
# 185 "data/maps/GreatCrater/scripts.pory"
	goto retrytrendyphrase
	goto ReportersGreatCrater_37

ReportersGreatCrater_41:
# 258 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_40

ReportersGreatCrater_43:
# 261 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 262 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 263 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_28
# 264 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 265 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 266 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 267 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 268 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 269 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_1


TrendyPhaseTest::
# 305 "data/maps/GreatCrater/scripts.pory"
	lockall
# 306 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 307 "data/maps/GreatCrater/scripts.pory"
	msgbox TrendyPhaseTest_Text_0
# 308 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCrater_EventScript_GiveNewTrendyPhrase::
# 313 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 314 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, GreatCrater_EventScript_PhraseNotTrendyEnough
# 316 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 320 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0
# 323 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 324 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1
# 326 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2
# 328 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 330 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 331 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_CancelNewTrendyPhrase::
# 336 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0
# 338 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 339 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_PhraseNotTrendyEnough::
# 343 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0
# 347 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 348 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


CameramanGreatCrater::
# 387 "data/maps/GreatCrater/scripts.pory"
	lockall
# 388 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 389 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, CameramanGreatCrater_2
CameramanGreatCrater_1:
# 393 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, CameramanGreatCrater_5
CameramanGreatCrater_4:
# 400 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

CameramanGreatCrater_2:
# 391 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_0
	goto CameramanGreatCrater_1

CameramanGreatCrater_5:
# 394 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 395 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 396 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_1
# 397 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 398 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_2
	goto CameramanGreatCrater_4


TouristGreatCraterBattle::
# 406 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro, TouristGreatCraterRegister
# 407 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 408 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TouristGreatCraterRematch
# 409 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
# 411 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRegister::
# 416 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 417 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 418 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRegister_Text_0
# 419 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_TOURIST_GREATCRATER
# 420 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRematch::
# 425 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro
# 426 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
	end


ConspiracyGreatCraterBattle::
# 442 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro, ConspiracyGreatCraterRegister
# 443 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 444 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ConspiracyGreatCraterRematch
# 445 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterBattle_Text_0
# 447 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRegister::
# 452 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 453 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 454 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_0
# 456 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_CONSPIRACY_GREATCRATER
# 457 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_1
# 459 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRematch::
# 464 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro2, ConspiracyGreatCrater_Outro2
# 465 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRematch_Text_0
	end


GreatCraterSouvenirShop::
# 488 "data/maps/GreatCrater/scripts.pory"
	lockall
# 489 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 490 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 491 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShop_Text_0
# 492 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 0
# 493 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_BUYSOMETHINGWILLYA, FALSE
# 494 "data/maps/GreatCrater/scripts.pory"
	pokemart ShopSouvenirs
# 495 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 1
# 497 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


	.align 2
# 501 "data/maps/GreatCrater/scripts.pory"
ShopSouvenirs:
# 502 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 503 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 504 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 505 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

GreatCraterSouvenirShopkeeper::
# 510 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 511 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 512 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShopkeeper_Text_0
# 514 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_5
# 515 "data/maps/GreatCrater/scripts.pory"
	waitmovement 1
# 516 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirBox::
# 519 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirBox_Text_0
# 520 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSign::
# 523 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSign_Text_0
# 524 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirSupplies::
# 527 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirSupplies_Text_0
# 528 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterVoid::
# 531 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterVoid_Text_0
# 533 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


Cratertouristasksforhelp::
# 539 "data/maps/GreatCrater/scripts.pory"
	lock
# 540 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 541 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 542 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 543 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 544 "data/maps/GreatCrater/scripts.pory"
	msgbox Cratertouristasksforhelp_Text_0
# 545 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 549 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 1
# 550 "data/maps/GreatCrater/scripts.pory"
	dofieldeffectsparkle 11, 15, 9
# 551 "data/maps/GreatCrater/scripts.pory"
	release
	return


CraterTrappedTouristandRope::
# 555 "data/maps/GreatCrater/scripts.pory"
	lock
# 556 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 557 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq CraterTrappedTouristandRope_2
CraterTrappedTouristandRope_1:
# 638 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 2
	goto_if_eq CraterTrappedTouristandRope_5
CraterTrappedTouristandRope_4:
# 651 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 3
	goto_if_eq CraterTrappedTouristandRope_11
CraterTrappedTouristandRope_10:
# 657 "data/maps/GreatCrater/scripts.pory"
endcraterbottomtouristscript:
# 658 "data/maps/GreatCrater/scripts.pory"
	release
	return

CraterTrappedTouristandRope_2:
# 558 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_0
# 564 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 2
	checkitem ITEM_BINDING_BAND
# 0 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CraterTrappedTouristandRope_7
# 633 "data/maps/GreatCrater/scripts.pory"
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
# 568 "data/maps/GreatCrater/scripts.pory"
helpcratertourist:
# 569 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_1
# 570 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 572 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CraterTrappedTouristandRope_17
CraterTrappedTouristandRope_16:
# 622 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterTrappedTouristandRope_21
	goto CraterTrappedTouristandRope_1

CraterTrappedTouristandRope_11:
# 653 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_11
# 654 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 655 "data/maps/GreatCrater/scripts.pory"
	warp MAP_GREAT_CRATER_BOTTOM, 0
	goto CraterTrappedTouristandRope_10

CraterTrappedTouristandRope_14:
# 640 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_9
# 643 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_13

CraterTrappedTouristandRope_17:
# 573 "data/maps/GreatCrater/scripts.pory"
	clearflag greatcraterrope
# 574 "data/maps/GreatCrater/scripts.pory"
	addobject 11
# 575 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 11, 15
# 576 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 11, 11, 15
# 577 "data/maps/GreatCrater/scripts.pory"
	showobjectat 11, MAP_GREAT_CRATER
# 579 "data/maps/GreatCrater/scripts.pory"
	playse SE_BALL_THROW
# 580 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_2
# 581 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 582 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 583 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_3
# 584 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 585 "data/maps/GreatCrater/scripts.pory"
	playse SE_M_BIND
# 586 "data/maps/GreatCrater/scripts.pory"
	waitse
# 587 "data/maps/GreatCrater/scripts.pory"
	playse SE_M_BIND
# 588 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_0
# 589 "data/maps/GreatCrater/scripts.pory"
	showobjectat 10, MAP_GREAT_CRATER
# 591 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CraterTrappedTouristandRope_Movement_1
# 592 "data/maps/GreatCrater/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 593 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_2
# 594 "data/maps/GreatCrater/scripts.pory"
	playse SE_LEDGE
# 595 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 598 "data/maps/GreatCrater/scripts.pory"
	waitse
# 600 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_3
# 601 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_4
# 603 "data/maps/GreatCrater/scripts.pory"
	giveitem ITEM_EVIOLITE
# 604 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_5
# 606 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_5
# 607 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_6
# 608 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_3
# 609 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_7
# 612 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_4
# 613 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 614 "data/maps/GreatCrater/scripts.pory"
	removeobject 10
# 615 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 0, 0
# 616 "data/maps/GreatCrater/scripts.pory"
	hideobjectat 10, MAP_GREAT_CRATER
# 617 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 3
# 618 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 619 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_16

CraterTrappedTouristandRope_19:
# 646 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_10
# 648 "data/maps/GreatCrater/scripts.pory"
	goto helpcratertourist
	goto CraterTrappedTouristandRope_4

CraterTrappedTouristandRope_21:
# 623 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_8
# 629 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_1


GreatCraterDevonGruntFemale::
# 665 "data/maps/GreatCrater/scripts.pory"
	lock
# 666 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 667 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_0
# 668 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_0
# 670 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_3
# 671 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_1
# 673 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_4
# 674 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_2
# 675 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 676 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 677 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 678 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 679 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterDevonGruntMale::
# 683 "data/maps/GreatCrater/scripts.pory"
	lock
# 684 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 685 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_0
# 686 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntMale_Text_0
# 688 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_5
# 689 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 690 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterTouristMaleIdle::
# 694 "data/maps/GreatCrater/scripts.pory"
	lock
# 695 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 696 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, ReportersGreatCrater_Movement_0
# 697 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterTouristMaleIdle_Text_0
# 699 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, GreatCraterTouristMaleIdle_Movement_0
# 700 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 701 "data/maps/GreatCrater/scripts.pory"
	release
	return


# 123 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_0:
# 123 "data/maps/GreatCrater/scripts.pory"
	face_player
	step_end

# 128 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_1:
# 128 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 131 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_2:
# 131 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_right
	step_end

# 134 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_3:
# 134 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_up
	step_end

# 179 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_4:
# 179 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_down
	step_end

# 284 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_5:
# 284 "data/maps/GreatCrater/scripts.pory"
	face_down
	step_end

# 541 "data/maps/GreatCrater/scripts.pory"
Cratertouristasksforhelp_Movement_0:
# 541 "data/maps/GreatCrater/scripts.pory"
	emote_exclamation_mark
	step_end

# 588 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_0:
# 588 "data/maps/GreatCrater/scripts.pory"
	face_up
	step_end

# 591 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_1:
# 591 "data/maps/GreatCrater/scripts.pory"
	walk_right
# 591 "data/maps/GreatCrater/scripts.pory"
	face_left
	step_end

# 593 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_2:
# 593 "data/maps/GreatCrater/scripts.pory"
	jump_up
	step_end

# 600 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_3:
# 600 "data/maps/GreatCrater/scripts.pory"
	face_right
	step_end

# 612 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_4:
# 612 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 612 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 612 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 612 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 612 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 612 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 612 "data/maps/GreatCrater/scripts.pory"
	walk_up
	step_end

# 699 "data/maps/GreatCrater/scripts.pory"
GreatCraterTouristMaleIdle_Movement_0:
# 699 "data/maps/GreatCrater/scripts.pory"
	face_left
	step_end

ReportersGreatCrater_Text_0:
# 125 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, look, Dan - an interesting-looking\n"
	.string "local just approached us!\p"
	.string "We're from Devon TV, and we're filming a\n"
	.string "documentary about the Rebel Zone!\p"
	.string "However, our footage right now is\n"
	.string "lacking a bit of... flair.$"

ReportersGreatCrater_Text_1:
# 130 "data/maps/GreatCrater/scripts.pory"
	.string "Don't sugarcoat it, Kira. It's boring.$"

ReportersGreatCrater_Text_2:
# 133 "data/maps/GreatCrater/scripts.pory"
	.string "... a bit, maybe. Which is why we were\n"
	.string "thinking about staging a battle!$"

ReportersGreatCrater_Text_3:
# 136 "data/maps/GreatCrater/scripts.pory"
	.string "We will pretend one of those dangerous\n"
	.string "rebels have assailed us, and that we\l"
	.string "escaped by the skin of our teeth.$"

ReportersGreatCrater_Text_4:
# 142 "data/maps/GreatCrater/scripts.pory"
	.string "He looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_5:
# 143 "data/maps/GreatCrater/scripts.pory"
	.string "She looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_6:
# 148 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes him perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_7:
# 149 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes her perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_8:
# 153 "data/maps/GreatCrater/scripts.pory"
	.string "We need you to win, of course - it would\n"
	.string "not be very exciting if we just beat a\l"
	.string "dangerous rebel like nothing!\p"
	.string "So, will you help us? We will pay you\n"
	.string "handsomely for your time!$"

ReportersGreatCrater_Text_9:
# 156 "data/maps/GreatCrater/scripts.pory"
	.string "Sure$"

ReportersGreatCrater_Text_10:
# 156 "data/maps/GreatCrater/scripts.pory"
	.string "No chance$"

ReportersGreatCrater_Text_11:
# 156 "data/maps/GreatCrater/scripts.pory"
	.string "That's lying$"

ReportersGreatCrater_Text_12:
# 161 "data/maps/GreatCrater/scripts.pory"
	.string "Excellent - let's begin right away!\p"
	.string "At the count of three, please yell your\n"
	.string "most heinous insult, warcry, or similar\l"
	.string "to the camera.\p"
	.string "Then we take out our Pokémon, and have\n"
	.string "at it!\p"
	.string "Ready? Three, two, one... action!$"

ReportersGreatCrater_Text_13:
# 176 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, uhm... I'm sorry. I don't think we can\n"
	.string "have you saying “{STR_VAR_2},” in\l"
	.string "the documentary.\p"
	.string "That term has some implications I can't\n"
	.string "go over right now. Let's say some would\l"
	.string "get offended!$"

ReportersGreatCrater_Text_14:
# 181 "data/maps/GreatCrater/scripts.pory"
	.string "She means it's censored. So come up with\n"
	.string "something else, will you?$"

ReportersGreatCrater_Text_15:
# 184 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}As eloquent as ever, Dan...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_16:
# 189 "data/maps/GreatCrater/scripts.pory"
	.string "KYAAA! Someone help!! I am being\n"
	.string "ASSAILED!$"

ReportersGreatCrater_Text_17:
# 192 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}'Kyaa'? Really...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_18:
# 197 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.$"

ReportersGreatCrater_Text_19:
# 203 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is a great warcry.\p"
	.string "With the right editing, it may even get\n"
	.string "viral.$"

ReportersGreatCrater_Text_20:
# 206 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record some more in\l"
	.string "other locations.$"

ReportersGreatCrater_Text_21:
# 209 "data/maps/GreatCrater/scripts.pory"
	.string "Thanks for your help again - stay safe!$"

ReportersGreatCrater_Text_22:
# 224 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fright,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

ReportersGreatCrater_Text_23:
# 239 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, that's so unfortunate! Are you\n"
	.string "certain?\p"
	.string "We'll be here a while if you reconsider -\n"
	.string "which we beg you to do!$"

ReportersGreatCrater_Text_24:
# 252 "data/maps/GreatCrater/scripts.pory"
	.string "Lying? I wouldn't call it that. It's just\n"
	.string "a bit of showmanship!$"

ReportersGreatCrater_Text_25:
# 255 "data/maps/GreatCrater/scripts.pory"
	.string "If you won't help us, someone will. Why\n"
	.string "not take the pokeyen for yourself?$"

ReportersGreatCrater_Text_26:
# 256 "data/maps/GreatCrater/scripts.pory"
	.string "Okay, I'm in$"

ReportersGreatCrater_Text_27:
# 256 "data/maps/GreatCrater/scripts.pory"
	.string "Leave me out of this$"

ReportersGreatCrater_Text_28:
# 263 "data/maps/GreatCrater/scripts.pory"
	.string "Well, suit yourself. We'll be here a while\n"
	.string "if you change your mind.$"

ReportersGreatCrater_Text_29:
# 276 "data/maps/GreatCrater/scripts.pory"
	.string "Have you changed your mind? Will you\n"
	.string "help us stage a battle?$"

ReportersGreatCrater_Text_30:
# 277 "data/maps/GreatCrater/scripts.pory"
	.string "Yes$"

ReportersGreatCrater_Text_31:
# 277 "data/maps/GreatCrater/scripts.pory"
	.string "No$"

ReportersGreatCrater_Text_32:
# 283 "data/maps/GreatCrater/scripts.pory"
	.string "That's too bad... I think you'd be such a\n"
	.string "star!$"

TrendyPhaseTest_Text_0:
# 307 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is awesome.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0:
# 320 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.\p"
	.string "... that's an amazing warcry$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1:
# 324 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_2} is a great warcry. With\n"
	.string "the right editing, it may even get viral.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2:
# 326 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record in other\l"
	.string "places.$"

GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0:
# 336 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fear,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0:
# 343 "data/maps/GreatCrater/scripts.pory"
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
# 391 "data/maps/GreatCrater/scripts.pory"
	.string "The cameraman seems to disregard\n"
	.string "{PLAYER} entirely.$"

CameramanGreatCrater_Text_1:
# 396 "data/maps/GreatCrater/scripts.pory"
	.string "It's easy money. You won't get far in\n"
	.string "the Rebel Zone by being moral.$"

CameramanGreatCrater_Text_2:
# 398 "data/maps/GreatCrater/scripts.pory"
	.string "I know from experience...$"

TouristGreatCraterBattle_Text_0:
# 409 "data/maps/GreatCrater/scripts.pory"
	.string "Pictures are great and all, but there's\n"
	.string "nothing like an exciting moment to\l"
	.string "imprint a memory.$"

TouristGreatCraterRegister_Text_0:
# 418 "data/maps/GreatCrater/scripts.pory"
	.string "That was exciting! Say, we don't we\n"
	.string "exchange Devonav profiles?$"

ConspiracyGreatCraterBattle_Text_0:
# 445 "data/maps/GreatCrater/scripts.pory"
	.string "Sorry, but my device has been\n"
	.string "compromised. You'll have to learn the\l"
	.string "truth elsewhere!$"

ConspiracyGreatCraterRegister_Text_0:
# 454 "data/maps/GreatCrater/scripts.pory"
	.string "Before I tell you, let's put our Devon\n"
	.string "Navs in airplane mode.\p"
	.string "Where was the option now...?$"

ConspiracyGreatCraterRegister_Text_1:
# 457 "data/maps/GreatCrater/scripts.pory"
	.string "Oops, wrong button. Wait, no... I could\n"
	.string "have swore I pressed the right one.\p"
	.string "That's it, I've been HACKED BY DEVON!$"

ConspiracyGreatCraterRematch_Text_0:
# 465 "data/maps/GreatCrater/scripts.pory"
	.string "The truth is... I don't know any of\n"
	.string "Devon's secrets.\p"
	.string "I just like to make things up to look\n"
	.string "interesting. It's a problem I have.$"

GreatCraterSouvenirShop_Text_0:
# 491 "data/maps/GreatCrater/scripts.pory"
	.string "Welcome to the Great Crater's Souvenir\n"
	.string "Shop!$"

GreatCraterSouvenirShopkeeper_Text_0:
# 512 "data/maps/GreatCrater/scripts.pory"
	.string "I know this is not New Rustboro Mall,\n"
	.string "but let's be civil hey?\p"
	.string "If you want to buy, go around the\n"
	.string "counter.$"

GreatCraterSouvenirBox_Text_0:
# 519 "data/maps/GreatCrater/scripts.pory"
	.string "The box is full of questionably\n"
	.string "preserved donuts.$"

GreatCraterSign_Text_0:
# 523 "data/maps/GreatCrater/scripts.pory"
	.string "North - Road 002\p"
	.string "East - Route 101$"

GreatCraterSouvenirSupplies_Text_0:
# 527 "data/maps/GreatCrater/scripts.pory"
	.string "The articles are covered by the same\n"
	.string "dust that's everywhere.$"

GreatCraterVoid_Text_0:
# 531 "data/maps/GreatCrater/scripts.pory"
	.string "The pitch-black bottom of the crater is\n"
	.string "too deep beneath to see.\p"
	.string "With the right equipment, one could\n"
	.string "climb down and explore it...$"

Cratertouristasksforhelp_Text_0:
# 544 "data/maps/GreatCrater/scripts.pory"
	.string "O-oh, hey! HEEEY! Is there anyone up\n"
	.string "there? Somebody HELP ME!$"

CraterTrappedTouristandRope_Text_0:
# 558 "data/maps/GreatCrater/scripts.pory"
	.string "Aah, thank the heavens! You may not be\n"
	.string "able to see me, but I'm down here!\p"
	.string "I wanted to take a good picture of the\n"
	.string "crater, so I leaned in and...\p"
	.string "I slipped with the sand and fell!\p"
	.string "I'm alright really, the sand cushioned\n"
	.string "my fall... but I can't get out!\p"
	.string "Can you go get some rope? Something\n"
	.string "like a strong {COLOR RED}Sailor Knot{COLOR DARK_GRAY} would do.\p"
	.string "Please hurry up... there's a suspicious\n"
	.string "old man down here, and I want nothing to\l"
	.string "do with him!$"

CraterTrappedTouristandRope_Text_1:
# 569 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to help the person?$"

CraterTrappedTouristandRope_Text_2:
# 580 "data/maps/GreatCrater/scripts.pory"
	.string "{PLAYER} ties the knot firmly to a\n"
	.string "rock and lets the rest fall down.$"

CraterTrappedTouristandRope_Text_3:
# 583 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, you're a life-saver!$"

CraterTrappedTouristandRope_Text_4:
# 601 "data/maps/GreatCrater/scripts.pory"
	.string "My hero! I don't know what I would have\n"
	.string "done without you!\p"
	.string "But I know what I'll do now. Reward you\n"
	.string "for your generosity!$"

CraterTrappedTouristandRope_Text_5:
# 604 "data/maps/GreatCrater/scripts.pory"
	.string "A friend gifted me this before my trip,\n"
	.string "saying it'll keep me safe...\p"
	.string "Well, it clearly doesn't work, so you can\n"
	.string "have it!$"

CraterTrappedTouristandRope_Text_6:
# 607 "data/maps/GreatCrater/scripts.pory"
	.string "Wait... maybe it's thanks to it that you\n"
	.string "found me?$"

CraterTrappedTouristandRope_Text_7:
# 609 "data/maps/GreatCrater/scripts.pory"
	.string "Well, nevermind. I don't plan to leave\n"
	.string "New Rustboro ever again, so I won't\l"
	.string "need it.\p"
	.string "Goodbye now, and watch your footing!$"

CraterTrappedTouristandRope_Text_8:
# 623 "data/maps/GreatCrater/scripts.pory"
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
# 640 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! But... I don't see that\n"
	.string "{COLOR RED}Sailor Knot{COLOR DARK_GRAY} on you!\p"
	.string "I appreciate you checking on me, but I'd\n"
	.string "appreciate it even more if you focused\l"
	.string "on helping me to get out!\p"
	.string "I'm begging you here!$"

CraterTrappedTouristandRope_Text_10:
# 646 "data/maps/GreatCrater/scripts.pory"
	.string "There you are! And I see you've brought\n"
	.string "the {COLOR RED}Sailor Knot{COLOR DARK_GRAY}!\p"
	.string "Quick, tie it to something and let it\n"
	.string "fall!$"

CraterTrappedTouristandRope_Text_11:
# 653 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to climb down?$"

GreatCraterDevonGruntFemale_Text_0:
# 668 "data/maps/GreatCrater/scripts.pory"
	.string "I'm sorry, but one of our scientists is\n"
	.string "currently searching for a dangerous\l"
	.string "Pokémon in Road 002.$"

GreatCraterDevonGruntFemale_Text_1:
# 671 "data/maps/GreatCrater/scripts.pory"
	.string "The creature in question is next on the\n"
	.string "list of Pokémon to be safened, and we\l"
	.string "can't risk civilians interfering with his\l"
	.string "work.$"

GreatCraterDevonGruntFemale_Text_2:
# 674 "data/maps/GreatCrater/scripts.pory"
	.string "You have been hurt by a Pokémon, do\n"
	.string "you? Surely you understand.$"

GreatCraterDevonGruntMale_Text_0:
# 686 "data/maps/GreatCrater/scripts.pory"
	.string "By regulation of Devon Co.'s Wildlife\n"
	.string "Protocol, section 75, titled 'Route\l"
	.string "Enclosures for the purpose of Safemon\l"
	.string "Research...'\p"
	.string "This area is closed off to civilians\n"
	.string "until further notice.$"

GreatCraterTouristMaleIdle_Text_0:
# 697 "data/maps/GreatCrater/scripts.pory"
	.string "I once ordered a donut in Pewter City,\n"
	.string "and they gave me a riceball!\p"
	.string "At least you know what donuts are here\n"
	.string "in Hoenn.$"

ReportersGreatCrater_Outro::
# 298 "data/maps/GreatCrater/scripts.pory"
	.string "That was perfect. Here - this is for\nyour trouble!$"

GreatCrater_Text_XIsTheBiggestHappeningThingRight::
# 353 "data/maps/GreatCrater/scripts.pory"
	.string "In New Rustboro, {STR_VAR_1} is trendy.$"

GreatCrater_Text_TellMeWhatsNewAndIn::
# 357 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} Not trendy? Tell me what's trendy then.$"

GreatCrater_Text_OfCourseIKnowAboutThat::
# 362 "data/maps/GreatCrater/scripts.pory"
	.string "You're right. “{STR_VAR_1}” is old news, {STR_VAR_2} is the shit now.$"

GreatCrater_Text_XHuhIThinkYIsCool::
# 368 "data/maps/GreatCrater/scripts.pory"
	.string "Nah, {STR_VAR_2} is lame, {STR_VAR_1} is the cool thing.$"

GreatCrater_Text_HearOfAnyTrendsComeShareWithMe::
# 374 "data/maps/GreatCrater/scripts.pory"
	.string "Well, share with me later.$"

GreatCrater_Text_YeahDefinitionOfInRightNow::
# 379 "data/maps/GreatCrater/scripts.pory"
	.string "Yeah, {STR_VAR_1} is what's in.$"

TouristGreatCrater_Intro::
# 432 "data/maps/GreatCrater/scripts.pory"
	.string "This crater is a breathtaking sight...\pBut it would be even more memorable\nafter a battle!$"

TouristGreatCrater_Outro::
# 435 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, yes... I'll never forget this!$"

ConspiracyGreatCrater_Intro::
# 471 "data/maps/GreatCrater/scripts.pory"
	.string "Hehe... do you know the real reason why\nDevon invented Safemon?\pI'll tell you if you beat me!$"

ConspiracyGreatCrater_Outro::
# 474 "data/maps/GreatCrater/scripts.pory"
	.string "Very well... listen closely...$"

ConspiracyGreatCrater_Intro2::
# 477 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! This time, I'll really tell\n you the truth behind Safemon...\p But only if you beat me!$"

ConspiracyGreatCrater_Outro2::
# 481 "data/maps/GreatCrater/scripts.pory"
	.string "You've earned the right to the truth. Listen...$"
