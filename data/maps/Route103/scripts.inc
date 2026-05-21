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
# 211 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103Weather
	.byte 0


Route103Weather::
# 215 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 0, Route103Shade
# 216 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 1, Route103Rain1
# 217 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 2, Route103Rain2
# 218 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_ROUTE103_WEATHER, 3, Route103EndRain
# 220 "data/maps/Route103/scripts.pory"
	release
	return


Route103Shade::
# 224 "data/maps/Route103/scripts.pory"
	setweather WEATHER_SHADE
	return


Route103Rain1::
# 228 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 229 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 2
	return


Route103Rain2::
# 233 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 234 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 3
	return


Route103EndRain::
# 239 "data/maps/Route103/scripts.pory"
	setweather WEATHER_RAIN
# 240 "data/maps/Route103/scripts.pory"
	setvar VAR_ROUTE103_WEATHER, 0
	return


Sharpy103::
# 244 "data/maps/Route103/scripts.pory"
	lockall
# 245 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 246 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 247 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 248 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 250 "data/maps/Route103/scripts.pory"
	special DoTVShow
# 252 "data/maps/Route103/scripts.pory"
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 260 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 275 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 276 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 277 "data/maps/Route103/scripts.pory"
	addobject 25
# 278 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 4
# 279 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 280 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 281 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 282 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 283 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 284 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 286 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 287 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 288 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_1
# 289 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_2
# 290 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 291 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 292 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 293 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 295 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 296 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 297 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 298 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 300 "data/maps/Route103/scripts.pory"
	goto_if_set saidnotosharpyinoldale, Sharpy103_8
# 328 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 329 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 330 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 331 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_3
# 332 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 334 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 335 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 336 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 337 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 339 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_1
# 340 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 341 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 342 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 343 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 346 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 347 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 348 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 349 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 352 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_4
# 353 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 354 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 355 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 356 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_15
# 359 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 360 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 361 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 362 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_16
Sharpy103_7:
# 366 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 367 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 368 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_5
# 369 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_6
# 370 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 371 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 372 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_7
# 373 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 375 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 376 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 377 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 378 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 379 "data/maps/Route103/scripts.pory"
	releaseall
# 380 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
	return

Sharpy103_2:
# 254 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 255 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 256 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 257 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 258 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 262 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 263 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 264 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 265 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 266 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 267 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 268 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 269 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 270 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 271 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 272 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 273 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4

Sharpy103_8:
# 303 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 304 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 305 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 306 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 308 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 309 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 310 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 311 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 314 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 315 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 316 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 317 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 320 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 321 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 322 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 323 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_10
	goto Sharpy103_7


Route103TouristApproach0::
# 389 "data/maps/Route103/scripts.pory"
	lockall
# 390 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 391 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 392 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 393 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 394 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 395 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach1::
# 399 "data/maps/Route103/scripts.pory"
	lockall
# 400 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 401 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 402 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 403 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 404 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach1_Movement_0
# 405 "data/maps/Route103/scripts.pory"
	waitmovement
# 406 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 407 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach2::
# 411 "data/maps/Route103/scripts.pory"
	lockall
# 412 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 413 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 414 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 415 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 416 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach2_Movement_0
# 417 "data/maps/Route103/scripts.pory"
	waitmovement
# 418 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 419 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach3::
# 423 "data/maps/Route103/scripts.pory"
	lockall
# 424 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 425 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 426 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 427 "data/maps/Route103/scripts.pory"
	waitmovement
# 428 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 429 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach3_Movement_0
# 430 "data/maps/Route103/scripts.pory"
	waitmovement
# 431 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 432 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103Tourist::
# 436 "data/maps/Route103/scripts.pory"
	lockall
# 437 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 438 "data/maps/Route103/scripts.pory"
touristafterapproach:
# 439 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 0
	goto_if_eq Route103Tourist_2
Route103Tourist_1:
# 463 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 1
	goto_if_eq Route103Tourist_5
Route103Tourist_4:
# 470 "data/maps/Route103/scripts.pory"
finishtouristscript:
# 471 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103Tourist_2:
# 441 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 442 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_0
# 443 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_TOURIST_103, Tourist103_Outro
# 446 "data/maps/Route103/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 448 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_1
# 449 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 450 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 451 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 452 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_2
# 453 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_1
# 454 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_3
# 456 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 457 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_4
# 459 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 1
# 460 "data/maps/Route103/scripts.pory"
	goto finishtouristscript
	goto Route103Tourist_1

Route103Tourist_5:
# 465 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 466 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 467 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_5
	goto Route103Tourist_4


Route103Touristbikepushed::
# 480 "data/maps/Route103/scripts.pory"
	lockall
# 481 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 482 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 483 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 484 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_0
# 485 "data/maps/Route103/scripts.pory"
	closemessage
# 487 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 488 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 489 "data/maps/Route103/scripts.pory"
	playse SE_BIKE_HOP
# 490 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 491 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route103Touristbikepushed_Movement_1
# 492 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 493 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 494 "data/maps/Route103/scripts.pory"
	setobjectxy 27, 0, 0
# 495 "data/maps/Route103/scripts.pory"
	setobjectxy 26, 0, 0
# 496 "data/maps/Route103/scripts.pory"
	setflag touristhelped
# 497 "data/maps/Route103/scripts.pory"
	clearflag touristonbike
# 498 "data/maps/Route103/scripts.pory"
	addobject 29
# 499 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 22, 9
# 500 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_1
# 501 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 502 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_1
# 503 "data/maps/Route103/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 504 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_3
# 505 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_2
# 507 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_4
# 508 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_3
# 510 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103Touristbikepushed_Movement_2
# 511 "data/maps/Route103/scripts.pory"
	waitmovement
# 513 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 514 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 515 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 516 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 517 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 518 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 519 "data/maps/Route103/scripts.pory"
	waitse
# 521 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_4
# 523 "data/maps/Route103/scripts.pory"
	removeobject 29
# 524 "data/maps/Route103/scripts.pory"
	setflag touristonbike
# 526 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 2
# 527 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103TouristNotThatWay::
# 532 "data/maps/Route103/scripts.pory"
	lockall
# 533 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 534 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 535 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 536 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristNotThatWay_Text_0
# 537 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach1_Movement_0
# 538 "data/maps/Route103/scripts.pory"
	waitmovement
# 539 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103VeteranBattle::
# 545 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, Route103VeteranRegister
# 546 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 547 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 548 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranBattle_Text_0
# 549 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRegister::
# 554 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 555 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 556 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_0
# 558 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 559 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRematch::
# 564 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro
# 565 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRematch_Text_0
	end


Route103ConcordBridgeGuard::
# 581 "data/maps/Route103/scripts.pory"
	lockall
# 582 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 583 "data/maps/Route103/scripts.pory"
	applymovement 30, Sharpy103_Movement_0
# 585 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordBridgeGuard_2
Route103ConcordBridgeGuard_1:
# 589 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_7
Route103ConcordBridgeGuard_4:
# 633 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route103ConcordBridgeGuard_12
Route103ConcordBridgeGuard_11:
# 638 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_20
Route103ConcordBridgeGuard_17:
# 642 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_29
Route103ConcordBridgeGuard_27:
# 646 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_38
Route103ConcordBridgeGuard_35:
# 651 "data/maps/Route103/scripts.pory"
finishguardscript:
# 652 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordBridgeGuard_2:
# 586 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_0
	goto Route103ConcordBridgeGuard_1

Route103ConcordBridgeGuard_5:
# 591 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_1
# 592 "data/maps/Route103/scripts.pory"
guarddistractchoice:
# 593 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordBridgeGuard_Text_2, Route103ConcordBridgeGuard_Text_3, Route103ConcordBridgeGuard_Text_4, Route103ConcordBridgeGuard_Text_5, Route103ConcordBridgeGuard_Text_6
# 595 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordBridgeGuard_15
Route103ConcordBridgeGuard_14:
# 601 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordBridgeGuard_25
Route103ConcordBridgeGuard_24:
# 606 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route103ConcordBridgeGuard_33
Route103ConcordBridgeGuard_32:
# 622 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route103ConcordBridgeGuard_42
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_6:
# 589 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_5
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_7:
# 589 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordBridgeGuard_6
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_12:
# 634 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_11

Route103ConcordBridgeGuard_15:
# 596 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_7
# 599 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_14

Route103ConcordBridgeGuard_18:
# 640 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_12
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_19:
# 638 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_18
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_20:
# 638 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_19
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_25:
# 602 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_8
# 604 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_24

Route103ConcordBridgeGuard_28:
# 643 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_13
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_29:
# 642 "data/maps/Route103/scripts.pory"
	goto_if_set helpedconcordconartist, Route103ConcordBridgeGuard_28
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_33:
# 607 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_9
# 609 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_DEVONGUARD_103, DevonGuard103_Outro
# 610 "data/maps/Route103/scripts.pory"
	setflag helpedconcordconartist
# 612 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 615 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 617 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_10
# 618 "data/maps/Route103/scripts.pory"
	clearflag conartistrewardsinoldale
# 619 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_32

Route103ConcordBridgeGuard_36:
# 647 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_14
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_37:
# 646 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, Route103ConcordBridgeGuard_36
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_38:
# 646 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_37
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_42:
# 623 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_11
# 626 "data/maps/Route103/scripts.pory"
	setflag betrayedconcordconartist
# 627 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_4


Route103ConcordConartist::
# 662 "data/maps/Route103/scripts.pory"
	lockall
# 663 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 664 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_0
# 666 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordConartist_2
Route103ConcordConartist_1:
# 688 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_7
Route103ConcordConartist_4:
# 693 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_17
Route103ConcordConartist_14:
# 793 "data/maps/Route103/scripts.pory"
finishconartistscript:
# 794 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordConartist_2:
# 668 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_0
# 669 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 671 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordConartist_12
Route103ConcordConartist_11:
# 683 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordConartist_21
	goto Route103ConcordConartist_1

Route103ConcordConartist_5:
# 690 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_6:
# 688 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_7:
# 688 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordConartist_6
	goto Route103ConcordConartist_4

Route103ConcordConartist_12:
# 672 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_3
# 679 "data/maps/Route103/scripts.pory"
	setflag conartistaskeddistract
# 680 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_11

Route103ConcordConartist_15:
# 695 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 696 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_6
# 699 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 700 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_7
# 706 "data/maps/Route103/scripts.pory"
	clearflag devonsvsconartist
# 707 "data/maps/Route103/scripts.pory"
	addobject 31
# 708 "data/maps/Route103/scripts.pory"
	setobjectxy 31, 42, 37
# 709 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 710 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 711 "data/maps/Route103/scripts.pory"
	waitmovement
# 712 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_0
# 713 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 716 "data/maps/Route103/scripts.pory"
	addobject 32
# 717 "data/maps/Route103/scripts.pory"
	setobjectxy 32, 30, 39
# 718 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_1
# 720 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_2
# 721 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_8
# 723 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_0
# 725 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_9
# 728 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHADYDEALER_103, ShadyDealer103_Outro
# 730 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_3
# 731 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_10
# 733 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 734 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ConcordConartist_Movement_4
# 736 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_5
# 737 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_11
# 738 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 739 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 740 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_6
# 741 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_7
# 742 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_12
# 743 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_8
# 744 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 745 "data/maps/Route103/scripts.pory"
	waitse
# 746 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 747 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_13
# 751 "data/maps/Route103/scripts.pory"
	waitmovement
# 755 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_3
# 757 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_14
# 759 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_3
# 761 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_15
# 763 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_9
# 764 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_9
# 765 "data/maps/Route103/scripts.pory"
	waitmovement
# 766 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 767 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 768 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103TouristApproach1_Movement_0
# 769 "data/maps/Route103/scripts.pory"
	waitmovement
# 770 "data/maps/Route103/scripts.pory"
	removeobject 31
# 771 "data/maps/Route103/scripts.pory"
	waitmovement
# 773 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_16
# 774 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 775 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_17
# 776 "data/maps/Route103/scripts.pory"
	playse SE_SHOP
# 777 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_18
# 779 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_10
# 780 "data/maps/Route103/scripts.pory"
	waitmovement
# 782 "data/maps/Route103/scripts.pory"
	waitmovement
# 784 "data/maps/Route103/scripts.pory"
	removeobject 28
# 786 "data/maps/Route103/scripts.pory"
	removeobject 32
# 787 "data/maps/Route103/scripts.pory"
	setflag devonsvsconartist
# 788 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 789 "data/maps/Route103/scripts.pory"
	clearflag devonbridgeguardgoestoconartist
# 790 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
# 791 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_14

Route103ConcordConartist_16:
# 693 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_15
	goto Route103ConcordConartist_14

Route103ConcordConartist_17:
# 693 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordConartist_16
	goto Route103ConcordConartist_14

Route103ConcordConartist_21:
# 684 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_4
# 685 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_4
	goto Route103ConcordConartist_1


ConArtistEgg::
# 803 "data/maps/Route103/scripts.pory"
	lockall
# 804 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 805 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, ConArtistEgg_2
ConArtistEgg_1:
# 811 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, ConArtistEgg_4
	return

ConArtistEgg_2:
# 806 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_0
# 807 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_0
# 808 "data/maps/Route103/scripts.pory"
	releaseall
# 809 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_4
	goto ConArtistEgg_1

ConArtistEgg_4:
# 813 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_1
# 814 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 815 "data/maps/Route103/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 816 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_2
# 817 "data/maps/Route103/scripts.pory"
	removeobject 33
# 818 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 819 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryGuyUp::
# 826 "data/maps/Route103/scripts.pory"
	lockall
# 827 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 828 "data/maps/Route103/scripts.pory"
	applymovement 34, Sharpy103_Movement_0
# 829 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
# 830 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 832 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyUp_2
RiverFerryGuyUp_1:
# 882 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyUp_5
RiverFerryGuyUp_4:
# 886 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyUp_2:
# 833 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
# 834 "data/maps/Route103/scripts.pory"
	removeobject 36
# 835 "data/maps/Route103/scripts.pory"
	removeobject 37
# 836 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 837 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 839 "data/maps/Route103/scripts.pory"
	hidefollower
# 840 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 841 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_0
# 842 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 843 "data/maps/Route103/scripts.pory"
	removeobject 34
# 844 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 845 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 846 "data/maps/Route103/scripts.pory"
	hideplayer
# 847 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 848 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_1
# 849 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 850 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
# 851 "data/maps/Route103/scripts.pory"
	closemessage
# 852 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 853 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_2
# 854 "data/maps/Route103/scripts.pory"
	applymovement 35, RiverFerryGuyUp_Movement_3
# 855 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 856 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 858 "data/maps/Route103/scripts.pory"
	clearflag ferryman103up
# 859 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103up
# 860 "data/maps/Route103/scripts.pory"
	addobject 36
# 861 "data/maps/Route103/scripts.pory"
	addobject 37
# 863 "data/maps/Route103/scripts.pory"
	showplayer
# 864 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 16
# 865 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 866 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_5
# 867 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 869 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
# 870 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 871 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_6
# 872 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 873 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_4
# 874 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 875 "data/maps/Route103/scripts.pory"
	removeobject 34
# 876 "data/maps/Route103/scripts.pory"
	removeobject 35
# 877 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 878 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
	goto RiverFerryGuyUp_1

RiverFerryGuyUp_5:
# 883 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
	goto RiverFerryGuyUp_4


RiverFerryGuyDown::
# 890 "data/maps/Route103/scripts.pory"
	lockall
# 891 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 892 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_0
# 893 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_0
# 894 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 896 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyDown_2
RiverFerryGuyDown_1:
# 946 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyDown_5
RiverFerryGuyDown_4:
# 950 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyDown_2:
# 897 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
# 898 "data/maps/Route103/scripts.pory"
	removeobject 34
# 899 "data/maps/Route103/scripts.pory"
	removeobject 35
# 900 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 901 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
# 903 "data/maps/Route103/scripts.pory"
	hidefollower
# 904 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 905 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_0
# 906 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 907 "data/maps/Route103/scripts.pory"
	removeobject 37
# 908 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 909 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 910 "data/maps/Route103/scripts.pory"
	hideplayer
# 911 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 912 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_0
# 913 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 914 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_1
# 915 "data/maps/Route103/scripts.pory"
	closemessage
# 916 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 917 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_1
# 918 "data/maps/Route103/scripts.pory"
	applymovement 36, RiverFerryGuyDown_Movement_2
# 919 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 920 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 922 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 923 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 924 "data/maps/Route103/scripts.pory"
	addobject 34
# 925 "data/maps/Route103/scripts.pory"
	addobject 35
# 927 "data/maps/Route103/scripts.pory"
	showplayer
# 928 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 32
# 929 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 930 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_5
# 931 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 933 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
# 934 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_2
# 935 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_6
# 936 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 937 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_4
# 938 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 939 "data/maps/Route103/scripts.pory"
	removeobject 36
# 940 "data/maps/Route103/scripts.pory"
	removeobject 37
# 941 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 942 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	goto RiverFerryGuyDown_1

RiverFerryGuyDown_5:
# 947 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
	goto RiverFerryGuyDown_4


RiverFerryBoat::
# 955 "data/maps/Route103/scripts.pory"
	lockall
# 956 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryBoat_Text_0
# 957 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryManNotThatEntry::
# 961 "data/maps/Route103/scripts.pory"
	lockall
# 962 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 963 "data/maps/Route103/scripts.pory"
	applymovement 34, Sharpy103_Movement_0
# 964 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 965 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryManNotThatEntry_Text_0
# 966 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_6
# 967 "data/maps/Route103/scripts.pory"
	waitmovement
# 968 "data/maps/Route103/scripts.pory"
	releaseall
	return


FisherGuruRoute103::
# 972 "data/maps/Route103/scripts.pory"
	lock
# 973 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_eq FisherGuruRoute103_2
FisherGuruRoute103_1:
# 1019 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 1
	goto_if_eq FisherGuruRoute103_5
# 1019 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_5
# 1019 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 3
	goto_if_eq FisherGuruRoute103_5
FisherGuruRoute103_4:
# 1091 "data/maps/Route103/scripts.pory"
finishfisherscript:
# 1092 "data/maps/Route103/scripts.pory"
	releaseall
	return

FisherGuruRoute103_2:
# 976 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 978 "data/maps/Route103/scripts.pory"
	playse SE_M_SURF
# 979 "data/maps/Route103/scripts.pory"
	waitse
# 980 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 981 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_0
# 982 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_0
# 984 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_1
# 986 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 987 "data/maps/Route103/scripts.pory"
	waitse
# 988 "data/maps/Route103/scripts.pory"
	clearflag mudcrabcrawdaunt
# 989 "data/maps/Route103/scripts.pory"
	addobject 39
# 990 "data/maps/Route103/scripts.pory"
	playse SE_SHINY
# 991 "data/maps/Route103/scripts.pory"
	waitse
# 993 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_CRAWDAUNT, CRY_MODE_ENCOUNTER
# 994 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_1
# 995 "data/maps/Route103/scripts.pory"
	removeobject 39
# 996 "data/maps/Route103/scripts.pory"
	setflag mudcrabcrawdaunt
# 997 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 998 "data/maps/Route103/scripts.pory"
	waitse
# 1000 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_2
# 1001 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1002 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_3
# 1007 "data/maps/Route103/scripts.pory"
	giveitem ITEM_OLD_ROD
# 1009 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_4
# 1012 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 1
# 1013 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_1

FisherGuruRoute103_5:
# 1021 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_5
# 1022 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FisherGuruRoute103_Text_6, FisherGuruRoute103_Text_7, FisherGuruRoute103_Text_8
# 1024 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherGuruRoute103_12
FisherGuruRoute103_11:
# 1075 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FisherGuruRoute103_15
FisherGuruRoute103_14:
# 1084 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FisherGuruRoute103_21
FisherGuruRoute103_20:
# 1085 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_17
# 1088 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_4

FisherGuruRoute103_12:
# 1025 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 1
	goto_if_eq FisherGuruRoute103_18
FisherGuruRoute103_17:
# 1059 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_23
	goto FisherGuruRoute103_11

FisherGuruRoute103_15:
# 1076 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_16
# 1081 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_14

FisherGuruRoute103_18:
# 1026 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_SMOTHQUIL
# 1027 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_26
FisherGuruRoute103_25:
# 1050 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FisherGuruRoute103_31
	goto FisherGuruRoute103_17

FisherGuruRoute103_21:
	goto FisherGuruRoute103_20

FisherGuruRoute103_23:
	checkitem ITEM_BIG_PEARL
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_28
# 1069 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_15
# 1070 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_11

FisherGuruRoute103_26:
# 1028 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_9
# 1030 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_1
# 1032 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1033 "data/maps/Route103/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1034 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_10
# 1035 "data/maps/Route103/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1036 "data/maps/Route103/scripts.pory"
	fadeinbgm 1
# 1038 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_11
# 1040 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1041 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 1043 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_12
# 1046 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 2
# 1047 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_25

FisherGuruRoute103_28:
# 1061 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_14
# 1065 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_11

FisherGuruRoute103_31:
# 1051 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_13
# 1054 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_17


MoveTutorSign::
# 1096 "data/maps/Route103/scripts.pory"
	lock
# 1097 "data/maps/Route103/scripts.pory"
	msgbox MoveTutorSign_Text_0
# 1098 "data/maps/Route103/scripts.pory"
	release
	return


# 246 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 246 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 288 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 288 "data/maps/Route103/scripts.pory"
	face_right
	step_end

# 289 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 289 "data/maps/Route103/scripts.pory"
	jump_in_place_left
	step_end

# 331 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 331 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 352 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 352 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 368 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 368 "data/maps/Route103/scripts.pory"
	jump_2_down
# 368 "data/maps/Route103/scripts.pory"
	walk_down
# 368 "data/maps/Route103/scripts.pory"
	walk_down
# 368 "data/maps/Route103/scripts.pory"
	walk_down
# 368 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 369 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_6:
# 369 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 369 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 369 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 372 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_7:
# 372 "data/maps/Route103/scripts.pory"
	jump_2_down
# 372 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 372 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 372 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 372 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 372 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 372 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 372 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 392 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_0:
# 392 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 404 "data/maps/Route103/scripts.pory"
Route103TouristApproach1_Movement_0:
# 404 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 416 "data/maps/Route103/scripts.pory"
Route103TouristApproach2_Movement_0:
# 416 "data/maps/Route103/scripts.pory"
	walk_up
# 416 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 429 "data/maps/Route103/scripts.pory"
Route103TouristApproach3_Movement_0:
# 429 "data/maps/Route103/scripts.pory"
	walk_up
# 429 "data/maps/Route103/scripts.pory"
	walk_up
# 429 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 482 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_0:
# 482 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
# 482 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 491 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_1:
# 491 "data/maps/Route103/scripts.pory"
	walk_up
# 491 "data/maps/Route103/scripts.pory"
	walk_up
# 491 "data/maps/Route103/scripts.pory"
	walk_up
# 491 "data/maps/Route103/scripts.pory"
	walk_up
# 491 "data/maps/Route103/scripts.pory"
	walk_up
# 491 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 510 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_2:
# 510 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 510 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 510 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 510 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 510 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 510 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 510 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 510 "data/maps/Route103/scripts.pory"
	walk_fast_right
	step_end

# 712 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_0:
# 712 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 712 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 712 "data/maps/Route103/scripts.pory"
	walk_fast_left
	step_end

# 718 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_1:
# 718 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 720 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_2:
# 720 "data/maps/Route103/scripts.pory"
	face_right
# 720 "data/maps/Route103/scripts.pory"
	face_down
# 720 "data/maps/Route103/scripts.pory"
	face_right
# 720 "data/maps/Route103/scripts.pory"
	face_down
# 720 "data/maps/Route103/scripts.pory"
	face_right
# 720 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 730 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_3:
# 730 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 734 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_4:
# 734 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 734 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 736 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_5:
# 736 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 740 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_6:
# 740 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 740 "data/maps/Route103/scripts.pory"
	face_right
# 740 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 741 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_7:
# 741 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 741 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 743 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_8:
# 743 "data/maps/Route103/scripts.pory"
	jump_down
# 743 "data/maps/Route103/scripts.pory"
	jump_down
	step_end

# 763 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_9:
# 763 "data/maps/Route103/scripts.pory"
	walk_right
# 763 "data/maps/Route103/scripts.pory"
	walk_right
# 763 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 779 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_10:
# 779 "data/maps/Route103/scripts.pory"
	walk_left
# 779 "data/maps/Route103/scripts.pory"
	walk_left
# 779 "data/maps/Route103/scripts.pory"
	walk_left
# 779 "data/maps/Route103/scripts.pory"
	walk_left
# 779 "data/maps/Route103/scripts.pory"
	walk_left
# 779 "data/maps/Route103/scripts.pory"
	walk_left
# 779 "data/maps/Route103/scripts.pory"
	walk_left
# 779 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 841 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_0:
# 841 "data/maps/Route103/scripts.pory"
	walk_right
	step_end

# 848 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_1:
# 848 "data/maps/Route103/scripts.pory"
	walk_right
# 848 "data/maps/Route103/scripts.pory"
	walk_up
# 848 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 853 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_2:
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 853 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 854 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_3:
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 854 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 865 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_4:
# 865 "data/maps/Route103/scripts.pory"
	walk_left
# 865 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 866 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_5:
# 866 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 871 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_6:
# 871 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 912 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_0:
# 912 "data/maps/Route103/scripts.pory"
	walk_right
# 912 "data/maps/Route103/scripts.pory"
	walk_down
# 912 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 917 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_1:
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 917 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 918 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_2:
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 918 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

Sharpy103_Text_0:
# 255 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 264 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_2:
# 268 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_3:
# 272 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_4:
# 284 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_5:
# 293 "data/maps/Route103/scripts.pory"
	.string "If you two are done, Sharpy and I need\n"
	.string "to go back - it's almost curfew!$"

Sharpy103_Text_6:
# 298 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! Norman is going to be\n"
	.string "PISSED...$"

Sharpy103_Text_7:
# 306 "data/maps/Route103/scripts.pory"
	.string "Well... I guess you won't be joining us\n"
	.string "after all... unless...$"

Sharpy103_Text_8:
# 311 "data/maps/Route103/scripts.pory"
	.string "Unless you change your mind! In which\n"
	.string "case, we'll be waiting at Petalburg's\l"
	.string "Dojo!$"

Sharpy103_Text_9:
# 317 "data/maps/Route103/scripts.pory"
	.string "It's the big, old-fashioned wooden\n"
	.string "building - can't miss it!\p"
	.string "So, if you want to help us save Hoenn...$"

Sharpy103_Text_10:
# 323 "data/maps/Route103/scripts.pory"
	.string "You better come!$"

Sharpy103_Text_11:
# 332 "data/maps/Route103/scripts.pory"
	.string "Well, it goes without saying, but you\n"
	.string "passed the test with flying colors!$"

Sharpy103_Text_12:
# 337 "data/maps/Route103/scripts.pory"
	.string "Now you just need to come to Petalburg\n"
	.string "Dojo, and you can join us officially!$"

Sharpy103_Text_13:
# 343 "data/maps/Route103/scripts.pory"
	.string "Technically, Norman has the last word\n"
	.string "on accepting recruits... but I doubt\l"
	.string "he'll reject you.$"

Sharpy103_Text_14:
# 349 "data/maps/Route103/scripts.pory"
	.string "We'd love to show you the way, but we\n"
	.string "kinda need to rush back. Norman gets\l"
	.string "very mad when we skip curfew...$"

Sharpy103_Text_15:
# 356 "data/maps/Route103/scripts.pory"
	.string "Yup - so we'll go on ahead! Petalburg\n"
	.string "Dojo is the big, old-fashioned wooden\l"
	.string "building - can't miss it$"

Sharpy103_Text_16:
# 362 "data/maps/Route103/scripts.pory"
	.string "We'll see you there!$"

Route103TouristApproach0_Text_0:
# 393 "data/maps/Route103/scripts.pory"
	.string "Hey, you!$"

Route103Tourist_Text_0:
# 442 "data/maps/Route103/scripts.pory"
	.string "You're the one who mugged me! You're\n"
	.string "not getting away!$"

Route103Tourist_Text_1:
# 448 "data/maps/Route103/scripts.pory"
	.string "Uhm... I'm sorry. I dropped my glasses,\n"
	.string "and I mistook you for that thief...!$"

Route103Tourist_Text_2:
# 452 "data/maps/Route103/scripts.pory"
	.string "What thief? The one who stole all my\n"
	.string "pokeyen!$"

Route103Tourist_Text_3:
# 454 "data/maps/Route103/scripts.pory"
	.string "And that's not the worse... he threw my\n"
	.string "bike to the mud there, so that I\l"
	.string "couldn't chase him!$"

Route103Tourist_Text_4:
# 457 "data/maps/Route103/scripts.pory"
	.string "I tried to get it out, but it's stuck\n"
	.string "real bad... if only me or my Pokémon had\l"
	.string "enough {COLOR RED}STRENGTH{COLOR DARK_GRAY}!$"

Route103Tourist_Text_5:
# 467 "data/maps/Route103/scripts.pory"
	.string "I'm not leaving without my bike. It\n"
	.string "costed me 1,000,000¥ at Cerulean City's\l"
	.string "Bike Shop!$"

Route103Touristbikepushed_Text_0:
# 484 "data/maps/Route103/scripts.pory"
	.string "Y-you did it! IT'S OUT! Wait, I'll take it\n"
	.string "from here!$"

Route103Touristbikepushed_Text_1:
# 502 "data/maps/Route103/scripts.pory"
	.string "Thank you so much! Here - I got this as\n"
	.string "a souvenir, but you can have it!$"

Route103Touristbikepushed_Text_2:
# 505 "data/maps/Route103/scripts.pory"
	.string "Well, these have been some thrilling\n"
	.string "holidays... but I should catch a boat in\l"
	.string "Slateport, and go back home.$"

Route103Touristbikepushed_Text_3:
# 508 "data/maps/Route103/scripts.pory"
	.string "If you ever make a trip to Cinnabar\n"
	.string "Island, I'll return the favour properly.\l"
	.string "Safe travels now!$"

Route103Touristbikepushed_Text_4:
# 521 "data/maps/Route103/scripts.pory"
	.string "Ooow ow ow... I need a new pair of\n"
	.string "glasses...$"

Route103TouristNotThatWay_Text_0:
# 536 "data/maps/Route103/scripts.pory"
	.string "Don't push it from there - you'll get it\n"
	.string "more stuck!$"

Route103VeteranBattle_Text_0:
# 548 "data/maps/Route103/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

Route103VeteranRegister_Text_0:
# 556 "data/maps/Route103/scripts.pory"
	.string "But you shouldn't lower your guard.\n"
	.string "Let's exchange Devon profiles - I'll\l"
	.string "make sure you dont' slack off!$"

Route103VeteranRematch_Text_0:
# 565 "data/maps/Route103/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

Route103ConcordBridgeGuard_Text_0:
# 586 "data/maps/Route103/scripts.pory"
	.string "Due to an increase in rebel activity in\n"
	.string "this area, passage through Concord\l"
	.string "Customs is heavily restricted.$"

Route103ConcordBridgeGuard_Text_1:
# 591 "data/maps/Route103/scripts.pory"
	.string "Hm? Yes?$"

Route103ConcordBridgeGuard_Text_2:
# 593 "data/maps/Route103/scripts.pory"
	.string "I need directions$"

Route103ConcordBridgeGuard_Text_3:
# 593 "data/maps/Route103/scripts.pory"
	.string "How is your day?$"

Route103ConcordBridgeGuard_Text_4:
# 593 "data/maps/Route103/scripts.pory"
	.string "Let's have a battle!$"

Route103ConcordBridgeGuard_Text_5:
# 593 "data/maps/Route103/scripts.pory"
	.string "I found someone suspicious...$"

Route103ConcordBridgeGuard_Text_6:
# 593 "data/maps/Route103/scripts.pory"
	.string "Nevermind$"

Route103ConcordBridgeGuard_Text_7:
# 596 "data/maps/Route103/scripts.pory"
	.string "There is a signpost right next to me...\n"
	.string "if you can't read, you can learn in the\l"
	.string "{COLOR BLUE}Devon Learning Center{COLOR DARK_GRAY} of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}.\p"
	.string "... I'm sorry, that was rather rude. I'm\n"
	.string "just having a rough day.\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_8:
# 602 "data/maps/Route103/scripts.pory"
	.string "Not too exciting - lots of standing\n"
	.string "around.\p"
	.string "We received reports of a prowling\n"
	.string "criminal in the vicinity, and I'm doing\l"
	.string "double shift because of it...\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_9:
# 607 "data/maps/Route103/scripts.pory"
	.string "A battle? An odd request, but it could\n"
	.string "be a fun use of my allotted recess time.\p"
	.string "Let's do it!$"

Route103ConcordBridgeGuard_Text_10:
# 617 "data/maps/Route103/scripts.pory"
	.string "Thank you. That really helped stretch\n"
	.string "the good old battling muscle!$"

Route103ConcordBridgeGuard_Text_11:
# 623 "data/maps/Route103/scripts.pory"
	.string "You don't say...? And he's right behind\n"
	.string "that truck?\p"
	.string "Very well... here's what we'll do. I want\n"
	.string "you to distract him for a bit.\p"
	.string "I'll tell my partner to approach from\n"
	.string "the customs building, and we'll do a\l"
	.string "pince maneuver.\p"
	.string "We're counting on you!$"

Route103ConcordBridgeGuard_Text_12:
# 640 "data/maps/Route103/scripts.pory"
	.string "Quickly, go distract that criminal -\n"
	.string "before he notices something is off!$"

Route103ConcordBridgeGuard_Text_13:
# 643 "data/maps/Route103/scripts.pory"
	.string "I got to thank you for that battle.\p"
	.string "If I get strong enough, maybe they'll\n"
	.string "send me somewhere other than this\l"
	.string "bridge in the boonies.$"

Route103ConcordBridgeGuard_Text_14:
# 647 "data/maps/Route103/scripts.pory"
	.string "Wherever he is now, that con man is not\n"
	.string "our concern anymore.\p"
	.string "He didn't look that dangerous anyway!$"

Route103ConcordConartist_Text_0:
# 668 "data/maps/Route103/scripts.pory"
	.string "Hey kid! Wanna earn some quick and easy\n"
	.string "pokeyen? You look like you could use it!$"

Route103ConcordConartist_Text_1:
# 669 "data/maps/Route103/scripts.pory"
	.string "Yes$"

Route103ConcordConartist_Text_2:
# 669 "data/maps/Route103/scripts.pory"
	.string "No$"

Route103ConcordConartist_Text_3:
# 672 "data/maps/Route103/scripts.pory"
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
# 684 "data/maps/Route103/scripts.pory"
	.string "Eh, scram then. Some of us have work to\n"
	.string "do.$"

Route103ConcordConartist_Text_5:
# 690 "data/maps/Route103/scripts.pory"
	.string "Come on, go distract him! I don't care\n"
	.string "how, that's what I'm paying you for!\p"
	.string "And no, I'm not into upfront payments,\n"
	.string "thank you. Cash after!$"

Route103ConcordConartist_Text_6:
# 696 "data/maps/Route103/scripts.pory"
	.string "What the hell are you doing? You barely\n"
	.string "distracted him - you got to be more of a\l"
	.string "nuisance!$"

Route103ConcordConartist_Text_7:
# 700 "data/maps/Route103/scripts.pory"
	.string "Hold it right there! You're surrounded!$"

Route103ConcordConartist_Text_8:
# 721 "data/maps/Route103/scripts.pory"
	.string "What the...?$"

Route103ConcordConartist_Text_9:
# 725 "data/maps/Route103/scripts.pory"
	.string "You two-faced bastard - you set me up!\n"
	.string "You're going to get it now!\p"
	.string "No one slips Jimmy McGligar, best\n"
	.string "Pokémon egg seller of Hoenn!$"

Route103ConcordConartist_Text_10:
# 731 "data/maps/Route103/scripts.pory"
	.string "You'll never catch me alive! Outta my\n"
	.string "way!$"

Route103ConcordConartist_Text_11:
# 737 "data/maps/Route103/scripts.pory"
	.string "W-wait, you're unde-...!$"

Route103ConcordConartist_Text_12:
# 742 "data/maps/Route103/scripts.pory"
	.string "SEE YA, LOSERS...!$"

Route103ConcordConartist_Text_13:
# 747 "data/maps/Route103/scripts.pory"
	.string "GRLBGBRLB...!$"

Route103ConcordConartist_Text_14:
# 757 "data/maps/Route103/scripts.pory"
	.string "Such athleticism... he should stop\n"
	.string "conning, and become an acrobat.$"

Route103ConcordConartist_Text_15:
# 761 "data/maps/Route103/scripts.pory"
	.string "Indeed... at any rate, it's not our\n"
	.string "problem any more.$"

Route103ConcordConartist_Text_16:
# 773 "data/maps/Route103/scripts.pory"
	.string "Thank you for your help, civilian! Now we\n"
	.string "can put this long shift to an end.$"

Route103ConcordConartist_Text_17:
# 775 "data/maps/Route103/scripts.pory"
	.string "Here, this is for your trouble.$"

Route103ConcordConartist_Text_18:
# 777 "data/maps/Route103/scripts.pory"
	.string "Received 1000¥!$"

ConArtistEgg_Text_0:
# 807 "data/maps/Route103/scripts.pory"
	.string "Hands off my wares, pal! This egg is\n"
	.string "mine!$"

ConArtistEgg_Text_1:
# 813 "data/maps/Route103/scripts.pory"
	.string "The shady dealer left this egg behind...$"

ConArtistEgg_Text_2:
# 816 "data/maps/Route103/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

RiverFerryGuyUp_Text_0:
# 829 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail upstream?$"

RiverFerryGuyUp_Text_1:
# 833 "data/maps/Route103/scripts.pory"
	.string "Then hop on!$"

RiverFerryGuyUp_Text_2:
# 850 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're going upstream, so it'll\n"
	.string "be a bit slow.$"

RiverFerryGuyUp_Text_3:
# 870 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back downstream.$"

RiverFerryGuyUp_Text_4:
# 883 "data/maps/Route103/scripts.pory"
	.string "Ah, shame... tell me if you ever do!$"

RiverFerryGuyDown_Text_0:
# 893 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail\n"
	.string "downstream?$"

RiverFerryGuyDown_Text_1:
# 914 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're sailing downstream, so\n"
	.string "brace yourself!$"

RiverFerryGuyDown_Text_2:
# 934 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back upstream.$"

RiverFerryBoat_Text_0:
# 956 "data/maps/Route103/scripts.pory"
	.string "It's an old boat, but it's well taken\n"
	.string "care of.$"

RiverFerryManNotThatEntry_Text_0:
# 965 "data/maps/Route103/scripts.pory"
	.string "Not so fast, young one...! If you want to\n"
	.string "board, do it after me.$"

FisherGuruRoute103_Text_0:
# 982 "data/maps/Route103/scripts.pory"
	.string "Sssh... did you hear that? Something...\n"
	.string "SOMETHING IS COMING!$"

FisherGuruRoute103_Text_1:
# 994 "data/maps/Route103/scripts.pory"
	.string "CRAAAAAAW!!$"

FisherGuruRoute103_Text_2:
# 1000 "data/maps/Route103/scripts.pory"
	.string "AAH, CRAB BASKETS!$"

FisherGuruRoute103_Text_3:
# 1002 "data/maps/Route103/scripts.pory"
	.string "That was the LEGENDARY MUD CRAB of\n"
	.string "Route 103 - I've been looking for it for\l"
	.string "WEEKS!\p"
	.string "But I was so awe-struck... that I could\n"
	.string "not do anything!!\p"
	.string "Still, this can't be a coincidence - you\n"
	.string "both showed up at the same time!!\p"
	.string "HMM... my intuition tells me it saw\n"
	.string "something in you. But then it left\l"
	.string "disappointed.\p"
	.string "But we can fix that. Here, take THIS!$"

FisherGuruRoute103_Text_4:
# 1009 "data/maps/Route103/scripts.pory"
	.string "I want you to take that rod and fish at\n"
	.string "least FIVE SPECIES OF POKÉMON!\p"
	.string "WHY? Because only then will the\n"
	.string "LEGENDARY MUDCRAB judge you as worthy,\l"
	.string "and show itself again!\p"
	.string "Do not question my intuition - just\n"
	.string "embrace it, and fulfil your destiny!!$"

FisherGuruRoute103_Text_5:
# 1021 "data/maps/Route103/scripts.pory"
	.string "AHOY! How's the FISHING going!?$"

FisherGuruRoute103_Text_6:
# 1022 "data/maps/Route103/scripts.pory"
	.string "About your request...$"

FisherGuruRoute103_Text_7:
# 1022 "data/maps/Route103/scripts.pory"
	.string "Did you see the Mud Crab?$"

FisherGuruRoute103_Text_8:
# 1022 "data/maps/Route103/scripts.pory"
	.string "How's it going?$"

FisherGuruRoute103_Text_9:
# 1028 "data/maps/Route103/scripts.pory"
	.string "Ah, you've fished at least 5 Pokémon?\n"
	.string "Good, GOOD!\p"
	.string "I'm confident the Legendary Mud Crab\n"
	.string "will acknowledge you and show up.\p"
	.string "Let's wait a bit!$"

FisherGuruRoute103_Text_10:
# 1034 "data/maps/Route103/scripts.pory"
	.string "You and the fisher wait in a long,\n"
	.string "uncomfortable silence...$"

FisherGuruRoute103_Text_11:
# 1038 "data/maps/Route103/scripts.pory"
	.string "Hmm... I should have known. Such a\n"
	.string "measly fishing test...\p"
	.string "Is NOT ENOUGH to make the Mud Crab\n"
	.string "acknowledge you!\p"
	.string "I suppose I've got no choice... here,\n"
	.string "TAKE THIS!$"

FisherGuruRoute103_Text_12:
# 1043 "data/maps/Route103/scripts.pory"
	.string "I want you to use that rod to bring me a\n"
	.string "BIG PEARL!\p"
	.string "If you are a true fisher... you will know\n"
	.string "how.\p"
	.string "Do that, and I'm sure next time the Mud\n"
	.string "Crab will show itself!$"

FisherGuruRoute103_Text_13:
# 1051 "data/maps/Route103/scripts.pory"
	.string "Like I said, I need you to fish 5 species\n"
	.string "of Pokémon!\p"
	.string "If you are the fisher the Mud Crab\n"
	.string "believes you to be, you shouldn't need\l"
	.string "any guidance!\p"
	.string "O-of course I could give it, but that\n"
	.string "would defeat the purpose!$"

FisherGuruRoute103_Text_14:
# 1061 "data/maps/Route103/scripts.pory"
	.string "pearl$"

FisherGuruRoute103_Text_15:
# 1069 "data/maps/Route103/scripts.pory"
	.string "no pearl$"

FisherGuruRoute103_Text_16:
# 1076 "data/maps/Route103/scripts.pory"
	.string "Regrettably, I haven't. Not even the tip\n"
	.string "of that lustruous, star-shaped crown\l"
	.string "of his...\p"
	.string "But don't worry - he won't swim away\n"
	.string "easily.\p"
	.string "They say he is forever waiting for a\n"
	.string "trainer who saved his life during the\l"
	.string "Assault on Route 103.\p"
	.string "Sadly, that trainer died that day. They\n"
	.string "will never meet again...\p"
	.string "In spite of its beastly appearance, the\n"
	.string "Mud Crab is a loyal, tender creature.\l"
	.string "That's why I wish to catch him, and help\l"
	.string "him heal!$"

FisherGuruRoute103_Text_17:
# 1085 "data/maps/Route103/scripts.pory"
	.string "Ah, well, aside from the Mud Crab\n"
	.string "business... not very good, I must say.\p"
	.string "It's tough being a fisher in these parts\n"
	.string "nowadays. The sea is poisoned, the\l"
	.string "rivers are muddy...\p"
	.string "Most of my buddies have moved up north.\n"
	.string "But me, I like the challenge!$"

MoveTutorSign_Text_0:
# 1097 "data/maps/Route103/scripts.pory"
	.string "Move Tutor Colton's House$"

Sharpy103_Outro::
# 383 "data/maps/Route103/scripts.pory"
	.string "Heh... you're a soldier alright...!$"

Tourist103_Outro::
# 475 "data/maps/Route103/scripts.pory"
	.string "Wait a minute... yeah, you're not that \nthief. Sorry!$"

Veteran103_Intro::
# 571 "data/maps/Route103/scripts.pory"
	.string "They told me I'm too old to enlist...  but I'm\nstronger than you young'uns!\pI'll show you!$"

Veteran103_Outro::
# 574 "data/maps/Route103/scripts.pory"
	.string "Hmpf... not bad...$"

DevonGuard103_Outro::
# 658 "data/maps/Route103/scripts.pory"
	.string "That could have gone better...$"

ShadyDealer103_Outro::
# 798 "data/maps/Route103/scripts.pory"
	.string "I... I-I'm not going back to jail!$"
