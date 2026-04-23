# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 3 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 4 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 5 "data/maps/Route103/scripts.pory"
	.byte 0
# 6 "data/maps/Route103/scripts.pory"

# 7 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 8 "data/maps/Route103/scripts.pory"
end
# 9 "data/maps/Route103/scripts.pory"

# 10 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 11 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 12 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 13 "data/maps/Route103/scripts.pory"
	end
# 14 "data/maps/Route103/scripts.pory"

# 15 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 16 "data/maps/Route103/scripts.pory"
	walk_left
# 17 "data/maps/Route103/scripts.pory"
	walk_down
# 18 "data/maps/Route103/scripts.pory"
	step_end
# 19 "data/maps/Route103/scripts.pory"

# 20 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 21 "data/maps/Route103/scripts.pory"
	jump_2_down
# 22 "data/maps/Route103/scripts.pory"
	delay_16
# 23 "data/maps/Route103/scripts.pory"
	walk_down
# 24 "data/maps/Route103/scripts.pory"
	walk_down
# 25 "data/maps/Route103/scripts.pory"
	walk_down
# 26 "data/maps/Route103/scripts.pory"
	walk_down
# 27 "data/maps/Route103/scripts.pory"
	step_end
# 28 "data/maps/Route103/scripts.pory"

# 29 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 30 "data/maps/Route103/scripts.pory"
	delay_16
# 31 "data/maps/Route103/scripts.pory"
	delay_4
# 32 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 33 "data/maps/Route103/scripts.pory"
	delay_16
# 34 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 35 "data/maps/Route103/scripts.pory"
	step_end
# 36 "data/maps/Route103/scripts.pory"

# 37 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 38 "data/maps/Route103/scripts.pory"
	walk_down
# 39 "data/maps/Route103/scripts.pory"
	step_end
# 40 "data/maps/Route103/scripts.pory"

# 41 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 42 "data/maps/Route103/scripts.pory"
	jump_2_down
# 43 "data/maps/Route103/scripts.pory"
	delay_16
# 44 "data/maps/Route103/scripts.pory"
	walk_down
# 45 "data/maps/Route103/scripts.pory"
	walk_down
# 46 "data/maps/Route103/scripts.pory"
	walk_down
# 47 "data/maps/Route103/scripts.pory"
	step_end
# 48 "data/maps/Route103/scripts.pory"

# 49 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 50 "data/maps/Route103/scripts.pory"
	delay_16
# 51 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 52 "data/maps/Route103/scripts.pory"
	step_end
# 53 "data/maps/Route103/scripts.pory"

# 54 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 55 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 56 "data/maps/Route103/scripts.pory"
	end
# 57 "data/maps/Route103/scripts.pory"

# 58 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 59 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 60 "data/maps/Route103/scripts.pory"
	end
# 61 "data/maps/Route103/scripts.pory"

# 62 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 63 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 64 "data/maps/Route103/scripts.pory"
	end
# 65 "data/maps/Route103/scripts.pory"

# 66 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 67 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 68 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route103/scripts.pory"
	end
# 70 "data/maps/Route103/scripts.pory"

# 71 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 72 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 73 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 74 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 75 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route103/scripts.pory"
	end
# 77 "data/maps/Route103/scripts.pory"

# 78 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 79 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 80 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 81 "data/maps/Route103/scripts.pory"
	release
# 82 "data/maps/Route103/scripts.pory"
	end
# 83 "data/maps/Route103/scripts.pory"

# 84 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 85 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 86 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/Route103/scripts.pory"
	end
# 88 "data/maps/Route103/scripts.pory"

# 89 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 90 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 91 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 92 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 93 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route103/scripts.pory"
	end
# 95 "data/maps/Route103/scripts.pory"

# 96 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 97 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 98 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 99 "data/maps/Route103/scripts.pory"
	release
# 100 "data/maps/Route103/scripts.pory"
	end
# 101 "data/maps/Route103/scripts.pory"

# 102 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 103 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 104 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route103/scripts.pory"
	end
# 106 "data/maps/Route103/scripts.pory"

# 107 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 108 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 109 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route103/scripts.pory"
	end
# 111 "data/maps/Route103/scripts.pory"

# 112 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 113 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 114 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 115 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 116 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 117 "data/maps/Route103/scripts.pory"
	release
# 118 "data/maps/Route103/scripts.pory"
	end
# 119 "data/maps/Route103/scripts.pory"

# 120 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 121 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 122 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 124 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 125 "data/maps/Route103/scripts.pory"
	release
# 126 "data/maps/Route103/scripts.pory"
	end
# 127 "data/maps/Route103/scripts.pory"

# 128 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 129 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 130 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route103/scripts.pory"
	end
# 132 "data/maps/Route103/scripts.pory"

# 133 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 134 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 135 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route103/scripts.pory"
	end
# 137 "data/maps/Route103/scripts.pory"

# 138 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 139 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 140 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route103/scripts.pory"
	end
# 142 "data/maps/Route103/scripts.pory"

# 143 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 144 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 145 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route103/scripts.pory"
	end
# 147 "data/maps/Route103/scripts.pory"

# 148 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 149 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 150 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route103/scripts.pory"
	end
# 152 "data/maps/Route103/scripts.pory"

# 153 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 154 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 155 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 156 "data/maps/Route103/scripts.pory"

# 157 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 158 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 159 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 160 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 161 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 162 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 163 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 164 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 165 "data/maps/Route103/scripts.pory"

# 166 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 167 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 168 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 169 "data/maps/Route103/scripts.pory"

# 170 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 171 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 172 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 173 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 174 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 175 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 176 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 177 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 178 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 179 "data/maps/Route103/scripts.pory"

# 180 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 181 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 182 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 183 "data/maps/Route103/scripts.pory"

# 184 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 185 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 186 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 187 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 188 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 189 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 190 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 191 "data/maps/Route103/scripts.pory"

# 192 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 193 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 194 "data/maps/Route103/scripts.pory"

# 195 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 196 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 197 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 198 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 199 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 200 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 201 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 202 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 203 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 204 "data/maps/Route103/scripts.pory"

# 205 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 206 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 207 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 208 "data/maps/Route103/scripts.pory"

# 209 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 210 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 211 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 212 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 213 "data/maps/Route103/scripts.pory"

# 214 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 215 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 216 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"

Sharpy103::
# 222 "data/maps/Route103/scripts.pory"
	lockall
# 223 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 224 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 225 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 226 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 228 "data/maps/Route103/scripts.pory"
	special DoTVShow
# 230 "data/maps/Route103/scripts.pory"
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 238 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 253 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 254 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 255 "data/maps/Route103/scripts.pory"
	addobject 25
# 256 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 4
# 257 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 258 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 259 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 260 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 261 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 262 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 264 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 265 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 266 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_1
# 267 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_2
# 268 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 269 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 270 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_CONFUSED
# 271 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 273 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 274 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 275 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 276 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 278 "data/maps/Route103/scripts.pory"
	goto_if_set saidnotosharpyinoldale, Sharpy103_8
# 306 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 307 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 308 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 309 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_3
# 310 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 312 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 313 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 314 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 315 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 317 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_1
# 318 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 319 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_NORMAL
# 320 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 321 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 324 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 325 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_SAD
# 326 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 327 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 330 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_4
# 331 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 332 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 333 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 334 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_15
# 337 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 338 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 339 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 340 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_16
Sharpy103_7:
# 344 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 345 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 346 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_5
# 347 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_6
# 348 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 349 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 350 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_7
# 351 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 353 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 354 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 355 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 356 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 357 "data/maps/Route103/scripts.pory"
	releaseall
# 358 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
	return

Sharpy103_2:
# 232 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 233 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 234 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 235 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 236 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 240 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 241 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 242 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 243 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 244 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 245 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 246 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 247 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 248 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 249 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 250 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 251 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4

Sharpy103_8:
# 281 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 282 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 283 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 284 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 286 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 287 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 288 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 289 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 292 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 293 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 294 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 295 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 298 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 299 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_MENACING
# 300 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 301 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_10
	goto Sharpy103_7


Route103TouristApproach0::
# 367 "data/maps/Route103/scripts.pory"
	lockall
# 368 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 369 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 370 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 371 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 372 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 373 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach1::
# 377 "data/maps/Route103/scripts.pory"
	lockall
# 378 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 379 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 380 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 381 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 382 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach1_Movement_0
# 383 "data/maps/Route103/scripts.pory"
	waitmovement
# 384 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 385 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach2::
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
	applymovement 27, Route103TouristApproach2_Movement_0
# 395 "data/maps/Route103/scripts.pory"
	waitmovement
# 396 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 397 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach3::
# 401 "data/maps/Route103/scripts.pory"
	lockall
# 402 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 403 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 404 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 405 "data/maps/Route103/scripts.pory"
	waitmovement
# 406 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 407 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach3_Movement_0
# 408 "data/maps/Route103/scripts.pory"
	waitmovement
# 409 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 410 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103Tourist::
# 414 "data/maps/Route103/scripts.pory"
	lockall
# 415 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 416 "data/maps/Route103/scripts.pory"
touristafterapproach:
# 417 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 0
	goto_if_eq Route103Tourist_2
Route103Tourist_1:
# 441 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 1
	goto_if_eq Route103Tourist_5
Route103Tourist_4:
# 448 "data/maps/Route103/scripts.pory"
finishtouristscript:
# 449 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103Tourist_2:
# 419 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 420 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_0
# 421 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_TOURIST_103, Tourist103_Outro
# 424 "data/maps/Route103/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 426 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_1
# 427 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 428 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 429 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 430 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_2
# 431 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_1
# 432 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_3
# 434 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 435 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_4
# 437 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 1
# 438 "data/maps/Route103/scripts.pory"
	goto finishtouristscript
	goto Route103Tourist_1

Route103Tourist_5:
# 443 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 444 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 445 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_5
	goto Route103Tourist_4


Route103Touristbikepushed::
# 458 "data/maps/Route103/scripts.pory"
	lockall
# 459 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 460 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 461 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 462 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_0
# 463 "data/maps/Route103/scripts.pory"
	closemessage
# 465 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 466 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 467 "data/maps/Route103/scripts.pory"
	playse SE_BIKE_HOP
# 468 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 469 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route103Touristbikepushed_Movement_1
# 470 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 472 "data/maps/Route103/scripts.pory"
	setobjectxy 27, 0, 0
# 473 "data/maps/Route103/scripts.pory"
	setobjectxy 26, 0, 0
# 474 "data/maps/Route103/scripts.pory"
	setflag touristhelped
# 475 "data/maps/Route103/scripts.pory"
	clearflag touristonbike
# 476 "data/maps/Route103/scripts.pory"
	addobject 29
# 477 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 22, 9
# 478 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_1
# 479 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 480 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_1
# 481 "data/maps/Route103/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 482 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_3
# 483 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_2
# 485 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_4
# 486 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_3
# 488 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103Touristbikepushed_Movement_2
# 489 "data/maps/Route103/scripts.pory"
	waitmovement
# 491 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 492 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 493 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 494 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 495 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 496 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 497 "data/maps/Route103/scripts.pory"
	waitse
# 499 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_4
# 501 "data/maps/Route103/scripts.pory"
	removeobject 29
# 502 "data/maps/Route103/scripts.pory"
	setflag touristonbike
# 504 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 2
# 505 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103TouristNotThatWay::
# 510 "data/maps/Route103/scripts.pory"
	lockall
# 511 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 512 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 513 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 515 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach1_Movement_0
# 516 "data/maps/Route103/scripts.pory"
	waitmovement
# 517 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103VeteranBattle::
# 523 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, Route103VeteranRegister
# 524 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 525 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 526 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranBattle_Text_0
# 527 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRegister::
# 532 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 533 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 534 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_0
# 536 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 537 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRematch::
# 542 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro
# 543 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRematch_Text_0
	end


Route103ConcordBridgeGuard::
# 559 "data/maps/Route103/scripts.pory"
	lockall
# 560 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 561 "data/maps/Route103/scripts.pory"
	applymovement 30, Sharpy103_Movement_0
# 563 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordBridgeGuard_2
Route103ConcordBridgeGuard_1:
# 567 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_7
Route103ConcordBridgeGuard_4:
# 611 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route103ConcordBridgeGuard_12
Route103ConcordBridgeGuard_11:
# 616 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_20
Route103ConcordBridgeGuard_17:
# 620 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_29
Route103ConcordBridgeGuard_27:
# 624 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordBridgeGuard_38
Route103ConcordBridgeGuard_35:
# 629 "data/maps/Route103/scripts.pory"
finishguardscript:
# 630 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordBridgeGuard_2:
# 564 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_0
	goto Route103ConcordBridgeGuard_1

Route103ConcordBridgeGuard_5:
# 569 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_1
# 570 "data/maps/Route103/scripts.pory"
guarddistractchoice:
# 571 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordBridgeGuard_Text_2, Route103ConcordBridgeGuard_Text_3, Route103ConcordBridgeGuard_Text_4, Route103ConcordBridgeGuard_Text_5, Route103ConcordBridgeGuard_Text_6
# 573 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordBridgeGuard_15
Route103ConcordBridgeGuard_14:
# 579 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordBridgeGuard_25
Route103ConcordBridgeGuard_24:
# 584 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route103ConcordBridgeGuard_33
Route103ConcordBridgeGuard_32:
# 600 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route103ConcordBridgeGuard_42
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_6:
# 567 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_5
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_7:
# 567 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordBridgeGuard_6
	goto Route103ConcordBridgeGuard_4

Route103ConcordBridgeGuard_12:
# 612 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_11

Route103ConcordBridgeGuard_15:
# 574 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_7
# 577 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_14

Route103ConcordBridgeGuard_18:
# 618 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_12
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_19:
# 616 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, Route103ConcordBridgeGuard_18
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_20:
# 616 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_19
	goto Route103ConcordBridgeGuard_17

Route103ConcordBridgeGuard_25:
# 580 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_8
# 582 "data/maps/Route103/scripts.pory"
	goto guarddistractchoice
	goto Route103ConcordBridgeGuard_24

Route103ConcordBridgeGuard_28:
# 621 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_13
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_29:
# 620 "data/maps/Route103/scripts.pory"
	goto_if_set helpedconcordconartist, Route103ConcordBridgeGuard_28
	goto Route103ConcordBridgeGuard_27

Route103ConcordBridgeGuard_33:
# 585 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_9
# 587 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_DEVONGUARD_103, DevonGuard103_Outro
# 588 "data/maps/Route103/scripts.pory"
	setflag helpedconcordconartist
# 590 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 593 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 595 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_10
# 596 "data/maps/Route103/scripts.pory"
	clearflag conartistrewardsinoldale
# 597 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_32

Route103ConcordBridgeGuard_36:
# 625 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_14
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_37:
# 624 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, Route103ConcordBridgeGuard_36
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_38:
# 624 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordBridgeGuard_37
	goto Route103ConcordBridgeGuard_35

Route103ConcordBridgeGuard_42:
# 601 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordBridgeGuard_Text_11
# 604 "data/maps/Route103/scripts.pory"
	setflag betrayedconcordconartist
# 605 "data/maps/Route103/scripts.pory"
	goto finishguardscript
	goto Route103ConcordBridgeGuard_4


Route103ConcordConartist::
# 640 "data/maps/Route103/scripts.pory"
	lockall
# 641 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 642 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_0
# 644 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistaskeddistract, Route103ConcordConartist_2
Route103ConcordConartist_1:
# 666 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_7
Route103ConcordConartist_4:
# 671 "data/maps/Route103/scripts.pory"
	goto_if_set conartistaskeddistract, Route103ConcordConartist_17
Route103ConcordConartist_14:
# 771 "data/maps/Route103/scripts.pory"
finishconartistscript:
# 772 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103ConcordConartist_2:
# 646 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_0
# 647 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 649 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route103ConcordConartist_12
Route103ConcordConartist_11:
# 661 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route103ConcordConartist_21
	goto Route103ConcordConartist_1

Route103ConcordConartist_5:
# 668 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_6:
# 666 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_5
	goto Route103ConcordConartist_4

Route103ConcordConartist_7:
# 666 "data/maps/Route103/scripts.pory"
	goto_if_unset betrayedconcordconartist, Route103ConcordConartist_6
	goto Route103ConcordConartist_4

Route103ConcordConartist_12:
# 650 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_3
# 657 "data/maps/Route103/scripts.pory"
	setflag conartistaskeddistract
# 658 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_11

Route103ConcordConartist_15:
# 673 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 674 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_6
# 677 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 678 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_7
# 684 "data/maps/Route103/scripts.pory"
	clearflag devonsvsconartist
# 685 "data/maps/Route103/scripts.pory"
	addobject 31
# 686 "data/maps/Route103/scripts.pory"
	setobjectxy 31, 42, 37
# 687 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 688 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 689 "data/maps/Route103/scripts.pory"
	waitmovement
# 690 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_0
# 691 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 694 "data/maps/Route103/scripts.pory"
	addobject 32
# 695 "data/maps/Route103/scripts.pory"
	setobjectxy 32, 30, 39
# 696 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_1
# 698 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_2
# 699 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_8
# 701 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_0
# 703 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_9
# 706 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHADYDEALER_103, ShadyDealer103_Outro
# 708 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_3
# 709 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_10
# 711 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 712 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103ConcordConartist_Movement_4
# 714 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_5
# 715 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_11
# 716 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 717 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 718 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_6
# 719 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_7
# 720 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_12
# 721 "data/maps/Route103/scripts.pory"
	applymovement 28, Route103ConcordConartist_Movement_8
# 722 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 723 "data/maps/Route103/scripts.pory"
	waitse
# 724 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 725 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_13
# 729 "data/maps/Route103/scripts.pory"
	waitmovement
# 733 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_3
# 735 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_14
# 737 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_3
# 739 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_15
# 741 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_9
# 742 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103ConcordConartist_Movement_9
# 743 "data/maps/Route103/scripts.pory"
	waitmovement
# 744 "data/maps/Route103/scripts.pory"
	opendoor 42, 37
# 745 "data/maps/Route103/scripts.pory"
	playse SE_SLIDING_DOOR
# 746 "data/maps/Route103/scripts.pory"
	applymovement 31, Route103TouristApproach1_Movement_0
# 747 "data/maps/Route103/scripts.pory"
	waitmovement
# 748 "data/maps/Route103/scripts.pory"
	removeobject 31
# 749 "data/maps/Route103/scripts.pory"
	waitmovement
# 751 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_16
# 752 "data/maps/Route103/scripts.pory"
	closedoor 42, 37
# 753 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_17
# 754 "data/maps/Route103/scripts.pory"
	playse SE_SHOP
# 755 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_18
# 757 "data/maps/Route103/scripts.pory"
	applymovement 32, Route103ConcordConartist_Movement_10
# 758 "data/maps/Route103/scripts.pory"
	waitmovement
# 760 "data/maps/Route103/scripts.pory"
	waitmovement
# 762 "data/maps/Route103/scripts.pory"
	removeobject 28
# 764 "data/maps/Route103/scripts.pory"
	removeobject 32
# 765 "data/maps/Route103/scripts.pory"
	setflag devonsvsconartist
# 766 "data/maps/Route103/scripts.pory"
	setflag conartistescaped
# 767 "data/maps/Route103/scripts.pory"
	clearflag devonbridgeguardgoestoconartist
# 768 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
# 769 "data/maps/Route103/scripts.pory"
	goto finishconartistscript
	goto Route103ConcordConartist_14

Route103ConcordConartist_16:
# 671 "data/maps/Route103/scripts.pory"
	goto_if_unset helpedconcordconartist, Route103ConcordConartist_15
	goto Route103ConcordConartist_14

Route103ConcordConartist_17:
# 671 "data/maps/Route103/scripts.pory"
	goto_if_set betrayedconcordconartist, Route103ConcordConartist_16
	goto Route103ConcordConartist_14

Route103ConcordConartist_21:
# 662 "data/maps/Route103/scripts.pory"
	msgbox Route103ConcordConartist_Text_4
# 663 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_4
	goto Route103ConcordConartist_1


ConArtistEgg::
# 781 "data/maps/Route103/scripts.pory"
	lockall
# 782 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 783 "data/maps/Route103/scripts.pory"
	goto_if_unset conartistescaped, ConArtistEgg_2
ConArtistEgg_1:
# 789 "data/maps/Route103/scripts.pory"
	goto_if_set conartistescaped, ConArtistEgg_4
	return

ConArtistEgg_2:
# 784 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_0
# 785 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_0
# 786 "data/maps/Route103/scripts.pory"
	releaseall
# 787 "data/maps/Route103/scripts.pory"
	applymovement 28, Sharpy103_Movement_4
	goto ConArtistEgg_1

ConArtistEgg_4:
# 791 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_1
# 792 "data/maps/Route103/scripts.pory"
	giveegg SPECIES_TAMARAKKU
# 793 "data/maps/Route103/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 794 "data/maps/Route103/scripts.pory"
	msgbox ConArtistEgg_Text_2
# 795 "data/maps/Route103/scripts.pory"
	removeobject 33
# 796 "data/maps/Route103/scripts.pory"
	setflag conartistegg
# 797 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryGuyUp::
# 804 "data/maps/Route103/scripts.pory"
	lockall
# 805 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 806 "data/maps/Route103/scripts.pory"
	applymovement 34, Sharpy103_Movement_0
# 807 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_0
# 808 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 810 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyUp_2
RiverFerryGuyUp_1:
# 860 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyUp_5
RiverFerryGuyUp_4:
# 864 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyUp_2:
# 811 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
# 812 "data/maps/Route103/scripts.pory"
	removeobject 36
# 813 "data/maps/Route103/scripts.pory"
	removeobject 37
# 814 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 815 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
# 817 "data/maps/Route103/scripts.pory"
	hidefollower
# 818 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 819 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_0
# 820 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 821 "data/maps/Route103/scripts.pory"
	removeobject 34
# 822 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 823 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 824 "data/maps/Route103/scripts.pory"
	hideplayer
# 825 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 826 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_1
# 827 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 828 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_2
# 829 "data/maps/Route103/scripts.pory"
	closemessage
# 830 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 831 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyUp_Movement_2
# 832 "data/maps/Route103/scripts.pory"
	applymovement 35, RiverFerryGuyUp_Movement_3
# 833 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 834 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 836 "data/maps/Route103/scripts.pory"
	clearflag ferryman103up
# 837 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103up
# 838 "data/maps/Route103/scripts.pory"
	addobject 36
# 839 "data/maps/Route103/scripts.pory"
	addobject 37
# 841 "data/maps/Route103/scripts.pory"
	showplayer
# 842 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 16
# 843 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 844 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_5
# 845 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 847 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
# 848 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_3
# 849 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_6
# 850 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 851 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_4
# 852 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 853 "data/maps/Route103/scripts.pory"
	removeobject 34
# 854 "data/maps/Route103/scripts.pory"
	removeobject 35
# 855 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 856 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
	goto RiverFerryGuyUp_1

RiverFerryGuyUp_5:
# 861 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
	goto RiverFerryGuyUp_4


RiverFerryGuyDown::
# 868 "data/maps/Route103/scripts.pory"
	lockall
# 869 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 870 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_0
# 871 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_0
# 872 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route103ConcordConartist_Text_1, Route103ConcordConartist_Text_2
# 874 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RiverFerryGuyDown_2
RiverFerryGuyDown_1:
# 924 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RiverFerryGuyDown_5
RiverFerryGuyDown_4:
# 928 "data/maps/Route103/scripts.pory"
	releaseall
	return

RiverFerryGuyDown_2:
# 875 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_1
# 876 "data/maps/Route103/scripts.pory"
	removeobject 34
# 877 "data/maps/Route103/scripts.pory"
	removeobject 35
# 878 "data/maps/Route103/scripts.pory"
	setflag ferryman103down
# 879 "data/maps/Route103/scripts.pory"
	setflag ferryboat103down
# 881 "data/maps/Route103/scripts.pory"
	hidefollower
# 882 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 883 "data/maps/Route103/scripts.pory"
	applymovement 37, RiverFerryGuyUp_Movement_0
# 884 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 885 "data/maps/Route103/scripts.pory"
	removeobject 37
# 886 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_0
# 887 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 888 "data/maps/Route103/scripts.pory"
	hideplayer
# 889 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 890 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_0
# 891 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 892 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_1
# 893 "data/maps/Route103/scripts.pory"
	closemessage
# 894 "data/maps/Route103/scripts.pory"
	playbgm MUS_SAILING, TRUE
# 895 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RiverFerryGuyDown_Movement_1
# 896 "data/maps/Route103/scripts.pory"
	applymovement 36, RiverFerryGuyDown_Movement_2
# 897 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 898 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 900 "data/maps/Route103/scripts.pory"
	clearflag ferryman103down
# 901 "data/maps/Route103/scripts.pory"
	clearflag ferryboat103down
# 902 "data/maps/Route103/scripts.pory"
	addobject 34
# 903 "data/maps/Route103/scripts.pory"
	addobject 35
# 905 "data/maps/Route103/scripts.pory"
	showplayer
# 906 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 27, 32
# 907 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_4
# 908 "data/maps/Route103/scripts.pory"
	applymovement 34, RiverFerryGuyUp_Movement_5
# 909 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 911 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
# 912 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyDown_Text_2
# 913 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_6
# 914 "data/maps/Route103/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 915 "data/maps/Route103/scripts.pory"
	applymovement 37, Sharpy103_Movement_4
# 916 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 917 "data/maps/Route103/scripts.pory"
	removeobject 36
# 918 "data/maps/Route103/scripts.pory"
	removeobject 37
# 919 "data/maps/Route103/scripts.pory"
	setflag ferryman103up
# 920 "data/maps/Route103/scripts.pory"
	setflag ferryboat103up
	goto RiverFerryGuyDown_1

RiverFerryGuyDown_5:
# 925 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryGuyUp_Text_4
	goto RiverFerryGuyDown_4


RiverFerryBoat::
# 933 "data/maps/Route103/scripts.pory"
	lockall
# 934 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryBoat_Text_0
# 935 "data/maps/Route103/scripts.pory"
	releaseall
	return


RiverFerryManNotThatEntry::
# 939 "data/maps/Route103/scripts.pory"
	lockall
# 940 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 941 "data/maps/Route103/scripts.pory"
	applymovement 34, Sharpy103_Movement_0
# 942 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_3
# 943 "data/maps/Route103/scripts.pory"
	msgbox RiverFerryManNotThatEntry_Text_0
# 944 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_6
# 945 "data/maps/Route103/scripts.pory"
	waitmovement
# 946 "data/maps/Route103/scripts.pory"
	releaseall
	return


FisherGuruRoute103::
# 950 "data/maps/Route103/scripts.pory"
	lock
# 951 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 0
	goto_if_eq FisherGuruRoute103_2
FisherGuruRoute103_1:
# 997 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 1
	goto_if_eq FisherGuruRoute103_5
# 997 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_5
# 997 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 3
	goto_if_eq FisherGuruRoute103_5
FisherGuruRoute103_4:
# 1069 "data/maps/Route103/scripts.pory"
finishfisherscript:
# 1070 "data/maps/Route103/scripts.pory"
	releaseall
	return

FisherGuruRoute103_2:
# 954 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 956 "data/maps/Route103/scripts.pory"
	playse SE_M_SURF
# 957 "data/maps/Route103/scripts.pory"
	waitse
# 958 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 959 "data/maps/Route103/scripts.pory"
	applymovement 38, Route103TouristApproach0_Movement_0
# 960 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_0
# 962 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_1
# 964 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 965 "data/maps/Route103/scripts.pory"
	waitse
# 966 "data/maps/Route103/scripts.pory"
	clearflag mudcrabcrawdaunt
# 967 "data/maps/Route103/scripts.pory"
	addobject 39
# 968 "data/maps/Route103/scripts.pory"
	playse SE_SHINY
# 969 "data/maps/Route103/scripts.pory"
	waitse
# 971 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_CRAWDAUNT, CRY_MODE_ENCOUNTER
# 972 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_1
# 973 "data/maps/Route103/scripts.pory"
	removeobject 39
# 974 "data/maps/Route103/scripts.pory"
	setflag mudcrabcrawdaunt
# 975 "data/maps/Route103/scripts.pory"
	playse SE_M_DIVE
# 976 "data/maps/Route103/scripts.pory"
	waitse
# 978 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_2
# 979 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 980 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_3
# 985 "data/maps/Route103/scripts.pory"
	giveitem ITEM_OLD_ROD
# 987 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_4
# 990 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 1
# 991 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_1

FisherGuruRoute103_5:
# 999 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_5
# 1000 "data/maps/Route103/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, FisherGuruRoute103_Text_6, FisherGuruRoute103_Text_7, FisherGuruRoute103_Text_8
# 1002 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherGuruRoute103_12
FisherGuruRoute103_11:
# 1053 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FisherGuruRoute103_15
FisherGuruRoute103_14:
# 1062 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FisherGuruRoute103_21
FisherGuruRoute103_20:
# 1063 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_17
# 1066 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_4

FisherGuruRoute103_12:
# 1003 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 1
	goto_if_eq FisherGuruRoute103_18
FisherGuruRoute103_17:
# 1037 "data/maps/Route103/scripts.pory"
	compare VAR_FISHERPROGRESS103, 2
	goto_if_eq FisherGuruRoute103_23
	goto FisherGuruRoute103_11

FisherGuruRoute103_15:
# 1054 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_16
# 1059 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_14

FisherGuruRoute103_18:
# 1004 "data/maps/Route103/scripts.pory"
	getcaughtmon SPECIES_SMOTHQUIL
# 1005 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FisherGuruRoute103_26
FisherGuruRoute103_25:
# 1028 "data/maps/Route103/scripts.pory"
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
# 1047 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_15
# 1048 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_11

FisherGuruRoute103_26:
# 1006 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_9
# 1008 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_1
# 1010 "data/maps/Route103/scripts.pory"
	fadeoutbgm 1
# 1011 "data/maps/Route103/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1012 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_10
# 1013 "data/maps/Route103/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1014 "data/maps/Route103/scripts.pory"
	fadeinbgm 1
# 1016 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_11
# 1018 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RiverFerryGuyUp_Movement_5
# 1019 "data/maps/Route103/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 1021 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_12
# 1024 "data/maps/Route103/scripts.pory"
	setvar VAR_FISHERPROGRESS103, 2
# 1025 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_25

FisherGuruRoute103_28:
# 1039 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_14
# 1043 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_11

FisherGuruRoute103_31:
# 1029 "data/maps/Route103/scripts.pory"
	msgbox FisherGuruRoute103_Text_13
# 1032 "data/maps/Route103/scripts.pory"
	goto finishfisherscript
	goto FisherGuruRoute103_17


MoveTutorSign::
# 1074 "data/maps/Route103/scripts.pory"
	lock
# 1075 "data/maps/Route103/scripts.pory"
	msgbox MoveTutorSign_Text_0
# 1076 "data/maps/Route103/scripts.pory"
	release
	return


# 224 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 224 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 266 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 266 "data/maps/Route103/scripts.pory"
	face_right
	step_end

# 267 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 267 "data/maps/Route103/scripts.pory"
	jump_in_place_left
	step_end

# 309 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 309 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 330 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 330 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 346 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 346 "data/maps/Route103/scripts.pory"
	jump_2_down
# 346 "data/maps/Route103/scripts.pory"
	walk_down
# 346 "data/maps/Route103/scripts.pory"
	walk_down
# 346 "data/maps/Route103/scripts.pory"
	walk_down
# 346 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 347 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_6:
# 347 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 347 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 347 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 350 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_7:
# 350 "data/maps/Route103/scripts.pory"
	jump_2_down
# 350 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 350 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 350 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 350 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 350 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 350 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 350 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 370 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_0:
# 370 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 382 "data/maps/Route103/scripts.pory"
Route103TouristApproach1_Movement_0:
# 382 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 394 "data/maps/Route103/scripts.pory"
Route103TouristApproach2_Movement_0:
# 394 "data/maps/Route103/scripts.pory"
	walk_up
# 394 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 407 "data/maps/Route103/scripts.pory"
Route103TouristApproach3_Movement_0:
# 407 "data/maps/Route103/scripts.pory"
	walk_up
# 407 "data/maps/Route103/scripts.pory"
	walk_up
# 407 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 460 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_0:
# 460 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
# 460 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 469 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_1:
# 469 "data/maps/Route103/scripts.pory"
	walk_up
# 469 "data/maps/Route103/scripts.pory"
	walk_up
# 469 "data/maps/Route103/scripts.pory"
	walk_up
# 469 "data/maps/Route103/scripts.pory"
	walk_up
# 469 "data/maps/Route103/scripts.pory"
	walk_up
# 469 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 488 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_2:
# 488 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 488 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 488 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 488 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 488 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 488 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 488 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 488 "data/maps/Route103/scripts.pory"
	walk_fast_right
	step_end

# 690 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_0:
# 690 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 690 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 690 "data/maps/Route103/scripts.pory"
	walk_fast_left
	step_end

# 696 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_1:
# 696 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 698 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_2:
# 698 "data/maps/Route103/scripts.pory"
	face_right
# 698 "data/maps/Route103/scripts.pory"
	face_down
# 698 "data/maps/Route103/scripts.pory"
	face_right
# 698 "data/maps/Route103/scripts.pory"
	face_down
# 698 "data/maps/Route103/scripts.pory"
	face_right
# 698 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 708 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_3:
# 708 "data/maps/Route103/scripts.pory"
	walk_in_place_down
	step_end

# 712 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_4:
# 712 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 712 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 714 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_5:
# 714 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 718 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_6:
# 718 "data/maps/Route103/scripts.pory"
	walk_fast_left
# 718 "data/maps/Route103/scripts.pory"
	face_right
# 718 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 719 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_7:
# 719 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 719 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 721 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_8:
# 721 "data/maps/Route103/scripts.pory"
	jump_down
# 721 "data/maps/Route103/scripts.pory"
	jump_down
	step_end

# 741 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_9:
# 741 "data/maps/Route103/scripts.pory"
	walk_right
# 741 "data/maps/Route103/scripts.pory"
	walk_right
# 741 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 757 "data/maps/Route103/scripts.pory"
Route103ConcordConartist_Movement_10:
# 757 "data/maps/Route103/scripts.pory"
	walk_left
# 757 "data/maps/Route103/scripts.pory"
	walk_left
# 757 "data/maps/Route103/scripts.pory"
	walk_left
# 757 "data/maps/Route103/scripts.pory"
	walk_left
# 757 "data/maps/Route103/scripts.pory"
	walk_left
# 757 "data/maps/Route103/scripts.pory"
	walk_left
# 757 "data/maps/Route103/scripts.pory"
	walk_left
# 757 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 819 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_0:
# 819 "data/maps/Route103/scripts.pory"
	walk_right
	step_end

# 826 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_1:
# 826 "data/maps/Route103/scripts.pory"
	walk_right
# 826 "data/maps/Route103/scripts.pory"
	walk_up
# 826 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 831 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_2:
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 831 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 832 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_3:
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
# 832 "data/maps/Route103/scripts.pory"
	walk_slow_up
	step_end

# 843 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_4:
# 843 "data/maps/Route103/scripts.pory"
	walk_left
# 843 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 844 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_5:
# 844 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 849 "data/maps/Route103/scripts.pory"
RiverFerryGuyUp_Movement_6:
# 849 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 890 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_0:
# 890 "data/maps/Route103/scripts.pory"
	walk_right
# 890 "data/maps/Route103/scripts.pory"
	walk_down
# 890 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 895 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_1:
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 895 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

# 896 "data/maps/Route103/scripts.pory"
RiverFerryGuyDown_Movement_2:
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
# 896 "data/maps/Route103/scripts.pory"
	walk_faster_down
	step_end

Sharpy103_Text_0:
# 233 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 242 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_2:
# 246 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_3:
# 250 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_4:
# 262 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_5:
# 271 "data/maps/Route103/scripts.pory"
	.string "If you two are done, Sharpy and I need\n"
	.string "to go back - it's almost curfew!$"

Sharpy103_Text_6:
# 276 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! Norman is going to be\n"
	.string "PISSED...$"

Sharpy103_Text_7:
# 284 "data/maps/Route103/scripts.pory"
	.string "Well... I guess you won't be joining us\n"
	.string "after all... unless...$"

Sharpy103_Text_8:
# 289 "data/maps/Route103/scripts.pory"
	.string "Unless you change your mind! In which\n"
	.string "case, we'll be waiting at Petalburg's\l"
	.string "Dojo!$"

Sharpy103_Text_9:
# 295 "data/maps/Route103/scripts.pory"
	.string "It's the big, old-fashioned wooden\n"
	.string "building - can't miss it!\p"
	.string "So, if you want to help us save Hoenn...$"

Sharpy103_Text_10:
# 301 "data/maps/Route103/scripts.pory"
	.string "You better come!$"

Sharpy103_Text_11:
# 310 "data/maps/Route103/scripts.pory"
	.string "Well, it goes without saying, but you\n"
	.string "passed the test with flying colors!$"

Sharpy103_Text_12:
# 315 "data/maps/Route103/scripts.pory"
	.string "Now you just need to come to Petalburg\n"
	.string "Dojo, and you can join us officially!$"

Sharpy103_Text_13:
# 321 "data/maps/Route103/scripts.pory"
	.string "Technically, Norman has the last word\n"
	.string "on accepting recruits... but I doubt\l"
	.string "he'll reject you.$"

Sharpy103_Text_14:
# 327 "data/maps/Route103/scripts.pory"
	.string "We'd love to show you the way, but we\n"
	.string "kinda need to rush back. Norman gets\l"
	.string "very mad when we skip curfew...$"

Sharpy103_Text_15:
# 334 "data/maps/Route103/scripts.pory"
	.string "Yup - so we'll go on ahead! Petalburg\n"
	.string "Dojo is the big, old-fashioned wooden\l"
	.string "building - can't miss it$"

Sharpy103_Text_16:
# 340 "data/maps/Route103/scripts.pory"
	.string "We'll see you there!$"

Route103TouristApproach0_Text_0:
# 371 "data/maps/Route103/scripts.pory"
	.string "Hey, you!$"

Route103Tourist_Text_0:
# 420 "data/maps/Route103/scripts.pory"
	.string "You're the one who mugged me! You're\n"
	.string "not getting away!$"

Route103Tourist_Text_1:
# 426 "data/maps/Route103/scripts.pory"
	.string "Uhm... I'm sorry. I dropped my glasses,\n"
	.string "and I mistook you for that thief...!$"

Route103Tourist_Text_2:
# 430 "data/maps/Route103/scripts.pory"
	.string "What thief? The one who stole all my\n"
	.string "pokeyen!$"

Route103Tourist_Text_3:
# 432 "data/maps/Route103/scripts.pory"
	.string "And that's not the worse... he threw my\n"
	.string "bike to the mud there, so that I\l"
	.string "couldn't chase him!$"

Route103Tourist_Text_4:
# 435 "data/maps/Route103/scripts.pory"
	.string "I tried to get it out, but it's stuck\n"
	.string "real bad... if only me or my Pokémon had\l"
	.string "enough {COLOR RED}STRENGTH{COLOR DARK_GRAY}!$"

Route103Tourist_Text_5:
# 445 "data/maps/Route103/scripts.pory"
	.string "I'm not leaving without my bike. It\n"
	.string "costed me 1,000,000¥ at Cerulean City's\l"
	.string "Bike Shop!$"

Route103Touristbikepushed_Text_0:
# 462 "data/maps/Route103/scripts.pory"
	.string "Y-you did it! IT'S OUT! Wait, I'll take it\n"
	.string "from here!$"

Route103Touristbikepushed_Text_1:
# 480 "data/maps/Route103/scripts.pory"
	.string "Thank you so much! Here - I got this as\n"
	.string "a souvenir, but you can have it!$"

Route103Touristbikepushed_Text_2:
# 483 "data/maps/Route103/scripts.pory"
	.string "Well, these have been some thrilling\n"
	.string "holidays... but I should catch a boat in\l"
	.string "Slateport, and go back home.$"

Route103Touristbikepushed_Text_3:
# 486 "data/maps/Route103/scripts.pory"
	.string "If you ever make a trip to Cinnabar\n"
	.string "Island, I'll return the favour properly.\l"
	.string "Safe travels now!$"

Route103Touristbikepushed_Text_4:
# 499 "data/maps/Route103/scripts.pory"
	.string "Ooow ow ow... I need a new pair of\n"
	.string "glasses...$"

Route103VeteranBattle_Text_0:
# 526 "data/maps/Route103/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

Route103VeteranRegister_Text_0:
# 534 "data/maps/Route103/scripts.pory"
	.string "But you shouldn't lower your guard.\n"
	.string "Let's exchange Devon profiles - I'll\l"
	.string "make sure you dont' slack off!$"

Route103VeteranRematch_Text_0:
# 543 "data/maps/Route103/scripts.pory"
	.string "You're even stronger than last time... or\n"
	.string "have I just gotten weaker...?\p"
	.string "Old age is a cruel thing. But I plan to\n"
	.string "use the time I have left.$"

Route103ConcordBridgeGuard_Text_0:
# 564 "data/maps/Route103/scripts.pory"
	.string "Due to an increase in rebel activity in\n"
	.string "this area, passage through Concord\l"
	.string "Customs is heavily restricted.$"

Route103ConcordBridgeGuard_Text_1:
# 569 "data/maps/Route103/scripts.pory"
	.string "Hm? Yes?$"

Route103ConcordBridgeGuard_Text_2:
# 571 "data/maps/Route103/scripts.pory"
	.string "I need directions$"

Route103ConcordBridgeGuard_Text_3:
# 571 "data/maps/Route103/scripts.pory"
	.string "How is your day?$"

Route103ConcordBridgeGuard_Text_4:
# 571 "data/maps/Route103/scripts.pory"
	.string "Let's have a battle!$"

Route103ConcordBridgeGuard_Text_5:
# 571 "data/maps/Route103/scripts.pory"
	.string "I found someone suspicious...$"

Route103ConcordBridgeGuard_Text_6:
# 571 "data/maps/Route103/scripts.pory"
	.string "Nevermind$"

Route103ConcordBridgeGuard_Text_7:
# 574 "data/maps/Route103/scripts.pory"
	.string "There is a signpost right next to me...\n"
	.string "if you can't read, you can learn in the\l"
	.string "{COLOR BLUE}Devon Learning Center{COLOR DARK_GRAY} of {COLOR GREEN}Oldale Town{COLOR DARK_GRAY}.\p"
	.string "... I'm sorry, that was rather rude. I'm\n"
	.string "just having a rough day.\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_8:
# 580 "data/maps/Route103/scripts.pory"
	.string "Not too exciting - lots of standing\n"
	.string "around.\p"
	.string "We received reports of a prowling\n"
	.string "criminal in the vicinity, and I'm doing\l"
	.string "double shift because of it...\p"
	.string "Anything else?$"

Route103ConcordBridgeGuard_Text_9:
# 585 "data/maps/Route103/scripts.pory"
	.string "A battle? An odd request, but it could\n"
	.string "be a fun use of my allotted recess time.\p"
	.string "Let's do it!$"

Route103ConcordBridgeGuard_Text_10:
# 595 "data/maps/Route103/scripts.pory"
	.string "Thank you. That really helped stretch\n"
	.string "the good old battling muscle!$"

Route103ConcordBridgeGuard_Text_11:
# 601 "data/maps/Route103/scripts.pory"
	.string "You don't say...? And he's right behind\n"
	.string "that truck?\p"
	.string "Very well... here's what we'll do. I want\n"
	.string "you to distract him for a bit.\p"
	.string "I'll tell my partner to approach from\n"
	.string "the customs building, and we'll do a\l"
	.string "pince maneuver.\p"
	.string "We're counting on you!$"

Route103ConcordBridgeGuard_Text_12:
# 618 "data/maps/Route103/scripts.pory"
	.string "Quickly, go distract that criminal -\n"
	.string "before he notices something is off!$"

Route103ConcordBridgeGuard_Text_13:
# 621 "data/maps/Route103/scripts.pory"
	.string "I got to thank you for that battle.\p"
	.string "If I get strong enough, maybe they'll\n"
	.string "send me somewhere other than this\l"
	.string "bridge in the boonies.$"

Route103ConcordBridgeGuard_Text_14:
# 625 "data/maps/Route103/scripts.pory"
	.string "Wherever he is now, that con man is not\n"
	.string "our concern anymore.\p"
	.string "He didn't look that dangerous anyway!$"

Route103ConcordConartist_Text_0:
# 646 "data/maps/Route103/scripts.pory"
	.string "Hey kid! Wanna earn some quick and easy\n"
	.string "pokeyen? You look like you could use it!$"

Route103ConcordConartist_Text_1:
# 647 "data/maps/Route103/scripts.pory"
	.string "Yes$"

Route103ConcordConartist_Text_2:
# 647 "data/maps/Route103/scripts.pory"
	.string "No$"

Route103ConcordConartist_Text_3:
# 650 "data/maps/Route103/scripts.pory"
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
# 662 "data/maps/Route103/scripts.pory"
	.string "Eh, scram then. Some of us have work to\n"
	.string "do.$"

Route103ConcordConartist_Text_5:
# 668 "data/maps/Route103/scripts.pory"
	.string "Come on, go distract him! I don't care\n"
	.string "how, that's what I'm paying you for!\p"
	.string "And no, I'm not into upfront payments,\n"
	.string "thank you. Cash after!$"

Route103ConcordConartist_Text_6:
# 674 "data/maps/Route103/scripts.pory"
	.string "What the hell are you doing? You barely\n"
	.string "distracted him - you got to be more of a\l"
	.string "nuisance!$"

Route103ConcordConartist_Text_7:
# 678 "data/maps/Route103/scripts.pory"
	.string "Hold it right there! You're surrounded!$"

Route103ConcordConartist_Text_8:
# 699 "data/maps/Route103/scripts.pory"
	.string "What the...?$"

Route103ConcordConartist_Text_9:
# 703 "data/maps/Route103/scripts.pory"
	.string "You two-faced bastard - you set me up!\n"
	.string "You're going to get it now!\p"
	.string "No one slips Jimmy McGligar, best\n"
	.string "Pokémon egg seller of Hoenn!$"

Route103ConcordConartist_Text_10:
# 709 "data/maps/Route103/scripts.pory"
	.string "You'll never catch me alive! Outta my\n"
	.string "way!$"

Route103ConcordConartist_Text_11:
# 715 "data/maps/Route103/scripts.pory"
	.string "W-wait, you're unde-...!$"

Route103ConcordConartist_Text_12:
# 720 "data/maps/Route103/scripts.pory"
	.string "SEE YA, LOSERS...!$"

Route103ConcordConartist_Text_13:
# 725 "data/maps/Route103/scripts.pory"
	.string "GRLBGBRLB...!$"

Route103ConcordConartist_Text_14:
# 735 "data/maps/Route103/scripts.pory"
	.string "Such athleticism... he should stop\n"
	.string "conning, and become an acrobat.$"

Route103ConcordConartist_Text_15:
# 739 "data/maps/Route103/scripts.pory"
	.string "Indeed... at any rate, it's not our\n"
	.string "problem any more.$"

Route103ConcordConartist_Text_16:
# 751 "data/maps/Route103/scripts.pory"
	.string "Thank you for your help, civilian! Now we\n"
	.string "can put this long shift to an end.$"

Route103ConcordConartist_Text_17:
# 753 "data/maps/Route103/scripts.pory"
	.string "Here, this is for your trouble.$"

Route103ConcordConartist_Text_18:
# 755 "data/maps/Route103/scripts.pory"
	.string "Received 1000¥!$"

ConArtistEgg_Text_0:
# 785 "data/maps/Route103/scripts.pory"
	.string "Hands off my wares, pal! This egg is\n"
	.string "mine!$"

ConArtistEgg_Text_1:
# 791 "data/maps/Route103/scripts.pory"
	.string "The shady dealer left this egg behind...$"

ConArtistEgg_Text_2:
# 794 "data/maps/Route103/scripts.pory"
	.string "Obtained the Mysterious Egg!$"

RiverFerryGuyUp_Text_0:
# 807 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail upstream?$"

RiverFerryGuyUp_Text_1:
# 811 "data/maps/Route103/scripts.pory"
	.string "Then hop on!$"

RiverFerryGuyUp_Text_2:
# 828 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're going upstream, so it'll\n"
	.string "be a bit slow.$"

RiverFerryGuyUp_Text_3:
# 848 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back downstream.$"

RiverFerryGuyUp_Text_4:
# 861 "data/maps/Route103/scripts.pory"
	.string "Ah, shame... tell me if you ever do!$"

RiverFerryGuyDown_Text_0:
# 871 "data/maps/Route103/scripts.pory"
	.string "Hello! Would you like to sail\n"
	.string "downstream?$"

RiverFerryGuyDown_Text_1:
# 892 "data/maps/Route103/scripts.pory"
	.string "Off we go! We're sailing downstream, so\n"
	.string "brace yourself!$"

RiverFerryGuyDown_Text_2:
# 912 "data/maps/Route103/scripts.pory"
	.string "Here we are. I'll be waiting for when you\n"
	.string "want to sail back upstream.$"

RiverFerryBoat_Text_0:
# 934 "data/maps/Route103/scripts.pory"
	.string "It's an old boat, but it's well taken\n"
	.string "care of.$"

RiverFerryManNotThatEntry_Text_0:
# 943 "data/maps/Route103/scripts.pory"
	.string "Not so fast, young one...! If you want to\n"
	.string "board, do it after me.$"

FisherGuruRoute103_Text_0:
# 960 "data/maps/Route103/scripts.pory"
	.string "Sssh... did you hear that? Something...\n"
	.string "SOMETHING IS COMING!$"

FisherGuruRoute103_Text_1:
# 972 "data/maps/Route103/scripts.pory"
	.string "CRAAAAAAW!!$"

FisherGuruRoute103_Text_2:
# 978 "data/maps/Route103/scripts.pory"
	.string "AAH, CRAB BASKETS!$"

FisherGuruRoute103_Text_3:
# 980 "data/maps/Route103/scripts.pory"
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
# 987 "data/maps/Route103/scripts.pory"
	.string "I want you to take that rod and fish at\n"
	.string "least FIVE SPECIES OF POKÉMON!\p"
	.string "WHY? Because only then will the\n"
	.string "LEGENDARY MUDCRAB judge you as worthy,\l"
	.string "and show itself again!\p"
	.string "Do not question my intuition - just\n"
	.string "embrace it, and fulfil your destiny!!$"

FisherGuruRoute103_Text_5:
# 999 "data/maps/Route103/scripts.pory"
	.string "AHOY! How's the FISHING going!?$"

FisherGuruRoute103_Text_6:
# 1000 "data/maps/Route103/scripts.pory"
	.string "About your request...$"

FisherGuruRoute103_Text_7:
# 1000 "data/maps/Route103/scripts.pory"
	.string "Did you see the Mud Crab?$"

FisherGuruRoute103_Text_8:
# 1000 "data/maps/Route103/scripts.pory"
	.string "How's it going?$"

FisherGuruRoute103_Text_9:
# 1006 "data/maps/Route103/scripts.pory"
	.string "Ah, you've fished at least 5 Pokémon?\n"
	.string "Good, GOOD!\p"
	.string "I'm confident the Legendary Mud Crab\n"
	.string "will acknowledge you and show up.\p"
	.string "Let's wait a bit!$"

FisherGuruRoute103_Text_10:
# 1012 "data/maps/Route103/scripts.pory"
	.string "You and the fisher wait in a long,\n"
	.string "uncomfortable silence...$"

FisherGuruRoute103_Text_11:
# 1016 "data/maps/Route103/scripts.pory"
	.string "Hmm... I should have known. Such a\n"
	.string "measly fishing test...\p"
	.string "Is NOT ENOUGH to make the Mud Crab\n"
	.string "acknowledge you!\p"
	.string "I suppose I've got no choice... here,\n"
	.string "TAKE THIS!$"

FisherGuruRoute103_Text_12:
# 1021 "data/maps/Route103/scripts.pory"
	.string "I want you to use that rod to bring me a\n"
	.string "BIG PEARL!\p"
	.string "If you are a true fisher... you will know\n"
	.string "how.\p"
	.string "Do that, and I'm sure next time the Mud\n"
	.string "Crab will show itself!$"

FisherGuruRoute103_Text_13:
# 1029 "data/maps/Route103/scripts.pory"
	.string "Like I said, I need you to fish 5 species\n"
	.string "of Pokémon!\p"
	.string "If you are the fisher the Mud Crab\n"
	.string "believes you to be, you shouldn't need\l"
	.string "any guidance!\p"
	.string "O-of course I could give it, but that\n"
	.string "would defeat the purpose!$"

FisherGuruRoute103_Text_14:
# 1039 "data/maps/Route103/scripts.pory"
	.string "pearl$"

FisherGuruRoute103_Text_15:
# 1047 "data/maps/Route103/scripts.pory"
	.string "no pearl$"

FisherGuruRoute103_Text_16:
# 1054 "data/maps/Route103/scripts.pory"
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
# 1063 "data/maps/Route103/scripts.pory"
	.string "Ah, well, aside from the Mud Crab\n"
	.string "business... not very good, I must say.\p"
	.string "It's tough being a fisher in these parts\n"
	.string "nowadays. The sea is poisoned, the\l"
	.string "rivers are muddy...\p"
	.string "Most of my buddies have moved up north.\n"
	.string "But me, I like the challenge!$"

MoveTutorSign_Text_0:
# 1075 "data/maps/Route103/scripts.pory"
	.string "Move Tutor Colton's House$"

Sharpy103_Outro::
# 361 "data/maps/Route103/scripts.pory"
	.string "Heh... you're a soldier alright...!$"

Tourist103_Outro::
# 453 "data/maps/Route103/scripts.pory"
	.string "Wait a minute... yeah, you're not that \nthief. Sorry!$"

Veteran103_Intro::
# 549 "data/maps/Route103/scripts.pory"
	.string "They told me I'm too old to enlist...  but I'm\nstronger than you young'uns!\pI'll show you!$"

Veteran103_Outro::
# 552 "data/maps/Route103/scripts.pory"
	.string "Hmpf... not bad...$"

DevonGuard103_Outro::
# 636 "data/maps/Route103/scripts.pory"
	.string "That could have gone better...$"

ShadyDealer103_Outro::
# 776 "data/maps/Route103/scripts.pory"
	.string "I... I-I'm not going back to jail!$"
