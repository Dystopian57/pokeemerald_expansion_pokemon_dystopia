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
# 115 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route102Weather
# 116 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PopWeatherMon102
# 117 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DynamicWeather102
	.byte 0


DynamicWeather102::
# 122 "data/maps/Route102/scripts.pory"
	compare VAR_PETALBURGLANDFILL_WEATHER, 0
	goto_if_eq DynamicWeather102_1
	return

DynamicWeather102_1:
# 123 "data/maps/Route102/scripts.pory"
	random 10
# 124 "data/maps/Route102/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 126 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 127 "data/maps/Route102/scripts.pory"
	case 0, DynamicWeather102_4
# 128 "data/maps/Route102/scripts.pory"
	case 1, DynamicWeather102_5
# 129 "data/maps/Route102/scripts.pory"
	case 2, DynamicWeather102_6
# 130 "data/maps/Route102/scripts.pory"
	case 3, DynamicWeather102_7
# 131 "data/maps/Route102/scripts.pory"
	case 4, DynamicWeather102_8
# 132 "data/maps/Route102/scripts.pory"
	case 5, DynamicWeather102_9
# 133 "data/maps/Route102/scripts.pory"
	case 6, DynamicWeather102_10
# 134 "data/maps/Route102/scripts.pory"
	case 7, DynamicWeather102_11
# 135 "data/maps/Route102/scripts.pory"
	case 8, DynamicWeather102_12
# 136 "data/maps/Route102/scripts.pory"
	case 9, DynamicWeather102_13
# 137 "data/maps/Route102/scripts.pory"
	case 10, DynamicWeather102_14
	return

DynamicWeather102_4:
# 127 "data/maps/Route102/scripts.pory"
	goto Route102EndSandtorm
	return

DynamicWeather102_5:
# 128 "data/maps/Route102/scripts.pory"
	goto Route102EndSandtorm
	return

DynamicWeather102_6:
# 129 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_7:
# 130 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_8:
# 131 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_9:
# 132 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_10:
# 133 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_11:
# 134 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_12:
# 135 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_13:
# 136 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_14:
# 137 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return


Route102Weather::
# 143 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 0, Route102Shade
# 144 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 1, Route102Sandstorm1
# 145 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 2, Route102Sandstorm2
# 146 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 3, Route102EndSandtorm
# 148 "data/maps/Route102/scripts.pory"
	release
	return


Route102Shade::
# 152 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SHADE
	return


Route102Sandstorm1::
# 156 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 157 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 2
# 158 "data/maps/Route102/scripts.pory"
	playbgm MUS_RUINSMUSIC, TRUE
	return


Route102Sandstorm2::
# 162 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 163 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 3
# 164 "data/maps/Route102/scripts.pory"
	playbgm MUS_RUINSMUSIC, TRUE
	return


Route102EndSandtorm::
# 168 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 169 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 0
# 170 "data/maps/Route102/scripts.pory"
	playbgm MUS_RUINSMUSIC, TRUE
	return


PopWeatherMon102::
# 183 "data/maps/Route102/scripts.pory"
	compare VAR_ROUTE102_WEATHER, 3
	goto_if_eq PopWeatherMon102_1
	return

PopWeatherMon102_1:
# 184 "data/maps/Route102/scripts.pory"
	clearflag route102weathermon
	return


BridgeItem::
# 193 "data/maps/Route102/scripts.pory"
	lockall
# 194 "data/maps/Route102/scripts.pory"
	goto_if_unset FLAG_ITEM_PLAYER1F_RATION, BridgeItem_1
# 199 "data/maps/Route102/scripts.pory"
	msgbox BridgeItem_Text_0
# 200 "data/maps/Route102/scripts.pory"
	releaseall
	return

BridgeItem_1:
# 195 "data/maps/Route102/scripts.pory"
	giveitem ITEM_ENERGY_ROOT, 3
# 196 "data/maps/Route102/scripts.pory"
	setflag FLAG_ITEM_PLAYER1F_RATION
# 197 "data/maps/Route102/scripts.pory"
	removeobject 8
	return


Route102Weathermon::
# 206 "data/maps/Route102/scripts.pory"
	lock
# 207 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 208 "data/maps/Route102/scripts.pory"
	applymovement 8, Route102Weathermon_Movement_0
# 209 "data/maps/Route102/scripts.pory"
	msgbox Route102Weathermon_Text_0
# 210 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Weathermon_Text_1, Route102Weathermon_Text_2
# 212 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Weathermon_2
Route102Weathermon_1:
# 233 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Weathermon_5
Route102Weathermon_4:
# 237 "data/maps/Route102/scripts.pory"
endsandshrewinsandstormscript:
# 238 "data/maps/Route102/scripts.pory"
	waitmessage
# 239 "data/maps/Route102/scripts.pory"
	release
	return

Route102Weathermon_2:
# 213 "data/maps/Route102/scripts.pory"
	waitmessage
# 214 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_SANDSHREW, 3
# 215 "data/maps/Route102/scripts.pory"
	dowildbattle
# 216 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 217 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route102Weathermon_7
# 220 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route102Weathermon_8
# 224 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route102Weathermon_9
# 227 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route102Weathermon_10
	goto Route102Weathermon_1

Route102Weathermon_5:
# 234 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_4

Route102Weathermon_7:
# 218 "data/maps/Route102/scripts.pory"
	setflag route102weathermon
	goto Route102Weathermon_1

Route102Weathermon_8:
# 221 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
# 222 "data/maps/Route102/scripts.pory"
	setflag route102weathermon
	goto Route102Weathermon_1

Route102Weathermon_9:
# 225 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_1

Route102Weathermon_10:
# 228 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_1


# 208 "data/maps/Route102/scripts.pory"
Route102Weathermon_Movement_0:
# 208 "data/maps/Route102/scripts.pory"
	face_player
	step_end

BridgeItem_Text_0:
# 199 "data/maps/Route102/scripts.pory"
	.string "The box is empty.$"

Route102Weathermon_Text_0:
# 209 "data/maps/Route102/scripts.pory"
	.string "The Sandshrew is just enjoying the\n"
	.string "sandstorm. Battle it?$"

Route102Weathermon_Text_1:
# 210 "data/maps/Route102/scripts.pory"
	.string "Yes$"

Route102Weathermon_Text_2:
# 210 "data/maps/Route102/scripts.pory"
	.string "No$"
