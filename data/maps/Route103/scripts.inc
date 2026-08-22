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
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 56 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route103/scripts.pory"
	end
# 58 "data/maps/Route103/scripts.pory"

# 59 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 60 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 61 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 62 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 63 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route103/scripts.pory"
	end
# 65 "data/maps/Route103/scripts.pory"

# 66 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 67 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 68 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 69 "data/maps/Route103/scripts.pory"
	release
# 70 "data/maps/Route103/scripts.pory"
	end
# 71 "data/maps/Route103/scripts.pory"

# 72 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 73 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 74 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route103/scripts.pory"
	end
# 76 "data/maps/Route103/scripts.pory"

# 77 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 78 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 79 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 80 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 81 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route103/scripts.pory"
	end
# 83 "data/maps/Route103/scripts.pory"

# 84 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 85 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 86 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 87 "data/maps/Route103/scripts.pory"
	release
# 88 "data/maps/Route103/scripts.pory"
	end
# 89 "data/maps/Route103/scripts.pory"

# 90 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 91 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 92 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route103/scripts.pory"
	end
# 94 "data/maps/Route103/scripts.pory"

# 95 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 96 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 97 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/Route103/scripts.pory"
	end
# 99 "data/maps/Route103/scripts.pory"

# 100 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 101 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 102 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 103 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 104 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 105 "data/maps/Route103/scripts.pory"
	release
# 106 "data/maps/Route103/scripts.pory"
	end
# 107 "data/maps/Route103/scripts.pory"

# 108 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 109 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 110 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 112 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 113 "data/maps/Route103/scripts.pory"
	release
# 114 "data/maps/Route103/scripts.pory"
	end
# 115 "data/maps/Route103/scripts.pory"

# 116 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 117 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 118 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route103/scripts.pory"
	end
# 120 "data/maps/Route103/scripts.pory"

# 121 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 122 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 123 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route103/scripts.pory"
	end
# 125 "data/maps/Route103/scripts.pory"

# 126 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 127 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 128 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route103/scripts.pory"
	end
# 130 "data/maps/Route103/scripts.pory"

# 131 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 132 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 133 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route103/scripts.pory"
	end
# 135 "data/maps/Route103/scripts.pory"

# 136 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 137 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 138 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route103/scripts.pory"
	end
# 140 "data/maps/Route103/scripts.pory"

# 141 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 142 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 143 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 144 "data/maps/Route103/scripts.pory"

# 145 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 146 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 147 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 148 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 149 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 150 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 151 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 152 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 153 "data/maps/Route103/scripts.pory"

# 154 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 155 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 156 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 157 "data/maps/Route103/scripts.pory"

# 158 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 159 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 160 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 161 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 162 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 163 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 164 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 165 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 166 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 167 "data/maps/Route103/scripts.pory"

# 168 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 169 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 170 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 171 "data/maps/Route103/scripts.pory"

# 172 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 173 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 174 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 175 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 176 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 177 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 178 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 179 "data/maps/Route103/scripts.pory"

# 180 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 181 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 182 "data/maps/Route103/scripts.pory"

# 183 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 184 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 185 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 186 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 187 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 188 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 189 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 190 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 191 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 192 "data/maps/Route103/scripts.pory"

# 193 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 194 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 195 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 196 "data/maps/Route103/scripts.pory"

# 197 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 198 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 199 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 200 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 201 "data/maps/Route103/scripts.pory"

# 202 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 203 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 204 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"

Route103_MapScripts::
# 213 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DynamicWeather103
# 214 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103Weather
# 215 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FerryManReturnsSouth
	.byte 0


DynamicWeather103::
# 219 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_eq DynamicWeather103_1
	return

DynamicWeather103_1:
# 220 "data/maps/Route103/scripts.pory"
	random 10
# 221 "data/maps/Route103/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 223 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/Route103/scripts.pory"
	case 0, DynamicWeather103_4
# 225 "data/maps/Route103/scripts.pory"
	case 1, DynamicWeather103_5
# 226 "data/maps/Route103/scripts.pory"
	case 2, DynamicWeather103_6
# 227 "data/maps/Route103/scripts.pory"
	case 3, DynamicWeather103_7
# 228 "data/maps/Route103/scripts.pory"
	case 4, DynamicWeather103_8
# 229 "data/maps/Route103/scripts.pory"
	case 5, DynamicWeather103_9
# 230 "data/maps/Route103/scripts.pory"
	case 6, DynamicWeather103_10
# 231 "data/maps/Route103/scripts.pory"
	case 7, DynamicWeather103_11
# 232 "data/maps/Route103/scripts.pory"
	case 8, DynamicWeather103_12
# 233 "data/maps/Route103/scripts.pory"
	case 9, DynamicWeather103_13
# 234 "data/maps/Route103/scripts.pory"
	case 10, DynamicWeather103_14
	return

DynamicWeather103_4:
# 224 "data/maps/Route103/scripts.pory"
	goto Route103EndRain
	return

DynamicWeather103_5:
# 225 "data/maps/Route103/scripts.pory"
	goto Route103EndRain
	return

DynamicWeather103_6:
# 226 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_7:
# 227 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_8:
# 228 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_9:
# 229 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_10:
# 230 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_11:
# 231 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_12:
# 232 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_13:
# 233 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return

DynamicWeather103_14:
# 234 "data/maps/Route103/scripts.pory"
	goto Route103Shade
	return


Route103Weather::
# 241 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 0, Route103Shade
# 242 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 1, Route103Rain1
# 243 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 2, Route103Rain2
# 244 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 3, Route103EndRain
# 246 "data/maps/Route103/scripts.pory"
	release
	return


Route103Shade::
# 250 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
	return


Route103Rain1::
# 254 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 255 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 2
# 256 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 257 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103Rain2::
# 261 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 262 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
# 263 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 264 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103EndRain::
# 269 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 270 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
# 271 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 272 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


FerryManReturnsSouth::
# 279 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 280 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 281 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 282 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	return


Route103ConcordBridgeSign::
# 287 "data/maps/Route103/scripts.pory"
	lock
# 288 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeSign_Text_0
# 289 "data/maps/Route103/scripts.pory"
	release
	return


Route103WaterfallCaveSign::
# 293 "data/maps/Route103/scripts.pory"
	lock
# 294 "data/maps/Route103/scripts.pory"
	msgbox Route103WaterfallCaveSign_Text_0
# 295 "data/maps/Route103/scripts.pory"
	release
	return


Route103FisherBucket::
# 299 "data/maps/Route103/scripts.pory"
	lock
# 300 "data/maps/Route103/scripts.pory"
	msgbox Route103FisherBucket_Text_0
# 301 "data/maps/Route103/scripts.pory"
	release
	return


Route103IteminMud::
# 305 "data/maps/Route103/scripts.pory"
	lock
# 306 "data/maps/Route103/scripts.pory"
	finditem ITEM_SILK_SCARF
# 309 "data/maps/Route103/scripts.pory"
	removeobject 21
# 310 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonGruntCheckingDriver::
# 313 "data/maps/Route103/scripts.pory"
	lock
# 314 "data/maps/Route103/scripts.pory"
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 315 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_0
# 317 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 318 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_1
# 319 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonDrivercheckedby::
# 323 "data/maps/Route103/scripts.pory"
	lock
# 324 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_0
# 325 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonDrivercheckedby_Text_0
# 327 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_1
# 328 "data/maps/Route103/scripts.pory"
	waitmovement
# 329 "data/maps/Route103/scripts.pory"
	releaseall
	return


Sharpy103::
# 334 "data/maps/Route103/scripts.pory"
	lockall
# 335 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 336 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 337 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 338 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 340 "data/maps/Route103/scripts.pory"
	special DoTVShow
# 342 "data/maps/Route103/scripts.pory"
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 350 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 365 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 366 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 367 "data/maps/Route103/scripts.pory"
	addobject 25
# 368 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 32
# 369 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 370 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 371 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 372 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 373 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 374 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 376 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 377 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 378 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 379 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_1
# 380 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 381 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 382 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 383 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 385 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 386 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 387 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 388 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 390 "data/maps/Route103/scripts.pory"
	goto_if_set saidnotosharpyinoldale, Sharpy103_8
# 418 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 419 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 420 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 421 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 422 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 424 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 425 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 426 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 427 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 429 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 430 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 431 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 432 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 433 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 436 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 437 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 438 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 439 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 441 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_2
# 442 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 443 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 444 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 445 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_15
# 448 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 449 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 450 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 451 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_16
Sharpy103_7:
# 455 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 456 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 457 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_3
# 458 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_4
# 459 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 460 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 461 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_5
# 462 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 463 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 464 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 465 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 466 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 467 "data/maps/Route103/scripts.pory"
	setflag DLCclassends
# 468 "data/maps/Route103/scripts.pory"
	clearflag DLCrecesstarts
# 469 "data/maps/Route103/scripts.pory"
	setflag Sharpydefeatedat103
# 471 "data/maps/Route103/scripts.pory"
	releaseall
# 472 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Sharpy103_11
# 474 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
	return

Sharpy103_2:
# 344 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 345 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 346 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 347 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 348 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 352 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 353 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 354 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 355 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 356 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 357 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 358 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 359 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 360 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 361 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 362 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 363 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4

Sharpy103_8:
# 393 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 394 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 395 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 396 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 398 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 399 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 400 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 401 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 404 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 405 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 406 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 407 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 410 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 411 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 412 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 413 "data/maps/Route103/scripts.pory"
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
	playbgm MUS_ENCOUNTER_RICH, TRUE
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
	playbgm MUS_ENCOUNTER_RICH, TRUE
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
	playbgm MUS_ENCOUNTER_RICH, TRUE
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
	playbgm MUS_ENCOUNTER_RICH, TRUE
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
# 733 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route103ConcordBridgeGuard_12
Route103ConcordBridgeGuard_11:
# 739 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_20
Route103ConcordBridgeGuard_17:
# 743 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_29
Route103ConcordBridgeGuard_27:
# 747 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_38
Route103ConcordBridgeGuard_35:
# 752 "data/maps/Route103/scripts.pory"
finishguardscript:
# 753 "data/maps/Route103/scripts.pory"
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
# 734 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_12
# 735 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_11

Route103ConcordBridgeGuard_15:
# 695 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_7
# 698 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_14

Route103ConcordBridgeGuard_18:
# 741 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_13
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_19:
# 739 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_18
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_20:
# 739 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_19
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_25:
# 701 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_8
# 703 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_24

Route103ConcordBridgeGuard_28:
# 744 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_14
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_29:
# 743 "data/maps/Route103/scripts.pory"
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
# 748 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_15
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_37:
# 747 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, Route103ConcordBridgeGuard_36
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_38:
# 747 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_37
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_42:
# 723 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_11
# 726 "data/maps/Route103/scripts.pory"
	setflag betrayedconcordconartist
# 727 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_4


Route103ConcordConartist::
# 763 "data/maps/Route103/scripts.pory"
	lockall
# 764 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 765 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 767 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordConartist_2
Route103ConcordConartist_1:
# 792 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_7
Route103ConcordConartist_4:
# 798 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_17
Route103ConcordConartist_14:
# 901 "data/maps/Route103/scripts.pory"
finishconartistscript:
# 902 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordConartist_2:
# 769 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_0
# 770 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 772 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordConartist_12
Route103ConcordConartist_11:
# 786 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordConartist_21
	goto Route103ConcordConartist_1

Route103ConcordConartist_5:
# 794 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_6:
# 792 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_7:
# 792 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordConartist_6
	goto Route103ConcordConartist_4

Route103ConcordConartist_12:
# 773 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_3
# 780 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 781 "data/maps/Route103/scripts.pory"
	waitmovement 28
# 782 "data/maps/Route103/scripts.pory"
	setflag conartistaskeddistract
# 783 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_11

Route103ConcordConartist_15:
# 800 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 801 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_6
# 804 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 805 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_7
# 811 "data/maps/Route103/scripts.pory"
	clearflag devonsvsconartist
# 812 "data/maps/Route103/scripts.pory"
	addobject 31
# 813 "data/maps/Route103/scripts.pory"
	setobjectxy 31, 42, 37
# 814 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 815 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 816 "data/maps/Route103/scripts.pory"
	waitmovement
# 817 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_0
# 818 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 821 "data/maps/Route103/scripts.pory"
	addobject 32
# 822 "data/maps/Route103/scripts.pory"
	setobjectxy 32, 30, 39
# 823 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_1
# 825 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_2
# 826 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_8
# 828 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 830 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_9
# 833 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHADYDEALER_103, ShadyDealer103_Outro
# 835 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonGruntCheckingDriver_Movement_0
# 836 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 837 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_10
# 839 "data/maps/Route103/scripts.pory"
	playse SE_M_COMET_PUNCH
# 840 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ConcordConartist_Movement_3
# 842 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_4
# 843 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_11
# 844 "data/maps/Route103/scripts.pory"
	playse SE_M_MEGA_KICK2
# 845 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 846 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_5
# 847 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_6
# 848 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 849 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_12
# 850 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_7
# 851 "data/maps/Route103/scripts.pory"
	playse SE_M_JUMP_KICK
# 852 "data/maps/Route103/scripts.pory"
	waitse
# 853 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 854 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 855 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_13
# 857 "data/maps/Route103/scripts.pory"
	waitmovement
# 859 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103DevonGruntCheckingDriver_Movement_0
# 861 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_14
# 863 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103DevonGruntCheckingDriver_Movement_0
# 865 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_15
# 867 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_8
# 868 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_8
# 869 "data/maps/Route103/scripts.pory"
	waitmovement
# 870 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 871 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 872 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103TouristApproach1_Movement_0
# 873 "data/maps/Route103/scripts.pory"
	waitmovement
# 874 "data/maps/Route103/scripts.pory"
	removeobject 31
# 875 "data/maps/Route103/scripts.pory"
	waitmovement
# 876 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 877 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_16
# 879 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_17
# 880 "data/maps/Route103/scripts.pory"
	playse SE_SHOP
# 881 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_18
# 883 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_9
# 884 "data/maps/Route103/scripts.pory"
	waitmovement
# 886 "data/maps/Route103/scripts.pory"
	waitmovement
# 888 "data/maps/Route103/scripts.pory"
	removeobject 28
# 890 "data/maps/Route103/scripts.pory"
	removeobject 32
# 891 "data/maps/Route103/scripts.pory"
	setflag devonsvsconartist
# 892 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 893 "data/maps/Route103/scripts.pory"
	clearflag devonbridgeguardgoestoconartist
# 894 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103ConcordConartist_24
# 896 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
Route103ConcordConartist_23:
# 897 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 899 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_14

Route103ConcordConartist_16:
# 798 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_15
	goto Route103ConcordConartist_14

Route103ConcordConartist_17:
# 798 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordConartist_16
	goto Route103ConcordConartist_14

Route103ConcordConartist_21:
# 787 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_4
# 788 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 789 "data/maps/Route103/scripts.pory"
	waitmovement 28
	goto Route103ConcordConartist_1

Route103ConcordConartist_24:
# 895 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103ConcordConartist_23


ConArtistEgg::
# 911 "data/maps/Route103/scripts.pory"
	lockall
# 912 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 913 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, ConArtistEgg_2
ConArtistEgg_1:
# 920 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, ConArtistEgg_4
	return

ConArtistEgg_2:
# 914 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 915 "data/maps/Route103/scripts.pory"
	applymovement 28, ConArtistEgg_Movement_0
# 916 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_0
# 917 "data/maps/Route103/scripts.pory"
	releaseall
# 918 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
	goto ConArtistEgg_1

ConArtistEgg_4:
# 922 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_1
# 923 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 924 "data/maps/Route103/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 925 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_2
# 926 "data/maps/Route103/scripts.pory"
	removeobject 33
# 927 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 928 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryGuyUp::
# 935 "data/maps/Route103/scripts.pory"
	lockall
# 936 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 937 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 938 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_2
RiverFerryGuyUp_1:
# 948 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
# 949 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 951 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyUp_5
RiverFerryGuyUp_4:
# 1003 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyUp_11
RiverFerryGuyUp_10:
# 1007 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyUp_2:
# 939 "data/maps/Route103/scripts.pory"
	checkplayergender
# 940 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyUp_8
RiverFerryGuyUp_7:
# 942 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyUp_17
	goto RiverFerryGuyUp_1

RiverFerryGuyUp_5:
# 952 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 953 "data/maps/Route103/scripts.pory"
	removeobject 36
# 954 "data/maps/Route103/scripts.pory"
	removeobject 37
# 955 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 956 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 958 "data/maps/Route103/scripts.pory"
	hidefollower
# 959 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 960 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_0
# 961 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 962 "data/maps/Route103/scripts.pory"
	removeobject 34
# 963 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 964 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 965 "data/maps/Route103/scripts.pory"
	hideplayer
# 966 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 967 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_1
# 968 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 969 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
# 970 "data/maps/Route103/scripts.pory"
	closemessage
# 971 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 972 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_2
# 973 "data/maps/Route103/scripts.pory"
	applymovement 35, RiverFerryGuyUp_Movement_3
# 974 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 975 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 977 "data/maps/Route103/scripts.pory"
	clearflag ferryman103up
# 978 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103up
# 979 "data/maps/Route103/scripts.pory"
	addobject 36
# 980 "data/maps/Route103/scripts.pory"
	addobject 37
# 982 "data/maps/Route103/scripts.pory"
	showplayer
# 983 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 16
# 984 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 985 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_1
# 986 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 988 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_14
# 990 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
RiverFerryGuyUp_13:
# 991 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_5
# 992 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 993 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 994 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_2
# 995 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 996 "data/maps/Route103/scripts.pory"
	removeobject 34
# 997 "data/maps/Route103/scripts.pory"
	removeobject 35
# 998 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 999 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
	goto RiverFerryGuyUp_4

RiverFerryGuyUp_8:
# 941 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyUp_7

RiverFerryGuyUp_11:
# 1004 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
	goto RiverFerryGuyUp_10

RiverFerryGuyUp_14:
# 989 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyUp_13

RiverFerryGuyUp_17:
# 943 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyUp_1


RiverFerryGuyDown::
# 1011 "data/maps/Route103/scripts.pory"
	lockall
# 1012 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1013 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_0
# 1014 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_2
RiverFerryGuyDown_1:
# 1021 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_0
# 1022 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 1024 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyDown_5
RiverFerryGuyDown_4:
# 1076 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyDown_11
RiverFerryGuyDown_10:
# 1080 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyDown_2:
# 1015 "data/maps/Route103/scripts.pory"
	checkplayergender
# 1016 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyDown_8
RiverFerryGuyDown_7:
# 1018 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyDown_17
	goto RiverFerryGuyDown_1

RiverFerryGuyDown_5:
# 1025 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 1026 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1027 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1028 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1029 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
# 1031 "data/maps/Route103/scripts.pory"
	hidefollower
# 1032 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1033 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_0
# 1034 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1035 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1036 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 1037 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1038 "data/maps/Route103/scripts.pory"
	hideplayer
# 1039 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 1040 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_0
# 1041 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1042 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_1
# 1043 "data/maps/Route103/scripts.pory"
	closemessage
# 1044 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 1045 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_1
# 1046 "data/maps/Route103/scripts.pory"
	applymovement 36, RiverFerryGuyDown_Movement_2
# 1047 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1048 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 1050 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 1051 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 1052 "data/maps/Route103/scripts.pory"
	addobject 34
# 1053 "data/maps/Route103/scripts.pory"
	addobject 35
# 1055 "data/maps/Route103/scripts.pory"
	showplayer
# 1056 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 32
# 1057 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 1058 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_1
# 1059 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1061 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_14
# 1063 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
RiverFerryGuyDown_13:
# 1064 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_2
# 1065 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1066 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1067 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_2
# 1068 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1069 "data/maps/Route103/scripts.pory"
	removeobject 36
# 1070 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1071 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 1072 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	goto RiverFerryGuyDown_4

RiverFerryGuyDown_8:
# 1017 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyDown_7

RiverFerryGuyDown_11:
# 1077 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
	goto RiverFerryGuyDown_10

RiverFerryGuyDown_14:
# 1062 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyDown_13

RiverFerryGuyDown_17:
# 1019 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyDown_1


RiverFerryBoat::
# 1085 "data/maps/Route103/scripts.pory"
	lockall
# 1086 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryBoat_Text_0
# 1087 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryManNotThatEntry::
# 1091 "data/maps/Route103/scripts.pory"
	lockall
# 1092 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1093 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 1094 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 1095 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryManNotThatEntry_Text_0
# 1096 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1097 "data/maps/Route103/scripts.pory"
	waitmovement
# 1098 "data/maps/Route103/scripts.pory"
	releaseall
	return


FisherGuruRoute103::
# 1102 "data/maps/Route103/scripts.pory"
	lock
# 1103 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonDrivercheckedby_Movement_0
# 1104 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_eq FisherGuruRoute103_2
FisherGuruRoute103_1:
# 1155 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_gt FisherGuruRoute103_5
FisherGuruRoute103_4:
# 1267 "data/maps/Route103/scripts.pory"
finishfisherscript:
# 1268 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1269 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1270 "data/maps/Route103/scripts.pory"
	releaseall
	return

FisherGuruRoute103_2:
# 1107 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1109 "data/maps/Route103/scripts.pory"
	playse SE_M_SURF
# 1110 "data/maps/Route103/scripts.pory"
	waitse
# 1111 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1112 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_0
# 1113 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_0
# 1115 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1116 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1118 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1119 "data/maps/Route103/scripts.pory"
	waitse
# 1120 "data/maps/Route103/scripts.pory"
	clearflag mudcrabcrawdaunt
# 1121 "data/maps/Route103/scripts.pory"
	addobject 39
# 1122 "data/maps/Route103/scripts.pory"
	playse SE_SHINY
# 1123 "data/maps/Route103/scripts.pory"
	waitse
# 1125 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_CRAWDAUNT, CRY_MODE_ENCOUNTER
# 1126 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_1
# 1127 "data/maps/Route103/scripts.pory"
	removeobject 39
# 1128 "data/maps/Route103/scripts.pory"
	setflag mudcrabcrawdaunt
# 1129 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1130 "data/maps/Route103/scripts.pory"
	waitse
# 1132 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_2
# 1133 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonDrivercheckedby_Movement_1
# 1134 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1135 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_3
# 1137 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1138 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_4
# 1141 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1142 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_5
# 1144 "data/maps/Route103/scripts.pory"
	giveitem ITEM_OLD_ROD
# 1146 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_6
# 1149 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1150 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 1
# 1151 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_1

FisherGuruRoute103_5:
# 1157 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1158 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_7
# 1159 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1160 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, FisherGuruRoute103_Text_8, FisherGuruRoute103_Text_9, FisherGuruRoute103_Text_10, FisherGuruRoute103_Text_11
# 1162 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherGuruRoute103_8
FisherGuruRoute103_7:
# 1226 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FisherGuruRoute103_11
FisherGuruRoute103_10:
# 1242 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FisherGuruRoute103_17
FisherGuruRoute103_16:
# 1256 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq FisherGuruRoute103_24
	goto FisherGuruRoute103_4

FisherGuruRoute103_8:
# 1163 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_14
FisherGuruRoute103_13:
# 1206 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 3
	goto_if_eq FisherGuruRoute103_19
	goto FisherGuruRoute103_7

FisherGuruRoute103_11:
# 1227 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1228 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_21
# 1230 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1231 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1232 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_22
# 1235 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1236 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1237 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_23
# 1239 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_14:
# 1164 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_SMOTHQUIL
# 1165 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_22
FisherGuruRoute103_21:
# 1193 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FisherGuruRoute103_29
	goto FisherGuruRoute103_13

FisherGuruRoute103_17:
# 1243 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1244 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_24
# 1245 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1246 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1247 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_25
# 1249 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1250 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1251 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_26
# 1252 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_16

FisherGuruRoute103_19:
	checkitem ITEM_BIG_PEARL
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_26
# 1219 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1220 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_20
# 1221 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_7

FisherGuruRoute103_22:
# 1166 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1167 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_12
# 1169 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1170 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1171 "data/maps/Route103/scripts.pory"
	waitmovement
# 1172 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1173 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1174 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1175 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_13
# 1176 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1177 "data/maps/Route103/scripts.pory"
	fadeinbgm 1
# 1178 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1179 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_14
# 1181 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1182 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_15
# 1183 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonDrivercheckedby_Movement_1
# 1184 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 1185 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1186 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_16
# 1189 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 3
# 1190 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_21

FisherGuruRoute103_24:
# 1257 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1258 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_27
# 1259 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1260 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1261 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_28
# 1262 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_4

FisherGuruRoute103_26:
# 1209 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1210 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_19
# 1214 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_7

FisherGuruRoute103_29:
# 1194 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1195 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_17
# 1197 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1198 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1199 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_18
# 1201 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_13


MoveTutorSign::
# 1274 "data/maps/Route103/scripts.pory"
	lock
# 1275 "data/maps/Route103/scripts.pory"
	msgbox MoveTutorSign_Text_0
# 1276 "data/maps/Route103/scripts.pory"
	release
	return


Fishercallsfornumber::
# 1280 "data/maps/Route103/scripts.pory"
	lock
# 1281 "data/maps/Route103/scripts.pory"
	applymovement 38, ConArtistEgg_Movement_0
# 1282 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1283 "data/maps/Route103/scripts.pory"
	msgbox Fishercallsfornumber_Text_0
# 1284 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_FISHER_103
# 1285 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 2
# 1286 "data/maps/Route103/scripts.pory"
	release
	return


# 314 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_0:
# 314 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 317 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_1:
# 317 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 324 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_0:
# 324 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 327 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_1:
# 327 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 378 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 378 "data/maps/Route103/scripts.pory"
	face_right
	step_end

# 379 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 379 "data/maps/Route103/scripts.pory"
	jump_in_place_left
	step_end

# 441 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 441 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 457 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 457 "data/maps/Route103/scripts.pory"
	jump_2_down
# 457 "data/maps/Route103/scripts.pory"
	walk_down
# 457 "data/maps/Route103/scripts.pory"
	walk_down
# 457 "data/maps/Route103/scripts.pory"
	walk_down
# 457 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 458 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 458 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 458 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 458 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 461 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 461 "data/maps/Route103/scripts.pory"
	jump_2_down
# 461 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 461 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 461 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 461 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 461 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 461 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 461 "data/maps/Route103/scripts.pory"
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

# 817 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_0:
# 817 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 817 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 817 "data/maps/Route103/scripts.pory"
	walk_fast_left
	step_end

# 823 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_1:
# 823 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 823 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 823 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 823 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 823 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 823 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 823 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 823 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 823 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 825 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_2:
# 825 "data/maps/Route103/scripts.pory"
	face_right
# 825 "data/maps/Route103/scripts.pory"
	face_down
# 825 "data/maps/Route103/scripts.pory"
	face_right
# 825 "data/maps/Route103/scripts.pory"
	face_down
# 825 "data/maps/Route103/scripts.pory"
	face_right
# 825 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 840 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_3:
# 840 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 840 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 842 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_4:
# 842 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 846 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_5:
# 846 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 846 "data/maps/Route103/scripts.pory"
	face_right
# 846 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 847 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_6:
# 847 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 847 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 850 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_7:
# 850 "data/maps/Route103/scripts.pory"
	jump_down
# 850 "data/maps/Route103/scripts.pory"
	jump_down
	step_end

# 867 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_8:
# 867 "data/maps/Route103/scripts.pory"
	walk_right
# 867 "data/maps/Route103/scripts.pory"
	walk_right
# 867 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 883 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_9:
# 883 "data/maps/Route103/scripts.pory"
	walk_left
# 883 "data/maps/Route103/scripts.pory"
	walk_left
# 883 "data/maps/Route103/scripts.pory"
	walk_left
# 883 "data/maps/Route103/scripts.pory"
	walk_left
# 883 "data/maps/Route103/scripts.pory"
	walk_left
# 883 "data/maps/Route103/scripts.pory"
	walk_left
# 883 "data/maps/Route103/scripts.pory"
	walk_left
# 883 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 915 "data/maps/Route103/scripts.pory"
ConArtistEgg_Movement_0:
# 915 "data/maps/Route103/scripts.pory"
	face_player
# 915 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 960 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_0:
# 960 "data/maps/Route103/scripts.pory"
	walk_right
	step_end

# 967 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_1:
# 967 "data/maps/Route103/scripts.pory"
	walk_right
# 967 "data/maps/Route103/scripts.pory"
	walk_up
# 967 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 972 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_2:
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 972 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 973 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_3:
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 973 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 984 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_4:
# 984 "data/maps/Route103/scripts.pory"
	walk_left
# 984 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 992 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_5:
# 992 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 1040 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_0:
# 1040 "data/maps/Route103/scripts.pory"
	walk_right
# 1040 "data/maps/Route103/scripts.pory"
	walk_down
# 1040 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 1045 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_1:
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1045 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 1046 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_2:
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1046 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

Route103ConcordBridgeSign_Text_0:
# 288 "data/maps/Route103/scripts.pory"
	.string "East - Concord Bridge\n"
	.string "North - Waterfall Cave.$"

Route103WaterfallCaveSign_Text_0:
# 294 "data/maps/Route103/scripts.pory"
	.string "Waterfall Cave to Route 117.$"

Route103FisherBucket_Text_0:
# 300 "data/maps/Route103/scripts.pory"
	.string "The bucket, which seems meant to store\n"
	.string "catches, is empty.$"

Route103DevonGruntCheckingDriver_Text_0:
# 315 "data/maps/Route103/scripts.pory"
	.string "I'm telling you, sir - Oldale's Warehouse\n"
	.string "is occupied by Rebels.\p"
	.string "Even if we let you through, your stock\n"
	.string "would just get stolen.$"

Route103DevonGruntCheckingDriver_Text_1:
# 318 "data/maps/Route103/scripts.pory"
	.string "Then go do something about it, instead\n"
	.string "of just blocking traffic!$"

Route103DevonDrivercheckedby_Text_0:
# 325 "data/maps/Route103/scripts.pory"
	.string "This is ridiculous. Is this what our\n"
	.string "taxes are being spent in?\p"
	.string "If I don't deliver these goods soon, my\n"
	.string "boss will have my head!$"

Sharpy103_Text_0:
# 345 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 354 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_2:
# 358 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_3:
# 362 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_4:
# 374 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_5:
# 383 "data/maps/Route103/scripts.pory"
	.string "If you two are done, Sharpy and I need\n"
	.string "to go back - it's almost curfew!$"

Sharpy103_Text_6:
# 388 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! We're going to get\n"
	.string "scolded...$"

Sharpy103_Text_7:
# 396 "data/maps/Route103/scripts.pory"
	.string "Well... I guess you won't be joining us\n"
	.string "after all... unless...$"

Sharpy103_Text_8:
# 401 "data/maps/Route103/scripts.pory"
	.string "Unless you change your mind! In which\n"
	.string "case, we'll be waiting at Petalburg's\l"
	.string "Dojo!$"

Sharpy103_Text_9:
# 407 "data/maps/Route103/scripts.pory"
	.string "It's the big, old-fashioned wooden\n"
	.string "building - can't miss it!\p"
	.string "So, if you want to help us save Hoenn...$"

Sharpy103_Text_10:
# 413 "data/maps/Route103/scripts.pory"
	.string "You better come!$"

Sharpy103_Text_11:
# 422 "data/maps/Route103/scripts.pory"
	.string "Well, it goes without saying, but you\n"
	.string "passed the test with flying colors!$"

Sharpy103_Text_12:
# 427 "data/maps/Route103/scripts.pory"
	.string "Now you just need to come to Petalburg\n"
	.string "Dojo, and you can join us officially!$"

Sharpy103_Text_13:
# 433 "data/maps/Route103/scripts.pory"
	.string "Well, someone else has the last word on\n"
	.string "accepting recruits... but I doubt he'll\l"
	.string "reject you.$"

Sharpy103_Text_14:
# 439 "data/maps/Route103/scripts.pory"
	.string "We'd love to show you the way, but we\n"
	.string "kinda need to rush back.$"

Sharpy103_Text_15:
# 445 "data/maps/Route103/scripts.pory"
	.string "Yup - so we'll go on ahead! Petalburg\n"
	.string "Dojo is the big, old-fashioned wooden\l"
	.string "building - can't miss it.$"

Sharpy103_Text_16:
# 451 "data/maps/Route103/scripts.pory"
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
	.string "I'm not leaving without my bike. It\n"
	.string "costed me 1,000,000¥ at Cerulean City's\l"
	.string "Bike Shop!$"

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
	.string "Very well... here's what we'll do. I want\n"
	.string "you to distract him for a bit.\p"
	.string "I'll tell my partner to approach from\n"
	.string "the customs building, and we'll do a\l"
	.string "pince maneuver.\p"
	.string "We're counting on you!$"

Route103ConcordBridgeGuard_Text_12:
# 734 "data/maps/Route103/scripts.pory"
	.string "Be on your way, then - and stay out of\n"
	.string "trouble.$"

Route103ConcordBridgeGuard_Text_13:
# 741 "data/maps/Route103/scripts.pory"
	.string "Quickly, go distract that criminal -\n"
	.string "before he notices something is off!$"

Route103ConcordBridgeGuard_Text_14:
# 744 "data/maps/Route103/scripts.pory"
	.string "I got to thank you for that battle.\p"
	.string "If I get strong enough, maybe they'll\n"
	.string "send me somewhere other than this\l"
	.string "bridge in the boonies.$"

Route103ConcordBridgeGuard_Text_15:
# 748 "data/maps/Route103/scripts.pory"
	.string "Wherever he is now, that con man is not\n"
	.string "our concern anymore.\p"
	.string "He didn't look that dangerous anyway!$"

Route103ConcordConartist_Text_0:
# 769 "data/maps/Route103/scripts.pory"
	.string "Hey kid! Wanna earn some quick and easy\n"
	.string "pokeyen? You look like you could use it!$"

Route103ConcordConartist_Text_1:
# 770 "data/maps/Route103/scripts.pory"
	.string "Yes$"

Route103ConcordConartist_Text_2:
# 770 "data/maps/Route103/scripts.pory"
	.string "No$"

Route103ConcordConartist_Text_3:
# 773 "data/maps/Route103/scripts.pory"
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
# 787 "data/maps/Route103/scripts.pory"
	.string "Eh, scram then. Some of us have work to\n"
	.string "do.$"

Route103ConcordConartist_Text_5:
# 794 "data/maps/Route103/scripts.pory"
	.string "Come on, go distract him! Tell him\n"
	.string "there's a flying Grumpig being him or\l"
	.string "something!\p"
	.string "I don't care how, that's what I'm paying\n"
	.string "you for!\p"
	.string "And no, I'm not into upfront payments,\n"
	.string "thank you. Cash after!$"

Route103ConcordConartist_Text_6:
# 801 "data/maps/Route103/scripts.pory"
	.string "What the hell are you doing? You barely\n"
	.string "distracted him - you got to be more of a\l"
	.string "nuisance!$"

Route103ConcordConartist_Text_7:
# 805 "data/maps/Route103/scripts.pory"
	.string "Hold it right there! You're surrounded!$"

Route103ConcordConartist_Text_8:
# 826 "data/maps/Route103/scripts.pory"
	.string "What the...?$"

Route103ConcordConartist_Text_9:
# 830 "data/maps/Route103/scripts.pory"
	.string "You two-faced bastard - you set me up!\n"
	.string "You're going to get it now!\p"
	.string "No one slips Jimmy McGligar, best\n"
	.string "Pokémon egg seller of Hoenn!$"

Route103ConcordConartist_Text_10:
# 837 "data/maps/Route103/scripts.pory"
	.string "You'll never catch me alive! Outta my\n"
	.string "way!$"

Route103ConcordConartist_Text_11:
# 843 "data/maps/Route103/scripts.pory"
	.string "W-wait, you're unde-...!$"

Route103ConcordConartist_Text_12:
# 849 "data/maps/Route103/scripts.pory"
	.string "SEE YA, LOSERS...!$"

Route103ConcordConartist_Text_13:
# 855 "data/maps/Route103/scripts.pory"
	.string "GRLBGBRLB...!$"

Route103ConcordConartist_Text_14:
# 861 "data/maps/Route103/scripts.pory"
	.string "Such athleticism... he should stop\n"
	.string "conning, and become an acrobat.$"

Route103ConcordConartist_Text_15:
# 865 "data/maps/Route103/scripts.pory"
	.string "Indeed... at any rate, it's not our\n"
	.string "problem any more.$"

Route103ConcordConartist_Text_16:
# 877 "data/maps/Route103/scripts.pory"
	.string "Thank you for your help, civilian! Now we\n"
	.string "can put this long shift to an end.$"

Route103ConcordConartist_Text_17:
# 879 "data/maps/Route103/scripts.pory"
	.string "Here, this is for your trouble.$"

Route103ConcordConartist_Text_18:
# 881 "data/maps/Route103/scripts.pory"
	.string "Received 1000¥!$"

ConArtistEgg_Text_0:
# 916 "data/maps/Route103/scripts.pory"
	.string "Hands off my wares, pal! This egg is\n"
	.string "mine!$"

ConArtistEgg_Text_1:
# 922 "data/maps/Route103/scripts.pory"
	.string "The shady dealer left this egg behind...$"

ConArtistEgg_Text_2:
# 925 "data/maps/Route103/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

RiverFerryGuyUp_Text_0:
# 941 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lad?$"

RiverFerryGuyUp_Text_1:
# 943 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lass?$"

RiverFerryGuyUp_Text_2:
# 948 "data/maps/Route103/scripts.pory"
	.string "Would you like to sail upstream?$"

RiverFerryGuyUp_Text_3:
# 952 "data/maps/Route103/scripts.pory"
	.string "Then hop on!$"

RiverFerryGuyUp_Text_4:
# 969 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're going upstream, so it'll\n"
	.string "be a bit slow.$"

RiverFerryGuyUp_Text_5:
# 991 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back downstream.$"

RiverFerryGuyUp_Text_6:
# 1004 "data/maps/Route103/scripts.pory"
	.string "Ah, shame... tell me if you ever do!$"

RiverFerryGuyDown_Text_0:
# 1021 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail\n"
	.string "downstream?$"

RiverFerryGuyDown_Text_1:
# 1042 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're sailing downstream, so\n"
	.string "brace yourself!$"

RiverFerryGuyDown_Text_2:
# 1064 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back upstream.$"

RiverFerryBoat_Text_0:
# 1086 "data/maps/Route103/scripts.pory"
	.string "It's an old boat, but it's well taken\n"
	.string "care of.$"

RiverFerryManNotThatEntry_Text_0:
# 1095 "data/maps/Route103/scripts.pory"
	.string "Not so fast, young one...! If you want to\n"
	.string "board, do it after me.$"

FisherGuruRoute103_Text_0:
# 1113 "data/maps/Route103/scripts.pory"
	.string "Sssh... did you hear that? It's... IT'S\n"
	.string "COMING!$"

FisherGuruRoute103_Text_1:
# 1126 "data/maps/Route103/scripts.pory"
	.string "CRAAAAAAW!!$"

FisherGuruRoute103_Text_2:
# 1132 "data/maps/Route103/scripts.pory"
	.string "AAH, CRAB BASKETS!$"

FisherGuruRoute103_Text_3:
# 1135 "data/maps/Route103/scripts.pory"
	.string "That was the LEGENDARY MUD CRAB of\n"
	.string "Route 103 - I've been looking for it for\l"
	.string "WEEKS!\p"
	.string "But I was so awe-struck... that I could\n"
	.string "not do anything!!$"

FisherGuruRoute103_Text_4:
# 1138 "data/maps/Route103/scripts.pory"
	.string "Still, this can't be a coincidence - you\n"
	.string "both showed up at the same time!!\p"
	.string "HMM... my intuition tells me it saw\n"
	.string "something in you. But then it left\l"
	.string "disappointed.$"

FisherGuruRoute103_Text_5:
# 1142 "data/maps/Route103/scripts.pory"
	.string "But we can fix that. Here, take THIS!$"

FisherGuruRoute103_Text_6:
# 1146 "data/maps/Route103/scripts.pory"
	.string "I want you to take that rod and fish at\n"
	.string "least FIVE SPECIES OF POKÉMON!\p"
	.string "WHY? Because only then will the\n"
	.string "LEGENDARY MUDCRAB judge you as worthy,\l"
	.string "and show itself again!\p"
	.string "Do not question the intuition of Ivan,\n"
	.string "the Legendary Releer - just embrace it,\l"
	.string "and fulfil your destiny!!$"

FisherGuruRoute103_Text_7:
# 1158 "data/maps/Route103/scripts.pory"
	.string "AHOY! How's the FISHING going!?$"

FisherGuruRoute103_Text_8:
# 1160 "data/maps/Route103/scripts.pory"
	.string "About your request...$"

FisherGuruRoute103_Text_9:
# 1160 "data/maps/Route103/scripts.pory"
	.string "Did you see the Mud Crab?$"

FisherGuruRoute103_Text_10:
# 1160 "data/maps/Route103/scripts.pory"
	.string "How's it going?$"

FisherGuruRoute103_Text_11:
# 1160 "data/maps/Route103/scripts.pory"
	.string "It's nothing$"

FisherGuruRoute103_Text_12:
# 1167 "data/maps/Route103/scripts.pory"
	.string "Ah, you've fished at least 5 Pokémon?\n"
	.string "Good, GOOD!\p"
	.string "I'm confident the Legendary Mud Crab\n"
	.string "will acknowledge you and show up.\p"
	.string "Let's wait a bit!$"

FisherGuruRoute103_Text_13:
# 1175 "data/maps/Route103/scripts.pory"
	.string "{PLAYER} and the fisher wait in a\n"
	.string "long, uncomfortable silence...$"

FisherGuruRoute103_Text_14:
# 1179 "data/maps/Route103/scripts.pory"
	.string "Hmm... I should have known. Such a\n"
	.string "measly fishing test...\p"
	.string "Is NOT ENOUGH to make the Mud Crab\n"
	.string "acknowledge you!$"

FisherGuruRoute103_Text_15:
# 1182 "data/maps/Route103/scripts.pory"
	.string "I suppose I've got no choice... here,\n"
	.string "TAKE THIS!$"

FisherGuruRoute103_Text_16:
# 1186 "data/maps/Route103/scripts.pory"
	.string "I want you to use that rod to bring me a\n"
	.string "BIG PEARL!\p"
	.string "If you are a true fisher... you will know\n"
	.string "how.\p"
	.string "Do that, and I'm sure next time the Mud\n"
	.string "Crab will show itself!$"

FisherGuruRoute103_Text_17:
# 1195 "data/maps/Route103/scripts.pory"
	.string "Like I said, I need you to fish 5 species\n"
	.string "of Pokémon!\p"
	.string "If you are the fisher the Mud Crab\n"
	.string "believes you to be, you shouldn't need\l"
	.string "any guidance!$"

FisherGuruRoute103_Text_18:
# 1199 "data/maps/Route103/scripts.pory"
	.string "O-of course I could give it, but that\n"
	.string "would defeat the purpose!$"

FisherGuruRoute103_Text_19:
# 1210 "data/maps/Route103/scripts.pory"
	.string "pearl$"

FisherGuruRoute103_Text_20:
# 1220 "data/maps/Route103/scripts.pory"
	.string "no pearl$"

FisherGuruRoute103_Text_21:
# 1228 "data/maps/Route103/scripts.pory"
	.string "Regrettably, I haven't. Not even the tip\n"
	.string "of that lustruous, star-shaped crown\l"
	.string "of his...\p"
	.string "But don't worry - he won't swim away\n"
	.string "easily.$"

FisherGuruRoute103_Text_22:
# 1232 "data/maps/Route103/scripts.pory"
	.string "They say he is forever waiting for a\n"
	.string "trainer who saved his life during the\l"
	.string "Assault on Route 103.\p"
	.string "Sadly, that trainer died that day. They\n"
	.string "will never meet again...$"

FisherGuruRoute103_Text_23:
# 1237 "data/maps/Route103/scripts.pory"
	.string "In spite of its beastly appearance, the\n"
	.string "Mud Crab is a loyal, tender creature.\l"
	.string "That's why I wish to catch him, and help\l"
	.string "him heal!$"

FisherGuruRoute103_Text_24:
# 1244 "data/maps/Route103/scripts.pory"
	.string "Ah, well, aside from the Mud Crab\n"
	.string "business... not very good, I must say.$"

FisherGuruRoute103_Text_25:
# 1247 "data/maps/Route103/scripts.pory"
	.string "The sea is poisoned, the rivers are\n"
	.string "muddy...\p"
	.string "Most of my buddies have moved up north.$"

FisherGuruRoute103_Text_26:
# 1251 "data/maps/Route103/scripts.pory"
	.string "But me, I like the challenge!$"

FisherGuruRoute103_Text_27:
# 1258 "data/maps/Route103/scripts.pory"
	.string "Then don't distract me! Does it look\n"
	.string "like I'm doing nothing here!?$"

FisherGuruRoute103_Text_28:
# 1261 "data/maps/Route103/scripts.pory"
	.string "... don't answer that.$"

MoveTutorSign_Text_0:
# 1275 "data/maps/Route103/scripts.pory"
	.string "Move Tutor Colton's House$"

Fishercallsfornumber_Text_0:
# 1283 "data/maps/Route103/scripts.pory"
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
# 759 "data/maps/Route103/scripts.pory"
	.string "That could have gone better...$"

ShadyDealer103_Outro::
# 906 "data/maps/Route103/scripts.pory"
	.string "I... I-I'm not going back to jail!$"
