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


Road102BridgeItem::
# 189 "data/maps/Route102/scripts.pory"
	lock
# 190 "data/maps/Route102/scripts.pory"
	finditem ITEM_HARD_STONE
# 193 "data/maps/Route102/scripts.pory"
	removeobject 4
# 194 "data/maps/Route102/scripts.pory"
	releaseall
	return


Route102Weathermon::
# 200 "data/maps/Route102/scripts.pory"
	lock
# 201 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 202 "data/maps/Route102/scripts.pory"
	applymovement 8, Route102Weathermon_Movement_0
# 203 "data/maps/Route102/scripts.pory"
	msgbox Route102Weathermon_Text_0
# 204 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Weathermon_Text_1, Route102Weathermon_Text_2
# 206 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Weathermon_2
Route102Weathermon_1:
# 227 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Weathermon_5
Route102Weathermon_4:
# 231 "data/maps/Route102/scripts.pory"
endsandshrewinsandstormscript:
# 232 "data/maps/Route102/scripts.pory"
	waitmessage
# 233 "data/maps/Route102/scripts.pory"
	release
	return

Route102Weathermon_2:
# 207 "data/maps/Route102/scripts.pory"
	waitmessage
# 208 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_SANDSHREW, 3
# 209 "data/maps/Route102/scripts.pory"
	dowildbattle
# 210 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 211 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route102Weathermon_7
# 214 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route102Weathermon_8
# 218 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route102Weathermon_9
# 221 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route102Weathermon_10
	goto Route102Weathermon_1

Route102Weathermon_5:
# 228 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_4

Route102Weathermon_7:
# 212 "data/maps/Route102/scripts.pory"
	setflag route102weathermon
	goto Route102Weathermon_1

Route102Weathermon_8:
# 215 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
# 216 "data/maps/Route102/scripts.pory"
	setflag route102weathermon
	goto Route102Weathermon_1

Route102Weathermon_9:
# 219 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_1

Route102Weathermon_10:
# 222 "data/maps/Route102/scripts.pory"
	goto endsandshrewinsandstormscript
	goto Route102Weathermon_1


Route103ScientistFoundTracks::
# 237 "data/maps/Route102/scripts.pory"
	lock
# 238 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 240 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 241 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistFoundTracks_Movement_0
# 243 "data/maps/Route102/scripts.pory"
	msgbox Route103ScientistFoundTracks_Text_0
# 245 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ScientistFoundTracks_Movement_1
# 246 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route103ScientistFoundTracks_Movement_1
# 247 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 249 "data/maps/Route102/scripts.pory"
	msgbox Route103ScientistFoundTracks_Text_1
# 253 "data/maps/Route102/scripts.pory"
	setvar VAR_102_SCIENTIST, 2
# 254 "data/maps/Route102/scripts.pory"
	release
	return


Route102Scientist::
# 258 "data/maps/Route102/scripts.pory"
	lock
# 259 "data/maps/Route102/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 261 "data/maps/Route102/scripts.pory"
	compare VAR_102_SCIENTIST, 1
	goto_if_eq Route102Scientist_2
Route102Scientist_1:
# 267 "data/maps/Route102/scripts.pory"
	compare VAR_102_SCIENTIST, 0
	goto_if_eq Route102Scientist_5
Route102Scientist_4:
# 318 "data/maps/Route102/scripts.pory"
	release
	return

Route102Scientist_2:
# 262 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_0
# 264 "data/maps/Route102/scripts.pory"
	goto scientistasksforhelp102
	goto Route102Scientist_1

Route102Scientist_5:
# 268 "data/maps/Route102/scripts.pory"
	setvar VAR_102_SCIENTIST, 1
# 269 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_1
# 270 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 271 "data/maps/Route102/scripts.pory"
	applymovement 7, Route103ScientistFoundTracks_Movement_0
# 272 "data/maps/Route102/scripts.pory"
	checkplayergender
# 273 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route102Scientist_8
Route102Scientist_7:
# 276 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route102Scientist_11
Route102Scientist_10:
# 279 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_3
# 284 "data/maps/Route102/scripts.pory"
	applymovement 7, Route102Scientist_Movement_0
# 286 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_4
# 289 "data/maps/Route102/scripts.pory"
	applymovement 7, Route102Weathermon_Movement_0
# 291 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_5
# 298 "data/maps/Route102/scripts.pory"
scientistasksforhelp102:
# 299 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Route102Scientist_Text_6, Route102Scientist_Text_7
# 300 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scientist_14
Route102Scientist_13:
# 311 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scientist_16
	goto Route102Scientist_4

Route102Scientist_8:
# 274 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_2
	goto Route102Scientist_7

Route102Scientist_11:
# 277 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_2
	goto Route102Scientist_10

Route102Scientist_14:
# 300 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_8
# 306 "data/maps/Route102/scripts.pory"
	setfollowernpc LOCALID_102_RESEARCHER, FNPC_ALL, Route102Scientistfollowchat, 0
# 307 "data/maps/Route102/scripts.pory"
	removeobject 7
# 308 "data/maps/Route102/scripts.pory"
	setflag researcher102
	goto Route102Scientist_13

Route102Scientist_16:
# 312 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientist_Text_9
	goto Route102Scientist_4


Route102Scientistfollowchat::
# 323 "data/maps/Route102/scripts.pory"
	lock
# 324 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route102Weathermon_Movement_0
# 326 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_0
# 328 "data/maps/Route102/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route102Scientistfollowchat_Text_1, Route102Scientistfollowchat_Text_2, Route102Scientistfollowchat_Text_3, Route102Scientistfollowchat_Text_4, Route102Scientistfollowchat_Text_5
# 329 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route102Scientistfollowchat_2
Route102Scientistfollowchat_1:
# 335 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route102Scientistfollowchat_5
Route102Scientistfollowchat_4:
# 362 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route102Scientistfollowchat_8
Route102Scientistfollowchat_7:
# 369 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route102Scientistfollowchat_13
Route102Scientistfollowchat_12:
# 384 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route102Scientistfollowchat_16
Route102Scientistfollowchat_15:
# 388 "data/maps/Route102/scripts.pory"
	release
	return

Route102Scientistfollowchat_2:
# 330 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_6
	goto Route102Scientistfollowchat_1

Route102Scientistfollowchat_5:
# 336 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_7
# 340 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Route102Scientistfollowchat_10
	goto Route102Scientistfollowchat_4

Route102Scientistfollowchat_8:
# 363 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_10
	goto Route102Scientistfollowchat_7

Route102Scientistfollowchat_10:
# 341 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_8
# 343 "data/maps/Route102/scripts.pory"
	closemessage
# 345 "data/maps/Route102/scripts.pory"
	playse SE_DEX_SCROLL
# 346 "data/maps/Route102/scripts.pory"
	waitse
# 347 "data/maps/Route102/scripts.pory"
	playse SE_DEX_SCROLL
# 348 "data/maps/Route102/scripts.pory"
	waitse
# 349 "data/maps/Route102/scripts.pory"
	playse SE_DEX_SEARCH
# 350 "data/maps/Route102/scripts.pory"
	waitse
# 351 "data/maps/Route102/scripts.pory"
	playse SE_DEX_PAGE
# 352 "data/maps/Route102/scripts.pory"
	waitse
# 354 "data/maps/Route102/scripts.pory"
	setseenmon SPECIES_WARTZ
# 356 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_9
	goto Route102Scientistfollowchat_4

Route102Scientistfollowchat_13:
# 370 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_11
# 374 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 375 "data/maps/Route102/scripts.pory"
	destroyfollowernpc
# 376 "data/maps/Route102/scripts.pory"
	addobject 7
# 377 "data/maps/Route102/scripts.pory"
	clearflag researcher102
# 378 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 379 "data/maps/Route102/scripts.pory"
	setvar VAR_102_SCIENTIST, 0
	goto Route102Scientistfollowchat_12

Route102Scientistfollowchat_16:
# 385 "data/maps/Route102/scripts.pory"
	msgbox Route102Scientistfollowchat_Text_12
	goto Route102Scientistfollowchat_15


# 202 "data/maps/Route102/scripts.pory"
Route102Weathermon_Movement_0:
# 202 "data/maps/Route102/scripts.pory"
	face_player
	step_end

# 241 "data/maps/Route102/scripts.pory"
Route103ScientistFoundTracks_Movement_0:
# 241 "data/maps/Route102/scripts.pory"
	face_player
# 241 "data/maps/Route102/scripts.pory"
	emote_exclamation_mark
	step_end

# 245 "data/maps/Route102/scripts.pory"
Route103ScientistFoundTracks_Movement_1:
# 245 "data/maps/Route102/scripts.pory"
	walk_up
# 245 "data/maps/Route102/scripts.pory"
	walk_up
# 245 "data/maps/Route102/scripts.pory"
	walk_up
# 245 "data/maps/Route102/scripts.pory"
	face_right
	step_end

# 284 "data/maps/Route102/scripts.pory"
Route102Scientist_Movement_0:
# 284 "data/maps/Route102/scripts.pory"
	face_away_player
	step_end

Route102Weathermon_Text_0:
# 203 "data/maps/Route102/scripts.pory"
	.string "The Sandshrew is just enjoying the\n"
	.string "sandstorm. Battle it?$"

Route102Weathermon_Text_1:
# 204 "data/maps/Route102/scripts.pory"
	.string "Yes$"

Route102Weathermon_Text_2:
# 204 "data/maps/Route102/scripts.pory"
	.string "No$"

Route103ScientistFoundTracks_Text_0:
# 243 "data/maps/Route102/scripts.pory"
	.string "Halt a moment, my dear fellow! Those\n"
	.string "marks on the ground...$"

Route103ScientistFoundTracks_Text_1:
# 249 "data/maps/Route102/scripts.pory"
	.string "As I thought... they are the\n"
	.string "unmistakable footprints of a Keckleon!\p"
	.string "Certainly not the Pokémon we are\n"
	.string "looking for - in fact, I was not even\l"
	.string "aware they lived in these parts...\p"
	.string "And that, in itself, is a promising lead.\p"
	.string "Pray follow the tracks, for they may\n"
	.string "lead us to a yet uncharted spot.$"

Route102Scientist_Text_0:
# 262 "data/maps/Route102/scripts.pory"
	.string "You are returned, which fills my heart\n"
	.string "with renewed hope!\p"
	.string "Will you assist me with the search of\n"
	.string "the to-be-Safened Pokémon?$"

Route102Scientist_Text_1:
# 269 "data/maps/Route102/scripts.pory"
	.string "Where is it, where is it...?$"

Route102Scientist_Text_2:
# 274 "data/maps/Route102/scripts.pory"
	.string "Oh, hello there lad. I thought they had\n"
	.string "enclosed the road for me...$"

Route102Scientist_Text_3:
# 279 "data/maps/Route102/scripts.pory"
	.string "But this is most fortunate. You see, I\n"
	.string "work for Devon Co.'s Safemon\l"
	.string "Department.\p"
	.string "I am here to acquire a dangerous\n"
	.string "Pokémon specimen, so that we at Devon\l"
	.string "Co. may study it and convert it into a\l"
	.string "Safemon.\p"
	.string "Only thing is, this specimen possesses\n"
	.string "telepathic powers.$"

Route102Scientist_Text_4:
# 286 "data/maps/Route102/scripts.pory"
	.string "I theorize it's reading in my mind the\n"
	.string "desire to capture and study it, and\l"
	.string "thus giving me a wide berth.$"

Route102Scientist_Text_5:
# 291 "data/maps/Route102/scripts.pory"
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
	.string "time, of course.$"

Route102Scientist_Text_6:
# 299 "data/maps/Route102/scripts.pory"
	.string "Help$"

Route102Scientist_Text_7:
# 299 "data/maps/Route102/scripts.pory"
	.string "Don't help$"

Route102Scientist_Text_8:
# 300 "data/maps/Route102/scripts.pory"
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
# 312 "data/maps/Route102/scripts.pory"
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
# 326 "data/maps/Route102/scripts.pory"
	.string "Yes? What is it, my young helper?$"

Route102Scientistfollowchat_Text_1:
# 328 "data/maps/Route102/scripts.pory"
	.string "Where to?$"

Route102Scientistfollowchat_Text_2:
# 328 "data/maps/Route102/scripts.pory"
	.string "Which Pokémon is it?$"

Route102Scientistfollowchat_Text_3:
# 328 "data/maps/Route102/scripts.pory"
	.string "All good?$"

Route102Scientistfollowchat_Text_4:
# 328 "data/maps/Route102/scripts.pory"
	.string "I'm leaving$"

Route102Scientistfollowchat_Text_5:
# 328 "data/maps/Route102/scripts.pory"
	.string "Nevermind$"

Route102Scientistfollowchat_Text_6:
# 330 "data/maps/Route102/scripts.pory"
	.string "I wish I could offer such guidance. All I\n"
	.string "can say is I have examined all the spots\l"
	.string "where Pokémon live in the vicinity.\p"
	.string "... barring, that is, the half-built,\n"
	.string "man-made structures.\p"
	.string "Could it have been a flagrant\n"
	.string "oversight...?$"

Route102Scientistfollowchat_Text_7:
# 336 "data/maps/Route102/scripts.pory"
	.string "Of course, how oblivious of me... the\n"
	.string "Pokémon I am looking for is a Ralts.\p"
	.string "I have been told certain speciments of\n"
	.string "this species underwent a dangerous\l"
	.string "mutation after the war, so its Safening\l"
	.string "is of the utmost priority.$"

Route102Scientistfollowchat_Text_8:
# 341 "data/maps/Route102/scripts.pory"
	.string "I see you possess a Devon Dex. Let me\n"
	.string "register the Pokémon's visual data in\l"
	.string "it.$"

Route102Scientistfollowchat_Text_9:
# 356 "data/maps/Route102/scripts.pory"
	.string "You should be able to see it now. It may\n"
	.string "prove paramount in the search.$"

Route102Scientistfollowchat_Text_10:
# 363 "data/maps/Route102/scripts.pory"
	.string "Ah, it's kind of you to worry about me.\n"
	.string "Possibly on account of my age?\p"
	.string "They warned me of the... 'contrarian'\n"
	.string "disposition of the inhabitans of these\l"
	.string "parts.\p"
	.string "But it seems said concerns were based\n"
	.string "on foundless prejudice.\p"
	.string "To answer your question - I am hale. Let\n"
	.string "us continue our search.$"

Route102Scientistfollowchat_Text_11:
# 370 "data/maps/Route102/scripts.pory"
	.string "Truly? That's most regrettable... I felt\n"
	.string "we were quite close to our goal.\p"
	.string "I appreciate your time nonetheless. If\n"
	.string "you can spare some more, I shall be\l"
	.string "where we first met.$"

Route102Scientistfollowchat_Text_12:
# 385 "data/maps/Route102/scripts.pory"
	.string "Pray do not dispair. We shall find the\n"
	.string "specimen in time.$"
