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
# 219 "data/maps/Route103/scripts.pory"
	random 10
# 220 "data/maps/Route103/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 221 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 222 "data/maps/Route103/scripts.pory"
	case 0, DynamicWeather103_2
# 226 "data/maps/Route103/scripts.pory"
	case 1, DynamicWeather103_3
# 230 "data/maps/Route103/scripts.pory"
	case 2, DynamicWeather103_4
# 234 "data/maps/Route103/scripts.pory"
	case 3, DynamicWeather103_5
# 238 "data/maps/Route103/scripts.pory"
	case 4, DynamicWeather103_6
# 241 "data/maps/Route103/scripts.pory"
	case 5, DynamicWeather103_7
# 244 "data/maps/Route103/scripts.pory"
	case 6, DynamicWeather103_8
# 247 "data/maps/Route103/scripts.pory"
	case 7, DynamicWeather103_9
# 250 "data/maps/Route103/scripts.pory"
	case 8, DynamicWeather103_10
# 253 "data/maps/Route103/scripts.pory"
	case 9, DynamicWeather103_11
# 256 "data/maps/Route103/scripts.pory"
	case 10, DynamicWeather103_12
	return

DynamicWeather103_2:
# 223 "data/maps/Route103/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 224 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
# 225 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 4
	return

DynamicWeather103_3:
# 227 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 228 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
# 229 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 4
	return

DynamicWeather103_4:
# 231 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 232 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
# 233 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 4
	return

DynamicWeather103_5:
# 235 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 236 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
# 237 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 4
	return

DynamicWeather103_6:
# 239 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 240 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

DynamicWeather103_7:
# 242 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 243 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

DynamicWeather103_8:
# 245 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 246 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

DynamicWeather103_9:
# 248 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 249 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

DynamicWeather103_10:
# 251 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 252 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

DynamicWeather103_11:
# 254 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 255 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

DynamicWeather103_12:
# 257 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 258 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return


Route103Weather::
# 264 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 0, Route103Shade
# 265 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 1, Route103Rain1
# 266 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 2, Route103Rain2
# 267 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 3, Route103EndRain
# 269 "data/maps/Route103/scripts.pory"
	release
	return


Route103Shade::
# 273 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
	return


Route103Rain1::
# 277 "data/maps/Route103/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 278 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 2
# 279 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 280 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103Rain2::
# 284 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 285 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
# 286 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 287 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103EndRain::
# 292 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 293 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
# 294 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 295 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


FerryManReturnsSouth::
# 302 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 303 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 304 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 305 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	return


Route103ConcordBridgeSign::
# 310 "data/maps/Route103/scripts.pory"
	lock
# 311 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeSign_Text_0
# 312 "data/maps/Route103/scripts.pory"
	release
	return


Route103WaterfallCaveSign::
# 316 "data/maps/Route103/scripts.pory"
	lock
# 317 "data/maps/Route103/scripts.pory"
	msgbox Route103WaterfallCaveSign_Text_0
# 318 "data/maps/Route103/scripts.pory"
	release
	return


Route103FisherBucket::
# 322 "data/maps/Route103/scripts.pory"
	lock
# 323 "data/maps/Route103/scripts.pory"
	msgbox Route103FisherBucket_Text_0
# 324 "data/maps/Route103/scripts.pory"
	release
	return


Route103IteminMud::
# 328 "data/maps/Route103/scripts.pory"
	lock
# 329 "data/maps/Route103/scripts.pory"
	finditem ITEM_TM_MUD_SHOT
# 332 "data/maps/Route103/scripts.pory"
	removeobject 21
# 333 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonGruntCheckingDriver::
# 336 "data/maps/Route103/scripts.pory"
	lock
# 337 "data/maps/Route103/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_lt Route103DevonGruntCheckingDriver_2
Route103DevonGruntCheckingDriver_1:
# 345 "data/maps/Route103/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_ge Route103DevonGruntCheckingDriver_5
Route103DevonGruntCheckingDriver_4:
# 354 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103DevonGruntCheckingDriver_2:
# 339 "data/maps/Route103/scripts.pory"
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 340 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_0
# 342 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 343 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_1
	goto Route103DevonGruntCheckingDriver_1

Route103DevonGruntCheckingDriver_5:
# 347 "data/maps/Route103/scripts.pory"
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 348 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_2
# 350 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 351 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_3
	goto Route103DevonGruntCheckingDriver_4


Route103DevonDrivercheckedby::
# 358 "data/maps/Route103/scripts.pory"
	lock
# 359 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_0
# 360 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonDrivercheckedby_Text_0
# 362 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_1
# 363 "data/maps/Route103/scripts.pory"
	waitmovement
# 364 "data/maps/Route103/scripts.pory"
	releaseall
	return


Sharpy103::
# 369 "data/maps/Route103/scripts.pory"
	lockall
# 370 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 371 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 372 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 373 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 375 "data/maps/Route103/scripts.pory"
	special DoTVShow
# 377 "data/maps/Route103/scripts.pory"
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 385 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 400 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 401 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 402 "data/maps/Route103/scripts.pory"
	addobject 25
# 403 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 37
# 405 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 406 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 407 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 408 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 409 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 410 "data/maps/Route103/scripts.pory"
	closemessage
# 411 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 413 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_0
# 414 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 415 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 416 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_1
# 417 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 418 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_2
# 419 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 420 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 421 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 422 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 424 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 425 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 426 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 427 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 429 "data/maps/Route103/scripts.pory"
	goto_if_set saidnotosharpyinoldale, Sharpy103_8
# 458 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 459 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 460 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 461 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 462 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 464 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 465 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 466 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 467 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 469 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_4
# 470 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 471 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 472 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 473 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 476 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 477 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 478 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 479 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 481 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_5
# 482 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 483 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 484 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 485 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_15
# 488 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_6
# 489 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 490 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 491 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 492 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_16
# 493 "data/maps/Route103/scripts.pory"
	closemessage
Sharpy103_7:
# 497 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 498 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 499 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_7
# 500 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_8
# 501 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 502 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 503 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_9
# 504 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 505 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 506 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 507 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 508 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 509 "data/maps/Route103/scripts.pory"
	setflag DLCclassends
# 510 "data/maps/Route103/scripts.pory"
	clearflag DLCrecesstarts
# 511 "data/maps/Route103/scripts.pory"
	setflag Sharpydefeatedat103
# 512 "data/maps/Route103/scripts.pory"
	setvar VAR_SHARPYANDCAMELIAOLDALE, 1
# 514 "data/maps/Route103/scripts.pory"
	releaseall
# 515 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 1
	goto_if_eq Sharpy103_11
# 515 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 2
	goto_if_eq Sharpy103_11
# 515 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq Sharpy103_11
# 515 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 4
	goto_if_eq Sharpy103_11
# 517 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
	return

Sharpy103_2:
# 379 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 380 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 381 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 382 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 383 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 387 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 388 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 389 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 390 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 391 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 392 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 393 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 394 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 395 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 396 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 397 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 398 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4

Sharpy103_8:
# 432 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 433 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 434 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 435 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_3
# 436 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 438 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 439 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 440 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 441 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 443 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 444 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 445 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 446 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 449 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 450 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 451 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 452 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_10
# 453 "data/maps/Route103/scripts.pory"
	closemessage
	goto Sharpy103_7

Sharpy103_11:
# 516 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103TouristApproach0::
# 526 "data/maps/Route103/scripts.pory"
	lockall
# 527 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 528 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 529 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 530 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 531 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 532 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach1::
# 536 "data/maps/Route103/scripts.pory"
	lockall
# 537 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 538 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 539 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 540 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 541 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach1_Movement_0
# 542 "data/maps/Route103/scripts.pory"
	waitmovement
# 543 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 544 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach2::
# 548 "data/maps/Route103/scripts.pory"
	lockall
# 549 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 550 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 551 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 552 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 553 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach2_Movement_0
# 554 "data/maps/Route103/scripts.pory"
	waitmovement
# 555 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 556 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach3::
# 560 "data/maps/Route103/scripts.pory"
	lockall
# 561 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 562 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 563 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 564 "data/maps/Route103/scripts.pory"
	waitmovement
# 565 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 566 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 567 "data/maps/Route103/scripts.pory"
	waitmovement
# 568 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 569 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103Tourist::
# 573 "data/maps/Route103/scripts.pory"
	lockall
# 574 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 575 "data/maps/Route103/scripts.pory"
touristafterapproach:
# 576 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 0
	goto_if_eq Route103Tourist_2
Route103Tourist_1:
# 602 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 1
	goto_if_eq Route103Tourist_5
Route103Tourist_4:
# 609 "data/maps/Route103/scripts.pory"
finishtouristscript:
# 610 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103Tourist_2:
# 578 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 579 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_0
# 580 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_TOURIST_103, Tourist103_Outro
# 583 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 1
	goto_if_eq Route103Tourist_8
# 583 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 2
	goto_if_eq Route103Tourist_8
# 583 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq Route103Tourist_8
# 583 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 4
	goto_if_eq Route103Tourist_8
# 585 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
Route103Tourist_7:
# 587 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_1
# 588 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 589 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 590 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 591 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_2
# 592 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_6
# 593 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_3
# 595 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 596 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_4
# 598 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 1
# 599 "data/maps/Route103/scripts.pory"
	goto finishtouristscript
	goto Route103Tourist_1

Route103Tourist_5:
# 604 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 605 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 606 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_5
	goto Route103Tourist_4

Route103Tourist_8:
# 584 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103Tourist_7


Route103Touristbikepushed::
# 619 "data/maps/Route103/scripts.pory"
	lockall
# 620 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 621 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 622 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 623 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_0
# 624 "data/maps/Route103/scripts.pory"
	closemessage
# 626 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 627 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 628 "data/maps/Route103/scripts.pory"
	playse SE_BIKE_HOP
# 629 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 630 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route103Touristbikepushed_Movement_1
# 631 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 632 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 633 "data/maps/Route103/scripts.pory"
	setobjectxy 27, 0, 0
# 634 "data/maps/Route103/scripts.pory"
	setobjectxy 26, 0, 0
# 635 "data/maps/Route103/scripts.pory"
	setflag touristhelped
# 636 "data/maps/Route103/scripts.pory"
	clearflag touristonbike
# 637 "data/maps/Route103/scripts.pory"
	addobject 29
# 638 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 22, 9
# 639 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_6
# 640 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 641 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_1
# 642 "data/maps/Route103/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 643 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103DevonGruntCheckingDriver_Movement_0
# 644 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_2
# 646 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_5
# 647 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_3
# 649 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103Touristbikepushed_Movement_2
# 650 "data/maps/Route103/scripts.pory"
	waitmovement
# 652 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 653 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 654 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 655 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 656 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 657 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 658 "data/maps/Route103/scripts.pory"
	waitse
# 660 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_4
# 662 "data/maps/Route103/scripts.pory"
	removeobject 29
# 663 "data/maps/Route103/scripts.pory"
	setflag touristonbike
# 665 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 2
# 666 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103TouristNotThatWay::
# 671 "data/maps/Route103/scripts.pory"
	lockall
# 672 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 673 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 674 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 675 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristNotThatWay_Text_0
# 676 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach1_Movement_0
# 677 "data/maps/Route103/scripts.pory"
	waitmovement
# 678 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103VeteranBattle::
# 684 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, Route103VeteranRegister
# 685 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 686 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 687 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 688 "data/maps/Route103/scripts.pory"
	applymovement 20, Route103DevonDrivercheckedby_Movement_0
# 689 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranBattle_Text_0
# 690 "data/maps/Route103/scripts.pory"
	applymovement 20, Route103TouristApproach0_Movement_1
# 691 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRegister::
# 696 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 697 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 698 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_0
# 700 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 701 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_1
# 702 "data/maps/Route103/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 703 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRematch::
# 708 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro2, Veteran103_Outro2
# 709 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRematch_Text_0
	end


Route103ConcordBridgeGuard::
# 729 "data/maps/Route103/scripts.pory"
	lockall
# 730 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 731 "data/maps/Route103/scripts.pory"
	applymovement 30, Route103DevonDrivercheckedby_Movement_0
# 732 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordBridgeGuard_2
Route103ConcordBridgeGuard_1:
# 736 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_7
Route103ConcordBridgeGuard_4:
# 782 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route103ConcordBridgeGuard_12
Route103ConcordBridgeGuard_11:
# 788 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_20
Route103ConcordBridgeGuard_17:
# 792 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_29
Route103ConcordBridgeGuard_27:
# 796 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_38
Route103ConcordBridgeGuard_35:
# 801 "data/maps/Route103/scripts.pory"
finishguardscript:
# 802 "data/maps/Route103/scripts.pory"
	applymovement 30, Route103TouristApproach0_Movement_1
# 803 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordBridgeGuard_2:
# 733 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_0
	goto Route103ConcordBridgeGuard_1

Route103ConcordBridgeGuard_5:
# 738 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_1
# 739 "data/maps/Route103/scripts.pory"
guarddistractchoice:
# 740 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordBridgeGuard_Text_2, Route103ConcordBridgeGuard_Text_3, Route103ConcordBridgeGuard_Text_4, Route103ConcordBridgeGuard_Text_5, Route103ConcordBridgeGuard_Text_6
# 742 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordBridgeGuard_15
Route103ConcordBridgeGuard_14:
# 748 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordBridgeGuard_25
Route103ConcordBridgeGuard_24:
# 753 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route103ConcordBridgeGuard_33
Route103ConcordBridgeGuard_32:
# 770 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route103ConcordBridgeGuard_42
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_6:
# 736 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_5
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_7:
# 736 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordBridgeGuard_6
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_12:
# 783 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_12
# 784 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_11

Route103ConcordBridgeGuard_15:
# 743 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_7
# 746 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_14

Route103ConcordBridgeGuard_18:
# 790 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_13
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_19:
# 788 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_18
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_20:
# 788 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_19
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_25:
# 749 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_8
# 751 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_24

Route103ConcordBridgeGuard_28:
# 793 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_14
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_29:
# 792 "data/maps/Route103/scripts.pory"
	goto_if_set helpedconcordconartist, Route103ConcordBridgeGuard_28
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_33:
# 754 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_9
# 756 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_DEVONGUARD_103, DevonGuard103_Outro
# 757 "data/maps/Route103/scripts.pory"
	setflag helpedconcordconartist
# 759 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 762 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 764 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_10
# 765 "data/maps/Route103/scripts.pory"
	clearflag conartistrewardsinoldale
# 766 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 767 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_32

Route103ConcordBridgeGuard_36:
# 797 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_15
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_37:
# 796 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, Route103ConcordBridgeGuard_36
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_38:
# 796 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_37
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_42:
# 771 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_11
# 775 "data/maps/Route103/scripts.pory"
	setflag betrayedconcordconartist
# 776 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_4


Route103ConcordConartist::
# 813 "data/maps/Route103/scripts.pory"
	lockall
# 814 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 815 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 817 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordConartist_2
Route103ConcordConartist_1:
# 843 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_7
Route103ConcordConartist_4:
# 849 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_17
Route103ConcordConartist_14:
# 962 "data/maps/Route103/scripts.pory"
finishconartistscript:
# 963 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordConartist_2:
# 819 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_0
# 820 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 822 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordConartist_12
Route103ConcordConartist_11:
# 837 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordConartist_21
	goto Route103ConcordConartist_1

Route103ConcordConartist_5:
# 845 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_6:
# 843 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_7:
# 843 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordConartist_6
	goto Route103ConcordConartist_4

Route103ConcordConartist_12:
# 823 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_3
# 831 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_3
# 832 "data/maps/Route103/scripts.pory"
	waitmovement 28
# 833 "data/maps/Route103/scripts.pory"
	setflag conartistaskeddistract
# 834 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_11

Route103ConcordConartist_15:
# 851 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 852 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_6
# 855 "data/maps/Route103/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 856 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_7
# 862 "data/maps/Route103/scripts.pory"
	clearflag devonsvsconartist
# 863 "data/maps/Route103/scripts.pory"
	addobject 31
# 864 "data/maps/Route103/scripts.pory"
	setobjectxy 31, 42, 37
# 865 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 866 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 867 "data/maps/Route103/scripts.pory"
	waitmovement
# 868 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_0
# 869 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 872 "data/maps/Route103/scripts.pory"
	addobject 32
# 873 "data/maps/Route103/scripts.pory"
	setobjectxy 32, 30, 39
# 874 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_1
# 876 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_2
# 877 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_8
# 879 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 881 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_9
# 884 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHADYDEALER_103, ShadyDealer103_Outro
# 886 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonGruntCheckingDriver_Movement_0
# 887 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 888 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_10
# 890 "data/maps/Route103/scripts.pory"
	playse SE_M_COMET_PUNCH
# 891 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ConcordConartist_Movement_3
# 893 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_4
# 894 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_11
# 895 "data/maps/Route103/scripts.pory"
	playse SE_M_MEGA_KICK2
# 896 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 897 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_5
# 898 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_6
# 899 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 900 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_12
# 901 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_7
# 902 "data/maps/Route103/scripts.pory"
	playse SE_M_JUMP_KICK
# 903 "data/maps/Route103/scripts.pory"
	waitse
# 904 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 905 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 906 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_13
# 908 "data/maps/Route103/scripts.pory"
	waitmovement
# 910 "data/maps/Route103/scripts.pory"
	removeobject 28
# 911 "data/maps/Route103/scripts.pory"
	setflag devonsvsconartist
# 912 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 913 "data/maps/Route103/scripts.pory"
	clearflag devonbridgeguardgoestoconartist
# 915 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 916 "data/maps/Route103/scripts.pory"
	fadenewbgm 1
# 917 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 1
	goto_if_eq Route103ConcordConartist_24
# 917 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 2
	goto_if_eq Route103ConcordConartist_24
# 917 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq Route103ConcordConartist_24
# 917 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 4
	goto_if_eq Route103ConcordConartist_24
# 920 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
Route103ConcordConartist_23:
# 921 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 924 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103DevonGruntCheckingDriver_Movement_0
# 926 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_14
# 928 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103DevonGruntCheckingDriver_Movement_0
# 930 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_15
# 932 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_8
# 933 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_8
# 934 "data/maps/Route103/scripts.pory"
	waitmovement
# 935 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 936 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 937 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103TouristApproach1_Movement_0
# 938 "data/maps/Route103/scripts.pory"
	waitmovement
# 939 "data/maps/Route103/scripts.pory"
	removeobject 31
# 940 "data/maps/Route103/scripts.pory"
	waitmovement
# 941 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 942 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_16
# 943 "data/maps/Route103/scripts.pory"
	showmoneybox 18, 0
# 944 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_17
# 945 "data/maps/Route103/scripts.pory"
	addmoney 1000
# 946 "data/maps/Route103/scripts.pory"
	playse SE_SHOP
# 947 "data/maps/Route103/scripts.pory"
	updatemoneybox
# 948 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_18
# 949 "data/maps/Route103/scripts.pory"
	closemessage
# 950 "data/maps/Route103/scripts.pory"
	hidemoneybox
# 952 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_9
# 953 "data/maps/Route103/scripts.pory"
	waitmovement
# 955 "data/maps/Route103/scripts.pory"
	waitmovement
# 957 "data/maps/Route103/scripts.pory"
	removeobject 32
# 960 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_14

Route103ConcordConartist_16:
# 849 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_15
	goto Route103ConcordConartist_14

Route103ConcordConartist_17:
# 849 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordConartist_16
	goto Route103ConcordConartist_14

Route103ConcordConartist_21:
# 838 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_4
# 839 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_3
# 840 "data/maps/Route103/scripts.pory"
	waitmovement 28
	goto Route103ConcordConartist_1

Route103ConcordConartist_24:
# 919 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103ConcordConartist_23


ConArtistEgg::
# 972 "data/maps/Route103/scripts.pory"
	lockall
# 973 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 974 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, ConArtistEgg_2
ConArtistEgg_1:
# 981 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, ConArtistEgg_4
	return

ConArtistEgg_2:
# 975 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 976 "data/maps/Route103/scripts.pory"
	applymovement 28, ConArtistEgg_Movement_0
# 977 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_0
# 978 "data/maps/Route103/scripts.pory"
	releaseall
# 979 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_5
	goto ConArtistEgg_1

ConArtistEgg_4:
# 983 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_1
# 984 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 985 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 986 "data/maps/Route103/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 987 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_2
# 988 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 1
	goto_if_eq ConArtistEgg_7
# 988 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 2
	goto_if_eq ConArtistEgg_7
# 988 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq ConArtistEgg_7
# 988 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 4
	goto_if_eq ConArtistEgg_7
# 990 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
ConArtistEgg_6:
# 991 "data/maps/Route103/scripts.pory"
	removeobject 33
# 992 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 993 "data/maps/Route103/scripts.pory"
	releaseall
	return

ConArtistEgg_7:
# 989 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto ConArtistEgg_6


RiverFerryGuyUp::
# 1000 "data/maps/Route103/scripts.pory"
	lockall
# 1001 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1002 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 1004 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 1
	goto_if_eq RiverFerryGuyUp_2
# 1004 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 2
	goto_if_eq RiverFerryGuyUp_2
# 1004 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq RiverFerryGuyUp_2
# 1004 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 4
	goto_if_eq RiverFerryGuyUp_2
RiverFerryGuyUp_1:
# 1014 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
# 1015 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 1017 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyUp_11
RiverFerryGuyUp_10:
# 1070 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyUp_17
RiverFerryGuyUp_16:
# 1074 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyUp_2:
# 1005 "data/maps/Route103/scripts.pory"
	checkplayergender
# 1006 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyUp_14
RiverFerryGuyUp_13:
# 1008 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyUp_29
	goto RiverFerryGuyUp_1

RiverFerryGuyUp_11:
# 1018 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 1019 "data/maps/Route103/scripts.pory"
	removeobject 36
# 1020 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1021 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 1022 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 1024 "data/maps/Route103/scripts.pory"
	hidefollower
# 1025 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1026 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_0
# 1027 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1028 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1029 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 1030 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1031 "data/maps/Route103/scripts.pory"
	hideplayer
# 1032 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 1033 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_1
# 1034 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1035 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
# 1036 "data/maps/Route103/scripts.pory"
	closemessage
# 1037 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 1038 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_2
# 1039 "data/maps/Route103/scripts.pory"
	applymovement 35, RiverFerryGuyUp_Movement_3
# 1040 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1041 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 1043 "data/maps/Route103/scripts.pory"
	clearflag ferryman103up
# 1044 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103up
# 1045 "data/maps/Route103/scripts.pory"
	addobject 36
# 1046 "data/maps/Route103/scripts.pory"
	addobject 37
# 1048 "data/maps/Route103/scripts.pory"
	showplayer
# 1049 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 16
# 1050 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 1051 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonGruntCheckingDriver_Movement_1
# 1052 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1054 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 1
	goto_if_eq RiverFerryGuyUp_20
# 1054 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 2
	goto_if_eq RiverFerryGuyUp_20
# 1054 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq RiverFerryGuyUp_20
# 1054 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 4
	goto_if_eq RiverFerryGuyUp_20
# 1056 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
RiverFerryGuyUp_19:
# 1058 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_5
# 1059 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1060 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1061 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_5
# 1062 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1063 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1064 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1065 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1066 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
	goto RiverFerryGuyUp_10

RiverFerryGuyUp_14:
# 1007 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyUp_13

RiverFerryGuyUp_17:
# 1071 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
	goto RiverFerryGuyUp_16

RiverFerryGuyUp_20:
# 1055 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyUp_19

RiverFerryGuyUp_29:
# 1009 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyUp_1


RiverFerryGuyDown::
# 1078 "data/maps/Route103/scripts.pory"
	lockall
# 1079 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1080 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_0
# 1081 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 1
	goto_if_eq RiverFerryGuyDown_2
# 1081 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 2
	goto_if_eq RiverFerryGuyDown_2
# 1081 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq RiverFerryGuyDown_2
# 1081 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 4
	goto_if_eq RiverFerryGuyDown_2
RiverFerryGuyDown_1:
# 1088 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_0
# 1089 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 1091 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyDown_11
RiverFerryGuyDown_10:
# 1144 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyDown_17
RiverFerryGuyDown_16:
# 1148 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyDown_2:
# 1082 "data/maps/Route103/scripts.pory"
	checkplayergender
# 1083 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyDown_14
RiverFerryGuyDown_13:
# 1085 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyDown_29
	goto RiverFerryGuyDown_1

RiverFerryGuyDown_11:
# 1092 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 1093 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1094 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1095 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1096 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
# 1098 "data/maps/Route103/scripts.pory"
	hidefollower
# 1099 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1100 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_0
# 1101 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1102 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1103 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 1104 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1105 "data/maps/Route103/scripts.pory"
	hideplayer
# 1106 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 1107 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_0
# 1108 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1109 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_1
# 1110 "data/maps/Route103/scripts.pory"
	closemessage
# 1111 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 1112 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_1
# 1113 "data/maps/Route103/scripts.pory"
	applymovement 36, RiverFerryGuyDown_Movement_2
# 1114 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1115 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 1117 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 1118 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 1119 "data/maps/Route103/scripts.pory"
	addobject 34
# 1120 "data/maps/Route103/scripts.pory"
	addobject 35
# 1122 "data/maps/Route103/scripts.pory"
	showplayer
# 1123 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 32
# 1124 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 1125 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonGruntCheckingDriver_Movement_1
# 1126 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1128 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 1
	goto_if_eq RiverFerryGuyDown_20
# 1128 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 2
	goto_if_eq RiverFerryGuyDown_20
# 1128 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq RiverFerryGuyDown_20
# 1128 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 4
	goto_if_eq RiverFerryGuyDown_20
# 1130 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
RiverFerryGuyDown_19:
# 1132 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_2
# 1133 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1134 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1135 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_5
# 1136 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1137 "data/maps/Route103/scripts.pory"
	removeobject 36
# 1138 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1139 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 1140 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	goto RiverFerryGuyDown_10

RiverFerryGuyDown_14:
# 1084 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyDown_13

RiverFerryGuyDown_17:
# 1145 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
	goto RiverFerryGuyDown_16

RiverFerryGuyDown_20:
# 1129 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyDown_19

RiverFerryGuyDown_29:
# 1086 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyDown_1


RiverFerryBoat::
# 1153 "data/maps/Route103/scripts.pory"
	lockall
# 1154 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryBoat_Text_0
# 1155 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryManNotThatEntry::
# 1159 "data/maps/Route103/scripts.pory"
	lockall
# 1160 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1161 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 1162 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 1163 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryManNotThatEntry_Text_0
# 1164 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1165 "data/maps/Route103/scripts.pory"
	waitmovement
# 1166 "data/maps/Route103/scripts.pory"
	releaseall
	return


FisherGuruRoute103::
# 1170 "data/maps/Route103/scripts.pory"
	lock
# 1172 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_eq FisherGuruRoute103_2
FisherGuruRoute103_1:
# 1238 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_gt FisherGuruRoute103_5
FisherGuruRoute103_4:
# 1388 "data/maps/Route103/scripts.pory"
finishfisherscript:
# 1389 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1390 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1391 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1392 "data/maps/Route103/scripts.pory"
	releaseall
	return

FisherGuruRoute103_2:
# 1175 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1177 "data/maps/Route103/scripts.pory"
	playse SE_M_SURF
# 1178 "data/maps/Route103/scripts.pory"
	waitse
# 1179 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1180 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_0
# 1181 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_0
# 1183 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_6
# 1184 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1186 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1187 "data/maps/Route103/scripts.pory"
	clearflag mudcrabcrawdaunt
# 1188 "data/maps/Route103/scripts.pory"
	addobject 39
# 1190 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 1191 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 1192 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 1193 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 1194 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 1196 "data/maps/Route103/scripts.pory"
	playse SE_SHINY
# 1197 "data/maps/Route103/scripts.pory"
	dofieldeffectsparkle 27, 13, 9
# 1198 "data/maps/Route103/scripts.pory"
	waitse
# 1200 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_CRAWDAUNT, CRY_MODE_ENCOUNTER
# 1201 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_1
# 1202 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 1203 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 1204 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 1205 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 1206 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 1207 "data/maps/Route103/scripts.pory"
	removeobject 39
# 1208 "data/maps/Route103/scripts.pory"
	setflag mudcrabcrawdaunt
# 1209 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1210 "data/maps/Route103/scripts.pory"
	waitse
# 1211 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, FisherGuruRoute103_8
FisherGuruRoute103_7:
# 1214 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_2
# 1215 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_1
# 1216 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1217 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_3
# 1219 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1220 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_4
# 1223 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1224 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_5
# 1226 "data/maps/Route103/scripts.pory"
	giveitem ITEM_OLD_ROD
# 1228 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_6
# 1231 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1232 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1233 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 1
# 1234 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_1

FisherGuruRoute103_5:
# 1240 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonDrivercheckedby_Movement_0
# 1241 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1242 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_7
# 1243 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1244 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, FisherGuruRoute103_Text_8, FisherGuruRoute103_Text_9, FisherGuruRoute103_Text_10, FisherGuruRoute103_Text_11
# 1246 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherGuruRoute103_11
FisherGuruRoute103_10:
# 1345 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FisherGuruRoute103_14
FisherGuruRoute103_13:
# 1361 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FisherGuruRoute103_20
FisherGuruRoute103_19:
# 1377 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq FisherGuruRoute103_27
	goto FisherGuruRoute103_4

FisherGuruRoute103_8:
# 1212 "data/maps/Route103/scripts.pory"
	setseenmon SPECIES_CRAWDAUNT
	goto FisherGuruRoute103_7

FisherGuruRoute103_11:
# 1247 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_17
FisherGuruRoute103_16:
# 1325 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 3
	goto_if_eq FisherGuruRoute103_22
	goto FisherGuruRoute103_10

FisherGuruRoute103_14:
# 1346 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1347 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_23
# 1349 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1350 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1351 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_24
# 1354 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1355 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1356 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_25
# 1358 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_13

FisherGuruRoute103_17:
# 1249 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_MAGIKARP
# 1250 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_25
FisherGuruRoute103_24:
# 1253 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_FEEBAS
# 1254 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_33
FisherGuruRoute103_32:
# 1257 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_TENTACOOL
# 1258 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_36
FisherGuruRoute103_35:
# 1261 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_SURSKIT
# 1262 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_39
FisherGuruRoute103_38:
# 1265 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_POLIWAG
# 1266 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_42
FisherGuruRoute103_41:
# 1269 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 0
	goto_if_eq FisherGuruRoute103_45
FisherGuruRoute103_44:
# 1273 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 1
	goto_if_eq FisherGuruRoute103_48
FisherGuruRoute103_47:
# 1277 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 2
	goto_if_eq FisherGuruRoute103_51
FisherGuruRoute103_50:
# 1281 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 3
	goto_if_ge FisherGuruRoute103_54
FisherGuruRoute103_53:
# 1312 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FisherGuruRoute103_56
	goto FisherGuruRoute103_16

FisherGuruRoute103_20:
# 1362 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1363 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_26
# 1364 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1365 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1366 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_27
# 1368 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1369 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1370 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_28
# 1371 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1372 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1373 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_19

FisherGuruRoute103_22:
	checkitem ITEM_BIG_PEARL
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_29
# 1338 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1339 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_22
# 1340 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_25:
# 1251 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_24

FisherGuruRoute103_27:
# 1378 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1379 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_29
# 1380 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1381 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1382 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_30
# 1383 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_4

FisherGuruRoute103_29:
# 1328 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1329 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_21
# 1333 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_33:
# 1255 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_32

FisherGuruRoute103_36:
# 1259 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_35

FisherGuruRoute103_39:
# 1263 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_38

FisherGuruRoute103_42:
# 1267 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_41

FisherGuruRoute103_45:
# 1270 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_12
	goto FisherGuruRoute103_44

FisherGuruRoute103_48:
# 1274 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_13
	goto FisherGuruRoute103_47

FisherGuruRoute103_51:
# 1278 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_14
	goto FisherGuruRoute103_50

FisherGuruRoute103_54:
# 1282 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1283 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_15
# 1285 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_6
# 1286 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1287 "data/maps/Route103/scripts.pory"
	waitmovement
# 1288 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1289 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1290 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1291 "data/maps/Route103/scripts.pory"
	playse SE_M_ICY_WIND
# 1292 "data/maps/Route103/scripts.pory"
	waitse
# 1293 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1294 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt FisherGuruRoute103_59
# 1296 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
FisherGuruRoute103_58:
# 1297 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1298 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_16
# 1300 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1301 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_17
# 1302 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_1
# 1303 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 1304 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1305 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_18
# 1308 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 3
# 1309 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_53

FisherGuruRoute103_56:
# 1313 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1314 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_19
# 1316 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1317 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1318 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_20
# 1320 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_16

FisherGuruRoute103_59:
# 1295 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto FisherGuruRoute103_58


MoveTutorSign::
# 1396 "data/maps/Route103/scripts.pory"
	lock
# 1397 "data/maps/Route103/scripts.pory"
	msgbox MoveTutorSign_Text_0
# 1398 "data/maps/Route103/scripts.pory"
	release
	return


Fishercallsfornumber::
# 1402 "data/maps/Route103/scripts.pory"
	lock
# 1403 "data/maps/Route103/scripts.pory"
	applymovement 38, ConArtistEgg_Movement_0
# 1404 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1405 "data/maps/Route103/scripts.pory"
	msgbox Fishercallsfornumber_Text_0
# 1406 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_FISHER_103
# 1407 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 2
# 1408 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1409 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1410 "data/maps/Route103/scripts.pory"
	release
	return


# 339 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_0:
# 339 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 342 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_1:
# 342 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 359 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_0:
# 359 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 362 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_1:
# 362 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 413 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 413 "data/maps/Route103/scripts.pory"
	walk_up
# 413 "data/maps/Route103/scripts.pory"
	walk_up
# 413 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 416 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 416 "data/maps/Route103/scripts.pory"
	jump_up
	step_end

# 418 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 418 "data/maps/Route103/scripts.pory"
	walk_up
# 418 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 435 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 435 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 469 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 469 "data/maps/Route103/scripts.pory"
	face_right
	step_end

# 481 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 481 "data/maps/Route103/scripts.pory"
	walk_in_place_left
	step_end

# 488 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_6:
# 488 "data/maps/Route103/scripts.pory"
	walk_in_place_right
	step_end

# 499 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_7:
# 499 "data/maps/Route103/scripts.pory"
	jump_2_down
# 499 "data/maps/Route103/scripts.pory"
	walk_down
# 499 "data/maps/Route103/scripts.pory"
	walk_down
# 499 "data/maps/Route103/scripts.pory"
	walk_down
# 499 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 500 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_8:
# 500 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 500 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 500 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 503 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_9:
# 503 "data/maps/Route103/scripts.pory"
	jump_2_down
# 503 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 503 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 503 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 503 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 503 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 503 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 503 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 529 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_0:
# 529 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 531 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_1:
# 531 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 541 "data/maps/Route103/scripts.pory"
Route103TouristApproach1_Movement_0:
# 541 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 553 "data/maps/Route103/scripts.pory"
Route103TouristApproach2_Movement_0:
# 553 "data/maps/Route103/scripts.pory"
	walk_up
# 553 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 621 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_0:
# 621 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
# 621 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 630 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_1:
# 630 "data/maps/Route103/scripts.pory"
	walk_up
# 630 "data/maps/Route103/scripts.pory"
	walk_up
# 630 "data/maps/Route103/scripts.pory"
	walk_up
# 630 "data/maps/Route103/scripts.pory"
	walk_up
# 630 "data/maps/Route103/scripts.pory"
	walk_up
# 630 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 649 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_2:
# 649 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 649 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 649 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 649 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 649 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 649 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 649 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 649 "data/maps/Route103/scripts.pory"
	walk_fast_right
	step_end

# 868 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_0:
# 868 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 868 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 868 "data/maps/Route103/scripts.pory"
	walk_fast_left
	step_end

# 874 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_1:
# 874 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 874 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 874 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 874 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 874 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 874 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 874 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 874 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 874 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 876 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_2:
# 876 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 876 "data/maps/Route103/scripts.pory"
	walk_in_place_down
# 876 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 876 "data/maps/Route103/scripts.pory"
	walk_in_place_down
# 876 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 876 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 891 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_3:
# 891 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 891 "data/maps/Route103/scripts.pory"
	walk_in_place_left
	step_end

# 893 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_4:
# 893 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 897 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_5:
# 897 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 897 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 897 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 898 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_6:
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 901 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_7:
# 901 "data/maps/Route103/scripts.pory"
	jump_down
# 901 "data/maps/Route103/scripts.pory"
	jump_down
	step_end

# 932 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_8:
# 932 "data/maps/Route103/scripts.pory"
	walk_right
# 932 "data/maps/Route103/scripts.pory"
	walk_right
# 932 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 952 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_9:
# 952 "data/maps/Route103/scripts.pory"
	walk_left
# 952 "data/maps/Route103/scripts.pory"
	walk_left
# 952 "data/maps/Route103/scripts.pory"
	walk_left
# 952 "data/maps/Route103/scripts.pory"
	walk_left
# 952 "data/maps/Route103/scripts.pory"
	walk_left
# 952 "data/maps/Route103/scripts.pory"
	walk_left
# 952 "data/maps/Route103/scripts.pory"
	walk_left
# 952 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 976 "data/maps/Route103/scripts.pory"
ConArtistEgg_Movement_0:
# 976 "data/maps/Route103/scripts.pory"
	face_player
# 976 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 1026 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_0:
# 1026 "data/maps/Route103/scripts.pory"
	walk_right
	step_end

# 1033 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_1:
# 1033 "data/maps/Route103/scripts.pory"
	walk_right
# 1033 "data/maps/Route103/scripts.pory"
	walk_up
# 1033 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 1038 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_2:
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1038 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 1039 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_3:
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1039 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 1050 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_4:
# 1050 "data/maps/Route103/scripts.pory"
	walk_left
# 1050 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 1059 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_5:
# 1059 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 1107 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_0:
# 1107 "data/maps/Route103/scripts.pory"
	walk_right
# 1107 "data/maps/Route103/scripts.pory"
	walk_down
# 1107 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 1112 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_1:
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 1113 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_2:
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

Route103ConcordBridgeSign_Text_0:
# 311 "data/maps/Route103/scripts.pory"
	.string "East - Concord Bridge\n"
	.string "North - Waterfall Cave.$"

Route103WaterfallCaveSign_Text_0:
# 317 "data/maps/Route103/scripts.pory"
	.string "Waterfall Cave to Route 117.$"

Route103FisherBucket_Text_0:
# 323 "data/maps/Route103/scripts.pory"
	.string "The bucket, which seems meant to store\n"
	.string "catches, is empty.$"

Route103DevonGruntCheckingDriver_Text_0:
# 340 "data/maps/Route103/scripts.pory"
	.string "I'm telling you, sir - {COLOR GREEN}Oldale's Warehouse{COLOR DARK_GRAY}\n"
	.string "is occupied by {COLOR RED}Rebels{COLOR DARK_GRAY}.\p"
	.string "Even if we let you through, your stock\n"
	.string "would just get stolen by them.$"

Route103DevonGruntCheckingDriver_Text_1:
# 343 "data/maps/Route103/scripts.pory"
	.string "Then go do something about it, instead\n"
	.string "of just blocking traffic!$"

Route103DevonGruntCheckingDriver_Text_2:
# 348 "data/maps/Route103/scripts.pory"
	.string "Sir, I just got word the Rebels have\n"
	.string "left Oldale Warehouse!\p"
	.string "Once we inspect your stock, and if\n"
	.string "nothing is wrong with it, we will let you\l"
	.string "right through.$"

Route103DevonGruntCheckingDriver_Text_3:
# 351 "data/maps/Route103/scripts.pory"
	.string "You could have done that sooner! Hurry\n"
	.string "it up!$"

Route103DevonDrivercheckedby_Text_0:
# 360 "data/maps/Route103/scripts.pory"
	.string "This is ridiculous. Is this what our\n"
	.string "taxes are being spent io?\p"
	.string "If I don't deliver these goods soon, my\n"
	.string "boss will have my head!$"

Sharpy103_Text_0:
# 380 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 389 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_2:
# 393 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_3:
# 397 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_4:
# 409 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_5:
# 422 "data/maps/Route103/scripts.pory"
	.string "If you two are done, Sharpy and I need\n"
	.string "to go back - it's almost curfew!$"

Sharpy103_Text_6:
# 427 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! We're going to get\n"
	.string "scolded...$"

Sharpy103_Text_7:
# 436 "data/maps/Route103/scripts.pory"
	.string "Well... I guess you won't be joining us\n"
	.string "after all... unless...$"

Sharpy103_Text_8:
# 441 "data/maps/Route103/scripts.pory"
	.string "Unless you change your mind! If you do,\n"
	.string "come visit at {COLOR GREEN}Petalburg Dojo{COLOR DARK_GRAY}!$"

Sharpy103_Text_9:
# 446 "data/maps/Route103/scripts.pory"
	.string "It's the big, old-fashioned wooden\n"
	.string "building - can't miss it!\p"
	.string "So, if you want to help us save Hoenn...$"

Sharpy103_Text_10:
# 452 "data/maps/Route103/scripts.pory"
	.string "You better come!$"

Sharpy103_Text_11:
# 462 "data/maps/Route103/scripts.pory"
	.string "Well, it goes without saying, but you\n"
	.string "passed the test with flying colors!$"

Sharpy103_Text_12:
# 467 "data/maps/Route103/scripts.pory"
	.string "Now you just need to come to {COLOR GREEN}Petalburg\n"
	.string "Dojo{COLOR DARK_GRAY}, and you can join us officially!$"

Sharpy103_Text_13:
# 473 "data/maps/Route103/scripts.pory"
	.string "Well, it's our tutor who has the last\n"
	.string "word on accepting recruits... but I\l"
	.string "doubt he'll reject you.$"

Sharpy103_Text_14:
# 479 "data/maps/Route103/scripts.pory"
	.string "We'd love to show you the way, but we\n"
	.string "kinda need to rush back.$"

Sharpy103_Text_15:
# 485 "data/maps/Route103/scripts.pory"
	.string "Yup - so we'll go on ahead! {COLOR GREEN}Petalburg\n"
	.string "Dojo{COLOR DARK_GRAY} is the big, old-fashioned wooden\l"
	.string "building - can't miss it.$"

Sharpy103_Text_16:
# 492 "data/maps/Route103/scripts.pory"
	.string "We'll see you there!$"

Route103TouristApproach0_Text_0:
# 530 "data/maps/Route103/scripts.pory"
	.string "Hey, you!$"

Route103Tourist_Text_0:
# 579 "data/maps/Route103/scripts.pory"
	.string "You're the one who mugged me! You're\n"
	.string "not getting away!$"

Route103Tourist_Text_1:
# 587 "data/maps/Route103/scripts.pory"
	.string "Uhm... I'm sorry. I dropped my glasses,\n"
	.string "and I mistook you for that thief...!$"

Route103Tourist_Text_2:
# 591 "data/maps/Route103/scripts.pory"
	.string "What thief? The one who stole all my\n"
	.string "pokeyen!$"

Route103Tourist_Text_3:
# 593 "data/maps/Route103/scripts.pory"
	.string "And that's not the worse... he threw my\n"
	.string "bike to the mud there, so that I\l"
	.string "couldn't chase him!$"

Route103Tourist_Text_4:
# 596 "data/maps/Route103/scripts.pory"
	.string "I tried to get it out, but it's stuck\n"
	.string "real bad... if only me or my Pokémon had\l"
	.string "enough {COLOR RED}STRENGTH{COLOR DARK_GRAY}!$"

Route103Tourist_Text_5:
# 606 "data/maps/Route103/scripts.pory"
	.string "I'm not leaving without my bike. Not a\n"
	.string "chance!\p"
	.string "It costed me 1,000,000¥ at Cerulean\n"
	.string "City's Bike Shop!$"

Route103Touristbikepushed_Text_0:
# 623 "data/maps/Route103/scripts.pory"
	.string "Y-you did it! IT'S OUT! Wait, I'll take it\n"
	.string "from here!$"

Route103Touristbikepushed_Text_1:
# 641 "data/maps/Route103/scripts.pory"
	.string "Thank you so much! Here - I got this as\n"
	.string "a souvenir, but you can have it!$"

Route103Touristbikepushed_Text_2:
# 644 "data/maps/Route103/scripts.pory"
	.string "Well, these have been some thrilling\n"
	.string "holidays... but I should catch a boat in\l"
	.string "Slateport, and go back home.$"

Route103Touristbikepushed_Text_3:
# 647 "data/maps/Route103/scripts.pory"
	.string "If you ever make a trip to Cinnabar\n"
	.string "Island, I'll return the favour properly.\l"
	.string "Safe travels now!$"

Route103Touristbikepushed_Text_4:
# 660 "data/maps/Route103/scripts.pory"
	.string "Ooow ow ow... I need a new pair of\n"
	.string "glasses...$"

Route103TouristNotThatWay_Text_0:
# 675 "data/maps/Route103/scripts.pory"
	.string "Don't push it from there - you'll get it\n"
	.string "more stuck!$"

Route103VeteranBattle_Text_0:
# 689 "data/maps/Route103/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

Route103VeteranRegister_Text_0:
# 698 "data/maps/Route103/scripts.pory"
	.string "Good job, but don't lower your guard.\p"
	.string "Let's exchange Devon profiles - I'll\n"
	.string "make sure you don't slack off!$"

Route103VeteranRegister_Text_1:
# 701 "data/maps/Route103/scripts.pory"
	.string "And take this as well. It's perfect for\n"
	.string "cover fire.$"

Route103VeteranRematch_Text_0:
# 709 "data/maps/Route103/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

Route103ConcordBridgeGuard_Text_0:
# 733 "data/maps/Route103/scripts.pory"
	.string "Due to an increase in {COLOR RED}Rebel{COLOR DARK_GRAY} activity in\n"
	.string "this area, passage through {COLOR BLUE}Rebel{COLOR DARK_GRAY} is\l"
	.string "heavily restricted.$"

Route103ConcordBridgeGuard_Text_1:
# 738 "data/maps/Route103/scripts.pory"
	.string "Hm? Yes?$"

Route103ConcordBridgeGuard_Text_2:
# 740 "data/maps/Route103/scripts.pory"
	.string "I need directions$"

Route103ConcordBridgeGuard_Text_3:
# 740 "data/maps/Route103/scripts.pory"
	.string "How is your day?$"

Route103ConcordBridgeGuard_Text_4:
# 740 "data/maps/Route103/scripts.pory"
	.string "Let's have a battle!$"

Route103ConcordBridgeGuard_Text_5:
# 740 "data/maps/Route103/scripts.pory"
	.string "I found someone suspicious...$"

Route103ConcordBridgeGuard_Text_6:
# 740 "data/maps/Route103/scripts.pory"
	.string "Nevermind$"

Route103ConcordBridgeGuard_Text_7:
# 743 "data/maps/Route103/scripts.pory"
	.string "There is a signpost right next to me...\n"
	.string "if you can't read, you can learn in the\l"
	.string "{COLOR BLUE}Devon Learning Center{COLOR DARK_GRAY} of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}.\p"
	.string "... I'm sorry, that was rather rude. I'm\n"
	.string "just having a rough day.\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_8:
# 749 "data/maps/Route103/scripts.pory"
	.string "Not too exciting - lots of standing\n"
	.string "around.\p"
	.string "We received reports of a prowling\n"
	.string "criminal in the vicinity, and I'm doing\l"
	.string "double shift because of it...\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_9:
# 754 "data/maps/Route103/scripts.pory"
	.string "A battle? An odd request, but it could\n"
	.string "be a fun use of my allotted recess time.\p"
	.string "Let's do it!$"

Route103ConcordBridgeGuard_Text_10:
# 764 "data/maps/Route103/scripts.pory"
	.string "Thank you. That really helped stretch\n"
	.string "the good old battling muscle!$"

Route103ConcordBridgeGuard_Text_11:
# 771 "data/maps/Route103/scripts.pory"
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
# 783 "data/maps/Route103/scripts.pory"
	.string "Be on your way, then - and stay out of\n"
	.string "trouble.$"

Route103ConcordBridgeGuard_Text_13:
# 790 "data/maps/Route103/scripts.pory"
	.string "Quickly, go distract that criminal -\n"
	.string "before he notices something is off!$"

Route103ConcordBridgeGuard_Text_14:
# 793 "data/maps/Route103/scripts.pory"
	.string "I got to thank you for that battle.\p"
	.string "If I get strong enough, maybe they'll\n"
	.string "send me somewhere other than this\l"
	.string "bridge in the boonies.$"

Route103ConcordBridgeGuard_Text_15:
# 797 "data/maps/Route103/scripts.pory"
	.string "Wherever he is now, that con man is for\n"
	.string "other Devon guards to worry about.\p"
	.string "He didn't look that dangerous anyway.$"

Route103ConcordConartist_Text_0:
# 819 "data/maps/Route103/scripts.pory"
	.string "Hey kid! Wanna earn some quick and easy\n"
	.string "pokeyen? You look like you could use it!$"

Route103ConcordConartist_Text_1:
# 820 "data/maps/Route103/scripts.pory"
	.string "Yes$"

Route103ConcordConartist_Text_2:
# 820 "data/maps/Route103/scripts.pory"
	.string "No$"

Route103ConcordConartist_Text_3:
# 823 "data/maps/Route103/scripts.pory"
	.string "Right on! So, I have some urgent\n"
	.string "deliveries to do on Petalburg...\p"
	.string "But I went and forgot my {COLOR BLUE}Devon Visa{COLOR DARK_GRAY} at\n"
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
# 838 "data/maps/Route103/scripts.pory"
	.string "Eh, scram then. Some of us have work to\n"
	.string "do.$"

Route103ConcordConartist_Text_5:
# 845 "data/maps/Route103/scripts.pory"
	.string "Come on, go distract him! Tell him\n"
	.string "there's a flying Grumpig behind him or\l"
	.string "something!\p"
	.string "I don't care how, that's what I'm paying\n"
	.string "you for!\p"
	.string "And no, I don't do upfront payments,\n"
	.string "thank you. Cash after!$"

Route103ConcordConartist_Text_6:
# 852 "data/maps/Route103/scripts.pory"
	.string "What the hell are you doing? You barely\n"
	.string "distracted him - you got to be more of a\l"
	.string "nuisance!$"

Route103ConcordConartist_Text_7:
# 856 "data/maps/Route103/scripts.pory"
	.string "Hold it right there! You're surrounded!$"

Route103ConcordConartist_Text_8:
# 877 "data/maps/Route103/scripts.pory"
	.string "What the...?$"

Route103ConcordConartist_Text_9:
# 881 "data/maps/Route103/scripts.pory"
	.string "You two-faced bastard - you set me up!\n"
	.string "You're going to get it now!\p"
	.string "No one slips Jimmy McGligar, best\n"
	.string "Pokémon egg seller of Hoenn!$"

Route103ConcordConartist_Text_10:
# 888 "data/maps/Route103/scripts.pory"
	.string "You'll never catch me alive! Outta my\n"
	.string "way!$"

Route103ConcordConartist_Text_11:
# 894 "data/maps/Route103/scripts.pory"
	.string "W-wait, you're unde-...!$"

Route103ConcordConartist_Text_12:
# 900 "data/maps/Route103/scripts.pory"
	.string "SEE YA, LOSERS...!$"

Route103ConcordConartist_Text_13:
# 906 "data/maps/Route103/scripts.pory"
	.string "GRLBGBRLB...!$"

Route103ConcordConartist_Text_14:
# 926 "data/maps/Route103/scripts.pory"
	.string "Such athleticism... he should stop\n"
	.string "conning, and become an acrobat.$"

Route103ConcordConartist_Text_15:
# 930 "data/maps/Route103/scripts.pory"
	.string "Indeed... at any rate, it's not our\n"
	.string "problem any more.$"

Route103ConcordConartist_Text_16:
# 942 "data/maps/Route103/scripts.pory"
	.string "Thank you for your help, civilian! Now we\n"
	.string "can put this long shift to an end.$"

Route103ConcordConartist_Text_17:
# 944 "data/maps/Route103/scripts.pory"
	.string "Here, this is for your trouble.$"

Route103ConcordConartist_Text_18:
# 948 "data/maps/Route103/scripts.pory"
	.string "Received 1000¥!$"

ConArtistEgg_Text_0:
# 977 "data/maps/Route103/scripts.pory"
	.string "Hands off my wares, pal! This egg is\n"
	.string "mine!$"

ConArtistEgg_Text_1:
# 983 "data/maps/Route103/scripts.pory"
	.string "The shady dealer left this egg behind...$"

ConArtistEgg_Text_2:
# 987 "data/maps/Route103/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

RiverFerryGuyUp_Text_0:
# 1007 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lad?$"

RiverFerryGuyUp_Text_1:
# 1009 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lass?$"

RiverFerryGuyUp_Text_2:
# 1014 "data/maps/Route103/scripts.pory"
	.string "Would you like to sail upstream?$"

RiverFerryGuyUp_Text_3:
# 1018 "data/maps/Route103/scripts.pory"
	.string "Then hop on!$"

RiverFerryGuyUp_Text_4:
# 1035 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're going upstream, so it'll\n"
	.string "be a bit slow.$"

RiverFerryGuyUp_Text_5:
# 1058 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back downstream.$"

RiverFerryGuyUp_Text_6:
# 1071 "data/maps/Route103/scripts.pory"
	.string "Ah, shame... tell me if you ever do!$"

RiverFerryGuyDown_Text_0:
# 1088 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail\n"
	.string "downstream?$"

RiverFerryGuyDown_Text_1:
# 1109 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're sailing downstream, so\n"
	.string "brace yourself!$"

RiverFerryGuyDown_Text_2:
# 1132 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back upstream.$"

RiverFerryBoat_Text_0:
# 1154 "data/maps/Route103/scripts.pory"
	.string "It's an old boat, but it's well taken\n"
	.string "care of.$"

RiverFerryManNotThatEntry_Text_0:
# 1163 "data/maps/Route103/scripts.pory"
	.string "Not so fast, young one...! If you want to\n"
	.string "board, do it after me.$"

FisherGuruRoute103_Text_0:
# 1181 "data/maps/Route103/scripts.pory"
	.string "Sssh... did you hear that? It's... IT'S\n"
	.string "COMING!$"

FisherGuruRoute103_Text_1:
# 1201 "data/maps/Route103/scripts.pory"
	.string "CRAAAAAAW!!$"

FisherGuruRoute103_Text_2:
# 1214 "data/maps/Route103/scripts.pory"
	.string "AAH, CRAB BASKETS!$"

FisherGuruRoute103_Text_3:
# 1217 "data/maps/Route103/scripts.pory"
	.string "That was the LEGENDARY MUD CRAB of\n"
	.string "Route 103 - I've been looking for it for\l"
	.string "WEEKS!\p"
	.string "But I was so awe-struck... that I could\n"
	.string "not do anything!!$"

FisherGuruRoute103_Text_4:
# 1220 "data/maps/Route103/scripts.pory"
	.string "Still, this can't be a coincidence - you\n"
	.string "both showed up at the same time!!\p"
	.string "HMM... my intuition tells me it saw\n"
	.string "something in you. But then it left\l"
	.string "disappointed.$"

FisherGuruRoute103_Text_5:
# 1224 "data/maps/Route103/scripts.pory"
	.string "But we can fix that. Here, take THIS!$"

FisherGuruRoute103_Text_6:
# 1228 "data/maps/Route103/scripts.pory"
	.string "I want you to take that rod and fish at\n"
	.string "least THREE SPECIES OF POKÉMON!\p"
	.string "WHY? Because only then will the\n"
	.string "LEGENDARY MUDCRAB judge you as worthy,\l"
	.string "and show itself again!\p"
	.string "Do not question the intuition of Ivan,\n"
	.string "the Legendary Releer - just embrace it,\l"
	.string "and fulfil your destiny!!$"

FisherGuruRoute103_Text_7:
# 1242 "data/maps/Route103/scripts.pory"
	.string "AHOY! How's the FISHING going!?$"

FisherGuruRoute103_Text_8:
# 1244 "data/maps/Route103/scripts.pory"
	.string "About your request...$"

FisherGuruRoute103_Text_9:
# 1244 "data/maps/Route103/scripts.pory"
	.string "Did you see the Mud Crab?$"

FisherGuruRoute103_Text_10:
# 1244 "data/maps/Route103/scripts.pory"
	.string "How's it going?$"

FisherGuruRoute103_Text_11:
# 1244 "data/maps/Route103/scripts.pory"
	.string "It's nothing$"

FisherGuruRoute103_Text_12:
# 1270 "data/maps/Route103/scripts.pory"
	.string "What? You haven't fished a single\n"
	.string "Pokémon? NADA? NICHT?$"

FisherGuruRoute103_Text_13:
# 1274 "data/maps/Route103/scripts.pory"
	.string "Hm? You have only fished ONE measly\n"
	.string "Pokémon?! It's a start, but...$"

FisherGuruRoute103_Text_14:
# 1278 "data/maps/Route103/scripts.pory"
	.string "Oh, you have fished a couple Pokémon\n"
	.string "already? Not bad, but...$"

FisherGuruRoute103_Text_15:
# 1283 "data/maps/Route103/scripts.pory"
	.string "Ah, you've fished at least 3 Pokémon?\n"
	.string "Good, GOOD!\p"
	.string "I'm confident the Legendary Mud Crab\n"
	.string "will acknowledge you and show up.\p"
	.string "Let's wait a bit!$"

FisherGuruRoute103_Text_16:
# 1298 "data/maps/Route103/scripts.pory"
	.string "Hmm... I should have known. Such a\n"
	.string "measly fishing test...\p"
	.string "Is NOT ENOUGH to make the Mud Crab\n"
	.string "acknowledge you!$"

FisherGuruRoute103_Text_17:
# 1301 "data/maps/Route103/scripts.pory"
	.string "I suppose I've got no choice... here,\n"
	.string "TAKE THIS!$"

FisherGuruRoute103_Text_18:
# 1305 "data/maps/Route103/scripts.pory"
	.string "I want you to use that rod to bring me a\n"
	.string "BIG PEARL!\p"
	.string "If you are a true fisher... you will know\n"
	.string "how.\p"
	.string "Do that, and I'm sure next time the Mud\n"
	.string "Crab will show itself!$"

FisherGuruRoute103_Text_19:
# 1314 "data/maps/Route103/scripts.pory"
	.string "Like I said, I need you to fish 3 species\n"
	.string "of Pokémon!\p"
	.string "If you are the fisher the Mud Crab\n"
	.string "believes you to be, you shouldn't need\l"
	.string "any guidance!$"

FisherGuruRoute103_Text_20:
# 1318 "data/maps/Route103/scripts.pory"
	.string "O-of course I could give it, but that\n"
	.string "would defeat the purpose!$"

FisherGuruRoute103_Text_21:
# 1329 "data/maps/Route103/scripts.pory"
	.string "pearl$"

FisherGuruRoute103_Text_22:
# 1339 "data/maps/Route103/scripts.pory"
	.string "no pearl$"

FisherGuruRoute103_Text_23:
# 1347 "data/maps/Route103/scripts.pory"
	.string "Regrettably, I haven't. Not even the tip\n"
	.string "of that lustruous, star-shaped crown\l"
	.string "of his...\p"
	.string "But don't worry - he won't swim away\n"
	.string "easily.$"

FisherGuruRoute103_Text_24:
# 1351 "data/maps/Route103/scripts.pory"
	.string "They say he is forever waiting for a\n"
	.string "trainer who saved his life during the\l"
	.string "Assault on Route 103.\p"
	.string "Sadly, that trainer died that day. They\n"
	.string "will never meet again...$"

FisherGuruRoute103_Text_25:
# 1356 "data/maps/Route103/scripts.pory"
	.string "In spite of its beastly appearance, the\n"
	.string "Mud Crab is a loyal, tender creature.\p"
	.string "That's why I wish to catch him, and help\n"
	.string "him heal!$"

FisherGuruRoute103_Text_26:
# 1363 "data/maps/Route103/scripts.pory"
	.string "Ah, well, aside from the Mud Crab\n"
	.string "business... not very good, I must say.$"

FisherGuruRoute103_Text_27:
# 1366 "data/maps/Route103/scripts.pory"
	.string "The sea is poisoned, the rivers are\n"
	.string "muddy...\p"
	.string "Most of my buddies have moved up north.$"

FisherGuruRoute103_Text_28:
# 1370 "data/maps/Route103/scripts.pory"
	.string "But me, I like the challenge!$"

FisherGuruRoute103_Text_29:
# 1379 "data/maps/Route103/scripts.pory"
	.string "Then don't distract me! Does it look\n"
	.string "like I'm doing nothing here!?$"

FisherGuruRoute103_Text_30:
# 1382 "data/maps/Route103/scripts.pory"
	.string "... don't answer that.$"

MoveTutorSign_Text_0:
# 1397 "data/maps/Route103/scripts.pory"
	.string "Move Tutor Colton's House$"

Fishercallsfornumber_Text_0:
# 1405 "data/maps/Route103/scripts.pory"
	.string "Wait - add me on Devon Net! We must\n"
	.string "keep in touch about this!$"

Sharpy103_Outro::
# 520 "data/maps/Route103/scripts.pory"
	.string "Heh... you're a soldier alright...!$"

Tourist103_Outro::
# 614 "data/maps/Route103/scripts.pory"
	.string "Wait a minute... oh, you're not that \nthief. Sorry!$"

Veteran103_Intro::
# 715 "data/maps/Route103/scripts.pory"
	.string "They told me I'm too old to enlist...  but \nI'm stronger than you young'uns!\pI'll show you!$"

Veteran103_Outro::
# 718 "data/maps/Route103/scripts.pory"
	.string "Grr... you won the battle, but\nnot the war!$"

Veteran103_Intro2::
# 721 "data/maps/Route103/scripts.pory"
	.string "There you are - I've been preparing\nmy counterattack! CHAAARGE!$"

Veteran103_Outro2::
# 724 "data/maps/Route103/scripts.pory"
	.string "... I surrender. Again.$"

DevonGuard103_Outro::
# 809 "data/maps/Route103/scripts.pory"
	.string "That could have gone better...$"

ShadyDealer103_Outro::
# 967 "data/maps/Route103/scripts.pory"
	.string "I... I-I'm not going back to jail!$"
