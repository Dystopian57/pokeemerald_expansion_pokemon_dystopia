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

Route101OrphanJoelApproach0::
# 252 "data/maps/Route101/scripts.pory"
	lockall
# 253 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 254 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 255 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 256 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 257 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 258 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach1::
# 262 "data/maps/Route101/scripts.pory"
	lockall
# 263 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 264 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 265 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 266 "data/maps/Route101/scripts.pory"
	waitmovement
# 267 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 268 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach1_Movement_0
# 269 "data/maps/Route101/scripts.pory"
	waitmovement
# 270 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 271 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach2::
# 275 "data/maps/Route101/scripts.pory"
	lockall
# 276 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 277 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 278 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 279 "data/maps/Route101/scripts.pory"
	waitmovement
# 280 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 281 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach1_Movement_0
# 282 "data/maps/Route101/scripts.pory"
	waitmovement
# 283 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 284 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach3::
# 288 "data/maps/Route101/scripts.pory"
	lockall
# 289 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 290 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 291 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 292 "data/maps/Route101/scripts.pory"
	waitmovement
# 293 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 294 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach1_Movement_0
# 295 "data/maps/Route101/scripts.pory"
	waitmovement
# 296 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 297 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelBattle::
# 301 "data/maps/Route101/scripts.pory"
	lockall
# 302 "data/maps/Route101/scripts.pory"
orphanafterapproach:
# 303 "data/maps/Route101/scripts.pory"
	goto_if_unset JoelgivesTM, Route101OrphanJoelBattle_2
Route101OrphanJoelBattle_1:
# 320 "data/maps/Route101/scripts.pory"
	goto_if_set JoelgivesTM, Route101OrphanJoelBattle_5
Route101OrphanJoelBattle_4:
# 324 "data/maps/Route101/scripts.pory"
Joelfinish:
# 325 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101OrphanJoelBattle_2:
# 304 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelBattle_Text_0
# 305 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_ORPHAN_MALE_101, Orphan101_Outro
# 306 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 307 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelBattle_Movement_0
# 308 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelBattle_Text_1
# 309 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelBattle_Movement_1
# 310 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelBattle_Text_2
# 313 "data/maps/Route101/scripts.pory"
	waitmessage
# 314 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM43
# 315 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelBattle_Text_3
# 317 "data/maps/Route101/scripts.pory"
	setflag JoelgivesTM
# 318 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELGIVESSECRETPOWER, 1
# 319 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoelBattle_1

Route101OrphanJoelBattle_5:
# 321 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelBattle_Movement_1
# 322 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelBattle_Text_4
	goto Route101OrphanJoelBattle_4


Route101RebelApproach0::
# 335 "data/maps/Route101/scripts.pory"
	lockall
# 336 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 337 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 338 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 339 "data/maps/Route101/scripts.pory"
	waitmovement
# 340 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 341 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 342 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach1::
# 346 "data/maps/Route101/scripts.pory"
	lockall
# 347 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 348 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 349 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 350 "data/maps/Route101/scripts.pory"
	waitmovement
# 351 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 352 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach1_Movement_0
# 353 "data/maps/Route101/scripts.pory"
	waitmovement
# 354 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 355 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach2::
# 359 "data/maps/Route101/scripts.pory"
	lockall
# 360 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 361 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 362 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 363 "data/maps/Route101/scripts.pory"
	waitmovement
# 364 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 365 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelApproach2_Movement_0
# 366 "data/maps/Route101/scripts.pory"
	waitmovement
# 367 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 368 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach3::
# 372 "data/maps/Route101/scripts.pory"
	lockall
# 373 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 374 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 375 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 376 "data/maps/Route101/scripts.pory"
	waitmovement
# 377 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 378 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelApproach3_Movement_0
# 379 "data/maps/Route101/scripts.pory"
	waitmovement
# 380 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 381 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelGruntBattle::
# 386 "data/maps/Route101/scripts.pory"
rebelafterapproach:
# 387 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 388 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_0
# 389 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_1
# 390 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_2, Route101RebelGruntBattle_Text_3
# 391 "data/maps/Route101/scripts.pory"
	waitmessage
# 393 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_2
Route101RebelGruntBattle_1:
# 406 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_5
Route101RebelGruntBattle_4:
# 410 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_GRUNT_101, Rebel101_Outro
# 411 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 412 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_7
# 414 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 415 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_3
# 416 "data/maps/Route101/scripts.pory"
repeathit:
# 417 "data/maps/Route101/scripts.pory"
	setspeaker [ NULL ]
# 418 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_8
# 419 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_9, Route101RebelGruntBattle_Text_10
# 421 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_8
Route101RebelGruntBattle_7:
# 436 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_11
Route101RebelGruntBattle_10:
# 448 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 449 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_17
# 450 "data/maps/Route101/scripts.pory"
	playse SE_FLEE
# 451 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_4
# 452 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 453 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_18
# 454 "data/maps/Route101/scripts.pory"
	removeobject 3
# 455 "data/maps/Route101/scripts.pory"
	setflag rebel101runsaway
# 456 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 457 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101REBELFLEES, 1
# 458 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101RebelGruntBattle_2:
# 394 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 395 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_4
# 396 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 397 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_0
# 398 "data/maps/Route101/scripts.pory"
	waitmovement
# 399 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_1
# 400 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101RebelGruntBattle_Movement_2
# 401 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 402 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_5
	goto Route101RebelGruntBattle_1

Route101RebelGruntBattle_5:
# 407 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_6
	goto Route101RebelGruntBattle_4

Route101RebelGruntBattle_8:
# 422 "data/maps/Route101/scripts.pory"
	checkplayergender
# 423 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_14
Route101RebelGruntBattle_13:
# 429 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_18
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_11:
# 437 "data/maps/Route101/scripts.pory"
	checkplayergender
# 438 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_16
	goto Route101RebelGruntBattle_10

Route101RebelGruntBattle_14:
# 424 "data/maps/Route101/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 425 "data/maps/Route101/scripts.pory"
	waitse
# 426 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_11
	goto Route101RebelGruntBattle_13

Route101RebelGruntBattle_16:
# 439 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 440 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_14
# 441 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 442 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_15
# 443 "data/maps/Route101/scripts.pory"
	goto repeathit
# 444 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_20
	goto Route101RebelGruntBattle_10

Route101RebelGruntBattle_18:
# 430 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 431 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_12
# 432 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 433 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_13
# 434 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_20:
# 445 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_16
	goto Route101RebelGruntBattle_10


Route101GruntBatHitShake::
# 466 "data/maps/Route101/scripts.pory"
	playse SE_EFFECTIVE
# 467 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 2
# 468 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8005, 6
# 469 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8006, 4
# 470 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8007, 4
# 471 "data/maps/Route101/scripts.pory"
	special ShakeCamera
	return


# 255 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach0_Movement_0:
# 255 "data/maps/Route101/scripts.pory"
	emote_exclamation_mark
	step_end

# 257 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach0_Movement_1:
# 257 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 268 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach1_Movement_0:
# 268 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 307 "data/maps/Route101/scripts.pory"
Route101OrphanJoelBattle_Movement_0:
# 307 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 309 "data/maps/Route101/scripts.pory"
Route101OrphanJoelBattle_Movement_1:
# 309 "data/maps/Route101/scripts.pory"
	face_player
	step_end

# 365 "data/maps/Route101/scripts.pory"
Route101RebelApproach2_Movement_0:
# 365 "data/maps/Route101/scripts.pory"
	walk_down
# 365 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 378 "data/maps/Route101/scripts.pory"
Route101RebelApproach3_Movement_0:
# 378 "data/maps/Route101/scripts.pory"
	walk_down
# 378 "data/maps/Route101/scripts.pory"
	walk_down
# 378 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 397 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_0:
# 397 "data/maps/Route101/scripts.pory"
	jump_in_place_up
	step_end

# 399 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_1:
# 399 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 399 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 400 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_2:
# 400 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 400 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 415 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_3:
# 415 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 451 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_4:
# 451 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 451 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 451 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 451 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 451 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 451 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 451 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

Route101OrphanJoelApproach0_Text_0:
# 256 "data/maps/Route101/scripts.pory"
	.string "Hey, stop!$"

Route101OrphanJoelBattle_Text_0:
# 304 "data/maps/Route101/scripts.pory"
	.string "You can't go into my Secret Shelter!$"

Route101OrphanJoelBattle_Text_1:
# 308 "data/maps/Route101/scripts.pory"
	.string "See that tent over there? It's my\n"
	.string "Secret Shelter.$"

Route101OrphanJoelBattle_Text_2:
# 310 "data/maps/Route101/scripts.pory"
	.string "Lots of people lived in weird places\n"
	.string "during the war, to hide from the bad\l"
	.string "guys.\p"
	.string "Some still do it, if they don't have\n"
	.string "anywhere else to go.\p"
	.string "You look a bit like them, so you can have\n"
	.string "this.$"

Route101OrphanJoelBattle_Text_3:
# 315 "data/maps/Route101/scripts.pory"
	.string "If you teach Secret Power to a Pokémon,\n"
	.string "you can make Secret Shelters in all\l"
	.string "sorts of places.\p"
	.string "Some have unique things about them...\n"
	.string "but I won't tell you about mine!$"

Route101OrphanJoelBattle_Text_4:
# 322 "data/maps/Route101/scripts.pory"
	.string "Have you made a Secret Shelter yet?\p"
	.string "I guess you can visit mine, if you need\n"
	.string "ideas for yours...\p"
	.string "But don't touch anything!$"

Route101RebelApproach0_Text_0:
# 340 "data/maps/Route101/scripts.pory"
	.string "Hey there, kid!$"

Route101RebelGruntBattle_Text_0:
# 388 "data/maps/Route101/scripts.pory"
	.string "Wowie, that's a cute Safemon you got\n"
	.string "there. Bet it's worth a ton!$"

Route101RebelGruntBattle_Text_1:
# 389 "data/maps/Route101/scripts.pory"
	.string "Hand it over.$"

Route101RebelGruntBattle_Text_2:
# 390 "data/maps/Route101/scripts.pory"
	.string "Obey$"

Route101RebelGruntBattle_Text_3:
# 390 "data/maps/Route101/scripts.pory"
	.string "Refuse$"

Route101RebelGruntBattle_Text_4:
# 395 "data/maps/Route101/scripts.pory"
	.string "Hehe, you're smarter than you loo-...$"

Route101RebelGruntBattle_Text_5:
# 402 "data/maps/Route101/scripts.pory"
	.string "What the-? Looks like your Pokémon has\n"
	.string "more guts than you! Hahaha!\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_6:
# 407 "data/maps/Route101/scripts.pory"
	.string "Playing brave huh? You really don't look\n"
	.string "the type.\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_7:
# 412 "data/maps/Route101/scripts.pory"
	.string "Grr... alright, that thing of yours is\n"
	.string "strong, for a lab rat.\p"
	.string "But you still look weak yourself!\n"
	.string "UOOOGYAA!$"

Route101RebelGruntBattle_Text_8:
# 418 "data/maps/Route101/scripts.pory"
	.string "The rebel swings his bat to hit you.\n"
	.string "What will you do?$"

Route101RebelGruntBattle_Text_9:
# 419 "data/maps/Route101/scripts.pory"
	.string "Parry$"

Route101RebelGruntBattle_Text_10:
# 419 "data/maps/Route101/scripts.pory"
	.string "Dodge$"

Route101RebelGruntBattle_Text_11:
# 426 "data/maps/Route101/scripts.pory"
	.string "You parry the bat with one of your\n"
	.string "crutches, and the rebel falls on his\l"
	.string "back.$"

Route101RebelGruntBattle_Text_12:
# 431 "data/maps/Route101/scripts.pory"
	.string "You fail to block the bat with your\n"
	.string "arms. The hit hurts like hell.$"

Route101RebelGruntBattle_Text_13:
# 433 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy girl, I'll give you that!$"

Route101RebelGruntBattle_Text_14:
# 440 "data/maps/Route101/scripts.pory"
	.string "You are too slow to dodge the hit. It\n"
	.string "hurts like hell.$"

Route101RebelGruntBattle_Text_15:
# 442 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy guy, I'll give you that!$"

Route101RebelGruntBattle_Text_16:
# 445 "data/maps/Route101/scripts.pory"
	.string "You manage to dodge the hit, and the\n"
	.string "rebel's lost momentum makes him fall on\l"
	.string "his back.$"

Route101RebelGruntBattle_Text_17:
# 449 "data/maps/Route101/scripts.pory"
	.string "D-damn it! They told me Littleroot kids\n"
	.string "were easy prey!$"

Route101RebelGruntBattle_Text_18:
# 453 "data/maps/Route101/scripts.pory"
	.string "Screw this!$"

Orphan101_Outro::
# 330 "data/maps/Route101/scripts.pory"
	.string "... you still can't go into my Secret\n Shelter.$"

Rebel101_Outro::
# 462 "data/maps/Route101/scripts.pory"
	.string "Shit...$"
