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


SamanthaDontgotoCrater::
# 309 "data/maps/Route101/scripts.pory"
	lock
# 310 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 311 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 312 "data/maps/Route101/scripts.pory"
	msgbox SamanthaDontgotoCrater_Text_0
# 314 "data/maps/Route101/scripts.pory"
	msgbox SamanthaDontgotoCrater_Text_1
# 317 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoCrater_Movement_1
# 319 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101OrphanJoel::
# 323 "data/maps/Route101/scripts.pory"
	lock
# 324 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 326 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_gt Route101OrphanJoel_3
Route101OrphanJoel_2:
# 445 "data/maps/Route101/scripts.pory"
orphanafterapproach:
# 446 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq Route101OrphanJoel_10
Route101OrphanJoel_9:
# 467 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq Route101OrphanJoel_19
Route101OrphanJoel_18:
# 473 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq Route101OrphanJoel_29
Route101OrphanJoel_28:
# 475 "data/maps/Route101/scripts.pory"
Joelfinish:
# 476 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101OrphanJoel_1:
# 327 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq Route101OrphanJoel_7
Route101OrphanJoel_6:
# 387 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq Route101OrphanJoel_13
Route101OrphanJoel_12:
# 440 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	return

Route101OrphanJoel_3:
# 326 "data/maps/Route101/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq Route101OrphanJoel_1
	goto Route101OrphanJoel_2

Route101OrphanJoel_7:
# 329 "data/maps/Route101/scripts.pory"
	goto_if_set SamanthaJoelInteraction, Route101OrphanJoel_16
Route101OrphanJoel_15:
# 336 "data/maps/Route101/scripts.pory"
	goto_if_unset SamanthaJoelInteraction, Route101OrphanJoel_26
	goto Route101OrphanJoel_6

Route101OrphanJoel_10:
# 448 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 449 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_19
# 450 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_ORPHAN_MALE_101, Orphan101_Outro
# 451 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 452 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 453 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_0
# 454 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_20
# 455 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 456 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 457 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_21
# 460 "data/maps/Route101/scripts.pory"
	waitmessage
# 461 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM43
# 462 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 463 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_22
# 465 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 1
# 466 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_9

Route101OrphanJoel_13:
# 389 "data/maps/Route101/scripts.pory"
	goto_if_set SamanthaJoelInteraction, Route101OrphanJoel_23
Route101OrphanJoel_21:
# 396 "data/maps/Route101/scripts.pory"
	goto_if_set SamanthaJoelInteraction, Route101OrphanJoel_33
Route101OrphanJoel_31:
# 410 "data/maps/Route101/scripts.pory"
	goto_if_unset SamanthaJoelInteraction, Route101OrphanJoel_39
	goto Route101OrphanJoel_12

Route101OrphanJoel_16:
# 330 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 331 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 332 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 333 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
	goto Route101OrphanJoel_15

Route101OrphanJoel_19:
# 468 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 469 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 470 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_23
	goto Route101OrphanJoel_18

Route101OrphanJoel_22:
# 390 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 391 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 392 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 393 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_21

Route101OrphanJoel_23:
# 389 "data/maps/Route101/scripts.pory"
	goto_if_unset Samanthagotsnacks, Route101OrphanJoel_22
	goto Route101OrphanJoel_21

Route101OrphanJoel_26:
# 337 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 338 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 339 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_1
# 340 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 341 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 342 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 343 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_2
# 344 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101OrphanJoelApproach0_Movement_1
# 345 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_3
# 346 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 347 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101Ziggy_Movement_0
# 348 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_4
# 349 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 351 "data/maps/Route101/scripts.pory"
	checkplayergender
# 352 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101OrphanJoel_37
Route101OrphanJoel_36:
# 361 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101OrphanJoel_42
Route101OrphanJoel_41:
# 370 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 371 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_9
# 372 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 373 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 374 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 376 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101OrphanJoel_45
Route101OrphanJoel_44:
# 380 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101OrphanJoel_48
Route101OrphanJoel_47:
# 383 "data/maps/Route101/scripts.pory"
	setflag SamanthaJoelInteraction
	goto Route101OrphanJoel_6

Route101OrphanJoel_29:
# 474 "data/maps/Route101/scripts.pory"
	goto JoelandAnne101talk
	goto Route101OrphanJoel_28

Route101OrphanJoel_32:
# 397 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 398 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_12
# 399 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 400 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_13
# 401 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_1
# 402 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 403 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 404 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 405 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 406 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_14
# 407 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_31

Route101OrphanJoel_33:
# 396 "data/maps/Route101/scripts.pory"
	goto_if_set Samanthagotsnacks, Route101OrphanJoel_32
	goto Route101OrphanJoel_31

Route101OrphanJoel_37:
# 353 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 354 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_5
# 355 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 356 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 357 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 358 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_6
	goto Route101OrphanJoel_36

Route101OrphanJoel_39:
# 411 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 412 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 413 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_1
# 414 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 415 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 416 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 417 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_2
# 418 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101OrphanJoelApproach0_Movement_1
# 419 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_3
# 420 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 421 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101Ziggy_Movement_0
# 422 "data/maps/Route101/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 423 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_15
# 424 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 425 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_16
# 426 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 427 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_17
# 428 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 429 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_18
# 430 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 431 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_9
# 432 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 433 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 434 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 435 "data/maps/Route101/scripts.pory"
	setflag SamanthaJoelInteraction
# 436 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_12

Route101OrphanJoel_42:
# 362 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 363 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_7
# 365 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 366 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 367 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 368 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_8
	goto Route101OrphanJoel_41

Route101OrphanJoel_45:
# 377 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 378 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_10
	goto Route101OrphanJoel_44

Route101OrphanJoel_48:
# 381 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 382 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_11
	goto Route101OrphanJoel_47


JoelandAnne101meeting::
# 487 "data/maps/Route101/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq JoelandAnne101meeting_1
# 508 "data/maps/Route101/scripts.pory"
JoelandAnne101talk:
# 509 "data/maps/Route101/scripts.pory"
	lockall
# 510 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 511 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_0
# 512 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 513 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_2
# 514 "data/maps/Route101/scripts.pory"
	applymovement 5, JoelandAnne101meeting_Movement_0
# 515 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 516 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_3
# 517 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 518 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 519 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_4
# 521 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_2
# 522 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 523 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_5
# 524 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 525 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_3
# 526 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 527 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_6
# 528 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_2
# 529 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 530 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_7
# 532 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 533 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 534 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_8
# 535 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_2
# 536 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 537 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_9
# 538 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 539 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 540 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_10
# 541 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_4
# 543 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 544 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_11
# 545 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_WEAK
# 546 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_12
# 547 "data/maps/Route101/scripts.pory"
	closemessage
# 548 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_5
# 549 "data/maps/Route101/scripts.pory"
	applymovement 5, JoelandAnne101meeting_Movement_6
# 552 "data/maps/Route101/scripts.pory"
	waitmovement 1
# 553 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 554 "data/maps/Route101/scripts.pory"
	waitmovement 5
# 556 "data/maps/Route101/scripts.pory"
	removeobject 1
# 557 "data/maps/Route101/scripts.pory"
	removeobject 4
# 558 "data/maps/Route101/scripts.pory"
	removeobject 5
# 560 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 561 "data/maps/Route101/scripts.pory"
	setflag joelin101
# 562 "data/maps/Route101/scripts.pory"
	setflag anneinroute101
# 563 "data/maps/Route101/scripts.pory"
	clearflag joelinsidetent
# 564 "data/maps/Route101/scripts.pory"
	clearflag annegoestojoel
# 566 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 3
# 567 "data/maps/Route101/scripts.pory"
endofjoelandannemeeting:
# 568 "data/maps/Route101/scripts.pory"
	releaseall
	return

JoelandAnne101meeting_1:
# 488 "data/maps/Route101/scripts.pory"
	checkplayergender
# 489 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JoelandAnne101meeting_5
JoelandAnne101meeting_4:
# 497 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq JoelandAnne101meeting_7
	return

JoelandAnne101meeting_5:
# 490 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101Ziggy_Movement_0
# 491 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 492 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_0
# 493 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 494 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 495 "data/maps/Route101/scripts.pory"
	goto endofjoelandannemeeting
	goto JoelandAnne101meeting_4

JoelandAnne101meeting_7:
# 498 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101Ziggy_Movement_0
# 499 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 500 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_1
# 501 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 502 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 503 "data/maps/Route101/scripts.pory"
	goto endofjoelandannemeeting
	return


Route101RebelApproach0::
# 573 "data/maps/Route101/scripts.pory"
	lockall
# 574 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 575 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 576 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 577 "data/maps/Route101/scripts.pory"
	waitmovement
# 578 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 579 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 580 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 581 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach1::
# 585 "data/maps/Route101/scripts.pory"
	lockall
# 586 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 587 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 588 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 589 "data/maps/Route101/scripts.pory"
	waitmovement
# 590 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 591 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 592 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach1_Movement_0
# 593 "data/maps/Route101/scripts.pory"
	waitmovement
# 594 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 595 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach2::
# 599 "data/maps/Route101/scripts.pory"
	lockall
# 600 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 601 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 602 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 603 "data/maps/Route101/scripts.pory"
	waitmovement
# 604 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 605 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 606 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach2_Movement_0
# 607 "data/maps/Route101/scripts.pory"
	waitmovement
# 608 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 609 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach3::
# 613 "data/maps/Route101/scripts.pory"
	lockall
# 614 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 615 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 616 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 617 "data/maps/Route101/scripts.pory"
	waitmovement
# 618 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 619 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 620 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach3_Movement_0
# 621 "data/maps/Route101/scripts.pory"
	waitmovement
# 622 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 623 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Pokemonlickswound::
# 628 "data/maps/Route101/scripts.pory"
	lock
# 629 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 630 "data/maps/Route101/scripts.pory"
	goto_if_set rickhitsplayer, Pokemonlickswound_2
# 643 "data/maps/Route101/scripts.pory"
	release
Pokemonlickswound_1:
# 644 "data/maps/Route101/scripts.pory"
	release
	return

Pokemonlickswound_2:
# 632 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 633 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pokemonlickswound_Movement_0
# 634 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Pokemonlickswound_Movement_1
# 635 "data/maps/Route101/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 636 "data/maps/Route101/scripts.pory"
	msgbox Pokemonlickswound_Text_0
# 637 "data/maps/Route101/scripts.pory"
	playse SE_M_LICK
# 638 "data/maps/Route101/scripts.pory"
	waitse
# 639 "data/maps/Route101/scripts.pory"
	msgbox Pokemonlickswound_Text_1
# 640 "data/maps/Route101/scripts.pory"
	clearflag rickhitsplayer
	goto Pokemonlickswound_1


Route101RebelGruntBattle::
# 648 "data/maps/Route101/scripts.pory"
rebelafterapproach:
# 649 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 650 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_0
# 651 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 652 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_1
# 653 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_2, Route101RebelGruntBattle_Text_3
# 654 "data/maps/Route101/scripts.pory"
	waitmessage
# 656 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_2
Route101RebelGruntBattle_1:
# 669 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_5
Route101RebelGruntBattle_4:
# 674 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_GRUNT_101, Rebel101_Outro
# 675 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 676 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_7
# 678 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 679 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_3
# 680 "data/maps/Route101/scripts.pory"
repeathit:
# 681 "data/maps/Route101/scripts.pory"
	setspeaker [ NULL ]
# 682 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_8
# 683 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_9, Route101RebelGruntBattle_Text_10
# 685 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_8
Route101RebelGruntBattle_7:
# 701 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_11
Route101RebelGruntBattle_10:
# 715 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 716 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_17
# 717 "data/maps/Route101/scripts.pory"
	playse SE_FLEE
# 718 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_4
# 719 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 720 "data/maps/Route101/scripts.pory"
	waitse
# 721 "data/maps/Route101/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 722 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_18
# 723 "data/maps/Route101/scripts.pory"
	removeobject 3
# 724 "data/maps/Route101/scripts.pory"
	setflag rebel101runsaway
# 725 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ITEM_ROUTE101REBELITEM
# 726 "data/maps/Route101/scripts.pory"
	addobject 6
# 727 "data/maps/Route101/scripts.pory"
	waitmovement 3
# 731 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 732 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101REBELFLEES, 1
# 733 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 734 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101RebelGruntBattle_2:
# 657 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 658 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_4
# 659 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 660 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_0
# 661 "data/maps/Route101/scripts.pory"
	waitmovement
# 662 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_1
# 663 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101RebelGruntBattle_Movement_2
# 664 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 665 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_5
	goto Route101RebelGruntBattle_1

Route101RebelGruntBattle_5:
# 670 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 671 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_6
	goto Route101RebelGruntBattle_4

Route101RebelGruntBattle_8:
# 686 "data/maps/Route101/scripts.pory"
	checkplayergender
# 687 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_14
Route101RebelGruntBattle_13:
# 693 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_19
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_11:
# 702 "data/maps/Route101/scripts.pory"
	checkplayergender
# 703 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_17
Route101RebelGruntBattle_16:
# 710 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_21
	goto Route101RebelGruntBattle_10

Route101RebelGruntBattle_14:
# 688 "data/maps/Route101/scripts.pory"
	playse SE_ICE_STAIRS
# 689 "data/maps/Route101/scripts.pory"
	waitse
# 690 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_11
	goto Route101RebelGruntBattle_13

Route101RebelGruntBattle_17:
# 704 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 705 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_14
# 706 "data/maps/Route101/scripts.pory"
	setflag rickhitsplayer
# 707 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 708 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_15
# 709 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_16

Route101RebelGruntBattle_19:
# 694 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 695 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_12
# 696 "data/maps/Route101/scripts.pory"
	setflag rickhitsplayer
# 697 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_RICK ]
# 698 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_13
# 699 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_21:
# 711 "data/maps/Route101/scripts.pory"
	playse SE_BALL_THROW
# 712 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_16
	goto Route101RebelGruntBattle_10


Route101RebelItem::
# 741 "data/maps/Route101/scripts.pory"
	lock
# 742 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelItem_Text_0
# 743 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM46
# 744 "data/maps/Route101/scripts.pory"
	setflag FLAG_ITEM_ROUTE101REBELITEM
# 745 "data/maps/Route101/scripts.pory"
	removeobject 6
# 746 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101GruntBatHitShake::
# 754 "data/maps/Route101/scripts.pory"
	playse SE_EFFECTIVE
# 755 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 2
# 756 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8005, 6
# 757 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8006, 4
# 758 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8007, 4
# 759 "data/maps/Route101/scripts.pory"
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

# 310 "data/maps/Route101/scripts.pory"
SamanthaDontgotoCrater_Movement_0:
# 310 "data/maps/Route101/scripts.pory"
	face_player
# 310 "data/maps/Route101/scripts.pory"
	emote_exclamation_mark
	step_end

# 317 "data/maps/Route101/scripts.pory"
SamanthaDontgotoCrater_Movement_1:
# 317 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 349 "data/maps/Route101/scripts.pory"
Route101OrphanJoel_Movement_0:
# 349 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 401 "data/maps/Route101/scripts.pory"
Route101OrphanJoel_Movement_1:
# 401 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 511 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_0:
# 511 "data/maps/Route101/scripts.pory"
	walk_in_place_down
	step_end

# 517 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_1:
# 517 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 521 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_2:
# 521 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 525 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_3:
# 525 "data/maps/Route101/scripts.pory"
	emote_question_mark
# 525 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 541 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_4:
# 541 "data/maps/Route101/scripts.pory"
	walk_right
# 541 "data/maps/Route101/scripts.pory"
	walk_right
# 541 "data/maps/Route101/scripts.pory"
	walk_up
# 541 "data/maps/Route101/scripts.pory"
	walk_up
# 541 "data/maps/Route101/scripts.pory"
	walk_up
# 541 "data/maps/Route101/scripts.pory"
	walk_right
# 541 "data/maps/Route101/scripts.pory"
	walk_right
# 541 "data/maps/Route101/scripts.pory"
	walk_right
# 541 "data/maps/Route101/scripts.pory"
	walk_right
# 541 "data/maps/Route101/scripts.pory"
	walk_right
# 541 "data/maps/Route101/scripts.pory"
	walk_right
# 541 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 548 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_5:
# 548 "data/maps/Route101/scripts.pory"
	walk_down
# 548 "data/maps/Route101/scripts.pory"
	walk_down
# 548 "data/maps/Route101/scripts.pory"
	walk_left
# 548 "data/maps/Route101/scripts.pory"
	walk_left
# 548 "data/maps/Route101/scripts.pory"
	walk_left
# 548 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 549 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_6:
# 549 "data/maps/Route101/scripts.pory"
	walk_down
# 549 "data/maps/Route101/scripts.pory"
	walk_down
# 549 "data/maps/Route101/scripts.pory"
	walk_down
# 549 "data/maps/Route101/scripts.pory"
	walk_left
# 549 "data/maps/Route101/scripts.pory"
	walk_left
# 549 "data/maps/Route101/scripts.pory"
	walk_left
# 549 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 633 "data/maps/Route101/scripts.pory"
Pokemonlickswound_Movement_0:
# 633 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 634 "data/maps/Route101/scripts.pory"
Pokemonlickswound_Movement_1:
# 634 "data/maps/Route101/scripts.pory"
	walk_in_place_left
# 634 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 660 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_0:
# 660 "data/maps/Route101/scripts.pory"
	jump_in_place_up
	step_end

# 662 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_1:
# 662 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 662 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 663 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_2:
# 663 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 663 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 679 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_3:
# 679 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 718 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_4:
# 718 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 718 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 718 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 718 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 718 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 718 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 718 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

Route101Ziggy_Text_0:
# 252 "data/maps/Route101/scripts.pory"
	.string "Zig-ziiig!$"

Route101OrphanJoelApproach0_Text_0:
# 261 "data/maps/Route101/scripts.pory"
	.string "Hey, stop!$"

SamanthaDontgotoCrater_Text_0:
# 312 "data/maps/Route101/scripts.pory"
	.string "O-oh, {PLAYER}... that way is the...\n"
	.string "Great Crater, isn't it?$"

SamanthaDontgotoCrater_Text_1:
# 314 "data/maps/Route101/scripts.pory"
	.string "I know they sell donuts there, but... I\n"
	.string "don't like them much.\p"
	.string "Can we go to Oldale's vending machine\n"
	.string "instead?$"

Route101OrphanJoel_Text_0:
# 333 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Nom-nom-nom...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route101OrphanJoel_Text_1:
# 339 "data/maps/Route101/scripts.pory"
	.string "Hey {PLAYER}! And strange lady! Where\n"
	.string "are you two going?$"

Route101OrphanJoel_Text_2:
# 343 "data/maps/Route101/scripts.pory"
	.string "S-... strange lady...?$"

Route101OrphanJoel_Text_3:
# 345 "data/maps/Route101/scripts.pory"
	.string "W-well, we went out to get food at\n"
	.string "Oldale...$"

Route101OrphanJoel_Text_4:
# 348 "data/maps/Route101/scripts.pory"
	.string "Food? I've got some Oran berries here if\n"
	.string "you'd like!$"

Route101OrphanJoel_Text_5:
# 354 "data/maps/Route101/scripts.pory"
	.string "Don't be silly, Joel! They're going on a\n"
	.string "date to a nice place!$"

Route101OrphanJoel_Text_6:
# 358 "data/maps/Route101/scripts.pory"
	.string "D-date!? N-no, it's not like that...!$"

Route101OrphanJoel_Text_7:
# 363 "data/maps/Route101/scripts.pory"
	.string "Don't be silly, Joel! They're on a girls'\n"
	.string "day out!\p"
	.string "So they're going to a nice place to eat\n"
	.string "yummy food!$"

Route101OrphanJoel_Text_8:
# 368 "data/maps/Route101/scripts.pory"
	.string "N-no, it's not like t-...$"

Route101OrphanJoel_Text_9:
# 371 "data/maps/Route101/scripts.pory"
	.string "Really? Well, more for me!$"

Route101OrphanJoel_Text_10:
# 378 "data/maps/Route101/scripts.pory"
	.string "Hehe... well, have fun! I'm rooting for\n"
	.string "you two.$"

Route101OrphanJoel_Text_11:
# 382 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Boys, am I right?$"

Route101OrphanJoel_Text_12:
# 398 "data/maps/Route101/scripts.pory"
	.string "That's a lot of snacks you got! Can I\n"
	.string "have some?$"

Route101OrphanJoel_Text_13:
# 400 "data/maps/Route101/scripts.pory"
	.string "O-of course... here!$"

Route101OrphanJoel_Text_14:
# 406 "data/maps/Route101/scripts.pory"
	.string "Hmm... they're alright! But I still prefer\n"
	.string "berries.$"

Route101OrphanJoel_Text_15:
# 423 "data/maps/Route101/scripts.pory"
	.string "Food? I've got some Oran berries if\n"
	.string "you'd like!$"

Route101OrphanJoel_Text_16:
# 425 "data/maps/Route101/scripts.pory"
	.string "B-berries...? Y-you eat them raw? You\n"
	.string "don't get... s-sick...?$"

Route101OrphanJoel_Text_17:
# 427 "data/maps/Route101/scripts.pory"
	.string "I did at first, but I got used to them.\n"
	.string "Here, try them!$"

Route101OrphanJoel_Text_18:
# 429 "data/maps/Route101/scripts.pory"
	.string "T-thank you, b-but I'll have... some more\n"
	.string "p-processed food...$"

Route101OrphanJoel_Text_19:
# 449 "data/maps/Route101/scripts.pory"
	.string "You can't go into my Secret Shelter!$"

Route101OrphanJoel_Text_20:
# 454 "data/maps/Route101/scripts.pory"
	.string "I'm Joel. See that tent over there? It's\n"
	.string "my Secret Shelter.$"

Route101OrphanJoel_Text_21:
# 457 "data/maps/Route101/scripts.pory"
	.string "Many people lived in weird places during\n"
	.string "the war, to hide from the bad guys.\p"
	.string "Some still do it, if they don't have\n"
	.string "anywhere else to go.\p"
	.string "You look a bit like them, so you can have\n"
	.string "this.$"

Route101OrphanJoel_Text_22:
# 463 "data/maps/Route101/scripts.pory"
	.string "If you teach Secret Power to a Pokémon,\n"
	.string "you can make Secret Shelters in all\l"
	.string "sorts of places.\p"
	.string "Some have unique things about them...\n"
	.string "but I won't tell you about mine!$"

Route101OrphanJoel_Text_23:
# 470 "data/maps/Route101/scripts.pory"
	.string "Have you made a Secret Shelter yet?\p"
	.string "I guess you can visit mine, if you need\n"
	.string "ideas for yours...\p"
	.string "But don't touch anything!$"

JoelandAnne101meeting_Text_0:
# 492 "data/maps/Route101/scripts.pory"
	.string "Hehe... you look good together!$"

JoelandAnne101meeting_Text_1:
# 500 "data/maps/Route101/scripts.pory"
	.string "Please invite me to the girls' day next\n"
	.string "time! Pleeeease!$"

JoelandAnne101meeting_Text_2:
# 513 "data/maps/Route101/scripts.pory"
	.string "So... you are moving?$"

JoelandAnne101meeting_Text_3:
# 516 "data/maps/Route101/scripts.pory"
	.string "Zig-zig?$"

JoelandAnne101meeting_Text_4:
# 519 "data/maps/Route101/scripts.pory"
	.string "Yes... I'm sorry Joel... mom has packed\n"
	.string "everything up.\p"
	.string "I think I'll have to go... but I'll come\n"
	.string "visit soon!\p"
	.string "Then you can teach me all about Secret\n"
	.string "Shelters.$"

JoelandAnne101meeting_Text_5:
# 523 "data/maps/Route101/scripts.pory"
	.string "O-oh, that's okay...! In fact, you don't\n"
	.string "need to come back at all!$"

JoelandAnne101meeting_Text_6:
# 527 "data/maps/Route101/scripts.pory"
	.string "What? Why!?$"

JoelandAnne101meeting_Text_7:
# 530 "data/maps/Route101/scripts.pory"
	.string "Because... I'll go visit you instead!\p"
	.string "I was thinking of making new Secret\n"
	.string "Shelters anyway.\p"
	.string "I'm sure there's tons of cool places for\n"
	.string "them in Rustboro.$"

JoelandAnne101meeting_Text_8:
# 534 "data/maps/Route101/scripts.pory"
	.string "Really!? You promise to come visit?$"

JoelandAnne101meeting_Text_9:
# 537 "data/maps/Route101/scripts.pory"
	.string "I do! Now get going, before your mom\n"
	.string "gets worried.$"

JoelandAnne101meeting_Text_10:
# 540 "data/maps/Route101/scripts.pory"
	.string "Okay! It's a promise. I'll be waiting!\p"
	.string "See you soon Joel!$"

JoelandAnne101meeting_Text_11:
# 544 "data/maps/Route101/scripts.pory"
	.string "...\p"
	.string "... let's go inside, Ziggy.$"

JoelandAnne101meeting_Text_12:
# 546 "data/maps/Route101/scripts.pory"
	.string "Ziiig...$"

Route101RebelApproach0_Text_0:
# 579 "data/maps/Route101/scripts.pory"
	.string "Hey there, kid!$"

Pokemonlickswound_Text_0:
# 636 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} approaches you slowly...$"

Pokemonlickswound_Text_1:
# 639 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} licks {PLAYER}'s\n"
	.string "wound from the hit just now.\p"
	.string "...{PLAYER}'s pain is somewhat\n"
	.string "soothed.$"

Route101RebelGruntBattle_Text_0:
# 650 "data/maps/Route101/scripts.pory"
	.string "Wowie, that's a cute Safemon you got\n"
	.string "there. Bet it's worth a ton!$"

Route101RebelGruntBattle_Text_1:
# 652 "data/maps/Route101/scripts.pory"
	.string "Hand it over.$"

Route101RebelGruntBattle_Text_2:
# 653 "data/maps/Route101/scripts.pory"
	.string "Obey$"

Route101RebelGruntBattle_Text_3:
# 653 "data/maps/Route101/scripts.pory"
	.string "Refuse$"

Route101RebelGruntBattle_Text_4:
# 658 "data/maps/Route101/scripts.pory"
	.string "Hehe, you're smarter than you loo-...$"

Route101RebelGruntBattle_Text_5:
# 665 "data/maps/Route101/scripts.pory"
	.string "What the-? Looks like your Pokémon has\n"
	.string "more guts than you! Hahaha!\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_6:
# 671 "data/maps/Route101/scripts.pory"
	.string "Playing brave huh? You really don't look\n"
	.string "the type.\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_7:
# 676 "data/maps/Route101/scripts.pory"
	.string "Grr... alright, that thing of yours is\n"
	.string "strong, for a lab rat.\p"
	.string "But you still look weak yourself!\n"
	.string "UOOOGYAA!$"

Route101RebelGruntBattle_Text_8:
# 682 "data/maps/Route101/scripts.pory"
	.string "The rebel swings his bat to hit\n"
	.string "{PLAYER}!$"

Route101RebelGruntBattle_Text_9:
# 683 "data/maps/Route101/scripts.pory"
	.string "Parry$"

Route101RebelGruntBattle_Text_10:
# 683 "data/maps/Route101/scripts.pory"
	.string "Dodge$"

Route101RebelGruntBattle_Text_11:
# 690 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} parries the bat with one of\n"
	.string "his crutches, and the rebel falls on his\l"
	.string "back.$"

Route101RebelGruntBattle_Text_12:
# 695 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} fails to block the bat with\n"
	.string "her arms. That must have hurted...$"

Route101RebelGruntBattle_Text_13:
# 698 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy girl, I'll give you that!$"

Route101RebelGruntBattle_Text_14:
# 705 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} is too slow to dodge the hit.\n"
	.string "That must have hurted...$"

Route101RebelGruntBattle_Text_15:
# 708 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy guy, I'll give you that!$"

Route101RebelGruntBattle_Text_16:
# 712 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} manages to dodge the hit,\n"
	.string "and the rebel's lost momentum makes him\l"
	.string "fall on his back.$"

Route101RebelGruntBattle_Text_17:
# 716 "data/maps/Route101/scripts.pory"
	.string "D-damn it! They told me Littleroot\n"
	.string "hicks were easy prey!$"

Route101RebelGruntBattle_Text_18:
# 722 "data/maps/Route101/scripts.pory"
	.string "Screw this!$"

Route101RebelItem_Text_0:
# 742 "data/maps/Route101/scripts.pory"
	.string "It seems the rebel dropped this while\n"
	.string "fleeing...$"

Orphan101_Outro::
# 481 "data/maps/Route101/scripts.pory"
	.string "... you still can't go into my Secret\n Shelter.$"

Rebel101_Outro::
# 750 "data/maps/Route101/scripts.pory"
	.string "Shit...$"
