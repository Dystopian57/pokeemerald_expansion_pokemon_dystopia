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


Route103IteminMud::
# 244 "data/maps/Route103/scripts.pory"
	lock
# 245 "data/maps/Route103/scripts.pory"
	finditem ITEM_SILK_SCARF
# 248 "data/maps/Route103/scripts.pory"
	removeobject 21
# 249 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonGruntCheckingDriver::
# 252 "data/maps/Route103/scripts.pory"
	lock
# 253 "data/maps/Route103/scripts.pory"
	applymovement 22, Route103DevonGruntCheckingDriver_Movement_0
# 254 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_0
# 256 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonGruntCheckingDriver_Movement_1
# 257 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonGruntCheckingDriver_Text_1
# 258 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103DevonDrivercheckedby::
# 262 "data/maps/Route103/scripts.pory"
	lock
# 263 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_0
# 264 "data/maps/Route103/scripts.pory"
	msgbox Route103DevonDrivercheckedby_Text_0
# 266 "data/maps/Route103/scripts.pory"
	applymovement 23, Route103DevonDrivercheckedby_Movement_1
# 267 "data/maps/Route103/scripts.pory"
	releaseall
	return


Sharpy103::
# 272 "data/maps/Route103/scripts.pory"
	lockall
# 273 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 274 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 275 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 276 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 278 "data/maps/Route103/scripts.pory"
	special DoTVShow
# 280 "data/maps/Route103/scripts.pory"
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 288 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 303 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 304 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 305 "data/maps/Route103/scripts.pory"
	addobject 25
# 306 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 32
# 307 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 308 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 309 "data/maps/Route103/scripts.pory"
	applymovement 24, Route103DevonDrivercheckedby_Movement_0
# 310 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 311 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 312 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 314 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 315 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 316 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 317 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_1
# 318 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 319 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 320 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 321 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 323 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 324 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 325 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 326 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 328 "data/maps/Route103/scripts.pory"
	goto_if_set saidnotosharpyinoldale, Sharpy103_8
# 356 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 357 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 358 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 359 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_2
# 360 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 362 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 363 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 364 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 365 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 367 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 368 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 369 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 370 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 371 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 374 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 375 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 376 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 377 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 380 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_3
# 381 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 382 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 383 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 384 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_15
# 387 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 388 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 389 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 390 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_16
Sharpy103_7:
# 394 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 395 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 396 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_4
# 397 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_5
# 398 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 399 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 400 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_6
# 401 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 403 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 404 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 405 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 406 "data/maps/Route103/scripts.pory"
	setflag DLCclassends
# 407 "data/maps/Route103/scripts.pory"
	clearflag DLCrecesstarts
# 408 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 409 "data/maps/Route103/scripts.pory"
	releaseall
# 410 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
	return

Sharpy103_2:
# 282 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 283 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 284 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 285 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 286 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 290 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 291 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 292 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 293 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 294 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 295 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 296 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 297 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 298 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 299 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 300 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 301 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4

Sharpy103_8:
# 331 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 332 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 333 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 334 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 336 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 337 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 338 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 339 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 342 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 343 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 344 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 345 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 348 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 349 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 350 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 351 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_10
	goto Sharpy103_7


Route103TouristApproach0::
# 419 "data/maps/Route103/scripts.pory"
	lockall
# 420 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 421 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 422 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 423 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 424 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_2
# 425 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach1::
# 429 "data/maps/Route103/scripts.pory"
	lockall
# 430 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 431 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 432 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 433 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 434 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach1_Movement_0
# 435 "data/maps/Route103/scripts.pory"
	waitmovement
# 436 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_2
# 437 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach2::
# 441 "data/maps/Route103/scripts.pory"
	lockall
# 442 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 443 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 444 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 445 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 446 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach2_Movement_0
# 447 "data/maps/Route103/scripts.pory"
	waitmovement
# 448 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_2
# 449 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach3::
# 453 "data/maps/Route103/scripts.pory"
	lockall
# 454 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 455 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 456 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 457 "data/maps/Route103/scripts.pory"
	waitmovement
# 458 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 459 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach3_Movement_0
# 460 "data/maps/Route103/scripts.pory"
	waitmovement
# 461 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_2
# 462 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103Tourist::
# 466 "data/maps/Route103/scripts.pory"
	lockall
# 467 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 468 "data/maps/Route103/scripts.pory"
touristafterapproach:
# 469 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 0
	goto_if_eq Route103Tourist_2
Route103Tourist_1:
# 493 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 1
	goto_if_eq Route103Tourist_5
Route103Tourist_4:
# 500 "data/maps/Route103/scripts.pory"
finishtouristscript:
# 501 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103Tourist_2:
# 471 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 472 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_0
# 473 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_TOURIST_103, Tourist103_Outro
# 476 "data/maps/Route103/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 478 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_1
# 479 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 480 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 481 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 482 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_2
# 483 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 484 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_3
# 486 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 487 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_4
# 489 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 1
# 490 "data/maps/Route103/scripts.pory"
	goto finishtouristscript
	goto Route103Tourist_1

Route103Tourist_5:
# 495 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 496 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103DevonDrivercheckedby_Movement_0
# 497 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_5
	goto Route103Tourist_4


Route103Touristbikepushed::
# 510 "data/maps/Route103/scripts.pory"
	lockall
# 511 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 512 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 513 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 514 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_0
# 515 "data/maps/Route103/scripts.pory"
	closemessage
# 517 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 518 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 519 "data/maps/Route103/scripts.pory"
	playse SE_BIKE_HOP
# 520 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 521 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route103Touristbikepushed_Movement_1
# 522 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 523 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 524 "data/maps/Route103/scripts.pory"
	setobjectxy 27, 0, 0
# 525 "data/maps/Route103/scripts.pory"
	setobjectxy 26, 0, 0
# 526 "data/maps/Route103/scripts.pory"
	setflag touristhelped
# 527 "data/maps/Route103/scripts.pory"
	clearflag touristonbike
# 528 "data/maps/Route103/scripts.pory"
	addobject 29
# 529 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 22, 9
# 530 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 531 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 532 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_1
# 533 "data/maps/Route103/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 534 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_2
# 535 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_2
# 537 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_3
# 538 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_3
# 540 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103Touristbikepushed_Movement_2
# 541 "data/maps/Route103/scripts.pory"
	waitmovement
# 543 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 544 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 545 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 546 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 547 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 548 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 549 "data/maps/Route103/scripts.pory"
	waitse
# 551 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_4
# 553 "data/maps/Route103/scripts.pory"
	removeobject 29
# 554 "data/maps/Route103/scripts.pory"
	setflag touristonbike
# 556 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 2
# 557 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103TouristNotThatWay::
# 562 "data/maps/Route103/scripts.pory"
	lockall
# 563 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 564 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 565 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 566 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristNotThatWay_Text_0
# 567 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach1_Movement_0
# 568 "data/maps/Route103/scripts.pory"
	waitmovement
# 569 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103VeteranBattle::
# 575 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, Route103VeteranRegister
# 576 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 577 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 578 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranBattle_Text_0
# 579 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRegister::
# 584 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 585 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 586 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_0
# 588 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 589 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRematch::
# 594 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro
# 595 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRematch_Text_0
	end


Route103ConcordBridgeGuard::
# 611 "data/maps/Route103/scripts.pory"
	lockall
# 612 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 613 "data/maps/Route103/scripts.pory"
	applymovement 30, Route103DevonDrivercheckedby_Movement_0
# 615 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordBridgeGuard_2
Route103ConcordBridgeGuard_1:
# 619 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_7
Route103ConcordBridgeGuard_4:
# 663 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route103ConcordBridgeGuard_12
Route103ConcordBridgeGuard_11:
# 668 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_20
Route103ConcordBridgeGuard_17:
# 672 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_29
Route103ConcordBridgeGuard_27:
# 676 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_38
Route103ConcordBridgeGuard_35:
# 681 "data/maps/Route103/scripts.pory"
finishguardscript:
# 682 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordBridgeGuard_2:
# 616 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_0
	goto Route103ConcordBridgeGuard_1

Route103ConcordBridgeGuard_5:
# 621 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_1
# 622 "data/maps/Route103/scripts.pory"
guarddistractchoice:
# 623 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordBridgeGuard_Text_2, Route103ConcordBridgeGuard_Text_3, Route103ConcordBridgeGuard_Text_4, Route103ConcordBridgeGuard_Text_5, Route103ConcordBridgeGuard_Text_6
# 625 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordBridgeGuard_15
Route103ConcordBridgeGuard_14:
# 631 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordBridgeGuard_25
Route103ConcordBridgeGuard_24:
# 636 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route103ConcordBridgeGuard_33
Route103ConcordBridgeGuard_32:
# 652 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route103ConcordBridgeGuard_42
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_6:
# 619 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_5
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_7:
# 619 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordBridgeGuard_6
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_12:
# 664 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_11

Route103ConcordBridgeGuard_15:
# 626 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_7
# 629 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_14

Route103ConcordBridgeGuard_18:
# 670 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_12
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_19:
# 668 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_18
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_20:
# 668 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_19
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_25:
# 632 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_8
# 634 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_24

Route103ConcordBridgeGuard_28:
# 673 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_13
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_29:
# 672 "data/maps/Route103/scripts.pory"
	goto_if_set helpedconcordconartist, Route103ConcordBridgeGuard_28
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_33:
# 637 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_9
# 639 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_DEVONGUARD_103, DevonGuard103_Outro
# 640 "data/maps/Route103/scripts.pory"
	setflag helpedconcordconartist
# 642 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 645 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 647 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_10
# 648 "data/maps/Route103/scripts.pory"
	clearflag conartistrewardsinoldale
# 649 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_32

Route103ConcordBridgeGuard_36:
# 677 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_14
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_37:
# 676 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, Route103ConcordBridgeGuard_36
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_38:
# 676 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_37
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_42:
# 653 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_11
# 656 "data/maps/Route103/scripts.pory"
	setflag betrayedconcordconartist
# 657 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_4


Route103ConcordConartist::
# 692 "data/maps/Route103/scripts.pory"
	lockall
# 693 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 694 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 696 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordConartist_2
Route103ConcordConartist_1:
# 721 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_7
Route103ConcordConartist_4:
# 726 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_17
Route103ConcordConartist_14:
# 826 "data/maps/Route103/scripts.pory"
finishconartistscript:
# 827 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordConartist_2:
# 698 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_0
# 699 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 701 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordConartist_12
Route103ConcordConartist_11:
# 715 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordConartist_21
	goto Route103ConcordConartist_1

Route103ConcordConartist_5:
# 723 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_6:
# 721 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_7:
# 721 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordConartist_6
	goto Route103ConcordConartist_4

Route103ConcordConartist_12:
# 702 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_3
# 709 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_3
# 710 "data/maps/Route103/scripts.pory"
	waitmovement 28
# 711 "data/maps/Route103/scripts.pory"
	setflag conartistaskeddistract
# 712 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_11

Route103ConcordConartist_15:
# 728 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 729 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_6
# 732 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 733 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_7
# 739 "data/maps/Route103/scripts.pory"
	clearflag devonsvsconartist
# 740 "data/maps/Route103/scripts.pory"
	addobject 31
# 741 "data/maps/Route103/scripts.pory"
	setobjectxy 31, 42, 37
# 742 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 743 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 744 "data/maps/Route103/scripts.pory"
	waitmovement
# 745 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_0
# 746 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 749 "data/maps/Route103/scripts.pory"
	addobject 32
# 750 "data/maps/Route103/scripts.pory"
	setobjectxy 32, 30, 39
# 751 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_1
# 753 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_2
# 754 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_8
# 756 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonDrivercheckedby_Movement_0
# 758 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_9
# 761 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHADYDEALER_103, ShadyDealer103_Outro
# 763 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103DevonGruntCheckingDriver_Movement_0
# 764 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_10
# 766 "data/maps/Route103/scripts.pory"
	playse SE_M_COMET_PUNCH
# 767 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ConcordConartist_Movement_3
# 769 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_4
# 770 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_11
# 771 "data/maps/Route103/scripts.pory"
	playse SE_M_MEGA_KICK2
# 772 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_2
# 773 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_5
# 774 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_6
# 775 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_12
# 776 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_7
# 777 "data/maps/Route103/scripts.pory"
	playse SE_M_JUMP_KICK
# 778 "data/maps/Route103/scripts.pory"
	waitse
# 779 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 780 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_13
# 784 "data/maps/Route103/scripts.pory"
	waitmovement
# 788 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103DevonGruntCheckingDriver_Movement_0
# 790 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_14
# 792 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103DevonGruntCheckingDriver_Movement_0
# 794 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_15
# 796 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_8
# 797 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_8
# 798 "data/maps/Route103/scripts.pory"
	waitmovement
# 799 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 800 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 801 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103TouristApproach1_Movement_0
# 802 "data/maps/Route103/scripts.pory"
	waitmovement
# 803 "data/maps/Route103/scripts.pory"
	removeobject 31
# 804 "data/maps/Route103/scripts.pory"
	waitmovement
# 805 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 806 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_16
# 808 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_17
# 809 "data/maps/Route103/scripts.pory"
	playse SE_SHOP
# 810 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_18
# 812 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_9
# 813 "data/maps/Route103/scripts.pory"
	waitmovement
# 815 "data/maps/Route103/scripts.pory"
	waitmovement
# 817 "data/maps/Route103/scripts.pory"
	removeobject 28
# 819 "data/maps/Route103/scripts.pory"
	removeobject 32
# 820 "data/maps/Route103/scripts.pory"
	setflag devonsvsconartist
# 821 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 822 "data/maps/Route103/scripts.pory"
	clearflag devonbridgeguardgoestoconartist
# 823 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
# 824 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_14

Route103ConcordConartist_16:
# 726 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_15
	goto Route103ConcordConartist_14

Route103ConcordConartist_17:
# 726 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordConartist_16
	goto Route103ConcordConartist_14

Route103ConcordConartist_21:
# 716 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_4
# 717 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_3
# 718 "data/maps/Route103/scripts.pory"
	waitmovement 28
	goto Route103ConcordConartist_1


ConArtistEgg::
# 836 "data/maps/Route103/scripts.pory"
	lockall
# 837 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 838 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, ConArtistEgg_2
ConArtistEgg_1:
# 845 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, ConArtistEgg_4
	return

ConArtistEgg_2:
# 839 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 840 "data/maps/Route103/scripts.pory"
	applymovement 28, ConArtistEgg_Movement_0
# 841 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_0
# 842 "data/maps/Route103/scripts.pory"
	releaseall
# 843 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_3
	goto ConArtistEgg_1

ConArtistEgg_4:
# 847 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_1
# 848 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 849 "data/maps/Route103/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 850 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_2
# 851 "data/maps/Route103/scripts.pory"
	removeobject 33
# 852 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 853 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryGuyUp::
# 860 "data/maps/Route103/scripts.pory"
	lockall
# 861 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 862 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 863 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
# 864 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 866 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyUp_2
RiverFerryGuyUp_1:
# 916 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyUp_5
RiverFerryGuyUp_4:
# 920 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyUp_2:
# 867 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
# 868 "data/maps/Route103/scripts.pory"
	removeobject 36
# 869 "data/maps/Route103/scripts.pory"
	removeobject 37
# 870 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 871 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 873 "data/maps/Route103/scripts.pory"
	hidefollower
# 874 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 875 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_0
# 876 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 877 "data/maps/Route103/scripts.pory"
	removeobject 34
# 878 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 879 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 880 "data/maps/Route103/scripts.pory"
	hideplayer
# 881 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 882 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_1
# 883 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 884 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
# 885 "data/maps/Route103/scripts.pory"
	closemessage
# 886 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 887 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_2
# 888 "data/maps/Route103/scripts.pory"
	applymovement 35, RiverFerryGuyUp_Movement_3
# 889 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 890 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 892 "data/maps/Route103/scripts.pory"
	clearflag ferryman103up
# 893 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103up
# 894 "data/maps/Route103/scripts.pory"
	addobject 36
# 895 "data/maps/Route103/scripts.pory"
	addobject 37
# 897 "data/maps/Route103/scripts.pory"
	showplayer
# 898 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 16
# 899 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 900 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_1
# 901 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 903 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
# 904 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 905 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 906 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 907 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_3
# 908 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 909 "data/maps/Route103/scripts.pory"
	removeobject 34
# 910 "data/maps/Route103/scripts.pory"
	removeobject 35
# 911 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 912 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
	goto RiverFerryGuyUp_1

RiverFerryGuyUp_5:
# 917 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
	goto RiverFerryGuyUp_4


RiverFerryGuyDown::
# 924 "data/maps/Route103/scripts.pory"
	lockall
# 925 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 926 "data/maps/Route103/scripts.pory"
	applymovement 37, Route103DevonDrivercheckedby_Movement_0
# 927 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_0
# 928 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 930 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyDown_2
RiverFerryGuyDown_1:
# 980 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyDown_5
RiverFerryGuyDown_4:
# 984 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyDown_2:
# 931 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
# 932 "data/maps/Route103/scripts.pory"
	removeobject 34
# 933 "data/maps/Route103/scripts.pory"
	removeobject 35
# 934 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 935 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
# 937 "data/maps/Route103/scripts.pory"
	hidefollower
# 938 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 939 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_0
# 940 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 941 "data/maps/Route103/scripts.pory"
	removeobject 37
# 942 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 943 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 944 "data/maps/Route103/scripts.pory"
	hideplayer
# 945 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 946 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_0
# 947 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 948 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_1
# 949 "data/maps/Route103/scripts.pory"
	closemessage
# 950 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 951 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_1
# 952 "data/maps/Route103/scripts.pory"
	applymovement 36, RiverFerryGuyDown_Movement_2
# 953 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 954 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 956 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 957 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 958 "data/maps/Route103/scripts.pory"
	addobject 34
# 959 "data/maps/Route103/scripts.pory"
	addobject 35
# 961 "data/maps/Route103/scripts.pory"
	showplayer
# 962 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 32
# 963 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 964 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_1
# 965 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 967 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
# 968 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_2
# 969 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 970 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 971 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_3
# 972 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 973 "data/maps/Route103/scripts.pory"
	removeobject 36
# 974 "data/maps/Route103/scripts.pory"
	removeobject 37
# 975 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 976 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	goto RiverFerryGuyDown_1

RiverFerryGuyDown_5:
# 981 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
	goto RiverFerryGuyDown_4


RiverFerryBoat::
# 989 "data/maps/Route103/scripts.pory"
	lockall
# 990 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryBoat_Text_0
# 991 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryManNotThatEntry::
# 995 "data/maps/Route103/scripts.pory"
	lockall
# 996 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 997 "data/maps/Route103/scripts.pory"
	applymovement 34, Route103DevonDrivercheckedby_Movement_0
# 998 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_2
# 999 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryManNotThatEntry_Text_0
# 1000 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1001 "data/maps/Route103/scripts.pory"
	waitmovement
# 1002 "data/maps/Route103/scripts.pory"
	releaseall
	return


FisherGuruRoute103::
# 1006 "data/maps/Route103/scripts.pory"
	lock
# 1007 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_eq FisherGuruRoute103_2
FisherGuruRoute103_1:
# 1053 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 1
	goto_if_eq FisherGuruRoute103_5
# 1053 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_5
# 1053 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 3
	goto_if_eq FisherGuruRoute103_5
FisherGuruRoute103_4:
# 1125 "data/maps/Route103/scripts.pory"
finishfisherscript:
# 1126 "data/maps/Route103/scripts.pory"
	releaseall
	return

FisherGuruRoute103_2:
# 1010 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1012 "data/maps/Route103/scripts.pory"
	playse SE_M_SURF
# 1013 "data/maps/Route103/scripts.pory"
	waitse
# 1014 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 1015 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_0
# 1016 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_0
# 1018 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1020 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1021 "data/maps/Route103/scripts.pory"
	waitse
# 1022 "data/maps/Route103/scripts.pory"
	clearflag mudcrabcrawdaunt
# 1023 "data/maps/Route103/scripts.pory"
	addobject 39
# 1024 "data/maps/Route103/scripts.pory"
	playse SE_SHINY
# 1025 "data/maps/Route103/scripts.pory"
	waitse
# 1027 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_CRAWDAUNT, CRY_MODE_ENCOUNTER
# 1028 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_1
# 1029 "data/maps/Route103/scripts.pory"
	removeobject 39
# 1030 "data/maps/Route103/scripts.pory"
	setflag mudcrabcrawdaunt
# 1031 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 1032 "data/maps/Route103/scripts.pory"
	waitse
# 1034 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_2
# 1035 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonDrivercheckedby_Movement_1
# 1036 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_3
# 1041 "data/maps/Route103/scripts.pory"
	giveitem ITEM_OLD_ROD
# 1043 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_4
# 1046 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 1
# 1047 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_1

FisherGuruRoute103_5:
# 1055 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_5
# 1056 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FisherGuruRoute103_Text_6, FisherGuruRoute103_Text_7, FisherGuruRoute103_Text_8
# 1058 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherGuruRoute103_12
FisherGuruRoute103_11:
# 1109 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FisherGuruRoute103_15
FisherGuruRoute103_14:
# 1118 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FisherGuruRoute103_21
FisherGuruRoute103_20:
# 1119 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_17
# 1122 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_4

FisherGuruRoute103_12:
# 1059 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 1
	goto_if_eq FisherGuruRoute103_18
FisherGuruRoute103_17:
# 1093 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_23
	goto FisherGuruRoute103_11

FisherGuruRoute103_15:
# 1110 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_16
# 1115 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_14

FisherGuruRoute103_18:
# 1060 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_SMOTHQUIL
# 1061 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_26
FisherGuruRoute103_25:
# 1084 "data/maps/Route103/scripts.pory"
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
# 1103 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_15
# 1104 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_11

FisherGuruRoute103_26:
# 1062 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_9
# 1064 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_0
# 1066 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1067 "data/maps/Route103/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1068 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_10
# 1069 "data/maps/Route103/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1070 "data/maps/Route103/scripts.pory"
	fadeinbgm 1
# 1072 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_11
# 1074 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103DevonDrivercheckedby_Movement_1
# 1075 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 1077 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_12
# 1080 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 2
# 1081 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_25

FisherGuruRoute103_28:
# 1095 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_14
# 1099 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_11

FisherGuruRoute103_31:
# 1085 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_13
# 1088 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_17


MoveTutorSign::
# 1130 "data/maps/Route103/scripts.pory"
	lock
# 1131 "data/maps/Route103/scripts.pory"
	msgbox MoveTutorSign_Text_0
# 1132 "data/maps/Route103/scripts.pory"
	release
	return


# 253 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_0:
# 253 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 256 "data/maps/Route103/scripts.pory"
Route103DevonGruntCheckingDriver_Movement_1:
# 256 "data/maps/Route103/scripts.pory"
	walk_in_place_up
	step_end

# 263 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_0:
# 263 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 266 "data/maps/Route103/scripts.pory"
Route103DevonDrivercheckedby_Movement_1:
# 266 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 316 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 316 "data/maps/Route103/scripts.pory"
	face_right
	step_end

# 317 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 317 "data/maps/Route103/scripts.pory"
	jump_in_place_left
	step_end

# 359 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 359 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 380 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 380 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 396 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 396 "data/maps/Route103/scripts.pory"
	jump_2_down
# 396 "data/maps/Route103/scripts.pory"
	walk_down
# 396 "data/maps/Route103/scripts.pory"
	walk_down
# 396 "data/maps/Route103/scripts.pory"
	walk_down
# 396 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 397 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 397 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 397 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 397 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 400 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_6:
# 400 "data/maps/Route103/scripts.pory"
	jump_2_down
# 400 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 400 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 400 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 400 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 400 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 400 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 400 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 422 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_0:
# 422 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 434 "data/maps/Route103/scripts.pory"
Route103TouristApproach1_Movement_0:
# 434 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 446 "data/maps/Route103/scripts.pory"
Route103TouristApproach2_Movement_0:
# 446 "data/maps/Route103/scripts.pory"
	walk_up
# 446 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 459 "data/maps/Route103/scripts.pory"
Route103TouristApproach3_Movement_0:
# 459 "data/maps/Route103/scripts.pory"
	walk_up
# 459 "data/maps/Route103/scripts.pory"
	walk_up
# 459 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 512 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_0:
# 512 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
# 512 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 521 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_1:
# 521 "data/maps/Route103/scripts.pory"
	walk_up
# 521 "data/maps/Route103/scripts.pory"
	walk_up
# 521 "data/maps/Route103/scripts.pory"
	walk_up
# 521 "data/maps/Route103/scripts.pory"
	walk_up
# 521 "data/maps/Route103/scripts.pory"
	walk_up
# 521 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 540 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_2:
# 540 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route103/scripts.pory"
	walk_fast_right
	step_end

# 745 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_0:
# 745 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 745 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 745 "data/maps/Route103/scripts.pory"
	walk_fast_left
	step_end

# 751 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_1:
# 751 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 751 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 751 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 751 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 751 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 751 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 751 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 751 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 751 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 753 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_2:
# 753 "data/maps/Route103/scripts.pory"
	face_right
# 753 "data/maps/Route103/scripts.pory"
	face_down
# 753 "data/maps/Route103/scripts.pory"
	face_right
# 753 "data/maps/Route103/scripts.pory"
	face_down
# 753 "data/maps/Route103/scripts.pory"
	face_right
# 753 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 767 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_3:
# 767 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 767 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 769 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_4:
# 769 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 773 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_5:
# 773 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 773 "data/maps/Route103/scripts.pory"
	face_right
# 773 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 774 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_6:
# 774 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 774 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 776 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_7:
# 776 "data/maps/Route103/scripts.pory"
	jump_down
# 776 "data/maps/Route103/scripts.pory"
	jump_down
	step_end

# 796 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_8:
# 796 "data/maps/Route103/scripts.pory"
	walk_right
# 796 "data/maps/Route103/scripts.pory"
	walk_right
# 796 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 812 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_9:
# 812 "data/maps/Route103/scripts.pory"
	walk_left
# 812 "data/maps/Route103/scripts.pory"
	walk_left
# 812 "data/maps/Route103/scripts.pory"
	walk_left
# 812 "data/maps/Route103/scripts.pory"
	walk_left
# 812 "data/maps/Route103/scripts.pory"
	walk_left
# 812 "data/maps/Route103/scripts.pory"
	walk_left
# 812 "data/maps/Route103/scripts.pory"
	walk_left
# 812 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 840 "data/maps/Route103/scripts.pory"
ConArtistEgg_Movement_0:
# 840 "data/maps/Route103/scripts.pory"
	face_player
# 840 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 875 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_0:
# 875 "data/maps/Route103/scripts.pory"
	walk_right
	step_end

# 882 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_1:
# 882 "data/maps/Route103/scripts.pory"
	walk_right
# 882 "data/maps/Route103/scripts.pory"
	walk_up
# 882 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 887 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_2:
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 887 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 888 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_3:
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 888 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 899 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_4:
# 899 "data/maps/Route103/scripts.pory"
	walk_left
# 899 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 905 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_5:
# 905 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 946 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_0:
# 946 "data/maps/Route103/scripts.pory"
	walk_right
# 946 "data/maps/Route103/scripts.pory"
	walk_down
# 946 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 951 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_1:
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 951 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 952 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_2:
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 952 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

Route103DevonGruntCheckingDriver_Text_0:
# 254 "data/maps/Route103/scripts.pory"
	.string "I'm telling you, sir - Oldale's Warehouse\n"
	.string "is occupied by Rebels.\p"
	.string "Even if we let you through, your stock\n"
	.string "would just get stolen.$"

Route103DevonGruntCheckingDriver_Text_1:
# 257 "data/maps/Route103/scripts.pory"
	.string "Then go do something about it, instead\n"
	.string "of just blocking traffic!$"

Route103DevonDrivercheckedby_Text_0:
# 264 "data/maps/Route103/scripts.pory"
	.string "This is ridiculous. Is this what our\n"
	.string "taxes are being spent in?\p"
	.string "If I don't deliver these goods soon, my\n"
	.string "boss will have my head!$"

Sharpy103_Text_0:
# 283 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 292 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_2:
# 296 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_3:
# 300 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_4:
# 312 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_5:
# 321 "data/maps/Route103/scripts.pory"
	.string "If you two are done, Sharpy and I need\n"
	.string "to go back - it's almost curfew!$"

Sharpy103_Text_6:
# 326 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! Norman is going to be\n"
	.string "PISSED...$"

Sharpy103_Text_7:
# 334 "data/maps/Route103/scripts.pory"
	.string "Well... I guess you won't be joining us\n"
	.string "after all... unless...$"

Sharpy103_Text_8:
# 339 "data/maps/Route103/scripts.pory"
	.string "Unless you change your mind! In which\n"
	.string "case, we'll be waiting at Petalburg's\l"
	.string "Dojo!$"

Sharpy103_Text_9:
# 345 "data/maps/Route103/scripts.pory"
	.string "It's the big, old-fashioned wooden\n"
	.string "building - can't miss it!\p"
	.string "So, if you want to help us save Hoenn...$"

Sharpy103_Text_10:
# 351 "data/maps/Route103/scripts.pory"
	.string "You better come!$"

Sharpy103_Text_11:
# 360 "data/maps/Route103/scripts.pory"
	.string "Well, it goes without saying, but you\n"
	.string "passed the test with flying colors!$"

Sharpy103_Text_12:
# 365 "data/maps/Route103/scripts.pory"
	.string "Now you just need to come to Petalburg\n"
	.string "Dojo, and you can join us officially!$"

Sharpy103_Text_13:
# 371 "data/maps/Route103/scripts.pory"
	.string "Technically, Norman has the last word\n"
	.string "on accepting recruits... but I doubt\l"
	.string "he'll reject you.$"

Sharpy103_Text_14:
# 377 "data/maps/Route103/scripts.pory"
	.string "We'd love to show you the way, but we\n"
	.string "kinda need to rush back. Norman gets\l"
	.string "very mad when we skip curfew...$"

Sharpy103_Text_15:
# 384 "data/maps/Route103/scripts.pory"
	.string "Yup - so we'll go on ahead! Petalburg\n"
	.string "Dojo is the big, old-fashioned wooden\l"
	.string "building - can't miss it$"

Sharpy103_Text_16:
# 390 "data/maps/Route103/scripts.pory"
	.string "We'll see you there!$"

Route103TouristApproach0_Text_0:
# 423 "data/maps/Route103/scripts.pory"
	.string "Hey, you!$"

Route103Tourist_Text_0:
# 472 "data/maps/Route103/scripts.pory"
	.string "You're the one who mugged me! You're\n"
	.string "not getting away!$"

Route103Tourist_Text_1:
# 478 "data/maps/Route103/scripts.pory"
	.string "Uhm... I'm sorry. I dropped my glasses,\n"
	.string "and I mistook you for that thief...!$"

Route103Tourist_Text_2:
# 482 "data/maps/Route103/scripts.pory"
	.string "What thief? The one who stole all my\n"
	.string "pokeyen!$"

Route103Tourist_Text_3:
# 484 "data/maps/Route103/scripts.pory"
	.string "And that's not the worse... he threw my\n"
	.string "bike to the mud there, so that I\l"
	.string "couldn't chase him!$"

Route103Tourist_Text_4:
# 487 "data/maps/Route103/scripts.pory"
	.string "I tried to get it out, but it's stuck\n"
	.string "real bad... if only me or my Pokémon had\l"
	.string "enough {COLOR RED}STRENGTH{COLOR DARK_GRAY}!$"

Route103Tourist_Text_5:
# 497 "data/maps/Route103/scripts.pory"
	.string "I'm not leaving without my bike. It\n"
	.string "costed me 1,000,000¥ at Cerulean City's\l"
	.string "Bike Shop!$"

Route103Touristbikepushed_Text_0:
# 514 "data/maps/Route103/scripts.pory"
	.string "Y-you did it! IT'S OUT! Wait, I'll take it\n"
	.string "from here!$"

Route103Touristbikepushed_Text_1:
# 532 "data/maps/Route103/scripts.pory"
	.string "Thank you so much! Here - I got this as\n"
	.string "a souvenir, but you can have it!$"

Route103Touristbikepushed_Text_2:
# 535 "data/maps/Route103/scripts.pory"
	.string "Well, these have been some thrilling\n"
	.string "holidays... but I should catch a boat in\l"
	.string "Slateport, and go back home.$"

Route103Touristbikepushed_Text_3:
# 538 "data/maps/Route103/scripts.pory"
	.string "If you ever make a trip to Cinnabar\n"
	.string "Island, I'll return the favour properly.\l"
	.string "Safe travels now!$"

Route103Touristbikepushed_Text_4:
# 551 "data/maps/Route103/scripts.pory"
	.string "Ooow ow ow... I need a new pair of\n"
	.string "glasses...$"

Route103TouristNotThatWay_Text_0:
# 566 "data/maps/Route103/scripts.pory"
	.string "Don't push it from there - you'll get it\n"
	.string "more stuck!$"

Route103VeteranBattle_Text_0:
# 578 "data/maps/Route103/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

Route103VeteranRegister_Text_0:
# 586 "data/maps/Route103/scripts.pory"
	.string "But you shouldn't lower your guard.\n"
	.string "Let's exchange Devon profiles - I'll\l"
	.string "make sure you dont' slack off!$"

Route103VeteranRematch_Text_0:
# 595 "data/maps/Route103/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

Route103ConcordBridgeGuard_Text_0:
# 616 "data/maps/Route103/scripts.pory"
	.string "Due to an increase in rebel activity in\n"
	.string "this area, passage through Concord\l"
	.string "Customs is heavily restricted.$"

Route103ConcordBridgeGuard_Text_1:
# 621 "data/maps/Route103/scripts.pory"
	.string "Hm? Yes?$"

Route103ConcordBridgeGuard_Text_2:
# 623 "data/maps/Route103/scripts.pory"
	.string "I need directions$"

Route103ConcordBridgeGuard_Text_3:
# 623 "data/maps/Route103/scripts.pory"
	.string "How is your day?$"

Route103ConcordBridgeGuard_Text_4:
# 623 "data/maps/Route103/scripts.pory"
	.string "Let's have a battle!$"

Route103ConcordBridgeGuard_Text_5:
# 623 "data/maps/Route103/scripts.pory"
	.string "I found someone suspicious...$"

Route103ConcordBridgeGuard_Text_6:
# 623 "data/maps/Route103/scripts.pory"
	.string "Nevermind$"

Route103ConcordBridgeGuard_Text_7:
# 626 "data/maps/Route103/scripts.pory"
	.string "There is a signpost right next to me...\n"
	.string "if you can't read, you can learn in the\l"
	.string "{COLOR BLUE}Devon Learning Center{COLOR DARK_GRAY} of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}.\p"
	.string "... I'm sorry, that was rather rude. I'm\n"
	.string "just having a rough day.\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_8:
# 632 "data/maps/Route103/scripts.pory"
	.string "Not too exciting - lots of standing\n"
	.string "around.\p"
	.string "We received reports of a prowling\n"
	.string "criminal in the vicinity, and I'm doing\l"
	.string "double shift because of it...\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_9:
# 637 "data/maps/Route103/scripts.pory"
	.string "A battle? An odd request, but it could\n"
	.string "be a fun use of my allotted recess time.\p"
	.string "Let's do it!$"

Route103ConcordBridgeGuard_Text_10:
# 647 "data/maps/Route103/scripts.pory"
	.string "Thank you. That really helped stretch\n"
	.string "the good old battling muscle!$"

Route103ConcordBridgeGuard_Text_11:
# 653 "data/maps/Route103/scripts.pory"
	.string "You don't say...? And he's right behind\n"
	.string "that truck?\p"
	.string "Very well... here's what we'll do. I want\n"
	.string "you to distract him for a bit.\p"
	.string "I'll tell my partner to approach from\n"
	.string "the customs building, and we'll do a\l"
	.string "pince maneuver.\p"
	.string "We're counting on you!$"

Route103ConcordBridgeGuard_Text_12:
# 670 "data/maps/Route103/scripts.pory"
	.string "Quickly, go distract that criminal -\n"
	.string "before he notices something is off!$"

Route103ConcordBridgeGuard_Text_13:
# 673 "data/maps/Route103/scripts.pory"
	.string "I got to thank you for that battle.\p"
	.string "If I get strong enough, maybe they'll\n"
	.string "send me somewhere other than this\l"
	.string "bridge in the boonies.$"

Route103ConcordBridgeGuard_Text_14:
# 677 "data/maps/Route103/scripts.pory"
	.string "Wherever he is now, that con man is not\n"
	.string "our concern anymore.\p"
	.string "He didn't look that dangerous anyway!$"

Route103ConcordConartist_Text_0:
# 698 "data/maps/Route103/scripts.pory"
	.string "Hey kid! Wanna earn some quick and easy\n"
	.string "pokeyen? You look like you could use it!$"

Route103ConcordConartist_Text_1:
# 699 "data/maps/Route103/scripts.pory"
	.string "Yes$"

Route103ConcordConartist_Text_2:
# 699 "data/maps/Route103/scripts.pory"
	.string "No$"

Route103ConcordConartist_Text_3:
# 702 "data/maps/Route103/scripts.pory"
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
# 716 "data/maps/Route103/scripts.pory"
	.string "Eh, scram then. Some of us have work to\n"
	.string "do.$"

Route103ConcordConartist_Text_5:
# 723 "data/maps/Route103/scripts.pory"
	.string "Come on, go distract him! I don't care\n"
	.string "how, that's what I'm paying you for!\p"
	.string "And no, I'm not into upfront payments,\n"
	.string "thank you. Cash after!$"

Route103ConcordConartist_Text_6:
# 729 "data/maps/Route103/scripts.pory"
	.string "What the hell are you doing? You barely\n"
	.string "distracted him - you got to be more of a\l"
	.string "nuisance!$"

Route103ConcordConartist_Text_7:
# 733 "data/maps/Route103/scripts.pory"
	.string "Hold it right there! You're surrounded!$"

Route103ConcordConartist_Text_8:
# 754 "data/maps/Route103/scripts.pory"
	.string "What the...?$"

Route103ConcordConartist_Text_9:
# 758 "data/maps/Route103/scripts.pory"
	.string "You two-faced bastard - you set me up!\n"
	.string "You're going to get it now!\p"
	.string "No one slips Jimmy McGligar, best\n"
	.string "Pokémon egg seller of Hoenn!$"

Route103ConcordConartist_Text_10:
# 764 "data/maps/Route103/scripts.pory"
	.string "You'll never catch me alive! Outta my\n"
	.string "way!$"

Route103ConcordConartist_Text_11:
# 770 "data/maps/Route103/scripts.pory"
	.string "W-wait, you're unde-...!$"

Route103ConcordConartist_Text_12:
# 775 "data/maps/Route103/scripts.pory"
	.string "SEE YA, LOSERS...!$"

Route103ConcordConartist_Text_13:
# 780 "data/maps/Route103/scripts.pory"
	.string "GRLBGBRLB...!$"

Route103ConcordConartist_Text_14:
# 790 "data/maps/Route103/scripts.pory"
	.string "Such athleticism... he should stop\n"
	.string "conning, and become an acrobat.$"

Route103ConcordConartist_Text_15:
# 794 "data/maps/Route103/scripts.pory"
	.string "Indeed... at any rate, it's not our\n"
	.string "problem any more.$"

Route103ConcordConartist_Text_16:
# 806 "data/maps/Route103/scripts.pory"
	.string "Thank you for your help, civilian! Now we\n"
	.string "can put this long shift to an end.$"

Route103ConcordConartist_Text_17:
# 808 "data/maps/Route103/scripts.pory"
	.string "Here, this is for your trouble.$"

Route103ConcordConartist_Text_18:
# 810 "data/maps/Route103/scripts.pory"
	.string "Received 1000¥!$"

ConArtistEgg_Text_0:
# 841 "data/maps/Route103/scripts.pory"
	.string "Hands off my wares, pal! This egg is\n"
	.string "mine!$"

ConArtistEgg_Text_1:
# 847 "data/maps/Route103/scripts.pory"
	.string "The shady dealer left this egg behind...$"

ConArtistEgg_Text_2:
# 850 "data/maps/Route103/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

RiverFerryGuyUp_Text_0:
# 863 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail upstream?$"

RiverFerryGuyUp_Text_1:
# 867 "data/maps/Route103/scripts.pory"
	.string "Then hop on!$"

RiverFerryGuyUp_Text_2:
# 884 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're going upstream, so it'll\n"
	.string "be a bit slow.$"

RiverFerryGuyUp_Text_3:
# 904 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back downstream.$"

RiverFerryGuyUp_Text_4:
# 917 "data/maps/Route103/scripts.pory"
	.string "Ah, shame... tell me if you ever do!$"

RiverFerryGuyDown_Text_0:
# 927 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail\n"
	.string "downstream?$"

RiverFerryGuyDown_Text_1:
# 948 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're sailing downstream, so\n"
	.string "brace yourself!$"

RiverFerryGuyDown_Text_2:
# 968 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back upstream.$"

RiverFerryBoat_Text_0:
# 990 "data/maps/Route103/scripts.pory"
	.string "It's an old boat, but it's well taken\n"
	.string "care of.$"

RiverFerryManNotThatEntry_Text_0:
# 999 "data/maps/Route103/scripts.pory"
	.string "Not so fast, young one...! If you want to\n"
	.string "board, do it after me.$"

FisherGuruRoute103_Text_0:
# 1016 "data/maps/Route103/scripts.pory"
	.string "Sssh... did you hear that? Something...\n"
	.string "SOMETHING IS COMING!$"

FisherGuruRoute103_Text_1:
# 1028 "data/maps/Route103/scripts.pory"
	.string "CRAAAAAAW!!$"

FisherGuruRoute103_Text_2:
# 1034 "data/maps/Route103/scripts.pory"
	.string "AAH, CRAB BASKETS!$"

FisherGuruRoute103_Text_3:
# 1036 "data/maps/Route103/scripts.pory"
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
# 1043 "data/maps/Route103/scripts.pory"
	.string "I want you to take that rod and fish at\n"
	.string "least FIVE SPECIES OF POKÉMON!\p"
	.string "WHY? Because only then will the\n"
	.string "LEGENDARY MUDCRAB judge you as worthy,\l"
	.string "and show itself again!\p"
	.string "Do not question my intuition - just\n"
	.string "embrace it, and fulfil your destiny!!$"

FisherGuruRoute103_Text_5:
# 1055 "data/maps/Route103/scripts.pory"
	.string "AHOY! How's the FISHING going!?$"

FisherGuruRoute103_Text_6:
# 1056 "data/maps/Route103/scripts.pory"
	.string "About your request...$"

FisherGuruRoute103_Text_7:
# 1056 "data/maps/Route103/scripts.pory"
	.string "Did you see the Mud Crab?$"

FisherGuruRoute103_Text_8:
# 1056 "data/maps/Route103/scripts.pory"
	.string "How's it going?$"

FisherGuruRoute103_Text_9:
# 1062 "data/maps/Route103/scripts.pory"
	.string "Ah, you've fished at least 5 Pokémon?\n"
	.string "Good, GOOD!\p"
	.string "I'm confident the Legendary Mud Crab\n"
	.string "will acknowledge you and show up.\p"
	.string "Let's wait a bit!$"

FisherGuruRoute103_Text_10:
# 1068 "data/maps/Route103/scripts.pory"
	.string "You and the fisher wait in a long,\n"
	.string "uncomfortable silence...$"

FisherGuruRoute103_Text_11:
# 1072 "data/maps/Route103/scripts.pory"
	.string "Hmm... I should have known. Such a\n"
	.string "measly fishing test...\p"
	.string "Is NOT ENOUGH to make the Mud Crab\n"
	.string "acknowledge you!\p"
	.string "I suppose I've got no choice... here,\n"
	.string "TAKE THIS!$"

FisherGuruRoute103_Text_12:
# 1077 "data/maps/Route103/scripts.pory"
	.string "I want you to use that rod to bring me a\n"
	.string "BIG PEARL!\p"
	.string "If you are a true fisher... you will know\n"
	.string "how.\p"
	.string "Do that, and I'm sure next time the Mud\n"
	.string "Crab will show itself!$"

FisherGuruRoute103_Text_13:
# 1085 "data/maps/Route103/scripts.pory"
	.string "Like I said, I need you to fish 5 species\n"
	.string "of Pokémon!\p"
	.string "If you are the fisher the Mud Crab\n"
	.string "believes you to be, you shouldn't need\l"
	.string "any guidance!\p"
	.string "O-of course I could give it, but that\n"
	.string "would defeat the purpose!$"

FisherGuruRoute103_Text_14:
# 1095 "data/maps/Route103/scripts.pory"
	.string "pearl$"

FisherGuruRoute103_Text_15:
# 1103 "data/maps/Route103/scripts.pory"
	.string "no pearl$"

FisherGuruRoute103_Text_16:
# 1110 "data/maps/Route103/scripts.pory"
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
# 1119 "data/maps/Route103/scripts.pory"
	.string "Ah, well, aside from the Mud Crab\n"
	.string "business... not very good, I must say.\p"
	.string "It's tough being a fisher in these parts\n"
	.string "nowadays. The sea is poisoned, the\l"
	.string "rivers are muddy...\p"
	.string "Most of my buddies have moved up north.\n"
	.string "But me, I like the challenge!$"

MoveTutorSign_Text_0:
# 1131 "data/maps/Route103/scripts.pory"
	.string "Move Tutor Colton's House$"

Sharpy103_Outro::
# 413 "data/maps/Route103/scripts.pory"
	.string "Heh... you're a soldier alright...!$"

Tourist103_Outro::
# 505 "data/maps/Route103/scripts.pory"
	.string "Wait a minute... yeah, you're not that \nthief. Sorry!$"

Veteran103_Intro::
# 601 "data/maps/Route103/scripts.pory"
	.string "They told me I'm too old to enlist...  but I'm\nstronger than you young'uns!\pI'll show you!$"

Veteran103_Outro::
# 604 "data/maps/Route103/scripts.pory"
	.string "Hmpf... not bad...$"

DevonGuard103_Outro::
# 688 "data/maps/Route103/scripts.pory"
	.string "That could have gone better...$"

ShadyDealer103_Outro::
# 831 "data/maps/Route103/scripts.pory"
	.string "I... I-I'm not going back to jail!$"
