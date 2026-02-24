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


GreatCrater_EventScript_GiveNewTrendyPhrase::
# 35 "data/maps/GreatCrater/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 36 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, GreatCrater_EventScript_PhraseNotTrendyEnough
# 37 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 38 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_CancelNewTrendyPhrase::
# 42 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 43 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCrater_EventScript_PhraseNotTrendyEnough::
# 47 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCrater_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 48 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCraterTouristBattle::
# 87 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, GreatCraterTouristRegister
# 88 "data/maps/GreatCrater/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 89 "data/maps/GreatCrater/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 90 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterTouristBattle_Text_0
# 91 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCraterTouristRegister::
# 96 "data/maps/GreatCrater/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 97 "data/maps/GreatCrater/scripts.pory"
	waitmovement 0
# 98 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterTouristRegister_Text_0
# 99 "data/maps/GreatCrater/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 100 "data/maps/GreatCrater/scripts.pory"
	release
	end


GreatCraterTouristRematch::
# 105 "data/maps/GreatCrater/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, GreatCraterTourist_Intro, GreatCraterTourist_Outro
# 106 "data/maps/GreatCrater/scripts.pory"
	msgbox GreatCraterTouristRematch_Text_0
	end


GreatCraterTouristBattle_Text_0:
# 90 "data/maps/GreatCrater/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

GreatCraterTouristRegister_Text_0:
# 98 "data/maps/GreatCrater/scripts.pory"
	.string "Number registered.$"

GreatCraterTouristRematch_Text_0:
# 106 "data/maps/GreatCrater/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

GreatCrater_Text_XIsTheBiggestHappeningThingRight::
# 53 "data/maps/GreatCrater/scripts.pory"
	.string "In New Rustboro, {STR_VAR_1} is trendy.$"

GreatCrater_Text_TellMeWhatsNewAndIn::
# 57 "data/maps/GreatCrater/scripts.pory"
	.string "{STR_VAR_1} Not trendy? Tell me what's trendy then.$"

GreatCrater_Text_OfCourseIKnowAboutThat::
# 62 "data/maps/GreatCrater/scripts.pory"
	.string "You're right. “{STR_VAR_1}” is old news, {STR_VAR_2} is the shit now.$"

GreatCrater_Text_XHuhIThinkYIsCool::
# 68 "data/maps/GreatCrater/scripts.pory"
	.string "Nah, {STR_VAR_2} is lame, {STR_VAR_1} is the cool thing.$"

GreatCrater_Text_HearOfAnyTrendsComeShareWithMe::
# 74 "data/maps/GreatCrater/scripts.pory"
	.string "Well, share with me later.$"

GreatCrater_Text_YeahDefinitionOfInRightNow::
# 79 "data/maps/GreatCrater/scripts.pory"
	.string "Yeah, {STR_VAR_1} is what's in.$"

GreatCraterTourist_Intro::
# 112 "data/maps/GreatCrater/scripts.pory"
	.string "They told me I'm too old to enlist...  but I'm\nstronger than you young'uns!\pI'll show you!$"

GreatCraterTourist_Outro::
# 115 "data/maps/GreatCrater/scripts.pory"
	.string "Hmpf... not bad...$"
