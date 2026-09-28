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
	goto_if_set FLAG_SYS_POKEDEX_GET, Route101Ziggy_2
Route101Ziggy_1:
# 255 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101Ziggy_Movement_1
# 256 "data/maps/Route101/scripts.pory"
	waitmovement 5
# 257 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101Ziggy_2:
# 254 "data/maps/Route101/scripts.pory"
	setseenmon SPECIES_ZIGZAGOON
	goto Route101Ziggy_1


Route101OrphanJoelApproach0::
# 261 "data/maps/Route101/scripts.pory"
	lockall
# 262 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 263 "data/maps/Route101/scripts.pory"
	playbgm MUS_DUSKFACTORY, TRUE
# 264 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 265 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 266 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 267 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach1::
# 271 "data/maps/Route101/scripts.pory"
	lockall
# 272 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 273 "data/maps/Route101/scripts.pory"
	playbgm MUS_DUSKFACTORY, TRUE
# 274 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 275 "data/maps/Route101/scripts.pory"
	waitmovement
# 276 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 277 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach1_Movement_0
# 278 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoelApproach1_Movement_0
# 279 "data/maps/Route101/scripts.pory"
	waitmovement
# 280 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 281 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach2::
# 285 "data/maps/Route101/scripts.pory"
	lockall
# 286 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 287 "data/maps/Route101/scripts.pory"
	playbgm MUS_DUSKFACTORY, TRUE
# 288 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 289 "data/maps/Route101/scripts.pory"
	waitmovement
# 290 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 291 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach2_Movement_0
# 292 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoelApproach2_Movement_0
# 293 "data/maps/Route101/scripts.pory"
	waitmovement
# 294 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 295 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


Route101OrphanJoelApproach3::
# 299 "data/maps/Route101/scripts.pory"
	lockall
# 300 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 301 "data/maps/Route101/scripts.pory"
	playbgm MUS_DUSKFACTORY, TRUE
# 302 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach0_Movement_0
# 303 "data/maps/Route101/scripts.pory"
	waitmovement
# 304 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoelApproach0_Text_0
# 305 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoelApproach3_Movement_0
# 306 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoelApproach3_Movement_0
# 307 "data/maps/Route101/scripts.pory"
	waitmovement
# 308 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 309 "data/maps/Route101/scripts.pory"
	goto orphanafterapproach
	return


SamanthaDontgotoCrater::
# 313 "data/maps/Route101/scripts.pory"
	lock
# 314 "data/maps/Route101/scripts.pory"
	goto_if_unset Samanthagotsnacks, SamanthaDontgotoCrater_2
# 323 "data/maps/Route101/scripts.pory"
	msgbox SamanthaDontgotoCrater_Text_2
SamanthaDontgotoCrater_1:
# 326 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101OrphanJoelApproach1_Movement_0
# 327 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SamanthaDontgotoCrater_Movement_1
# 328 "data/maps/Route101/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 329 "data/maps/Route101/scripts.pory"
	releaseall
	return

SamanthaDontgotoCrater_2:
# 316 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 317 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 318 "data/maps/Route101/scripts.pory"
	msgbox SamanthaDontgotoCrater_Text_0
# 320 "data/maps/Route101/scripts.pory"
	msgbox SamanthaDontgotoCrater_Text_1
	goto SamanthaDontgotoCrater_1


Route101OrphanJoel::
# 333 "data/maps/Route101/scripts.pory"
	lock
# 334 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 336 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_gt Route101OrphanJoel_3
Route101OrphanJoel_2:
# 456 "data/maps/Route101/scripts.pory"
orphanafterapproach:
# 457 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 0
	goto_if_eq Route101OrphanJoel_10
Route101OrphanJoel_9:
# 478 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq Route101OrphanJoel_19
Route101OrphanJoel_18:
# 484 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq Route101OrphanJoel_29
Route101OrphanJoel_28:
# 486 "data/maps/Route101/scripts.pory"
Joelfinish:
# 487 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_1
# 488 "data/maps/Route101/scripts.pory"
	waitmovement 1
# 489 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101OrphanJoel_1:
# 337 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 2
	goto_if_eq Route101OrphanJoel_7
Route101OrphanJoel_6:
# 398 "data/maps/Route101/scripts.pory"
	compare VAR_JOELQUESTS, 1
	goto_if_eq Route101OrphanJoel_13
Route101OrphanJoel_12:
# 451 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	return

Route101OrphanJoel_3:
# 336 "data/maps/Route101/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq Route101OrphanJoel_1
	goto Route101OrphanJoel_2

Route101OrphanJoel_7:
# 339 "data/maps/Route101/scripts.pory"
	goto_if_set SamanthaJoelInteraction, Route101OrphanJoel_16
Route101OrphanJoel_15:
# 346 "data/maps/Route101/scripts.pory"
	goto_if_unset SamanthaJoelInteraction, Route101OrphanJoel_26
	goto Route101OrphanJoel_6

Route101OrphanJoel_10:
# 459 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 460 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_19
# 461 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_ORPHAN_MALE_101, Orphan101_Outro
# 462 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 463 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 464 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_0
# 465 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_20
# 466 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 467 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 468 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_21
# 471 "data/maps/Route101/scripts.pory"
	waitmessage
# 472 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM43
# 473 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 474 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_22
# 476 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 1
# 477 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_9

Route101OrphanJoel_13:
# 400 "data/maps/Route101/scripts.pory"
	goto_if_set SamanthaJoelInteraction, Route101OrphanJoel_23
Route101OrphanJoel_21:
# 407 "data/maps/Route101/scripts.pory"
	goto_if_set SamanthaJoelInteraction, Route101OrphanJoel_33
Route101OrphanJoel_31:
# 421 "data/maps/Route101/scripts.pory"
	goto_if_unset SamanthaJoelInteraction, Route101OrphanJoel_39
	goto Route101OrphanJoel_12

Route101OrphanJoel_16:
# 340 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 341 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 342 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 343 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
	goto Route101OrphanJoel_15

Route101OrphanJoel_19:
# 479 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 480 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 481 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_23
	goto Route101OrphanJoel_18

Route101OrphanJoel_22:
# 401 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 402 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 403 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 404 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_21

Route101OrphanJoel_23:
# 400 "data/maps/Route101/scripts.pory"
	goto_if_unset Samanthagotsnacks, Route101OrphanJoel_22
	goto Route101OrphanJoel_21

Route101OrphanJoel_26:
# 347 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 348 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 349 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_1
# 350 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 351 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 352 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 353 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_2
# 354 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101OrphanJoelApproach0_Movement_1
# 355 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 356 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_3
# 357 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 358 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101Ziggy_Movement_0
# 359 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_4
# 360 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 362 "data/maps/Route101/scripts.pory"
	checkplayergender
# 363 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101OrphanJoel_37
Route101OrphanJoel_36:
# 372 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101OrphanJoel_42
Route101OrphanJoel_41:
# 381 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 382 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_9
# 383 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 384 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 385 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 387 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101OrphanJoel_45
Route101OrphanJoel_44:
# 391 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101OrphanJoel_48
Route101OrphanJoel_47:
# 394 "data/maps/Route101/scripts.pory"
	setflag SamanthaJoelInteraction
	goto Route101OrphanJoel_6

Route101OrphanJoel_29:
# 485 "data/maps/Route101/scripts.pory"
	goto JoelandAnne101talk
	goto Route101OrphanJoel_28

Route101OrphanJoel_32:
# 408 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 409 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_12
# 410 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 411 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_13
# 412 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_1
# 413 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 414 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 415 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 416 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 417 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_14
# 418 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_31

Route101OrphanJoel_33:
# 407 "data/maps/Route101/scripts.pory"
	goto_if_set Samanthagotsnacks, Route101OrphanJoel_32
	goto Route101OrphanJoel_31

Route101OrphanJoel_37:
# 364 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 365 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_5
# 366 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 367 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 368 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 369 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_6
	goto Route101OrphanJoel_36

Route101OrphanJoel_39:
# 422 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101Ziggy_Movement_0
# 423 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 424 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_1
# 425 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 426 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 427 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 428 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_2
# 429 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101OrphanJoelApproach0_Movement_1
# 430 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_3
# 431 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 432 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route101Ziggy_Movement_0
# 433 "data/maps/Route101/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 434 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_15
# 435 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 436 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_16
# 437 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 438 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_17
# 439 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 440 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_18
# 441 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 442 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_9
# 443 "data/maps/Route101/scripts.pory"
	playse SE_M_BITE
# 444 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 445 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_0
# 446 "data/maps/Route101/scripts.pory"
	setflag SamanthaJoelInteraction
# 447 "data/maps/Route101/scripts.pory"
	goto Joelfinish
	goto Route101OrphanJoel_12

Route101OrphanJoel_42:
# 373 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 374 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_7
# 376 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SamanthaDontgotoCrater_Movement_0
# 377 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 378 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_SAMANTHA ]
# 379 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_8
	goto Route101OrphanJoel_41

Route101OrphanJoel_45:
# 388 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 389 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_10
	goto Route101OrphanJoel_44

Route101OrphanJoel_48:
# 392 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 393 "data/maps/Route101/scripts.pory"
	msgbox Route101OrphanJoel_Text_11
	goto Route101OrphanJoel_47


JoelandAnne101meeting::
# 500 "data/maps/Route101/scripts.pory"
	compare VAR_MAUSOLEUM_HEXGIRL, 3
	goto_if_eq JoelandAnne101meeting_1
# 521 "data/maps/Route101/scripts.pory"
JoelandAnne101talk:
# 522 "data/maps/Route101/scripts.pory"
	lockall
# 523 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 524 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101OrphanJoel_Movement_1
# 525 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 526 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_2
# 527 "data/maps/Route101/scripts.pory"
	applymovement 5, Route101OrphanJoel_Movement_1
# 528 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_NORMAL
# 529 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_3
# 530 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 531 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 532 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_4
# 534 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_0
# 535 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 536 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_5
# 537 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 538 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_1
# 539 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 540 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_6
# 541 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_0
# 542 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 543 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_7
# 545 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 546 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 547 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_8
# 548 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_0
# 549 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 550 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_9
# 551 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 552 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 553 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_10
# 554 "data/maps/Route101/scripts.pory"
	applymovement 4, JoelandAnne101meeting_Movement_2
# 556 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_JOEL ]
# 557 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_11
# 558 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_WEAK
# 559 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_12
# 560 "data/maps/Route101/scripts.pory"
	closemessage
# 561 "data/maps/Route101/scripts.pory"
	applymovement 1, JoelandAnne101meeting_Movement_3
# 562 "data/maps/Route101/scripts.pory"
	applymovement 5, JoelandAnne101meeting_Movement_4
# 565 "data/maps/Route101/scripts.pory"
	waitmovement 1
# 566 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 567 "data/maps/Route101/scripts.pory"
	waitmovement 5
# 569 "data/maps/Route101/scripts.pory"
	removeobject 1
# 570 "data/maps/Route101/scripts.pory"
	removeobject 4
# 571 "data/maps/Route101/scripts.pory"
	removeobject 5
# 573 "data/maps/Route101/scripts.pory"
	playse SE_EXIT
# 574 "data/maps/Route101/scripts.pory"
	setflag joelin101
# 575 "data/maps/Route101/scripts.pory"
	setflag anneinroute101
# 576 "data/maps/Route101/scripts.pory"
	clearflag joelinsidetent
# 577 "data/maps/Route101/scripts.pory"
	clearflag annegoestojoel
# 579 "data/maps/Route101/scripts.pory"
	setvar VAR_JOELQUESTS, 3
# 580 "data/maps/Route101/scripts.pory"
endofjoelandannemeeting:
# 581 "data/maps/Route101/scripts.pory"
	releaseall
	return

JoelandAnne101meeting_1:
# 501 "data/maps/Route101/scripts.pory"
	checkplayergender
# 502 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JoelandAnne101meeting_5
JoelandAnne101meeting_4:
# 510 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq JoelandAnne101meeting_7
	return

JoelandAnne101meeting_5:
# 503 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101Ziggy_Movement_0
# 504 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 505 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_0
# 506 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 507 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 508 "data/maps/Route101/scripts.pory"
	goto endofjoelandannemeeting
	goto JoelandAnne101meeting_4

JoelandAnne101meeting_7:
# 511 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101Ziggy_Movement_0
# 512 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_ANNE ]
# 513 "data/maps/Route101/scripts.pory"
	msgbox JoelandAnne101meeting_Text_1
# 514 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101OrphanJoel_Movement_0
# 515 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 516 "data/maps/Route101/scripts.pory"
	goto endofjoelandannemeeting
	return


Route101RebelApproach0::
# 586 "data/maps/Route101/scripts.pory"
	lockall
# 587 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 588 "data/maps/Route101/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 589 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 590 "data/maps/Route101/scripts.pory"
	waitmovement
# 591 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 592 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 593 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 594 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach1::
# 598 "data/maps/Route101/scripts.pory"
	lockall
# 599 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 600 "data/maps/Route101/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 601 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 602 "data/maps/Route101/scripts.pory"
	waitmovement
# 603 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 604 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 605 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach1_Movement_0
# 606 "data/maps/Route101/scripts.pory"
	waitmovement
# 607 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 608 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach2::
# 612 "data/maps/Route101/scripts.pory"
	lockall
# 613 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 614 "data/maps/Route101/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 615 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 616 "data/maps/Route101/scripts.pory"
	waitmovement
# 617 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 618 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 619 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach2_Movement_0
# 620 "data/maps/Route101/scripts.pory"
	waitmovement
# 621 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 622 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelApproach3::
# 626 "data/maps/Route101/scripts.pory"
	lockall
# 627 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 628 "data/maps/Route101/scripts.pory"
	playbgm MUS_SKULLKERHIDEOUT, TRUE
# 629 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach0_Movement_0
# 630 "data/maps/Route101/scripts.pory"
	waitmovement
# 631 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 632 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelApproach0_Text_0
# 633 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101OrphanJoelApproach3_Movement_0
# 634 "data/maps/Route101/scripts.pory"
	waitmovement
# 635 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101OrphanJoelApproach0_Movement_1
# 636 "data/maps/Route101/scripts.pory"
	goto rebelafterapproach
	return


Route101RebelGruntBattle::
# 641 "data/maps/Route101/scripts.pory"
rebelafterapproach:
# 642 "data/maps/Route101/scripts.pory"
	clearflag rebelin101mustapproachtoswing
# 643 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 644 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_0
# 645 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 646 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_1
# 647 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_2, Route101RebelGruntBattle_Text_3
# 648 "data/maps/Route101/scripts.pory"
	waitmessage
# 650 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_2
Route101RebelGruntBattle_1:
# 664 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_5
Route101RebelGruntBattle_4:
# 669 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_REBEL_GRUNT_101, Rebel101_Outro
# 670 "data/maps/Route101/scripts.pory"
	playbgm MUS_MONSTERHOUSE, TRUE
# 671 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 672 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_7
# 674 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 675 "data/maps/Route101/scripts.pory"
	goto_if_set rebelin101mustapproachtoswing, Route101RebelGruntBattle_8
Route101RebelGruntBattle_7:
# 677 "data/maps/Route101/scripts.pory"
repeathit:
# 678 "data/maps/Route101/scripts.pory"
	setspeaker [ NULL ]
# 679 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_8
# 680 "data/maps/Route101/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route101RebelGruntBattle_Text_9, Route101RebelGruntBattle_Text_10
# 682 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route101RebelGruntBattle_11
Route101RebelGruntBattle_10:
# 703 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route101RebelGruntBattle_14
Route101RebelGruntBattle_13:
# 717 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 718 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 719 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_17
# 720 "data/maps/Route101/scripts.pory"
	playse SE_FLEE
# 721 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_4
# 722 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 723 "data/maps/Route101/scripts.pory"
	waitse
# 724 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_18
# 725 "data/maps/Route101/scripts.pory"
	playse SE_BALL_BOUNCE_1
# 726 "data/maps/Route101/scripts.pory"
	closemessage
# 727 "data/maps/Route101/scripts.pory"
	removeobject 3
# 728 "data/maps/Route101/scripts.pory"
	setflag rebel101runsaway
# 729 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ITEM_ROUTE101REBELITEM
# 730 "data/maps/Route101/scripts.pory"
	addobject 6
# 731 "data/maps/Route101/scripts.pory"
	waitmovement 3
# 732 "data/maps/Route101/scripts.pory"
	fadeoutbgm 1
# 733 "data/maps/Route101/scripts.pory"
	fadenewbgm 1
# 734 "data/maps/Route101/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, TRUE
# 735 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101REBELFLEES, 1
# 736 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 737 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101RebelGruntBattle_2:
# 651 "data/maps/Route101/scripts.pory"
	setflag rebelin101mustapproachtoswing
# 652 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 653 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_4
# 654 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 655 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_0
# 656 "data/maps/Route101/scripts.pory"
	waitmovement
# 657 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101RebelGruntBattle_Movement_1
# 658 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101RebelGruntBattle_Movement_2
# 659 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 660 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_5
	goto Route101RebelGruntBattle_1

Route101RebelGruntBattle_5:
# 665 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 666 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_6
	goto Route101RebelGruntBattle_4

Route101RebelGruntBattle_8:
# 676 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101RebelGruntBattle_Movement_3
	goto Route101RebelGruntBattle_7

Route101RebelGruntBattle_11:
# 683 "data/maps/Route101/scripts.pory"
	checkplayergender
# 684 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_17
Route101RebelGruntBattle_16:
# 695 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_22
	goto Route101RebelGruntBattle_10

Route101RebelGruntBattle_14:
# 704 "data/maps/Route101/scripts.pory"
	checkplayergender
# 705 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101RebelGruntBattle_20
Route101RebelGruntBattle_19:
# 712 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route101RebelGruntBattle_24
	goto Route101RebelGruntBattle_13

Route101RebelGruntBattle_17:
# 685 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 2
# 686 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8005, 6
# 687 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8006, 4
# 688 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8007, 4
# 689 "data/maps/Route101/scripts.pory"
	special ShakeCamera
# 690 "data/maps/Route101/scripts.pory"
	playse SE_ICE_STAIRS
# 691 "data/maps/Route101/scripts.pory"
	waitse
# 692 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_11
	goto Route101RebelGruntBattle_16

Route101RebelGruntBattle_20:
# 706 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 707 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_14
# 708 "data/maps/Route101/scripts.pory"
	setflag rickhitsplayer
# 709 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 710 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_15
# 711 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_19

Route101RebelGruntBattle_22:
# 696 "data/maps/Route101/scripts.pory"
	call Route101GruntBatHitShake
# 697 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_12
# 698 "data/maps/Route101/scripts.pory"
	setflag rickhitsplayer
# 699 "data/maps/Route101/scripts.pory"
	setspeaker [ SP_NAME_CALVIN ]
# 700 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_13
# 701 "data/maps/Route101/scripts.pory"
	goto repeathit
	goto Route101RebelGruntBattle_10

Route101RebelGruntBattle_24:
# 713 "data/maps/Route101/scripts.pory"
	playse SE_BALL_THROW
# 714 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelGruntBattle_Text_16
	goto Route101RebelGruntBattle_13


Route101RebelItem::
# 744 "data/maps/Route101/scripts.pory"
	lock
# 745 "data/maps/Route101/scripts.pory"
	msgbox Route101RebelItem_Text_0
# 746 "data/maps/Route101/scripts.pory"
	giveitem ITEM_TM46
# 747 "data/maps/Route101/scripts.pory"
	setflag FLAG_ITEM_ROUTE101REBELITEM
# 748 "data/maps/Route101/scripts.pory"
	removeobject 6
# 749 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101GruntBatHitShake::
# 757 "data/maps/Route101/scripts.pory"
	playse SE_EFFECTIVE
# 758 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, 2
# 759 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8005, 6
# 760 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8006, 4
# 761 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8007, 4
# 762 "data/maps/Route101/scripts.pory"
	special ShakeCamera
	return


Pokemonlickswound::
# 766 "data/maps/Route101/scripts.pory"
	lock
# 767 "data/maps/Route101/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 768 "data/maps/Route101/scripts.pory"
	goto_if_set rickhitsplayer, Pokemonlickswound_2
# 781 "data/maps/Route101/scripts.pory"
	release
Pokemonlickswound_1:
# 782 "data/maps/Route101/scripts.pory"
	release
	return

Pokemonlickswound_2:
# 770 "data/maps/Route101/scripts.pory"
	playfirstmoncry
# 771 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JoelandAnne101meeting_Movement_0
# 772 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Pokemonlickswound_Movement_0
# 773 "data/maps/Route101/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 774 "data/maps/Route101/scripts.pory"
	msgbox Pokemonlickswound_Text_0
# 775 "data/maps/Route101/scripts.pory"
	playse SE_M_LICK
# 776 "data/maps/Route101/scripts.pory"
	waitse
# 777 "data/maps/Route101/scripts.pory"
	msgbox Pokemonlickswound_Text_1
# 778 "data/maps/Route101/scripts.pory"
	clearflag rickhitsplayer
	goto Pokemonlickswound_1


Route101JoelsTent::
# 787 "data/maps/Route101/scripts.pory"
	lockall
# 788 "data/maps/Route101/scripts.pory"
	msgbox Route101JoelsTent_Text_0
# 789 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 250 "data/maps/Route101/scripts.pory"
Route101Ziggy_Movement_0:
# 250 "data/maps/Route101/scripts.pory"
	face_player
	step_end

# 255 "data/maps/Route101/scripts.pory"
Route101Ziggy_Movement_1:
# 255 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 264 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach0_Movement_0:
# 264 "data/maps/Route101/scripts.pory"
	emote_exclamation_mark
	step_end

# 266 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach0_Movement_1:
# 266 "data/maps/Route101/scripts.pory"
	walk_in_place_up
	step_end

# 277 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach1_Movement_0:
# 277 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 291 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach2_Movement_0:
# 291 "data/maps/Route101/scripts.pory"
	walk_down
# 291 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 305 "data/maps/Route101/scripts.pory"
Route101OrphanJoelApproach3_Movement_0:
# 305 "data/maps/Route101/scripts.pory"
	walk_down
# 305 "data/maps/Route101/scripts.pory"
	walk_down
# 305 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 316 "data/maps/Route101/scripts.pory"
SamanthaDontgotoCrater_Movement_0:
# 316 "data/maps/Route101/scripts.pory"
	face_player
# 316 "data/maps/Route101/scripts.pory"
	emote_exclamation_mark
	step_end

# 327 "data/maps/Route101/scripts.pory"
SamanthaDontgotoCrater_Movement_1:
# 327 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 360 "data/maps/Route101/scripts.pory"
Route101OrphanJoel_Movement_0:
# 360 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 412 "data/maps/Route101/scripts.pory"
Route101OrphanJoel_Movement_1:
# 412 "data/maps/Route101/scripts.pory"
	walk_in_place_down
	step_end

# 534 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_0:
# 534 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 538 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_1:
# 538 "data/maps/Route101/scripts.pory"
	emote_question_mark
# 538 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 554 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_2:
# 554 "data/maps/Route101/scripts.pory"
	walk_right
# 554 "data/maps/Route101/scripts.pory"
	walk_right
# 554 "data/maps/Route101/scripts.pory"
	walk_up
# 554 "data/maps/Route101/scripts.pory"
	walk_up
# 554 "data/maps/Route101/scripts.pory"
	walk_up
# 554 "data/maps/Route101/scripts.pory"
	walk_right
# 554 "data/maps/Route101/scripts.pory"
	walk_right
# 554 "data/maps/Route101/scripts.pory"
	walk_right
# 554 "data/maps/Route101/scripts.pory"
	walk_right
# 554 "data/maps/Route101/scripts.pory"
	walk_right
# 554 "data/maps/Route101/scripts.pory"
	walk_right
# 554 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 561 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_3:
# 561 "data/maps/Route101/scripts.pory"
	walk_down
# 561 "data/maps/Route101/scripts.pory"
	walk_down
# 561 "data/maps/Route101/scripts.pory"
	walk_left
# 561 "data/maps/Route101/scripts.pory"
	walk_left
# 561 "data/maps/Route101/scripts.pory"
	walk_left
# 561 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 562 "data/maps/Route101/scripts.pory"
JoelandAnne101meeting_Movement_4:
# 562 "data/maps/Route101/scripts.pory"
	walk_down
# 562 "data/maps/Route101/scripts.pory"
	walk_down
# 562 "data/maps/Route101/scripts.pory"
	walk_down
# 562 "data/maps/Route101/scripts.pory"
	walk_left
# 562 "data/maps/Route101/scripts.pory"
	walk_left
# 562 "data/maps/Route101/scripts.pory"
	walk_left
# 562 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 655 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_0:
# 655 "data/maps/Route101/scripts.pory"
	jump_in_place_up
	step_end

# 657 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_1:
# 657 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 657 "data/maps/Route101/scripts.pory"
	walk_in_place_up
	step_end

# 658 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_2:
# 658 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 658 "data/maps/Route101/scripts.pory"
	walk_in_place_up
	step_end

# 676 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_3:
# 676 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 721 "data/maps/Route101/scripts.pory"
Route101RebelGruntBattle_Movement_4:
# 721 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 721 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 721 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 721 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 721 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 721 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 721 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 721 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 772 "data/maps/Route101/scripts.pory"
Pokemonlickswound_Movement_0:
# 772 "data/maps/Route101/scripts.pory"
	walk_in_place_left
# 772 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

Route101Ziggy_Text_0:
# 252 "data/maps/Route101/scripts.pory"
	.string "Zig-ziiig!$"

Route101OrphanJoelApproach0_Text_0:
# 265 "data/maps/Route101/scripts.pory"
	.string "Hey, stop!$"

SamanthaDontgotoCrater_Text_0:
# 318 "data/maps/Route101/scripts.pory"
	.string "O-oh, {PLAYER}... that way is the...\n"
	.string "{COLOR GREEN}Great Crater{COLOR DARK_GRAY}, isn't it?$"

SamanthaDontgotoCrater_Text_1:
# 320 "data/maps/Route101/scripts.pory"
	.string "I know they sell donuts there, but... I\n"
	.string "don't like them much.\p"
	.string "Can we go to {COLOR GREEN}Oldale{COLOR DARK_GRAY}'s vending machine\n"
	.string "instead?$"

SamanthaDontgotoCrater_Text_2:
# 323 "data/maps/Route101/scripts.pory"
	.string "W-we can go back to the Mausoleum now...\n"
	.string "I-I don't want to take more of your\l"
	.string "time...!$"

Route101OrphanJoel_Text_0:
# 343 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Nom-nom-nom...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Route101OrphanJoel_Text_1:
# 349 "data/maps/Route101/scripts.pory"
	.string "Hey {PLAYER}! And strange lady! Where\n"
	.string "are you two going?$"

Route101OrphanJoel_Text_2:
# 353 "data/maps/Route101/scripts.pory"
	.string "S-... strange lady...?$"

Route101OrphanJoel_Text_3:
# 356 "data/maps/Route101/scripts.pory"
	.string "W-well, we went out to get food at\n"
	.string "Oldale...$"

Route101OrphanJoel_Text_4:
# 359 "data/maps/Route101/scripts.pory"
	.string "Food? I've got some Oran berries here if\n"
	.string "you'd like!$"

Route101OrphanJoel_Text_5:
# 365 "data/maps/Route101/scripts.pory"
	.string "Don't be silly, Joel! They're going on a\n"
	.string "date to a nice place!$"

Route101OrphanJoel_Text_6:
# 369 "data/maps/Route101/scripts.pory"
	.string "D-date!? N-no, it's not like that...!$"

Route101OrphanJoel_Text_7:
# 374 "data/maps/Route101/scripts.pory"
	.string "Don't be silly, Joel! They're on a girls'\n"
	.string "day out!\p"
	.string "So they're going to a nice place to eat\n"
	.string "yummy food!$"

Route101OrphanJoel_Text_8:
# 379 "data/maps/Route101/scripts.pory"
	.string "N-no, it's not like t-...$"

Route101OrphanJoel_Text_9:
# 382 "data/maps/Route101/scripts.pory"
	.string "Really? Well, more for me!$"

Route101OrphanJoel_Text_10:
# 389 "data/maps/Route101/scripts.pory"
	.string "Hehe... well, have fun! I'm rooting for\n"
	.string "you two.$"

Route101OrphanJoel_Text_11:
# 393 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW WHITE}Sigh...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Boys, am I right?$"

Route101OrphanJoel_Text_12:
# 409 "data/maps/Route101/scripts.pory"
	.string "That's a lot of snacks you got! Can I\n"
	.string "have some?$"

Route101OrphanJoel_Text_13:
# 411 "data/maps/Route101/scripts.pory"
	.string "O-of course... here!$"

Route101OrphanJoel_Text_14:
# 417 "data/maps/Route101/scripts.pory"
	.string "Hmm... they're alright! But I still prefer\n"
	.string "berries.$"

Route101OrphanJoel_Text_15:
# 434 "data/maps/Route101/scripts.pory"
	.string "Food? I've got some Oran berries if\n"
	.string "you'd like!$"

Route101OrphanJoel_Text_16:
# 436 "data/maps/Route101/scripts.pory"
	.string "B-berries...? Y-you eat them raw? You\n"
	.string "don't get... s-sick...?$"

Route101OrphanJoel_Text_17:
# 438 "data/maps/Route101/scripts.pory"
	.string "I did at first, but I got used to them.\n"
	.string "Here, try them!$"

Route101OrphanJoel_Text_18:
# 440 "data/maps/Route101/scripts.pory"
	.string "T-thank you, b-but I'll have... some more\n"
	.string "p-processed food...$"

Route101OrphanJoel_Text_19:
# 460 "data/maps/Route101/scripts.pory"
	.string "You can't go into my Secret Shelter!$"

Route101OrphanJoel_Text_20:
# 465 "data/maps/Route101/scripts.pory"
	.string "I'm Joel. See that tent over there? It's\n"
	.string "my Secret Shelter.$"

Route101OrphanJoel_Text_21:
# 468 "data/maps/Route101/scripts.pory"
	.string "Many people lived in weird places during\n"
	.string "the war, to hide from the bad guys.\p"
	.string "Some still do it, if they don't have\n"
	.string "anywhere else to go.\p"
	.string "You look a bit like them, so you can have\n"
	.string "this.$"

Route101OrphanJoel_Text_22:
# 474 "data/maps/Route101/scripts.pory"
	.string "If you teach Secret Power to a Pokémon,\n"
	.string "you can make Secret Shelters in all\l"
	.string "sorts of places.\p"
	.string "Some have unique things about them...\n"
	.string "but I won't tell you about mine!$"

Route101OrphanJoel_Text_23:
# 481 "data/maps/Route101/scripts.pory"
	.string "Have you made a Secret Shelter yet?\p"
	.string "I guess you can visit mine, if you need\n"
	.string "ideas for yours...\p"
	.string "But don't touch anything!$"

JoelandAnne101meeting_Text_0:
# 505 "data/maps/Route101/scripts.pory"
	.string "Hehe... you look good together!$"

JoelandAnne101meeting_Text_1:
# 513 "data/maps/Route101/scripts.pory"
	.string "Please invite me to the girls' day next\n"
	.string "time! Pleeeease!$"

JoelandAnne101meeting_Text_2:
# 526 "data/maps/Route101/scripts.pory"
	.string "So... you are moving?$"

JoelandAnne101meeting_Text_3:
# 529 "data/maps/Route101/scripts.pory"
	.string "Zig-zig?$"

JoelandAnne101meeting_Text_4:
# 532 "data/maps/Route101/scripts.pory"
	.string "Yes... I'm sorry Joel... mom has packed\n"
	.string "everything up.\p"
	.string "I think I'll have to go... but I'll come\n"
	.string "visit soon!\p"
	.string "Then you can teach me all about Secret\n"
	.string "Shelters.$"

JoelandAnne101meeting_Text_5:
# 536 "data/maps/Route101/scripts.pory"
	.string "O-oh, that's okay...! In fact, you don't\n"
	.string "need to come back at all!$"

JoelandAnne101meeting_Text_6:
# 540 "data/maps/Route101/scripts.pory"
	.string "What? Why!?$"

JoelandAnne101meeting_Text_7:
# 543 "data/maps/Route101/scripts.pory"
	.string "Because... I'll go visit you instead!\p"
	.string "I was thinking of making new Secret\n"
	.string "Shelters anyway.\p"
	.string "I'm sure there's tons of cool places for\n"
	.string "them in New Rustboro.$"

JoelandAnne101meeting_Text_8:
# 547 "data/maps/Route101/scripts.pory"
	.string "Really!? You promise to come visit?$"

JoelandAnne101meeting_Text_9:
# 550 "data/maps/Route101/scripts.pory"
	.string "I do! Now get going, before your mom\n"
	.string "gets worried.$"

JoelandAnne101meeting_Text_10:
# 553 "data/maps/Route101/scripts.pory"
	.string "Okay! It's a promise. I'll be waiting!\p"
	.string "See you soon Joel!$"

JoelandAnne101meeting_Text_11:
# 557 "data/maps/Route101/scripts.pory"
	.string "...\p"
	.string "... let's go inside, Ziggy.$"

JoelandAnne101meeting_Text_12:
# 559 "data/maps/Route101/scripts.pory"
	.string "Ziiig...$"

Route101RebelApproach0_Text_0:
# 592 "data/maps/Route101/scripts.pory"
	.string "Hey there, kid!$"

Route101RebelGruntBattle_Text_0:
# 644 "data/maps/Route101/scripts.pory"
	.string "Wowie, that's a cute Safemon you got\n"
	.string "there. Bet it's worth a ton!$"

Route101RebelGruntBattle_Text_1:
# 646 "data/maps/Route101/scripts.pory"
	.string "Hand it over.$"

Route101RebelGruntBattle_Text_2:
# 647 "data/maps/Route101/scripts.pory"
	.string "Obey$"

Route101RebelGruntBattle_Text_3:
# 647 "data/maps/Route101/scripts.pory"
	.string "Refuse$"

Route101RebelGruntBattle_Text_4:
# 653 "data/maps/Route101/scripts.pory"
	.string "Hehe, you're smarter than you loo-...$"

Route101RebelGruntBattle_Text_5:
# 660 "data/maps/Route101/scripts.pory"
	.string "What the-? Looks like your Pokémon has\n"
	.string "more guts than you! Hahaha!\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_6:
# 666 "data/maps/Route101/scripts.pory"
	.string "Playing brave huh? You really don't look\n"
	.string "the type.\p"
	.string "Guess we'll have to do this the hard\n"
	.string "way!$"

Route101RebelGruntBattle_Text_7:
# 672 "data/maps/Route101/scripts.pory"
	.string "Grr... alright, that thing of yours is\n"
	.string "strong, for a lab rat.\p"
	.string "But you still look weak yourself!\n"
	.string "UOOOGYAA!$"

Route101RebelGruntBattle_Text_8:
# 679 "data/maps/Route101/scripts.pory"
	.string "The rebel swings his bat to hit\n"
	.string "{PLAYER}!$"

Route101RebelGruntBattle_Text_9:
# 680 "data/maps/Route101/scripts.pory"
	.string "Parry$"

Route101RebelGruntBattle_Text_10:
# 680 "data/maps/Route101/scripts.pory"
	.string "Dodge$"

Route101RebelGruntBattle_Text_11:
# 692 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} parries the bat with one of\n"
	.string "his crutches, and the rebel falls on his\l"
	.string "back.$"

Route101RebelGruntBattle_Text_12:
# 697 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} fails to block the bat with\n"
	.string "her arms. That must have hurted...$"

Route101RebelGruntBattle_Text_13:
# 700 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy girl, I'll give you that!$"

Route101RebelGruntBattle_Text_14:
# 707 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} is too slow to dodge the hit.\n"
	.string "That must have hurted...$"

Route101RebelGruntBattle_Text_15:
# 710 "data/maps/Route101/scripts.pory"
	.string "You're a sturdy guy, I'll give you that!$"

Route101RebelGruntBattle_Text_16:
# 714 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} manages to dodge the hit,\n"
	.string "and the rebel's lost momentum makes him\l"
	.string "fall on his back.$"

Route101RebelGruntBattle_Text_17:
# 719 "data/maps/Route101/scripts.pory"
	.string "D-damn it! They told me Littleroot\n"
	.string "hicks were easy prey!$"

Route101RebelGruntBattle_Text_18:
# 724 "data/maps/Route101/scripts.pory"
	.string "Screw this!$"

Route101RebelItem_Text_0:
# 745 "data/maps/Route101/scripts.pory"
	.string "It seems the rebel dropped this while\n"
	.string "fleeing...$"

Pokemonlickswound_Text_0:
# 774 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} approaches you slowly...$"

Pokemonlickswound_Text_1:
# 777 "data/maps/Route101/scripts.pory"
	.string "{STR_VAR_1} licks {PLAYER}'s\n"
	.string "wound from the hit just now.\p"
	.string "... {PLAYER}'s pain is somewhat\n"
	.string "soothed.$"

Route101JoelsTent_Text_0:
# 788 "data/maps/Route101/scripts.pory"
	.string "Despite the young age of its builder,\n"
	.string "the tent seems of sturdy make.$"

Orphan101_Outro::
# 494 "data/maps/Route101/scripts.pory"
	.string "... you still can't go into my Secret\n Shelter.$"

Rebel101_Outro::
# 753 "data/maps/Route101/scripts.pory"
	.string "Shit...$"
