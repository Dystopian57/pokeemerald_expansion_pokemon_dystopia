# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"

# 3 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 4 "data/maps/Route103/scripts.pory"
	walk_left
# 5 "data/maps/Route103/scripts.pory"
	walk_down
# 6 "data/maps/Route103/scripts.pory"
	step_end
# 7 "data/maps/Route103/scripts.pory"

# 8 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 9 "data/maps/Route103/scripts.pory"
	jump_2_down
# 10 "data/maps/Route103/scripts.pory"
	delay_16
# 11 "data/maps/Route103/scripts.pory"
	walk_down
# 12 "data/maps/Route103/scripts.pory"
	walk_down
# 13 "data/maps/Route103/scripts.pory"
	walk_down
# 14 "data/maps/Route103/scripts.pory"
	walk_down
# 15 "data/maps/Route103/scripts.pory"
	step_end
# 16 "data/maps/Route103/scripts.pory"

# 17 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 18 "data/maps/Route103/scripts.pory"
	delay_16
# 19 "data/maps/Route103/scripts.pory"
	delay_4
# 20 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 21 "data/maps/Route103/scripts.pory"
	delay_16
# 22 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 23 "data/maps/Route103/scripts.pory"
	step_end
# 24 "data/maps/Route103/scripts.pory"

# 25 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 26 "data/maps/Route103/scripts.pory"
	walk_down
# 27 "data/maps/Route103/scripts.pory"
	step_end
# 28 "data/maps/Route103/scripts.pory"

# 29 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 30 "data/maps/Route103/scripts.pory"
	jump_2_down
# 31 "data/maps/Route103/scripts.pory"
	delay_16
# 32 "data/maps/Route103/scripts.pory"
	walk_down
# 33 "data/maps/Route103/scripts.pory"
	walk_down
# 34 "data/maps/Route103/scripts.pory"
	walk_down
# 35 "data/maps/Route103/scripts.pory"
	step_end
# 36 "data/maps/Route103/scripts.pory"

# 37 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 38 "data/maps/Route103/scripts.pory"
	delay_16
# 39 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 40 "data/maps/Route103/scripts.pory"
	step_end
# 41 "data/maps/Route103/scripts.pory"

# 42 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 43 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 44 "data/maps/Route103/scripts.pory"
	end
# 45 "data/maps/Route103/scripts.pory"

# 46 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 47 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 48 "data/maps/Route103/scripts.pory"
	end
# 49 "data/maps/Route103/scripts.pory"

# 50 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 51 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 52 "data/maps/Route103/scripts.pory"
	end
# 53 "data/maps/Route103/scripts.pory"

# 54 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 55 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route103/scripts.pory"
	end
# 57 "data/maps/Route103/scripts.pory"

# 58 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 59 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 60 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 61 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 62 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route103/scripts.pory"
	end
# 64 "data/maps/Route103/scripts.pory"

# 65 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 66 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 67 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 68 "data/maps/Route103/scripts.pory"
	release
# 69 "data/maps/Route103/scripts.pory"
	end
# 70 "data/maps/Route103/scripts.pory"

# 71 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 72 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 73 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route103/scripts.pory"
	end
# 75 "data/maps/Route103/scripts.pory"

# 76 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 77 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 78 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 79 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 80 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/Route103/scripts.pory"
	end
# 82 "data/maps/Route103/scripts.pory"

# 83 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 84 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 85 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 86 "data/maps/Route103/scripts.pory"
	release
# 87 "data/maps/Route103/scripts.pory"
	end
# 88 "data/maps/Route103/scripts.pory"

# 89 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 90 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 91 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route103/scripts.pory"
	end
# 93 "data/maps/Route103/scripts.pory"

# 94 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 95 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 96 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route103/scripts.pory"
	end
# 98 "data/maps/Route103/scripts.pory"

# 99 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 100 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 101 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 102 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 103 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 104 "data/maps/Route103/scripts.pory"
	release
# 105 "data/maps/Route103/scripts.pory"
	end
# 106 "data/maps/Route103/scripts.pory"

# 107 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 108 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 109 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 111 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 112 "data/maps/Route103/scripts.pory"
	release
# 113 "data/maps/Route103/scripts.pory"
	end
# 114 "data/maps/Route103/scripts.pory"

# 115 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 116 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 117 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route103/scripts.pory"
	end
# 119 "data/maps/Route103/scripts.pory"

# 120 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 121 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 122 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route103/scripts.pory"
	end
# 124 "data/maps/Route103/scripts.pory"

# 125 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 126 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 127 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route103/scripts.pory"
	end
# 129 "data/maps/Route103/scripts.pory"

# 130 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 131 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 132 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route103/scripts.pory"
	end
# 134 "data/maps/Route103/scripts.pory"

# 135 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 136 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 137 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route103/scripts.pory"
	end
# 139 "data/maps/Route103/scripts.pory"

# 140 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 141 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 142 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 143 "data/maps/Route103/scripts.pory"

# 144 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 145 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 146 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 147 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 148 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 149 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 150 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 151 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 152 "data/maps/Route103/scripts.pory"

# 153 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 154 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 155 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 156 "data/maps/Route103/scripts.pory"

# 157 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 158 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 159 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 160 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 161 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 162 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 163 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 164 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 165 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 166 "data/maps/Route103/scripts.pory"

# 167 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 168 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 169 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 170 "data/maps/Route103/scripts.pory"

# 171 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 172 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 173 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 174 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 175 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 176 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 177 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 178 "data/maps/Route103/scripts.pory"

# 179 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 180 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 181 "data/maps/Route103/scripts.pory"

# 182 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 183 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 184 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 185 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 186 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 187 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 188 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 189 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 190 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 191 "data/maps/Route103/scripts.pory"

# 192 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 193 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 194 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 195 "data/maps/Route103/scripts.pory"

# 196 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 197 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 198 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 199 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 200 "data/maps/Route103/scripts.pory"

# 201 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 202 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 203 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"

Route103_MapScripts::
# 212 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DynamicWeather103
# 213 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103Weather
# 214 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FerryManReturnsSouth
	.byte 0


DynamicWeather103::
# 218 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_eq DynamicWeather103_1
	return

DynamicWeather103_1:
# 219 "data/maps/Route103/scripts.pory"
	random 10
# 220 "data/maps/Route103/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 222 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 223 "data/maps/Route103/scripts.pory"
	case 0, DynamicWeather103_4
# 224 "data/maps/Route103/scripts.pory"
	case 1, DynamicWeather103_5
# 225 "data/maps/Route103/scripts.pory"
	case 2, DynamicWeather103_6
# 226 "data/maps/Route103/scripts.pory"
	case 3, DynamicWeather103_7
# 227 "data/maps/Route103/scripts.pory"
	case 4, DynamicWeather103_8
# 228 "data/maps/Route103/scripts.pory"
	case 5, DynamicWeather103_9
# 229 "data/maps/Route103/scripts.pory"
	case 6, DynamicWeather103_10
# 230 "data/maps/Route103/scripts.pory"
	case 7, DynamicWeather103_11
# 231 "data/maps/Route103/scripts.pory"
	case 8, DynamicWeather103_12
# 232 "data/maps/Route103/scripts.pory"
	case 9, DynamicWeather103_13
# 233 "data/maps/Route103/scripts.pory"
	case 10, DynamicWeather103_14
	return

DynamicWeather103_4:
# 223 "data/maps/Route103/scripts.pory"
	goto Route103EndRain
	return

DynamicWeather103_5:
# 224 "data/maps/Route103/scripts.pory"
	goto Route103EndRain
	return

DynamicWeather103_6:
# 225 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_7:
# 226 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_8:
# 227 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_9:
# 228 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_10:
# 229 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_11:
# 230 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_12:
# 231 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_13:
# 232 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_14:
# 233 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return


Route103Weather::
# 240 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 0, Route103Shade
# 241 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 1, Route103Rain1
# 242 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 2, Route103Rain2
# 243 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 3, Route103EndRain
# 245 "data/maps/Route103/scripts.pory"
	release
	return


Route103Shade::
# 249 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
	return


Route103Rain1::
# 253 "data/maps/Route103/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 254 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 2
# 255 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 256 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103Rain2::
# 260 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 261 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
# 262 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 263 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103EndRain::
# 268 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 269 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
# 270 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 271 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


FerryManReturnsSouth::
# 278 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 279 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 280 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 281 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	return


Route103ConcordBridgeSign::
# 286 "data/maps/Route103/scripts.pory"
	lock
# 287 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeSign_Text_0
# 288 "data/maps/Route103/scripts.pory"
	release
	return


Route103WaterfallCaveSign::
# 292 "data/maps/Route103/scripts.pory"
	lock
# 293 "data/maps/Route103/scripts.pory"
	msgbox Route103WaterfallCaveSign_Text_0
# 294 "data/maps/Route103/scripts.pory"
	release
	return


Route103FisherBucket::
# 298 "data/maps/Route103/scripts.pory"
	lock
# 299 "data/maps/Route103/scripts.pory"
	msgbox Route103FisherBucket_Text_0
# 300 "data/maps/Route103/scripts.pory"
	release
	return


Route103IteminMud::
# 304 "data/maps/Route103/scripts.pory"
	lock
# 305 "data/maps/Route103/scripts.pory"
	finditem ITEM_SILK_SCARF
# 308 "data/maps/Route103/scripts.pory"
	removeobject 21
# 309 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonGruntCheckingDriver::
# 312 "data/maps/Route103/scripts.pory"
	lock
# 313 "data/maps/Route103/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_lt Route103DevonGruntCheckingDriver_2
Route103DevonGruntCheckingDriver_1:
# 321 "data/maps/Route103/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_ge Route103DevonGruntCheckingDriver_5
Route103DevonGruntCheckingDriver_4:
# 330 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103DevonGruntCheckingDriver_2:
# 315 "data/maps/Route103/scripts.pory"
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 316 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_0
# 318 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 319 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_1
	goto Route103DevonGruntCheckingDriver_1

Route103DevonGruntCheckingDriver_5:
# 323 "data/maps/Route103/scripts.pory"
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 324 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_2
# 326 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 327 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_3
	goto Route103DevonGruntCheckingDriver_4


Route103DevonDrivercheckedby::
# 334 "data/maps/Route103/scripts.pory"
	lock
# 335 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_0
# 336 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonDrivercheckedby_Text_0
# 338 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 339 "data/maps/Route103/scripts.pory"
	waitmovement
# 340 "data/maps/Route103/scripts.pory"
	releaseall
	return


Sharpy103::
# 345 "data/maps/Route103/scripts.pory"
	lockall
# 346 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 347 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 348 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 349 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 351 "data/maps/Route103/scripts.pory"
	special DoTVShow
# 353 "data/maps/Route103/scripts.pory"
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 361 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 376 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 377 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 378 "data/maps/Route103/scripts.pory"
	addobject 25
# 379 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 32
# 380 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 381 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 382 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 383 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 384 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 385 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 387 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 388 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 389 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 390 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_1
# 391 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 392 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 393 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 394 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 396 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 397 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 398 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 399 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 401 "data/maps/Route103/scripts.pory"
	goto_if_set saidnotosharpyinoldale, Sharpy103_8
# 429 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 430 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 431 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 432 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 433 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 435 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 436 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 437 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 438 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 440 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 441 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 442 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 443 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 444 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 447 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 448 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 449 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 450 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 452 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_2
# 453 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 454 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 455 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 456 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_15
# 459 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 460 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 461 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 462 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_16
Sharpy103_7:
# 466 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 467 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 468 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_3
# 469 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_4
# 470 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 471 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 472 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_5
# 473 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 474 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 475 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 476 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 477 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 478 "data/maps/Route103/scripts.pory"
	setflag DLCclassends
# 479 "data/maps/Route103/scripts.pory"
	clearflag DLCrecesstarts
# 480 "data/maps/Route103/scripts.pory"
	setflag Sharpydefeatedat103
# 481 "data/maps/Route103/scripts.pory"
	setvar VAR_SHARPYANDCAMELIAOLDALE, 1
# 483 "data/maps/Route103/scripts.pory"
	releaseall
# 484 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Sharpy103_11
# 486 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
	return

Sharpy103_2:
# 355 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 356 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 357 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 358 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 359 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 363 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 364 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 365 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 366 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 367 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 368 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 369 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 370 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 371 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 372 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 373 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 374 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4

Sharpy103_8:
# 404 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 405 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 406 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 407 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 409 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 410 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 411 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 412 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 415 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 416 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 417 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 418 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 421 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 422 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 423 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 424 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_10
	goto Sharpy103_7

Sharpy103_11:
# 485 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103TouristApproach0::
# 495 "data/maps/Route103/scripts.pory"
	lockall
# 496 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 497 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 498 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 499 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 500 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 501 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach1::
# 505 "data/maps/Route103/scripts.pory"
	lockall
# 506 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 507 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 508 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 509 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 510 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach1_Movement_0
# 511 "data/maps/Route103/scripts.pory"
	waitmovement
# 512 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 513 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach2::
# 517 "data/maps/Route103/scripts.pory"
	lockall
# 518 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 519 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 520 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 521 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 522 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach2_Movement_0
# 523 "data/maps/Route103/scripts.pory"
	waitmovement
# 524 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 525 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach3::
# 529 "data/maps/Route103/scripts.pory"
	lockall
# 530 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 531 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 532 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 533 "data/maps/Route103/scripts.pory"
	waitmovement
# 534 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 535 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach3_Movement_0
# 536 "data/maps/Route103/scripts.pory"
	waitmovement
# 537 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 538 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103Tourist::
# 542 "data/maps/Route103/scripts.pory"
	lockall
# 543 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 544 "data/maps/Route103/scripts.pory"
touristafterapproach:
# 545 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 0
	goto_if_eq Route103Tourist_2
Route103Tourist_1:
# 571 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 1
	goto_if_eq Route103Tourist_5
Route103Tourist_4:
# 578 "data/maps/Route103/scripts.pory"
finishtouristscript:
# 579 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103Tourist_2:
# 547 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 548 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_0
# 549 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_TOURIST_103, Tourist103_Outro
# 552 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103Tourist_8
# 554 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
Route103Tourist_7:
# 556 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_1
# 557 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 558 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 559 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 560 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_2
# 561 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 562 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_3
# 564 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 565 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_4
# 567 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 1
# 568 "data/maps/Route103/scripts.pory"
	goto finishtouristscript
	goto Route103Tourist_1

Route103Tourist_5:
# 573 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 574 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 575 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_5
	goto Route103Tourist_4

Route103Tourist_8:
# 553 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103Tourist_7


Route103Touristbikepushed::
# 588 "data/maps/Route103/scripts.pory"
	lockall
# 589 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 590 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 591 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 592 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_0
# 593 "data/maps/Route103/scripts.pory"
	closemessage
# 595 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 596 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 597 "data/maps/Route103/scripts.pory"
	playse SE_BIKE_HOP
# 598 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 599 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route103Touristbikepushed_Movement_1
# 600 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 601 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 602 "data/maps/Route103/scripts.pory"
	setobjectxy 27, 0, 0
# 603 "data/maps/Route103/scripts.pory"
	setobjectxy 26, 0, 0
# 604 "data/maps/Route103/scripts.pory"
	setflag touristhelped
# 605 "data/maps/Route103/scripts.pory"
	clearflag touristonbike
# 606 "data/maps/Route103/scripts.pory"
	addobject 29
# 607 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 22, 9
# 608 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 609 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 610 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_1
# 611 "data/maps/Route103/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 612 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103DevonGruntCheckingDriver_Movement_0
# 613 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_2
# 615 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_2
# 616 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_3
# 618 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103Touristbikepushed_Movement_2
# 619 "data/maps/Route103/scripts.pory"
	waitmovement
# 621 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 622 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 623 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 624 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 625 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 626 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 627 "data/maps/Route103/scripts.pory"
	waitse
# 629 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_4
# 631 "data/maps/Route103/scripts.pory"
	removeobject 29
# 632 "data/maps/Route103/scripts.pory"
	setflag touristonbike
# 634 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 2
# 635 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103TouristNotThatWay::
# 640 "data/maps/Route103/scripts.pory"
	lockall
# 641 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 642 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 643 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 644 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristNotThatWay_Text_0
# 645 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach1_Movement_0
# 646 "data/maps/Route103/scripts.pory"
	waitmovement
# 647 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103VeteranBattle::
# 653 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, Route103VeteranRegister
# 654 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 655 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 656 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranBattle_Text_0
# 657 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRegister::
# 662 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 663 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 664 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_0
# 666 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 667 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRematch::
# 672 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro2, Veteran103_Outro2
# 673 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRematch_Text_0
	end


Route103ConcordBridgeGuard::
# 693 "data/maps/Route103/scripts.pory"
	lockall
# 694 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 695 "data/maps/Route103/scripts.pory"
	applymovement 30, Route103DevonDrivercheckedby_Movement_0
# 696 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordBridgeGuard_2
Route103ConcordBridgeGuard_1:
# 700 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_7
Route103ConcordBridgeGuard_4:
# 746 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route103ConcordBridgeGuard_12
Route103ConcordBridgeGuard_11:
# 752 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_20
Route103ConcordBridgeGuard_17:
# 756 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_29
Route103ConcordBridgeGuard_27:
# 760 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_38
Route103ConcordBridgeGuard_35:
# 765 "data/maps/Route103/scripts.pory"
finishguardscript:
# 766 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordBridgeGuard_2:
# 697 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_0
	goto Route103ConcordBridgeGuard_1

Route103ConcordBridgeGuard_5:
# 702 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_1
# 703 "data/maps/Route103/scripts.pory"
guarddistractchoice:
# 704 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordBridgeGuard_Text_2, Route103ConcordBridgeGuard_Text_3, Route103ConcordBridgeGuard_Text_4, Route103ConcordBridgeGuard_Text_5, Route103ConcordBridgeGuard_Text_6
# 706 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordBridgeGuard_15
Route103ConcordBridgeGuard_14:
# 712 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordBridgeGuard_25
Route103ConcordBridgeGuard_24:
# 717 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route103ConcordBridgeGuard_33
Route103ConcordBridgeGuard_32:
# 734 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route103ConcordBridgeGuard_42
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_6:
# 700 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_5
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_7:
# 700 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordBridgeGuard_6
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_12:
# 747 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_12
# 748 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_11

Route103ConcordBridgeGuard_15:
# 707 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_7
# 710 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_14

Route103ConcordBridgeGuard_18:
# 754 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_13
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_19:
# 752 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_18
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_20:
# 752 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_19
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_25:
# 713 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_8
# 715 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_24

Route103ConcordBridgeGuard_28:
# 757 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_14
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_29:
# 756 "data/maps/Route103/scripts.pory"
	goto_if_set helpedconcordconartist, Route103ConcordBridgeGuard_28
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_33:
# 718 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_9
# 720 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_DEVONGUARD_103, DevonGuard103_Outro
# 721 "data/maps/Route103/scripts.pory"
	setflag helpedconcordconartist
# 723 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 726 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 728 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_10
# 729 "data/maps/Route103/scripts.pory"
	clearflag conartistrewardsinoldale
# 730 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 731 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_32

Route103ConcordBridgeGuard_36:
# 761 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_15
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_37:
# 760 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, Route103ConcordBridgeGuard_36
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_38:
# 760 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_37
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_42:
# 735 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_11
# 739 "data/maps/Route103/scripts.pory"
	setflag betrayedconcordconartist
# 740 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_4


Route103ConcordConartist::
# 776 "data/maps/Route103/scripts.pory"
	lockall
# 777 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 778 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 780 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordConartist_2
Route103ConcordConartist_1:
# 807 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_7
Route103ConcordConartist_4:
# 813 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_17
Route103ConcordConartist_14:
# 922 "data/maps/Route103/scripts.pory"
finishconartistscript:
# 923 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordConartist_2:
# 782 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_0
# 783 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 785 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordConartist_12
Route103ConcordConartist_11:
# 801 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordConartist_21
	goto Route103ConcordConartist_1

Route103ConcordConartist_5:
# 809 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_6:
# 807 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_7:
# 807 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordConartist_6
	goto Route103ConcordConartist_4

Route103ConcordConartist_12:
# 786 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_3
# 793 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 794 "data/maps/Route103/scripts.pory"
	waitmovement 28
# 795 "data/maps/Route103/scripts.pory"
	setflag conartistaskeddistract
# 796 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 797 "data/maps/Route103/scripts.pory"
	waitmovement 28
# 798 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_11

Route103ConcordConartist_15:
# 815 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 816 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_6
# 819 "data/maps/Route103/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 820 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_7
# 826 "data/maps/Route103/scripts.pory"
	clearflag devonsvsconartist
# 827 "data/maps/Route103/scripts.pory"
	addobject 31
# 828 "data/maps/Route103/scripts.pory"
	setobjectxy 31, 42, 37
# 829 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 830 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 831 "data/maps/Route103/scripts.pory"
	waitmovement
# 832 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_0
# 833 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 836 "data/maps/Route103/scripts.pory"
	addobject 32
# 837 "data/maps/Route103/scripts.pory"
	setobjectxy 32, 30, 39
# 838 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_1
# 840 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_2
# 841 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_8
# 843 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 845 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_9
# 848 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHADYDEALER_103, ShadyDealer103_Outro
# 850 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonGruntCheckingDriver_Movement_0
# 851 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 852 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_10
# 854 "data/maps/Route103/scripts.pory"
	playse SE_M_COMET_PUNCH
# 855 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ConcordConartist_Movement_3
# 857 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_4
# 858 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_11
# 859 "data/maps/Route103/scripts.pory"
	playse SE_M_MEGA_KICK2
# 860 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 861 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_5
# 862 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_6
# 863 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 864 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_12
# 865 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_7
# 866 "data/maps/Route103/scripts.pory"
	playse SE_M_JUMP_KICK
# 867 "data/maps/Route103/scripts.pory"
	waitse
# 868 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 869 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 870 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_13
# 872 "data/maps/Route103/scripts.pory"
	waitmovement
# 874 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103DevonGruntCheckingDriver_Movement_0
# 876 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_14
# 878 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103DevonGruntCheckingDriver_Movement_0
# 880 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_15
# 882 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_8
# 883 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_8
# 884 "data/maps/Route103/scripts.pory"
	waitmovement
# 885 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 886 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 887 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103TouristApproach1_Movement_0
# 888 "data/maps/Route103/scripts.pory"
	waitmovement
# 889 "data/maps/Route103/scripts.pory"
	removeobject 31
# 890 "data/maps/Route103/scripts.pory"
	waitmovement
# 891 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 892 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_16
# 894 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_17
# 895 "data/maps/Route103/scripts.pory"
	showmoneybox 18, 0
# 896 "data/maps/Route103/scripts.pory"
	addmoney 1000
# 897 "data/maps/Route103/scripts.pory"
	playse SE_SHOP
# 898 "data/maps/Route103/scripts.pory"
	updatemoneybox
# 899 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_18
# 901 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_9
# 902 "data/maps/Route103/scripts.pory"
	waitmovement
# 904 "data/maps/Route103/scripts.pory"
	waitmovement
# 906 "data/maps/Route103/scripts.pory"
	removeobject 28
# 908 "data/maps/Route103/scripts.pory"
	removeobject 32
# 909 "data/maps/Route103/scripts.pory"
	setflag devonsvsconartist
# 910 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 911 "data/maps/Route103/scripts.pory"
	clearflag devonbridgeguardgoestoconartist
# 912 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 913 "data/maps/Route103/scripts.pory"
	fadenewbgm 1
# 914 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103ConcordConartist_24
# 917 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
Route103ConcordConartist_23:
# 918 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 920 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_14

Route103ConcordConartist_16:
# 813 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_15
	goto Route103ConcordConartist_14

Route103ConcordConartist_17:
# 813 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordConartist_16
	goto Route103ConcordConartist_14

Route103ConcordConartist_21:
# 802 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_4
# 803 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 804 "data/maps/Route103/scripts.pory"
	waitmovement 28
	goto Route103ConcordConartist_1

Route103ConcordConartist_24:
# 916 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103ConcordConartist_23


ConArtistEgg::
# 932 "data/maps/Route103/scripts.pory"
	lockall
# 933 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 934 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, ConArtistEgg_2
ConArtistEgg_1:
# 941 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, ConArtistEgg_4
	return

ConArtistEgg_2:
# 935 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 936 "data/maps/Route103/scripts.pory"
	applymovement 28, ConArtistEgg_Movement_0
# 937 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_0
# 938 "data/maps/Route103/scripts.pory"
	releaseall
# 939 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
	goto ConArtistEgg_1

ConArtistEgg_4:
# 943 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_1
# 944 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 945 "data/maps/Route103/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 946 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_2
# 947 "data/maps/Route103/scripts.pory"
	removeobject 33
# 948 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 949 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryGuyUp::
# 956 "data/maps/Route103/scripts.pory"
	lockall
# 957 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 958 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 960 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq RiverFerryGuyUp_2
RiverFerryGuyUp_1:
# 967 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_5
RiverFerryGuyUp_4:
# 977 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 978 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 980 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyUp_8
RiverFerryGuyUp_7:
# 1032 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyUp_14
RiverFerryGuyUp_13:
# 1036 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyUp_2:
# 961 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyUp_1

RiverFerryGuyUp_5:
# 968 "data/maps/Route103/scripts.pory"
	checkplayergender
# 969 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyUp_11
RiverFerryGuyUp_10:
# 971 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyUp_20
	goto RiverFerryGuyUp_4

RiverFerryGuyUp_8:
# 981 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
# 982 "data/maps/Route103/scripts.pory"
	removeobject 36
# 983 "data/maps/Route103/scripts.pory"
	removeobject 37
# 984 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 985 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 987 "data/maps/Route103/scripts.pory"
	hidefollower
# 988 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 989 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_0
# 990 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 991 "data/maps/Route103/scripts.pory"
	removeobject 34
# 992 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 993 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 994 "data/maps/Route103/scripts.pory"
	hideplayer
# 995 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 996 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_1
# 997 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 998 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_5
# 999 "data/maps/Route103/scripts.pory"
	closemessage
# 1000 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 1001 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_2
# 1002 "data/maps/Route103/scripts.pory"
	applymovement 35, RiverFerryGuyUp_Movement_3
# 1003 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1004 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 1006 "data/maps/Route103/scripts.pory"
	clearflag ferryman103up
# 1007 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103up
# 1008 "data/maps/Route103/scripts.pory"
	addobject 36
# 1009 "data/maps/Route103/scripts.pory"
	addobject 37
# 1011 "data/maps/Route103/scripts.pory"
	showplayer
# 1012 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 16
# 1013 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 1014 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonGruntCheckingDriver_Movement_1
# 1015 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1017 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_17
# 1019 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
RiverFerryGuyUp_16:
# 1020 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
# 1021 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1022 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1023 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_2
# 1024 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1025 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1026 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1027 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1028 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
	goto RiverFerryGuyUp_7

RiverFerryGuyUp_11:
# 970 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyUp_10

RiverFerryGuyUp_14:
# 1033 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_7
	goto RiverFerryGuyUp_13

RiverFerryGuyUp_17:
# 1018 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyUp_16

RiverFerryGuyUp_20:
# 972 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
	goto RiverFerryGuyUp_4


RiverFerryGuyDown::
# 1040 "data/maps/Route103/scripts.pory"
	lockall
# 1041 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1042 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_0
# 1043 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_2
RiverFerryGuyDown_1:
# 1050 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_0
# 1051 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 1053 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyDown_5
RiverFerryGuyDown_4:
# 1105 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyDown_11
RiverFerryGuyDown_10:
# 1109 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyDown_2:
# 1044 "data/maps/Route103/scripts.pory"
	checkplayergender
# 1045 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyDown_8
RiverFerryGuyDown_7:
# 1047 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyDown_17
	goto RiverFerryGuyDown_1

RiverFerryGuyDown_5:
# 1054 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
# 1055 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1056 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1057 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1058 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
# 1060 "data/maps/Route103/scripts.pory"
	hidefollower
# 1061 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1062 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_0
# 1063 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1064 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1065 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 1066 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1067 "data/maps/Route103/scripts.pory"
	hideplayer
# 1068 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 1069 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_0
# 1070 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1071 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_1
# 1072 "data/maps/Route103/scripts.pory"
	closemessage
# 1073 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 1074 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_1
# 1075 "data/maps/Route103/scripts.pory"
	applymovement 36, RiverFerryGuyDown_Movement_2
# 1076 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1077 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 1079 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 1080 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 1081 "data/maps/Route103/scripts.pory"
	addobject 34
# 1082 "data/maps/Route103/scripts.pory"
	addobject 35
# 1084 "data/maps/Route103/scripts.pory"
	showplayer
# 1085 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 32
# 1086 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 1087 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonGruntCheckingDriver_Movement_1
# 1088 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1090 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_14
# 1092 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
RiverFerryGuyDown_13:
# 1093 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_2
# 1094 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1095 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1096 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_2
# 1097 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1098 "data/maps/Route103/scripts.pory"
	removeobject 36
# 1099 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1100 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 1101 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	goto RiverFerryGuyDown_4

RiverFerryGuyDown_8:
# 1046 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyDown_7

RiverFerryGuyDown_11:
# 1106 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_7
	goto RiverFerryGuyDown_10

RiverFerryGuyDown_14:
# 1091 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyDown_13

RiverFerryGuyDown_17:
# 1048 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
	goto RiverFerryGuyDown_1


RiverFerryBoat::
# 1114 "data/maps/Route103/scripts.pory"
	lockall
# 1115 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryBoat_Text_0
# 1116 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryManNotThatEntry::
# 1120 "data/maps/Route103/scripts.pory"
	lockall
# 1121 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1122 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 1123 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 1124 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryManNotThatEntry_Text_0
# 1125 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1126 "data/maps/Route103/scripts.pory"
	waitmovement
# 1127 "data/maps/Route103/scripts.pory"
	releaseall
	return


FisherGuruRoute103::
# 1131 "data/maps/Route103/scripts.pory"
	lock
# 1132 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonDrivercheckedby_Movement_0
# 1133 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_eq FisherGuruRoute103_2
FisherGuruRoute103_1:
# 1188 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_gt FisherGuruRoute103_5
FisherGuruRoute103_4:
# 1335 "data/maps/Route103/scripts.pory"
finishfisherscript:
# 1336 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1337 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1338 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1339 "data/maps/Route103/scripts.pory"
	releaseall
	return

FisherGuruRoute103_2:
# 1136 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1138 "data/maps/Route103/scripts.pory"
	playse SE_M_SURF
# 1139 "data/maps/Route103/scripts.pory"
	waitse
# 1140 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1141 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_0
# 1142 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_0
# 1144 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1145 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1147 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1148 "data/maps/Route103/scripts.pory"
	waitse
# 1149 "data/maps/Route103/scripts.pory"
	clearflag mudcrabcrawdaunt
# 1150 "data/maps/Route103/scripts.pory"
	addobject 39
# 1151 "data/maps/Route103/scripts.pory"
	playse SE_SHINY
# 1152 "data/maps/Route103/scripts.pory"
	dofieldeffectsparkle 27, 13, 9
# 1153 "data/maps/Route103/scripts.pory"
	waitse
# 1155 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_CRAWDAUNT, CRY_MODE_ENCOUNTER
# 1156 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_1
# 1157 "data/maps/Route103/scripts.pory"
	removeobject 39
# 1158 "data/maps/Route103/scripts.pory"
	setflag mudcrabcrawdaunt
# 1159 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1160 "data/maps/Route103/scripts.pory"
	waitse
# 1161 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, FisherGuruRoute103_8
FisherGuruRoute103_7:
# 1164 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_2
# 1165 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_1
# 1166 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonGruntCheckingDriver_Movement_0
# 1167 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_3
# 1169 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1170 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_4
# 1173 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonGruntCheckingDriver_Movement_0
# 1174 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_5
# 1176 "data/maps/Route103/scripts.pory"
	giveitem ITEM_OLD_ROD
# 1178 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_6
# 1181 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1182 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1183 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 1
# 1184 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_1

FisherGuruRoute103_5:
# 1190 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1191 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_7
# 1192 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonGruntCheckingDriver_Movement_0
# 1193 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, FisherGuruRoute103_Text_8, FisherGuruRoute103_Text_9, FisherGuruRoute103_Text_10, FisherGuruRoute103_Text_11
# 1195 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherGuruRoute103_11
FisherGuruRoute103_10:
# 1292 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FisherGuruRoute103_14
FisherGuruRoute103_13:
# 1308 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FisherGuruRoute103_20
FisherGuruRoute103_19:
# 1324 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq FisherGuruRoute103_27
	goto FisherGuruRoute103_4

FisherGuruRoute103_8:
# 1162 "data/maps/Route103/scripts.pory"
	setseenmon SPECIES_CRAWDAUNT
	goto FisherGuruRoute103_7

FisherGuruRoute103_11:
# 1196 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_17
FisherGuruRoute103_16:
# 1272 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 3
	goto_if_eq FisherGuruRoute103_22
	goto FisherGuruRoute103_10

FisherGuruRoute103_14:
# 1293 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1294 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_23
# 1296 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1297 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1298 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_24
# 1301 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonGruntCheckingDriver_Movement_0
# 1302 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1303 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_25
# 1305 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_13

FisherGuruRoute103_17:
# 1198 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_MAGIKARP
# 1199 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_25
FisherGuruRoute103_24:
# 1202 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_FEEBAS
# 1203 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_33
FisherGuruRoute103_32:
# 1206 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_TENTACOOL
# 1207 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_36
FisherGuruRoute103_35:
# 1210 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_SURSKIT
# 1211 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_39
FisherGuruRoute103_38:
# 1214 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_POLIWAG
# 1215 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_42
FisherGuruRoute103_41:
# 1218 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 0
	goto_if_eq FisherGuruRoute103_45
FisherGuruRoute103_44:
# 1222 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 1
	goto_if_eq FisherGuruRoute103_48
FisherGuruRoute103_47:
# 1226 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 2
	goto_if_eq FisherGuruRoute103_51
FisherGuruRoute103_50:
# 1230 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 3
	goto_if_ge FisherGuruRoute103_54
FisherGuruRoute103_53:
# 1259 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FisherGuruRoute103_56
	goto FisherGuruRoute103_16

FisherGuruRoute103_20:
# 1309 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1310 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_26
# 1311 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1312 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1313 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_27
# 1315 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonGruntCheckingDriver_Movement_0
# 1316 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1317 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_28
# 1318 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1319 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1320 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_19

FisherGuruRoute103_22:
	checkitem ITEM_BIG_PEARL
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_29
# 1285 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1286 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_22
# 1287 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_25:
# 1200 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_24

FisherGuruRoute103_27:
# 1325 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1326 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_29
# 1327 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1328 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1329 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_30
# 1330 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_4

FisherGuruRoute103_29:
# 1275 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1276 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_21
# 1280 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_33:
# 1204 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_32

FisherGuruRoute103_36:
# 1208 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_35

FisherGuruRoute103_39:
# 1212 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_38

FisherGuruRoute103_42:
# 1216 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_41

FisherGuruRoute103_45:
# 1219 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_12
	goto FisherGuruRoute103_44

FisherGuruRoute103_48:
# 1223 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_13
	goto FisherGuruRoute103_47

FisherGuruRoute103_51:
# 1227 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_14
	goto FisherGuruRoute103_50

FisherGuruRoute103_54:
# 1231 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1232 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_15
# 1234 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1235 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1236 "data/maps/Route103/scripts.pory"
	waitmovement
# 1237 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1238 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1239 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1240 "data/maps/Route103/scripts.pory"
	playse SE_M_ICY_WIND
# 1241 "data/maps/Route103/scripts.pory"
	waitse
# 1242 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1243 "data/maps/Route103/scripts.pory"
	fadeinbgm 1
# 1244 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1245 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_16
# 1247 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonGruntCheckingDriver_Movement_0
# 1248 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_17
# 1249 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_1
# 1250 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 1251 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1252 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_18
# 1255 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 3
# 1256 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_53

FisherGuruRoute103_56:
# 1260 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1261 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_19
# 1263 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1264 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1265 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_20
# 1267 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_16


MoveTutorSign::
# 1343 "data/maps/Route103/scripts.pory"
	lock
# 1344 "data/maps/Route103/scripts.pory"
	msgbox MoveTutorSign_Text_0
# 1345 "data/maps/Route103/scripts.pory"
	release
	return


Fishercallsfornumber::
# 1349 "data/maps/Route103/scripts.pory"
	lock
# 1350 "data/maps/Route103/scripts.pory"
	applymovement 38, ConArtistEgg_Movement_0
# 1351 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1352 "data/maps/Route103/scripts.pory"
	msgbox Fishercallsfornumber_Text_0
# 1353 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_FISHER_103
# 1354 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 2
# 1355 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1356 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1357 "data/maps/Route103/scripts.pory"
	release
	return


# 315 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_0:
# 315 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 318 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_1:
# 318 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 335 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_0:
# 335 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 389 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 389 "data/maps/Route103/scripts.pory"
	walk_in_place_right
	step_end

# 390 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 390 "data/maps/Route103/scripts.pory"
	jump_in_place_left
	step_end

# 452 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 452 "data/maps/Route103/scripts.pory"
	walk_in_place_left
	step_end

# 468 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 468 "data/maps/Route103/scripts.pory"
	jump_2_down
# 468 "data/maps/Route103/scripts.pory"
	walk_down
# 468 "data/maps/Route103/scripts.pory"
	walk_down
# 468 "data/maps/Route103/scripts.pory"
	walk_down
# 468 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 469 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 469 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 469 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 469 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 472 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 472 "data/maps/Route103/scripts.pory"
	jump_2_down
# 472 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 472 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 472 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 472 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 472 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 472 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 472 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 498 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_0:
# 498 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 510 "data/maps/Route103/scripts.pory"
Route103TouristApproach1_Movement_0:
# 510 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 522 "data/maps/Route103/scripts.pory"
Route103TouristApproach2_Movement_0:
# 522 "data/maps/Route103/scripts.pory"
	walk_up
# 522 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 535 "data/maps/Route103/scripts.pory"
Route103TouristApproach3_Movement_0:
# 535 "data/maps/Route103/scripts.pory"
	walk_up
# 535 "data/maps/Route103/scripts.pory"
	walk_up
# 535 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 590 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_0:
# 590 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
# 590 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 599 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_1:
# 599 "data/maps/Route103/scripts.pory"
	walk_up
# 599 "data/maps/Route103/scripts.pory"
	walk_up
# 599 "data/maps/Route103/scripts.pory"
	walk_up
# 599 "data/maps/Route103/scripts.pory"
	walk_up
# 599 "data/maps/Route103/scripts.pory"
	walk_up
# 599 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 618 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_2:
# 618 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 618 "data/maps/Route103/scripts.pory"
	walk_fast_right
	step_end

# 832 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_0:
# 832 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 832 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 832 "data/maps/Route103/scripts.pory"
	walk_fast_left
	step_end

# 838 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_1:
# 838 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 840 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_2:
# 840 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 840 "data/maps/Route103/scripts.pory"
	walk_in_place_down
# 840 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 840 "data/maps/Route103/scripts.pory"
	walk_in_place_down
# 840 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 840 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 855 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_3:
# 855 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 855 "data/maps/Route103/scripts.pory"
	walk_in_place_left
	step_end

# 857 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_4:
# 857 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 861 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_5:
# 861 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 861 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 861 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 862 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_6:
# 862 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 862 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 865 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_7:
# 865 "data/maps/Route103/scripts.pory"
	jump_down
# 865 "data/maps/Route103/scripts.pory"
	jump_down
	step_end

# 882 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_8:
# 882 "data/maps/Route103/scripts.pory"
	walk_right
# 882 "data/maps/Route103/scripts.pory"
	walk_right
# 882 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 901 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_9:
# 901 "data/maps/Route103/scripts.pory"
	walk_left
# 901 "data/maps/Route103/scripts.pory"
	walk_left
# 901 "data/maps/Route103/scripts.pory"
	walk_left
# 901 "data/maps/Route103/scripts.pory"
	walk_left
# 901 "data/maps/Route103/scripts.pory"
	walk_left
# 901 "data/maps/Route103/scripts.pory"
	walk_left
# 901 "data/maps/Route103/scripts.pory"
	walk_left
# 901 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 936 "data/maps/Route103/scripts.pory"
ConArtistEgg_Movement_0:
# 936 "data/maps/Route103/scripts.pory"
	face_player
# 936 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 989 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_0:
# 989 "data/maps/Route103/scripts.pory"
	walk_right
	step_end

# 996 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_1:
# 996 "data/maps/Route103/scripts.pory"
	walk_right
# 996 "data/maps/Route103/scripts.pory"
	walk_up
# 996 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 1001 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_2:
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1001 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 1002 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_3:
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1002 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 1013 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_4:
# 1013 "data/maps/Route103/scripts.pory"
	walk_left
# 1013 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 1021 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_5:
# 1021 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 1069 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_0:
# 1069 "data/maps/Route103/scripts.pory"
	walk_right
# 1069 "data/maps/Route103/scripts.pory"
	walk_down
# 1069 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 1074 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_1:
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1074 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 1075 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_2:
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1075 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

Route103ConcordBridgeSign_Text_0:
# 287 "data/maps/Route103/scripts.pory"
	.string "East - Concord Bridge\n"
	.string "North - Waterfall Cave.$"

Route103WaterfallCaveSign_Text_0:
# 293 "data/maps/Route103/scripts.pory"
	.string "Waterfall Cave to Route 117.$"

Route103FisherBucket_Text_0:
# 299 "data/maps/Route103/scripts.pory"
	.string "The bucket, which seems meant to store\n"
	.string "catches, is empty.$"

Route103DevonGruntCheckingDriver_Text_0:
# 316 "data/maps/Route103/scripts.pory"
	.string "I'm telling you, sir - Oldale's Warehouse\n"
	.string "is occupied by Rebels.\p"
	.string "Even if we let you through, your stock\n"
	.string "would just get stolen.$"

Route103DevonGruntCheckingDriver_Text_1:
# 319 "data/maps/Route103/scripts.pory"
	.string "Then go do something about it, instead\n"
	.string "of just blocking traffic!$"

Route103DevonGruntCheckingDriver_Text_2:
# 324 "data/maps/Route103/scripts.pory"
	.string "Sir, I just got word the Rebels have\n"
	.string "left Oldale Warehouse!\p"
	.string "Once we inspect your stock, and if\n"
	.string "nothing is wrong with it, we will let you\l"
	.string "right through.$"

Route103DevonGruntCheckingDriver_Text_3:
# 327 "data/maps/Route103/scripts.pory"
	.string "You could have done that sooner! Hurry\n"
	.string "it up!$"

Route103DevonDrivercheckedby_Text_0:
# 336 "data/maps/Route103/scripts.pory"
	.string "This is ridiculous. Is this what our\n"
	.string "taxes are being spent in?\p"
	.string "If I don't deliver these goods soon, my\n"
	.string "boss will have my head!$"

Sharpy103_Text_0:
# 356 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 365 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_2:
# 369 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_3:
# 373 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_4:
# 385 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_5:
# 394 "data/maps/Route103/scripts.pory"
	.string "If you two are done, Sharpy and I need\n"
	.string "to go back - it's almost curfew!$"

Sharpy103_Text_6:
# 399 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! We're going to get\n"
	.string "scolded...$"

Sharpy103_Text_7:
# 407 "data/maps/Route103/scripts.pory"
	.string "Well... I guess you won't be joining us\n"
	.string "after all... unless...$"

Sharpy103_Text_8:
# 412 "data/maps/Route103/scripts.pory"
	.string "Unless you change your mind! In which\n"
	.string "case, we'll be waiting at Petalburg's\l"
	.string "Dojo!$"

Sharpy103_Text_9:
# 418 "data/maps/Route103/scripts.pory"
	.string "It's the big, old-fashioned wooden\n"
	.string "building - can't miss it!\p"
	.string "So, if you want to help us save Hoenn...$"

Sharpy103_Text_10:
# 424 "data/maps/Route103/scripts.pory"
	.string "You better come!$"

Sharpy103_Text_11:
# 433 "data/maps/Route103/scripts.pory"
	.string "Well, it goes without saying, but you\n"
	.string "passed the test with flying colors!$"

Sharpy103_Text_12:
# 438 "data/maps/Route103/scripts.pory"
	.string "Now you just need to come to Petalburg\n"
	.string "Dojo, and you can join us officially!$"

Sharpy103_Text_13:
# 444 "data/maps/Route103/scripts.pory"
	.string "Well, someone else has the last word on\n"
	.string "accepting recruits... but I doubt he'll\l"
	.string "reject you.$"

Sharpy103_Text_14:
# 450 "data/maps/Route103/scripts.pory"
	.string "We'd love to show you the way, but we\n"
	.string "kinda need to rush back.$"

Sharpy103_Text_15:
# 456 "data/maps/Route103/scripts.pory"
	.string "Yup - so we'll go on ahead! Petalburg\n"
	.string "Dojo is the big, old-fashioned wooden\l"
	.string "building - can't miss it.$"

Sharpy103_Text_16:
# 462 "data/maps/Route103/scripts.pory"
	.string "We'll see you there!$"

Route103TouristApproach0_Text_0:
# 499 "data/maps/Route103/scripts.pory"
	.string "Hey, you!$"

Route103Tourist_Text_0:
# 548 "data/maps/Route103/scripts.pory"
	.string "You're the one who mugged me! You're\n"
	.string "not getting away!$"

Route103Tourist_Text_1:
# 556 "data/maps/Route103/scripts.pory"
	.string "Uhm... I'm sorry. I dropped my glasses,\n"
	.string "and I mistook you for that thief...!$"

Route103Tourist_Text_2:
# 560 "data/maps/Route103/scripts.pory"
	.string "What thief? The one who stole all my\n"
	.string "pokeyen!$"

Route103Tourist_Text_3:
# 562 "data/maps/Route103/scripts.pory"
	.string "And that's not the worse... he threw my\n"
	.string "bike to the mud there, so that I\l"
	.string "couldn't chase him!$"

Route103Tourist_Text_4:
# 565 "data/maps/Route103/scripts.pory"
	.string "I tried to get it out, but it's stuck\n"
	.string "real bad... if only me or my Pokémon had\l"
	.string "enough {COLOR RED}STRENGTH{COLOR DARK_GRAY}!$"

Route103Tourist_Text_5:
# 575 "data/maps/Route103/scripts.pory"
	.string "I'm not leaving without my bike. Not a\n"
	.string "chance!\p"
	.string "It costed me 1,000,000¥ at Cerulean\n"
	.string "City's Bike Shop!$"

Route103Touristbikepushed_Text_0:
# 592 "data/maps/Route103/scripts.pory"
	.string "Y-you did it! IT'S OUT! Wait, I'll take it\n"
	.string "from here!$"

Route103Touristbikepushed_Text_1:
# 610 "data/maps/Route103/scripts.pory"
	.string "Thank you so much! Here - I got this as\n"
	.string "a souvenir, but you can have it!$"

Route103Touristbikepushed_Text_2:
# 613 "data/maps/Route103/scripts.pory"
	.string "Well, these have been some thrilling\n"
	.string "holidays... but I should catch a boat in\l"
	.string "Slateport, and go back home.$"

Route103Touristbikepushed_Text_3:
# 616 "data/maps/Route103/scripts.pory"
	.string "If you ever make a trip to Cinnabar\n"
	.string "Island, I'll return the favour properly.\l"
	.string "Safe travels now!$"

Route103Touristbikepushed_Text_4:
# 629 "data/maps/Route103/scripts.pory"
	.string "Ooow ow ow... I need a new pair of\n"
	.string "glasses...$"

Route103TouristNotThatWay_Text_0:
# 644 "data/maps/Route103/scripts.pory"
	.string "Don't push it from there - you'll get it\n"
	.string "more stuck!$"

Route103VeteranBattle_Text_0:
# 656 "data/maps/Route103/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

Route103VeteranRegister_Text_0:
# 664 "data/maps/Route103/scripts.pory"
	.string "Good job, but don't lower your guard.\p"
	.string "Let's exchange Devon profiles - I'll\n"
	.string "make sure you dont' slack off!$"

Route103VeteranRematch_Text_0:
# 673 "data/maps/Route103/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

Route103ConcordBridgeGuard_Text_0:
# 697 "data/maps/Route103/scripts.pory"
	.string "Due to an increase in rebel activity in\n"
	.string "this area, passage through Concord\l"
	.string "Customs is heavily restricted.$"

Route103ConcordBridgeGuard_Text_1:
# 702 "data/maps/Route103/scripts.pory"
	.string "Hm? Yes?$"

Route103ConcordBridgeGuard_Text_2:
# 704 "data/maps/Route103/scripts.pory"
	.string "I need directions$"

Route103ConcordBridgeGuard_Text_3:
# 704 "data/maps/Route103/scripts.pory"
	.string "How is your day?$"

Route103ConcordBridgeGuard_Text_4:
# 704 "data/maps/Route103/scripts.pory"
	.string "Let's have a battle!$"

Route103ConcordBridgeGuard_Text_5:
# 704 "data/maps/Route103/scripts.pory"
	.string "I found someone suspicious...$"

Route103ConcordBridgeGuard_Text_6:
# 704 "data/maps/Route103/scripts.pory"
	.string "Nevermind$"

Route103ConcordBridgeGuard_Text_7:
# 707 "data/maps/Route103/scripts.pory"
	.string "There is a signpost right next to me...\n"
	.string "if you can't read, you can learn in the\l"
	.string "{COLOR BLUE}Devon Learning Center{COLOR DARK_GRAY} of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}.\p"
	.string "... I'm sorry, that was rather rude. I'm\n"
	.string "just having a rough day.\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_8:
# 713 "data/maps/Route103/scripts.pory"
	.string "Not too exciting - lots of standing\n"
	.string "around.\p"
	.string "We received reports of a prowling\n"
	.string "criminal in the vicinity, and I'm doing\l"
	.string "double shift because of it...\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_9:
# 718 "data/maps/Route103/scripts.pory"
	.string "A battle? An odd request, but it could\n"
	.string "be a fun use of my allotted recess time.\p"
	.string "Let's do it!$"

Route103ConcordBridgeGuard_Text_10:
# 728 "data/maps/Route103/scripts.pory"
	.string "Thank you. That really helped stretch\n"
	.string "the good old battling muscle!$"

Route103ConcordBridgeGuard_Text_11:
# 735 "data/maps/Route103/scripts.pory"
	.string "You don't say...? And he's right behind\n"
	.string "that truck?\p"
	.string "Hmm... I believe that's the egg smuggler\n"
	.string "we've been looking for.\p"
	.string "Here's what we'll do. I want you to\n"
	.string "distract him for a bit.\p"
	.string "I'll tell my partner to approach from\n"
	.string "the customs building, and we'll do a\l"
	.string "pince maneuver.\p"
	.string "We're counting on you!$"

Route103ConcordBridgeGuard_Text_12:
# 747 "data/maps/Route103/scripts.pory"
	.string "Be on your way, then - and stay out of\n"
	.string "trouble.$"

Route103ConcordBridgeGuard_Text_13:
# 754 "data/maps/Route103/scripts.pory"
	.string "Quickly, go distract that criminal -\n"
	.string "before he notices something is off!$"

Route103ConcordBridgeGuard_Text_14:
# 757 "data/maps/Route103/scripts.pory"
	.string "I got to thank you for that battle.\p"
	.string "If I get strong enough, maybe they'll\n"
	.string "send me somewhere other than this\l"
	.string "bridge in the boonies.$"

Route103ConcordBridgeGuard_Text_15:
# 761 "data/maps/Route103/scripts.pory"
	.string "Wherever he is now, that con man is not\n"
	.string "our concern anymore.\p"
	.string "He didn't look that dangerous anyway!$"

Route103ConcordConartist_Text_0:
# 782 "data/maps/Route103/scripts.pory"
	.string "Hey kid! Wanna earn some quick and easy\n"
	.string "pokeyen? You look like you could use it!$"

Route103ConcordConartist_Text_1:
# 783 "data/maps/Route103/scripts.pory"
	.string "Yes$"

Route103ConcordConartist_Text_2:
# 783 "data/maps/Route103/scripts.pory"
	.string "No$"

Route103ConcordConartist_Text_3:
# 786 "data/maps/Route103/scripts.pory"
	.string "Right on! So, I have some urgent\n"
	.string "deliveries to do on Petalburg...\p"
	.string "But I went and forgot my Devon Visa at\n"
	.string "home, and I have no time to go back!\p"
	.string "Bureaucracy, the bane of the small\n"
	.string "entrepeneur - am I right?\p"
	.string "I'm sure that guard at the end of the\n"
	.string "bridge won't let me pass without it...\p"
	.string "So I want you to distract him for me so\n"
	.string "I can pass unnoticed.\p"
	.string "Easy, right? Then get going, I'm on the\n"
	.string "clock here!$"

Route103ConcordConartist_Text_4:
# 802 "data/maps/Route103/scripts.pory"
	.string "Eh, scram then. Some of us have work to\n"
	.string "do.$"

Route103ConcordConartist_Text_5:
# 809 "data/maps/Route103/scripts.pory"
	.string "Come on, go distract him! Tell him\n"
	.string "there's a flying Grumpig behind him or\l"
	.string "something!\p"
	.string "I don't care how, that's what I'm paying\n"
	.string "you for!\p"
	.string "And no, I don't do upfront payments,\n"
	.string "thank you. Cash after!$"

Route103ConcordConartist_Text_6:
# 816 "data/maps/Route103/scripts.pory"
	.string "What the hell are you doing? You barely\n"
	.string "distracted him - you got to be more of a\l"
	.string "nuisance!$"

Route103ConcordConartist_Text_7:
# 820 "data/maps/Route103/scripts.pory"
	.string "Hold it right there! You're surrounded!$"

Route103ConcordConartist_Text_8:
# 841 "data/maps/Route103/scripts.pory"
	.string "What the...?$"

Route103ConcordConartist_Text_9:
# 845 "data/maps/Route103/scripts.pory"
	.string "You two-faced bastard - you set me up!\n"
	.string "You're going to get it now!\p"
	.string "No one slips Jimmy McGligar, best\n"
	.string "Pokémon egg seller of Hoenn!$"

Route103ConcordConartist_Text_10:
# 852 "data/maps/Route103/scripts.pory"
	.string "You'll never catch me alive! Outta my\n"
	.string "way!$"

Route103ConcordConartist_Text_11:
# 858 "data/maps/Route103/scripts.pory"
	.string "W-wait, you're unde-...!$"

Route103ConcordConartist_Text_12:
# 864 "data/maps/Route103/scripts.pory"
	.string "SEE YA, LOSERS...!$"

Route103ConcordConartist_Text_13:
# 870 "data/maps/Route103/scripts.pory"
	.string "GRLBGBRLB...!$"

Route103ConcordConartist_Text_14:
# 876 "data/maps/Route103/scripts.pory"
	.string "Such athleticism... he should stop\n"
	.string "conning, and become an acrobat.$"

Route103ConcordConartist_Text_15:
# 880 "data/maps/Route103/scripts.pory"
	.string "Indeed... at any rate, it's not our\n"
	.string "problem any more.$"

Route103ConcordConartist_Text_16:
# 892 "data/maps/Route103/scripts.pory"
	.string "Thank you for your help, civilian! Now we\n"
	.string "can put this long shift to an end.$"

Route103ConcordConartist_Text_17:
# 894 "data/maps/Route103/scripts.pory"
	.string "Here, this is for your trouble.$"

Route103ConcordConartist_Text_18:
# 899 "data/maps/Route103/scripts.pory"
	.string "Received 1000¥!$"

ConArtistEgg_Text_0:
# 937 "data/maps/Route103/scripts.pory"
	.string "Hands off my wares, pal! This egg is\n"
	.string "mine!$"

ConArtistEgg_Text_1:
# 943 "data/maps/Route103/scripts.pory"
	.string "The shady dealer left this egg behind...$"

ConArtistEgg_Text_2:
# 946 "data/maps/Route103/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

RiverFerryGuyUp_Text_0:
# 961 "data/maps/Route103/scripts.pory"
	.string "I'm so sorry, kid! It's not safe to sail\n"
	.string "the river now - it's raining too much!\p"
	.string "Come back when it rains less, or it\n"
	.string "doesn't at all, and I'd be glad to take\l"
	.string "you!$"

RiverFerryGuyUp_Text_1:
# 970 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lad?$"

RiverFerryGuyUp_Text_2:
# 972 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lass?$"

RiverFerryGuyUp_Text_3:
# 977 "data/maps/Route103/scripts.pory"
	.string "Would you like to sail upstream?$"

RiverFerryGuyUp_Text_4:
# 981 "data/maps/Route103/scripts.pory"
	.string "Then hop on!$"

RiverFerryGuyUp_Text_5:
# 998 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're going upstream, so it'll\n"
	.string "be a bit slow.$"

RiverFerryGuyUp_Text_6:
# 1020 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back downstream.$"

RiverFerryGuyUp_Text_7:
# 1033 "data/maps/Route103/scripts.pory"
	.string "Ah, shame... tell me if you ever do!$"

RiverFerryGuyDown_Text_0:
# 1050 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail\n"
	.string "downstream?$"

RiverFerryGuyDown_Text_1:
# 1071 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're sailing downstream, so\n"
	.string "brace yourself!$"

RiverFerryGuyDown_Text_2:
# 1093 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back upstream.$"

RiverFerryBoat_Text_0:
# 1115 "data/maps/Route103/scripts.pory"
	.string "It's an old boat, but it's well taken\n"
	.string "care of.$"

RiverFerryManNotThatEntry_Text_0:
# 1124 "data/maps/Route103/scripts.pory"
	.string "Not so fast, young one...! If you want to\n"
	.string "board, do it after me.$"

FisherGuruRoute103_Text_0:
# 1142 "data/maps/Route103/scripts.pory"
	.string "Sssh... did you hear that? It's... IT'S\n"
	.string "COMING!$"

FisherGuruRoute103_Text_1:
# 1156 "data/maps/Route103/scripts.pory"
	.string "CRAAAAAAW!!$"

FisherGuruRoute103_Text_2:
# 1164 "data/maps/Route103/scripts.pory"
	.string "AAH, CRAB BASKETS!$"

FisherGuruRoute103_Text_3:
# 1167 "data/maps/Route103/scripts.pory"
	.string "That was the LEGENDARY MUD CRAB of\n"
	.string "Route 103 - I've been looking for it for\l"
	.string "WEEKS!\p"
	.string "But I was so awe-struck... that I could\n"
	.string "not do anything!!$"

FisherGuruRoute103_Text_4:
# 1170 "data/maps/Route103/scripts.pory"
	.string "Still, this can't be a coincidence - you\n"
	.string "both showed up at the same time!!\p"
	.string "HMM... my intuition tells me it saw\n"
	.string "something in you. But then it left\l"
	.string "disappointed.$"

FisherGuruRoute103_Text_5:
# 1174 "data/maps/Route103/scripts.pory"
	.string "But we can fix that. Here, take THIS!$"

FisherGuruRoute103_Text_6:
# 1178 "data/maps/Route103/scripts.pory"
	.string "I want you to take that rod and fish at\n"
	.string "least THREE SPECIES OF POKÉMON!\p"
	.string "WHY? Because only then will the\n"
	.string "LEGENDARY MUDCRAB judge you as worthy,\l"
	.string "and show itself again!\p"
	.string "Do not question the intuition of Ivan,\n"
	.string "the Legendary Releer - just embrace it,\l"
	.string "and fulfil your destiny!!$"

FisherGuruRoute103_Text_7:
# 1191 "data/maps/Route103/scripts.pory"
	.string "AHOY! How's the FISHING going!?$"

FisherGuruRoute103_Text_8:
# 1193 "data/maps/Route103/scripts.pory"
	.string "About your request...$"

FisherGuruRoute103_Text_9:
# 1193 "data/maps/Route103/scripts.pory"
	.string "Did you see the Mud Crab?$"

FisherGuruRoute103_Text_10:
# 1193 "data/maps/Route103/scripts.pory"
	.string "How's it going?$"

FisherGuruRoute103_Text_11:
# 1193 "data/maps/Route103/scripts.pory"
	.string "It's nothing$"

FisherGuruRoute103_Text_12:
# 1219 "data/maps/Route103/scripts.pory"
	.string "What? You haven't fished a single\n"
	.string "Pokémon? NADA? NICHT?$"

FisherGuruRoute103_Text_13:
# 1223 "data/maps/Route103/scripts.pory"
	.string "Hm? You have only fished ONE measly\n"
	.string "Pokémon?! It's a start, but...$"

FisherGuruRoute103_Text_14:
# 1227 "data/maps/Route103/scripts.pory"
	.string "Oh, you have fished a couple Pokémon\n"
	.string "already? Not bad, but...$"

FisherGuruRoute103_Text_15:
# 1232 "data/maps/Route103/scripts.pory"
	.string "Ah, you've fished at least 3 Pokémon?\n"
	.string "Good, GOOD!\p"
	.string "I'm confident the Legendary Mud Crab\n"
	.string "will acknowledge you and show up.\p"
	.string "Let's wait a bit!$"

FisherGuruRoute103_Text_16:
# 1245 "data/maps/Route103/scripts.pory"
	.string "Hmm... I should have known. Such a\n"
	.string "measly fishing test...\p"
	.string "Is NOT ENOUGH to make the Mud Crab\n"
	.string "acknowledge you!$"

FisherGuruRoute103_Text_17:
# 1248 "data/maps/Route103/scripts.pory"
	.string "I suppose I've got no choice... here,\n"
	.string "TAKE THIS!$"

FisherGuruRoute103_Text_18:
# 1252 "data/maps/Route103/scripts.pory"
	.string "I want you to use that rod to bring me a\n"
	.string "BIG PEARL!\p"
	.string "If you are a true fisher... you will know\n"
	.string "how.\p"
	.string "Do that, and I'm sure next time the Mud\n"
	.string "Crab will show itself!$"

FisherGuruRoute103_Text_19:
# 1261 "data/maps/Route103/scripts.pory"
	.string "Like I said, I need you to fish 3 species\n"
	.string "of Pokémon!\p"
	.string "If you are the fisher the Mud Crab\n"
	.string "believes you to be, you shouldn't need\l"
	.string "any guidance!$"

FisherGuruRoute103_Text_20:
# 1265 "data/maps/Route103/scripts.pory"
	.string "O-of course I could give it, but that\n"
	.string "would defeat the purpose!$"

FisherGuruRoute103_Text_21:
# 1276 "data/maps/Route103/scripts.pory"
	.string "pearl$"

FisherGuruRoute103_Text_22:
# 1286 "data/maps/Route103/scripts.pory"
	.string "no pearl$"

FisherGuruRoute103_Text_23:
# 1294 "data/maps/Route103/scripts.pory"
	.string "Regrettably, I haven't. Not even the tip\n"
	.string "of that lustruous, star-shaped crown\l"
	.string "of his...\p"
	.string "But don't worry - he won't swim away\n"
	.string "easily.$"

FisherGuruRoute103_Text_24:
# 1298 "data/maps/Route103/scripts.pory"
	.string "They say he is forever waiting for a\n"
	.string "trainer who saved his life during the\l"
	.string "Assault on Route 103.\p"
	.string "Sadly, that trainer died that day. They\n"
	.string "will never meet again...$"

FisherGuruRoute103_Text_25:
# 1303 "data/maps/Route103/scripts.pory"
	.string "In spite of its beastly appearance, the\n"
	.string "Mud Crab is a loyal, tender creature.\p"
	.string "That's why I wish to catch him, and help\n"
	.string "him heal!$"

FisherGuruRoute103_Text_26:
# 1310 "data/maps/Route103/scripts.pory"
	.string "Ah, well, aside from the Mud Crab\n"
	.string "business... not very good, I must say.$"

FisherGuruRoute103_Text_27:
# 1313 "data/maps/Route103/scripts.pory"
	.string "The sea is poisoned, the rivers are\n"
	.string "muddy...\p"
	.string "Most of my buddies have moved up north.$"

FisherGuruRoute103_Text_28:
# 1317 "data/maps/Route103/scripts.pory"
	.string "But me, I like the challenge!$"

FisherGuruRoute103_Text_29:
# 1326 "data/maps/Route103/scripts.pory"
	.string "Then don't distract me! Does it look\n"
	.string "like I'm doing nothing here!?$"

FisherGuruRoute103_Text_30:
# 1329 "data/maps/Route103/scripts.pory"
	.string "... don't answer that.$"

MoveTutorSign_Text_0:
# 1344 "data/maps/Route103/scripts.pory"
	.string "Move Tutor Colton's House$"

Fishercallsfornumber_Text_0:
# 1352 "data/maps/Route103/scripts.pory"
	.string "Wait - add me on Devon Net! We must\n"
	.string "keep in touch about this!$"

Sharpy103_Outro::
# 489 "data/maps/Route103/scripts.pory"
	.string "Heh... you're a soldier alright...!$"

Tourist103_Outro::
# 583 "data/maps/Route103/scripts.pory"
	.string "Wait a minute... yeah, you're not that \nthief. Sorry!$"

Veteran103_Intro::
# 679 "data/maps/Route103/scripts.pory"
	.string "They told me I'm too old to enlist...  but \nI'm stronger than you young'uns!\pI'll show you!$"

Veteran103_Outro::
# 682 "data/maps/Route103/scripts.pory"
	.string "Grr... you won the battle, but\n not the war!$"

Veteran103_Intro2::
# 685 "data/maps/Route103/scripts.pory"
	.string "There you are - I've been preparing\n my counterattack! CHAAARGE!$"

Veteran103_Outro2::
# 688 "data/maps/Route103/scripts.pory"
	.string "... I surrender. Again.$"

DevonGuard103_Outro::
# 772 "data/maps/Route103/scripts.pory"
	.string "That could have gone better...$"

ShadyDealer103_Outro::
# 927 "data/maps/Route103/scripts.pory"
	.string "I... I-I'm not going back to jail!$"
