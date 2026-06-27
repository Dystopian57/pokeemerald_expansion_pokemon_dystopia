# 1 "data/maps/GreatCrater/scripts.pory"


GreatCrater_MapScripts::
# 7 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GreatCraterWeather
	.byte 0


GreatCraterWeather::
# 18 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCrater_EventScript_TrendyPhraseBoy::
# 24 "data/maps/GreatCrater/scripts.pory"
	lock
# 25 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 26 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 27 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 28 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, YES, GreatCrater_EventScript_ConfirmTrendyPhrase
# 29 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GreatCrater_EventScript_RejectTrendyPhrase
	end


GreatCrater_EventScript_ConfirmTrendyPhrase::
# 36 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 37 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_RejectTrendyPhrase::
# 41 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 42 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 43 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 44 "data/maps/GreatCrater/scripts.pory"
	lock
# 45 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 46 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, GreatCrater_EventScript_GiveNewTrendyPhrase
# 47 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, GreatCrater_EventScript_CancelNewTrendyPhrase
	end


ReportersGreatCrater::
# 55 "data/maps/GreatCrater/scripts.pory"
	lockall
# 56 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 57 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 58 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, ReportersGreatCrater_2
ReportersGreatCrater_1:
# 209 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, ReportersGreatCrater_5
ReportersGreatCrater_4:
# 223 "data/maps/GreatCrater/scripts.pory"
finishreporterscript:
# 224 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 225 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

ReportersGreatCrater_2:
# 62 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 64 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_0
# 67 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 68 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 69 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_1
# 70 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 71 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 72 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_2
# 73 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 74 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 75 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_3
# 77 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 78 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 79 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 80 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_8
ReportersGreatCrater_7:
# 81 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_14
ReportersGreatCrater_13:
# 83 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 84 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 85 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 86 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_19
ReportersGreatCrater_18:
# 87 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_22
ReportersGreatCrater_21:
# 89 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 90 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 91 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_8
# 94 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_9, ReportersGreatCrater_Text_10, ReportersGreatCrater_Text_11
# 96 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_25
ReportersGreatCrater_24:
# 174 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_28
ReportersGreatCrater_27:
# 187 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ReportersGreatCrater_33
	goto ReportersGreatCrater_1

ReportersGreatCrater_5:
# 210 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 211 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_29
# 212 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 213 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_11
ReportersGreatCrater_10:
# 216 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_16
	goto ReportersGreatCrater_4

ReportersGreatCrater_8:
# 80 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_4
	goto ReportersGreatCrater_7

ReportersGreatCrater_11:
# 214 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_10

ReportersGreatCrater_14:
# 81 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_5
	goto ReportersGreatCrater_13

ReportersGreatCrater_16:
# 217 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 218 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_32
# 219 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 220 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_5
	goto ReportersGreatCrater_4

ReportersGreatCrater_19:
# 86 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_6
	goto ReportersGreatCrater_18

ReportersGreatCrater_22:
# 87 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_7
	goto ReportersGreatCrater_21

ReportersGreatCrater_25:
# 97 "data/maps/GreatCrater/scripts.pory"
acceptedtoplayrebel:
# 98 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 99 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_12
# 105 "data/maps/GreatCrater/scripts.pory"
retrytrendyphrase:
# 106 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 107 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 109 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ReportersGreatCrater_31
ReportersGreatCrater_30:
# 159 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReportersGreatCrater_35
	goto ReportersGreatCrater_24

ReportersGreatCrater_28:
# 175 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 176 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_23
# 178 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 179 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 180 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 181 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 183 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 184 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_27

ReportersGreatCrater_31:
# 110 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 112 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq ReportersGreatCrater_38
ReportersGreatCrater_37:
# 126 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 127 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_16
# 128 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 129 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 130 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_17
# 131 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 132 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 133 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 134 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 135 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_18
# 138 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 139 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 140 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 141 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_19
# 142 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 143 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 144 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 145 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 146 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 147 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 149 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 150 "data/maps/GreatCrater/scripts.pory"
	removeobject 2
# 151 "data/maps/GreatCrater/scripts.pory"
	removeobject 3
# 152 "data/maps/GreatCrater/scripts.pory"
	setflag reportersleavecrater
# 153 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 155 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 156 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_30

ReportersGreatCrater_33:
# 188 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 189 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_24
# 190 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_3
# 191 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 192 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_25
# 193 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_26, ReportersGreatCrater_Text_27
# 194 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_41
ReportersGreatCrater_40:
# 197 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_43
	goto ReportersGreatCrater_1

ReportersGreatCrater_35:
# 160 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 161 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_22
# 163 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_24

ReportersGreatCrater_38:
# 113 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 114 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_13
# 117 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 118 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 119 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_14
# 120 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_2
# 121 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 122 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_15
# 123 "data/maps/GreatCrater/scripts.pory"
	goto retrytrendyphrase
	goto ReportersGreatCrater_37

ReportersGreatCrater_41:
# 195 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_40

ReportersGreatCrater_43:
# 198 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 199 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_KIRA ]
# 200 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_28
# 201 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 202 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 203 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_5
# 204 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_1


TrendyPhaseTest::
# 240 "data/maps/GreatCrater/scripts.pory"
	lockall
# 241 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 242 "data/maps/GreatCrater/scripts.pory"
	msgbox TrendyPhaseTest_Text_0
# 243 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCrater_EventScript_GiveNewTrendyPhrase::
# 248 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 249 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, GreatCrater_EventScript_PhraseNotTrendyEnough
# 251 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 255 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0
# 258 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 259 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1
# 261 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2
# 263 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 265 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 266 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_CancelNewTrendyPhrase::
# 271 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0
# 273 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 274 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_PhraseNotTrendyEnough::
# 278 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0
# 282 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 283 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


CameramanGreatCrater::
# 322 "data/maps/GreatCrater/scripts.pory"
	lockall
# 323 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 324 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, CameramanGreatCrater_2
CameramanGreatCrater_1:
# 328 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, CameramanGreatCrater_5
CameramanGreatCrater_4:
# 335 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

CameramanGreatCrater_2:
# 326 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_0
	goto CameramanGreatCrater_1

CameramanGreatCrater_5:
# 329 "data/maps/GreatCrater/scripts.pory"
	setspeaker [ SP_NAME_DAN ]
# 330 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 331 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_1
# 332 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 333 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_2
	goto CameramanGreatCrater_4


TouristGreatCraterBattle::
# 341 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro, TouristGreatCraterRegister
# 342 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 343 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TouristGreatCraterRematch
# 344 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
# 346 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRegister::
# 351 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 352 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 353 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRegister_Text_0
# 354 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_TOURIST_GREATCRATER
# 355 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRematch::
# 360 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro
# 361 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRematch_Text_0
	end


ConspiracyGreatCraterBattle::
# 377 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro, ConspiracyGreatCraterRegister
# 378 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 379 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ConspiracyGreatCraterRematch
# 380 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterBattle_Text_0
# 382 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRegister::
# 387 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 388 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 389 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_0
# 391 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_CONSPIRACY_GREATCRATER
# 392 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_1
# 394 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRematch::
# 399 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro
# 400 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRematch_Text_0
	end


GreatCraterSouvenirShop::
# 416 "data/maps/GreatCrater/scripts.pory"
	lockall
# 417 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 418 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 419 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShop_Text_0
# 420 "data/maps/GreatCrater/scripts.pory"
	fadeoutbgm 0
# 421 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_BUYSOMETHINGWILLYA, FALSE
# 422 "data/maps/GreatCrater/scripts.pory"
	pokemart ShopSouvenirs
# 423 "data/maps/GreatCrater/scripts.pory"
	fadeinbgm 0
# 424 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 425 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


	.align 2
# 429 "data/maps/GreatCrater/scripts.pory"
ShopSouvenirs:
# 430 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 431 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 432 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 433 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

GreatCraterSouvenirShopkeeper::
# 438 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 439 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 440 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShopkeeper_Text_0
# 442 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_5
# 443 "data/maps/GreatCrater/scripts.pory"
	waitmovement 1
# 444 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirBox::
# 447 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirBox_Text_0
# 448 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSign::
# 451 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSign_Text_0
# 452 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirSupplies::
# 455 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirSupplies_Text_0
# 456 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterVoid::
# 459 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterVoid_Text_0
# 461 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


Cratertouristasksforhelp::
# 467 "data/maps/GreatCrater/scripts.pory"
	lock
# 468 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 469 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 470 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 471 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 472 "data/maps/GreatCrater/scripts.pory"
	msgbox Cratertouristasksforhelp_Text_0
# 473 "data/maps/GreatCrater/scripts.pory"
	closemessage
# 477 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 1
# 478 "data/maps/GreatCrater/scripts.pory"
	dofieldeffectsparkle 11, 15, 9
# 479 "data/maps/GreatCrater/scripts.pory"
	release
	return


CraterTrappedTouristandRope::
# 483 "data/maps/GreatCrater/scripts.pory"
	lock
# 484 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 485 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq CraterTrappedTouristandRope_2
CraterTrappedTouristandRope_1:
# 563 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 2
	goto_if_eq CraterTrappedTouristandRope_5
CraterTrappedTouristandRope_4:
# 576 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 3
	goto_if_eq CraterTrappedTouristandRope_11
CraterTrappedTouristandRope_10:
# 582 "data/maps/GreatCrater/scripts.pory"
endcraterbottomtouristscript:
# 583 "data/maps/GreatCrater/scripts.pory"
	release
	return

CraterTrappedTouristandRope_2:
# 486 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_0
# 492 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 2
	checkitem ITEM_BINDING_BAND
# 0 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CraterTrappedTouristandRope_7
# 558 "data/maps/GreatCrater/scripts.pory"
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
# 496 "data/maps/GreatCrater/scripts.pory"
helpcratertourist:
# 497 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_1
# 498 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 500 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CraterTrappedTouristandRope_17
CraterTrappedTouristandRope_16:
# 547 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterTrappedTouristandRope_21
	goto CraterTrappedTouristandRope_1

CraterTrappedTouristandRope_11:
# 578 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_11
# 579 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_30, ReportersGreatCrater_Text_31
# 580 "data/maps/GreatCrater/scripts.pory"
	warp MAP_GREAT_CRATER_BOTTOM, 0
	goto CraterTrappedTouristandRope_10

CraterTrappedTouristandRope_14:
# 565 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_9
# 568 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_13

CraterTrappedTouristandRope_17:
# 501 "data/maps/GreatCrater/scripts.pory"
	clearflag greatcraterrope
# 502 "data/maps/GreatCrater/scripts.pory"
	addobject 11
# 503 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 11, 15
# 504 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 11, 11, 15
# 505 "data/maps/GreatCrater/scripts.pory"
	showobjectat 11, MAP_GREAT_CRATER
# 507 "data/maps/GreatCrater/scripts.pory"
	playse SE_BALL_THROW
# 508 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_2
# 509 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 510 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 511 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_3
# 512 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 513 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_0
# 514 "data/maps/GreatCrater/scripts.pory"
	showobjectat 10, MAP_GREAT_CRATER
# 516 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CraterTrappedTouristandRope_Movement_1
# 517 "data/maps/GreatCrater/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 518 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_2
# 519 "data/maps/GreatCrater/scripts.pory"
	playse SE_LEDGE
# 520 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 523 "data/maps/GreatCrater/scripts.pory"
	waitse
# 525 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_3
# 526 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_4
# 528 "data/maps/GreatCrater/scripts.pory"
	giveitem ITEM_EVIOLITE
# 529 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_5
# 531 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_5
# 532 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_6
# 533 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_3
# 534 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_7
# 537 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_4
# 538 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 539 "data/maps/GreatCrater/scripts.pory"
	removeobject 10
# 540 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 0, 0
# 541 "data/maps/GreatCrater/scripts.pory"
	hideobjectat 10, MAP_GREAT_CRATER
# 542 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 3
# 543 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 544 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_16

CraterTrappedTouristandRope_19:
# 571 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_10
# 573 "data/maps/GreatCrater/scripts.pory"
	goto helpcratertourist
	goto CraterTrappedTouristandRope_4

CraterTrappedTouristandRope_21:
# 548 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_8
# 554 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_1


GreatCraterDevonGruntFemale::
# 590 "data/maps/GreatCrater/scripts.pory"
	lock
# 591 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 592 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_0
# 593 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_0
# 595 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_3
# 596 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_1
# 598 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_4
# 599 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntFemale_Text_2
# 600 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 601 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 602 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 603 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 604 "data/maps/GreatCrater/scripts.pory"
	release
	return


GreatCraterDevonGruntMale::
# 608 "data/maps/GreatCrater/scripts.pory"
	lock
# 609 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 610 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_0
# 611 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGruntMale_Text_0
# 613 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_5
# 614 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 615 "data/maps/GreatCrater/scripts.pory"
	release
	return


# 62 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_0:
# 62 "data/maps/GreatCrater/scripts.pory"
	face_player
	step_end

# 67 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_1:
# 67 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 70 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_2:
# 70 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_right
	step_end

# 73 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_3:
# 73 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_up
	step_end

# 117 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_4:
# 117 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_down
	step_end

# 202 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_5:
# 202 "data/maps/GreatCrater/scripts.pory"
	face_down
	step_end

# 469 "data/maps/GreatCrater/scripts.pory"
Cratertouristasksforhelp_Movement_0:
# 469 "data/maps/GreatCrater/scripts.pory"
	emote_exclamation_mark
	step_end

# 513 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_0:
# 513 "data/maps/GreatCrater/scripts.pory"
	face_up
	step_end

# 516 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_1:
# 516 "data/maps/GreatCrater/scripts.pory"
	walk_right
# 516 "data/maps/GreatCrater/scripts.pory"
	face_left
	step_end

# 518 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_2:
# 518 "data/maps/GreatCrater/scripts.pory"
	jump_up
	step_end

# 525 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_3:
# 525 "data/maps/GreatCrater/scripts.pory"
	face_right
	step_end

# 537 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_4:
# 537 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 537 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 537 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 537 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 537 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 537 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 537 "data/maps/GreatCrater/scripts.pory"
	walk_up
	step_end

ReportersGreatCrater_Text_0:
# 64 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, look, Dan - an interesting-looking\n"
	.string "local just approached us!\p"
	.string "We're from Devon TV, and we're filming a\n"
	.string "documentary about the Rebel Zone!\p"
	.string "However, our footage right now is\n"
	.string "lacking a bit of... flair.$"

ReportersGreatCrater_Text_1:
# 69 "data/maps/GreatCrater/scripts.pory"
	.string "Don't sugarcoat it, Kira. It's boring.$"

ReportersGreatCrater_Text_2:
# 72 "data/maps/GreatCrater/scripts.pory"
	.string "... a bit, maybe. which is why we were\n"
	.string "thinking about staging a battle!$"

ReportersGreatCrater_Text_3:
# 75 "data/maps/GreatCrater/scripts.pory"
	.string "We will pretend one of those dangerous\n"
	.string "rebels have assailed us, and that we\l"
	.string "escaped by the skin of our teeth.$"

ReportersGreatCrater_Text_4:
# 80 "data/maps/GreatCrater/scripts.pory"
	.string "He looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_5:
# 81 "data/maps/GreatCrater/scripts.pory"
	.string "She looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_6:
# 86 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes him perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_7:
# 87 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes her perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_8:
# 91 "data/maps/GreatCrater/scripts.pory"
	.string "We need you to win, of course - it would\n"
	.string "not be very exciting if we just beat a\l"
	.string "dangerous rebel like nothing!\p"
	.string "So, will you help us? We will pay you\n"
	.string "handsomely for your time!$"

ReportersGreatCrater_Text_9:
# 94 "data/maps/GreatCrater/scripts.pory"
	.string "Sure$"

ReportersGreatCrater_Text_10:
# 94 "data/maps/GreatCrater/scripts.pory"
	.string "No chance$"

ReportersGreatCrater_Text_11:
# 94 "data/maps/GreatCrater/scripts.pory"
	.string "That's lying$"

ReportersGreatCrater_Text_12:
# 99 "data/maps/GreatCrater/scripts.pory"
	.string "Excellent - let's begin right away!\p"
	.string "At the count of three, please yell your\n"
	.string "most heinous insult, warcry, or similar\l"
	.string "to the camera.\p"
	.string "Then we take out our Pokémon, and have\n"
	.string "at it!\p"
	.string "Ready? Three, two, one... action!$"

ReportersGreatCrater_Text_13:
# 114 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, uhm... I'm sorry. I don't think we can\n"
	.string "have you saying “{STR_VAR_2},” in\l"
	.string "the documentary.\p"
	.string "That term has some implications I can't\n"
	.string "go over right now. Let's say some would\l"
	.string "get offended!$"

ReportersGreatCrater_Text_14:
# 119 "data/maps/GreatCrater/scripts.pory"
	.string "She means it's censored. So come up with\n"
	.string "something else, will you?$"

ReportersGreatCrater_Text_15:
# 122 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}As eloquent as ever, Dan...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_16:
# 127 "data/maps/GreatCrater/scripts.pory"
	.string "KYAAA! Someone help!! I am being\n"
	.string "ASSAILED!$"

ReportersGreatCrater_Text_17:
# 130 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}'Kyaa'? Really...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_18:
# 135 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.$"

ReportersGreatCrater_Text_19:
# 141 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is a great warcry.\p"
	.string "With the right editing, it may even get\n"
	.string "viral.$"

ReportersGreatCrater_Text_20:
# 144 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record some more in\l"
	.string "other locations.$"

ReportersGreatCrater_Text_21:
# 147 "data/maps/GreatCrater/scripts.pory"
	.string "Thanks for your help again - stay safe!$"

ReportersGreatCrater_Text_22:
# 161 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fright,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

ReportersGreatCrater_Text_23:
# 176 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, that's so unfortunate! Are you\n"
	.string "certain?\p"
	.string "We'll be here a while if you reconsider -\n"
	.string "which we beg you to do!$"

ReportersGreatCrater_Text_24:
# 189 "data/maps/GreatCrater/scripts.pory"
	.string "Lying? I wouldn't call it that. It's just\n"
	.string "a bit of showmanship!$"

ReportersGreatCrater_Text_25:
# 192 "data/maps/GreatCrater/scripts.pory"
	.string "If you won't help us, someone will. Why\n"
	.string "not take the pokeyen for yourself?$"

ReportersGreatCrater_Text_26:
# 193 "data/maps/GreatCrater/scripts.pory"
	.string "Okay, I'm in$"

ReportersGreatCrater_Text_27:
# 193 "data/maps/GreatCrater/scripts.pory"
	.string "Leave me out of this$"

ReportersGreatCrater_Text_28:
# 200 "data/maps/GreatCrater/scripts.pory"
	.string "Well, suit yourself. We'll be here a while\n"
	.string "if you change your mind.$"

ReportersGreatCrater_Text_29:
# 211 "data/maps/GreatCrater/scripts.pory"
	.string "Have you changed your mind? Will you\n"
	.string "help us stage a battle?$"

ReportersGreatCrater_Text_30:
# 212 "data/maps/GreatCrater/scripts.pory"
	.string "Yes$"

ReportersGreatCrater_Text_31:
# 212 "data/maps/GreatCrater/scripts.pory"
	.string "No$"

ReportersGreatCrater_Text_32:
# 218 "data/maps/GreatCrater/scripts.pory"
	.string "That's too bad... I think you'd be such a\n"
	.string "star!$"

TrendyPhaseTest_Text_0:
# 242 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is awesome.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0:
# 255 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.\p"
	.string "... that's an amazing warcry$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1:
# 259 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_2} is a great warcry. With\n"
	.string "the right editing, it may even get viral.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2:
# 261 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record in other\l"
	.string "places.$"

GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0:
# 271 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fear,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0:
# 278 "data/maps/GreatCrater/scripts.pory"
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
# 326 "data/maps/GreatCrater/scripts.pory"
	.string "The cameraman seems to disregard\n"
	.string "{PLAYER} entirely.$"

CameramanGreatCrater_Text_1:
# 331 "data/maps/GreatCrater/scripts.pory"
	.string "It's easy money. You won't get far in\n"
	.string "the Rebel Zone by being moral.$"

CameramanGreatCrater_Text_2:
# 333 "data/maps/GreatCrater/scripts.pory"
	.string "I know from experience...$"

TouristGreatCraterBattle_Text_0:
# 344 "data/maps/GreatCrater/scripts.pory"
	.string "Pictures are great and all, but there's\n"
	.string "nothing like an exciting moment to\l"
	.string "imprint a memory.$"

TouristGreatCraterRegister_Text_0:
# 353 "data/maps/GreatCrater/scripts.pory"
	.string "That was exciting! Say, we don't we\n"
	.string "exchange Devonav profiles?$"

TouristGreatCraterRematch_Text_0:
# 361 "data/maps/GreatCrater/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

ConspiracyGreatCraterBattle_Text_0:
# 380 "data/maps/GreatCrater/scripts.pory"
	.string "Sorry, but my device has been\n"
	.string "compromised. You'll have to learn the\l"
	.string "truth elsewhere!$"

ConspiracyGreatCraterRegister_Text_0:
# 389 "data/maps/GreatCrater/scripts.pory"
	.string "Before I tell you, let's put our Devon\n"
	.string "Navs in airplane mode. Where was the\l"
	.string "option now...?$"

ConspiracyGreatCraterRegister_Text_1:
# 392 "data/maps/GreatCrater/scripts.pory"
	.string "Oops, wrong button. Wait, no... I could\n"
	.string "have swore I pressed the right one.\p"
	.string "That's it, I've been HACKED BY DEVON!$"

GreatCraterSouvenirShop_Text_0:
# 419 "data/maps/GreatCrater/scripts.pory"
	.string "Welcome to the Great Crater's Souvenir\n"
	.string "Shop!$"

GreatCraterSouvenirShopkeeper_Text_0:
# 440 "data/maps/GreatCrater/scripts.pory"
	.string "I know this is not New Rustboro Mall,\n"
	.string "but let's be civil hey?\p"
	.string "If you want to buy, go around the\n"
	.string "counter.$"

GreatCraterSouvenirBox_Text_0:
# 447 "data/maps/GreatCrater/scripts.pory"
	.string "The box is full of questionably\n"
	.string "preserved donuts.$"

GreatCraterSign_Text_0:
# 451 "data/maps/GreatCrater/scripts.pory"
	.string "North - Route 102\p"
	.string "East - Route 101$"

GreatCraterSouvenirSupplies_Text_0:
# 455 "data/maps/GreatCrater/scripts.pory"
	.string "The articles are covered by the same\n"
	.string "dust that floats in the air.$"

GreatCraterVoid_Text_0:
# 459 "data/maps/GreatCrater/scripts.pory"
	.string "The pitch-black bottom of the crater is\n"
	.string "too deep beneath to see.\p"
	.string "With the right equipment, one could\n"
	.string "climb down and explore it...$"

Cratertouristasksforhelp_Text_0:
# 472 "data/maps/GreatCrater/scripts.pory"
	.string "O-oh, hey! HEEEY! Is there anyone up\n"
	.string "there? Somebody HELP ME!$"

CraterTrappedTouristandRope_Text_0:
# 486 "data/maps/GreatCrater/scripts.pory"
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
# 497 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to help the person?$"

CraterTrappedTouristandRope_Text_2:
# 508 "data/maps/GreatCrater/scripts.pory"
	.string "{PLAYER} ties the knot firmly to a\n"
	.string "rock and lets the rest fall down.$"

CraterTrappedTouristandRope_Text_3:
# 511 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, you're a life-saver!$"

CraterTrappedTouristandRope_Text_4:
# 526 "data/maps/GreatCrater/scripts.pory"
	.string "My hero! I don't know what I would have\n"
	.string "done without you!\p"
	.string "But I know what I'll do now. Reward you\n"
	.string "for your generosity!$"

CraterTrappedTouristandRope_Text_5:
# 529 "data/maps/GreatCrater/scripts.pory"
	.string "A friend gifted me this before my trip,\n"
	.string "saying it'll keep me safe...\p"
	.string "Well, it clearly doesn't work, so you can\n"
	.string "have it!$"

CraterTrappedTouristandRope_Text_6:
# 532 "data/maps/GreatCrater/scripts.pory"
	.string "Wait... maybe it's thanks to it that you\n"
	.string "found me?$"

CraterTrappedTouristandRope_Text_7:
# 534 "data/maps/GreatCrater/scripts.pory"
	.string "Well, nevermind. I don't plan to leave\n"
	.string "New Rustboro ever again, so I won't\l"
	.string "need it.\p"
	.string "Goodbye now, and watch your footing!$"

CraterTrappedTouristandRope_Text_8:
# 548 "data/maps/GreatCrater/scripts.pory"
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
# 565 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! But... I don't see that\n"
	.string "{COLOR RED}Sailor Knot{COLOR DARK_GRAY} on you!\p"
	.string "I appreciate you checking on me, but I'd\n"
	.string "appreciate it even more if you focused\l"
	.string "on helping me to get out!\p"
	.string "I'm begging you here!$"

CraterTrappedTouristandRope_Text_10:
# 571 "data/maps/GreatCrater/scripts.pory"
	.string "There you are! And I see you've brought\n"
	.string "the {COLOR RED}Sailor Knot{COLOR DARK_GRAY}!\p"
	.string "Quick, tie it to something and let it\n"
	.string "fall!$"

CraterTrappedTouristandRope_Text_11:
# 578 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to climb down?$"

GreatCraterDevonGruntFemale_Text_0:
# 593 "data/maps/GreatCrater/scripts.pory"
	.string "I'm sorry, but one of our scientists is\n"
	.string "currently searching for a dangerous\l"
	.string "Pokémon in Route 102.$"

GreatCraterDevonGruntFemale_Text_1:
# 596 "data/maps/GreatCrater/scripts.pory"
	.string "The creature in question is next on the\n"
	.string "list of Pokémon to be safened, and we\l"
	.string "can't risk civilians interfering with his\l"
	.string "work.$"

GreatCraterDevonGruntFemale_Text_2:
# 599 "data/maps/GreatCrater/scripts.pory"
	.string "You have been hurt by a Pokémon, do\n"
	.string "you? Surely you understand.$"

GreatCraterDevonGruntMale_Text_0:
# 611 "data/maps/GreatCrater/scripts.pory"
	.string "By regulation of Devon Co.'s Wildlife\n"
	.string "Protocol, section 75, titled 'Area\l"
	.string "Enclosures for the purpose of Safemon\l"
	.string "Research...'\p"
	.string "This area is closed off to civilians\n"
	.string "until further notice.$"

ReportersGreatCrater_Outro::
# 233 "data/maps/GreatCrater/scripts.pory"
	.string "That was perfect. Here - this is for\nyour trouble!$"

GreatCrater_Text_XIsTheBiggestHappeningThingRight::
# 288 "data/maps/GreatCrater/scripts.pory"
	.string "In New Rustboro, {STR_VAR_1} is trendy.$"

GreatCrater_Text_TellMeWhatsNewAndIn::
# 292 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} Not trendy? Tell me what's trendy then.$"

GreatCrater_Text_OfCourseIKnowAboutThat::
# 297 "data/maps/GreatCrater/scripts.pory"
	.string "You're right. “{STR_VAR_1}” is old news, {STR_VAR_2} is the shit now.$"

GreatCrater_Text_XHuhIThinkYIsCool::
# 303 "data/maps/GreatCrater/scripts.pory"
	.string "Nah, {STR_VAR_2} is lame, {STR_VAR_1} is the cool thing.$"

GreatCrater_Text_HearOfAnyTrendsComeShareWithMe::
# 309 "data/maps/GreatCrater/scripts.pory"
	.string "Well, share with me later.$"

GreatCrater_Text_YeahDefinitionOfInRightNow::
# 314 "data/maps/GreatCrater/scripts.pory"
	.string "Yeah, {STR_VAR_1} is what's in.$"

TouristGreatCrater_Intro::
# 367 "data/maps/GreatCrater/scripts.pory"
	.string "This crater is a breathtaking sight...\pBut it would be even more memorable\nafter a battle!$"

TouristGreatCrater_Outro::
# 370 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, yes... I'll never forget this!$"

ConspiracyGreatCrater_Intro::
# 406 "data/maps/GreatCrater/scripts.pory"
	.string "Hehe... do you know the real reason why\nDevon invented Safemon?\pI'll tell you if you beat me!$"

ConspiracyGreatCrater_Outro::
# 409 "data/maps/GreatCrater/scripts.pory"
	.string "Very well... listen closely...$"
