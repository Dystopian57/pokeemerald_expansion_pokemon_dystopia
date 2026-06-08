# 1 "data/maps/GreatCrater/scripts.pory"


GreatCrater_MapScripts::
# 7 "data/maps/GreatCrater/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RopePop
	.byte 0


RopePop::
# 11 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 3
	goto_if_eq RopePop_1
# 13 "data/maps/GreatCrater/scripts.pory"
	hideobjectat 11, MAP_GREAT_CRATER
	return

RopePop_1:
# 12 "data/maps/GreatCrater/scripts.pory"
	showobjectat 11, MAP_GREAT_CRATER
	return


GreatCrater_EventScript_TrendyPhraseBoy::
# 20 "data/maps/GreatCrater/scripts.pory"
	lock
# 21 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 22 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 23 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 24 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, YES, GreatCrater_EventScript_ConfirmTrendyPhrase
# 25 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GreatCrater_EventScript_RejectTrendyPhrase
	end


GreatCrater_EventScript_ConfirmTrendyPhrase::
# 32 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 33 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_RejectTrendyPhrase::
# 37 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 38 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 39 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 40 "data/maps/GreatCrater/scripts.pory"
	lock
# 41 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 42 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, GreatCrater_EventScript_GiveNewTrendyPhrase
# 43 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, GreatCrater_EventScript_CancelNewTrendyPhrase
	end


ReportersGreatCrater::
# 51 "data/maps/GreatCrater/scripts.pory"
	lockall
# 52 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 53 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 54 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, ReportersGreatCrater_2
ReportersGreatCrater_1:
# 188 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, ReportersGreatCrater_5
ReportersGreatCrater_4:
# 201 "data/maps/GreatCrater/scripts.pory"
finishreporterscript:
# 202 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 203 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

ReportersGreatCrater_2:
# 58 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 60 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_0
# 63 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 64 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_1
# 66 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_2
# 69 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_2
# 71 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 72 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_8
ReportersGreatCrater_7:
# 73 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_14
ReportersGreatCrater_13:
# 75 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 77 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 78 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_19
ReportersGreatCrater_18:
# 79 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_22
ReportersGreatCrater_21:
# 81 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 82 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_7
# 85 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_8, ReportersGreatCrater_Text_9, ReportersGreatCrater_Text_10
# 87 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_25
ReportersGreatCrater_24:
# 157 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_28
ReportersGreatCrater_27:
# 169 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ReportersGreatCrater_33
	goto ReportersGreatCrater_1

ReportersGreatCrater_5:
# 190 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_28
# 191 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_29, ReportersGreatCrater_Text_30
# 192 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_11
ReportersGreatCrater_10:
# 195 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_16
	goto ReportersGreatCrater_4

ReportersGreatCrater_8:
# 72 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_3
	goto ReportersGreatCrater_7

ReportersGreatCrater_11:
# 193 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_10

ReportersGreatCrater_14:
# 73 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_4
	goto ReportersGreatCrater_13

ReportersGreatCrater_16:
# 196 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_31
# 197 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_6
# 198 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_6
	goto ReportersGreatCrater_4

ReportersGreatCrater_19:
# 78 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_5
	goto ReportersGreatCrater_18

ReportersGreatCrater_22:
# 79 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_6
	goto ReportersGreatCrater_21

ReportersGreatCrater_25:
# 88 "data/maps/GreatCrater/scripts.pory"
acceptedtoplayrebel:
# 89 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_11
# 95 "data/maps/GreatCrater/scripts.pory"
retrytrendyphrase:
# 96 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 97 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 99 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ReportersGreatCrater_31
ReportersGreatCrater_30:
# 142 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReportersGreatCrater_35
	goto ReportersGreatCrater_24

ReportersGreatCrater_28:
# 158 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_22
# 160 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 161 "data/maps/GreatCrater/scripts.pory"
	waitmovement 2
# 162 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_5
# 163 "data/maps/GreatCrater/scripts.pory"
	waitmovement 3
# 165 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 166 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_27

ReportersGreatCrater_31:
# 100 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 102 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq ReportersGreatCrater_38
ReportersGreatCrater_37:
# 115 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_15
# 116 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_2
# 117 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_16
# 118 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 119 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 120 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 121 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_17
# 124 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 125 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 126 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_18
# 127 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 128 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_19
# 129 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 130 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 132 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 133 "data/maps/GreatCrater/scripts.pory"
	removeobject 2
# 134 "data/maps/GreatCrater/scripts.pory"
	removeobject 3
# 135 "data/maps/GreatCrater/scripts.pory"
	setflag reportersleavecrater
# 136 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 138 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 139 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_30

ReportersGreatCrater_33:
# 170 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_23
# 171 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 172 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_24
# 173 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_25, ReportersGreatCrater_Text_26
# 174 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_41
ReportersGreatCrater_40:
# 177 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_43
	goto ReportersGreatCrater_1

ReportersGreatCrater_35:
# 144 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 146 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_24

ReportersGreatCrater_38:
# 104 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_12
# 107 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 108 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_13
# 109 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 110 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_14
# 111 "data/maps/GreatCrater/scripts.pory"
	goto retrytrendyphrase
	goto ReportersGreatCrater_37

ReportersGreatCrater_41:
# 175 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_40

ReportersGreatCrater_43:
# 178 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 179 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_27
# 180 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 181 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_6
# 182 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_6
# 183 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_1


TrendyPhaseTest::
# 218 "data/maps/GreatCrater/scripts.pory"
	lockall
# 219 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 220 "data/maps/GreatCrater/scripts.pory"
	msgbox TrendyPhaseTest_Text_0
# 221 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCrater_EventScript_GiveNewTrendyPhrase::
# 226 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 227 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, GreatCrater_EventScript_PhraseNotTrendyEnough
# 229 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 233 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0
# 236 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 237 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1
# 239 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2
# 241 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 243 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 244 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_CancelNewTrendyPhrase::
# 249 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0
# 251 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 252 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_PhraseNotTrendyEnough::
# 256 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0
# 260 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 261 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


CameramanGreatCrater::
# 300 "data/maps/GreatCrater/scripts.pory"
	lockall
# 301 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 302 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, CameramanGreatCrater_2
CameramanGreatCrater_1:
# 306 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, CameramanGreatCrater_5
CameramanGreatCrater_4:
# 312 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

CameramanGreatCrater_2:
# 304 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_0
	goto CameramanGreatCrater_1

CameramanGreatCrater_5:
# 307 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 308 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_1
# 309 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_6
# 310 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_2
	goto CameramanGreatCrater_4


TouristGreatCraterBattle::
# 318 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro, TouristGreatCraterRegister
# 319 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 320 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TouristGreatCraterRematch
# 321 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
# 323 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRegister::
# 328 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 329 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 330 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRegister_Text_0
# 331 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_TOURIST_GREATCRATER
# 332 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRematch::
# 337 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro
# 338 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRematch_Text_0
	end


ConspiracyGreatCraterBattle::
# 354 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro, ConspiracyGreatCraterRegister
# 355 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 356 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ConspiracyGreatCraterRematch
# 357 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterBattle_Text_0
# 359 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRegister::
# 364 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 365 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 366 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_0
# 368 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_CONSPIRACY_GREATCRATER
# 369 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_1
# 371 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRematch::
# 376 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro
# 377 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRematch_Text_0
	end


GreatCraterSouvenirShop::
# 393 "data/maps/GreatCrater/scripts.pory"
	lockall
# 394 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 395 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 396 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShop_Text_0
# 397 "data/maps/GreatCrater/scripts.pory"
	pokemart ShopSouvenirs
# 398 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


	.align 2
# 402 "data/maps/GreatCrater/scripts.pory"
ShopSouvenirs:
# 403 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 404 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 405 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 406 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

GreatCraterSouvenirShopkeeper::
# 411 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 412 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 413 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShopkeeper_Text_0
# 415 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_6
# 416 "data/maps/GreatCrater/scripts.pory"
	waitmovement 1
# 417 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirBox::
# 420 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirBox_Text_0
# 421 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSign::
# 424 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSign_Text_0
# 425 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirSupplies::
# 428 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirSupplies_Text_0
# 429 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterVoid::
# 432 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterVoid_Text_0
# 434 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


Cratertouristasksforhelp::
# 440 "data/maps/GreatCrater/scripts.pory"
	lock
# 441 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 442 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 443 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 444 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 445 "data/maps/GreatCrater/scripts.pory"
	msgbox Cratertouristasksforhelp_Text_0
# 446 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_1
# 447 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 448 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 1
# 449 "data/maps/GreatCrater/scripts.pory"
	release
	return


CraterTrappedTouristandRope::
# 453 "data/maps/GreatCrater/scripts.pory"
	lock
# 454 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 455 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 1
	goto_if_eq CraterTrappedTouristandRope_2
CraterTrappedTouristandRope_1:
# 524 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 2
	goto_if_eq CraterTrappedTouristandRope_5
CraterTrappedTouristandRope_4:
# 537 "data/maps/GreatCrater/scripts.pory"
	compare VAR_GREATCRATERTOURIST, 3
	goto_if_eq CraterTrappedTouristandRope_11
CraterTrappedTouristandRope_10:
# 543 "data/maps/GreatCrater/scripts.pory"
endcraterbottomtouristscript:
# 544 "data/maps/GreatCrater/scripts.pory"
	release
	return

CraterTrappedTouristandRope_2:
# 456 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_0
# 462 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 2
	checkitem ITEM_BINDING_BAND
# 0 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CraterTrappedTouristandRope_7
# 519 "data/maps/GreatCrater/scripts.pory"
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
# 466 "data/maps/GreatCrater/scripts.pory"
helpcratertourist:
# 467 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_1
# 468 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_29, ReportersGreatCrater_Text_30
# 470 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CraterTrappedTouristandRope_17
CraterTrappedTouristandRope_16:
# 508 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CraterTrappedTouristandRope_21
	goto CraterTrappedTouristandRope_1

CraterTrappedTouristandRope_11:
# 539 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_11
# 540 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_29, ReportersGreatCrater_Text_30
# 541 "data/maps/GreatCrater/scripts.pory"
	warp MAP_GREAT_CRATER_BOTTOM, 0
	goto CraterTrappedTouristandRope_10

CraterTrappedTouristandRope_14:
# 526 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_9
# 529 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_13

CraterTrappedTouristandRope_17:
# 471 "data/maps/GreatCrater/scripts.pory"
	showobjectat 11, MAP_GREAT_CRATER
# 472 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_2
# 473 "data/maps/GreatCrater/scripts.pory"
	playse SE_PIN
# 474 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, Cratertouristasksforhelp_Movement_0
# 475 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_3
# 476 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 477 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_0
# 478 "data/maps/GreatCrater/scripts.pory"
	showobjectat 10, MAP_GREAT_CRATER
# 480 "data/maps/GreatCrater/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CraterTrappedTouristandRope_Movement_1
# 481 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_2
# 482 "data/maps/GreatCrater/scripts.pory"
	playse SE_LEDGE
# 483 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 484 "data/maps/GreatCrater/scripts.pory"
	waitse
# 486 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_3
# 487 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_4
# 489 "data/maps/GreatCrater/scripts.pory"
	giveitem ITEM_EVIOLITE
# 490 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_5
# 492 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, ReportersGreatCrater_Movement_6
# 493 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_6
# 494 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_3
# 495 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_7
# 498 "data/maps/GreatCrater/scripts.pory"
	applymovement 10, CraterTrappedTouristandRope_Movement_4
# 499 "data/maps/GreatCrater/scripts.pory"
	waitmovement 10
# 500 "data/maps/GreatCrater/scripts.pory"
	removeobject 7
# 501 "data/maps/GreatCrater/scripts.pory"
	setobjectxyperm 10, 0, 0
# 502 "data/maps/GreatCrater/scripts.pory"
	hideobjectat 10, MAP_GREAT_CRATER
# 503 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_GREATCRATERTOURIST, 3
# 504 "data/maps/GreatCrater/scripts.pory"
	hidefollower
# 505 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_16

CraterTrappedTouristandRope_19:
# 532 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_10
# 534 "data/maps/GreatCrater/scripts.pory"
	goto helpcratertourist
	goto CraterTrappedTouristandRope_4

CraterTrappedTouristandRope_21:
# 509 "data/maps/GreatCrater/scripts.pory"
	msgbox CraterTrappedTouristandRope_Text_8
# 515 "data/maps/GreatCrater/scripts.pory"
	goto endcraterbottomtouristscript
	goto CraterTrappedTouristandRope_1


GreatCraterDevonGrunts::
# 551 "data/maps/GreatCrater/scripts.pory"
	lock
# 552 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 553 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_0
# 554 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_0
# 555 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGrunts_Text_0
# 557 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_4
# 558 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGrunts_Text_1
# 560 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_5
# 561 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGrunts_Text_2
# 562 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_6
# 563 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 564 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_6
# 565 "data/maps/GreatCrater/scripts.pory"
	waitmovement
# 566 "data/maps/GreatCrater/scripts.pory"
	release
	return


# 58 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_0:
# 58 "data/maps/GreatCrater/scripts.pory"
	face_player
	step_end

# 63 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_1:
# 63 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
# 63 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 69 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_2:
# 69 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 75 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_3:
# 75 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_right
	step_end

# 81 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_4:
# 81 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_up
	step_end

# 107 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_5:
# 107 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_down
	step_end

# 181 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_6:
# 181 "data/maps/GreatCrater/scripts.pory"
	face_down
	step_end

# 442 "data/maps/GreatCrater/scripts.pory"
Cratertouristasksforhelp_Movement_0:
# 442 "data/maps/GreatCrater/scripts.pory"
	walk_left
# 442 "data/maps/GreatCrater/scripts.pory"
	emote_exclamation_mark
	step_end

# 446 "data/maps/GreatCrater/scripts.pory"
Cratertouristasksforhelp_Movement_1:
# 446 "data/maps/GreatCrater/scripts.pory"
	walk_right
	step_end

# 477 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_0:
# 477 "data/maps/GreatCrater/scripts.pory"
	face_up
	step_end

# 480 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_1:
# 480 "data/maps/GreatCrater/scripts.pory"
	walk_right
# 480 "data/maps/GreatCrater/scripts.pory"
	face_left
	step_end

# 481 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_2:
# 481 "data/maps/GreatCrater/scripts.pory"
	jump_up
# 481 "data/maps/GreatCrater/scripts.pory"
	walk_up
	step_end

# 486 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_3:
# 486 "data/maps/GreatCrater/scripts.pory"
	face_right
	step_end

# 498 "data/maps/GreatCrater/scripts.pory"
CraterTrappedTouristandRope_Movement_4:
# 498 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 498 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 498 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 498 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 498 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 498 "data/maps/GreatCrater/scripts.pory"
	walk_up
# 498 "data/maps/GreatCrater/scripts.pory"
	walk_up
	step_end

ReportersGreatCrater_Text_0:
# 60 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, look, Dan - an interesting-looking\n"
	.string "local just approached us!\p"
	.string "We're from Devon TV, and we're filming a\n"
	.string "documentary about the Rebel Zone!\p"
	.string "However, our footage right now is\n"
	.string "lacking a bit of... flair.$"

ReportersGreatCrater_Text_1:
# 64 "data/maps/GreatCrater/scripts.pory"
	.string "To put it plainly, it's quite boring.$"

ReportersGreatCrater_Text_2:
# 66 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed, Dan... which is why we were\n"
	.string "thinking about staging a battle!\p"
	.string "We will pretend one of those dangerous\n"
	.string "rebels have assailed us, and that we\l"
	.string "escaped by the skin of our teeth.$"

ReportersGreatCrater_Text_3:
# 72 "data/maps/GreatCrater/scripts.pory"
	.string "He looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_4:
# 73 "data/maps/GreatCrater/scripts.pory"
	.string "She looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_5:
# 78 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes him perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_6:
# 79 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes her perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_7:
# 82 "data/maps/GreatCrater/scripts.pory"
	.string "We would need you to win, of course - it\n"
	.string "would not be very exciting if we just\l"
	.string "beat a dangerous rebel like nothing!\p"
	.string "So, will you help us? We will pay you\n"
	.string "handsomely for your time!$"

ReportersGreatCrater_Text_8:
# 85 "data/maps/GreatCrater/scripts.pory"
	.string "Sure$"

ReportersGreatCrater_Text_9:
# 85 "data/maps/GreatCrater/scripts.pory"
	.string "No chance$"

ReportersGreatCrater_Text_10:
# 85 "data/maps/GreatCrater/scripts.pory"
	.string "That's lying$"

ReportersGreatCrater_Text_11:
# 89 "data/maps/GreatCrater/scripts.pory"
	.string "Excellent - let's begin right away!\p"
	.string "At the count of three, please yell your\n"
	.string "most heinous insult, warcry, or similar\l"
	.string "to the camera.\p"
	.string "Then we take out our Pokémon, and have\n"
	.string "at it!\p"
	.string "Ready? Three, two, one... action!$"

ReportersGreatCrater_Text_12:
# 104 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, uhm... I'm sorry. I don't think we can\n"
	.string "have you saying “{STR_VAR_2},” in\l"
	.string "the documentary.\p"
	.string "That term has some implications I can't\n"
	.string "go over right now. Let's say some would\l"
	.string "get offended!$"

ReportersGreatCrater_Text_13:
# 108 "data/maps/GreatCrater/scripts.pory"
	.string "She means it's censored. So come up with\n"
	.string "something else, will you?$"

ReportersGreatCrater_Text_14:
# 110 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}As eloquent as ever, Dan...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_15:
# 115 "data/maps/GreatCrater/scripts.pory"
	.string "KYAAA! Someone help!! I am being\n"
	.string "ASSAILED!$"

ReportersGreatCrater_Text_16:
# 117 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}'Kyaa'? Really...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_17:
# 121 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.$"

ReportersGreatCrater_Text_18:
# 126 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is a great warcry.\p"
	.string "With the right editing, it may even get\n"
	.string "viral.$"

ReportersGreatCrater_Text_19:
# 128 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record some more in\l"
	.string "other locations.$"

ReportersGreatCrater_Text_20:
# 130 "data/maps/GreatCrater/scripts.pory"
	.string "Thanks for your help again - stay safe!$"

ReportersGreatCrater_Text_21:
# 144 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fright,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

ReportersGreatCrater_Text_22:
# 158 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, that's so unfortunate! Are you\n"
	.string "certain?\p"
	.string "We'll be here a while if you reconsider -\n"
	.string "which we beg you to do!$"

ReportersGreatCrater_Text_23:
# 170 "data/maps/GreatCrater/scripts.pory"
	.string "Lying? I wouldn't call it that. It's just\n"
	.string "a bit of showmanship!$"

ReportersGreatCrater_Text_24:
# 172 "data/maps/GreatCrater/scripts.pory"
	.string "If you won't help us, someone will. Why\n"
	.string "not take the pokeyen for yourself?$"

ReportersGreatCrater_Text_25:
# 173 "data/maps/GreatCrater/scripts.pory"
	.string "Okay, I'm in$"

ReportersGreatCrater_Text_26:
# 173 "data/maps/GreatCrater/scripts.pory"
	.string "Leave me out of this$"

ReportersGreatCrater_Text_27:
# 179 "data/maps/GreatCrater/scripts.pory"
	.string "Well, suit yourself. We'll be here a while\n"
	.string "if you change your mind.$"

ReportersGreatCrater_Text_28:
# 190 "data/maps/GreatCrater/scripts.pory"
	.string "Have you changed your mind? Will you\n"
	.string "help us stage a battle?$"

ReportersGreatCrater_Text_29:
# 191 "data/maps/GreatCrater/scripts.pory"
	.string "Yes$"

ReportersGreatCrater_Text_30:
# 191 "data/maps/GreatCrater/scripts.pory"
	.string "No$"

ReportersGreatCrater_Text_31:
# 196 "data/maps/GreatCrater/scripts.pory"
	.string "That's too bad... I think you'd be such a\n"
	.string "star!$"

TrendyPhaseTest_Text_0:
# 220 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is awesome.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0:
# 233 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.\p"
	.string "... that's an amazing warcry$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1:
# 237 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_2} is a great warcry. With\n"
	.string "the right editing, it may even get viral.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2:
# 239 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record in other\l"
	.string "places.$"

GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0:
# 249 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fear,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0:
# 256 "data/maps/GreatCrater/scripts.pory"
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
# 304 "data/maps/GreatCrater/scripts.pory"
	.string "The cameraman seems to disregard\n"
	.string "{PLAYER} entirely.$"

CameramanGreatCrater_Text_1:
# 308 "data/maps/GreatCrater/scripts.pory"
	.string "It's easy money. You won't get far in\n"
	.string "the Rebel Zone by being moral.$"

CameramanGreatCrater_Text_2:
# 310 "data/maps/GreatCrater/scripts.pory"
	.string "I know from experience...$"

TouristGreatCraterBattle_Text_0:
# 321 "data/maps/GreatCrater/scripts.pory"
	.string "Pictures are great and all, but there's\n"
	.string "nothing like an exciting moment to\l"
	.string "imprint a memory.$"

TouristGreatCraterRegister_Text_0:
# 330 "data/maps/GreatCrater/scripts.pory"
	.string "That was exciting! Say, we don't we\n"
	.string "exchange Devonav profiles?$"

TouristGreatCraterRematch_Text_0:
# 338 "data/maps/GreatCrater/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

ConspiracyGreatCraterBattle_Text_0:
# 357 "data/maps/GreatCrater/scripts.pory"
	.string "Sorry, but my device has been\n"
	.string "compromised. You'll have to learn the\l"
	.string "truth elsewhere!$"

ConspiracyGreatCraterRegister_Text_0:
# 366 "data/maps/GreatCrater/scripts.pory"
	.string "Before I tell you, let's put our Devon\n"
	.string "Navs in airplane mode. Where was the\l"
	.string "option now...?$"

ConspiracyGreatCraterRegister_Text_1:
# 369 "data/maps/GreatCrater/scripts.pory"
	.string "Oops, wrong button. Wait, no... I could\n"
	.string "have swore I pressed the right one.\p"
	.string "That's it, I've been HACKED BY DEVON!$"

GreatCraterSouvenirShop_Text_0:
# 396 "data/maps/GreatCrater/scripts.pory"
	.string "Welcome to the Great Crater's Souvenir\n"
	.string "Shop!$"

GreatCraterSouvenirShopkeeper_Text_0:
# 413 "data/maps/GreatCrater/scripts.pory"
	.string "I know this is not New Rustboro Mall,\n"
	.string "but let's be civil hey?\p"
	.string "If you want to buy, go around the\n"
	.string "counter.$"

GreatCraterSouvenirBox_Text_0:
# 420 "data/maps/GreatCrater/scripts.pory"
	.string "The box is full of questionably\n"
	.string "preserved donuts.$"

GreatCraterSign_Text_0:
# 424 "data/maps/GreatCrater/scripts.pory"
	.string "North - Route 102\p"
	.string "East - Route 101$"

GreatCraterSouvenirSupplies_Text_0:
# 428 "data/maps/GreatCrater/scripts.pory"
	.string "The articles are covered by the same\n"
	.string "dust that floats in the air.$"

GreatCraterVoid_Text_0:
# 432 "data/maps/GreatCrater/scripts.pory"
	.string "The pitch-black bottom of the crater is\n"
	.string "too deep beneath to see.\p"
	.string "With the right equipment, one could\n"
	.string "climb down and explore it...$"

Cratertouristasksforhelp_Text_0:
# 445 "data/maps/GreatCrater/scripts.pory"
	.string "O-oh, hey! HEEEY! Is there anyone up\n"
	.string "there? Somebody HELP ME!$"

CraterTrappedTouristandRope_Text_0:
# 456 "data/maps/GreatCrater/scripts.pory"
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
# 467 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to help the person?$"

CraterTrappedTouristandRope_Text_2:
# 472 "data/maps/GreatCrater/scripts.pory"
	.string "{PLAYER} ties the knot firmly to a\n"
	.string "rock and lets the rest fall down.$"

CraterTrappedTouristandRope_Text_3:
# 475 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, you're a life-saver!$"

CraterTrappedTouristandRope_Text_4:
# 487 "data/maps/GreatCrater/scripts.pory"
	.string "My hero! I don't know what I would have\n"
	.string "done without you!\p"
	.string "But I know what I'll do know. Reward you\n"
	.string "for your generosity!$"

CraterTrappedTouristandRope_Text_5:
# 490 "data/maps/GreatCrater/scripts.pory"
	.string "A friend gifted me this before my trip,\n"
	.string "saying it'll keep me safe... well, it\l"
	.string "clearly doesn't work, so you can have\l"
	.string "it!$"

CraterTrappedTouristandRope_Text_6:
# 493 "data/maps/GreatCrater/scripts.pory"
	.string "Wait... maybe it's thanks to it that you\n"
	.string "found me?$"

CraterTrappedTouristandRope_Text_7:
# 495 "data/maps/GreatCrater/scripts.pory"
	.string "Well, nevermind. I don't plan to leave\n"
	.string "New Rustboro ever again, so I won't\l"
	.string "need it.\p"
	.string "Goodbye now, and watch your footing!$"

CraterTrappedTouristandRope_Text_8:
# 509 "data/maps/GreatCrater/scripts.pory"
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
# 526 "data/maps/GreatCrater/scripts.pory"
	.string "You're back! But... I don't see that\n"
	.string "{COLOR RED}Sailor Knot{COLOR DARK_GRAY} on you!\p"
	.string "I appreciate you checking on me, but I'd\n"
	.string "appreciate it even more if you focused\l"
	.string "on helping me to get out!\p"
	.string "I'm begging you here!$"

CraterTrappedTouristandRope_Text_10:
# 532 "data/maps/GreatCrater/scripts.pory"
	.string "There you are! And I see you've brought\n"
	.string "the {COLOR RED}Sailor Knot{COLOR DARK_GRAY}!\p"
	.string "Quick, tie it to something and let it\n"
	.string "fall!$"

CraterTrappedTouristandRope_Text_11:
# 539 "data/maps/GreatCrater/scripts.pory"
	.string "Use the {COLOR RED}Sailor Knot{COLOR DARK_GRAY} to climb down?$"

GreatCraterDevonGrunts_Text_0:
# 555 "data/maps/GreatCrater/scripts.pory"
	.string "I'm sorry, but one of our scientists is\n"
	.string "currently searching for a dangerous\l"
	.string "Pokémon in Route 102.$"

GreatCraterDevonGrunts_Text_1:
# 558 "data/maps/GreatCrater/scripts.pory"
	.string "The creature in question is next on the\n"
	.string "list of Pokémon to be safened, and we\l"
	.string "can't risk civilians interfering with his\l"
	.string "work.$"

GreatCraterDevonGrunts_Text_2:
# 561 "data/maps/GreatCrater/scripts.pory"
	.string "You have been hurt by a Pokémon, do\n"
	.string "you? Surely you understand.$"

ReportersGreatCrater_Outro::
# 211 "data/maps/GreatCrater/scripts.pory"
	.string "That was perfect. Here - this is for\nyour trouble!$"

GreatCrater_Text_XIsTheBiggestHappeningThingRight::
# 266 "data/maps/GreatCrater/scripts.pory"
	.string "In New Rustboro, {STR_VAR_1} is trendy.$"

GreatCrater_Text_TellMeWhatsNewAndIn::
# 270 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} Not trendy? Tell me what's trendy then.$"

GreatCrater_Text_OfCourseIKnowAboutThat::
# 275 "data/maps/GreatCrater/scripts.pory"
	.string "You're right. “{STR_VAR_1}” is old news, {STR_VAR_2} is the shit now.$"

GreatCrater_Text_XHuhIThinkYIsCool::
# 281 "data/maps/GreatCrater/scripts.pory"
	.string "Nah, {STR_VAR_2} is lame, {STR_VAR_1} is the cool thing.$"

GreatCrater_Text_HearOfAnyTrendsComeShareWithMe::
# 287 "data/maps/GreatCrater/scripts.pory"
	.string "Well, share with me later.$"

GreatCrater_Text_YeahDefinitionOfInRightNow::
# 292 "data/maps/GreatCrater/scripts.pory"
	.string "Yeah, {STR_VAR_1} is what's in.$"

TouristGreatCrater_Intro::
# 344 "data/maps/GreatCrater/scripts.pory"
	.string "This crater is a breathtaking sight...\pBut it would be even more memorable\nafter a battle!$"

TouristGreatCrater_Outro::
# 347 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, yes... I'll never forget this!$"

ConspiracyGreatCrater_Intro::
# 383 "data/maps/GreatCrater/scripts.pory"
	.string "Hehe... do you know the real reason why\nDevon invented Safemon?\pI'll tell you if you beat me!$"

ConspiracyGreatCrater_Outro::
# 386 "data/maps/GreatCrater/scripts.pory"
	.string "Very well... listen closely...$"
