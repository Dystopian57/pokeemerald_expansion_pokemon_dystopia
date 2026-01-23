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

Route101Ziggy::
# 253 "data/maps/Route101/scripts.pory"
	lockall
# 254 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 255 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101Ziggy_Movement_0
# 256 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 257 "data/maps/Route101/scripts.pory"
	msgbox Route101Ziggy_Text_0
# 258 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101OrphanJoelApproach0::
# 262 "data/maps/Route101/scripts.pory"
	lockall
# 263 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 264 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 265 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 266 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 267 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 268 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach1::
# 272 "data/maps/Route101/scripts.pory"
	lockall
# 273 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 274 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 275 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 276 "data/maps/Route101/scripts.pory"
	waitmovement
# 277 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 278 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach1_Movement_0
# 279 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoelApproach1_Movement_0
# 280 "data/maps/Route101/scripts.pory"
	waitmovement
# 281 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 282 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach2::
# 286 "data/maps/Route101/scripts.pory"
	lockall
# 287 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 288 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 289 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 290 "data/maps/Route101/scripts.pory"
	waitmovement
# 291 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 292 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach2_Movement_0
# 293 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoelApproach2_Movement_0
# 294 "data/maps/Route101/scripts.pory"
	waitmovement
# 295 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 296 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach3::
# 300 "data/maps/Route101/scripts.pory"
	lockall
# 301 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 302 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 303 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 304 "data/maps/Route101/scripts.pory"
	waitmovement
# 305 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 306 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach3_Movement_0
# 307 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoelApproach3_Movement_0
# 308 "data/maps/Route101/scripts.pory"
	waitmovement
# 309 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 310 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoel::
# 314 "data/maps/Route101/scripts.pory"
	lockall
# 315 "data/maps/Route101/scripts.pory"
orphanafterapproach:
# 316 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq Route101OrphanJoel_2
Route101OrphanJoel_1:
# 332 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq Route101OrphanJoel_5
Route101OrphanJoel_4:
# 337 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq Route101OrphanJoel_8
Route101OrphanJoel_7:
# 339 "data/maps/Route101/scripts.pory"
Joelfinish:
# 340 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101OrphanJoel_2:
# 317 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 318 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_ORPHAN_MALE_101, Orphan101_Outro
# 319 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 320 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_0
# 321 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_1
# 322 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 323 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_2
# 326 "data/maps/Route101/scripts.pory"
	waitmessage
# 327 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM43
# 328 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_3
# 330 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 1
# 331 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_1

Route101OrphanJoel_5:
# 333 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 334 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_4
	goto Route101OrphanJoel_4

Route101OrphanJoel_8:
# 338 "data/maps/Route101/scripts.pory"
	goto JoelandAnne101talk
	goto Route101OrphanJoel_7


JoelandAnne101meeting::
# 349 "data/maps/Route101/scripts.pory"
JoelandAnne101talk:
# 350 "data/maps/Route101/scripts.pory"
	lockall
# 351 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 352 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_0
# 353 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_0
# 354 "data/maps/Route101/scripts.pory"
	applymovement 5, JoelandAnne101meeting_Movement_0
# 355 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 356 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_1
# 357 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 358 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_2
# 360 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_2
# 361 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_3
# 362 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 363 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_3
# 364 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_4
# 365 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_2
# 366 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_5
# 368 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 369 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_6
# 370 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_2
# 371 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_7
# 372 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 373 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_8
# 374 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_4
# 376 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_9
# 377 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_WEAK
# 378 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_10
# 379 "data/maps/Route101/scripts.pory"
	closemessage
# 380 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_5
# 381 "data/maps/Route101/scripts.pory"
	applymovement 5, JoelandAnne101meeting_Movement_6
# 384 "data/maps/Route101/scripts.pory"
	waitmovement 1
# 385 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 386 "data/maps/Route101/scripts.pory"
	waitmovement 5
# 388 "data/maps/Route101/scripts.pory"
	removeobject 1
# 389 "data/maps/Route101/scripts.pory"
	removeobject 4
# 390 "data/maps/Route101/scripts.pory"
	removeobject 5
# 392 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 393 "data/maps/Route101/scripts.pory"
	setflag joelgoestotent
# 394 "data/maps/Route101/scripts.pory"
	setflag anneinroute101
# 395 "data/maps/Route101/scripts.pory"
	clearflag joelinsidetent
# 396 "data/maps/Route101/scripts.pory"
	clearflag annegoestojoel
# 398 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 3
# 399 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101RebelApproach0::
# 404 "data/maps/Route101/scripts.pory"
	lockall
# 405 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 406 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 407 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 408 "data/maps/Route101/scripts.pory"
	waitmovement
# 409 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 410 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 411 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 412 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach1::
# 416 "data/maps/Route101/scripts.pory"
	lockall
# 417 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 418 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 419 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 420 "data/maps/Route101/scripts.pory"
	waitmovement
# 421 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 422 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 423 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach1_Movement_0
# 424 "data/maps/Route101/scripts.pory"
	waitmovement
# 425 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 426 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach2::
# 430 "data/maps/Route101/scripts.pory"
	lockall
# 431 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 432 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 433 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 434 "data/maps/Route101/scripts.pory"
	waitmovement
# 435 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 436 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 437 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach2_Movement_0
# 438 "data/maps/Route101/scripts.pory"
	waitmovement
# 439 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 440 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach3::
# 444 "data/maps/Route101/scripts.pory"
	lockall
# 445 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 446 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 447 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 448 "data/maps/Route101/scripts.pory"
	waitmovement
# 449 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 450 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 451 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach3_Movement_0
# 452 "data/maps/Route101/scripts.pory"
	waitmovement
# 453 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 454 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelGruntBattle::
# 459 "data/maps/Route101/scripts.pory"
rebelafterapproach:
# 460 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 461 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_0
# 462 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 463 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_1
# 464 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_2, Route101RebelGruntBattle_Text_3
# 465 "data/maps/Route101/scripts.pory"
	waitmessage
# 467 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_2
Route101RebelGruntBattle_1:
# 480 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_5
Route101RebelGruntBattle_4:
# 485 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_GRUNT_101, Rebel101_Outro
# 486 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 487 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_7
# 489 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 490 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_3
# 491 "data/maps/Route101/scripts.pory"
repeathit:
# 492 "data/maps/Route101/scripts.pory"
	setspeaker [ NULL ]
# 493 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_8
# 494 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_9, Route101RebelGruntBattle_Text_10
# 496 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_8
Route101RebelGruntBattle_7:
# 511 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_11
Route101RebelGruntBattle_10:
# 524 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 525 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_17
# 526 "data/maps/Route101/scripts.pory"
	playse SE_FLEE
# 527 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_4
# 528 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 529 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_18
# 530 "data/maps/Route101/scripts.pory"
	removeobject 3
# 531 "data/maps/Route101/scripts.pory"
	setflag rebel101runsaway
# 532 "data/maps/Route101/scripts.pory"
	setflag sharpynotoutsideDLC
# 533 "data/maps/Route101/scripts.pory"
	setflag camelianotoutsideDLC
# 534 "data/maps/Route101/scripts.pory"
	setflag sharpynotinroute103
# 535 "data/maps/Route101/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 537 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 538 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101REBELFLEES, 1
# 539 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 540 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101RebelGruntBattle_2:
# 468 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 469 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_4
# 470 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 471 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_0
# 472 "data/maps/Route101/scripts.pory"
	waitmovement
# 473 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_1
# 474 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101RebelGruntBattle_Movement_2
# 475 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 476 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_5
	goto Route101RebelGruntBattle_1

Route101RebelGruntBattle_5:
# 481 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 482 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_6
	goto Route101RebelGruntBattle_4

Route101RebelGruntBattle_8:
# 497 "data/maps/Route101/scripts.pory"
	checkplayergender
# 498 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_14
Route101RebelGruntBattle_13:
# 504 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_19
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_11:
# 512 "data/maps/Route101/scripts.pory"
	checkplayergender
# 513 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_17
Route101RebelGruntBattle_16:
# 519 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_21
	goto Route101RebelGruntBattle_10

Route101RebelGruntBattle_14:
# 499 "data/maps/Route101/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 500 "data/maps/Route101/scripts.pory"
	waitse
# 501 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_11
	goto Route101RebelGruntBattle_13

Route101RebelGruntBattle_17:
# 514 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 515 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_14
# 516 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 517 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_15
# 518 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_16

Route101RebelGruntBattle_19:
# 505 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 506 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_12
# 507 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 508 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_13
# 509 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_21:
# 520 "data/maps/Route101/scripts.pory"
	playse SE_BALL_THROW
# 521 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_16
	goto Route101RebelGruntBattle_10


Route101GruntBatHitShake::
# 548 "data/maps/Route101/scripts.pory"
	playse SE_EFFECTIVE
# 549 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 2
# 550 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8005, 6
# 551 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8006, 4
# 552 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8007, 4
# 553 "data/maps/Route101/scripts.pory"
	special ShakeCamera
	return


# 255 "data/maps/Route101/scripts.pory"
Route101Ziggy_Movement_0:
# 255 "data/maps/Route101/scripts.pory"
	face_player
	step_end

# 265 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach0_Movement_0:
# 265 "data/maps/Route101/scripts.pory"
	emote_exclamation_mark
	step_end

# 267 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach0_Movement_1:
# 267 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 278 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach1_Movement_0:
# 278 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 292 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach2_Movement_0:
# 292 "data/maps/Route101/scripts.pory"
	walk_down
# 292 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 306 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach3_Movement_0:
# 306 "data/maps/Route101/scripts.pory"
	walk_down
# 306 "data/maps/Route101/scripts.pory"
	walk_down
# 306 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 320 "data/maps/Route101/scripts.pory"
Route101OrphanJoel_Movement_0:
# 320 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 352 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_0:
# 352 "data/maps/Route101/scripts.pory"
	walk_in_place_down
	step_end

# 357 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_1:
# 357 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 360 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_2:
# 360 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 363 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_3:
# 363 "data/maps/Route101/scripts.pory"
	emote_question_mark
# 363 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 374 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_4:
# 374 "data/maps/Route101/scripts.pory"
	walk_right
# 374 "data/maps/Route101/scripts.pory"
	walk_up
# 374 "data/maps/Route101/scripts.pory"
	walk_up
# 374 "data/maps/Route101/scripts.pory"
	walk_up
# 374 "data/maps/Route101/scripts.pory"
	walk_right
# 374 "data/maps/Route101/scripts.pory"
	walk_right
# 374 "data/maps/Route101/scripts.pory"
	walk_right
# 374 "data/maps/Route101/scripts.pory"
	walk_right
# 374 "data/maps/Route101/scripts.pory"
	walk_right
# 374 "data/maps/Route101/scripts.pory"
	walk_right
# 374 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 380 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_5:
# 380 "data/maps/Route101/scripts.pory"
	walk_down
# 380 "data/maps/Route101/scripts.pory"
	walk_down
# 380 "data/maps/Route101/scripts.pory"
	walk_left
# 380 "data/maps/Route101/scripts.pory"
	walk_left
# 380 "data/maps/Route101/scripts.pory"
	walk_left
# 380 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 381 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_6:
# 381 "data/maps/Route101/scripts.pory"
	walk_down
# 381 "data/maps/Route101/scripts.pory"
	walk_down
# 381 "data/maps/Route101/scripts.pory"
	walk_down
# 381 "data/maps/Route101/scripts.pory"
	walk_left
# 381 "data/maps/Route101/scripts.pory"
	walk_left
# 381 "data/maps/Route101/scripts.pory"
	walk_left
# 381 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 471 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_0:
# 471 "data/maps/Route101/scripts.pory"
	jump_in_place_up
	step_end

# 473 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_1:
# 473 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 473 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 474 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_2:
# 474 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 474 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 490 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_3:
# 490 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 527 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_4:
# 527 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 527 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 527 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 527 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 527 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 527 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 527 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

Route101Ziggy_Text_0:
# 257 "data/maps/Route101/scripts.pory"
	.string "Zig-ziiig!$"

Route101OrphanJoelApproach0_Text_0:
# 266 "data/maps/Route101/scripts.pory"
	.string "Hey, stop!$"

Route101OrphanJoel_Text_0:
# 317 "data/maps/Route101/scripts.pory"
	.string "You can't go into my Secret Shelter!$"

Route101OrphanJoel_Text_1:
# 321 "data/maps/Route101/scripts.pory"
	.string "See that tent over there? It's my\n"
	.string "Secret Shelter.$"

Route101OrphanJoel_Text_2:
# 323 "data/maps/Route101/scripts.pory"
	.string "Lots of people lived in weird places\n"
	.string "during the war, to hide from the bad\l"
	.string "guys.\p"
	.string "Some still do it, if they don't have\n"
	.string "anywhere else to go.\p"
	.string "You look a bit like them, so you can have\n"
	.string "this.$"

Route101OrphanJoel_Text_3:
# 328 "data/maps/Route101/scripts.pory"
	.string "If you teach Secret Power to a Pokémon,\n"
	.string "you can make Secret Shelters in all\l"
	.string "sorts of places.\p"
	.string "Some have unique things about them...\n"
	.string "but I won't tell you about mine!$"

Route101OrphanJoel_Text_4:
# 334 "data/maps/Route101/scripts.pory"
	.string "Have you made a Secret Shelter yet?\p"
	.string "I guess you can visit mine, if you need\n"
	.string "ideas for yours...\p"
	.string "But don't touch anything!$"

JoelandAnne101meeting_Text_0:
# 353 "data/maps/Route101/scripts.pory"
	.string "So... you are moving?$"

JoelandAnne101meeting_Text_1:
# 356 "data/maps/Route101/scripts.pory"
	.string "Zig-zig?$"

JoelandAnne101meeting_Text_2:
# 358 "data/maps/Route101/scripts.pory"
	.string "Yes... I'm sorry Joel... mom has packed\n"
	.string "everything up.\p"
	.string "I think I'll have to go... but I'll come\n"
	.string "visit soon!\p"
	.string "Then you can teach me all about Secret\n"
	.string "Shelters.$"

JoelandAnne101meeting_Text_3:
# 361 "data/maps/Route101/scripts.pory"
	.string "O-oh, that's okay...! In fact, you don't\n"
	.string "need to come back at all!$"

JoelandAnne101meeting_Text_4:
# 364 "data/maps/Route101/scripts.pory"
	.string "What? Why!?$"

JoelandAnne101meeting_Text_5:
# 366 "data/maps/Route101/scripts.pory"
	.string "Because I'll go visit you instead!\p"
	.string "I was thinking of making new Secret\n"
	.string "Shelters anyway. I'm sure there's tons\l"
	.string "of cool places for them in Rustboro.$"

JoelandAnne101meeting_Text_6:
# 369 "data/maps/Route101/scripts.pory"
	.string "Really!? You promise to come visit?$"

JoelandAnne101meeting_Text_7:
# 371 "data/maps/Route101/scripts.pory"
	.string "I do! Now get going, before your mom\n"
	.string "gets worried.$"

JoelandAnne101meeting_Text_8:
# 373 "data/maps/Route101/scripts.pory"
	.string "Okay! It's a promise. I'll be waiting!\p"
	.string "See you soon Joel!$"

JoelandAnne101meeting_Text_9:
# 376 "data/maps/Route101/scripts.pory"
	.string "...\p"
	.string "... let's go inside, Ziggy.$"

JoelandAnne101meeting_Text_10:
# 378 "data/maps/Route101/scripts.pory"
	.string "Ziiig...$"

Route101RebelApproach0_Text_0:
# 410 "data/maps/Route101/scripts.pory"
	.string "Hey there, kid!$"

Route101RebelGruntBattle_Text_0:
# 461 "data/maps/Route101/scripts.pory"
	.string "Wowie, that's a cute Safemon you got\n"
	.string "there. Bet it's worth a ton!$"

Route101RebelGruntBattle_Text_1:
# 463 "data/maps/Route101/scripts.pory"
	.string "Hand it over.$"

Route101RebelGruntBattle_Text_2:
# 464 "data/maps/Route101/scripts.pory"
	.string "Obey$"

Route101RebelGruntBattle_Text_3:
# 464 "data/maps/Route101/scripts.pory"
	.string "Refuse$"

Route101RebelGruntBattle_Text_4:
# 469 "data/maps/Route101/scripts.pory"
	.string "Hehe, you're smarter than you loo-...$"

Route101RebelGruntBattle_Text_5:
# 476 "data/maps/Route101/scripts.pory"
	.string "What the-? Looks like your Pokémon has\n"
	.string "more guts than you! Hahaha!\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_6:
# 482 "data/maps/Route101/scripts.pory"
	.string "Playing brave huh? You really don't look\n"
	.string "the type.\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_7:
# 487 "data/maps/Route101/scripts.pory"
	.string "Grr... alright, that thing of yours is\n"
	.string "strong, for a lab rat.\p"
	.string "But you still look weak yourself!\n"
	.string "UOOOGYAA!$"

Route101RebelGruntBattle_Text_8:
# 493 "data/maps/Route101/scripts.pory"
	.string "The rebel swings his bat to hit you.\n"
	.string "What will you do?$"

Route101RebelGruntBattle_Text_9:
# 494 "data/maps/Route101/scripts.pory"
	.string "Parry$"

Route101RebelGruntBattle_Text_10:
# 494 "data/maps/Route101/scripts.pory"
	.string "Dodge$"

Route101RebelGruntBattle_Text_11:
# 501 "data/maps/Route101/scripts.pory"
	.string "You parry the bat with one of your\n"
	.string "crutches, and the rebel falls on his\l"
	.string "back.$"

Route101RebelGruntBattle_Text_12:
# 506 "data/maps/Route101/scripts.pory"
	.string "You fail to block the bat with your\n"
	.string "arms. The hit hurts like hell.$"

Route101RebelGruntBattle_Text_13:
# 508 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy girl, I'll give you that!$"

Route101RebelGruntBattle_Text_14:
# 515 "data/maps/Route101/scripts.pory"
	.string "You are too slow to dodge the hit. It\n"
	.string "hurts like hell.$"

Route101RebelGruntBattle_Text_15:
# 517 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy guy, I'll give you that!$"

Route101RebelGruntBattle_Text_16:
# 521 "data/maps/Route101/scripts.pory"
	.string "You manage to dodge the hit, and the\n"
	.string "rebel's lost momentum makes him fall on\l"
	.string "his back.$"

Route101RebelGruntBattle_Text_17:
# 525 "data/maps/Route101/scripts.pory"
	.string "D-damn it! They told me Littleroot kids\n"
	.string "were easy prey!$"

Route101RebelGruntBattle_Text_18:
# 529 "data/maps/Route101/scripts.pory"
	.string "Screw this!$"

Orphan101_Outro::
# 345 "data/maps/Route101/scripts.pory"
	.string "... you still can't go into my Secret\n Shelter.$"

Rebel101_Outro::
# 544 "data/maps/Route101/scripts.pory"
	.string "Shit...$"
