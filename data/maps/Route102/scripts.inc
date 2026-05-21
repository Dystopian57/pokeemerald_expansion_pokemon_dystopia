# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"

# 3 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 4 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 5 "data/maps/Route102/scripts.pory"
	end
# 6 "data/maps/Route102/scripts.pory"

# 7 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 8 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 9 "data/maps/Route102/scripts.pory"
	end
# 10 "data/maps/Route102/scripts.pory"

# 11 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 12 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 13 "data/maps/Route102/scripts.pory"
	end
# 14 "data/maps/Route102/scripts.pory"

# 15 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 16 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 17 "data/maps/Route102/scripts.pory"
	end
# 18 "data/maps/Route102/scripts.pory"
	
# 19 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 20 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 21 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 22 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 23 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 24 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 25 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 26 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 27 "data/maps/Route102/scripts.pory"
	release
# 28 "data/maps/Route102/scripts.pory"
	end
# 29 "data/maps/Route102/scripts.pory"

# 30 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 31 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 32 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 34 "data/maps/Route102/scripts.pory"
	release
# 35 "data/maps/Route102/scripts.pory"
	end
# 36 "data/maps/Route102/scripts.pory"

# 37 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 38 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 39 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 40 "data/maps/Route102/scripts.pory"
	release
# 41 "data/maps/Route102/scripts.pory"
	end
# 42 "data/maps/Route102/scripts.pory"

# 43 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 44 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 45 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 46 "data/maps/Route102/scripts.pory"
	release
# 47 "data/maps/Route102/scripts.pory"
	end
# 48 "data/maps/Route102/scripts.pory"

# 49 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 50 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 51 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 52 "data/maps/Route102/scripts.pory"
	release
# 53 "data/maps/Route102/scripts.pory"
	end
# 54 "data/maps/Route102/scripts.pory"

# 55 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 56 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 57 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route102/scripts.pory"
	end
# 59 "data/maps/Route102/scripts.pory"

# 60 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 61 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 62 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route102/scripts.pory"
	end
# 64 "data/maps/Route102/scripts.pory"

# 65 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 66 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 67 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route102/scripts.pory"
	end
# 69 "data/maps/Route102/scripts.pory"

# 70 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 71 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 72 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route102/scripts.pory"
	end
# 74 "data/maps/Route102/scripts.pory"

# 75 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 76 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 77 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 78 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 79 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 80 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 81 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 82 "data/maps/Route102/scripts.pory"

# 83 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 84 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 85 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 86 "data/maps/Route102/scripts.pory"

# 87 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 88 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 89 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 90 "data/maps/Route102/scripts.pory"

# 91 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 92 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 93 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 94 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 95 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 96 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 97 "data/maps/Route102/scripts.pory"

# 98 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 99 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 100 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 101 "data/maps/Route102/scripts.pory"

# 102 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 103 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 104 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 105 "data/maps/Route102/scripts.pory"

# 106 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 107 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 108 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_MapScripts::
# 114 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102Weather
# 115 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route102Weather
	.byte 0


Route102Weather::
# 120 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 0, Route102Shade
# 121 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 1, Route102Sandstorm1
# 122 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 2, Route102Sandstorm2
# 123 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 3, Route102EndSandtorm
# 125 "data/maps/Route102/scripts.pory"
	release
	return


Route102Shade::
# 129 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SHADE
	return


Route102Sandstorm1::
# 133 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 134 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 2
	return


Route102Sandstorm2::
# 138 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 139 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 3
	return


Route102EndSandtorm::
# 143 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 144 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 0
	return


BridgeItem::
# 151 "data/maps/Route102/scripts.pory"
	lockall
# 152 "data/maps/Route102/scripts.pory"
	goto_if_unset FLAG_ITEM_PLAYER1F_RATION, BridgeItem_1
# 157 "data/maps/Route102/scripts.pory"
	msgbox BridgeItem_Text_0
# 158 "data/maps/Route102/scripts.pory"
	releaseall
	return

BridgeItem_1:
# 153 "data/maps/Route102/scripts.pory"
	giveitem ITEM_ENERGY_ROOT, 3
# 154 "data/maps/Route102/scripts.pory"
	setflag FLAG_ITEM_PLAYER1F_RATION
# 155 "data/maps/Route102/scripts.pory"
	removeobject 8
	return


Route102Sandshrewinsandstorm::
# 164 "data/maps/Route102/scripts.pory"
	lock
# 165 "data/maps/Route102/scripts.pory"
	applymovement 8, Route102Sandshrewinsandstorm_Movement_0
# 166 "data/maps/Route102/scripts.pory"
	msgbox Route102Sandshrewinsandstorm_Text_0
# 167 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Sandshrewinsandstorm_Text_1, Route102Sandshrewinsandstorm_Text_2
# 169 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Sandshrewinsandstorm_2
Route102Sandshrewinsandstorm_1:
# 191 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Sandshrewinsandstorm_5
Route102Sandshrewinsandstorm_4:
# 195 "data/maps/Route102/scripts.pory"
endsandshrewinsandstormscript:
# 196 "data/maps/Route102/scripts.pory"
	waitmessage
# 197 "data/maps/Route102/scripts.pory"
	releaseall
	return

Route102Sandshrewinsandstorm_2:
# 170 "data/maps/Route102/scripts.pory"
	waitmessage
# 171 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_SANDSHREW, 3
# 172 "data/maps/Route102/scripts.pory"
	dowildbattle
# 173 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 174 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route102Sandshrewinsandstorm_7
# 177 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route102Sandshrewinsandstorm_8
# 181 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route102Sandshrewinsandstorm_9
# 184 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route102Sandshrewinsandstorm_10
	goto Route102Sandshrewinsandstorm_1

Route102Sandshrewinsandstorm_5:
# 192 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Sandshrewinsandstorm_4

Route102Sandshrewinsandstorm_7:
# 175 "data/maps/Route102/scripts.pory"
	setflag sandshrewin102
	goto Route102Sandshrewinsandstorm_1

Route102Sandshrewinsandstorm_8:
# 178 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
# 179 "data/maps/Route102/scripts.pory"
	setflag sandshrewin102
	goto Route102Sandshrewinsandstorm_1

Route102Sandshrewinsandstorm_9:
# 182 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Sandshrewinsandstorm_1

Route102Sandshrewinsandstorm_10:
# 185 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Sandshrewinsandstorm_1


# 165 "data/maps/Route102/scripts.pory"
Route102Sandshrewinsandstorm_Movement_0:
# 165 "data/maps/Route102/scripts.pory"
	face_player
	step_end

BridgeItem_Text_0:
# 157 "data/maps/Route102/scripts.pory"
	.string "The box is empty.$"

Route102Sandshrewinsandstorm_Text_0:
# 166 "data/maps/Route102/scripts.pory"
	.string "The Sandshrew is just enjoying the\n"
	.string "weather. Battle it?$"

Route102Sandshrewinsandstorm_Text_1:
# 167 "data/maps/Route102/scripts.pory"
	.string "Yes$"

Route102Sandshrewinsandstorm_Text_2:
# 167 "data/maps/Route102/scripts.pory"
	.string "No$"
