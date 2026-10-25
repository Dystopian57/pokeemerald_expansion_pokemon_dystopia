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
# 120 "data/maps/Route102/scripts.pory"
	compare VAR_ROUTE102_WEATHER, 0
	goto_if_eq DynamicWeather102_1
	return

DynamicWeather102_1:
# 121 "data/maps/Route102/scripts.pory"
	random 10
# 122 "data/maps/Route102/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 124 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 125 "data/maps/Route102/scripts.pory"
	case 0, DynamicWeather102_4
# 126 "data/maps/Route102/scripts.pory"
	case 1, DynamicWeather102_5
# 127 "data/maps/Route102/scripts.pory"
	case 2, DynamicWeather102_6
# 128 "data/maps/Route102/scripts.pory"
	case 3, DynamicWeather102_7
# 129 "data/maps/Route102/scripts.pory"
	case 4, DynamicWeather102_8
# 130 "data/maps/Route102/scripts.pory"
	case 5, DynamicWeather102_9
# 131 "data/maps/Route102/scripts.pory"
	case 6, DynamicWeather102_10
# 132 "data/maps/Route102/scripts.pory"
	case 7, DynamicWeather102_11
# 133 "data/maps/Route102/scripts.pory"
	case 8, DynamicWeather102_12
# 134 "data/maps/Route102/scripts.pory"
	case 9, DynamicWeather102_13
# 135 "data/maps/Route102/scripts.pory"
	case 10, DynamicWeather102_14
	return

DynamicWeather102_4:
# 125 "data/maps/Route102/scripts.pory"
	goto Route102EndSandtorm
	return

DynamicWeather102_5:
# 126 "data/maps/Route102/scripts.pory"
	goto Route102EndSandtorm
	return

DynamicWeather102_6:
# 127 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_7:
# 128 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_8:
# 129 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_9:
# 130 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_10:
# 131 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_11:
# 132 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_12:
# 133 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_13:
# 134 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

DynamicWeather102_14:
# 135 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return


Route102Weather::
# 141 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 0, Route102Shade
# 142 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 1, Route102Sandstorm1
# 143 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 2, Route102Sandstorm2
# 144 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 3, Route102EndSandtorm
# 146 "data/maps/Route102/scripts.pory"
	release
	return


Route102Shade::
# 150 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SHADE
	return


Route102Sandstorm1::
# 154 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 155 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 2
# 156 "data/maps/Route102/scripts.pory"
	playbgm MUS_RUINSMUSIC, TRUE
	return


Route102Sandstorm2::
# 160 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 161 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 3
# 162 "data/maps/Route102/scripts.pory"
	playbgm MUS_RUINSMUSIC, TRUE
	return


Route102EndSandtorm::
# 166 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 167 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 0
# 168 "data/maps/Route102/scripts.pory"
	playbgm MUS_RUINSMUSIC, TRUE
	return


PopWeatherMon102::
# 181 "data/maps/Route102/scripts.pory"
	compare VAR_ROUTE102_WEATHER, 3
	goto_if_eq PopWeatherMon102_1
	return

PopWeatherMon102_1:
# 182 "data/maps/Route102/scripts.pory"
	clearflag route102weathermon
	return


Route102ConstructionWorkerMTrapinch::
# 188 "data/maps/Route102/scripts.pory"
	lock
# 189 "data/maps/Route102/scripts.pory"
	applymovement 9, Route102ConstructionWorkerMTrapinch_Movement_0
# 190 "data/maps/Route102/scripts.pory"
	waitmovement 9
# 191 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 192 "data/maps/Route102/scripts.pory"
	msgbox Route102ConstructionWorkerMTrapinch_Text_0
# 193 "data/maps/Route102/scripts.pory"
	applymovement 9, Route102ConstructionWorkerMTrapinch_Movement_1
# 194 "data/maps/Route102/scripts.pory"
	waitmovement 9
# 195 "data/maps/Route102/scripts.pory"
	release
	return


Route102ConstructionWorkerFDiglett::
# 199 "data/maps/Route102/scripts.pory"
	lock
# 200 "data/maps/Route102/scripts.pory"
	applymovement 11, Route102ConstructionWorkerMTrapinch_Movement_0
# 201 "data/maps/Route102/scripts.pory"
	waitmovement 11
# 202 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_DIGLETT, CRY_MODE_NORMAL
# 203 "data/maps/Route102/scripts.pory"
	msgbox Route102ConstructionWorkerFDiglett_Text_0
# 204 "data/maps/Route102/scripts.pory"
	applymovement 11, Route102ConstructionWorkerMTrapinch_Movement_1
# 205 "data/maps/Route102/scripts.pory"
	waitmovement 11
# 206 "data/maps/Route102/scripts.pory"
	release
	return


Route102_ConstructionWorkerMBattle::
# 210 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, ConstructionWorkerM102_Intro, ConstructionWorkerM102_Outro, Route102_ConstructionWorkerMRegister
# 211 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 212 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_ConstructionWorkerMRematch
# 213 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 214 "data/maps/Route102/scripts.pory"
	applymovement 1, Route102ConstructionWorkerMTrapinch_Movement_0
# 215 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerMBattle_Text_0
# 216 "data/maps/Route102/scripts.pory"
	applymovement 9, Route102ConstructionWorkerMTrapinch_Movement_0
# 217 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 218 "data/maps/Route102/scripts.pory"
	msgbox Route102ConstructionWorkerMTrapinch_Text_0
# 219 "data/maps/Route102/scripts.pory"
	applymovement 1, Route102ConstructionWorkerMTrapinch_Movement_1
# 220 "data/maps/Route102/scripts.pory"
	applymovement 9, Route102ConstructionWorkerMTrapinch_Movement_1
# 221 "data/maps/Route102/scripts.pory"
	waitmovement 9
# 222 "data/maps/Route102/scripts.pory"
	release
	end


Route102_ConstructionWorkerMRegister::
# 227 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 228 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 229 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerMRegister_Text_0
# 233 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 234 "data/maps/Route102/scripts.pory"
	release
	end


Route102_ConstructionWorkerMRematch::
# 239 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, ConstructionWorkerM102_Intro2, ConstructionWorkerM102_Outro2
# 240 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerMRematch_Text_0
	end


Route102_ConstructionWorkerFBattle::
# 261 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, ConstructionWorkerF102_Intro, ConstructionWorkerF102_Outro, Route102_ConstructionWorkerFRegister
# 262 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 263 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_ConstructionWorkerFRematch
# 264 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 265 "data/maps/Route102/scripts.pory"
	applymovement 3, Route102ConstructionWorkerMTrapinch_Movement_0
# 266 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerFBattle_Text_0
# 268 "data/maps/Route102/scripts.pory"
	applymovement 3, Route102ConstructionWorkerMTrapinch_Movement_1
# 269 "data/maps/Route102/scripts.pory"
	waitmovement 9
# 270 "data/maps/Route102/scripts.pory"
	release
	end


Route102_ConstructionWorkerFRegister::
# 275 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 276 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 277 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerFRegister_Text_0
# 279 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 280 "data/maps/Route102/scripts.pory"
	release
	end


Route102_ConstructionWorkerFRematch::
# 285 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, ConstructionWorkerF102_Intro2, ConstructionWorkerF102_Outro2
# 286 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerMRematch_Text_0
	end


Road102BridgeItem::
# 306 "data/maps/Route102/scripts.pory"
	lock
# 307 "data/maps/Route102/scripts.pory"
	finditem ITEM_HARD_STONE
# 310 "data/maps/Route102/scripts.pory"
	removeobject 4
# 311 "data/maps/Route102/scripts.pory"
	releaseall
	return


Route102Weathermon::
# 317 "data/maps/Route102/scripts.pory"
	lock
# 318 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 319 "data/maps/Route102/scripts.pory"
	applymovement 8, Route102ConstructionWorkerMTrapinch_Movement_0
# 320 "data/maps/Route102/scripts.pory"
	msgbox Route102Weathermon_Text_0
# 321 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Weathermon_Text_1, Route102Weathermon_Text_2
# 323 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Weathermon_2
Route102Weathermon_1:
# 344 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Weathermon_5
Route102Weathermon_4:
# 348 "data/maps/Route102/scripts.pory"
endsandshrewinsandstormscript:
# 349 "data/maps/Route102/scripts.pory"
	waitmessage
# 350 "data/maps/Route102/scripts.pory"
	release
	return

Route102Weathermon_2:
# 324 "data/maps/Route102/scripts.pory"
	waitmessage
# 325 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_SANDSHREW, 3
# 326 "data/maps/Route102/scripts.pory"
	dowildbattle
# 327 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 328 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route102Weathermon_7
# 331 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route102Weathermon_8
# 335 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route102Weathermon_9
# 338 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route102Weathermon_10
	goto Route102Weathermon_1

Route102Weathermon_5:
# 345 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_4

Route102Weathermon_7:
# 329 "data/maps/Route102/scripts.pory"
	setflag route102weathermon
	goto Route102Weathermon_1

Route102Weathermon_8:
# 332 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
# 333 "data/maps/Route102/scripts.pory"
	setflag route102weathermon
	goto Route102Weathermon_1

Route102Weathermon_9:
# 336 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_1

Route102Weathermon_10:
# 339 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_1


Route103ScientistFoundTracks::
# 354 "data/maps/Route102/scripts.pory"
	lock
# 355 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 357 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 358 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistFoundTracks_Movement_0
# 360 "data/maps/Route102/scripts.pory"
	msgbox Route103ScientistFoundTracks_Text_0
# 361 "data/maps/Route102/scripts.pory"
	closemessage
# 363 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ScientistFoundTracks_Movement_1
# 364 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistFoundTracks_Movement_1
# 365 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 367 "data/maps/Route102/scripts.pory"
	msgbox Route103ScientistFoundTracks_Text_1
# 371 "data/maps/Route102/scripts.pory"
	setvar VAR_102_SCIENTIST, 2
# 372 "data/maps/Route102/scripts.pory"
	release
	return


Route102Scientist::
# 376 "data/maps/Route102/scripts.pory"
	lock
# 377 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 379 "data/maps/Route102/scripts.pory"
	compare VAR_102_SCIENTIST, 1
	goto_if_eq Route102Scientist_2
Route102Scientist_1:
# 386 "data/maps/Route102/scripts.pory"
	compare VAR_102_SCIENTIST, 0
	goto_if_eq Route102Scientist_5
Route102Scientist_4:
# 439 "data/maps/Route102/scripts.pory"
	release
	return

Route102Scientist_2:
# 380 "data/maps/Route102/scripts.pory"
	applymovement 7, Route102ConstructionWorkerMTrapinch_Movement_0
# 381 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_0
# 383 "data/maps/Route102/scripts.pory"
	goto scientistasksforhelp102
	goto Route102Scientist_1

Route102Scientist_5:
# 387 "data/maps/Route102/scripts.pory"
	setvar VAR_102_SCIENTIST, 1
# 388 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_1
# 389 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 390 "data/maps/Route102/scripts.pory"
	applymovement 7, Route103ScientistFoundTracks_Movement_0
# 391 "data/maps/Route102/scripts.pory"
	checkplayergender
# 392 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route102Scientist_8
Route102Scientist_7:
# 395 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route102Scientist_11
Route102Scientist_10:
# 398 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_3
# 403 "data/maps/Route102/scripts.pory"
	applymovement 7, Route102Scientist_Movement_0
# 405 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_4
# 408 "data/maps/Route102/scripts.pory"
	applymovement 7, Route102ConstructionWorkerMTrapinch_Movement_0
# 410 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_5
# 417 "data/maps/Route102/scripts.pory"
scientistasksforhelp102:
# 418 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Scientist_Text_6, Route102Scientist_Text_7
# 419 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scientist_14
Route102Scientist_13:
# 431 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scientist_16
	goto Route102Scientist_4

Route102Scientist_8:
# 393 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_2
	goto Route102Scientist_7

Route102Scientist_11:
# 396 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_2
	goto Route102Scientist_10

Route102Scientist_14:
# 419 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_8
# 425 "data/maps/Route102/scripts.pory"
	setfollowernpc LOCALID_102_RESEARCHER, FNPC_ALL, Route102Scientistfollowchat, 0
# 426 "data/maps/Route102/scripts.pory"
	removeobject 7
# 427 "data/maps/Route102/scripts.pory"
	setflag researcher102
# 428 "data/maps/Route102/scripts.pory"
	clearflag SanctumWartz
	goto Route102Scientist_13

Route102Scientist_16:
# 432 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_9
# 435 "data/maps/Route102/scripts.pory"
	setflag SanctumWartz
	goto Route102Scientist_4


Route102Scientistfollowchat::
# 444 "data/maps/Route102/scripts.pory"
	lock
# 445 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ConstructionWorkerMTrapinch_Movement_0
# 447 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_0
# 449 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route102Scientistfollowchat_Text_1, Route102Scientistfollowchat_Text_2, Route102Scientistfollowchat_Text_3, Route102Scientistfollowchat_Text_4, Route102Scientistfollowchat_Text_5
# 450 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scientistfollowchat_2
Route102Scientistfollowchat_1:
# 456 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scientistfollowchat_5
Route102Scientistfollowchat_4:
# 484 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route102Scientistfollowchat_8
Route102Scientistfollowchat_7:
# 491 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route102Scientistfollowchat_13
Route102Scientistfollowchat_12:
# 508 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route102Scientistfollowchat_16
Route102Scientistfollowchat_15:
# 511 "data/maps/Route102/scripts.pory"
endofscientistfollow103:
# 512 "data/maps/Route102/scripts.pory"
	release
	return

Route102Scientistfollowchat_2:
# 451 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_6
	goto Route102Scientistfollowchat_1

Route102Scientistfollowchat_5:
# 457 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_7
# 461 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Route102Scientistfollowchat_10
	goto Route102Scientistfollowchat_4

Route102Scientistfollowchat_8:
# 485 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_10
	goto Route102Scientistfollowchat_7

Route102Scientistfollowchat_10:
# 462 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_8
# 464 "data/maps/Route102/scripts.pory"
	setflag researcherin102sawdevondex
# 465 "data/maps/Route102/scripts.pory"
	closemessage
# 467 "data/maps/Route102/scripts.pory"
	playse SE_DEX_SCROLL
# 468 "data/maps/Route102/scripts.pory"
	waitse
# 469 "data/maps/Route102/scripts.pory"
	playse SE_DEX_SCROLL
# 470 "data/maps/Route102/scripts.pory"
	waitse
# 471 "data/maps/Route102/scripts.pory"
	playse SE_DEX_SEARCH
# 472 "data/maps/Route102/scripts.pory"
	waitse
# 473 "data/maps/Route102/scripts.pory"
	playse SE_DEX_PAGE
# 474 "data/maps/Route102/scripts.pory"
	waitse
# 476 "data/maps/Route102/scripts.pory"
	setseenmon SPECIES_WARTZ
# 478 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_9
	goto Route102Scientistfollowchat_4

Route102Scientistfollowchat_13:
# 492 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_11
# 495 "data/maps/Route102/scripts.pory"
	closemessage
# 497 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 498 "data/maps/Route102/scripts.pory"
	destroyfollowernpc
# 499 "data/maps/Route102/scripts.pory"
	addobject 7
# 500 "data/maps/Route102/scripts.pory"
	clearflag researcher102
# 501 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 502 "data/maps/Route102/scripts.pory"
	setvar VAR_102_SCIENTIST, 1
# 503 "data/maps/Route102/scripts.pory"
	goto endofscientistfollow103
	goto Route102Scientistfollowchat_12

Route102Scientistfollowchat_16:
# 509 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_12
	goto Route102Scientistfollowchat_15


Route102ScientistNottoGreatCrater::
# 516 "data/maps/Route102/scripts.pory"
	lock
# 517 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ConstructionWorkerMTrapinch_Movement_0
# 518 "data/maps/Route102/scripts.pory"
	msgbox Route102ScientistNottoGreatCrater_Text_0
# 522 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ScientistNottoGreatCrater_Movement_0
# 523 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102ScientistNottoGreatCrater_Movement_0
# 524 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 525 "data/maps/Route102/scripts.pory"
	release
	return


Route102ScientistNottoPetalburg::
# 529 "data/maps/Route102/scripts.pory"
	lock
# 530 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ConstructionWorkerMTrapinch_Movement_0
# 531 "data/maps/Route102/scripts.pory"
	msgbox Route102ScientistNottoPetalburg_Text_0
# 534 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ScientistNottoPetalburg_Movement_0
# 535 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102ScientistNottoPetalburg_Movement_0
# 536 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 537 "data/maps/Route102/scripts.pory"
	release
	return


Route102ScientistNottoOldale::
# 541 "data/maps/Route102/scripts.pory"
	lock
# 542 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ConstructionWorkerMTrapinch_Movement_0
# 543 "data/maps/Route102/scripts.pory"
	msgbox Route102ScientistNottoOldale_Text_0
# 546 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ScientistNottoOldale_Movement_0
# 547 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102ScientistNottoOldale_Movement_0
# 548 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 549 "data/maps/Route102/scripts.pory"
	release
	return


Route102ConstructionShedSign::
# 553 "data/maps/Route102/scripts.pory"
	lock
# 554 "data/maps/Route102/scripts.pory"
	msgbox Route102ConstructionShedSign_Text_0
	return


Route102OldaleSign::
# 558 "data/maps/Route102/scripts.pory"
	lock
# 559 "data/maps/Route102/scripts.pory"
	msgbox Route102OldaleSign_Text_0
# 560 "data/maps/Route102/scripts.pory"
	release
	return


Route102Wheelbarrow::
# 564 "data/maps/Route102/scripts.pory"
	lock
# 565 "data/maps/Route102/scripts.pory"
	msgbox Route102Wheelbarrow_Text_0
# 566 "data/maps/Route102/scripts.pory"
	release
	return


Route102Excavator::
# 570 "data/maps/Route102/scripts.pory"
	lock
# 571 "data/maps/Route102/scripts.pory"
	msgbox Route102Excavator_Text_0
# 572 "data/maps/Route102/scripts.pory"
	release
	return


Route102Bulldozer::
# 576 "data/maps/Route102/scripts.pory"
	lock
# 577 "data/maps/Route102/scripts.pory"
	msgbox Route102Bulldozer_Text_0
# 579 "data/maps/Route102/scripts.pory"
	release
	return


Route102Crane::
# 583 "data/maps/Route102/scripts.pory"
	lock
# 584 "data/maps/Route102/scripts.pory"
	msgbox Route102Crane_Text_0
# 585 "data/maps/Route102/scripts.pory"
	release
	return


Route102Beams::
# 589 "data/maps/Route102/scripts.pory"
	lock
# 590 "data/maps/Route102/scripts.pory"
	msgbox Route102Beams_Text_0
# 591 "data/maps/Route102/scripts.pory"
	release
	return


Route102CautionSign::
# 595 "data/maps/Route102/scripts.pory"
	lock
# 596 "data/maps/Route102/scripts.pory"
	msgbox Route102CautionSign_Text_0
# 597 "data/maps/Route102/scripts.pory"
	release
	return


Route102Cactus::
# 601 "data/maps/Route102/scripts.pory"
	lock
# 602 "data/maps/Route102/scripts.pory"
	msgbox Route102Cactus_Text_0
# 603 "data/maps/Route102/scripts.pory"
	release
	return


Route102Asphalt::
# 607 "data/maps/Route102/scripts.pory"
	lock
# 608 "data/maps/Route102/scripts.pory"
	msgbox Route102Asphalt_Text_0
# 609 "data/maps/Route102/scripts.pory"
	release
	return


Route102ScammerApproach0::
# 614 "data/maps/Route102/scripts.pory"
	lock
# 615 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 616 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 617 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 618 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 619 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 621 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102ScammerApproach1::
# 626 "data/maps/Route102/scripts.pory"
	lock
# 627 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 628 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 629 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 630 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 631 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 633 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach1_Movement_0
# 634 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 635 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102ScammerApproach2::
# 640 "data/maps/Route102/scripts.pory"
	lock
# 641 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 642 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 643 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 644 "data/maps/Route102/scripts.pory"
	waitmovement
# 645 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 647 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach2_Movement_0
# 648 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 649 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102ScammerApproach3::
# 654 "data/maps/Route102/scripts.pory"
	lock
# 655 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 656 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 657 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 658 "data/maps/Route102/scripts.pory"
	waitmovement
# 659 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 661 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach3_Movement_0
# 662 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 663 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102ScammerApproach4::
# 668 "data/maps/Route102/scripts.pory"
	lock
# 669 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 670 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 671 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 672 "data/maps/Route102/scripts.pory"
	waitmovement
# 673 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 675 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach4_Movement_0
# 676 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 677 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102Scammer::
# 682 "data/maps/Route102/scripts.pory"
	lock
# 683 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 684 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ConstructionWorkerMTrapinch_Movement_0
# 685 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 687 "data/maps/Route102/scripts.pory"
	compare VAR_102CANDYSCAMMER, 0
	goto_if_eq Route102Scammer_2
Route102Scammer_1:
# 746 "data/maps/Route102/scripts.pory"
	compare VAR_102CANDYSCAMMER, 1
	goto_if_eq Route102Scammer_5
Route102Scammer_4:
# 798 "data/maps/Route102/scripts.pory"
endofroute102scammer:
# 799 "data/maps/Route102/scripts.pory"
	release
	return

Route102Scammer_2:
# 690 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 692 "data/maps/Route102/scripts.pory"
route102scammerafterapproach:
# 693 "data/maps/Route102/scripts.pory"
	closemessage
# 694 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102Scammer_Movement_0
# 695 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 696 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_0
# 698 "data/maps/Route102/scripts.pory"
scammer102candybuychoice:
# 699 "data/maps/Route102/scripts.pory"
	showmoneybox 18, 0
# 700 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Scammer_Text_1, Route102Scammer_Text_2
# 701 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scammer_8
Route102Scammer_7:
# 731 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scammer_13
	goto Route102Scammer_1

Route102Scammer_5:
# 749 "data/maps/Route102/scripts.pory"
	goto_if_unset confronted102candyscammer, Route102Scammer_10
# 791 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_17
# 793 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_4

Route102Scammer_8:
# 702 "data/maps/Route102/scripts.pory"
	checkmoney 500
# 703 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route102Scammer_16
Route102Scammer_15:
# 722 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route102Scammer_23
	goto Route102Scammer_7

Route102Scammer_10:
# 751 "data/maps/Route102/scripts.pory"
	goto_if_set boughtrarecandyfrom102scammer, Route102Scammer_20
Route102Scammer_18:
# 757 "data/maps/Route102/scripts.pory"
	goto_if_set boughtrarecandyfrom102scammer, Route102Scammer_26
	goto Route102Scammer_4

Route102Scammer_13:
# 732 "data/maps/Route102/scripts.pory"
	hidemoneybox
# 733 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_6
# 734 "data/maps/Route102/scripts.pory"
	setvar VAR_102CANDYSCAMMER, 1
# 735 "data/maps/Route102/scripts.pory"
	clearflag devonreturnstooldale
# 736 "data/maps/Route102/scripts.pory"
	clearflag warehousemanagerandabra
# 737 "data/maps/Route102/scripts.pory"
	setflag warehousemanchine
# 738 "data/maps/Route102/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEMONEYBAGS
# 739 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_1

Route102Scammer_16:
# 704 "data/maps/Route102/scripts.pory"
	removemoney 500
# 705 "data/maps/Route102/scripts.pory"
	updatemoneybox
# 706 "data/maps/Route102/scripts.pory"
	playse SE_SHOP
# 707 "data/maps/Route102/scripts.pory"
	waitse
# 708 "data/maps/Route102/scripts.pory"
	hidemoneybox
# 710 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_3
# 711 "data/maps/Route102/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS
# 712 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_4
# 713 "data/maps/Route102/scripts.pory"
	setflag boughtrarecandyfrom102scammer
# 714 "data/maps/Route102/scripts.pory"
	setvar VAR_102CANDYSCAMMER, 1
# 715 "data/maps/Route102/scripts.pory"
	clearflag devonreturnstooldale
# 716 "data/maps/Route102/scripts.pory"
	clearflag warehousemanagerandabra
# 717 "data/maps/Route102/scripts.pory"
	setflag warehousemanchine
# 718 "data/maps/Route102/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEMONEYBAGS
# 719 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_15

Route102Scammer_19:
# 753 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_7
# 754 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_18

Route102Scammer_20:
	checkitem ITEM_EXP_CANDY_XS
# 0 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route102Scammer_19
	goto Route102Scammer_18

Route102Scammer_23:
# 723 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_5
# 726 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_7

Route102Scammer_25:
# 759 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_8
# 760 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Scammer_Text_9, Route102Scammer_Text_10
# 761 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scammer_30
Route102Scammer_29:
# 782 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scammer_32
	goto Route102Scammer_4

Route102Scammer_26:
	checkitem ITEM_EXP_CANDY_XS
# 0 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route102Scammer_25
	goto Route102Scammer_4

Route102Scammer_30:
# 763 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_11
# 764 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Scammer_Text_12, Route102Scammer_Text_13
# 765 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scammer_35
Route102Scammer_34:
# 775 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scammer_37
	goto Route102Scammer_29

Route102Scammer_32:
# 783 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_16
# 784 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_4

Route102Scammer_35:
# 766 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_14
# 772 "data/maps/Route102/scripts.pory"
	setflag confronted102candyscammer
# 773 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_34

Route102Scammer_37:
# 776 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_15
# 777 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_29


# 189 "data/maps/Route102/scripts.pory"
Route102ConstructionWorkerMTrapinch_Movement_0:
# 189 "data/maps/Route102/scripts.pory"
	face_player
	step_end

# 193 "data/maps/Route102/scripts.pory"
Route102ConstructionWorkerMTrapinch_Movement_1:
# 193 "data/maps/Route102/scripts.pory"
	face_down
	step_end

# 358 "data/maps/Route102/scripts.pory"
Route103ScientistFoundTracks_Movement_0:
# 358 "data/maps/Route102/scripts.pory"
	face_player
# 358 "data/maps/Route102/scripts.pory"
	emote_exclamation_mark
	step_end

# 363 "data/maps/Route102/scripts.pory"
Route103ScientistFoundTracks_Movement_1:
# 363 "data/maps/Route102/scripts.pory"
	walk_up
# 363 "data/maps/Route102/scripts.pory"
	walk_up
# 363 "data/maps/Route102/scripts.pory"
	walk_up
# 363 "data/maps/Route102/scripts.pory"
	face_right
	step_end

# 403 "data/maps/Route102/scripts.pory"
Route102Scientist_Movement_0:
# 403 "data/maps/Route102/scripts.pory"
	face_away_player
	step_end

# 522 "data/maps/Route102/scripts.pory"
Route102ScientistNottoGreatCrater_Movement_0:
# 522 "data/maps/Route102/scripts.pory"
	walk_up
	step_end

# 534 "data/maps/Route102/scripts.pory"
Route102ScientistNottoPetalburg_Movement_0:
# 534 "data/maps/Route102/scripts.pory"
	walk_right
	step_end

# 546 "data/maps/Route102/scripts.pory"
Route102ScientistNottoOldale_Movement_0:
# 546 "data/maps/Route102/scripts.pory"
	walk_left
	step_end

# 617 "data/maps/Route102/scripts.pory"
Route102ScammerApproach0_Movement_0:
# 617 "data/maps/Route102/scripts.pory"
	emote_exclamation_mark
	step_end

# 633 "data/maps/Route102/scripts.pory"
Route102ScammerApproach1_Movement_0:
# 633 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 647 "data/maps/Route102/scripts.pory"
Route102ScammerApproach2_Movement_0:
# 647 "data/maps/Route102/scripts.pory"
	walk_down
# 647 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 661 "data/maps/Route102/scripts.pory"
Route102ScammerApproach3_Movement_0:
# 661 "data/maps/Route102/scripts.pory"
	walk_down
# 661 "data/maps/Route102/scripts.pory"
	walk_down
# 661 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 675 "data/maps/Route102/scripts.pory"
Route102ScammerApproach4_Movement_0:
# 675 "data/maps/Route102/scripts.pory"
	walk_down
# 675 "data/maps/Route102/scripts.pory"
	walk_down
# 675 "data/maps/Route102/scripts.pory"
	walk_down
# 675 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 694 "data/maps/Route102/scripts.pory"
Route102Scammer_Movement_0:
# 694 "data/maps/Route102/scripts.pory"
	face_up
	step_end

Route102ConstructionWorkerMTrapinch_Text_0:
# 192 "data/maps/Route102/scripts.pory"
	.string "Traaaa!$"

Route102ConstructionWorkerFDiglett_Text_0:
# 203 "data/maps/Route102/scripts.pory"
	.string "Di-diiiig!$"

Route102_ConstructionWorkerMBattle_Text_0:
# 215 "data/maps/Route102/scripts.pory"
	.string "Thanks for listening to my drama. Let's\n"
	.string "talk again sometime.$"

Route102_ConstructionWorkerMRegister_Text_0:
# 229 "data/maps/Route102/scripts.pory"
	.string "Everything went downhill after I tried\n"
	.string "to gift this “Turtwig” to my son…\p"
	.string "He shunned me, my wife divorced me, I\n"
	.string "lost my job…\p"
	.string "Now I'm all alone with Trapinch. We're\n"
	.string "both failures, but at least we got each\l"
	.string "other.\p"
	.string "... wow, venting to someone really\n"
	.string "helped. Let's do this again.$"

Route102_ConstructionWorkerMRematch_Text_0:
# 240 "data/maps/Route102/scripts.pory"
	.string "TEST.$"

Route102_ConstructionWorkerFBattle_Text_0:
# 266 "data/maps/Route102/scripts.pory"
	.string "Rebels kept vandalizing the bridge and\n"
	.string "harrasing us builders.\p"
	.string "It was costly for Devon, so they\n"
	.string "stopped construction “till further\l"
	.string "notice”.\p"
	.string "Bah, I should stop waiting and get a new\n"
	.string "job.$"

Route102_ConstructionWorkerFRegister_Text_0:
# 277 "data/maps/Route102/scripts.pory"
	.string "This was way too short a distraction.\n"
	.string "Let's prolong it a bit with some...\p"
	.string "Devon Profile exchange!$"

Route102Weathermon_Text_0:
# 320 "data/maps/Route102/scripts.pory"
	.string "The Sandshrew is just enjoying the\n"
	.string "sandstorm. Battle it?$"

Route102Weathermon_Text_1:
# 321 "data/maps/Route102/scripts.pory"
	.string "Yes$"

Route102Weathermon_Text_2:
# 321 "data/maps/Route102/scripts.pory"
	.string "No$"

Route103ScientistFoundTracks_Text_0:
# 360 "data/maps/Route102/scripts.pory"
	.string "Halt a moment, my dear fellow! Those\n"
	.string "marks on the ground...$"

Route103ScientistFoundTracks_Text_1:
# 367 "data/maps/Route102/scripts.pory"
	.string "As I thought... they are the\n"
	.string "unmistakable footprints of a Keckleon!\p"
	.string "Certainly not the Pokémon we are\n"
	.string "looking for - in fact, I was not even\l"
	.string "aware they lived in these parts...\p"
	.string "And that, in itself, is a promising lead.\p"
	.string "Pray follow the tracks, for they may\n"
	.string "lead us to a yet uncharted spot.$"

Route102Scientist_Text_0:
# 381 "data/maps/Route102/scripts.pory"
	.string "You are returned, which fills my heart\n"
	.string "with renewed hope!\p"
	.string "Will you assist me with the search of\n"
	.string "the to-be-Safened Pokémon?$"

Route102Scientist_Text_1:
# 388 "data/maps/Route102/scripts.pory"
	.string "Where is it, where is it...?$"

Route102Scientist_Text_2:
# 393 "data/maps/Route102/scripts.pory"
	.string "Oh, hello there lad. I thought they had\n"
	.string "enclosed the road for me...$"

Route102Scientist_Text_3:
# 398 "data/maps/Route102/scripts.pory"
	.string "But this is most fortunate. You see, I\n"
	.string "work for Devon Co.'s Safemon\l"
	.string "Department.\p"
	.string "I am here to acquire a dangerous\n"
	.string "Pokémon specimen, so that we at Devon\l"
	.string "Co. may study it and turn it into a\l"
	.string "Safemon.\p"
	.string "Only thing is, this specimen possesses\n"
	.string "telepathic powers.$"

Route102Scientist_Text_4:
# 405 "data/maps/Route102/scripts.pory"
	.string "I theorize it's reading in my mind the\n"
	.string "desire to capture and study it, and\l"
	.string "thus giving me a wide berth.$"

Route102Scientist_Text_5:
# 410 "data/maps/Route102/scripts.pory"
	.string "Luckily, according to my theory, if I\n"
	.string "were to follow someone who harbors no\l"
	.string "such desire...\p"
	.string "Then my thoughts may be cloaked behind\n"
	.string "theirs, and the Pokémon may reveal\l"
	.string "itself.\p"
	.string "You, who seem of rather... absent mind,\n"
	.string "should prove the perfect candidate to\l"
	.string "test my theory.\p"
	.string "I am therefore compelled to ask for\n"
	.string "your assistance.\p"
	.string "I would duly compensate you for your\n"
	.string "time, of course. What do you say?$"

Route102Scientist_Text_6:
# 418 "data/maps/Route102/scripts.pory"
	.string "Help$"

Route102Scientist_Text_7:
# 418 "data/maps/Route102/scripts.pory"
	.string "Don't help$"

Route102Scientist_Text_8:
# 419 "data/maps/Route102/scripts.pory"
	.string "That's splendid! Together we shall take\n"
	.string "the next step to make Hoenn a safer\l"
	.string "place.\p"
	.string "Lead the way then, kind youth. I shall\n"
	.string "follow.\p"
	.string "Ah, and pray do not waste time combing\n"
	.string "through the tall grass or the deep\l"
	.string "sand.\p"
	.string "I have found no footprints of the\n"
	.string "specimen in these places, and thus I\l"
	.string "conclude its lair must be in a secret\l"
	.string "enclave I am yet to discover.$"

Route102Scientist_Text_9:
# 432 "data/maps/Route102/scripts.pory"
	.string "Ah, most unfortunate... but I\n"
	.string "understand.\p"
	.string "You must be in a hurry, or have moral\n"
	.string "concerns.\p"
	.string "Still, if you were to reconsider, I would\n"
	.string "be most grateful, for this road is\l"
	.string "barely transited.\p"
	.string "If you change your mind, let us\n"
	.string "rendezvous here anew. Take care.$"

Route102Scientistfollowchat_Text_0:
# 447 "data/maps/Route102/scripts.pory"
	.string "Yes? What is it, my young helper?$"

Route102Scientistfollowchat_Text_1:
# 449 "data/maps/Route102/scripts.pory"
	.string "Where to?$"

Route102Scientistfollowchat_Text_2:
# 449 "data/maps/Route102/scripts.pory"
	.string "Which Pokémon is it?$"

Route102Scientistfollowchat_Text_3:
# 449 "data/maps/Route102/scripts.pory"
	.string "All good?$"

Route102Scientistfollowchat_Text_4:
# 449 "data/maps/Route102/scripts.pory"
	.string "I'm leaving$"

Route102Scientistfollowchat_Text_5:
# 449 "data/maps/Route102/scripts.pory"
	.string "Nevermind$"

Route102Scientistfollowchat_Text_6:
# 451 "data/maps/Route102/scripts.pory"
	.string "I wish I could offer such guidance. All I\n"
	.string "can say is I have examined all the spots\l"
	.string "where Pokémon live in the vicinity.\p"
	.string "... barring, that is, the half-built,\n"
	.string "man-made structures.\p"
	.string "Could it have been a flagrant\n"
	.string "oversight...?$"

Route102Scientistfollowchat_Text_7:
# 457 "data/maps/Route102/scripts.pory"
	.string "Of course, how oblivious of me... the\n"
	.string "Pokémon I am looking for is a Ralts.\p"
	.string "I have been told certain specimens of\n"
	.string "this species underwent a dangerous\l"
	.string "mutation after the war, so its Safening\l"
	.string "is of the utmost priority.$"

Route102Scientistfollowchat_Text_8:
# 462 "data/maps/Route102/scripts.pory"
	.string "I see you possess a Devon Dex. Let me\n"
	.string "register the Pokémon's visual data in\l"
	.string "it.$"

Route102Scientistfollowchat_Text_9:
# 478 "data/maps/Route102/scripts.pory"
	.string "You should be able to see it now. Entry\n"
	.string "98. It may prove paramount in the\l"
	.string "search.$"

Route102Scientistfollowchat_Text_10:
# 485 "data/maps/Route102/scripts.pory"
	.string "Ah, it's kind of you to worry about me.\n"
	.string "Possibly on account of my age?\p"
	.string "They warned me of the... “contrarian”\n"
	.string "disposition of the inhabitans of these\l"
	.string "parts.\p"
	.string "But it seems said concerns were based\n"
	.string "on foundless prejudice.\p"
	.string "To answer your question - I am hale. Let\n"
	.string "us continue our search.$"

Route102Scientistfollowchat_Text_11:
# 492 "data/maps/Route102/scripts.pory"
	.string "Truly? That's most regrettable... I felt\n"
	.string "we were quite close to our goal.\p"
	.string "I appreciate your time nonetheless. If\n"
	.string "you can spare some more, I shall be\l"
	.string "where we first met.$"

Route102Scientistfollowchat_Text_12:
# 509 "data/maps/Route102/scripts.pory"
	.string "Pray do not dispair. We shall find the\n"
	.string "specimen in time.$"

Route102ScientistNottoGreatCrater_Text_0:
# 518 "data/maps/Route102/scripts.pory"
	.string "My young helper, this way is to the\n"
	.string "Great Crater!\p"
	.string "A novel habitat worthy of research, to\n"
	.string "be sure...\p"
	.string "But the chances to find our specimen\n"
	.string "there are decidedly slim.\p"
	.string "Before considering new enclaves of\n"
	.string "search, let us first comb this area\l"
	.string "thoroughly.$"

Route102ScientistNottoPetalburg_Text_0:
# 531 "data/maps/Route102/scripts.pory"
	.string "My young helper, this way is to\n"
	.string "Petalburg City!\p"
	.string "The chances to find our specimen there\n"
	.string "are decidedly slim.\p"
	.string "Before considering new enclaves of\n"
	.string "search, let us first comb this area\l"
	.string "thoroughly.$"

Route102ScientistNottoOldale_Text_0:
# 543 "data/maps/Route102/scripts.pory"
	.string "My young helper, this way is to Oldale\n"
	.string "Town!\p"
	.string "The chances to find our specimen there\n"
	.string "are decidedly slim.\p"
	.string "Before considering new enclaves of\n"
	.string "search, let us first comb this area\l"
	.string "thoroughly.$"

Route102ConstructionShedSign_Text_0:
# 554 "data/maps/Route102/scripts.pory"
	.string "Road 002 Construction Shed.\n"
	.string "{COLOR RED}Authorized Personnel Only.$"

Route102OldaleSign_Text_0:
# 559 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} East - Oldale Town.$"

Route102Wheelbarrow_Text_0:
# 565 "data/maps/Route102/scripts.pory"
	.string "A wheelbarrow that's been left behind.$"

Route102Excavator_Text_0:
# 571 "data/maps/Route102/scripts.pory"
	.string "An excavating machine. The elements\n"
	.string "have began to damage the paintjob.$"

Route102Bulldozer_Text_0:
# 577 "data/maps/Route102/scripts.pory"
	.string "A bulldozer. There's no surrounding\n"
	.string "tracks - must have been stil for some\l"
	.string "time.$"

Route102Crane_Text_0:
# 584 "data/maps/Route102/scripts.pory"
	.string "A mobile crane. It's somewhat sinked in\n"
	.string "the sand.$"

Route102Beams_Text_0:
# 590 "data/maps/Route102/scripts.pory"
	.string "A tower of construction beams. A\n"
	.string "promise undelivered.$"

Route102CautionSign_Text_0:
# 596 "data/maps/Route102/scripts.pory"
	.string "A caution sign. It serves no purpose\n"
	.string "now.$"

Route102Cactus_Text_0:
# 602 "data/maps/Route102/scripts.pory"
	.string "A cactus. It seems to be thriving in the\n"
	.string "arid route.$"

Route102Asphalt_Text_0:
# 608 "data/maps/Route102/scripts.pory"
	.string "Seems like some spilled asphalt that\n"
	.string "has solidified.$"

Route102ScammerApproach0_Text_0:
# 619 "data/maps/Route102/scripts.pory"
	.string "Woah there friend! Where are you going\n"
	.string "so fast?\p"
	.string "Settle down, enjoy life a little!$"

Route102Scammer_Text_0:
# 696 "data/maps/Route102/scripts.pory"
	.string "Say, what about a Rare Candy to\n"
	.string "sweeten your day?\p"
	.string "It'll make your Pokémon stronger! 500¥\n"
	.string "each!$"

Route102Scammer_Text_1:
# 700 "data/maps/Route102/scripts.pory"
	.string "Buy one$"

Route102Scammer_Text_2:
# 700 "data/maps/Route102/scripts.pory"
	.string "Don't buy$"

Route102Scammer_Text_3:
# 710 "data/maps/Route102/scripts.pory"
	.string "Thank you for your purchase - here you\n"
	.string "go!$"

Route102Scammer_Text_4:
# 712 "data/maps/Route102/scripts.pory"
	.string "Let me know how your Pokémon like it!$"

Route102Scammer_Text_5:
# 723 "data/maps/Route102/scripts.pory"
	.string "What... you don't even have 500¥ on you\n"
	.string "pal?\p"
	.string "Sucks to be you! Hey, free advice: I\n"
	.string "heard the Devon staff is back at Oldale\l"
	.string "Warehouse.\p"
	.string "Maybe you can get a job there!$"

Route102Scammer_Text_6:
# 733 "data/maps/Route102/scripts.pory"
	.string "You're going to let this chance pass\n"
	.string "by? Well... your loss!$"

Route102Scammer_Text_7:
# 753 "data/maps/Route102/scripts.pory"
	.string "You still have that candy on you eh?\n"
	.string "Saving it for a special occassion?$"

Route102Scammer_Text_8:
# 759 "data/maps/Route102/scripts.pory"
	.string "Hm? What's wrong? You look\n"
	.string "disappointed.$"

Route102Scammer_Text_9:
# 760 "data/maps/Route102/scripts.pory"
	.string "You're a scammer!$"

Route102Scammer_Text_10:
# 760 "data/maps/Route102/scripts.pory"
	.string "It's nothing$"

Route102Scammer_Text_11:
# 763 "data/maps/Route102/scripts.pory"
	.string "Woah there pal - that's some serious\n"
	.string "accusation! What do you mean!?$"

Route102Scammer_Text_12:
# 764 "data/maps/Route102/scripts.pory"
	.string "It only healed 1 HP$"

Route102Scammer_Text_13:
# 764 "data/maps/Route102/scripts.pory"
	.string "Forget about it$"

Route102Scammer_Text_14:
# 766 "data/maps/Route102/scripts.pory"
	.string "1 HP? And what is an “HP” exactly?\n"
	.string "What? “Health Points” you say?\p"
	.string "Listen kid, I don't have the foggiest of\n"
	.string "what you're talking about.\p"
	.string "You're saying you can SEE a Pokémon's\n"
	.string "health in NUMBERS?\p"
	.string "That's stupid. This isn't a videogame!\n"
	.string "But Pokémon get stronger with these\l"
	.string "candies!\p"
	.string "If you can't tell the difference, it\n"
	.string "just means you need to feed them more\l"
	.string "candies!$"

Route102Scammer_Text_15:
# 776 "data/maps/Route102/scripts.pory"
	.string "Bah, stop messing around, I have no time\n"
	.string "for jokes!$"

Route102Scammer_Text_16:
# 783 "data/maps/Route102/scripts.pory"
	.string "Well, then be on your way. I'm on the\n"
	.string "lookout for customers!$"

Route102Scammer_Text_17:
# 791 "data/maps/Route102/scripts.pory"
	.string "You slandered my candies and my\n"
	.string "honesty, so I don't want to do more\l"
	.string "business with you.\p"
	.string "That includes refunds!$"

ConstructionWorkerM102_Intro::
# 245 "data/maps/Route102/scripts.pory"
	.string "I wanted to buy my son a Turtwig for his \nbirthday...\pAnd a con artist sold me a Trapinch\ndisguised as a Turtwig!\pLet me see if it can at least fight!$"

ConstructionWorkerM102_Outro::
# 249 "data/maps/Route102/scripts.pory"
	.string "Guess that's a no...$"

ConstructionWorkerM102_Intro2::
# 252 "data/maps/Route102/scripts.pory"
	.string "There you are - I've been preparing\nmy counterattack! CHAAARGE!$"

ConstructionWorkerM102_Outro2::
# 255 "data/maps/Route102/scripts.pory"
	.string "... I surrender. Again.$"

ConstructionWorkerF102_Intro::
# 291 "data/maps/Route102/scripts.pory"
	.string "Another day with nothing to do... just\nwhen is construction resuming!? \pPlease battle me, or I'll die of\nboredom!$"

ConstructionWorkerF102_Outro::
# 295 "data/maps/Route102/scripts.pory"
	.string "Well, that was some short-lived fun.\pCouldn't you beat me more slowly?$"

ConstructionWorkerF102_Intro2::
# 298 "data/maps/Route102/scripts.pory"
	.string "There you are - I've been preparing\nmy counterattack! CHAAARGE!$"

ConstructionWorkerF102_Outro2::
# 301 "data/maps/Route102/scripts.pory"
	.string "... I surrender. Again.$"
