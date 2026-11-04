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
# 213 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103Mapscriptbundle
	.byte 0


Route103Mapscriptbundle::
# 219 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 220 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 221 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 222 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 226 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 1
	goto_if_eq Route103Mapscriptbundle_2
# 226 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 2
	goto_if_eq Route103Mapscriptbundle_2
# 226 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 3
	goto_if_eq Route103Mapscriptbundle_2
Route103Mapscriptbundle_1:
# 231 "data/maps/Route103/scripts.pory"
	random 10
# 232 "data/maps/Route103/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 233 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 234 "data/maps/Route103/scripts.pory"
	case 0, Route103Mapscriptbundle_9
# 238 "data/maps/Route103/scripts.pory"
	case 1, Route103Mapscriptbundle_10
# 242 "data/maps/Route103/scripts.pory"
	case 2, Route103Mapscriptbundle_11
# 246 "data/maps/Route103/scripts.pory"
	case 3, Route103Mapscriptbundle_12
# 250 "data/maps/Route103/scripts.pory"
	case 4, Route103Mapscriptbundle_13
# 253 "data/maps/Route103/scripts.pory"
	case 5, Route103Mapscriptbundle_14
# 256 "data/maps/Route103/scripts.pory"
	case 6, Route103Mapscriptbundle_15
# 259 "data/maps/Route103/scripts.pory"
	case 7, Route103Mapscriptbundle_16
# 262 "data/maps/Route103/scripts.pory"
	case 8, Route103Mapscriptbundle_17
# 265 "data/maps/Route103/scripts.pory"
	case 9, Route103Mapscriptbundle_18
# 268 "data/maps/Route103/scripts.pory"
	case 10, Route103Mapscriptbundle_19
	return

Route103Mapscriptbundle_2:
# 227 "data/maps/Route103/scripts.pory"
	goto Route103TVWeather
	goto Route103Mapscriptbundle_1

Route103Mapscriptbundle_9:
# 235 "data/maps/Route103/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 236 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
# 237 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 4
	return

Route103Mapscriptbundle_10:
# 239 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 240 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
# 241 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 4
	return

Route103Mapscriptbundle_11:
# 243 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 244 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
# 245 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 4
	return

Route103Mapscriptbundle_12:
# 247 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 248 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
# 249 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 4
	return

Route103Mapscriptbundle_13:
# 251 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 252 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

Route103Mapscriptbundle_14:
# 254 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 255 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

Route103Mapscriptbundle_15:
# 257 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 258 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

Route103Mapscriptbundle_16:
# 260 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 261 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

Route103Mapscriptbundle_17:
# 263 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 264 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

Route103Mapscriptbundle_18:
# 266 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 267 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return

Route103Mapscriptbundle_19:
# 269 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 270 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return


Route103TVWeather::
# 279 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 1, Route103Rain1
# 280 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 2, Route103Rain2
# 281 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 3, Route103EndRain
# 283 "data/maps/Route103/scripts.pory"
	release
	return


Route103Shade::
# 287 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
	return


Route103Rain1::
# 291 "data/maps/Route103/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 292 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 2
# 293 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 294 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103Rain2::
# 298 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 299 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
# 300 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 301 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103EndRain::
# 306 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
# 307 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
# 308 "data/maps/Route103/scripts.pory"
	fadeoutbgm 0
# 309 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


FerryManReturnsSouth::
# 316 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 317 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 318 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 319 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	return


Route103ConcordBridgeSign::
# 324 "data/maps/Route103/scripts.pory"
	lock
# 325 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeSign_Text_0
# 326 "data/maps/Route103/scripts.pory"
	release
	return


Route103WaterfallCaveSign::
# 330 "data/maps/Route103/scripts.pory"
	lock
# 331 "data/maps/Route103/scripts.pory"
	msgbox Route103WaterfallCaveSign_Text_0
# 332 "data/maps/Route103/scripts.pory"
	release
	return


Route103FisherBucket::
# 336 "data/maps/Route103/scripts.pory"
	lock
# 337 "data/maps/Route103/scripts.pory"
	msgbox Route103FisherBucket_Text_0
# 338 "data/maps/Route103/scripts.pory"
	release
	return


Route103IteminMud::
# 342 "data/maps/Route103/scripts.pory"
	lock
# 343 "data/maps/Route103/scripts.pory"
	finditem ITEM_TM_MUD_SHOT
# 346 "data/maps/Route103/scripts.pory"
	removeobject 21
# 347 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonGruntCheckingDriver::
# 350 "data/maps/Route103/scripts.pory"
	lock
# 351 "data/maps/Route103/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_lt Route103DevonGruntCheckingDriver_2
Route103DevonGruntCheckingDriver_1:
# 359 "data/maps/Route103/scripts.pory"
	compare VAR_OLDALE_PHASE, 2
	goto_if_ge Route103DevonGruntCheckingDriver_5
Route103DevonGruntCheckingDriver_4:
# 368 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103DevonGruntCheckingDriver_2:
# 353 "data/maps/Route103/scripts.pory"
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 354 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_0
# 356 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 357 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_1
	goto Route103DevonGruntCheckingDriver_1

Route103DevonGruntCheckingDriver_5:
# 361 "data/maps/Route103/scripts.pory"
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 362 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_2
# 364 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 365 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_3
	goto Route103DevonGruntCheckingDriver_4


Route103DevonDrivercheckedby::
# 372 "data/maps/Route103/scripts.pory"
	lock
# 373 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_0
# 374 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonDrivercheckedby_Text_0
# 376 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_1
# 377 "data/maps/Route103/scripts.pory"
	waitmovement
# 378 "data/maps/Route103/scripts.pory"
	releaseall
	return


Sharpy103::
# 383 "data/maps/Route103/scripts.pory"
	lockall
# 384 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 385 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 386 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 387 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 389 "data/maps/Route103/scripts.pory"
	special DoTVShow
# 391 "data/maps/Route103/scripts.pory"
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 399 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 414 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 415 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 416 "data/maps/Route103/scripts.pory"
	addobject 25
# 417 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 37
# 419 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 420 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 421 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 422 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 423 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 424 "data/maps/Route103/scripts.pory"
	closemessage
# 425 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 427 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_0
# 428 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 429 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 430 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_1
# 431 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 432 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_2
# 433 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 434 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 435 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 436 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 438 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 439 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 440 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 441 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 443 "data/maps/Route103/scripts.pory"
	goto_if_set saidnotosharpyinoldale, Sharpy103_8
# 472 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 473 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 474 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 475 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 476 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 478 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 479 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 480 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 481 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 483 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_4
# 484 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 485 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 486 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 487 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 490 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 491 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 492 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 493 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 495 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_5
# 496 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 497 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 498 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 499 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_15
# 503 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 504 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 505 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 506 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_16
# 507 "data/maps/Route103/scripts.pory"
	closemessage
Sharpy103_7:
# 511 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 512 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 513 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_6
# 514 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_7
# 515 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 516 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 517 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_8
# 518 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 520 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 521 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 522 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 523 "data/maps/Route103/scripts.pory"
	setflag DLCclassends
# 524 "data/maps/Route103/scripts.pory"
	clearflag DLCrecesstarts
# 525 "data/maps/Route103/scripts.pory"
	setflag Sharpydefeatedat103
# 526 "data/maps/Route103/scripts.pory"
	setvar VAR_SHARPYANDCAMELIAOLDALE, 1
# 528 "data/maps/Route103/scripts.pory"
	releaseall
# 529 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Sharpy103_11
# 531 "data/maps/Route103/scripts.pory"
	release
	return

Sharpy103_2:
# 393 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 394 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 395 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 396 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 397 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 401 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 402 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 403 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 404 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 405 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 406 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 407 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 408 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 409 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 410 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 411 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 412 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4

Sharpy103_8:
# 446 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 447 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 448 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 449 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_3
# 450 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 452 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 453 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 454 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 455 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 457 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 458 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 459 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 460 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 463 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 464 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 465 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 466 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_10
# 467 "data/maps/Route103/scripts.pory"
	closemessage
	goto Sharpy103_7

Sharpy103_11:
# 530 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103TouristApproach0::
# 540 "data/maps/Route103/scripts.pory"
	lockall
# 541 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 542 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 543 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 544 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 545 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 546 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach1::
# 550 "data/maps/Route103/scripts.pory"
	lockall
# 551 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 552 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 553 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 554 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 555 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach1_Movement_0
# 556 "data/maps/Route103/scripts.pory"
	waitmovement
# 557 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 558 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach2::
# 562 "data/maps/Route103/scripts.pory"
	lockall
# 563 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 564 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 565 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 566 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 567 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach2_Movement_0
# 568 "data/maps/Route103/scripts.pory"
	waitmovement
# 569 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 570 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach3::
# 574 "data/maps/Route103/scripts.pory"
	lockall
# 575 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 576 "data/maps/Route103/scripts.pory"
	playbgm MUS_DOLCEISLAND, TRUE
# 577 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 578 "data/maps/Route103/scripts.pory"
	waitmovement
# 579 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 580 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 581 "data/maps/Route103/scripts.pory"
	waitmovement
# 582 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 583 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103Tourist::
# 587 "data/maps/Route103/scripts.pory"
	lockall
# 588 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 589 "data/maps/Route103/scripts.pory"
touristafterapproach:
# 590 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 0
	goto_if_eq Route103Tourist_2
Route103Tourist_1:
# 616 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 1
	goto_if_eq Route103Tourist_5
Route103Tourist_4:
# 623 "data/maps/Route103/scripts.pory"
finishtouristscript:
# 624 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103Tourist_2:
# 592 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 593 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_0
# 594 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_TOURIST_103, Tourist103_Outro
# 597 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103Tourist_8
# 599 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
Route103Tourist_7:
# 601 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_1
# 602 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 603 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 604 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 605 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_2
# 606 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Tourist_Movement_0
# 607 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_3
# 609 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 610 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_4
# 612 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 1
# 613 "data/maps/Route103/scripts.pory"
	goto finishtouristscript
	goto Route103Tourist_1

Route103Tourist_5:
# 618 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 619 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 620 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_5
	goto Route103Tourist_4

Route103Tourist_8:
# 598 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103Tourist_7


Route103Touristbikepushed::
# 633 "data/maps/Route103/scripts.pory"
	lockall
# 634 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 635 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 636 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 637 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_0
# 638 "data/maps/Route103/scripts.pory"
	closemessage
# 640 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 641 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 642 "data/maps/Route103/scripts.pory"
	playse SE_BIKE_HOP
# 643 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 644 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route103Touristbikepushed_Movement_1
# 645 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 646 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 647 "data/maps/Route103/scripts.pory"
	setobjectxy 27, 0, 0
# 648 "data/maps/Route103/scripts.pory"
	setobjectxy 26, 0, 0
# 649 "data/maps/Route103/scripts.pory"
	setflag touristhelped
# 650 "data/maps/Route103/scripts.pory"
	clearflag touristonbike
# 651 "data/maps/Route103/scripts.pory"
	addobject 29
# 652 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 22, 9
# 653 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103Tourist_Movement_0
# 654 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 655 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_1
# 656 "data/maps/Route103/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 657 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103DevonGruntCheckingDriver_Movement_0
# 658 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_2
# 660 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_5
# 661 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_3
# 663 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103Touristbikepushed_Movement_2
# 664 "data/maps/Route103/scripts.pory"
	waitmovement
# 666 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 667 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 668 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 669 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 670 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 671 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 672 "data/maps/Route103/scripts.pory"
	waitse
# 674 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_4
# 676 "data/maps/Route103/scripts.pory"
	removeobject 29
# 677 "data/maps/Route103/scripts.pory"
	setflag touristonbike
# 679 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 2
# 680 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103TouristNotThatWay::
# 685 "data/maps/Route103/scripts.pory"
	lockall
# 686 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 687 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 688 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 689 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristNotThatWay_Text_0
# 690 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach1_Movement_0
# 691 "data/maps/Route103/scripts.pory"
	waitmovement
# 692 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103VeteranBattle::
# 698 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, Route103VeteranRegister
# 699 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 700 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 701 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 702 "data/maps/Route103/scripts.pory"
	applymovement 20, Route103DevonDrivercheckedby_Movement_0
# 703 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranBattle_Text_0
# 704 "data/maps/Route103/scripts.pory"
	applymovement 20, Route103TouristApproach0_Movement_1
# 705 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRegister::
# 710 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 711 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 712 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_0
# 714 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 715 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_1
# 716 "data/maps/Route103/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 717 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRematch::
# 722 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro2, Veteran103_Outro2
# 723 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRematch_Text_0
	end


Route102DevonPoochain::
# 743 "data/maps/Route103/scripts.pory"
	lock
# 744 "data/maps/Route103/scripts.pory"
	applymovement 41, Route103DevonDrivercheckedby_Movement_0
# 745 "data/maps/Route103/scripts.pory"
	waitmovement 41
# 746 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_POOCHAIN, CRY_MODE_NORMAL
# 747 "data/maps/Route103/scripts.pory"
	msgbox Route102DevonPoochain_Text_0
# 748 "data/maps/Route103/scripts.pory"
	release
	return


Route103ConcordBridgeGuard::
# 753 "data/maps/Route103/scripts.pory"
	lockall
# 754 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 755 "data/maps/Route103/scripts.pory"
	applymovement 30, Route103DevonDrivercheckedby_Movement_0
# 756 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordBridgeGuard_2
Route103ConcordBridgeGuard_1:
# 760 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_7
Route103ConcordBridgeGuard_4:
# 806 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route103ConcordBridgeGuard_12
Route103ConcordBridgeGuard_11:
# 812 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_20
Route103ConcordBridgeGuard_17:
# 816 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_29
Route103ConcordBridgeGuard_27:
# 820 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_38
Route103ConcordBridgeGuard_35:
# 825 "data/maps/Route103/scripts.pory"
finishguardscript:
# 826 "data/maps/Route103/scripts.pory"
	applymovement 30, Route103TouristApproach0_Movement_1
# 827 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordBridgeGuard_2:
# 757 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_0
	goto Route103ConcordBridgeGuard_1

Route103ConcordBridgeGuard_5:
# 762 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_1
# 763 "data/maps/Route103/scripts.pory"
guarddistractchoice:
# 764 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordBridgeGuard_Text_2, Route103ConcordBridgeGuard_Text_3, Route103ConcordBridgeGuard_Text_4, Route103ConcordBridgeGuard_Text_5, Route103ConcordBridgeGuard_Text_6
# 766 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordBridgeGuard_15
Route103ConcordBridgeGuard_14:
# 772 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordBridgeGuard_25
Route103ConcordBridgeGuard_24:
# 777 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route103ConcordBridgeGuard_33
Route103ConcordBridgeGuard_32:
# 794 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route103ConcordBridgeGuard_42
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_6:
# 760 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_5
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_7:
# 760 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordBridgeGuard_6
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_12:
# 807 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_12
# 808 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_11

Route103ConcordBridgeGuard_15:
# 767 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_7
# 770 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_14

Route103ConcordBridgeGuard_18:
# 814 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_13
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_19:
# 812 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_18
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_20:
# 812 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_19
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_25:
# 773 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_8
# 775 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_24

Route103ConcordBridgeGuard_28:
# 817 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_14
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_29:
# 816 "data/maps/Route103/scripts.pory"
	goto_if_set helpedconcordconartist, Route103ConcordBridgeGuard_28
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_33:
# 778 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_9
# 780 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_DEVONGUARD_103, DevonGuard103_Outro
# 781 "data/maps/Route103/scripts.pory"
	setflag helpedconcordconartist
# 783 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 786 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 788 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_10
# 789 "data/maps/Route103/scripts.pory"
	clearflag conartistrewardsinoldale
# 790 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 791 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_32

Route103ConcordBridgeGuard_36:
# 821 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_15
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_37:
# 820 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, Route103ConcordBridgeGuard_36
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_38:
# 820 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_37
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_42:
# 795 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_11
# 799 "data/maps/Route103/scripts.pory"
	setflag betrayedconcordconartist
# 800 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_4


Route103ConcordConartist::
# 837 "data/maps/Route103/scripts.pory"
	lockall
# 838 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 839 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 841 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordConartist_2
Route103ConcordConartist_1:
# 867 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_7
Route103ConcordConartist_4:
# 873 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_17
Route103ConcordConartist_14:
# 986 "data/maps/Route103/scripts.pory"
finishconartistscript:
# 987 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordConartist_2:
# 843 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_0
# 844 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 846 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordConartist_12
Route103ConcordConartist_11:
# 861 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordConartist_21
	goto Route103ConcordConartist_1

Route103ConcordConartist_5:
# 869 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_6:
# 867 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_7:
# 867 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordConartist_6
	goto Route103ConcordConartist_4

Route103ConcordConartist_12:
# 847 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_3
# 855 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_3
# 856 "data/maps/Route103/scripts.pory"
	waitmovement 28
# 857 "data/maps/Route103/scripts.pory"
	setflag conartistaskeddistract
# 858 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_11

Route103ConcordConartist_15:
# 875 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 876 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_6
# 879 "data/maps/Route103/scripts.pory"
	playbgm MUS_STOPTHIEF, TRUE
# 880 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_7
# 886 "data/maps/Route103/scripts.pory"
	clearflag devonsvsconartist
# 887 "data/maps/Route103/scripts.pory"
	addobject 31
# 888 "data/maps/Route103/scripts.pory"
	setobjectxy 31, 42, 37
# 889 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 890 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 891 "data/maps/Route103/scripts.pory"
	waitmovement
# 892 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_0
# 893 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 896 "data/maps/Route103/scripts.pory"
	addobject 32
# 897 "data/maps/Route103/scripts.pory"
	setobjectxy 32, 30, 39
# 898 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_1
# 900 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_2
# 901 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_8
# 903 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 905 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_9
# 908 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHADYDEALER_103, ShadyDealer103_Outro
# 910 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonGruntCheckingDriver_Movement_0
# 911 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 912 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_10
# 914 "data/maps/Route103/scripts.pory"
	playse SE_M_COMET_PUNCH
# 915 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ConcordConartist_Movement_3
# 917 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_4
# 918 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_11
# 919 "data/maps/Route103/scripts.pory"
	playse SE_M_MEGA_KICK2
# 920 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 921 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_5
# 922 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_6
# 923 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 924 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_12
# 925 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_7
# 926 "data/maps/Route103/scripts.pory"
	playse SE_M_JUMP_KICK
# 927 "data/maps/Route103/scripts.pory"
	waitse
# 928 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 929 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 930 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_13
# 932 "data/maps/Route103/scripts.pory"
	waitmovement
# 934 "data/maps/Route103/scripts.pory"
	removeobject 28
# 935 "data/maps/Route103/scripts.pory"
	setflag devonsvsconartist
# 936 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 937 "data/maps/Route103/scripts.pory"
	clearflag devonbridgeguardgoestoconartist
# 939 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 940 "data/maps/Route103/scripts.pory"
	fadenewbgm 1
# 941 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103ConcordConartist_24
# 944 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
Route103ConcordConartist_23:
# 945 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 946 "data/maps/Route103/scripts.pory"
	addvar VAR_DEVON_REPUTATION, + 1
# 948 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103DevonGruntCheckingDriver_Movement_0
# 950 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_14
# 952 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103DevonGruntCheckingDriver_Movement_0
# 954 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_15
# 956 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_8
# 957 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_8
# 958 "data/maps/Route103/scripts.pory"
	waitmovement
# 959 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 960 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 961 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103TouristApproach1_Movement_0
# 962 "data/maps/Route103/scripts.pory"
	waitmovement
# 963 "data/maps/Route103/scripts.pory"
	removeobject 31
# 964 "data/maps/Route103/scripts.pory"
	waitmovement
# 965 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 966 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_16
# 967 "data/maps/Route103/scripts.pory"
	showmoneybox 18, 0
# 968 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_17
# 969 "data/maps/Route103/scripts.pory"
	addmoney 1000
# 970 "data/maps/Route103/scripts.pory"
	playse SE_SHOP
# 971 "data/maps/Route103/scripts.pory"
	updatemoneybox
# 972 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_18
# 973 "data/maps/Route103/scripts.pory"
	closemessage
# 974 "data/maps/Route103/scripts.pory"
	hidemoneybox
# 976 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_9
# 977 "data/maps/Route103/scripts.pory"
	waitmovement
# 979 "data/maps/Route103/scripts.pory"
	waitmovement
# 981 "data/maps/Route103/scripts.pory"
	removeobject 32
# 984 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_14

Route103ConcordConartist_16:
# 873 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_15
	goto Route103ConcordConartist_14

Route103ConcordConartist_17:
# 873 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordConartist_16
	goto Route103ConcordConartist_14

Route103ConcordConartist_21:
# 862 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_4
# 863 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_3
# 864 "data/maps/Route103/scripts.pory"
	waitmovement 28
	goto Route103ConcordConartist_1

Route103ConcordConartist_24:
# 943 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103ConcordConartist_23


ConArtistEgg::
# 996 "data/maps/Route103/scripts.pory"
	lockall
# 997 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 998 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, ConArtistEgg_2
ConArtistEgg_1:
# 1005 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, ConArtistEgg_4
	return

ConArtistEgg_2:
# 999 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1000 "data/maps/Route103/scripts.pory"
	applymovement 28, ConArtistEgg_Movement_0
# 1001 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_0
# 1002 "data/maps/Route103/scripts.pory"
	releaseall
# 1003 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_5
	goto ConArtistEgg_1

ConArtistEgg_4:
# 1007 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_1
# 1008 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 1009 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1010 "data/maps/Route103/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 1011 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_2
# 1012 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt ConArtistEgg_7
# 1014 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
ConArtistEgg_6:
# 1015 "data/maps/Route103/scripts.pory"
	removeobject 33
# 1016 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 1017 "data/maps/Route103/scripts.pory"
	releaseall
	return

ConArtistEgg_7:
# 1013 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto ConArtistEgg_6


RiverFerryGuyUp::
# 1024 "data/maps/Route103/scripts.pory"
	lockall
# 1025 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1026 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 1028 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_2
RiverFerryGuyUp_1:
# 1038 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
# 1039 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 1041 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyUp_5
RiverFerryGuyUp_4:
# 1096 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyUp_11
RiverFerryGuyUp_10:
# 1100 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyUp_2:
# 1029 "data/maps/Route103/scripts.pory"
	checkplayergender
# 1030 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyUp_8
RiverFerryGuyUp_7:
# 1032 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyUp_17
	goto RiverFerryGuyUp_1

RiverFerryGuyUp_5:
# 1042 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 1043 "data/maps/Route103/scripts.pory"
	removeobject 36
# 1044 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1045 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 1046 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 1048 "data/maps/Route103/scripts.pory"
	hidefollower
# 1049 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1050 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_0
# 1051 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1052 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1053 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 1054 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1055 "data/maps/Route103/scripts.pory"
	hideplayer
# 1056 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 1057 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_1
# 1058 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1059 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
# 1060 "data/maps/Route103/scripts.pory"
	closemessage
# 1061 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 1062 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_2
# 1063 "data/maps/Route103/scripts.pory"
	applymovement 35, RiverFerryGuyUp_Movement_3
# 1064 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1065 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 1067 "data/maps/Route103/scripts.pory"
	clearflag ferryman103up
# 1068 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103up
# 1069 "data/maps/Route103/scripts.pory"
	addobject 36
# 1070 "data/maps/Route103/scripts.pory"
	addobject 37
# 1072 "data/maps/Route103/scripts.pory"
	showplayer
# 1073 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 16
# 1074 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 1075 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonGruntCheckingDriver_Movement_1
# 1076 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1078 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_14
# 1080 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
RiverFerryGuyUp_13:
# 1082 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_5
# 1083 "data/maps/Route103/scripts.pory"
	closemessage
# 1084 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1085 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1086 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_5
# 1087 "data/maps/Route103/scripts.pory"
	waitmovement
# 1088 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1089 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1090 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1091 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1092 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
	goto RiverFerryGuyUp_4

RiverFerryGuyUp_8:
# 1031 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyUp_7

RiverFerryGuyUp_11:
# 1097 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
	goto RiverFerryGuyUp_10

RiverFerryGuyUp_14:
# 1079 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyUp_13

RiverFerryGuyUp_17:
# 1033 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyUp_1


RiverFerryGuyDown::
# 1106 "data/maps/Route103/scripts.pory"
	lockall
# 1107 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1108 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_0
# 1109 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_2
RiverFerryGuyDown_1:
# 1117 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_0
# 1118 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 1120 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyDown_5
RiverFerryGuyDown_4:
# 1175 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyDown_11
RiverFerryGuyDown_10:
# 1179 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyDown_2:
# 1111 "data/maps/Route103/scripts.pory"
	checkplayergender
# 1112 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyDown_8
RiverFerryGuyDown_7:
# 1114 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyDown_17
	goto RiverFerryGuyDown_1

RiverFerryGuyDown_5:
# 1121 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 1122 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1123 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1124 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1125 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
# 1127 "data/maps/Route103/scripts.pory"
	hidefollower
# 1128 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1129 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_0
# 1130 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1131 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1132 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 1133 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1134 "data/maps/Route103/scripts.pory"
	hideplayer
# 1135 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 1136 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_0
# 1137 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1138 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_1
# 1139 "data/maps/Route103/scripts.pory"
	closemessage
# 1140 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 1141 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_1
# 1142 "data/maps/Route103/scripts.pory"
	applymovement 36, RiverFerryGuyDown_Movement_2
# 1143 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1144 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 1146 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 1147 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 1148 "data/maps/Route103/scripts.pory"
	addobject 34
# 1149 "data/maps/Route103/scripts.pory"
	addobject 35
# 1151 "data/maps/Route103/scripts.pory"
	showplayer
# 1152 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 32
# 1153 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 1154 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonGruntCheckingDriver_Movement_1
# 1155 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1157 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_14
# 1159 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
RiverFerryGuyDown_13:
# 1161 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_2
# 1162 "data/maps/Route103/scripts.pory"
	closemessage
# 1163 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1164 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1165 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_5
# 1166 "data/maps/Route103/scripts.pory"
	waitmovement 34
# 1167 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1168 "data/maps/Route103/scripts.pory"
	removeobject 36
# 1169 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1170 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 1171 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	goto RiverFerryGuyDown_4

RiverFerryGuyDown_8:
# 1113 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyDown_7

RiverFerryGuyDown_11:
# 1176 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
	goto RiverFerryGuyDown_10

RiverFerryGuyDown_14:
# 1158 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyDown_13

RiverFerryGuyDown_17:
# 1115 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyDown_1


RiverFerryBoat::
# 1184 "data/maps/Route103/scripts.pory"
	lockall
# 1185 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryBoat_Text_0
# 1186 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryManNotThatEntry::
# 1190 "data/maps/Route103/scripts.pory"
	lockall
# 1191 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1192 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 1193 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_0
# 1194 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryManNotThatEntry_Text_0
# 1195 "data/maps/Route103/scripts.pory"
	closemessage
# 1196 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1197 "data/maps/Route103/scripts.pory"
	waitmovement
# 1198 "data/maps/Route103/scripts.pory"
	releaseall
	return


FisherGuruRoute103::
# 1202 "data/maps/Route103/scripts.pory"
	lock
# 1204 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_eq FisherGuruRoute103_2
FisherGuruRoute103_1:
# 1270 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_gt FisherGuruRoute103_5
FisherGuruRoute103_4:
# 1420 "data/maps/Route103/scripts.pory"
finishfisherscript:
# 1421 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1422 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1423 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1424 "data/maps/Route103/scripts.pory"
	releaseall
	return

FisherGuruRoute103_2:
# 1207 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1209 "data/maps/Route103/scripts.pory"
	playse SE_M_SURF
# 1210 "data/maps/Route103/scripts.pory"
	waitse
# 1211 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1212 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_0
# 1213 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_0
# 1215 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103Tourist_Movement_0
# 1216 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1218 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1219 "data/maps/Route103/scripts.pory"
	clearflag mudcrabcrawdaunt
# 1220 "data/maps/Route103/scripts.pory"
	addobject 39
# 1222 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 1223 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 1224 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 1225 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 1226 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 1228 "data/maps/Route103/scripts.pory"
	playse SE_SHINY
# 1229 "data/maps/Route103/scripts.pory"
	dofieldeffectsparkle 27, 13, 9
# 1230 "data/maps/Route103/scripts.pory"
	waitse
# 1232 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_CRAWDAUNT, CRY_MODE_ENCOUNTER
# 1233 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_1
# 1234 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 1235 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 1236 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 1237 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 1238 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 1239 "data/maps/Route103/scripts.pory"
	removeobject 39
# 1240 "data/maps/Route103/scripts.pory"
	setflag mudcrabcrawdaunt
# 1241 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1242 "data/maps/Route103/scripts.pory"
	waitse
# 1243 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, FisherGuruRoute103_8
FisherGuruRoute103_7:
# 1246 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_2
# 1247 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_1
# 1248 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1249 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_3
# 1251 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1252 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_4
# 1255 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1256 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_5
# 1258 "data/maps/Route103/scripts.pory"
	giveitem ITEM_OLD_ROD
# 1260 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_6
# 1263 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1264 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1265 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 1
# 1266 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_1

FisherGuruRoute103_5:
# 1272 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonDrivercheckedby_Movement_0
# 1273 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1274 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_7
# 1275 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1276 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, FisherGuruRoute103_Text_8, FisherGuruRoute103_Text_9, FisherGuruRoute103_Text_10, FisherGuruRoute103_Text_11
# 1278 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherGuruRoute103_11
FisherGuruRoute103_10:
# 1377 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FisherGuruRoute103_14
FisherGuruRoute103_13:
# 1393 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FisherGuruRoute103_20
FisherGuruRoute103_19:
# 1409 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq FisherGuruRoute103_27
	goto FisherGuruRoute103_4

FisherGuruRoute103_8:
# 1244 "data/maps/Route103/scripts.pory"
	setseenmon SPECIES_CRAWDAUNT
	goto FisherGuruRoute103_7

FisherGuruRoute103_11:
# 1279 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_17
FisherGuruRoute103_16:
# 1357 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 3
	goto_if_eq FisherGuruRoute103_22
	goto FisherGuruRoute103_10

FisherGuruRoute103_14:
# 1378 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1379 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_23
# 1381 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1382 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1383 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_24
# 1386 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1387 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1388 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_25
# 1390 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_13

FisherGuruRoute103_17:
# 1281 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_MAGIKARP
# 1282 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_25
FisherGuruRoute103_24:
# 1285 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_FEEBAS
# 1286 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_33
FisherGuruRoute103_32:
# 1289 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_TENTACOOL
# 1290 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_36
FisherGuruRoute103_35:
# 1293 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_SURSKIT
# 1294 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_39
FisherGuruRoute103_38:
# 1297 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_POLIWAG
# 1298 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_42
FisherGuruRoute103_41:
# 1301 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 0
	goto_if_eq FisherGuruRoute103_45
FisherGuruRoute103_44:
# 1305 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 1
	goto_if_eq FisherGuruRoute103_48
FisherGuruRoute103_47:
# 1309 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 2
	goto_if_eq FisherGuruRoute103_51
FisherGuruRoute103_50:
# 1313 "data/maps/Route103/scripts.pory"
	compare VAR_FISHEDMONS, 3
	goto_if_ge FisherGuruRoute103_54
FisherGuruRoute103_53:
# 1344 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FisherGuruRoute103_56
	goto FisherGuruRoute103_16

FisherGuruRoute103_20:
# 1394 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1395 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_26
# 1396 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1397 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1398 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_27
# 1400 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1401 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1402 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_28
# 1403 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1404 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1405 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_19

FisherGuruRoute103_22:
	checkitem ITEM_BIG_PEARL
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_29
# 1370 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1371 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_22
# 1372 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_25:
# 1283 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_24

FisherGuruRoute103_27:
# 1410 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1411 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_29
# 1412 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1413 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1414 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_30
# 1415 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_4

FisherGuruRoute103_29:
# 1360 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1361 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_21
# 1365 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_33:
# 1287 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_32

FisherGuruRoute103_36:
# 1291 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_35

FisherGuruRoute103_39:
# 1295 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_38

FisherGuruRoute103_42:
# 1299 "data/maps/Route103/scripts.pory"
	addvar VAR_FISHEDMONS, + 1
	goto FisherGuruRoute103_41

FisherGuruRoute103_45:
# 1302 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_12
	goto FisherGuruRoute103_44

FisherGuruRoute103_48:
# 1306 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_13
	goto FisherGuruRoute103_47

FisherGuruRoute103_51:
# 1310 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_14
	goto FisherGuruRoute103_50

FisherGuruRoute103_54:
# 1314 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1315 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_15
# 1317 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103Tourist_Movement_0
# 1318 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1319 "data/maps/Route103/scripts.pory"
	waitmovement
# 1320 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1321 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1322 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1323 "data/maps/Route103/scripts.pory"
	playse SE_M_ICY_WIND
# 1324 "data/maps/Route103/scripts.pory"
	waitse
# 1325 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1326 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt FisherGuruRoute103_59
# 1328 "data/maps/Route103/scripts.pory"
	playbgm MUS_MT_PYRE_EXTERIOR, TRUE
FisherGuruRoute103_58:
# 1329 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1330 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_16
# 1332 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1333 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_17
# 1334 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonGruntCheckingDriver_Movement_1
# 1335 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 1336 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1337 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_18
# 1340 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 3
# 1341 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_53

FisherGuruRoute103_56:
# 1345 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1346 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_19
# 1348 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1349 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1350 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_20
# 1352 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_16

FisherGuruRoute103_59:
# 1327 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto FisherGuruRoute103_58


MoveTutorSign::
# 1428 "data/maps/Route103/scripts.pory"
	lock
# 1429 "data/maps/Route103/scripts.pory"
	msgbox MoveTutorSign_Text_0
# 1430 "data/maps/Route103/scripts.pory"
	release
	return


Fishercallsfornumber::
# 1434 "data/maps/Route103/scripts.pory"
	lock
# 1435 "data/maps/Route103/scripts.pory"
	applymovement 38, Fishercallsfornumber_Movement_0
# 1436 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1437 "data/maps/Route103/scripts.pory"
	msgbox Fishercallsfornumber_Text_0
# 1438 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_FISHER_103
# 1439 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 2
# 1440 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_4
# 1441 "data/maps/Route103/scripts.pory"
	waitmovement 38
# 1442 "data/maps/Route103/scripts.pory"
	release
	return


# 353 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_0:
# 353 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 356 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_1:
# 356 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 373 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_0:
# 373 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 376 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_1:
# 376 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 427 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 427 "data/maps/Route103/scripts.pory"
	walk_up
# 427 "data/maps/Route103/scripts.pory"
	walk_up
# 427 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 430 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 430 "data/maps/Route103/scripts.pory"
	jump_up
	step_end

# 432 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 432 "data/maps/Route103/scripts.pory"
	walk_up
# 432 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 449 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 449 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 483 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 483 "data/maps/Route103/scripts.pory"
	face_right
	step_end

# 495 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 495 "data/maps/Route103/scripts.pory"
	walk_in_place_left
	step_end

# 513 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_6:
# 513 "data/maps/Route103/scripts.pory"
	jump_2_down
# 513 "data/maps/Route103/scripts.pory"
	walk_down
# 513 "data/maps/Route103/scripts.pory"
	walk_down
# 513 "data/maps/Route103/scripts.pory"
	walk_down
# 513 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 514 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_7:
# 514 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 514 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 514 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 517 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_8:
# 517 "data/maps/Route103/scripts.pory"
	jump_2_down
# 517 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 517 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 517 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 517 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 517 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 517 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 517 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 543 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_0:
# 543 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 545 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_1:
# 545 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 555 "data/maps/Route103/scripts.pory"
Route103TouristApproach1_Movement_0:
# 555 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 567 "data/maps/Route103/scripts.pory"
Route103TouristApproach2_Movement_0:
# 567 "data/maps/Route103/scripts.pory"
	walk_up
# 567 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 606 "data/maps/Route103/scripts.pory"
Route103Tourist_Movement_0:
# 606 "data/maps/Route103/scripts.pory"
	walk_in_place_right
	step_end

# 635 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_0:
# 635 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
# 635 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 644 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_1:
# 644 "data/maps/Route103/scripts.pory"
	walk_up
# 644 "data/maps/Route103/scripts.pory"
	walk_up
# 644 "data/maps/Route103/scripts.pory"
	walk_up
# 644 "data/maps/Route103/scripts.pory"
	walk_up
# 644 "data/maps/Route103/scripts.pory"
	walk_up
# 644 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 663 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_2:
# 663 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 663 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 663 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 663 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 663 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 663 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 663 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 663 "data/maps/Route103/scripts.pory"
	walk_fast_right
	step_end

# 892 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_0:
# 892 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 892 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 892 "data/maps/Route103/scripts.pory"
	walk_fast_left
	step_end

# 898 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_1:
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 898 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 898 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 900 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_2:
# 900 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 900 "data/maps/Route103/scripts.pory"
	walk_in_place_down
# 900 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 900 "data/maps/Route103/scripts.pory"
	walk_in_place_down
# 900 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 900 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 915 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_3:
# 915 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 915 "data/maps/Route103/scripts.pory"
	walk_in_place_left
	step_end

# 917 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_4:
# 917 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 921 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_5:
# 921 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 921 "data/maps/Route103/scripts.pory"
	walk_in_place_right
# 921 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 922 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_6:
# 922 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 922 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 925 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_7:
# 925 "data/maps/Route103/scripts.pory"
	jump_down
# 925 "data/maps/Route103/scripts.pory"
	jump_down
	step_end

# 956 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_8:
# 956 "data/maps/Route103/scripts.pory"
	walk_right
# 956 "data/maps/Route103/scripts.pory"
	walk_right
# 956 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 976 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_9:
# 976 "data/maps/Route103/scripts.pory"
	walk_left
# 976 "data/maps/Route103/scripts.pory"
	walk_left
# 976 "data/maps/Route103/scripts.pory"
	walk_left
# 976 "data/maps/Route103/scripts.pory"
	walk_left
# 976 "data/maps/Route103/scripts.pory"
	walk_left
# 976 "data/maps/Route103/scripts.pory"
	walk_left
# 976 "data/maps/Route103/scripts.pory"
	walk_left
# 976 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 1000 "data/maps/Route103/scripts.pory"
ConArtistEgg_Movement_0:
# 1000 "data/maps/Route103/scripts.pory"
	face_player
# 1000 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 1050 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_0:
# 1050 "data/maps/Route103/scripts.pory"
	walk_right
	step_end

# 1057 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_1:
# 1057 "data/maps/Route103/scripts.pory"
	walk_right
# 1057 "data/maps/Route103/scripts.pory"
	walk_up
# 1057 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 1062 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_2:
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1062 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 1063 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_3:
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 1063 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 1074 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_4:
# 1074 "data/maps/Route103/scripts.pory"
	walk_left
# 1074 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 1084 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_5:
# 1084 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 1136 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_0:
# 1136 "data/maps/Route103/scripts.pory"
	walk_right
# 1136 "data/maps/Route103/scripts.pory"
	walk_down
# 1136 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 1141 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_1:
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 1142 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_2:
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 1435 "data/maps/Route103/scripts.pory"
Fishercallsfornumber_Movement_0:
# 1435 "data/maps/Route103/scripts.pory"
	face_down
# 1435 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

Route103ConcordBridgeSign_Text_0:
# 325 "data/maps/Route103/scripts.pory"
	.string "{RIGHT_ARROW} East - Concord Bridge\n"
	.string "{UP_ARROW} North - Waterfall Cave.$"

Route103WaterfallCaveSign_Text_0:
# 331 "data/maps/Route103/scripts.pory"
	.string "Waterfall Cave to Route 117.$"

Route103FisherBucket_Text_0:
# 337 "data/maps/Route103/scripts.pory"
	.string "The bucket, which seems meant to store\n"
	.string "catches, is empty.$"

Route103DevonGruntCheckingDriver_Text_0:
# 354 "data/maps/Route103/scripts.pory"
	.string "I'm telling you, sir - {COLOR GREEN}Oldale's Warehouse{COLOR DARK_GRAY}\n"
	.string "is occupied by {COLOR RED}Rebels{COLOR DARK_GRAY}.\p"
	.string "Even if we let you through, your stock\n"
	.string "would just get stolen by them.$"

Route103DevonGruntCheckingDriver_Text_1:
# 357 "data/maps/Route103/scripts.pory"
	.string "Then go do something about it, instead\n"
	.string "of just blocking traffic!$"

Route103DevonGruntCheckingDriver_Text_2:
# 362 "data/maps/Route103/scripts.pory"
	.string "Sir, I just got word the {COLOR RED}Rebels{COLOR DARK_GRAY} have\n"
	.string "left Oldale Warehouse!\p"
	.string "Once we inspect your stock, and if\n"
	.string "nothing is wrong with it, we will let you\l"
	.string "right through.$"

Route103DevonGruntCheckingDriver_Text_3:
# 365 "data/maps/Route103/scripts.pory"
	.string "You could have done that sooner! Hurry\n"
	.string "it up!$"

Route103DevonDrivercheckedby_Text_0:
# 374 "data/maps/Route103/scripts.pory"
	.string "This is ridiculous. Is this what our\n"
	.string "taxes are being spent on?\p"
	.string "If I don't deliver these goods soon, my\n"
	.string "boss will have my head!$"

Sharpy103_Text_0:
# 394 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 403 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_2:
# 407 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_3:
# 411 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_4:
# 423 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_5:
# 436 "data/maps/Route103/scripts.pory"
	.string "If you two are done, Sharpy and I need\n"
	.string "to go back - it's almost curfew!$"

Sharpy103_Text_6:
# 441 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! We're going to get\n"
	.string "scolded...$"

Sharpy103_Text_7:
# 450 "data/maps/Route103/scripts.pory"
	.string "Well... I guess you won't be joining us\n"
	.string "after all... unless...$"

Sharpy103_Text_8:
# 455 "data/maps/Route103/scripts.pory"
	.string "Unless you change your mind! If you do,\n"
	.string "come visit at {COLOR GREEN}Petalburg Dojo{COLOR DARK_GRAY}!$"

Sharpy103_Text_9:
# 460 "data/maps/Route103/scripts.pory"
	.string "It's the big, old-fashioned wooden\n"
	.string "building - can't miss it!\p"
	.string "So, if you want to help us save Hoenn...$"

Sharpy103_Text_10:
# 466 "data/maps/Route103/scripts.pory"
	.string "You better come!$"

Sharpy103_Text_11:
# 476 "data/maps/Route103/scripts.pory"
	.string "Well, it goes without saying, but you\n"
	.string "passed the test with flying colors!$"

Sharpy103_Text_12:
# 481 "data/maps/Route103/scripts.pory"
	.string "Now you just need to come to {COLOR GREEN}Petalburg\n"
	.string "Dojo{COLOR DARK_GRAY}, and you can join us officially!$"

Sharpy103_Text_13:
# 487 "data/maps/Route103/scripts.pory"
	.string "Well, it's our tutor who has the last\n"
	.string "word on accepting recruits... but I\l"
	.string "doubt he'll reject you.$"

Sharpy103_Text_14:
# 493 "data/maps/Route103/scripts.pory"
	.string "We'd love to show you the way, but we\n"
	.string "kinda need to rush back.$"

Sharpy103_Text_15:
# 499 "data/maps/Route103/scripts.pory"
	.string "Yup - so we'll go on ahead! {COLOR GREEN}Petalburg\n"
	.string "Dojo{COLOR DARK_GRAY} is the big, old-fashioned wooden\l"
	.string "building - can't miss it.$"

Sharpy103_Text_16:
# 506 "data/maps/Route103/scripts.pory"
	.string "We'll see you there!$"

Route103TouristApproach0_Text_0:
# 544 "data/maps/Route103/scripts.pory"
	.string "Hey, you!$"

Route103Tourist_Text_0:
# 593 "data/maps/Route103/scripts.pory"
	.string "You're the one who mugged me! You're\n"
	.string "not getting away!$"

Route103Tourist_Text_1:
# 601 "data/maps/Route103/scripts.pory"
	.string "Uhm... I'm sorry. I dropped my glasses,\n"
	.string "and I mistook you for that thief...!$"

Route103Tourist_Text_2:
# 605 "data/maps/Route103/scripts.pory"
	.string "What thief? The one who stole all my\n"
	.string "pokeyen!$"

Route103Tourist_Text_3:
# 607 "data/maps/Route103/scripts.pory"
	.string "And that's not the worse... he threw my\n"
	.string "bike to the mud there, so that I\l"
	.string "couldn't chase him!$"

Route103Tourist_Text_4:
# 610 "data/maps/Route103/scripts.pory"
	.string "I tried to get it out, but it's stuck\n"
	.string "real bad... if only me or my Pokémon had\l"
	.string "enough {COLOR RED}STRENGTH{COLOR DARK_GRAY}!$"

Route103Tourist_Text_5:
# 620 "data/maps/Route103/scripts.pory"
	.string "I'm not leaving without my bike. Not a\n"
	.string "chance!\p"
	.string "It costed me 1,000,000¥ at Cerulean\n"
	.string "City's Bike Shop!$"

Route103Touristbikepushed_Text_0:
# 637 "data/maps/Route103/scripts.pory"
	.string "Y-you did it! IT'S OUT! Wait, I'll take it\n"
	.string "from here!$"

Route103Touristbikepushed_Text_1:
# 655 "data/maps/Route103/scripts.pory"
	.string "Thank you so much! Here - I got this as\n"
	.string "a souvenir, but you can have it!$"

Route103Touristbikepushed_Text_2:
# 658 "data/maps/Route103/scripts.pory"
	.string "Well, these have been some thrilling\n"
	.string "holidays... but I should catch a boat in\l"
	.string "Slateport, and go back home.$"

Route103Touristbikepushed_Text_3:
# 661 "data/maps/Route103/scripts.pory"
	.string "If you ever make a trip to Cinnabar\n"
	.string "Island, I'll return the favour properly.\l"
	.string "Safe travels now!$"

Route103Touristbikepushed_Text_4:
# 674 "data/maps/Route103/scripts.pory"
	.string "Ooow ow ow... I need a new pair of\n"
	.string "glasses...$"

Route103TouristNotThatWay_Text_0:
# 689 "data/maps/Route103/scripts.pory"
	.string "Don't push it from there - you'll get it\n"
	.string "more stuck!$"

Route103VeteranBattle_Text_0:
# 703 "data/maps/Route103/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

Route103VeteranRegister_Text_0:
# 712 "data/maps/Route103/scripts.pory"
	.string "Good job, but don't lower your guard.\p"
	.string "Let's exchange Devon profiles - I'll\n"
	.string "make sure you don't slack off!$"

Route103VeteranRegister_Text_1:
# 715 "data/maps/Route103/scripts.pory"
	.string "And take this as well. It's perfect for\n"
	.string "cover fire.$"

Route103VeteranRematch_Text_0:
# 723 "data/maps/Route103/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

Route102DevonPoochain_Text_0:
# 747 "data/maps/Route103/scripts.pory"
	.string "Grrr!$"

Route103ConcordBridgeGuard_Text_0:
# 757 "data/maps/Route103/scripts.pory"
	.string "Due to an increase in {COLOR RED}Rebel{COLOR DARK_GRAY} activity in\n"
	.string "this area, passage through {COLOR BLUE}Rebel{COLOR DARK_GRAY} is\l"
	.string "heavily restricted.$"

Route103ConcordBridgeGuard_Text_1:
# 762 "data/maps/Route103/scripts.pory"
	.string "Hm? Yes?$"

Route103ConcordBridgeGuard_Text_2:
# 764 "data/maps/Route103/scripts.pory"
	.string "I need directions$"

Route103ConcordBridgeGuard_Text_3:
# 764 "data/maps/Route103/scripts.pory"
	.string "How is your day?$"

Route103ConcordBridgeGuard_Text_4:
# 764 "data/maps/Route103/scripts.pory"
	.string "Let's have a battle!$"

Route103ConcordBridgeGuard_Text_5:
# 764 "data/maps/Route103/scripts.pory"
	.string "I found someone suspicious...$"

Route103ConcordBridgeGuard_Text_6:
# 764 "data/maps/Route103/scripts.pory"
	.string "Nevermind$"

Route103ConcordBridgeGuard_Text_7:
# 767 "data/maps/Route103/scripts.pory"
	.string "There is a signpost right next to me...\n"
	.string "if you can't read, you can learn in the\l"
	.string "{COLOR BLUE}Devon Learning Center{COLOR DARK_GRAY} of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}.\p"
	.string "... I'm sorry, that was rather rude. I'm\n"
	.string "just having a rough day.\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_8:
# 773 "data/maps/Route103/scripts.pory"
	.string "Not too exciting - lots of standing\n"
	.string "around.\p"
	.string "We received reports of a prowling\n"
	.string "criminal in the vicinity, and I'm doing\l"
	.string "double shift because of it...\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_9:
# 778 "data/maps/Route103/scripts.pory"
	.string "A battle? An odd request, but it could\n"
	.string "be a fun use of my allotted recess time.\p"
	.string "Let's do it!$"

Route103ConcordBridgeGuard_Text_10:
# 788 "data/maps/Route103/scripts.pory"
	.string "Thank you. That really helped stretch\n"
	.string "the good old battling muscle!$"

Route103ConcordBridgeGuard_Text_11:
# 795 "data/maps/Route103/scripts.pory"
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
# 807 "data/maps/Route103/scripts.pory"
	.string "Be on your way, then - and stay out of\n"
	.string "trouble.$"

Route103ConcordBridgeGuard_Text_13:
# 814 "data/maps/Route103/scripts.pory"
	.string "Quickly, go distract that criminal -\n"
	.string "before he notices something is off!$"

Route103ConcordBridgeGuard_Text_14:
# 817 "data/maps/Route103/scripts.pory"
	.string "I got to thank you for that battle.\p"
	.string "If I get strong enough, maybe they'll\n"
	.string "send me somewhere other than this\l"
	.string "bridge in the boonies.$"

Route103ConcordBridgeGuard_Text_15:
# 821 "data/maps/Route103/scripts.pory"
	.string "Wherever he is now, that con man is for\n"
	.string "other Devon guards to worry about.\p"
	.string "He didn't look that dangerous anyway.$"

Route103ConcordConartist_Text_0:
# 843 "data/maps/Route103/scripts.pory"
	.string "Hey kid! Wanna earn some quick and easy\n"
	.string "pokeyen? You look like you could use it!$"

Route103ConcordConartist_Text_1:
# 844 "data/maps/Route103/scripts.pory"
	.string "Yes$"

Route103ConcordConartist_Text_2:
# 844 "data/maps/Route103/scripts.pory"
	.string "No$"

Route103ConcordConartist_Text_3:
# 847 "data/maps/Route103/scripts.pory"
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
# 862 "data/maps/Route103/scripts.pory"
	.string "Eh, scram then. Some of us have work to\n"
	.string "do.$"

Route103ConcordConartist_Text_5:
# 869 "data/maps/Route103/scripts.pory"
	.string "Come on, go distract him! Tell him\n"
	.string "there's a flying Grumpig behind him or\l"
	.string "something!\p"
	.string "I don't care how, that's what I'm paying\n"
	.string "you for!\p"
	.string "And no, I don't do upfront payments,\n"
	.string "thank you. Cash after!$"

Route103ConcordConartist_Text_6:
# 876 "data/maps/Route103/scripts.pory"
	.string "What the hell are you doing? You barely\n"
	.string "distracted him - you got to be more of a\l"
	.string "nuisance!$"

Route103ConcordConartist_Text_7:
# 880 "data/maps/Route103/scripts.pory"
	.string "Hold it right there! You're surrounded!$"

Route103ConcordConartist_Text_8:
# 901 "data/maps/Route103/scripts.pory"
	.string "What the...?$"

Route103ConcordConartist_Text_9:
# 905 "data/maps/Route103/scripts.pory"
	.string "You two-faced bastard - you set me up!\n"
	.string "You're going to get it now!\p"
	.string "No one slips Jimmy McGligar, best\n"
	.string "Pokémon egg seller of Hoenn!$"

Route103ConcordConartist_Text_10:
# 912 "data/maps/Route103/scripts.pory"
	.string "You'll never catch me alive! Outta my\n"
	.string "way!$"

Route103ConcordConartist_Text_11:
# 918 "data/maps/Route103/scripts.pory"
	.string "W-wait, you're unde-...!$"

Route103ConcordConartist_Text_12:
# 924 "data/maps/Route103/scripts.pory"
	.string "SEE YA, LOSERS...!$"

Route103ConcordConartist_Text_13:
# 930 "data/maps/Route103/scripts.pory"
	.string "GRLBGBRLB...!$"

Route103ConcordConartist_Text_14:
# 950 "data/maps/Route103/scripts.pory"
	.string "Such athleticism... he should stop\n"
	.string "conning, and become an acrobat.$"

Route103ConcordConartist_Text_15:
# 954 "data/maps/Route103/scripts.pory"
	.string "Indeed... at any rate, it's not our\n"
	.string "problem any more.$"

Route103ConcordConartist_Text_16:
# 966 "data/maps/Route103/scripts.pory"
	.string "Thank you for your help, civilian! Now we\n"
	.string "can put this long shift to an end.$"

Route103ConcordConartist_Text_17:
# 968 "data/maps/Route103/scripts.pory"
	.string "Here, this is for your trouble.$"

Route103ConcordConartist_Text_18:
# 972 "data/maps/Route103/scripts.pory"
	.string "Received 1000¥!$"

ConArtistEgg_Text_0:
# 1001 "data/maps/Route103/scripts.pory"
	.string "Hands off my wares, pal! This egg is\n"
	.string "mine!$"

ConArtistEgg_Text_1:
# 1007 "data/maps/Route103/scripts.pory"
	.string "The shady dealer left this egg behind...$"

ConArtistEgg_Text_2:
# 1011 "data/maps/Route103/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

RiverFerryGuyUp_Text_0:
# 1031 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lad?$"

RiverFerryGuyUp_Text_1:
# 1033 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lass?$"

RiverFerryGuyUp_Text_2:
# 1038 "data/maps/Route103/scripts.pory"
	.string "Would you like to sail upstream?$"

RiverFerryGuyUp_Text_3:
# 1042 "data/maps/Route103/scripts.pory"
	.string "Then hop on!$"

RiverFerryGuyUp_Text_4:
# 1059 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're going upstream, so it'll\n"
	.string "be a bit slow.$"

RiverFerryGuyUp_Text_5:
# 1082 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back downstream.$"

RiverFerryGuyUp_Text_6:
# 1097 "data/maps/Route103/scripts.pory"
	.string "Ah, shame... tell me if you ever do!$"

RiverFerryGuyDown_Text_0:
# 1117 "data/maps/Route103/scripts.pory"
	.string "Would you like to sail downstream?$"

RiverFerryGuyDown_Text_1:
# 1138 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're sailing downstream, so\n"
	.string "brace yourself!$"

RiverFerryGuyDown_Text_2:
# 1161 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back upstream.$"

RiverFerryBoat_Text_0:
# 1185 "data/maps/Route103/scripts.pory"
	.string "It's an old boat, but it's well taken\n"
	.string "care of.$"

RiverFerryManNotThatEntry_Text_0:
# 1194 "data/maps/Route103/scripts.pory"
	.string "Not so fast, young one...! If you want to\n"
	.string "board, do it after me.$"

FisherGuruRoute103_Text_0:
# 1213 "data/maps/Route103/scripts.pory"
	.string "Sssh... did you hear that? It's... IT'S\n"
	.string "COMING!$"

FisherGuruRoute103_Text_1:
# 1233 "data/maps/Route103/scripts.pory"
	.string "CRAAAAAAW!!$"

FisherGuruRoute103_Text_2:
# 1246 "data/maps/Route103/scripts.pory"
	.string "AAH, CRAB BASKETS!$"

FisherGuruRoute103_Text_3:
# 1249 "data/maps/Route103/scripts.pory"
	.string "That was the LEGENDARY MUD CRAB of\n"
	.string "Route 103 - I've been looking for it for\l"
	.string "WEEKS!\p"
	.string "But I was so awe-struck... that I could\n"
	.string "not do anything!!$"

FisherGuruRoute103_Text_4:
# 1252 "data/maps/Route103/scripts.pory"
	.string "Still, this can't be a coincidence - you\n"
	.string "both showed up at the same time!!\p"
	.string "HMM... my intuition tells me it saw\n"
	.string "something in you. But then it left\l"
	.string "disappointed.$"

FisherGuruRoute103_Text_5:
# 1256 "data/maps/Route103/scripts.pory"
	.string "But we can fix that. Here, take THIS!$"

FisherGuruRoute103_Text_6:
# 1260 "data/maps/Route103/scripts.pory"
	.string "I want you to take that rod and fish at\n"
	.string "least THREE SPECIES OF POKÉMON!\p"
	.string "WHY? Because only then will the\n"
	.string "LEGENDARY MUDCRAB judge you as worthy,\l"
	.string "and show itself again!\p"
	.string "Do not question the intuition of Ivan,\n"
	.string "the Legendary Releer - just embrace it,\l"
	.string "and fulfil your destiny!!$"

FisherGuruRoute103_Text_7:
# 1274 "data/maps/Route103/scripts.pory"
	.string "AHOY! How's the FISHING going!?$"

FisherGuruRoute103_Text_8:
# 1276 "data/maps/Route103/scripts.pory"
	.string "About your request...$"

FisherGuruRoute103_Text_9:
# 1276 "data/maps/Route103/scripts.pory"
	.string "Did you see the Mud Crab?$"

FisherGuruRoute103_Text_10:
# 1276 "data/maps/Route103/scripts.pory"
	.string "How's it going?$"

FisherGuruRoute103_Text_11:
# 1276 "data/maps/Route103/scripts.pory"
	.string "It's nothing$"

FisherGuruRoute103_Text_12:
# 1302 "data/maps/Route103/scripts.pory"
	.string "What? You haven't fished a single\n"
	.string "Pokémon? NADA? NICHT?$"

FisherGuruRoute103_Text_13:
# 1306 "data/maps/Route103/scripts.pory"
	.string "Hm? You have only fished ONE measly\n"
	.string "Pokémon?! It's a start, but...$"

FisherGuruRoute103_Text_14:
# 1310 "data/maps/Route103/scripts.pory"
	.string "Oh, you have fished a couple Pokémon\n"
	.string "already? Not bad, but...$"

FisherGuruRoute103_Text_15:
# 1315 "data/maps/Route103/scripts.pory"
	.string "Ah, you've fished at least 3 Pokémon?\n"
	.string "Good, GOOD!\p"
	.string "I'm confident the Legendary Mud Crab\n"
	.string "will acknowledge you and show up.\p"
	.string "Let's wait a bit!$"

FisherGuruRoute103_Text_16:
# 1330 "data/maps/Route103/scripts.pory"
	.string "Hmm... I should have known. Such a\n"
	.string "measly fishing test...\p"
	.string "Is NOT ENOUGH to make the Mud Crab\n"
	.string "acknowledge you!$"

FisherGuruRoute103_Text_17:
# 1333 "data/maps/Route103/scripts.pory"
	.string "I suppose I've got no choice... here,\n"
	.string "TAKE THIS!$"

FisherGuruRoute103_Text_18:
# 1337 "data/maps/Route103/scripts.pory"
	.string "I want you to use that rod to bring me a\n"
	.string "BIG PEARL!\p"
	.string "If you are a true fisher... you will know\n"
	.string "how.\p"
	.string "Do that, and I'm sure next time the Mud\n"
	.string "Crab will show itself!$"

FisherGuruRoute103_Text_19:
# 1346 "data/maps/Route103/scripts.pory"
	.string "Like I said, I need you to fish 3 species\n"
	.string "of Pokémon!\p"
	.string "If you are the fisher the Mud Crab\n"
	.string "believes you to be, you shouldn't need\l"
	.string "any guidance!$"

FisherGuruRoute103_Text_20:
# 1350 "data/maps/Route103/scripts.pory"
	.string "O-of course I could give it, but that\n"
	.string "would defeat the purpose!$"

FisherGuruRoute103_Text_21:
# 1361 "data/maps/Route103/scripts.pory"
	.string "pearl$"

FisherGuruRoute103_Text_22:
# 1371 "data/maps/Route103/scripts.pory"
	.string "no pearl$"

FisherGuruRoute103_Text_23:
# 1379 "data/maps/Route103/scripts.pory"
	.string "Regrettably, I haven't. Not even the tip\n"
	.string "of that lustruous, star-shaped crown\l"
	.string "of his...\p"
	.string "But don't worry - he won't swim away\n"
	.string "easily.$"

FisherGuruRoute103_Text_24:
# 1383 "data/maps/Route103/scripts.pory"
	.string "They say he is forever waiting for a\n"
	.string "trainer who saved his life during the\l"
	.string "Assault on Route 103.\p"
	.string "Sadly, that trainer died that day. They\n"
	.string "will never meet again...$"

FisherGuruRoute103_Text_25:
# 1388 "data/maps/Route103/scripts.pory"
	.string "In spite of its beastly appearance, the\n"
	.string "Mud Crab is a loyal, tender Pokémon.\p"
	.string "That's why I wish to catch him, and help\n"
	.string "him heal!$"

FisherGuruRoute103_Text_26:
# 1395 "data/maps/Route103/scripts.pory"
	.string "Ah, well, aside from the Mud Crab\n"
	.string "business... not very good, I must say.$"

FisherGuruRoute103_Text_27:
# 1398 "data/maps/Route103/scripts.pory"
	.string "The sea is poisoned, the rivers are\n"
	.string "muddy...\p"
	.string "Most of my buddies have moved up north.$"

FisherGuruRoute103_Text_28:
# 1402 "data/maps/Route103/scripts.pory"
	.string "But me, I like the challenge!$"

FisherGuruRoute103_Text_29:
# 1411 "data/maps/Route103/scripts.pory"
	.string "Then don't distract me! Does it look\n"
	.string "like I'm doing nothing here!?$"

FisherGuruRoute103_Text_30:
# 1414 "data/maps/Route103/scripts.pory"
	.string "... don't answer that.$"

MoveTutorSign_Text_0:
# 1429 "data/maps/Route103/scripts.pory"
	.string "Move Tutor Colton's House$"

Fishercallsfornumber_Text_0:
# 1437 "data/maps/Route103/scripts.pory"
	.string "Wait - add me on Devon Net! We must\n"
	.string "keep in touch about this!$"

Sharpy103_Outro::
# 534 "data/maps/Route103/scripts.pory"
	.string "Heh... you're a soldier alright...!$"

Tourist103_Outro::
# 628 "data/maps/Route103/scripts.pory"
	.string "Wait a minute... oh, you're not that \nthief. Sorry!$"

Veteran103_Intro::
# 729 "data/maps/Route103/scripts.pory"
	.string "They told me I'm too old to enlist...  but \nI'm stronger than you young'uns!\pI'll show you!$"

Veteran103_Outro::
# 732 "data/maps/Route103/scripts.pory"
	.string "Grr... you won the battle, but\nnot the war!$"

Veteran103_Intro2::
# 735 "data/maps/Route103/scripts.pory"
	.string "There you are - I've been preparing\nmy counterattack! CHAAARGE!$"

Veteran103_Outro2::
# 738 "data/maps/Route103/scripts.pory"
	.string "... I surrender. Again.$"

DevonGuard103_Outro::
# 833 "data/maps/Route103/scripts.pory"
	.string "That could have gone better...$"

ShadyDealer103_Outro::
# 991 "data/maps/Route103/scripts.pory"
	.string "I... I-I'm not going back to jail!$"
