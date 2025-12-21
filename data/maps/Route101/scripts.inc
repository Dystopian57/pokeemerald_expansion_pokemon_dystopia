# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 3 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 4 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 5 "data/maps/Route101/scripts.pory"
	.byte 0
# 6 "data/maps/Route101/scripts.pory"

# 7 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 8 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 9 "data/maps/Route101/scripts.pory"
	end
# 10 "data/maps/Route101/scripts.pory"

# 11 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 12 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 13 "data/maps/Route101/scripts.pory"
	.2byte 0
# 14 "data/maps/Route101/scripts.pory"

# 15 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 16 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 17 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 18 "data/maps/Route101/scripts.pory"
	end
# 19 "data/maps/Route101/scripts.pory"

# 20 "data/maps/Route101/scripts.pory"

# 21 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 22 "data/maps/Route101/scripts.pory"
	lockall
# 23 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 24 "data/maps/Route101/scripts.pory"
	closemessage
# 25 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 26 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route101/scripts.pory"
	releaseall
# 28 "data/maps/Route101/scripts.pory"
	end
# 29 "data/maps/Route101/scripts.pory"

# 30 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 31 "data/maps/Route101/scripts.pory"
	lockall
# 32 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 33 "data/maps/Route101/scripts.pory"
	closemessage
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 35 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route101/scripts.pory"
	releaseall
# 37 "data/maps/Route101/scripts.pory"
	end
# 38 "data/maps/Route101/scripts.pory"

# 39 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 40 "data/maps/Route101/scripts.pory"
	lockall
# 41 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 42 "data/maps/Route101/scripts.pory"
	closemessage
# 43 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 44 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route101/scripts.pory"
	releaseall
# 46 "data/maps/Route101/scripts.pory"
	end
# 47 "data/maps/Route101/scripts.pory"

# 48 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 49 "data/maps/Route101/scripts.pory"
	walk_up
# 50 "data/maps/Route101/scripts.pory"
	step_end
# 51 "data/maps/Route101/scripts.pory"

# 52 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 53 "data/maps/Route101/scripts.pory"
	walk_right
# 54 "data/maps/Route101/scripts.pory"
	step_end
# 55 "data/maps/Route101/scripts.pory"

# 56 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 57 "data/maps/Route101/scripts.pory"
	walk_down
# 58 "data/maps/Route101/scripts.pory"
	step_end
# 59 "data/maps/Route101/scripts.pory"

# 60 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 61 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 62 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 63 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 64 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 65 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 66 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 67 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 68 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 69 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 70 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 72 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 73 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 74 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 75 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 76 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 77 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 78 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 79 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 80 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 81 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 82 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 83 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 91 "data/maps/Route101/scripts.pory"
	step_end
# 92 "data/maps/Route101/scripts.pory"

# 93 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route101/scripts.pory"
	step_end
# 101 "data/maps/Route101/scripts.pory"

# 102 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 103 "data/maps/Route101/scripts.pory"
	step_end
# 104 "data/maps/Route101/scripts.pory"

# 105 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 106 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 107 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 108 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 109 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 110 "data/maps/Route101/scripts.pory"
	step_end
# 111 "data/maps/Route101/scripts.pory"

# 112 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 118 "data/maps/Route101/scripts.pory"
	step_end
# 119 "data/maps/Route101/scripts.pory"

# 120 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 151 "data/maps/Route101/scripts.pory"
	step_end
# 152 "data/maps/Route101/scripts.pory"

# 153 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 160 "data/maps/Route101/scripts.pory"
	step_end
# 161 "data/maps/Route101/scripts.pory"

# 162 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 163 "data/maps/Route101/scripts.pory"
	step_end
# 164 "data/maps/Route101/scripts.pory"

# 165 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 166 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 167 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 168 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 169 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 170 "data/maps/Route101/scripts.pory"
	step_end
# 171 "data/maps/Route101/scripts.pory"

# 172 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 173 "data/maps/Route101/scripts.pory"
	walk_up
# 174 "data/maps/Route101/scripts.pory"
	walk_up
# 175 "data/maps/Route101/scripts.pory"
	step_end
# 176 "data/maps/Route101/scripts.pory"

# 177 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 178 "data/maps/Route101/scripts.pory"
	walk_up
# 179 "data/maps/Route101/scripts.pory"
	walk_left
# 180 "data/maps/Route101/scripts.pory"
	walk_up
# 181 "data/maps/Route101/scripts.pory"
	step_end
# 182 "data/maps/Route101/scripts.pory"

# 183 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 184 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 185 "data/maps/Route101/scripts.pory"
	end
# 186 "data/maps/Route101/scripts.pory"

# 187 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 188 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 189 "data/maps/Route101/scripts.pory"
	end
# 190 "data/maps/Route101/scripts.pory"

# 191 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 192 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 193 "data/maps/Route101/scripts.pory"
	end
# 194 "data/maps/Route101/scripts.pory"

# 195 "data/maps/Route101/scripts.pory"

# 196 "data/maps/Route101/scripts.pory"

# 197 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 198 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 199 "data/maps/Route101/scripts.pory"
	return
# 200 "data/maps/Route101/scripts.pory"

# 201 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 202 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 203 "data/maps/Route101/scripts.pory"
	return
# 204 "data/maps/Route101/scripts.pory"

# 205 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 206 "data/maps/Route101/scripts.pory"
	walk_right
# 207 "data/maps/Route101/scripts.pory"
	step_end
# 208 "data/maps/Route101/scripts.pory"

# 209 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 210 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 211 "data/maps/Route101/scripts.pory"

# 212 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 213 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 214 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 215 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 216 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 217 "data/maps/Route101/scripts.pory"

# 218 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 219 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 220 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 221 "data/maps/Route101/scripts.pory"

# 222 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 223 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 224 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 225 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 226 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 227 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 228 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 229 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 230 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 231 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 232 "data/maps/Route101/scripts.pory"

# 233 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 234 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 235 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 236 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 237 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 238 "data/maps/Route101/scripts.pory"

# 239 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 240 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 241 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 242 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 243 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 244 "data/maps/Route101/scripts.pory"

# 245 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 246 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 247 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101OrphanJoelBattle::
# 254 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_ORPHAN_MALE_101, Orphan101_Intro, Orphan101_Outro
# 255 "data/maps/Route101/scripts.pory"
	goto_if_unset JoelgivesTM, Route101OrphanJoelBattle_2
# 268 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelBattle_Text_3
Route101OrphanJoelBattle_1:
# 269 "data/maps/Route101/scripts.pory"
Joelfinish:
# 270 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101OrphanJoelBattle_2:
# 256 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelBattle_Movement_0
# 257 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelBattle_Text_0
# 258 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelBattle_Movement_1
# 259 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelBattle_Text_1
# 262 "data/maps/Route101/scripts.pory"
	waitmessage
# 263 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM43
# 264 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelBattle_Text_2
# 266 "data/maps/Route101/scripts.pory"
	setflag JoelgivesTM
# 267 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoelBattle_1


Route101RebelGruntBattle::
# 282 "data/maps/Route101/scripts.pory"
	goto_if_unset rebel101defeated, Route101RebelGruntBattle_2
# 288 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_2
Route101RebelGruntBattle_1:
# 289 "data/maps/Route101/scripts.pory"
	waitmessage
# 290 "data/maps/Route101/scripts.pory"
rebel101end:
# 291 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101RebelGruntBattle_2:
# 283 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_0
# 284 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_GRUNT_101, Rebel101_Outro
# 285 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_1
# 286 "data/maps/Route101/scripts.pory"
	setflag rebel101defeated
# 287 "data/maps/Route101/scripts.pory"
	goto rebel101end
	goto Route101RebelGruntBattle_1


Rebel101_Intro2::
# 302 "data/maps/Route101/scripts.pory"
	msgbox Rebel101_Intro2_Text_0
# 303 "data/maps/Route101/scripts.pory"
	msgbox Rebel101_Intro2_Text_1
# 304 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Rebel101_Intro2_Text_2, Rebel101_Intro2_Text_3
# 305 "data/maps/Route101/scripts.pory"
	waitmessage
# 307 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Rebel101_Intro2_2
Rebel101_Intro2_1:
# 315 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rebel101_Intro2_4
	return

Rebel101_Intro2_2:
# 308 "data/maps/Route101/scripts.pory"
	msgbox Rebel101_Intro2_Text_4
# 309 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 310 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Rebel101_Intro2_Movement_0
# 311 "data/maps/Route101/scripts.pory"
	msgbox Rebel101_Intro2_Text_5
	goto Rebel101_Intro2_1

Rebel101_Intro2_4:
# 316 "data/maps/Route101/scripts.pory"
	msgbox Rebel101_Intro2_Text_6
	return


# 256 "data/maps/Route101/scripts.pory"
Route101OrphanJoelBattle_Movement_0:
# 256 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 258 "data/maps/Route101/scripts.pory"
Route101OrphanJoelBattle_Movement_1:
# 258 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 310 "data/maps/Route101/scripts.pory"
Rebel101_Intro2_Movement_0:
# 310 "data/maps/Route101/scripts.pory"
	jump_in_place_up
	step_end

Route101OrphanJoelBattle_Text_0:
# 257 "data/maps/Route101/scripts.pory"
	.string "See that tent over there? It's my\n"
	.string "Secret Shelter.$"

Route101OrphanJoelBattle_Text_1:
# 259 "data/maps/Route101/scripts.pory"
	.string "Lots of people lived in weird places\n"
	.string "during the war, to hide from the bad\l"
	.string "guys.\p"
	.string "They do it now too, if they don't have\n"
	.string "anywhere else to go. You look a bit like\l"
	.string "them, so you can have this.$"

Route101OrphanJoelBattle_Text_2:
# 264 "data/maps/Route101/scripts.pory"
	.string "If you teach Secret Power to a Pokémon,\n"
	.string "you can make shelters in all sorts of\l"
	.string "places.\p"
	.string "Some have special things about them...\n"
	.string "but I won't tell you about mine!$"

Route101OrphanJoelBattle_Text_3:
# 268 "data/maps/Route101/scripts.pory"
	.string "Are you using it?$"

Route101RebelGruntBattle_Text_0:
# 283 "data/maps/Route101/scripts.pory"
	.string "Start here$"

Route101RebelGruntBattle_Text_1:
# 285 "data/maps/Route101/scripts.pory"
	.string "Continue here$"

Route101RebelGruntBattle_Text_2:
# 288 "data/maps/Route101/scripts.pory"
	.string "postbattle idle$"

Rebel101_Intro2_Text_0:
# 302 "data/maps/Route101/scripts.pory"
	.string "Hey girl! Wowie, that's a cute Safemon\n"
	.string "you got there.$"

Rebel101_Intro2_Text_1:
# 303 "data/maps/Route101/scripts.pory"
	.string "Hand it over$"

Rebel101_Intro2_Text_2:
# 304 "data/maps/Route101/scripts.pory"
	.string "Obey$"

Rebel101_Intro2_Text_3:
# 304 "data/maps/Route101/scripts.pory"
	.string "Refuse$"

Rebel101_Intro2_Text_4:
# 308 "data/maps/Route101/scripts.pory"
	.string "Awesome.$"

Rebel101_Intro2_Text_5:
# 311 "data/maps/Route101/scripts.pory"
	.string "Looks like your Pokémon has more guts\n"
	.string "than you! Hahaha!\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Rebel101_Intro2_Text_6:
# 316 "data/maps/Route101/scripts.pory"
	.string "Playing brave huh? You really don't look\n"
	.string "the type.\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Orphan101_Intro::
# 274 "data/maps/Route101/scripts.pory"
	.string "Hey! You can't go into my Secret Shelter!$"

Orphan101_Outro::
# 277 "data/maps/Route101/scripts.pory"
	.string "... you still can't go into my Secret\n Shelter.$"

Rebel101_Intro::
# 295 "data/maps/Route101/scripts.pory"
	.string "I will rob you.$"

Rebel101_Outro::
# 298 "data/maps/Route101/scripts.pory"
	.string "Dammit... you're strong.$"
