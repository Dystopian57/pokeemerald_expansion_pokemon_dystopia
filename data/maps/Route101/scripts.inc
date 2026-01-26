# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"

# 3 "data/maps/Route101/scripts.pory"

# 4 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 5 "data/maps/Route101/scripts.pory"
	lockall
# 6 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 7 "data/maps/Route101/scripts.pory"
	closemessage
# 8 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 9 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 10 "data/maps/Route101/scripts.pory"
	releaseall
# 11 "data/maps/Route101/scripts.pory"
	end
# 12 "data/maps/Route101/scripts.pory"

# 13 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 14 "data/maps/Route101/scripts.pory"
	lockall
# 15 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 16 "data/maps/Route101/scripts.pory"
	closemessage
# 17 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 18 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route101/scripts.pory"
	releaseall
# 20 "data/maps/Route101/scripts.pory"
	end
# 21 "data/maps/Route101/scripts.pory"

# 22 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 23 "data/maps/Route101/scripts.pory"
	lockall
# 24 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 25 "data/maps/Route101/scripts.pory"
	closemessage
# 26 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 27 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route101/scripts.pory"
	releaseall
# 29 "data/maps/Route101/scripts.pory"
	end
# 30 "data/maps/Route101/scripts.pory"

# 31 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 32 "data/maps/Route101/scripts.pory"
	walk_up
# 33 "data/maps/Route101/scripts.pory"
	step_end
# 34 "data/maps/Route101/scripts.pory"

# 35 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 36 "data/maps/Route101/scripts.pory"
	walk_right
# 37 "data/maps/Route101/scripts.pory"
	step_end
# 38 "data/maps/Route101/scripts.pory"

# 39 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 40 "data/maps/Route101/scripts.pory"
	walk_down
# 41 "data/maps/Route101/scripts.pory"
	step_end
# 42 "data/maps/Route101/scripts.pory"

# 43 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 44 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 45 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 46 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 47 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 48 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 49 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 50 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 51 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 52 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 53 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 54 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 55 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 56 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 58 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 59 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 60 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 61 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 62 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 63 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 64 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 65 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 66 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 67 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 68 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 69 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 70 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 72 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 73 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 74 "data/maps/Route101/scripts.pory"
	step_end
# 75 "data/maps/Route101/scripts.pory"

# 76 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 77 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 78 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 79 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 80 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 81 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 82 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 83 "data/maps/Route101/scripts.pory"
	step_end
# 84 "data/maps/Route101/scripts.pory"

# 85 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 86 "data/maps/Route101/scripts.pory"
	step_end
# 87 "data/maps/Route101/scripts.pory"

# 88 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 89 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 90 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 91 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 92 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 93 "data/maps/Route101/scripts.pory"
	step_end
# 94 "data/maps/Route101/scripts.pory"

# 95 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 101 "data/maps/Route101/scripts.pory"
	step_end
# 102 "data/maps/Route101/scripts.pory"

# 103 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 134 "data/maps/Route101/scripts.pory"
	step_end
# 135 "data/maps/Route101/scripts.pory"

# 136 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 143 "data/maps/Route101/scripts.pory"
	step_end
# 144 "data/maps/Route101/scripts.pory"

# 145 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 146 "data/maps/Route101/scripts.pory"
	step_end
# 147 "data/maps/Route101/scripts.pory"

# 148 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 149 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 150 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 151 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 153 "data/maps/Route101/scripts.pory"
	step_end
# 154 "data/maps/Route101/scripts.pory"

# 155 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 156 "data/maps/Route101/scripts.pory"
	walk_up
# 157 "data/maps/Route101/scripts.pory"
	walk_up
# 158 "data/maps/Route101/scripts.pory"
	step_end
# 159 "data/maps/Route101/scripts.pory"

# 160 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 161 "data/maps/Route101/scripts.pory"
	walk_up
# 162 "data/maps/Route101/scripts.pory"
	walk_left
# 163 "data/maps/Route101/scripts.pory"
	walk_up
# 164 "data/maps/Route101/scripts.pory"
	step_end
# 165 "data/maps/Route101/scripts.pory"

# 166 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 167 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 168 "data/maps/Route101/scripts.pory"
	end
# 169 "data/maps/Route101/scripts.pory"

# 170 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 171 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 172 "data/maps/Route101/scripts.pory"
	end
# 173 "data/maps/Route101/scripts.pory"

# 174 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 175 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 176 "data/maps/Route101/scripts.pory"
	end
# 177 "data/maps/Route101/scripts.pory"

# 178 "data/maps/Route101/scripts.pory"

# 179 "data/maps/Route101/scripts.pory"

# 180 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 181 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 182 "data/maps/Route101/scripts.pory"
	return
# 183 "data/maps/Route101/scripts.pory"

# 184 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 185 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 186 "data/maps/Route101/scripts.pory"
	return
# 187 "data/maps/Route101/scripts.pory"

# 188 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 189 "data/maps/Route101/scripts.pory"
	walk_right
# 190 "data/maps/Route101/scripts.pory"
	step_end
# 191 "data/maps/Route101/scripts.pory"

# 192 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 193 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 194 "data/maps/Route101/scripts.pory"

# 195 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 196 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 197 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 198 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 199 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 200 "data/maps/Route101/scripts.pory"

# 201 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 202 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 203 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 204 "data/maps/Route101/scripts.pory"

# 205 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 206 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 207 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 208 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 209 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 210 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 211 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 212 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 213 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 214 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 215 "data/maps/Route101/scripts.pory"

# 216 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 217 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 218 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 219 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 220 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 221 "data/maps/Route101/scripts.pory"

# 222 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 223 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 224 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 225 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 226 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 227 "data/maps/Route101/scripts.pory"

# 228 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 229 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 230 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_MapScripts::
# 236 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101Weather
	.byte 0


Route101Weather::
# 241 "data/maps/Route101/scripts.pory"
	compare VAR_OLDALE_PHASE, 0
	goto_if_eq Route101Weather_1
	return

Route101Weather_1:
# 242 "data/maps/Route101/scripts.pory"
	setweather WEATHER_SHADE
	return


Route101Ziggy::
# 248 "data/maps/Route101/scripts.pory"
	lockall
# 249 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 250 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101Ziggy_Movement_0
# 251 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 252 "data/maps/Route101/scripts.pory"
	msgbox Route101Ziggy_Text_0
# 253 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101OrphanJoelApproach0::
# 257 "data/maps/Route101/scripts.pory"
	lockall
# 258 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 259 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 260 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 261 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 262 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 263 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach1::
# 267 "data/maps/Route101/scripts.pory"
	lockall
# 268 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 269 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 270 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 271 "data/maps/Route101/scripts.pory"
	waitmovement
# 272 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 273 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach1_Movement_0
# 274 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoelApproach1_Movement_0
# 275 "data/maps/Route101/scripts.pory"
	waitmovement
# 276 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 277 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach2::
# 281 "data/maps/Route101/scripts.pory"
	lockall
# 282 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 283 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 284 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 285 "data/maps/Route101/scripts.pory"
	waitmovement
# 286 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 287 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach2_Movement_0
# 288 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoelApproach2_Movement_0
# 289 "data/maps/Route101/scripts.pory"
	waitmovement
# 290 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 291 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach3::
# 295 "data/maps/Route101/scripts.pory"
	lockall
# 296 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 297 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 298 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 299 "data/maps/Route101/scripts.pory"
	waitmovement
# 300 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 301 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach3_Movement_0
# 302 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoelApproach3_Movement_0
# 303 "data/maps/Route101/scripts.pory"
	waitmovement
# 304 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 305 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoel::
# 309 "data/maps/Route101/scripts.pory"
	lockall
# 310 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 311 "data/maps/Route101/scripts.pory"
orphanafterapproach:
# 312 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq Route101OrphanJoel_2
Route101OrphanJoel_1:
# 331 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq Route101OrphanJoel_5
Route101OrphanJoel_4:
# 336 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq Route101OrphanJoel_8
Route101OrphanJoel_7:
# 338 "data/maps/Route101/scripts.pory"
Joelfinish:
# 339 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101OrphanJoel_2:
# 314 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 315 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 316 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_ORPHAN_MALE_101, Orphan101_Outro
# 317 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 318 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 319 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_0
# 320 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_1
# 321 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 322 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_2
# 325 "data/maps/Route101/scripts.pory"
	waitmessage
# 326 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM43
# 327 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_3
# 329 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 1
# 330 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_1

Route101OrphanJoel_5:
# 332 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 333 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_4
	goto Route101OrphanJoel_4

Route101OrphanJoel_8:
# 337 "data/maps/Route101/scripts.pory"
	goto JoelandAnne101talk
	goto Route101OrphanJoel_7


JoelandAnne101meeting::
# 348 "data/maps/Route101/scripts.pory"
JoelandAnne101talk:
# 349 "data/maps/Route101/scripts.pory"
	lockall
# 350 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 351 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_0
# 352 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_0
# 353 "data/maps/Route101/scripts.pory"
	applymovement 5, JoelandAnne101meeting_Movement_0
# 354 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 355 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_1
# 356 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 357 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_2
# 359 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_2
# 360 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_3
# 361 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 362 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_3
# 363 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_4
# 364 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_2
# 365 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_5
# 367 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 368 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_6
# 369 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_2
# 370 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_7
# 371 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 372 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_8
# 373 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_4
# 375 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_9
# 376 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_WEAK
# 377 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_10
# 378 "data/maps/Route101/scripts.pory"
	closemessage
# 379 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_5
# 380 "data/maps/Route101/scripts.pory"
	applymovement 5, JoelandAnne101meeting_Movement_6
# 383 "data/maps/Route101/scripts.pory"
	waitmovement 1
# 384 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 385 "data/maps/Route101/scripts.pory"
	waitmovement 5
# 387 "data/maps/Route101/scripts.pory"
	removeobject 1
# 388 "data/maps/Route101/scripts.pory"
	removeobject 4
# 389 "data/maps/Route101/scripts.pory"
	removeobject 5
# 391 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 392 "data/maps/Route101/scripts.pory"
	setflag joelin101
# 393 "data/maps/Route101/scripts.pory"
	setflag anneinroute101
# 394 "data/maps/Route101/scripts.pory"
	clearflag joelinsidetent
# 395 "data/maps/Route101/scripts.pory"
	clearflag annegoestojoel
# 397 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 3
# 398 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101RebelApproach0::
# 403 "data/maps/Route101/scripts.pory"
	lockall
# 404 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 405 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 406 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 407 "data/maps/Route101/scripts.pory"
	waitmovement
# 408 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 409 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 410 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 411 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach1::
# 415 "data/maps/Route101/scripts.pory"
	lockall
# 416 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 417 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 418 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 419 "data/maps/Route101/scripts.pory"
	waitmovement
# 420 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 421 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 422 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach1_Movement_0
# 423 "data/maps/Route101/scripts.pory"
	waitmovement
# 424 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 425 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach2::
# 429 "data/maps/Route101/scripts.pory"
	lockall
# 430 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 431 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 432 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 433 "data/maps/Route101/scripts.pory"
	waitmovement
# 434 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 435 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 436 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach2_Movement_0
# 437 "data/maps/Route101/scripts.pory"
	waitmovement
# 438 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 439 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach3::
# 443 "data/maps/Route101/scripts.pory"
	lockall
# 444 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 445 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 446 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 447 "data/maps/Route101/scripts.pory"
	waitmovement
# 448 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 449 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 450 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach3_Movement_0
# 451 "data/maps/Route101/scripts.pory"
	waitmovement
# 452 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 453 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelGruntBattle::
# 458 "data/maps/Route101/scripts.pory"
rebelafterapproach:
# 459 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 460 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_0
# 461 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 462 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_1
# 463 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_2, Route101RebelGruntBattle_Text_3
# 464 "data/maps/Route101/scripts.pory"
	waitmessage
# 466 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_2
Route101RebelGruntBattle_1:
# 479 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_5
Route101RebelGruntBattle_4:
# 484 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_GRUNT_101, Rebel101_Outro
# 485 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 486 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_7
# 488 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 489 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_3
# 490 "data/maps/Route101/scripts.pory"
repeathit:
# 491 "data/maps/Route101/scripts.pory"
	setspeaker [ NULL ]
# 492 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_8
# 493 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_9, Route101RebelGruntBattle_Text_10
# 495 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_8
Route101RebelGruntBattle_7:
# 510 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_11
Route101RebelGruntBattle_10:
# 523 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 524 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_17
# 525 "data/maps/Route101/scripts.pory"
	playse SE_FLEE
# 526 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_4
# 527 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 528 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_18
# 529 "data/maps/Route101/scripts.pory"
	removeobject 3
# 530 "data/maps/Route101/scripts.pory"
	setflag rebel101runsaway
# 531 "data/maps/Route101/scripts.pory"
	setflag sharpynotoutsideDLC
# 532 "data/maps/Route101/scripts.pory"
	setflag camelianotoutsideDLC
# 533 "data/maps/Route101/scripts.pory"
	setflag sharpynotinroute103
# 534 "data/maps/Route101/scripts.pory"
	setflag sharpycorphishoutsideDLC
# 536 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 537 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101REBELFLEES, 1
# 538 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 539 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101RebelGruntBattle_2:
# 467 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 468 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_4
# 469 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 470 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_0
# 471 "data/maps/Route101/scripts.pory"
	waitmovement
# 472 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_1
# 473 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101RebelGruntBattle_Movement_2
# 474 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 475 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_5
	goto Route101RebelGruntBattle_1

Route101RebelGruntBattle_5:
# 480 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 481 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_6
	goto Route101RebelGruntBattle_4

Route101RebelGruntBattle_8:
# 496 "data/maps/Route101/scripts.pory"
	checkplayergender
# 497 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_14
Route101RebelGruntBattle_13:
# 503 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_19
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_11:
# 511 "data/maps/Route101/scripts.pory"
	checkplayergender
# 512 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_17
Route101RebelGruntBattle_16:
# 518 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_21
	goto Route101RebelGruntBattle_10

Route101RebelGruntBattle_14:
# 498 "data/maps/Route101/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 499 "data/maps/Route101/scripts.pory"
	waitse
# 500 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_11
	goto Route101RebelGruntBattle_13

Route101RebelGruntBattle_17:
# 513 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 514 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_14
# 515 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 516 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_15
# 517 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_16

Route101RebelGruntBattle_19:
# 504 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 505 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_12
# 506 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 507 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_13
# 508 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_21:
# 519 "data/maps/Route101/scripts.pory"
	playse SE_BALL_THROW
# 520 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_16
	goto Route101RebelGruntBattle_10


Route101GruntBatHitShake::
# 547 "data/maps/Route101/scripts.pory"
	playse SE_EFFECTIVE
# 548 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 2
# 549 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8005, 6
# 550 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8006, 4
# 551 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8007, 4
# 552 "data/maps/Route101/scripts.pory"
	special ShakeCamera
	return


# 250 "data/maps/Route101/scripts.pory"
Route101Ziggy_Movement_0:
# 250 "data/maps/Route101/scripts.pory"
	face_player
	step_end

# 260 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach0_Movement_0:
# 260 "data/maps/Route101/scripts.pory"
	emote_exclamation_mark
	step_end

# 262 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach0_Movement_1:
# 262 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 273 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach1_Movement_0:
# 273 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 287 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach2_Movement_0:
# 287 "data/maps/Route101/scripts.pory"
	walk_down
# 287 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 301 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach3_Movement_0:
# 301 "data/maps/Route101/scripts.pory"
	walk_down
# 301 "data/maps/Route101/scripts.pory"
	walk_down
# 301 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 319 "data/maps/Route101/scripts.pory"
Route101OrphanJoel_Movement_0:
# 319 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 351 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_0:
# 351 "data/maps/Route101/scripts.pory"
	walk_in_place_down
	step_end

# 356 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_1:
# 356 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 359 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_2:
# 359 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 362 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_3:
# 362 "data/maps/Route101/scripts.pory"
	emote_question_mark
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 373 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_4:
# 373 "data/maps/Route101/scripts.pory"
	walk_right
# 373 "data/maps/Route101/scripts.pory"
	walk_right
# 373 "data/maps/Route101/scripts.pory"
	walk_up
# 373 "data/maps/Route101/scripts.pory"
	walk_up
# 373 "data/maps/Route101/scripts.pory"
	walk_up
# 373 "data/maps/Route101/scripts.pory"
	walk_right
# 373 "data/maps/Route101/scripts.pory"
	walk_right
# 373 "data/maps/Route101/scripts.pory"
	walk_right
# 373 "data/maps/Route101/scripts.pory"
	walk_right
# 373 "data/maps/Route101/scripts.pory"
	walk_right
# 373 "data/maps/Route101/scripts.pory"
	walk_right
# 373 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 379 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_5:
# 379 "data/maps/Route101/scripts.pory"
	walk_down
# 379 "data/maps/Route101/scripts.pory"
	walk_down
# 379 "data/maps/Route101/scripts.pory"
	walk_left
# 379 "data/maps/Route101/scripts.pory"
	walk_left
# 379 "data/maps/Route101/scripts.pory"
	walk_left
# 379 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 380 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_6:
# 380 "data/maps/Route101/scripts.pory"
	walk_down
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

# 470 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_0:
# 470 "data/maps/Route101/scripts.pory"
	jump_in_place_up
	step_end

# 472 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_1:
# 472 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 472 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 473 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_2:
# 473 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 473 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 489 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_3:
# 489 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 526 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_4:
# 526 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 526 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 526 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 526 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 526 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 526 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 526 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 526 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

Route101Ziggy_Text_0:
# 252 "data/maps/Route101/scripts.pory"
	.string "Zig-ziiig!$"

Route101OrphanJoelApproach0_Text_0:
# 261 "data/maps/Route101/scripts.pory"
	.string "Hey, stop!$"

Route101OrphanJoel_Text_0:
# 315 "data/maps/Route101/scripts.pory"
	.string "You can't go into my Secret Shelter!$"

Route101OrphanJoel_Text_1:
# 320 "data/maps/Route101/scripts.pory"
	.string "See that tent over there? It's my\n"
	.string "Secret Shelter.$"

Route101OrphanJoel_Text_2:
# 322 "data/maps/Route101/scripts.pory"
	.string "Many people lived in weird places during\n"
	.string "the war, to hide from the bad guys.\p"
	.string "Some still do it, if they don't have\n"
	.string "anywhere else to go.\p"
	.string "You look a bit like them, so you can have\n"
	.string "this.$"

Route101OrphanJoel_Text_3:
# 327 "data/maps/Route101/scripts.pory"
	.string "If you teach Secret Power to a Pokémon,\n"
	.string "you can make Secret Shelters in all\l"
	.string "sorts of places.\p"
	.string "Some have unique things about them...\n"
	.string "but I won't tell you about mine!$"

Route101OrphanJoel_Text_4:
# 333 "data/maps/Route101/scripts.pory"
	.string "Have you made a Secret Shelter yet?\p"
	.string "I guess you can visit mine, if you need\n"
	.string "ideas for yours...\p"
	.string "But don't touch anything!$"

JoelandAnne101meeting_Text_0:
# 352 "data/maps/Route101/scripts.pory"
	.string "So... you are moving?$"

JoelandAnne101meeting_Text_1:
# 355 "data/maps/Route101/scripts.pory"
	.string "Zig-zig?$"

JoelandAnne101meeting_Text_2:
# 357 "data/maps/Route101/scripts.pory"
	.string "Yes... I'm sorry Joel... mom has packed\n"
	.string "everything up.\p"
	.string "I think I'll have to go... but I'll come\n"
	.string "visit soon!\p"
	.string "Then you can teach me all about Secret\n"
	.string "Shelters.$"

JoelandAnne101meeting_Text_3:
# 360 "data/maps/Route101/scripts.pory"
	.string "O-oh, that's okay...! In fact, you don't\n"
	.string "need to come back at all!$"

JoelandAnne101meeting_Text_4:
# 363 "data/maps/Route101/scripts.pory"
	.string "What? Why!?$"

JoelandAnne101meeting_Text_5:
# 365 "data/maps/Route101/scripts.pory"
	.string "Because... I'll go visit you instead!\p"
	.string "I was thinking of making new Secret\n"
	.string "Shelters anyway.\p"
	.string "I'm sure there's tons of cool places for\n"
	.string "them in Rustboro.$"

JoelandAnne101meeting_Text_6:
# 368 "data/maps/Route101/scripts.pory"
	.string "Really!? You promise to come visit?$"

JoelandAnne101meeting_Text_7:
# 370 "data/maps/Route101/scripts.pory"
	.string "I do! Now get going, before your mom\n"
	.string "gets worried.$"

JoelandAnne101meeting_Text_8:
# 372 "data/maps/Route101/scripts.pory"
	.string "Okay! It's a promise. I'll be waiting!\p"
	.string "See you soon Joel!$"

JoelandAnne101meeting_Text_9:
# 375 "data/maps/Route101/scripts.pory"
	.string "...\p"
	.string "... let's go inside, Ziggy.$"

JoelandAnne101meeting_Text_10:
# 377 "data/maps/Route101/scripts.pory"
	.string "Ziiig...$"

Route101RebelApproach0_Text_0:
# 409 "data/maps/Route101/scripts.pory"
	.string "Hey there, kid!$"

Route101RebelGruntBattle_Text_0:
# 460 "data/maps/Route101/scripts.pory"
	.string "Wowie, that's a cute Safemon you got\n"
	.string "there. Bet it's worth a ton!$"

Route101RebelGruntBattle_Text_1:
# 462 "data/maps/Route101/scripts.pory"
	.string "Hand it over.$"

Route101RebelGruntBattle_Text_2:
# 463 "data/maps/Route101/scripts.pory"
	.string "Obey$"

Route101RebelGruntBattle_Text_3:
# 463 "data/maps/Route101/scripts.pory"
	.string "Refuse$"

Route101RebelGruntBattle_Text_4:
# 468 "data/maps/Route101/scripts.pory"
	.string "Hehe, you're smarter than you loo-...$"

Route101RebelGruntBattle_Text_5:
# 475 "data/maps/Route101/scripts.pory"
	.string "What the-? Looks like your Pokémon has\n"
	.string "more guts than you! Hahaha!\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_6:
# 481 "data/maps/Route101/scripts.pory"
	.string "Playing brave huh? You really don't look\n"
	.string "the type.\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_7:
# 486 "data/maps/Route101/scripts.pory"
	.string "Grr... alright, that thing of yours is\n"
	.string "strong, for a lab rat.\p"
	.string "But you still look weak yourself!\n"
	.string "UOOOGYAA!$"

Route101RebelGruntBattle_Text_8:
# 492 "data/maps/Route101/scripts.pory"
	.string "The rebel swings his bat to hit you.\n"
	.string "What will you do?$"

Route101RebelGruntBattle_Text_9:
# 493 "data/maps/Route101/scripts.pory"
	.string "Parry$"

Route101RebelGruntBattle_Text_10:
# 493 "data/maps/Route101/scripts.pory"
	.string "Dodge$"

Route101RebelGruntBattle_Text_11:
# 500 "data/maps/Route101/scripts.pory"
	.string "You parry the bat with one of your\n"
	.string "crutches, and the rebel falls on his\l"
	.string "back.$"

Route101RebelGruntBattle_Text_12:
# 505 "data/maps/Route101/scripts.pory"
	.string "You fail to block the bat with your\n"
	.string "arms. The hit hurts like hell.$"

Route101RebelGruntBattle_Text_13:
# 507 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy girl, I'll give you that!$"

Route101RebelGruntBattle_Text_14:
# 514 "data/maps/Route101/scripts.pory"
	.string "You are too slow to dodge the hit. It\n"
	.string "hurts like hell.$"

Route101RebelGruntBattle_Text_15:
# 516 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy guy, I'll give you that!$"

Route101RebelGruntBattle_Text_16:
# 520 "data/maps/Route101/scripts.pory"
	.string "You manage to dodge the hit, and the\n"
	.string "rebel's lost momentum makes him fall on\l"
	.string "his back.$"

Route101RebelGruntBattle_Text_17:
# 524 "data/maps/Route101/scripts.pory"
	.string "D-damn it! They told me Littleroot kids\n"
	.string "were easy prey!$"

Route101RebelGruntBattle_Text_18:
# 528 "data/maps/Route101/scripts.pory"
	.string "Screw this!$"

Orphan101_Outro::
# 344 "data/maps/Route101/scripts.pory"
	.string "... you still can't go into my Secret\n Shelter.$"

Rebel101_Outro::
# 543 "data/maps/Route101/scripts.pory"
	.string "Shit...$"
