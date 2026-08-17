# 1 "data/maps/GreatCrater/scripts.pory"


GreatCrater_MapScripts::
# 7 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GreatCraterWeather
	.byte 0


GreatCraterWeather::
# 13 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 0, GreatCraterShade
# 14 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 1, GreatCraterAsh1
# 15 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 2, GreatCraterAsh2
# 16 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_GREATCRATER_WEATHER, 3, GreatCraterEndAsh
# 18 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterShade::
# 22 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_SHADE
	return


GreatCraterAsh1::
# 26 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 27 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 2
# 28 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterAsh2::
# 32 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 33 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 3
# 34 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCraterEndAsh::
# 39 "data/maps/GreatCrater/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 40 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATER_WEATHER, 0
# 41 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_WEATHER_GROUDON, TRUE
	return


GreatCrater_EventScript_TrendyPhraseBoy::
# 47 "data/maps/GreatCrater/scripts.pory"
	lock
# 48 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 49 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 50 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 51 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, YES, GreatCrater_EventScript_ConfirmTrendyPhrase
# 52 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GreatCrater_EventScript_RejectTrendyPhrase
	end


GreatCrater_EventScript_ConfirmTrendyPhrase::
# 59 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 60 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_RejectTrendyPhrase::
# 64 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 65 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 66 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 67 "data/maps/GreatCrater/scripts.pory"
	lock
# 68 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 69 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, GreatCrater_EventScript_GiveNewTrendyPhrase
# 70 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, GreatCrater_EventScript_CancelNewTrendyPhrase
	end


ReportersGreatCrater::
# 78 "data/maps/GreatCrater/scripts.pory"
	lockall
# 79 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 80 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 81 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, ReportersGreatCrater_2
ReportersGreatCrater_1:
# 232 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, ReportersGreatCrater_5
ReportersGreatCrater_4:
# 246 "data/maps/GreatCrater/scripts.pory"
finishreporterscript:
# 247 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 248 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

ReportersGreatCrater_2:
# 85 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 87 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_0
# 90 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 91 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 92 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_1
# 93 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 94 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 95 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_2
# 96 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 97 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 98 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_3
# 100 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 101 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 102 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 103 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_8
ReportersGreatCrater_7:
# 104 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_14
ReportersGreatCrater_13:
# 106 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 107 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 108 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 109 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_19
ReportersGreatCrater_18:
# 110 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_22
ReportersGreatCrater_21:
# 112 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 113 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 114 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_8
# 117 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_9, ReportersGreatCrater_Text_10, ReportersGreatCrater_Text_11
# 119 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_25
ReportersGreatCrater_24:
# 197 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_28
ReportersGreatCrater_27:
# 210 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ReportersGreatCrater_33
	goto ReportersGreatCrater_1

ReportersGreatCrater_5:
# 233 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 234 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_29
# 235 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 236 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_11
ReportersGreatCrater_10:
# 239 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_16
	goto ReportersGreatCrater_4

ReportersGreatCrater_8:
# 103 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_4
	goto ReportersGreatCrater_7

ReportersGreatCrater_11:
# 237 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_10

ReportersGreatCrater_14:
# 104 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_5
	goto ReportersGreatCrater_13

ReportersGreatCrater_16:
# 240 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 241 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_32
# 242 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 243 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_5
	goto ReportersGreatCrater_4

ReportersGreatCrater_19:
# 109 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_6
	goto ReportersGreatCrater_18

ReportersGreatCrater_22:
# 110 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_7
	goto ReportersGreatCrater_21

ReportersGreatCrater_25:
# 120 "data/maps/GreatCrater/scripts.pory"
acceptedtoplayrebel:
# 121 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 122 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_12
# 128 "data/maps/GreatCrater/scripts.pory"
retrytrendyphrase:
# 129 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 130 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 132 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ReportersGreatCrater_31
ReportersGreatCrater_30:
# 182 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReportersGreatCrater_35
	goto ReportersGreatCrater_24

ReportersGreatCrater_28:
# 198 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 199 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_23
# 201 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 202 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 203 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 204 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 206 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 207 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_27

ReportersGreatCrater_31:
# 133 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 135 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq ReportersGreatCrater_38
ReportersGreatCrater_37:
# 149 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 150 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_16
# 151 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 152 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 153 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_17
# 154 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 155 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 156 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 157 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 158 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_18
# 161 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 162 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 163 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 164 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_19
# 165 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 166 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 167 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 168 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 169 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 170 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 172 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 173 "data/maps/GreatCrater/scripts.pory"
	removeobject 2
# 174 "data/maps/GreatCrater/scripts.pory"
	removeobject 3
# 175 "data/maps/GreatCrater/scripts.pory"
	setflag reportersleavecrater
# 176 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 178 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 179 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_30

ReportersGreatCrater_33:
# 211 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 212 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_24
# 213 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 214 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 215 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_25
# 216 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_26, ReportersGreatCrater_Text_27
# 217 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_41
ReportersGreatCrater_40:
# 220 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_43
	goto ReportersGreatCrater_1

ReportersGreatCrater_35:
# 183 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 184 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_22
# 186 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_24

ReportersGreatCrater_38:
# 136 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 137 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_13
# 140 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 141 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 142 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_14
# 143 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 144 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 145 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_15
# 146 "data/maps/GreatCrater/scripts.pory"
	goto retrytrendyphrase
	goto ReportersGreatCrater_37

ReportersGreatCrater_41:
# 218 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_40

ReportersGreatCrater_43:
# 221 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 222 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 223 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_28
# 224 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 225 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 226 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_5
# 227 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_1


TrendyPhaseTest::
# 263 "data/maps/GreatCrater/scripts.pory"
	lockall
# 264 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 265 "data/maps/GreatCrater/scripts.pory"
	msgbox TrendyPhaseTest_Text_0
# 266 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCrater_EventScript_GiveNewTrendyPhrase::
# 271 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 272 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, GreatCrater_EventScript_PhraseNotTrendyEnough
# 274 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 278 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0
# 281 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 282 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1
# 284 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2
# 286 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 288 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 289 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_CancelNewTrendyPhrase::
# 294 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0
# 296 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 297 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_PhraseNotTrendyEnough::
# 301 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0
# 305 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 306 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


CameramanGreatCrater::
# 345 "data/maps/GreatCrater/scripts.pory"
	lockall
# 346 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 347 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, CameramanGreatCrater_2
CameramanGreatCrater_1:
# 351 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, CameramanGreatCrater_5
CameramanGreatCrater_4:
# 358 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

CameramanGreatCrater_2:
# 349 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_0
	goto CameramanGreatCrater_1

CameramanGreatCrater_5:
# 352 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 353 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 354 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_1
# 355 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 356 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_2
	goto CameramanGreatCrater_4


TouristGreatCraterBattle::
# 364 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro, TouristGreatCraterRegister
# 365 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 366 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TouristGreatCraterRematch
# 367 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
# 369 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRegister::
# 374 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 375 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 376 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRegister_Text_0
# 377 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_TOURIST_GREATCRATER
# 378 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRematch::
# 383 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro
# 384 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
	end


ConspiracyGreatCraterBattle::
# 400 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro, ConspiracyGreatCraterRegister
# 401 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 402 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ConspiracyGreatCraterRematch
# 403 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterBattle_Text_0
# 405 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRegister::
# 410 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 411 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 412 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_0
# 414 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_CONSPIRACY_GREATCRATER
# 415 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_1
# 417 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRematch::
# 422 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro2, ConspiracyGreatCrater_Outro2
# 423 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRematch_Text_0
	end


GreatCraterSouvenirShop::
# 446 "data/maps/GreatCrater/scripts.pory"
	lockall
# 447 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 448 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 449 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShop_Text_0
# 450 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 0
# 451 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_BUYSOMETHINGWILLYA, FALSE
# 452 "data/maps/GreatCrater/scripts.pory"
	pokemart ShopSouvenirs
# 453 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 0
# 454 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 455 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


	.align 2
# 459 "data/maps/GreatCrater/scripts.pory"
ShopSouvenirs:
# 460 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 461 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 462 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 463 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

GreatCraterSouvenirShopkeeper::
# 468 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 469 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 470 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShopkeeper_Text_0
# 472 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_5
# 473 "data/maps/GreatCrater/scripts.pory"
	waitmovement 1
# 474 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirBox::
# 477 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirBox_Text_0
# 478 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSign::
# 481 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSign_Text_0
# 482 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirSupplies::
# 485 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirSupplies_Text_0
# 486 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterVoid::
# 489 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterVoid_Text_0
# 491 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


Cratertouristasksforhelp::
# 497 "data/maps/GreatCrater/scripts.pory"
	lock
# 498 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 499 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 500 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 501 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 502 "data/maps/GreatCrater/scripts.pory"
	msgbox Cratertouristasksforhelp_Text_0
# 503 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 507 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 1
# 508 "data/maps/GreatCrater/scripts.pory"
	dofieldeffectsparkle 11, 15, 9
# 509 "data/maps/GreatCrater/scripts.pory"
	release
	return


CraterTrappedTouristandRope::
# 513 "data/maps/GreatCrater/scripts.pory"
	lock
# 514 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 515 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq CraterTrappedTouristandRope_2
CraterTrappedTouristandRope_1:
# 593 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 2
	goto_if_eq CraterTrappedTouristandRope_5
CraterTrappedTouristandRope_4:
# 606 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 3
	goto_if_eq CraterTrappedTouristandRope_11
CraterTrappedTouristandRope_10:
# 612 "data/maps/GreatCrater/scripts.pory"
endcraterbottomtouristscript:
# 613 "data/maps/GreatCrater/scripts.pory"
	release
	return

CraterTrappedTouristandRope_2:
# 516 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_0
# 522 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 2
	checkitem ITEM_BINDING_BAND
# 0 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CraterTrappedTouristandRope_7
# 588 "data/maps/GreatCrater/scripts.pory"
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
# 526 "data/maps/GreatCrater/scripts.pory"
helpcratertourist:
# 527 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_1
# 528 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 530 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CraterTrappedTouristandRope_17
CraterTrappedTouristandRope_16:
# 577 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterTrappedTouristandRope_21
	goto CraterTrappedTouristandRope_1

CraterTrappedTouristandRope_11:
# 608 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_11
# 609 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 610 "data/maps/GreatCrater/scripts.pory"
	warp MAP_GREAT_CRATER_BOTTOM, 0
	goto CraterTrappedTouristandRope_10

CraterTrappedTouristandRope_14:
# 595 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_9
# 598 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_13

CraterTrappedTouristandRope_17:
# 531 "data/maps/GreatCrater/scripts.pory"
	clearflag greatcraterrope
# 532 "data/maps/GreatCrater/scripts.pory"
	addobject 11
# 533 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 11, 15
# 534 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 11, 11, 15
# 535 "data/maps/GreatCrater/scripts.pory"
	showobjectat 11, MAP_GREAT_CRATER
# 537 "data/maps/GreatCrater/scripts.pory"
	playse SE_BALL_THROW
# 538 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_2
# 539 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 540 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 541 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_3
# 542 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 543 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_0
# 544 "data/maps/GreatCrater/scripts.pory"
	showobjectat 10, MAP_GREAT_CRATER
# 546 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CraterTrappedTouristandRope_Movement_1
# 547 "data/maps/GreatCrater/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 548 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_2
# 549 "data/maps/GreatCrater/scripts.pory"
	playse SE_LEDGE
# 550 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 553 "data/maps/GreatCrater/scripts.pory"
	waitse
# 555 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_3
# 556 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_4
# 558 "data/maps/GreatCrater/scripts.pory"
	giveitem ITEM_EVIOLITE
# 559 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_5
# 561 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_5
# 562 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_6
# 563 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_3
# 564 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_7
# 567 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_4
# 568 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 569 "data/maps/GreatCrater/scripts.pory"
	removeobject 10
# 570 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 0, 0
# 571 "data/maps/GreatCrater/scripts.pory"
	hideobjectat 10, MAP_GREAT_CRATER
# 572 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 3
# 573 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 574 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_16

CraterTrappedTouristandRope_19:
# 601 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_10
# 603 "data/maps/GreatCrater/scripts.pory"
	goto helpcratertourist
	goto CraterTrappedTouristandRope_4

CraterTrappedTouristandRope_21:
# 578 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_8
# 584 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_1


GreatCraterDevonGruntFemale::
# 620 "data/maps/GreatCrater/scripts.pory"
	lock
# 621 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 622 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_0
# 623 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_0
# 625 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_3
# 626 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_1
# 628 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_4
# 629 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_2
# 630 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 631 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 632 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 633 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 634 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterDevonGruntMale::
# 638 "data/maps/GreatCrater/scripts.pory"
	lock
# 639 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 640 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_0
# 641 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntMale_Text_0
# 643 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_5
# 644 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 645 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterTouristMaleIdle::
# 649 "data/maps/GreatCrater/scripts.pory"
	lock
# 650 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 651 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, ReportersGreatCrater_Movement_0
# 652 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterTouristMaleIdle_Text_0
# 654 "data/maps/GreatCrater/scripts.pory"
	applymovement 12, GreatCraterTouristMaleIdle_Movement_0
# 655 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 656 "data/maps/GreatCrater/scripts.pory"
	release
	return


# 85 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_0:
# 85 "data/maps/GreatCrater/scripts.pory"
	face_player
	step_end

# 90 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_1:
# 90 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 93 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_2:
# 93 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_right
	step_end

# 96 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_3:
# 96 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_up
	step_end

# 140 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_4:
# 140 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_down
	step_end

# 225 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_5:
# 225 "data/maps/GreatCrater/scripts.pory"
	face_down
	step_end

# 499 "data/maps/GreatCrater/scripts.pory"
Cratertouristasksforhelp_Movement_0:
# 499 "data/maps/GreatCrater/scripts.pory"
	emote_exclamation_mark
	step_end

# 543 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_0:
# 543 "data/maps/GreatCrater/scripts.pory"
	face_up
	step_end

# 546 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_1:
# 546 "data/maps/GreatCrater/scripts.pory"
	walk_right
# 546 "data/maps/GreatCrater/scripts.pory"
	face_left
	step_end

# 548 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_2:
# 548 "data/maps/GreatCrater/scripts.pory"
	jump_up
	step_end

# 555 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_3:
# 555 "data/maps/GreatCrater/scripts.pory"
	face_right
	step_end

# 567 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_4:
# 567 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 567 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 567 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 567 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 567 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 567 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 567 "data/maps/GreatCrater/scripts.pory"
	walk_up
	step_end

# 654 "data/maps/GreatCrater/scripts.pory"
GreatCraterTouristMaleIdle_Movement_0:
# 654 "data/maps/GreatCrater/scripts.pory"
	face_left
	step_end

ReportersGreatCrater_Text_0:
# 87 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, look, Dan - an interesting-looking\n"
	.string "local just approached us!\p"
	.string "We're from Devon TV, and we're filming a\n"
	.string "documentary about the Rebel Zone!\p"
	.string "However, our footage right now is\n"
	.string "lacking a bit of... flair.$"

ReportersGreatCrater_Text_1:
# 92 "data/maps/GreatCrater/scripts.pory"
	.string "Don't sugarcoat it, Kira. It's boring.$"

ReportersGreatCrater_Text_2:
# 95 "data/maps/GreatCrater/scripts.pory"
	.string "... a bit, maybe. which is why we were\n"
	.string "thinking about staging a battle!$"

ReportersGreatCrater_Text_3:
# 98 "data/maps/GreatCrater/scripts.pory"
	.string "We will pretend one of those dangerous\n"
	.string "rebels have assailed us, and that we\l"
	.string "escaped by the skin of our teeth.$"

ReportersGreatCrater_Text_4:
# 103 "data/maps/GreatCrater/scripts.pory"
	.string "He looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_5:
# 104 "data/maps/GreatCrater/scripts.pory"
	.string "She looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_6:
# 109 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes him perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_7:
# 110 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes her perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_8:
# 114 "data/maps/GreatCrater/scripts.pory"
	.string "We need you to win, of course - it would\n"
	.string "not be very exciting if we just beat a\l"
	.string "dangerous rebel like nothing!\p"
	.string "So, will you help us? We will pay you\n"
	.string "handsomely for your time!$"

ReportersGreatCrater_Text_9:
# 117 "data/maps/GreatCrater/scripts.pory"
	.string "Sure$"

ReportersGreatCrater_Text_10:
# 117 "data/maps/GreatCrater/scripts.pory"
	.string "No chance$"

ReportersGreatCrater_Text_11:
# 117 "data/maps/GreatCrater/scripts.pory"
	.string "That's lying$"

ReportersGreatCrater_Text_12:
# 122 "data/maps/GreatCrater/scripts.pory"
	.string "Excellent - let's begin right away!\p"
	.string "At the count of three, please yell your\n"
	.string "most heinous insult, warcry, or similar\l"
	.string "to the camera.\p"
	.string "Then we take out our Pokémon, and have\n"
	.string "at it!\p"
	.string "Ready? Three, two, one... action!$"

ReportersGreatCrater_Text_13:
# 137 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, uhm... I'm sorry. I don't think we can\n"
	.string "have you saying “{STR_VAR_2},” in\l"
	.string "the documentary.\p"
	.string "That term has some implications I can't\n"
	.string "go over right now. Let's say some would\l"
	.string "get offended!$"

ReportersGreatCrater_Text_14:
# 142 "data/maps/GreatCrater/scripts.pory"
	.string "She means it's censored. So come up with\n"
	.string "something else, will you?$"

ReportersGreatCrater_Text_15:
# 145 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}As eloquent as ever, Dan...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_16:
# 150 "data/maps/GreatCrater/scripts.pory"
	.string "KYAAA! Someone help!! I am being\n"
	.string "ASSAILED!$"

ReportersGreatCrater_Text_17:
# 153 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}'Kyaa'? Really...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_18:
# 158 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.$"

ReportersGreatCrater_Text_19:
# 164 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is a great warcry.\p"
	.string "With the right editing, it may even get\n"
	.string "viral.$"

ReportersGreatCrater_Text_20:
# 167 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record some more in\l"
	.string "other locations.$"

ReportersGreatCrater_Text_21:
# 170 "data/maps/GreatCrater/scripts.pory"
	.string "Thanks for your help again - stay safe!$"

ReportersGreatCrater_Text_22:
# 184 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fright,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

ReportersGreatCrater_Text_23:
# 199 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, that's so unfortunate! Are you\n"
	.string "certain?\p"
	.string "We'll be here a while if you reconsider -\n"
	.string "which we beg you to do!$"

ReportersGreatCrater_Text_24:
# 212 "data/maps/GreatCrater/scripts.pory"
	.string "Lying? I wouldn't call it that. It's just\n"
	.string "a bit of showmanship!$"

ReportersGreatCrater_Text_25:
# 215 "data/maps/GreatCrater/scripts.pory"
	.string "If you won't help us, someone will. Why\n"
	.string "not take the pokeyen for yourself?$"

ReportersGreatCrater_Text_26:
# 216 "data/maps/GreatCrater/scripts.pory"
	.string "Okay, I'm in$"

ReportersGreatCrater_Text_27:
# 216 "data/maps/GreatCrater/scripts.pory"
	.string "Leave me out of this$"

ReportersGreatCrater_Text_28:
# 223 "data/maps/GreatCrater/scripts.pory"
	.string "Well, suit yourself. We'll be here a while\n"
	.string "if you change your mind.$"

ReportersGreatCrater_Text_29:
# 234 "data/maps/GreatCrater/scripts.pory"
	.string "Have you changed your mind? Will you\n"
	.string "help us stage a battle?$"

ReportersGreatCrater_Text_30:
# 235 "data/maps/GreatCrater/scripts.pory"
	.string "Yes$"

ReportersGreatCrater_Text_31:
# 235 "data/maps/GreatCrater/scripts.pory"
	.string "No$"

ReportersGreatCrater_Text_32:
# 241 "data/maps/GreatCrater/scripts.pory"
	.string "That's too bad... I think you'd be such a\n"
	.string "star!$"

TrendyPhaseTest_Text_0:
# 265 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is awesome.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0:
# 278 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.\p"
	.string "... that's an amazing warcry$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1:
# 282 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_2} is a great warcry. With\n"
	.string "the right editing, it may even get viral.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2:
# 284 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record in other\l"
	.string "places.$"

GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0:
# 294 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fear,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0:
# 301 "data/maps/GreatCrater/scripts.pory"
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
# 349 "data/maps/GreatCrater/scripts.pory"
	.string "The cameraman seems to disregard\n"
	.string "{PLAYER} entirely.$"

CameramanGreatCrater_Text_1:
# 354 "data/maps/GreatCrater/scripts.pory"
	.string "It's easy money. You won't get far in\n"
	.string "the Rebel Zone by being moral.$"

CameramanGreatCrater_Text_2:
# 356 "data/maps/GreatCrater/scripts.pory"
	.string "I know from experience...$"

TouristGreatCraterBattle_Text_0:
# 367 "data/maps/GreatCrater/scripts.pory"
	.string "Pictures are great and all, but there's\n"
	.string "nothing like an exciting moment to\l"
	.string "imprint a memory.$"

TouristGreatCraterRegister_Text_0:
# 376 "data/maps/GreatCrater/scripts.pory"
	.string "That was exciting! Say, we don't we\n"
	.string "exchange Devonav profiles?$"

ConspiracyGreatCraterBattle_Text_0:
# 403 "data/maps/GreatCrater/scripts.pory"
	.string "Sorry, but my device has been\n"
	.string "compromised. You'll have to learn the\l"
	.string "truth elsewhere!$"

ConspiracyGreatCraterRegister_Text_0:
# 412 "data/maps/GreatCrater/scripts.pory"
	.string "Before I tell you, let's put our Devon\n"
	.string "Navs in airplane mode. Where was the\l"
	.string "option now...?$"

ConspiracyGreatCraterRegister_Text_1:
# 415 "data/maps/GreatCrater/scripts.pory"
	.string "Oops, wrong button. Wait, no... I could\n"
	.string "have swore I pressed the right one.\p"
	.string "That's it, I've been HACKED BY DEVON!$"

ConspiracyGreatCraterRematch_Text_0:
# 423 "data/maps/GreatCrater/scripts.pory"
	.string "The truth is... I don't know any of\n"
	.string "Devon's secrets.\p"
	.string "I just like to make things up to look\n"
	.string "interesting. It's a problem I have.$"

GreatCraterSouvenirShop_Text_0:
# 449 "data/maps/GreatCrater/scripts.pory"
	.string "Welcome to the Great Crater's Souvenir\n"
	.string "Shop!$"

GreatCraterSouvenirShopkeeper_Text_0:
# 470 "data/maps/GreatCrater/scripts.pory"
	.string "I know this is not New Rustboro Mall,\n"
	.string "but let's be civil hey?\p"
	.string "If you want to buy, go around the\n"
	.string "counter.$"

GreatCraterSouvenirBox_Text_0:
# 477 "data/maps/GreatCrater/scripts.pory"
	.string "The box is full of questionably\n"
	.string "preserved donuts.$"

GreatCraterSign_Text_0:
# 481 "data/maps/GreatCrater/scripts.pory"
	.string "North - Road 002\p"
	.string "East - Route 101$"

GreatCraterSouvenirSupplies_Text_0:
# 485 "data/maps/GreatCrater/scripts.pory"
	.string "The articles are covered by the same\n"
	.string "dust that floats in the air.$"

GreatCraterVoid_Text_0:
# 489 "data/maps/GreatCrater/scripts.pory"
	.string "The pitch-black bottom of the crater is\n"
	.string "too deep beneath to see.\p"
	.string "With the right equipment, one could\n"
	.string "climb down and explore it...$"

Cratertouristasksforhelp_Text_0:
# 502 "data/maps/GreatCrater/scripts.pory"
	.string "O-oh, hey! HEEEY! Is there anyone up\n"
	.string "there? Somebody HELP ME!$"

CraterTrappedTouristandRope_Text_0:
# 516 "data/maps/GreatCrater/scripts.pory"
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
# 527 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to help the person?$"

CraterTrappedTouristandRope_Text_2:
# 538 "data/maps/GreatCrater/scripts.pory"
	.string "{PLAYER} ties the knot firmly to a\n"
	.string "rock and lets the rest fall down.$"

CraterTrappedTouristandRope_Text_3:
# 541 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, you're a life-saver!$"

CraterTrappedTouristandRope_Text_4:
# 556 "data/maps/GreatCrater/scripts.pory"
	.string "My hero! I don't know what I would have\n"
	.string "done without you!\p"
	.string "But I know what I'll do now. Reward you\n"
	.string "for your generosity!$"

CraterTrappedTouristandRope_Text_5:
# 559 "data/maps/GreatCrater/scripts.pory"
	.string "A friend gifted me this before my trip,\n"
	.string "saying it'll keep me safe...\p"
	.string "Well, it clearly doesn't work, so you can\n"
	.string "have it!$"

CraterTrappedTouristandRope_Text_6:
# 562 "data/maps/GreatCrater/scripts.pory"
	.string "Wait... maybe it's thanks to it that you\n"
	.string "found me?$"

CraterTrappedTouristandRope_Text_7:
# 564 "data/maps/GreatCrater/scripts.pory"
	.string "Well, nevermind. I don't plan to leave\n"
	.string "New Rustboro ever again, so I won't\l"
	.string "need it.\p"
	.string "Goodbye now, and watch your footing!$"

CraterTrappedTouristandRope_Text_8:
# 578 "data/maps/GreatCrater/scripts.pory"
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
# 595 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! But... I don't see that\n"
	.string "{COLOR RED}Sailor Knot{COLOR DARK_GRAY} on you!\p"
	.string "I appreciate you checking on me, but I'd\n"
	.string "appreciate it even more if you focused\l"
	.string "on helping me to get out!\p"
	.string "I'm begging you here!$"

CraterTrappedTouristandRope_Text_10:
# 601 "data/maps/GreatCrater/scripts.pory"
	.string "There you are! And I see you've brought\n"
	.string "the {COLOR RED}Sailor Knot{COLOR DARK_GRAY}!\p"
	.string "Quick, tie it to something and let it\n"
	.string "fall!$"

CraterTrappedTouristandRope_Text_11:
# 608 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to climb down?$"

GreatCraterDevonGruntFemale_Text_0:
# 623 "data/maps/GreatCrater/scripts.pory"
	.string "I'm sorry, but one of our scientists is\n"
	.string "currently searching for a dangerous\l"
	.string "Pokémon in Road 002.$"

GreatCraterDevonGruntFemale_Text_1:
# 626 "data/maps/GreatCrater/scripts.pory"
	.string "The creature in question is next on the\n"
	.string "list of Pokémon to be safened, and we\l"
	.string "can't risk civilians interfering with his\l"
	.string "work.$"

GreatCraterDevonGruntFemale_Text_2:
# 629 "data/maps/GreatCrater/scripts.pory"
	.string "You have been hurt by a Pokémon, do\n"
	.string "you? Surely you understand.$"

GreatCraterDevonGruntMale_Text_0:
# 641 "data/maps/GreatCrater/scripts.pory"
	.string "By regulation of Devon Co.'s Wildlife\n"
	.string "Protocol, section 75, titled 'Route\l"
	.string "Enclosures for the purpose of Safemon\l"
	.string "Research...'\p"
	.string "This area is closed off to civilians\n"
	.string "until further notice.$"

GreatCraterTouristMaleIdle_Text_0:
# 652 "data/maps/GreatCrater/scripts.pory"
	.string "I once ordered a donut in Pewter City,\n"
	.string "and they gave me a riceball!\p"
	.string "At least you know what donuts are here\n"
	.string "in Hoenn.$"

ReportersGreatCrater_Outro::
# 256 "data/maps/GreatCrater/scripts.pory"
	.string "That was perfect. Here - this is for\nyour trouble!$"

GreatCrater_Text_XIsTheBiggestHappeningThingRight::
# 311 "data/maps/GreatCrater/scripts.pory"
	.string "In New Rustboro, {STR_VAR_1} is trendy.$"

GreatCrater_Text_TellMeWhatsNewAndIn::
# 315 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} Not trendy? Tell me what's trendy then.$"

GreatCrater_Text_OfCourseIKnowAboutThat::
# 320 "data/maps/GreatCrater/scripts.pory"
	.string "You're right. “{STR_VAR_1}” is old news, {STR_VAR_2} is the shit now.$"

GreatCrater_Text_XHuhIThinkYIsCool::
# 326 "data/maps/GreatCrater/scripts.pory"
	.string "Nah, {STR_VAR_2} is lame, {STR_VAR_1} is the cool thing.$"

GreatCrater_Text_HearOfAnyTrendsComeShareWithMe::
# 332 "data/maps/GreatCrater/scripts.pory"
	.string "Well, share with me later.$"

GreatCrater_Text_YeahDefinitionOfInRightNow::
# 337 "data/maps/GreatCrater/scripts.pory"
	.string "Yeah, {STR_VAR_1} is what's in.$"

TouristGreatCrater_Intro::
# 390 "data/maps/GreatCrater/scripts.pory"
	.string "This crater is a breathtaking sight...\pBut it would be even more memorable\nafter a battle!$"

TouristGreatCrater_Outro::
# 393 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, yes... I'll never forget this!$"

ConspiracyGreatCrater_Intro::
# 429 "data/maps/GreatCrater/scripts.pory"
	.string "Hehe... do you know the real reason why\nDevon invented Safemon?\pI'll tell you if you beat me!$"

ConspiracyGreatCrater_Outro::
# 432 "data/maps/GreatCrater/scripts.pory"
	.string "Very well... listen closely...$"

ConspiracyGreatCrater_Intro2::
# 435 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! This time, I'll really tell\n you the truth behind Safemon...\p But only if you beat me!$"

ConspiracyGreatCrater_Outro2::
# 439 "data/maps/GreatCrater/scripts.pory"
	.string "You've earned the right to the truth. Listen...$"
