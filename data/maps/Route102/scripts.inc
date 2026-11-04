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
	map_script MAP_SCRIPT_ON_TRANSITION, Route102MapscriptBundle
# 115 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route102MapscriptBundle
	.byte 0


Route102MapscriptBundle::
# 119 "data/maps/Route102/scripts.pory"
	compare VAR_ROUTE102_WEATHER, 3
	goto_if_eq Route102MapscriptBundle_2
Route102MapscriptBundle_1:
# 122 "data/maps/Route102/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route102MapscriptBundle_5
Route102MapscriptBundle_4:
# 125 "data/maps/Route102/scripts.pory"
	random 10
# 126 "data/maps/Route102/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 128 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 129 "data/maps/Route102/scripts.pory"
	case 0, Route102MapscriptBundle_8
# 130 "data/maps/Route102/scripts.pory"
	case 1, Route102MapscriptBundle_9
# 131 "data/maps/Route102/scripts.pory"
	case 2, Route102MapscriptBundle_10
# 132 "data/maps/Route102/scripts.pory"
	case 3, Route102MapscriptBundle_11
# 133 "data/maps/Route102/scripts.pory"
	case 4, Route102MapscriptBundle_12
# 134 "data/maps/Route102/scripts.pory"
	case 5, Route102MapscriptBundle_13
# 135 "data/maps/Route102/scripts.pory"
	case 6, Route102MapscriptBundle_14
# 136 "data/maps/Route102/scripts.pory"
	case 7, Route102MapscriptBundle_15
# 137 "data/maps/Route102/scripts.pory"
	case 8, Route102MapscriptBundle_16
# 138 "data/maps/Route102/scripts.pory"
	case 9, Route102MapscriptBundle_17
# 139 "data/maps/Route102/scripts.pory"
	case 10, Route102MapscriptBundle_18
	return

Route102MapscriptBundle_2:
# 120 "data/maps/Route102/scripts.pory"
	clearflag route102weathermon
	goto Route102MapscriptBundle_1

Route102MapscriptBundle_5:
# 123 "data/maps/Route102/scripts.pory"
	goto Route102TVWeather
	goto Route102MapscriptBundle_4

Route102MapscriptBundle_8:
# 129 "data/maps/Route102/scripts.pory"
	goto Route102EndSandtorm
	return

Route102MapscriptBundle_9:
# 130 "data/maps/Route102/scripts.pory"
	goto Route102EndSandtorm
	return

Route102MapscriptBundle_10:
# 131 "data/maps/Route102/scripts.pory"
	goto Route102EndSandtorm
	return

Route102MapscriptBundle_11:
# 132 "data/maps/Route102/scripts.pory"
	goto Route102EndSandtorm
	return

Route102MapscriptBundle_12:
# 133 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

Route102MapscriptBundle_13:
# 134 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

Route102MapscriptBundle_14:
# 135 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

Route102MapscriptBundle_15:
# 136 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

Route102MapscriptBundle_16:
# 137 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

Route102MapscriptBundle_17:
# 138 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return

Route102MapscriptBundle_18:
# 139 "data/maps/Route102/scripts.pory"
	goto Route102Shade
	return


Route102TVWeather::
# 148 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 0, Route102Shade
# 149 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 1, Route102Sandstorm1
# 150 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 2, Route102Sandstorm2
# 151 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_ROUTE102_WEATHER, 3, Route102EndSandtorm
# 153 "data/maps/Route102/scripts.pory"
	release
	return


Route102Shade::
# 157 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SHADE
	return


Route102Sandstorm1::
# 161 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 162 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 2
# 163 "data/maps/Route102/scripts.pory"
	playbgm MUS_RUINSMUSIC, TRUE
	return


Route102Sandstorm2::
# 167 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 168 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 3
# 169 "data/maps/Route102/scripts.pory"
	playbgm MUS_RUINSMUSIC, TRUE
	return


Route102EndSandtorm::
# 173 "data/maps/Route102/scripts.pory"
	setweather WEATHER_SANDSTORM
# 174 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_WEATHER, 0
# 175 "data/maps/Route102/scripts.pory"
	playbgm MUS_RUINSMUSIC, TRUE
	return


PopWeatherMon102::
# 188 "data/maps/Route102/scripts.pory"
	compare VAR_ROUTE102_WEATHER, 3
	goto_if_eq PopWeatherMon102_1
	return

PopWeatherMon102_1:
# 189 "data/maps/Route102/scripts.pory"
	clearflag route102weathermon
	return


Route102ConstructionWorkerMTrapinch::
# 195 "data/maps/Route102/scripts.pory"
	lock
# 196 "data/maps/Route102/scripts.pory"
	applymovement 9, Route102ConstructionWorkerMTrapinch_Movement_0
# 197 "data/maps/Route102/scripts.pory"
	waitmovement 9
# 198 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 199 "data/maps/Route102/scripts.pory"
	msgbox Route102ConstructionWorkerMTrapinch_Text_0
# 200 "data/maps/Route102/scripts.pory"
	applymovement 9, Route102ConstructionWorkerMTrapinch_Movement_1
# 201 "data/maps/Route102/scripts.pory"
	waitmovement 9
# 202 "data/maps/Route102/scripts.pory"
	release
	return


Route102ConstructionWorkerFDiglett::
# 206 "data/maps/Route102/scripts.pory"
	lock
# 207 "data/maps/Route102/scripts.pory"
	applymovement 11, Route102ConstructionWorkerMTrapinch_Movement_0
# 208 "data/maps/Route102/scripts.pory"
	waitmovement 11
# 209 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_DIGLETT, CRY_MODE_NORMAL
# 210 "data/maps/Route102/scripts.pory"
	msgbox Route102ConstructionWorkerFDiglett_Text_0
# 211 "data/maps/Route102/scripts.pory"
	applymovement 11, Route102ConstructionWorkerMTrapinch_Movement_1
# 212 "data/maps/Route102/scripts.pory"
	waitmovement 11
# 213 "data/maps/Route102/scripts.pory"
	release
	return


Route102_ConstructionWorkerMBattle::
# 217 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, ConstructionWorkerM102_Intro, ConstructionWorkerM102_Outro, Route102_ConstructionWorkerMRegister
# 218 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 219 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_ConstructionWorkerMRematch
# 220 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 221 "data/maps/Route102/scripts.pory"
	applymovement 1, Route102ConstructionWorkerMTrapinch_Movement_0
# 222 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerMBattle_Text_0
# 223 "data/maps/Route102/scripts.pory"
	applymovement 9, Route102ConstructionWorkerMTrapinch_Movement_0
# 224 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_TRAPINCH, CRY_MODE_NORMAL
# 225 "data/maps/Route102/scripts.pory"
	msgbox Route102ConstructionWorkerMTrapinch_Text_0
# 226 "data/maps/Route102/scripts.pory"
	applymovement 1, Route102ConstructionWorkerMTrapinch_Movement_1
# 227 "data/maps/Route102/scripts.pory"
	applymovement 9, Route102ConstructionWorkerMTrapinch_Movement_1
# 228 "data/maps/Route102/scripts.pory"
	waitmovement 9
# 229 "data/maps/Route102/scripts.pory"
	release
	end


Route102_ConstructionWorkerMRegister::
# 234 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 235 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 236 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerMRegister_Text_0
# 240 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 241 "data/maps/Route102/scripts.pory"
	release
	end


Route102_ConstructionWorkerMRematch::
# 246 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, ConstructionWorkerM102_Intro2, ConstructionWorkerM102_Outro2
# 247 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerMRematch_Text_0
	end


Route102_ConstructionWorkerFBattle::
# 268 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, ConstructionWorkerF102_Intro, ConstructionWorkerF102_Outro, Route102_ConstructionWorkerFRegister
# 269 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 270 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_ConstructionWorkerFRematch
# 271 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 272 "data/maps/Route102/scripts.pory"
	applymovement 3, Route102ConstructionWorkerMTrapinch_Movement_0
# 273 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerFBattle_Text_0
# 275 "data/maps/Route102/scripts.pory"
	applymovement 3, Route102ConstructionWorkerMTrapinch_Movement_1
# 276 "data/maps/Route102/scripts.pory"
	waitmovement 9
# 277 "data/maps/Route102/scripts.pory"
	release
	end


Route102_ConstructionWorkerFRegister::
# 282 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 283 "data/maps/Route102/scripts.pory"
	waitmovement 1
# 284 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerFRegister_Text_0
# 286 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 287 "data/maps/Route102/scripts.pory"
	release
	end


Route102_ConstructionWorkerFRematch::
# 292 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, ConstructionWorkerF102_Intro2, ConstructionWorkerF102_Outro2
# 293 "data/maps/Route102/scripts.pory"
	msgbox Route102_ConstructionWorkerMRematch_Text_0
	end


Road102BridgeItem::
# 313 "data/maps/Route102/scripts.pory"
	lock
# 314 "data/maps/Route102/scripts.pory"
	finditem ITEM_HARD_STONE
# 317 "data/maps/Route102/scripts.pory"
	removeobject 4
# 318 "data/maps/Route102/scripts.pory"
	releaseall
	return


Route102Weathermon::
# 324 "data/maps/Route102/scripts.pory"
	lock
# 325 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 326 "data/maps/Route102/scripts.pory"
	applymovement 8, Route102ConstructionWorkerMTrapinch_Movement_0
# 327 "data/maps/Route102/scripts.pory"
	msgbox Route102Weathermon_Text_0
# 328 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Weathermon_Text_1, Route102Weathermon_Text_2
# 330 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Weathermon_2
Route102Weathermon_1:
# 351 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Weathermon_5
Route102Weathermon_4:
# 355 "data/maps/Route102/scripts.pory"
endsandshrewinsandstormscript:
# 356 "data/maps/Route102/scripts.pory"
	waitmessage
# 357 "data/maps/Route102/scripts.pory"
	release
	return

Route102Weathermon_2:
# 331 "data/maps/Route102/scripts.pory"
	waitmessage
# 332 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_SANDSHREW, 3
# 333 "data/maps/Route102/scripts.pory"
	dowildbattle
# 334 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 335 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route102Weathermon_7
# 338 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route102Weathermon_8
# 342 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route102Weathermon_9
# 345 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route102Weathermon_10
	goto Route102Weathermon_1

Route102Weathermon_5:
# 352 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_4

Route102Weathermon_7:
# 336 "data/maps/Route102/scripts.pory"
	setflag route102weathermon
	goto Route102Weathermon_1

Route102Weathermon_8:
# 339 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
# 340 "data/maps/Route102/scripts.pory"
	setflag route102weathermon
	goto Route102Weathermon_1

Route102Weathermon_9:
# 343 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_1

Route102Weathermon_10:
# 346 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_1


Route103ScientistFoundTracks::
# 361 "data/maps/Route102/scripts.pory"
	lock
# 362 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 364 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 365 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistFoundTracks_Movement_0
# 367 "data/maps/Route102/scripts.pory"
	msgbox Route103ScientistFoundTracks_Text_0
# 368 "data/maps/Route102/scripts.pory"
	closemessage
# 370 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ScientistFoundTracks_Movement_1
# 371 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistFoundTracks_Movement_1
# 372 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 374 "data/maps/Route102/scripts.pory"
	msgbox Route103ScientistFoundTracks_Text_1
# 378 "data/maps/Route102/scripts.pory"
	setvar VAR_102_SCIENTIST, 2
# 379 "data/maps/Route102/scripts.pory"
	release
	return


Route102Scientist::
# 383 "data/maps/Route102/scripts.pory"
	lock
# 384 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 386 "data/maps/Route102/scripts.pory"
	compare VAR_102_SCIENTIST, 1
	goto_if_eq Route102Scientist_2
Route102Scientist_1:
# 393 "data/maps/Route102/scripts.pory"
	compare VAR_102_SCIENTIST, 0
	goto_if_eq Route102Scientist_5
Route102Scientist_4:
# 446 "data/maps/Route102/scripts.pory"
	release
	return

Route102Scientist_2:
# 387 "data/maps/Route102/scripts.pory"
	applymovement 7, Route102ConstructionWorkerMTrapinch_Movement_0
# 388 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_0
# 390 "data/maps/Route102/scripts.pory"
	goto scientistasksforhelp102
	goto Route102Scientist_1

Route102Scientist_5:
# 394 "data/maps/Route102/scripts.pory"
	setvar VAR_102_SCIENTIST, 1
# 395 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_1
# 396 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 397 "data/maps/Route102/scripts.pory"
	applymovement 7, Route103ScientistFoundTracks_Movement_0
# 398 "data/maps/Route102/scripts.pory"
	checkplayergender
# 399 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route102Scientist_8
Route102Scientist_7:
# 402 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route102Scientist_11
Route102Scientist_10:
# 405 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_3
# 410 "data/maps/Route102/scripts.pory"
	applymovement 7, Route102Scientist_Movement_0
# 412 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_4
# 415 "data/maps/Route102/scripts.pory"
	applymovement 7, Route102ConstructionWorkerMTrapinch_Movement_0
# 417 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_5
# 424 "data/maps/Route102/scripts.pory"
scientistasksforhelp102:
# 425 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Scientist_Text_6, Route102Scientist_Text_7
# 426 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scientist_14
Route102Scientist_13:
# 438 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scientist_16
	goto Route102Scientist_4

Route102Scientist_8:
# 400 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_2
	goto Route102Scientist_7

Route102Scientist_11:
# 403 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_2
	goto Route102Scientist_10

Route102Scientist_14:
# 426 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_8
# 432 "data/maps/Route102/scripts.pory"
	setfollowernpc LOCALID_102_RESEARCHER, FNPC_ALL, Route102Scientistfollowchat, 0
# 433 "data/maps/Route102/scripts.pory"
	removeobject 7
# 434 "data/maps/Route102/scripts.pory"
	setflag researcher102
# 435 "data/maps/Route102/scripts.pory"
	clearflag SanctumWartz
	goto Route102Scientist_13

Route102Scientist_16:
# 439 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_9
# 442 "data/maps/Route102/scripts.pory"
	setflag SanctumWartz
	goto Route102Scientist_4


Route102Scientistfollowchat::
# 451 "data/maps/Route102/scripts.pory"
	lock
# 452 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ConstructionWorkerMTrapinch_Movement_0
# 454 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_0
# 456 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route102Scientistfollowchat_Text_1, Route102Scientistfollowchat_Text_2, Route102Scientistfollowchat_Text_3, Route102Scientistfollowchat_Text_4, Route102Scientistfollowchat_Text_5
# 457 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scientistfollowchat_2
Route102Scientistfollowchat_1:
# 463 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scientistfollowchat_5
Route102Scientistfollowchat_4:
# 491 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route102Scientistfollowchat_8
Route102Scientistfollowchat_7:
# 498 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route102Scientistfollowchat_13
Route102Scientistfollowchat_12:
# 515 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route102Scientistfollowchat_16
Route102Scientistfollowchat_15:
# 518 "data/maps/Route102/scripts.pory"
endofscientistfollow103:
# 519 "data/maps/Route102/scripts.pory"
	release
	return

Route102Scientistfollowchat_2:
# 458 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_6
	goto Route102Scientistfollowchat_1

Route102Scientistfollowchat_5:
# 464 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_7
# 468 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Route102Scientistfollowchat_10
	goto Route102Scientistfollowchat_4

Route102Scientistfollowchat_8:
# 492 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_10
	goto Route102Scientistfollowchat_7

Route102Scientistfollowchat_10:
# 469 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_8
# 471 "data/maps/Route102/scripts.pory"
	setflag researcherin102sawdevondex
# 472 "data/maps/Route102/scripts.pory"
	closemessage
# 474 "data/maps/Route102/scripts.pory"
	playse SE_DEX_SCROLL
# 475 "data/maps/Route102/scripts.pory"
	waitse
# 476 "data/maps/Route102/scripts.pory"
	playse SE_DEX_SCROLL
# 477 "data/maps/Route102/scripts.pory"
	waitse
# 478 "data/maps/Route102/scripts.pory"
	playse SE_DEX_SEARCH
# 479 "data/maps/Route102/scripts.pory"
	waitse
# 480 "data/maps/Route102/scripts.pory"
	playse SE_DEX_PAGE
# 481 "data/maps/Route102/scripts.pory"
	waitse
# 483 "data/maps/Route102/scripts.pory"
	setseenmon SPECIES_WARTZ
# 485 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_9
	goto Route102Scientistfollowchat_4

Route102Scientistfollowchat_13:
# 499 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_11
# 502 "data/maps/Route102/scripts.pory"
	closemessage
# 504 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 505 "data/maps/Route102/scripts.pory"
	destroyfollowernpc
# 506 "data/maps/Route102/scripts.pory"
	addobject 7
# 507 "data/maps/Route102/scripts.pory"
	clearflag researcher102
# 508 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 509 "data/maps/Route102/scripts.pory"
	setvar VAR_102_SCIENTIST, 1
# 510 "data/maps/Route102/scripts.pory"
	goto endofscientistfollow103
	goto Route102Scientistfollowchat_12

Route102Scientistfollowchat_16:
# 516 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_12
	goto Route102Scientistfollowchat_15


Route102ScientistNottoGreatCrater::
# 523 "data/maps/Route102/scripts.pory"
	lock
# 524 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ConstructionWorkerMTrapinch_Movement_0
# 525 "data/maps/Route102/scripts.pory"
	msgbox Route102ScientistNottoGreatCrater_Text_0
# 529 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ScientistNottoGreatCrater_Movement_0
# 530 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102ScientistNottoGreatCrater_Movement_0
# 531 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 532 "data/maps/Route102/scripts.pory"
	release
	return


Route102ScientistNottoPetalburg::
# 536 "data/maps/Route102/scripts.pory"
	lock
# 537 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ConstructionWorkerMTrapinch_Movement_0
# 538 "data/maps/Route102/scripts.pory"
	msgbox Route102ScientistNottoPetalburg_Text_0
# 541 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ScientistNottoPetalburg_Movement_0
# 542 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102ScientistNottoPetalburg_Movement_0
# 543 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 544 "data/maps/Route102/scripts.pory"
	release
	return


Route102ScientistNottoOldale::
# 548 "data/maps/Route102/scripts.pory"
	lock
# 549 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ConstructionWorkerMTrapinch_Movement_0
# 550 "data/maps/Route102/scripts.pory"
	msgbox Route102ScientistNottoOldale_Text_0
# 553 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route102ScientistNottoOldale_Movement_0
# 554 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102ScientistNottoOldale_Movement_0
# 555 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 556 "data/maps/Route102/scripts.pory"
	release
	return


Route102ConstructionShedSign::
# 560 "data/maps/Route102/scripts.pory"
	lock
# 561 "data/maps/Route102/scripts.pory"
	msgbox Route102ConstructionShedSign_Text_0
	return


Route102OldaleSign::
# 565 "data/maps/Route102/scripts.pory"
	lock
# 566 "data/maps/Route102/scripts.pory"
	msgbox Route102OldaleSign_Text_0
# 567 "data/maps/Route102/scripts.pory"
	release
	return


Route102Wheelbarrow::
# 571 "data/maps/Route102/scripts.pory"
	lock
# 572 "data/maps/Route102/scripts.pory"
	msgbox Route102Wheelbarrow_Text_0
# 573 "data/maps/Route102/scripts.pory"
	release
	return


Route102Excavator::
# 577 "data/maps/Route102/scripts.pory"
	lock
# 578 "data/maps/Route102/scripts.pory"
	msgbox Route102Excavator_Text_0
# 579 "data/maps/Route102/scripts.pory"
	release
	return


Route102Bulldozer::
# 583 "data/maps/Route102/scripts.pory"
	lock
# 584 "data/maps/Route102/scripts.pory"
	msgbox Route102Bulldozer_Text_0
# 586 "data/maps/Route102/scripts.pory"
	release
	return


Route102Crane::
# 590 "data/maps/Route102/scripts.pory"
	lock
# 591 "data/maps/Route102/scripts.pory"
	msgbox Route102Crane_Text_0
# 592 "data/maps/Route102/scripts.pory"
	release
	return


Route102Beams::
# 596 "data/maps/Route102/scripts.pory"
	lock
# 597 "data/maps/Route102/scripts.pory"
	msgbox Route102Beams_Text_0
# 598 "data/maps/Route102/scripts.pory"
	release
	return


Route102CautionSign::
# 602 "data/maps/Route102/scripts.pory"
	lock
# 603 "data/maps/Route102/scripts.pory"
	msgbox Route102CautionSign_Text_0
# 604 "data/maps/Route102/scripts.pory"
	release
	return


Route102Cactus::
# 608 "data/maps/Route102/scripts.pory"
	lock
# 609 "data/maps/Route102/scripts.pory"
	msgbox Route102Cactus_Text_0
# 610 "data/maps/Route102/scripts.pory"
	release
	return


Route102Asphalt::
# 614 "data/maps/Route102/scripts.pory"
	lock
# 615 "data/maps/Route102/scripts.pory"
	msgbox Route102Asphalt_Text_0
# 616 "data/maps/Route102/scripts.pory"
	release
	return


Route102ScammerApproach0::
# 621 "data/maps/Route102/scripts.pory"
	lock
# 622 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 623 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 624 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 625 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 626 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 628 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102ScammerApproach1::
# 633 "data/maps/Route102/scripts.pory"
	lock
# 634 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 635 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 636 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 637 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 638 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 640 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach1_Movement_0
# 641 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 642 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102ScammerApproach2::
# 647 "data/maps/Route102/scripts.pory"
	lock
# 648 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 649 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 650 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 651 "data/maps/Route102/scripts.pory"
	waitmovement
# 652 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 654 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach2_Movement_0
# 655 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 656 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102ScammerApproach3::
# 661 "data/maps/Route102/scripts.pory"
	lock
# 662 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 663 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 664 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 665 "data/maps/Route102/scripts.pory"
	waitmovement
# 666 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 668 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach3_Movement_0
# 669 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 670 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102ScammerApproach4::
# 675 "data/maps/Route102/scripts.pory"
	lock
# 676 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 677 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 678 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach0_Movement_0
# 679 "data/maps/Route102/scripts.pory"
	waitmovement
# 680 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 682 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ScammerApproach4_Movement_0
# 683 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 684 "data/maps/Route102/scripts.pory"
	goto route102scammerafterapproach
	return


Route102Scammer::
# 689 "data/maps/Route102/scripts.pory"
	lock
# 690 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 691 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102ConstructionWorkerMTrapinch_Movement_0
# 692 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 694 "data/maps/Route102/scripts.pory"
	compare VAR_102CANDYSCAMMER, 0
	goto_if_eq Route102Scammer_2
Route102Scammer_1:
# 753 "data/maps/Route102/scripts.pory"
	compare VAR_102CANDYSCAMMER, 1
	goto_if_eq Route102Scammer_5
Route102Scammer_4:
# 805 "data/maps/Route102/scripts.pory"
endofroute102scammer:
# 806 "data/maps/Route102/scripts.pory"
	release
	return

Route102Scammer_2:
# 697 "data/maps/Route102/scripts.pory"
	msgbox Route102ScammerApproach0_Text_0
# 699 "data/maps/Route102/scripts.pory"
route102scammerafterapproach:
# 700 "data/maps/Route102/scripts.pory"
	closemessage
# 701 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102Scammer_Movement_0
# 702 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 703 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_0
# 705 "data/maps/Route102/scripts.pory"
scammer102candybuychoice:
# 706 "data/maps/Route102/scripts.pory"
	showmoneybox 18, 0
# 707 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Scammer_Text_1, Route102Scammer_Text_2
# 708 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scammer_8
Route102Scammer_7:
# 738 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scammer_13
	goto Route102Scammer_1

Route102Scammer_5:
# 756 "data/maps/Route102/scripts.pory"
	goto_if_unset confronted102candyscammer, Route102Scammer_10
# 798 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_17
# 800 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_4

Route102Scammer_8:
# 709 "data/maps/Route102/scripts.pory"
	checkmoney 500
# 710 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route102Scammer_16
Route102Scammer_15:
# 729 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route102Scammer_23
	goto Route102Scammer_7

Route102Scammer_10:
# 758 "data/maps/Route102/scripts.pory"
	goto_if_set boughtrarecandyfrom102scammer, Route102Scammer_20
Route102Scammer_18:
# 764 "data/maps/Route102/scripts.pory"
	goto_if_set boughtrarecandyfrom102scammer, Route102Scammer_26
	goto Route102Scammer_4

Route102Scammer_13:
# 739 "data/maps/Route102/scripts.pory"
	hidemoneybox
# 740 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_6
# 741 "data/maps/Route102/scripts.pory"
	setvar VAR_102CANDYSCAMMER, 1
# 742 "data/maps/Route102/scripts.pory"
	clearflag devonreturnstooldale
# 743 "data/maps/Route102/scripts.pory"
	clearflag warehousemanagerandabra
# 744 "data/maps/Route102/scripts.pory"
	setflag warehousemanchine
# 745 "data/maps/Route102/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEMONEYBAGS
# 746 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_1

Route102Scammer_16:
# 711 "data/maps/Route102/scripts.pory"
	removemoney 500
# 712 "data/maps/Route102/scripts.pory"
	updatemoneybox
# 713 "data/maps/Route102/scripts.pory"
	playse SE_SHOP
# 714 "data/maps/Route102/scripts.pory"
	waitse
# 715 "data/maps/Route102/scripts.pory"
	hidemoneybox
# 717 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_3
# 718 "data/maps/Route102/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS
# 719 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_4
# 720 "data/maps/Route102/scripts.pory"
	setflag boughtrarecandyfrom102scammer
# 721 "data/maps/Route102/scripts.pory"
	setvar VAR_102CANDYSCAMMER, 1
# 722 "data/maps/Route102/scripts.pory"
	clearflag devonreturnstooldale
# 723 "data/maps/Route102/scripts.pory"
	clearflag warehousemanagerandabra
# 724 "data/maps/Route102/scripts.pory"
	setflag warehousemanchine
# 725 "data/maps/Route102/scripts.pory"
	setflag FLAG_ITEM_WAREHOUSEMONEYBAGS
# 726 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_15

Route102Scammer_19:
# 760 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_7
# 761 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_18

Route102Scammer_20:
	checkitem ITEM_EXP_CANDY_XS
# 0 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route102Scammer_19
	goto Route102Scammer_18

Route102Scammer_23:
# 730 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_5
# 733 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_7

Route102Scammer_25:
# 766 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_8
# 767 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Scammer_Text_9, Route102Scammer_Text_10
# 768 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scammer_30
Route102Scammer_29:
# 789 "data/maps/Route102/scripts.pory"
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
# 770 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_11
# 771 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Scammer_Text_12, Route102Scammer_Text_13
# 772 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scammer_35
Route102Scammer_34:
# 782 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scammer_37
	goto Route102Scammer_29

Route102Scammer_32:
# 790 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_16
# 791 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_4

Route102Scammer_35:
# 773 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_14
# 779 "data/maps/Route102/scripts.pory"
	setflag confronted102candyscammer
# 780 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_34

Route102Scammer_37:
# 783 "data/maps/Route102/scripts.pory"
	msgbox Route102Scammer_Text_15
# 784 "data/maps/Route102/scripts.pory"
	goto endofroute102scammer
	goto Route102Scammer_29


# 196 "data/maps/Route102/scripts.pory"
Route102ConstructionWorkerMTrapinch_Movement_0:
# 196 "data/maps/Route102/scripts.pory"
	face_player
	step_end

# 200 "data/maps/Route102/scripts.pory"
Route102ConstructionWorkerMTrapinch_Movement_1:
# 200 "data/maps/Route102/scripts.pory"
	face_down
	step_end

# 365 "data/maps/Route102/scripts.pory"
Route103ScientistFoundTracks_Movement_0:
# 365 "data/maps/Route102/scripts.pory"
	face_player
# 365 "data/maps/Route102/scripts.pory"
	emote_exclamation_mark
	step_end

# 370 "data/maps/Route102/scripts.pory"
Route103ScientistFoundTracks_Movement_1:
# 370 "data/maps/Route102/scripts.pory"
	walk_up
# 370 "data/maps/Route102/scripts.pory"
	walk_up
# 370 "data/maps/Route102/scripts.pory"
	walk_up
# 370 "data/maps/Route102/scripts.pory"
	face_right
	step_end

# 410 "data/maps/Route102/scripts.pory"
Route102Scientist_Movement_0:
# 410 "data/maps/Route102/scripts.pory"
	face_away_player
	step_end

# 529 "data/maps/Route102/scripts.pory"
Route102ScientistNottoGreatCrater_Movement_0:
# 529 "data/maps/Route102/scripts.pory"
	walk_up
	step_end

# 541 "data/maps/Route102/scripts.pory"
Route102ScientistNottoPetalburg_Movement_0:
# 541 "data/maps/Route102/scripts.pory"
	walk_right
	step_end

# 553 "data/maps/Route102/scripts.pory"
Route102ScientistNottoOldale_Movement_0:
# 553 "data/maps/Route102/scripts.pory"
	walk_left
	step_end

# 624 "data/maps/Route102/scripts.pory"
Route102ScammerApproach0_Movement_0:
# 624 "data/maps/Route102/scripts.pory"
	emote_exclamation_mark
	step_end

# 640 "data/maps/Route102/scripts.pory"
Route102ScammerApproach1_Movement_0:
# 640 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 654 "data/maps/Route102/scripts.pory"
Route102ScammerApproach2_Movement_0:
# 654 "data/maps/Route102/scripts.pory"
	walk_down
# 654 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 668 "data/maps/Route102/scripts.pory"
Route102ScammerApproach3_Movement_0:
# 668 "data/maps/Route102/scripts.pory"
	walk_down
# 668 "data/maps/Route102/scripts.pory"
	walk_down
# 668 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 682 "data/maps/Route102/scripts.pory"
Route102ScammerApproach4_Movement_0:
# 682 "data/maps/Route102/scripts.pory"
	walk_down
# 682 "data/maps/Route102/scripts.pory"
	walk_down
# 682 "data/maps/Route102/scripts.pory"
	walk_down
# 682 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 701 "data/maps/Route102/scripts.pory"
Route102Scammer_Movement_0:
# 701 "data/maps/Route102/scripts.pory"
	face_up
	step_end

Route102ConstructionWorkerMTrapinch_Text_0:
# 199 "data/maps/Route102/scripts.pory"
	.string "Traaaa!$"

Route102ConstructionWorkerFDiglett_Text_0:
# 210 "data/maps/Route102/scripts.pory"
	.string "Di-diiiig!$"

Route102_ConstructionWorkerMBattle_Text_0:
# 222 "data/maps/Route102/scripts.pory"
	.string "Thanks for listening to my drama. Let's\n"
	.string "talk again sometime.$"

Route102_ConstructionWorkerMRegister_Text_0:
# 236 "data/maps/Route102/scripts.pory"
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
# 247 "data/maps/Route102/scripts.pory"
	.string "TEST.$"

Route102_ConstructionWorkerFBattle_Text_0:
# 273 "data/maps/Route102/scripts.pory"
	.string "Rebels kept vandalizing the bridge and\n"
	.string "harrasing us builders.\p"
	.string "It was costly for Devon, so they\n"
	.string "stopped construction “till further\l"
	.string "notice”.\p"
	.string "Bah, I should stop waiting and get a new\n"
	.string "job.$"

Route102_ConstructionWorkerFRegister_Text_0:
# 284 "data/maps/Route102/scripts.pory"
	.string "This was way too short a distraction.\n"
	.string "Let's prolong it a bit with some...\p"
	.string "Devon Profile exchange!$"

Route102Weathermon_Text_0:
# 327 "data/maps/Route102/scripts.pory"
	.string "The Sandshrew is just enjoying the\n"
	.string "sandstorm. Battle it?$"

Route102Weathermon_Text_1:
# 328 "data/maps/Route102/scripts.pory"
	.string "Yes$"

Route102Weathermon_Text_2:
# 328 "data/maps/Route102/scripts.pory"
	.string "No$"

Route103ScientistFoundTracks_Text_0:
# 367 "data/maps/Route102/scripts.pory"
	.string "Halt a moment, my dear fellow! Those\n"
	.string "marks on the ground...$"

Route103ScientistFoundTracks_Text_1:
# 374 "data/maps/Route102/scripts.pory"
	.string "As I thought... they are the\n"
	.string "unmistakable footprints of a Keckleon!\p"
	.string "Certainly not the Pokémon we are\n"
	.string "looking for - in fact, I was not even\l"
	.string "aware they lived in these parts...\p"
	.string "And that, in itself, is a promising lead.\p"
	.string "Pray follow the tracks, for they may\n"
	.string "lead us to a yet uncharted spot.$"

Route102Scientist_Text_0:
# 388 "data/maps/Route102/scripts.pory"
	.string "You are returned, which fills my heart\n"
	.string "with renewed hope!\p"
	.string "Will you assist me with the search of\n"
	.string "the to-be-Safened Pokémon?$"

Route102Scientist_Text_1:
# 395 "data/maps/Route102/scripts.pory"
	.string "Where is it, where is it...?$"

Route102Scientist_Text_2:
# 400 "data/maps/Route102/scripts.pory"
	.string "Oh, hello there lad. I thought they had\n"
	.string "enclosed the road for me...$"

Route102Scientist_Text_3:
# 405 "data/maps/Route102/scripts.pory"
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
# 412 "data/maps/Route102/scripts.pory"
	.string "I theorize it's reading in my mind the\n"
	.string "desire to capture and study it, and\l"
	.string "thus giving me a wide berth.$"

Route102Scientist_Text_5:
# 417 "data/maps/Route102/scripts.pory"
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
# 425 "data/maps/Route102/scripts.pory"
	.string "Help$"

Route102Scientist_Text_7:
# 425 "data/maps/Route102/scripts.pory"
	.string "Don't help$"

Route102Scientist_Text_8:
# 426 "data/maps/Route102/scripts.pory"
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
# 439 "data/maps/Route102/scripts.pory"
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
# 454 "data/maps/Route102/scripts.pory"
	.string "Yes? What is it, my young helper?$"

Route102Scientistfollowchat_Text_1:
# 456 "data/maps/Route102/scripts.pory"
	.string "Where to?$"

Route102Scientistfollowchat_Text_2:
# 456 "data/maps/Route102/scripts.pory"
	.string "Which Pokémon is it?$"

Route102Scientistfollowchat_Text_3:
# 456 "data/maps/Route102/scripts.pory"
	.string "All good?$"

Route102Scientistfollowchat_Text_4:
# 456 "data/maps/Route102/scripts.pory"
	.string "I'm leaving$"

Route102Scientistfollowchat_Text_5:
# 456 "data/maps/Route102/scripts.pory"
	.string "Nevermind$"

Route102Scientistfollowchat_Text_6:
# 458 "data/maps/Route102/scripts.pory"
	.string "I wish I could offer such guidance. All I\n"
	.string "can say is I have examined all the spots\l"
	.string "where Pokémon live in the vicinity.\p"
	.string "... barring, that is, the half-built,\n"
	.string "man-made structures.\p"
	.string "Could it have been a flagrant\n"
	.string "oversight...?$"

Route102Scientistfollowchat_Text_7:
# 464 "data/maps/Route102/scripts.pory"
	.string "Of course, how oblivious of me... the\n"
	.string "Pokémon I am looking for is a Ralts.\p"
	.string "I have been told certain specimens of\n"
	.string "this species underwent a dangerous\l"
	.string "mutation after the war, so its Safening\l"
	.string "is of the utmost priority.$"

Route102Scientistfollowchat_Text_8:
# 469 "data/maps/Route102/scripts.pory"
	.string "I see you possess a Devon Dex. Let me\n"
	.string "register the Pokémon's visual data in\l"
	.string "it.$"

Route102Scientistfollowchat_Text_9:
# 485 "data/maps/Route102/scripts.pory"
	.string "You should be able to see it now. Entry\n"
	.string "98. It may prove paramount in the\l"
	.string "search.$"

Route102Scientistfollowchat_Text_10:
# 492 "data/maps/Route102/scripts.pory"
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
# 499 "data/maps/Route102/scripts.pory"
	.string "Truly? That's most regrettable... I felt\n"
	.string "we were quite close to our goal.\p"
	.string "I appreciate your time nonetheless. If\n"
	.string "you can spare some more, I shall be\l"
	.string "where we first met.$"

Route102Scientistfollowchat_Text_12:
# 516 "data/maps/Route102/scripts.pory"
	.string "Pray do not dispair. We shall find the\n"
	.string "specimen in time.$"

Route102ScientistNottoGreatCrater_Text_0:
# 525 "data/maps/Route102/scripts.pory"
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
# 538 "data/maps/Route102/scripts.pory"
	.string "My young helper, this way is to\n"
	.string "Petalburg City!\p"
	.string "The chances to find our specimen there\n"
	.string "are decidedly slim.\p"
	.string "Before considering new enclaves of\n"
	.string "search, let us first comb this area\l"
	.string "thoroughly.$"

Route102ScientistNottoOldale_Text_0:
# 550 "data/maps/Route102/scripts.pory"
	.string "My young helper, this way is to Oldale\n"
	.string "Town!\p"
	.string "The chances to find our specimen there\n"
	.string "are decidedly slim.\p"
	.string "Before considering new enclaves of\n"
	.string "search, let us first comb this area\l"
	.string "thoroughly.$"

Route102ConstructionShedSign_Text_0:
# 561 "data/maps/Route102/scripts.pory"
	.string "Road 002 Construction Shed.\n"
	.string "{COLOR RED}Authorized Personnel Only.$"

Route102OldaleSign_Text_0:
# 566 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} East - Oldale Town.$"

Route102Wheelbarrow_Text_0:
# 572 "data/maps/Route102/scripts.pory"
	.string "A wheelbarrow that's been left behind.$"

Route102Excavator_Text_0:
# 578 "data/maps/Route102/scripts.pory"
	.string "An excavating machine. The elements\n"
	.string "have began to damage the paintjob.$"

Route102Bulldozer_Text_0:
# 584 "data/maps/Route102/scripts.pory"
	.string "A bulldozer. There's no surrounding\n"
	.string "tracks - must have been stil for some\l"
	.string "time.$"

Route102Crane_Text_0:
# 591 "data/maps/Route102/scripts.pory"
	.string "A mobile crane. It's somewhat sinked in\n"
	.string "the sand.$"

Route102Beams_Text_0:
# 597 "data/maps/Route102/scripts.pory"
	.string "A tower of construction beams. A\n"
	.string "promise undelivered.$"

Route102CautionSign_Text_0:
# 603 "data/maps/Route102/scripts.pory"
	.string "A caution sign. It serves no purpose\n"
	.string "now.$"

Route102Cactus_Text_0:
# 609 "data/maps/Route102/scripts.pory"
	.string "A cactus. It seems to be thriving in the\n"
	.string "arid route.$"

Route102Asphalt_Text_0:
# 615 "data/maps/Route102/scripts.pory"
	.string "Seems like some spilled asphalt that\n"
	.string "has solidified.$"

Route102ScammerApproach0_Text_0:
# 626 "data/maps/Route102/scripts.pory"
	.string "Woah there friend! Where are you going\n"
	.string "so fast?\p"
	.string "Settle down, enjoy life a little!$"

Route102Scammer_Text_0:
# 703 "data/maps/Route102/scripts.pory"
	.string "Say, what about a Rare Candy to\n"
	.string "sweeten your day?\p"
	.string "It'll make your Pokémon stronger! 500¥\n"
	.string "each!$"

Route102Scammer_Text_1:
# 707 "data/maps/Route102/scripts.pory"
	.string "Buy one$"

Route102Scammer_Text_2:
# 707 "data/maps/Route102/scripts.pory"
	.string "Don't buy$"

Route102Scammer_Text_3:
# 717 "data/maps/Route102/scripts.pory"
	.string "Thank you for your purchase - here you\n"
	.string "go!$"

Route102Scammer_Text_4:
# 719 "data/maps/Route102/scripts.pory"
	.string "Let me know how your Pokémon like it!$"

Route102Scammer_Text_5:
# 730 "data/maps/Route102/scripts.pory"
	.string "What... you don't even have 500¥ on you\n"
	.string "pal?\p"
	.string "Sucks to be you! Hey, free advice: I\n"
	.string "heard the Devon staff is back at Oldale\l"
	.string "Warehouse.\p"
	.string "Maybe you can get a job there!$"

Route102Scammer_Text_6:
# 740 "data/maps/Route102/scripts.pory"
	.string "You're going to let this chance pass\n"
	.string "by? Well... your loss!$"

Route102Scammer_Text_7:
# 760 "data/maps/Route102/scripts.pory"
	.string "You still have that candy on you eh?\n"
	.string "Saving it for a special occassion?$"

Route102Scammer_Text_8:
# 766 "data/maps/Route102/scripts.pory"
	.string "Hm? What's wrong? You look\n"
	.string "disappointed.$"

Route102Scammer_Text_9:
# 767 "data/maps/Route102/scripts.pory"
	.string "You're a scammer!$"

Route102Scammer_Text_10:
# 767 "data/maps/Route102/scripts.pory"
	.string "It's nothing$"

Route102Scammer_Text_11:
# 770 "data/maps/Route102/scripts.pory"
	.string "Woah there pal - that's some serious\n"
	.string "accusation! What do you mean!?$"

Route102Scammer_Text_12:
# 771 "data/maps/Route102/scripts.pory"
	.string "It only healed 1 HP$"

Route102Scammer_Text_13:
# 771 "data/maps/Route102/scripts.pory"
	.string "Forget about it$"

Route102Scammer_Text_14:
# 773 "data/maps/Route102/scripts.pory"
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
# 783 "data/maps/Route102/scripts.pory"
	.string "Bah, stop messing around, I have no time\n"
	.string "for jokes!$"

Route102Scammer_Text_16:
# 790 "data/maps/Route102/scripts.pory"
	.string "Well, then be on your way. I'm on the\n"
	.string "lookout for customers!$"

Route102Scammer_Text_17:
# 798 "data/maps/Route102/scripts.pory"
	.string "You slandered my candies and my\n"
	.string "honesty, so I don't want to do more\l"
	.string "business with you.\p"
	.string "That includes refunds!$"

ConstructionWorkerM102_Intro::
# 252 "data/maps/Route102/scripts.pory"
	.string "I wanted to buy my son a Turtwig for his \nbirthday...\pAnd a con artist sold me a Trapinch\ndisguised as a Turtwig!\pLet me see if it can at least fight!$"

ConstructionWorkerM102_Outro::
# 256 "data/maps/Route102/scripts.pory"
	.string "Guess that's a no...$"

ConstructionWorkerM102_Intro2::
# 259 "data/maps/Route102/scripts.pory"
	.string "There you are - I've been preparing\nmy counterattack! CHAAARGE!$"

ConstructionWorkerM102_Outro2::
# 262 "data/maps/Route102/scripts.pory"
	.string "... I surrender. Again.$"

ConstructionWorkerF102_Intro::
# 298 "data/maps/Route102/scripts.pory"
	.string "Another day with nothing to do... just\nwhen is construction resuming!? \pPlease battle me, or I'll die of\nboredom!$"

ConstructionWorkerF102_Outro::
# 302 "data/maps/Route102/scripts.pory"
	.string "Well, that was some short-lived fun.\pCouldn't you beat me more slowly?$"

ConstructionWorkerF102_Intro2::
# 305 "data/maps/Route102/scripts.pory"
	.string "There you are - I've been preparing\nmy counterattack! CHAAARGE!$"

ConstructionWorkerF102_Outro2::
# 308 "data/maps/Route102/scripts.pory"
	.string "... I surrender. Again.$"
