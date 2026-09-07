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
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 314 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_0
# 316 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 317 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_1
# 318 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonDrivercheckedby::
# 322 "data/maps/Route103/scripts.pory"
	lock
# 323 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_0
# 324 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonDrivercheckedby_Text_0
# 326 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_1
# 327 "data/maps/Route103/scripts.pory"
	waitmovement
# 328 "data/maps/Route103/scripts.pory"
	releaseall
	return


Sharpy103::
# 333 "data/maps/Route103/scripts.pory"
	lockall
# 334 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 335 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 336 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 337 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 339 "data/maps/Route103/scripts.pory"
	special DoTVShow
# 341 "data/maps/Route103/scripts.pory"
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 349 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 364 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 365 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 366 "data/maps/Route103/scripts.pory"
	addobject 25
# 367 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 32
# 368 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 369 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 370 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 371 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 372 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 373 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 375 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 376 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 377 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 378 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_1
# 379 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 380 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 381 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 382 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 384 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 385 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 386 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 387 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 389 "data/maps/Route103/scripts.pory"
	goto_if_set saidnotosharpyinoldale, Sharpy103_8
# 417 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 418 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 419 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 420 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 421 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 423 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 424 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 425 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 426 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 428 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 429 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 430 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 431 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 432 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 435 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 436 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 437 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 438 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 440 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_2
# 441 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 442 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 443 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 444 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_15
# 447 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 448 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 449 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 450 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_16
Sharpy103_7:
# 454 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 455 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 456 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_3
# 457 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_4
# 458 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 459 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 460 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_5
# 461 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 463 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 464 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 465 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 466 "data/maps/Route103/scripts.pory"
	setflag DLCclassends
# 467 "data/maps/Route103/scripts.pory"
	clearflag DLCrecesstarts
# 468 "data/maps/Route103/scripts.pory"
	setflag Sharpydefeatedat103
# 469 "data/maps/Route103/scripts.pory"
	setvar VAR_SHARPYANDCAMELIAOLDALE, 1
# 471 "data/maps/Route103/scripts.pory"
	releaseall
# 472 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Sharpy103_11
# 474 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
	return

Sharpy103_2:
# 343 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 344 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 345 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 346 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 347 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 351 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 352 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 353 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 354 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 355 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 356 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 357 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 358 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 359 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 360 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 361 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 362 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4

Sharpy103_8:
# 392 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 393 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 394 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 395 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 397 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 398 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 399 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 400 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 403 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 404 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 405 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 406 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 409 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 410 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 411 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 412 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_10
	goto Sharpy103_7

Sharpy103_11:
# 473 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103TouristApproach0::
# 483 "data/maps/Route103/scripts.pory"
	lockall
# 484 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 485 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 486 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 487 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 488 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 489 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach1::
# 493 "data/maps/Route103/scripts.pory"
	lockall
# 494 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 495 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 496 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 497 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 498 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach1_Movement_0
# 499 "data/maps/Route103/scripts.pory"
	waitmovement
# 500 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 501 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach2::
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
	applymovement 27, Route103TouristApproach2_Movement_0
# 511 "data/maps/Route103/scripts.pory"
	waitmovement
# 512 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 513 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach3::
# 517 "data/maps/Route103/scripts.pory"
	lockall
# 518 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 519 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 520 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 521 "data/maps/Route103/scripts.pory"
	waitmovement
# 522 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 523 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach3_Movement_0
# 524 "data/maps/Route103/scripts.pory"
	waitmovement
# 525 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 526 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103Tourist::
# 530 "data/maps/Route103/scripts.pory"
	lockall
# 531 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 532 "data/maps/Route103/scripts.pory"
touristafterapproach:
# 533 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 0
	goto_if_eq Route103Tourist_2
Route103Tourist_1:
# 559 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 1
	goto_if_eq Route103Tourist_5
Route103Tourist_4:
# 566 "data/maps/Route103/scripts.pory"
finishtouristscript:
# 567 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103Tourist_2:
# 535 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 536 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_0
# 537 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_TOURIST_103, Tourist103_Outro
# 540 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103Tourist_8
# 542 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
Route103Tourist_7:
# 544 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_1
# 545 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 546 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 547 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 548 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_2
# 549 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 550 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_3
# 552 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 553 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_4
# 555 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 1
# 556 "data/maps/Route103/scripts.pory"
	goto finishtouristscript
	goto Route103Tourist_1

Route103Tourist_5:
# 561 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 562 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 563 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_5
	goto Route103Tourist_4

Route103Tourist_8:
# 541 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103Tourist_7


Route103Touristbikepushed::
# 576 "data/maps/Route103/scripts.pory"
	lockall
# 577 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 578 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 579 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 580 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_0
# 581 "data/maps/Route103/scripts.pory"
	closemessage
# 583 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 584 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 585 "data/maps/Route103/scripts.pory"
	playse SE_BIKE_HOP
# 586 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 587 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route103Touristbikepushed_Movement_1
# 588 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 589 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 590 "data/maps/Route103/scripts.pory"
	setobjectxy 27, 0, 0
# 591 "data/maps/Route103/scripts.pory"
	setobjectxy 26, 0, 0
# 592 "data/maps/Route103/scripts.pory"
	setflag touristhelped
# 593 "data/maps/Route103/scripts.pory"
	clearflag touristonbike
# 594 "data/maps/Route103/scripts.pory"
	addobject 29
# 595 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 22, 9
# 596 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 597 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 598 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_1
# 599 "data/maps/Route103/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 600 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103TouristApproach0_Movement_1
# 601 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_2
# 603 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_2
# 604 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_3
# 606 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103Touristbikepushed_Movement_2
# 607 "data/maps/Route103/scripts.pory"
	waitmovement
# 609 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 610 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 611 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 612 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 613 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 614 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 615 "data/maps/Route103/scripts.pory"
	waitse
# 617 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_4
# 619 "data/maps/Route103/scripts.pory"
	removeobject 29
# 620 "data/maps/Route103/scripts.pory"
	setflag touristonbike
# 622 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 2
# 623 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103TouristNotThatWay::
# 628 "data/maps/Route103/scripts.pory"
	lockall
# 629 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 630 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 631 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 632 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristNotThatWay_Text_0
# 633 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach1_Movement_0
# 634 "data/maps/Route103/scripts.pory"
	waitmovement
# 635 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103VeteranBattle::
# 641 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, Route103VeteranRegister
# 642 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 643 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 644 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranBattle_Text_0
# 645 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRegister::
# 650 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 651 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 652 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_0
# 654 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 655 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRematch::
# 660 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro2, Veteran103_Outro2
# 661 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRematch_Text_0
	end


Route103ConcordBridgeGuard::
# 681 "data/maps/Route103/scripts.pory"
	lockall
# 682 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 683 "data/maps/Route103/scripts.pory"
	applymovement 30, Route103DevonDrivercheckedby_Movement_0
# 684 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordBridgeGuard_2
Route103ConcordBridgeGuard_1:
# 688 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_7
Route103ConcordBridgeGuard_4:
# 734 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route103ConcordBridgeGuard_12
Route103ConcordBridgeGuard_11:
# 740 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_20
Route103ConcordBridgeGuard_17:
# 744 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_29
Route103ConcordBridgeGuard_27:
# 748 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_38
Route103ConcordBridgeGuard_35:
# 753 "data/maps/Route103/scripts.pory"
finishguardscript:
# 754 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordBridgeGuard_2:
# 685 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_0
	goto Route103ConcordBridgeGuard_1

Route103ConcordBridgeGuard_5:
# 690 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_1
# 691 "data/maps/Route103/scripts.pory"
guarddistractchoice:
# 692 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordBridgeGuard_Text_2, Route103ConcordBridgeGuard_Text_3, Route103ConcordBridgeGuard_Text_4, Route103ConcordBridgeGuard_Text_5, Route103ConcordBridgeGuard_Text_6
# 694 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordBridgeGuard_15
Route103ConcordBridgeGuard_14:
# 700 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordBridgeGuard_25
Route103ConcordBridgeGuard_24:
# 705 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route103ConcordBridgeGuard_33
Route103ConcordBridgeGuard_32:
# 722 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route103ConcordBridgeGuard_42
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_6:
# 688 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_5
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_7:
# 688 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordBridgeGuard_6
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_12:
# 735 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_12
# 736 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_11

Route103ConcordBridgeGuard_15:
# 695 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_7
# 698 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_14

Route103ConcordBridgeGuard_18:
# 742 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_13
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_19:
# 740 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_18
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_20:
# 740 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_19
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_25:
# 701 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_8
# 703 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_24

Route103ConcordBridgeGuard_28:
# 745 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_14
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_29:
# 744 "data/maps/Route103/scripts.pory"
	goto_if_set helpedconcordconartist, Route103ConcordBridgeGuard_28
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_33:
# 706 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_9
# 708 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_DEVONGUARD_103, DevonGuard103_Outro
# 709 "data/maps/Route103/scripts.pory"
	setflag helpedconcordconartist
# 711 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 714 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 716 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_10
# 717 "data/maps/Route103/scripts.pory"
	clearflag conartistrewardsinoldale
# 718 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 719 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_32

Route103ConcordBridgeGuard_36:
# 749 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_15
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_37:
# 748 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, Route103ConcordBridgeGuard_36
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_38:
# 748 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_37
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_42:
# 723 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_11
# 727 "data/maps/Route103/scripts.pory"
	setflag betrayedconcordconartist
# 728 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_4


Route103ConcordConartist::
# 764 "data/maps/Route103/scripts.pory"
	lockall
# 765 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 766 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 768 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordConartist_2
Route103ConcordConartist_1:
# 795 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_7
Route103ConcordConartist_4:
# 801 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_17
Route103ConcordConartist_14:
# 907 "data/maps/Route103/scripts.pory"
finishconartistscript:
# 908 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordConartist_2:
# 770 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_0
# 771 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 773 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordConartist_12
Route103ConcordConartist_11:
# 789 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordConartist_21
	goto Route103ConcordConartist_1

Route103ConcordConartist_5:
# 797 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_6:
# 795 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_7:
# 795 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordConartist_6
	goto Route103ConcordConartist_4

Route103ConcordConartist_12:
# 774 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_3
# 781 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 782 "data/maps/Route103/scripts.pory"
	waitmovement 28
# 783 "data/maps/Route103/scripts.pory"
	setflag conartistaskeddistract
# 784 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 785 "data/maps/Route103/scripts.pory"
	waitmovement 28
# 786 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_11

Route103ConcordConartist_15:
# 803 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 804 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_6
# 807 "data/maps/Route103/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 808 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_7
# 814 "data/maps/Route103/scripts.pory"
	clearflag devonsvsconartist
# 815 "data/maps/Route103/scripts.pory"
	addobject 31
# 816 "data/maps/Route103/scripts.pory"
	setobjectxy 31, 42, 37
# 817 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 818 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 819 "data/maps/Route103/scripts.pory"
	waitmovement
# 820 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_0
# 821 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 824 "data/maps/Route103/scripts.pory"
	addobject 32
# 825 "data/maps/Route103/scripts.pory"
	setobjectxy 32, 30, 39
# 826 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_1
# 828 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_2
# 829 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_8
# 831 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 833 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_9
# 836 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHADYDEALER_103, ShadyDealer103_Outro
# 838 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonGruntCheckingDriver_Movement_0
# 839 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 840 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_10
# 842 "data/maps/Route103/scripts.pory"
	playse SE_M_COMET_PUNCH
# 843 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ConcordConartist_Movement_3
# 845 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_4
# 846 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_11
# 847 "data/maps/Route103/scripts.pory"
	playse SE_M_MEGA_KICK2
# 848 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 849 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_5
# 850 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_6
# 851 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 852 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_12
# 853 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_7
# 854 "data/maps/Route103/scripts.pory"
	playse SE_M_JUMP_KICK
# 855 "data/maps/Route103/scripts.pory"
	waitse
# 856 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 857 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 858 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_13
# 860 "data/maps/Route103/scripts.pory"
	waitmovement
# 862 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103DevonGruntCheckingDriver_Movement_0
# 864 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_14
# 866 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103DevonGruntCheckingDriver_Movement_0
# 868 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_15
# 870 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_8
# 871 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_8
# 872 "data/maps/Route103/scripts.pory"
	waitmovement
# 873 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 874 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 875 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103TouristApproach1_Movement_0
# 876 "data/maps/Route103/scripts.pory"
	waitmovement
# 877 "data/maps/Route103/scripts.pory"
	removeobject 31
# 878 "data/maps/Route103/scripts.pory"
	waitmovement
# 879 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 880 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_16
# 882 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_17
# 883 "data/maps/Route103/scripts.pory"
	playse SE_SHOP
# 884 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_18
# 886 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_9
# 887 "data/maps/Route103/scripts.pory"
	waitmovement
# 889 "data/maps/Route103/scripts.pory"
	waitmovement
# 891 "data/maps/Route103/scripts.pory"
	removeobject 28
# 893 "data/maps/Route103/scripts.pory"
	removeobject 32
# 894 "data/maps/Route103/scripts.pory"
	setflag devonsvsconartist
# 895 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 896 "data/maps/Route103/scripts.pory"
	clearflag devonbridgeguardgoestoconartist
# 897 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 898 "data/maps/Route103/scripts.pory"
	fadenewbgm 1
# 899 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103ConcordConartist_24
# 902 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
Route103ConcordConartist_23:
# 903 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 905 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_14

Route103ConcordConartist_16:
# 801 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_15
	goto Route103ConcordConartist_14

Route103ConcordConartist_17:
# 801 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordConartist_16
	goto Route103ConcordConartist_14

Route103ConcordConartist_21:
# 790 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_4
# 791 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 792 "data/maps/Route103/scripts.pory"
	waitmovement 28
	goto Route103ConcordConartist_1

Route103ConcordConartist_24:
# 901 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103ConcordConartist_23


ConArtistEgg::
# 917 "data/maps/Route103/scripts.pory"
	lockall
# 918 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 919 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, ConArtistEgg_2
ConArtistEgg_1:
# 926 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, ConArtistEgg_4
	return

ConArtistEgg_2:
# 920 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 921 "data/maps/Route103/scripts.pory"
	applymovement 28, ConArtistEgg_Movement_0
# 922 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_0
# 923 "data/maps/Route103/scripts.pory"
	releaseall
# 924 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
	goto ConArtistEgg_1

ConArtistEgg_4:
# 928 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_1
# 929 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 930 "data/maps/Route103/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 931 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_2
# 932 "data/maps/Route103/scripts.pory"
	removeobject 33
# 933 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 934 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryGuyUp::
# 941 "data/maps/Route103/scripts.pory"
	lockall
# 942 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 943 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 945 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq RiverFerryGuyUp_2
RiverFerryGuyUp_1:
# 952 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_5
RiverFerryGuyUp_4:
# 962 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 963 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 965 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyUp_8
RiverFerryGuyUp_7:
# 1017 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyUp_14
RiverFerryGuyUp_13:
# 1021 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyUp_2:
# 946 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyUp_1

RiverFerryGuyUp_5:
# 953 "data/maps/Route103/scripts.pory"
	checkplayergender
# 954 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyUp_11
RiverFerryGuyUp_10:
# 956 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyUp_20
	goto RiverFerryGuyUp_4

RiverFerryGuyUp_8:
# 966 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
# 967 "data/maps/Route103/scripts.pory"
	removeobject 36
# 968 "data/maps/Route103/scripts.pory"
	removeobject 37
# 969 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 970 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 972 "data/maps/Route103/scripts.pory"
	hidefollower
# 973 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 974 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_0
# 975 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 976 "data/maps/Route103/scripts.pory"
	removeobject 34
# 977 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 978 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 979 "data/maps/Route103/scripts.pory"
	hideplayer
# 980 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 981 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_1
# 982 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 983 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_5
# 984 "data/maps/Route103/scripts.pory"
	closemessage
# 985 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 986 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_2
# 987 "data/maps/Route103/scripts.pory"
	applymovement 35, RiverFerryGuyUp_Movement_3
# 988 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 989 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 991 "data/maps/Route103/scripts.pory"
	clearflag ferryman103up
# 992 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103up
# 993 "data/maps/Route103/scripts.pory"
	addobject 36
# 994 "data/maps/Route103/scripts.pory"
	addobject 37
# 996 "data/maps/Route103/scripts.pory"
	showplayer
# 997 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 16
# 998 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 999 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_1
# 1000 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1002 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_17
# 1004 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
RiverFerryGuyUp_16:
# 1005 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
# 1006 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1007 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1008 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_2
# 1009 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1010 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1011 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1012 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1013 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
	goto RiverFerryGuyUp_7

RiverFerryGuyUp_11:
# 955 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyUp_10

RiverFerryGuyUp_14:
# 1018 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_7
	goto RiverFerryGuyUp_13

RiverFerryGuyUp_17:
# 1003 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyUp_16

RiverFerryGuyUp_20:
# 957 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
	goto RiverFerryGuyUp_4


RiverFerryGuyDown::
# 1025 "data/maps/Route103/scripts.pory"
	lockall
# 1026 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1027 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_0
# 1028 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_2
RiverFerryGuyDown_1:
# 1035 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_0
# 1036 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 1038 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyDown_5
RiverFerryGuyDown_4:
# 1090 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyDown_11
RiverFerryGuyDown_10:
# 1094 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyDown_2:
# 1029 "data/maps/Route103/scripts.pory"
	checkplayergender
# 1030 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyDown_8
RiverFerryGuyDown_7:
# 1032 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyDown_17
	goto RiverFerryGuyDown_1

RiverFerryGuyDown_5:
# 1039 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
# 1040 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1041 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1042 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1043 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
# 1045 "data/maps/Route103/scripts.pory"
	hidefollower
# 1046 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1047 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_0
# 1048 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1049 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1050 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 1051 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1052 "data/maps/Route103/scripts.pory"
	hideplayer
# 1053 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 1054 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_0
# 1055 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1056 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_1
# 1057 "data/maps/Route103/scripts.pory"
	closemessage
# 1058 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 1059 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_1
# 1060 "data/maps/Route103/scripts.pory"
	applymovement 36, RiverFerryGuyDown_Movement_2
# 1061 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1062 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 1064 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 1065 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 1066 "data/maps/Route103/scripts.pory"
	addobject 34
# 1067 "data/maps/Route103/scripts.pory"
	addobject 35
# 1069 "data/maps/Route103/scripts.pory"
	showplayer
# 1070 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 32
# 1071 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 1072 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_1
# 1073 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1075 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_14
# 1077 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
RiverFerryGuyDown_13:
# 1078 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_2
# 1079 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1080 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1081 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_2
# 1082 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1083 "data/maps/Route103/scripts.pory"
	removeobject 36
# 1084 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1085 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 1086 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	goto RiverFerryGuyDown_4

RiverFerryGuyDown_8:
# 1031 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyDown_7

RiverFerryGuyDown_11:
# 1091 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_7
	goto RiverFerryGuyDown_10

RiverFerryGuyDown_14:
# 1076 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyDown_13

RiverFerryGuyDown_17:
# 1033 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
	goto RiverFerryGuyDown_1


RiverFerryBoat::
# 1099 "data/maps/Route103/scripts.pory"
	lockall
# 1100 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryBoat_Text_0
# 1101 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryManNotThatEntry::
# 1105 "data/maps/Route103/scripts.pory"
	lockall
# 1106 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1107 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 1108 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 1109 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryManNotThatEntry_Text_0
# 1110 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1111 "data/maps/Route103/scripts.pory"
	waitmovement
# 1112 "data/maps/Route103/scripts.pory"
	releaseall
	return


FisherGuruRoute103::
# 1116 "data/maps/Route103/scripts.pory"
	lock
# 1117 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonDrivercheckedby_Movement_0
# 1118 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_eq FisherGuruRoute103_2
FisherGuruRoute103_1:
# 1173 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_gt FisherGuruRoute103_5
FisherGuruRoute103_4:
# 1320 "data/maps/Route103/scripts.pory"
finishfisherscript:
# 1321 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1322 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1323 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1324 "data/maps/Route103/scripts.pory"
	releaseall
	return

FisherGuruRoute103_2:
# 1121 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1123 "data/maps/Route103/scripts.pory"
	playse SE_M_SURF
# 1124 "data/maps/Route103/scripts.pory"
	waitse
# 1125 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1126 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_0
# 1127 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_0
# 1129 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1130 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1132 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1133 "data/maps/Route103/scripts.pory"
	waitse
# 1134 "data/maps/Route103/scripts.pory"
	clearflag mudcrabcrawdaunt
# 1135 "data/maps/Route103/scripts.pory"
	addobject 39
# 1136 "data/maps/Route103/scripts.pory"
	playse SE_SHINY
# 1137 "data/maps/Route103/scripts.pory"
	dofieldeffectsparkle 27, 13, 9
# 1138 "data/maps/Route103/scripts.pory"
	waitse
# 1140 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_CRAWDAUNT, CRY_MODE_ENCOUNTER
# 1141 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_1
# 1142 "data/maps/Route103/scripts.pory"
	removeobject 39
# 1143 "data/maps/Route103/scripts.pory"
	setflag mudcrabcrawdaunt
# 1144 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1145 "data/maps/Route103/scripts.pory"
	waitse
# 1146 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, FisherGuruRoute103_8
FisherGuruRoute103_7:
# 1149 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_2
# 1150 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonDrivercheckedby_Movement_1
# 1151 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1152 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_3
# 1154 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1155 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_4
# 1158 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1159 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_5
# 1161 "data/maps/Route103/scripts.pory"
	giveitem ITEM_OLD_ROD
# 1163 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_6
# 1166 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1167 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1168 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 1
# 1169 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_1

FisherGuruRoute103_5:
# 1175 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1176 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_7
# 1177 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1178 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, FisherGuruRoute103_Text_8, FisherGuruRoute103_Text_9, FisherGuruRoute103_Text_10, FisherGuruRoute103_Text_11
# 1180 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherGuruRoute103_11
FisherGuruRoute103_10:
# 1277 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FisherGuruRoute103_14
FisherGuruRoute103_13:
# 1293 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FisherGuruRoute103_20
FisherGuruRoute103_19:
# 1309 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq FisherGuruRoute103_27
	goto FisherGuruRoute103_4

FisherGuruRoute103_8:
# 1147 "data/maps/Route103/scripts.pory"
	setseenmon SPECIES_CRAWDAUNT
	goto FisherGuruRoute103_7

FisherGuruRoute103_11:
# 1181 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_17
FisherGuruRoute103_16:
# 1257 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 3
	goto_if_eq FisherGuruRoute103_22
	goto FisherGuruRoute103_10

FisherGuruRoute103_14:
# 1278 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1279 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_23
# 1281 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1282 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1283 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_24
# 1286 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1287 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1288 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_25
# 1290 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_13

FisherGuruRoute103_17:
# 1183 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_MAGIKARP
# 1184 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_25
FisherGuruRoute103_24:
# 1187 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_FEEBAS
# 1188 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_33
FisherGuruRoute103_32:
# 1191 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_TENTACOOL
# 1192 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_36
FisherGuruRoute103_35:
# 1195 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_SURSKIT
# 1196 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_39
FisherGuruRoute103_38:
# 1199 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_POLIWAG
# 1200 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_42
FisherGuruRoute103_41:
# 1203 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 0
	goto_if_eq FisherGuruRoute103_45
FisherGuruRoute103_44:
# 1207 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 1
	goto_if_eq FisherGuruRoute103_48
FisherGuruRoute103_47:
# 1211 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 2
	goto_if_eq FisherGuruRoute103_51
FisherGuruRoute103_50:
# 1215 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 3
	goto_if_ge FisherGuruRoute103_54
FisherGuruRoute103_53:
# 1244 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FisherGuruRoute103_56
	goto FisherGuruRoute103_16

FisherGuruRoute103_20:
# 1294 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1295 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_26
# 1296 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1297 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1298 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_27
# 1300 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1301 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1302 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_28
# 1303 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1304 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1305 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_19

FisherGuruRoute103_22:
	checkitem ITEM_BIG_PEARL
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_29
# 1270 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1271 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_22
# 1272 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_25:
# 1185 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_24

FisherGuruRoute103_27:
# 1310 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1311 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_29
# 1312 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1313 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1314 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_30
# 1315 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_4

FisherGuruRoute103_29:
# 1260 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1261 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_21
# 1265 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_33:
# 1189 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_32

FisherGuruRoute103_36:
# 1193 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_35

FisherGuruRoute103_39:
# 1197 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_38

FisherGuruRoute103_42:
# 1201 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_41

FisherGuruRoute103_45:
# 1204 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_12
	goto FisherGuruRoute103_44

FisherGuruRoute103_48:
# 1208 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_13
	goto FisherGuruRoute103_47

FisherGuruRoute103_51:
# 1212 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_14
	goto FisherGuruRoute103_50

FisherGuruRoute103_54:
# 1216 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1217 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_15
# 1219 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1220 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1221 "data/maps/Route103/scripts.pory"
	waitmovement
# 1222 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1223 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1224 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1225 "data/maps/Route103/scripts.pory"
	playse SE_M_ICY_WIND
# 1226 "data/maps/Route103/scripts.pory"
	waitse
# 1227 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1228 "data/maps/Route103/scripts.pory"
	fadeinbgm 1
# 1229 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1230 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_16
# 1232 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1233 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_17
# 1234 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonDrivercheckedby_Movement_1
# 1235 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 1236 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1237 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_18
# 1240 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 3
# 1241 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_53

FisherGuruRoute103_56:
# 1245 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1246 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_19
# 1248 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1249 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1250 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_20
# 1252 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_16


MoveTutorSign::
# 1328 "data/maps/Route103/scripts.pory"
	lock
# 1329 "data/maps/Route103/scripts.pory"
	msgbox MoveTutorSign_Text_0
# 1330 "data/maps/Route103/scripts.pory"
	release
	return


Fishercallsfornumber::
# 1334 "data/maps/Route103/scripts.pory"
	lock
# 1335 "data/maps/Route103/scripts.pory"
	applymovement 38, ConArtistEgg_Movement_0
# 1336 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1337 "data/maps/Route103/scripts.pory"
	msgbox Fishercallsfornumber_Text_0
# 1338 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_FISHER_103
# 1339 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 2
# 1340 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1341 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1342 "data/maps/Route103/scripts.pory"
	release
	return


# 313 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_0:
# 313 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 316 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_1:
# 316 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 323 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_0:
# 323 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 326 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_1:
# 326 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 377 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 377 "data/maps/Route103/scripts.pory"
	face_right
	step_end

# 378 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 378 "data/maps/Route103/scripts.pory"
	jump_in_place_left
	step_end

# 440 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 440 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 456 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 456 "data/maps/Route103/scripts.pory"
	jump_2_down
# 456 "data/maps/Route103/scripts.pory"
	walk_down
# 456 "data/maps/Route103/scripts.pory"
	walk_down
# 456 "data/maps/Route103/scripts.pory"
	walk_down
# 456 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 457 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 457 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 460 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 460 "data/maps/Route103/scripts.pory"
	jump_2_down
# 460 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 486 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_0:
# 486 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 488 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_1:
# 488 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 498 "data/maps/Route103/scripts.pory"
Route103TouristApproach1_Movement_0:
# 498 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 510 "data/maps/Route103/scripts.pory"
Route103TouristApproach2_Movement_0:
# 510 "data/maps/Route103/scripts.pory"
	walk_up
# 510 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 523 "data/maps/Route103/scripts.pory"
Route103TouristApproach3_Movement_0:
# 523 "data/maps/Route103/scripts.pory"
	walk_up
# 523 "data/maps/Route103/scripts.pory"
	walk_up
# 523 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 578 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_0:
# 578 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
# 578 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 587 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_1:
# 587 "data/maps/Route103/scripts.pory"
	walk_up
# 587 "data/maps/Route103/scripts.pory"
	walk_up
# 587 "data/maps/Route103/scripts.pory"
	walk_up
# 587 "data/maps/Route103/scripts.pory"
	walk_up
# 587 "data/maps/Route103/scripts.pory"
	walk_up
# 587 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 606 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_2:
# 606 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 606 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 606 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 606 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 606 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 606 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 606 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 606 "data/maps/Route103/scripts.pory"
	walk_fast_right
	step_end

# 820 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_0:
# 820 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 820 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 820 "data/maps/Route103/scripts.pory"
	walk_fast_left
	step_end

# 826 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_1:
# 826 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 826 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 826 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 826 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 826 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 826 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 826 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 826 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 826 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 828 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_2:
# 828 "data/maps/Route103/scripts.pory"
	face_right
# 828 "data/maps/Route103/scripts.pory"
	face_down
# 828 "data/maps/Route103/scripts.pory"
	face_right
# 828 "data/maps/Route103/scripts.pory"
	face_down
# 828 "data/maps/Route103/scripts.pory"
	face_right
# 828 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 843 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_3:
# 843 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 843 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 845 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_4:
# 845 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 849 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_5:
# 849 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 849 "data/maps/Route103/scripts.pory"
	face_right
# 849 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 850 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_6:
# 850 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 850 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 853 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_7:
# 853 "data/maps/Route103/scripts.pory"
	jump_down
# 853 "data/maps/Route103/scripts.pory"
	jump_down
	step_end

# 870 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_8:
# 870 "data/maps/Route103/scripts.pory"
	walk_right
# 870 "data/maps/Route103/scripts.pory"
	walk_right
# 870 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 886 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_9:
# 886 "data/maps/Route103/scripts.pory"
	walk_left
# 886 "data/maps/Route103/scripts.pory"
	walk_left
# 886 "data/maps/Route103/scripts.pory"
	walk_left
# 886 "data/maps/Route103/scripts.pory"
	walk_left
# 886 "data/maps/Route103/scripts.pory"
	walk_left
# 886 "data/maps/Route103/scripts.pory"
	walk_left
# 886 "data/maps/Route103/scripts.pory"
	walk_left
# 886 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 921 "data/maps/Route103/scripts.pory"
ConArtistEgg_Movement_0:
# 921 "data/maps/Route103/scripts.pory"
	face_player
# 921 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 974 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_0:
# 974 "data/maps/Route103/scripts.pory"
	walk_right
	step_end

# 981 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_1:
# 981 "data/maps/Route103/scripts.pory"
	walk_right
# 981 "data/maps/Route103/scripts.pory"
	walk_up
# 981 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 986 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_2:
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 986 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 987 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_3:
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 987 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 998 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_4:
# 998 "data/maps/Route103/scripts.pory"
	walk_left
# 998 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 1006 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_5:
# 1006 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 1054 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_0:
# 1054 "data/maps/Route103/scripts.pory"
	walk_right
# 1054 "data/maps/Route103/scripts.pory"
	walk_down
# 1054 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 1059 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_1:
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 1060 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_2:
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route103/scripts.pory"
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
# 314 "data/maps/Route103/scripts.pory"
	.string "I'm telling you, sir - Oldale's Warehouse\n"
	.string "is occupied by Rebels.\p"
	.string "Even if we let you through, your stock\n"
	.string "would just get stolen.$"

Route103DevonGruntCheckingDriver_Text_1:
# 317 "data/maps/Route103/scripts.pory"
	.string "Then go do something about it, instead\n"
	.string "of just blocking traffic!$"

Route103DevonDrivercheckedby_Text_0:
# 324 "data/maps/Route103/scripts.pory"
	.string "This is ridiculous. Is this what our\n"
	.string "taxes are being spent in?\p"
	.string "If I don't deliver these goods soon, my\n"
	.string "boss will have my head!$"

Sharpy103_Text_0:
# 344 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 353 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_2:
# 357 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_3:
# 361 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_4:
# 373 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_5:
# 382 "data/maps/Route103/scripts.pory"
	.string "If you two are done, Sharpy and I need\n"
	.string "to go back - it's almost curfew!$"

Sharpy103_Text_6:
# 387 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! We're going to get\n"
	.string "scolded...$"

Sharpy103_Text_7:
# 395 "data/maps/Route103/scripts.pory"
	.string "Well... I guess you won't be joining us\n"
	.string "after all... unless...$"

Sharpy103_Text_8:
# 400 "data/maps/Route103/scripts.pory"
	.string "Unless you change your mind! In which\n"
	.string "case, we'll be waiting at Petalburg's\l"
	.string "Dojo!$"

Sharpy103_Text_9:
# 406 "data/maps/Route103/scripts.pory"
	.string "It's the big, old-fashioned wooden\n"
	.string "building - can't miss it!\p"
	.string "So, if you want to help us save Hoenn...$"

Sharpy103_Text_10:
# 412 "data/maps/Route103/scripts.pory"
	.string "You better come!$"

Sharpy103_Text_11:
# 421 "data/maps/Route103/scripts.pory"
	.string "Well, it goes without saying, but you\n"
	.string "passed the test with flying colors!$"

Sharpy103_Text_12:
# 426 "data/maps/Route103/scripts.pory"
	.string "Now you just need to come to Petalburg\n"
	.string "Dojo, and you can join us officially!$"

Sharpy103_Text_13:
# 432 "data/maps/Route103/scripts.pory"
	.string "Well, someone else has the last word on\n"
	.string "accepting recruits... but I doubt he'll\l"
	.string "reject you.$"

Sharpy103_Text_14:
# 438 "data/maps/Route103/scripts.pory"
	.string "We'd love to show you the way, but we\n"
	.string "kinda need to rush back.$"

Sharpy103_Text_15:
# 444 "data/maps/Route103/scripts.pory"
	.string "Yup - so we'll go on ahead! Petalburg\n"
	.string "Dojo is the big, old-fashioned wooden\l"
	.string "building - can't miss it.$"

Sharpy103_Text_16:
# 450 "data/maps/Route103/scripts.pory"
	.string "We'll see you there!$"

Route103TouristApproach0_Text_0:
# 487 "data/maps/Route103/scripts.pory"
	.string "Hey, you!$"

Route103Tourist_Text_0:
# 536 "data/maps/Route103/scripts.pory"
	.string "You're the one who mugged me! You're\n"
	.string "not getting away!$"

Route103Tourist_Text_1:
# 544 "data/maps/Route103/scripts.pory"
	.string "Uhm... I'm sorry. I dropped my glasses,\n"
	.string "and I mistook you for that thief...!$"

Route103Tourist_Text_2:
# 548 "data/maps/Route103/scripts.pory"
	.string "What thief? The one who stole all my\n"
	.string "pokeyen!$"

Route103Tourist_Text_3:
# 550 "data/maps/Route103/scripts.pory"
	.string "And that's not the worse... he threw my\n"
	.string "bike to the mud there, so that I\l"
	.string "couldn't chase him!$"

Route103Tourist_Text_4:
# 553 "data/maps/Route103/scripts.pory"
	.string "I tried to get it out, but it's stuck\n"
	.string "real bad... if only me or my Pokémon had\l"
	.string "enough {COLOR RED}STRENGTH{COLOR DARK_GRAY}!$"

Route103Tourist_Text_5:
# 563 "data/maps/Route103/scripts.pory"
	.string "I'm not leaving without my bike. Not a\n"
	.string "chance!\p"
	.string "It costed me 1,000,000¥ at Cerulean\n"
	.string "City's Bike Shop!$"

Route103Touristbikepushed_Text_0:
# 580 "data/maps/Route103/scripts.pory"
	.string "Y-you did it! IT'S OUT! Wait, I'll take it\n"
	.string "from here!$"

Route103Touristbikepushed_Text_1:
# 598 "data/maps/Route103/scripts.pory"
	.string "Thank you so much! Here - I got this as\n"
	.string "a souvenir, but you can have it!$"

Route103Touristbikepushed_Text_2:
# 601 "data/maps/Route103/scripts.pory"
	.string "Well, these have been some thrilling\n"
	.string "holidays... but I should catch a boat in\l"
	.string "Slateport, and go back home.$"

Route103Touristbikepushed_Text_3:
# 604 "data/maps/Route103/scripts.pory"
	.string "If you ever make a trip to Cinnabar\n"
	.string "Island, I'll return the favour properly.\l"
	.string "Safe travels now!$"

Route103Touristbikepushed_Text_4:
# 617 "data/maps/Route103/scripts.pory"
	.string "Ooow ow ow... I need a new pair of\n"
	.string "glasses...$"

Route103TouristNotThatWay_Text_0:
# 632 "data/maps/Route103/scripts.pory"
	.string "Don't push it from there - you'll get it\n"
	.string "more stuck!$"

Route103VeteranBattle_Text_0:
# 644 "data/maps/Route103/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

Route103VeteranRegister_Text_0:
# 652 "data/maps/Route103/scripts.pory"
	.string "Good job, but don't lower your guard.\p"
	.string "Let's exchange Devon profiles - I'll\n"
	.string "make sure you dont' slack off!$"

Route103VeteranRematch_Text_0:
# 661 "data/maps/Route103/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

Route103ConcordBridgeGuard_Text_0:
# 685 "data/maps/Route103/scripts.pory"
	.string "Due to an increase in rebel activity in\n"
	.string "this area, passage through Concord\l"
	.string "Customs is heavily restricted.$"

Route103ConcordBridgeGuard_Text_1:
# 690 "data/maps/Route103/scripts.pory"
	.string "Hm? Yes?$"

Route103ConcordBridgeGuard_Text_2:
# 692 "data/maps/Route103/scripts.pory"
	.string "I need directions$"

Route103ConcordBridgeGuard_Text_3:
# 692 "data/maps/Route103/scripts.pory"
	.string "How is your day?$"

Route103ConcordBridgeGuard_Text_4:
# 692 "data/maps/Route103/scripts.pory"
	.string "Let's have a battle!$"

Route103ConcordBridgeGuard_Text_5:
# 692 "data/maps/Route103/scripts.pory"
	.string "I found someone suspicious...$"

Route103ConcordBridgeGuard_Text_6:
# 692 "data/maps/Route103/scripts.pory"
	.string "Nevermind$"

Route103ConcordBridgeGuard_Text_7:
# 695 "data/maps/Route103/scripts.pory"
	.string "There is a signpost right next to me...\n"
	.string "if you can't read, you can learn in the\l"
	.string "{COLOR BLUE}Devon Learning Center{COLOR DARK_GRAY} of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}.\p"
	.string "... I'm sorry, that was rather rude. I'm\n"
	.string "just having a rough day.\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_8:
# 701 "data/maps/Route103/scripts.pory"
	.string "Not too exciting - lots of standing\n"
	.string "around.\p"
	.string "We received reports of a prowling\n"
	.string "criminal in the vicinity, and I'm doing\l"
	.string "double shift because of it...\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_9:
# 706 "data/maps/Route103/scripts.pory"
	.string "A battle? An odd request, but it could\n"
	.string "be a fun use of my allotted recess time.\p"
	.string "Let's do it!$"

Route103ConcordBridgeGuard_Text_10:
# 716 "data/maps/Route103/scripts.pory"
	.string "Thank you. That really helped stretch\n"
	.string "the good old battling muscle!$"

Route103ConcordBridgeGuard_Text_11:
# 723 "data/maps/Route103/scripts.pory"
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
# 735 "data/maps/Route103/scripts.pory"
	.string "Be on your way, then - and stay out of\n"
	.string "trouble.$"

Route103ConcordBridgeGuard_Text_13:
# 742 "data/maps/Route103/scripts.pory"
	.string "Quickly, go distract that criminal -\n"
	.string "before he notices something is off!$"

Route103ConcordBridgeGuard_Text_14:
# 745 "data/maps/Route103/scripts.pory"
	.string "I got to thank you for that battle.\p"
	.string "If I get strong enough, maybe they'll\n"
	.string "send me somewhere other than this\l"
	.string "bridge in the boonies.$"

Route103ConcordBridgeGuard_Text_15:
# 749 "data/maps/Route103/scripts.pory"
	.string "Wherever he is now, that con man is not\n"
	.string "our concern anymore.\p"
	.string "He didn't look that dangerous anyway!$"

Route103ConcordConartist_Text_0:
# 770 "data/maps/Route103/scripts.pory"
	.string "Hey kid! Wanna earn some quick and easy\n"
	.string "pokeyen? You look like you could use it!$"

Route103ConcordConartist_Text_1:
# 771 "data/maps/Route103/scripts.pory"
	.string "Yes$"

Route103ConcordConartist_Text_2:
# 771 "data/maps/Route103/scripts.pory"
	.string "No$"

Route103ConcordConartist_Text_3:
# 774 "data/maps/Route103/scripts.pory"
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
# 790 "data/maps/Route103/scripts.pory"
	.string "Eh, scram then. Some of us have work to\n"
	.string "do.$"

Route103ConcordConartist_Text_5:
# 797 "data/maps/Route103/scripts.pory"
	.string "Come on, go distract him! Tell him\n"
	.string "there's a flying Grumpig behind him or\l"
	.string "something!\p"
	.string "I don't care how, that's what I'm paying\n"
	.string "you for!\p"
	.string "And no, I don't do upfront payments,\n"
	.string "thank you. Cash after!$"

Route103ConcordConartist_Text_6:
# 804 "data/maps/Route103/scripts.pory"
	.string "What the hell are you doing? You barely\n"
	.string "distracted him - you got to be more of a\l"
	.string "nuisance!$"

Route103ConcordConartist_Text_7:
# 808 "data/maps/Route103/scripts.pory"
	.string "Hold it right there! You're surrounded!$"

Route103ConcordConartist_Text_8:
# 829 "data/maps/Route103/scripts.pory"
	.string "What the...?$"

Route103ConcordConartist_Text_9:
# 833 "data/maps/Route103/scripts.pory"
	.string "You two-faced bastard - you set me up!\n"
	.string "You're going to get it now!\p"
	.string "No one slips Jimmy McGligar, best\n"
	.string "Pokémon egg seller of Hoenn!$"

Route103ConcordConartist_Text_10:
# 840 "data/maps/Route103/scripts.pory"
	.string "You'll never catch me alive! Outta my\n"
	.string "way!$"

Route103ConcordConartist_Text_11:
# 846 "data/maps/Route103/scripts.pory"
	.string "W-wait, you're unde-...!$"

Route103ConcordConartist_Text_12:
# 852 "data/maps/Route103/scripts.pory"
	.string "SEE YA, LOSERS...!$"

Route103ConcordConartist_Text_13:
# 858 "data/maps/Route103/scripts.pory"
	.string "GRLBGBRLB...!$"

Route103ConcordConartist_Text_14:
# 864 "data/maps/Route103/scripts.pory"
	.string "Such athleticism... he should stop\n"
	.string "conning, and become an acrobat.$"

Route103ConcordConartist_Text_15:
# 868 "data/maps/Route103/scripts.pory"
	.string "Indeed... at any rate, it's not our\n"
	.string "problem any more.$"

Route103ConcordConartist_Text_16:
# 880 "data/maps/Route103/scripts.pory"
	.string "Thank you for your help, civilian! Now we\n"
	.string "can put this long shift to an end.$"

Route103ConcordConartist_Text_17:
# 882 "data/maps/Route103/scripts.pory"
	.string "Here, this is for your trouble.$"

Route103ConcordConartist_Text_18:
# 884 "data/maps/Route103/scripts.pory"
	.string "Received 1000¥!$"

ConArtistEgg_Text_0:
# 922 "data/maps/Route103/scripts.pory"
	.string "Hands off my wares, pal! This egg is\n"
	.string "mine!$"

ConArtistEgg_Text_1:
# 928 "data/maps/Route103/scripts.pory"
	.string "The shady dealer left this egg behind...$"

ConArtistEgg_Text_2:
# 931 "data/maps/Route103/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

RiverFerryGuyUp_Text_0:
# 946 "data/maps/Route103/scripts.pory"
	.string "I'm so sorry, kid! It's not safe to sail\n"
	.string "the river now - it's raining too much!\p"
	.string "Come back when it rains less, or it\n"
	.string "doesn't at all, and I'd be glad to take\l"
	.string "you!$"

RiverFerryGuyUp_Text_1:
# 955 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lad?$"

RiverFerryGuyUp_Text_2:
# 957 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lass?$"

RiverFerryGuyUp_Text_3:
# 962 "data/maps/Route103/scripts.pory"
	.string "Would you like to sail upstream?$"

RiverFerryGuyUp_Text_4:
# 966 "data/maps/Route103/scripts.pory"
	.string "Then hop on!$"

RiverFerryGuyUp_Text_5:
# 983 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're going upstream, so it'll\n"
	.string "be a bit slow.$"

RiverFerryGuyUp_Text_6:
# 1005 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back downstream.$"

RiverFerryGuyUp_Text_7:
# 1018 "data/maps/Route103/scripts.pory"
	.string "Ah, shame... tell me if you ever do!$"

RiverFerryGuyDown_Text_0:
# 1035 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail\n"
	.string "downstream?$"

RiverFerryGuyDown_Text_1:
# 1056 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're sailing downstream, so\n"
	.string "brace yourself!$"

RiverFerryGuyDown_Text_2:
# 1078 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back upstream.$"

RiverFerryBoat_Text_0:
# 1100 "data/maps/Route103/scripts.pory"
	.string "It's an old boat, but it's well taken\n"
	.string "care of.$"

RiverFerryManNotThatEntry_Text_0:
# 1109 "data/maps/Route103/scripts.pory"
	.string "Not so fast, young one...! If you want to\n"
	.string "board, do it after me.$"

FisherGuruRoute103_Text_0:
# 1127 "data/maps/Route103/scripts.pory"
	.string "Sssh... did you hear that? It's... IT'S\n"
	.string "COMING!$"

FisherGuruRoute103_Text_1:
# 1141 "data/maps/Route103/scripts.pory"
	.string "CRAAAAAAW!!$"

FisherGuruRoute103_Text_2:
# 1149 "data/maps/Route103/scripts.pory"
	.string "AAH, CRAB BASKETS!$"

FisherGuruRoute103_Text_3:
# 1152 "data/maps/Route103/scripts.pory"
	.string "That was the LEGENDARY MUD CRAB of\n"
	.string "Route 103 - I've been looking for it for\l"
	.string "WEEKS!\p"
	.string "But I was so awe-struck... that I could\n"
	.string "not do anything!!$"

FisherGuruRoute103_Text_4:
# 1155 "data/maps/Route103/scripts.pory"
	.string "Still, this can't be a coincidence - you\n"
	.string "both showed up at the same time!!\p"
	.string "HMM... my intuition tells me it saw\n"
	.string "something in you. But then it left\l"
	.string "disappointed.$"

FisherGuruRoute103_Text_5:
# 1159 "data/maps/Route103/scripts.pory"
	.string "But we can fix that. Here, take THIS!$"

FisherGuruRoute103_Text_6:
# 1163 "data/maps/Route103/scripts.pory"
	.string "I want you to take that rod and fish at\n"
	.string "least THREE SPECIES OF POKÉMON!\p"
	.string "WHY? Because only then will the\n"
	.string "LEGENDARY MUDCRAB judge you as worthy,\l"
	.string "and show itself again!\p"
	.string "Do not question the intuition of Ivan,\n"
	.string "the Legendary Releer - just embrace it,\l"
	.string "and fulfil your destiny!!$"

FisherGuruRoute103_Text_7:
# 1176 "data/maps/Route103/scripts.pory"
	.string "AHOY! How's the FISHING going!?$"

FisherGuruRoute103_Text_8:
# 1178 "data/maps/Route103/scripts.pory"
	.string "About your request...$"

FisherGuruRoute103_Text_9:
# 1178 "data/maps/Route103/scripts.pory"
	.string "Did you see the Mud Crab?$"

FisherGuruRoute103_Text_10:
# 1178 "data/maps/Route103/scripts.pory"
	.string "How's it going?$"

FisherGuruRoute103_Text_11:
# 1178 "data/maps/Route103/scripts.pory"
	.string "It's nothing$"

FisherGuruRoute103_Text_12:
# 1204 "data/maps/Route103/scripts.pory"
	.string "What? You haven't fished a single\n"
	.string "Pokémon? NADA? NICHT?$"

FisherGuruRoute103_Text_13:
# 1208 "data/maps/Route103/scripts.pory"
	.string "Hm? You have only fished ONE measly\n"
	.string "Pokémon?! It's a start, but...$"

FisherGuruRoute103_Text_14:
# 1212 "data/maps/Route103/scripts.pory"
	.string "Oh, you have fished a couple Pokémon\n"
	.string "already? Not bad, but...$"

FisherGuruRoute103_Text_15:
# 1217 "data/maps/Route103/scripts.pory"
	.string "Ah, you've fished at least 3 Pokémon?\n"
	.string "Good, GOOD!\p"
	.string "I'm confident the Legendary Mud Crab\n"
	.string "will acknowledge you and show up.\p"
	.string "Let's wait a bit!$"

FisherGuruRoute103_Text_16:
# 1230 "data/maps/Route103/scripts.pory"
	.string "Hmm... I should have known. Such a\n"
	.string "measly fishing test...\p"
	.string "Is NOT ENOUGH to make the Mud Crab\n"
	.string "acknowledge you!$"

FisherGuruRoute103_Text_17:
# 1233 "data/maps/Route103/scripts.pory"
	.string "I suppose I've got no choice... here,\n"
	.string "TAKE THIS!$"

FisherGuruRoute103_Text_18:
# 1237 "data/maps/Route103/scripts.pory"
	.string "I want you to use that rod to bring me a\n"
	.string "BIG PEARL!\p"
	.string "If you are a true fisher... you will know\n"
	.string "how.\p"
	.string "Do that, and I'm sure next time the Mud\n"
	.string "Crab will show itself!$"

FisherGuruRoute103_Text_19:
# 1246 "data/maps/Route103/scripts.pory"
	.string "Like I said, I need you to fish 3 species\n"
	.string "of Pokémon!\p"
	.string "If you are the fisher the Mud Crab\n"
	.string "believes you to be, you shouldn't need\l"
	.string "any guidance!$"

FisherGuruRoute103_Text_20:
# 1250 "data/maps/Route103/scripts.pory"
	.string "O-of course I could give it, but that\n"
	.string "would defeat the purpose!$"

FisherGuruRoute103_Text_21:
# 1261 "data/maps/Route103/scripts.pory"
	.string "pearl$"

FisherGuruRoute103_Text_22:
# 1271 "data/maps/Route103/scripts.pory"
	.string "no pearl$"

FisherGuruRoute103_Text_23:
# 1279 "data/maps/Route103/scripts.pory"
	.string "Regrettably, I haven't. Not even the tip\n"
	.string "of that lustruous, star-shaped crown\l"
	.string "of his...\p"
	.string "But don't worry - he won't swim away\n"
	.string "easily.$"

FisherGuruRoute103_Text_24:
# 1283 "data/maps/Route103/scripts.pory"
	.string "They say he is forever waiting for a\n"
	.string "trainer who saved his life during the\l"
	.string "Assault on Route 103.\p"
	.string "Sadly, that trainer died that day. They\n"
	.string "will never meet again...$"

FisherGuruRoute103_Text_25:
# 1288 "data/maps/Route103/scripts.pory"
	.string "In spite of its beastly appearance, the\n"
	.string "Mud Crab is a loyal, tender creature.\p"
	.string "That's why I wish to catch him, and help\n"
	.string "him heal!$"

FisherGuruRoute103_Text_26:
# 1295 "data/maps/Route103/scripts.pory"
	.string "Ah, well, aside from the Mud Crab\n"
	.string "business... not very good, I must say.$"

FisherGuruRoute103_Text_27:
# 1298 "data/maps/Route103/scripts.pory"
	.string "The sea is poisoned, the rivers are\n"
	.string "muddy...\p"
	.string "Most of my buddies have moved up north.$"

FisherGuruRoute103_Text_28:
# 1302 "data/maps/Route103/scripts.pory"
	.string "But me, I like the challenge!$"

FisherGuruRoute103_Text_29:
# 1311 "data/maps/Route103/scripts.pory"
	.string "Then don't distract me! Does it look\n"
	.string "like I'm doing nothing here!?$"

FisherGuruRoute103_Text_30:
# 1314 "data/maps/Route103/scripts.pory"
	.string "... don't answer that.$"

MoveTutorSign_Text_0:
# 1329 "data/maps/Route103/scripts.pory"
	.string "Move Tutor Colton's House$"

Fishercallsfornumber_Text_0:
# 1337 "data/maps/Route103/scripts.pory"
	.string "Wait - add me on Devon Net! We must\n"
	.string "keep in touch about this!$"

Sharpy103_Outro::
# 477 "data/maps/Route103/scripts.pory"
	.string "Heh... you're a soldier alright...!$"

Tourist103_Outro::
# 571 "data/maps/Route103/scripts.pory"
	.string "Wait a minute... yeah, you're not that \nthief. Sorry!$"

Veteran103_Intro::
# 667 "data/maps/Route103/scripts.pory"
	.string "They told me I'm too old to enlist...  but \nI'm stronger than you young'uns!\pI'll show you!$"

Veteran103_Outro::
# 670 "data/maps/Route103/scripts.pory"
	.string "Grr... you won the battle, but\n not the war!$"

Veteran103_Intro2::
# 673 "data/maps/Route103/scripts.pory"
	.string "There you are - I've been preparing\n my counterattack! CHAAARGE!$"

Veteran103_Outro2::
# 676 "data/maps/Route103/scripts.pory"
	.string "... I surrender. Again.$"

DevonGuard103_Outro::
# 760 "data/maps/Route103/scripts.pory"
	.string "That could have gone better...$"

ShadyDealer103_Outro::
# 912 "data/maps/Route103/scripts.pory"
	.string "I... I-I'm not going back to jail!$"
