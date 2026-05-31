# 1 "data/maps/GreatCrater/scripts.pory"

# 2 "data/maps/GreatCrater/scripts.pory"
GreatCrater_MapScripts::
# 3 "data/maps/GreatCrater/scripts.pory"
	.byte 0

GreatCrater_EventScript_TrendyPhraseBoy::
# 8 "data/maps/GreatCrater/scripts.pory"
	lock
# 9 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 10 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 11 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 12 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, YES, GreatCrater_EventScript_ConfirmTrendyPhrase
# 13 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GreatCrater_EventScript_RejectTrendyPhrase
	end


GreatCrater_EventScript_ConfirmTrendyPhrase::
# 20 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 21 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_RejectTrendyPhrase::
# 25 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 26 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 27 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 28 "data/maps/GreatCrater/scripts.pory"
	lock
# 29 "data/maps/GreatCrater/scripts.pory"
	faceplayer
# 30 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, GreatCrater_EventScript_GiveNewTrendyPhrase
# 31 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, GreatCrater_EventScript_CancelNewTrendyPhrase
	end


ReportersGreatCrater::
# 39 "data/maps/GreatCrater/scripts.pory"
	lockall
# 40 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 41 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 42 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, ReportersGreatCrater_2
ReportersGreatCrater_1:
# 175 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, ReportersGreatCrater_5
ReportersGreatCrater_4:
# 188 "data/maps/GreatCrater/scripts.pory"
finishreporterscript:
# 189 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 190 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

ReportersGreatCrater_2:
# 48 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 50 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_0
# 53 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_1
# 54 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_1
# 56 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_2
# 59 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_2
# 61 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 62 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_8
ReportersGreatCrater_7:
# 63 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_14
ReportersGreatCrater_13:
# 65 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 67 "data/maps/GreatCrater/scripts.pory"
	checkplayergender
# 68 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ReportersGreatCrater_19
ReportersGreatCrater_18:
# 69 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq ReportersGreatCrater_22
ReportersGreatCrater_21:
# 71 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 72 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_7
# 75 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_8, ReportersGreatCrater_Text_9, ReportersGreatCrater_Text_10
# 77 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_25
ReportersGreatCrater_24:
# 147 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_28
ReportersGreatCrater_27:
# 156 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ReportersGreatCrater_33
	goto ReportersGreatCrater_1

ReportersGreatCrater_5:
# 177 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_28
# 178 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_29, ReportersGreatCrater_Text_30
# 179 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_11
ReportersGreatCrater_10:
# 182 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_16
	goto ReportersGreatCrater_4

ReportersGreatCrater_8:
# 62 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_3
	goto ReportersGreatCrater_7

ReportersGreatCrater_11:
# 180 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_10

ReportersGreatCrater_14:
# 63 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_4
	goto ReportersGreatCrater_13

ReportersGreatCrater_16:
# 183 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_31
# 184 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_6
# 185 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_6
	goto ReportersGreatCrater_4

ReportersGreatCrater_19:
# 68 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_5
	goto ReportersGreatCrater_18

ReportersGreatCrater_22:
# 69 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_6
	goto ReportersGreatCrater_21

ReportersGreatCrater_25:
# 78 "data/maps/GreatCrater/scripts.pory"
acceptedtoplayrebel:
# 79 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_11
# 85 "data/maps/GreatCrater/scripts.pory"
retrytrendyphrase:
# 86 "data/maps/GreatCrater/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 87 "data/maps/GreatCrater/scripts.pory"
	call Common_ShowEasyChatScreen
# 89 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ReportersGreatCrater_31
ReportersGreatCrater_30:
# 132 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReportersGreatCrater_35
	goto ReportersGreatCrater_24

ReportersGreatCrater_28:
# 148 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_22
# 150 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 152 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 153 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_27

ReportersGreatCrater_31:
# 90 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 92 "data/maps/GreatCrater/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq ReportersGreatCrater_38
ReportersGreatCrater_37:
# 105 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_15
# 106 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_2
# 107 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_16
# 108 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 109 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, TRUE
# 110 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 111 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_17
# 114 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 115 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 116 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_18
# 117 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 118 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_19
# 119 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_0
# 120 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 122 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 123 "data/maps/GreatCrater/scripts.pory"
	removeobject 2
# 124 "data/maps/GreatCrater/scripts.pory"
	removeobject 3
# 125 "data/maps/GreatCrater/scripts.pory"
	setflag reportersleavecrater
# 126 "data/maps/GreatCrater/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 128 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 129 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_30

ReportersGreatCrater_33:
# 157 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_23
# 158 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_4
# 159 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_24
# 160 "data/maps/GreatCrater/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, ReportersGreatCrater_Text_25, ReportersGreatCrater_Text_26
# 161 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ReportersGreatCrater_41
ReportersGreatCrater_40:
# 164 "data/maps/GreatCrater/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ReportersGreatCrater_43
	goto ReportersGreatCrater_1

ReportersGreatCrater_35:
# 134 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_21
# 136 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_24

ReportersGreatCrater_38:
# 94 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_12
# 97 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_5
# 98 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_13
# 99 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_3
# 100 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_14
# 101 "data/maps/GreatCrater/scripts.pory"
	goto retrytrendyphrase
	goto ReportersGreatCrater_37

ReportersGreatCrater_41:
# 162 "data/maps/GreatCrater/scripts.pory"
	goto acceptedtoplayrebel
	goto ReportersGreatCrater_40

ReportersGreatCrater_43:
# 165 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_4
# 166 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_27
# 167 "data/maps/GreatCrater/scripts.pory"
	setflag declinedcraterreporterhelp
# 168 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_6
# 169 "data/maps/GreatCrater/scripts.pory"
	applymovement 3, ReportersGreatCrater_Movement_6
# 170 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
	goto ReportersGreatCrater_1


TrendyPhaseTest::
# 205 "data/maps/GreatCrater/scripts.pory"
	lockall
# 206 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 207 "data/maps/GreatCrater/scripts.pory"
	msgbox TrendyPhaseTest_Text_0
# 208 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCrater_EventScript_GiveNewTrendyPhrase::
# 213 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 214 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, GreatCrater_EventScript_PhraseNotTrendyEnough
# 216 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_no_intro TRAINER_REPORTERS_GREATCRATER, ReportersGreatCrater_Outro
# 220 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0
# 223 "data/maps/GreatCrater/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 224 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1
# 226 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2
# 228 "data/maps/GreatCrater/scripts.pory"
	msgbox ReportersGreatCrater_Text_20
# 230 "data/maps/GreatCrater/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 231 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_CancelNewTrendyPhrase::
# 236 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0
# 238 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 239 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


GreatCrater_EventScript_PhraseNotTrendyEnough::
# 243 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0
# 247 "data/maps/GreatCrater/scripts.pory"
	goto finishreporterscript
# 248 "data/maps/GreatCrater/scripts.pory"
	releaseall
	end


CameramanGreatCrater::
# 287 "data/maps/GreatCrater/scripts.pory"
	lockall
# 288 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 289 "data/maps/GreatCrater/scripts.pory"
	goto_if_unset declinedcraterreporterhelp, CameramanGreatCrater_2
CameramanGreatCrater_1:
# 293 "data/maps/GreatCrater/scripts.pory"
	goto_if_set declinedcraterreporterhelp, CameramanGreatCrater_5
CameramanGreatCrater_4:
# 299 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return

CameramanGreatCrater_2:
# 291 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_0
	goto CameramanGreatCrater_1

CameramanGreatCrater_5:
# 294 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_0
# 295 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_1
# 296 "data/maps/GreatCrater/scripts.pory"
	applymovement 2, ReportersGreatCrater_Movement_6
# 297 "data/maps/GreatCrater/scripts.pory"
	msgbox CameramanGreatCrater_Text_2
	goto CameramanGreatCrater_4


TouristGreatCraterBattle::
# 305 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro, TouristGreatCraterRegister
# 306 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 307 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TouristGreatCraterRematch
# 308 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterBattle_Text_0
# 310 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRegister::
# 315 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 316 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 317 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRegister_Text_0
# 318 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_TOURIST_GREATCRATER
# 319 "data/maps/GreatCrater/scripts.pory"
	release
	end


TouristGreatCraterRematch::
# 324 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_TOURIST_GREATCRATER, TouristGreatCrater_Intro, TouristGreatCrater_Outro
# 325 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRematch_Text_0
	end


ConspiracyGreatCraterBattle::
# 341 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro, ConspiracyGreatCraterRegister
# 342 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 343 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ConspiracyGreatCraterRematch
# 344 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterBattle_Text_0
# 346 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRegister::
# 351 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 352 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 353 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_0
# 355 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_CONSPIRACY_GREATCRATER
# 356 "data/maps/GreatCrater/scripts.pory"
	msgbox ConspiracyGreatCraterRegister_Text_1
# 358 "data/maps/GreatCrater/scripts.pory"
	release
	end


ConspiracyGreatCraterRematch::
# 363 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_CONSPIRACY_GREATCRATER, ConspiracyGreatCrater_Intro, ConspiracyGreatCrater_Outro
# 364 "data/maps/GreatCrater/scripts.pory"
	msgbox TouristGreatCraterRematch_Text_0
	end


GreatCraterSouvenirShop::
# 380 "data/maps/GreatCrater/scripts.pory"
	lockall
# 381 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 382 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 383 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShop_Text_0
# 384 "data/maps/GreatCrater/scripts.pory"
	pokemart ShopSouvenirs
# 385 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


	.align 2
# 389 "data/maps/GreatCrater/scripts.pory"
ShopSouvenirs:
# 390 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 391 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 392 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_COMET_SHARD
# 393 "data/maps/GreatCrater/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

GreatCraterSouvenirShopkeeper::
# 398 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 399 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_0
# 400 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirShopkeeper_Text_0
# 402 "data/maps/GreatCrater/scripts.pory"
	applymovement 1, ReportersGreatCrater_Movement_6
# 403 "data/maps/GreatCrater/scripts.pory"
	waitmovement 1
# 404 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirBox::
# 407 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirBox_Text_0
# 408 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSign::
# 411 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSign_Text_0
# 412 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterSouvenirSupplies::
# 415 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterSouvenirSupplies_Text_0
# 416 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


GreatCraterVoid::
# 419 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterVoid_Text_0
# 421 "data/maps/GreatCrater/scripts.pory"
	releaseall
	return


CraterBottomWarp::
# 424 "data/maps/GreatCrater/scripts.pory"
	warp MAP_GREAT_CRATER_BOTTOM, 0
	return


GreatCraterDevonGrunts::
# 428 "data/maps/GreatCrater/scripts.pory"
	lock
# 429 "data/maps/GreatCrater/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 430 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_0
# 431 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, GreatCraterDevonGrunts_Movement_0
# 432 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGrunts_Text_0
# 434 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_4
# 435 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGrunts_Text_1
# 437 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_0
# 438 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterDevonGrunts_Text_2
# 439 "data/maps/GreatCrater/scripts.pory"
	applymovement 8, ReportersGreatCrater_Movement_6
# 440 "data/maps/GreatCrater/scripts.pory"
	applymovement 9, ReportersGreatCrater_Movement_6
	return


# 48 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_0:
# 48 "data/maps/GreatCrater/scripts.pory"
	face_player
	step_end

# 53 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_1:
# 53 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
# 53 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 59 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_2:
# 59 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_left
	step_end

# 65 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_3:
# 65 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_right
	step_end

# 71 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_4:
# 71 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_up
	step_end

# 97 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_5:
# 97 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_down
	step_end

# 168 "data/maps/GreatCrater/scripts.pory"
ReportersGreatCrater_Movement_6:
# 168 "data/maps/GreatCrater/scripts.pory"
	face_down
	step_end

# 431 "data/maps/GreatCrater/scripts.pory"
GreatCraterDevonGrunts_Movement_0:
# 431 "data/maps/GreatCrater/scripts.pory"
	face_player
# 431 "data/maps/GreatCrater/scripts.pory"
	walk_in_place_right
	step_end

ReportersGreatCrater_Text_0:
# 50 "data/maps/GreatCrater/scripts.pory"
	.string "Ah, look, Dan - an interesting-looking\n"
	.string "local just approached us!\p"
	.string "We're from Devon TV, and we're filming a\n"
	.string "documentary about the Rebel Zone!\p"
	.string "However, our footage right now is\n"
	.string "lacking a bit of... flair.$"

ReportersGreatCrater_Text_1:
# 54 "data/maps/GreatCrater/scripts.pory"
	.string "To put it plainly, it's quite boring.$"

ReportersGreatCrater_Text_2:
# 56 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed, Dan... which is why we were\n"
	.string "thinking about staging a battle!\p"
	.string "We will pretend one of those dangerous\n"
	.string "rebels have assailed us, and that we\l"
	.string "escaped by the skin of our teeth.$"

ReportersGreatCrater_Text_3:
# 62 "data/maps/GreatCrater/scripts.pory"
	.string "He looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_4:
# 63 "data/maps/GreatCrater/scripts.pory"
	.string "She looks a bit like one of them. To a\n"
	.string "Rustboro snob, at least.$"

ReportersGreatCrater_Text_5:
# 68 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes him perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_6:
# 69 "data/maps/GreatCrater/scripts.pory"
	.string "Indeed - which makes her perfect to\n"
	.string "play the role of 'rebel'!$"

ReportersGreatCrater_Text_7:
# 72 "data/maps/GreatCrater/scripts.pory"
	.string "We would need you to win, of course - it\n"
	.string "would not be very exciting if we just\l"
	.string "beat a dangerous rebel like nothing!\p"
	.string "So, will you help us? We will pay you\n"
	.string "handsomely for your time!$"

ReportersGreatCrater_Text_8:
# 75 "data/maps/GreatCrater/scripts.pory"
	.string "Sure$"

ReportersGreatCrater_Text_9:
# 75 "data/maps/GreatCrater/scripts.pory"
	.string "No chance$"

ReportersGreatCrater_Text_10:
# 75 "data/maps/GreatCrater/scripts.pory"
	.string "That's lying$"

ReportersGreatCrater_Text_11:
# 79 "data/maps/GreatCrater/scripts.pory"
	.string "Excellent - let's begin right away!\p"
	.string "At the count of three, please yell your\n"
	.string "most heinous insult, warcry, or similar\l"
	.string "to the camera.\p"
	.string "Then we take out our Pokémon, and have\n"
	.string "at it!\p"
	.string "Ready? Three, two, one... action!$"

ReportersGreatCrater_Text_12:
# 94 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, uhm... I'm sorry. I don't think we can\n"
	.string "have you saying “{STR_VAR_2},” in\l"
	.string "the documentary.\p"
	.string "That term has some implications I can't\n"
	.string "go over right now. Let's say some would\l"
	.string "get offended!$"

ReportersGreatCrater_Text_13:
# 98 "data/maps/GreatCrater/scripts.pory"
	.string "She means it's censored. So come up with\n"
	.string "something else, will you?$"

ReportersGreatCrater_Text_14:
# 100 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}As eloquent as ever, Dan...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_15:
# 105 "data/maps/GreatCrater/scripts.pory"
	.string "KYAAA! Someone help!! I am being\n"
	.string "ASSAILED!$"

ReportersGreatCrater_Text_16:
# 107 "data/maps/GreatCrater/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}'Kyaa'? Really...?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

ReportersGreatCrater_Text_17:
# 111 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.$"

ReportersGreatCrater_Text_18:
# 116 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is a great warcry.\p"
	.string "With the right editing, it may even get\n"
	.string "viral.$"

ReportersGreatCrater_Text_19:
# 118 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record some more in\l"
	.string "other locations.$"

ReportersGreatCrater_Text_20:
# 120 "data/maps/GreatCrater/scripts.pory"
	.string "Thanks for your help again - stay safe!$"

ReportersGreatCrater_Text_21:
# 134 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fright,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

ReportersGreatCrater_Text_22:
# 148 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, that's so unfortunate! Are you\n"
	.string "certain?\p"
	.string "We'll be here a while if you reconsider -\n"
	.string "which we beg you to do!$"

ReportersGreatCrater_Text_23:
# 157 "data/maps/GreatCrater/scripts.pory"
	.string "Lying? I wouldn't call it that. It's just\n"
	.string "a bit of showmanship!$"

ReportersGreatCrater_Text_24:
# 159 "data/maps/GreatCrater/scripts.pory"
	.string "If you won't help us, someone will. Why\n"
	.string "not take the pokeyen for yourself?$"

ReportersGreatCrater_Text_25:
# 160 "data/maps/GreatCrater/scripts.pory"
	.string "Okay, I'm in$"

ReportersGreatCrater_Text_26:
# 160 "data/maps/GreatCrater/scripts.pory"
	.string "Leave me out of this$"

ReportersGreatCrater_Text_27:
# 166 "data/maps/GreatCrater/scripts.pory"
	.string "Well, suit yourself. We'll be here a while\n"
	.string "if you change your mind.$"

ReportersGreatCrater_Text_28:
# 177 "data/maps/GreatCrater/scripts.pory"
	.string "Have you changed your mind? Will you\n"
	.string "help us stage a battle?$"

ReportersGreatCrater_Text_29:
# 178 "data/maps/GreatCrater/scripts.pory"
	.string "Yes$"

ReportersGreatCrater_Text_30:
# 178 "data/maps/GreatCrater/scripts.pory"
	.string "No$"

ReportersGreatCrater_Text_31:
# 183 "data/maps/GreatCrater/scripts.pory"
	.string "That's too bad... I think you'd be such a\n"
	.string "star!$"

TrendyPhaseTest_Text_0:
# 207 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} is awesome.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_0:
# 220 "data/maps/GreatCrater/scripts.pory"
	.string "Thank you so much! With your help, we've\n"
	.string "captured some incredible footage.\p"
	.string "... that's an amazing warcry$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_1:
# 224 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_2} is a great warcry. With\n"
	.string "the right editing, it may even get viral.$"

GreatCrater_EventScript_GiveNewTrendyPhrase_Text_2:
# 226 "data/maps/GreatCrater/scripts.pory"
	.string "It just may! But before we cut the\n"
	.string "footage, we need to record in other\l"
	.string "places.$"

GreatCrater_EventScript_CancelNewTrendyPhrase_Text_0:
# 236 "data/maps/GreatCrater/scripts.pory"
	.string "Oh no... you got a bit of scenic fear,\n"
	.string "didn't you?\p"
	.string "It happens the first time. We'll do\n"
	.string "another take when you're ready!$"

GreatCrater_EventScript_PhraseNotTrendyEnough_Text_0:
# 243 "data/maps/GreatCrater/scripts.pory"
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
# 291 "data/maps/GreatCrater/scripts.pory"
	.string "The cameraman seems to disregard\n"
	.string "{PLAYER} entirely.$"

CameramanGreatCrater_Text_1:
# 295 "data/maps/GreatCrater/scripts.pory"
	.string "It's easy money. You won't get far in\n"
	.string "the Rebel Zone by being moral.$"

CameramanGreatCrater_Text_2:
# 297 "data/maps/GreatCrater/scripts.pory"
	.string "I know from experience...$"

TouristGreatCraterBattle_Text_0:
# 308 "data/maps/GreatCrater/scripts.pory"
	.string "Pictures are great and all, but there's\n"
	.string "nothing like an exciting moment to\l"
	.string "imprint a memory.$"

TouristGreatCraterRegister_Text_0:
# 317 "data/maps/GreatCrater/scripts.pory"
	.string "That was exciting! Say, we don't we\n"
	.string "exchange Devonav profiles?$"

TouristGreatCraterRematch_Text_0:
# 325 "data/maps/GreatCrater/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

ConspiracyGreatCraterBattle_Text_0:
# 344 "data/maps/GreatCrater/scripts.pory"
	.string "Sorry, but my device has been\n"
	.string "compromised. You'll have to learn the\l"
	.string "truth elsewhere!$"

ConspiracyGreatCraterRegister_Text_0:
# 353 "data/maps/GreatCrater/scripts.pory"
	.string "Before I tell you, let's put our Devon\n"
	.string "Navs in airplane mode. Where was the\l"
	.string "option now...?$"

ConspiracyGreatCraterRegister_Text_1:
# 356 "data/maps/GreatCrater/scripts.pory"
	.string "Oops, wrong button. Wait, no... I could\n"
	.string "have swore I pressed the right one.\p"
	.string "That's it, I've been HACKED BY DEVON!$"

GreatCraterSouvenirShop_Text_0:
# 383 "data/maps/GreatCrater/scripts.pory"
	.string "Welcome to the Great Crater's Souvenir\n"
	.string "Shop!$"

GreatCraterSouvenirShopkeeper_Text_0:
# 400 "data/maps/GreatCrater/scripts.pory"
	.string "I know this is not New Rustboro Mall,\n"
	.string "but let's be civil hey?\p"
	.string "If you want to buy, go around the\n"
	.string "counter.$"

GreatCraterSouvenirBox_Text_0:
# 407 "data/maps/GreatCrater/scripts.pory"
	.string "The box is full of questionably\n"
	.string "preserved donuts.$"

GreatCraterSign_Text_0:
# 411 "data/maps/GreatCrater/scripts.pory"
	.string "North - Route 102\p"
	.string "East - Route 101$"

GreatCraterSouvenirSupplies_Text_0:
# 415 "data/maps/GreatCrater/scripts.pory"
	.string "The articles are covered by the same\n"
	.string "dust that floats in the air.$"

GreatCraterVoid_Text_0:
# 419 "data/maps/GreatCrater/scripts.pory"
	.string "The pitch-black bottom of the crater is\n"
	.string "too deep beneath to see.\p"
	.string "With the right equipment, one could\n"
	.string "climb down and explore it...$"

GreatCraterDevonGrunts_Text_0:
# 432 "data/maps/GreatCrater/scripts.pory"
	.string "I'm sorry, but one of our scientists is\n"
	.string "currently searching for a dangerous\l"
	.string "Pokémon in Route 102.$"

GreatCraterDevonGrunts_Text_1:
# 435 "data/maps/GreatCrater/scripts.pory"
	.string "The creature in question is next on the\n"
	.string "list of Pokémon to be safened, and we\l"
	.string "can't risk civilians interfering with his\l"
	.string "work.$"

GreatCraterDevonGrunts_Text_2:
# 438 "data/maps/GreatCrater/scripts.pory"
	.string "You have been hurt by a Pokémon, do\n"
	.string "you? Surely you understand.$"

ReportersGreatCrater_Outro::
# 198 "data/maps/GreatCrater/scripts.pory"
	.string "That was perfect. Here - this is for\nyour trouble!$"

GreatCrater_Text_XIsTheBiggestHappeningThingRight::
# 253 "data/maps/GreatCrater/scripts.pory"
	.string "In New Rustboro, {STR_VAR_1} is trendy.$"

GreatCrater_Text_TellMeWhatsNewAndIn::
# 257 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} Not trendy? Tell me what's trendy then.$"

GreatCrater_Text_OfCourseIKnowAboutThat::
# 262 "data/maps/GreatCrater/scripts.pory"
	.string "You're right. “{STR_VAR_1}” is old news, {STR_VAR_2} is the shit now.$"

GreatCrater_Text_XHuhIThinkYIsCool::
# 268 "data/maps/GreatCrater/scripts.pory"
	.string "Nah, {STR_VAR_2} is lame, {STR_VAR_1} is the cool thing.$"

GreatCrater_Text_HearOfAnyTrendsComeShareWithMe::
# 274 "data/maps/GreatCrater/scripts.pory"
	.string "Well, share with me later.$"

GreatCrater_Text_YeahDefinitionOfInRightNow::
# 279 "data/maps/GreatCrater/scripts.pory"
	.string "Yeah, {STR_VAR_1} is what's in.$"

TouristGreatCrater_Intro::
# 331 "data/maps/GreatCrater/scripts.pory"
	.string "This crater is a breathtaking sight...\pBut it would be even more memorable\nafter a battle!$"

TouristGreatCrater_Outro::
# 334 "data/maps/GreatCrater/scripts.pory"
	.string "Oh, yes... I'll never forget this!$"

ConspiracyGreatCrater_Intro::
# 370 "data/maps/GreatCrater/scripts.pory"
	.string "Hehe... do you know the real reason why\nDevon invented Safemon?\pI'll tell you if you beat me!$"

ConspiracyGreatCrater_Outro::
# 373 "data/maps/GreatCrater/scripts.pory"
	.string "Very well... listen closely...$"
