# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route102_OnResume
# 4 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_OnTransition
# 5 "data/maps/Route102/scripts.pory"
	.byte 0
# 6 "data/maps/Route102/scripts.pory"

# 7 "data/maps/Route102/scripts.pory"
Route102_OnResume:
# 8 "data/maps/Route102/scripts.pory"
	setstepcallback STEP_CB_ASH
# 9 "data/maps/Route102/scripts.pory"
	end
# 10 "data/maps/Route102/scripts.pory"

# 11 "data/maps/Route102/scripts.pory"
Route102_OnTransition:
# 12 "data/maps/Route102/scripts.pory"
	end
# 13 "data/maps/Route102/scripts.pory"

# 14 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 15 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 16 "data/maps/Route102/scripts.pory"
	end
# 17 "data/maps/Route102/scripts.pory"

# 18 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 19 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 20 "data/maps/Route102/scripts.pory"
	end
# 21 "data/maps/Route102/scripts.pory"

# 22 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 23 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 24 "data/maps/Route102/scripts.pory"
	end
# 25 "data/maps/Route102/scripts.pory"

# 26 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 27 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 28 "data/maps/Route102/scripts.pory"
	end
# 29 "data/maps/Route102/scripts.pory"
	
# 30 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 31 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 32 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 33 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 34 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 35 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 36 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 37 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 38 "data/maps/Route102/scripts.pory"
	release
# 39 "data/maps/Route102/scripts.pory"
	end
# 40 "data/maps/Route102/scripts.pory"

# 41 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 42 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 43 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 45 "data/maps/Route102/scripts.pory"
	release
# 46 "data/maps/Route102/scripts.pory"
	end
# 47 "data/maps/Route102/scripts.pory"

# 48 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 49 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 50 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 51 "data/maps/Route102/scripts.pory"
	release
# 52 "data/maps/Route102/scripts.pory"
	end
# 53 "data/maps/Route102/scripts.pory"

# 54 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 55 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 56 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 57 "data/maps/Route102/scripts.pory"
	release
# 58 "data/maps/Route102/scripts.pory"
	end
# 59 "data/maps/Route102/scripts.pory"

# 60 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 61 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 62 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 63 "data/maps/Route102/scripts.pory"
	release
# 64 "data/maps/Route102/scripts.pory"
	end
# 65 "data/maps/Route102/scripts.pory"

# 66 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 67 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 68 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route102/scripts.pory"
	end
# 70 "data/maps/Route102/scripts.pory"

# 71 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 72 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 73 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route102/scripts.pory"
	end
# 75 "data/maps/Route102/scripts.pory"

# 76 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 77 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 78 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route102/scripts.pory"
	end
# 80 "data/maps/Route102/scripts.pory"

# 81 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 82 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 83 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route102/scripts.pory"
	end
# 85 "data/maps/Route102/scripts.pory"

# 86 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 87 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 88 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 89 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 90 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 91 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 92 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 93 "data/maps/Route102/scripts.pory"

# 94 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 95 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 96 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 97 "data/maps/Route102/scripts.pory"

# 98 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 99 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 100 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 101 "data/maps/Route102/scripts.pory"

# 102 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 103 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 104 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 105 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 106 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 107 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 108 "data/maps/Route102/scripts.pory"

# 109 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 110 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 111 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 112 "data/maps/Route102/scripts.pory"

# 113 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 114 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 115 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 116 "data/maps/Route102/scripts.pory"

# 117 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 118 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 119 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

BridgeItem::
# 124 "data/maps/Route102/scripts.pory"
	lockall
# 125 "data/maps/Route102/scripts.pory"
	goto_if_unset FLAG_ITEM_PLAYER1F_RATION, BridgeItem_1
# 130 "data/maps/Route102/scripts.pory"
	msgbox BridgeItem_Text_0
# 131 "data/maps/Route102/scripts.pory"
	releaseall
	return

BridgeItem_1:
# 126 "data/maps/Route102/scripts.pory"
	giveitem ITEM_ENERGY_ROOT, 3
# 127 "data/maps/Route102/scripts.pory"
	setflag FLAG_ITEM_PLAYER1F_RATION
# 128 "data/maps/Route102/scripts.pory"
	removeobject 8
	return


BridgeItem_Text_0:
# 130 "data/maps/Route102/scripts.pory"
	.string "The box is empty.$"
