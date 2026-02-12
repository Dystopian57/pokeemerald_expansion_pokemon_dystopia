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
	goto_if_unset Sharpy103Rematch, Sharpy103_2
Sharpy103_1:
# 240 "data/maps/Route103/scripts.pory"
	goto_if_set Sharpy103Rematch, Sharpy103_5
Sharpy103_4:
# 255 "data/maps/Route103/scripts.pory"
battleSharpy103:
# 256 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SHARPY_103, Sharpy103_Outro
# 257 "data/maps/Route103/scripts.pory"
	addobject 25
# 258 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 10, 4
# 259 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 260 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 261 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_0
# 262 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SAD
# 263 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 264 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_5
# 266 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 267 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 268 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_1
# 269 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_2
# 270 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 271 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 272 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 273 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_6
# 275 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 276 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 277 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 278 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_7
# 280 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 281 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 282 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 283 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_3
# 284 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_8
# 286 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 287 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 288 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 289 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_9
# 291 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 292 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 293 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 294 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_10
# 296 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 297 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 298 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 299 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_11
# 301 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 302 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 303 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_2
# 304 "data/maps/Route103/scripts.pory"
	waitmovement 25
# 305 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_1
# 306 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_CAMELIA ]
# 307 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_CAMELIA, EMOTE_ANGRY
# 308 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_12
# 310 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 311 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_SHOCK
# 312 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 313 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_3
# 314 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_13
# 316 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 317 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 318 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 319 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_14
# 320 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 321 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 322 "data/maps/Route103/scripts.pory"
	applymovement 25, Sharpy103_Movement_4
# 323 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_5
# 324 "data/maps/Route103/scripts.pory"
	waitmovement 24
# 325 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 326 "data/maps/Route103/scripts.pory"
	applymovement 24, Sharpy103_Movement_6
# 327 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 328 "data/maps/Route103/scripts.pory"
	setflag sharpynotinroute103
# 329 "data/maps/Route103/scripts.pory"
	setobjectxy 24, 79, 0
# 330 "data/maps/Route103/scripts.pory"
	setobjectxy 25, 79, 0
# 331 "data/maps/Route103/scripts.pory"
	setflag camelianotoutsideDLC
# 332 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_PHASE, 3
# 333 "data/maps/Route103/scripts.pory"
	releaseall
# 334 "data/maps/Route103/scripts.pory"
	playbgm MUS_ROUTE113, TRUE
	return

Sharpy103_2:
# 230 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 231 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_0
# 232 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 233 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 234 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 235 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_1
# 236 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 237 "data/maps/Route103/scripts.pory"
	setflag Sharpy103Rematch
# 238 "data/maps/Route103/scripts.pory"
	goto battleSharpy103
	goto Sharpy103_1

Sharpy103_5:
# 242 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 243 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_CONFUSED
# 244 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_2
# 245 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 246 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_NORMAL
# 247 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 248 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_3
# 249 "data/maps/Route103/scripts.pory"
	removefieldmugshot
# 250 "data/maps/Route103/scripts.pory"
	createfieldmugshot MUGSHOT_SHARPY, EMOTE_POKEBALL
# 251 "data/maps/Route103/scripts.pory"
	setspeaker [ SP_NAME_SHARPY ]
# 252 "data/maps/Route103/scripts.pory"
	msgbox Sharpy103_Text_4
# 253 "data/maps/Route103/scripts.pory"
	removefieldmugshot
	goto Sharpy103_4


Route103TouristApproach0::
# 343 "data/maps/Route103/scripts.pory"
	lockall
# 344 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 345 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 346 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 347 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 348 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 349 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach1::
# 353 "data/maps/Route103/scripts.pory"
	lockall
# 354 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 355 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 356 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 357 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 358 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach1_Movement_0
# 359 "data/maps/Route103/scripts.pory"
	waitmovement
# 360 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 361 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach2::
# 365 "data/maps/Route103/scripts.pory"
	lockall
# 366 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 367 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_RICH, TRUE
# 368 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 369 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 370 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach2_Movement_0
# 371 "data/maps/Route103/scripts.pory"
	waitmovement
# 372 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach0_Movement_1
# 373 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103TouristApproach3::
# 377 "data/maps/Route103/scripts.pory"
	lockall
# 378 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 379 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 380 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 381 "data/maps/Route103/scripts.pory"
	waitmovement
# 382 "data/maps/Route103/scripts.pory"
	msgbox Route103TouristApproach0_Text_0
# 383 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach3_Movement_0
# 384 "data/maps/Route103/scripts.pory"
	waitmovement
# 385 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach3_Movement_1
# 386 "data/maps/Route103/scripts.pory"
	goto touristafterapproach
	return


Route103Tourist::
# 390 "data/maps/Route103/scripts.pory"
	lockall
# 391 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 392 "data/maps/Route103/scripts.pory"
touristafterapproach:
# 393 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 0
	goto_if_eq Route103Tourist_2
Route103Tourist_1:
# 417 "data/maps/Route103/scripts.pory"
	compare VAR_103TOURISTQUEST, 1
	goto_if_eq Route103Tourist_5
Route103Tourist_4:
# 422 "data/maps/Route103/scripts.pory"
finishtouristscript:
# 423 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103Tourist_2:
# 395 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 396 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_0
# 397 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_TOURISTSHANE_103, Tourist103_Outro
# 400 "data/maps/Route103/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 402 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_1
# 403 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 404 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103TouristApproach0_Movement_0
# 405 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 406 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_2
# 407 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_1
# 408 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_3
# 410 "data/maps/Route103/scripts.pory"
	applymovement 27, Sharpy103_Movement_0
# 411 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_4
# 413 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 1
# 414 "data/maps/Route103/scripts.pory"
	goto finishtouristscript
	goto Route103Tourist_1

Route103Tourist_5:
# 419 "data/maps/Route103/scripts.pory"
	msgbox Route103Tourist_Text_5
	goto Route103Tourist_4


Route103Touristbikepushed::
# 432 "data/maps/Route103/scripts.pory"
	lockall
# 433 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 434 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 435 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 436 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_0
# 437 "data/maps/Route103/scripts.pory"
	closemessage
# 439 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 440 "data/maps/Route103/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 441 "data/maps/Route103/scripts.pory"
	playse SE_BIKE_HOP
# 442 "data/maps/Route103/scripts.pory"
	special SpawnCameraObject
# 443 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route103Touristbikepushed_Movement_1
# 444 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 445 "data/maps/Route103/scripts.pory"
	special RemoveCameraObject
# 446 "data/maps/Route103/scripts.pory"
	setobjectxy 27, 0, 0
# 447 "data/maps/Route103/scripts.pory"
	setobjectxy 26, 0, 0
# 448 "data/maps/Route103/scripts.pory"
	setflag touristhelped
# 449 "data/maps/Route103/scripts.pory"
	clearflag touristonbike
# 450 "data/maps/Route103/scripts.pory"
	addobject 29
# 451 "data/maps/Route103/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 22, 9
# 452 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sharpy103_Movement_1
# 453 "data/maps/Route103/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 454 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_1
# 455 "data/maps/Route103/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 456 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103TouristApproach0_Movement_1
# 457 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_2
# 459 "data/maps/Route103/scripts.pory"
	applymovement 29, Sharpy103_Movement_3
# 460 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_3
# 462 "data/maps/Route103/scripts.pory"
	applymovement 29, Route103Touristbikepushed_Movement_2
# 463 "data/maps/Route103/scripts.pory"
	waitmovement
# 465 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8004, 2
# 466 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8005, 6
# 467 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8006, 4
# 468 "data/maps/Route103/scripts.pory"
	setvar VAR_0x8007, 4
# 469 "data/maps/Route103/scripts.pory"
	special ShakeCamera
# 470 "data/maps/Route103/scripts.pory"
	playse SE_M_STRENGTH
# 471 "data/maps/Route103/scripts.pory"
	waitse
# 473 "data/maps/Route103/scripts.pory"
	msgbox Route103Touristbikepushed_Text_4
# 475 "data/maps/Route103/scripts.pory"
	removeobject 29
# 476 "data/maps/Route103/scripts.pory"
	setflag touristonbike
# 478 "data/maps/Route103/scripts.pory"
	setvar VAR_103TOURISTQUEST, 2
# 479 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103TouristNotThatWay::
# 484 "data/maps/Route103/scripts.pory"
	lockall
# 485 "data/maps/Route103/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 486 "data/maps/Route103/scripts.pory"
	applymovement 27, Route103Touristbikepushed_Movement_0
# 487 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 489 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103TouristApproach1_Movement_0
# 490 "data/maps/Route103/scripts.pory"
	waitmovement
# 491 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103VeteranBattle::
# 495 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro, Route103VeteranRegister
# 496 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 497 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103VeteranRematch
# 498 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranBattle_Text_0
# 499 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRegister::
# 504 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 505 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 506 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRegister_Text_0
# 507 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_VETERAN_103
# 508 "data/maps/Route103/scripts.pory"
	release
	end


Route103VeteranRematch::
# 513 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_VETERAN_103, Veteran103_Intro, Veteran103_Outro
# 514 "data/maps/Route103/scripts.pory"
	msgbox Route103VeteranRematch_Text_0
	end


# 224 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_0:
# 224 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 268 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_1:
# 268 "data/maps/Route103/scripts.pory"
	face_right
	step_end

# 269 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_2:
# 269 "data/maps/Route103/scripts.pory"
	jump_in_place_left
	step_end

# 283 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_3:
# 283 "data/maps/Route103/scripts.pory"
	face_left
	step_end

# 322 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_4:
# 322 "data/maps/Route103/scripts.pory"
	jump_2_down
# 322 "data/maps/Route103/scripts.pory"
	walk_down
# 322 "data/maps/Route103/scripts.pory"
	walk_down
# 322 "data/maps/Route103/scripts.pory"
	walk_down
# 322 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 323 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_5:
# 323 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 323 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 323 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 326 "data/maps/Route103/scripts.pory"
Sharpy103_Movement_6:
# 326 "data/maps/Route103/scripts.pory"
	jump_2_down
# 326 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 326 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 326 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 326 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 326 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 326 "data/maps/Route103/scripts.pory"
	walk_fast_down
# 326 "data/maps/Route103/scripts.pory"
	walk_fast_down
	step_end

# 346 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_0:
# 346 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 348 "data/maps/Route103/scripts.pory"
Route103TouristApproach0_Movement_1:
# 348 "data/maps/Route103/scripts.pory"
	face_down
	step_end

# 358 "data/maps/Route103/scripts.pory"
Route103TouristApproach1_Movement_0:
# 358 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 370 "data/maps/Route103/scripts.pory"
Route103TouristApproach2_Movement_0:
# 370 "data/maps/Route103/scripts.pory"
	walk_up
# 370 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 383 "data/maps/Route103/scripts.pory"
Route103TouristApproach3_Movement_0:
# 383 "data/maps/Route103/scripts.pory"
	walk_up
# 383 "data/maps/Route103/scripts.pory"
	walk_up
# 383 "data/maps/Route103/scripts.pory"
	walk_up
	step_end

# 385 "data/maps/Route103/scripts.pory"
Route103TouristApproach3_Movement_1:
# 385 "data/maps/Route103/scripts.pory"
	face_up
	step_end

# 434 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_0:
# 434 "data/maps/Route103/scripts.pory"
	emote_exclamation_mark
# 434 "data/maps/Route103/scripts.pory"
	face_player
	step_end

# 443 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_1:
# 443 "data/maps/Route103/scripts.pory"
	walk_up
# 443 "data/maps/Route103/scripts.pory"
	walk_up
# 443 "data/maps/Route103/scripts.pory"
	walk_up
# 443 "data/maps/Route103/scripts.pory"
	walk_up
# 443 "data/maps/Route103/scripts.pory"
	walk_up
# 443 "data/maps/Route103/scripts.pory"
	walk_left
	step_end

# 462 "data/maps/Route103/scripts.pory"
Route103Touristbikepushed_Movement_2:
# 462 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 462 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 462 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 462 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 462 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 462 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 462 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 462 "data/maps/Route103/scripts.pory"
	walk_fast_right
	step_end

Sharpy103_Text_0:
# 231 "data/maps/Route103/scripts.pory"
	.string "Heh, it's about time you showed up,\n"
	.string "Slowpoke! Let's do this!$"

Sharpy103_Text_1:
# 235 "data/maps/Route103/scripts.pory"
	.string "Remember - if I win, you got to tell me\n"
	.string "about the war!$"

Sharpy103_Text_2:
# 244 "data/maps/Route103/scripts.pory"
	.string "You can't fool me... I could tell you were\n"
	.string "going EASY on me last time!$"

Sharpy103_Text_3:
# 248 "data/maps/Route103/scripts.pory"
	.string "This can't be how strong a soldier is! So\n"
	.string "our last battle doesn't count!$"

Sharpy103_Text_4:
# 252 "data/maps/Route103/scripts.pory"
	.string "Now show me what you can REALLY do, and\n"
	.string "don't hold back!$"

Sharpy103_Text_5:
# 264 "data/maps/Route103/scripts.pory"
	.string "Oh man... I was so close to beating you!$"

Sharpy103_Text_6:
# 273 "data/maps/Route103/scripts.pory"
	.string "I'm the one who's beating you, if you\n"
	.string "don't hurry up! It's almost curfew!$"

Sharpy103_Text_7:
# 278 "data/maps/Route103/scripts.pory"
	.string "Y-you're right...! Norman is going to be\n"
	.string "PISSED...$"

Sharpy103_Text_8:
# 284 "data/maps/Route103/scripts.pory"
	.string "But don't think I've given up, uhm...\n"
	.string "what's your name? {PLAYER} you say?$"

Sharpy103_Text_9:
# 289 "data/maps/Route103/scripts.pory"
	.string "Well, {PLAYER}... I officially challenge\n"
	.string "you to a REMATCH in Petalburg's Dojo!$"

Sharpy103_Text_10:
# 294 "data/maps/Route103/scripts.pory"
	.string "Wait... you know Petalburg, right? It's\n"
	.string "west of here, across Rout- no, ROAD\l"
	.string "104!$"

Sharpy103_Text_11:
# 299 "data/maps/Route103/scripts.pory"
	.string "It's so fun - it's got an arcade, and a\n"
	.string "wild zone, and a beach nearby and a...$"

Sharpy103_Text_12:
# 308 "data/maps/Route103/scripts.pory"
	.string "SHARPY! Last WARNING!$"

Sharpy103_Text_13:
# 314 "data/maps/Route103/scripts.pory"
	.string "S-sorry! Just come visit - you'll see\n"
	.string "for yourself!$"

Sharpy103_Text_14:
# 319 "data/maps/Route103/scripts.pory"
	.string "Really got to go now - you better train\n"
	.string "for our rematch!$"

Route103TouristApproach0_Text_0:
# 347 "data/maps/Route103/scripts.pory"
	.string "Hey, you!$"

Route103Tourist_Text_0:
# 396 "data/maps/Route103/scripts.pory"
	.string "You're the one who mugged me! You're\n"
	.string "not getting away!$"

Route103Tourist_Text_1:
# 402 "data/maps/Route103/scripts.pory"
	.string "Uhm... I'm sorry. I dropped my glasses,\n"
	.string "and I mistook you for that thief...!$"

Route103Tourist_Text_2:
# 406 "data/maps/Route103/scripts.pory"
	.string "What thief? The one who stole all my\n"
	.string "pokeyen!$"

Route103Tourist_Text_3:
# 408 "data/maps/Route103/scripts.pory"
	.string "And that's not the worse... he threw my\n"
	.string "bike to the mud there, so that I\l"
	.string "couldn't chase him!$"

Route103Tourist_Text_4:
# 411 "data/maps/Route103/scripts.pory"
	.string "I tried to get it out, but it's stuck\n"
	.string "real bad... if only me or my Pokémon had\l"
	.string "enough {COLOR RED}STRENGTH{COLOR DARK_GRAY}!$"

Route103Tourist_Text_5:
# 419 "data/maps/Route103/scripts.pory"
	.string "I'm not leaving without my bike. It\n"
	.string "costed me 1,000,000¥ at Cerulean City's\l"
	.string "Bike Shop!$"

Route103Touristbikepushed_Text_0:
# 436 "data/maps/Route103/scripts.pory"
	.string "Y-you did it! IT'S OUT! Wait, I'll take it\n"
	.string "from here!$"

Route103Touristbikepushed_Text_1:
# 454 "data/maps/Route103/scripts.pory"
	.string "Thank you so much! Here - I got this as\n"
	.string "a souvenir, but you can have it!$"

Route103Touristbikepushed_Text_2:
# 457 "data/maps/Route103/scripts.pory"
	.string "Well, these have been some thrilling\n"
	.string "holidays... but I should catch a boat in\l"
	.string "Slateport, and go back home.$"

Route103Touristbikepushed_Text_3:
# 460 "data/maps/Route103/scripts.pory"
	.string "If you ever make a trip to Cinnabar\n"
	.string "Island, I'll return the favour properly.\l"
	.string "Safe travels now!$"

Route103Touristbikepushed_Text_4:
# 473 "data/maps/Route103/scripts.pory"
	.string "Ooow ow ow... I need a new pair of\n"
	.string "glasses...$"

Route103VeteranBattle_Text_0:
# 498 "data/maps/Route103/scripts.pory"
	.string "I guess not all of you youngsters are\n"
	.string "weak. Perhaps Hoenn is in good hands.$"

Route103VeteranRegister_Text_0:
# 506 "data/maps/Route103/scripts.pory"
	.string "Number registered.$"

Route103VeteranRematch_Text_0:
# 514 "data/maps/Route103/scripts.pory"
	.string "Rematch ended.$"

Sharpy103_Outro::
# 337 "data/maps/Route103/scripts.pory"
	.string "Damn it... there goes my 100 IQ plan...$"

Tourist103_Outro::
# 427 "data/maps/Route103/scripts.pory"
	.string "Wait a minute... yeah, you're not that \nthief. Sorry!$"

Veteran103_Intro::
# 519 "data/maps/Route103/scripts.pory"
	.string "They told me I'm too old to enlist...  but I'm \nstronger than you young'uns! \p I'll show you!$"

Veteran103_Outro::
# 523 "data/maps/Route103/scripts.pory"
	.string "Hmpf... not bad...$"
