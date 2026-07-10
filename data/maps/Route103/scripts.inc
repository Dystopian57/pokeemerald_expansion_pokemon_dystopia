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
	map_script MAP_SCRIPT_ON_TRANSITION, Route103Weather
# 214 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FerryManReturnsSouth
	.byte 0


Route103Weather::
# 219 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 0, Route103Shade
# 220 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 1, Route103Rain1
# 221 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 2, Route103Rain2
# 222 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 3, Route103EndRain
# 224 "data/maps/Route103/scripts.pory"
	release
	return


Route103WeatherSong::
# 228 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103WeatherSong_1
# 231 "data/maps/Route103/scripts.pory"
	release
	return

Route103WeatherSong_1:
# 229 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103Shade::
# 235 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
	return


Route103Rain1::
# 239 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 240 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 2
# 241 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 242 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103Rain2::
# 246 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 247 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
# 248 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 249 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103EndRain::
# 254 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 255 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
# 256 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 257 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


FerryManReturnsSouth::
# 264 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 265 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 266 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 267 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	return


Route103ConcordBridgeSign::
# 272 "data/maps/Route103/scripts.pory"
	lock
# 273 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeSign_Text_0
# 274 "data/maps/Route103/scripts.pory"
	release
	return


Route103WaterfallCaveSign::
# 278 "data/maps/Route103/scripts.pory"
	lock
# 279 "data/maps/Route103/scripts.pory"
	msgbox Route103WaterfallCaveSign_Text_0
# 280 "data/maps/Route103/scripts.pory"
	release
	return


Route103FisherBucket::
# 284 "data/maps/Route103/scripts.pory"
	lock
# 285 "data/maps/Route103/scripts.pory"
	msgbox Route103FisherBucket_Text_0
# 286 "data/maps/Route103/scripts.pory"
	release
	return


Route103IteminMud::
# 290 "data/maps/Route103/scripts.pory"
	lock
# 291 "data/maps/Route103/scripts.pory"
	finditem ITEM_SILK_SCARF
# 294 "data/maps/Route103/scripts.pory"
	removeobject 21
# 295 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonGruntCheckingDriver::
# 298 "data/maps/Route103/scripts.pory"
	lock
# 299 "data/maps/Route103/scripts.pory"
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 300 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_0
# 302 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 303 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_1
# 304 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonDrivercheckedby::
# 308 "data/maps/Route103/scripts.pory"
	lock
# 309 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_0
# 310 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonDrivercheckedby_Text_0
# 312 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_1
# 313 "data/maps/Route103/scripts.pory"
	waitmovement
# 314 "data/maps/Route103/scripts.pory"
	releaseall
	return


Sharpy103::
# 319 "data/maps/Route103/scripts.pory"
	lockall
# 320 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 321 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 322 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 323 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 325 "data/maps/Route103/scripts.pory"
	special DoTVShow
# 327 "data/maps/Route103/scripts.pory"
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 335 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 350 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 351 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 352 "data/maps/Route103/scripts.pory"
	addobject 25
# 353 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 32
# 354 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 355 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 356 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 357 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 358 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 359 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 361 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 362 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 363 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 364 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_1
# 365 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 366 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 367 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 368 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 370 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 371 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 372 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 373 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 375 "data/maps/Route103/scripts.pory"
	goto_if_set saidnotosharpyinoldale, Sharpy103_8
# 403 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 404 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 405 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 406 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 407 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 409 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 410 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 411 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 412 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 414 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 415 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 416 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 417 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 418 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 421 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 422 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 423 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 424 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 426 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_2
# 427 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 428 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 429 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 430 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_15
# 433 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 434 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 435 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 436 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_16
Sharpy103_7:
# 440 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 441 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 442 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_3
# 443 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_4
# 444 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 445 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 446 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_5
# 447 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 448 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 449 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 450 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 451 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 452 "data/maps/Route103/scripts.pory"
	setflag DLCclassends
# 453 "data/maps/Route103/scripts.pory"
	clearflag DLCrecesstarts
# 454 "data/maps/Route103/scripts.pory"
	setflag Sharpydefeatedat103
# 456 "data/maps/Route103/scripts.pory"
	releaseall
# 457 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Sharpy103_11
# 459 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
	return

Sharpy103_2:
# 329 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 330 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 331 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 332 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 333 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 337 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 338 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 339 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 340 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 341 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 342 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 343 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 344 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 345 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 346 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 347 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 348 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4

Sharpy103_8:
# 378 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 379 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 380 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 381 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 383 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 384 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 385 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 386 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 389 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 390 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 391 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 392 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 395 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 396 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 397 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 398 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_10
	goto Sharpy103_7

Sharpy103_11:
# 458 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	return


Route103TouristApproach0::
# 468 "data/maps/Route103/scripts.pory"
	lockall
# 469 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 470 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 471 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 472 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 473 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 474 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach1::
# 478 "data/maps/Route103/scripts.pory"
	lockall
# 479 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 480 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 481 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 482 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 483 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach1_Movement_0
# 484 "data/maps/Route103/scripts.pory"
	waitmovement
# 485 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 486 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach2::
# 490 "data/maps/Route103/scripts.pory"
	lockall
# 491 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 492 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 493 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 494 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 495 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach2_Movement_0
# 496 "data/maps/Route103/scripts.pory"
	waitmovement
# 497 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 498 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach3::
# 502 "data/maps/Route103/scripts.pory"
	lockall
# 503 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 504 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 505 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 506 "data/maps/Route103/scripts.pory"
	waitmovement
# 507 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 508 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach3_Movement_0
# 509 "data/maps/Route103/scripts.pory"
	waitmovement
# 510 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 511 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103Tourist::
# 515 "data/maps/Route103/scripts.pory"
	lockall
# 516 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 517 "data/maps/Route103/scripts.pory"
touristafterapproach:
# 518 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 0
	goto_if_eq Route103Tourist_2
Route103Tourist_1:
# 544 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 1
	goto_if_eq Route103Tourist_5
Route103Tourist_4:
# 551 "data/maps/Route103/scripts.pory"
finishtouristscript:
# 552 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103Tourist_2:
# 520 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 521 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_0
# 522 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_TOURIST_103, Tourist103_Outro
# 525 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103Tourist_8
# 527 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
Route103Tourist_7:
# 529 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_1
# 530 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 531 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 532 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 533 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_2
# 534 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 535 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_3
# 537 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 538 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_4
# 540 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 1
# 541 "data/maps/Route103/scripts.pory"
	goto finishtouristscript
	goto Route103Tourist_1

Route103Tourist_5:
# 546 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 547 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 548 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_5
	goto Route103Tourist_4

Route103Tourist_8:
# 526 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103Tourist_7


Route103Touristbikepushed::
# 561 "data/maps/Route103/scripts.pory"
	lockall
# 562 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 563 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 564 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 565 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_0
# 566 "data/maps/Route103/scripts.pory"
	closemessage
# 568 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 569 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 570 "data/maps/Route103/scripts.pory"
	playse SE_BIKE_HOP
# 571 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 572 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route103Touristbikepushed_Movement_1
# 573 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 574 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 575 "data/maps/Route103/scripts.pory"
	setobjectxy 27, 0, 0
# 576 "data/maps/Route103/scripts.pory"
	setobjectxy 26, 0, 0
# 577 "data/maps/Route103/scripts.pory"
	setflag touristhelped
# 578 "data/maps/Route103/scripts.pory"
	clearflag touristonbike
# 579 "data/maps/Route103/scripts.pory"
	addobject 29
# 580 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 22, 9
# 581 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 582 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 583 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_1
# 584 "data/maps/Route103/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 585 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103TouristApproach0_Movement_1
# 586 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_2
# 588 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_2
# 589 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_3
# 591 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103Touristbikepushed_Movement_2
# 592 "data/maps/Route103/scripts.pory"
	waitmovement
# 594 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 595 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 596 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 597 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 598 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 599 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 600 "data/maps/Route103/scripts.pory"
	waitse
# 602 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_4
# 604 "data/maps/Route103/scripts.pory"
	removeobject 29
# 605 "data/maps/Route103/scripts.pory"
	setflag touristonbike
# 607 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 2
# 608 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103TouristNotThatWay::
# 613 "data/maps/Route103/scripts.pory"
	lockall
# 614 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 615 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 616 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 617 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristNotThatWay_Text_0
# 618 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach1_Movement_0
# 619 "data/maps/Route103/scripts.pory"
	waitmovement
# 620 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103VeteranBattle::
# 626 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, Route103VeteranRegister
# 627 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 628 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 629 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranBattle_Text_0
# 630 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRegister::
# 635 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 636 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 637 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_0
# 639 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 640 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRematch::
# 645 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro2, Veteran103_Outro2
# 646 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRematch_Text_0
	end


Route103ConcordBridgeGuard::
# 666 "data/maps/Route103/scripts.pory"
	lockall
# 667 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 668 "data/maps/Route103/scripts.pory"
	applymovement 30, Route103DevonDrivercheckedby_Movement_0
# 669 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordBridgeGuard_2
Route103ConcordBridgeGuard_1:
# 673 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_7
Route103ConcordBridgeGuard_4:
# 718 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route103ConcordBridgeGuard_12
Route103ConcordBridgeGuard_11:
# 724 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_20
Route103ConcordBridgeGuard_17:
# 728 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_29
Route103ConcordBridgeGuard_27:
# 732 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_38
Route103ConcordBridgeGuard_35:
# 737 "data/maps/Route103/scripts.pory"
finishguardscript:
# 738 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordBridgeGuard_2:
# 670 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_0
	goto Route103ConcordBridgeGuard_1

Route103ConcordBridgeGuard_5:
# 675 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_1
# 676 "data/maps/Route103/scripts.pory"
guarddistractchoice:
# 677 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordBridgeGuard_Text_2, Route103ConcordBridgeGuard_Text_3, Route103ConcordBridgeGuard_Text_4, Route103ConcordBridgeGuard_Text_5, Route103ConcordBridgeGuard_Text_6
# 679 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordBridgeGuard_15
Route103ConcordBridgeGuard_14:
# 685 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordBridgeGuard_25
Route103ConcordBridgeGuard_24:
# 690 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route103ConcordBridgeGuard_33
Route103ConcordBridgeGuard_32:
# 707 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route103ConcordBridgeGuard_42
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_6:
# 673 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_5
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_7:
# 673 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordBridgeGuard_6
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_12:
# 719 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_12
# 720 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_11

Route103ConcordBridgeGuard_15:
# 680 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_7
# 683 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_14

Route103ConcordBridgeGuard_18:
# 726 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_13
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_19:
# 724 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_18
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_20:
# 724 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_19
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_25:
# 686 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_8
# 688 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_24

Route103ConcordBridgeGuard_28:
# 729 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_14
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_29:
# 728 "data/maps/Route103/scripts.pory"
	goto_if_set helpedconcordconartist, Route103ConcordBridgeGuard_28
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_33:
# 691 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_9
# 693 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_DEVONGUARD_103, DevonGuard103_Outro
# 694 "data/maps/Route103/scripts.pory"
	setflag helpedconcordconartist
# 696 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 699 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 701 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_10
# 702 "data/maps/Route103/scripts.pory"
	clearflag conartistrewardsinoldale
# 703 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 704 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_32

Route103ConcordBridgeGuard_36:
# 733 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_15
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_37:
# 732 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, Route103ConcordBridgeGuard_36
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_38:
# 732 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_37
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_42:
# 708 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_11
# 711 "data/maps/Route103/scripts.pory"
	setflag betrayedconcordconartist
# 712 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_4


Route103ConcordConartist::
# 748 "data/maps/Route103/scripts.pory"
	lockall
# 749 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 750 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 752 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordConartist_2
Route103ConcordConartist_1:
# 777 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_7
Route103ConcordConartist_4:
# 783 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_17
Route103ConcordConartist_14:
# 886 "data/maps/Route103/scripts.pory"
finishconartistscript:
# 887 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordConartist_2:
# 754 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_0
# 755 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 757 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordConartist_12
Route103ConcordConartist_11:
# 771 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordConartist_21
	goto Route103ConcordConartist_1

Route103ConcordConartist_5:
# 779 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_6:
# 777 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_7:
# 777 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordConartist_6
	goto Route103ConcordConartist_4

Route103ConcordConartist_12:
# 758 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_3
# 765 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 766 "data/maps/Route103/scripts.pory"
	waitmovement 28
# 767 "data/maps/Route103/scripts.pory"
	setflag conartistaskeddistract
# 768 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_11

Route103ConcordConartist_15:
# 785 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 786 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_6
# 789 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 790 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_7
# 796 "data/maps/Route103/scripts.pory"
	clearflag devonsvsconartist
# 797 "data/maps/Route103/scripts.pory"
	addobject 31
# 798 "data/maps/Route103/scripts.pory"
	setobjectxy 31, 42, 37
# 799 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 800 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 801 "data/maps/Route103/scripts.pory"
	waitmovement
# 802 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_0
# 803 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 806 "data/maps/Route103/scripts.pory"
	addobject 32
# 807 "data/maps/Route103/scripts.pory"
	setobjectxy 32, 30, 39
# 808 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_1
# 810 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_2
# 811 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_8
# 813 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 815 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_9
# 818 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHADYDEALER_103, ShadyDealer103_Outro
# 820 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonGruntCheckingDriver_Movement_0
# 821 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JIMMY ]
# 822 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_10
# 824 "data/maps/Route103/scripts.pory"
	playse SE_M_COMET_PUNCH
# 825 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ConcordConartist_Movement_3
# 827 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_4
# 828 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_11
# 829 "data/maps/Route103/scripts.pory"
	playse SE_M_MEGA_KICK2
# 830 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 831 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_5
# 832 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_6
# 833 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 834 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_12
# 835 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_7
# 836 "data/maps/Route103/scripts.pory"
	playse SE_M_JUMP_KICK
# 837 "data/maps/Route103/scripts.pory"
	waitse
# 838 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 839 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 840 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_13
# 842 "data/maps/Route103/scripts.pory"
	waitmovement
# 844 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103DevonGruntCheckingDriver_Movement_0
# 846 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_14
# 848 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103DevonGruntCheckingDriver_Movement_0
# 850 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_15
# 852 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_8
# 853 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_8
# 854 "data/maps/Route103/scripts.pory"
	waitmovement
# 855 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 856 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 857 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103TouristApproach1_Movement_0
# 858 "data/maps/Route103/scripts.pory"
	waitmovement
# 859 "data/maps/Route103/scripts.pory"
	removeobject 31
# 860 "data/maps/Route103/scripts.pory"
	waitmovement
# 861 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 862 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_16
# 864 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_17
# 865 "data/maps/Route103/scripts.pory"
	playse SE_SHOP
# 866 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_18
# 868 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_9
# 869 "data/maps/Route103/scripts.pory"
	waitmovement
# 871 "data/maps/Route103/scripts.pory"
	waitmovement
# 873 "data/maps/Route103/scripts.pory"
	removeobject 28
# 875 "data/maps/Route103/scripts.pory"
	removeobject 32
# 876 "data/maps/Route103/scripts.pory"
	setflag devonsvsconartist
# 877 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 878 "data/maps/Route103/scripts.pory"
	clearflag devonbridgeguardgoestoconartist
# 879 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt Route103ConcordConartist_24
# 881 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
Route103ConcordConartist_23:
# 882 "data/maps/Route103/scripts.pory"
	setvar VAR_JIMMYQUESTPROGRESS, 1
# 884 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_14

Route103ConcordConartist_16:
# 783 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_15
	goto Route103ConcordConartist_14

Route103ConcordConartist_17:
# 783 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordConartist_16
	goto Route103ConcordConartist_14

Route103ConcordConartist_21:
# 772 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_4
# 773 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
# 774 "data/maps/Route103/scripts.pory"
	waitmovement 28
	goto Route103ConcordConartist_1

Route103ConcordConartist_24:
# 880 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto Route103ConcordConartist_23


ConArtistEgg::
# 896 "data/maps/Route103/scripts.pory"
	lockall
# 897 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 898 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, ConArtistEgg_2
ConArtistEgg_1:
# 905 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, ConArtistEgg_4
	return

ConArtistEgg_2:
# 899 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 900 "data/maps/Route103/scripts.pory"
	applymovement 28, ConArtistEgg_Movement_0
# 901 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_0
# 902 "data/maps/Route103/scripts.pory"
	releaseall
# 903 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_2
	goto ConArtistEgg_1

ConArtistEgg_4:
# 907 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_1
# 908 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 909 "data/maps/Route103/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 910 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_2
# 911 "data/maps/Route103/scripts.pory"
	removeobject 33
# 912 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 913 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryGuyUp::
# 920 "data/maps/Route103/scripts.pory"
	lockall
# 921 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 922 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 923 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_2
RiverFerryGuyUp_1:
# 933 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
# 934 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 936 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyUp_5
RiverFerryGuyUp_4:
# 988 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyUp_11
RiverFerryGuyUp_10:
# 992 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyUp_2:
# 924 "data/maps/Route103/scripts.pory"
	checkplayergender
# 925 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyUp_8
RiverFerryGuyUp_7:
# 927 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyUp_17
	goto RiverFerryGuyUp_1

RiverFerryGuyUp_5:
# 937 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 938 "data/maps/Route103/scripts.pory"
	removeobject 36
# 939 "data/maps/Route103/scripts.pory"
	removeobject 37
# 940 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 941 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 943 "data/maps/Route103/scripts.pory"
	hidefollower
# 944 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 945 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_0
# 946 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 947 "data/maps/Route103/scripts.pory"
	removeobject 34
# 948 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 949 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 950 "data/maps/Route103/scripts.pory"
	hideplayer
# 951 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 952 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_1
# 953 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 954 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
# 955 "data/maps/Route103/scripts.pory"
	closemessage
# 956 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 957 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_2
# 958 "data/maps/Route103/scripts.pory"
	applymovement 35, RiverFerryGuyUp_Movement_3
# 959 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 960 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 962 "data/maps/Route103/scripts.pory"
	clearflag ferryman103up
# 963 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103up
# 964 "data/maps/Route103/scripts.pory"
	addobject 36
# 965 "data/maps/Route103/scripts.pory"
	addobject 37
# 967 "data/maps/Route103/scripts.pory"
	showplayer
# 968 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 16
# 969 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 970 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_1
# 971 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 973 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyUp_14
# 975 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
RiverFerryGuyUp_13:
# 976 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_5
# 977 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 978 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 979 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_2
# 980 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 981 "data/maps/Route103/scripts.pory"
	removeobject 34
# 982 "data/maps/Route103/scripts.pory"
	removeobject 35
# 983 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 984 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
	goto RiverFerryGuyUp_4

RiverFerryGuyUp_8:
# 926 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyUp_7

RiverFerryGuyUp_11:
# 989 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
	goto RiverFerryGuyUp_10

RiverFerryGuyUp_14:
# 974 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyUp_13

RiverFerryGuyUp_17:
# 928 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyUp_1


RiverFerryGuyDown::
# 996 "data/maps/Route103/scripts.pory"
	lockall
# 997 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 998 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_0
# 999 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_2
RiverFerryGuyDown_1:
# 1006 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_0
# 1007 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 1009 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyDown_5
RiverFerryGuyDown_4:
# 1061 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyDown_11
RiverFerryGuyDown_10:
# 1065 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyDown_2:
# 1000 "data/maps/Route103/scripts.pory"
	checkplayergender
# 1001 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RiverFerryGuyDown_8
RiverFerryGuyDown_7:
# 1003 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RiverFerryGuyDown_17
	goto RiverFerryGuyDown_1

RiverFerryGuyDown_5:
# 1010 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 1011 "data/maps/Route103/scripts.pory"
	removeobject 34
# 1012 "data/maps/Route103/scripts.pory"
	removeobject 35
# 1013 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 1014 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
# 1016 "data/maps/Route103/scripts.pory"
	hidefollower
# 1017 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1018 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_0
# 1019 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1020 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1021 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 1022 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1023 "data/maps/Route103/scripts.pory"
	hideplayer
# 1024 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 1025 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_0
# 1026 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1027 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_1
# 1028 "data/maps/Route103/scripts.pory"
	closemessage
# 1029 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 1030 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_1
# 1031 "data/maps/Route103/scripts.pory"
	applymovement 36, RiverFerryGuyDown_Movement_2
# 1032 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1033 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 1035 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 1036 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 1037 "data/maps/Route103/scripts.pory"
	addobject 34
# 1038 "data/maps/Route103/scripts.pory"
	addobject 35
# 1040 "data/maps/Route103/scripts.pory"
	showplayer
# 1041 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 32
# 1042 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 1043 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_1
# 1044 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 1046 "data/maps/Route103/scripts.pory"
	compare VAR_ROUTE103_WEATHER, 0
	goto_if_gt RiverFerryGuyDown_14
# 1048 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
RiverFerryGuyDown_13:
# 1049 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_2
# 1050 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1051 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1052 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_2
# 1053 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1054 "data/maps/Route103/scripts.pory"
	removeobject 36
# 1055 "data/maps/Route103/scripts.pory"
	removeobject 37
# 1056 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 1057 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	goto RiverFerryGuyDown_4

RiverFerryGuyDown_8:
# 1002 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
	goto RiverFerryGuyDown_7

RiverFerryGuyDown_11:
# 1062 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_6
	goto RiverFerryGuyDown_10

RiverFerryGuyDown_14:
# 1047 "data/maps/Route103/scripts.pory"
	playbgm MUS_STORM, TRUE
	goto RiverFerryGuyDown_13

RiverFerryGuyDown_17:
# 1004 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
	goto RiverFerryGuyDown_1


RiverFerryBoat::
# 1070 "data/maps/Route103/scripts.pory"
	lockall
# 1071 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryBoat_Text_0
# 1072 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryManNotThatEntry::
# 1076 "data/maps/Route103/scripts.pory"
	lockall
# 1077 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1078 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 1079 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 1080 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryManNotThatEntry_Text_0
# 1081 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1082 "data/maps/Route103/scripts.pory"
	waitmovement
# 1083 "data/maps/Route103/scripts.pory"
	releaseall
	return


FisherGuruRoute103::
# 1087 "data/maps/Route103/scripts.pory"
	lock
# 1088 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103DevonDrivercheckedby_Movement_0
# 1089 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_eq FisherGuruRoute103_2
FisherGuruRoute103_1:
# 1140 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_gt FisherGuruRoute103_5
FisherGuruRoute103_4:
# 1252 "data/maps/Route103/scripts.pory"
finishfisherscript:
# 1253 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1254 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1255 "data/maps/Route103/scripts.pory"
	releaseall
	return

FisherGuruRoute103_2:
# 1092 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1094 "data/maps/Route103/scripts.pory"
	playse SE_M_SURF
# 1095 "data/maps/Route103/scripts.pory"
	waitse
# 1096 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1097 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_0
# 1098 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_0
# 1100 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1101 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1103 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1104 "data/maps/Route103/scripts.pory"
	waitse
# 1105 "data/maps/Route103/scripts.pory"
	clearflag mudcrabcrawdaunt
# 1106 "data/maps/Route103/scripts.pory"
	addobject 39
# 1107 "data/maps/Route103/scripts.pory"
	playse SE_SHINY
# 1108 "data/maps/Route103/scripts.pory"
	waitse
# 1110 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_CRAWDAUNT, CRY_MODE_ENCOUNTER
# 1111 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_1
# 1112 "data/maps/Route103/scripts.pory"
	removeobject 39
# 1113 "data/maps/Route103/scripts.pory"
	setflag mudcrabcrawdaunt
# 1114 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1115 "data/maps/Route103/scripts.pory"
	waitse
# 1117 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_2
# 1118 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonDrivercheckedby_Movement_1
# 1119 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1120 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_3
# 1122 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1123 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_4
# 1126 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1127 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_5
# 1129 "data/maps/Route103/scripts.pory"
	giveitem ITEM_OLD_ROD
# 1131 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_6
# 1134 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1135 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 1
# 1136 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_1

FisherGuruRoute103_5:
# 1142 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1143 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_7
# 1144 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1145 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, FisherGuruRoute103_Text_8, FisherGuruRoute103_Text_9, FisherGuruRoute103_Text_10, FisherGuruRoute103_Text_11
# 1147 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherGuruRoute103_8
FisherGuruRoute103_7:
# 1211 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FisherGuruRoute103_11
FisherGuruRoute103_10:
# 1227 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FisherGuruRoute103_17
FisherGuruRoute103_16:
# 1241 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq FisherGuruRoute103_24
	goto FisherGuruRoute103_4

FisherGuruRoute103_8:
# 1148 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_14
FisherGuruRoute103_13:
# 1191 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 3
	goto_if_eq FisherGuruRoute103_19
	goto FisherGuruRoute103_7

FisherGuruRoute103_11:
# 1212 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1213 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_21
# 1215 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1216 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1217 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_22
# 1220 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1221 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1222 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_23
# 1224 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_10

FisherGuruRoute103_14:
# 1149 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_SMOTHQUIL
# 1150 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_22
FisherGuruRoute103_21:
# 1178 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FisherGuruRoute103_29
	goto FisherGuruRoute103_13

FisherGuruRoute103_17:
# 1228 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1229 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_24
# 1230 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1231 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1232 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_25
# 1234 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1235 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1236 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_26
# 1237 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_16

FisherGuruRoute103_19:
	checkitem ITEM_BIG_PEARL
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_26
# 1204 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1205 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_20
# 1206 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_7

FisherGuruRoute103_22:
# 1151 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1152 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_12
# 1154 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1155 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1156 "data/maps/Route103/scripts.pory"
	waitmovement
# 1157 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1158 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1159 "data/maps/Route103/scripts.pory"
	setspeaker NULL
# 1160 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_13
# 1161 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1162 "data/maps/Route103/scripts.pory"
	fadeinbgm 1
# 1163 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1164 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_14
# 1166 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_1
# 1167 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_15
# 1168 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonDrivercheckedby_Movement_1
# 1169 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 1170 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1171 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_16
# 1174 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 3
# 1175 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_21

FisherGuruRoute103_24:
# 1242 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1243 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_27
# 1244 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1245 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1246 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_28
# 1247 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_4

FisherGuruRoute103_26:
# 1194 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1195 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_19
# 1199 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_7

FisherGuruRoute103_29:
# 1179 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1180 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_17
# 1182 "data/maps/Route103/scripts.pory"
	applymovement 38, Sharpy103_Movement_0
# 1183 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_IVAN ]
# 1184 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_18
# 1186 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_13


MoveTutorSign::
# 1259 "data/maps/Route103/scripts.pory"
	lock
# 1260 "data/maps/Route103/scripts.pory"
	msgbox MoveTutorSign_Text_0
# 1261 "data/maps/Route103/scripts.pory"
	release
	return


Fishercallsfornumber::
# 1265 "data/maps/Route103/scripts.pory"
	lock
# 1266 "data/maps/Route103/scripts.pory"
	applymovement 38, ConArtistEgg_Movement_0
# 1267 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1268 "data/maps/Route103/scripts.pory"
	msgbox Fishercallsfornumber_Text_0
# 1269 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_FISHER_103
# 1270 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 2
# 1271 "data/maps/Route103/scripts.pory"
	release
	return


# 299 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_0:
# 299 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 302 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_1:
# 302 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 309 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_0:
# 309 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 312 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_1:
# 312 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 363 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 363 "data/maps/Route103/scripts.pory"
	face_right
	step_end

# 364 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 364 "data/maps/Route103/scripts.pory"
	jump_in_place_left
	step_end

# 426 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 426 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 442 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 442 "data/maps/Route103/scripts.pory"
	jump_2_down
# 442 "data/maps/Route103/scripts.pory"
	walk_down
# 442 "data/maps/Route103/scripts.pory"
	walk_down
# 442 "data/maps/Route103/scripts.pory"
	walk_down
# 442 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 443 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 443 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 443 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 443 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 446 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 446 "data/maps/Route103/scripts.pory"
	jump_2_down
# 446 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 471 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_0:
# 471 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 473 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_1:
# 473 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 483 "data/maps/Route103/scripts.pory"
Route103TouristApproach1_Movement_0:
# 483 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 495 "data/maps/Route103/scripts.pory"
Route103TouristApproach2_Movement_0:
# 495 "data/maps/Route103/scripts.pory"
	walk_up
# 495 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 508 "data/maps/Route103/scripts.pory"
Route103TouristApproach3_Movement_0:
# 508 "data/maps/Route103/scripts.pory"
	walk_up
# 508 "data/maps/Route103/scripts.pory"
	walk_up
# 508 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 563 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_0:
# 563 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
# 563 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 572 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_1:
# 572 "data/maps/Route103/scripts.pory"
	walk_up
# 572 "data/maps/Route103/scripts.pory"
	walk_up
# 572 "data/maps/Route103/scripts.pory"
	walk_up
# 572 "data/maps/Route103/scripts.pory"
	walk_up
# 572 "data/maps/Route103/scripts.pory"
	walk_up
# 572 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 591 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_2:
# 591 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 591 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 591 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 591 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 591 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 591 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 591 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 591 "data/maps/Route103/scripts.pory"
	walk_fast_right
	step_end

# 802 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_0:
# 802 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 802 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 802 "data/maps/Route103/scripts.pory"
	walk_fast_left
	step_end

# 808 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_1:
# 808 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 808 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 808 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 808 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 808 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 808 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 808 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 808 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 808 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 810 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_2:
# 810 "data/maps/Route103/scripts.pory"
	face_right
# 810 "data/maps/Route103/scripts.pory"
	face_down
# 810 "data/maps/Route103/scripts.pory"
	face_right
# 810 "data/maps/Route103/scripts.pory"
	face_down
# 810 "data/maps/Route103/scripts.pory"
	face_right
# 810 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 825 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_3:
# 825 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 825 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 827 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_4:
# 827 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 831 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_5:
# 831 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 831 "data/maps/Route103/scripts.pory"
	face_right
# 831 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 832 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_6:
# 832 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 832 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 835 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_7:
# 835 "data/maps/Route103/scripts.pory"
	jump_down
# 835 "data/maps/Route103/scripts.pory"
	jump_down
	step_end

# 852 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_8:
# 852 "data/maps/Route103/scripts.pory"
	walk_right
# 852 "data/maps/Route103/scripts.pory"
	walk_right
# 852 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 868 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_9:
# 868 "data/maps/Route103/scripts.pory"
	walk_left
# 868 "data/maps/Route103/scripts.pory"
	walk_left
# 868 "data/maps/Route103/scripts.pory"
	walk_left
# 868 "data/maps/Route103/scripts.pory"
	walk_left
# 868 "data/maps/Route103/scripts.pory"
	walk_left
# 868 "data/maps/Route103/scripts.pory"
	walk_left
# 868 "data/maps/Route103/scripts.pory"
	walk_left
# 868 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 900 "data/maps/Route103/scripts.pory"
ConArtistEgg_Movement_0:
# 900 "data/maps/Route103/scripts.pory"
	face_player
# 900 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 945 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_0:
# 945 "data/maps/Route103/scripts.pory"
	walk_right
	step_end

# 952 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_1:
# 952 "data/maps/Route103/scripts.pory"
	walk_right
# 952 "data/maps/Route103/scripts.pory"
	walk_up
# 952 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 957 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_2:
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 957 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 958 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_3:
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 958 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 969 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_4:
# 969 "data/maps/Route103/scripts.pory"
	walk_left
# 969 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 977 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_5:
# 977 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 1025 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_0:
# 1025 "data/maps/Route103/scripts.pory"
	walk_right
# 1025 "data/maps/Route103/scripts.pory"
	walk_down
# 1025 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 1030 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_1:
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1030 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 1031 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_2:
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 1031 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

Route103ConcordBridgeSign_Text_0:
# 273 "data/maps/Route103/scripts.pory"
	.string "East - Concord Bridge\n"
	.string "North - Waterfall Cave.$"

Route103WaterfallCaveSign_Text_0:
# 279 "data/maps/Route103/scripts.pory"
	.string "Waterfall Cave to Route 117.$"

Route103FisherBucket_Text_0:
# 285 "data/maps/Route103/scripts.pory"
	.string "The bucket, which seems meant to store\n"
	.string "catches, is empty.$"

Route103DevonGruntCheckingDriver_Text_0:
# 300 "data/maps/Route103/scripts.pory"
	.string "I'm telling you, sir - Oldale's Warehouse\n"
	.string "is occupied by Rebels.\p"
	.string "Even if we let you through, your stock\n"
	.string "would just get stolen.$"

Route103DevonGruntCheckingDriver_Text_1:
# 303 "data/maps/Route103/scripts.pory"
	.string "Then go do something about it, instead\n"
	.string "of just blocking traffic!$"

Route103DevonDrivercheckedby_Text_0:
# 310 "data/maps/Route103/scripts.pory"
	.string "This is ridiculous. Is this what our\n"
	.string "taxes are being spent in?\p"
	.string "If I don't deliver these goods soon, my\n"
	.string "boss will have my head!$"

Sharpy103_Text_0:
# 330 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 339 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_2:
# 343 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_3:
# 347 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_4:
# 359 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_5:
# 368 "data/maps/Route103/scripts.pory"
	.string "If you two are done, Sharpy and I need\n"
	.string "to go back - it's almost curfew!$"

Sharpy103_Text_6:
# 373 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! We're going to get\n"
	.string "scolded...$"

Sharpy103_Text_7:
# 381 "data/maps/Route103/scripts.pory"
	.string "Well... I guess you won't be joining us\n"
	.string "after all... unless...$"

Sharpy103_Text_8:
# 386 "data/maps/Route103/scripts.pory"
	.string "Unless you change your mind! In which\n"
	.string "case, we'll be waiting at Petalburg's\l"
	.string "Dojo!$"

Sharpy103_Text_9:
# 392 "data/maps/Route103/scripts.pory"
	.string "It's the big, old-fashioned wooden\n"
	.string "building - can't miss it!\p"
	.string "So, if you want to help us save Hoenn...$"

Sharpy103_Text_10:
# 398 "data/maps/Route103/scripts.pory"
	.string "You better come!$"

Sharpy103_Text_11:
# 407 "data/maps/Route103/scripts.pory"
	.string "Well, it goes without saying, but you\n"
	.string "passed the test with flying colors!$"

Sharpy103_Text_12:
# 412 "data/maps/Route103/scripts.pory"
	.string "Now you just need to come to Petalburg\n"
	.string "Dojo, and you can join us officially!$"

Sharpy103_Text_13:
# 418 "data/maps/Route103/scripts.pory"
	.string "Well, someone else has the last word on\n"
	.string "accepting recruits... but I doubt he'll\l"
	.string "reject you.$"

Sharpy103_Text_14:
# 424 "data/maps/Route103/scripts.pory"
	.string "We'd love to show you the way, but we\n"
	.string "kinda need to rush back.$"

Sharpy103_Text_15:
# 430 "data/maps/Route103/scripts.pory"
	.string "Yup - so we'll go on ahead! Petalburg\n"
	.string "Dojo is the big, old-fashioned wooden\l"
	.string "building - can't miss it.$"

Sharpy103_Text_16:
# 436 "data/maps/Route103/scripts.pory"
	.string "We'll see you there!$"

Route103TouristApproach0_Text_0:
# 472 "data/maps/Route103/scripts.pory"
	.string "Hey, you!$"

Route103Tourist_Text_0:
# 521 "data/maps/Route103/scripts.pory"
	.string "You're the one who mugged me! You're\n"
	.string "not getting away!$"

Route103Tourist_Text_1:
# 529 "data/maps/Route103/scripts.pory"
	.string "Uhm... I'm sorry. I dropped my glasses,\n"
	.string "and I mistook you for that thief...!$"

Route103Tourist_Text_2:
# 533 "data/maps/Route103/scripts.pory"
	.string "What thief? The one who stole all my\n"
	.string "pokeyen!$"

Route103Tourist_Text_3:
# 535 "data/maps/Route103/scripts.pory"
	.string "And that's not the worse... he threw my\n"
	.string "bike to the mud there, so that I\l"
	.string "couldn't chase him!$"

Route103Tourist_Text_4:
# 538 "data/maps/Route103/scripts.pory"
	.string "I tried to get it out, but it's stuck\n"
	.string "real bad... if only me or my Pokémon had\l"
	.string "enough {COLOR RED}STRENGTH{COLOR DARK_GRAY}!$"

Route103Tourist_Text_5:
# 548 "data/maps/Route103/scripts.pory"
	.string "I'm not leaving without my bike. It\n"
	.string "costed me 1,000,000¥ at Cerulean City's\l"
	.string "Bike Shop!$"

Route103Touristbikepushed_Text_0:
# 565 "data/maps/Route103/scripts.pory"
	.string "Y-you did it! IT'S OUT! Wait, I'll take it\n"
	.string "from here!$"

Route103Touristbikepushed_Text_1:
# 583 "data/maps/Route103/scripts.pory"
	.string "Thank you so much! Here - I got this as\n"
	.string "a souvenir, but you can have it!$"

Route103Touristbikepushed_Text_2:
# 586 "data/maps/Route103/scripts.pory"
	.string "Well, these have been some thrilling\n"
	.string "holidays... but I should catch a boat in\l"
	.string "Slateport, and go back home.$"

Route103Touristbikepushed_Text_3:
# 589 "data/maps/Route103/scripts.pory"
	.string "If you ever make a trip to Cinnabar\n"
	.string "Island, I'll return the favour properly.\l"
	.string "Safe travels now!$"

Route103Touristbikepushed_Text_4:
# 602 "data/maps/Route103/scripts.pory"
	.string "Ooow ow ow... I need a new pair of\n"
	.string "glasses...$"

Route103TouristNotThatWay_Text_0:
# 617 "data/maps/Route103/scripts.pory"
	.string "Don't push it from there - you'll get it\n"
	.string "more stuck!$"

Route103VeteranBattle_Text_0:
# 629 "data/maps/Route103/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

Route103VeteranRegister_Text_0:
# 637 "data/maps/Route103/scripts.pory"
	.string "Good job, but don't lower your guard.\p"
	.string "Let's exchange Devon profiles - I'll\n"
	.string "make sure you dont' slack off!$"

Route103VeteranRematch_Text_0:
# 646 "data/maps/Route103/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

Route103ConcordBridgeGuard_Text_0:
# 670 "data/maps/Route103/scripts.pory"
	.string "Due to an increase in rebel activity in\n"
	.string "this area, passage through Concord\l"
	.string "Customs is heavily restricted.$"

Route103ConcordBridgeGuard_Text_1:
# 675 "data/maps/Route103/scripts.pory"
	.string "Hm? Yes?$"

Route103ConcordBridgeGuard_Text_2:
# 677 "data/maps/Route103/scripts.pory"
	.string "I need directions$"

Route103ConcordBridgeGuard_Text_3:
# 677 "data/maps/Route103/scripts.pory"
	.string "How is your day?$"

Route103ConcordBridgeGuard_Text_4:
# 677 "data/maps/Route103/scripts.pory"
	.string "Let's have a battle!$"

Route103ConcordBridgeGuard_Text_5:
# 677 "data/maps/Route103/scripts.pory"
	.string "I found someone suspicious...$"

Route103ConcordBridgeGuard_Text_6:
# 677 "data/maps/Route103/scripts.pory"
	.string "Nevermind$"

Route103ConcordBridgeGuard_Text_7:
# 680 "data/maps/Route103/scripts.pory"
	.string "There is a signpost right next to me...\n"
	.string "if you can't read, you can learn in the\l"
	.string "{COLOR BLUE}Devon Learning Center{COLOR DARK_GRAY} of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}.\p"
	.string "... I'm sorry, that was rather rude. I'm\n"
	.string "just having a rough day.\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_8:
# 686 "data/maps/Route103/scripts.pory"
	.string "Not too exciting - lots of standing\n"
	.string "around.\p"
	.string "We received reports of a prowling\n"
	.string "criminal in the vicinity, and I'm doing\l"
	.string "double shift because of it...\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_9:
# 691 "data/maps/Route103/scripts.pory"
	.string "A battle? An odd request, but it could\n"
	.string "be a fun use of my allotted recess time.\p"
	.string "Let's do it!$"

Route103ConcordBridgeGuard_Text_10:
# 701 "data/maps/Route103/scripts.pory"
	.string "Thank you. That really helped stretch\n"
	.string "the good old battling muscle!$"

Route103ConcordBridgeGuard_Text_11:
# 708 "data/maps/Route103/scripts.pory"
	.string "You don't say...? And he's right behind\n"
	.string "that truck?\p"
	.string "Very well... here's what we'll do. I want\n"
	.string "you to distract him for a bit.\p"
	.string "I'll tell my partner to approach from\n"
	.string "the customs building, and we'll do a\l"
	.string "pince maneuver.\p"
	.string "We're counting on you!$"

Route103ConcordBridgeGuard_Text_12:
# 719 "data/maps/Route103/scripts.pory"
	.string "Be on your way, then - and stay out of\n"
	.string "trouble.$"

Route103ConcordBridgeGuard_Text_13:
# 726 "data/maps/Route103/scripts.pory"
	.string "Quickly, go distract that criminal -\n"
	.string "before he notices something is off!$"

Route103ConcordBridgeGuard_Text_14:
# 729 "data/maps/Route103/scripts.pory"
	.string "I got to thank you for that battle.\p"
	.string "If I get strong enough, maybe they'll\n"
	.string "send me somewhere other than this\l"
	.string "bridge in the boonies.$"

Route103ConcordBridgeGuard_Text_15:
# 733 "data/maps/Route103/scripts.pory"
	.string "Wherever he is now, that con man is not\n"
	.string "our concern anymore.\p"
	.string "He didn't look that dangerous anyway!$"

Route103ConcordConartist_Text_0:
# 754 "data/maps/Route103/scripts.pory"
	.string "Hey kid! Wanna earn some quick and easy\n"
	.string "pokeyen? You look like you could use it!$"

Route103ConcordConartist_Text_1:
# 755 "data/maps/Route103/scripts.pory"
	.string "Yes$"

Route103ConcordConartist_Text_2:
# 755 "data/maps/Route103/scripts.pory"
	.string "No$"

Route103ConcordConartist_Text_3:
# 758 "data/maps/Route103/scripts.pory"
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
# 772 "data/maps/Route103/scripts.pory"
	.string "Eh, scram then. Some of us have work to\n"
	.string "do.$"

Route103ConcordConartist_Text_5:
# 779 "data/maps/Route103/scripts.pory"
	.string "Come on, go distract him! Tell him\n"
	.string "there's a flying Grumpig being him or\l"
	.string "something!\p"
	.string "I don't care how, that's what I'm paying\n"
	.string "you for!\p"
	.string "And no, I'm not into upfront payments,\n"
	.string "thank you. Cash after!$"

Route103ConcordConartist_Text_6:
# 786 "data/maps/Route103/scripts.pory"
	.string "What the hell are you doing? You barely\n"
	.string "distracted him - you got to be more of a\l"
	.string "nuisance!$"

Route103ConcordConartist_Text_7:
# 790 "data/maps/Route103/scripts.pory"
	.string "Hold it right there! You're surrounded!$"

Route103ConcordConartist_Text_8:
# 811 "data/maps/Route103/scripts.pory"
	.string "What the...?$"

Route103ConcordConartist_Text_9:
# 815 "data/maps/Route103/scripts.pory"
	.string "You two-faced bastard - you set me up!\n"
	.string "You're going to get it now!\p"
	.string "No one slips Jimmy McGligar, best\n"
	.string "Pokémon egg seller of Hoenn!$"

Route103ConcordConartist_Text_10:
# 822 "data/maps/Route103/scripts.pory"
	.string "You'll never catch me alive! Outta my\n"
	.string "way!$"

Route103ConcordConartist_Text_11:
# 828 "data/maps/Route103/scripts.pory"
	.string "W-wait, you're unde-...!$"

Route103ConcordConartist_Text_12:
# 834 "data/maps/Route103/scripts.pory"
	.string "SEE YA, LOSERS...!$"

Route103ConcordConartist_Text_13:
# 840 "data/maps/Route103/scripts.pory"
	.string "GRLBGBRLB...!$"

Route103ConcordConartist_Text_14:
# 846 "data/maps/Route103/scripts.pory"
	.string "Such athleticism... he should stop\n"
	.string "conning, and become an acrobat.$"

Route103ConcordConartist_Text_15:
# 850 "data/maps/Route103/scripts.pory"
	.string "Indeed... at any rate, it's not our\n"
	.string "problem any more.$"

Route103ConcordConartist_Text_16:
# 862 "data/maps/Route103/scripts.pory"
	.string "Thank you for your help, civilian! Now we\n"
	.string "can put this long shift to an end.$"

Route103ConcordConartist_Text_17:
# 864 "data/maps/Route103/scripts.pory"
	.string "Here, this is for your trouble.$"

Route103ConcordConartist_Text_18:
# 866 "data/maps/Route103/scripts.pory"
	.string "Received 1000¥!$"

ConArtistEgg_Text_0:
# 901 "data/maps/Route103/scripts.pory"
	.string "Hands off my wares, pal! This egg is\n"
	.string "mine!$"

ConArtistEgg_Text_1:
# 907 "data/maps/Route103/scripts.pory"
	.string "The shady dealer left this egg behind...$"

ConArtistEgg_Text_2:
# 910 "data/maps/Route103/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

RiverFerryGuyUp_Text_0:
# 926 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lad?$"

RiverFerryGuyUp_Text_1:
# 928 "data/maps/Route103/scripts.pory"
	.string "He-he, it's raining Skitties and\n"
	.string "Poochyenas, hey lass?$"

RiverFerryGuyUp_Text_2:
# 933 "data/maps/Route103/scripts.pory"
	.string "Would you like to sail upstream?$"

RiverFerryGuyUp_Text_3:
# 937 "data/maps/Route103/scripts.pory"
	.string "Then hop on!$"

RiverFerryGuyUp_Text_4:
# 954 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're going upstream, so it'll\n"
	.string "be a bit slow.$"

RiverFerryGuyUp_Text_5:
# 976 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back downstream.$"

RiverFerryGuyUp_Text_6:
# 989 "data/maps/Route103/scripts.pory"
	.string "Ah, shame... tell me if you ever do!$"

RiverFerryGuyDown_Text_0:
# 1006 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail\n"
	.string "downstream?$"

RiverFerryGuyDown_Text_1:
# 1027 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're sailing downstream, so\n"
	.string "brace yourself!$"

RiverFerryGuyDown_Text_2:
# 1049 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back upstream.$"

RiverFerryBoat_Text_0:
# 1071 "data/maps/Route103/scripts.pory"
	.string "It's an old boat, but it's well taken\n"
	.string "care of.$"

RiverFerryManNotThatEntry_Text_0:
# 1080 "data/maps/Route103/scripts.pory"
	.string "Not so fast, young one...! If you want to\n"
	.string "board, do it after me.$"

FisherGuruRoute103_Text_0:
# 1098 "data/maps/Route103/scripts.pory"
	.string "Sssh... did you hear that? It's... IT'S\n"
	.string "COMING!$"

FisherGuruRoute103_Text_1:
# 1111 "data/maps/Route103/scripts.pory"
	.string "CRAAAAAAW!!$"

FisherGuruRoute103_Text_2:
# 1117 "data/maps/Route103/scripts.pory"
	.string "AAH, CRAB BASKETS!$"

FisherGuruRoute103_Text_3:
# 1120 "data/maps/Route103/scripts.pory"
	.string "That was the LEGENDARY MUD CRAB of\n"
	.string "Route 103 - I've been looking for it for\l"
	.string "WEEKS!\p"
	.string "But I was so awe-struck... that I could\n"
	.string "not do anything!!$"

FisherGuruRoute103_Text_4:
# 1123 "data/maps/Route103/scripts.pory"
	.string "Still, this can't be a coincidence - you\n"
	.string "both showed up at the same time!!\p"
	.string "HMM... my intuition tells me it saw\n"
	.string "something in you. But then it left\l"
	.string "disappointed.$"

FisherGuruRoute103_Text_5:
# 1127 "data/maps/Route103/scripts.pory"
	.string "But we can fix that. Here, take THIS!$"

FisherGuruRoute103_Text_6:
# 1131 "data/maps/Route103/scripts.pory"
	.string "I want you to take that rod and fish at\n"
	.string "least FIVE SPECIES OF POKÉMON!\p"
	.string "WHY? Because only then will the\n"
	.string "LEGENDARY MUDCRAB judge you as worthy,\l"
	.string "and show itself again!\p"
	.string "Do not question the intuition of Ivan,\n"
	.string "the Legendary Releer - just embrace it,\l"
	.string "and fulfil your destiny!!$"

FisherGuruRoute103_Text_7:
# 1143 "data/maps/Route103/scripts.pory"
	.string "AHOY! How's the FISHING going!?$"

FisherGuruRoute103_Text_8:
# 1145 "data/maps/Route103/scripts.pory"
	.string "About your request...$"

FisherGuruRoute103_Text_9:
# 1145 "data/maps/Route103/scripts.pory"
	.string "Did you see the Mud Crab?$"

FisherGuruRoute103_Text_10:
# 1145 "data/maps/Route103/scripts.pory"
	.string "How's it going?$"

FisherGuruRoute103_Text_11:
# 1145 "data/maps/Route103/scripts.pory"
	.string "It's nothing$"

FisherGuruRoute103_Text_12:
# 1152 "data/maps/Route103/scripts.pory"
	.string "Ah, you've fished at least 5 Pokémon?\n"
	.string "Good, GOOD!\p"
	.string "I'm confident the Legendary Mud Crab\n"
	.string "will acknowledge you and show up.\p"
	.string "Let's wait a bit!$"

FisherGuruRoute103_Text_13:
# 1160 "data/maps/Route103/scripts.pory"
	.string "{PLAYER} and the fisher wait in a\n"
	.string "long, uncomfortable silence...$"

FisherGuruRoute103_Text_14:
# 1164 "data/maps/Route103/scripts.pory"
	.string "Hmm... I should have known. Such a\n"
	.string "measly fishing test...\p"
	.string "Is NOT ENOUGH to make the Mud Crab\n"
	.string "acknowledge you!$"

FisherGuruRoute103_Text_15:
# 1167 "data/maps/Route103/scripts.pory"
	.string "I suppose I've got no choice... here,\n"
	.string "TAKE THIS!$"

FisherGuruRoute103_Text_16:
# 1171 "data/maps/Route103/scripts.pory"
	.string "I want you to use that rod to bring me a\n"
	.string "BIG PEARL!\p"
	.string "If you are a true fisher... you will know\n"
	.string "how.\p"
	.string "Do that, and I'm sure next time the Mud\n"
	.string "Crab will show itself!$"

FisherGuruRoute103_Text_17:
# 1180 "data/maps/Route103/scripts.pory"
	.string "Like I said, I need you to fish 5 species\n"
	.string "of Pokémon!\p"
	.string "If you are the fisher the Mud Crab\n"
	.string "believes you to be, you shouldn't need\l"
	.string "any guidance!$"

FisherGuruRoute103_Text_18:
# 1184 "data/maps/Route103/scripts.pory"
	.string "O-of course I could give it, but that\n"
	.string "would defeat the purpose!$"

FisherGuruRoute103_Text_19:
# 1195 "data/maps/Route103/scripts.pory"
	.string "pearl$"

FisherGuruRoute103_Text_20:
# 1205 "data/maps/Route103/scripts.pory"
	.string "no pearl$"

FisherGuruRoute103_Text_21:
# 1213 "data/maps/Route103/scripts.pory"
	.string "Regrettably, I haven't. Not even the tip\n"
	.string "of that lustruous, star-shaped crown\l"
	.string "of his...\p"
	.string "But don't worry - he won't swim away\n"
	.string "easily.$"

FisherGuruRoute103_Text_22:
# 1217 "data/maps/Route103/scripts.pory"
	.string "They say he is forever waiting for a\n"
	.string "trainer who saved his life during the\l"
	.string "Assault on Route 103.\p"
	.string "Sadly, that trainer died that day. They\n"
	.string "will never meet again...$"

FisherGuruRoute103_Text_23:
# 1222 "data/maps/Route103/scripts.pory"
	.string "In spite of its beastly appearance, the\n"
	.string "Mud Crab is a loyal, tender creature.\l"
	.string "That's why I wish to catch him, and help\l"
	.string "him heal!$"

FisherGuruRoute103_Text_24:
# 1229 "data/maps/Route103/scripts.pory"
	.string "Ah, well, aside from the Mud Crab\n"
	.string "business... not very good, I must say.$"

FisherGuruRoute103_Text_25:
# 1232 "data/maps/Route103/scripts.pory"
	.string "The sea is poisoned, the rivers are\n"
	.string "muddy...\p"
	.string "Most of my buddies have moved up north.$"

FisherGuruRoute103_Text_26:
# 1236 "data/maps/Route103/scripts.pory"
	.string "But me, I like the challenge!$"

FisherGuruRoute103_Text_27:
# 1243 "data/maps/Route103/scripts.pory"
	.string "Then don't distract me! Does it look\n"
	.string "like I'm doing nothing here!?$"

FisherGuruRoute103_Text_28:
# 1246 "data/maps/Route103/scripts.pory"
	.string "... don't answer that.$"

MoveTutorSign_Text_0:
# 1260 "data/maps/Route103/scripts.pory"
	.string "Move Tutor Colton's House$"

Fishercallsfornumber_Text_0:
# 1268 "data/maps/Route103/scripts.pory"
	.string "Wait - add me on Devon Net! We must\n"
	.string "keep in touch about this!$"

Sharpy103_Outro::
# 462 "data/maps/Route103/scripts.pory"
	.string "Heh... you're a soldier alright...!$"

Tourist103_Outro::
# 556 "data/maps/Route103/scripts.pory"
	.string "Wait a minute... yeah, you're not that \nthief. Sorry!$"

Veteran103_Intro::
# 652 "data/maps/Route103/scripts.pory"
	.string "They told me I'm too old to enlist...  but \nI'm stronger than you young'uns!\pI'll show you!$"

Veteran103_Outro::
# 655 "data/maps/Route103/scripts.pory"
	.string "Grr... you won the battle, but\n not the war!$"

Veteran103_Intro2::
# 658 "data/maps/Route103/scripts.pory"
	.string "There you are - I've been preparing\n my counterattack! CHAAARGE!$"

Veteran103_Outro2::
# 661 "data/maps/Route103/scripts.pory"
	.string "... I surrender. Again.$"

DevonGuard103_Outro::
# 744 "data/maps/Route103/scripts.pory"
	.string "That could have gone better...$"

ShadyDealer103_Outro::
# 891 "data/maps/Route103/scripts.pory"
	.string "I... I-I'm not going back to jail!$"
